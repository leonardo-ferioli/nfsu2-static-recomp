#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_447280(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bacf0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bada0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c39c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c413a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4f05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4f07(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4fa7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4fd6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4135(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4149(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4151(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4165(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c449b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c44af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c44c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c44cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c44df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4815(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4829(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c483d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4845(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4859(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4b8f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4ba3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4bab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4bbf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4ef5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4efa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4f87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c4000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4000:L5c4000:{bud-=67;NFSU2_TR(0x5c4000);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4002:{NFSU2_TR(0x5c4002);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4009:{NFSU2_TR(0x5c4009);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c400d:{NFSU2_TR(0x5c400d);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4011:{NFSU2_TR(0x5c4011);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4018:{NFSU2_TR(0x5c4018);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c401c:{NFSU2_TR(0x5c401c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c401e:{NFSU2_TR(0x5c401e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4022:{NFSU2_TR(0x5c4022);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4029:{NFSU2_TR(0x5c4029);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c402b:{NFSU2_TR(0x5c402b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c402f:{NFSU2_TR(0x5c402f);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4036:{NFSU2_TR(0x5c4036);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4038:{NFSU2_TR(0x5c4038);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c403f:{NFSU2_TR(0x5c403f);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4043:{NFSU2_TR(0x5c4043);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c404a:{NFSU2_TR(0x5c404a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c404e:{NFSU2_TR(0x5c404e);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4055:{NFSU2_TR(0x5c4055);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4057:{NFSU2_TR(0x5c4057);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c405b:{NFSU2_TR(0x5c405b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4062:{NFSU2_TR(0x5c4062);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4064:{NFSU2_TR(0x5c4064);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4068:{NFSU2_TR(0x5c4068);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c406f:{NFSU2_TR(0x5c406f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4071:{NFSU2_TR(0x5c4071);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4078:{NFSU2_TR(0x5c4078);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c407f:{NFSU2_TR(0x5c407f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4083:{NFSU2_TR(0x5c4083);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4087:{NFSU2_TR(0x5c4087);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c408e:{NFSU2_TR(0x5c408e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4090:{NFSU2_TR(0x5c4090);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4094:{NFSU2_TR(0x5c4094);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c409b:{NFSU2_TR(0x5c409b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c409d:{NFSU2_TR(0x5c409d);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40a1:{NFSU2_TR(0x5c40a1);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40a8:{NFSU2_TR(0x5c40a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40aa:{NFSU2_TR(0x5c40aa);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c40b1:{NFSU2_TR(0x5c40b1);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40b5:{NFSU2_TR(0x5c40b5);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40bc:{NFSU2_TR(0x5c40bc);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40c0:{NFSU2_TR(0x5c40c0);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40c7:{NFSU2_TR(0x5c40c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40c9:{NFSU2_TR(0x5c40c9);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40cd:{NFSU2_TR(0x5c40cd);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40d4:{NFSU2_TR(0x5c40d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40d6:{NFSU2_TR(0x5c40d6);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40da:{NFSU2_TR(0x5c40da);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40e1:{NFSU2_TR(0x5c40e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40e3:{NFSU2_TR(0x5c40e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c40ea:{NFSU2_TR(0x5c40ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c40eb:{NFSU2_TR(0x5c40eb);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c40f2:{NFSU2_TR(0x5c40f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c40f6:{NFSU2_TR(0x5c40f6);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40fa:{NFSU2_TR(0x5c40fa);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c40fb:{NFSU2_TR(0x5c40fb);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4102:{NFSU2_TR(0x5c4102);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4106:{NFSU2_TR(0x5c4106);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c410d:{NFSU2_TR(0x5c410d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c410f:{NFSU2_TR(0x5c410f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4113:{NFSU2_TR(0x5c4113);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c411a:{NFSU2_TR(0x5c411a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c411c:{NFSU2_TR(0x5c411c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4120:{NFSU2_TR(0x5c4120);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4127:{NFSU2_TR(0x5c4127);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4129:{NFSU2_TR(0x5c4129);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4130:{NFSU2_TR(0x5c4130);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4135ull));
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
PN u32 blk_5c4135(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4135:L5c4135:{bud-=1;NFSU2_TR(0x5c4135);
u8 U[4];
w4(U+0,u32(0xc000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_5c413a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c413a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c413a:L5c413a:{bud-=5;NFSU2_TR(0x5c413a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c413e:{NFSU2_TR(0x5c413e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c413f:{NFSU2_TR(0x5c413f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4143:{NFSU2_TR(0x5c4143);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4144:{NFSU2_TR(0x5c4144);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4149ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4149(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4149:L5c4149:{bud-=2;NFSU2_TR(0x5c4149);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x20ull))));
}
B5c414c:{NFSU2_TR(0x5c414c);
{[[clang::musttail]] return blk_5c4f07(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4151(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4151:L5c4151:{bud-=6;NFSU2_TR(0x5c4151);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4156:{NFSU2_TR(0x5c4156);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c415a:{NFSU2_TR(0x5c415a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c415b:{NFSU2_TR(0x5c415b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c415f:{NFSU2_TR(0x5c415f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4160:{NFSU2_TR(0x5c4160);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4165ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4165(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4165:L5c4165:{bud-=197;NFSU2_TR(0x5c4165);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4169:{NFSU2_TR(0x5c4169);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c416d:{NFSU2_TR(0x5c416d);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4171:{NFSU2_TR(0x5c4171);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4175:{NFSU2_TR(0x5c4175);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4177:{NFSU2_TR(0x5c4177);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c417b:{NFSU2_TR(0x5c417b);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c417f:{NFSU2_TR(0x5c417f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4181:{NFSU2_TR(0x5c4181);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4185:{NFSU2_TR(0x5c4185);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4189:{NFSU2_TR(0x5c4189);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c418b:{NFSU2_TR(0x5c418b);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4192:{NFSU2_TR(0x5c4192);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4196:{NFSU2_TR(0x5c4196);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c419a:{NFSU2_TR(0x5c419a);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c419e:{NFSU2_TR(0x5c419e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41a2:{NFSU2_TR(0x5c41a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41a4:{NFSU2_TR(0x5c41a4);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41a8:{NFSU2_TR(0x5c41a8);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41ac:{NFSU2_TR(0x5c41ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41ae:{NFSU2_TR(0x5c41ae);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41b2:{NFSU2_TR(0x5c41b2);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41b6:{NFSU2_TR(0x5c41b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41b8:{NFSU2_TR(0x5c41b8);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c41bf:{NFSU2_TR(0x5c41bf);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41c3:{NFSU2_TR(0x5c41c3);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41c7:{NFSU2_TR(0x5c41c7);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41cb:{NFSU2_TR(0x5c41cb);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41cf:{NFSU2_TR(0x5c41cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41d1:{NFSU2_TR(0x5c41d1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41d5:{NFSU2_TR(0x5c41d5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41d9:{NFSU2_TR(0x5c41d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41db:{NFSU2_TR(0x5c41db);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41df:{NFSU2_TR(0x5c41df);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41e3:{NFSU2_TR(0x5c41e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41e5:{NFSU2_TR(0x5c41e5);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c41ec:{NFSU2_TR(0x5c41ec);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41f0:{NFSU2_TR(0x5c41f0);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41f4:{NFSU2_TR(0x5c41f4);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41f8:{NFSU2_TR(0x5c41f8);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41fc:{NFSU2_TR(0x5c41fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41fe:{NFSU2_TR(0x5c41fe);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4202:{NFSU2_TR(0x5c4202);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4206:{NFSU2_TR(0x5c4206);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4208:{NFSU2_TR(0x5c4208);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c420c:{NFSU2_TR(0x5c420c);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4210:{NFSU2_TR(0x5c4210);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4212:{NFSU2_TR(0x5c4212);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4219:{NFSU2_TR(0x5c4219);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c421d:{NFSU2_TR(0x5c421d);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4221:{NFSU2_TR(0x5c4221);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4225:{NFSU2_TR(0x5c4225);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4229:{NFSU2_TR(0x5c4229);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c422b:{NFSU2_TR(0x5c422b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c422f:{NFSU2_TR(0x5c422f);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4233:{NFSU2_TR(0x5c4233);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4235:{NFSU2_TR(0x5c4235);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4239:{NFSU2_TR(0x5c4239);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c423d:{NFSU2_TR(0x5c423d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c423f:{NFSU2_TR(0x5c423f);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4246:{NFSU2_TR(0x5c4246);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c424a:{NFSU2_TR(0x5c424a);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c424e:{NFSU2_TR(0x5c424e);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4252:{NFSU2_TR(0x5c4252);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4256:{NFSU2_TR(0x5c4256);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4258:{NFSU2_TR(0x5c4258);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c425c:{NFSU2_TR(0x5c425c);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4260:{NFSU2_TR(0x5c4260);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4262:{NFSU2_TR(0x5c4262);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4266:{NFSU2_TR(0x5c4266);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c426a:{NFSU2_TR(0x5c426a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c426c:{NFSU2_TR(0x5c426c);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4273:{NFSU2_TR(0x5c4273);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4277:{NFSU2_TR(0x5c4277);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c427b:{NFSU2_TR(0x5c427b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c427f:{NFSU2_TR(0x5c427f);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4283:{NFSU2_TR(0x5c4283);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4285:{NFSU2_TR(0x5c4285);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4289:{NFSU2_TR(0x5c4289);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c428d:{NFSU2_TR(0x5c428d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c428f:{NFSU2_TR(0x5c428f);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4293:{NFSU2_TR(0x5c4293);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4297:{NFSU2_TR(0x5c4297);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4299:{NFSU2_TR(0x5c4299);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c42a0:{NFSU2_TR(0x5c42a0);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42a4:{NFSU2_TR(0x5c42a4);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42a8:{NFSU2_TR(0x5c42a8);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42ac:{NFSU2_TR(0x5c42ac);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42b0:{NFSU2_TR(0x5c42b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42b2:{NFSU2_TR(0x5c42b2);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42b6:{NFSU2_TR(0x5c42b6);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42ba:{NFSU2_TR(0x5c42ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42bc:{NFSU2_TR(0x5c42bc);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42c0:{NFSU2_TR(0x5c42c0);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42c4:{NFSU2_TR(0x5c42c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42c6:{NFSU2_TR(0x5c42c6);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c42cd:{NFSU2_TR(0x5c42cd);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42d1:{NFSU2_TR(0x5c42d1);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42d5:{NFSU2_TR(0x5c42d5);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42dc:{NFSU2_TR(0x5c42dc);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42e0:{NFSU2_TR(0x5c42e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42e2:{NFSU2_TR(0x5c42e2);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42e6:{NFSU2_TR(0x5c42e6);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42ed:{NFSU2_TR(0x5c42ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42ef:{NFSU2_TR(0x5c42ef);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42f3:{NFSU2_TR(0x5c42f3);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42fa:{NFSU2_TR(0x5c42fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42fc:{NFSU2_TR(0x5c42fc);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4303:{NFSU2_TR(0x5c4303);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4307:{NFSU2_TR(0x5c4307);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c430b:{NFSU2_TR(0x5c430b);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4312:{NFSU2_TR(0x5c4312);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4316:{NFSU2_TR(0x5c4316);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4318:{NFSU2_TR(0x5c4318);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c431f:{NFSU2_TR(0x5c431f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4323:{NFSU2_TR(0x5c4323);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4325:{NFSU2_TR(0x5c4325);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4329:{NFSU2_TR(0x5c4329);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4330:{NFSU2_TR(0x5c4330);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4332:{NFSU2_TR(0x5c4332);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4339:{NFSU2_TR(0x5c4339);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c433d:{NFSU2_TR(0x5c433d);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4341:{NFSU2_TR(0x5c4341);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4348:{NFSU2_TR(0x5c4348);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c434c:{NFSU2_TR(0x5c434c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c434e:{NFSU2_TR(0x5c434e);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4352:{NFSU2_TR(0x5c4352);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4359:{NFSU2_TR(0x5c4359);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c435b:{NFSU2_TR(0x5c435b);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c435f:{NFSU2_TR(0x5c435f);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4366:{NFSU2_TR(0x5c4366);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4368:{NFSU2_TR(0x5c4368);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c436f:{NFSU2_TR(0x5c436f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4373:{NFSU2_TR(0x5c4373);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4377:{NFSU2_TR(0x5c4377);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c437e:{NFSU2_TR(0x5c437e);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4382:{NFSU2_TR(0x5c4382);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4384:{NFSU2_TR(0x5c4384);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4388:{NFSU2_TR(0x5c4388);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c438f:{NFSU2_TR(0x5c438f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4391:{NFSU2_TR(0x5c4391);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4395:{NFSU2_TR(0x5c4395);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c439c:{NFSU2_TR(0x5c439c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c439e:{NFSU2_TR(0x5c439e);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c43a5:{NFSU2_TR(0x5c43a5);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43a9:{NFSU2_TR(0x5c43a9);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43b0:{NFSU2_TR(0x5c43b0);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43b4:{NFSU2_TR(0x5c43b4);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43bb:{NFSU2_TR(0x5c43bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43bd:{NFSU2_TR(0x5c43bd);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43c1:{NFSU2_TR(0x5c43c1);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43c8:{NFSU2_TR(0x5c43c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43ca:{NFSU2_TR(0x5c43ca);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43ce:{NFSU2_TR(0x5c43ce);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43d5:{NFSU2_TR(0x5c43d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43d7:{NFSU2_TR(0x5c43d7);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c43de:{NFSU2_TR(0x5c43de);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43e5:{NFSU2_TR(0x5c43e5);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43e9:{NFSU2_TR(0x5c43e9);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43ed:{NFSU2_TR(0x5c43ed);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43f4:{NFSU2_TR(0x5c43f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43f6:{NFSU2_TR(0x5c43f6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43fa:{NFSU2_TR(0x5c43fa);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4401:{NFSU2_TR(0x5c4401);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4403:{NFSU2_TR(0x5c4403);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4407:{NFSU2_TR(0x5c4407);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c440e:{NFSU2_TR(0x5c440e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4410:{NFSU2_TR(0x5c4410);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4417:{NFSU2_TR(0x5c4417);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c441b:{NFSU2_TR(0x5c441b);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4422:{NFSU2_TR(0x5c4422);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4426:{NFSU2_TR(0x5c4426);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c442d:{NFSU2_TR(0x5c442d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c442f:{NFSU2_TR(0x5c442f);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4433:{NFSU2_TR(0x5c4433);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c443a:{NFSU2_TR(0x5c443a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c443c:{NFSU2_TR(0x5c443c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4440:{NFSU2_TR(0x5c4440);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4447:{NFSU2_TR(0x5c4447);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4449:{NFSU2_TR(0x5c4449);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4450:{NFSU2_TR(0x5c4450);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4451:{NFSU2_TR(0x5c4451);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4458:{NFSU2_TR(0x5c4458);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c445c:{NFSU2_TR(0x5c445c);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4460:{NFSU2_TR(0x5c4460);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4461:{NFSU2_TR(0x5c4461);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4468:{NFSU2_TR(0x5c4468);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c446c:{NFSU2_TR(0x5c446c);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4473:{NFSU2_TR(0x5c4473);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4475:{NFSU2_TR(0x5c4475);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4479:{NFSU2_TR(0x5c4479);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4480:{NFSU2_TR(0x5c4480);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4482:{NFSU2_TR(0x5c4482);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4486:{NFSU2_TR(0x5c4486);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c448d:{NFSU2_TR(0x5c448d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c448f:{NFSU2_TR(0x5c448f);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4496:{NFSU2_TR(0x5c4496);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c449bull));
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
PN u32 blk_5c449b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c449b:L5c449b:{bud-=6;NFSU2_TR(0x5c449b);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44a0:{NFSU2_TR(0x5c44a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c44a4:{NFSU2_TR(0x5c44a4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44a5:{NFSU2_TR(0x5c44a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c44a9:{NFSU2_TR(0x5c44a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44aa:{NFSU2_TR(0x5c44aa);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c44afull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c44af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c44af:L5c44af:{bud-=6;NFSU2_TR(0x5c44af);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44b4:{NFSU2_TR(0x5c44b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c44b8:{NFSU2_TR(0x5c44b8);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44b9:{NFSU2_TR(0x5c44b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c44bd:{NFSU2_TR(0x5c44bd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44be:{NFSU2_TR(0x5c44be);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c44c3ull));
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
PN u32 blk_5c44c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c44c3:L5c44c3:{bud-=2;NFSU2_TR(0x5c44c3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x2cull))));
}
B5c44c6:{NFSU2_TR(0x5c44c6);
{[[clang::musttail]] return blk_5c4f07(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c44cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c44cb:L5c44cb:{bud-=6;NFSU2_TR(0x5c44cb);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44d0:{NFSU2_TR(0x5c44d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c44d4:{NFSU2_TR(0x5c44d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44d5:{NFSU2_TR(0x5c44d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c44d9:{NFSU2_TR(0x5c44d9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c44da:{NFSU2_TR(0x5c44da);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c44dfull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c44df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c44df:L5c44df:{bud-=197;NFSU2_TR(0x5c44df);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44e3:{NFSU2_TR(0x5c44e3);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c44e7:{NFSU2_TR(0x5c44e7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44eb:{NFSU2_TR(0x5c44eb);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c44ef:{NFSU2_TR(0x5c44ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c44f1:{NFSU2_TR(0x5c44f1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44f5:{NFSU2_TR(0x5c44f5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c44f9:{NFSU2_TR(0x5c44f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c44fb:{NFSU2_TR(0x5c44fb);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44ff:{NFSU2_TR(0x5c44ff);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4503:{NFSU2_TR(0x5c4503);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4505:{NFSU2_TR(0x5c4505);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c450c:{NFSU2_TR(0x5c450c);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4510:{NFSU2_TR(0x5c4510);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4514:{NFSU2_TR(0x5c4514);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4518:{NFSU2_TR(0x5c4518);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c451c:{NFSU2_TR(0x5c451c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c451e:{NFSU2_TR(0x5c451e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4522:{NFSU2_TR(0x5c4522);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4526:{NFSU2_TR(0x5c4526);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4528:{NFSU2_TR(0x5c4528);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c452c:{NFSU2_TR(0x5c452c);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4530:{NFSU2_TR(0x5c4530);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4532:{NFSU2_TR(0x5c4532);
{u32 ea_=u32(r4(G+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4539:{NFSU2_TR(0x5c4539);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c453d:{NFSU2_TR(0x5c453d);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4541:{NFSU2_TR(0x5c4541);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4545:{NFSU2_TR(0x5c4545);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4549:{NFSU2_TR(0x5c4549);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c454b:{NFSU2_TR(0x5c454b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c454f:{NFSU2_TR(0x5c454f);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4553:{NFSU2_TR(0x5c4553);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4555:{NFSU2_TR(0x5c4555);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4559:{NFSU2_TR(0x5c4559);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c455d:{NFSU2_TR(0x5c455d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c455f:{NFSU2_TR(0x5c455f);
{u32 ea_=u32(r4(G+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4566:{NFSU2_TR(0x5c4566);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c456a:{NFSU2_TR(0x5c456a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c456e:{NFSU2_TR(0x5c456e);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4572:{NFSU2_TR(0x5c4572);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4576:{NFSU2_TR(0x5c4576);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4578:{NFSU2_TR(0x5c4578);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c457c:{NFSU2_TR(0x5c457c);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4580:{NFSU2_TR(0x5c4580);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4582:{NFSU2_TR(0x5c4582);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4586:{NFSU2_TR(0x5c4586);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c458a:{NFSU2_TR(0x5c458a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c458c:{NFSU2_TR(0x5c458c);
{u32 ea_=u32(r4(G+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4593:{NFSU2_TR(0x5c4593);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4597:{NFSU2_TR(0x5c4597);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c459b:{NFSU2_TR(0x5c459b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c459f:{NFSU2_TR(0x5c459f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45a3:{NFSU2_TR(0x5c45a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45a5:{NFSU2_TR(0x5c45a5);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45a9:{NFSU2_TR(0x5c45a9);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45ad:{NFSU2_TR(0x5c45ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45af:{NFSU2_TR(0x5c45af);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45b3:{NFSU2_TR(0x5c45b3);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45b7:{NFSU2_TR(0x5c45b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45b9:{NFSU2_TR(0x5c45b9);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c45c0:{NFSU2_TR(0x5c45c0);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45c4:{NFSU2_TR(0x5c45c4);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45c8:{NFSU2_TR(0x5c45c8);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45cc:{NFSU2_TR(0x5c45cc);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45d0:{NFSU2_TR(0x5c45d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45d2:{NFSU2_TR(0x5c45d2);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45d6:{NFSU2_TR(0x5c45d6);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45da:{NFSU2_TR(0x5c45da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45dc:{NFSU2_TR(0x5c45dc);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45e0:{NFSU2_TR(0x5c45e0);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45e4:{NFSU2_TR(0x5c45e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45e6:{NFSU2_TR(0x5c45e6);
{u32 ea_=u32(r4(G+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c45ed:{NFSU2_TR(0x5c45ed);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45f1:{NFSU2_TR(0x5c45f1);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45f5:{NFSU2_TR(0x5c45f5);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45f9:{NFSU2_TR(0x5c45f9);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45fd:{NFSU2_TR(0x5c45fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45ff:{NFSU2_TR(0x5c45ff);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4603:{NFSU2_TR(0x5c4603);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4607:{NFSU2_TR(0x5c4607);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4609:{NFSU2_TR(0x5c4609);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c460d:{NFSU2_TR(0x5c460d);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4611:{NFSU2_TR(0x5c4611);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4613:{NFSU2_TR(0x5c4613);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c461a:{NFSU2_TR(0x5c461a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c461e:{NFSU2_TR(0x5c461e);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4622:{NFSU2_TR(0x5c4622);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4626:{NFSU2_TR(0x5c4626);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c462a:{NFSU2_TR(0x5c462a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c462c:{NFSU2_TR(0x5c462c);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4630:{NFSU2_TR(0x5c4630);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4634:{NFSU2_TR(0x5c4634);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4636:{NFSU2_TR(0x5c4636);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c463a:{NFSU2_TR(0x5c463a);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c463e:{NFSU2_TR(0x5c463e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4640:{NFSU2_TR(0x5c4640);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4647:{NFSU2_TR(0x5c4647);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c464b:{NFSU2_TR(0x5c464b);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c464f:{NFSU2_TR(0x5c464f);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4656:{NFSU2_TR(0x5c4656);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c465a:{NFSU2_TR(0x5c465a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c465c:{NFSU2_TR(0x5c465c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4660:{NFSU2_TR(0x5c4660);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4667:{NFSU2_TR(0x5c4667);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4669:{NFSU2_TR(0x5c4669);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c466d:{NFSU2_TR(0x5c466d);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4674:{NFSU2_TR(0x5c4674);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4676:{NFSU2_TR(0x5c4676);
{u32 ea_=u32(r4(G+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c467d:{NFSU2_TR(0x5c467d);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4681:{NFSU2_TR(0x5c4681);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4685:{NFSU2_TR(0x5c4685);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c468c:{NFSU2_TR(0x5c468c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4690:{NFSU2_TR(0x5c4690);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4692:{NFSU2_TR(0x5c4692);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4699:{NFSU2_TR(0x5c4699);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c469d:{NFSU2_TR(0x5c469d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c469f:{NFSU2_TR(0x5c469f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46a3:{NFSU2_TR(0x5c46a3);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46aa:{NFSU2_TR(0x5c46aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46ac:{NFSU2_TR(0x5c46ac);
{u32 ea_=u32(r4(G+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c46b3:{NFSU2_TR(0x5c46b3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46b7:{NFSU2_TR(0x5c46b7);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46bb:{NFSU2_TR(0x5c46bb);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46c2:{NFSU2_TR(0x5c46c2);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46c6:{NFSU2_TR(0x5c46c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46c8:{NFSU2_TR(0x5c46c8);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46cc:{NFSU2_TR(0x5c46cc);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46d3:{NFSU2_TR(0x5c46d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46d5:{NFSU2_TR(0x5c46d5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46d9:{NFSU2_TR(0x5c46d9);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46e0:{NFSU2_TR(0x5c46e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46e2:{NFSU2_TR(0x5c46e2);
{u32 ea_=u32(r4(G+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c46e9:{NFSU2_TR(0x5c46e9);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46ed:{NFSU2_TR(0x5c46ed);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46f1:{NFSU2_TR(0x5c46f1);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46f8:{NFSU2_TR(0x5c46f8);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46fc:{NFSU2_TR(0x5c46fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46fe:{NFSU2_TR(0x5c46fe);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4702:{NFSU2_TR(0x5c4702);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4709:{NFSU2_TR(0x5c4709);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c470b:{NFSU2_TR(0x5c470b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c470f:{NFSU2_TR(0x5c470f);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4716:{NFSU2_TR(0x5c4716);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4718:{NFSU2_TR(0x5c4718);
{u32 ea_=u32(r4(G+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c471f:{NFSU2_TR(0x5c471f);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4723:{NFSU2_TR(0x5c4723);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c472a:{NFSU2_TR(0x5c472a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c472e:{NFSU2_TR(0x5c472e);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4735:{NFSU2_TR(0x5c4735);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4737:{NFSU2_TR(0x5c4737);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c473b:{NFSU2_TR(0x5c473b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4742:{NFSU2_TR(0x5c4742);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4744:{NFSU2_TR(0x5c4744);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4748:{NFSU2_TR(0x5c4748);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c474f:{NFSU2_TR(0x5c474f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4751:{NFSU2_TR(0x5c4751);
{u32 ea_=u32(r4(G+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4758:{NFSU2_TR(0x5c4758);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c475f:{NFSU2_TR(0x5c475f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4763:{NFSU2_TR(0x5c4763);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4767:{NFSU2_TR(0x5c4767);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c476e:{NFSU2_TR(0x5c476e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4770:{NFSU2_TR(0x5c4770);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4774:{NFSU2_TR(0x5c4774);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c477b:{NFSU2_TR(0x5c477b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c477d:{NFSU2_TR(0x5c477d);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4781:{NFSU2_TR(0x5c4781);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4788:{NFSU2_TR(0x5c4788);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c478a:{NFSU2_TR(0x5c478a);
{u32 ea_=u32(r4(G+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4791:{NFSU2_TR(0x5c4791);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4795:{NFSU2_TR(0x5c4795);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c479c:{NFSU2_TR(0x5c479c);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47a0:{NFSU2_TR(0x5c47a0);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47a7:{NFSU2_TR(0x5c47a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47a9:{NFSU2_TR(0x5c47a9);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47ad:{NFSU2_TR(0x5c47ad);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47b4:{NFSU2_TR(0x5c47b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47b6:{NFSU2_TR(0x5c47b6);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47ba:{NFSU2_TR(0x5c47ba);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47c1:{NFSU2_TR(0x5c47c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47c3:{NFSU2_TR(0x5c47c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c47ca:{NFSU2_TR(0x5c47ca);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c47cb:{NFSU2_TR(0x5c47cb);
{u32 ea_=u32(r4(G+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c47d2:{NFSU2_TR(0x5c47d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c47d6:{NFSU2_TR(0x5c47d6);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47da:{NFSU2_TR(0x5c47da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c47db:{NFSU2_TR(0x5c47db);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47e2:{NFSU2_TR(0x5c47e2);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47e6:{NFSU2_TR(0x5c47e6);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47ed:{NFSU2_TR(0x5c47ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47ef:{NFSU2_TR(0x5c47ef);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47f3:{NFSU2_TR(0x5c47f3);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47fa:{NFSU2_TR(0x5c47fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47fc:{NFSU2_TR(0x5c47fc);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4800:{NFSU2_TR(0x5c4800);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4807:{NFSU2_TR(0x5c4807);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4809:{NFSU2_TR(0x5c4809);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4810:{NFSU2_TR(0x5c4810);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4815ull));
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
PN u32 blk_5c4815(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4815:L5c4815:{bud-=6;NFSU2_TR(0x5c4815);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c481a:{NFSU2_TR(0x5c481a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c481e:{NFSU2_TR(0x5c481e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c481f:{NFSU2_TR(0x5c481f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c4823:{NFSU2_TR(0x5c4823);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4824:{NFSU2_TR(0x5c4824);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4829ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4829(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4829:L5c4829:{bud-=6;NFSU2_TR(0x5c4829);
u8 U[4];
w4(U+0,u32(0xc000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c482e:{NFSU2_TR(0x5c482e);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4832:{NFSU2_TR(0x5c4832);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4833:{NFSU2_TR(0x5c4833);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c4837:{NFSU2_TR(0x5c4837);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4838:{NFSU2_TR(0x5c4838);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c483dull));
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
PN u32 blk_5c483d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c483d:L5c483d:{bud-=2;NFSU2_TR(0x5c483d);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x2cull))));
}
B5c4840:{NFSU2_TR(0x5c4840);
{[[clang::musttail]] return blk_5c4f07(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4845(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4845:L5c4845:{bud-=6;NFSU2_TR(0x5c4845);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c484a:{NFSU2_TR(0x5c484a);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c484e:{NFSU2_TR(0x5c484e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c484f:{NFSU2_TR(0x5c484f);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4853:{NFSU2_TR(0x5c4853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4854:{NFSU2_TR(0x5c4854);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4859ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4859(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4859:L5c4859:{bud-=197;NFSU2_TR(0x5c4859);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c485d:{NFSU2_TR(0x5c485d);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4861:{NFSU2_TR(0x5c4861);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4865:{NFSU2_TR(0x5c4865);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4869:{NFSU2_TR(0x5c4869);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c486b:{NFSU2_TR(0x5c486b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c486f:{NFSU2_TR(0x5c486f);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4873:{NFSU2_TR(0x5c4873);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4875:{NFSU2_TR(0x5c4875);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4879:{NFSU2_TR(0x5c4879);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c487d:{NFSU2_TR(0x5c487d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c487f:{NFSU2_TR(0x5c487f);
{u32 ea_=u32(r4(G+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4886:{NFSU2_TR(0x5c4886);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c488a:{NFSU2_TR(0x5c488a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c488e:{NFSU2_TR(0x5c488e);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4892:{NFSU2_TR(0x5c4892);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4896:{NFSU2_TR(0x5c4896);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4898:{NFSU2_TR(0x5c4898);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c489c:{NFSU2_TR(0x5c489c);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48a0:{NFSU2_TR(0x5c48a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48a2:{NFSU2_TR(0x5c48a2);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48a6:{NFSU2_TR(0x5c48a6);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48aa:{NFSU2_TR(0x5c48aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48ac:{NFSU2_TR(0x5c48ac);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c48b3:{NFSU2_TR(0x5c48b3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48b7:{NFSU2_TR(0x5c48b7);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48bb:{NFSU2_TR(0x5c48bb);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48bf:{NFSU2_TR(0x5c48bf);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48c3:{NFSU2_TR(0x5c48c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48c5:{NFSU2_TR(0x5c48c5);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48c9:{NFSU2_TR(0x5c48c9);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48cd:{NFSU2_TR(0x5c48cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48cf:{NFSU2_TR(0x5c48cf);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48d3:{NFSU2_TR(0x5c48d3);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48d7:{NFSU2_TR(0x5c48d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48d9:{NFSU2_TR(0x5c48d9);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c48e0:{NFSU2_TR(0x5c48e0);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48e4:{NFSU2_TR(0x5c48e4);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48e8:{NFSU2_TR(0x5c48e8);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48ec:{NFSU2_TR(0x5c48ec);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48f0:{NFSU2_TR(0x5c48f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48f2:{NFSU2_TR(0x5c48f2);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48f6:{NFSU2_TR(0x5c48f6);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48fa:{NFSU2_TR(0x5c48fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48fc:{NFSU2_TR(0x5c48fc);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4900:{NFSU2_TR(0x5c4900);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4904:{NFSU2_TR(0x5c4904);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4906:{NFSU2_TR(0x5c4906);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c490d:{NFSU2_TR(0x5c490d);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4911:{NFSU2_TR(0x5c4911);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4915:{NFSU2_TR(0x5c4915);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4919:{NFSU2_TR(0x5c4919);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c491d:{NFSU2_TR(0x5c491d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c491f:{NFSU2_TR(0x5c491f);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4923:{NFSU2_TR(0x5c4923);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4927:{NFSU2_TR(0x5c4927);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4929:{NFSU2_TR(0x5c4929);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c492d:{NFSU2_TR(0x5c492d);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4931:{NFSU2_TR(0x5c4931);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4933:{NFSU2_TR(0x5c4933);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c493a:{NFSU2_TR(0x5c493a);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c493e:{NFSU2_TR(0x5c493e);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4942:{NFSU2_TR(0x5c4942);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4946:{NFSU2_TR(0x5c4946);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c494a:{NFSU2_TR(0x5c494a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c494c:{NFSU2_TR(0x5c494c);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4950:{NFSU2_TR(0x5c4950);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4954:{NFSU2_TR(0x5c4954);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4956:{NFSU2_TR(0x5c4956);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c495a:{NFSU2_TR(0x5c495a);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c495e:{NFSU2_TR(0x5c495e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4960:{NFSU2_TR(0x5c4960);
{u32 ea_=u32(r4(G+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4967:{NFSU2_TR(0x5c4967);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c496b:{NFSU2_TR(0x5c496b);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c496f:{NFSU2_TR(0x5c496f);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4973:{NFSU2_TR(0x5c4973);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4977:{NFSU2_TR(0x5c4977);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4979:{NFSU2_TR(0x5c4979);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c497d:{NFSU2_TR(0x5c497d);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4981:{NFSU2_TR(0x5c4981);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4983:{NFSU2_TR(0x5c4983);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4987:{NFSU2_TR(0x5c4987);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c498b:{NFSU2_TR(0x5c498b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c498d:{NFSU2_TR(0x5c498d);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4994:{NFSU2_TR(0x5c4994);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4998:{NFSU2_TR(0x5c4998);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c499c:{NFSU2_TR(0x5c499c);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49a0:{NFSU2_TR(0x5c49a0);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49a4:{NFSU2_TR(0x5c49a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49a6:{NFSU2_TR(0x5c49a6);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49aa:{NFSU2_TR(0x5c49aa);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49ae:{NFSU2_TR(0x5c49ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49b0:{NFSU2_TR(0x5c49b0);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49b4:{NFSU2_TR(0x5c49b4);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49b8:{NFSU2_TR(0x5c49b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49ba:{NFSU2_TR(0x5c49ba);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c49c1:{NFSU2_TR(0x5c49c1);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49c5:{NFSU2_TR(0x5c49c5);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49c9:{NFSU2_TR(0x5c49c9);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49d0:{NFSU2_TR(0x5c49d0);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49d4:{NFSU2_TR(0x5c49d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49d6:{NFSU2_TR(0x5c49d6);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49da:{NFSU2_TR(0x5c49da);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49e1:{NFSU2_TR(0x5c49e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49e3:{NFSU2_TR(0x5c49e3);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49e7:{NFSU2_TR(0x5c49e7);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49ee:{NFSU2_TR(0x5c49ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49f0:{NFSU2_TR(0x5c49f0);
{u32 ea_=u32(r4(G+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c49f7:{NFSU2_TR(0x5c49f7);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49fb:{NFSU2_TR(0x5c49fb);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49ff:{NFSU2_TR(0x5c49ff);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a06:{NFSU2_TR(0x5c4a06);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a0a:{NFSU2_TR(0x5c4a0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a0c:{NFSU2_TR(0x5c4a0c);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a13:{NFSU2_TR(0x5c4a13);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a17:{NFSU2_TR(0x5c4a17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a19:{NFSU2_TR(0x5c4a19);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a1d:{NFSU2_TR(0x5c4a1d);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a24:{NFSU2_TR(0x5c4a24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a26:{NFSU2_TR(0x5c4a26);
{u32 ea_=u32(r4(G+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4a2d:{NFSU2_TR(0x5c4a2d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a31:{NFSU2_TR(0x5c4a31);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a35:{NFSU2_TR(0x5c4a35);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a3c:{NFSU2_TR(0x5c4a3c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a40:{NFSU2_TR(0x5c4a40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a42:{NFSU2_TR(0x5c4a42);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a46:{NFSU2_TR(0x5c4a46);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a4d:{NFSU2_TR(0x5c4a4d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a4f:{NFSU2_TR(0x5c4a4f);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a53:{NFSU2_TR(0x5c4a53);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a5a:{NFSU2_TR(0x5c4a5a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a5c:{NFSU2_TR(0x5c4a5c);
{u32 ea_=u32(r4(G+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4a63:{NFSU2_TR(0x5c4a63);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a67:{NFSU2_TR(0x5c4a67);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a6b:{NFSU2_TR(0x5c4a6b);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a72:{NFSU2_TR(0x5c4a72);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a76:{NFSU2_TR(0x5c4a76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a78:{NFSU2_TR(0x5c4a78);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a7c:{NFSU2_TR(0x5c4a7c);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a83:{NFSU2_TR(0x5c4a83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a85:{NFSU2_TR(0x5c4a85);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a89:{NFSU2_TR(0x5c4a89);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a90:{NFSU2_TR(0x5c4a90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a92:{NFSU2_TR(0x5c4a92);
{u32 ea_=u32(r4(G+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4a99:{NFSU2_TR(0x5c4a99);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a9d:{NFSU2_TR(0x5c4a9d);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4aa4:{NFSU2_TR(0x5c4aa4);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4aa8:{NFSU2_TR(0x5c4aa8);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4aaf:{NFSU2_TR(0x5c4aaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ab1:{NFSU2_TR(0x5c4ab1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ab5:{NFSU2_TR(0x5c4ab5);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4abc:{NFSU2_TR(0x5c4abc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4abe:{NFSU2_TR(0x5c4abe);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ac2:{NFSU2_TR(0x5c4ac2);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ac9:{NFSU2_TR(0x5c4ac9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4acb:{NFSU2_TR(0x5c4acb);
{u32 ea_=u32(r4(G+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ad2:{NFSU2_TR(0x5c4ad2);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ad9:{NFSU2_TR(0x5c4ad9);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4add:{NFSU2_TR(0x5c4add);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ae1:{NFSU2_TR(0x5c4ae1);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ae8:{NFSU2_TR(0x5c4ae8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4aea:{NFSU2_TR(0x5c4aea);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4aee:{NFSU2_TR(0x5c4aee);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4af5:{NFSU2_TR(0x5c4af5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4af7:{NFSU2_TR(0x5c4af7);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4afb:{NFSU2_TR(0x5c4afb);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b02:{NFSU2_TR(0x5c4b02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b04:{NFSU2_TR(0x5c4b04);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4b0b:{NFSU2_TR(0x5c4b0b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b0f:{NFSU2_TR(0x5c4b0f);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b16:{NFSU2_TR(0x5c4b16);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b1a:{NFSU2_TR(0x5c4b1a);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b21:{NFSU2_TR(0x5c4b21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b23:{NFSU2_TR(0x5c4b23);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b27:{NFSU2_TR(0x5c4b27);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b2e:{NFSU2_TR(0x5c4b2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b30:{NFSU2_TR(0x5c4b30);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b34:{NFSU2_TR(0x5c4b34);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b3b:{NFSU2_TR(0x5c4b3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b3d:{NFSU2_TR(0x5c4b3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c4b44:{NFSU2_TR(0x5c4b44);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4b45:{NFSU2_TR(0x5c4b45);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4b4c:{NFSU2_TR(0x5c4b4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c4b50:{NFSU2_TR(0x5c4b50);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b54:{NFSU2_TR(0x5c4b54);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4b55:{NFSU2_TR(0x5c4b55);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b5c:{NFSU2_TR(0x5c4b5c);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b60:{NFSU2_TR(0x5c4b60);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b67:{NFSU2_TR(0x5c4b67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b69:{NFSU2_TR(0x5c4b69);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b6d:{NFSU2_TR(0x5c4b6d);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b74:{NFSU2_TR(0x5c4b74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b76:{NFSU2_TR(0x5c4b76);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b7a:{NFSU2_TR(0x5c4b7a);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b81:{NFSU2_TR(0x5c4b81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b83:{NFSU2_TR(0x5c4b83);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4b8a:{NFSU2_TR(0x5c4b8a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4b8full));
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
PN u32 blk_5c4b8f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4b8f:L5c4b8f:{bud-=6;NFSU2_TR(0x5c4b8f);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4b94:{NFSU2_TR(0x5c4b94);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4b98:{NFSU2_TR(0x5c4b98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4b99:{NFSU2_TR(0x5c4b99);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c4b9d:{NFSU2_TR(0x5c4b9d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4b9e:{NFSU2_TR(0x5c4b9e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4ba3ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4ba3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4ba3:L5c4ba3:{bud-=2;NFSU2_TR(0x5c4ba3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x20ull))));
}
B5c4ba6:{NFSU2_TR(0x5c4ba6);
{[[clang::musttail]] return blk_5c4f07(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4bab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4bab:L5c4bab:{bud-=6;NFSU2_TR(0x5c4bab);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4bb0:{NFSU2_TR(0x5c4bb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c4bb4:{NFSU2_TR(0x5c4bb4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4bb5:{NFSU2_TR(0x5c4bb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4bb9:{NFSU2_TR(0x5c4bb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4bba:{NFSU2_TR(0x5c4bba);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4bbfull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bada0u);}[[clang::musttail]] return blk_5bada0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4bbf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4bbf:L5c4bbf:{bud-=197;NFSU2_TR(0x5c4bbf);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bc3:{NFSU2_TR(0x5c4bc3);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bc7:{NFSU2_TR(0x5c4bc7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bcb:{NFSU2_TR(0x5c4bcb);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bcf:{NFSU2_TR(0x5c4bcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4bd1:{NFSU2_TR(0x5c4bd1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bd5:{NFSU2_TR(0x5c4bd5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bd9:{NFSU2_TR(0x5c4bd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4bdb:{NFSU2_TR(0x5c4bdb);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bdf:{NFSU2_TR(0x5c4bdf);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4be3:{NFSU2_TR(0x5c4be3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4be5:{NFSU2_TR(0x5c4be5);
{u32 ea_=u32(r4(G+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4bec:{NFSU2_TR(0x5c4bec);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bf0:{NFSU2_TR(0x5c4bf0);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bf4:{NFSU2_TR(0x5c4bf4);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bf8:{NFSU2_TR(0x5c4bf8);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bfc:{NFSU2_TR(0x5c4bfc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4bfe:{NFSU2_TR(0x5c4bfe);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c02:{NFSU2_TR(0x5c4c02);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c06:{NFSU2_TR(0x5c4c06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c08:{NFSU2_TR(0x5c4c08);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c0c:{NFSU2_TR(0x5c4c0c);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c10:{NFSU2_TR(0x5c4c10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c12:{NFSU2_TR(0x5c4c12);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4c19:{NFSU2_TR(0x5c4c19);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c1d:{NFSU2_TR(0x5c4c1d);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c21:{NFSU2_TR(0x5c4c21);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c25:{NFSU2_TR(0x5c4c25);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c29:{NFSU2_TR(0x5c4c29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c2b:{NFSU2_TR(0x5c4c2b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c2f:{NFSU2_TR(0x5c4c2f);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c33:{NFSU2_TR(0x5c4c33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c35:{NFSU2_TR(0x5c4c35);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c39:{NFSU2_TR(0x5c4c39);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c3d:{NFSU2_TR(0x5c4c3d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c3f:{NFSU2_TR(0x5c4c3f);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4c46:{NFSU2_TR(0x5c4c46);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c4a:{NFSU2_TR(0x5c4c4a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c4e:{NFSU2_TR(0x5c4c4e);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c52:{NFSU2_TR(0x5c4c52);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c56:{NFSU2_TR(0x5c4c56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c58:{NFSU2_TR(0x5c4c58);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c5c:{NFSU2_TR(0x5c4c5c);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c60:{NFSU2_TR(0x5c4c60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c62:{NFSU2_TR(0x5c4c62);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c66:{NFSU2_TR(0x5c4c66);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c6a:{NFSU2_TR(0x5c4c6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c6c:{NFSU2_TR(0x5c4c6c);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4c73:{NFSU2_TR(0x5c4c73);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c77:{NFSU2_TR(0x5c4c77);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c7b:{NFSU2_TR(0x5c4c7b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c7f:{NFSU2_TR(0x5c4c7f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c83:{NFSU2_TR(0x5c4c83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c85:{NFSU2_TR(0x5c4c85);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c89:{NFSU2_TR(0x5c4c89);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c8d:{NFSU2_TR(0x5c4c8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c8f:{NFSU2_TR(0x5c4c8f);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c93:{NFSU2_TR(0x5c4c93);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c97:{NFSU2_TR(0x5c4c97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c99:{NFSU2_TR(0x5c4c99);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ca0:{NFSU2_TR(0x5c4ca0);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ca4:{NFSU2_TR(0x5c4ca4);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ca8:{NFSU2_TR(0x5c4ca8);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cac:{NFSU2_TR(0x5c4cac);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cb0:{NFSU2_TR(0x5c4cb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cb2:{NFSU2_TR(0x5c4cb2);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cb6:{NFSU2_TR(0x5c4cb6);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cba:{NFSU2_TR(0x5c4cba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cbc:{NFSU2_TR(0x5c4cbc);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cc0:{NFSU2_TR(0x5c4cc0);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cc4:{NFSU2_TR(0x5c4cc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cc6:{NFSU2_TR(0x5c4cc6);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ccd:{NFSU2_TR(0x5c4ccd);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cd1:{NFSU2_TR(0x5c4cd1);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cd5:{NFSU2_TR(0x5c4cd5);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cd9:{NFSU2_TR(0x5c4cd9);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cdd:{NFSU2_TR(0x5c4cdd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cdf:{NFSU2_TR(0x5c4cdf);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ce3:{NFSU2_TR(0x5c4ce3);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ce7:{NFSU2_TR(0x5c4ce7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ce9:{NFSU2_TR(0x5c4ce9);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ced:{NFSU2_TR(0x5c4ced);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cf1:{NFSU2_TR(0x5c4cf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cf3:{NFSU2_TR(0x5c4cf3);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4cfa:{NFSU2_TR(0x5c4cfa);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cfe:{NFSU2_TR(0x5c4cfe);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d02:{NFSU2_TR(0x5c4d02);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d06:{NFSU2_TR(0x5c4d06);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d0a:{NFSU2_TR(0x5c4d0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d0c:{NFSU2_TR(0x5c4d0c);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d10:{NFSU2_TR(0x5c4d10);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d14:{NFSU2_TR(0x5c4d14);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d16:{NFSU2_TR(0x5c4d16);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d1a:{NFSU2_TR(0x5c4d1a);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d1e:{NFSU2_TR(0x5c4d1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d20:{NFSU2_TR(0x5c4d20);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4d27:{NFSU2_TR(0x5c4d27);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d2b:{NFSU2_TR(0x5c4d2b);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d2f:{NFSU2_TR(0x5c4d2f);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d36:{NFSU2_TR(0x5c4d36);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d3a:{NFSU2_TR(0x5c4d3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d3c:{NFSU2_TR(0x5c4d3c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d40:{NFSU2_TR(0x5c4d40);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d47:{NFSU2_TR(0x5c4d47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d49:{NFSU2_TR(0x5c4d49);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d4d:{NFSU2_TR(0x5c4d4d);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d54:{NFSU2_TR(0x5c4d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d56:{NFSU2_TR(0x5c4d56);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4d5d:{NFSU2_TR(0x5c4d5d);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d61:{NFSU2_TR(0x5c4d61);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d65:{NFSU2_TR(0x5c4d65);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d6c:{NFSU2_TR(0x5c4d6c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d70:{NFSU2_TR(0x5c4d70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d72:{NFSU2_TR(0x5c4d72);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d79:{NFSU2_TR(0x5c4d79);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d7d:{NFSU2_TR(0x5c4d7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d7f:{NFSU2_TR(0x5c4d7f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d83:{NFSU2_TR(0x5c4d83);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d8a:{NFSU2_TR(0x5c4d8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d8c:{NFSU2_TR(0x5c4d8c);
{u32 ea_=u32(r4(G+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4d93:{NFSU2_TR(0x5c4d93);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d97:{NFSU2_TR(0x5c4d97);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d9b:{NFSU2_TR(0x5c4d9b);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4da2:{NFSU2_TR(0x5c4da2);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4da6:{NFSU2_TR(0x5c4da6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4da8:{NFSU2_TR(0x5c4da8);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4dac:{NFSU2_TR(0x5c4dac);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4db3:{NFSU2_TR(0x5c4db3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4db5:{NFSU2_TR(0x5c4db5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4db9:{NFSU2_TR(0x5c4db9);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4dc0:{NFSU2_TR(0x5c4dc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4dc2:{NFSU2_TR(0x5c4dc2);
{u32 ea_=u32(r4(G+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4dc9:{NFSU2_TR(0x5c4dc9);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4dcd:{NFSU2_TR(0x5c4dcd);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4dd1:{NFSU2_TR(0x5c4dd1);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4dd8:{NFSU2_TR(0x5c4dd8);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ddc:{NFSU2_TR(0x5c4ddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4dde:{NFSU2_TR(0x5c4dde);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4de2:{NFSU2_TR(0x5c4de2);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4de9:{NFSU2_TR(0x5c4de9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4deb:{NFSU2_TR(0x5c4deb);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4def:{NFSU2_TR(0x5c4def);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4df6:{NFSU2_TR(0x5c4df6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4df8:{NFSU2_TR(0x5c4df8);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4dff:{NFSU2_TR(0x5c4dff);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e03:{NFSU2_TR(0x5c4e03);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e0a:{NFSU2_TR(0x5c4e0a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e0e:{NFSU2_TR(0x5c4e0e);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e15:{NFSU2_TR(0x5c4e15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e17:{NFSU2_TR(0x5c4e17);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e1b:{NFSU2_TR(0x5c4e1b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e22:{NFSU2_TR(0x5c4e22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e24:{NFSU2_TR(0x5c4e24);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e28:{NFSU2_TR(0x5c4e28);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e2f:{NFSU2_TR(0x5c4e2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e31:{NFSU2_TR(0x5c4e31);
{u32 ea_=u32(r4(G+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4e38:{NFSU2_TR(0x5c4e38);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e3f:{NFSU2_TR(0x5c4e3f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e43:{NFSU2_TR(0x5c4e43);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e47:{NFSU2_TR(0x5c4e47);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e4e:{NFSU2_TR(0x5c4e4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e50:{NFSU2_TR(0x5c4e50);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e54:{NFSU2_TR(0x5c4e54);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e5b:{NFSU2_TR(0x5c4e5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e5d:{NFSU2_TR(0x5c4e5d);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e61:{NFSU2_TR(0x5c4e61);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e68:{NFSU2_TR(0x5c4e68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e6a:{NFSU2_TR(0x5c4e6a);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4e71:{NFSU2_TR(0x5c4e71);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e75:{NFSU2_TR(0x5c4e75);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e7c:{NFSU2_TR(0x5c4e7c);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e80:{NFSU2_TR(0x5c4e80);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e87:{NFSU2_TR(0x5c4e87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e89:{NFSU2_TR(0x5c4e89);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e8d:{NFSU2_TR(0x5c4e8d);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e94:{NFSU2_TR(0x5c4e94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e96:{NFSU2_TR(0x5c4e96);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e9a:{NFSU2_TR(0x5c4e9a);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ea1:{NFSU2_TR(0x5c4ea1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ea3:{NFSU2_TR(0x5c4ea3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c4eaa:{NFSU2_TR(0x5c4eaa);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4eab:{NFSU2_TR(0x5c4eab);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4eb2:{NFSU2_TR(0x5c4eb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5c4eb6:{NFSU2_TR(0x5c4eb6);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4eba:{NFSU2_TR(0x5c4eba);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4ebb:{NFSU2_TR(0x5c4ebb);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ec2:{NFSU2_TR(0x5c4ec2);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ec6:{NFSU2_TR(0x5c4ec6);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ecd:{NFSU2_TR(0x5c4ecd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ecf:{NFSU2_TR(0x5c4ecf);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ed3:{NFSU2_TR(0x5c4ed3);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4eda:{NFSU2_TR(0x5c4eda);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4edc:{NFSU2_TR(0x5c4edc);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ee0:{NFSU2_TR(0x5c4ee0);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ee7:{NFSU2_TR(0x5c4ee7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ee9:{NFSU2_TR(0x5c4ee9);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ef0:{NFSU2_TR(0x5c4ef0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4ef5ull));
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
PN u32 blk_5c4ef5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4ef5:L5c4ef5:{bud-=2;NFSU2_TR(0x5c4ef5);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
}
B5c4ef8:{NFSU2_TR(0x5c4ef8);
{[[clang::musttail]] return blk_5c4f07(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4efa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4efa:L5c4efa:{bud-=3;NFSU2_TR(0x5c4efa);
w4(G+4,u32(0x10ull));
}
B5c4eff:{NFSU2_TR(0x5c4eff);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B5c4f01:{NFSU2_TR(0x5c4f01);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_5c4f05(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4f05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4f05:L5c4f05:{bud-=1;NFSU2_TR(0x5c4f05);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_5c4f07(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c4f05u);}goto L5c4f05;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4f07(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4f07:L5c4f07:{bud-=38;NFSU2_TR(0x5c4f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5c4f0a:{NFSU2_TR(0x5c4f0a);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f0e:{NFSU2_TR(0x5c4f0e);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f11:{NFSU2_TR(0x5c4f11);
__builtin_memmove((R+8),gp(0x865198),4);
}
B5c4f17:{NFSU2_TR(0x5c4f17);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f1b:{NFSU2_TR(0x5c4f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c4f22:{NFSU2_TR(0x5c4f22);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f25:{NFSU2_TR(0x5c4f25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4f26:{NFSU2_TR(0x5c4f26);
__builtin_memmove((G+4),(R+24),4);
}
B5c4f28:{NFSU2_TR(0x5c4f28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f2a:{NFSU2_TR(0x5c4f2a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f2e:{NFSU2_TR(0x5c4f2e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f30:{NFSU2_TR(0x5c4f30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f32:{NFSU2_TR(0x5c4f32);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c4f34:{NFSU2_TR(0x5c4f34);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4f3b:{NFSU2_TR(0x5c4f3b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f3f:{NFSU2_TR(0x5c4f3f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f42:{NFSU2_TR(0x5c4f42);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f46:{NFSU2_TR(0x5c4f46);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f49:{NFSU2_TR(0x5c4f49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f4b:{NFSU2_TR(0x5c4f4b);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f4f:{NFSU2_TR(0x5c4f4f);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f51:{NFSU2_TR(0x5c4f51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f53:{NFSU2_TR(0x5c4f53);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c4f55:{NFSU2_TR(0x5c4f55);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4f5c:{NFSU2_TR(0x5c4f5c);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f60:{NFSU2_TR(0x5c4f60);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f63:{NFSU2_TR(0x5c4f63);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f67:{NFSU2_TR(0x5c4f67);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f6a:{NFSU2_TR(0x5c4f6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f6c:{NFSU2_TR(0x5c4f6c);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f70:{NFSU2_TR(0x5c4f70);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f72:{NFSU2_TR(0x5c4f72);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5c4f76:{NFSU2_TR(0x5c4f76);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5c4f77:{NFSU2_TR(0x5c4f77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f79:{NFSU2_TR(0x5c4f79);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c4f7b:{NFSU2_TR(0x5c4f7b);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4f82:{NFSU2_TR(0x5c4f82);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5c4f87ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x447280u);}[[clang::musttail]] return blk_447280(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4f87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4f87:L5c4f87:{bud-=4;NFSU2_TR(0x5c4f87);
__builtin_memmove((G+4),gp(0x828640),4);
}
B5c4f8d:{NFSU2_TR(0x5c4f8d);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B5c4f8f:{NFSU2_TR(0x5c4f8f);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5c4f91:{NFSU2_TR(0x5c4f91);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5c4fa7(ARGS);}}
}
B5c4f93:L5c4f93:{bud-=3;NFSU2_TR(0x5c4f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4f99:{NFSU2_TR(0x5c4f99);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(G+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5c4f9f:{NFSU2_TR(0x5c4f9f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5c4fa7(ARGS);}}
}
B5c4fa1:L5c4fa1:{bud-=1;NFSU2_TR(0x5c4fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5c4fa7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4fa7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4fa7:L5c4fa7:{bud-=6;NFSU2_TR(0x5c4fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5c4fae:{NFSU2_TR(0x5c4fae);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c4fb5:{NFSU2_TR(0x5c4fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4fbb:{NFSU2_TR(0x5c4fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4fc1:{NFSU2_TR(0x5c4fc1);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(G+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5c4fc7:{NFSU2_TR(0x5c4fc7);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5c4fd6(ARGS);}}
}
B5c4fc9:L5c4fc9:{bud-=2;NFSU2_TR(0x5c4fc9);
__builtin_memmove((G+0),gp(0x871b90),2);
}
B5c4fcf:{NFSU2_TR(0x5c4fcf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_5c4fd6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5c4fd6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5c4fd6:L5c4fd6:{bud-=7;NFSU2_TR(0x5c4fd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5c4fdd:{NFSU2_TR(0x5c4fdd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5c4fe4:{NFSU2_TR(0x5c4fe4);
w1(F+0,carry<u32>(r4(G+4),u32(0x4ull)));
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x4ull))));
}
B5c4fe7:{NFSU2_TR(0x5c4fe7);
u8 U[6];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x1ull)));
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5c4fe8:{NFSU2_TR(0x5c4fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4fef:{NFSU2_TR(0x5c4fef);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4ff6:{NFSU2_TR(0x5c4ff6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5c39c9u);}[[clang::musttail]] return blk_5c39c9(ARGS);}}
}
B5c4ffc:L5c4ffc:{bud-=4;NFSU2_TR(0x5c4ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c4ffd:{NFSU2_TR(0x5c4ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c4ffe:{NFSU2_TR(0x5c4ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c4fff:{NFSU2_TR(0x5c4fff);
__builtin_memmove((G+16),(R+20),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);EXIT(0x5c5001u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_5c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x5c4135:[[clang::musttail]] return blk_5c4135(c,a4,a0,a1,bud);
case 0x5c413a:[[clang::musttail]] return blk_5c413a(c,a4,a0,a1,bud);
case 0x5c4149:[[clang::musttail]] return blk_5c4149(c,a4,a0,a1,bud);
case 0x5c4151:[[clang::musttail]] return blk_5c4151(c,a4,a0,a1,bud);
case 0x5c4165:[[clang::musttail]] return blk_5c4165(c,a4,a0,a1,bud);
case 0x5c449b:[[clang::musttail]] return blk_5c449b(c,a4,a0,a1,bud);
case 0x5c44af:[[clang::musttail]] return blk_5c44af(c,a4,a0,a1,bud);
case 0x5c44c3:[[clang::musttail]] return blk_5c44c3(c,a4,a0,a1,bud);
case 0x5c44cb:[[clang::musttail]] return blk_5c44cb(c,a4,a0,a1,bud);
case 0x5c44df:[[clang::musttail]] return blk_5c44df(c,a4,a0,a1,bud);
case 0x5c4815:[[clang::musttail]] return blk_5c4815(c,a4,a0,a1,bud);
case 0x5c4829:[[clang::musttail]] return blk_5c4829(c,a4,a0,a1,bud);
case 0x5c483d:[[clang::musttail]] return blk_5c483d(c,a4,a0,a1,bud);
case 0x5c4845:[[clang::musttail]] return blk_5c4845(c,a4,a0,a1,bud);
case 0x5c4859:[[clang::musttail]] return blk_5c4859(c,a4,a0,a1,bud);
case 0x5c4b8f:[[clang::musttail]] return blk_5c4b8f(c,a4,a0,a1,bud);
case 0x5c4ba3:[[clang::musttail]] return blk_5c4ba3(c,a4,a0,a1,bud);
case 0x5c4bab:[[clang::musttail]] return blk_5c4bab(c,a4,a0,a1,bud);
case 0x5c4bbf:[[clang::musttail]] return blk_5c4bbf(c,a4,a0,a1,bud);
case 0x5c4ef5:[[clang::musttail]] return blk_5c4ef5(c,a4,a0,a1,bud);
case 0x5c4efa:[[clang::musttail]] return blk_5c4efa(c,a4,a0,a1,bud);
case 0x5c4f05:[[clang::musttail]] return blk_5c4f05(c,a4,a0,a1,bud);
case 0x5c4f07:[[clang::musttail]] return blk_5c4f07(c,a4,a0,a1,bud);
case 0x5c4f87:[[clang::musttail]] return blk_5c4f87(c,a4,a0,a1,bud);
case 0x5c4fa7:[[clang::musttail]] return blk_5c4fa7(c,a4,a0,a1,bud);
case 0x5c4fd6:[[clang::musttail]] return blk_5c4fd6(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_5c4(Cpu& c){u8* R=c.regs.data();return ent_5c4(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
