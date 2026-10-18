#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60d700(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c16e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62d016(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62deaf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c0f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c12c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c5f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c94f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62ccf1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62cf9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62cfd2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62cffa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62c001:L62c001:{bud-=69;NFSU2_TR(0x62c001);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c004:{NFSU2_TR(0x62c004);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c006:{NFSU2_TR(0x62c006);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c00d:{NFSU2_TR(0x62c00d);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c011:{NFSU2_TR(0x62c011);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c014:{NFSU2_TR(0x62c014);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c018:{NFSU2_TR(0x62c018);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c01b:{NFSU2_TR(0x62c01b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c01d:{NFSU2_TR(0x62c01d);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c021:{NFSU2_TR(0x62c021);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c024:{NFSU2_TR(0x62c024);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c026:{NFSU2_TR(0x62c026);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c02a:{NFSU2_TR(0x62c02a);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c02d:{NFSU2_TR(0x62c02d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c02f:{NFSU2_TR(0x62c02f);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c036:{NFSU2_TR(0x62c036);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c03a:{NFSU2_TR(0x62c03a);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c03d:{NFSU2_TR(0x62c03d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c041:{NFSU2_TR(0x62c041);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c044:{NFSU2_TR(0x62c044);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c046:{NFSU2_TR(0x62c046);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c04a:{NFSU2_TR(0x62c04a);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c04d:{NFSU2_TR(0x62c04d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c04f:{NFSU2_TR(0x62c04f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c053:{NFSU2_TR(0x62c053);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c055:{NFSU2_TR(0x62c055);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c057:{NFSU2_TR(0x62c057);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c05e:{NFSU2_TR(0x62c05e);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62c065:{NFSU2_TR(0x62c065);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c069:{NFSU2_TR(0x62c069);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62c070:{NFSU2_TR(0x62c070);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c073:{NFSU2_TR(0x62c073);
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
B62c078:{NFSU2_TR(0x62c078);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c07c:{NFSU2_TR(0x62c07c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c07d:{NFSU2_TR(0x62c07d);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c080:{NFSU2_TR(0x62c080);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c081:{NFSU2_TR(0x62c081);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c083:{NFSU2_TR(0x62c083);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c087:{NFSU2_TR(0x62c087);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c08a:{NFSU2_TR(0x62c08a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c08c:{NFSU2_TR(0x62c08c);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c090:{NFSU2_TR(0x62c090);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c093:{NFSU2_TR(0x62c093);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c095:{NFSU2_TR(0x62c095);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c09c:{NFSU2_TR(0x62c09c);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0a0:{NFSU2_TR(0x62c0a0);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0a3:{NFSU2_TR(0x62c0a3);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0a7:{NFSU2_TR(0x62c0a7);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0aa:{NFSU2_TR(0x62c0aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c0ac:{NFSU2_TR(0x62c0ac);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0b0:{NFSU2_TR(0x62c0b0);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0b3:{NFSU2_TR(0x62c0b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c0b5:{NFSU2_TR(0x62c0b5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0b9:{NFSU2_TR(0x62c0b9);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0bc:{NFSU2_TR(0x62c0bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c0be:{NFSU2_TR(0x62c0be);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c0c5:{NFSU2_TR(0x62c0c5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0c9:{NFSU2_TR(0x62c0c9);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0cc:{NFSU2_TR(0x62c0cc);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0d0:{NFSU2_TR(0x62c0d0);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0d3:{NFSU2_TR(0x62c0d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c0d5:{NFSU2_TR(0x62c0d5);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0d9:{NFSU2_TR(0x62c0d9);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0dc:{NFSU2_TR(0x62c0dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c0de:{NFSU2_TR(0x62c0de);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c0e2:{NFSU2_TR(0x62c0e2);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c0e5:{NFSU2_TR(0x62c0e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c0e7:{NFSU2_TR(0x62c0e7);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c0ee:{NFSU2_TR(0x62c0ee);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62c0f3ull));
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
PN u32 blk_62c0f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62c0f3:L62c0f3:{bud-=14;NFSU2_TR(0x62c0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62c0f6:{NFSU2_TR(0x62c0f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62c0fd:{NFSU2_TR(0x62c0fd);
u8 U[4];
w4(U+0,u32(u32(u32(0xb38ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62c104:{NFSU2_TR(0x62c104);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c105:{NFSU2_TR(0x62c105);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c106:{NFSU2_TR(0x62c106);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62c10d:{NFSU2_TR(0x62c10d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c10e:{NFSU2_TR(0x62c10e);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62c115:{NFSU2_TR(0x62c115);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c11a:{NFSU2_TR(0x62c11a);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
}
B62c11f:{NFSU2_TR(0x62c11f);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x380ull))));
}
B62c125:{NFSU2_TR(0x62c125);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c126:{NFSU2_TR(0x62c126);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c127:{NFSU2_TR(0x62c127);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62c12cull));
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
PN u32 blk_62c12c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62c12c:L62c12c:{bud-=4;NFSU2_TR(0x62c12c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62c133:{NFSU2_TR(0x62c133);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
}
B62c136:{NFSU2_TR(0x62c136);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62c138:{NFSU2_TR(0x62c138);
if(r1(F+6)){{[[clang::musttail]] return blk_62c16e(ARGS);}}
}
B62c13a:L62c13a:{bud-=14;NFSU2_TR(0x62c13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62c13d:{NFSU2_TR(0x62c13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62c144:{NFSU2_TR(0x62c144);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B62c146:{NFSU2_TR(0x62c146);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c148:{NFSU2_TR(0x62c148);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c149:{NFSU2_TR(0x62c149);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62c150:{NFSU2_TR(0x62c150);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x380ull))));
}
B62c156:{NFSU2_TR(0x62c156);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c157:{NFSU2_TR(0x62c157);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62c15e:{NFSU2_TR(0x62c15e);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x80ull))));
}
B62c164:{NFSU2_TR(0x62c164);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c165:{NFSU2_TR(0x62c165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62c168:{NFSU2_TR(0x62c168);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c169:{NFSU2_TR(0x62c169);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62c16eull));
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
PN u32 blk_62c16e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62c16e:L62c16e:{bud-=10;NFSU2_TR(0x62c16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62c172:{NFSU2_TR(0x62c172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B62c174:{NFSU2_TR(0x62c174);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62c178:{NFSU2_TR(0x62c178);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62c17f:{NFSU2_TR(0x62c17f);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62c186:{NFSU2_TR(0x62c186);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b78ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B62c18d:{NFSU2_TR(0x62c18d);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62c194:{NFSU2_TR(0x62c194);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62c19b:{NFSU2_TR(0x62c19b);
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
B62c19d:{NFSU2_TR(0x62c19d);
if(r1(F+6)){{[[clang::musttail]] return blk_62deaf(ARGS);}}
}
B62c1a3:L62c1a3:{bud-=197;NFSU2_TR(0x62c1a3);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c1aa:{NFSU2_TR(0x62c1aa);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c1b1:{NFSU2_TR(0x62c1b1);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c1b8:{NFSU2_TR(0x62c1b8);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c1bf:{NFSU2_TR(0x62c1bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c1c1:{NFSU2_TR(0x62c1c1);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c1c8:{NFSU2_TR(0x62c1c8);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c1cf:{NFSU2_TR(0x62c1cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c1d1:{NFSU2_TR(0x62c1d1);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c1d8:{NFSU2_TR(0x62c1d8);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c1df:{NFSU2_TR(0x62c1df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c1e1:{NFSU2_TR(0x62c1e1);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c1e5:{NFSU2_TR(0x62c1e5);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c1ec:{NFSU2_TR(0x62c1ec);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c1f3:{NFSU2_TR(0x62c1f3);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c1fa:{NFSU2_TR(0x62c1fa);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c201:{NFSU2_TR(0x62c201);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c203:{NFSU2_TR(0x62c203);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c20a:{NFSU2_TR(0x62c20a);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c211:{NFSU2_TR(0x62c211);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c213:{NFSU2_TR(0x62c213);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c21a:{NFSU2_TR(0x62c21a);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c221:{NFSU2_TR(0x62c221);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c223:{NFSU2_TR(0x62c223);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c227:{NFSU2_TR(0x62c227);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c22e:{NFSU2_TR(0x62c22e);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c235:{NFSU2_TR(0x62c235);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c23c:{NFSU2_TR(0x62c23c);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c243:{NFSU2_TR(0x62c243);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c245:{NFSU2_TR(0x62c245);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c24c:{NFSU2_TR(0x62c24c);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c253:{NFSU2_TR(0x62c253);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c255:{NFSU2_TR(0x62c255);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c25c:{NFSU2_TR(0x62c25c);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c263:{NFSU2_TR(0x62c263);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c265:{NFSU2_TR(0x62c265);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c269:{NFSU2_TR(0x62c269);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c270:{NFSU2_TR(0x62c270);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c277:{NFSU2_TR(0x62c277);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c27e:{NFSU2_TR(0x62c27e);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c285:{NFSU2_TR(0x62c285);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c287:{NFSU2_TR(0x62c287);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c28e:{NFSU2_TR(0x62c28e);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c295:{NFSU2_TR(0x62c295);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c297:{NFSU2_TR(0x62c297);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c29e:{NFSU2_TR(0x62c29e);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c2a5:{NFSU2_TR(0x62c2a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c2a7:{NFSU2_TR(0x62c2a7);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c2ab:{NFSU2_TR(0x62c2ab);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c2b2:{NFSU2_TR(0x62c2b2);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c2b9:{NFSU2_TR(0x62c2b9);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c2c0:{NFSU2_TR(0x62c2c0);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c2c7:{NFSU2_TR(0x62c2c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c2c9:{NFSU2_TR(0x62c2c9);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c2d0:{NFSU2_TR(0x62c2d0);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c2d7:{NFSU2_TR(0x62c2d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c2d9:{NFSU2_TR(0x62c2d9);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c2e0:{NFSU2_TR(0x62c2e0);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c2e7:{NFSU2_TR(0x62c2e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c2e9:{NFSU2_TR(0x62c2e9);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c2f0:{NFSU2_TR(0x62c2f0);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c2f7:{NFSU2_TR(0x62c2f7);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c2fe:{NFSU2_TR(0x62c2fe);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c305:{NFSU2_TR(0x62c305);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c30c:{NFSU2_TR(0x62c30c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c30e:{NFSU2_TR(0x62c30e);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c315:{NFSU2_TR(0x62c315);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c31c:{NFSU2_TR(0x62c31c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c31e:{NFSU2_TR(0x62c31e);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c325:{NFSU2_TR(0x62c325);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c32c:{NFSU2_TR(0x62c32c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c32e:{NFSU2_TR(0x62c32e);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c335:{NFSU2_TR(0x62c335);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c33c:{NFSU2_TR(0x62c33c);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c343:{NFSU2_TR(0x62c343);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c34a:{NFSU2_TR(0x62c34a);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c351:{NFSU2_TR(0x62c351);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c353:{NFSU2_TR(0x62c353);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c35a:{NFSU2_TR(0x62c35a);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c361:{NFSU2_TR(0x62c361);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c363:{NFSU2_TR(0x62c363);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c36a:{NFSU2_TR(0x62c36a);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c371:{NFSU2_TR(0x62c371);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c373:{NFSU2_TR(0x62c373);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c37a:{NFSU2_TR(0x62c37a);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c381:{NFSU2_TR(0x62c381);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c388:{NFSU2_TR(0x62c388);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c38f:{NFSU2_TR(0x62c38f);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c396:{NFSU2_TR(0x62c396);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c398:{NFSU2_TR(0x62c398);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c39f:{NFSU2_TR(0x62c39f);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c3a6:{NFSU2_TR(0x62c3a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c3a8:{NFSU2_TR(0x62c3a8);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c3af:{NFSU2_TR(0x62c3af);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c3b6:{NFSU2_TR(0x62c3b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c3b8:{NFSU2_TR(0x62c3b8);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c3bf:{NFSU2_TR(0x62c3bf);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c3c6:{NFSU2_TR(0x62c3c6);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c3cd:{NFSU2_TR(0x62c3cd);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c3d4:{NFSU2_TR(0x62c3d4);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c3db:{NFSU2_TR(0x62c3db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c3dd:{NFSU2_TR(0x62c3dd);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c3e4:{NFSU2_TR(0x62c3e4);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c3eb:{NFSU2_TR(0x62c3eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c3ed:{NFSU2_TR(0x62c3ed);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c3f4:{NFSU2_TR(0x62c3f4);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c3fb:{NFSU2_TR(0x62c3fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c3fd:{NFSU2_TR(0x62c3fd);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c404:{NFSU2_TR(0x62c404);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c40b:{NFSU2_TR(0x62c40b);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c412:{NFSU2_TR(0x62c412);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c419:{NFSU2_TR(0x62c419);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c420:{NFSU2_TR(0x62c420);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c422:{NFSU2_TR(0x62c422);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c429:{NFSU2_TR(0x62c429);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c430:{NFSU2_TR(0x62c430);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c432:{NFSU2_TR(0x62c432);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c439:{NFSU2_TR(0x62c439);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c440:{NFSU2_TR(0x62c440);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c442:{NFSU2_TR(0x62c442);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c449:{NFSU2_TR(0x62c449);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c450:{NFSU2_TR(0x62c450);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c457:{NFSU2_TR(0x62c457);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c45e:{NFSU2_TR(0x62c45e);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c465:{NFSU2_TR(0x62c465);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c467:{NFSU2_TR(0x62c467);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c46e:{NFSU2_TR(0x62c46e);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c475:{NFSU2_TR(0x62c475);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c477:{NFSU2_TR(0x62c477);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c47e:{NFSU2_TR(0x62c47e);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c485:{NFSU2_TR(0x62c485);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c487:{NFSU2_TR(0x62c487);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c48e:{NFSU2_TR(0x62c48e);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c495:{NFSU2_TR(0x62c495);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c49c:{NFSU2_TR(0x62c49c);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c4a3:{NFSU2_TR(0x62c4a3);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c4aa:{NFSU2_TR(0x62c4aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c4ac:{NFSU2_TR(0x62c4ac);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c4b3:{NFSU2_TR(0x62c4b3);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c4ba:{NFSU2_TR(0x62c4ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c4bc:{NFSU2_TR(0x62c4bc);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c4c3:{NFSU2_TR(0x62c4c3);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c4ca:{NFSU2_TR(0x62c4ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c4cc:{NFSU2_TR(0x62c4cc);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c4d3:{NFSU2_TR(0x62c4d3);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c4da:{NFSU2_TR(0x62c4da);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c4e1:{NFSU2_TR(0x62c4e1);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c4e8:{NFSU2_TR(0x62c4e8);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c4ef:{NFSU2_TR(0x62c4ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c4f1:{NFSU2_TR(0x62c4f1);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c4f8:{NFSU2_TR(0x62c4f8);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c4ff:{NFSU2_TR(0x62c4ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c501:{NFSU2_TR(0x62c501);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c508:{NFSU2_TR(0x62c508);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c50f:{NFSU2_TR(0x62c50f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c511:{NFSU2_TR(0x62c511);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c518:{NFSU2_TR(0x62c518);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c51f:{NFSU2_TR(0x62c51f);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c526:{NFSU2_TR(0x62c526);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c52d:{NFSU2_TR(0x62c52d);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c534:{NFSU2_TR(0x62c534);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c536:{NFSU2_TR(0x62c536);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c53d:{NFSU2_TR(0x62c53d);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c544:{NFSU2_TR(0x62c544);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c546:{NFSU2_TR(0x62c546);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c54d:{NFSU2_TR(0x62c54d);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c554:{NFSU2_TR(0x62c554);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c556:{NFSU2_TR(0x62c556);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c55d:{NFSU2_TR(0x62c55d);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c564:{NFSU2_TR(0x62c564);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c56b:{NFSU2_TR(0x62c56b);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c572:{NFSU2_TR(0x62c572);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c579:{NFSU2_TR(0x62c579);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c57b:{NFSU2_TR(0x62c57b);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c582:{NFSU2_TR(0x62c582);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c589:{NFSU2_TR(0x62c589);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c58b:{NFSU2_TR(0x62c58b);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c592:{NFSU2_TR(0x62c592);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c599:{NFSU2_TR(0x62c599);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c59b:{NFSU2_TR(0x62c59b);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c5a2:{NFSU2_TR(0x62c5a2);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c5a9:{NFSU2_TR(0x62c5a9);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c5b0:{NFSU2_TR(0x62c5b0);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c5b7:{NFSU2_TR(0x62c5b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62c5bb:{NFSU2_TR(0x62c5bb);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c5c2:{NFSU2_TR(0x62c5c2);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c5c3:{NFSU2_TR(0x62c5c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62c5c7:{NFSU2_TR(0x62c5c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c5c8:{NFSU2_TR(0x62c5c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c5ca:{NFSU2_TR(0x62c5ca);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c5d1:{NFSU2_TR(0x62c5d1);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c5d8:{NFSU2_TR(0x62c5d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c5da:{NFSU2_TR(0x62c5da);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c5e1:{NFSU2_TR(0x62c5e1);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c5e8:{NFSU2_TR(0x62c5e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c5ea:{NFSU2_TR(0x62c5ea);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c5f1:{NFSU2_TR(0x62c5f1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62c5f6ull));
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
PN u32 blk_62c5f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62c5f6:L62c5f6:{bud-=197;NFSU2_TR(0x62c5f6);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c5fa:{NFSU2_TR(0x62c5fa);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c600:{NFSU2_TR(0x62c600);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c604:{NFSU2_TR(0x62c604);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c60a:{NFSU2_TR(0x62c60a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c60c:{NFSU2_TR(0x62c60c);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c610:{NFSU2_TR(0x62c610);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c616:{NFSU2_TR(0x62c616);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c618:{NFSU2_TR(0x62c618);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c61c:{NFSU2_TR(0x62c61c);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c622:{NFSU2_TR(0x62c622);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c624:{NFSU2_TR(0x62c624);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c628:{NFSU2_TR(0x62c628);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c62c:{NFSU2_TR(0x62c62c);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c632:{NFSU2_TR(0x62c632);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c636:{NFSU2_TR(0x62c636);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c63c:{NFSU2_TR(0x62c63c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c63e:{NFSU2_TR(0x62c63e);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c642:{NFSU2_TR(0x62c642);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c648:{NFSU2_TR(0x62c648);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c64a:{NFSU2_TR(0x62c64a);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c64e:{NFSU2_TR(0x62c64e);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c654:{NFSU2_TR(0x62c654);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c656:{NFSU2_TR(0x62c656);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c65a:{NFSU2_TR(0x62c65a);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c65e:{NFSU2_TR(0x62c65e);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c664:{NFSU2_TR(0x62c664);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c668:{NFSU2_TR(0x62c668);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c66e:{NFSU2_TR(0x62c66e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c670:{NFSU2_TR(0x62c670);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c674:{NFSU2_TR(0x62c674);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c67a:{NFSU2_TR(0x62c67a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c67c:{NFSU2_TR(0x62c67c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c680:{NFSU2_TR(0x62c680);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c686:{NFSU2_TR(0x62c686);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c688:{NFSU2_TR(0x62c688);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c68f:{NFSU2_TR(0x62c68f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c693:{NFSU2_TR(0x62c693);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c699:{NFSU2_TR(0x62c699);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c69d:{NFSU2_TR(0x62c69d);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c6a3:{NFSU2_TR(0x62c6a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c6a5:{NFSU2_TR(0x62c6a5);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c6a9:{NFSU2_TR(0x62c6a9);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c6af:{NFSU2_TR(0x62c6af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c6b1:{NFSU2_TR(0x62c6b1);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c6b5:{NFSU2_TR(0x62c6b5);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c6bb:{NFSU2_TR(0x62c6bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c6bd:{NFSU2_TR(0x62c6bd);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c6c4:{NFSU2_TR(0x62c6c4);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c6c8:{NFSU2_TR(0x62c6c8);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c6ce:{NFSU2_TR(0x62c6ce);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c6d2:{NFSU2_TR(0x62c6d2);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c6d8:{NFSU2_TR(0x62c6d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c6da:{NFSU2_TR(0x62c6da);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c6de:{NFSU2_TR(0x62c6de);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c6e4:{NFSU2_TR(0x62c6e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c6e6:{NFSU2_TR(0x62c6e6);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c6ea:{NFSU2_TR(0x62c6ea);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c6f0:{NFSU2_TR(0x62c6f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c6f2:{NFSU2_TR(0x62c6f2);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c6f9:{NFSU2_TR(0x62c6f9);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c6fd:{NFSU2_TR(0x62c6fd);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c703:{NFSU2_TR(0x62c703);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c707:{NFSU2_TR(0x62c707);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c70d:{NFSU2_TR(0x62c70d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c70f:{NFSU2_TR(0x62c70f);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c713:{NFSU2_TR(0x62c713);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c719:{NFSU2_TR(0x62c719);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c71b:{NFSU2_TR(0x62c71b);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c71f:{NFSU2_TR(0x62c71f);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c725:{NFSU2_TR(0x62c725);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c727:{NFSU2_TR(0x62c727);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c72e:{NFSU2_TR(0x62c72e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c732:{NFSU2_TR(0x62c732);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c738:{NFSU2_TR(0x62c738);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c73c:{NFSU2_TR(0x62c73c);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c742:{NFSU2_TR(0x62c742);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c744:{NFSU2_TR(0x62c744);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c748:{NFSU2_TR(0x62c748);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c74e:{NFSU2_TR(0x62c74e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c750:{NFSU2_TR(0x62c750);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c754:{NFSU2_TR(0x62c754);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c75a:{NFSU2_TR(0x62c75a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c75c:{NFSU2_TR(0x62c75c);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c763:{NFSU2_TR(0x62c763);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c767:{NFSU2_TR(0x62c767);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c76d:{NFSU2_TR(0x62c76d);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c771:{NFSU2_TR(0x62c771);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c777:{NFSU2_TR(0x62c777);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c779:{NFSU2_TR(0x62c779);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c77d:{NFSU2_TR(0x62c77d);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c783:{NFSU2_TR(0x62c783);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c785:{NFSU2_TR(0x62c785);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c789:{NFSU2_TR(0x62c789);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c78f:{NFSU2_TR(0x62c78f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c791:{NFSU2_TR(0x62c791);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c798:{NFSU2_TR(0x62c798);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c79c:{NFSU2_TR(0x62c79c);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7a2:{NFSU2_TR(0x62c7a2);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c7a6:{NFSU2_TR(0x62c7a6);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7ac:{NFSU2_TR(0x62c7ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c7ae:{NFSU2_TR(0x62c7ae);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c7b2:{NFSU2_TR(0x62c7b2);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7b8:{NFSU2_TR(0x62c7b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c7ba:{NFSU2_TR(0x62c7ba);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c7be:{NFSU2_TR(0x62c7be);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7c4:{NFSU2_TR(0x62c7c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c7c6:{NFSU2_TR(0x62c7c6);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c7cd:{NFSU2_TR(0x62c7cd);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c7d1:{NFSU2_TR(0x62c7d1);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7d7:{NFSU2_TR(0x62c7d7);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c7db:{NFSU2_TR(0x62c7db);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7e1:{NFSU2_TR(0x62c7e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c7e3:{NFSU2_TR(0x62c7e3);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c7e7:{NFSU2_TR(0x62c7e7);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7ed:{NFSU2_TR(0x62c7ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c7ef:{NFSU2_TR(0x62c7ef);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c7f3:{NFSU2_TR(0x62c7f3);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c7f9:{NFSU2_TR(0x62c7f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c7fb:{NFSU2_TR(0x62c7fb);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c802:{NFSU2_TR(0x62c802);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c806:{NFSU2_TR(0x62c806);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c80c:{NFSU2_TR(0x62c80c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c810:{NFSU2_TR(0x62c810);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c816:{NFSU2_TR(0x62c816);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c818:{NFSU2_TR(0x62c818);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c81c:{NFSU2_TR(0x62c81c);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c822:{NFSU2_TR(0x62c822);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c824:{NFSU2_TR(0x62c824);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c828:{NFSU2_TR(0x62c828);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c82e:{NFSU2_TR(0x62c82e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c830:{NFSU2_TR(0x62c830);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c837:{NFSU2_TR(0x62c837);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c83b:{NFSU2_TR(0x62c83b);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c841:{NFSU2_TR(0x62c841);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c845:{NFSU2_TR(0x62c845);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c84b:{NFSU2_TR(0x62c84b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c84d:{NFSU2_TR(0x62c84d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c851:{NFSU2_TR(0x62c851);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c857:{NFSU2_TR(0x62c857);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c859:{NFSU2_TR(0x62c859);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c85d:{NFSU2_TR(0x62c85d);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c863:{NFSU2_TR(0x62c863);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c865:{NFSU2_TR(0x62c865);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c86c:{NFSU2_TR(0x62c86c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c870:{NFSU2_TR(0x62c870);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c876:{NFSU2_TR(0x62c876);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c87a:{NFSU2_TR(0x62c87a);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c880:{NFSU2_TR(0x62c880);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c882:{NFSU2_TR(0x62c882);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c886:{NFSU2_TR(0x62c886);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c88c:{NFSU2_TR(0x62c88c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c88e:{NFSU2_TR(0x62c88e);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c892:{NFSU2_TR(0x62c892);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c898:{NFSU2_TR(0x62c898);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c89a:{NFSU2_TR(0x62c89a);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c8a1:{NFSU2_TR(0x62c8a1);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c8a5:{NFSU2_TR(0x62c8a5);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c8ab:{NFSU2_TR(0x62c8ab);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c8af:{NFSU2_TR(0x62c8af);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c8b5:{NFSU2_TR(0x62c8b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c8b7:{NFSU2_TR(0x62c8b7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c8bb:{NFSU2_TR(0x62c8bb);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c8c1:{NFSU2_TR(0x62c8c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c8c3:{NFSU2_TR(0x62c8c3);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c8c7:{NFSU2_TR(0x62c8c7);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c8cd:{NFSU2_TR(0x62c8cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c8cf:{NFSU2_TR(0x62c8cf);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c8d6:{NFSU2_TR(0x62c8d6);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c8da:{NFSU2_TR(0x62c8da);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c8e0:{NFSU2_TR(0x62c8e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62c8e4:{NFSU2_TR(0x62c8e4);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c8e8:{NFSU2_TR(0x62c8e8);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c8e9:{NFSU2_TR(0x62c8e9);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c8ef:{NFSU2_TR(0x62c8ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62c8f3:{NFSU2_TR(0x62c8f3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62c8f4:{NFSU2_TR(0x62c8f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c8f6:{NFSU2_TR(0x62c8f6);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c8fa:{NFSU2_TR(0x62c8fa);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c900:{NFSU2_TR(0x62c900);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c902:{NFSU2_TR(0x62c902);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c906:{NFSU2_TR(0x62c906);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c90c:{NFSU2_TR(0x62c90c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c90e:{NFSU2_TR(0x62c90e);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c915:{NFSU2_TR(0x62c915);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c919:{NFSU2_TR(0x62c919);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c91f:{NFSU2_TR(0x62c91f);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c923:{NFSU2_TR(0x62c923);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c929:{NFSU2_TR(0x62c929);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c92b:{NFSU2_TR(0x62c92b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c92f:{NFSU2_TR(0x62c92f);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c935:{NFSU2_TR(0x62c935);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c937:{NFSU2_TR(0x62c937);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c93b:{NFSU2_TR(0x62c93b);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c941:{NFSU2_TR(0x62c941);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c943:{NFSU2_TR(0x62c943);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c94a:{NFSU2_TR(0x62c94a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62c94full));
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
PN u32 blk_62c94f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62c94f:L62c94f:{bud-=197;NFSU2_TR(0x62c94f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c953:{NFSU2_TR(0x62c953);
{u32 ea_=u32(r4(G+16)+u32(1200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c95a:{NFSU2_TR(0x62c95a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c95e:{NFSU2_TR(0x62c95e);
{u32 ea_=u32(r4(G+16)+u32(1216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c965:{NFSU2_TR(0x62c965);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c967:{NFSU2_TR(0x62c967);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c96b:{NFSU2_TR(0x62c96b);
{u32 ea_=u32(r4(G+16)+u32(1232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c972:{NFSU2_TR(0x62c972);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c974:{NFSU2_TR(0x62c974);
{u32 ea_=u32(r4(G+16)+u32(1184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c97b:{NFSU2_TR(0x62c97b);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c97f:{NFSU2_TR(0x62c97f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c981:{NFSU2_TR(0x62c981);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c988:{NFSU2_TR(0x62c988);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c98c:{NFSU2_TR(0x62c98c);
{u32 ea_=u32(r4(G+16)+u32(1204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c993:{NFSU2_TR(0x62c993);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c997:{NFSU2_TR(0x62c997);
{u32 ea_=u32(r4(G+16)+u32(1220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c99e:{NFSU2_TR(0x62c99e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c9a0:{NFSU2_TR(0x62c9a0);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c9a4:{NFSU2_TR(0x62c9a4);
{u32 ea_=u32(r4(G+16)+u32(1236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c9ab:{NFSU2_TR(0x62c9ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c9ad:{NFSU2_TR(0x62c9ad);
{u32 ea_=u32(r4(G+16)+u32(1188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c9b4:{NFSU2_TR(0x62c9b4);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c9b8:{NFSU2_TR(0x62c9b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c9ba:{NFSU2_TR(0x62c9ba);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c9c1:{NFSU2_TR(0x62c9c1);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c9c5:{NFSU2_TR(0x62c9c5);
{u32 ea_=u32(r4(G+16)+u32(1208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c9cc:{NFSU2_TR(0x62c9cc);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c9d0:{NFSU2_TR(0x62c9d0);
{u32 ea_=u32(r4(G+16)+u32(1224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c9d7:{NFSU2_TR(0x62c9d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c9d9:{NFSU2_TR(0x62c9d9);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c9dd:{NFSU2_TR(0x62c9dd);
{u32 ea_=u32(r4(G+16)+u32(1240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c9e4:{NFSU2_TR(0x62c9e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c9e6:{NFSU2_TR(0x62c9e6);
{u32 ea_=u32(r4(G+16)+u32(1192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c9ed:{NFSU2_TR(0x62c9ed);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62c9f1:{NFSU2_TR(0x62c9f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62c9f3:{NFSU2_TR(0x62c9f3);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62c9fa:{NFSU2_TR(0x62c9fa);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62c9fe:{NFSU2_TR(0x62c9fe);
{u32 ea_=u32(r4(G+16)+u32(1212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca05:{NFSU2_TR(0x62ca05);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca09:{NFSU2_TR(0x62ca09);
{u32 ea_=u32(r4(G+16)+u32(1228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca10:{NFSU2_TR(0x62ca10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca12:{NFSU2_TR(0x62ca12);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca16:{NFSU2_TR(0x62ca16);
{u32 ea_=u32(r4(G+16)+u32(1244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca1d:{NFSU2_TR(0x62ca1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca1f:{NFSU2_TR(0x62ca1f);
{u32 ea_=u32(r4(G+16)+u32(1196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca26:{NFSU2_TR(0x62ca26);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca2a:{NFSU2_TR(0x62ca2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca2c:{NFSU2_TR(0x62ca2c);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ca33:{NFSU2_TR(0x62ca33);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca37:{NFSU2_TR(0x62ca37);
{u32 ea_=u32(r4(G+16)+u32(1200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca3e:{NFSU2_TR(0x62ca3e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca42:{NFSU2_TR(0x62ca42);
{u32 ea_=u32(r4(G+16)+u32(1184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca49:{NFSU2_TR(0x62ca49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca4b:{NFSU2_TR(0x62ca4b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca4f:{NFSU2_TR(0x62ca4f);
{u32 ea_=u32(r4(G+16)+u32(1216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca56:{NFSU2_TR(0x62ca56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca58:{NFSU2_TR(0x62ca58);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca5c:{NFSU2_TR(0x62ca5c);
{u32 ea_=u32(r4(G+16)+u32(1232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca63:{NFSU2_TR(0x62ca63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca65:{NFSU2_TR(0x62ca65);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ca6c:{NFSU2_TR(0x62ca6c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca70:{NFSU2_TR(0x62ca70);
{u32 ea_=u32(r4(G+16)+u32(1188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca77:{NFSU2_TR(0x62ca77);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca7b:{NFSU2_TR(0x62ca7b);
{u32 ea_=u32(r4(G+16)+u32(1204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca82:{NFSU2_TR(0x62ca82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca84:{NFSU2_TR(0x62ca84);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca88:{NFSU2_TR(0x62ca88);
{u32 ea_=u32(r4(G+16)+u32(1220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca8f:{NFSU2_TR(0x62ca8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca91:{NFSU2_TR(0x62ca91);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ca95:{NFSU2_TR(0x62ca95);
{u32 ea_=u32(r4(G+16)+u32(1236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ca9c:{NFSU2_TR(0x62ca9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ca9e:{NFSU2_TR(0x62ca9e);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62caa5:{NFSU2_TR(0x62caa5);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62caa9:{NFSU2_TR(0x62caa9);
{u32 ea_=u32(r4(G+16)+u32(1192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cab0:{NFSU2_TR(0x62cab0);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cab4:{NFSU2_TR(0x62cab4);
{u32 ea_=u32(r4(G+16)+u32(1208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cabb:{NFSU2_TR(0x62cabb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cabd:{NFSU2_TR(0x62cabd);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cac1:{NFSU2_TR(0x62cac1);
{u32 ea_=u32(r4(G+16)+u32(1224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cac8:{NFSU2_TR(0x62cac8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62caca:{NFSU2_TR(0x62caca);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cace:{NFSU2_TR(0x62cace);
{u32 ea_=u32(r4(G+16)+u32(1240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cad5:{NFSU2_TR(0x62cad5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cad7:{NFSU2_TR(0x62cad7);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cade:{NFSU2_TR(0x62cade);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cae2:{NFSU2_TR(0x62cae2);
{u32 ea_=u32(r4(G+16)+u32(1196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cae9:{NFSU2_TR(0x62cae9);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62caed:{NFSU2_TR(0x62caed);
{u32 ea_=u32(r4(G+16)+u32(1212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62caf4:{NFSU2_TR(0x62caf4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62caf6:{NFSU2_TR(0x62caf6);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cafa:{NFSU2_TR(0x62cafa);
{u32 ea_=u32(r4(G+16)+u32(1228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb01:{NFSU2_TR(0x62cb01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb03:{NFSU2_TR(0x62cb03);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb07:{NFSU2_TR(0x62cb07);
{u32 ea_=u32(r4(G+16)+u32(1244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb0e:{NFSU2_TR(0x62cb0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb10:{NFSU2_TR(0x62cb10);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cb17:{NFSU2_TR(0x62cb17);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb1b:{NFSU2_TR(0x62cb1b);
{u32 ea_=u32(r4(G+16)+u32(1200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb22:{NFSU2_TR(0x62cb22);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb26:{NFSU2_TR(0x62cb26);
{u32 ea_=u32(r4(G+16)+u32(1184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb2d:{NFSU2_TR(0x62cb2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb2f:{NFSU2_TR(0x62cb2f);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb33:{NFSU2_TR(0x62cb33);
{u32 ea_=u32(r4(G+16)+u32(1216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb3a:{NFSU2_TR(0x62cb3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb3c:{NFSU2_TR(0x62cb3c);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb40:{NFSU2_TR(0x62cb40);
{u32 ea_=u32(r4(G+16)+u32(1232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb47:{NFSU2_TR(0x62cb47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb49:{NFSU2_TR(0x62cb49);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cb50:{NFSU2_TR(0x62cb50);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb54:{NFSU2_TR(0x62cb54);
{u32 ea_=u32(r4(G+16)+u32(1188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb5b:{NFSU2_TR(0x62cb5b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb5f:{NFSU2_TR(0x62cb5f);
{u32 ea_=u32(r4(G+16)+u32(1204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb66:{NFSU2_TR(0x62cb66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb68:{NFSU2_TR(0x62cb68);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb6c:{NFSU2_TR(0x62cb6c);
{u32 ea_=u32(r4(G+16)+u32(1220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb73:{NFSU2_TR(0x62cb73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb75:{NFSU2_TR(0x62cb75);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb79:{NFSU2_TR(0x62cb79);
{u32 ea_=u32(r4(G+16)+u32(1236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb80:{NFSU2_TR(0x62cb80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cb82:{NFSU2_TR(0x62cb82);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cb89:{NFSU2_TR(0x62cb89);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb8d:{NFSU2_TR(0x62cb8d);
{u32 ea_=u32(r4(G+16)+u32(1192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb94:{NFSU2_TR(0x62cb94);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cb98:{NFSU2_TR(0x62cb98);
{u32 ea_=u32(r4(G+16)+u32(1208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cb9f:{NFSU2_TR(0x62cb9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cba1:{NFSU2_TR(0x62cba1);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cba5:{NFSU2_TR(0x62cba5);
{u32 ea_=u32(r4(G+16)+u32(1224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cbac:{NFSU2_TR(0x62cbac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cbae:{NFSU2_TR(0x62cbae);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cbb2:{NFSU2_TR(0x62cbb2);
{u32 ea_=u32(r4(G+16)+u32(1240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cbb9:{NFSU2_TR(0x62cbb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cbbb:{NFSU2_TR(0x62cbbb);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cbc2:{NFSU2_TR(0x62cbc2);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cbc6:{NFSU2_TR(0x62cbc6);
{u32 ea_=u32(r4(G+16)+u32(1196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cbcd:{NFSU2_TR(0x62cbcd);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cbd1:{NFSU2_TR(0x62cbd1);
{u32 ea_=u32(r4(G+16)+u32(1212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cbd8:{NFSU2_TR(0x62cbd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cbda:{NFSU2_TR(0x62cbda);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cbde:{NFSU2_TR(0x62cbde);
{u32 ea_=u32(r4(G+16)+u32(1228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cbe5:{NFSU2_TR(0x62cbe5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cbe7:{NFSU2_TR(0x62cbe7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cbeb:{NFSU2_TR(0x62cbeb);
{u32 ea_=u32(r4(G+16)+u32(1244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cbf2:{NFSU2_TR(0x62cbf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cbf4:{NFSU2_TR(0x62cbf4);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cbfb:{NFSU2_TR(0x62cbfb);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cbff:{NFSU2_TR(0x62cbff);
{u32 ea_=u32(r4(G+16)+u32(1200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc06:{NFSU2_TR(0x62cc06);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc0a:{NFSU2_TR(0x62cc0a);
{u32 ea_=u32(r4(G+16)+u32(1184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc11:{NFSU2_TR(0x62cc11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc13:{NFSU2_TR(0x62cc13);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc17:{NFSU2_TR(0x62cc17);
{u32 ea_=u32(r4(G+16)+u32(1216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc1e:{NFSU2_TR(0x62cc1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc20:{NFSU2_TR(0x62cc20);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc24:{NFSU2_TR(0x62cc24);
{u32 ea_=u32(r4(G+16)+u32(1232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc2b:{NFSU2_TR(0x62cc2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc2d:{NFSU2_TR(0x62cc2d);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cc34:{NFSU2_TR(0x62cc34);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62cc3b:{NFSU2_TR(0x62cc3b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc3f:{NFSU2_TR(0x62cc3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cc40:{NFSU2_TR(0x62cc40);
{u32 ea_=u32(r4(G+16)+u32(1192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc47:{NFSU2_TR(0x62cc47);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62cc4b:{NFSU2_TR(0x62cc4b);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc4f:{NFSU2_TR(0x62cc4f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cc50:{NFSU2_TR(0x62cc50);
{u32 ea_=u32(r4(G+16)+u32(1212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc57:{NFSU2_TR(0x62cc57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc59:{NFSU2_TR(0x62cc59);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc5d:{NFSU2_TR(0x62cc5d);
{u32 ea_=u32(r4(G+16)+u32(1228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc64:{NFSU2_TR(0x62cc64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc66:{NFSU2_TR(0x62cc66);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc6a:{NFSU2_TR(0x62cc6a);
{u32 ea_=u32(r4(G+16)+u32(1244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc71:{NFSU2_TR(0x62cc71);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc73:{NFSU2_TR(0x62cc73);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cc7a:{NFSU2_TR(0x62cc7a);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc7e:{NFSU2_TR(0x62cc7e);
{u32 ea_=u32(r4(G+16)+u32(1200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc85:{NFSU2_TR(0x62cc85);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc89:{NFSU2_TR(0x62cc89);
{u32 ea_=u32(r4(G+16)+u32(1216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc90:{NFSU2_TR(0x62cc90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc92:{NFSU2_TR(0x62cc92);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cc96:{NFSU2_TR(0x62cc96);
{u32 ea_=u32(r4(G+16)+u32(1232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cc9d:{NFSU2_TR(0x62cc9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cc9f:{NFSU2_TR(0x62cc9f);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cca3:{NFSU2_TR(0x62cca3);
{u32 ea_=u32(r4(G+16)+u32(1248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ccaa:{NFSU2_TR(0x62ccaa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ccac:{NFSU2_TR(0x62ccac);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ccb3:{NFSU2_TR(0x62ccb3);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ccb7:{NFSU2_TR(0x62ccb7);
{u32 ea_=u32(r4(G+16)+u32(1204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ccbe:{NFSU2_TR(0x62ccbe);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ccc2:{NFSU2_TR(0x62ccc2);
{u32 ea_=u32(r4(G+16)+u32(1220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ccc9:{NFSU2_TR(0x62ccc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cccb:{NFSU2_TR(0x62cccb);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cccf:{NFSU2_TR(0x62cccf);
{u32 ea_=u32(r4(G+16)+u32(1236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ccd6:{NFSU2_TR(0x62ccd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ccd8:{NFSU2_TR(0x62ccd8);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ccdc:{NFSU2_TR(0x62ccdc);
{u32 ea_=u32(r4(G+16)+u32(1252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cce3:{NFSU2_TR(0x62cce3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cce5:{NFSU2_TR(0x62cce5);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ccec:{NFSU2_TR(0x62ccec);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62ccf1ull));
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
PN u32 blk_62ccf1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62ccf1:L62ccf1:{bud-=199;NFSU2_TR(0x62ccf1);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ccf5:{NFSU2_TR(0x62ccf5);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ccf8:{NFSU2_TR(0x62ccf8);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ccfc:{NFSU2_TR(0x62ccfc);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ccff:{NFSU2_TR(0x62ccff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd01:{NFSU2_TR(0x62cd01);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd05:{NFSU2_TR(0x62cd05);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd08:{NFSU2_TR(0x62cd08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd0a:{NFSU2_TR(0x62cd0a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd0e:{NFSU2_TR(0x62cd0e);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd10:{NFSU2_TR(0x62cd10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd12:{NFSU2_TR(0x62cd12);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cd19:{NFSU2_TR(0x62cd19);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd1d:{NFSU2_TR(0x62cd1d);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd20:{NFSU2_TR(0x62cd20);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd24:{NFSU2_TR(0x62cd24);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd27:{NFSU2_TR(0x62cd27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd29:{NFSU2_TR(0x62cd29);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd2d:{NFSU2_TR(0x62cd2d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd30:{NFSU2_TR(0x62cd30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd32:{NFSU2_TR(0x62cd32);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd36:{NFSU2_TR(0x62cd36);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd39:{NFSU2_TR(0x62cd39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd3b:{NFSU2_TR(0x62cd3b);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cd42:{NFSU2_TR(0x62cd42);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd46:{NFSU2_TR(0x62cd46);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd49:{NFSU2_TR(0x62cd49);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd4d:{NFSU2_TR(0x62cd4d);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd50:{NFSU2_TR(0x62cd50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd52:{NFSU2_TR(0x62cd52);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd56:{NFSU2_TR(0x62cd56);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd59:{NFSU2_TR(0x62cd59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd5b:{NFSU2_TR(0x62cd5b);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd5f:{NFSU2_TR(0x62cd5f);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd62:{NFSU2_TR(0x62cd62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd64:{NFSU2_TR(0x62cd64);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cd6b:{NFSU2_TR(0x62cd6b);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd6f:{NFSU2_TR(0x62cd6f);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd72:{NFSU2_TR(0x62cd72);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd76:{NFSU2_TR(0x62cd76);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd79:{NFSU2_TR(0x62cd79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd7b:{NFSU2_TR(0x62cd7b);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd7f:{NFSU2_TR(0x62cd7f);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd82:{NFSU2_TR(0x62cd82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd84:{NFSU2_TR(0x62cd84);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd88:{NFSU2_TR(0x62cd88);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd8b:{NFSU2_TR(0x62cd8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cd8d:{NFSU2_TR(0x62cd8d);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cd94:{NFSU2_TR(0x62cd94);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd98:{NFSU2_TR(0x62cd98);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cd9b:{NFSU2_TR(0x62cd9b);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cd9f:{NFSU2_TR(0x62cd9f);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cda2:{NFSU2_TR(0x62cda2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cda4:{NFSU2_TR(0x62cda4);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cda8:{NFSU2_TR(0x62cda8);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdab:{NFSU2_TR(0x62cdab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cdad:{NFSU2_TR(0x62cdad);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cdb1:{NFSU2_TR(0x62cdb1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdb3:{NFSU2_TR(0x62cdb3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cdb5:{NFSU2_TR(0x62cdb5);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cdbc:{NFSU2_TR(0x62cdbc);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cdc0:{NFSU2_TR(0x62cdc0);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdc3:{NFSU2_TR(0x62cdc3);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cdc7:{NFSU2_TR(0x62cdc7);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdca:{NFSU2_TR(0x62cdca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cdcc:{NFSU2_TR(0x62cdcc);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cdd0:{NFSU2_TR(0x62cdd0);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdd3:{NFSU2_TR(0x62cdd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cdd5:{NFSU2_TR(0x62cdd5);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cdd9:{NFSU2_TR(0x62cdd9);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cddc:{NFSU2_TR(0x62cddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cdde:{NFSU2_TR(0x62cdde);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cde5:{NFSU2_TR(0x62cde5);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cde9:{NFSU2_TR(0x62cde9);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdec:{NFSU2_TR(0x62cdec);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cdf0:{NFSU2_TR(0x62cdf0);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdf3:{NFSU2_TR(0x62cdf3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cdf5:{NFSU2_TR(0x62cdf5);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cdf9:{NFSU2_TR(0x62cdf9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cdfc:{NFSU2_TR(0x62cdfc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cdfe:{NFSU2_TR(0x62cdfe);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce02:{NFSU2_TR(0x62ce02);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce05:{NFSU2_TR(0x62ce05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce07:{NFSU2_TR(0x62ce07);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ce0e:{NFSU2_TR(0x62ce0e);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce12:{NFSU2_TR(0x62ce12);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce15:{NFSU2_TR(0x62ce15);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce19:{NFSU2_TR(0x62ce19);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce1c:{NFSU2_TR(0x62ce1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce1e:{NFSU2_TR(0x62ce1e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce22:{NFSU2_TR(0x62ce22);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce25:{NFSU2_TR(0x62ce25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce27:{NFSU2_TR(0x62ce27);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce2b:{NFSU2_TR(0x62ce2b);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce2e:{NFSU2_TR(0x62ce2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce30:{NFSU2_TR(0x62ce30);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ce37:{NFSU2_TR(0x62ce37);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce3b:{NFSU2_TR(0x62ce3b);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce3e:{NFSU2_TR(0x62ce3e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce42:{NFSU2_TR(0x62ce42);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce45:{NFSU2_TR(0x62ce45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce47:{NFSU2_TR(0x62ce47);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce4b:{NFSU2_TR(0x62ce4b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce4e:{NFSU2_TR(0x62ce4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce50:{NFSU2_TR(0x62ce50);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce54:{NFSU2_TR(0x62ce54);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce56:{NFSU2_TR(0x62ce56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce58:{NFSU2_TR(0x62ce58);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ce5f:{NFSU2_TR(0x62ce5f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce63:{NFSU2_TR(0x62ce63);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce66:{NFSU2_TR(0x62ce66);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce6a:{NFSU2_TR(0x62ce6a);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce6d:{NFSU2_TR(0x62ce6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce6f:{NFSU2_TR(0x62ce6f);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce73:{NFSU2_TR(0x62ce73);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce76:{NFSU2_TR(0x62ce76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce78:{NFSU2_TR(0x62ce78);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce7c:{NFSU2_TR(0x62ce7c);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce7f:{NFSU2_TR(0x62ce7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce81:{NFSU2_TR(0x62ce81);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ce88:{NFSU2_TR(0x62ce88);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce8c:{NFSU2_TR(0x62ce8c);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce8f:{NFSU2_TR(0x62ce8f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce93:{NFSU2_TR(0x62ce93);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce96:{NFSU2_TR(0x62ce96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ce98:{NFSU2_TR(0x62ce98);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ce9c:{NFSU2_TR(0x62ce9c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ce9f:{NFSU2_TR(0x62ce9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cea1:{NFSU2_TR(0x62cea1);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cea5:{NFSU2_TR(0x62cea5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cea8:{NFSU2_TR(0x62cea8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ceaa:{NFSU2_TR(0x62ceaa);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ceb1:{NFSU2_TR(0x62ceb1);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ceb5:{NFSU2_TR(0x62ceb5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ceb8:{NFSU2_TR(0x62ceb8);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cebc:{NFSU2_TR(0x62cebc);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cebf:{NFSU2_TR(0x62cebf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cec1:{NFSU2_TR(0x62cec1);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cec5:{NFSU2_TR(0x62cec5);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cec8:{NFSU2_TR(0x62cec8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ceca:{NFSU2_TR(0x62ceca);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cece:{NFSU2_TR(0x62cece);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ced1:{NFSU2_TR(0x62ced1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ced3:{NFSU2_TR(0x62ced3);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B62ceda:{NFSU2_TR(0x62ceda);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62cee1:{NFSU2_TR(0x62cee1);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cee8:{NFSU2_TR(0x62cee8);
u8 U[6];
w1(F+0,carry<u32>(r4(R+24),u32(0xc0ull)));
w1(F+11,scarry<u32>(r4(R+24),u32(0xc0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62ceee:{NFSU2_TR(0x62ceee);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cef2:{NFSU2_TR(0x62cef2);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cef3:{NFSU2_TR(0x62cef3);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cef6:{NFSU2_TR(0x62cef6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cef7:{NFSU2_TR(0x62cef7);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cefb:{NFSU2_TR(0x62cefb);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62cf02:{NFSU2_TR(0x62cf02);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf05:{NFSU2_TR(0x62cf05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf07:{NFSU2_TR(0x62cf07);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf0b:{NFSU2_TR(0x62cf0b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf0e:{NFSU2_TR(0x62cf0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf10:{NFSU2_TR(0x62cf10);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf14:{NFSU2_TR(0x62cf14);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf16:{NFSU2_TR(0x62cf16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf18:{NFSU2_TR(0x62cf18);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cf1f:{NFSU2_TR(0x62cf1f);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf23:{NFSU2_TR(0x62cf23);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf26:{NFSU2_TR(0x62cf26);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf2a:{NFSU2_TR(0x62cf2a);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf2d:{NFSU2_TR(0x62cf2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf2f:{NFSU2_TR(0x62cf2f);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf33:{NFSU2_TR(0x62cf33);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf36:{NFSU2_TR(0x62cf36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf38:{NFSU2_TR(0x62cf38);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf3c:{NFSU2_TR(0x62cf3c);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf3f:{NFSU2_TR(0x62cf3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf41:{NFSU2_TR(0x62cf41);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cf48:{NFSU2_TR(0x62cf48);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf4c:{NFSU2_TR(0x62cf4c);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf4f:{NFSU2_TR(0x62cf4f);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf53:{NFSU2_TR(0x62cf53);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf56:{NFSU2_TR(0x62cf56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf58:{NFSU2_TR(0x62cf58);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf5c:{NFSU2_TR(0x62cf5c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf5f:{NFSU2_TR(0x62cf5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf61:{NFSU2_TR(0x62cf61);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf65:{NFSU2_TR(0x62cf65);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf68:{NFSU2_TR(0x62cf68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf6a:{NFSU2_TR(0x62cf6a);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cf71:{NFSU2_TR(0x62cf71);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf75:{NFSU2_TR(0x62cf75);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf78:{NFSU2_TR(0x62cf78);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf7c:{NFSU2_TR(0x62cf7c);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf7f:{NFSU2_TR(0x62cf7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf81:{NFSU2_TR(0x62cf81);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf85:{NFSU2_TR(0x62cf85);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf88:{NFSU2_TR(0x62cf88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf8a:{NFSU2_TR(0x62cf8a);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62cf8e:{NFSU2_TR(0x62cf8e);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62cf91:{NFSU2_TR(0x62cf91);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62cf93:{NFSU2_TR(0x62cf93);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62cf9a:{NFSU2_TR(0x62cf9a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62cf9full));
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
PN u32 blk_62cf9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62cf9f:L62cf9f:{bud-=13;NFSU2_TR(0x62cf9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62cfa6:{NFSU2_TR(0x62cfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62cfa9:{NFSU2_TR(0x62cfa9);
u8 U[4];
w4(U+0,u32(u32(u32(0xb40ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62cfb0:{NFSU2_TR(0x62cfb0);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x540ull))));
}
B62cfb5:{NFSU2_TR(0x62cfb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cfb6:{NFSU2_TR(0x62cfb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62cfbd:{NFSU2_TR(0x62cfbd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cfbe:{NFSU2_TR(0x62cfbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62cfc5:{NFSU2_TR(0x62cfc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cfc6:{NFSU2_TR(0x62cfc6);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cfcb:{NFSU2_TR(0x62cfcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cfcc:{NFSU2_TR(0x62cfcc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cfcd:{NFSU2_TR(0x62cfcd);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62cfd2ull));
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
PN u32 blk_62cfd2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62cfd2:L62cfd2:{bud-=5;NFSU2_TR(0x62cfd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62cfd9:{NFSU2_TR(0x62cfd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B62cfdc:{NFSU2_TR(0x62cfdc);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x38ull))));
}
B62cfdf:{NFSU2_TR(0x62cfdf);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62cfe1:{NFSU2_TR(0x62cfe1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62d016(ARGS);}}
}
B62cfe3:L62cfe3:{bud-=2;NFSU2_TR(0x62cfe3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B62cfea:{NFSU2_TR(0x62cfea);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62d016(ARGS);}}
}
B62cfec:L62cfec:{bud-=4;NFSU2_TR(0x62cfec);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62cff3:{NFSU2_TR(0x62cff3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cff4:{NFSU2_TR(0x62cff4);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62cff5:{NFSU2_TR(0x62cff5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62cffaull));
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
PN u32 blk_62cffa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62cffa:L62cffa:{bud-=1;NFSU2_TR(0x62cffa);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
{EXIT(0x62d000u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_62c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x62c0f3:[[clang::musttail]] return blk_62c0f3(c,a4,a0,a1,bud);
case 0x62c12c:[[clang::musttail]] return blk_62c12c(c,a4,a0,a1,bud);
case 0x62c16e:[[clang::musttail]] return blk_62c16e(c,a4,a0,a1,bud);
case 0x62c5f6:[[clang::musttail]] return blk_62c5f6(c,a4,a0,a1,bud);
case 0x62c94f:[[clang::musttail]] return blk_62c94f(c,a4,a0,a1,bud);
case 0x62ccf1:[[clang::musttail]] return blk_62ccf1(c,a4,a0,a1,bud);
case 0x62cf9f:[[clang::musttail]] return blk_62cf9f(c,a4,a0,a1,bud);
case 0x62cfd2:[[clang::musttail]] return blk_62cfd2(c,a4,a0,a1,bud);
case 0x62cffa:[[clang::musttail]] return blk_62cffa(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_62c(Cpu& c){u8* R=c.regs.data();return ent_62c(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
