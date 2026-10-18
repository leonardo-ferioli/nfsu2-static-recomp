#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48d860(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bada0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bae90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_615240(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623061(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6243f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6243fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624404(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62446a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624496(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62449e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6244a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6244e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6245e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624613(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624bf5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624c26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624c57(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624c79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624c9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624cad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624db0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624ddc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625a52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625a76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_630d1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624166(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624175(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624184(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6243da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624436(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624452(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62445d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6245b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624983(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624bd9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624d77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624da8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624002:L624002:{bud-=82;NFSU2_TR(0x624002);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624005:{NFSU2_TR(0x624005);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624007:{NFSU2_TR(0x624007);
{u32 ea_=u32(r4(G+16)+u32(932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62400e:{NFSU2_TR(0x62400e);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624011:{NFSU2_TR(0x624011);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624013:{NFSU2_TR(0x624013);
{u32 ea_=u32(r4(G+16)+u32(2052u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62401a:{NFSU2_TR(0x62401a);
{u32 ea_=u32(r4(G+16)+u32(968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624021:{NFSU2_TR(0x624021);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624024:{NFSU2_TR(0x624024);
{u32 ea_=u32(r4(G+16)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62402b:{NFSU2_TR(0x62402b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62402e:{NFSU2_TR(0x62402e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624030:{NFSU2_TR(0x624030);
{u32 ea_=u32(r4(G+16)+u32(920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624037:{NFSU2_TR(0x624037);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62403a:{NFSU2_TR(0x62403a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62403c:{NFSU2_TR(0x62403c);
{u32 ea_=u32(r4(G+16)+u32(936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624043:{NFSU2_TR(0x624043);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624046:{NFSU2_TR(0x624046);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624048:{NFSU2_TR(0x624048);
{u32 ea_=u32(r4(G+16)+u32(2056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62404f:{NFSU2_TR(0x62404f);
{u32 ea_=u32(r4(G+16)+u32(972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624056:{NFSU2_TR(0x624056);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624059:{NFSU2_TR(0x624059);
{u32 ea_=u32(r4(G+16)+u32(956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624060:{NFSU2_TR(0x624060);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624063:{NFSU2_TR(0x624063);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624065:{NFSU2_TR(0x624065);
{u32 ea_=u32(r4(G+16)+u32(924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62406c:{NFSU2_TR(0x62406c);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62406f:{NFSU2_TR(0x62406f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624071:{NFSU2_TR(0x624071);
{u32 ea_=u32(r4(G+16)+u32(940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624078:{NFSU2_TR(0x624078);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62407b:{NFSU2_TR(0x62407b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62407d:{NFSU2_TR(0x62407d);
{u32 ea_=u32(r4(G+16)+u32(2060u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624084:{NFSU2_TR(0x624084);
{u32 ea_=u32(r4(G+16)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62408b:{NFSU2_TR(0x62408b);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62408e:{NFSU2_TR(0x62408e);
{u32 ea_=u32(r4(G+16)+u32(912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624095:{NFSU2_TR(0x624095);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624098:{NFSU2_TR(0x624098);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62409a:{NFSU2_TR(0x62409a);
{u32 ea_=u32(r4(G+16)+u32(944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240a1:{NFSU2_TR(0x6240a1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6240a4:{NFSU2_TR(0x6240a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6240a6:{NFSU2_TR(0x6240a6);
{u32 ea_=u32(r4(G+16)+u32(928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240ad:{NFSU2_TR(0x6240ad);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6240b0:{NFSU2_TR(0x6240b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6240b2:{NFSU2_TR(0x6240b2);
{u32 ea_=u32(r4(G+16)+u32(2064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6240b9:{NFSU2_TR(0x6240b9);
{u32 ea_=u32(r4(G+16)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240c0:{NFSU2_TR(0x6240c0);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6240c3:{NFSU2_TR(0x6240c3);
{u32 ea_=u32(r4(G+16)+u32(948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240ca:{NFSU2_TR(0x6240ca);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6240cd:{NFSU2_TR(0x6240cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6240cf:{NFSU2_TR(0x6240cf);
{u32 ea_=u32(r4(G+16)+u32(916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240d6:{NFSU2_TR(0x6240d6);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6240d9:{NFSU2_TR(0x6240d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6240db:{NFSU2_TR(0x6240db);
{u32 ea_=u32(r4(G+16)+u32(932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240e2:{NFSU2_TR(0x6240e2);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6240e5:{NFSU2_TR(0x6240e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6240e7:{NFSU2_TR(0x6240e7);
{u32 ea_=u32(r4(G+16)+u32(2068u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6240ee:{NFSU2_TR(0x6240ee);
{u32 ea_=u32(r4(G+16)+u32(968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240f5:{NFSU2_TR(0x6240f5);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6240f8:{NFSU2_TR(0x6240f8);
{u32 ea_=u32(r4(G+16)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6240ff:{NFSU2_TR(0x6240ff);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624102:{NFSU2_TR(0x624102);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624104:{NFSU2_TR(0x624104);
{u32 ea_=u32(r4(G+16)+u32(920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62410b:{NFSU2_TR(0x62410b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62410e:{NFSU2_TR(0x62410e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624110:{NFSU2_TR(0x624110);
{u32 ea_=u32(r4(G+16)+u32(936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624117:{NFSU2_TR(0x624117);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62411a:{NFSU2_TR(0x62411a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62411c:{NFSU2_TR(0x62411c);
{u32 ea_=u32(r4(G+16)+u32(2072u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624123:{NFSU2_TR(0x624123);
{u32 ea_=u32(r4(G+16)+u32(972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62412a:{NFSU2_TR(0x62412a);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62412d:{NFSU2_TR(0x62412d);
{u32 ea_=u32(r4(G+16)+u32(956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624134:{NFSU2_TR(0x624134);
u8 U[4];
w4(U+0,u32(u32(u32(0x7e0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62413b:{NFSU2_TR(0x62413b);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62413e:{NFSU2_TR(0x62413e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62413f:{NFSU2_TR(0x62413f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624140:{NFSU2_TR(0x624140);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624142:{NFSU2_TR(0x624142);
{u32 ea_=u32(r4(G+16)+u32(932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624149:{NFSU2_TR(0x624149);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62414c:{NFSU2_TR(0x62414c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62414e:{NFSU2_TR(0x62414e);
{u32 ea_=u32(r4(G+16)+u32(948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624155:{NFSU2_TR(0x624155);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624158:{NFSU2_TR(0x624158);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62415a:{NFSU2_TR(0x62415a);
{u32 ea_=u32(r4(G+16)+u32(2084u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624161:{NFSU2_TR(0x624161);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624166ull));
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
PN u32 blk_624166(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624166:L624166:{bud-=5;NFSU2_TR(0x624166);
u8 U[4];
w4(U+0,u32(u32(u32(0x8a8ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62416d:{NFSU2_TR(0x62416d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62416e:{NFSU2_TR(0x62416e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62416f:{NFSU2_TR(0x62416f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624170:{NFSU2_TR(0x624170);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624175ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bae90u);}[[clang::musttail]] return blk_5bae90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624175(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624175:L624175:{bud-=5;NFSU2_TR(0x624175);
u8 U[4];
w4(U+0,u32(u32(u32(0x8d4ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62417c:{NFSU2_TR(0x62417c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62417d:{NFSU2_TR(0x62417d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62417e:{NFSU2_TR(0x62417e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62417f:{NFSU2_TR(0x62417f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624184ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bae90u);}[[clang::musttail]] return blk_5bae90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624184(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624184:L624184:{bud-=196;NFSU2_TR(0x624184);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624186:{NFSU2_TR(0x624186);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624188:{NFSU2_TR(0x624188);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62418b:{NFSU2_TR(0x62418b);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62418e:{NFSU2_TR(0x62418e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624190:{NFSU2_TR(0x624190);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624193:{NFSU2_TR(0x624193);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624196:{NFSU2_TR(0x624196);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624198:{NFSU2_TR(0x624198);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62419b:{NFSU2_TR(0x62419b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62419e:{NFSU2_TR(0x62419e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241a0:{NFSU2_TR(0x6241a0);
{u32 ea_=u32(r4(G+16)+u32(1904u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6241a7:{NFSU2_TR(0x6241a7);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241aa:{NFSU2_TR(0x6241aa);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241ad:{NFSU2_TR(0x6241ad);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241b0:{NFSU2_TR(0x6241b0);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241b3:{NFSU2_TR(0x6241b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241b5:{NFSU2_TR(0x6241b5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241b8:{NFSU2_TR(0x6241b8);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241bb:{NFSU2_TR(0x6241bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241bd:{NFSU2_TR(0x6241bd);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241c0:{NFSU2_TR(0x6241c0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241c2:{NFSU2_TR(0x6241c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241c4:{NFSU2_TR(0x6241c4);
{u32 ea_=u32(r4(G+16)+u32(1908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6241cb:{NFSU2_TR(0x6241cb);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241ce:{NFSU2_TR(0x6241ce);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241d1:{NFSU2_TR(0x6241d1);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241d4:{NFSU2_TR(0x6241d4);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241d7:{NFSU2_TR(0x6241d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241d9:{NFSU2_TR(0x6241d9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241dc:{NFSU2_TR(0x6241dc);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241df:{NFSU2_TR(0x6241df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241e1:{NFSU2_TR(0x6241e1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241e4:{NFSU2_TR(0x6241e4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241e6:{NFSU2_TR(0x6241e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241e8:{NFSU2_TR(0x6241e8);
{u32 ea_=u32(r4(G+16)+u32(1912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6241ef:{NFSU2_TR(0x6241ef);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241f2:{NFSU2_TR(0x6241f2);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241f5:{NFSU2_TR(0x6241f5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6241f8:{NFSU2_TR(0x6241f8);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6241fb:{NFSU2_TR(0x6241fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6241fd:{NFSU2_TR(0x6241fd);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624200:{NFSU2_TR(0x624200);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624202:{NFSU2_TR(0x624202);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624204:{NFSU2_TR(0x624204);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624207:{NFSU2_TR(0x624207);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62420a:{NFSU2_TR(0x62420a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62420c:{NFSU2_TR(0x62420c);
{u32 ea_=u32(r4(G+16)+u32(1916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624213:{NFSU2_TR(0x624213);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624216:{NFSU2_TR(0x624216);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624219:{NFSU2_TR(0x624219);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62421c:{NFSU2_TR(0x62421c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62421f:{NFSU2_TR(0x62421f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624221:{NFSU2_TR(0x624221);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624223:{NFSU2_TR(0x624223);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624226:{NFSU2_TR(0x624226);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624228:{NFSU2_TR(0x624228);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62422b:{NFSU2_TR(0x62422b);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62422e:{NFSU2_TR(0x62422e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624230:{NFSU2_TR(0x624230);
{u32 ea_=u32(r4(G+16)+u32(1920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624237:{NFSU2_TR(0x624237);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62423a:{NFSU2_TR(0x62423a);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62423d:{NFSU2_TR(0x62423d);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624240:{NFSU2_TR(0x624240);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624243:{NFSU2_TR(0x624243);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624245:{NFSU2_TR(0x624245);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624248:{NFSU2_TR(0x624248);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62424b:{NFSU2_TR(0x62424b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62424d:{NFSU2_TR(0x62424d);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624250:{NFSU2_TR(0x624250);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624253:{NFSU2_TR(0x624253);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624255:{NFSU2_TR(0x624255);
{u32 ea_=u32(r4(G+16)+u32(1924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62425c:{NFSU2_TR(0x62425c);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62425f:{NFSU2_TR(0x62425f);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624262:{NFSU2_TR(0x624262);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624265:{NFSU2_TR(0x624265);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624268:{NFSU2_TR(0x624268);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62426a:{NFSU2_TR(0x62426a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62426d:{NFSU2_TR(0x62426d);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624270:{NFSU2_TR(0x624270);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624272:{NFSU2_TR(0x624272);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624275:{NFSU2_TR(0x624275);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624278:{NFSU2_TR(0x624278);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62427a:{NFSU2_TR(0x62427a);
{u32 ea_=u32(r4(G+16)+u32(1928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624281:{NFSU2_TR(0x624281);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624284:{NFSU2_TR(0x624284);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624287:{NFSU2_TR(0x624287);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62428a:{NFSU2_TR(0x62428a);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62428d:{NFSU2_TR(0x62428d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62428f:{NFSU2_TR(0x62428f);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624292:{NFSU2_TR(0x624292);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624295:{NFSU2_TR(0x624295);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624297:{NFSU2_TR(0x624297);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62429a:{NFSU2_TR(0x62429a);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62429d:{NFSU2_TR(0x62429d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62429f:{NFSU2_TR(0x62429f);
{u32 ea_=u32(r4(G+16)+u32(1932u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6242a6:{NFSU2_TR(0x6242a6);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242a9:{NFSU2_TR(0x6242a9);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242ac:{NFSU2_TR(0x6242ac);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242af:{NFSU2_TR(0x6242af);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242b2:{NFSU2_TR(0x6242b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6242b4:{NFSU2_TR(0x6242b4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242b6:{NFSU2_TR(0x6242b6);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242b9:{NFSU2_TR(0x6242b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6242bb:{NFSU2_TR(0x6242bb);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242be:{NFSU2_TR(0x6242be);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242c1:{NFSU2_TR(0x6242c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6242c3:{NFSU2_TR(0x6242c3);
{u32 ea_=u32(r4(G+16)+u32(1936u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6242ca:{NFSU2_TR(0x6242ca);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242cd:{NFSU2_TR(0x6242cd);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242d0:{NFSU2_TR(0x6242d0);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242d3:{NFSU2_TR(0x6242d3);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242d6:{NFSU2_TR(0x6242d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6242d8:{NFSU2_TR(0x6242d8);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242db:{NFSU2_TR(0x6242db);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242de:{NFSU2_TR(0x6242de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6242e0:{NFSU2_TR(0x6242e0);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242e3:{NFSU2_TR(0x6242e3);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242e6:{NFSU2_TR(0x6242e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6242e8:{NFSU2_TR(0x6242e8);
{u32 ea_=u32(r4(G+16)+u32(1940u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6242ef:{NFSU2_TR(0x6242ef);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242f2:{NFSU2_TR(0x6242f2);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242f5:{NFSU2_TR(0x6242f5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6242f8:{NFSU2_TR(0x6242f8);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6242fb:{NFSU2_TR(0x6242fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6242fd:{NFSU2_TR(0x6242fd);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624300:{NFSU2_TR(0x624300);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624303:{NFSU2_TR(0x624303);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624305:{NFSU2_TR(0x624305);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624308:{NFSU2_TR(0x624308);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62430b:{NFSU2_TR(0x62430b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62430d:{NFSU2_TR(0x62430d);
{u32 ea_=u32(r4(G+16)+u32(1944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624314:{NFSU2_TR(0x624314);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624317:{NFSU2_TR(0x624317);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62431a:{NFSU2_TR(0x62431a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62431d:{NFSU2_TR(0x62431d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624320:{NFSU2_TR(0x624320);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624322:{NFSU2_TR(0x624322);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624325:{NFSU2_TR(0x624325);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624328:{NFSU2_TR(0x624328);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62432a:{NFSU2_TR(0x62432a);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62432d:{NFSU2_TR(0x62432d);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624330:{NFSU2_TR(0x624330);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624332:{NFSU2_TR(0x624332);
{u32 ea_=u32(r4(G+16)+u32(1948u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624339:{NFSU2_TR(0x624339);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62433c:{NFSU2_TR(0x62433c);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62433f:{NFSU2_TR(0x62433f);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624342:{NFSU2_TR(0x624342);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624345:{NFSU2_TR(0x624345);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624347:{NFSU2_TR(0x624347);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624349:{NFSU2_TR(0x624349);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62434c:{NFSU2_TR(0x62434c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62434e:{NFSU2_TR(0x62434e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624351:{NFSU2_TR(0x624351);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624354:{NFSU2_TR(0x624354);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624356:{NFSU2_TR(0x624356);
{u32 ea_=u32(r4(G+16)+u32(1952u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62435d:{NFSU2_TR(0x62435d);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624360:{NFSU2_TR(0x624360);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624363:{NFSU2_TR(0x624363);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624366:{NFSU2_TR(0x624366);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624369:{NFSU2_TR(0x624369);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62436b:{NFSU2_TR(0x62436b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62436e:{NFSU2_TR(0x62436e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624371:{NFSU2_TR(0x624371);
u8 U[4];
w4(U+0,u32(u32(u32(0x770ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B624378:{NFSU2_TR(0x624378);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624379:{NFSU2_TR(0x624379);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62437a:{NFSU2_TR(0x62437a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62437c:{NFSU2_TR(0x62437c);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62437f:{NFSU2_TR(0x62437f);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624382:{NFSU2_TR(0x624382);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624384:{NFSU2_TR(0x624384);
{u32 ea_=u32(r4(G+16)+u32(1964u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62438b:{NFSU2_TR(0x62438b);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62438e:{NFSU2_TR(0x62438e);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624391:{NFSU2_TR(0x624391);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624394:{NFSU2_TR(0x624394);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624397:{NFSU2_TR(0x624397);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624399:{NFSU2_TR(0x624399);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62439c:{NFSU2_TR(0x62439c);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62439f:{NFSU2_TR(0x62439f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6243a1:{NFSU2_TR(0x6243a1);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6243a4:{NFSU2_TR(0x6243a4);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6243a7:{NFSU2_TR(0x6243a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6243a9:{NFSU2_TR(0x6243a9);
{u32 ea_=u32(r4(G+16)+u32(1968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6243b0:{NFSU2_TR(0x6243b0);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6243b3:{NFSU2_TR(0x6243b3);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6243b6:{NFSU2_TR(0x6243b6);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6243b9:{NFSU2_TR(0x6243b9);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6243bc:{NFSU2_TR(0x6243bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6243be:{NFSU2_TR(0x6243be);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6243c1:{NFSU2_TR(0x6243c1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6243c4:{NFSU2_TR(0x6243c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6243c6:{NFSU2_TR(0x6243c6);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6243c9:{NFSU2_TR(0x6243c9);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6243cc:{NFSU2_TR(0x6243cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6243ce:{NFSU2_TR(0x6243ce);
{u32 ea_=u32(r4(G+16)+u32(1972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6243d5:{NFSU2_TR(0x6243d5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6243daull));
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
PN u32 blk_6243da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6243da:L6243da:{bud-=4;NFSU2_TR(0x6243da);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6243e1:{NFSU2_TR(0x6243e1);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x28ull))));
}
B6243e4:{NFSU2_TR(0x6243e4);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0xaull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B6243e7:{NFSU2_TR(0x6243e7);
if(r1(F+6)){{[[clang::musttail]] return blk_6243fd(ARGS);}}
}
B6243e9:L6243e9:{bud-=2;NFSU2_TR(0x6243e9);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x7ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B6243ec:{NFSU2_TR(0x6243ec);
if(r1(F+6)){{[[clang::musttail]] return blk_6243f7(ARGS);}}
}
B6243ee:L6243ee:{bud-=2;NFSU2_TR(0x6243ee);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B6243ef:{NFSU2_TR(0x6243ef);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_624404(ARGS);}}
}
B6243f1:L6243f1:{bud-=2;NFSU2_TR(0x6243f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6243f5:{NFSU2_TR(0x6243f5);
{[[clang::musttail]] return blk_624404(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6243f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6243f7:L6243f7:{bud-=2;NFSU2_TR(0x6243f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6243fb:{NFSU2_TR(0x6243fb);
{[[clang::musttail]] return blk_624404(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6243fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6243fd:L6243fd:{bud-=1;NFSU2_TR(0x6243fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_624404(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624404(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624404:L624404:{bud-=15;NFSU2_TR(0x624404);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62440b:{NFSU2_TR(0x62440b);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624412:{NFSU2_TR(0x624412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624415:{NFSU2_TR(0x624415);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B624417:{NFSU2_TR(0x624417);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62441e:{NFSU2_TR(0x62441e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624420:{NFSU2_TR(0x624420);
w4(G+4,u32(u32(r4(G+4))|u32(r4(G+0))));
}
B624422:{NFSU2_TR(0x624422);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624429:{NFSU2_TR(0x624429);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62442a:{NFSU2_TR(0x62442a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62442e:{NFSU2_TR(0x62442e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62442f:{NFSU2_TR(0x62442f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B624432:{NFSU2_TR(0x624432);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624433:{NFSU2_TR(0x624433);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624434:{NFSU2_TR(0x624434);
{[[clang::musttail]] return blk_624496(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624436(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624436:L624436:{bud-=3;NFSU2_TR(0x624436);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62443d:{NFSU2_TR(0x62443d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62443f:{NFSU2_TR(0x62443f);
if(r1(F+6)){{[[clang::musttail]] return blk_62446a(ARGS);}}
}
B624441:L624441:{bud-=4;NFSU2_TR(0x624441);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624445:{NFSU2_TR(0x624445);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62444c:{NFSU2_TR(0x62444c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62444d:{NFSU2_TR(0x62444d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624452ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x615240u);}[[clang::musttail]] return blk_615240(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624452(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624452:L624452:{bud-=2;NFSU2_TR(0x624452);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B624454:{NFSU2_TR(0x624454);
if(r1(F+6)){{[[clang::musttail]] return blk_62446a(ARGS);}}
}
B624456:L624456:{bud-=2;NFSU2_TR(0x624456);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624458:{NFSU2_TR(0x624458);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62445dull));
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
PN u32 blk_62445d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62445d:L62445d:{bud-=3;NFSU2_TR(0x62445d);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B624460:{NFSU2_TR(0x624460);
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
B624462:{NFSU2_TR(0x624462);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_630d1b(ARGS);}}
}
B624468:L624468:{bud-=1;NFSU2_TR(0x624468);
{[[clang::musttail]] return blk_62449e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62446a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62446a:L62446a:{bud-=13;NFSU2_TR(0x62446a);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B624471:{NFSU2_TR(0x624471);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624478:{NFSU2_TR(0x624478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62447b:{NFSU2_TR(0x62447b);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B62447d:{NFSU2_TR(0x62447d);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B624484:{NFSU2_TR(0x624484);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624486:{NFSU2_TR(0x624486);
w4(G+4,u32(u32(r4(G+4))|u32(r4(G+0))));
}
B624488:{NFSU2_TR(0x624488);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62448f:{NFSU2_TR(0x62448f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624490:{NFSU2_TR(0x624490);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B624493:{NFSU2_TR(0x624493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624494:{NFSU2_TR(0x624494);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624495:{NFSU2_TR(0x624495);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_624496(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624496(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624496:L624496:{bud-=2;NFSU2_TR(0x624496);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624499:{NFSU2_TR(0x624499);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62449eull));
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
PN u32 blk_62449e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62449e:L62449e:{bud-=1;NFSU2_TR(0x62449e);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_6244a5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6244a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6244a5:L6244a5:{bud-=6;NFSU2_TR(0x6244a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6244ac:{NFSU2_TR(0x6244ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6244b3:{NFSU2_TR(0x6244b3);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6244b4:{NFSU2_TR(0x6244b4);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6244b7:{NFSU2_TR(0x6244b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6244be:{NFSU2_TR(0x6244be);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x623070u);}[[clang::musttail]] return blk_623070(ARGS);}}
}
B6244c4:L6244c4:{bud-=4;NFSU2_TR(0x6244c4);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6244c5:{NFSU2_TR(0x6244c5);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6244c8:{NFSU2_TR(0x6244c8);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6244cf:{NFSU2_TR(0x6244cf);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x623061u);}[[clang::musttail]] return blk_623061(ARGS);}}
}
B6244d5:L6244d5:{bud-=2;NFSU2_TR(0x6244d5);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6244da:{NFSU2_TR(0x6244da);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6244e7(ARGS);}}
}
B6244dc:L6244dc:{bud-=3;NFSU2_TR(0x6244dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6244df:{NFSU2_TR(0x6244df);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6244e1:{NFSU2_TR(0x6244e1);
if(r1(F+6)){{[[clang::musttail]] return blk_624c9b(ARGS);}}
{[[clang::musttail]] return blk_6244e7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6244e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6244e7:L6244e7:{bud-=22;NFSU2_TR(0x6244e7);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6244ec:{NFSU2_TR(0x6244ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6244f3:{NFSU2_TR(0x6244f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6244f4:{NFSU2_TR(0x6244f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6244fb:{NFSU2_TR(0x6244fb);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6244fc:{NFSU2_TR(0x6244fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x35cull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624507:{NFSU2_TR(0x624507);
u8 U[8];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624512:{NFSU2_TR(0x624512);
u8 U[8];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62451d:{NFSU2_TR(0x62451d);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624528:{NFSU2_TR(0x624528);
u8 U[8];
w4(U+0,u32(u32(u32(0x36cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624533:{NFSU2_TR(0x624533);
u8 U[8];
w4(U+0,u32(u32(u32(0x370ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62453e:{NFSU2_TR(0x62453e);
u8 U[8];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624549:{NFSU2_TR(0x624549);
u8 U[8];
w4(U+0,u32(u32(u32(0x378ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624554:{NFSU2_TR(0x624554);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62455f:{NFSU2_TR(0x62455f);
u8 U[8];
w4(U+0,u32(u32(u32(0x380ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62456a:{NFSU2_TR(0x62456a);
u8 U[8];
w4(U+0,u32(u32(u32(0x384ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624575:{NFSU2_TR(0x624575);
u8 U[8];
w4(U+0,u32(u32(u32(0x388ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624580:{NFSU2_TR(0x624580);
u8 U[8];
w4(U+0,u32(u32(u32(0x38cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62458b:{NFSU2_TR(0x62458b);
u8 U[8];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624596:{NFSU2_TR(0x624596);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6245a1:{NFSU2_TR(0x6245a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x398ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6245ac:{NFSU2_TR(0x6245ac);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6245b1ull));
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
PN u32 blk_6245b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6245b1:L6245b1:{bud-=7;NFSU2_TR(0x6245b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6245b5:{NFSU2_TR(0x6245b5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6245bb:{NFSU2_TR(0x6245bb);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x598ull))));
}
B6245c0:{NFSU2_TR(0x6245c0);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B6245c3:{NFSU2_TR(0x6245c3);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6245c5:{NFSU2_TR(0x6245c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6245cc:{NFSU2_TR(0x6245cc);
if(r1(F+6)){{[[clang::musttail]] return blk_624c9b(ARGS);}}
}
B6245d2:L6245d2:{bud-=2;NFSU2_TR(0x6245d2);
__builtin_memmove((R+8),gp(0x82da5c),4);
}
B6245d8:{NFSU2_TR(0x6245d8);
{[[clang::musttail]] return blk_6245e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6245e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6245e0:L6245e0:{bud-=6;NFSU2_TR(0x6245e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6245e7:{NFSU2_TR(0x6245e7);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6245ea:{NFSU2_TR(0x6245ea);
__builtin_memmove((R+28),gp(0x82da60),4);
}
B6245f0:{NFSU2_TR(0x6245f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6245f3:{NFSU2_TR(0x6245f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B6245f5:{NFSU2_TR(0x6245f5);
if(r1(F+0)){{[[clang::musttail]] return blk_624613(ARGS);}}
}
B6245f7:L6245f7:{bud-=5;NFSU2_TR(0x6245f7);
__builtin_memmove((G+0),gp(0x82da70),4);
}
B6245fc:{NFSU2_TR(0x6245fc);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B6245ff:{NFSU2_TR(0x6245ff);
s4(0x82da6c,u32(0x1ull));
}
B624609:{NFSU2_TR(0x624609);
__builtin_memmove(gp(0x82da70),(G+0),4);
}
B62460e:{NFSU2_TR(0x62460e);
{[[clang::musttail]] return blk_624c79(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624613(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624613:L624613:{bud-=5;NFSU2_TR(0x624613);
__builtin_memmove((R+28),(R+8),4);
}
B624615:{NFSU2_TR(0x624615);
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
B624617:{NFSU2_TR(0x624617);
__builtin_memmove((R+8),(G+4),4);
}
B624619:{NFSU2_TR(0x624619);
__builtin_memmove(gp(0x82da5c),(R+8),4);
}
B62461f:{NFSU2_TR(0x62461f);
if(r1(F+6)){{[[clang::musttail]] return blk_624c79(ARGS);}}
}
B624625:L624625:{bud-=196;NFSU2_TR(0x624625);
{u32 ea_=u32(r4(G+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62462c:{NFSU2_TR(0x62462c);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62462f:{NFSU2_TR(0x62462f);
{u32 ea_=u32(r4(G+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624636:{NFSU2_TR(0x624636);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624639:{NFSU2_TR(0x624639);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62463b:{NFSU2_TR(0x62463b);
{u32 ea_=u32(r4(G+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624642:{NFSU2_TR(0x624642);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624645:{NFSU2_TR(0x624645);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624647:{NFSU2_TR(0x624647);
{u32 ea_=u32(r4(G+16)+u32(860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62464e:{NFSU2_TR(0x62464e);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624651:{NFSU2_TR(0x624651);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624653:{NFSU2_TR(0x624653);
{u32 ea_=u32(r4(G+16)+u32(1872u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62465a:{NFSU2_TR(0x62465a);
{u32 ea_=u32(r4(G+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624661:{NFSU2_TR(0x624661);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624664:{NFSU2_TR(0x624664);
{u32 ea_=u32(r4(G+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62466b:{NFSU2_TR(0x62466b);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62466e:{NFSU2_TR(0x62466e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624670:{NFSU2_TR(0x624670);
{u32 ea_=u32(r4(G+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624677:{NFSU2_TR(0x624677);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62467a:{NFSU2_TR(0x62467a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62467c:{NFSU2_TR(0x62467c);
{u32 ea_=u32(r4(G+16)+u32(860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624683:{NFSU2_TR(0x624683);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624686:{NFSU2_TR(0x624686);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624688:{NFSU2_TR(0x624688);
{u32 ea_=u32(r4(G+16)+u32(1876u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62468f:{NFSU2_TR(0x62468f);
{u32 ea_=u32(r4(G+16)+u32(860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624696:{NFSU2_TR(0x624696);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624699:{NFSU2_TR(0x624699);
{u32 ea_=u32(r4(G+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6246a0:{NFSU2_TR(0x6246a0);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6246a3:{NFSU2_TR(0x6246a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6246a5:{NFSU2_TR(0x6246a5);
{u32 ea_=u32(r4(G+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6246ac:{NFSU2_TR(0x6246ac);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6246af:{NFSU2_TR(0x6246af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6246b1:{NFSU2_TR(0x6246b1);
{u32 ea_=u32(r4(G+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6246b8:{NFSU2_TR(0x6246b8);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6246bb:{NFSU2_TR(0x6246bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6246bd:{NFSU2_TR(0x6246bd);
{u32 ea_=u32(r4(G+16)+u32(1880u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6246c4:{NFSU2_TR(0x6246c4);
{u32 ea_=u32(r4(G+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6246cb:{NFSU2_TR(0x6246cb);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6246ce:{NFSU2_TR(0x6246ce);
{u32 ea_=u32(r4(G+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6246d5:{NFSU2_TR(0x6246d5);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6246d8:{NFSU2_TR(0x6246d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6246da:{NFSU2_TR(0x6246da);
{u32 ea_=u32(r4(G+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6246e1:{NFSU2_TR(0x6246e1);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6246e4:{NFSU2_TR(0x6246e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6246e6:{NFSU2_TR(0x6246e6);
{u32 ea_=u32(r4(G+16)+u32(860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6246ed:{NFSU2_TR(0x6246ed);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6246f0:{NFSU2_TR(0x6246f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6246f2:{NFSU2_TR(0x6246f2);
{u32 ea_=u32(r4(G+16)+u32(1884u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6246f9:{NFSU2_TR(0x6246f9);
{u32 ea_=u32(r4(G+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624700:{NFSU2_TR(0x624700);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624703:{NFSU2_TR(0x624703);
{u32 ea_=u32(r4(G+16)+u32(872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62470a:{NFSU2_TR(0x62470a);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62470d:{NFSU2_TR(0x62470d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62470f:{NFSU2_TR(0x62470f);
{u32 ea_=u32(r4(G+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624716:{NFSU2_TR(0x624716);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624719:{NFSU2_TR(0x624719);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62471b:{NFSU2_TR(0x62471b);
{u32 ea_=u32(r4(G+16)+u32(876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624722:{NFSU2_TR(0x624722);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624725:{NFSU2_TR(0x624725);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624727:{NFSU2_TR(0x624727);
{u32 ea_=u32(r4(G+16)+u32(1888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62472e:{NFSU2_TR(0x62472e);
{u32 ea_=u32(r4(G+16)+u32(872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624735:{NFSU2_TR(0x624735);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624738:{NFSU2_TR(0x624738);
{u32 ea_=u32(r4(G+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62473f:{NFSU2_TR(0x62473f);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624742:{NFSU2_TR(0x624742);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624744:{NFSU2_TR(0x624744);
{u32 ea_=u32(r4(G+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62474b:{NFSU2_TR(0x62474b);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62474e:{NFSU2_TR(0x62474e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624750:{NFSU2_TR(0x624750);
{u32 ea_=u32(r4(G+16)+u32(876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624757:{NFSU2_TR(0x624757);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62475a:{NFSU2_TR(0x62475a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62475c:{NFSU2_TR(0x62475c);
{u32 ea_=u32(r4(G+16)+u32(1892u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624763:{NFSU2_TR(0x624763);
{u32 ea_=u32(r4(G+16)+u32(876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62476a:{NFSU2_TR(0x62476a);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62476d:{NFSU2_TR(0x62476d);
{u32 ea_=u32(r4(G+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624774:{NFSU2_TR(0x624774);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624777:{NFSU2_TR(0x624777);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624779:{NFSU2_TR(0x624779);
{u32 ea_=u32(r4(G+16)+u32(872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624780:{NFSU2_TR(0x624780);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624783:{NFSU2_TR(0x624783);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624785:{NFSU2_TR(0x624785);
{u32 ea_=u32(r4(G+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62478c:{NFSU2_TR(0x62478c);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62478f:{NFSU2_TR(0x62478f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624791:{NFSU2_TR(0x624791);
{u32 ea_=u32(r4(G+16)+u32(1896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624798:{NFSU2_TR(0x624798);
{u32 ea_=u32(r4(G+16)+u32(872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62479f:{NFSU2_TR(0x62479f);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247a2:{NFSU2_TR(0x6247a2);
{u32 ea_=u32(r4(G+16)+u32(868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6247a9:{NFSU2_TR(0x6247a9);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247ac:{NFSU2_TR(0x6247ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6247ae:{NFSU2_TR(0x6247ae);
{u32 ea_=u32(r4(G+16)+u32(864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6247b5:{NFSU2_TR(0x6247b5);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247b8:{NFSU2_TR(0x6247b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6247ba:{NFSU2_TR(0x6247ba);
{u32 ea_=u32(r4(G+16)+u32(876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6247c1:{NFSU2_TR(0x6247c1);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247c4:{NFSU2_TR(0x6247c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6247c6:{NFSU2_TR(0x6247c6);
{u32 ea_=u32(r4(G+16)+u32(1900u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6247cd:{NFSU2_TR(0x6247cd);
{u32 ea_=u32(r4(G+16)+u32(880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6247d4:{NFSU2_TR(0x6247d4);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247d7:{NFSU2_TR(0x6247d7);
{u32 ea_=u32(r4(G+16)+u32(888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6247de:{NFSU2_TR(0x6247de);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247e1:{NFSU2_TR(0x6247e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6247e3:{NFSU2_TR(0x6247e3);
{u32 ea_=u32(r4(G+16)+u32(884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6247ea:{NFSU2_TR(0x6247ea);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247ed:{NFSU2_TR(0x6247ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6247ef:{NFSU2_TR(0x6247ef);
{u32 ea_=u32(r4(G+16)+u32(892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6247f6:{NFSU2_TR(0x6247f6);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6247f9:{NFSU2_TR(0x6247f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6247fb:{NFSU2_TR(0x6247fb);
{u32 ea_=u32(r4(G+16)+u32(1904u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624802:{NFSU2_TR(0x624802);
{u32 ea_=u32(r4(G+16)+u32(888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624809:{NFSU2_TR(0x624809);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62480c:{NFSU2_TR(0x62480c);
{u32 ea_=u32(r4(G+16)+u32(884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624813:{NFSU2_TR(0x624813);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624816:{NFSU2_TR(0x624816);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624818:{NFSU2_TR(0x624818);
{u32 ea_=u32(r4(G+16)+u32(880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62481f:{NFSU2_TR(0x62481f);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624822:{NFSU2_TR(0x624822);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624824:{NFSU2_TR(0x624824);
{u32 ea_=u32(r4(G+16)+u32(892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62482b:{NFSU2_TR(0x62482b);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62482e:{NFSU2_TR(0x62482e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624830:{NFSU2_TR(0x624830);
{u32 ea_=u32(r4(G+16)+u32(1908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624837:{NFSU2_TR(0x624837);
{u32 ea_=u32(r4(G+16)+u32(892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62483e:{NFSU2_TR(0x62483e);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624841:{NFSU2_TR(0x624841);
{u32 ea_=u32(r4(G+16)+u32(884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624848:{NFSU2_TR(0x624848);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62484b:{NFSU2_TR(0x62484b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62484d:{NFSU2_TR(0x62484d);
{u32 ea_=u32(r4(G+16)+u32(888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624854:{NFSU2_TR(0x624854);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624857:{NFSU2_TR(0x624857);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624859:{NFSU2_TR(0x624859);
{u32 ea_=u32(r4(G+16)+u32(880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624860:{NFSU2_TR(0x624860);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624863:{NFSU2_TR(0x624863);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624865:{NFSU2_TR(0x624865);
{u32 ea_=u32(r4(G+16)+u32(1912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62486c:{NFSU2_TR(0x62486c);
{u32 ea_=u32(r4(G+16)+u32(888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624873:{NFSU2_TR(0x624873);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624876:{NFSU2_TR(0x624876);
{u32 ea_=u32(r4(G+16)+u32(884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62487d:{NFSU2_TR(0x62487d);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624880:{NFSU2_TR(0x624880);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624882:{NFSU2_TR(0x624882);
{u32 ea_=u32(r4(G+16)+u32(880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624889:{NFSU2_TR(0x624889);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62488c:{NFSU2_TR(0x62488c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62488e:{NFSU2_TR(0x62488e);
{u32 ea_=u32(r4(G+16)+u32(892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624895:{NFSU2_TR(0x624895);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624898:{NFSU2_TR(0x624898);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62489a:{NFSU2_TR(0x62489a);
{u32 ea_=u32(r4(G+16)+u32(1916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6248a1:{NFSU2_TR(0x6248a1);
{u32 ea_=u32(r4(G+16)+u32(896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248a8:{NFSU2_TR(0x6248a8);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6248ab:{NFSU2_TR(0x6248ab);
{u32 ea_=u32(r4(G+16)+u32(904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248b2:{NFSU2_TR(0x6248b2);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6248b5:{NFSU2_TR(0x6248b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6248b7:{NFSU2_TR(0x6248b7);
{u32 ea_=u32(r4(G+16)+u32(900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248be:{NFSU2_TR(0x6248be);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6248c1:{NFSU2_TR(0x6248c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6248c3:{NFSU2_TR(0x6248c3);
{u32 ea_=u32(r4(G+16)+u32(908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248ca:{NFSU2_TR(0x6248ca);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6248cd:{NFSU2_TR(0x6248cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6248cf:{NFSU2_TR(0x6248cf);
{u32 ea_=u32(r4(G+16)+u32(1920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6248d6:{NFSU2_TR(0x6248d6);
{u32 ea_=u32(r4(G+16)+u32(904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248dd:{NFSU2_TR(0x6248dd);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6248e0:{NFSU2_TR(0x6248e0);
{u32 ea_=u32(r4(G+16)+u32(900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248e7:{NFSU2_TR(0x6248e7);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6248ea:{NFSU2_TR(0x6248ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6248ec:{NFSU2_TR(0x6248ec);
{u32 ea_=u32(r4(G+16)+u32(896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248f3:{NFSU2_TR(0x6248f3);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6248f6:{NFSU2_TR(0x6248f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6248f8:{NFSU2_TR(0x6248f8);
{u32 ea_=u32(r4(G+16)+u32(908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6248ff:{NFSU2_TR(0x6248ff);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624902:{NFSU2_TR(0x624902);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624904:{NFSU2_TR(0x624904);
{u32 ea_=u32(r4(G+16)+u32(1924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62490b:{NFSU2_TR(0x62490b);
{u32 ea_=u32(r4(G+16)+u32(908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624912:{NFSU2_TR(0x624912);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624915:{NFSU2_TR(0x624915);
{u32 ea_=u32(r4(G+16)+u32(900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62491c:{NFSU2_TR(0x62491c);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62491f:{NFSU2_TR(0x62491f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624921:{NFSU2_TR(0x624921);
{u32 ea_=u32(r4(G+16)+u32(904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624928:{NFSU2_TR(0x624928);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62492b:{NFSU2_TR(0x62492b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62492d:{NFSU2_TR(0x62492d);
{u32 ea_=u32(r4(G+16)+u32(896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624934:{NFSU2_TR(0x624934);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624937:{NFSU2_TR(0x624937);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624939:{NFSU2_TR(0x624939);
{u32 ea_=u32(r4(G+16)+u32(1928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624940:{NFSU2_TR(0x624940);
{u32 ea_=u32(r4(G+16)+u32(904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624947:{NFSU2_TR(0x624947);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62494a:{NFSU2_TR(0x62494a);
{u32 ea_=u32(r4(G+16)+u32(900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624951:{NFSU2_TR(0x624951);
u8 U[4];
w4(U+0,u32(u32(u32(0x750ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B624958:{NFSU2_TR(0x624958);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62495b:{NFSU2_TR(0x62495b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62495c:{NFSU2_TR(0x62495c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62495d:{NFSU2_TR(0x62495d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62495f:{NFSU2_TR(0x62495f);
{u32 ea_=u32(r4(G+16)+u32(904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624966:{NFSU2_TR(0x624966);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624969:{NFSU2_TR(0x624969);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62496b:{NFSU2_TR(0x62496b);
{u32 ea_=u32(r4(G+16)+u32(916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624972:{NFSU2_TR(0x624972);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624975:{NFSU2_TR(0x624975);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624977:{NFSU2_TR(0x624977);
{u32 ea_=u32(r4(G+16)+u32(1940u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62497e:{NFSU2_TR(0x62497e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624983ull));
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
PN u32 blk_624983(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624983:L624983:{bud-=196;NFSU2_TR(0x624983);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624986:{NFSU2_TR(0x624986);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624989:{NFSU2_TR(0x624989);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62498c:{NFSU2_TR(0x62498c);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62498f:{NFSU2_TR(0x62498f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624991:{NFSU2_TR(0x624991);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624994:{NFSU2_TR(0x624994);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624997:{NFSU2_TR(0x624997);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624999:{NFSU2_TR(0x624999);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62499b:{NFSU2_TR(0x62499b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62499d:{NFSU2_TR(0x62499d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62499f:{NFSU2_TR(0x62499f);
{u32 ea_=u32(r4(G+16)+u32(2024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6249a6:{NFSU2_TR(0x6249a6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249a8:{NFSU2_TR(0x6249a8);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249ab:{NFSU2_TR(0x6249ab);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249ae:{NFSU2_TR(0x6249ae);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249b1:{NFSU2_TR(0x6249b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6249b3:{NFSU2_TR(0x6249b3);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249b6:{NFSU2_TR(0x6249b6);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249b9:{NFSU2_TR(0x6249b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6249bb:{NFSU2_TR(0x6249bb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249be:{NFSU2_TR(0x6249be);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249c1:{NFSU2_TR(0x6249c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6249c3:{NFSU2_TR(0x6249c3);
{u32 ea_=u32(r4(G+16)+u32(2028u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6249ca:{NFSU2_TR(0x6249ca);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249cc:{NFSU2_TR(0x6249cc);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249cf:{NFSU2_TR(0x6249cf);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249d2:{NFSU2_TR(0x6249d2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249d5:{NFSU2_TR(0x6249d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6249d7:{NFSU2_TR(0x6249d7);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249da:{NFSU2_TR(0x6249da);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249dd:{NFSU2_TR(0x6249dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6249df:{NFSU2_TR(0x6249df);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249e2:{NFSU2_TR(0x6249e2);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249e5:{NFSU2_TR(0x6249e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6249e7:{NFSU2_TR(0x6249e7);
{u32 ea_=u32(r4(G+16)+u32(2032u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6249ee:{NFSU2_TR(0x6249ee);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249f0:{NFSU2_TR(0x6249f0);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249f3:{NFSU2_TR(0x6249f3);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249f6:{NFSU2_TR(0x6249f6);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6249f9:{NFSU2_TR(0x6249f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6249fb:{NFSU2_TR(0x6249fb);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6249fe:{NFSU2_TR(0x6249fe);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a01:{NFSU2_TR(0x624a01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a03:{NFSU2_TR(0x624a03);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a06:{NFSU2_TR(0x624a06);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a09:{NFSU2_TR(0x624a09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a0b:{NFSU2_TR(0x624a0b);
{u32 ea_=u32(r4(G+16)+u32(2036u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624a12:{NFSU2_TR(0x624a12);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a15:{NFSU2_TR(0x624a15);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a18:{NFSU2_TR(0x624a18);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a1b:{NFSU2_TR(0x624a1b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a1d:{NFSU2_TR(0x624a1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a1f:{NFSU2_TR(0x624a1f);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a22:{NFSU2_TR(0x624a22);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a25:{NFSU2_TR(0x624a25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a27:{NFSU2_TR(0x624a27);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a2a:{NFSU2_TR(0x624a2a);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a2d:{NFSU2_TR(0x624a2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a2f:{NFSU2_TR(0x624a2f);
{u32 ea_=u32(r4(G+16)+u32(2040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624a36:{NFSU2_TR(0x624a36);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a39:{NFSU2_TR(0x624a39);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a3c:{NFSU2_TR(0x624a3c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a3f:{NFSU2_TR(0x624a3f);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a42:{NFSU2_TR(0x624a42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a44:{NFSU2_TR(0x624a44);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a47:{NFSU2_TR(0x624a47);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a4a:{NFSU2_TR(0x624a4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a4c:{NFSU2_TR(0x624a4c);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a4f:{NFSU2_TR(0x624a4f);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a52:{NFSU2_TR(0x624a52);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a54:{NFSU2_TR(0x624a54);
{u32 ea_=u32(r4(G+16)+u32(2044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624a5b:{NFSU2_TR(0x624a5b);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a5e:{NFSU2_TR(0x624a5e);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a61:{NFSU2_TR(0x624a61);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a64:{NFSU2_TR(0x624a64);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a67:{NFSU2_TR(0x624a67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a69:{NFSU2_TR(0x624a69);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a6c:{NFSU2_TR(0x624a6c);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a6f:{NFSU2_TR(0x624a6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a71:{NFSU2_TR(0x624a71);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a74:{NFSU2_TR(0x624a74);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a77:{NFSU2_TR(0x624a77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a79:{NFSU2_TR(0x624a79);
{u32 ea_=u32(r4(G+16)+u32(2048u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624a80:{NFSU2_TR(0x624a80);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a83:{NFSU2_TR(0x624a83);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a86:{NFSU2_TR(0x624a86);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a89:{NFSU2_TR(0x624a89);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a8c:{NFSU2_TR(0x624a8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a8e:{NFSU2_TR(0x624a8e);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a91:{NFSU2_TR(0x624a91);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a94:{NFSU2_TR(0x624a94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a96:{NFSU2_TR(0x624a96);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624a99:{NFSU2_TR(0x624a99);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624a9c:{NFSU2_TR(0x624a9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624a9e:{NFSU2_TR(0x624a9e);
{u32 ea_=u32(r4(G+16)+u32(2052u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624aa5:{NFSU2_TR(0x624aa5);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624aa8:{NFSU2_TR(0x624aa8);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624aab:{NFSU2_TR(0x624aab);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624aae:{NFSU2_TR(0x624aae);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ab0:{NFSU2_TR(0x624ab0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ab2:{NFSU2_TR(0x624ab2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ab5:{NFSU2_TR(0x624ab5);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ab8:{NFSU2_TR(0x624ab8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624aba:{NFSU2_TR(0x624aba);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624abd:{NFSU2_TR(0x624abd);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ac0:{NFSU2_TR(0x624ac0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ac2:{NFSU2_TR(0x624ac2);
{u32 ea_=u32(r4(G+16)+u32(2056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624ac9:{NFSU2_TR(0x624ac9);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624acc:{NFSU2_TR(0x624acc);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624acf:{NFSU2_TR(0x624acf);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ad2:{NFSU2_TR(0x624ad2);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ad5:{NFSU2_TR(0x624ad5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ad7:{NFSU2_TR(0x624ad7);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ada:{NFSU2_TR(0x624ada);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624add:{NFSU2_TR(0x624add);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624adf:{NFSU2_TR(0x624adf);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ae2:{NFSU2_TR(0x624ae2);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ae5:{NFSU2_TR(0x624ae5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ae7:{NFSU2_TR(0x624ae7);
{u32 ea_=u32(r4(G+16)+u32(2060u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624aee:{NFSU2_TR(0x624aee);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624af1:{NFSU2_TR(0x624af1);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624af4:{NFSU2_TR(0x624af4);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624af7:{NFSU2_TR(0x624af7);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624afa:{NFSU2_TR(0x624afa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624afc:{NFSU2_TR(0x624afc);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624aff:{NFSU2_TR(0x624aff);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b02:{NFSU2_TR(0x624b02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b04:{NFSU2_TR(0x624b04);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b07:{NFSU2_TR(0x624b07);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b0a:{NFSU2_TR(0x624b0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b0c:{NFSU2_TR(0x624b0c);
{u32 ea_=u32(r4(G+16)+u32(2064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624b13:{NFSU2_TR(0x624b13);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b16:{NFSU2_TR(0x624b16);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b19:{NFSU2_TR(0x624b19);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b1c:{NFSU2_TR(0x624b1c);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b1f:{NFSU2_TR(0x624b1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b21:{NFSU2_TR(0x624b21);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b24:{NFSU2_TR(0x624b24);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b27:{NFSU2_TR(0x624b27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b29:{NFSU2_TR(0x624b29);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b2c:{NFSU2_TR(0x624b2c);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b2f:{NFSU2_TR(0x624b2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b31:{NFSU2_TR(0x624b31);
{u32 ea_=u32(r4(G+16)+u32(2068u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624b38:{NFSU2_TR(0x624b38);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b3b:{NFSU2_TR(0x624b3b);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b3e:{NFSU2_TR(0x624b3e);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b41:{NFSU2_TR(0x624b41);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b43:{NFSU2_TR(0x624b43);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b45:{NFSU2_TR(0x624b45);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b48:{NFSU2_TR(0x624b48);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b4b:{NFSU2_TR(0x624b4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b4d:{NFSU2_TR(0x624b4d);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b50:{NFSU2_TR(0x624b50);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b53:{NFSU2_TR(0x624b53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b55:{NFSU2_TR(0x624b55);
{u32 ea_=u32(r4(G+16)+u32(2072u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624b5c:{NFSU2_TR(0x624b5c);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b5f:{NFSU2_TR(0x624b5f);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b62:{NFSU2_TR(0x624b62);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b65:{NFSU2_TR(0x624b65);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b68:{NFSU2_TR(0x624b68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b6a:{NFSU2_TR(0x624b6a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b6d:{NFSU2_TR(0x624b6d);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b70:{NFSU2_TR(0x624b70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b72:{NFSU2_TR(0x624b72);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b75:{NFSU2_TR(0x624b75);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b78:{NFSU2_TR(0x624b78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b7a:{NFSU2_TR(0x624b7a);
{u32 ea_=u32(r4(G+16)+u32(2076u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624b81:{NFSU2_TR(0x624b81);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b84:{NFSU2_TR(0x624b84);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b87:{NFSU2_TR(0x624b87);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b8a:{NFSU2_TR(0x624b8a);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b8d:{NFSU2_TR(0x624b8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x7e8ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B624b94:{NFSU2_TR(0x624b94);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624b95:{NFSU2_TR(0x624b95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624b96:{NFSU2_TR(0x624b96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624b98:{NFSU2_TR(0x624b98);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624b9b:{NFSU2_TR(0x624b9b);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624b9e:{NFSU2_TR(0x624b9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ba0:{NFSU2_TR(0x624ba0);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ba3:{NFSU2_TR(0x624ba3);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ba6:{NFSU2_TR(0x624ba6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ba8:{NFSU2_TR(0x624ba8);
{u32 ea_=u32(r4(G+16)+u32(2088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624baf:{NFSU2_TR(0x624baf);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624bb2:{NFSU2_TR(0x624bb2);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624bb5:{NFSU2_TR(0x624bb5);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624bb8:{NFSU2_TR(0x624bb8);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624bbb:{NFSU2_TR(0x624bbb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624bbd:{NFSU2_TR(0x624bbd);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624bc0:{NFSU2_TR(0x624bc0);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624bc3:{NFSU2_TR(0x624bc3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624bc5:{NFSU2_TR(0x624bc5);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624bc8:{NFSU2_TR(0x624bc8);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624bcb:{NFSU2_TR(0x624bcb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624bcd:{NFSU2_TR(0x624bcd);
{u32 ea_=u32(r4(G+16)+u32(2092u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624bd4:{NFSU2_TR(0x624bd4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624bd9ull));
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
PN u32 blk_624bd9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624bd9:L624bd9:{bud-=5;NFSU2_TR(0x624bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624bdd:{NFSU2_TR(0x624bdd);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B624be0:{NFSU2_TR(0x624be0);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x19a8ull))));
}
B624be6:{NFSU2_TR(0x624be6);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B624bea:{NFSU2_TR(0x624bea);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_624bf5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624bf5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624bf5:L624bf5:{bud-=5;NFSU2_TR(0x624bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B624bf9:{NFSU2_TR(0x624bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B624bfb:{NFSU2_TR(0x624bfb);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B624bfd:{NFSU2_TR(0x624bfd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B624c04:{NFSU2_TR(0x624c04);
if(r1(F+6)){{[[clang::musttail]] return blk_624c57(ARGS);}}
}
B624c06:L624c06:{bud-=4;NFSU2_TR(0x624c06);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624c0a:{NFSU2_TR(0x624c0a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x394ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624c10:{NFSU2_TR(0x624c10);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B624c12:{NFSU2_TR(0x624c12);
if(r1(F+6)){{[[clang::musttail]] return blk_624c26(ARGS);}}
}
B624c14:L624c14:{bud-=4;NFSU2_TR(0x624c14);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624c1b:{NFSU2_TR(0x624c1b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624c1c:{NFSU2_TR(0x624c1c);
u8 U[4];
w4(U+0,u32(0x3b3a1f8dull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624c21:{NFSU2_TR(0x624c21);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624c26ull));
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
PN u32 blk_624c26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624c26:L624c26:{bud-=14;NFSU2_TR(0x624c26);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B624c2d:{NFSU2_TR(0x624c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624c34:{NFSU2_TR(0x624c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624c37:{NFSU2_TR(0x624c37);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B624c39:{NFSU2_TR(0x624c39);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B624c40:{NFSU2_TR(0x624c40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624c42:{NFSU2_TR(0x624c42);
w4(G+4,u32(u32(r4(G+4))|u32(r4(G+0))));
}
B624c44:{NFSU2_TR(0x624c44);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624c4b:{NFSU2_TR(0x624c4b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624c4c:{NFSU2_TR(0x624c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624c4f:{NFSU2_TR(0x624c4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624c50:{NFSU2_TR(0x624c50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624c51:{NFSU2_TR(0x624c51);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624c52:{NFSU2_TR(0x624c52);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624c57ull));
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
PN u32 blk_624c57(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624c57:L624c57:{bud-=7;NFSU2_TR(0x624c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624c5b:{NFSU2_TR(0x624c5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624c62:{NFSU2_TR(0x624c62);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B624c65:{NFSU2_TR(0x624c65);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B624c66:{NFSU2_TR(0x624c66);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B624c6a:{NFSU2_TR(0x624c6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B624c71:{NFSU2_TR(0x624c71);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x624bf5u);}[[clang::musttail]] return blk_624bf5(ARGS);}}
}
B624c73:L624c73:{bud-=1;NFSU2_TR(0x624c73);
__builtin_memmove((R+8),gp(0x82da5c),4);
{[[clang::musttail]] return blk_624c79(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624c79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624c79:L624c79:{bud-=7;NFSU2_TR(0x624c79);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624c80:{NFSU2_TR(0x624c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B624c82:{NFSU2_TR(0x624c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624c86:{NFSU2_TR(0x624c86);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x598ull))));
}
B624c8c:{NFSU2_TR(0x624c8c);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B624c8e:{NFSU2_TR(0x624c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B624c95:{NFSU2_TR(0x624c95);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6245e0u);}[[clang::musttail]] return blk_6245e0(ARGS);}}
{[[clang::musttail]] return blk_624c9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624c9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624c9b:L624c9b:{bud-=2;NFSU2_TR(0x624c9b);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B624ca0:{NFSU2_TR(0x624ca0);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_624cad(ARGS);}}
}
B624ca2:L624ca2:{bud-=3;NFSU2_TR(0x624ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624ca5:{NFSU2_TR(0x624ca5);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B624ca7:{NFSU2_TR(0x624ca7);
if(r1(F+6)){{[[clang::musttail]] return blk_625a76(ARGS);}}
{[[clang::musttail]] return blk_624cad(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624cad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624cad:L624cad:{bud-=22;NFSU2_TR(0x624cad);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624cb2:{NFSU2_TR(0x624cb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B624cb9:{NFSU2_TR(0x624cb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624cba:{NFSU2_TR(0x624cba);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B624cc1:{NFSU2_TR(0x624cc1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B624cc2:{NFSU2_TR(0x624cc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624ccd:{NFSU2_TR(0x624ccd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624cd8:{NFSU2_TR(0x624cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624ce3:{NFSU2_TR(0x624ce3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624cee:{NFSU2_TR(0x624cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624cf9:{NFSU2_TR(0x624cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d04:{NFSU2_TR(0x624d04);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d4ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d0f:{NFSU2_TR(0x624d0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d1a:{NFSU2_TR(0x624d1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d25:{NFSU2_TR(0x624d25);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d30:{NFSU2_TR(0x624d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d3b:{NFSU2_TR(0x624d3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d46:{NFSU2_TR(0x624d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d51:{NFSU2_TR(0x624d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d5c:{NFSU2_TR(0x624d5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d67:{NFSU2_TR(0x624d67);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B624d72:{NFSU2_TR(0x624d72);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x624d77ull));
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
PN u32 blk_624d77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624d77:L624d77:{bud-=8;NFSU2_TR(0x624d77);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B624d7b:{NFSU2_TR(0x624d7b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x620ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624d81:{NFSU2_TR(0x624d81);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x620ull))));
}
B624d87:{NFSU2_TR(0x624d87);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B624d8a:{NFSU2_TR(0x624d8a);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B624d8c:{NFSU2_TR(0x624d8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B624d93:{NFSU2_TR(0x624d93);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B624d9a:{NFSU2_TR(0x624d9a);
if(r1(F+6)){{[[clang::musttail]] return blk_625a76(ARGS);}}
}
B624da0:L624da0:{bud-=2;NFSU2_TR(0x624da0);
__builtin_memmove((G+4),gp(0x82da5c),4);
}
B624da6:{NFSU2_TR(0x624da6);
{[[clang::musttail]] return blk_624db0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624da8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624da8:L624da8:{bud-=2;NFSU2_TR(0x624da8);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B624daf:{NFSU2_TR(0x624daf);
{[[clang::musttail]] return blk_624db0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_624db0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624db0:L624db0:{bud-=5;NFSU2_TR(0x624db0);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B624db3:{NFSU2_TR(0x624db3);
__builtin_memmove((R+8),gp(0x82da60),4);
}
B624db9:{NFSU2_TR(0x624db9);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((G+0),(U+0),4);
}
B624dbc:{NFSU2_TR(0x624dbc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
}
B624dbe:{NFSU2_TR(0x624dbe);
if(r1(F+0)){{[[clang::musttail]] return blk_624ddc(ARGS);}}
}
B624dc0:L624dc0:{bud-=5;NFSU2_TR(0x624dc0);
__builtin_memmove((G+0),gp(0x82da70),4);
}
B624dc5:{NFSU2_TR(0x624dc5);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B624dc8:{NFSU2_TR(0x624dc8);
s4(0x82da6c,u32(0x1ull));
}
B624dd2:{NFSU2_TR(0x624dd2);
__builtin_memmove(gp(0x82da70),(G+0),4);
}
B624dd7:{NFSU2_TR(0x624dd7);
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
PN u32 blk_624ddc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B624ddc:L624ddc:{bud-=5;NFSU2_TR(0x624ddc);
__builtin_memmove((R+28),(G+4),4);
}
B624dde:{NFSU2_TR(0x624dde);
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
B624de0:{NFSU2_TR(0x624de0);
__builtin_memmove((G+4),(G+0),4);
}
B624de2:{NFSU2_TR(0x624de2);
__builtin_memmove(gp(0x82da5c),(G+4),4);
}
B624de8:{NFSU2_TR(0x624de8);
if(r1(F+6)){{[[clang::musttail]] return blk_625a52(ARGS);}}
}
B624dee:L624dee:{bud-=120;NFSU2_TR(0x624dee);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624df5:{NFSU2_TR(0x624df5);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624df8:{NFSU2_TR(0x624df8);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624dff:{NFSU2_TR(0x624dff);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e02:{NFSU2_TR(0x624e02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e04:{NFSU2_TR(0x624e04);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e0b:{NFSU2_TR(0x624e0b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e0e:{NFSU2_TR(0x624e0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e10:{NFSU2_TR(0x624e10);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e17:{NFSU2_TR(0x624e17);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e1a:{NFSU2_TR(0x624e1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e1c:{NFSU2_TR(0x624e1c);
{u32 ea_=u32(r4(G+16)+u32(1872u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624e23:{NFSU2_TR(0x624e23);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e2a:{NFSU2_TR(0x624e2a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e2d:{NFSU2_TR(0x624e2d);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e34:{NFSU2_TR(0x624e34);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e37:{NFSU2_TR(0x624e37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e39:{NFSU2_TR(0x624e39);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e40:{NFSU2_TR(0x624e40);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e43:{NFSU2_TR(0x624e43);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e45:{NFSU2_TR(0x624e45);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e4c:{NFSU2_TR(0x624e4c);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e4f:{NFSU2_TR(0x624e4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e51:{NFSU2_TR(0x624e51);
{u32 ea_=u32(r4(G+16)+u32(1876u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624e58:{NFSU2_TR(0x624e58);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e5f:{NFSU2_TR(0x624e5f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e62:{NFSU2_TR(0x624e62);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e69:{NFSU2_TR(0x624e69);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e6c:{NFSU2_TR(0x624e6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e6e:{NFSU2_TR(0x624e6e);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e75:{NFSU2_TR(0x624e75);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e78:{NFSU2_TR(0x624e78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e7a:{NFSU2_TR(0x624e7a);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e81:{NFSU2_TR(0x624e81);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e84:{NFSU2_TR(0x624e84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624e86:{NFSU2_TR(0x624e86);
{u32 ea_=u32(r4(G+16)+u32(1880u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624e8d:{NFSU2_TR(0x624e8d);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e94:{NFSU2_TR(0x624e94);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624e97:{NFSU2_TR(0x624e97);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624e9e:{NFSU2_TR(0x624e9e);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ea1:{NFSU2_TR(0x624ea1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ea3:{NFSU2_TR(0x624ea3);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624eaa:{NFSU2_TR(0x624eaa);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ead:{NFSU2_TR(0x624ead);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624eaf:{NFSU2_TR(0x624eaf);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624eb6:{NFSU2_TR(0x624eb6);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624eb9:{NFSU2_TR(0x624eb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ebb:{NFSU2_TR(0x624ebb);
{u32 ea_=u32(r4(G+16)+u32(1884u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624ec2:{NFSU2_TR(0x624ec2);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ec9:{NFSU2_TR(0x624ec9);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ecc:{NFSU2_TR(0x624ecc);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ed3:{NFSU2_TR(0x624ed3);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ed6:{NFSU2_TR(0x624ed6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ed8:{NFSU2_TR(0x624ed8);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624edf:{NFSU2_TR(0x624edf);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ee2:{NFSU2_TR(0x624ee2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ee4:{NFSU2_TR(0x624ee4);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624eeb:{NFSU2_TR(0x624eeb);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624eee:{NFSU2_TR(0x624eee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ef0:{NFSU2_TR(0x624ef0);
{u32 ea_=u32(r4(G+16)+u32(1888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624ef7:{NFSU2_TR(0x624ef7);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624efe:{NFSU2_TR(0x624efe);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f01:{NFSU2_TR(0x624f01);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f08:{NFSU2_TR(0x624f08);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f0b:{NFSU2_TR(0x624f0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f0d:{NFSU2_TR(0x624f0d);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f14:{NFSU2_TR(0x624f14);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f17:{NFSU2_TR(0x624f17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f19:{NFSU2_TR(0x624f19);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f20:{NFSU2_TR(0x624f20);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f23:{NFSU2_TR(0x624f23);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f25:{NFSU2_TR(0x624f25);
{u32 ea_=u32(r4(G+16)+u32(1892u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624f2c:{NFSU2_TR(0x624f2c);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f33:{NFSU2_TR(0x624f33);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f36:{NFSU2_TR(0x624f36);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f3d:{NFSU2_TR(0x624f3d);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f40:{NFSU2_TR(0x624f40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f42:{NFSU2_TR(0x624f42);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f49:{NFSU2_TR(0x624f49);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f4c:{NFSU2_TR(0x624f4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f4e:{NFSU2_TR(0x624f4e);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f55:{NFSU2_TR(0x624f55);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f58:{NFSU2_TR(0x624f58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f5a:{NFSU2_TR(0x624f5a);
{u32 ea_=u32(r4(G+16)+u32(1896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624f61:{NFSU2_TR(0x624f61);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f68:{NFSU2_TR(0x624f68);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f6b:{NFSU2_TR(0x624f6b);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f72:{NFSU2_TR(0x624f72);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f75:{NFSU2_TR(0x624f75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f77:{NFSU2_TR(0x624f77);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f7e:{NFSU2_TR(0x624f7e);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f81:{NFSU2_TR(0x624f81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f83:{NFSU2_TR(0x624f83);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f8a:{NFSU2_TR(0x624f8a);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624f8d:{NFSU2_TR(0x624f8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624f8f:{NFSU2_TR(0x624f8f);
{u32 ea_=u32(r4(G+16)+u32(1900u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624f96:{NFSU2_TR(0x624f96);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624f9d:{NFSU2_TR(0x624f9d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624fa0:{NFSU2_TR(0x624fa0);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624fa7:{NFSU2_TR(0x624fa7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624faa:{NFSU2_TR(0x624faa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624fac:{NFSU2_TR(0x624fac);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624fb3:{NFSU2_TR(0x624fb3);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624fb6:{NFSU2_TR(0x624fb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624fb8:{NFSU2_TR(0x624fb8);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624fbf:{NFSU2_TR(0x624fbf);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624fc2:{NFSU2_TR(0x624fc2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624fc4:{NFSU2_TR(0x624fc4);
{u32 ea_=u32(r4(G+16)+u32(1904u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B624fcb:{NFSU2_TR(0x624fcb);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624fd2:{NFSU2_TR(0x624fd2);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624fd5:{NFSU2_TR(0x624fd5);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624fdc:{NFSU2_TR(0x624fdc);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624fdf:{NFSU2_TR(0x624fdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624fe1:{NFSU2_TR(0x624fe1);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624fe8:{NFSU2_TR(0x624fe8);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624feb:{NFSU2_TR(0x624feb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624fed:{NFSU2_TR(0x624fed);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B624ff4:{NFSU2_TR(0x624ff4);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B624ff7:{NFSU2_TR(0x624ff7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B624ff9:{NFSU2_TR(0x624ff9);
{u32 ea_=u32(r4(G+16)+u32(1908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);EXIT(0x625000u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_624(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x624166:[[clang::musttail]] return blk_624166(c,a4,a0,a1,bud);
case 0x624175:[[clang::musttail]] return blk_624175(c,a4,a0,a1,bud);
case 0x624184:[[clang::musttail]] return blk_624184(c,a4,a0,a1,bud);
case 0x6243da:[[clang::musttail]] return blk_6243da(c,a4,a0,a1,bud);
case 0x6243f7:[[clang::musttail]] return blk_6243f7(c,a4,a0,a1,bud);
case 0x6243fd:[[clang::musttail]] return blk_6243fd(c,a4,a0,a1,bud);
case 0x624404:[[clang::musttail]] return blk_624404(c,a4,a0,a1,bud);
case 0x624436:[[clang::musttail]] return blk_624436(c,a4,a0,a1,bud);
case 0x624452:[[clang::musttail]] return blk_624452(c,a4,a0,a1,bud);
case 0x62445d:[[clang::musttail]] return blk_62445d(c,a4,a0,a1,bud);
case 0x62446a:[[clang::musttail]] return blk_62446a(c,a4,a0,a1,bud);
case 0x624496:[[clang::musttail]] return blk_624496(c,a4,a0,a1,bud);
case 0x62449e:[[clang::musttail]] return blk_62449e(c,a4,a0,a1,bud);
case 0x6244a5:[[clang::musttail]] return blk_6244a5(c,a4,a0,a1,bud);
case 0x6244e7:[[clang::musttail]] return blk_6244e7(c,a4,a0,a1,bud);
case 0x6245b1:[[clang::musttail]] return blk_6245b1(c,a4,a0,a1,bud);
case 0x6245e0:[[clang::musttail]] return blk_6245e0(c,a4,a0,a1,bud);
case 0x624613:[[clang::musttail]] return blk_624613(c,a4,a0,a1,bud);
case 0x624983:[[clang::musttail]] return blk_624983(c,a4,a0,a1,bud);
case 0x624bd9:[[clang::musttail]] return blk_624bd9(c,a4,a0,a1,bud);
case 0x624bf5:[[clang::musttail]] return blk_624bf5(c,a4,a0,a1,bud);
case 0x624c26:[[clang::musttail]] return blk_624c26(c,a4,a0,a1,bud);
case 0x624c57:[[clang::musttail]] return blk_624c57(c,a4,a0,a1,bud);
case 0x624c79:[[clang::musttail]] return blk_624c79(c,a4,a0,a1,bud);
case 0x624c9b:[[clang::musttail]] return blk_624c9b(c,a4,a0,a1,bud);
case 0x624cad:[[clang::musttail]] return blk_624cad(c,a4,a0,a1,bud);
case 0x624d77:[[clang::musttail]] return blk_624d77(c,a4,a0,a1,bud);
case 0x624da8:[[clang::musttail]] return blk_624da8(c,a4,a0,a1,bud);
case 0x624db0:[[clang::musttail]] return blk_624db0(c,a4,a0,a1,bud);
case 0x624ddc:[[clang::musttail]] return blk_624ddc(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_624(Cpu& c){u8* R=c.regs.data();return ent_624(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
