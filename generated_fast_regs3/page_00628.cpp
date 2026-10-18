#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bacf0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_628722(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_628803(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6295a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62806b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62840d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6286ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6286dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_628755(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6287c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_628c56(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_628ef2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_628001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B628001:L628001:{bud-=31;NFSU2_TR(0x628001);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628003:{NFSU2_TR(0x628003);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62800a:{NFSU2_TR(0x62800a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62800e:{NFSU2_TR(0x62800e);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628012:{NFSU2_TR(0x628012);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628015:{NFSU2_TR(0x628015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628016:{NFSU2_TR(0x628016);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62801a:{NFSU2_TR(0x62801a);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62801d:{NFSU2_TR(0x62801d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62801f:{NFSU2_TR(0x62801f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628023:{NFSU2_TR(0x628023);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628026:{NFSU2_TR(0x628026);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628028:{NFSU2_TR(0x628028);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62802c:{NFSU2_TR(0x62802c);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62802f:{NFSU2_TR(0x62802f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628031:{NFSU2_TR(0x628031);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628038:{NFSU2_TR(0x628038);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62803c:{NFSU2_TR(0x62803c);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62803f:{NFSU2_TR(0x62803f);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628043:{NFSU2_TR(0x628043);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628046:{NFSU2_TR(0x628046);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628048:{NFSU2_TR(0x628048);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62804c:{NFSU2_TR(0x62804c);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62804f:{NFSU2_TR(0x62804f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628051:{NFSU2_TR(0x628051);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628055:{NFSU2_TR(0x628055);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628058:{NFSU2_TR(0x628058);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62805c:{NFSU2_TR(0x62805c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62805d:{NFSU2_TR(0x62805d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62805f:{NFSU2_TR(0x62805f);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628066:{NFSU2_TR(0x628066);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62806bull));
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
PN u32 blk_62806b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62806b:L62806b:{bud-=197;NFSU2_TR(0x62806b);
{u32 ea_=u32(r4(G+16)+u32(992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628072:{NFSU2_TR(0x628072);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628076:{NFSU2_TR(0x628076);
{u32 ea_=u32(r4(G+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62807d:{NFSU2_TR(0x62807d);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628081:{NFSU2_TR(0x628081);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628083:{NFSU2_TR(0x628083);
{u32 ea_=u32(r4(G+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62808a:{NFSU2_TR(0x62808a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62808e:{NFSU2_TR(0x62808e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628090:{NFSU2_TR(0x628090);
{u32 ea_=u32(r4(G+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628097:{NFSU2_TR(0x628097);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62809b:{NFSU2_TR(0x62809b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62809d:{NFSU2_TR(0x62809d);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6280a4:{NFSU2_TR(0x6280a4);
{u32 ea_=u32(r4(G+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280ab:{NFSU2_TR(0x6280ab);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280af:{NFSU2_TR(0x6280af);
{u32 ea_=u32(r4(G+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280b6:{NFSU2_TR(0x6280b6);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280ba:{NFSU2_TR(0x6280ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280bc:{NFSU2_TR(0x6280bc);
{u32 ea_=u32(r4(G+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280c3:{NFSU2_TR(0x6280c3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280c7:{NFSU2_TR(0x6280c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280c9:{NFSU2_TR(0x6280c9);
{u32 ea_=u32(r4(G+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280d0:{NFSU2_TR(0x6280d0);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280d4:{NFSU2_TR(0x6280d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280d6:{NFSU2_TR(0x6280d6);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6280dd:{NFSU2_TR(0x6280dd);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280e4:{NFSU2_TR(0x6280e4);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280e8:{NFSU2_TR(0x6280e8);
{u32 ea_=u32(r4(G+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280ef:{NFSU2_TR(0x6280ef);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280f3:{NFSU2_TR(0x6280f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280f5:{NFSU2_TR(0x6280f5);
{u32 ea_=u32(r4(G+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280fc:{NFSU2_TR(0x6280fc);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628100:{NFSU2_TR(0x628100);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628102:{NFSU2_TR(0x628102);
{u32 ea_=u32(r4(G+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628109:{NFSU2_TR(0x628109);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62810d:{NFSU2_TR(0x62810d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62810f:{NFSU2_TR(0x62810f);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628116:{NFSU2_TR(0x628116);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62811d:{NFSU2_TR(0x62811d);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628121:{NFSU2_TR(0x628121);
{u32 ea_=u32(r4(G+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628128:{NFSU2_TR(0x628128);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62812c:{NFSU2_TR(0x62812c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62812e:{NFSU2_TR(0x62812e);
{u32 ea_=u32(r4(G+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628135:{NFSU2_TR(0x628135);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628139:{NFSU2_TR(0x628139);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62813b:{NFSU2_TR(0x62813b);
{u32 ea_=u32(r4(G+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628142:{NFSU2_TR(0x628142);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628146:{NFSU2_TR(0x628146);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628148:{NFSU2_TR(0x628148);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62814f:{NFSU2_TR(0x62814f);
{u32 ea_=u32(r4(G+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628156:{NFSU2_TR(0x628156);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62815a:{NFSU2_TR(0x62815a);
{u32 ea_=u32(r4(G+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628161:{NFSU2_TR(0x628161);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628165:{NFSU2_TR(0x628165);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628167:{NFSU2_TR(0x628167);
{u32 ea_=u32(r4(G+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62816e:{NFSU2_TR(0x62816e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628172:{NFSU2_TR(0x628172);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628174:{NFSU2_TR(0x628174);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628178:{NFSU2_TR(0x628178);
{u32 ea_=u32(r4(G+16)+u32(992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62817f:{NFSU2_TR(0x62817f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628181:{NFSU2_TR(0x628181);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628188:{NFSU2_TR(0x628188);
{u32 ea_=u32(r4(G+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62818f:{NFSU2_TR(0x62818f);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628193:{NFSU2_TR(0x628193);
{u32 ea_=u32(r4(G+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62819a:{NFSU2_TR(0x62819a);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62819e:{NFSU2_TR(0x62819e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281a0:{NFSU2_TR(0x6281a0);
{u32 ea_=u32(r4(G+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281a7:{NFSU2_TR(0x6281a7);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281ab:{NFSU2_TR(0x6281ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281ad:{NFSU2_TR(0x6281ad);
{u32 ea_=u32(r4(G+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281b4:{NFSU2_TR(0x6281b4);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281b8:{NFSU2_TR(0x6281b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281ba:{NFSU2_TR(0x6281ba);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6281c1:{NFSU2_TR(0x6281c1);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281c8:{NFSU2_TR(0x6281c8);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281cc:{NFSU2_TR(0x6281cc);
{u32 ea_=u32(r4(G+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281d3:{NFSU2_TR(0x6281d3);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281d7:{NFSU2_TR(0x6281d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281d9:{NFSU2_TR(0x6281d9);
{u32 ea_=u32(r4(G+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281e0:{NFSU2_TR(0x6281e0);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281e4:{NFSU2_TR(0x6281e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281e6:{NFSU2_TR(0x6281e6);
{u32 ea_=u32(r4(G+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281ed:{NFSU2_TR(0x6281ed);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281f1:{NFSU2_TR(0x6281f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281f3:{NFSU2_TR(0x6281f3);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6281fa:{NFSU2_TR(0x6281fa);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628201:{NFSU2_TR(0x628201);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628205:{NFSU2_TR(0x628205);
{u32 ea_=u32(r4(G+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62820c:{NFSU2_TR(0x62820c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628210:{NFSU2_TR(0x628210);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628212:{NFSU2_TR(0x628212);
{u32 ea_=u32(r4(G+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628219:{NFSU2_TR(0x628219);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62821d:{NFSU2_TR(0x62821d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62821f:{NFSU2_TR(0x62821f);
{u32 ea_=u32(r4(G+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628226:{NFSU2_TR(0x628226);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62822a:{NFSU2_TR(0x62822a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62822c:{NFSU2_TR(0x62822c);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628233:{NFSU2_TR(0x628233);
{u32 ea_=u32(r4(G+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62823a:{NFSU2_TR(0x62823a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62823e:{NFSU2_TR(0x62823e);
{u32 ea_=u32(r4(G+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628245:{NFSU2_TR(0x628245);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628249:{NFSU2_TR(0x628249);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62824b:{NFSU2_TR(0x62824b);
{u32 ea_=u32(r4(G+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628252:{NFSU2_TR(0x628252);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628256:{NFSU2_TR(0x628256);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628258:{NFSU2_TR(0x628258);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62825c:{NFSU2_TR(0x62825c);
{u32 ea_=u32(r4(G+16)+u32(992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628263:{NFSU2_TR(0x628263);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628265:{NFSU2_TR(0x628265);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62826c:{NFSU2_TR(0x62826c);
{u32 ea_=u32(r4(G+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628273:{NFSU2_TR(0x628273);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628277:{NFSU2_TR(0x628277);
{u32 ea_=u32(r4(G+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62827e:{NFSU2_TR(0x62827e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628282:{NFSU2_TR(0x628282);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628284:{NFSU2_TR(0x628284);
{u32 ea_=u32(r4(G+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62828b:{NFSU2_TR(0x62828b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62828f:{NFSU2_TR(0x62828f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628291:{NFSU2_TR(0x628291);
{u32 ea_=u32(r4(G+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628298:{NFSU2_TR(0x628298);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62829c:{NFSU2_TR(0x62829c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62829e:{NFSU2_TR(0x62829e);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6282a5:{NFSU2_TR(0x6282a5);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282ac:{NFSU2_TR(0x6282ac);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282b0:{NFSU2_TR(0x6282b0);
{u32 ea_=u32(r4(G+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282b7:{NFSU2_TR(0x6282b7);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282bb:{NFSU2_TR(0x6282bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282bd:{NFSU2_TR(0x6282bd);
{u32 ea_=u32(r4(G+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282c4:{NFSU2_TR(0x6282c4);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282c8:{NFSU2_TR(0x6282c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282ca:{NFSU2_TR(0x6282ca);
{u32 ea_=u32(r4(G+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282d1:{NFSU2_TR(0x6282d1);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282d5:{NFSU2_TR(0x6282d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282d7:{NFSU2_TR(0x6282d7);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6282de:{NFSU2_TR(0x6282de);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282e5:{NFSU2_TR(0x6282e5);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282e9:{NFSU2_TR(0x6282e9);
{u32 ea_=u32(r4(G+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282f0:{NFSU2_TR(0x6282f0);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282f4:{NFSU2_TR(0x6282f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282f6:{NFSU2_TR(0x6282f6);
{u32 ea_=u32(r4(G+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282fd:{NFSU2_TR(0x6282fd);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628301:{NFSU2_TR(0x628301);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628303:{NFSU2_TR(0x628303);
{u32 ea_=u32(r4(G+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62830a:{NFSU2_TR(0x62830a);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62830e:{NFSU2_TR(0x62830e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628310:{NFSU2_TR(0x628310);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628317:{NFSU2_TR(0x628317);
{u32 ea_=u32(r4(G+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62831e:{NFSU2_TR(0x62831e);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628322:{NFSU2_TR(0x628322);
{u32 ea_=u32(r4(G+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628329:{NFSU2_TR(0x628329);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62832d:{NFSU2_TR(0x62832d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62832f:{NFSU2_TR(0x62832f);
{u32 ea_=u32(r4(G+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628336:{NFSU2_TR(0x628336);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62833a:{NFSU2_TR(0x62833a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62833c:{NFSU2_TR(0x62833c);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628340:{NFSU2_TR(0x628340);
{u32 ea_=u32(r4(G+16)+u32(992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628347:{NFSU2_TR(0x628347);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628349:{NFSU2_TR(0x628349);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B628350:{NFSU2_TR(0x628350);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628351:{NFSU2_TR(0x628351);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628355:{NFSU2_TR(0x628355);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62835c:{NFSU2_TR(0x62835c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62835d:{NFSU2_TR(0x62835d);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628364:{NFSU2_TR(0x628364);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628368:{NFSU2_TR(0x628368);
{u32 ea_=u32(r4(G+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62836f:{NFSU2_TR(0x62836f);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628373:{NFSU2_TR(0x628373);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628375:{NFSU2_TR(0x628375);
{u32 ea_=u32(r4(G+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62837c:{NFSU2_TR(0x62837c);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628380:{NFSU2_TR(0x628380);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628382:{NFSU2_TR(0x628382);
{u32 ea_=u32(r4(G+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628389:{NFSU2_TR(0x628389);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62838d:{NFSU2_TR(0x62838d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62838f:{NFSU2_TR(0x62838f);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628396:{NFSU2_TR(0x628396);
{u32 ea_=u32(r4(G+16)+u32(1056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62839d:{NFSU2_TR(0x62839d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283a1:{NFSU2_TR(0x6283a1);
{u32 ea_=u32(r4(G+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283a8:{NFSU2_TR(0x6283a8);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283ac:{NFSU2_TR(0x6283ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283ae:{NFSU2_TR(0x6283ae);
{u32 ea_=u32(r4(G+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283b5:{NFSU2_TR(0x6283b5);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283b9:{NFSU2_TR(0x6283b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283bb:{NFSU2_TR(0x6283bb);
{u32 ea_=u32(r4(G+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283c2:{NFSU2_TR(0x6283c2);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283c6:{NFSU2_TR(0x6283c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283c8:{NFSU2_TR(0x6283c8);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6283cf:{NFSU2_TR(0x6283cf);
{u32 ea_=u32(r4(G+16)+u32(1060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283d6:{NFSU2_TR(0x6283d6);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283da:{NFSU2_TR(0x6283da);
{u32 ea_=u32(r4(G+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283e1:{NFSU2_TR(0x6283e1);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283e5:{NFSU2_TR(0x6283e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283e7:{NFSU2_TR(0x6283e7);
{u32 ea_=u32(r4(G+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283ee:{NFSU2_TR(0x6283ee);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283f2:{NFSU2_TR(0x6283f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283f4:{NFSU2_TR(0x6283f4);
{u32 ea_=u32(r4(G+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283fb:{NFSU2_TR(0x6283fb);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283ff:{NFSU2_TR(0x6283ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628401:{NFSU2_TR(0x628401);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628408:{NFSU2_TR(0x628408);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62840dull));
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
PN u32 blk_62840d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62840d:L62840d:{bud-=197;NFSU2_TR(0x62840d);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628411:{NFSU2_TR(0x628411);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628414:{NFSU2_TR(0x628414);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628418:{NFSU2_TR(0x628418);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62841b:{NFSU2_TR(0x62841b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62841d:{NFSU2_TR(0x62841d);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628421:{NFSU2_TR(0x628421);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628423:{NFSU2_TR(0x628423);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628425:{NFSU2_TR(0x628425);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628429:{NFSU2_TR(0x628429);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62842c:{NFSU2_TR(0x62842c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62842e:{NFSU2_TR(0x62842e);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628435:{NFSU2_TR(0x628435);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628439:{NFSU2_TR(0x628439);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62843c:{NFSU2_TR(0x62843c);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628440:{NFSU2_TR(0x628440);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628443:{NFSU2_TR(0x628443);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628445:{NFSU2_TR(0x628445);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628449:{NFSU2_TR(0x628449);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62844c:{NFSU2_TR(0x62844c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62844e:{NFSU2_TR(0x62844e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628452:{NFSU2_TR(0x628452);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628455:{NFSU2_TR(0x628455);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628457:{NFSU2_TR(0x628457);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62845e:{NFSU2_TR(0x62845e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628462:{NFSU2_TR(0x628462);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628465:{NFSU2_TR(0x628465);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628469:{NFSU2_TR(0x628469);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62846c:{NFSU2_TR(0x62846c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62846e:{NFSU2_TR(0x62846e);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628472:{NFSU2_TR(0x628472);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628475:{NFSU2_TR(0x628475);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628477:{NFSU2_TR(0x628477);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62847b:{NFSU2_TR(0x62847b);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62847e:{NFSU2_TR(0x62847e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628480:{NFSU2_TR(0x628480);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628487:{NFSU2_TR(0x628487);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62848b:{NFSU2_TR(0x62848b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62848e:{NFSU2_TR(0x62848e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628492:{NFSU2_TR(0x628492);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628495:{NFSU2_TR(0x628495);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628497:{NFSU2_TR(0x628497);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62849b:{NFSU2_TR(0x62849b);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62849e:{NFSU2_TR(0x62849e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284a0:{NFSU2_TR(0x6284a0);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284a4:{NFSU2_TR(0x6284a4);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284a7:{NFSU2_TR(0x6284a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284a9:{NFSU2_TR(0x6284a9);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6284b0:{NFSU2_TR(0x6284b0);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284b4:{NFSU2_TR(0x6284b4);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284b7:{NFSU2_TR(0x6284b7);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284bb:{NFSU2_TR(0x6284bb);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284be:{NFSU2_TR(0x6284be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284c0:{NFSU2_TR(0x6284c0);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284c4:{NFSU2_TR(0x6284c4);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284c7:{NFSU2_TR(0x6284c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284c9:{NFSU2_TR(0x6284c9);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284cd:{NFSU2_TR(0x6284cd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284cf:{NFSU2_TR(0x6284cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284d1:{NFSU2_TR(0x6284d1);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6284d8:{NFSU2_TR(0x6284d8);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284dc:{NFSU2_TR(0x6284dc);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284df:{NFSU2_TR(0x6284df);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284e3:{NFSU2_TR(0x6284e3);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284e6:{NFSU2_TR(0x6284e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284e8:{NFSU2_TR(0x6284e8);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284ec:{NFSU2_TR(0x6284ec);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284ef:{NFSU2_TR(0x6284ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284f1:{NFSU2_TR(0x6284f1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284f5:{NFSU2_TR(0x6284f5);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284f8:{NFSU2_TR(0x6284f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284fa:{NFSU2_TR(0x6284fa);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628501:{NFSU2_TR(0x628501);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628505:{NFSU2_TR(0x628505);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628508:{NFSU2_TR(0x628508);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62850c:{NFSU2_TR(0x62850c);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62850f:{NFSU2_TR(0x62850f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628511:{NFSU2_TR(0x628511);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628515:{NFSU2_TR(0x628515);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628518:{NFSU2_TR(0x628518);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62851a:{NFSU2_TR(0x62851a);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62851e:{NFSU2_TR(0x62851e);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628521:{NFSU2_TR(0x628521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628523:{NFSU2_TR(0x628523);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62852a:{NFSU2_TR(0x62852a);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62852e:{NFSU2_TR(0x62852e);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628531:{NFSU2_TR(0x628531);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628535:{NFSU2_TR(0x628535);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628538:{NFSU2_TR(0x628538);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62853a:{NFSU2_TR(0x62853a);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62853e:{NFSU2_TR(0x62853e);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628541:{NFSU2_TR(0x628541);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628543:{NFSU2_TR(0x628543);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628547:{NFSU2_TR(0x628547);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62854a:{NFSU2_TR(0x62854a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62854c:{NFSU2_TR(0x62854c);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628553:{NFSU2_TR(0x628553);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628557:{NFSU2_TR(0x628557);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62855a:{NFSU2_TR(0x62855a);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62855e:{NFSU2_TR(0x62855e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628561:{NFSU2_TR(0x628561);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628563:{NFSU2_TR(0x628563);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628567:{NFSU2_TR(0x628567);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62856a:{NFSU2_TR(0x62856a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62856c:{NFSU2_TR(0x62856c);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628570:{NFSU2_TR(0x628570);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628572:{NFSU2_TR(0x628572);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628574:{NFSU2_TR(0x628574);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62857b:{NFSU2_TR(0x62857b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62857f:{NFSU2_TR(0x62857f);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628582:{NFSU2_TR(0x628582);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628586:{NFSU2_TR(0x628586);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628589:{NFSU2_TR(0x628589);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62858b:{NFSU2_TR(0x62858b);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62858f:{NFSU2_TR(0x62858f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628592:{NFSU2_TR(0x628592);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628594:{NFSU2_TR(0x628594);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628598:{NFSU2_TR(0x628598);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62859b:{NFSU2_TR(0x62859b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62859d:{NFSU2_TR(0x62859d);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6285a4:{NFSU2_TR(0x6285a4);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285a8:{NFSU2_TR(0x6285a8);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285ab:{NFSU2_TR(0x6285ab);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285af:{NFSU2_TR(0x6285af);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285b2:{NFSU2_TR(0x6285b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285b4:{NFSU2_TR(0x6285b4);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285b8:{NFSU2_TR(0x6285b8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285bb:{NFSU2_TR(0x6285bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285bd:{NFSU2_TR(0x6285bd);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285c1:{NFSU2_TR(0x6285c1);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285c4:{NFSU2_TR(0x6285c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285c6:{NFSU2_TR(0x6285c6);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6285cd:{NFSU2_TR(0x6285cd);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285d1:{NFSU2_TR(0x6285d1);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285d4:{NFSU2_TR(0x6285d4);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285d8:{NFSU2_TR(0x6285d8);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285db:{NFSU2_TR(0x6285db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285dd:{NFSU2_TR(0x6285dd);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285e1:{NFSU2_TR(0x6285e1);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285e4:{NFSU2_TR(0x6285e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285e6:{NFSU2_TR(0x6285e6);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285ea:{NFSU2_TR(0x6285ea);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285ed:{NFSU2_TR(0x6285ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6285f4:{NFSU2_TR(0x6285f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6285fb:{NFSU2_TR(0x6285fb);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6285fc:{NFSU2_TR(0x6285fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285fe:{NFSU2_TR(0x6285fe);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6285ff:{NFSU2_TR(0x6285ff);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628606:{NFSU2_TR(0x628606);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62860a:{NFSU2_TR(0x62860a);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62860d:{NFSU2_TR(0x62860d);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628611:{NFSU2_TR(0x628611);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628614:{NFSU2_TR(0x628614);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628616:{NFSU2_TR(0x628616);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62861a:{NFSU2_TR(0x62861a);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62861d:{NFSU2_TR(0x62861d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62861f:{NFSU2_TR(0x62861f);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628623:{NFSU2_TR(0x628623);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628625:{NFSU2_TR(0x628625);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628627:{NFSU2_TR(0x628627);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62862e:{NFSU2_TR(0x62862e);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628632:{NFSU2_TR(0x628632);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628635:{NFSU2_TR(0x628635);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628639:{NFSU2_TR(0x628639);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62863c:{NFSU2_TR(0x62863c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62863e:{NFSU2_TR(0x62863e);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628642:{NFSU2_TR(0x628642);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628645:{NFSU2_TR(0x628645);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628647:{NFSU2_TR(0x628647);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62864b:{NFSU2_TR(0x62864b);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62864e:{NFSU2_TR(0x62864e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628650:{NFSU2_TR(0x628650);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628657:{NFSU2_TR(0x628657);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62865b:{NFSU2_TR(0x62865b);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62865e:{NFSU2_TR(0x62865e);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628662:{NFSU2_TR(0x628662);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628665:{NFSU2_TR(0x628665);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628667:{NFSU2_TR(0x628667);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62866b:{NFSU2_TR(0x62866b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62866e:{NFSU2_TR(0x62866e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628670:{NFSU2_TR(0x628670);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628674:{NFSU2_TR(0x628674);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628677:{NFSU2_TR(0x628677);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628679:{NFSU2_TR(0x628679);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628680:{NFSU2_TR(0x628680);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628684:{NFSU2_TR(0x628684);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628687:{NFSU2_TR(0x628687);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62868b:{NFSU2_TR(0x62868b);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62868e:{NFSU2_TR(0x62868e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628690:{NFSU2_TR(0x628690);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628694:{NFSU2_TR(0x628694);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628697:{NFSU2_TR(0x628697);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628699:{NFSU2_TR(0x628699);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62869d:{NFSU2_TR(0x62869d);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6286a0:{NFSU2_TR(0x6286a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6286a2:{NFSU2_TR(0x6286a2);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6286a9:{NFSU2_TR(0x6286a9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6286aeull));
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
PN u32 blk_6286ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6286ae:L6286ae:{bud-=12;NFSU2_TR(0x6286ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6286b1:{NFSU2_TR(0x6286b1);
u8 U[4];
w4(U+0,u32(u32(u32(0xb40ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6286b8:{NFSU2_TR(0x6286b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6286b9:{NFSU2_TR(0x6286b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6286c0:{NFSU2_TR(0x6286c0);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6286c1:{NFSU2_TR(0x6286c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6286c8:{NFSU2_TR(0x6286c8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6286c9:{NFSU2_TR(0x6286c9);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6286ce:{NFSU2_TR(0x6286ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6286d5:{NFSU2_TR(0x6286d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6286d6:{NFSU2_TR(0x6286d6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6286d7:{NFSU2_TR(0x6286d7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6286dcull));
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
PN u32 blk_6286dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6286dc:L6286dc:{bud-=4;NFSU2_TR(0x6286dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6286e3:{NFSU2_TR(0x6286e3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x38ull))));
}
B6286e6:{NFSU2_TR(0x6286e6);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6286e8:{NFSU2_TR(0x6286e8);
if(r1(F+6)){{[[clang::musttail]] return blk_628722(ARGS);}}
}
B6286ea:L6286ea:{bud-=15;NFSU2_TR(0x6286ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6286f1:{NFSU2_TR(0x6286f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6286f8:{NFSU2_TR(0x6286f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6286fb:{NFSU2_TR(0x6286fb);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B6286fd:{NFSU2_TR(0x6286fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B628704:{NFSU2_TR(0x628704);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628706:{NFSU2_TR(0x628706);
w4(G+4,u32(u32(r4(G+4))|u32(r4(G+0))));
}
B628708:{NFSU2_TR(0x628708);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62870f:{NFSU2_TR(0x62870f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628710:{NFSU2_TR(0x628710);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B628717:{NFSU2_TR(0x628717);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628718:{NFSU2_TR(0x628718);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628719:{NFSU2_TR(0x628719);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62871a:{NFSU2_TR(0x62871a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62871d:{NFSU2_TR(0x62871d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x628722ull));
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
PN u32 blk_628722(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B628722:L628722:{bud-=3;NFSU2_TR(0x628722);
u8 U[5];
w4(U+0,u32(u32(u32(0xf3ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B628729:{NFSU2_TR(0x628729);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B62872b:{NFSU2_TR(0x62872b);
if(r1(F+6)){{[[clang::musttail]] return blk_6295a0(ARGS);}}
}
B628731:L628731:{bud-=3;NFSU2_TR(0x628731);
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
B62873a:{NFSU2_TR(0x62873a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B628741:{NFSU2_TR(0x628741);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_628803(ARGS);}}
}
B628747:L628747:{bud-=4;NFSU2_TR(0x628747);
u8 U[4];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62874e:{NFSU2_TR(0x62874e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62874f:{NFSU2_TR(0x62874f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628750:{NFSU2_TR(0x628750);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x628755ull));
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
PN u32 blk_628755(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B628755:L628755:{bud-=17;NFSU2_TR(0x628755);
u8 U[8];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62875c:{NFSU2_TR(0x62875c);
u8 U[8];
w4(U+0,u32(u32(u32(0x94cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B628763:{NFSU2_TR(0x628763);
u8 U[8];
w4(U+0,u32(u32(u32(0x950ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62876a:{NFSU2_TR(0x62876a);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B628771:{NFSU2_TR(0x628771);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B628778:{NFSU2_TR(0x628778);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62877f:{NFSU2_TR(0x62877f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628780:{NFSU2_TR(0x628780);
u8 U[4];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B628787:{NFSU2_TR(0x628787);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62878e:{NFSU2_TR(0x62878e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62878f:{NFSU2_TR(0x62878f);
u8 U[4];
w4(U+0,u32(u32(u32(0x920ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628796:{NFSU2_TR(0x628796);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628797:{NFSU2_TR(0x628797);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287a2:{NFSU2_TR(0x6287a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x958ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287ad:{NFSU2_TR(0x6287ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x95cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287b8:{NFSU2_TR(0x6287b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x960ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287c3:{NFSU2_TR(0x6287c3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6287c8ull));
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
PN u32 blk_6287c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6287c8:L6287c8:{bud-=9;NFSU2_TR(0x6287c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6287cf:{NFSU2_TR(0x6287cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6287d6:{NFSU2_TR(0x6287d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6287dd:{NFSU2_TR(0x6287dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6287e4:{NFSU2_TR(0x6287e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x924ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6287eb:{NFSU2_TR(0x6287eb);
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
B6287ee:{NFSU2_TR(0x6287ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x944ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6287f5:{NFSU2_TR(0x6287f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6287fc:{NFSU2_TR(0x6287fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_628803(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_628803(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B628803:L628803:{bud-=197;NFSU2_TR(0x628803);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62880a:{NFSU2_TR(0x62880a);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628811:{NFSU2_TR(0x628811);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628818:{NFSU2_TR(0x628818);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62881f:{NFSU2_TR(0x62881f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628821:{NFSU2_TR(0x628821);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628828:{NFSU2_TR(0x628828);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62882f:{NFSU2_TR(0x62882f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628831:{NFSU2_TR(0x628831);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628838:{NFSU2_TR(0x628838);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62883f:{NFSU2_TR(0x62883f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628841:{NFSU2_TR(0x628841);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628845:{NFSU2_TR(0x628845);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62884c:{NFSU2_TR(0x62884c);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628853:{NFSU2_TR(0x628853);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62885a:{NFSU2_TR(0x62885a);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628861:{NFSU2_TR(0x628861);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628863:{NFSU2_TR(0x628863);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62886a:{NFSU2_TR(0x62886a);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628871:{NFSU2_TR(0x628871);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628873:{NFSU2_TR(0x628873);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62887a:{NFSU2_TR(0x62887a);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628881:{NFSU2_TR(0x628881);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628883:{NFSU2_TR(0x628883);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628887:{NFSU2_TR(0x628887);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62888e:{NFSU2_TR(0x62888e);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628895:{NFSU2_TR(0x628895);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62889c:{NFSU2_TR(0x62889c);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288a3:{NFSU2_TR(0x6288a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288a5:{NFSU2_TR(0x6288a5);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288ac:{NFSU2_TR(0x6288ac);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288b3:{NFSU2_TR(0x6288b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288b5:{NFSU2_TR(0x6288b5);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288bc:{NFSU2_TR(0x6288bc);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288c3:{NFSU2_TR(0x6288c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288c5:{NFSU2_TR(0x6288c5);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6288c9:{NFSU2_TR(0x6288c9);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288d0:{NFSU2_TR(0x6288d0);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288d7:{NFSU2_TR(0x6288d7);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288de:{NFSU2_TR(0x6288de);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288e5:{NFSU2_TR(0x6288e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288e7:{NFSU2_TR(0x6288e7);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288ee:{NFSU2_TR(0x6288ee);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288f5:{NFSU2_TR(0x6288f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288f7:{NFSU2_TR(0x6288f7);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288fe:{NFSU2_TR(0x6288fe);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628905:{NFSU2_TR(0x628905);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628907:{NFSU2_TR(0x628907);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62890b:{NFSU2_TR(0x62890b);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628912:{NFSU2_TR(0x628912);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628919:{NFSU2_TR(0x628919);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628920:{NFSU2_TR(0x628920);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628927:{NFSU2_TR(0x628927);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628929:{NFSU2_TR(0x628929);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628930:{NFSU2_TR(0x628930);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628937:{NFSU2_TR(0x628937);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628939:{NFSU2_TR(0x628939);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628940:{NFSU2_TR(0x628940);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628947:{NFSU2_TR(0x628947);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628949:{NFSU2_TR(0x628949);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628950:{NFSU2_TR(0x628950);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628957:{NFSU2_TR(0x628957);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62895e:{NFSU2_TR(0x62895e);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628965:{NFSU2_TR(0x628965);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62896c:{NFSU2_TR(0x62896c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62896e:{NFSU2_TR(0x62896e);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628975:{NFSU2_TR(0x628975);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62897c:{NFSU2_TR(0x62897c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62897e:{NFSU2_TR(0x62897e);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628985:{NFSU2_TR(0x628985);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62898c:{NFSU2_TR(0x62898c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62898e:{NFSU2_TR(0x62898e);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628995:{NFSU2_TR(0x628995);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62899c:{NFSU2_TR(0x62899c);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289a3:{NFSU2_TR(0x6289a3);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289aa:{NFSU2_TR(0x6289aa);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289b1:{NFSU2_TR(0x6289b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289b3:{NFSU2_TR(0x6289b3);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ba:{NFSU2_TR(0x6289ba);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289c1:{NFSU2_TR(0x6289c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289c3:{NFSU2_TR(0x6289c3);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ca:{NFSU2_TR(0x6289ca);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289d1:{NFSU2_TR(0x6289d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289d3:{NFSU2_TR(0x6289d3);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6289da:{NFSU2_TR(0x6289da);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289e1:{NFSU2_TR(0x6289e1);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289e8:{NFSU2_TR(0x6289e8);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ef:{NFSU2_TR(0x6289ef);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289f6:{NFSU2_TR(0x6289f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289f8:{NFSU2_TR(0x6289f8);
{u32 ea_=u32(r4(G+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ff:{NFSU2_TR(0x6289ff);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a06:{NFSU2_TR(0x628a06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a08:{NFSU2_TR(0x628a08);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a0f:{NFSU2_TR(0x628a0f);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a16:{NFSU2_TR(0x628a16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a18:{NFSU2_TR(0x628a18);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628a1f:{NFSU2_TR(0x628a1f);
{u32 ea_=u32(r4(G+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a26:{NFSU2_TR(0x628a26);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a2d:{NFSU2_TR(0x628a2d);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a34:{NFSU2_TR(0x628a34);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a3b:{NFSU2_TR(0x628a3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a3d:{NFSU2_TR(0x628a3d);
{u32 ea_=u32(r4(G+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a44:{NFSU2_TR(0x628a44);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a4b:{NFSU2_TR(0x628a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a4d:{NFSU2_TR(0x628a4d);
{u32 ea_=u32(r4(G+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a54:{NFSU2_TR(0x628a54);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a5b:{NFSU2_TR(0x628a5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a5d:{NFSU2_TR(0x628a5d);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628a64:{NFSU2_TR(0x628a64);
{u32 ea_=u32(r4(G+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a6b:{NFSU2_TR(0x628a6b);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a72:{NFSU2_TR(0x628a72);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a79:{NFSU2_TR(0x628a79);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a80:{NFSU2_TR(0x628a80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a82:{NFSU2_TR(0x628a82);
{u32 ea_=u32(r4(G+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a89:{NFSU2_TR(0x628a89);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a90:{NFSU2_TR(0x628a90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a92:{NFSU2_TR(0x628a92);
{u32 ea_=u32(r4(G+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a99:{NFSU2_TR(0x628a99);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628aa0:{NFSU2_TR(0x628aa0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628aa2:{NFSU2_TR(0x628aa2);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628aa9:{NFSU2_TR(0x628aa9);
{u32 ea_=u32(r4(G+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ab0:{NFSU2_TR(0x628ab0);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ab7:{NFSU2_TR(0x628ab7);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628abe:{NFSU2_TR(0x628abe);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ac5:{NFSU2_TR(0x628ac5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ac7:{NFSU2_TR(0x628ac7);
{u32 ea_=u32(r4(G+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ace:{NFSU2_TR(0x628ace);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ad5:{NFSU2_TR(0x628ad5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ad7:{NFSU2_TR(0x628ad7);
{u32 ea_=u32(r4(G+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ade:{NFSU2_TR(0x628ade);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ae5:{NFSU2_TR(0x628ae5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ae7:{NFSU2_TR(0x628ae7);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628aee:{NFSU2_TR(0x628aee);
{u32 ea_=u32(r4(G+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628af5:{NFSU2_TR(0x628af5);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628afc:{NFSU2_TR(0x628afc);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b03:{NFSU2_TR(0x628b03);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b0a:{NFSU2_TR(0x628b0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b0c:{NFSU2_TR(0x628b0c);
{u32 ea_=u32(r4(G+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b13:{NFSU2_TR(0x628b13);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b1a:{NFSU2_TR(0x628b1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b1c:{NFSU2_TR(0x628b1c);
{u32 ea_=u32(r4(G+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b23:{NFSU2_TR(0x628b23);
{u32 ea_=u32(r4(G+16)+u32(268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b2a:{NFSU2_TR(0x628b2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b2c:{NFSU2_TR(0x628b2c);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628b33:{NFSU2_TR(0x628b33);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b3a:{NFSU2_TR(0x628b3a);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b41:{NFSU2_TR(0x628b41);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b48:{NFSU2_TR(0x628b48);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b4f:{NFSU2_TR(0x628b4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b51:{NFSU2_TR(0x628b51);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b58:{NFSU2_TR(0x628b58);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b5f:{NFSU2_TR(0x628b5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b61:{NFSU2_TR(0x628b61);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b68:{NFSU2_TR(0x628b68);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b6f:{NFSU2_TR(0x628b6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b71:{NFSU2_TR(0x628b71);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628b78:{NFSU2_TR(0x628b78);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b7f:{NFSU2_TR(0x628b7f);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b86:{NFSU2_TR(0x628b86);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b8d:{NFSU2_TR(0x628b8d);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b94:{NFSU2_TR(0x628b94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b96:{NFSU2_TR(0x628b96);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b9d:{NFSU2_TR(0x628b9d);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ba4:{NFSU2_TR(0x628ba4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ba6:{NFSU2_TR(0x628ba6);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bad:{NFSU2_TR(0x628bad);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bb4:{NFSU2_TR(0x628bb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628bb6:{NFSU2_TR(0x628bb6);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628bbd:{NFSU2_TR(0x628bbd);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bc4:{NFSU2_TR(0x628bc4);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bcb:{NFSU2_TR(0x628bcb);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bd2:{NFSU2_TR(0x628bd2);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bd9:{NFSU2_TR(0x628bd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628bdb:{NFSU2_TR(0x628bdb);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628be2:{NFSU2_TR(0x628be2);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628be9:{NFSU2_TR(0x628be9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628beb:{NFSU2_TR(0x628beb);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bf2:{NFSU2_TR(0x628bf2);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bf9:{NFSU2_TR(0x628bf9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628bfb:{NFSU2_TR(0x628bfb);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628c02:{NFSU2_TR(0x628c02);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c09:{NFSU2_TR(0x628c09);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c10:{NFSU2_TR(0x628c10);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c17:{NFSU2_TR(0x628c17);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B628c1b:{NFSU2_TR(0x628c1b);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c22:{NFSU2_TR(0x628c22);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628c23:{NFSU2_TR(0x628c23);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628c27:{NFSU2_TR(0x628c27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628c28:{NFSU2_TR(0x628c28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c2a:{NFSU2_TR(0x628c2a);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c31:{NFSU2_TR(0x628c31);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c38:{NFSU2_TR(0x628c38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c3a:{NFSU2_TR(0x628c3a);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c41:{NFSU2_TR(0x628c41);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c48:{NFSU2_TR(0x628c48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c4a:{NFSU2_TR(0x628c4a);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628c51:{NFSU2_TR(0x628c51);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x628c56ull));
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
PN u32 blk_628c56(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B628c56:L628c56:{bud-=198;NFSU2_TR(0x628c56);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B628c5d:{NFSU2_TR(0x628c5d);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c61:{NFSU2_TR(0x628c61);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c64:{NFSU2_TR(0x628c64);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c68:{NFSU2_TR(0x628c68);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c6b:{NFSU2_TR(0x628c6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c6d:{NFSU2_TR(0x628c6d);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c71:{NFSU2_TR(0x628c71);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c73:{NFSU2_TR(0x628c73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c75:{NFSU2_TR(0x628c75);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c79:{NFSU2_TR(0x628c79);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c7c:{NFSU2_TR(0x628c7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c7e:{NFSU2_TR(0x628c7e);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628c82:{NFSU2_TR(0x628c82);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c86:{NFSU2_TR(0x628c86);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c89:{NFSU2_TR(0x628c89);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c8d:{NFSU2_TR(0x628c8d);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c90:{NFSU2_TR(0x628c90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c92:{NFSU2_TR(0x628c92);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c96:{NFSU2_TR(0x628c96);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c99:{NFSU2_TR(0x628c99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c9b:{NFSU2_TR(0x628c9b);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c9f:{NFSU2_TR(0x628c9f);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ca2:{NFSU2_TR(0x628ca2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ca4:{NFSU2_TR(0x628ca4);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628ca8:{NFSU2_TR(0x628ca8);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cac:{NFSU2_TR(0x628cac);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628caf:{NFSU2_TR(0x628caf);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cb3:{NFSU2_TR(0x628cb3);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cb6:{NFSU2_TR(0x628cb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cb8:{NFSU2_TR(0x628cb8);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cbc:{NFSU2_TR(0x628cbc);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cbf:{NFSU2_TR(0x628cbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cc1:{NFSU2_TR(0x628cc1);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cc5:{NFSU2_TR(0x628cc5);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cc8:{NFSU2_TR(0x628cc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cca:{NFSU2_TR(0x628cca);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628cd1:{NFSU2_TR(0x628cd1);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cd5:{NFSU2_TR(0x628cd5);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cd8:{NFSU2_TR(0x628cd8);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cdc:{NFSU2_TR(0x628cdc);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cdf:{NFSU2_TR(0x628cdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ce1:{NFSU2_TR(0x628ce1);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ce5:{NFSU2_TR(0x628ce5);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ce8:{NFSU2_TR(0x628ce8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cea:{NFSU2_TR(0x628cea);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cee:{NFSU2_TR(0x628cee);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cf1:{NFSU2_TR(0x628cf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cf3:{NFSU2_TR(0x628cf3);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628cfa:{NFSU2_TR(0x628cfa);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cfe:{NFSU2_TR(0x628cfe);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d01:{NFSU2_TR(0x628d01);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d05:{NFSU2_TR(0x628d05);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d08:{NFSU2_TR(0x628d08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d0a:{NFSU2_TR(0x628d0a);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d0e:{NFSU2_TR(0x628d0e);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d11:{NFSU2_TR(0x628d11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d13:{NFSU2_TR(0x628d13);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d17:{NFSU2_TR(0x628d17);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d19:{NFSU2_TR(0x628d19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d1b:{NFSU2_TR(0x628d1b);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d22:{NFSU2_TR(0x628d22);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d26:{NFSU2_TR(0x628d26);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d29:{NFSU2_TR(0x628d29);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d2d:{NFSU2_TR(0x628d2d);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d30:{NFSU2_TR(0x628d30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d32:{NFSU2_TR(0x628d32);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d36:{NFSU2_TR(0x628d36);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d39:{NFSU2_TR(0x628d39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d3b:{NFSU2_TR(0x628d3b);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d3f:{NFSU2_TR(0x628d3f);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d42:{NFSU2_TR(0x628d42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d44:{NFSU2_TR(0x628d44);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d4b:{NFSU2_TR(0x628d4b);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d4f:{NFSU2_TR(0x628d4f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d52:{NFSU2_TR(0x628d52);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d56:{NFSU2_TR(0x628d56);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d59:{NFSU2_TR(0x628d59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d5b:{NFSU2_TR(0x628d5b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d5f:{NFSU2_TR(0x628d5f);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d62:{NFSU2_TR(0x628d62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d64:{NFSU2_TR(0x628d64);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d68:{NFSU2_TR(0x628d68);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d6b:{NFSU2_TR(0x628d6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d6d:{NFSU2_TR(0x628d6d);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d74:{NFSU2_TR(0x628d74);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d78:{NFSU2_TR(0x628d78);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d7b:{NFSU2_TR(0x628d7b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d7f:{NFSU2_TR(0x628d7f);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d82:{NFSU2_TR(0x628d82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d84:{NFSU2_TR(0x628d84);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d88:{NFSU2_TR(0x628d88);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d8b:{NFSU2_TR(0x628d8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d8d:{NFSU2_TR(0x628d8d);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d91:{NFSU2_TR(0x628d91);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d94:{NFSU2_TR(0x628d94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d96:{NFSU2_TR(0x628d96);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d9d:{NFSU2_TR(0x628d9d);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628da1:{NFSU2_TR(0x628da1);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628da4:{NFSU2_TR(0x628da4);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628da8:{NFSU2_TR(0x628da8);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dab:{NFSU2_TR(0x628dab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dad:{NFSU2_TR(0x628dad);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628db1:{NFSU2_TR(0x628db1);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628db4:{NFSU2_TR(0x628db4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628db6:{NFSU2_TR(0x628db6);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dba:{NFSU2_TR(0x628dba);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dbc:{NFSU2_TR(0x628dbc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dbe:{NFSU2_TR(0x628dbe);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628dc5:{NFSU2_TR(0x628dc5);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dc9:{NFSU2_TR(0x628dc9);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dcc:{NFSU2_TR(0x628dcc);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dd0:{NFSU2_TR(0x628dd0);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dd3:{NFSU2_TR(0x628dd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dd5:{NFSU2_TR(0x628dd5);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dd9:{NFSU2_TR(0x628dd9);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ddc:{NFSU2_TR(0x628ddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dde:{NFSU2_TR(0x628dde);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628de2:{NFSU2_TR(0x628de2);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628de5:{NFSU2_TR(0x628de5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628de7:{NFSU2_TR(0x628de7);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628dee:{NFSU2_TR(0x628dee);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628df2:{NFSU2_TR(0x628df2);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628df5:{NFSU2_TR(0x628df5);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628df9:{NFSU2_TR(0x628df9);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dfc:{NFSU2_TR(0x628dfc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dfe:{NFSU2_TR(0x628dfe);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e02:{NFSU2_TR(0x628e02);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e05:{NFSU2_TR(0x628e05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e07:{NFSU2_TR(0x628e07);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e0b:{NFSU2_TR(0x628e0b);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e0e:{NFSU2_TR(0x628e0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e10:{NFSU2_TR(0x628e10);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e17:{NFSU2_TR(0x628e17);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e1b:{NFSU2_TR(0x628e1b);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e1e:{NFSU2_TR(0x628e1e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e22:{NFSU2_TR(0x628e22);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e25:{NFSU2_TR(0x628e25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e27:{NFSU2_TR(0x628e27);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e2b:{NFSU2_TR(0x628e2b);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e2e:{NFSU2_TR(0x628e2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e30:{NFSU2_TR(0x628e30);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e34:{NFSU2_TR(0x628e34);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e37:{NFSU2_TR(0x628e37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e39:{NFSU2_TR(0x628e39);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e40:{NFSU2_TR(0x628e40);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e44:{NFSU2_TR(0x628e44);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e47:{NFSU2_TR(0x628e47);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e4b:{NFSU2_TR(0x628e4b);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e4e:{NFSU2_TR(0x628e4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e50:{NFSU2_TR(0x628e50);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e54:{NFSU2_TR(0x628e54);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e57:{NFSU2_TR(0x628e57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e59:{NFSU2_TR(0x628e59);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e5d:{NFSU2_TR(0x628e5d);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e5f:{NFSU2_TR(0x628e5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e61:{NFSU2_TR(0x628e61);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e68:{NFSU2_TR(0x628e68);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e6c:{NFSU2_TR(0x628e6c);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e6f:{NFSU2_TR(0x628e6f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e73:{NFSU2_TR(0x628e73);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e76:{NFSU2_TR(0x628e76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e78:{NFSU2_TR(0x628e78);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e7c:{NFSU2_TR(0x628e7c);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e7f:{NFSU2_TR(0x628e7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e81:{NFSU2_TR(0x628e81);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e85:{NFSU2_TR(0x628e85);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e88:{NFSU2_TR(0x628e88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e8a:{NFSU2_TR(0x628e8a);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e91:{NFSU2_TR(0x628e91);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e95:{NFSU2_TR(0x628e95);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B628e99:{NFSU2_TR(0x628e99);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e9c:{NFSU2_TR(0x628e9c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ea0:{NFSU2_TR(0x628ea0);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ea3:{NFSU2_TR(0x628ea3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ea5:{NFSU2_TR(0x628ea5);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ea9:{NFSU2_TR(0x628ea9);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628eac:{NFSU2_TR(0x628eac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628eae:{NFSU2_TR(0x628eae);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628eb2:{NFSU2_TR(0x628eb2);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628eb5:{NFSU2_TR(0x628eb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628eb7:{NFSU2_TR(0x628eb7);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628ebe:{NFSU2_TR(0x628ebe);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ec2:{NFSU2_TR(0x628ec2);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ec5:{NFSU2_TR(0x628ec5);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ec9:{NFSU2_TR(0x628ec9);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ecc:{NFSU2_TR(0x628ecc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ece:{NFSU2_TR(0x628ece);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ed2:{NFSU2_TR(0x628ed2);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ed5:{NFSU2_TR(0x628ed5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ed7:{NFSU2_TR(0x628ed7);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628edb:{NFSU2_TR(0x628edb);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ede:{NFSU2_TR(0x628ede);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B628ee2:{NFSU2_TR(0x628ee2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628ee3:{NFSU2_TR(0x628ee3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B628ee4:{NFSU2_TR(0x628ee4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ee6:{NFSU2_TR(0x628ee6);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628eed:{NFSU2_TR(0x628eed);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x628ef2ull));
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
PN u32 blk_628ef2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B628ef2:L628ef2:{bud-=58;NFSU2_TR(0x628ef2);
{u32 ea_=u32(r4(G+16)+u32(1504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ef9:{NFSU2_TR(0x628ef9);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628efd:{NFSU2_TR(0x628efd);
{u32 ea_=u32(r4(G+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f04:{NFSU2_TR(0x628f04);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f08:{NFSU2_TR(0x628f08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f0a:{NFSU2_TR(0x628f0a);
{u32 ea_=u32(r4(G+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f11:{NFSU2_TR(0x628f11);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f15:{NFSU2_TR(0x628f15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f17:{NFSU2_TR(0x628f17);
{u32 ea_=u32(r4(G+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f1e:{NFSU2_TR(0x628f1e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f22:{NFSU2_TR(0x628f22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f24:{NFSU2_TR(0x628f24);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628f2b:{NFSU2_TR(0x628f2b);
{u32 ea_=u32(r4(G+16)+u32(1508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f32:{NFSU2_TR(0x628f32);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f36:{NFSU2_TR(0x628f36);
{u32 ea_=u32(r4(G+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f3d:{NFSU2_TR(0x628f3d);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f41:{NFSU2_TR(0x628f41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f43:{NFSU2_TR(0x628f43);
{u32 ea_=u32(r4(G+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f4a:{NFSU2_TR(0x628f4a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f4e:{NFSU2_TR(0x628f4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f50:{NFSU2_TR(0x628f50);
{u32 ea_=u32(r4(G+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f57:{NFSU2_TR(0x628f57);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f5b:{NFSU2_TR(0x628f5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f5d:{NFSU2_TR(0x628f5d);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628f64:{NFSU2_TR(0x628f64);
{u32 ea_=u32(r4(G+16)+u32(1512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f6b:{NFSU2_TR(0x628f6b);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f6f:{NFSU2_TR(0x628f6f);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f76:{NFSU2_TR(0x628f76);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f7a:{NFSU2_TR(0x628f7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f7c:{NFSU2_TR(0x628f7c);
{u32 ea_=u32(r4(G+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f83:{NFSU2_TR(0x628f83);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f87:{NFSU2_TR(0x628f87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f89:{NFSU2_TR(0x628f89);
{u32 ea_=u32(r4(G+16)+u32(1528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f90:{NFSU2_TR(0x628f90);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f94:{NFSU2_TR(0x628f94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f96:{NFSU2_TR(0x628f96);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628f9d:{NFSU2_TR(0x628f9d);
{u32 ea_=u32(r4(G+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fa4:{NFSU2_TR(0x628fa4);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fa8:{NFSU2_TR(0x628fa8);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628faf:{NFSU2_TR(0x628faf);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fb3:{NFSU2_TR(0x628fb3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fb5:{NFSU2_TR(0x628fb5);
{u32 ea_=u32(r4(G+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fbc:{NFSU2_TR(0x628fbc);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fc0:{NFSU2_TR(0x628fc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fc2:{NFSU2_TR(0x628fc2);
{u32 ea_=u32(r4(G+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fc9:{NFSU2_TR(0x628fc9);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fcd:{NFSU2_TR(0x628fcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fcf:{NFSU2_TR(0x628fcf);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628fd6:{NFSU2_TR(0x628fd6);
{u32 ea_=u32(r4(G+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fdd:{NFSU2_TR(0x628fdd);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fe1:{NFSU2_TR(0x628fe1);
{u32 ea_=u32(r4(G+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fe8:{NFSU2_TR(0x628fe8);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fec:{NFSU2_TR(0x628fec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fee:{NFSU2_TR(0x628fee);
{u32 ea_=u32(r4(G+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ff5:{NFSU2_TR(0x628ff5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ff9:{NFSU2_TR(0x628ff9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ffb:{NFSU2_TR(0x628ffb);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fff:{NFSU2_TR(0x628fff);
{u32 ea_=u32(r4(G+16)+u32(1504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{EXIT(0x629006u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_628(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x62806b:[[clang::musttail]] return blk_62806b(c,a4,a0,a1,bud);
case 0x62840d:[[clang::musttail]] return blk_62840d(c,a4,a0,a1,bud);
case 0x6286ae:[[clang::musttail]] return blk_6286ae(c,a4,a0,a1,bud);
case 0x6286dc:[[clang::musttail]] return blk_6286dc(c,a4,a0,a1,bud);
case 0x628722:[[clang::musttail]] return blk_628722(c,a4,a0,a1,bud);
case 0x628755:[[clang::musttail]] return blk_628755(c,a4,a0,a1,bud);
case 0x6287c8:[[clang::musttail]] return blk_6287c8(c,a4,a0,a1,bud);
case 0x628803:[[clang::musttail]] return blk_628803(c,a4,a0,a1,bud);
case 0x628c56:[[clang::musttail]] return blk_628c56(c,a4,a0,a1,bud);
case 0x628ef2:[[clang::musttail]] return blk_628ef2(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_628(Cpu& c){u8* R=c.regs.data();return ent_628(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
