#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c7e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60e030(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60e08a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60e464(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60ecb6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60e002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B60e002:L60e002:{bud-=9;NFSU2_TR(0x60e002);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B60e004:{NFSU2_TR(0x60e004);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e00b:{NFSU2_TR(0x60e00b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e012:{NFSU2_TR(0x60e012);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e014:{NFSU2_TR(0x60e014);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e01b:{NFSU2_TR(0x60e01b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e01d:{NFSU2_TR(0x60e01d);
{u32 ea_=u32(r4(G+16)+u32(1400u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e024:{NFSU2_TR(0x60e024);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e02b:{NFSU2_TR(0x60e02b);
{[[clang::musttail]] return blk_60e030(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_60e030(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B60e030:L60e030:{bud-=11;NFSU2_TR(0x60e030);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B60e033:{NFSU2_TR(0x60e033);
u8 U[5];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B60e03a:{NFSU2_TR(0x60e03a);
u8 U[13];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e041:{NFSU2_TR(0x60e041);
u8 U[5];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B60e048:{NFSU2_TR(0x60e048);
u8 U[13];
w4(U+0,u32(u32(u32(0xc1ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e04f:{NFSU2_TR(0x60e04f);
u8 U[5];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B60e056:{NFSU2_TR(0x60e056);
u8 U[13];
w4(U+0,u32(u32(u32(0xc2ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e05d:{NFSU2_TR(0x60e05d);
u8 U[13];
w4(U+0,u32(u32(u32(0xc3ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B60e064:{NFSU2_TR(0x60e064);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B60e065:{NFSU2_TR(0x60e065);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60e068:{NFSU2_TR(0x60e068);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x60e030u);}goto L60e030;}}
}
B60e06a:L60e06a:{bud-=10;NFSU2_TR(0x60e06a);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e071:{NFSU2_TR(0x60e071);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e078:{NFSU2_TR(0x60e078);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e07a:{NFSU2_TR(0x60e07a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e07c:{NFSU2_TR(0x60e07c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e07d:{NFSU2_TR(0x60e07d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e07e:{NFSU2_TR(0x60e07e);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60e082:{NFSU2_TR(0x60e082);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e083:{NFSU2_TR(0x60e083);
__builtin_memmove((G+4),(R+12),4);
}
B60e085:{NFSU2_TR(0x60e085);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x60e08aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c7e80u);}[[clang::musttail]] return blk_5c7e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_60e08a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B60e08a:L60e08a:{bud-=182;NFSU2_TR(0x60e08a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e08e:{NFSU2_TR(0x60e08e);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e092:{NFSU2_TR(0x60e092);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e096:{NFSU2_TR(0x60e096);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e098:{NFSU2_TR(0x60e098);
__builtin_memmove((G+4),(G+0),4);
}
B60e09a:{NFSU2_TR(0x60e09a);
{u32 ea_=u32(r4(G+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e0a1:{NFSU2_TR(0x60e0a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0a8:{NFSU2_TR(0x60e0a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e0ac:{NFSU2_TR(0x60e0ac);
{u32 ea_=u32(r4(G+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e0b3:{NFSU2_TR(0x60e0b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8a8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0ba:{NFSU2_TR(0x60e0ba);
{u32 ea_=u32(r4(G+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e0c1:{NFSU2_TR(0x60e0c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e0c5:{NFSU2_TR(0x60e0c5);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e0c9:{NFSU2_TR(0x60e0c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0d0:{NFSU2_TR(0x60e0d0);
{u32 ea_=u32(r4(G+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e0d7:{NFSU2_TR(0x60e0d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e0de:{NFSU2_TR(0x60e0de);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e0e2:{NFSU2_TR(0x60e0e2);
{u32 ea_=u32(r4(G+16)+u32(872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e0e9:{NFSU2_TR(0x60e0e9);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e0ed:{NFSU2_TR(0x60e0ed);
{u32 ea_=u32(r4(G+16)+u32(1704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e0f4:{NFSU2_TR(0x60e0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6a8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e0fb:{NFSU2_TR(0x60e0fb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e0fd:{NFSU2_TR(0x60e0fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e104:{NFSU2_TR(0x60e104);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e10b:{NFSU2_TR(0x60e10b);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e112:{NFSU2_TR(0x60e112);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e119:{NFSU2_TR(0x60e119);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e11b:{NFSU2_TR(0x60e11b);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e122:{NFSU2_TR(0x60e122);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e124:{NFSU2_TR(0x60e124);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e12b:{NFSU2_TR(0x60e12b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e12d:{NFSU2_TR(0x60e12d);
{u32 ea_=u32(r4(G+16)+u32(2728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e134:{NFSU2_TR(0x60e134);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e136:{NFSU2_TR(0x60e136);
{u32 ea_=u32(r4(G+16)+u32(1728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e13d:{NFSU2_TR(0x60e13d);
{u32 ea_=u32(r4(G+16)+u32(2728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e144:{NFSU2_TR(0x60e144);
{u32 ea_=u32(r4(G+16)+u32(1728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e14b:{NFSU2_TR(0x60e14b);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e152:{NFSU2_TR(0x60e152);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e159:{NFSU2_TR(0x60e159);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e15b:{NFSU2_TR(0x60e15b);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e162:{NFSU2_TR(0x60e162);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e169:{NFSU2_TR(0x60e169);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e170:{NFSU2_TR(0x60e170);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e174:{NFSU2_TR(0x60e174);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e178:{NFSU2_TR(0x60e178);
{u32 ea_=u32(r4(G+16)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e17f:{NFSU2_TR(0x60e17f);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e183:{NFSU2_TR(0x60e183);
{u32 ea_=u32(r4(G+16)+u32(968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e18a:{NFSU2_TR(0x60e18a);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e18e:{NFSU2_TR(0x60e18e);
{u32 ea_=u32(r4(G+16)+u32(2248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e195:{NFSU2_TR(0x60e195);
u8 U[8];
w4(U+0,u32(u32(u32(0x8c8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e19c:{NFSU2_TR(0x60e19c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e19e:{NFSU2_TR(0x60e19e);
u8 U[8];
w4(U+0,u32(u32(u32(0x288ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e1a5:{NFSU2_TR(0x60e1a5);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1ac:{NFSU2_TR(0x60e1ac);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1b3:{NFSU2_TR(0x60e1b3);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e1ba:{NFSU2_TR(0x60e1ba);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e1be:{NFSU2_TR(0x60e1be);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e1c5:{NFSU2_TR(0x60e1c5);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e1c9:{NFSU2_TR(0x60e1c9);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e1d0:{NFSU2_TR(0x60e1d0);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e1d4:{NFSU2_TR(0x60e1d4);
{u32 ea_=u32(r4(G+16)+u32(1768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1db:{NFSU2_TR(0x60e1db);
u8 U[8];
w4(U+0,u32(u32(u32(0x6e8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e1e2:{NFSU2_TR(0x60e1e2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e1e4:{NFSU2_TR(0x60e1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e1eb:{NFSU2_TR(0x60e1eb);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1f2:{NFSU2_TR(0x60e1f2);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e1f9:{NFSU2_TR(0x60e1f9);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e200:{NFSU2_TR(0x60e200);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e202:{NFSU2_TR(0x60e202);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e209:{NFSU2_TR(0x60e209);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e20b:{NFSU2_TR(0x60e20b);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e212:{NFSU2_TR(0x60e212);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e214:{NFSU2_TR(0x60e214);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e218:{NFSU2_TR(0x60e218);
__builtin_memmove((G+0),(R+8),4);
}
B60e21a:{NFSU2_TR(0x60e21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e221:{NFSU2_TR(0x60e221);
{u32 ea_=u32(r4(G+16)+u32(2504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e228:{NFSU2_TR(0x60e228);
u8 U[8];
w4(U+0,u32(u32(u32(0x9c8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e22f:{NFSU2_TR(0x60e22f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e231:{NFSU2_TR(0x60e231);
u8 U[8];
w4(U+0,u32(u32(u32(0x4c8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e238:{NFSU2_TR(0x60e238);
{u32 ea_=u32(r4(G+16)+u32(1216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e23f:{NFSU2_TR(0x60e23f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e243:{NFSU2_TR(0x60e243);
{u32 ea_=u32(r4(G+16)+u32(1216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e24a:{NFSU2_TR(0x60e24a);
u8 U[8];
w4(U+0,u32(u32(u32(0x708ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e251:{NFSU2_TR(0x60e251);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e258:{NFSU2_TR(0x60e258);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e25c:{NFSU2_TR(0x60e25c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3e4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e263:{NFSU2_TR(0x60e263);
u8 U[8];
w4(U+0,u32(u32(u32(0x3e8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e26a:{NFSU2_TR(0x60e26a);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e271:{NFSU2_TR(0x60e271);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e278:{NFSU2_TR(0x60e278);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e27f:{NFSU2_TR(0x60e27f);
{u32 ea_=u32(r4(G+16)+u32(1224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e286:{NFSU2_TR(0x60e286);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60e288:{NFSU2_TR(0x60e288);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e28f:{NFSU2_TR(0x60e28f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e291:{NFSU2_TR(0x60e291);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e295:{NFSU2_TR(0x60e295);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e299:{NFSU2_TR(0x60e299);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e29b:{NFSU2_TR(0x60e29b);
{u32 ea_=u32(r4(G+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2a2:{NFSU2_TR(0x60e2a2);
{u32 ea_=u32(r4(G+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2a9:{NFSU2_TR(0x60e2a9);
{u32 ea_=u32(r4(G+16)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2b0:{NFSU2_TR(0x60e2b0);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e2b4:{NFSU2_TR(0x60e2b4);
{u32 ea_=u32(r4(G+16)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2bb:{NFSU2_TR(0x60e2bb);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e2bf:{NFSU2_TR(0x60e2bf);
{u32 ea_=u32(r4(G+16)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2c6:{NFSU2_TR(0x60e2c6);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e2ca:{NFSU2_TR(0x60e2ca);
{u32 ea_=u32(r4(G+16)+u32(2280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2d1:{NFSU2_TR(0x60e2d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8e8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e2d8:{NFSU2_TR(0x60e2d8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e2da:{NFSU2_TR(0x60e2da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e2e1:{NFSU2_TR(0x60e2e1);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2e8:{NFSU2_TR(0x60e2e8);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e2ef:{NFSU2_TR(0x60e2ef);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2f6:{NFSU2_TR(0x60e2f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e2f8:{NFSU2_TR(0x60e2f8);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e2ff:{NFSU2_TR(0x60e2ff);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e301:{NFSU2_TR(0x60e301);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e308:{NFSU2_TR(0x60e308);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e30a:{NFSU2_TR(0x60e30a);
{u32 ea_=u32(r4(G+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e311:{NFSU2_TR(0x60e311);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e313:{NFSU2_TR(0x60e313);
{u32 ea_=u32(r4(G+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e31a:{NFSU2_TR(0x60e31a);
{u32 ea_=u32(r4(G+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e321:{NFSU2_TR(0x60e321);
{u32 ea_=u32(r4(G+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e328:{NFSU2_TR(0x60e328);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e32f:{NFSU2_TR(0x60e32f);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e336:{NFSU2_TR(0x60e336);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e338:{NFSU2_TR(0x60e338);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e33f:{NFSU2_TR(0x60e33f);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e346:{NFSU2_TR(0x60e346);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e34d:{NFSU2_TR(0x60e34d);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e351:{NFSU2_TR(0x60e351);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e355:{NFSU2_TR(0x60e355);
{u32 ea_=u32(r4(G+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e35c:{NFSU2_TR(0x60e35c);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e360:{NFSU2_TR(0x60e360);
{u32 ea_=u32(r4(G+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e367:{NFSU2_TR(0x60e367);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e36b:{NFSU2_TR(0x60e36b);
{u32 ea_=u32(r4(G+16)+u32(1864u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e372:{NFSU2_TR(0x60e372);
u8 U[8];
w4(U+0,u32(u32(u32(0x748ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e379:{NFSU2_TR(0x60e379);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e37b:{NFSU2_TR(0x60e37b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e382:{NFSU2_TR(0x60e382);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e389:{NFSU2_TR(0x60e389);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e390:{NFSU2_TR(0x60e390);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e397:{NFSU2_TR(0x60e397);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e39b:{NFSU2_TR(0x60e39b);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3a2:{NFSU2_TR(0x60e3a2);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e3a6:{NFSU2_TR(0x60e3a6);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3ad:{NFSU2_TR(0x60e3ad);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e3b1:{NFSU2_TR(0x60e3b1);
{u32 ea_=u32(r4(G+16)+u32(2312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e3b8:{NFSU2_TR(0x60e3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e3bf:{NFSU2_TR(0x60e3bf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e3c1:{NFSU2_TR(0x60e3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e3c8:{NFSU2_TR(0x60e3c8);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e3cf:{NFSU2_TR(0x60e3cf);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e3d6:{NFSU2_TR(0x60e3d6);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3dd:{NFSU2_TR(0x60e3dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e3e4:{NFSU2_TR(0x60e3e4);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e3e6:{NFSU2_TR(0x60e3e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e3ed:{NFSU2_TR(0x60e3ed);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e3f4:{NFSU2_TR(0x60e3f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e3f6:{NFSU2_TR(0x60e3f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e3f8:{NFSU2_TR(0x60e3f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e3fa:{NFSU2_TR(0x60e3fa);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e401:{NFSU2_TR(0x60e401);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e402:{NFSU2_TR(0x60e402);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B60e404:{NFSU2_TR(0x60e404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e405:{NFSU2_TR(0x60e405);
__builtin_memmove((G+4),(R+12),4);
}
B60e407:{NFSU2_TR(0x60e407);
{u32 ea_=u32(r4(G+16)+u32(1912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e40e:{NFSU2_TR(0x60e40e);
u8 U[8];
w4(U+0,u32(u32(u32(0x778ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e415:{NFSU2_TR(0x60e415);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e417:{NFSU2_TR(0x60e417);
u8 U[8];
w4(U+0,u32(u32(u32(0x558ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e41e:{NFSU2_TR(0x60e41e);
{u32 ea_=u32(r4(G+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e425:{NFSU2_TR(0x60e425);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B60e429:{NFSU2_TR(0x60e429);
{u32 ea_=u32(r4(G+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e430:{NFSU2_TR(0x60e430);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60e431:{NFSU2_TR(0x60e431);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e438:{NFSU2_TR(0x60e438);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e43f:{NFSU2_TR(0x60e43f);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e446:{NFSU2_TR(0x60e446);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e44d:{NFSU2_TR(0x60e44d);
{u32 ea_=u32(r4(G+16)+u32(1372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e454:{NFSU2_TR(0x60e454);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60e456:{NFSU2_TR(0x60e456);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e45d:{NFSU2_TR(0x60e45d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e45f:{NFSU2_TR(0x60e45f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x60e464ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c7e80u);}[[clang::musttail]] return blk_5c7e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_60e464(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B60e464:L60e464:{bud-=393;NFSU2_TR(0x60e464);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e468:{NFSU2_TR(0x60e468);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e46c:{NFSU2_TR(0x60e46c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e470:{NFSU2_TR(0x60e470);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e474:{NFSU2_TR(0x60e474);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e478:{NFSU2_TR(0x60e478);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e47c:{NFSU2_TR(0x60e47c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e47e:{NFSU2_TR(0x60e47e);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e482:{NFSU2_TR(0x60e482);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e489:{NFSU2_TR(0x60e489);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e490:{NFSU2_TR(0x60e490);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e497:{NFSU2_TR(0x60e497);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e49b:{NFSU2_TR(0x60e49b);
{u32 ea_=u32(r4(G+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e4a2:{NFSU2_TR(0x60e4a2);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e4a9:{NFSU2_TR(0x60e4a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4ad:{NFSU2_TR(0x60e4ad);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e4b1:{NFSU2_TR(0x60e4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4b8:{NFSU2_TR(0x60e4b8);
{u32 ea_=u32(r4(G+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e4bf:{NFSU2_TR(0x60e4bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4c6:{NFSU2_TR(0x60e4c6);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e4ca:{NFSU2_TR(0x60e4ca);
__builtin_memmove((G+0),(R+8),4);
}
B60e4cc:{NFSU2_TR(0x60e4cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4d3:{NFSU2_TR(0x60e4d3);
{u32 ea_=u32(r4(G+16)+u32(840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e4da:{NFSU2_TR(0x60e4da);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e4de:{NFSU2_TR(0x60e4de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e4e2:{NFSU2_TR(0x60e4e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4e6:{NFSU2_TR(0x60e4e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4ea:{NFSU2_TR(0x60e4ea);
{u32 ea_=u32(r4(G+16)+u32(1928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e4f1:{NFSU2_TR(0x60e4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e4f8:{NFSU2_TR(0x60e4f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e4fa:{NFSU2_TR(0x60e4fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e501:{NFSU2_TR(0x60e501);
u8 U[8];
w4(U+0,u32(u32(u32(0x788ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e508:{NFSU2_TR(0x60e508);
{u32 ea_=u32(r4(G+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e50f:{NFSU2_TR(0x60e50f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e511:{NFSU2_TR(0x60e511);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e518:{NFSU2_TR(0x60e518);
{u32 ea_=u32(r4(G+16)+u32(1024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e51f:{NFSU2_TR(0x60e51f);
u8 U[8];
w4(U+0,u32(u32(u32(0x9e8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e526:{NFSU2_TR(0x60e526);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e52a:{NFSU2_TR(0x60e52a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4e4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e531:{NFSU2_TR(0x60e531);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e535:{NFSU2_TR(0x60e535);
u8 U[8];
w4(U+0,u32(u32(u32(0x4e8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e53c:{NFSU2_TR(0x60e53c);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60e540:{NFSU2_TR(0x60e540);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e544:{NFSU2_TR(0x60e544);
{u32 ea_=u32(r4(G+16)+u32(1032u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e54b:{NFSU2_TR(0x60e54b);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e54f:{NFSU2_TR(0x60e54f);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e553:{NFSU2_TR(0x60e553);
{u32 ea_=u32(r4(G+16)+u32(1252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e55a:{NFSU2_TR(0x60e55a);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e55e:{NFSU2_TR(0x60e55e);
{u32 ea_=u32(r4(G+16)+u32(1256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e565:{NFSU2_TR(0x60e565);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e569:{NFSU2_TR(0x60e569);
{u32 ea_=u32(r4(G+16)+u32(2344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e570:{NFSU2_TR(0x60e570);
u8 U[8];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e577:{NFSU2_TR(0x60e577);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e579:{NFSU2_TR(0x60e579);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e580:{NFSU2_TR(0x60e580);
u8 U[8];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e587:{NFSU2_TR(0x60e587);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e58b:{NFSU2_TR(0x60e58b);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e592:{NFSU2_TR(0x60e592);
__builtin_memmove((G+4),(G+0),4);
}
B60e594:{NFSU2_TR(0x60e594);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e59b:{NFSU2_TR(0x60e59b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2c8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5a2:{NFSU2_TR(0x60e5a2);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e5a6:{NFSU2_TR(0x60e5a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xa88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5ad:{NFSU2_TR(0x60e5ad);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e5b4:{NFSU2_TR(0x60e5b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e5b8:{NFSU2_TR(0x60e5b8);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e5bc:{NFSU2_TR(0x60e5bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x588ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5c3:{NFSU2_TR(0x60e5c3);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e5ca:{NFSU2_TR(0x60e5ca);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e5ce:{NFSU2_TR(0x60e5ce);
{u32 ea_=u32(r4(G+16)+u32(1960u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e5d5:{NFSU2_TR(0x60e5d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x7a8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e5dc:{NFSU2_TR(0x60e5dc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e5de:{NFSU2_TR(0x60e5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5e5:{NFSU2_TR(0x60e5e5);
{u32 ea_=u32(r4(G+16)+u32(1056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e5ec:{NFSU2_TR(0x60e5ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e5f0:{NFSU2_TR(0x60e5f0);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e5f4:{NFSU2_TR(0x60e5f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x584ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e5fb:{NFSU2_TR(0x60e5fb);
{u32 ea_=u32(r4(G+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e602:{NFSU2_TR(0x60e602);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e606:{NFSU2_TR(0x60e606);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B60e608:{NFSU2_TR(0x60e608);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60e60a:{NFSU2_TR(0x60e60a);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e60e:{NFSU2_TR(0x60e60e);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B60e610:{NFSU2_TR(0x60e610);
{u32 ea_=u32(r4(G+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e617:{NFSU2_TR(0x60e617);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e61b:{NFSU2_TR(0x60e61b);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e61f:{NFSU2_TR(0x60e61f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e623:{NFSU2_TR(0x60e623);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e625:{NFSU2_TR(0x60e625);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e62c:{NFSU2_TR(0x60e62c);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e633:{NFSU2_TR(0x60e633);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e63a:{NFSU2_TR(0x60e63a);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e63e:{NFSU2_TR(0x60e63e);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e645:{NFSU2_TR(0x60e645);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e649:{NFSU2_TR(0x60e649);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e650:{NFSU2_TR(0x60e650);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e654:{NFSU2_TR(0x60e654);
{u32 ea_=u32(r4(G+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e65b:{NFSU2_TR(0x60e65b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e65d:{NFSU2_TR(0x60e65d);
{u32 ea_=u32(r4(G+16)+u32(2368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e664:{NFSU2_TR(0x60e664);
{u32 ea_=u32(r4(G+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e66b:{NFSU2_TR(0x60e66b);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e66f:{NFSU2_TR(0x60e66f);
{u32 ea_=u32(r4(G+16)+u32(2368u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e676:{NFSU2_TR(0x60e676);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e67a:{NFSU2_TR(0x60e67a);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e67e:{NFSU2_TR(0x60e67e);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60e680:{NFSU2_TR(0x60e680);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e684:{NFSU2_TR(0x60e684);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e688:{NFSU2_TR(0x60e688);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e68a:{NFSU2_TR(0x60e68a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B60e68c:{NFSU2_TR(0x60e68c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e68e:{NFSU2_TR(0x60e68e);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e692:{NFSU2_TR(0x60e692);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e696:{NFSU2_TR(0x60e696);
{u32 ea_=u32(r4(G+16)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e69d:{NFSU2_TR(0x60e69d);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6a1:{NFSU2_TR(0x60e6a1);
{u32 ea_=u32(r4(G+16)+u32(1416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6a8:{NFSU2_TR(0x60e6a8);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6ac:{NFSU2_TR(0x60e6ac);
{u32 ea_=u32(r4(G+16)+u32(2024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6b3:{NFSU2_TR(0x60e6b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x7e8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e6ba:{NFSU2_TR(0x60e6ba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e6bc:{NFSU2_TR(0x60e6bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e6c3:{NFSU2_TR(0x60e6c3);
{u32 ea_=u32(r4(G+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6ca:{NFSU2_TR(0x60e6ca);
{u32 ea_=u32(r4(G+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6d1:{NFSU2_TR(0x60e6d1);
{u32 ea_=u32(r4(G+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6d8:{NFSU2_TR(0x60e6d8);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6dc:{NFSU2_TR(0x60e6dc);
{u32 ea_=u32(r4(G+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6e3:{NFSU2_TR(0x60e6e3);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6e7:{NFSU2_TR(0x60e6e7);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e6ee:{NFSU2_TR(0x60e6ee);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e6f2:{NFSU2_TR(0x60e6f2);
{u32 ea_=u32(r4(G+16)+u32(2568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e6f9:{NFSU2_TR(0x60e6f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xa08ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e700:{NFSU2_TR(0x60e700);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e702:{NFSU2_TR(0x60e702);
u8 U[8];
w4(U+0,u32(u32(u32(0x448ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e709:{NFSU2_TR(0x60e709);
{u32 ea_=u32(r4(G+16)+u32(1088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e710:{NFSU2_TR(0x60e710);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e714:{NFSU2_TR(0x60e714);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e718:{NFSU2_TR(0x60e718);
{u32 ea_=u32(r4(G+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e71f:{NFSU2_TR(0x60e71f);
__builtin_memmove((G+4),(G+0),4);
}
B60e721:{NFSU2_TR(0x60e721);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e728:{NFSU2_TR(0x60e728);
u8 U[8];
w4(U+0,u32(u32(u32(0x808ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e72f:{NFSU2_TR(0x60e72f);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e733:{NFSU2_TR(0x60e733);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e737:{NFSU2_TR(0x60e737);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e73b:{NFSU2_TR(0x60e73b);
__builtin_memmove((G+4),(G+0),4);
}
B60e73d:{NFSU2_TR(0x60e73d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e73f:{NFSU2_TR(0x60e73f);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e746:{NFSU2_TR(0x60e746);
u8 U[8];
w4(U+0,u32(u32(u32(0x828ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e74d:{NFSU2_TR(0x60e74d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e751:{NFSU2_TR(0x60e751);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e755:{NFSU2_TR(0x60e755);
__builtin_memmove((G+4),(G+0),4);
}
B60e757:{NFSU2_TR(0x60e757);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e75e:{NFSU2_TR(0x60e75e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e760:{NFSU2_TR(0x60e760);
u8 U[8];
w4(U+0,u32(u32(u32(0x848ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e767:{NFSU2_TR(0x60e767);
{u32 ea_=u32(r4(G+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e76e:{NFSU2_TR(0x60e76e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e772:{NFSU2_TR(0x60e772);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e776:{NFSU2_TR(0x60e776);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e778:{NFSU2_TR(0x60e778);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e77f:{NFSU2_TR(0x60e77f);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e786:{NFSU2_TR(0x60e786);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e78d:{NFSU2_TR(0x60e78d);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e791:{NFSU2_TR(0x60e791);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e798:{NFSU2_TR(0x60e798);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e79c:{NFSU2_TR(0x60e79c);
{u32 ea_=u32(r4(G+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7a3:{NFSU2_TR(0x60e7a3);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e7a7:{NFSU2_TR(0x60e7a7);
{u32 ea_=u32(r4(G+16)+u32(2408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7ae:{NFSU2_TR(0x60e7ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x968ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e7b5:{NFSU2_TR(0x60e7b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e7b7:{NFSU2_TR(0x60e7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x508ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e7be:{NFSU2_TR(0x60e7be);
{u32 ea_=u32(r4(G+16)+u32(1280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7c5:{NFSU2_TR(0x60e7c5);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7c9:{NFSU2_TR(0x60e7c9);
{u32 ea_=u32(r4(G+16)+u32(1280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e7d0:{NFSU2_TR(0x60e7d0);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7d4:{NFSU2_TR(0x60e7d4);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7d8:{NFSU2_TR(0x60e7d8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e7da:{NFSU2_TR(0x60e7da);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7de:{NFSU2_TR(0x60e7de);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e7e0:{NFSU2_TR(0x60e7e0);
{u32 ea_=u32(r4(G+16)+u32(1288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e7e7:{NFSU2_TR(0x60e7e7);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7ee:{NFSU2_TR(0x60e7ee);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e7f2:{NFSU2_TR(0x60e7f2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e7f4:{NFSU2_TR(0x60e7f4);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e7fb:{NFSU2_TR(0x60e7fb);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e802:{NFSU2_TR(0x60e802);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e809:{NFSU2_TR(0x60e809);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e80d:{NFSU2_TR(0x60e80d);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e814:{NFSU2_TR(0x60e814);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e818:{NFSU2_TR(0x60e818);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e81f:{NFSU2_TR(0x60e81f);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e823:{NFSU2_TR(0x60e823);
{u32 ea_=u32(r4(G+16)+u32(2664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e82a:{NFSU2_TR(0x60e82a);
u8 U[8];
w4(U+0,u32(u32(u32(0xa68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e831:{NFSU2_TR(0x60e831);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e833:{NFSU2_TR(0x60e833);
u8 U[8];
w4(U+0,u32(u32(u32(0x468ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e83a:{NFSU2_TR(0x60e83a);
{u32 ea_=u32(r4(G+16)+u32(1120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e841:{NFSU2_TR(0x60e841);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e845:{NFSU2_TR(0x60e845);
{u32 ea_=u32(r4(G+16)+u32(1120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e84c:{NFSU2_TR(0x60e84c);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e850:{NFSU2_TR(0x60e850);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e854:{NFSU2_TR(0x60e854);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60e856:{NFSU2_TR(0x60e856);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e85a:{NFSU2_TR(0x60e85a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60e85c:{NFSU2_TR(0x60e85c);
{u32 ea_=u32(r4(G+16)+u32(1128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60e863:{NFSU2_TR(0x60e863);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e867:{NFSU2_TR(0x60e867);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e86b:{NFSU2_TR(0x60e86b);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e86f:{NFSU2_TR(0x60e86f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e871:{NFSU2_TR(0x60e871);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e878:{NFSU2_TR(0x60e878);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e87f:{NFSU2_TR(0x60e87f);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e886:{NFSU2_TR(0x60e886);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e88a:{NFSU2_TR(0x60e88a);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e891:{NFSU2_TR(0x60e891);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e895:{NFSU2_TR(0x60e895);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e89c:{NFSU2_TR(0x60e89c);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e8a0:{NFSU2_TR(0x60e8a0);
{u32 ea_=u32(r4(G+16)+u32(1496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8a7:{NFSU2_TR(0x60e8a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e8ab:{NFSU2_TR(0x60e8ab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e8ad:{NFSU2_TR(0x60e8ad);
{u32 ea_=u32(r4(G+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8b4:{NFSU2_TR(0x60e8b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e8b8:{NFSU2_TR(0x60e8b8);
{u32 ea_=u32(r4(G+16)+u32(1496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e8bf:{NFSU2_TR(0x60e8bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x564ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e8c6:{NFSU2_TR(0x60e8c6);
{u32 ea_=u32(r4(G+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e8cd:{NFSU2_TR(0x60e8cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x568ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e8d4:{NFSU2_TR(0x60e8d4);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e8db:{NFSU2_TR(0x60e8db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e8df:{NFSU2_TR(0x60e8df);
u8 U[8];
w4(U+0,u32(u32(u32(0x658ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e8e6:{NFSU2_TR(0x60e8e6);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8ed:{NFSU2_TR(0x60e8ed);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e8ef:{NFSU2_TR(0x60e8ef);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e8f6:{NFSU2_TR(0x60e8f6);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e8fd:{NFSU2_TR(0x60e8fd);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e904:{NFSU2_TR(0x60e904);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e908:{NFSU2_TR(0x60e908);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e90c:{NFSU2_TR(0x60e90c);
{u32 ea_=u32(r4(G+16)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e913:{NFSU2_TR(0x60e913);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e917:{NFSU2_TR(0x60e917);
{u32 ea_=u32(r4(G+16)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e91e:{NFSU2_TR(0x60e91e);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e922:{NFSU2_TR(0x60e922);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e929:{NFSU2_TR(0x60e929);
u8 U[8];
w4(U+0,u32(u32(u32(0x618ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60e930:{NFSU2_TR(0x60e930);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e932:{NFSU2_TR(0x60e932);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e939:{NFSU2_TR(0x60e939);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e940:{NFSU2_TR(0x60e940);
__builtin_memmove((G+4),(G+0),4);
}
B60e942:{NFSU2_TR(0x60e942);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e949:{NFSU2_TR(0x60e949);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e950:{NFSU2_TR(0x60e950);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60e954:{NFSU2_TR(0x60e954);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e958:{NFSU2_TR(0x60e958);
__builtin_memmove((G+4),(G+0),4);
}
B60e95a:{NFSU2_TR(0x60e95a);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e961:{NFSU2_TR(0x60e961);
u8 U[8];
w4(U+0,u32(u32(u32(0x698ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e968:{NFSU2_TR(0x60e968);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e96f:{NFSU2_TR(0x60e96f);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e976:{NFSU2_TR(0x60e976);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e97a:{NFSU2_TR(0x60e97a);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e981:{NFSU2_TR(0x60e981);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e985:{NFSU2_TR(0x60e985);
{u32 ea_=u32(r4(G+16)+u32(1592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e98c:{NFSU2_TR(0x60e98c);
u8 U[8];
w4(U+0,u32(u32(u32(0x638ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60e993:{NFSU2_TR(0x60e993);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e995:{NFSU2_TR(0x60e995);
u8 U[8];
w4(U+0,u32(u32(u32(0x488ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60e99c:{NFSU2_TR(0x60e99c);
{u32 ea_=u32(r4(G+16)+u32(1152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9a3:{NFSU2_TR(0x60e9a3);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9aa:{NFSU2_TR(0x60e9aa);
{u32 ea_=u32(r4(G+16)+u32(1152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e9b1:{NFSU2_TR(0x60e9b1);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9b8:{NFSU2_TR(0x60e9b8);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e9bf:{NFSU2_TR(0x60e9bf);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9c6:{NFSU2_TR(0x60e9c6);
{u32 ea_=u32(r4(G+16)+u32(1160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60e9cd:{NFSU2_TR(0x60e9cd);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9d1:{NFSU2_TR(0x60e9d1);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9d5:{NFSU2_TR(0x60e9d5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60e9d7:{NFSU2_TR(0x60e9d7);
{u32 ea_=u32(r4(G+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9de:{NFSU2_TR(0x60e9de);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60e9e5:{NFSU2_TR(0x60e9e5);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9e9:{NFSU2_TR(0x60e9e9);
{u32 ea_=u32(r4(G+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e9f0:{NFSU2_TR(0x60e9f0);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60e9f7:{NFSU2_TR(0x60e9f7);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60e9fb:{NFSU2_TR(0x60e9fb);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea02:{NFSU2_TR(0x60ea02);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ea06:{NFSU2_TR(0x60ea06);
{u32 ea_=u32(r4(G+16)+u32(1656u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea0d:{NFSU2_TR(0x60ea0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x678ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ea14:{NFSU2_TR(0x60ea14);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ea16:{NFSU2_TR(0x60ea16);
u8 U[8];
w4(U+0,u32(u32(u32(0x528ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ea1d:{NFSU2_TR(0x60ea1d);
{u32 ea_=u32(r4(G+16)+u32(1312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea24:{NFSU2_TR(0x60ea24);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea2b:{NFSU2_TR(0x60ea2b);
{u32 ea_=u32(r4(G+16)+u32(1312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ea32:{NFSU2_TR(0x60ea32);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea39:{NFSU2_TR(0x60ea39);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea40:{NFSU2_TR(0x60ea40);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60ea42:{NFSU2_TR(0x60ea42);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea49:{NFSU2_TR(0x60ea49);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60ea4b:{NFSU2_TR(0x60ea4b);
{u32 ea_=u32(r4(G+16)+u32(1320u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ea52:{NFSU2_TR(0x60ea52);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea59:{NFSU2_TR(0x60ea59);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea5d:{NFSU2_TR(0x60ea5d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ea5f:{NFSU2_TR(0x60ea5f);
{u32 ea_=u32(r4(G+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea66:{NFSU2_TR(0x60ea66);
{u32 ea_=u32(r4(G+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ea6d:{NFSU2_TR(0x60ea6d);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea71:{NFSU2_TR(0x60ea71);
{u32 ea_=u32(r4(G+16)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ea78:{NFSU2_TR(0x60ea78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60ea7c:{NFSU2_TR(0x60ea7c);
{u32 ea_=u32(r4(G+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea83:{NFSU2_TR(0x60ea83);
__builtin_memmove((G+4),(G+0),4);
}
B60ea85:{NFSU2_TR(0x60ea85);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ea89:{NFSU2_TR(0x60ea89);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ea90:{NFSU2_TR(0x60ea90);
{u32 ea_=u32(r4(G+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ea97:{NFSU2_TR(0x60ea97);
u8 U[8];
w4(U+0,u32(u32(u32(0x6d8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ea9e:{NFSU2_TR(0x60ea9e);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eaa2:{NFSU2_TR(0x60eaa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60eaa6:{NFSU2_TR(0x60eaa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x398ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eaad:{NFSU2_TR(0x60eaad);
{u32 ea_=u32(r4(G+16)+u32(1720u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eab4:{NFSU2_TR(0x60eab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6b8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60eabb:{NFSU2_TR(0x60eabb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eabd:{NFSU2_TR(0x60eabd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4a8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eac4:{NFSU2_TR(0x60eac4);
{u32 ea_=u32(r4(G+16)+u32(1184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eacb:{NFSU2_TR(0x60eacb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60eacf:{NFSU2_TR(0x60eacf);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ead6:{NFSU2_TR(0x60ead6);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eadd:{NFSU2_TR(0x60eadd);
{u32 ea_=u32(r4(G+16)+u32(1184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60eae4:{NFSU2_TR(0x60eae4);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eaeb:{NFSU2_TR(0x60eaeb);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eaf2:{NFSU2_TR(0x60eaf2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60eaf4:{NFSU2_TR(0x60eaf4);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eafb:{NFSU2_TR(0x60eafb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60eafd:{NFSU2_TR(0x60eafd);
{u32 ea_=u32(r4(G+16)+u32(1192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60eb04:{NFSU2_TR(0x60eb04);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb0b:{NFSU2_TR(0x60eb0b);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb0f:{NFSU2_TR(0x60eb0f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb13:{NFSU2_TR(0x60eb13);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eb15:{NFSU2_TR(0x60eb15);
{u32 ea_=u32(r4(G+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb1c:{NFSU2_TR(0x60eb1c);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb23:{NFSU2_TR(0x60eb23);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb27:{NFSU2_TR(0x60eb27);
{u32 ea_=u32(r4(G+16)+u32(400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb2e:{NFSU2_TR(0x60eb2e);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb35:{NFSU2_TR(0x60eb35);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb39:{NFSU2_TR(0x60eb39);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb40:{NFSU2_TR(0x60eb40);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb44:{NFSU2_TR(0x60eb44);
{u32 ea_=u32(r4(G+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb4b:{NFSU2_TR(0x60eb4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eb4d:{NFSU2_TR(0x60eb4d);
{u32 ea_=u32(r4(G+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb54:{NFSU2_TR(0x60eb54);
{u32 ea_=u32(r4(G+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb5b:{NFSU2_TR(0x60eb5b);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb62:{NFSU2_TR(0x60eb62);
{u32 ea_=u32(r4(G+16)+u32(1808u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60eb69:{NFSU2_TR(0x60eb69);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb70:{NFSU2_TR(0x60eb70);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eb72:{NFSU2_TR(0x60eb72);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60eb79:{NFSU2_TR(0x60eb79);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eb80:{NFSU2_TR(0x60eb80);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60eb87:{NFSU2_TR(0x60eb87);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb8b:{NFSU2_TR(0x60eb8b);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb8f:{NFSU2_TR(0x60eb8f);
{u32 ea_=u32(r4(G+16)+u32(916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eb96:{NFSU2_TR(0x60eb96);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eb9a:{NFSU2_TR(0x60eb9a);
{u32 ea_=u32(r4(G+16)+u32(920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eba1:{NFSU2_TR(0x60eba1);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eba5:{NFSU2_TR(0x60eba5);
{u32 ea_=u32(r4(G+16)+u32(1848u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebac:{NFSU2_TR(0x60ebac);
u8 U[8];
w4(U+0,u32(u32(u32(0x738ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ebb3:{NFSU2_TR(0x60ebb3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ebb5:{NFSU2_TR(0x60ebb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ebbc:{NFSU2_TR(0x60ebbc);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebc3:{NFSU2_TR(0x60ebc3);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebca:{NFSU2_TR(0x60ebca);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ebce:{NFSU2_TR(0x60ebce);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ebd5:{NFSU2_TR(0x60ebd5);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ebdc:{NFSU2_TR(0x60ebdc);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ebe0:{NFSU2_TR(0x60ebe0);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ebe7:{NFSU2_TR(0x60ebe7);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ebeb:{NFSU2_TR(0x60ebeb);
{u32 ea_=u32(r4(G+16)+u32(1880u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ebf2:{NFSU2_TR(0x60ebf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x758ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ebf9:{NFSU2_TR(0x60ebf9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ebfb:{NFSU2_TR(0x60ebfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3b8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ec02:{NFSU2_TR(0x60ec02);
{u32 ea_=u32(r4(G+16)+u32(944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec09:{NFSU2_TR(0x60ec09);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ec10:{NFSU2_TR(0x60ec10);
{u32 ea_=u32(r4(G+16)+u32(944u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60ec17:{NFSU2_TR(0x60ec17);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec1e:{NFSU2_TR(0x60ec1e);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60ec25:{NFSU2_TR(0x60ec25);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec2c:{NFSU2_TR(0x60ec2c);
{u32 ea_=u32(r4(G+16)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ec33:{NFSU2_TR(0x60ec33);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60ec35:{NFSU2_TR(0x60ec35);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ec3c:{NFSU2_TR(0x60ec3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60ec3e:{NFSU2_TR(0x60ec3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60ec45:{NFSU2_TR(0x60ec45);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ec4c:{NFSU2_TR(0x60ec4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60ec4e:{NFSU2_TR(0x60ec4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60ec50:{NFSU2_TR(0x60ec50);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60ec51:{NFSU2_TR(0x60ec51);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60ec52:{NFSU2_TR(0x60ec52);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60ec56:{NFSU2_TR(0x60ec56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B60ec57:{NFSU2_TR(0x60ec57);
__builtin_memmove((G+4),(R+12),4);
}
B60ec59:{NFSU2_TR(0x60ec59);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec64:{NFSU2_TR(0x60ec64);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec6f:{NFSU2_TR(0x60ec6f);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec7a:{NFSU2_TR(0x60ec7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec85:{NFSU2_TR(0x60ec85);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec90:{NFSU2_TR(0x60ec90);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ec9b:{NFSU2_TR(0x60ec9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60eca6:{NFSU2_TR(0x60eca6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ecb1:{NFSU2_TR(0x60ecb1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x60ecb6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c7e80u);}[[clang::musttail]] return blk_5c7e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_60ecb6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B60ecb6:L60ecb6:{bud-=165;NFSU2_TR(0x60ecb6);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecba:{NFSU2_TR(0x60ecba);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecbe:{NFSU2_TR(0x60ecbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ecc2:{NFSU2_TR(0x60ecc2);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecc6:{NFSU2_TR(0x60ecc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ecca:{NFSU2_TR(0x60ecca);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60ecce:{NFSU2_TR(0x60ecce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ecd0:{NFSU2_TR(0x60ecd0);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ecd7:{NFSU2_TR(0x60ecd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ecdb:{NFSU2_TR(0x60ecdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ece2:{NFSU2_TR(0x60ece2);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ece9:{NFSU2_TR(0x60ece9);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ecf0:{NFSU2_TR(0x60ecf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ecf4:{NFSU2_TR(0x60ecf4);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ecfb:{NFSU2_TR(0x60ecfb);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ecff:{NFSU2_TR(0x60ecff);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed03:{NFSU2_TR(0x60ed03);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ed0a:{NFSU2_TR(0x60ed0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed11:{NFSU2_TR(0x60ed11);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ed15:{NFSU2_TR(0x60ed15);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed1c:{NFSU2_TR(0x60ed1c);
__builtin_memmove((R+8),(G+4),4);
}
B60ed1e:{NFSU2_TR(0x60ed1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed25:{NFSU2_TR(0x60ed25);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ed2c:{NFSU2_TR(0x60ed2c);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ed30:{NFSU2_TR(0x60ed30);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ed34:{NFSU2_TR(0x60ed34);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed38:{NFSU2_TR(0x60ed38);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed3c:{NFSU2_TR(0x60ed3c);
{u32 ea_=u32(r4(G+16)+u32(1944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ed43:{NFSU2_TR(0x60ed43);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed4a:{NFSU2_TR(0x60ed4a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ed4c:{NFSU2_TR(0x60ed4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed53:{NFSU2_TR(0x60ed53);
u8 U[8];
w4(U+0,u32(u32(u32(0x798ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60ed5a:{NFSU2_TR(0x60ed5a);
{u32 ea_=u32(r4(G+16)+u32(976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ed61:{NFSU2_TR(0x60ed61);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ed63:{NFSU2_TR(0x60ed63);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed6a:{NFSU2_TR(0x60ed6a);
{u32 ea_=u32(r4(G+16)+u32(976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ed71:{NFSU2_TR(0x60ed71);
u8 U[8];
w4(U+0,u32(u32(u32(0x778ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed78:{NFSU2_TR(0x60ed78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ed7c:{NFSU2_TR(0x60ed7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3f4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed83:{NFSU2_TR(0x60ed83);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ed87:{NFSU2_TR(0x60ed87);
u8 U[8];
w4(U+0,u32(u32(u32(0x3f8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ed8e:{NFSU2_TR(0x60ed8e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60ed92:{NFSU2_TR(0x60ed92);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ed96:{NFSU2_TR(0x60ed96);
{u32 ea_=u32(r4(G+16)+u32(984u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ed9d:{NFSU2_TR(0x60ed9d);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eda1:{NFSU2_TR(0x60eda1);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eda5:{NFSU2_TR(0x60eda5);
{u32 ea_=u32(r4(G+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edac:{NFSU2_TR(0x60edac);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edb0:{NFSU2_TR(0x60edb0);
{u32 ea_=u32(r4(G+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edb7:{NFSU2_TR(0x60edb7);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edbb:{NFSU2_TR(0x60edbb);
{u32 ea_=u32(r4(G+16)+u32(1976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60edc2:{NFSU2_TR(0x60edc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60edc9:{NFSU2_TR(0x60edc9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60edcb:{NFSU2_TR(0x60edcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60edd2:{NFSU2_TR(0x60edd2);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60edd9:{NFSU2_TR(0x60edd9);
{u32 ea_=u32(r4(G+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ede0:{NFSU2_TR(0x60ede0);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ede7:{NFSU2_TR(0x60ede7);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edeb:{NFSU2_TR(0x60edeb);
{u32 ea_=u32(r4(G+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edf2:{NFSU2_TR(0x60edf2);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60edf6:{NFSU2_TR(0x60edf6);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60edfd:{NFSU2_TR(0x60edfd);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ee01:{NFSU2_TR(0x60ee01);
{u32 ea_=u32(r4(G+16)+u32(2008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee08:{NFSU2_TR(0x60ee08);
u8 U[8];
w4(U+0,u32(u32(u32(0x7d8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ee0f:{NFSU2_TR(0x60ee0f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ee11:{NFSU2_TR(0x60ee11);
{u32 ea_=u32(r4(G+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee18:{NFSU2_TR(0x60ee18);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ee1c:{NFSU2_TR(0x60ee1c);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee20:{NFSU2_TR(0x60ee20);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee27:{NFSU2_TR(0x60ee27);
{u32 ea_=u32(r4(G+16)+u32(1040u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ee2e:{NFSU2_TR(0x60ee2e);
__builtin_memmove((G+0),(R+8),4);
}
B60ee30:{NFSU2_TR(0x60ee30);
u8 U[8];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee37:{NFSU2_TR(0x60ee37);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ee3b:{NFSU2_TR(0x60ee3b);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee3f:{NFSU2_TR(0x60ee3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7f8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee46:{NFSU2_TR(0x60ee46);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B60ee48:{NFSU2_TR(0x60ee48);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ee4c:{NFSU2_TR(0x60ee4c);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60ee4e:{NFSU2_TR(0x60ee4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee55:{NFSU2_TR(0x60ee55);
u8 U[8];
w4(U+0,u32(u32(u32(0x438ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee5c:{NFSU2_TR(0x60ee5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ee60:{NFSU2_TR(0x60ee60);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee64:{NFSU2_TR(0x60ee64);
u8 U[8];
w4(U+0,u32(u32(u32(0x898ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ee6b:{NFSU2_TR(0x60ee6b);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B60ee6d:{NFSU2_TR(0x60ee6d);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ee74:{NFSU2_TR(0x60ee74);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee78:{NFSU2_TR(0x60ee78);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee7c:{NFSU2_TR(0x60ee7c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee80:{NFSU2_TR(0x60ee80);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ee82:{NFSU2_TR(0x60ee82);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee89:{NFSU2_TR(0x60ee89);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ee90:{NFSU2_TR(0x60ee90);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ee97:{NFSU2_TR(0x60ee97);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ee9b:{NFSU2_TR(0x60ee9b);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eea2:{NFSU2_TR(0x60eea2);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eea6:{NFSU2_TR(0x60eea6);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eead:{NFSU2_TR(0x60eead);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eeb1:{NFSU2_TR(0x60eeb1);
{u32 ea_=u32(r4(G+16)+u32(2072u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eeb8:{NFSU2_TR(0x60eeb8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60eeba:{NFSU2_TR(0x60eeba);
{u32 ea_=u32(r4(G+16)+u32(2096u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eec1:{NFSU2_TR(0x60eec1);
{u32 ea_=u32(r4(G+16)+u32(2072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eec8:{NFSU2_TR(0x60eec8);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eecc:{NFSU2_TR(0x60eecc);
{u32 ea_=u32(r4(G+16)+u32(2096u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60eed3:{NFSU2_TR(0x60eed3);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eed7:{NFSU2_TR(0x60eed7);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eedb:{NFSU2_TR(0x60eedb);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60eedd:{NFSU2_TR(0x60eedd);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60eee1:{NFSU2_TR(0x60eee1);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eee5:{NFSU2_TR(0x60eee5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60eee7:{NFSU2_TR(0x60eee7);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B60eee9:{NFSU2_TR(0x60eee9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60eeeb:{NFSU2_TR(0x60eeeb);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eeef:{NFSU2_TR(0x60eeef);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eef3:{NFSU2_TR(0x60eef3);
{u32 ea_=u32(r4(G+16)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60eefa:{NFSU2_TR(0x60eefa);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eefe:{NFSU2_TR(0x60eefe);
{u32 ea_=u32(r4(G+16)+u32(1080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef05:{NFSU2_TR(0x60ef05);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef09:{NFSU2_TR(0x60ef09);
{u32 ea_=u32(r4(G+16)+u32(2136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef10:{NFSU2_TR(0x60ef10);
u8 U[8];
w4(U+0,u32(u32(u32(0x858ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B60ef17:{NFSU2_TR(0x60ef17);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ef19:{NFSU2_TR(0x60ef19);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ef20:{NFSU2_TR(0x60ef20);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef27:{NFSU2_TR(0x60ef27);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef2e:{NFSU2_TR(0x60ef2e);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef35:{NFSU2_TR(0x60ef35);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef39:{NFSU2_TR(0x60ef39);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef40:{NFSU2_TR(0x60ef40);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef44:{NFSU2_TR(0x60ef44);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef4b:{NFSU2_TR(0x60ef4b);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ef4f:{NFSU2_TR(0x60ef4f);
{u32 ea_=u32(r4(G+16)+u32(2168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef56:{NFSU2_TR(0x60ef56);
u8 U[8];
w4(U+0,u32(u32(u32(0x878ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B60ef5d:{NFSU2_TR(0x60ef5d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ef5f:{NFSU2_TR(0x60ef5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x458ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ef66:{NFSU2_TR(0x60ef66);
{u32 ea_=u32(r4(G+16)+u32(1104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef6d:{NFSU2_TR(0x60ef6d);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef71:{NFSU2_TR(0x60ef71);
{u32 ea_=u32(r4(G+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ef78:{NFSU2_TR(0x60ef78);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef7c:{NFSU2_TR(0x60ef7c);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef80:{NFSU2_TR(0x60ef80);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60ef82:{NFSU2_TR(0x60ef82);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ef86:{NFSU2_TR(0x60ef86);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60ef88:{NFSU2_TR(0x60ef88);
{u32 ea_=u32(r4(G+16)+u32(1112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ef8f:{NFSU2_TR(0x60ef8f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef93:{NFSU2_TR(0x60ef93);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ef97:{NFSU2_TR(0x60ef97);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ef99:{NFSU2_TR(0x60ef99);
__builtin_memmove((G+0),(R+8),4);
}
B60ef9b:{NFSU2_TR(0x60ef9b);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60efa2:{NFSU2_TR(0x60efa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efa9:{NFSU2_TR(0x60efa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60efad:{NFSU2_TR(0x60efad);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60efb4:{NFSU2_TR(0x60efb4);
__builtin_memmove((G+0),(R+8),4);
}
B60efb6:{NFSU2_TR(0x60efb6);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60efbd:{NFSU2_TR(0x60efbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x278ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efc4:{NFSU2_TR(0x60efc4);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60efc8:{NFSU2_TR(0x60efc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8d8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efcf:{NFSU2_TR(0x60efcf);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60efd6:{NFSU2_TR(0x60efd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60efda:{NFSU2_TR(0x60efda);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60efde:{NFSU2_TR(0x60efde);
__builtin_memmove((G+0),(R+8),4);
}
B60efe0:{NFSU2_TR(0x60efe0);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60efe7:{NFSU2_TR(0x60efe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60efee:{NFSU2_TR(0x60efee);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60eff2:{NFSU2_TR(0x60eff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60eff9:{NFSU2_TR(0x60eff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60effd:{NFSU2_TR(0x60effd);
{u32 ea_=u32(r4(G+16)+u32(2232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{EXIT(0x60f004u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_60e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x60e030:[[clang::musttail]] return blk_60e030(c,a4,a0,a1,bud);
case 0x60e08a:[[clang::musttail]] return blk_60e08a(c,a4,a0,a1,bud);
case 0x60e464:[[clang::musttail]] return blk_60e464(c,a4,a0,a1,bud);
case 0x60ecb6:[[clang::musttail]] return blk_60ecb6(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_60e(Cpu& c){u8* R=c.regs.data();return ent_60e(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
