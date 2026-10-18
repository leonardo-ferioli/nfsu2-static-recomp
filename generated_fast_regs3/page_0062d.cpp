#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60d700(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_620600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62d016(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62d01d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62d04e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62deb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62dee8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62df10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62df3e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62df66(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6304c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62d4b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62d809(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62dbab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62de52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62de82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62dead(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62deaf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62decd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62def2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62df1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62df4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62dfd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62dfe3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62d000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62d000:L62d000:{bud-=4;NFSU2_TR(0x62d000);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62d003:{NFSU2_TR(0x62d003);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B62d005:{NFSU2_TR(0x62d005);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B62d008:{NFSU2_TR(0x62d008);
if(r1(F+2)){{[[clang::musttail]] return blk_62d016(ARGS);}}
}
B62d00a:L62d00a:{bud-=3;NFSU2_TR(0x62d00a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62d00e:{NFSU2_TR(0x62d00e);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1b6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62d014:{NFSU2_TR(0x62d014);
{[[clang::musttail]] return blk_62d01d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62d016(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62d016:L62d016:{bud-=1;NFSU2_TR(0x62d016);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_62d01d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62d01d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62d01d:L62d01d:{bud-=2;NFSU2_TR(0x62d01d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62d01f:{NFSU2_TR(0x62d01f);
if(r1(F+6)){{[[clang::musttail]] return blk_62d04e(ARGS);}}
}
B62d021:L62d021:{bud-=14;NFSU2_TR(0x62d021);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62d028:{NFSU2_TR(0x62d028);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62d02f:{NFSU2_TR(0x62d02f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+4))));
}
B62d031:{NFSU2_TR(0x62d031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62d034:{NFSU2_TR(0x62d034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d036:{NFSU2_TR(0x62d036);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+4))));
}
B62d038:{NFSU2_TR(0x62d038);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62d03c:{NFSU2_TR(0x62d03c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d03d:{NFSU2_TR(0x62d03d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62d044:{NFSU2_TR(0x62d044);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d045:{NFSU2_TR(0x62d045);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d046:{NFSU2_TR(0x62d046);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d047:{NFSU2_TR(0x62d047);
__builtin_memmove((G+4),(R+24),4);
}
B62d049:{NFSU2_TR(0x62d049);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62d04eull));
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
PN u32 blk_62d04e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62d04e:L62d04e:{bud-=3;NFSU2_TR(0x62d04e);
u8 U[5];
w4(U+0,u32(u32(u32(0xf3ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B62d055:{NFSU2_TR(0x62d055);
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
B62d057:{NFSU2_TR(0x62d057);
if(r1(F+6)){{[[clang::musttail]] return blk_62deb2(ARGS);}}
}
B62d05d:L62d05d:{bud-=197;NFSU2_TR(0x62d05d);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d064:{NFSU2_TR(0x62d064);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d06b:{NFSU2_TR(0x62d06b);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d072:{NFSU2_TR(0x62d072);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d079:{NFSU2_TR(0x62d079);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d07b:{NFSU2_TR(0x62d07b);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d082:{NFSU2_TR(0x62d082);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d089:{NFSU2_TR(0x62d089);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d08b:{NFSU2_TR(0x62d08b);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d092:{NFSU2_TR(0x62d092);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d099:{NFSU2_TR(0x62d099);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d09b:{NFSU2_TR(0x62d09b);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d09f:{NFSU2_TR(0x62d09f);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d0a6:{NFSU2_TR(0x62d0a6);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d0ad:{NFSU2_TR(0x62d0ad);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d0b4:{NFSU2_TR(0x62d0b4);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d0bb:{NFSU2_TR(0x62d0bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d0bd:{NFSU2_TR(0x62d0bd);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d0c4:{NFSU2_TR(0x62d0c4);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d0cb:{NFSU2_TR(0x62d0cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d0cd:{NFSU2_TR(0x62d0cd);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d0d4:{NFSU2_TR(0x62d0d4);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d0db:{NFSU2_TR(0x62d0db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d0dd:{NFSU2_TR(0x62d0dd);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d0e1:{NFSU2_TR(0x62d0e1);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d0e8:{NFSU2_TR(0x62d0e8);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d0ef:{NFSU2_TR(0x62d0ef);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d0f6:{NFSU2_TR(0x62d0f6);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d0fd:{NFSU2_TR(0x62d0fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d0ff:{NFSU2_TR(0x62d0ff);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d106:{NFSU2_TR(0x62d106);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d10d:{NFSU2_TR(0x62d10d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d10f:{NFSU2_TR(0x62d10f);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d116:{NFSU2_TR(0x62d116);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d11d:{NFSU2_TR(0x62d11d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d11f:{NFSU2_TR(0x62d11f);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d123:{NFSU2_TR(0x62d123);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d12a:{NFSU2_TR(0x62d12a);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d131:{NFSU2_TR(0x62d131);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d138:{NFSU2_TR(0x62d138);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d13f:{NFSU2_TR(0x62d13f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d141:{NFSU2_TR(0x62d141);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d148:{NFSU2_TR(0x62d148);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d14f:{NFSU2_TR(0x62d14f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d151:{NFSU2_TR(0x62d151);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d158:{NFSU2_TR(0x62d158);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d15f:{NFSU2_TR(0x62d15f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d161:{NFSU2_TR(0x62d161);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d165:{NFSU2_TR(0x62d165);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d16c:{NFSU2_TR(0x62d16c);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d173:{NFSU2_TR(0x62d173);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d17a:{NFSU2_TR(0x62d17a);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d181:{NFSU2_TR(0x62d181);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d183:{NFSU2_TR(0x62d183);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d18a:{NFSU2_TR(0x62d18a);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d191:{NFSU2_TR(0x62d191);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d193:{NFSU2_TR(0x62d193);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d19a:{NFSU2_TR(0x62d19a);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d1a1:{NFSU2_TR(0x62d1a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d1a3:{NFSU2_TR(0x62d1a3);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d1aa:{NFSU2_TR(0x62d1aa);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d1b1:{NFSU2_TR(0x62d1b1);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d1b8:{NFSU2_TR(0x62d1b8);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d1bf:{NFSU2_TR(0x62d1bf);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d1c6:{NFSU2_TR(0x62d1c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d1c8:{NFSU2_TR(0x62d1c8);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d1cf:{NFSU2_TR(0x62d1cf);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d1d6:{NFSU2_TR(0x62d1d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d1d8:{NFSU2_TR(0x62d1d8);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d1df:{NFSU2_TR(0x62d1df);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d1e6:{NFSU2_TR(0x62d1e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d1e8:{NFSU2_TR(0x62d1e8);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d1ef:{NFSU2_TR(0x62d1ef);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d1f6:{NFSU2_TR(0x62d1f6);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d1fd:{NFSU2_TR(0x62d1fd);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d204:{NFSU2_TR(0x62d204);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d20b:{NFSU2_TR(0x62d20b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d20d:{NFSU2_TR(0x62d20d);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d214:{NFSU2_TR(0x62d214);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d21b:{NFSU2_TR(0x62d21b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d21d:{NFSU2_TR(0x62d21d);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d224:{NFSU2_TR(0x62d224);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d22b:{NFSU2_TR(0x62d22b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d22d:{NFSU2_TR(0x62d22d);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d234:{NFSU2_TR(0x62d234);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d23b:{NFSU2_TR(0x62d23b);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d242:{NFSU2_TR(0x62d242);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d249:{NFSU2_TR(0x62d249);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d250:{NFSU2_TR(0x62d250);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d252:{NFSU2_TR(0x62d252);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d259:{NFSU2_TR(0x62d259);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d260:{NFSU2_TR(0x62d260);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d262:{NFSU2_TR(0x62d262);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d269:{NFSU2_TR(0x62d269);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d270:{NFSU2_TR(0x62d270);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d272:{NFSU2_TR(0x62d272);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d279:{NFSU2_TR(0x62d279);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d280:{NFSU2_TR(0x62d280);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d287:{NFSU2_TR(0x62d287);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d28e:{NFSU2_TR(0x62d28e);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d295:{NFSU2_TR(0x62d295);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d297:{NFSU2_TR(0x62d297);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d29e:{NFSU2_TR(0x62d29e);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d2a5:{NFSU2_TR(0x62d2a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d2a7:{NFSU2_TR(0x62d2a7);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d2ae:{NFSU2_TR(0x62d2ae);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d2b5:{NFSU2_TR(0x62d2b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d2b7:{NFSU2_TR(0x62d2b7);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d2be:{NFSU2_TR(0x62d2be);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d2c5:{NFSU2_TR(0x62d2c5);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d2cc:{NFSU2_TR(0x62d2cc);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d2d3:{NFSU2_TR(0x62d2d3);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d2da:{NFSU2_TR(0x62d2da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d2dc:{NFSU2_TR(0x62d2dc);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d2e3:{NFSU2_TR(0x62d2e3);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d2ea:{NFSU2_TR(0x62d2ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d2ec:{NFSU2_TR(0x62d2ec);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d2f3:{NFSU2_TR(0x62d2f3);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d2fa:{NFSU2_TR(0x62d2fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d2fc:{NFSU2_TR(0x62d2fc);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d303:{NFSU2_TR(0x62d303);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d30a:{NFSU2_TR(0x62d30a);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d311:{NFSU2_TR(0x62d311);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d318:{NFSU2_TR(0x62d318);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d31f:{NFSU2_TR(0x62d31f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d321:{NFSU2_TR(0x62d321);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d328:{NFSU2_TR(0x62d328);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d32f:{NFSU2_TR(0x62d32f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d331:{NFSU2_TR(0x62d331);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d338:{NFSU2_TR(0x62d338);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d33f:{NFSU2_TR(0x62d33f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d341:{NFSU2_TR(0x62d341);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d348:{NFSU2_TR(0x62d348);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d34f:{NFSU2_TR(0x62d34f);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d356:{NFSU2_TR(0x62d356);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d35d:{NFSU2_TR(0x62d35d);
{u32 ea_=u32(r4(G+16)+u32(744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d364:{NFSU2_TR(0x62d364);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d366:{NFSU2_TR(0x62d366);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d36d:{NFSU2_TR(0x62d36d);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d374:{NFSU2_TR(0x62d374);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d376:{NFSU2_TR(0x62d376);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d37d:{NFSU2_TR(0x62d37d);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d384:{NFSU2_TR(0x62d384);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d386:{NFSU2_TR(0x62d386);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d38d:{NFSU2_TR(0x62d38d);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d394:{NFSU2_TR(0x62d394);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d39b:{NFSU2_TR(0x62d39b);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d3a2:{NFSU2_TR(0x62d3a2);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d3a9:{NFSU2_TR(0x62d3a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d3ab:{NFSU2_TR(0x62d3ab);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d3b2:{NFSU2_TR(0x62d3b2);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d3b9:{NFSU2_TR(0x62d3b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d3bb:{NFSU2_TR(0x62d3bb);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d3c2:{NFSU2_TR(0x62d3c2);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d3c9:{NFSU2_TR(0x62d3c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d3cb:{NFSU2_TR(0x62d3cb);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d3d2:{NFSU2_TR(0x62d3d2);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d3d9:{NFSU2_TR(0x62d3d9);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d3e0:{NFSU2_TR(0x62d3e0);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d3e7:{NFSU2_TR(0x62d3e7);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d3ee:{NFSU2_TR(0x62d3ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d3f0:{NFSU2_TR(0x62d3f0);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d3f7:{NFSU2_TR(0x62d3f7);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d3fe:{NFSU2_TR(0x62d3fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d400:{NFSU2_TR(0x62d400);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d407:{NFSU2_TR(0x62d407);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d40e:{NFSU2_TR(0x62d40e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d410:{NFSU2_TR(0x62d410);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d417:{NFSU2_TR(0x62d417);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d41e:{NFSU2_TR(0x62d41e);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d425:{NFSU2_TR(0x62d425);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d42c:{NFSU2_TR(0x62d42c);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d433:{NFSU2_TR(0x62d433);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d435:{NFSU2_TR(0x62d435);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d43c:{NFSU2_TR(0x62d43c);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d443:{NFSU2_TR(0x62d443);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d445:{NFSU2_TR(0x62d445);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d44c:{NFSU2_TR(0x62d44c);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d453:{NFSU2_TR(0x62d453);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d455:{NFSU2_TR(0x62d455);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d45c:{NFSU2_TR(0x62d45c);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d463:{NFSU2_TR(0x62d463);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d46a:{NFSU2_TR(0x62d46a);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d471:{NFSU2_TR(0x62d471);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62d475:{NFSU2_TR(0x62d475);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d47c:{NFSU2_TR(0x62d47c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d47d:{NFSU2_TR(0x62d47d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62d481:{NFSU2_TR(0x62d481);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d482:{NFSU2_TR(0x62d482);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d484:{NFSU2_TR(0x62d484);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d48b:{NFSU2_TR(0x62d48b);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d492:{NFSU2_TR(0x62d492);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d494:{NFSU2_TR(0x62d494);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d49b:{NFSU2_TR(0x62d49b);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d4a2:{NFSU2_TR(0x62d4a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d4a4:{NFSU2_TR(0x62d4a4);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d4ab:{NFSU2_TR(0x62d4ab);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62d4b0ull));
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
PN u32 blk_62d4b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62d4b0:L62d4b0:{bud-=197;NFSU2_TR(0x62d4b0);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d4b4:{NFSU2_TR(0x62d4b4);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d4ba:{NFSU2_TR(0x62d4ba);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d4be:{NFSU2_TR(0x62d4be);
{u32 ea_=u32(r4(R+28)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d4c4:{NFSU2_TR(0x62d4c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d4c6:{NFSU2_TR(0x62d4c6);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d4ca:{NFSU2_TR(0x62d4ca);
{u32 ea_=u32(r4(R+28)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d4d0:{NFSU2_TR(0x62d4d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d4d2:{NFSU2_TR(0x62d4d2);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d4d6:{NFSU2_TR(0x62d4d6);
{u32 ea_=u32(r4(R+28)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d4dc:{NFSU2_TR(0x62d4dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d4de:{NFSU2_TR(0x62d4de);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d4e2:{NFSU2_TR(0x62d4e2);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d4e6:{NFSU2_TR(0x62d4e6);
{u32 ea_=u32(r4(R+28)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d4ec:{NFSU2_TR(0x62d4ec);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d4f0:{NFSU2_TR(0x62d4f0);
{u32 ea_=u32(r4(R+28)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d4f6:{NFSU2_TR(0x62d4f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d4f8:{NFSU2_TR(0x62d4f8);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d4fc:{NFSU2_TR(0x62d4fc);
{u32 ea_=u32(r4(R+28)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d502:{NFSU2_TR(0x62d502);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d504:{NFSU2_TR(0x62d504);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d508:{NFSU2_TR(0x62d508);
{u32 ea_=u32(r4(R+28)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d50e:{NFSU2_TR(0x62d50e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d510:{NFSU2_TR(0x62d510);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d514:{NFSU2_TR(0x62d514);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d518:{NFSU2_TR(0x62d518);
{u32 ea_=u32(r4(R+28)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d51e:{NFSU2_TR(0x62d51e);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d522:{NFSU2_TR(0x62d522);
{u32 ea_=u32(r4(R+28)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d528:{NFSU2_TR(0x62d528);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d52a:{NFSU2_TR(0x62d52a);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d52e:{NFSU2_TR(0x62d52e);
{u32 ea_=u32(r4(R+28)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d534:{NFSU2_TR(0x62d534);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d536:{NFSU2_TR(0x62d536);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d53a:{NFSU2_TR(0x62d53a);
{u32 ea_=u32(r4(R+28)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d540:{NFSU2_TR(0x62d540);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d542:{NFSU2_TR(0x62d542);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d549:{NFSU2_TR(0x62d549);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d54d:{NFSU2_TR(0x62d54d);
{u32 ea_=u32(r4(R+28)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d553:{NFSU2_TR(0x62d553);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d557:{NFSU2_TR(0x62d557);
{u32 ea_=u32(r4(R+28)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d55d:{NFSU2_TR(0x62d55d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d55f:{NFSU2_TR(0x62d55f);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d563:{NFSU2_TR(0x62d563);
{u32 ea_=u32(r4(R+28)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d569:{NFSU2_TR(0x62d569);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d56b:{NFSU2_TR(0x62d56b);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d56f:{NFSU2_TR(0x62d56f);
{u32 ea_=u32(r4(R+28)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d575:{NFSU2_TR(0x62d575);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d577:{NFSU2_TR(0x62d577);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d57e:{NFSU2_TR(0x62d57e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d582:{NFSU2_TR(0x62d582);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d588:{NFSU2_TR(0x62d588);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d58c:{NFSU2_TR(0x62d58c);
{u32 ea_=u32(r4(R+28)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d592:{NFSU2_TR(0x62d592);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d594:{NFSU2_TR(0x62d594);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d598:{NFSU2_TR(0x62d598);
{u32 ea_=u32(r4(R+28)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d59e:{NFSU2_TR(0x62d59e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d5a0:{NFSU2_TR(0x62d5a0);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d5a4:{NFSU2_TR(0x62d5a4);
{u32 ea_=u32(r4(R+28)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d5aa:{NFSU2_TR(0x62d5aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d5ac:{NFSU2_TR(0x62d5ac);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d5b3:{NFSU2_TR(0x62d5b3);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d5b7:{NFSU2_TR(0x62d5b7);
{u32 ea_=u32(r4(R+28)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d5bd:{NFSU2_TR(0x62d5bd);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d5c1:{NFSU2_TR(0x62d5c1);
{u32 ea_=u32(r4(R+28)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d5c7:{NFSU2_TR(0x62d5c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d5c9:{NFSU2_TR(0x62d5c9);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d5cd:{NFSU2_TR(0x62d5cd);
{u32 ea_=u32(r4(R+28)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d5d3:{NFSU2_TR(0x62d5d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d5d5:{NFSU2_TR(0x62d5d5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d5d9:{NFSU2_TR(0x62d5d9);
{u32 ea_=u32(r4(R+28)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d5df:{NFSU2_TR(0x62d5df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d5e1:{NFSU2_TR(0x62d5e1);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d5e8:{NFSU2_TR(0x62d5e8);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d5ec:{NFSU2_TR(0x62d5ec);
{u32 ea_=u32(r4(R+28)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d5f2:{NFSU2_TR(0x62d5f2);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d5f6:{NFSU2_TR(0x62d5f6);
{u32 ea_=u32(r4(R+28)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d5fc:{NFSU2_TR(0x62d5fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d5fe:{NFSU2_TR(0x62d5fe);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d602:{NFSU2_TR(0x62d602);
{u32 ea_=u32(r4(R+28)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d608:{NFSU2_TR(0x62d608);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d60a:{NFSU2_TR(0x62d60a);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d60e:{NFSU2_TR(0x62d60e);
{u32 ea_=u32(r4(R+28)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d614:{NFSU2_TR(0x62d614);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d616:{NFSU2_TR(0x62d616);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d61d:{NFSU2_TR(0x62d61d);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d621:{NFSU2_TR(0x62d621);
{u32 ea_=u32(r4(R+28)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d627:{NFSU2_TR(0x62d627);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d62b:{NFSU2_TR(0x62d62b);
{u32 ea_=u32(r4(R+28)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d631:{NFSU2_TR(0x62d631);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d633:{NFSU2_TR(0x62d633);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d637:{NFSU2_TR(0x62d637);
{u32 ea_=u32(r4(R+28)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d63d:{NFSU2_TR(0x62d63d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d63f:{NFSU2_TR(0x62d63f);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d643:{NFSU2_TR(0x62d643);
{u32 ea_=u32(r4(R+28)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d649:{NFSU2_TR(0x62d649);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d64b:{NFSU2_TR(0x62d64b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d652:{NFSU2_TR(0x62d652);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d656:{NFSU2_TR(0x62d656);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d65c:{NFSU2_TR(0x62d65c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d660:{NFSU2_TR(0x62d660);
{u32 ea_=u32(r4(R+28)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d666:{NFSU2_TR(0x62d666);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d668:{NFSU2_TR(0x62d668);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d66c:{NFSU2_TR(0x62d66c);
{u32 ea_=u32(r4(R+28)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d672:{NFSU2_TR(0x62d672);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d674:{NFSU2_TR(0x62d674);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d678:{NFSU2_TR(0x62d678);
{u32 ea_=u32(r4(R+28)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d67e:{NFSU2_TR(0x62d67e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d680:{NFSU2_TR(0x62d680);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d687:{NFSU2_TR(0x62d687);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d68b:{NFSU2_TR(0x62d68b);
{u32 ea_=u32(r4(R+28)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d691:{NFSU2_TR(0x62d691);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d695:{NFSU2_TR(0x62d695);
{u32 ea_=u32(r4(R+28)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d69b:{NFSU2_TR(0x62d69b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d69d:{NFSU2_TR(0x62d69d);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6a1:{NFSU2_TR(0x62d6a1);
{u32 ea_=u32(r4(R+28)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d6a7:{NFSU2_TR(0x62d6a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d6a9:{NFSU2_TR(0x62d6a9);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6ad:{NFSU2_TR(0x62d6ad);
{u32 ea_=u32(r4(R+28)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d6b3:{NFSU2_TR(0x62d6b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d6b5:{NFSU2_TR(0x62d6b5);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d6bc:{NFSU2_TR(0x62d6bc);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6c0:{NFSU2_TR(0x62d6c0);
{u32 ea_=u32(r4(R+28)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d6c6:{NFSU2_TR(0x62d6c6);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6ca:{NFSU2_TR(0x62d6ca);
{u32 ea_=u32(r4(R+28)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d6d0:{NFSU2_TR(0x62d6d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d6d2:{NFSU2_TR(0x62d6d2);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6d6:{NFSU2_TR(0x62d6d6);
{u32 ea_=u32(r4(R+28)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d6dc:{NFSU2_TR(0x62d6dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d6de:{NFSU2_TR(0x62d6de);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6e2:{NFSU2_TR(0x62d6e2);
{u32 ea_=u32(r4(R+28)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d6e8:{NFSU2_TR(0x62d6e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d6ea:{NFSU2_TR(0x62d6ea);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d6f1:{NFSU2_TR(0x62d6f1);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6f5:{NFSU2_TR(0x62d6f5);
{u32 ea_=u32(r4(R+28)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d6fb:{NFSU2_TR(0x62d6fb);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d6ff:{NFSU2_TR(0x62d6ff);
{u32 ea_=u32(r4(R+28)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d705:{NFSU2_TR(0x62d705);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d707:{NFSU2_TR(0x62d707);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d70b:{NFSU2_TR(0x62d70b);
{u32 ea_=u32(r4(R+28)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d711:{NFSU2_TR(0x62d711);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d713:{NFSU2_TR(0x62d713);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d717:{NFSU2_TR(0x62d717);
{u32 ea_=u32(r4(R+28)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d71d:{NFSU2_TR(0x62d71d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d71f:{NFSU2_TR(0x62d71f);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d726:{NFSU2_TR(0x62d726);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d72a:{NFSU2_TR(0x62d72a);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d730:{NFSU2_TR(0x62d730);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d734:{NFSU2_TR(0x62d734);
{u32 ea_=u32(r4(R+28)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d73a:{NFSU2_TR(0x62d73a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d73c:{NFSU2_TR(0x62d73c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d740:{NFSU2_TR(0x62d740);
{u32 ea_=u32(r4(R+28)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d746:{NFSU2_TR(0x62d746);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d748:{NFSU2_TR(0x62d748);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d74c:{NFSU2_TR(0x62d74c);
{u32 ea_=u32(r4(R+28)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d752:{NFSU2_TR(0x62d752);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d754:{NFSU2_TR(0x62d754);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d75b:{NFSU2_TR(0x62d75b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d75f:{NFSU2_TR(0x62d75f);
{u32 ea_=u32(r4(R+28)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d765:{NFSU2_TR(0x62d765);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d769:{NFSU2_TR(0x62d769);
{u32 ea_=u32(r4(R+28)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d76f:{NFSU2_TR(0x62d76f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d771:{NFSU2_TR(0x62d771);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d775:{NFSU2_TR(0x62d775);
{u32 ea_=u32(r4(R+28)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d77b:{NFSU2_TR(0x62d77b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d77d:{NFSU2_TR(0x62d77d);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d781:{NFSU2_TR(0x62d781);
{u32 ea_=u32(r4(R+28)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d787:{NFSU2_TR(0x62d787);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d789:{NFSU2_TR(0x62d789);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d790:{NFSU2_TR(0x62d790);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d794:{NFSU2_TR(0x62d794);
{u32 ea_=u32(r4(R+28)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d79a:{NFSU2_TR(0x62d79a);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62d79e:{NFSU2_TR(0x62d79e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d7a2:{NFSU2_TR(0x62d7a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d7a3:{NFSU2_TR(0x62d7a3);
{u32 ea_=u32(r4(R+28)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d7a9:{NFSU2_TR(0x62d7a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62d7ad:{NFSU2_TR(0x62d7ad);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62d7ae:{NFSU2_TR(0x62d7ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d7b0:{NFSU2_TR(0x62d7b0);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d7b4:{NFSU2_TR(0x62d7b4);
{u32 ea_=u32(r4(R+28)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d7ba:{NFSU2_TR(0x62d7ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d7bc:{NFSU2_TR(0x62d7bc);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d7c0:{NFSU2_TR(0x62d7c0);
{u32 ea_=u32(r4(R+28)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d7c6:{NFSU2_TR(0x62d7c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d7c8:{NFSU2_TR(0x62d7c8);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d7cf:{NFSU2_TR(0x62d7cf);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d7d3:{NFSU2_TR(0x62d7d3);
{u32 ea_=u32(r4(R+28)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d7d9:{NFSU2_TR(0x62d7d9);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d7dd:{NFSU2_TR(0x62d7dd);
{u32 ea_=u32(r4(R+28)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d7e3:{NFSU2_TR(0x62d7e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d7e5:{NFSU2_TR(0x62d7e5);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d7e9:{NFSU2_TR(0x62d7e9);
{u32 ea_=u32(r4(R+28)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d7ef:{NFSU2_TR(0x62d7ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d7f1:{NFSU2_TR(0x62d7f1);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d7f5:{NFSU2_TR(0x62d7f5);
{u32 ea_=u32(r4(R+28)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d7fb:{NFSU2_TR(0x62d7fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d7fd:{NFSU2_TR(0x62d7fd);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d804:{NFSU2_TR(0x62d804);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62d809ull));
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
PN u32 blk_62d809(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62d809:L62d809:{bud-=197;NFSU2_TR(0x62d809);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d80d:{NFSU2_TR(0x62d80d);
{u32 ea_=u32(r4(G+16)+u32(1712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d814:{NFSU2_TR(0x62d814);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d818:{NFSU2_TR(0x62d818);
{u32 ea_=u32(r4(G+16)+u32(1728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d81f:{NFSU2_TR(0x62d81f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d821:{NFSU2_TR(0x62d821);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d825:{NFSU2_TR(0x62d825);
{u32 ea_=u32(r4(G+16)+u32(1744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d82c:{NFSU2_TR(0x62d82c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d82e:{NFSU2_TR(0x62d82e);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d832:{NFSU2_TR(0x62d832);
{u32 ea_=u32(r4(G+16)+u32(1696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d839:{NFSU2_TR(0x62d839);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d83b:{NFSU2_TR(0x62d83b);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d842:{NFSU2_TR(0x62d842);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d846:{NFSU2_TR(0x62d846);
{u32 ea_=u32(r4(G+16)+u32(1716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d84d:{NFSU2_TR(0x62d84d);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d851:{NFSU2_TR(0x62d851);
{u32 ea_=u32(r4(G+16)+u32(1732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d858:{NFSU2_TR(0x62d858);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d85a:{NFSU2_TR(0x62d85a);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d85e:{NFSU2_TR(0x62d85e);
{u32 ea_=u32(r4(G+16)+u32(1748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d865:{NFSU2_TR(0x62d865);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d867:{NFSU2_TR(0x62d867);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d86b:{NFSU2_TR(0x62d86b);
{u32 ea_=u32(r4(G+16)+u32(1700u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d872:{NFSU2_TR(0x62d872);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d874:{NFSU2_TR(0x62d874);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d87b:{NFSU2_TR(0x62d87b);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d87f:{NFSU2_TR(0x62d87f);
{u32 ea_=u32(r4(G+16)+u32(1720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d886:{NFSU2_TR(0x62d886);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d88a:{NFSU2_TR(0x62d88a);
{u32 ea_=u32(r4(G+16)+u32(1736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d891:{NFSU2_TR(0x62d891);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d893:{NFSU2_TR(0x62d893);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d897:{NFSU2_TR(0x62d897);
{u32 ea_=u32(r4(G+16)+u32(1752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d89e:{NFSU2_TR(0x62d89e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d8a0:{NFSU2_TR(0x62d8a0);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d8a4:{NFSU2_TR(0x62d8a4);
{u32 ea_=u32(r4(G+16)+u32(1704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d8ab:{NFSU2_TR(0x62d8ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d8ad:{NFSU2_TR(0x62d8ad);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d8b4:{NFSU2_TR(0x62d8b4);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d8b8:{NFSU2_TR(0x62d8b8);
{u32 ea_=u32(r4(G+16)+u32(1724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d8bf:{NFSU2_TR(0x62d8bf);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d8c3:{NFSU2_TR(0x62d8c3);
{u32 ea_=u32(r4(G+16)+u32(1740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d8ca:{NFSU2_TR(0x62d8ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d8cc:{NFSU2_TR(0x62d8cc);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d8d0:{NFSU2_TR(0x62d8d0);
{u32 ea_=u32(r4(G+16)+u32(1756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d8d7:{NFSU2_TR(0x62d8d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d8d9:{NFSU2_TR(0x62d8d9);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d8dd:{NFSU2_TR(0x62d8dd);
{u32 ea_=u32(r4(G+16)+u32(1708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d8e4:{NFSU2_TR(0x62d8e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d8e6:{NFSU2_TR(0x62d8e6);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d8ed:{NFSU2_TR(0x62d8ed);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d8f1:{NFSU2_TR(0x62d8f1);
{u32 ea_=u32(r4(G+16)+u32(1712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d8f8:{NFSU2_TR(0x62d8f8);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d8fc:{NFSU2_TR(0x62d8fc);
{u32 ea_=u32(r4(G+16)+u32(1696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d903:{NFSU2_TR(0x62d903);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d905:{NFSU2_TR(0x62d905);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d909:{NFSU2_TR(0x62d909);
{u32 ea_=u32(r4(G+16)+u32(1728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d910:{NFSU2_TR(0x62d910);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d912:{NFSU2_TR(0x62d912);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d916:{NFSU2_TR(0x62d916);
{u32 ea_=u32(r4(G+16)+u32(1744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d91d:{NFSU2_TR(0x62d91d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d91f:{NFSU2_TR(0x62d91f);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d926:{NFSU2_TR(0x62d926);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d92a:{NFSU2_TR(0x62d92a);
{u32 ea_=u32(r4(G+16)+u32(1700u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d931:{NFSU2_TR(0x62d931);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d935:{NFSU2_TR(0x62d935);
{u32 ea_=u32(r4(G+16)+u32(1716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d93c:{NFSU2_TR(0x62d93c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d93e:{NFSU2_TR(0x62d93e);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d942:{NFSU2_TR(0x62d942);
{u32 ea_=u32(r4(G+16)+u32(1732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d949:{NFSU2_TR(0x62d949);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d94b:{NFSU2_TR(0x62d94b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d94f:{NFSU2_TR(0x62d94f);
{u32 ea_=u32(r4(G+16)+u32(1748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d956:{NFSU2_TR(0x62d956);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d958:{NFSU2_TR(0x62d958);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d95f:{NFSU2_TR(0x62d95f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d963:{NFSU2_TR(0x62d963);
{u32 ea_=u32(r4(G+16)+u32(1704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d96a:{NFSU2_TR(0x62d96a);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d96e:{NFSU2_TR(0x62d96e);
{u32 ea_=u32(r4(G+16)+u32(1720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d975:{NFSU2_TR(0x62d975);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d977:{NFSU2_TR(0x62d977);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d97b:{NFSU2_TR(0x62d97b);
{u32 ea_=u32(r4(G+16)+u32(1736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d982:{NFSU2_TR(0x62d982);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d984:{NFSU2_TR(0x62d984);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d988:{NFSU2_TR(0x62d988);
{u32 ea_=u32(r4(G+16)+u32(1752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d98f:{NFSU2_TR(0x62d98f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d991:{NFSU2_TR(0x62d991);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d998:{NFSU2_TR(0x62d998);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d99c:{NFSU2_TR(0x62d99c);
{u32 ea_=u32(r4(G+16)+u32(1708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d9a3:{NFSU2_TR(0x62d9a3);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d9a7:{NFSU2_TR(0x62d9a7);
{u32 ea_=u32(r4(G+16)+u32(1724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d9ae:{NFSU2_TR(0x62d9ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d9b0:{NFSU2_TR(0x62d9b0);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d9b4:{NFSU2_TR(0x62d9b4);
{u32 ea_=u32(r4(G+16)+u32(1740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d9bb:{NFSU2_TR(0x62d9bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d9bd:{NFSU2_TR(0x62d9bd);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d9c1:{NFSU2_TR(0x62d9c1);
{u32 ea_=u32(r4(G+16)+u32(1756u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d9c8:{NFSU2_TR(0x62d9c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d9ca:{NFSU2_TR(0x62d9ca);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62d9d1:{NFSU2_TR(0x62d9d1);
{u32 ea_=u32(r4(G+16)+u32(1744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d9d8:{NFSU2_TR(0x62d9d8);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d9dc:{NFSU2_TR(0x62d9dc);
{u32 ea_=u32(r4(G+16)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d9e3:{NFSU2_TR(0x62d9e3);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d9e7:{NFSU2_TR(0x62d9e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d9e9:{NFSU2_TR(0x62d9e9);
{u32 ea_=u32(r4(G+16)+u32(1712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d9f0:{NFSU2_TR(0x62d9f0);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62d9f4:{NFSU2_TR(0x62d9f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62d9f6:{NFSU2_TR(0x62d9f6);
{u32 ea_=u32(r4(G+16)+u32(1696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62d9fd:{NFSU2_TR(0x62d9fd);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da01:{NFSU2_TR(0x62da01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da03:{NFSU2_TR(0x62da03);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62da0a:{NFSU2_TR(0x62da0a);
{u32 ea_=u32(r4(G+16)+u32(1748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da11:{NFSU2_TR(0x62da11);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da15:{NFSU2_TR(0x62da15);
{u32 ea_=u32(r4(G+16)+u32(1732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da1c:{NFSU2_TR(0x62da1c);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da20:{NFSU2_TR(0x62da20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da22:{NFSU2_TR(0x62da22);
{u32 ea_=u32(r4(G+16)+u32(1716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da29:{NFSU2_TR(0x62da29);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da2d:{NFSU2_TR(0x62da2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da2f:{NFSU2_TR(0x62da2f);
{u32 ea_=u32(r4(G+16)+u32(1700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da36:{NFSU2_TR(0x62da36);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da3a:{NFSU2_TR(0x62da3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da3c:{NFSU2_TR(0x62da3c);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62da43:{NFSU2_TR(0x62da43);
{u32 ea_=u32(r4(G+16)+u32(1752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da4a:{NFSU2_TR(0x62da4a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da4e:{NFSU2_TR(0x62da4e);
{u32 ea_=u32(r4(G+16)+u32(1736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da55:{NFSU2_TR(0x62da55);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da59:{NFSU2_TR(0x62da59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da5b:{NFSU2_TR(0x62da5b);
{u32 ea_=u32(r4(G+16)+u32(1720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da62:{NFSU2_TR(0x62da62);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da66:{NFSU2_TR(0x62da66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da68:{NFSU2_TR(0x62da68);
{u32 ea_=u32(r4(G+16)+u32(1704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da6f:{NFSU2_TR(0x62da6f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da73:{NFSU2_TR(0x62da73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da75:{NFSU2_TR(0x62da75);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62da7c:{NFSU2_TR(0x62da7c);
{u32 ea_=u32(r4(G+16)+u32(1756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da83:{NFSU2_TR(0x62da83);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da87:{NFSU2_TR(0x62da87);
{u32 ea_=u32(r4(G+16)+u32(1740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da8e:{NFSU2_TR(0x62da8e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da92:{NFSU2_TR(0x62da92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62da94:{NFSU2_TR(0x62da94);
{u32 ea_=u32(r4(G+16)+u32(1724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62da9b:{NFSU2_TR(0x62da9b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62da9f:{NFSU2_TR(0x62da9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62daa1:{NFSU2_TR(0x62daa1);
{u32 ea_=u32(r4(G+16)+u32(1708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62daa8:{NFSU2_TR(0x62daa8);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62daac:{NFSU2_TR(0x62daac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62daae:{NFSU2_TR(0x62daae);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dab5:{NFSU2_TR(0x62dab5);
{u32 ea_=u32(r4(G+16)+u32(1744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dabc:{NFSU2_TR(0x62dabc);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dac0:{NFSU2_TR(0x62dac0);
{u32 ea_=u32(r4(G+16)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dac7:{NFSU2_TR(0x62dac7);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dacb:{NFSU2_TR(0x62dacb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dacd:{NFSU2_TR(0x62dacd);
{u32 ea_=u32(r4(G+16)+u32(1712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dad4:{NFSU2_TR(0x62dad4);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dad8:{NFSU2_TR(0x62dad8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dada:{NFSU2_TR(0x62dada);
{u32 ea_=u32(r4(G+16)+u32(1696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dae1:{NFSU2_TR(0x62dae1);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dae5:{NFSU2_TR(0x62dae5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dae7:{NFSU2_TR(0x62dae7);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62daee:{NFSU2_TR(0x62daee);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62daf5:{NFSU2_TR(0x62daf5);
{u32 ea_=u32(r4(G+16)+u32(1748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dafc:{NFSU2_TR(0x62dafc);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dafd:{NFSU2_TR(0x62dafd);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db01:{NFSU2_TR(0x62db01);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62db05:{NFSU2_TR(0x62db05);
{u32 ea_=u32(r4(G+16)+u32(1736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db0c:{NFSU2_TR(0x62db0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62db0d:{NFSU2_TR(0x62db0d);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db11:{NFSU2_TR(0x62db11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db13:{NFSU2_TR(0x62db13);
{u32 ea_=u32(r4(G+16)+u32(1724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db1a:{NFSU2_TR(0x62db1a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db1e:{NFSU2_TR(0x62db1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db20:{NFSU2_TR(0x62db20);
{u32 ea_=u32(r4(G+16)+u32(1708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db27:{NFSU2_TR(0x62db27);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db2b:{NFSU2_TR(0x62db2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db2d:{NFSU2_TR(0x62db2d);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62db34:{NFSU2_TR(0x62db34);
{u32 ea_=u32(r4(G+16)+u32(1760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db3b:{NFSU2_TR(0x62db3b);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db3f:{NFSU2_TR(0x62db3f);
{u32 ea_=u32(r4(G+16)+u32(1744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db46:{NFSU2_TR(0x62db46);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db4a:{NFSU2_TR(0x62db4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db4c:{NFSU2_TR(0x62db4c);
{u32 ea_=u32(r4(G+16)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db53:{NFSU2_TR(0x62db53);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db57:{NFSU2_TR(0x62db57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db59:{NFSU2_TR(0x62db59);
{u32 ea_=u32(r4(G+16)+u32(1712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db60:{NFSU2_TR(0x62db60);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db64:{NFSU2_TR(0x62db64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db66:{NFSU2_TR(0x62db66);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62db6d:{NFSU2_TR(0x62db6d);
{u32 ea_=u32(r4(G+16)+u32(1764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db74:{NFSU2_TR(0x62db74);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db78:{NFSU2_TR(0x62db78);
{u32 ea_=u32(r4(G+16)+u32(1748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db7f:{NFSU2_TR(0x62db7f);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db83:{NFSU2_TR(0x62db83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db85:{NFSU2_TR(0x62db85);
{u32 ea_=u32(r4(G+16)+u32(1732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db8c:{NFSU2_TR(0x62db8c);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db90:{NFSU2_TR(0x62db90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db92:{NFSU2_TR(0x62db92);
{u32 ea_=u32(r4(G+16)+u32(1716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62db99:{NFSU2_TR(0x62db99);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62db9d:{NFSU2_TR(0x62db9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62db9f:{NFSU2_TR(0x62db9f);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dba6:{NFSU2_TR(0x62dba6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62dbabull));
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
PN u32 blk_62dbab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62dbab:L62dbab:{bud-=198;NFSU2_TR(0x62dbab);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbaf:{NFSU2_TR(0x62dbaf);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbb2:{NFSU2_TR(0x62dbb2);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbb6:{NFSU2_TR(0x62dbb6);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbb9:{NFSU2_TR(0x62dbb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dbbb:{NFSU2_TR(0x62dbbb);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbbf:{NFSU2_TR(0x62dbbf);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbc2:{NFSU2_TR(0x62dbc2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dbc4:{NFSU2_TR(0x62dbc4);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbc8:{NFSU2_TR(0x62dbc8);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbca:{NFSU2_TR(0x62dbca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dbcc:{NFSU2_TR(0x62dbcc);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dbd3:{NFSU2_TR(0x62dbd3);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbd7:{NFSU2_TR(0x62dbd7);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbda:{NFSU2_TR(0x62dbda);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbde:{NFSU2_TR(0x62dbde);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbe1:{NFSU2_TR(0x62dbe1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dbe3:{NFSU2_TR(0x62dbe3);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbe7:{NFSU2_TR(0x62dbe7);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbea:{NFSU2_TR(0x62dbea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dbec:{NFSU2_TR(0x62dbec);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dbf0:{NFSU2_TR(0x62dbf0);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dbf3:{NFSU2_TR(0x62dbf3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dbf5:{NFSU2_TR(0x62dbf5);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dbfc:{NFSU2_TR(0x62dbfc);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc00:{NFSU2_TR(0x62dc00);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc03:{NFSU2_TR(0x62dc03);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc07:{NFSU2_TR(0x62dc07);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc0a:{NFSU2_TR(0x62dc0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc0c:{NFSU2_TR(0x62dc0c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc10:{NFSU2_TR(0x62dc10);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc13:{NFSU2_TR(0x62dc13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc15:{NFSU2_TR(0x62dc15);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc19:{NFSU2_TR(0x62dc19);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc1c:{NFSU2_TR(0x62dc1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc1e:{NFSU2_TR(0x62dc1e);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dc25:{NFSU2_TR(0x62dc25);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc29:{NFSU2_TR(0x62dc29);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc2c:{NFSU2_TR(0x62dc2c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc30:{NFSU2_TR(0x62dc30);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc33:{NFSU2_TR(0x62dc33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc35:{NFSU2_TR(0x62dc35);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc39:{NFSU2_TR(0x62dc39);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc3c:{NFSU2_TR(0x62dc3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc3e:{NFSU2_TR(0x62dc3e);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc42:{NFSU2_TR(0x62dc42);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc45:{NFSU2_TR(0x62dc45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc47:{NFSU2_TR(0x62dc47);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dc4e:{NFSU2_TR(0x62dc4e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc52:{NFSU2_TR(0x62dc52);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc55:{NFSU2_TR(0x62dc55);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc59:{NFSU2_TR(0x62dc59);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc5c:{NFSU2_TR(0x62dc5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc5e:{NFSU2_TR(0x62dc5e);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc62:{NFSU2_TR(0x62dc62);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc64:{NFSU2_TR(0x62dc64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc66:{NFSU2_TR(0x62dc66);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc6a:{NFSU2_TR(0x62dc6a);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc6d:{NFSU2_TR(0x62dc6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc6f:{NFSU2_TR(0x62dc6f);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dc76:{NFSU2_TR(0x62dc76);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc7a:{NFSU2_TR(0x62dc7a);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc7d:{NFSU2_TR(0x62dc7d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc81:{NFSU2_TR(0x62dc81);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc84:{NFSU2_TR(0x62dc84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc86:{NFSU2_TR(0x62dc86);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc8a:{NFSU2_TR(0x62dc8a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc8d:{NFSU2_TR(0x62dc8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc8f:{NFSU2_TR(0x62dc8f);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dc93:{NFSU2_TR(0x62dc93);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dc96:{NFSU2_TR(0x62dc96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dc98:{NFSU2_TR(0x62dc98);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dc9f:{NFSU2_TR(0x62dc9f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dca3:{NFSU2_TR(0x62dca3);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dca6:{NFSU2_TR(0x62dca6);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dcaa:{NFSU2_TR(0x62dcaa);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dcad:{NFSU2_TR(0x62dcad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dcaf:{NFSU2_TR(0x62dcaf);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dcb3:{NFSU2_TR(0x62dcb3);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dcb6:{NFSU2_TR(0x62dcb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dcb8:{NFSU2_TR(0x62dcb8);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dcbc:{NFSU2_TR(0x62dcbc);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dcbf:{NFSU2_TR(0x62dcbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dcc1:{NFSU2_TR(0x62dcc1);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dcc8:{NFSU2_TR(0x62dcc8);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dccc:{NFSU2_TR(0x62dccc);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dccf:{NFSU2_TR(0x62dccf);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dcd3:{NFSU2_TR(0x62dcd3);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dcd6:{NFSU2_TR(0x62dcd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dcd8:{NFSU2_TR(0x62dcd8);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dcdc:{NFSU2_TR(0x62dcdc);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dcdf:{NFSU2_TR(0x62dcdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dce1:{NFSU2_TR(0x62dce1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dce5:{NFSU2_TR(0x62dce5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dce8:{NFSU2_TR(0x62dce8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dcea:{NFSU2_TR(0x62dcea);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dcf1:{NFSU2_TR(0x62dcf1);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dcf5:{NFSU2_TR(0x62dcf5);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dcf8:{NFSU2_TR(0x62dcf8);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dcfc:{NFSU2_TR(0x62dcfc);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dcfe:{NFSU2_TR(0x62dcfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd00:{NFSU2_TR(0x62dd00);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd04:{NFSU2_TR(0x62dd04);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd07:{NFSU2_TR(0x62dd07);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd09:{NFSU2_TR(0x62dd09);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd0d:{NFSU2_TR(0x62dd0d);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd10:{NFSU2_TR(0x62dd10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd12:{NFSU2_TR(0x62dd12);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dd19:{NFSU2_TR(0x62dd19);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd1d:{NFSU2_TR(0x62dd1d);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd20:{NFSU2_TR(0x62dd20);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd24:{NFSU2_TR(0x62dd24);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd27:{NFSU2_TR(0x62dd27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd29:{NFSU2_TR(0x62dd29);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd2d:{NFSU2_TR(0x62dd2d);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd30:{NFSU2_TR(0x62dd30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd32:{NFSU2_TR(0x62dd32);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd36:{NFSU2_TR(0x62dd36);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd39:{NFSU2_TR(0x62dd39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd3b:{NFSU2_TR(0x62dd3b);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dd42:{NFSU2_TR(0x62dd42);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd46:{NFSU2_TR(0x62dd46);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd49:{NFSU2_TR(0x62dd49);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd4d:{NFSU2_TR(0x62dd4d);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd50:{NFSU2_TR(0x62dd50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd52:{NFSU2_TR(0x62dd52);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd56:{NFSU2_TR(0x62dd56);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd59:{NFSU2_TR(0x62dd59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd5b:{NFSU2_TR(0x62dd5b);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd5f:{NFSU2_TR(0x62dd5f);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd62:{NFSU2_TR(0x62dd62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd64:{NFSU2_TR(0x62dd64);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dd6b:{NFSU2_TR(0x62dd6b);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd6f:{NFSU2_TR(0x62dd6f);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd72:{NFSU2_TR(0x62dd72);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd76:{NFSU2_TR(0x62dd76);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd79:{NFSU2_TR(0x62dd79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd7b:{NFSU2_TR(0x62dd7b);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd7f:{NFSU2_TR(0x62dd7f);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd82:{NFSU2_TR(0x62dd82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd84:{NFSU2_TR(0x62dd84);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dd88:{NFSU2_TR(0x62dd88);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dd8b:{NFSU2_TR(0x62dd8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dd8d:{NFSU2_TR(0x62dd8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B62dd94:{NFSU2_TR(0x62dd94);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62dd9b:{NFSU2_TR(0x62dd9b);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62dda2:{NFSU2_TR(0x62dda2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dda3:{NFSU2_TR(0x62dda3);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dda7:{NFSU2_TR(0x62dda7);
u8 U[6];
w1(F+0,carry<u32>(r4(R+28),u32(0xc0ull)));
w1(F+11,scarry<u32>(r4(R+28),u32(0xc0ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w1(F+7,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62ddad:{NFSU2_TR(0x62ddad);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ddb0:{NFSU2_TR(0x62ddb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ddb1:{NFSU2_TR(0x62ddb1);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ddb5:{NFSU2_TR(0x62ddb5);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ddb7:{NFSU2_TR(0x62ddb7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ddb9:{NFSU2_TR(0x62ddb9);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ddbd:{NFSU2_TR(0x62ddbd);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ddc0:{NFSU2_TR(0x62ddc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ddc2:{NFSU2_TR(0x62ddc2);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ddc6:{NFSU2_TR(0x62ddc6);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ddc9:{NFSU2_TR(0x62ddc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ddcb:{NFSU2_TR(0x62ddcb);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ddd2:{NFSU2_TR(0x62ddd2);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ddd6:{NFSU2_TR(0x62ddd6);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ddd9:{NFSU2_TR(0x62ddd9);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dddd:{NFSU2_TR(0x62dddd);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dde0:{NFSU2_TR(0x62dde0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62dde2:{NFSU2_TR(0x62dde2);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62dde6:{NFSU2_TR(0x62dde6);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62dde9:{NFSU2_TR(0x62dde9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ddeb:{NFSU2_TR(0x62ddeb);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ddef:{NFSU2_TR(0x62ddef);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ddf2:{NFSU2_TR(0x62ddf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ddf4:{NFSU2_TR(0x62ddf4);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ddfb:{NFSU2_TR(0x62ddfb);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ddff:{NFSU2_TR(0x62ddff);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de02:{NFSU2_TR(0x62de02);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62de06:{NFSU2_TR(0x62de06);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de09:{NFSU2_TR(0x62de09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62de0b:{NFSU2_TR(0x62de0b);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62de0f:{NFSU2_TR(0x62de0f);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de12:{NFSU2_TR(0x62de12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62de14:{NFSU2_TR(0x62de14);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62de18:{NFSU2_TR(0x62de18);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de1b:{NFSU2_TR(0x62de1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62de1d:{NFSU2_TR(0x62de1d);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62de24:{NFSU2_TR(0x62de24);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62de28:{NFSU2_TR(0x62de28);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de2b:{NFSU2_TR(0x62de2b);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62de2f:{NFSU2_TR(0x62de2f);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de32:{NFSU2_TR(0x62de32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62de34:{NFSU2_TR(0x62de34);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62de38:{NFSU2_TR(0x62de38);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de3b:{NFSU2_TR(0x62de3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62de3d:{NFSU2_TR(0x62de3d);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62de41:{NFSU2_TR(0x62de41);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62de44:{NFSU2_TR(0x62de44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62de46:{NFSU2_TR(0x62de46);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62de4d:{NFSU2_TR(0x62de4d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62de52ull));
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
PN u32 blk_62de52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62de52:L62de52:{bud-=12;NFSU2_TR(0x62de52);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62de59:{NFSU2_TR(0x62de59);
u8 U[4];
w4(U+0,u32(u32(u32(0xb40ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62de60:{NFSU2_TR(0x62de60);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de61:{NFSU2_TR(0x62de61);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x540ull))));
}
B62de66:{NFSU2_TR(0x62de66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de67:{NFSU2_TR(0x62de67);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62de6e:{NFSU2_TR(0x62de6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62de75:{NFSU2_TR(0x62de75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de76:{NFSU2_TR(0x62de76);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de7b:{NFSU2_TR(0x62de7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de7c:{NFSU2_TR(0x62de7c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de7d:{NFSU2_TR(0x62de7d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62de82ull));
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
PN u32 blk_62de82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62de82:L62de82:{bud-=4;NFSU2_TR(0x62de82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62de89:{NFSU2_TR(0x62de89);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x38ull))));
}
B62de8c:{NFSU2_TR(0x62de8c);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62de8e:{NFSU2_TR(0x62de8e);
if(r1(F+6)){{[[clang::musttail]] return blk_62deb2(ARGS);}}
}
B62de90:L62de90:{bud-=11;NFSU2_TR(0x62de90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62de93:{NFSU2_TR(0x62de93);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62de9a:{NFSU2_TR(0x62de9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de9c:{NFSU2_TR(0x62de9c);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62de9e:{NFSU2_TR(0x62de9e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62de9f:{NFSU2_TR(0x62de9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62dea3:{NFSU2_TR(0x62dea3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dea4:{NFSU2_TR(0x62dea4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dea5:{NFSU2_TR(0x62dea5);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dea6:{NFSU2_TR(0x62dea6);
__builtin_memmove((G+4),(R+24),4);
}
B62dea8:{NFSU2_TR(0x62dea8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62deadull));
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
PN u32 blk_62dead(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62dead:L62dead:{bud-=1;NFSU2_TR(0x62dead);
{[[clang::musttail]] return blk_62deb2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62deaf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62deaf:L62deaf:{bud-=1;NFSU2_TR(0x62deaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_62deb2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62deb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62deb2:L62deb2:{bud-=2;NFSU2_TR(0x62deb2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B62deb9:{NFSU2_TR(0x62deb9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62df66(ARGS);}}
}
B62debf:L62debf:{bud-=4;NFSU2_TR(0x62debf);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B62dec6:{NFSU2_TR(0x62dec6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dec7:{NFSU2_TR(0x62dec7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dec8:{NFSU2_TR(0x62dec8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62decdull));
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
PN u32 blk_62decd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62decd:L62decd:{bud-=5;NFSU2_TR(0x62decd);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62ded3:{NFSU2_TR(0x62ded3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62ded6:{NFSU2_TR(0x62ded6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B62ded8:{NFSU2_TR(0x62ded8);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B62dedb:{NFSU2_TR(0x62dedb);
if(r1(F+2)){{[[clang::musttail]] return blk_62dee8(ARGS);}}
}
B62dedd:L62dedd:{bud-=4;NFSU2_TR(0x62dedd);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62dee1:{NFSU2_TR(0x62dee1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dee2:{NFSU2_TR(0x62dee2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dee3:{NFSU2_TR(0x62dee3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62dee8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x620600u);}[[clang::musttail]] return blk_620600(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62dee8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62dee8:L62dee8:{bud-=4;NFSU2_TR(0x62dee8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((G+0),(U+0),4);
}
B62deeb:{NFSU2_TR(0x62deeb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62deec:{NFSU2_TR(0x62deec);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62deed:{NFSU2_TR(0x62deed);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62def2ull));
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
PN u32 blk_62def2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62def2:L62def2:{bud-=5;NFSU2_TR(0x62def2);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62def8:{NFSU2_TR(0x62def8);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62defb:{NFSU2_TR(0x62defb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B62defd:{NFSU2_TR(0x62defd);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B62df00:{NFSU2_TR(0x62df00);
if(r1(F+2)){{[[clang::musttail]] return blk_62df10(ARGS);}}
}
B62df02:L62df02:{bud-=5;NFSU2_TR(0x62df02);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62df06:{NFSU2_TR(0x62df06);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((G+0),(U+0),4);
}
B62df09:{NFSU2_TR(0x62df09);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df0a:{NFSU2_TR(0x62df0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df0b:{NFSU2_TR(0x62df0b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62df10ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x620600u);}[[clang::musttail]] return blk_620600(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62df10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62df10:L62df10:{bud-=4;NFSU2_TR(0x62df10);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((G+0),(U+0),4);
}
B62df16:{NFSU2_TR(0x62df16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df17:{NFSU2_TR(0x62df17);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df18:{NFSU2_TR(0x62df18);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62df1dull));
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
PN u32 blk_62df1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62df1d:L62df1d:{bud-=5;NFSU2_TR(0x62df1d);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62df23:{NFSU2_TR(0x62df23);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62df26:{NFSU2_TR(0x62df26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B62df28:{NFSU2_TR(0x62df28);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B62df2b:{NFSU2_TR(0x62df2b);
if(r1(F+2)){{[[clang::musttail]] return blk_62df3e(ARGS);}}
}
B62df2d:L62df2d:{bud-=5;NFSU2_TR(0x62df2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62df31:{NFSU2_TR(0x62df31);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((G+0),(U+0),4);
}
B62df37:{NFSU2_TR(0x62df37);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df38:{NFSU2_TR(0x62df38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df39:{NFSU2_TR(0x62df39);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62df3eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x620600u);}[[clang::musttail]] return blk_620600(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62df3e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62df3e:L62df3e:{bud-=4;NFSU2_TR(0x62df3e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
}
B62df44:{NFSU2_TR(0x62df44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df45:{NFSU2_TR(0x62df45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df46:{NFSU2_TR(0x62df46);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62df4bull));
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
PN u32 blk_62df4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62df4b:L62df4b:{bud-=5;NFSU2_TR(0x62df4b);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62df51:{NFSU2_TR(0x62df51);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62df54:{NFSU2_TR(0x62df54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B62df56:{NFSU2_TR(0x62df56);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B62df59:{NFSU2_TR(0x62df59);
if(r1(F+2)){{[[clang::musttail]] return blk_62df66(ARGS);}}
}
B62df5b:L62df5b:{bud-=4;NFSU2_TR(0x62df5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62df5f:{NFSU2_TR(0x62df5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df60:{NFSU2_TR(0x62df60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62df61:{NFSU2_TR(0x62df61);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62df66ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x620600u);}[[clang::musttail]] return blk_620600(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62df66(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62df66:L62df66:{bud-=2;NFSU2_TR(0x62df66);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B62df6b:{NFSU2_TR(0x62df6b);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6304c4(ARGS);}}
}
B62df71:L62df71:{bud-=4;NFSU2_TR(0x62df71);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62df75:{NFSU2_TR(0x62df75);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1b08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62df7b:{NFSU2_TR(0x62df7b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62df7d:{NFSU2_TR(0x62df7d);
if(r1(F+6)){{[[clang::musttail]] return blk_6304c4(ARGS);}}
}
B62df83:L62df83:{bud-=13;NFSU2_TR(0x62df83);
__builtin_memmove((G+0),(G+4),4);
}
B62df85:{NFSU2_TR(0x62df85);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2df8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B62df8c:{NFSU2_TR(0x62df8c);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2e18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B62df93:{NFSU2_TR(0x62df93);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2e38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B62df9a:{NFSU2_TR(0x62df9a);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2e58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B62dfa1:{NFSU2_TR(0x62dfa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62dfa8:{NFSU2_TR(0x62dfa8);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+24))));
}
B62dfaa:{NFSU2_TR(0x62dfaa);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62dfac:{NFSU2_TR(0x62dfac);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B62dfae:{NFSU2_TR(0x62dfae);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62dfb5:{NFSU2_TR(0x62dfb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62dfbc:{NFSU2_TR(0x62dfbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62dfc3:{NFSU2_TR(0x62dfc3);
if(r1(F+6)){{[[clang::musttail]] return blk_6304c4(ARGS);}}
}
B62dfc9:L62dfc9:{bud-=2;NFSU2_TR(0x62dfc9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dfcb:{NFSU2_TR(0x62dfcb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62dfd0ull));
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
PN u32 blk_62dfd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62dfd0:L62dfd0:{bud-=4;NFSU2_TR(0x62dfd0);
__builtin_memmove((R+24),(G+0),4);
}
B62dfd2:{NFSU2_TR(0x62dfd2);
u8 U[4];
w4(U+0,u32(0x700ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62dfd7:{NFSU2_TR(0x62dfd7);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62dfde:{NFSU2_TR(0x62dfde);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62dfe3ull));
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
PN u32 blk_62dfe3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62dfe3:L62dfe3:{bud-=4;NFSU2_TR(0x62dfe3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62dfe6:{NFSU2_TR(0x62dfe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62dfe8:{NFSU2_TR(0x62dfe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62dfef:{NFSU2_TR(0x62dfef);
if(r1(F+6)){{[[clang::musttail]] return blk_6304c4(ARGS);}}
}
B62dff5:L62dff5:{bud-=2;NFSU2_TR(0x62dff5);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62dff7:{NFSU2_TR(0x62dff7);
if(r1(F+6)){{[[clang::musttail]] return blk_6304c4(ARGS);}}
}
B62dffd:L62dffd:{bud-=1;NFSU2_TR(0x62dffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{EXIT(0x62e004u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_62d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x62d016:[[clang::musttail]] return blk_62d016(c,a4,a0,a1,bud);
case 0x62d01d:[[clang::musttail]] return blk_62d01d(c,a4,a0,a1,bud);
case 0x62d04e:[[clang::musttail]] return blk_62d04e(c,a4,a0,a1,bud);
case 0x62d4b0:[[clang::musttail]] return blk_62d4b0(c,a4,a0,a1,bud);
case 0x62d809:[[clang::musttail]] return blk_62d809(c,a4,a0,a1,bud);
case 0x62dbab:[[clang::musttail]] return blk_62dbab(c,a4,a0,a1,bud);
case 0x62de52:[[clang::musttail]] return blk_62de52(c,a4,a0,a1,bud);
case 0x62de82:[[clang::musttail]] return blk_62de82(c,a4,a0,a1,bud);
case 0x62dead:[[clang::musttail]] return blk_62dead(c,a4,a0,a1,bud);
case 0x62deaf:[[clang::musttail]] return blk_62deaf(c,a4,a0,a1,bud);
case 0x62deb2:[[clang::musttail]] return blk_62deb2(c,a4,a0,a1,bud);
case 0x62decd:[[clang::musttail]] return blk_62decd(c,a4,a0,a1,bud);
case 0x62dee8:[[clang::musttail]] return blk_62dee8(c,a4,a0,a1,bud);
case 0x62def2:[[clang::musttail]] return blk_62def2(c,a4,a0,a1,bud);
case 0x62df10:[[clang::musttail]] return blk_62df10(c,a4,a0,a1,bud);
case 0x62df1d:[[clang::musttail]] return blk_62df1d(c,a4,a0,a1,bud);
case 0x62df3e:[[clang::musttail]] return blk_62df3e(c,a4,a0,a1,bud);
case 0x62df4b:[[clang::musttail]] return blk_62df4b(c,a4,a0,a1,bud);
case 0x62df66:[[clang::musttail]] return blk_62df66(c,a4,a0,a1,bud);
case 0x62dfd0:[[clang::musttail]] return blk_62dfd0(c,a4,a0,a1,bud);
case 0x62dfe3:[[clang::musttail]] return blk_62dfe3(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_62d(Cpu& c){u8* R=c.regs.data();return ent_62d(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
