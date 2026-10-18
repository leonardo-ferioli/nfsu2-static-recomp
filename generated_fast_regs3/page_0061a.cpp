#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4013d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48b1e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_502fd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59fa30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ba600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c3450(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ed980(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5f0e30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60bc90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60bcc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60d570(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60d700(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_615630(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_615a10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aaff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab94(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab96(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aba8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61abac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61abd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61abd7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ac00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ac15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ac1f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ac82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61acb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61acd5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61acdc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ad32(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ad71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ad78(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ad7b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ade0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae13(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae7c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae8e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aee4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aeee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61af2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61af42(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61af5d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61af67(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61af90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61b1cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61b1e1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61a0fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61a456(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61a7f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aa9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aac6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aade(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61abb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61abc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61abf3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ac26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ac71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ac90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61aca2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ace0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ad27(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ad80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61adf8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae4e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ae90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61af8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61af9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61afd1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61afda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61afe6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61affa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61a006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61a006:L61a006:{bud-=46;NFSU2_TR(0x61a006);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a008:{NFSU2_TR(0x61a008);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a00f:{NFSU2_TR(0x61a00f);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a016:{NFSU2_TR(0x61a016);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a018:{NFSU2_TR(0x61a018);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a01f:{NFSU2_TR(0x61a01f);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a026:{NFSU2_TR(0x61a026);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a02d:{NFSU2_TR(0x61a02d);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a034:{NFSU2_TR(0x61a034);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a03b:{NFSU2_TR(0x61a03b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a03d:{NFSU2_TR(0x61a03d);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a044:{NFSU2_TR(0x61a044);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a04b:{NFSU2_TR(0x61a04b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a04d:{NFSU2_TR(0x61a04d);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a054:{NFSU2_TR(0x61a054);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a05b:{NFSU2_TR(0x61a05b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a05d:{NFSU2_TR(0x61a05d);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a064:{NFSU2_TR(0x61a064);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a06b:{NFSU2_TR(0x61a06b);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a072:{NFSU2_TR(0x61a072);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a079:{NFSU2_TR(0x61a079);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a080:{NFSU2_TR(0x61a080);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a082:{NFSU2_TR(0x61a082);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a089:{NFSU2_TR(0x61a089);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a090:{NFSU2_TR(0x61a090);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a092:{NFSU2_TR(0x61a092);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a099:{NFSU2_TR(0x61a099);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0a0:{NFSU2_TR(0x61a0a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0a2:{NFSU2_TR(0x61a0a2);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a0a9:{NFSU2_TR(0x61a0a9);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0b0:{NFSU2_TR(0x61a0b0);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0b7:{NFSU2_TR(0x61a0b7);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0be:{NFSU2_TR(0x61a0be);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B61a0c2:{NFSU2_TR(0x61a0c2);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0c9:{NFSU2_TR(0x61a0c9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a0ca:{NFSU2_TR(0x61a0ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B61a0ce:{NFSU2_TR(0x61a0ce);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a0cf:{NFSU2_TR(0x61a0cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0d1:{NFSU2_TR(0x61a0d1);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0d8:{NFSU2_TR(0x61a0d8);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0df:{NFSU2_TR(0x61a0df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0e1:{NFSU2_TR(0x61a0e1);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a0e8:{NFSU2_TR(0x61a0e8);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a0ef:{NFSU2_TR(0x61a0ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a0f1:{NFSU2_TR(0x61a0f1);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a0f8:{NFSU2_TR(0x61a0f8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61a0fdull));
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
PN u32 blk_61a0fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61a0fd:L61a0fd:{bud-=197;NFSU2_TR(0x61a0fd);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a101:{NFSU2_TR(0x61a101);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a107:{NFSU2_TR(0x61a107);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a10b:{NFSU2_TR(0x61a10b);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a111:{NFSU2_TR(0x61a111);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a113:{NFSU2_TR(0x61a113);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a117:{NFSU2_TR(0x61a117);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a11d:{NFSU2_TR(0x61a11d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a11f:{NFSU2_TR(0x61a11f);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a123:{NFSU2_TR(0x61a123);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a129:{NFSU2_TR(0x61a129);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a12b:{NFSU2_TR(0x61a12b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a12f:{NFSU2_TR(0x61a12f);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a133:{NFSU2_TR(0x61a133);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a139:{NFSU2_TR(0x61a139);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a13d:{NFSU2_TR(0x61a13d);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a143:{NFSU2_TR(0x61a143);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a145:{NFSU2_TR(0x61a145);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a149:{NFSU2_TR(0x61a149);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a14f:{NFSU2_TR(0x61a14f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a151:{NFSU2_TR(0x61a151);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a155:{NFSU2_TR(0x61a155);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a15b:{NFSU2_TR(0x61a15b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a15d:{NFSU2_TR(0x61a15d);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a161:{NFSU2_TR(0x61a161);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a165:{NFSU2_TR(0x61a165);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a16b:{NFSU2_TR(0x61a16b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a16f:{NFSU2_TR(0x61a16f);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a175:{NFSU2_TR(0x61a175);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a177:{NFSU2_TR(0x61a177);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a17b:{NFSU2_TR(0x61a17b);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a181:{NFSU2_TR(0x61a181);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a183:{NFSU2_TR(0x61a183);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a187:{NFSU2_TR(0x61a187);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a18d:{NFSU2_TR(0x61a18d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a18f:{NFSU2_TR(0x61a18f);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a196:{NFSU2_TR(0x61a196);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a19a:{NFSU2_TR(0x61a19a);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1a0:{NFSU2_TR(0x61a1a0);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1a4:{NFSU2_TR(0x61a1a4);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1aa:{NFSU2_TR(0x61a1aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1ac:{NFSU2_TR(0x61a1ac);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1b0:{NFSU2_TR(0x61a1b0);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1b6:{NFSU2_TR(0x61a1b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1b8:{NFSU2_TR(0x61a1b8);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1bc:{NFSU2_TR(0x61a1bc);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1c2:{NFSU2_TR(0x61a1c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1c4:{NFSU2_TR(0x61a1c4);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a1cb:{NFSU2_TR(0x61a1cb);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1cf:{NFSU2_TR(0x61a1cf);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1d5:{NFSU2_TR(0x61a1d5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1d9:{NFSU2_TR(0x61a1d9);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1df:{NFSU2_TR(0x61a1df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1e1:{NFSU2_TR(0x61a1e1);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1e5:{NFSU2_TR(0x61a1e5);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1eb:{NFSU2_TR(0x61a1eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1ed:{NFSU2_TR(0x61a1ed);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a1f1:{NFSU2_TR(0x61a1f1);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a1f7:{NFSU2_TR(0x61a1f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a1f9:{NFSU2_TR(0x61a1f9);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a200:{NFSU2_TR(0x61a200);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a204:{NFSU2_TR(0x61a204);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a20a:{NFSU2_TR(0x61a20a);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a20e:{NFSU2_TR(0x61a20e);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a214:{NFSU2_TR(0x61a214);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a216:{NFSU2_TR(0x61a216);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a21a:{NFSU2_TR(0x61a21a);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a220:{NFSU2_TR(0x61a220);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a222:{NFSU2_TR(0x61a222);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a226:{NFSU2_TR(0x61a226);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a22c:{NFSU2_TR(0x61a22c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a22e:{NFSU2_TR(0x61a22e);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a235:{NFSU2_TR(0x61a235);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a239:{NFSU2_TR(0x61a239);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a23f:{NFSU2_TR(0x61a23f);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a243:{NFSU2_TR(0x61a243);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a249:{NFSU2_TR(0x61a249);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a24b:{NFSU2_TR(0x61a24b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a24f:{NFSU2_TR(0x61a24f);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a255:{NFSU2_TR(0x61a255);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a257:{NFSU2_TR(0x61a257);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a25b:{NFSU2_TR(0x61a25b);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a261:{NFSU2_TR(0x61a261);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a263:{NFSU2_TR(0x61a263);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a26a:{NFSU2_TR(0x61a26a);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a26e:{NFSU2_TR(0x61a26e);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a274:{NFSU2_TR(0x61a274);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a278:{NFSU2_TR(0x61a278);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a27e:{NFSU2_TR(0x61a27e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a280:{NFSU2_TR(0x61a280);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a284:{NFSU2_TR(0x61a284);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a28a:{NFSU2_TR(0x61a28a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a28c:{NFSU2_TR(0x61a28c);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a290:{NFSU2_TR(0x61a290);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a296:{NFSU2_TR(0x61a296);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a298:{NFSU2_TR(0x61a298);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a29f:{NFSU2_TR(0x61a29f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2a3:{NFSU2_TR(0x61a2a3);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2a9:{NFSU2_TR(0x61a2a9);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2ad:{NFSU2_TR(0x61a2ad);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2b3:{NFSU2_TR(0x61a2b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2b5:{NFSU2_TR(0x61a2b5);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2b9:{NFSU2_TR(0x61a2b9);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2bf:{NFSU2_TR(0x61a2bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2c1:{NFSU2_TR(0x61a2c1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2c5:{NFSU2_TR(0x61a2c5);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2cb:{NFSU2_TR(0x61a2cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2cd:{NFSU2_TR(0x61a2cd);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a2d4:{NFSU2_TR(0x61a2d4);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2d8:{NFSU2_TR(0x61a2d8);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2de:{NFSU2_TR(0x61a2de);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2e2:{NFSU2_TR(0x61a2e2);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2e8:{NFSU2_TR(0x61a2e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2ea:{NFSU2_TR(0x61a2ea);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2ee:{NFSU2_TR(0x61a2ee);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a2f4:{NFSU2_TR(0x61a2f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a2f6:{NFSU2_TR(0x61a2f6);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a2fa:{NFSU2_TR(0x61a2fa);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a300:{NFSU2_TR(0x61a300);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a302:{NFSU2_TR(0x61a302);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a309:{NFSU2_TR(0x61a309);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a30d:{NFSU2_TR(0x61a30d);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a313:{NFSU2_TR(0x61a313);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a317:{NFSU2_TR(0x61a317);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a31d:{NFSU2_TR(0x61a31d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a31f:{NFSU2_TR(0x61a31f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a323:{NFSU2_TR(0x61a323);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a329:{NFSU2_TR(0x61a329);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a32b:{NFSU2_TR(0x61a32b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a32f:{NFSU2_TR(0x61a32f);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a335:{NFSU2_TR(0x61a335);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a337:{NFSU2_TR(0x61a337);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a33e:{NFSU2_TR(0x61a33e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a342:{NFSU2_TR(0x61a342);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a348:{NFSU2_TR(0x61a348);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a34c:{NFSU2_TR(0x61a34c);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a352:{NFSU2_TR(0x61a352);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a354:{NFSU2_TR(0x61a354);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a358:{NFSU2_TR(0x61a358);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a35e:{NFSU2_TR(0x61a35e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a360:{NFSU2_TR(0x61a360);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a364:{NFSU2_TR(0x61a364);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a36a:{NFSU2_TR(0x61a36a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a36c:{NFSU2_TR(0x61a36c);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a373:{NFSU2_TR(0x61a373);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a377:{NFSU2_TR(0x61a377);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a37d:{NFSU2_TR(0x61a37d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a381:{NFSU2_TR(0x61a381);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a387:{NFSU2_TR(0x61a387);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a389:{NFSU2_TR(0x61a389);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a38d:{NFSU2_TR(0x61a38d);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a393:{NFSU2_TR(0x61a393);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a395:{NFSU2_TR(0x61a395);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a399:{NFSU2_TR(0x61a399);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a39f:{NFSU2_TR(0x61a39f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3a1:{NFSU2_TR(0x61a3a1);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a3a8:{NFSU2_TR(0x61a3a8);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3ac:{NFSU2_TR(0x61a3ac);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3b2:{NFSU2_TR(0x61a3b2);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3b6:{NFSU2_TR(0x61a3b6);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3bc:{NFSU2_TR(0x61a3bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3be:{NFSU2_TR(0x61a3be);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3c2:{NFSU2_TR(0x61a3c2);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3c8:{NFSU2_TR(0x61a3c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3ca:{NFSU2_TR(0x61a3ca);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3ce:{NFSU2_TR(0x61a3ce);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3d4:{NFSU2_TR(0x61a3d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3d6:{NFSU2_TR(0x61a3d6);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a3dd:{NFSU2_TR(0x61a3dd);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3e1:{NFSU2_TR(0x61a3e1);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3e7:{NFSU2_TR(0x61a3e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61a3eb:{NFSU2_TR(0x61a3eb);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a3ef:{NFSU2_TR(0x61a3ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a3f0:{NFSU2_TR(0x61a3f0);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a3f6:{NFSU2_TR(0x61a3f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B61a3fa:{NFSU2_TR(0x61a3fa);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a3fb:{NFSU2_TR(0x61a3fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a3fd:{NFSU2_TR(0x61a3fd);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a401:{NFSU2_TR(0x61a401);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a407:{NFSU2_TR(0x61a407);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a409:{NFSU2_TR(0x61a409);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a40d:{NFSU2_TR(0x61a40d);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a413:{NFSU2_TR(0x61a413);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a415:{NFSU2_TR(0x61a415);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a41c:{NFSU2_TR(0x61a41c);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a420:{NFSU2_TR(0x61a420);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a426:{NFSU2_TR(0x61a426);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a42a:{NFSU2_TR(0x61a42a);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a430:{NFSU2_TR(0x61a430);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a432:{NFSU2_TR(0x61a432);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a436:{NFSU2_TR(0x61a436);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a43c:{NFSU2_TR(0x61a43c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a43e:{NFSU2_TR(0x61a43e);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a442:{NFSU2_TR(0x61a442);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a448:{NFSU2_TR(0x61a448);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a44a:{NFSU2_TR(0x61a44a);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a451:{NFSU2_TR(0x61a451);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61a456ull));
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
PN u32 blk_61a456(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61a456:L61a456:{bud-=197;NFSU2_TR(0x61a456);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a45d:{NFSU2_TR(0x61a45d);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a461:{NFSU2_TR(0x61a461);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a468:{NFSU2_TR(0x61a468);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a46c:{NFSU2_TR(0x61a46c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a46e:{NFSU2_TR(0x61a46e);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a475:{NFSU2_TR(0x61a475);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a479:{NFSU2_TR(0x61a479);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a47b:{NFSU2_TR(0x61a47b);
{u32 ea_=u32(r4(G+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a482:{NFSU2_TR(0x61a482);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a486:{NFSU2_TR(0x61a486);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a488:{NFSU2_TR(0x61a488);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a48f:{NFSU2_TR(0x61a48f);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a496:{NFSU2_TR(0x61a496);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a49a:{NFSU2_TR(0x61a49a);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4a1:{NFSU2_TR(0x61a4a1);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4a5:{NFSU2_TR(0x61a4a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4a7:{NFSU2_TR(0x61a4a7);
{u32 ea_=u32(r4(G+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4ae:{NFSU2_TR(0x61a4ae);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4b2:{NFSU2_TR(0x61a4b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4b4:{NFSU2_TR(0x61a4b4);
{u32 ea_=u32(r4(G+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4bb:{NFSU2_TR(0x61a4bb);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4bf:{NFSU2_TR(0x61a4bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4c1:{NFSU2_TR(0x61a4c1);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a4c8:{NFSU2_TR(0x61a4c8);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4cf:{NFSU2_TR(0x61a4cf);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4d3:{NFSU2_TR(0x61a4d3);
{u32 ea_=u32(r4(G+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4da:{NFSU2_TR(0x61a4da);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4de:{NFSU2_TR(0x61a4de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4e0:{NFSU2_TR(0x61a4e0);
{u32 ea_=u32(r4(G+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4e7:{NFSU2_TR(0x61a4e7);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4eb:{NFSU2_TR(0x61a4eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4ed:{NFSU2_TR(0x61a4ed);
{u32 ea_=u32(r4(G+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a4f4:{NFSU2_TR(0x61a4f4);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a4f8:{NFSU2_TR(0x61a4f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a4fa:{NFSU2_TR(0x61a4fa);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a501:{NFSU2_TR(0x61a501);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a508:{NFSU2_TR(0x61a508);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a50c:{NFSU2_TR(0x61a50c);
{u32 ea_=u32(r4(G+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a513:{NFSU2_TR(0x61a513);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a517:{NFSU2_TR(0x61a517);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a519:{NFSU2_TR(0x61a519);
{u32 ea_=u32(r4(G+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a520:{NFSU2_TR(0x61a520);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a524:{NFSU2_TR(0x61a524);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a526:{NFSU2_TR(0x61a526);
{u32 ea_=u32(r4(G+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a52d:{NFSU2_TR(0x61a52d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a531:{NFSU2_TR(0x61a531);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a533:{NFSU2_TR(0x61a533);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a53a:{NFSU2_TR(0x61a53a);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a541:{NFSU2_TR(0x61a541);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a545:{NFSU2_TR(0x61a545);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a54c:{NFSU2_TR(0x61a54c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a550:{NFSU2_TR(0x61a550);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a552:{NFSU2_TR(0x61a552);
{u32 ea_=u32(r4(G+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a559:{NFSU2_TR(0x61a559);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a55d:{NFSU2_TR(0x61a55d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a55f:{NFSU2_TR(0x61a55f);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a566:{NFSU2_TR(0x61a566);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a56a:{NFSU2_TR(0x61a56a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a56c:{NFSU2_TR(0x61a56c);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a573:{NFSU2_TR(0x61a573);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a57a:{NFSU2_TR(0x61a57a);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a57e:{NFSU2_TR(0x61a57e);
{u32 ea_=u32(r4(G+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a585:{NFSU2_TR(0x61a585);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a589:{NFSU2_TR(0x61a589);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a58b:{NFSU2_TR(0x61a58b);
{u32 ea_=u32(r4(G+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a592:{NFSU2_TR(0x61a592);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a596:{NFSU2_TR(0x61a596);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a598:{NFSU2_TR(0x61a598);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a59f:{NFSU2_TR(0x61a59f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5a3:{NFSU2_TR(0x61a5a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5a5:{NFSU2_TR(0x61a5a5);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a5ac:{NFSU2_TR(0x61a5ac);
{u32 ea_=u32(r4(G+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5b3:{NFSU2_TR(0x61a5b3);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5b7:{NFSU2_TR(0x61a5b7);
{u32 ea_=u32(r4(G+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5be:{NFSU2_TR(0x61a5be);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5c2:{NFSU2_TR(0x61a5c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5c4:{NFSU2_TR(0x61a5c4);
{u32 ea_=u32(r4(G+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5cb:{NFSU2_TR(0x61a5cb);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5cf:{NFSU2_TR(0x61a5cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5d1:{NFSU2_TR(0x61a5d1);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5d8:{NFSU2_TR(0x61a5d8);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5dc:{NFSU2_TR(0x61a5dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5de:{NFSU2_TR(0x61a5de);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a5e5:{NFSU2_TR(0x61a5e5);
{u32 ea_=u32(r4(G+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5ec:{NFSU2_TR(0x61a5ec);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5f0:{NFSU2_TR(0x61a5f0);
{u32 ea_=u32(r4(G+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a5f7:{NFSU2_TR(0x61a5f7);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a5fb:{NFSU2_TR(0x61a5fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a5fd:{NFSU2_TR(0x61a5fd);
{u32 ea_=u32(r4(G+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a604:{NFSU2_TR(0x61a604);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a608:{NFSU2_TR(0x61a608);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a60a:{NFSU2_TR(0x61a60a);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a611:{NFSU2_TR(0x61a611);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a615:{NFSU2_TR(0x61a615);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a617:{NFSU2_TR(0x61a617);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a61e:{NFSU2_TR(0x61a61e);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a625:{NFSU2_TR(0x61a625);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a629:{NFSU2_TR(0x61a629);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a630:{NFSU2_TR(0x61a630);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a634:{NFSU2_TR(0x61a634);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a636:{NFSU2_TR(0x61a636);
{u32 ea_=u32(r4(G+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a63d:{NFSU2_TR(0x61a63d);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a641:{NFSU2_TR(0x61a641);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a643:{NFSU2_TR(0x61a643);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a64a:{NFSU2_TR(0x61a64a);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a64e:{NFSU2_TR(0x61a64e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a650:{NFSU2_TR(0x61a650);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a657:{NFSU2_TR(0x61a657);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a65e:{NFSU2_TR(0x61a65e);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a662:{NFSU2_TR(0x61a662);
{u32 ea_=u32(r4(G+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a669:{NFSU2_TR(0x61a669);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a66d:{NFSU2_TR(0x61a66d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a66f:{NFSU2_TR(0x61a66f);
{u32 ea_=u32(r4(G+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a676:{NFSU2_TR(0x61a676);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a67a:{NFSU2_TR(0x61a67a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a67c:{NFSU2_TR(0x61a67c);
{u32 ea_=u32(r4(G+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a683:{NFSU2_TR(0x61a683);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a687:{NFSU2_TR(0x61a687);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a689:{NFSU2_TR(0x61a689);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a690:{NFSU2_TR(0x61a690);
{u32 ea_=u32(r4(G+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a697:{NFSU2_TR(0x61a697);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a69b:{NFSU2_TR(0x61a69b);
{u32 ea_=u32(r4(G+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6a2:{NFSU2_TR(0x61a6a2);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6a6:{NFSU2_TR(0x61a6a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6a8:{NFSU2_TR(0x61a6a8);
{u32 ea_=u32(r4(G+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6af:{NFSU2_TR(0x61a6af);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6b3:{NFSU2_TR(0x61a6b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6b5:{NFSU2_TR(0x61a6b5);
{u32 ea_=u32(r4(G+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6bc:{NFSU2_TR(0x61a6bc);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6c0:{NFSU2_TR(0x61a6c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6c2:{NFSU2_TR(0x61a6c2);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a6c9:{NFSU2_TR(0x61a6c9);
{u32 ea_=u32(r4(G+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6d0:{NFSU2_TR(0x61a6d0);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6d4:{NFSU2_TR(0x61a6d4);
{u32 ea_=u32(r4(G+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6db:{NFSU2_TR(0x61a6db);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6df:{NFSU2_TR(0x61a6df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6e1:{NFSU2_TR(0x61a6e1);
{u32 ea_=u32(r4(G+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6e8:{NFSU2_TR(0x61a6e8);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6ec:{NFSU2_TR(0x61a6ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6ee:{NFSU2_TR(0x61a6ee);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a6f5:{NFSU2_TR(0x61a6f5);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a6f9:{NFSU2_TR(0x61a6f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a6fb:{NFSU2_TR(0x61a6fb);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a702:{NFSU2_TR(0x61a702);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a709:{NFSU2_TR(0x61a709);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a70d:{NFSU2_TR(0x61a70d);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a714:{NFSU2_TR(0x61a714);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a718:{NFSU2_TR(0x61a718);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a71a:{NFSU2_TR(0x61a71a);
{u32 ea_=u32(r4(G+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a721:{NFSU2_TR(0x61a721);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a725:{NFSU2_TR(0x61a725);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a727:{NFSU2_TR(0x61a727);
{u32 ea_=u32(r4(G+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a72e:{NFSU2_TR(0x61a72e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a732:{NFSU2_TR(0x61a732);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a734:{NFSU2_TR(0x61a734);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a73b:{NFSU2_TR(0x61a73b);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B61a742:{NFSU2_TR(0x61a742);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a749:{NFSU2_TR(0x61a749);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a74a:{NFSU2_TR(0x61a74a);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a74e:{NFSU2_TR(0x61a74e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61a752:{NFSU2_TR(0x61a752);
{u32 ea_=u32(r4(G+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a759:{NFSU2_TR(0x61a759);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a75a:{NFSU2_TR(0x61a75a);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a75e:{NFSU2_TR(0x61a75e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a760:{NFSU2_TR(0x61a760);
{u32 ea_=u32(r4(G+16)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a767:{NFSU2_TR(0x61a767);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a76b:{NFSU2_TR(0x61a76b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a76d:{NFSU2_TR(0x61a76d);
{u32 ea_=u32(r4(G+16)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a774:{NFSU2_TR(0x61a774);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a778:{NFSU2_TR(0x61a778);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a77a:{NFSU2_TR(0x61a77a);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a781:{NFSU2_TR(0x61a781);
{u32 ea_=u32(r4(G+16)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a788:{NFSU2_TR(0x61a788);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a78c:{NFSU2_TR(0x61a78c);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a793:{NFSU2_TR(0x61a793);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a797:{NFSU2_TR(0x61a797);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a799:{NFSU2_TR(0x61a799);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7a0:{NFSU2_TR(0x61a7a0);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7a4:{NFSU2_TR(0x61a7a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7a6:{NFSU2_TR(0x61a7a6);
{u32 ea_=u32(r4(G+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7ad:{NFSU2_TR(0x61a7ad);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7b1:{NFSU2_TR(0x61a7b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7b3:{NFSU2_TR(0x61a7b3);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a7ba:{NFSU2_TR(0x61a7ba);
{u32 ea_=u32(r4(G+16)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7c1:{NFSU2_TR(0x61a7c1);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7c5:{NFSU2_TR(0x61a7c5);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7cc:{NFSU2_TR(0x61a7cc);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7d0:{NFSU2_TR(0x61a7d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7d2:{NFSU2_TR(0x61a7d2);
{u32 ea_=u32(r4(G+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7d9:{NFSU2_TR(0x61a7d9);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7dd:{NFSU2_TR(0x61a7dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7df:{NFSU2_TR(0x61a7df);
{u32 ea_=u32(r4(G+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7e6:{NFSU2_TR(0x61a7e6);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7ea:{NFSU2_TR(0x61a7ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a7ec:{NFSU2_TR(0x61a7ec);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a7f3:{NFSU2_TR(0x61a7f3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61a7f8ull));
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
PN u32 blk_61a7f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61a7f8:L61a7f8:{bud-=198;NFSU2_TR(0x61a7f8);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a7fc:{NFSU2_TR(0x61a7fc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a7fe:{NFSU2_TR(0x61a7fe);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a802:{NFSU2_TR(0x61a802);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a805:{NFSU2_TR(0x61a805);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a807:{NFSU2_TR(0x61a807);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a80b:{NFSU2_TR(0x61a80b);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a80e:{NFSU2_TR(0x61a80e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a810:{NFSU2_TR(0x61a810);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a814:{NFSU2_TR(0x61a814);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a817:{NFSU2_TR(0x61a817);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a819:{NFSU2_TR(0x61a819);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a820:{NFSU2_TR(0x61a820);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a824:{NFSU2_TR(0x61a824);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a827:{NFSU2_TR(0x61a827);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a82b:{NFSU2_TR(0x61a82b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a82e:{NFSU2_TR(0x61a82e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a830:{NFSU2_TR(0x61a830);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a834:{NFSU2_TR(0x61a834);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a837:{NFSU2_TR(0x61a837);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a839:{NFSU2_TR(0x61a839);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a83d:{NFSU2_TR(0x61a83d);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a840:{NFSU2_TR(0x61a840);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a842:{NFSU2_TR(0x61a842);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a849:{NFSU2_TR(0x61a849);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a84d:{NFSU2_TR(0x61a84d);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a850:{NFSU2_TR(0x61a850);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a854:{NFSU2_TR(0x61a854);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a857:{NFSU2_TR(0x61a857);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a859:{NFSU2_TR(0x61a859);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a85d:{NFSU2_TR(0x61a85d);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a860:{NFSU2_TR(0x61a860);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a862:{NFSU2_TR(0x61a862);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a866:{NFSU2_TR(0x61a866);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a869:{NFSU2_TR(0x61a869);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a86b:{NFSU2_TR(0x61a86b);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a872:{NFSU2_TR(0x61a872);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a876:{NFSU2_TR(0x61a876);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a879:{NFSU2_TR(0x61a879);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a87d:{NFSU2_TR(0x61a87d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a880:{NFSU2_TR(0x61a880);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a882:{NFSU2_TR(0x61a882);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a886:{NFSU2_TR(0x61a886);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a889:{NFSU2_TR(0x61a889);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a88b:{NFSU2_TR(0x61a88b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a88f:{NFSU2_TR(0x61a88f);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a892:{NFSU2_TR(0x61a892);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a894:{NFSU2_TR(0x61a894);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a89b:{NFSU2_TR(0x61a89b);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a89f:{NFSU2_TR(0x61a89f);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8a2:{NFSU2_TR(0x61a8a2);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8a6:{NFSU2_TR(0x61a8a6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8a8:{NFSU2_TR(0x61a8a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8aa:{NFSU2_TR(0x61a8aa);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8ae:{NFSU2_TR(0x61a8ae);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8b1:{NFSU2_TR(0x61a8b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8b3:{NFSU2_TR(0x61a8b3);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8b7:{NFSU2_TR(0x61a8b7);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8ba:{NFSU2_TR(0x61a8ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8bc:{NFSU2_TR(0x61a8bc);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a8c3:{NFSU2_TR(0x61a8c3);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8c7:{NFSU2_TR(0x61a8c7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8ca:{NFSU2_TR(0x61a8ca);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8ce:{NFSU2_TR(0x61a8ce);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8d1:{NFSU2_TR(0x61a8d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8d3:{NFSU2_TR(0x61a8d3);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8d7:{NFSU2_TR(0x61a8d7);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8da:{NFSU2_TR(0x61a8da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8dc:{NFSU2_TR(0x61a8dc);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8e0:{NFSU2_TR(0x61a8e0);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8e3:{NFSU2_TR(0x61a8e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8e5:{NFSU2_TR(0x61a8e5);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a8ec:{NFSU2_TR(0x61a8ec);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8f0:{NFSU2_TR(0x61a8f0);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8f3:{NFSU2_TR(0x61a8f3);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a8f7:{NFSU2_TR(0x61a8f7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a8fa:{NFSU2_TR(0x61a8fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a8fc:{NFSU2_TR(0x61a8fc);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a900:{NFSU2_TR(0x61a900);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a903:{NFSU2_TR(0x61a903);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a905:{NFSU2_TR(0x61a905);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a909:{NFSU2_TR(0x61a909);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a90c:{NFSU2_TR(0x61a90c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a90e:{NFSU2_TR(0x61a90e);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a915:{NFSU2_TR(0x61a915);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a919:{NFSU2_TR(0x61a919);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a91c:{NFSU2_TR(0x61a91c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a920:{NFSU2_TR(0x61a920);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a923:{NFSU2_TR(0x61a923);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a925:{NFSU2_TR(0x61a925);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a929:{NFSU2_TR(0x61a929);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a92c:{NFSU2_TR(0x61a92c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a92e:{NFSU2_TR(0x61a92e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a932:{NFSU2_TR(0x61a932);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a935:{NFSU2_TR(0x61a935);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a937:{NFSU2_TR(0x61a937);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a93e:{NFSU2_TR(0x61a93e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a942:{NFSU2_TR(0x61a942);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a945:{NFSU2_TR(0x61a945);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a949:{NFSU2_TR(0x61a949);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a94b:{NFSU2_TR(0x61a94b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a94d:{NFSU2_TR(0x61a94d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a951:{NFSU2_TR(0x61a951);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a954:{NFSU2_TR(0x61a954);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a956:{NFSU2_TR(0x61a956);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a95a:{NFSU2_TR(0x61a95a);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a95d:{NFSU2_TR(0x61a95d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a95f:{NFSU2_TR(0x61a95f);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a966:{NFSU2_TR(0x61a966);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a96a:{NFSU2_TR(0x61a96a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a96d:{NFSU2_TR(0x61a96d);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a971:{NFSU2_TR(0x61a971);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a974:{NFSU2_TR(0x61a974);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a976:{NFSU2_TR(0x61a976);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a97a:{NFSU2_TR(0x61a97a);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a97d:{NFSU2_TR(0x61a97d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a97f:{NFSU2_TR(0x61a97f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a983:{NFSU2_TR(0x61a983);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a986:{NFSU2_TR(0x61a986);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a988:{NFSU2_TR(0x61a988);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a98f:{NFSU2_TR(0x61a98f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a993:{NFSU2_TR(0x61a993);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a996:{NFSU2_TR(0x61a996);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a99a:{NFSU2_TR(0x61a99a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a99d:{NFSU2_TR(0x61a99d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a99f:{NFSU2_TR(0x61a99f);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9a3:{NFSU2_TR(0x61a9a3);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9a6:{NFSU2_TR(0x61a9a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9a8:{NFSU2_TR(0x61a9a8);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9ac:{NFSU2_TR(0x61a9ac);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9af:{NFSU2_TR(0x61a9af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9b1:{NFSU2_TR(0x61a9b1);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a9b8:{NFSU2_TR(0x61a9b8);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9bc:{NFSU2_TR(0x61a9bc);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9bf:{NFSU2_TR(0x61a9bf);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9c3:{NFSU2_TR(0x61a9c3);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9c6:{NFSU2_TR(0x61a9c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9c8:{NFSU2_TR(0x61a9c8);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9cc:{NFSU2_TR(0x61a9cc);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9cf:{NFSU2_TR(0x61a9cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9d1:{NFSU2_TR(0x61a9d1);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9d5:{NFSU2_TR(0x61a9d5);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9d8:{NFSU2_TR(0x61a9d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61a9da:{NFSU2_TR(0x61a9da);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61a9de:{NFSU2_TR(0x61a9de);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B61a9e5:{NFSU2_TR(0x61a9e5);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61a9ec:{NFSU2_TR(0x61a9ec);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a9ed:{NFSU2_TR(0x61a9ed);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9f1:{NFSU2_TR(0x61a9f1);
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
B61a9f7:{NFSU2_TR(0x61a9f7);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61a9fa:{NFSU2_TR(0x61a9fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61a9fb:{NFSU2_TR(0x61a9fb);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61a9ff:{NFSU2_TR(0x61a9ff);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa01:{NFSU2_TR(0x61aa01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa03:{NFSU2_TR(0x61aa03);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa07:{NFSU2_TR(0x61aa07);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa0a:{NFSU2_TR(0x61aa0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa0c:{NFSU2_TR(0x61aa0c);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa10:{NFSU2_TR(0x61aa10);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa13:{NFSU2_TR(0x61aa13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa15:{NFSU2_TR(0x61aa15);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa1c:{NFSU2_TR(0x61aa1c);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa20:{NFSU2_TR(0x61aa20);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa23:{NFSU2_TR(0x61aa23);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa27:{NFSU2_TR(0x61aa27);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa2a:{NFSU2_TR(0x61aa2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa2c:{NFSU2_TR(0x61aa2c);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa30:{NFSU2_TR(0x61aa30);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa33:{NFSU2_TR(0x61aa33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa35:{NFSU2_TR(0x61aa35);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa39:{NFSU2_TR(0x61aa39);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa3c:{NFSU2_TR(0x61aa3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa3e:{NFSU2_TR(0x61aa3e);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa45:{NFSU2_TR(0x61aa45);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa49:{NFSU2_TR(0x61aa49);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa4c:{NFSU2_TR(0x61aa4c);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa50:{NFSU2_TR(0x61aa50);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa53:{NFSU2_TR(0x61aa53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa55:{NFSU2_TR(0x61aa55);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa59:{NFSU2_TR(0x61aa59);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa5c:{NFSU2_TR(0x61aa5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa5e:{NFSU2_TR(0x61aa5e);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa62:{NFSU2_TR(0x61aa62);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa65:{NFSU2_TR(0x61aa65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa67:{NFSU2_TR(0x61aa67);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa6e:{NFSU2_TR(0x61aa6e);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa72:{NFSU2_TR(0x61aa72);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa75:{NFSU2_TR(0x61aa75);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa79:{NFSU2_TR(0x61aa79);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa7c:{NFSU2_TR(0x61aa7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa7e:{NFSU2_TR(0x61aa7e);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa82:{NFSU2_TR(0x61aa82);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa85:{NFSU2_TR(0x61aa85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa87:{NFSU2_TR(0x61aa87);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aa8b:{NFSU2_TR(0x61aa8b);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61aa8e:{NFSU2_TR(0x61aa8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61aa90:{NFSU2_TR(0x61aa90);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61aa97:{NFSU2_TR(0x61aa97);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61aa9cull));
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
PN u32 blk_61aa9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aa9c:L61aa9c:{bud-=12;NFSU2_TR(0x61aa9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61aa9f:{NFSU2_TR(0x61aa9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61aaa3:{NFSU2_TR(0x61aaa3);
u8 U[4];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B61aaaa:{NFSU2_TR(0x61aaaa);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aaab:{NFSU2_TR(0x61aaab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aaac:{NFSU2_TR(0x61aaac);
u8 U[4];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B61aab3:{NFSU2_TR(0x61aab3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x540ull))));
}
B61aab9:{NFSU2_TR(0x61aab9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aaba:{NFSU2_TR(0x61aaba);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aabf:{NFSU2_TR(0x61aabf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aac0:{NFSU2_TR(0x61aac0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aac1:{NFSU2_TR(0x61aac1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61aac6ull));
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
PN u32 blk_61aac6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aac6:L61aac6:{bud-=4;NFSU2_TR(0x61aac6);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61aacd:{NFSU2_TR(0x61aacd);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x38ull))));
}
B61aad0:{NFSU2_TR(0x61aad0);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61aad2:{NFSU2_TR(0x61aad2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61aaff(ARGS);}}
}
B61aad4:L61aad4:{bud-=4;NFSU2_TR(0x61aad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61aad7:{NFSU2_TR(0x61aad7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aad8:{NFSU2_TR(0x61aad8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aad9:{NFSU2_TR(0x61aad9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61aadeull));
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
PN u32 blk_61aade(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aade:L61aade:{bud-=5;NFSU2_TR(0x61aade);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61aae4:{NFSU2_TR(0x61aae4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B61aae7:{NFSU2_TR(0x61aae7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B61aae9:{NFSU2_TR(0x61aae9);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B61aaec:{NFSU2_TR(0x61aaec);
if(r1(F+2)){{[[clang::musttail]] return blk_61aaff(ARGS);}}
}
B61aaee:L61aaee:{bud-=3;NFSU2_TR(0x61aaee);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61aaf2:{NFSU2_TR(0x61aaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61aaf8:{NFSU2_TR(0x61aaf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_61aaff(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61aaff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aaff:L61aaff:{bud-=3;NFSU2_TR(0x61aaff);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61ab06:{NFSU2_TR(0x61ab06);
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
B61ab08:{NFSU2_TR(0x61ab08);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab25(ARGS);}}
}
B61ab0a:L61ab0a:{bud-=11;NFSU2_TR(0x61ab0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ab0d:{NFSU2_TR(0x61ab0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab0f:{NFSU2_TR(0x61ab0f);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B61ab11:{NFSU2_TR(0x61ab11);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x8000ull))));
}
B61ab17:{NFSU2_TR(0x61ab17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab18:{NFSU2_TR(0x61ab18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab19:{NFSU2_TR(0x61ab19);
__builtin_memmove((G+4),(G+0),4);
}
B61ab1b:{NFSU2_TR(0x61ab1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab1c:{NFSU2_TR(0x61ab1c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab1d:{NFSU2_TR(0x61ab1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61ab20:{NFSU2_TR(0x61ab20);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ab25ull));
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
PN u32 blk_61ab25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ab25:L61ab25:{bud-=6;NFSU2_TR(0x61ab25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ab26:{NFSU2_TR(0x61ab26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ab27:{NFSU2_TR(0x61ab27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61ab28:{NFSU2_TR(0x61ab28);
__builtin_memmove((G+16),(R+20),4);
}
B61ab2a:{NFSU2_TR(0x61ab2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ab2b:{NFSU2_TR(0x61ab2b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
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
PN u32 blk_61ab50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ab50:L61ab50:{bud-=8;NFSU2_TR(0x61ab50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab51:{NFSU2_TR(0x61ab51);
__builtin_memmove((R+20),(G+16),4);
}
B61ab53:{NFSU2_TR(0x61ab53);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B61ab56:{NFSU2_TR(0x61ab56);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x2cull))));
}
B61ab59:{NFSU2_TR(0x61ab59);
__builtin_memmove((G+0),gp(0x890080),4);
}
B61ab5e:{NFSU2_TR(0x61ab5e);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61ab60:{NFSU2_TR(0x61ab60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab61:{NFSU2_TR(0x61ab61);
if(r1(F+6)){{[[clang::musttail]] return blk_61abd7(ARGS);}}
}
B61ab63:L61ab63:{bud-=2;NFSU2_TR(0x61ab63);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ab65:{NFSU2_TR(0x61ab65);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ab6aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48b1e0u);}[[clang::musttail]] return blk_48b1e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ab6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ab6a:L61ab6a:{bud-=3;NFSU2_TR(0x61ab6a);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B61ab6d:{NFSU2_TR(0x61ab6d);
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
B61ab6f:{NFSU2_TR(0x61ab6f);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61abac(ARGS);}}
}
B61ab71:L61ab71:{bud-=4;NFSU2_TR(0x61ab71);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x44ull))));
__builtin_memmove((G+4),(U+0),4);
}
B61ab74:{NFSU2_TR(0x61ab74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B61ab76:{NFSU2_TR(0x61ab76);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+6)));
w4(U+10,u32(u32(r4(G+0))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ab78:{NFSU2_TR(0x61ab78);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61abac(ARGS);}}
}
B61ab7a:L61ab7a:{bud-=2;NFSU2_TR(0x61ab7a);
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
B61ab7c:{NFSU2_TR(0x61ab7c);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61abac(ARGS);}}
}
B61ab7e:L61ab7e:{bud-=3;NFSU2_TR(0x61ab7e);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B61ab81:{NFSU2_TR(0x61ab81);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ab83:{NFSU2_TR(0x61ab83);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61abac(ARGS);}}
}
B61ab85:L61ab85:{bud-=3;NFSU2_TR(0x61ab85);
__builtin_memmove((R+8),(G+0),4);
}
B61ab87:{NFSU2_TR(0x61ab87);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B61ab89:{NFSU2_TR(0x61ab89);
if(r1(F+6)){{[[clang::musttail]] return blk_61ab94(ARGS);}}
}
B61ab8b:L61ab8b:{bud-=2;NFSU2_TR(0x61ab8b);
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
B61ab8d:{NFSU2_TR(0x61ab8d);
if(r1(F+6)){{[[clang::musttail]] return blk_61ab94(ARGS);}}
}
B61ab8f:L61ab8f:{bud-=2;NFSU2_TR(0x61ab8f);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((G+4),(U+0),4);
}
B61ab92:{NFSU2_TR(0x61ab92);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab96(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ab94(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ab94:L61ab94:{bud-=1;NFSU2_TR(0x61ab94);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab96(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ab96(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ab96:L61ab96:{bud-=2;NFSU2_TR(0x61ab96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B61ab98:{NFSU2_TR(0x61ab98);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ab9bull));
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
PN u32 blk_61ab9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ab9b:L61ab9b:{bud-=2;NFSU2_TR(0x61ab9b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a44e8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(G+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B61aba1:{NFSU2_TR(0x61aba1);
if(r1(F+6)){{[[clang::musttail]] return blk_61aba8(ARGS);}}
}
B61aba3:L61aba3:{bud-=1;NFSU2_TR(0x61aba3);
__builtin_memmove(gp(0x8a44e8),(G+0),4);
{[[clang::musttail]] return blk_61aba8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61aba8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aba8:L61aba8:{bud-=2;NFSU2_TR(0x61aba8);
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
B61abaa:{NFSU2_TR(0x61abaa);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61abd0(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61abac(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61abac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61abac:L61abac:{bud-=3;NFSU2_TR(0x61abac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61abae:{NFSU2_TR(0x61abae);
w4(G+4,u32(0x89e7a0ull));
}
B61abb3:{NFSU2_TR(0x61abb3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61abb8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5ed980u);}[[clang::musttail]] return blk_5ed980(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61abb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61abb8:L61abb8:{bud-=3;NFSU2_TR(0x61abb8);
__builtin_memmove((G+4),gp(0x890080),4);
}
B61abbe:{NFSU2_TR(0x61abbe);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61abbf:{NFSU2_TR(0x61abbf);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61abc4ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5f0e30u);}[[clang::musttail]] return blk_5f0e30(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61abc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61abc4:L61abc4:{bud-=2;NFSU2_TR(0x61abc4);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61abc6:{NFSU2_TR(0x61abc6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61abd0(ARGS);}}
}
B61abc8:L61abc8:{bud-=2;NFSU2_TR(0x61abc8);
__builtin_memmove((G+4),gp(0x890080),4);
}
B61abce:{NFSU2_TR(0x61abce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
{[[clang::musttail]] return blk_61abd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61abd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61abd0:L61abd0:{bud-=3;NFSU2_TR(0x61abd0);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61abd3:{NFSU2_TR(0x61abd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61abd5:{NFSU2_TR(0x61abd5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61ac1f(ARGS);}}
{[[clang::musttail]] return blk_61abd7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61abd7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61abd7:L61abd7:{bud-=3;NFSU2_TR(0x61abd7);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B61abdd:{NFSU2_TR(0x61abdd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(F+0,u8((r4(U+6))<(u32(0x8a30f0ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x8a30f0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8a30f0ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61abe3:{NFSU2_TR(0x61abe3);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ac82(ARGS);}}
}
B61abe9:L61abe9:{bud-=2;NFSU2_TR(0x61abe9);
w4(G+4,u32(0x8a30f0ull));
}
B61abee:{NFSU2_TR(0x61abee);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61abf3ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x502fd0u);}[[clang::musttail]] return blk_502fd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61abf3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61abf3:L61abf3:{bud-=2;NFSU2_TR(0x61abf3);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61abf5:{NFSU2_TR(0x61abf5);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ac82(ARGS);}}
}
B61abfb:L61abfb:{bud-=1;NFSU2_TR(0x61abfb);
{[[clang::musttail]] return blk_61ac00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ac00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ac00:L61ac00:{bud-=3;NFSU2_TR(0x61ac00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61ac06:{NFSU2_TR(0x61ac06);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61ac08:{NFSU2_TR(0x61ac08);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61ac15(ARGS);}}
}
B61ac0a:L61ac0a:{bud-=3;NFSU2_TR(0x61ac0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61ac0c:{NFSU2_TR(0x61ac0c);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ac0e:{NFSU2_TR(0x61ac0e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x61ac00u);}goto L61ac00;}}
}
B61ac10:L61ac10:{bud-=4;NFSU2_TR(0x61ac10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ac11:{NFSU2_TR(0x61ac11);
__builtin_memmove((G+16),(R+20),4);
}
B61ac13:{NFSU2_TR(0x61ac13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ac14:{NFSU2_TR(0x61ac14);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_61ac15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ac15:L61ac15:{bud-=3;NFSU2_TR(0x61ac15);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x910ull))));
}
B61ac1b:{NFSU2_TR(0x61ac1b);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ac1d:{NFSU2_TR(0x61ac1d);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ac82(ARGS);}}
{[[clang::musttail]] return blk_61ac1f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ac1f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ac1f:L61ac1f:{bud-=2;NFSU2_TR(0x61ac1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ac21:{NFSU2_TR(0x61ac21);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ac26ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48b1e0u);}[[clang::musttail]] return blk_48b1e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ac26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ac26:L61ac26:{bud-=20;NFSU2_TR(0x61ac26);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61ac29:{NFSU2_TR(0x61ac29);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac2c:{NFSU2_TR(0x61ac2c);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ac2f:{NFSU2_TR(0x61ac2f);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac32:{NFSU2_TR(0x61ac32);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B61ac35:{NFSU2_TR(0x61ac35);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61ac37:{NFSU2_TR(0x61ac37);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x4ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x4ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ac3a:{NFSU2_TR(0x61ac3a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac3e:{NFSU2_TR(0x61ac3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ac42:{NFSU2_TR(0x61ac42);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac46:{NFSU2_TR(0x61ac46);
{u32 ea_=u32(u32(8404560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac4c:{NFSU2_TR(0x61ac4c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ac4e:{NFSU2_TR(0x61ac4e);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac52:{NFSU2_TR(0x61ac52);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac55:{NFSU2_TR(0x61ac55);
{u32 ea_=u32(u32(8404564u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ac5b:{NFSU2_TR(0x61ac5b);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac5f:{NFSU2_TR(0x61ac5f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ac62:{NFSU2_TR(0x61ac62);
{u32 ea_=u32(u32(8404568u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ac68:{NFSU2_TR(0x61ac68);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ac6c:{NFSU2_TR(0x61ac6c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ac71ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x5ba600u);}[[clang::musttail]] return blk_5ba600(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ac71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ac71:L61ac71:{bud-=6;NFSU2_TR(0x61ac71);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B61ac75:{NFSU2_TR(0x61ac75);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ac76:{NFSU2_TR(0x61ac76);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61ac7a:{NFSU2_TR(0x61ac7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ac7b:{NFSU2_TR(0x61ac7b);
__builtin_memmove((G+4),(G+0),4);
}
B61ac7d:{NFSU2_TR(0x61ac7d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ac82ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c3450u);}[[clang::musttail]] return blk_5c3450(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ac82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ac82:L61ac82:{bud-=4;NFSU2_TR(0x61ac82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ac83:{NFSU2_TR(0x61ac83);
__builtin_memmove((G+16),(R+20),4);
}
B61ac85:{NFSU2_TR(0x61ac85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ac86:{NFSU2_TR(0x61ac86);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_61ac90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ac90:L61ac90:{bud-=5;NFSU2_TR(0x61ac90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ac91:{NFSU2_TR(0x61ac91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ac92:{NFSU2_TR(0x61ac92);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B61ac98:{NFSU2_TR(0x61ac98);
w4(G+4,u32(0x8a30f0ull));
}
B61ac9d:{NFSU2_TR(0x61ac9d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61aca2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x502fd0u);}[[clang::musttail]] return blk_502fd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61aca2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aca2:L61aca2:{bud-=3;NFSU2_TR(0x61aca2);
__builtin_memmove((R+12),(G+0),4);
}
B61aca4:{NFSU2_TR(0x61aca4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61aca6:{NFSU2_TR(0x61aca6);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61acdc(ARGS);}}
}
B61aca8:L61aca8:{bud-=3;NFSU2_TR(0x61aca8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aca9:{NFSU2_TR(0x61aca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61acad:{NFSU2_TR(0x61acad);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_61acb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61acb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61acb0:L61acb0:{bud-=3;NFSU2_TR(0x61acb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61acb3:{NFSU2_TR(0x61acb3);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61acb5:{NFSU2_TR(0x61acb5);
if(r1(F+6)){{[[clang::musttail]] return blk_61acd5(ARGS);}}
}
B61acb7:L61acb7:{bud-=3;NFSU2_TR(0x61acb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61acbd:{NFSU2_TR(0x61acbd);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61acbf:{NFSU2_TR(0x61acbf);
if(r1(F+6)){{[[clang::musttail]] return blk_61acd5(ARGS);}}
}
B61acc1:L61acc1:{bud-=6;NFSU2_TR(0x61acc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((G+0),(U+0),4);
}
B61acc7:{NFSU2_TR(0x61acc7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61acc8:{NFSU2_TR(0x61acc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61acce:{NFSU2_TR(0x61acce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61accf:{NFSU2_TR(0x61accf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61acd0:{NFSU2_TR(0x61acd0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61acd5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x615a10u);}[[clang::musttail]] return blk_615a10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61acd5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61acd5:L61acd5:{bud-=3;NFSU2_TR(0x61acd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61acd7:{NFSU2_TR(0x61acd7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61acd9:{NFSU2_TR(0x61acd9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x61acb0u);}[[clang::musttail]] return blk_61acb0(ARGS);}}
}
B61acdb:L61acdb:{bud-=1;NFSU2_TR(0x61acdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61acdc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61acdc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61acdc:L61acdc:{bud-=3;NFSU2_TR(0x61acdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61acdd:{NFSU2_TR(0x61acdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61acde:{NFSU2_TR(0x61acde);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_61ace0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ace0:L61ace0:{bud-=3;NFSU2_TR(0x61ace0);
__builtin_memmove((G+0),gp(0x8a1c68),4);
}
B61ace5:{NFSU2_TR(0x61ace5);
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
B61ace7:{NFSU2_TR(0x61ace7);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ad7b(ARGS);}}
}
B61aced:L61aced:{bud-=6;NFSU2_TR(0x61aced);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61acee:{NFSU2_TR(0x61acee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61acef:{NFSU2_TR(0x61acef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61acf0:{NFSU2_TR(0x61acf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61acf4:{NFSU2_TR(0x61acf4);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61acf6:{NFSU2_TR(0x61acf6);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ad78(ARGS);}}
}
B61acfc:L61acfc:{bud-=3;NFSU2_TR(0x61acfc);
__builtin_memmove((G+0),gp(0x8026c8),4);
}
B61ad01:{NFSU2_TR(0x61ad01);
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
B61ad03:{NFSU2_TR(0x61ad03);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ad78(ARGS);}}
}
B61ad05:L61ad05:{bud-=3;NFSU2_TR(0x61ad05);
__builtin_memmove((G+0),gp(0x7f3d40),4);
}
B61ad0a:{NFSU2_TR(0x61ad0a);
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
B61ad0c:{NFSU2_TR(0x61ad0c);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ad78(ARGS);}}
}
B61ad0e:L61ad0e:{bud-=3;NFSU2_TR(0x61ad0e);
__builtin_memmove((G+0),gp(0x870ce4),4);
}
B61ad13:{NFSU2_TR(0x61ad13);
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
B61ad15:{NFSU2_TR(0x61ad15);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ad78(ARGS);}}
}
B61ad17:L61ad17:{bud-=3;NFSU2_TR(0x61ad17);
__builtin_memmove((R+24),gp(0x8a30f0),4);
}
B61ad1d:{NFSU2_TR(0x61ad1d);
w4(G+4,u32(0x8a30f0ull));
}
B61ad22:{NFSU2_TR(0x61ad22);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ad27ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x502fd0u);}[[clang::musttail]] return blk_502fd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ad27(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ad27:L61ad27:{bud-=3;NFSU2_TR(0x61ad27);
__builtin_memmove((R+20),(G+0),4);
}
B61ad29:{NFSU2_TR(0x61ad29);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ad2b:{NFSU2_TR(0x61ad2b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ad78(ARGS);}}
}
B61ad2d:L61ad2d:{bud-=2;NFSU2_TR(0x61ad2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad2e:{NFSU2_TR(0x61ad2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_61ad32(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ad32(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ad32:L61ad32:{bud-=3;NFSU2_TR(0x61ad32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61ad38:{NFSU2_TR(0x61ad38);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61ad3a:{NFSU2_TR(0x61ad3a);
if(r1(F+6)){{[[clang::musttail]] return blk_61ad71(ARGS);}}
}
B61ad3c:L61ad3c:{bud-=3;NFSU2_TR(0x61ad3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61ad42:{NFSU2_TR(0x61ad42);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61ad44:{NFSU2_TR(0x61ad44);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61ad71(ARGS);}}
}
B61ad46:L61ad46:{bud-=3;NFSU2_TR(0x61ad46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61ad4c:{NFSU2_TR(0x61ad4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B61ad4f:{NFSU2_TR(0x61ad4f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61ad71(ARGS);}}
}
B61ad51:L61ad51:{bud-=3;NFSU2_TR(0x61ad51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61ad54:{NFSU2_TR(0x61ad54);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61ad56:{NFSU2_TR(0x61ad56);
if(r1(F+6)){{[[clang::musttail]] return blk_61ad71(ARGS);}}
}
B61ad58:L61ad58:{bud-=9;NFSU2_TR(0x61ad58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad5a:{NFSU2_TR(0x61ad5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad5b:{NFSU2_TR(0x61ad5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad5d:{NFSU2_TR(0x61ad5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61ad63:{NFSU2_TR(0x61ad63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad64:{NFSU2_TR(0x61ad64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((G+0),(U+0),4);
}
B61ad6a:{NFSU2_TR(0x61ad6a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad6b:{NFSU2_TR(0x61ad6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad6c:{NFSU2_TR(0x61ad6c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ad71ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x615630u);}[[clang::musttail]] return blk_615630(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ad71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ad71:L61ad71:{bud-=3;NFSU2_TR(0x61ad71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61ad73:{NFSU2_TR(0x61ad73);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ad75:{NFSU2_TR(0x61ad75);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x61ad32u);}[[clang::musttail]] return blk_61ad32(ARGS);}}
}
B61ad77:L61ad77:{bud-=1;NFSU2_TR(0x61ad77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ad78(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ad78(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ad78:L61ad78:{bud-=3;NFSU2_TR(0x61ad78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ad79:{NFSU2_TR(0x61ad79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ad7a:{NFSU2_TR(0x61ad7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
{[[clang::musttail]] return blk_61ad7b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ad7b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ad7b:L61ad7b:{bud-=1;NFSU2_TR(0x61ad7b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_61ad80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ad80:L61ad80:{bud-=3;NFSU2_TR(0x61ad80);
if(mod_hook_table[13]&&!mod_bypass_take(13)){SPILL_OUT();c.pc=0x61ad80u;mod_hook_table[13](c);SPILL_IN();{u32 sp_=r4(G+16);u32 ra_=m4(sp_);w4(G+16,sp_+4u);TAIL_DYNAMIC(ra_);}}
__builtin_memmove((G+0),gp(0x870818),4);
}
B61ad85:{NFSU2_TR(0x61ad85);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a44ec),4);
w1(F+0,u8((r4(U+6))<(r4(G+0))));
w1(F+11,sborrow<u32>(r4(U+6),r4(G+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ad8b:{NFSU2_TR(0x61ad8b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ae8e(ARGS);}}
}
B61ad91:L61ad91:{bud-=7;NFSU2_TR(0x61ad91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ad92:{NFSU2_TR(0x61ad92);
__builtin_memmove(gp(0x8a44ec),(G+0),4);
}
B61ad97:{NFSU2_TR(0x61ad97);
__builtin_memmove((G+0),gp(0x8026c8),4);
}
B61ad9c:{NFSU2_TR(0x61ad9c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61ad9e:{NFSU2_TR(0x61ad9e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(F+0,u8((r4(G+0))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+6)));
w4(U+10,u32(u32(r4(G+0))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ada0:{NFSU2_TR(0x61ada0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ada1:{NFSU2_TR(0x61ada1);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ae8c(ARGS);}}
}
B61ada7:L61ada7:{bud-=2;NFSU2_TR(0x61ada7);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f3d40),4);
w1(F+0,u8((r4(U+6))<(r4(R+20))));
w1(F+11,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61adad:{NFSU2_TR(0x61adad);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ae8c(ARGS);}}
}
B61adb3:L61adb3:{bud-=2;NFSU2_TR(0x61adb3);
u8 U[14];
__builtin_memmove((U+6),gp(0x870ce4),4);
w1(F+0,u8((r4(U+6))<(r4(R+20))));
w1(F+11,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61adb9:{NFSU2_TR(0x61adb9);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ae8c(ARGS);}}
}
B61adbf:L61adbf:{bud-=3;NFSU2_TR(0x61adbf);
__builtin_memmove((G+0),gp(0x890080),4);
}
B61adc4:{NFSU2_TR(0x61adc4);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(F+0,u8((r4(G+0))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+6)));
w4(U+10,u32(u32(r4(G+0))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61adc6:{NFSU2_TR(0x61adc6);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ae8c(ARGS);}}
}
B61adcc:L61adcc:{bud-=3;NFSU2_TR(0x61adcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61adce:{NFSU2_TR(0x61adce);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(R+28))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61add0:{NFSU2_TR(0x61add0);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ae8c(ARGS);}}
}
B61add6:L61add6:{bud-=4;NFSU2_TR(0x61add6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61add7:{NFSU2_TR(0x61add7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61addb:{NFSU2_TR(0x61addb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61addc:{NFSU2_TR(0x61addc);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_61ade0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ade0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ade0:L61ade0:{bud-=3;NFSU2_TR(0x61ade0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61ade3:{NFSU2_TR(0x61ade3);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B61ade7:{NFSU2_TR(0x61ade7);
if(r1(F+6)){{[[clang::musttail]] return blk_61ae7c(ARGS);}}
}
B61aded:L61aded:{bud-=5;NFSU2_TR(0x61aded);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61adf0:{NFSU2_TR(0x61adf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61adf1:{NFSU2_TR(0x61adf1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61adf2:{NFSU2_TR(0x61adf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61adf3:{NFSU2_TR(0x61adf3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61adf8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60d570u);}[[clang::musttail]] return blk_60d570(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61adf8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61adf8:L61adf8:{bud-=3;NFSU2_TR(0x61adf8);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B61adfb:{NFSU2_TR(0x61adfb);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61adfd:{NFSU2_TR(0x61adfd);
if(r1(F+6)){{[[clang::musttail]] return blk_61ae7c(ARGS);}}
}
B61adff:L61adff:{bud-=3;NFSU2_TR(0x61adff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61ae05:{NFSU2_TR(0x61ae05);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B61ae0b:{NFSU2_TR(0x61ae0b);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_61ae13(ARGS);}}
}
B61ae0d:L61ae0d:{bud-=1;NFSU2_TR(0x61ae0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_61ae13(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae13(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae13:L61ae13:{bud-=6;NFSU2_TR(0x61ae13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61ae19:{NFSU2_TR(0x61ae19);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B61ae1a:{NFSU2_TR(0x61ae1a);
__builtin_memmove((G+0),(G+4),4);
}
B61ae1c:{NFSU2_TR(0x61ae1c);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ae1f:{NFSU2_TR(0x61ae1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ae25:{NFSU2_TR(0x61ae25);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_61ae2d(ARGS);}}
}
B61ae27:L61ae27:{bud-=1;NFSU2_TR(0x61ae27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_61ae2d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae2d:L61ae2d:{bud-=4;NFSU2_TR(0x61ae2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61ae30:{NFSU2_TR(0x61ae30);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ae31:{NFSU2_TR(0x61ae31);
__builtin_memmove((G+4),(R+28),4);
}
B61ae33:{NFSU2_TR(0x61ae33);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ae38ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60bcc0u);}[[clang::musttail]] return blk_60bcc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae38:L61ae38:{bud-=5;NFSU2_TR(0x61ae38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ae3e:{NFSU2_TR(0x61ae3e);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(F+0))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(F+11))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B61ae41:{NFSU2_TR(0x61ae41);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ae42:{NFSU2_TR(0x61ae42);
u8 U[12];
w4(U+0,u32(u32(u32(0x2090ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B61ae49:{NFSU2_TR(0x61ae49);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ae4eull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x4013d0u);}[[clang::musttail]] return blk_4013d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae4e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae4e:L61ae4e:{bud-=4;NFSU2_TR(0x61ae4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61ae51:{NFSU2_TR(0x61ae51);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ae52:{NFSU2_TR(0x61ae52);
__builtin_memmove((G+4),(R+28),4);
}
B61ae54:{NFSU2_TR(0x61ae54);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61ae59ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60bc90u);}[[clang::musttail]] return blk_60bc90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae59:L61ae59:{bud-=11;NFSU2_TR(0x61ae59);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ae5c:{NFSU2_TR(0x61ae5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61ae62:{NFSU2_TR(0x61ae62);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ae65:{NFSU2_TR(0x61ae65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61ae67:{NFSU2_TR(0x61ae67);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61ae69:{NFSU2_TR(0x61ae69);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x215ull))));
}
B61ae6f:{NFSU2_TR(0x61ae6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B61ae72:{NFSU2_TR(0x61ae72);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B61ae74:{NFSU2_TR(0x61ae74);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ae77:{NFSU2_TR(0x61ae77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+4)),r4(U+0));
}
B61ae79:{NFSU2_TR(0x61ae79);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_61ae7c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae7c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae7c:L61ae7c:{bud-=3;NFSU2_TR(0x61ae7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61ae7e:{NFSU2_TR(0x61ae7e);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
w1(F+0,u8((r4(R+28))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61ae84:{NFSU2_TR(0x61ae84);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x61ade0u);}[[clang::musttail]] return blk_61ade0(ARGS);}}
}
B61ae8a:L61ae8a:{bud-=2;NFSU2_TR(0x61ae8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ae8b:{NFSU2_TR(0x61ae8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ae8c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae8c:L61ae8c:{bud-=2;NFSU2_TR(0x61ae8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ae8d:{NFSU2_TR(0x61ae8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
{[[clang::musttail]] return blk_61ae8e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61ae8e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae8e:L61ae8e:{bud-=1;NFSU2_TR(0x61ae8e);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_61ae90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61ae90:L61ae90:{bud-=10;NFSU2_TR(0x61ae90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61ae91:{NFSU2_TR(0x61ae91);
__builtin_memmove((R+20),(G+16),4);
}
B61ae93:{NFSU2_TR(0x61ae93);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B61ae96:{NFSU2_TR(0x61ae96);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x34ull))));
}
B61ae99:{NFSU2_TR(0x61ae99);
__builtin_memmove((G+0),gp(0x8026c8),4);
}
B61ae9e:{NFSU2_TR(0x61ae9e);
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
B61aea0:{NFSU2_TR(0x61aea0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aea1:{NFSU2_TR(0x61aea1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aea2:{NFSU2_TR(0x61aea2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61aea3:{NFSU2_TR(0x61aea3);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61b1e1(ARGS);}}
}
B61aea9:L61aea9:{bud-=3;NFSU2_TR(0x61aea9);
__builtin_memmove((G+0),gp(0x7f3d40),4);
}
B61aeae:{NFSU2_TR(0x61aeae);
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
B61aeb0:{NFSU2_TR(0x61aeb0);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61b1e1(ARGS);}}
}
B61aeb6:L61aeb6:{bud-=3;NFSU2_TR(0x61aeb6);
__builtin_memmove((G+0),gp(0x870ce4),4);
}
B61aebb:{NFSU2_TR(0x61aebb);
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
B61aebd:{NFSU2_TR(0x61aebd);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61b1e1(ARGS);}}
}
B61aec3:L61aec3:{bud-=5;NFSU2_TR(0x61aec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61aec6:{NFSU2_TR(0x61aec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61aec9:{NFSU2_TR(0x61aec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61aecd:{NFSU2_TR(0x61aecd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B61aed4:{NFSU2_TR(0x61aed4);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61aee4(ARGS);}}
}
B61aed6:L61aed6:{bud-=3;NFSU2_TR(0x61aed6);
__builtin_memmove((G+4),gp(0x7f39f0),4);
}
B61aedc:{NFSU2_TR(0x61aedc);
__builtin_memmove(gp(0x7f3a48),(G+4),4);
}
B61aee2:{NFSU2_TR(0x61aee2);
{[[clang::musttail]] return blk_61aeee(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61aee4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aee4:L61aee4:{bud-=1;NFSU2_TR(0x61aee4);
s4(0x7f3a48,u32(0x40333333ull));
{[[clang::musttail]] return blk_61aeee(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61aeee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61aeee:L61aeee:{bud-=2;NFSU2_TR(0x61aeee);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B61aef2:{NFSU2_TR(0x61aef2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61af2c(ARGS);}}
}
B61aef4:L61aef4:{bud-=10;NFSU2_TR(0x61aef4);
{u32 ea_=u32(u32(8021856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61aefa:{NFSU2_TR(0x61aefa);
{u32 ea_=u32(u32(8337992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61af00:{NFSU2_TR(0x61af00);
{u32 ea_=u32(u32(8337992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61af06:{NFSU2_TR(0x61af06);
{u32 ea_=u32(u32(8021860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61af0c:{NFSU2_TR(0x61af0c);
{u32 ea_=u32(u32(8337880u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61af12:{NFSU2_TR(0x61af12);
{u32 ea_=u32(u32(8337968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61af18:{NFSU2_TR(0x61af18);
{u32 ea_=u32(u32(8337884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61af1e:{NFSU2_TR(0x61af1e);
{u32 ea_=u32(u32(8021860u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61af24:{NFSU2_TR(0x61af24);
{u32 ea_=u32(u32(8337972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61af2a:{NFSU2_TR(0x61af2a);
{[[clang::musttail]] return blk_61af42(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61af2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61af2c:L61af2c:{bud-=4;NFSU2_TR(0x61af2c);
__builtin_memmove((R+8),gp(0x7f39d8),4);
}
B61af32:{NFSU2_TR(0x61af32);
__builtin_memmove((G+0),gp(0x7f39dc),4);
}
B61af37:{NFSU2_TR(0x61af37);
__builtin_memmove(gp(0x7f3a30),(R+8),4);
}
B61af3d:{NFSU2_TR(0x61af3d);
__builtin_memmove(gp(0x7f3a34),(G+0),4);
{[[clang::musttail]] return blk_61af42(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61af42(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61af42:L61af42:{bud-=3;NFSU2_TR(0x61af42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61af45:{NFSU2_TR(0x61af45);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B61af48:{NFSU2_TR(0x61af48);
if(r1(F+6)){{[[clang::musttail]] return blk_61af5d(ARGS);}}
}
B61af4a:L61af4a:{bud-=2;NFSU2_TR(0x61af4a);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B61af4d:{NFSU2_TR(0x61af4d);
if(r1(F+6)){{[[clang::musttail]] return blk_61af5d(ARGS);}}
}
B61af4f:L61af4f:{bud-=3;NFSU2_TR(0x61af4f);
__builtin_memmove((G+4),gp(0x7f3a20),4);
}
B61af55:{NFSU2_TR(0x61af55);
__builtin_memmove(gp(0x7f3aa4),(G+4),4);
}
B61af5b:{NFSU2_TR(0x61af5b);
{[[clang::musttail]] return blk_61af67(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61af5d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61af5d:L61af5d:{bud-=1;NFSU2_TR(0x61af5d);
s4(0x7f3aa4,u32(0x3eae147bull));
{[[clang::musttail]] return blk_61af67(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61af67(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61af67:L61af67:{bud-=3;NFSU2_TR(0x61af67);
__builtin_memmove((G+0),gp(0x890080),4);
}
B61af6c:{NFSU2_TR(0x61af6c);
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
B61af6e:{NFSU2_TR(0x61af6e);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61b1e1(ARGS);}}
}
B61af74:L61af74:{bud-=5;NFSU2_TR(0x61af74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61af76:{NFSU2_TR(0x61af76);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61af78:{NFSU2_TR(0x61af78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x63ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61af80:{NFSU2_TR(0x61af80);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61af84:{NFSU2_TR(0x61af84);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61b1e1(ARGS);}}
}
B61af8a:L61af8a:{bud-=1;NFSU2_TR(0x61af8a);
{[[clang::musttail]] return blk_61af90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61af8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61af8c:L61af8c:{bud-=1;NFSU2_TR(0x61af8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_61af90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61af90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61af90:L61af90:{bud-=5;NFSU2_TR(0x61af90);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61af94:{NFSU2_TR(0x61af94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61af95:{NFSU2_TR(0x61af95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61af96:{NFSU2_TR(0x61af96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61af97:{NFSU2_TR(0x61af97);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61af9cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60d570u);}[[clang::musttail]] return blk_60d570(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61af9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61af9c:L61af9c:{bud-=3;NFSU2_TR(0x61af9c);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B61af9f:{NFSU2_TR(0x61af9f);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61afa1:{NFSU2_TR(0x61afa1);
if(r1(F+6)){{[[clang::musttail]] return blk_61b1cf(ARGS);}}
}
B61afa7:L61afa7:{bud-=3;NFSU2_TR(0x61afa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61afab:{NFSU2_TR(0x61afab);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61afad:{NFSU2_TR(0x61afad);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_61b1cf(ARGS);}}
}
B61afb3:L61afb3:{bud-=11;NFSU2_TR(0x61afb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61afb6:{NFSU2_TR(0x61afb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61afbc:{NFSU2_TR(0x61afbc);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B61afbd:{NFSU2_TR(0x61afbd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afbf:{NFSU2_TR(0x61afbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61afc3:{NFSU2_TR(0x61afc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61afc6:{NFSU2_TR(0x61afc6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afc7:{NFSU2_TR(0x61afc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afc9:{NFSU2_TR(0x61afc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afca:{NFSU2_TR(0x61afca);
__builtin_memmove((G+4),(R+24),4);
}
B61afcc:{NFSU2_TR(0x61afcc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61afd1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60bcc0u);}[[clang::musttail]] return blk_60bcc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61afd1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61afd1:L61afd1:{bud-=4;NFSU2_TR(0x61afd1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afd2:{NFSU2_TR(0x61afd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afd3:{NFSU2_TR(0x61afd3);
__builtin_memmove((G+4),(R+24),4);
}
B61afd5:{NFSU2_TR(0x61afd5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61afdaull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60bc90u);}[[clang::musttail]] return blk_60bc90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61afda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61afda:L61afda:{bud-=5;NFSU2_TR(0x61afda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61afdd:{NFSU2_TR(0x61afdd);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afde:{NFSU2_TR(0x61afde);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61afdf:{NFSU2_TR(0x61afdf);
__builtin_memmove((G+4),(R+28),4);
}
B61afe1:{NFSU2_TR(0x61afe1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61afe6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x615630u);}[[clang::musttail]] return blk_615630(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61afe6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61afe6:L61afe6:{bud-=5;NFSU2_TR(0x61afe6);
__builtin_memmove((R+8),gp(0x7a675c),4);
}
B61afec:{NFSU2_TR(0x61afec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61afef:{NFSU2_TR(0x61afef);
__builtin_memmove((G+4),(R+12),4);
}
B61aff1:{NFSU2_TR(0x61aff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61aff5:{NFSU2_TR(0x61aff5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61affaull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59fa30u);}[[clang::musttail]] return blk_59fa30(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61affa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61affa:L61affa:{bud-=2;NFSU2_TR(0x61affa);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61affc:{NFSU2_TR(0x61affc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+518,F+6,1);EXIT(0x61b000u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_61a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x61a0fd:[[clang::musttail]] return blk_61a0fd(c,a4,a0,a1,bud);
case 0x61a456:[[clang::musttail]] return blk_61a456(c,a4,a0,a1,bud);
case 0x61a7f8:[[clang::musttail]] return blk_61a7f8(c,a4,a0,a1,bud);
case 0x61aa9c:[[clang::musttail]] return blk_61aa9c(c,a4,a0,a1,bud);
case 0x61aac6:[[clang::musttail]] return blk_61aac6(c,a4,a0,a1,bud);
case 0x61aade:[[clang::musttail]] return blk_61aade(c,a4,a0,a1,bud);
case 0x61aaff:[[clang::musttail]] return blk_61aaff(c,a4,a0,a1,bud);
case 0x61ab25:[[clang::musttail]] return blk_61ab25(c,a4,a0,a1,bud);
case 0x61ab50:[[clang::musttail]] return blk_61ab50(c,a4,a0,a1,bud);
case 0x61ab6a:[[clang::musttail]] return blk_61ab6a(c,a4,a0,a1,bud);
case 0x61ab94:[[clang::musttail]] return blk_61ab94(c,a4,a0,a1,bud);
case 0x61ab96:[[clang::musttail]] return blk_61ab96(c,a4,a0,a1,bud);
case 0x61ab9b:[[clang::musttail]] return blk_61ab9b(c,a4,a0,a1,bud);
case 0x61aba8:[[clang::musttail]] return blk_61aba8(c,a4,a0,a1,bud);
case 0x61abac:[[clang::musttail]] return blk_61abac(c,a4,a0,a1,bud);
case 0x61abb8:[[clang::musttail]] return blk_61abb8(c,a4,a0,a1,bud);
case 0x61abc4:[[clang::musttail]] return blk_61abc4(c,a4,a0,a1,bud);
case 0x61abd0:[[clang::musttail]] return blk_61abd0(c,a4,a0,a1,bud);
case 0x61abd7:[[clang::musttail]] return blk_61abd7(c,a4,a0,a1,bud);
case 0x61abf3:[[clang::musttail]] return blk_61abf3(c,a4,a0,a1,bud);
case 0x61ac00:[[clang::musttail]] return blk_61ac00(c,a4,a0,a1,bud);
case 0x61ac15:[[clang::musttail]] return blk_61ac15(c,a4,a0,a1,bud);
case 0x61ac1f:[[clang::musttail]] return blk_61ac1f(c,a4,a0,a1,bud);
case 0x61ac26:[[clang::musttail]] return blk_61ac26(c,a4,a0,a1,bud);
case 0x61ac71:[[clang::musttail]] return blk_61ac71(c,a4,a0,a1,bud);
case 0x61ac82:[[clang::musttail]] return blk_61ac82(c,a4,a0,a1,bud);
case 0x61ac90:[[clang::musttail]] return blk_61ac90(c,a4,a0,a1,bud);
case 0x61aca2:[[clang::musttail]] return blk_61aca2(c,a4,a0,a1,bud);
case 0x61acb0:[[clang::musttail]] return blk_61acb0(c,a4,a0,a1,bud);
case 0x61acd5:[[clang::musttail]] return blk_61acd5(c,a4,a0,a1,bud);
case 0x61acdc:[[clang::musttail]] return blk_61acdc(c,a4,a0,a1,bud);
case 0x61ace0:[[clang::musttail]] return blk_61ace0(c,a4,a0,a1,bud);
case 0x61ad27:[[clang::musttail]] return blk_61ad27(c,a4,a0,a1,bud);
case 0x61ad32:[[clang::musttail]] return blk_61ad32(c,a4,a0,a1,bud);
case 0x61ad71:[[clang::musttail]] return blk_61ad71(c,a4,a0,a1,bud);
case 0x61ad78:[[clang::musttail]] return blk_61ad78(c,a4,a0,a1,bud);
case 0x61ad7b:[[clang::musttail]] return blk_61ad7b(c,a4,a0,a1,bud);
case 0x61ad80:[[clang::musttail]] return blk_61ad80(c,a4,a0,a1,bud);
case 0x61ade0:[[clang::musttail]] return blk_61ade0(c,a4,a0,a1,bud);
case 0x61adf8:[[clang::musttail]] return blk_61adf8(c,a4,a0,a1,bud);
case 0x61ae13:[[clang::musttail]] return blk_61ae13(c,a4,a0,a1,bud);
case 0x61ae2d:[[clang::musttail]] return blk_61ae2d(c,a4,a0,a1,bud);
case 0x61ae38:[[clang::musttail]] return blk_61ae38(c,a4,a0,a1,bud);
case 0x61ae4e:[[clang::musttail]] return blk_61ae4e(c,a4,a0,a1,bud);
case 0x61ae59:[[clang::musttail]] return blk_61ae59(c,a4,a0,a1,bud);
case 0x61ae7c:[[clang::musttail]] return blk_61ae7c(c,a4,a0,a1,bud);
case 0x61ae8c:[[clang::musttail]] return blk_61ae8c(c,a4,a0,a1,bud);
case 0x61ae8e:[[clang::musttail]] return blk_61ae8e(c,a4,a0,a1,bud);
case 0x61ae90:[[clang::musttail]] return blk_61ae90(c,a4,a0,a1,bud);
case 0x61aee4:[[clang::musttail]] return blk_61aee4(c,a4,a0,a1,bud);
case 0x61aeee:[[clang::musttail]] return blk_61aeee(c,a4,a0,a1,bud);
case 0x61af2c:[[clang::musttail]] return blk_61af2c(c,a4,a0,a1,bud);
case 0x61af42:[[clang::musttail]] return blk_61af42(c,a4,a0,a1,bud);
case 0x61af5d:[[clang::musttail]] return blk_61af5d(c,a4,a0,a1,bud);
case 0x61af67:[[clang::musttail]] return blk_61af67(c,a4,a0,a1,bud);
case 0x61af8c:[[clang::musttail]] return blk_61af8c(c,a4,a0,a1,bud);
case 0x61af90:[[clang::musttail]] return blk_61af90(c,a4,a0,a1,bud);
case 0x61af9c:[[clang::musttail]] return blk_61af9c(c,a4,a0,a1,bud);
case 0x61afd1:[[clang::musttail]] return blk_61afd1(c,a4,a0,a1,bud);
case 0x61afda:[[clang::musttail]] return blk_61afda(c,a4,a0,a1,bud);
case 0x61afe6:[[clang::musttail]] return blk_61afe6(c,a4,a0,a1,bud);
case 0x61affa:[[clang::musttail]] return blk_61affa(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_61a(Cpu& c){u8* R=c.regs.data();return ent_61a(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
