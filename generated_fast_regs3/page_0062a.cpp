#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bacf0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a089(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a161(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62ab69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c16e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a004(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a03b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a0b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a12d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a4b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a849(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62aaed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62ab24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62af88(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62a004(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a004:L62a004:{bud-=14;NFSU2_TR(0x62a004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62a007:{NFSU2_TR(0x62a007);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62a00e:{NFSU2_TR(0x62a00e);
u8 U[4];
w4(U+0,u32(u32(u32(0xb38ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62a015:{NFSU2_TR(0x62a015);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a016:{NFSU2_TR(0x62a016);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a017:{NFSU2_TR(0x62a017);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62a01e:{NFSU2_TR(0x62a01e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a01f:{NFSU2_TR(0x62a01f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62a026:{NFSU2_TR(0x62a026);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a02b:{NFSU2_TR(0x62a02b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B62a02e:{NFSU2_TR(0x62a02e);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1c0ull))));
}
B62a034:{NFSU2_TR(0x62a034);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a035:{NFSU2_TR(0x62a035);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a036:{NFSU2_TR(0x62a036);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62a03bull));
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
PN u32 blk_62a03b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a03b:L62a03b:{bud-=4;NFSU2_TR(0x62a03b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62a042:{NFSU2_TR(0x62a042);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
}
B62a045:{NFSU2_TR(0x62a045);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62a047:{NFSU2_TR(0x62a047);
if(r1(F+6)){{[[clang::musttail]] return blk_62a089(ARGS);}}
}
B62a049:L62a049:{bud-=17;NFSU2_TR(0x62a049);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62a050:{NFSU2_TR(0x62a050);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62a057:{NFSU2_TR(0x62a057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62a05a:{NFSU2_TR(0x62a05a);
w4(G+4,u32(u32(r4(G+4))|u32(r4(G+0))));
}
B62a05c:{NFSU2_TR(0x62a05c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62a063:{NFSU2_TR(0x62a063);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a065:{NFSU2_TR(0x62a065);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B62a067:{NFSU2_TR(0x62a067);
u8 U[8];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62a06e:{NFSU2_TR(0x62a06e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a06f:{NFSU2_TR(0x62a06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62a072:{NFSU2_TR(0x62a072);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1c0ull))));
}
B62a077:{NFSU2_TR(0x62a077);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a078:{NFSU2_TR(0x62a078);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62a07f:{NFSU2_TR(0x62a07f);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B62a082:{NFSU2_TR(0x62a082);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a083:{NFSU2_TR(0x62a083);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a084:{NFSU2_TR(0x62a084);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62a089ull));
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
PN u32 blk_62a089(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a089:L62a089:{bud-=3;NFSU2_TR(0x62a089);
u8 U[5];
w4(U+0,u32(u32(u32(0xf3ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B62a090:{NFSU2_TR(0x62a090);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B62a092:{NFSU2_TR(0x62a092);
if(r1(F+6)){{[[clang::musttail]] return blk_62ab69(ARGS);}}
}
B62a098:L62a098:{bud-=3;NFSU2_TR(0x62a098);
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
B62a0a1:{NFSU2_TR(0x62a0a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((G+0),(U+0),4);
}
B62a0a4:{NFSU2_TR(0x62a0a4);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_62a161(ARGS);}}
}
B62a0aa:L62a0aa:{bud-=4;NFSU2_TR(0x62a0aa);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a0ab:{NFSU2_TR(0x62a0ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62a0b2:{NFSU2_TR(0x62a0b2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a0b3:{NFSU2_TR(0x62a0b3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62a0b8ull));
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
PN u32 blk_62a0b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a0b8:L62a0b8:{bud-=18;NFSU2_TR(0x62a0b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x988ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62a0bf:{NFSU2_TR(0x62a0bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x98cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62a0c6:{NFSU2_TR(0x62a0c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x990ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62a0cd:{NFSU2_TR(0x62a0cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62a0d4:{NFSU2_TR(0x62a0d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62a0db:{NFSU2_TR(0x62a0db);
w4(G+4,u32(0-u32(r4(G+4))));
}
B62a0dd:{NFSU2_TR(0x62a0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62a0e4:{NFSU2_TR(0x62a0e4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a0e5:{NFSU2_TR(0x62a0e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x95cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62a0ec:{NFSU2_TR(0x62a0ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62a0f3:{NFSU2_TR(0x62a0f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a0f4:{NFSU2_TR(0x62a0f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x960ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62a0fb:{NFSU2_TR(0x62a0fb);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a0fc:{NFSU2_TR(0x62a0fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x994ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62a107:{NFSU2_TR(0x62a107);
u8 U[8];
w4(U+0,u32(u32(u32(0x998ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62a112:{NFSU2_TR(0x62a112);
u8 U[8];
w4(U+0,u32(u32(u32(0x99cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62a11d:{NFSU2_TR(0x62a11d);
u8 U[8];
w4(U+0,u32(u32(u32(0x9a0ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62a128:{NFSU2_TR(0x62a128);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62a12dull));
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
PN u32 blk_62a12d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a12d:L62a12d:{bud-=8;NFSU2_TR(0x62a12d);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62a134:{NFSU2_TR(0x62a134);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62a13b:{NFSU2_TR(0x62a13b);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62a142:{NFSU2_TR(0x62a142);
u8 U[8];
w4(U+0,u32(u32(u32(0x99cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62a149:{NFSU2_TR(0x62a149);
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
B62a14c:{NFSU2_TR(0x62a14c);
u8 U[8];
w4(U+0,u32(u32(u32(0x980ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62a153:{NFSU2_TR(0x62a153);
u8 U[8];
w4(U+0,u32(u32(u32(0x984ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62a15a:{NFSU2_TR(0x62a15a);
u8 U[4];
w4(U+0,u32(u32(u32(0x950ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_62a161(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62a161(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a161:L62a161:{bud-=197;NFSU2_TR(0x62a161);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a168:{NFSU2_TR(0x62a168);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a16a:{NFSU2_TR(0x62a16a);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a171:{NFSU2_TR(0x62a171);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a174:{NFSU2_TR(0x62a174);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a176:{NFSU2_TR(0x62a176);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a17d:{NFSU2_TR(0x62a17d);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a180:{NFSU2_TR(0x62a180);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a182:{NFSU2_TR(0x62a182);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a189:{NFSU2_TR(0x62a189);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a18c:{NFSU2_TR(0x62a18c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a18e:{NFSU2_TR(0x62a18e);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a192:{NFSU2_TR(0x62a192);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a199:{NFSU2_TR(0x62a199);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a19c:{NFSU2_TR(0x62a19c);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1a3:{NFSU2_TR(0x62a1a3);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a1a6:{NFSU2_TR(0x62a1a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a1a8:{NFSU2_TR(0x62a1a8);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1af:{NFSU2_TR(0x62a1af);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a1b2:{NFSU2_TR(0x62a1b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a1b4:{NFSU2_TR(0x62a1b4);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1bb:{NFSU2_TR(0x62a1bb);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a1be:{NFSU2_TR(0x62a1be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a1c0:{NFSU2_TR(0x62a1c0);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a1c4:{NFSU2_TR(0x62a1c4);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1cb:{NFSU2_TR(0x62a1cb);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a1ce:{NFSU2_TR(0x62a1ce);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1d5:{NFSU2_TR(0x62a1d5);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a1d8:{NFSU2_TR(0x62a1d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a1da:{NFSU2_TR(0x62a1da);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1e1:{NFSU2_TR(0x62a1e1);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a1e4:{NFSU2_TR(0x62a1e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a1e6:{NFSU2_TR(0x62a1e6);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1ed:{NFSU2_TR(0x62a1ed);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a1f0:{NFSU2_TR(0x62a1f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a1f2:{NFSU2_TR(0x62a1f2);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a1f6:{NFSU2_TR(0x62a1f6);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a1fd:{NFSU2_TR(0x62a1fd);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a200:{NFSU2_TR(0x62a200);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a207:{NFSU2_TR(0x62a207);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a20a:{NFSU2_TR(0x62a20a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a20c:{NFSU2_TR(0x62a20c);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a213:{NFSU2_TR(0x62a213);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a216:{NFSU2_TR(0x62a216);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a218:{NFSU2_TR(0x62a218);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a21f:{NFSU2_TR(0x62a21f);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a222:{NFSU2_TR(0x62a222);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a224:{NFSU2_TR(0x62a224);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a228:{NFSU2_TR(0x62a228);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a22f:{NFSU2_TR(0x62a22f);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a231:{NFSU2_TR(0x62a231);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a238:{NFSU2_TR(0x62a238);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a23b:{NFSU2_TR(0x62a23b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a23d:{NFSU2_TR(0x62a23d);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a244:{NFSU2_TR(0x62a244);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a247:{NFSU2_TR(0x62a247);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a249:{NFSU2_TR(0x62a249);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a250:{NFSU2_TR(0x62a250);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a253:{NFSU2_TR(0x62a253);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a255:{NFSU2_TR(0x62a255);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a25c:{NFSU2_TR(0x62a25c);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a263:{NFSU2_TR(0x62a263);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a266:{NFSU2_TR(0x62a266);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a26d:{NFSU2_TR(0x62a26d);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a270:{NFSU2_TR(0x62a270);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a272:{NFSU2_TR(0x62a272);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a279:{NFSU2_TR(0x62a279);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a27c:{NFSU2_TR(0x62a27c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a27e:{NFSU2_TR(0x62a27e);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a285:{NFSU2_TR(0x62a285);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a288:{NFSU2_TR(0x62a288);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a28a:{NFSU2_TR(0x62a28a);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a291:{NFSU2_TR(0x62a291);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a298:{NFSU2_TR(0x62a298);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a29b:{NFSU2_TR(0x62a29b);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a2a2:{NFSU2_TR(0x62a2a2);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a2a5:{NFSU2_TR(0x62a2a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a2a7:{NFSU2_TR(0x62a2a7);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a2ae:{NFSU2_TR(0x62a2ae);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a2b1:{NFSU2_TR(0x62a2b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a2b3:{NFSU2_TR(0x62a2b3);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a2ba:{NFSU2_TR(0x62a2ba);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a2bd:{NFSU2_TR(0x62a2bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a2bf:{NFSU2_TR(0x62a2bf);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a2c6:{NFSU2_TR(0x62a2c6);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a2cd:{NFSU2_TR(0x62a2cd);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a2d0:{NFSU2_TR(0x62a2d0);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a2d7:{NFSU2_TR(0x62a2d7);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a2da:{NFSU2_TR(0x62a2da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a2dc:{NFSU2_TR(0x62a2dc);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a2e3:{NFSU2_TR(0x62a2e3);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a2e6:{NFSU2_TR(0x62a2e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a2e8:{NFSU2_TR(0x62a2e8);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a2ef:{NFSU2_TR(0x62a2ef);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a2f2:{NFSU2_TR(0x62a2f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a2f4:{NFSU2_TR(0x62a2f4);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a2fb:{NFSU2_TR(0x62a2fb);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a302:{NFSU2_TR(0x62a302);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a304:{NFSU2_TR(0x62a304);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a30b:{NFSU2_TR(0x62a30b);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a30e:{NFSU2_TR(0x62a30e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a310:{NFSU2_TR(0x62a310);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a317:{NFSU2_TR(0x62a317);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a31a:{NFSU2_TR(0x62a31a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a31c:{NFSU2_TR(0x62a31c);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a323:{NFSU2_TR(0x62a323);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a326:{NFSU2_TR(0x62a326);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a328:{NFSU2_TR(0x62a328);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a32f:{NFSU2_TR(0x62a32f);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a336:{NFSU2_TR(0x62a336);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a339:{NFSU2_TR(0x62a339);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a340:{NFSU2_TR(0x62a340);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a343:{NFSU2_TR(0x62a343);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a345:{NFSU2_TR(0x62a345);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a34c:{NFSU2_TR(0x62a34c);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a34f:{NFSU2_TR(0x62a34f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a351:{NFSU2_TR(0x62a351);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a358:{NFSU2_TR(0x62a358);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a35b:{NFSU2_TR(0x62a35b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a35d:{NFSU2_TR(0x62a35d);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a364:{NFSU2_TR(0x62a364);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a36b:{NFSU2_TR(0x62a36b);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a36e:{NFSU2_TR(0x62a36e);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a375:{NFSU2_TR(0x62a375);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a378:{NFSU2_TR(0x62a378);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a37a:{NFSU2_TR(0x62a37a);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a381:{NFSU2_TR(0x62a381);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a384:{NFSU2_TR(0x62a384);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a386:{NFSU2_TR(0x62a386);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a38d:{NFSU2_TR(0x62a38d);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a390:{NFSU2_TR(0x62a390);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a392:{NFSU2_TR(0x62a392);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a399:{NFSU2_TR(0x62a399);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3a0:{NFSU2_TR(0x62a3a0);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3a3:{NFSU2_TR(0x62a3a3);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3aa:{NFSU2_TR(0x62a3aa);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3ad:{NFSU2_TR(0x62a3ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a3af:{NFSU2_TR(0x62a3af);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3b6:{NFSU2_TR(0x62a3b6);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3b9:{NFSU2_TR(0x62a3b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a3bb:{NFSU2_TR(0x62a3bb);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3c2:{NFSU2_TR(0x62a3c2);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3c5:{NFSU2_TR(0x62a3c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a3c7:{NFSU2_TR(0x62a3c7);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a3ce:{NFSU2_TR(0x62a3ce);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3d5:{NFSU2_TR(0x62a3d5);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3d8:{NFSU2_TR(0x62a3d8);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3df:{NFSU2_TR(0x62a3df);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3e2:{NFSU2_TR(0x62a3e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a3e4:{NFSU2_TR(0x62a3e4);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3eb:{NFSU2_TR(0x62a3eb);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3ed:{NFSU2_TR(0x62a3ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a3ef:{NFSU2_TR(0x62a3ef);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a3f6:{NFSU2_TR(0x62a3f6);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a3f9:{NFSU2_TR(0x62a3f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a3fb:{NFSU2_TR(0x62a3fb);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a402:{NFSU2_TR(0x62a402);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a409:{NFSU2_TR(0x62a409);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a40c:{NFSU2_TR(0x62a40c);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a413:{NFSU2_TR(0x62a413);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a416:{NFSU2_TR(0x62a416);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a418:{NFSU2_TR(0x62a418);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a41f:{NFSU2_TR(0x62a41f);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a422:{NFSU2_TR(0x62a422);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a424:{NFSU2_TR(0x62a424);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a42b:{NFSU2_TR(0x62a42b);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a42e:{NFSU2_TR(0x62a42e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a430:{NFSU2_TR(0x62a430);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a437:{NFSU2_TR(0x62a437);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a43e:{NFSU2_TR(0x62a43e);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a441:{NFSU2_TR(0x62a441);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a448:{NFSU2_TR(0x62a448);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a44b:{NFSU2_TR(0x62a44b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a44d:{NFSU2_TR(0x62a44d);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a454:{NFSU2_TR(0x62a454);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a457:{NFSU2_TR(0x62a457);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a459:{NFSU2_TR(0x62a459);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a460:{NFSU2_TR(0x62a460);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a463:{NFSU2_TR(0x62a463);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a465:{NFSU2_TR(0x62a465);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a46c:{NFSU2_TR(0x62a46c);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a473:{NFSU2_TR(0x62a473);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a476:{NFSU2_TR(0x62a476);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a47d:{NFSU2_TR(0x62a47d);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62a481:{NFSU2_TR(0x62a481);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a484:{NFSU2_TR(0x62a484);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a485:{NFSU2_TR(0x62a485);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62a489:{NFSU2_TR(0x62a489);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a48a:{NFSU2_TR(0x62a48a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a48c:{NFSU2_TR(0x62a48c);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a493:{NFSU2_TR(0x62a493);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a496:{NFSU2_TR(0x62a496);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a498:{NFSU2_TR(0x62a498);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a49f:{NFSU2_TR(0x62a49f);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a4a2:{NFSU2_TR(0x62a4a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a4a4:{NFSU2_TR(0x62a4a4);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a4ab:{NFSU2_TR(0x62a4ab);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62a4b0ull));
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
PN u32 blk_62a4b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a4b0:L62a4b0:{bud-=197;NFSU2_TR(0x62a4b0);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a4b4:{NFSU2_TR(0x62a4b4);
{u32 ea_=u32(r4(G+16)+u32(1576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a4bb:{NFSU2_TR(0x62a4bb);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a4bf:{NFSU2_TR(0x62a4bf);
{u32 ea_=u32(r4(G+16)+u32(1592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a4c6:{NFSU2_TR(0x62a4c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a4c8:{NFSU2_TR(0x62a4c8);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a4cc:{NFSU2_TR(0x62a4cc);
{u32 ea_=u32(r4(G+16)+u32(1608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a4d3:{NFSU2_TR(0x62a4d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a4d5:{NFSU2_TR(0x62a4d5);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a4dc:{NFSU2_TR(0x62a4dc);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a4e0:{NFSU2_TR(0x62a4e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a4e2:{NFSU2_TR(0x62a4e2);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a4e6:{NFSU2_TR(0x62a4e6);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a4ea:{NFSU2_TR(0x62a4ea);
{u32 ea_=u32(r4(G+16)+u32(1580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a4f1:{NFSU2_TR(0x62a4f1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a4f5:{NFSU2_TR(0x62a4f5);
{u32 ea_=u32(r4(G+16)+u32(1596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a4fc:{NFSU2_TR(0x62a4fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a4fe:{NFSU2_TR(0x62a4fe);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a502:{NFSU2_TR(0x62a502);
{u32 ea_=u32(r4(G+16)+u32(1612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a509:{NFSU2_TR(0x62a509);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a50b:{NFSU2_TR(0x62a50b);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a512:{NFSU2_TR(0x62a512);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a516:{NFSU2_TR(0x62a516);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a518:{NFSU2_TR(0x62a518);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a51c:{NFSU2_TR(0x62a51c);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a520:{NFSU2_TR(0x62a520);
{u32 ea_=u32(r4(G+16)+u32(1584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a527:{NFSU2_TR(0x62a527);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a52b:{NFSU2_TR(0x62a52b);
{u32 ea_=u32(r4(G+16)+u32(1600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a532:{NFSU2_TR(0x62a532);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a534:{NFSU2_TR(0x62a534);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a538:{NFSU2_TR(0x62a538);
{u32 ea_=u32(r4(G+16)+u32(1616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a53f:{NFSU2_TR(0x62a53f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a541:{NFSU2_TR(0x62a541);
{u32 ea_=u32(r4(G+16)+u32(1568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a548:{NFSU2_TR(0x62a548);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a54c:{NFSU2_TR(0x62a54c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a54e:{NFSU2_TR(0x62a54e);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a555:{NFSU2_TR(0x62a555);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a559:{NFSU2_TR(0x62a559);
{u32 ea_=u32(r4(G+16)+u32(1620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a560:{NFSU2_TR(0x62a560);
{u32 ea_=u32(r4(G+16)+u32(1572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a567:{NFSU2_TR(0x62a567);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a56b:{NFSU2_TR(0x62a56b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a56d:{NFSU2_TR(0x62a56d);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a571:{NFSU2_TR(0x62a571);
{u32 ea_=u32(r4(G+16)+u32(1588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a578:{NFSU2_TR(0x62a578);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a57a:{NFSU2_TR(0x62a57a);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a57e:{NFSU2_TR(0x62a57e);
{u32 ea_=u32(r4(G+16)+u32(1604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a585:{NFSU2_TR(0x62a585);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a587:{NFSU2_TR(0x62a587);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a58e:{NFSU2_TR(0x62a58e);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a592:{NFSU2_TR(0x62a592);
{u32 ea_=u32(r4(G+16)+u32(1576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a599:{NFSU2_TR(0x62a599);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a59d:{NFSU2_TR(0x62a59d);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a5a4:{NFSU2_TR(0x62a5a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a5a6:{NFSU2_TR(0x62a5a6);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a5aa:{NFSU2_TR(0x62a5aa);
{u32 ea_=u32(r4(G+16)+u32(1592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a5b1:{NFSU2_TR(0x62a5b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a5b3:{NFSU2_TR(0x62a5b3);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a5b7:{NFSU2_TR(0x62a5b7);
{u32 ea_=u32(r4(G+16)+u32(1608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a5be:{NFSU2_TR(0x62a5be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a5c0:{NFSU2_TR(0x62a5c0);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a5c7:{NFSU2_TR(0x62a5c7);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a5cb:{NFSU2_TR(0x62a5cb);
{u32 ea_=u32(r4(G+16)+u32(1580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a5d2:{NFSU2_TR(0x62a5d2);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a5d6:{NFSU2_TR(0x62a5d6);
{u32 ea_=u32(r4(G+16)+u32(1596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a5dd:{NFSU2_TR(0x62a5dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a5df:{NFSU2_TR(0x62a5df);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a5e3:{NFSU2_TR(0x62a5e3);
{u32 ea_=u32(r4(G+16)+u32(1612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a5ea:{NFSU2_TR(0x62a5ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a5ec:{NFSU2_TR(0x62a5ec);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a5f0:{NFSU2_TR(0x62a5f0);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a5f7:{NFSU2_TR(0x62a5f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a5f9:{NFSU2_TR(0x62a5f9);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a600:{NFSU2_TR(0x62a600);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a604:{NFSU2_TR(0x62a604);
{u32 ea_=u32(r4(G+16)+u32(1584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a60b:{NFSU2_TR(0x62a60b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a60f:{NFSU2_TR(0x62a60f);
{u32 ea_=u32(r4(G+16)+u32(1600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a616:{NFSU2_TR(0x62a616);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a618:{NFSU2_TR(0x62a618);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a61c:{NFSU2_TR(0x62a61c);
{u32 ea_=u32(r4(G+16)+u32(1616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a623:{NFSU2_TR(0x62a623);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a625:{NFSU2_TR(0x62a625);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a629:{NFSU2_TR(0x62a629);
{u32 ea_=u32(r4(G+16)+u32(1568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a630:{NFSU2_TR(0x62a630);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a632:{NFSU2_TR(0x62a632);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a639:{NFSU2_TR(0x62a639);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a63d:{NFSU2_TR(0x62a63d);
{u32 ea_=u32(r4(G+16)+u32(1620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a644:{NFSU2_TR(0x62a644);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a648:{NFSU2_TR(0x62a648);
{u32 ea_=u32(r4(G+16)+u32(1572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a64f:{NFSU2_TR(0x62a64f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a651:{NFSU2_TR(0x62a651);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a655:{NFSU2_TR(0x62a655);
{u32 ea_=u32(r4(G+16)+u32(1588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a65c:{NFSU2_TR(0x62a65c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a65e:{NFSU2_TR(0x62a65e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a662:{NFSU2_TR(0x62a662);
{u32 ea_=u32(r4(G+16)+u32(1604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a669:{NFSU2_TR(0x62a669);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a66b:{NFSU2_TR(0x62a66b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a672:{NFSU2_TR(0x62a672);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a676:{NFSU2_TR(0x62a676);
{u32 ea_=u32(r4(G+16)+u32(1576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a67d:{NFSU2_TR(0x62a67d);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a681:{NFSU2_TR(0x62a681);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a688:{NFSU2_TR(0x62a688);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a68a:{NFSU2_TR(0x62a68a);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a68e:{NFSU2_TR(0x62a68e);
{u32 ea_=u32(r4(G+16)+u32(1592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a695:{NFSU2_TR(0x62a695);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a697:{NFSU2_TR(0x62a697);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a69b:{NFSU2_TR(0x62a69b);
{u32 ea_=u32(r4(G+16)+u32(1608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a6a2:{NFSU2_TR(0x62a6a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a6a4:{NFSU2_TR(0x62a6a4);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a6ab:{NFSU2_TR(0x62a6ab);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a6af:{NFSU2_TR(0x62a6af);
{u32 ea_=u32(r4(G+16)+u32(1580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a6b6:{NFSU2_TR(0x62a6b6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a6ba:{NFSU2_TR(0x62a6ba);
{u32 ea_=u32(r4(G+16)+u32(1596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a6c1:{NFSU2_TR(0x62a6c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a6c3:{NFSU2_TR(0x62a6c3);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a6c7:{NFSU2_TR(0x62a6c7);
{u32 ea_=u32(r4(G+16)+u32(1612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a6ce:{NFSU2_TR(0x62a6ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a6d0:{NFSU2_TR(0x62a6d0);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a6d4:{NFSU2_TR(0x62a6d4);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a6db:{NFSU2_TR(0x62a6db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a6dd:{NFSU2_TR(0x62a6dd);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a6e4:{NFSU2_TR(0x62a6e4);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a6e8:{NFSU2_TR(0x62a6e8);
{u32 ea_=u32(r4(G+16)+u32(1584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a6ef:{NFSU2_TR(0x62a6ef);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a6f3:{NFSU2_TR(0x62a6f3);
{u32 ea_=u32(r4(G+16)+u32(1600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a6fa:{NFSU2_TR(0x62a6fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a6fc:{NFSU2_TR(0x62a6fc);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a700:{NFSU2_TR(0x62a700);
{u32 ea_=u32(r4(G+16)+u32(1616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a707:{NFSU2_TR(0x62a707);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a709:{NFSU2_TR(0x62a709);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a70d:{NFSU2_TR(0x62a70d);
{u32 ea_=u32(r4(G+16)+u32(1568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a714:{NFSU2_TR(0x62a714);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a716:{NFSU2_TR(0x62a716);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a71d:{NFSU2_TR(0x62a71d);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a721:{NFSU2_TR(0x62a721);
{u32 ea_=u32(r4(G+16)+u32(1620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a728:{NFSU2_TR(0x62a728);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a72c:{NFSU2_TR(0x62a72c);
{u32 ea_=u32(r4(G+16)+u32(1572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a733:{NFSU2_TR(0x62a733);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a735:{NFSU2_TR(0x62a735);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a739:{NFSU2_TR(0x62a739);
{u32 ea_=u32(r4(G+16)+u32(1588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a740:{NFSU2_TR(0x62a740);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a742:{NFSU2_TR(0x62a742);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a746:{NFSU2_TR(0x62a746);
{u32 ea_=u32(r4(G+16)+u32(1604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a74d:{NFSU2_TR(0x62a74d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a74f:{NFSU2_TR(0x62a74f);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a756:{NFSU2_TR(0x62a756);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a75a:{NFSU2_TR(0x62a75a);
{u32 ea_=u32(r4(G+16)+u32(1576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a761:{NFSU2_TR(0x62a761);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a765:{NFSU2_TR(0x62a765);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a76c:{NFSU2_TR(0x62a76c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a76e:{NFSU2_TR(0x62a76e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a772:{NFSU2_TR(0x62a772);
{u32 ea_=u32(r4(G+16)+u32(1592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a779:{NFSU2_TR(0x62a779);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a77b:{NFSU2_TR(0x62a77b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a77f:{NFSU2_TR(0x62a77f);
{u32 ea_=u32(r4(G+16)+u32(1608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a786:{NFSU2_TR(0x62a786);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a788:{NFSU2_TR(0x62a788);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a78f:{NFSU2_TR(0x62a78f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a793:{NFSU2_TR(0x62a793);
{u32 ea_=u32(r4(G+16)+u32(1580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a79a:{NFSU2_TR(0x62a79a);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a79e:{NFSU2_TR(0x62a79e);
{u32 ea_=u32(r4(G+16)+u32(1596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a7a5:{NFSU2_TR(0x62a7a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a7a7:{NFSU2_TR(0x62a7a7);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a7ab:{NFSU2_TR(0x62a7ab);
{u32 ea_=u32(r4(G+16)+u32(1612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a7b2:{NFSU2_TR(0x62a7b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a7b4:{NFSU2_TR(0x62a7b4);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a7b8:{NFSU2_TR(0x62a7b8);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a7bf:{NFSU2_TR(0x62a7bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a7c1:{NFSU2_TR(0x62a7c1);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a7c8:{NFSU2_TR(0x62a7c8);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a7cc:{NFSU2_TR(0x62a7cc);
{u32 ea_=u32(r4(G+16)+u32(1584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a7d3:{NFSU2_TR(0x62a7d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62a7d7:{NFSU2_TR(0x62a7d7);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a7db:{NFSU2_TR(0x62a7db);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a7dc:{NFSU2_TR(0x62a7dc);
{u32 ea_=u32(r4(G+16)+u32(1604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a7e3:{NFSU2_TR(0x62a7e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62a7e7:{NFSU2_TR(0x62a7e7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62a7e8:{NFSU2_TR(0x62a7e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a7ea:{NFSU2_TR(0x62a7ea);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a7ee:{NFSU2_TR(0x62a7ee);
{u32 ea_=u32(r4(G+16)+u32(1624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a7f5:{NFSU2_TR(0x62a7f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a7f7:{NFSU2_TR(0x62a7f7);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a7fb:{NFSU2_TR(0x62a7fb);
{u32 ea_=u32(r4(G+16)+u32(1576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a802:{NFSU2_TR(0x62a802);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a804:{NFSU2_TR(0x62a804);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a80b:{NFSU2_TR(0x62a80b);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a80f:{NFSU2_TR(0x62a80f);
{u32 ea_=u32(r4(G+16)+u32(1628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a816:{NFSU2_TR(0x62a816);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a81a:{NFSU2_TR(0x62a81a);
{u32 ea_=u32(r4(G+16)+u32(1580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a821:{NFSU2_TR(0x62a821);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a823:{NFSU2_TR(0x62a823);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a827:{NFSU2_TR(0x62a827);
{u32 ea_=u32(r4(G+16)+u32(1596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a82e:{NFSU2_TR(0x62a82e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a830:{NFSU2_TR(0x62a830);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a834:{NFSU2_TR(0x62a834);
{u32 ea_=u32(r4(G+16)+u32(1612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a83b:{NFSU2_TR(0x62a83b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a83d:{NFSU2_TR(0x62a83d);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a844:{NFSU2_TR(0x62a844);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62a849ull));
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
PN u32 blk_62a849(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62a849:L62a849:{bud-=198;NFSU2_TR(0x62a849);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a84d:{NFSU2_TR(0x62a84d);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a850:{NFSU2_TR(0x62a850);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a854:{NFSU2_TR(0x62a854);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a857:{NFSU2_TR(0x62a857);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a859:{NFSU2_TR(0x62a859);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a85d:{NFSU2_TR(0x62a85d);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a860:{NFSU2_TR(0x62a860);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a862:{NFSU2_TR(0x62a862);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a866:{NFSU2_TR(0x62a866);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a868:{NFSU2_TR(0x62a868);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a86a:{NFSU2_TR(0x62a86a);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a871:{NFSU2_TR(0x62a871);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a875:{NFSU2_TR(0x62a875);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a878:{NFSU2_TR(0x62a878);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a87c:{NFSU2_TR(0x62a87c);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a87f:{NFSU2_TR(0x62a87f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a881:{NFSU2_TR(0x62a881);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a885:{NFSU2_TR(0x62a885);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a888:{NFSU2_TR(0x62a888);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a88a:{NFSU2_TR(0x62a88a);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a88e:{NFSU2_TR(0x62a88e);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a891:{NFSU2_TR(0x62a891);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a893:{NFSU2_TR(0x62a893);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a89a:{NFSU2_TR(0x62a89a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a89e:{NFSU2_TR(0x62a89e);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8a1:{NFSU2_TR(0x62a8a1);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8a5:{NFSU2_TR(0x62a8a5);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8a8:{NFSU2_TR(0x62a8a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a8aa:{NFSU2_TR(0x62a8aa);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8ae:{NFSU2_TR(0x62a8ae);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8b1:{NFSU2_TR(0x62a8b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a8b3:{NFSU2_TR(0x62a8b3);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8b7:{NFSU2_TR(0x62a8b7);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8ba:{NFSU2_TR(0x62a8ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a8bc:{NFSU2_TR(0x62a8bc);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a8c3:{NFSU2_TR(0x62a8c3);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8c7:{NFSU2_TR(0x62a8c7);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8ca:{NFSU2_TR(0x62a8ca);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8ce:{NFSU2_TR(0x62a8ce);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8d1:{NFSU2_TR(0x62a8d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a8d3:{NFSU2_TR(0x62a8d3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8d7:{NFSU2_TR(0x62a8d7);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8da:{NFSU2_TR(0x62a8da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a8dc:{NFSU2_TR(0x62a8dc);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8e0:{NFSU2_TR(0x62a8e0);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8e3:{NFSU2_TR(0x62a8e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a8e5:{NFSU2_TR(0x62a8e5);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a8ec:{NFSU2_TR(0x62a8ec);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8f0:{NFSU2_TR(0x62a8f0);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8f3:{NFSU2_TR(0x62a8f3);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a8f7:{NFSU2_TR(0x62a8f7);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a8fa:{NFSU2_TR(0x62a8fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a8fc:{NFSU2_TR(0x62a8fc);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a900:{NFSU2_TR(0x62a900);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a903:{NFSU2_TR(0x62a903);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a905:{NFSU2_TR(0x62a905);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a909:{NFSU2_TR(0x62a909);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a90b:{NFSU2_TR(0x62a90b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a90d:{NFSU2_TR(0x62a90d);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a914:{NFSU2_TR(0x62a914);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a918:{NFSU2_TR(0x62a918);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a91b:{NFSU2_TR(0x62a91b);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a91f:{NFSU2_TR(0x62a91f);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a922:{NFSU2_TR(0x62a922);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a924:{NFSU2_TR(0x62a924);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a928:{NFSU2_TR(0x62a928);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a92b:{NFSU2_TR(0x62a92b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a92d:{NFSU2_TR(0x62a92d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a931:{NFSU2_TR(0x62a931);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a934:{NFSU2_TR(0x62a934);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a936:{NFSU2_TR(0x62a936);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a93d:{NFSU2_TR(0x62a93d);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a941:{NFSU2_TR(0x62a941);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a944:{NFSU2_TR(0x62a944);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a948:{NFSU2_TR(0x62a948);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a94b:{NFSU2_TR(0x62a94b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a94d:{NFSU2_TR(0x62a94d);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a951:{NFSU2_TR(0x62a951);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a954:{NFSU2_TR(0x62a954);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a956:{NFSU2_TR(0x62a956);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a95a:{NFSU2_TR(0x62a95a);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a95d:{NFSU2_TR(0x62a95d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a95f:{NFSU2_TR(0x62a95f);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a966:{NFSU2_TR(0x62a966);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a96a:{NFSU2_TR(0x62a96a);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a96d:{NFSU2_TR(0x62a96d);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a971:{NFSU2_TR(0x62a971);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a974:{NFSU2_TR(0x62a974);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a976:{NFSU2_TR(0x62a976);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a97a:{NFSU2_TR(0x62a97a);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a97d:{NFSU2_TR(0x62a97d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a97f:{NFSU2_TR(0x62a97f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a983:{NFSU2_TR(0x62a983);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a986:{NFSU2_TR(0x62a986);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a988:{NFSU2_TR(0x62a988);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a98f:{NFSU2_TR(0x62a98f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a993:{NFSU2_TR(0x62a993);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a996:{NFSU2_TR(0x62a996);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a99a:{NFSU2_TR(0x62a99a);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a99d:{NFSU2_TR(0x62a99d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a99f:{NFSU2_TR(0x62a99f);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9a3:{NFSU2_TR(0x62a9a3);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9a6:{NFSU2_TR(0x62a9a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a9a8:{NFSU2_TR(0x62a9a8);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9ac:{NFSU2_TR(0x62a9ac);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9ae:{NFSU2_TR(0x62a9ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a9b0:{NFSU2_TR(0x62a9b0);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a9b7:{NFSU2_TR(0x62a9b7);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9bb:{NFSU2_TR(0x62a9bb);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9be:{NFSU2_TR(0x62a9be);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9c2:{NFSU2_TR(0x62a9c2);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9c5:{NFSU2_TR(0x62a9c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a9c7:{NFSU2_TR(0x62a9c7);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9cb:{NFSU2_TR(0x62a9cb);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9ce:{NFSU2_TR(0x62a9ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a9d0:{NFSU2_TR(0x62a9d0);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9d4:{NFSU2_TR(0x62a9d4);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9d7:{NFSU2_TR(0x62a9d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a9d9:{NFSU2_TR(0x62a9d9);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62a9e0:{NFSU2_TR(0x62a9e0);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9e4:{NFSU2_TR(0x62a9e4);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9e7:{NFSU2_TR(0x62a9e7);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9eb:{NFSU2_TR(0x62a9eb);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9ee:{NFSU2_TR(0x62a9ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a9f0:{NFSU2_TR(0x62a9f0);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9f4:{NFSU2_TR(0x62a9f4);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62a9f7:{NFSU2_TR(0x62a9f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62a9f9:{NFSU2_TR(0x62a9f9);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62a9fd:{NFSU2_TR(0x62a9fd);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa00:{NFSU2_TR(0x62aa00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa02:{NFSU2_TR(0x62aa02);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aa09:{NFSU2_TR(0x62aa09);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa0d:{NFSU2_TR(0x62aa0d);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa10:{NFSU2_TR(0x62aa10);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa14:{NFSU2_TR(0x62aa14);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa17:{NFSU2_TR(0x62aa17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa19:{NFSU2_TR(0x62aa19);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa1d:{NFSU2_TR(0x62aa1d);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa20:{NFSU2_TR(0x62aa20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa22:{NFSU2_TR(0x62aa22);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa26:{NFSU2_TR(0x62aa26);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa29:{NFSU2_TR(0x62aa29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa2b:{NFSU2_TR(0x62aa2b);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aa32:{NFSU2_TR(0x62aa32);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa36:{NFSU2_TR(0x62aa36);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa39:{NFSU2_TR(0x62aa39);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa3d:{NFSU2_TR(0x62aa3d);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa40:{NFSU2_TR(0x62aa40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa42:{NFSU2_TR(0x62aa42);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa46:{NFSU2_TR(0x62aa46);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa49:{NFSU2_TR(0x62aa49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa4b:{NFSU2_TR(0x62aa4b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa4f:{NFSU2_TR(0x62aa4f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa51:{NFSU2_TR(0x62aa51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa53:{NFSU2_TR(0x62aa53);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aa5a:{NFSU2_TR(0x62aa5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62aa61:{NFSU2_TR(0x62aa61);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa65:{NFSU2_TR(0x62aa65);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62aa6c:{NFSU2_TR(0x62aa6c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa6f:{NFSU2_TR(0x62aa6f);
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
B62aa72:{NFSU2_TR(0x62aa72);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa76:{NFSU2_TR(0x62aa76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62aa77:{NFSU2_TR(0x62aa77);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa7a:{NFSU2_TR(0x62aa7a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62aa7b:{NFSU2_TR(0x62aa7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa7d:{NFSU2_TR(0x62aa7d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa81:{NFSU2_TR(0x62aa81);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa84:{NFSU2_TR(0x62aa84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa86:{NFSU2_TR(0x62aa86);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa8a:{NFSU2_TR(0x62aa8a);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa8d:{NFSU2_TR(0x62aa8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aa8f:{NFSU2_TR(0x62aa8f);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aa96:{NFSU2_TR(0x62aa96);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aa9a:{NFSU2_TR(0x62aa9a);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aa9d:{NFSU2_TR(0x62aa9d);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aaa1:{NFSU2_TR(0x62aaa1);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aaa4:{NFSU2_TR(0x62aaa4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aaa6:{NFSU2_TR(0x62aaa6);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aaaa:{NFSU2_TR(0x62aaaa);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aaad:{NFSU2_TR(0x62aaad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aaaf:{NFSU2_TR(0x62aaaf);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aab3:{NFSU2_TR(0x62aab3);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aab6:{NFSU2_TR(0x62aab6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aab8:{NFSU2_TR(0x62aab8);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aabf:{NFSU2_TR(0x62aabf);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aac3:{NFSU2_TR(0x62aac3);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aac6:{NFSU2_TR(0x62aac6);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aaca:{NFSU2_TR(0x62aaca);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aacd:{NFSU2_TR(0x62aacd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aacf:{NFSU2_TR(0x62aacf);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aad3:{NFSU2_TR(0x62aad3);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aad6:{NFSU2_TR(0x62aad6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aad8:{NFSU2_TR(0x62aad8);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aadc:{NFSU2_TR(0x62aadc);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aadf:{NFSU2_TR(0x62aadf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aae1:{NFSU2_TR(0x62aae1);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aae8:{NFSU2_TR(0x62aae8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62aaedull));
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
PN u32 blk_62aaed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62aaed:L62aaed:{bud-=14;NFSU2_TR(0x62aaed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62aaf0:{NFSU2_TR(0x62aaf0);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62aaf7:{NFSU2_TR(0x62aaf7);
u8 U[4];
w4(U+0,u32(u32(u32(0xb38ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62aafe:{NFSU2_TR(0x62aafe);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62aaff:{NFSU2_TR(0x62aaff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab00:{NFSU2_TR(0x62ab00);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62ab07:{NFSU2_TR(0x62ab07);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab08:{NFSU2_TR(0x62ab08);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62ab0f:{NFSU2_TR(0x62ab0f);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab14:{NFSU2_TR(0x62ab14);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B62ab17:{NFSU2_TR(0x62ab17);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1c0ull))));
}
B62ab1d:{NFSU2_TR(0x62ab1d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab1e:{NFSU2_TR(0x62ab1e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab1f:{NFSU2_TR(0x62ab1f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62ab24ull));
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
PN u32 blk_62ab24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62ab24:L62ab24:{bud-=4;NFSU2_TR(0x62ab24);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62ab2b:{NFSU2_TR(0x62ab2b);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
}
B62ab2e:{NFSU2_TR(0x62ab2e);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62ab30:{NFSU2_TR(0x62ab30);
if(r1(F+6)){{[[clang::musttail]] return blk_62ab69(ARGS);}}
}
B62ab32:L62ab32:{bud-=15;NFSU2_TR(0x62ab32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62ab35:{NFSU2_TR(0x62ab35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62ab3c:{NFSU2_TR(0x62ab3c);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62ab43:{NFSU2_TR(0x62ab43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab45:{NFSU2_TR(0x62ab45);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B62ab47:{NFSU2_TR(0x62ab47);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62ab4e:{NFSU2_TR(0x62ab4e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab4f:{NFSU2_TR(0x62ab4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62ab52:{NFSU2_TR(0x62ab52);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1c0ull))));
}
B62ab57:{NFSU2_TR(0x62ab57);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab58:{NFSU2_TR(0x62ab58);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62ab5f:{NFSU2_TR(0x62ab5f);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B62ab62:{NFSU2_TR(0x62ab62);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab63:{NFSU2_TR(0x62ab63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ab64:{NFSU2_TR(0x62ab64);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62ab69ull));
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
PN u32 blk_62ab69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62ab69:L62ab69:{bud-=3;NFSU2_TR(0x62ab69);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62ab6d:{NFSU2_TR(0x62ab6d);
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
B62ab6f:{NFSU2_TR(0x62ab6f);
if(r1(F+6)){{[[clang::musttail]] return blk_62c16e(ARGS);}}
}
B62ab75:L62ab75:{bud-=197;NFSU2_TR(0x62ab75);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ab7c:{NFSU2_TR(0x62ab7c);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ab82:{NFSU2_TR(0x62ab82);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ab89:{NFSU2_TR(0x62ab89);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ab8f:{NFSU2_TR(0x62ab8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ab91:{NFSU2_TR(0x62ab91);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ab98:{NFSU2_TR(0x62ab98);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ab9e:{NFSU2_TR(0x62ab9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aba0:{NFSU2_TR(0x62aba0);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aba7:{NFSU2_TR(0x62aba7);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62abad:{NFSU2_TR(0x62abad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62abaf:{NFSU2_TR(0x62abaf);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62abb3:{NFSU2_TR(0x62abb3);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62abba:{NFSU2_TR(0x62abba);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62abc0:{NFSU2_TR(0x62abc0);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62abc7:{NFSU2_TR(0x62abc7);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62abcd:{NFSU2_TR(0x62abcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62abcf:{NFSU2_TR(0x62abcf);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62abd6:{NFSU2_TR(0x62abd6);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62abdc:{NFSU2_TR(0x62abdc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62abde:{NFSU2_TR(0x62abde);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62abe5:{NFSU2_TR(0x62abe5);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62abeb:{NFSU2_TR(0x62abeb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62abed:{NFSU2_TR(0x62abed);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62abf1:{NFSU2_TR(0x62abf1);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62abf8:{NFSU2_TR(0x62abf8);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62abfe:{NFSU2_TR(0x62abfe);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac05:{NFSU2_TR(0x62ac05);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac0b:{NFSU2_TR(0x62ac0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac0d:{NFSU2_TR(0x62ac0d);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac14:{NFSU2_TR(0x62ac14);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac1a:{NFSU2_TR(0x62ac1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac1c:{NFSU2_TR(0x62ac1c);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac23:{NFSU2_TR(0x62ac23);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac29:{NFSU2_TR(0x62ac29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac2b:{NFSU2_TR(0x62ac2b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ac2f:{NFSU2_TR(0x62ac2f);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac36:{NFSU2_TR(0x62ac36);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac3c:{NFSU2_TR(0x62ac3c);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac43:{NFSU2_TR(0x62ac43);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac49:{NFSU2_TR(0x62ac49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac4b:{NFSU2_TR(0x62ac4b);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac52:{NFSU2_TR(0x62ac52);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac58:{NFSU2_TR(0x62ac58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac5a:{NFSU2_TR(0x62ac5a);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac61:{NFSU2_TR(0x62ac61);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac67:{NFSU2_TR(0x62ac67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac69:{NFSU2_TR(0x62ac69);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ac6d:{NFSU2_TR(0x62ac6d);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac74:{NFSU2_TR(0x62ac74);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac7a:{NFSU2_TR(0x62ac7a);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac81:{NFSU2_TR(0x62ac81);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac87:{NFSU2_TR(0x62ac87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac89:{NFSU2_TR(0x62ac89);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac90:{NFSU2_TR(0x62ac90);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ac96:{NFSU2_TR(0x62ac96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ac98:{NFSU2_TR(0x62ac98);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ac9f:{NFSU2_TR(0x62ac9f);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aca5:{NFSU2_TR(0x62aca5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aca7:{NFSU2_TR(0x62aca7);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62acae:{NFSU2_TR(0x62acae);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62acb5:{NFSU2_TR(0x62acb5);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62acbb:{NFSU2_TR(0x62acbb);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62acc2:{NFSU2_TR(0x62acc2);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62acc8:{NFSU2_TR(0x62acc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62acca:{NFSU2_TR(0x62acca);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62acd1:{NFSU2_TR(0x62acd1);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62acd7:{NFSU2_TR(0x62acd7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62acd9:{NFSU2_TR(0x62acd9);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ace0:{NFSU2_TR(0x62ace0);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ace6:{NFSU2_TR(0x62ace6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ace8:{NFSU2_TR(0x62ace8);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62acef:{NFSU2_TR(0x62acef);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62acf6:{NFSU2_TR(0x62acf6);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62acfc:{NFSU2_TR(0x62acfc);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad03:{NFSU2_TR(0x62ad03);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad09:{NFSU2_TR(0x62ad09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad0b:{NFSU2_TR(0x62ad0b);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad12:{NFSU2_TR(0x62ad12);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad18:{NFSU2_TR(0x62ad18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad1a:{NFSU2_TR(0x62ad1a);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad21:{NFSU2_TR(0x62ad21);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad27:{NFSU2_TR(0x62ad27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad29:{NFSU2_TR(0x62ad29);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ad30:{NFSU2_TR(0x62ad30);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad37:{NFSU2_TR(0x62ad37);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad3d:{NFSU2_TR(0x62ad3d);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad44:{NFSU2_TR(0x62ad44);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad4a:{NFSU2_TR(0x62ad4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad4c:{NFSU2_TR(0x62ad4c);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad53:{NFSU2_TR(0x62ad53);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad59:{NFSU2_TR(0x62ad59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad5b:{NFSU2_TR(0x62ad5b);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad62:{NFSU2_TR(0x62ad62);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad68:{NFSU2_TR(0x62ad68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad6a:{NFSU2_TR(0x62ad6a);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ad71:{NFSU2_TR(0x62ad71);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad78:{NFSU2_TR(0x62ad78);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad7e:{NFSU2_TR(0x62ad7e);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad85:{NFSU2_TR(0x62ad85);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad8b:{NFSU2_TR(0x62ad8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad8d:{NFSU2_TR(0x62ad8d);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ad94:{NFSU2_TR(0x62ad94);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ad9a:{NFSU2_TR(0x62ad9a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ad9c:{NFSU2_TR(0x62ad9c);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ada3:{NFSU2_TR(0x62ada3);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ada9:{NFSU2_TR(0x62ada9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62adab:{NFSU2_TR(0x62adab);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62adb2:{NFSU2_TR(0x62adb2);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62adb9:{NFSU2_TR(0x62adb9);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62adbf:{NFSU2_TR(0x62adbf);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62adc6:{NFSU2_TR(0x62adc6);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62adcc:{NFSU2_TR(0x62adcc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62adce:{NFSU2_TR(0x62adce);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62add5:{NFSU2_TR(0x62add5);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62addb:{NFSU2_TR(0x62addb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62addd:{NFSU2_TR(0x62addd);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ade4:{NFSU2_TR(0x62ade4);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62adea:{NFSU2_TR(0x62adea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62adec:{NFSU2_TR(0x62adec);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62adf3:{NFSU2_TR(0x62adf3);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62adfa:{NFSU2_TR(0x62adfa);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae00:{NFSU2_TR(0x62ae00);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae07:{NFSU2_TR(0x62ae07);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae0d:{NFSU2_TR(0x62ae0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ae0f:{NFSU2_TR(0x62ae0f);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae16:{NFSU2_TR(0x62ae16);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae1c:{NFSU2_TR(0x62ae1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ae1e:{NFSU2_TR(0x62ae1e);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae25:{NFSU2_TR(0x62ae25);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae2b:{NFSU2_TR(0x62ae2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ae2d:{NFSU2_TR(0x62ae2d);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ae34:{NFSU2_TR(0x62ae34);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae3b:{NFSU2_TR(0x62ae3b);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae41:{NFSU2_TR(0x62ae41);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae48:{NFSU2_TR(0x62ae48);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae4e:{NFSU2_TR(0x62ae4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ae50:{NFSU2_TR(0x62ae50);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae57:{NFSU2_TR(0x62ae57);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae5d:{NFSU2_TR(0x62ae5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ae5f:{NFSU2_TR(0x62ae5f);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae66:{NFSU2_TR(0x62ae66);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae6c:{NFSU2_TR(0x62ae6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ae6e:{NFSU2_TR(0x62ae6e);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ae75:{NFSU2_TR(0x62ae75);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae7c:{NFSU2_TR(0x62ae7c);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae82:{NFSU2_TR(0x62ae82);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae89:{NFSU2_TR(0x62ae89);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae8f:{NFSU2_TR(0x62ae8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ae91:{NFSU2_TR(0x62ae91);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ae98:{NFSU2_TR(0x62ae98);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ae9e:{NFSU2_TR(0x62ae9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aea0:{NFSU2_TR(0x62aea0);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aea7:{NFSU2_TR(0x62aea7);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aead:{NFSU2_TR(0x62aead);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aeaf:{NFSU2_TR(0x62aeaf);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aeb6:{NFSU2_TR(0x62aeb6);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aebd:{NFSU2_TR(0x62aebd);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aec3:{NFSU2_TR(0x62aec3);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aeca:{NFSU2_TR(0x62aeca);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aed0:{NFSU2_TR(0x62aed0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aed2:{NFSU2_TR(0x62aed2);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aed9:{NFSU2_TR(0x62aed9);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aedf:{NFSU2_TR(0x62aedf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aee1:{NFSU2_TR(0x62aee1);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aee8:{NFSU2_TR(0x62aee8);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62aeee:{NFSU2_TR(0x62aeee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aef0:{NFSU2_TR(0x62aef0);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aef7:{NFSU2_TR(0x62aef7);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62aefe:{NFSU2_TR(0x62aefe);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af04:{NFSU2_TR(0x62af04);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af0b:{NFSU2_TR(0x62af0b);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af11:{NFSU2_TR(0x62af11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62af13:{NFSU2_TR(0x62af13);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af1a:{NFSU2_TR(0x62af1a);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af20:{NFSU2_TR(0x62af20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62af22:{NFSU2_TR(0x62af22);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af29:{NFSU2_TR(0x62af29);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af2f:{NFSU2_TR(0x62af2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62af31:{NFSU2_TR(0x62af31);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62af38:{NFSU2_TR(0x62af38);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af3f:{NFSU2_TR(0x62af3f);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af45:{NFSU2_TR(0x62af45);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af4c:{NFSU2_TR(0x62af4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62af50:{NFSU2_TR(0x62af50);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af56:{NFSU2_TR(0x62af56);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62af57:{NFSU2_TR(0x62af57);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62af5b:{NFSU2_TR(0x62af5b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62af5c:{NFSU2_TR(0x62af5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62af5e:{NFSU2_TR(0x62af5e);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af65:{NFSU2_TR(0x62af65);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af6b:{NFSU2_TR(0x62af6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62af6d:{NFSU2_TR(0x62af6d);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af74:{NFSU2_TR(0x62af74);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af7a:{NFSU2_TR(0x62af7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62af7c:{NFSU2_TR(0x62af7c);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62af83:{NFSU2_TR(0x62af83);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62af88ull));
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
PN u32 blk_62af88(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62af88:L62af88:{bud-=27;NFSU2_TR(0x62af88);
{u32 ea_=u32(r4(G+16)+u32(1160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af8f:{NFSU2_TR(0x62af8f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af93:{NFSU2_TR(0x62af93);
{u32 ea_=u32(r4(G+16)+u32(1144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62af9a:{NFSU2_TR(0x62af9a);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62af9e:{NFSU2_TR(0x62af9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62afa0:{NFSU2_TR(0x62afa0);
{u32 ea_=u32(r4(G+16)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62afa7:{NFSU2_TR(0x62afa7);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62afab:{NFSU2_TR(0x62afab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62afad:{NFSU2_TR(0x62afad);
{u32 ea_=u32(r4(G+16)+u32(1112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62afb4:{NFSU2_TR(0x62afb4);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62afb8:{NFSU2_TR(0x62afb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62afba:{NFSU2_TR(0x62afba);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62afbe:{NFSU2_TR(0x62afbe);
{u32 ea_=u32(r4(G+16)+u32(1164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62afc5:{NFSU2_TR(0x62afc5);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62afc9:{NFSU2_TR(0x62afc9);
{u32 ea_=u32(r4(G+16)+u32(1148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62afd0:{NFSU2_TR(0x62afd0);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62afd4:{NFSU2_TR(0x62afd4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62afd6:{NFSU2_TR(0x62afd6);
{u32 ea_=u32(r4(G+16)+u32(1132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62afdd:{NFSU2_TR(0x62afdd);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62afe1:{NFSU2_TR(0x62afe1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62afe3:{NFSU2_TR(0x62afe3);
{u32 ea_=u32(r4(G+16)+u32(1116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62afea:{NFSU2_TR(0x62afea);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62afee:{NFSU2_TR(0x62afee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62aff0:{NFSU2_TR(0x62aff0);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62aff4:{NFSU2_TR(0x62aff4);
{u32 ea_=u32(r4(G+16)+u32(1168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62affb:{NFSU2_TR(0x62affb);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62afff:{NFSU2_TR(0x62afff);
{u32 ea_=u32(r4(G+16)+u32(1152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{EXIT(0x62b006u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_62a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x62a004:[[clang::musttail]] return blk_62a004(c,a4,a0,a1,bud);
case 0x62a03b:[[clang::musttail]] return blk_62a03b(c,a4,a0,a1,bud);
case 0x62a089:[[clang::musttail]] return blk_62a089(c,a4,a0,a1,bud);
case 0x62a0b8:[[clang::musttail]] return blk_62a0b8(c,a4,a0,a1,bud);
case 0x62a12d:[[clang::musttail]] return blk_62a12d(c,a4,a0,a1,bud);
case 0x62a161:[[clang::musttail]] return blk_62a161(c,a4,a0,a1,bud);
case 0x62a4b0:[[clang::musttail]] return blk_62a4b0(c,a4,a0,a1,bud);
case 0x62a849:[[clang::musttail]] return blk_62a849(c,a4,a0,a1,bud);
case 0x62aaed:[[clang::musttail]] return blk_62aaed(c,a4,a0,a1,bud);
case 0x62ab24:[[clang::musttail]] return blk_62ab24(c,a4,a0,a1,bud);
case 0x62ab69:[[clang::musttail]] return blk_62ab69(c,a4,a0,a1,bud);
case 0x62af88:[[clang::musttail]] return blk_62af88(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_62a(Cpu& c){u8* R=c.regs.data();return ent_62a(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
