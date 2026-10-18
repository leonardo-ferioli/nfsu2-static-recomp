#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60d700(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62b64e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62b692(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62c16e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62b321(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62b5c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62b600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62b62d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62bab4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62be4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62b006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62b006:L62b006:{bud-=170;NFSU2_TR(0x62b006);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b00a:{NFSU2_TR(0x62b00a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b00c:{NFSU2_TR(0x62b00c);
{u32 ea_=u32(r4(G+16)+u32(1136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b013:{NFSU2_TR(0x62b013);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b017:{NFSU2_TR(0x62b017);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b019:{NFSU2_TR(0x62b019);
{u32 ea_=u32(r4(G+16)+u32(1120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b020:{NFSU2_TR(0x62b020);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b024:{NFSU2_TR(0x62b024);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b026:{NFSU2_TR(0x62b026);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b02d:{NFSU2_TR(0x62b02d);
{u32 ea_=u32(r4(G+16)+u32(1172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b034:{NFSU2_TR(0x62b034);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b038:{NFSU2_TR(0x62b038);
{u32 ea_=u32(r4(G+16)+u32(1156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b03f:{NFSU2_TR(0x62b03f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b043:{NFSU2_TR(0x62b043);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b045:{NFSU2_TR(0x62b045);
{u32 ea_=u32(r4(G+16)+u32(1140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b04c:{NFSU2_TR(0x62b04c);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b050:{NFSU2_TR(0x62b050);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b052:{NFSU2_TR(0x62b052);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b056:{NFSU2_TR(0x62b056);
{u32 ea_=u32(r4(G+16)+u32(1124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b05d:{NFSU2_TR(0x62b05d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b05f:{NFSU2_TR(0x62b05f);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b066:{NFSU2_TR(0x62b066);
{u32 ea_=u32(r4(G+16)+u32(1160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b06d:{NFSU2_TR(0x62b06d);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b071:{NFSU2_TR(0x62b071);
{u32 ea_=u32(r4(G+16)+u32(1144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b078:{NFSU2_TR(0x62b078);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b07c:{NFSU2_TR(0x62b07c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b07e:{NFSU2_TR(0x62b07e);
{u32 ea_=u32(r4(G+16)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b085:{NFSU2_TR(0x62b085);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b089:{NFSU2_TR(0x62b089);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b08b:{NFSU2_TR(0x62b08b);
{u32 ea_=u32(r4(G+16)+u32(1112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b092:{NFSU2_TR(0x62b092);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b096:{NFSU2_TR(0x62b096);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b098:{NFSU2_TR(0x62b098);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b09f:{NFSU2_TR(0x62b09f);
{u32 ea_=u32(r4(G+16)+u32(1164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b0a6:{NFSU2_TR(0x62b0a6);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b0aa:{NFSU2_TR(0x62b0aa);
{u32 ea_=u32(r4(G+16)+u32(1148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b0b1:{NFSU2_TR(0x62b0b1);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b0b5:{NFSU2_TR(0x62b0b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b0b7:{NFSU2_TR(0x62b0b7);
{u32 ea_=u32(r4(G+16)+u32(1132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b0be:{NFSU2_TR(0x62b0be);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b0c2:{NFSU2_TR(0x62b0c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b0c4:{NFSU2_TR(0x62b0c4);
{u32 ea_=u32(r4(G+16)+u32(1116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b0cb:{NFSU2_TR(0x62b0cb);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b0cf:{NFSU2_TR(0x62b0cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b0d1:{NFSU2_TR(0x62b0d1);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b0d8:{NFSU2_TR(0x62b0d8);
{u32 ea_=u32(r4(G+16)+u32(1168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b0df:{NFSU2_TR(0x62b0df);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b0e3:{NFSU2_TR(0x62b0e3);
{u32 ea_=u32(r4(G+16)+u32(1152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b0ea:{NFSU2_TR(0x62b0ea);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b0ee:{NFSU2_TR(0x62b0ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b0f0:{NFSU2_TR(0x62b0f0);
{u32 ea_=u32(r4(G+16)+u32(1136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b0f7:{NFSU2_TR(0x62b0f7);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b0fb:{NFSU2_TR(0x62b0fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b0fd:{NFSU2_TR(0x62b0fd);
{u32 ea_=u32(r4(G+16)+u32(1120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b104:{NFSU2_TR(0x62b104);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b108:{NFSU2_TR(0x62b108);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b10a:{NFSU2_TR(0x62b10a);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b111:{NFSU2_TR(0x62b111);
{u32 ea_=u32(r4(G+16)+u32(1172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b118:{NFSU2_TR(0x62b118);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b11c:{NFSU2_TR(0x62b11c);
{u32 ea_=u32(r4(G+16)+u32(1156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b123:{NFSU2_TR(0x62b123);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b127:{NFSU2_TR(0x62b127);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b129:{NFSU2_TR(0x62b129);
{u32 ea_=u32(r4(G+16)+u32(1140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b130:{NFSU2_TR(0x62b130);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b134:{NFSU2_TR(0x62b134);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b136:{NFSU2_TR(0x62b136);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b13a:{NFSU2_TR(0x62b13a);
{u32 ea_=u32(r4(G+16)+u32(1124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b141:{NFSU2_TR(0x62b141);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b143:{NFSU2_TR(0x62b143);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b14a:{NFSU2_TR(0x62b14a);
{u32 ea_=u32(r4(G+16)+u32(1160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b151:{NFSU2_TR(0x62b151);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b155:{NFSU2_TR(0x62b155);
{u32 ea_=u32(r4(G+16)+u32(1144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b15c:{NFSU2_TR(0x62b15c);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b160:{NFSU2_TR(0x62b160);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b162:{NFSU2_TR(0x62b162);
{u32 ea_=u32(r4(G+16)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b169:{NFSU2_TR(0x62b169);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b16d:{NFSU2_TR(0x62b16d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b16f:{NFSU2_TR(0x62b16f);
{u32 ea_=u32(r4(G+16)+u32(1112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b176:{NFSU2_TR(0x62b176);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b17a:{NFSU2_TR(0x62b17a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b17c:{NFSU2_TR(0x62b17c);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b183:{NFSU2_TR(0x62b183);
{u32 ea_=u32(r4(G+16)+u32(1164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b18a:{NFSU2_TR(0x62b18a);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b18e:{NFSU2_TR(0x62b18e);
{u32 ea_=u32(r4(G+16)+u32(1148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b195:{NFSU2_TR(0x62b195);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b199:{NFSU2_TR(0x62b199);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b19b:{NFSU2_TR(0x62b19b);
{u32 ea_=u32(r4(G+16)+u32(1132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b1a2:{NFSU2_TR(0x62b1a2);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b1a6:{NFSU2_TR(0x62b1a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b1a8:{NFSU2_TR(0x62b1a8);
{u32 ea_=u32(r4(G+16)+u32(1116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b1af:{NFSU2_TR(0x62b1af);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b1b3:{NFSU2_TR(0x62b1b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b1b5:{NFSU2_TR(0x62b1b5);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b1bc:{NFSU2_TR(0x62b1bc);
{u32 ea_=u32(r4(G+16)+u32(1168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b1c3:{NFSU2_TR(0x62b1c3);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b1c7:{NFSU2_TR(0x62b1c7);
{u32 ea_=u32(r4(G+16)+u32(1152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b1ce:{NFSU2_TR(0x62b1ce);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b1d2:{NFSU2_TR(0x62b1d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b1d4:{NFSU2_TR(0x62b1d4);
{u32 ea_=u32(r4(G+16)+u32(1136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b1db:{NFSU2_TR(0x62b1db);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b1df:{NFSU2_TR(0x62b1df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b1e1:{NFSU2_TR(0x62b1e1);
{u32 ea_=u32(r4(G+16)+u32(1120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b1e8:{NFSU2_TR(0x62b1e8);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b1ec:{NFSU2_TR(0x62b1ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b1ee:{NFSU2_TR(0x62b1ee);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b1f5:{NFSU2_TR(0x62b1f5);
{u32 ea_=u32(r4(G+16)+u32(1172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b1fc:{NFSU2_TR(0x62b1fc);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b200:{NFSU2_TR(0x62b200);
{u32 ea_=u32(r4(G+16)+u32(1156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b207:{NFSU2_TR(0x62b207);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b20b:{NFSU2_TR(0x62b20b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b20d:{NFSU2_TR(0x62b20d);
{u32 ea_=u32(r4(G+16)+u32(1140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b214:{NFSU2_TR(0x62b214);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b218:{NFSU2_TR(0x62b218);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b21a:{NFSU2_TR(0x62b21a);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b21e:{NFSU2_TR(0x62b21e);
{u32 ea_=u32(r4(G+16)+u32(1124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b225:{NFSU2_TR(0x62b225);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b227:{NFSU2_TR(0x62b227);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b22e:{NFSU2_TR(0x62b22e);
{u32 ea_=u32(r4(G+16)+u32(1160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b235:{NFSU2_TR(0x62b235);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b239:{NFSU2_TR(0x62b239);
{u32 ea_=u32(r4(G+16)+u32(1144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b240:{NFSU2_TR(0x62b240);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b244:{NFSU2_TR(0x62b244);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b246:{NFSU2_TR(0x62b246);
{u32 ea_=u32(r4(G+16)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b24d:{NFSU2_TR(0x62b24d);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b251:{NFSU2_TR(0x62b251);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b253:{NFSU2_TR(0x62b253);
{u32 ea_=u32(r4(G+16)+u32(1112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b25a:{NFSU2_TR(0x62b25a);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b25e:{NFSU2_TR(0x62b25e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b260:{NFSU2_TR(0x62b260);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b267:{NFSU2_TR(0x62b267);
{u32 ea_=u32(r4(G+16)+u32(1164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b26e:{NFSU2_TR(0x62b26e);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b272:{NFSU2_TR(0x62b272);
{u32 ea_=u32(r4(G+16)+u32(1148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b279:{NFSU2_TR(0x62b279);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b27d:{NFSU2_TR(0x62b27d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b27f:{NFSU2_TR(0x62b27f);
{u32 ea_=u32(r4(G+16)+u32(1132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b286:{NFSU2_TR(0x62b286);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b28a:{NFSU2_TR(0x62b28a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b28c:{NFSU2_TR(0x62b28c);
{u32 ea_=u32(r4(G+16)+u32(1116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b293:{NFSU2_TR(0x62b293);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b297:{NFSU2_TR(0x62b297);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b299:{NFSU2_TR(0x62b299);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b2a0:{NFSU2_TR(0x62b2a0);
{u32 ea_=u32(r4(G+16)+u32(1168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b2a7:{NFSU2_TR(0x62b2a7);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b2ab:{NFSU2_TR(0x62b2ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62b2af:{NFSU2_TR(0x62b2af);
{u32 ea_=u32(r4(G+16)+u32(1152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b2b6:{NFSU2_TR(0x62b2b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b2b7:{NFSU2_TR(0x62b2b7);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b2bb:{NFSU2_TR(0x62b2bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62b2bf:{NFSU2_TR(0x62b2bf);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b2c0:{NFSU2_TR(0x62b2c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b2c2:{NFSU2_TR(0x62b2c2);
{u32 ea_=u32(r4(G+16)+u32(1144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b2c9:{NFSU2_TR(0x62b2c9);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b2cd:{NFSU2_TR(0x62b2cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b2cf:{NFSU2_TR(0x62b2cf);
{u32 ea_=u32(r4(G+16)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b2d6:{NFSU2_TR(0x62b2d6);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b2da:{NFSU2_TR(0x62b2da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b2dc:{NFSU2_TR(0x62b2dc);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b2e3:{NFSU2_TR(0x62b2e3);
{u32 ea_=u32(r4(G+16)+u32(1180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b2ea:{NFSU2_TR(0x62b2ea);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b2ee:{NFSU2_TR(0x62b2ee);
{u32 ea_=u32(r4(G+16)+u32(1164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b2f5:{NFSU2_TR(0x62b2f5);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b2f9:{NFSU2_TR(0x62b2f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b2fb:{NFSU2_TR(0x62b2fb);
{u32 ea_=u32(r4(G+16)+u32(1148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b302:{NFSU2_TR(0x62b302);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b306:{NFSU2_TR(0x62b306);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b308:{NFSU2_TR(0x62b308);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b30c:{NFSU2_TR(0x62b30c);
{u32 ea_=u32(r4(G+16)+u32(1132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b313:{NFSU2_TR(0x62b313);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b315:{NFSU2_TR(0x62b315);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b31c:{NFSU2_TR(0x62b31c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62b321ull));
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
PN u32 blk_62b321(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62b321:L62b321:{bud-=198;NFSU2_TR(0x62b321);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b325:{NFSU2_TR(0x62b325);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b328:{NFSU2_TR(0x62b328);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b32c:{NFSU2_TR(0x62b32c);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b32f:{NFSU2_TR(0x62b32f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b331:{NFSU2_TR(0x62b331);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b335:{NFSU2_TR(0x62b335);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b337:{NFSU2_TR(0x62b337);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b339:{NFSU2_TR(0x62b339);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b33d:{NFSU2_TR(0x62b33d);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b340:{NFSU2_TR(0x62b340);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b342:{NFSU2_TR(0x62b342);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b349:{NFSU2_TR(0x62b349);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b34d:{NFSU2_TR(0x62b34d);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b350:{NFSU2_TR(0x62b350);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b354:{NFSU2_TR(0x62b354);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b357:{NFSU2_TR(0x62b357);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b359:{NFSU2_TR(0x62b359);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b35d:{NFSU2_TR(0x62b35d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b360:{NFSU2_TR(0x62b360);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b362:{NFSU2_TR(0x62b362);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b366:{NFSU2_TR(0x62b366);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b369:{NFSU2_TR(0x62b369);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b36b:{NFSU2_TR(0x62b36b);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b372:{NFSU2_TR(0x62b372);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b376:{NFSU2_TR(0x62b376);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b379:{NFSU2_TR(0x62b379);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b37d:{NFSU2_TR(0x62b37d);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b380:{NFSU2_TR(0x62b380);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b382:{NFSU2_TR(0x62b382);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b386:{NFSU2_TR(0x62b386);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b389:{NFSU2_TR(0x62b389);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b38b:{NFSU2_TR(0x62b38b);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b38f:{NFSU2_TR(0x62b38f);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b392:{NFSU2_TR(0x62b392);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b394:{NFSU2_TR(0x62b394);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b39b:{NFSU2_TR(0x62b39b);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b39f:{NFSU2_TR(0x62b39f);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3a2:{NFSU2_TR(0x62b3a2);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3a6:{NFSU2_TR(0x62b3a6);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3a9:{NFSU2_TR(0x62b3a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b3ab:{NFSU2_TR(0x62b3ab);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3af:{NFSU2_TR(0x62b3af);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3b2:{NFSU2_TR(0x62b3b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b3b4:{NFSU2_TR(0x62b3b4);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3b8:{NFSU2_TR(0x62b3b8);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3bb:{NFSU2_TR(0x62b3bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b3bd:{NFSU2_TR(0x62b3bd);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b3c4:{NFSU2_TR(0x62b3c4);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3c8:{NFSU2_TR(0x62b3c8);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3cb:{NFSU2_TR(0x62b3cb);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3cf:{NFSU2_TR(0x62b3cf);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3d2:{NFSU2_TR(0x62b3d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b3d4:{NFSU2_TR(0x62b3d4);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3d8:{NFSU2_TR(0x62b3d8);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3db:{NFSU2_TR(0x62b3db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b3dd:{NFSU2_TR(0x62b3dd);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3e1:{NFSU2_TR(0x62b3e1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3e3:{NFSU2_TR(0x62b3e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b3e5:{NFSU2_TR(0x62b3e5);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b3ec:{NFSU2_TR(0x62b3ec);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3f0:{NFSU2_TR(0x62b3f0);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3f3:{NFSU2_TR(0x62b3f3);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b3f7:{NFSU2_TR(0x62b3f7);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b3fa:{NFSU2_TR(0x62b3fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b3fc:{NFSU2_TR(0x62b3fc);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b400:{NFSU2_TR(0x62b400);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b403:{NFSU2_TR(0x62b403);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b405:{NFSU2_TR(0x62b405);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b409:{NFSU2_TR(0x62b409);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b40c:{NFSU2_TR(0x62b40c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b40e:{NFSU2_TR(0x62b40e);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b415:{NFSU2_TR(0x62b415);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b419:{NFSU2_TR(0x62b419);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b41c:{NFSU2_TR(0x62b41c);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b420:{NFSU2_TR(0x62b420);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b423:{NFSU2_TR(0x62b423);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b425:{NFSU2_TR(0x62b425);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b429:{NFSU2_TR(0x62b429);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b42c:{NFSU2_TR(0x62b42c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b42e:{NFSU2_TR(0x62b42e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b432:{NFSU2_TR(0x62b432);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b435:{NFSU2_TR(0x62b435);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b437:{NFSU2_TR(0x62b437);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b43e:{NFSU2_TR(0x62b43e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b442:{NFSU2_TR(0x62b442);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b445:{NFSU2_TR(0x62b445);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b449:{NFSU2_TR(0x62b449);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b44c:{NFSU2_TR(0x62b44c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b44e:{NFSU2_TR(0x62b44e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b452:{NFSU2_TR(0x62b452);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b455:{NFSU2_TR(0x62b455);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b457:{NFSU2_TR(0x62b457);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b45b:{NFSU2_TR(0x62b45b);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b45e:{NFSU2_TR(0x62b45e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b460:{NFSU2_TR(0x62b460);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b467:{NFSU2_TR(0x62b467);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b46b:{NFSU2_TR(0x62b46b);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b46e:{NFSU2_TR(0x62b46e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b472:{NFSU2_TR(0x62b472);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b475:{NFSU2_TR(0x62b475);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b477:{NFSU2_TR(0x62b477);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b47b:{NFSU2_TR(0x62b47b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b47e:{NFSU2_TR(0x62b47e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b480:{NFSU2_TR(0x62b480);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b484:{NFSU2_TR(0x62b484);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b486:{NFSU2_TR(0x62b486);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b488:{NFSU2_TR(0x62b488);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b48f:{NFSU2_TR(0x62b48f);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b493:{NFSU2_TR(0x62b493);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b496:{NFSU2_TR(0x62b496);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b49a:{NFSU2_TR(0x62b49a);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b49d:{NFSU2_TR(0x62b49d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b49f:{NFSU2_TR(0x62b49f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4a3:{NFSU2_TR(0x62b4a3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4a6:{NFSU2_TR(0x62b4a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b4a8:{NFSU2_TR(0x62b4a8);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4ac:{NFSU2_TR(0x62b4ac);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4af:{NFSU2_TR(0x62b4af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b4b1:{NFSU2_TR(0x62b4b1);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b4b8:{NFSU2_TR(0x62b4b8);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4bc:{NFSU2_TR(0x62b4bc);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4bf:{NFSU2_TR(0x62b4bf);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4c3:{NFSU2_TR(0x62b4c3);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4c6:{NFSU2_TR(0x62b4c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b4c8:{NFSU2_TR(0x62b4c8);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4cc:{NFSU2_TR(0x62b4cc);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4cf:{NFSU2_TR(0x62b4cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b4d1:{NFSU2_TR(0x62b4d1);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4d5:{NFSU2_TR(0x62b4d5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4d8:{NFSU2_TR(0x62b4d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b4da:{NFSU2_TR(0x62b4da);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b4e1:{NFSU2_TR(0x62b4e1);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4e5:{NFSU2_TR(0x62b4e5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4e8:{NFSU2_TR(0x62b4e8);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4ec:{NFSU2_TR(0x62b4ec);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4ef:{NFSU2_TR(0x62b4ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b4f1:{NFSU2_TR(0x62b4f1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4f5:{NFSU2_TR(0x62b4f5);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b4f8:{NFSU2_TR(0x62b4f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b4fa:{NFSU2_TR(0x62b4fa);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b4fe:{NFSU2_TR(0x62b4fe);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b501:{NFSU2_TR(0x62b501);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b503:{NFSU2_TR(0x62b503);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b50a:{NFSU2_TR(0x62b50a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b50e:{NFSU2_TR(0x62b50e);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b511:{NFSU2_TR(0x62b511);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b515:{NFSU2_TR(0x62b515);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b518:{NFSU2_TR(0x62b518);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b51a:{NFSU2_TR(0x62b51a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b51e:{NFSU2_TR(0x62b51e);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b521:{NFSU2_TR(0x62b521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b523:{NFSU2_TR(0x62b523);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b527:{NFSU2_TR(0x62b527);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b529:{NFSU2_TR(0x62b529);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b52b:{NFSU2_TR(0x62b52b);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b532:{NFSU2_TR(0x62b532);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b539:{NFSU2_TR(0x62b539);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b53d:{NFSU2_TR(0x62b53d);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62b544:{NFSU2_TR(0x62b544);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b547:{NFSU2_TR(0x62b547);
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
B62b54c:{NFSU2_TR(0x62b54c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b550:{NFSU2_TR(0x62b550);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b551:{NFSU2_TR(0x62b551);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b554:{NFSU2_TR(0x62b554);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b555:{NFSU2_TR(0x62b555);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b557:{NFSU2_TR(0x62b557);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b55b:{NFSU2_TR(0x62b55b);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b55e:{NFSU2_TR(0x62b55e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b560:{NFSU2_TR(0x62b560);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b564:{NFSU2_TR(0x62b564);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b567:{NFSU2_TR(0x62b567);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b569:{NFSU2_TR(0x62b569);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b570:{NFSU2_TR(0x62b570);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b574:{NFSU2_TR(0x62b574);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b577:{NFSU2_TR(0x62b577);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b57b:{NFSU2_TR(0x62b57b);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b57e:{NFSU2_TR(0x62b57e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b580:{NFSU2_TR(0x62b580);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b584:{NFSU2_TR(0x62b584);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b587:{NFSU2_TR(0x62b587);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b589:{NFSU2_TR(0x62b589);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b58d:{NFSU2_TR(0x62b58d);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b590:{NFSU2_TR(0x62b590);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b592:{NFSU2_TR(0x62b592);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b599:{NFSU2_TR(0x62b599);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b59d:{NFSU2_TR(0x62b59d);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b5a0:{NFSU2_TR(0x62b5a0);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b5a4:{NFSU2_TR(0x62b5a4);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b5a7:{NFSU2_TR(0x62b5a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b5a9:{NFSU2_TR(0x62b5a9);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b5ad:{NFSU2_TR(0x62b5ad);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b5b0:{NFSU2_TR(0x62b5b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b5b2:{NFSU2_TR(0x62b5b2);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b5b6:{NFSU2_TR(0x62b5b6);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b5b9:{NFSU2_TR(0x62b5b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b5bb:{NFSU2_TR(0x62b5bb);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b5c2:{NFSU2_TR(0x62b5c2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62b5c7ull));
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
PN u32 blk_62b5c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62b5c7:L62b5c7:{bud-=14;NFSU2_TR(0x62b5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b5ca:{NFSU2_TR(0x62b5ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62b5d1:{NFSU2_TR(0x62b5d1);
u8 U[4];
w4(U+0,u32(u32(u32(0xb38ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62b5d8:{NFSU2_TR(0x62b5d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b5d9:{NFSU2_TR(0x62b5d9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b5da:{NFSU2_TR(0x62b5da);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b5e1:{NFSU2_TR(0x62b5e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b0ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62b5e8:{NFSU2_TR(0x62b5e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b5e9:{NFSU2_TR(0x62b5e9);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b5ee:{NFSU2_TR(0x62b5ee);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
}
B62b5f3:{NFSU2_TR(0x62b5f3);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x380ull))));
}
B62b5f9:{NFSU2_TR(0x62b5f9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b5fa:{NFSU2_TR(0x62b5fa);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b5fb:{NFSU2_TR(0x62b5fb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62b600ull));
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
PN u32 blk_62b600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62b600:L62b600:{bud-=4;NFSU2_TR(0x62b600);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b607:{NFSU2_TR(0x62b607);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
}
B62b60a:{NFSU2_TR(0x62b60a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62b60c:{NFSU2_TR(0x62b60c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62b64e(ARGS);}}
}
B62b60e:L62b60e:{bud-=2;NFSU2_TR(0x62b60e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B62b615:{NFSU2_TR(0x62b615);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62b64e(ARGS);}}
}
B62b617:L62b617:{bud-=6;NFSU2_TR(0x62b617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b61a:{NFSU2_TR(0x62b61a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b61b:{NFSU2_TR(0x62b61b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b622:{NFSU2_TR(0x62b622);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
}
B62b627:{NFSU2_TR(0x62b627);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b628:{NFSU2_TR(0x62b628);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62b62dull));
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
PN u32 blk_62b62d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62b62d:L62b62d:{bud-=5;NFSU2_TR(0x62b62d);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62b633:{NFSU2_TR(0x62b633);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62b636:{NFSU2_TR(0x62b636);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B62b638:{NFSU2_TR(0x62b638);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B62b63b:{NFSU2_TR(0x62b63b);
if(r1(F+2)){{[[clang::musttail]] return blk_62b64e(ARGS);}}
}
B62b63d:L62b63d:{bud-=3;NFSU2_TR(0x62b63d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62b641:{NFSU2_TR(0x62b641);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1b6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62b647:{NFSU2_TR(0x62b647);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_62b64e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62b64e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62b64e:L62b64e:{bud-=3;NFSU2_TR(0x62b64e);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62b655:{NFSU2_TR(0x62b655);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62b657:{NFSU2_TR(0x62b657);
if(r1(F+6)){{[[clang::musttail]] return blk_62b692(ARGS);}}
}
B62b659:L62b659:{bud-=15;NFSU2_TR(0x62b659);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62b660:{NFSU2_TR(0x62b660);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b667:{NFSU2_TR(0x62b667);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62b669:{NFSU2_TR(0x62b669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))|u32(r4(U+4))));
}
B62b66c:{NFSU2_TR(0x62b66c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b66e:{NFSU2_TR(0x62b66e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b66f:{NFSU2_TR(0x62b66f);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b676:{NFSU2_TR(0x62b676);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x380ull))));
}
B62b67b:{NFSU2_TR(0x62b67b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b67c:{NFSU2_TR(0x62b67c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62b683:{NFSU2_TR(0x62b683);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
}
B62b688:{NFSU2_TR(0x62b688);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b689:{NFSU2_TR(0x62b689);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62b68a:{NFSU2_TR(0x62b68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62b68d:{NFSU2_TR(0x62b68d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62b692ull));
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
PN u32 blk_62b692(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62b692:L62b692:{bud-=3;NFSU2_TR(0x62b692);
u8 U[5];
w4(U+0,u32(u32(u32(0xf3ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B62b699:{NFSU2_TR(0x62b699);
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
B62b69b:{NFSU2_TR(0x62b69b);
if(r1(F+6)){{[[clang::musttail]] return blk_62c16e(ARGS);}}
}
B62b6a1:L62b6a1:{bud-=197;NFSU2_TR(0x62b6a1);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b6a8:{NFSU2_TR(0x62b6a8);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b6ae:{NFSU2_TR(0x62b6ae);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b6b5:{NFSU2_TR(0x62b6b5);
{u32 ea_=u32(r4(R+28)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b6bb:{NFSU2_TR(0x62b6bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b6bd:{NFSU2_TR(0x62b6bd);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b6c4:{NFSU2_TR(0x62b6c4);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b6ca:{NFSU2_TR(0x62b6ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b6cc:{NFSU2_TR(0x62b6cc);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b6d3:{NFSU2_TR(0x62b6d3);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b6d9:{NFSU2_TR(0x62b6d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b6db:{NFSU2_TR(0x62b6db);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b6df:{NFSU2_TR(0x62b6df);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b6e6:{NFSU2_TR(0x62b6e6);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b6ec:{NFSU2_TR(0x62b6ec);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b6f3:{NFSU2_TR(0x62b6f3);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b6f9:{NFSU2_TR(0x62b6f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b6fb:{NFSU2_TR(0x62b6fb);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b702:{NFSU2_TR(0x62b702);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b708:{NFSU2_TR(0x62b708);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b70a:{NFSU2_TR(0x62b70a);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b711:{NFSU2_TR(0x62b711);
{u32 ea_=u32(r4(R+28)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b717:{NFSU2_TR(0x62b717);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b719:{NFSU2_TR(0x62b719);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b71d:{NFSU2_TR(0x62b71d);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b724:{NFSU2_TR(0x62b724);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b72a:{NFSU2_TR(0x62b72a);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b731:{NFSU2_TR(0x62b731);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b737:{NFSU2_TR(0x62b737);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b739:{NFSU2_TR(0x62b739);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b740:{NFSU2_TR(0x62b740);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b746:{NFSU2_TR(0x62b746);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b748:{NFSU2_TR(0x62b748);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b74f:{NFSU2_TR(0x62b74f);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b755:{NFSU2_TR(0x62b755);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b757:{NFSU2_TR(0x62b757);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b75b:{NFSU2_TR(0x62b75b);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b762:{NFSU2_TR(0x62b762);
{u32 ea_=u32(r4(R+28)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b768:{NFSU2_TR(0x62b768);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b76f:{NFSU2_TR(0x62b76f);
{u32 ea_=u32(r4(R+28)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b775:{NFSU2_TR(0x62b775);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b777:{NFSU2_TR(0x62b777);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b77e:{NFSU2_TR(0x62b77e);
{u32 ea_=u32(r4(R+28)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b784:{NFSU2_TR(0x62b784);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b786:{NFSU2_TR(0x62b786);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b78d:{NFSU2_TR(0x62b78d);
{u32 ea_=u32(r4(R+28)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b793:{NFSU2_TR(0x62b793);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b795:{NFSU2_TR(0x62b795);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b799:{NFSU2_TR(0x62b799);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b7a0:{NFSU2_TR(0x62b7a0);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b7a6:{NFSU2_TR(0x62b7a6);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b7ad:{NFSU2_TR(0x62b7ad);
{u32 ea_=u32(r4(R+28)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b7b3:{NFSU2_TR(0x62b7b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b7b5:{NFSU2_TR(0x62b7b5);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b7bc:{NFSU2_TR(0x62b7bc);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b7c2:{NFSU2_TR(0x62b7c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b7c4:{NFSU2_TR(0x62b7c4);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b7cb:{NFSU2_TR(0x62b7cb);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b7d1:{NFSU2_TR(0x62b7d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b7d3:{NFSU2_TR(0x62b7d3);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b7da:{NFSU2_TR(0x62b7da);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b7e1:{NFSU2_TR(0x62b7e1);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b7e7:{NFSU2_TR(0x62b7e7);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b7ee:{NFSU2_TR(0x62b7ee);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b7f4:{NFSU2_TR(0x62b7f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b7f6:{NFSU2_TR(0x62b7f6);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b7fd:{NFSU2_TR(0x62b7fd);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b803:{NFSU2_TR(0x62b803);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b805:{NFSU2_TR(0x62b805);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b80c:{NFSU2_TR(0x62b80c);
{u32 ea_=u32(r4(R+28)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b812:{NFSU2_TR(0x62b812);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b814:{NFSU2_TR(0x62b814);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b81b:{NFSU2_TR(0x62b81b);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b822:{NFSU2_TR(0x62b822);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b828:{NFSU2_TR(0x62b828);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b82f:{NFSU2_TR(0x62b82f);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b835:{NFSU2_TR(0x62b835);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b837:{NFSU2_TR(0x62b837);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b83e:{NFSU2_TR(0x62b83e);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b844:{NFSU2_TR(0x62b844);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b846:{NFSU2_TR(0x62b846);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b84d:{NFSU2_TR(0x62b84d);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b853:{NFSU2_TR(0x62b853);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b855:{NFSU2_TR(0x62b855);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b85c:{NFSU2_TR(0x62b85c);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b863:{NFSU2_TR(0x62b863);
{u32 ea_=u32(r4(R+28)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b869:{NFSU2_TR(0x62b869);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b870:{NFSU2_TR(0x62b870);
{u32 ea_=u32(r4(R+28)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b876:{NFSU2_TR(0x62b876);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b878:{NFSU2_TR(0x62b878);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b87f:{NFSU2_TR(0x62b87f);
{u32 ea_=u32(r4(R+28)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b885:{NFSU2_TR(0x62b885);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b887:{NFSU2_TR(0x62b887);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b88e:{NFSU2_TR(0x62b88e);
{u32 ea_=u32(r4(R+28)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b894:{NFSU2_TR(0x62b894);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b896:{NFSU2_TR(0x62b896);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b89d:{NFSU2_TR(0x62b89d);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b8a4:{NFSU2_TR(0x62b8a4);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b8aa:{NFSU2_TR(0x62b8aa);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b8b1:{NFSU2_TR(0x62b8b1);
{u32 ea_=u32(r4(R+28)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b8b7:{NFSU2_TR(0x62b8b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b8b9:{NFSU2_TR(0x62b8b9);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b8c0:{NFSU2_TR(0x62b8c0);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b8c6:{NFSU2_TR(0x62b8c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b8c8:{NFSU2_TR(0x62b8c8);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b8cf:{NFSU2_TR(0x62b8cf);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b8d5:{NFSU2_TR(0x62b8d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b8d7:{NFSU2_TR(0x62b8d7);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b8de:{NFSU2_TR(0x62b8de);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b8e5:{NFSU2_TR(0x62b8e5);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b8eb:{NFSU2_TR(0x62b8eb);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b8f2:{NFSU2_TR(0x62b8f2);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b8f8:{NFSU2_TR(0x62b8f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b8fa:{NFSU2_TR(0x62b8fa);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b901:{NFSU2_TR(0x62b901);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b907:{NFSU2_TR(0x62b907);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b909:{NFSU2_TR(0x62b909);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b910:{NFSU2_TR(0x62b910);
{u32 ea_=u32(r4(R+28)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b916:{NFSU2_TR(0x62b916);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b918:{NFSU2_TR(0x62b918);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b91f:{NFSU2_TR(0x62b91f);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b926:{NFSU2_TR(0x62b926);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b92c:{NFSU2_TR(0x62b92c);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b933:{NFSU2_TR(0x62b933);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b939:{NFSU2_TR(0x62b939);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b93b:{NFSU2_TR(0x62b93b);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b942:{NFSU2_TR(0x62b942);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b948:{NFSU2_TR(0x62b948);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b94a:{NFSU2_TR(0x62b94a);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b951:{NFSU2_TR(0x62b951);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b957:{NFSU2_TR(0x62b957);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b959:{NFSU2_TR(0x62b959);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b960:{NFSU2_TR(0x62b960);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b967:{NFSU2_TR(0x62b967);
{u32 ea_=u32(r4(R+28)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b96d:{NFSU2_TR(0x62b96d);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b974:{NFSU2_TR(0x62b974);
{u32 ea_=u32(r4(R+28)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b97a:{NFSU2_TR(0x62b97a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b97c:{NFSU2_TR(0x62b97c);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b983:{NFSU2_TR(0x62b983);
{u32 ea_=u32(r4(R+28)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b989:{NFSU2_TR(0x62b989);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b98b:{NFSU2_TR(0x62b98b);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b992:{NFSU2_TR(0x62b992);
{u32 ea_=u32(r4(R+28)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b998:{NFSU2_TR(0x62b998);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b99a:{NFSU2_TR(0x62b99a);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b9a1:{NFSU2_TR(0x62b9a1);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b9a8:{NFSU2_TR(0x62b9a8);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b9ae:{NFSU2_TR(0x62b9ae);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b9b5:{NFSU2_TR(0x62b9b5);
{u32 ea_=u32(r4(R+28)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b9bb:{NFSU2_TR(0x62b9bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b9bd:{NFSU2_TR(0x62b9bd);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b9c4:{NFSU2_TR(0x62b9c4);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b9ca:{NFSU2_TR(0x62b9ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b9cc:{NFSU2_TR(0x62b9cc);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b9d3:{NFSU2_TR(0x62b9d3);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b9d9:{NFSU2_TR(0x62b9d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b9db:{NFSU2_TR(0x62b9db);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62b9e2:{NFSU2_TR(0x62b9e2);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b9e9:{NFSU2_TR(0x62b9e9);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b9ef:{NFSU2_TR(0x62b9ef);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62b9f6:{NFSU2_TR(0x62b9f6);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62b9fc:{NFSU2_TR(0x62b9fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62b9fe:{NFSU2_TR(0x62b9fe);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba05:{NFSU2_TR(0x62ba05);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba0b:{NFSU2_TR(0x62ba0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ba0d:{NFSU2_TR(0x62ba0d);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba14:{NFSU2_TR(0x62ba14);
{u32 ea_=u32(r4(R+28)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba1a:{NFSU2_TR(0x62ba1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ba1c:{NFSU2_TR(0x62ba1c);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ba23:{NFSU2_TR(0x62ba23);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba2a:{NFSU2_TR(0x62ba2a);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba30:{NFSU2_TR(0x62ba30);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba37:{NFSU2_TR(0x62ba37);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba3d:{NFSU2_TR(0x62ba3d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ba3f:{NFSU2_TR(0x62ba3f);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba46:{NFSU2_TR(0x62ba46);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba4c:{NFSU2_TR(0x62ba4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ba4e:{NFSU2_TR(0x62ba4e);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba55:{NFSU2_TR(0x62ba55);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba5b:{NFSU2_TR(0x62ba5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ba5d:{NFSU2_TR(0x62ba5d);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ba64:{NFSU2_TR(0x62ba64);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba6b:{NFSU2_TR(0x62ba6b);
{u32 ea_=u32(r4(R+28)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba71:{NFSU2_TR(0x62ba71);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba78:{NFSU2_TR(0x62ba78);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62ba7c:{NFSU2_TR(0x62ba7c);
{u32 ea_=u32(r4(R+28)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba82:{NFSU2_TR(0x62ba82);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ba83:{NFSU2_TR(0x62ba83);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62ba87:{NFSU2_TR(0x62ba87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62ba88:{NFSU2_TR(0x62ba88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ba8a:{NFSU2_TR(0x62ba8a);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ba91:{NFSU2_TR(0x62ba91);
{u32 ea_=u32(r4(R+28)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ba97:{NFSU2_TR(0x62ba97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ba99:{NFSU2_TR(0x62ba99);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62baa0:{NFSU2_TR(0x62baa0);
{u32 ea_=u32(r4(R+28)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62baa6:{NFSU2_TR(0x62baa6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62baa8:{NFSU2_TR(0x62baa8);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62baaf:{NFSU2_TR(0x62baaf);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62bab4ull));
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
PN u32 blk_62bab4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62bab4:L62bab4:{bud-=197;NFSU2_TR(0x62bab4);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bab8:{NFSU2_TR(0x62bab8);
{u32 ea_=u32(r4(G+16)+u32(1624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62babf:{NFSU2_TR(0x62babf);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bac3:{NFSU2_TR(0x62bac3);
{u32 ea_=u32(r4(G+16)+u32(1640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62baca:{NFSU2_TR(0x62baca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bacc:{NFSU2_TR(0x62bacc);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bad0:{NFSU2_TR(0x62bad0);
{u32 ea_=u32(r4(G+16)+u32(1656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bad7:{NFSU2_TR(0x62bad7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bad9:{NFSU2_TR(0x62bad9);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62badd:{NFSU2_TR(0x62badd);
{u32 ea_=u32(r4(G+16)+u32(1672u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bae4:{NFSU2_TR(0x62bae4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bae6:{NFSU2_TR(0x62bae6);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62baea:{NFSU2_TR(0x62baea);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62baee:{NFSU2_TR(0x62baee);
{u32 ea_=u32(r4(G+16)+u32(1628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62baf5:{NFSU2_TR(0x62baf5);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62baf9:{NFSU2_TR(0x62baf9);
{u32 ea_=u32(r4(G+16)+u32(1644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb00:{NFSU2_TR(0x62bb00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb02:{NFSU2_TR(0x62bb02);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb06:{NFSU2_TR(0x62bb06);
{u32 ea_=u32(r4(G+16)+u32(1660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb0d:{NFSU2_TR(0x62bb0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb0f:{NFSU2_TR(0x62bb0f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb13:{NFSU2_TR(0x62bb13);
{u32 ea_=u32(r4(G+16)+u32(1676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb1a:{NFSU2_TR(0x62bb1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb1c:{NFSU2_TR(0x62bb1c);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bb20:{NFSU2_TR(0x62bb20);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb24:{NFSU2_TR(0x62bb24);
{u32 ea_=u32(r4(G+16)+u32(1632u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb2b:{NFSU2_TR(0x62bb2b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb2f:{NFSU2_TR(0x62bb2f);
{u32 ea_=u32(r4(G+16)+u32(1648u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb36:{NFSU2_TR(0x62bb36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb38:{NFSU2_TR(0x62bb38);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb3c:{NFSU2_TR(0x62bb3c);
{u32 ea_=u32(r4(G+16)+u32(1664u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb43:{NFSU2_TR(0x62bb43);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb45:{NFSU2_TR(0x62bb45);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb49:{NFSU2_TR(0x62bb49);
{u32 ea_=u32(r4(G+16)+u32(1680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb50:{NFSU2_TR(0x62bb50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb52:{NFSU2_TR(0x62bb52);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bb59:{NFSU2_TR(0x62bb59);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb5d:{NFSU2_TR(0x62bb5d);
{u32 ea_=u32(r4(G+16)+u32(1652u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb64:{NFSU2_TR(0x62bb64);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb68:{NFSU2_TR(0x62bb68);
{u32 ea_=u32(r4(G+16)+u32(1636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb6f:{NFSU2_TR(0x62bb6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb71:{NFSU2_TR(0x62bb71);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb75:{NFSU2_TR(0x62bb75);
{u32 ea_=u32(r4(G+16)+u32(1668u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb7c:{NFSU2_TR(0x62bb7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb7e:{NFSU2_TR(0x62bb7e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb82:{NFSU2_TR(0x62bb82);
{u32 ea_=u32(r4(G+16)+u32(1684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb89:{NFSU2_TR(0x62bb89);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bb8b:{NFSU2_TR(0x62bb8b);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bb92:{NFSU2_TR(0x62bb92);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bb96:{NFSU2_TR(0x62bb96);
{u32 ea_=u32(r4(G+16)+u32(1640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bb9d:{NFSU2_TR(0x62bb9d);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bba1:{NFSU2_TR(0x62bba1);
{u32 ea_=u32(r4(G+16)+u32(1624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bba8:{NFSU2_TR(0x62bba8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bbaa:{NFSU2_TR(0x62bbaa);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bbae:{NFSU2_TR(0x62bbae);
{u32 ea_=u32(r4(G+16)+u32(1656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bbb5:{NFSU2_TR(0x62bbb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bbb7:{NFSU2_TR(0x62bbb7);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bbbb:{NFSU2_TR(0x62bbbb);
{u32 ea_=u32(r4(G+16)+u32(1672u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bbc2:{NFSU2_TR(0x62bbc2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bbc4:{NFSU2_TR(0x62bbc4);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bbcb:{NFSU2_TR(0x62bbcb);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bbcf:{NFSU2_TR(0x62bbcf);
{u32 ea_=u32(r4(G+16)+u32(1644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bbd6:{NFSU2_TR(0x62bbd6);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bbda:{NFSU2_TR(0x62bbda);
{u32 ea_=u32(r4(G+16)+u32(1660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bbe1:{NFSU2_TR(0x62bbe1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bbe3:{NFSU2_TR(0x62bbe3);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bbe7:{NFSU2_TR(0x62bbe7);
{u32 ea_=u32(r4(G+16)+u32(1676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bbee:{NFSU2_TR(0x62bbee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bbf0:{NFSU2_TR(0x62bbf0);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bbf4:{NFSU2_TR(0x62bbf4);
{u32 ea_=u32(r4(G+16)+u32(1628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bbfb:{NFSU2_TR(0x62bbfb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bbfd:{NFSU2_TR(0x62bbfd);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bc04:{NFSU2_TR(0x62bc04);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc08:{NFSU2_TR(0x62bc08);
{u32 ea_=u32(r4(G+16)+u32(1648u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc0f:{NFSU2_TR(0x62bc0f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc13:{NFSU2_TR(0x62bc13);
{u32 ea_=u32(r4(G+16)+u32(1664u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc1a:{NFSU2_TR(0x62bc1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc1c:{NFSU2_TR(0x62bc1c);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc20:{NFSU2_TR(0x62bc20);
{u32 ea_=u32(r4(G+16)+u32(1680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc27:{NFSU2_TR(0x62bc27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc29:{NFSU2_TR(0x62bc29);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc2d:{NFSU2_TR(0x62bc2d);
{u32 ea_=u32(r4(G+16)+u32(1632u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc34:{NFSU2_TR(0x62bc34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc36:{NFSU2_TR(0x62bc36);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bc3d:{NFSU2_TR(0x62bc3d);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc41:{NFSU2_TR(0x62bc41);
{u32 ea_=u32(r4(G+16)+u32(1668u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc48:{NFSU2_TR(0x62bc48);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc4c:{NFSU2_TR(0x62bc4c);
{u32 ea_=u32(r4(G+16)+u32(1684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc53:{NFSU2_TR(0x62bc53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc55:{NFSU2_TR(0x62bc55);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc59:{NFSU2_TR(0x62bc59);
{u32 ea_=u32(r4(G+16)+u32(1636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc60:{NFSU2_TR(0x62bc60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc62:{NFSU2_TR(0x62bc62);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc66:{NFSU2_TR(0x62bc66);
{u32 ea_=u32(r4(G+16)+u32(1652u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc6d:{NFSU2_TR(0x62bc6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc6f:{NFSU2_TR(0x62bc6f);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bc76:{NFSU2_TR(0x62bc76);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc7a:{NFSU2_TR(0x62bc7a);
{u32 ea_=u32(r4(G+16)+u32(1640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc81:{NFSU2_TR(0x62bc81);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc85:{NFSU2_TR(0x62bc85);
{u32 ea_=u32(r4(G+16)+u32(1624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc8c:{NFSU2_TR(0x62bc8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc8e:{NFSU2_TR(0x62bc8e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc92:{NFSU2_TR(0x62bc92);
{u32 ea_=u32(r4(G+16)+u32(1656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bc99:{NFSU2_TR(0x62bc99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bc9b:{NFSU2_TR(0x62bc9b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bc9f:{NFSU2_TR(0x62bc9f);
{u32 ea_=u32(r4(G+16)+u32(1672u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bca6:{NFSU2_TR(0x62bca6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bca8:{NFSU2_TR(0x62bca8);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bcaf:{NFSU2_TR(0x62bcaf);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bcb3:{NFSU2_TR(0x62bcb3);
{u32 ea_=u32(r4(G+16)+u32(1644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bcba:{NFSU2_TR(0x62bcba);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bcbe:{NFSU2_TR(0x62bcbe);
{u32 ea_=u32(r4(G+16)+u32(1660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bcc5:{NFSU2_TR(0x62bcc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bcc7:{NFSU2_TR(0x62bcc7);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bccb:{NFSU2_TR(0x62bccb);
{u32 ea_=u32(r4(G+16)+u32(1676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bcd2:{NFSU2_TR(0x62bcd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bcd4:{NFSU2_TR(0x62bcd4);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bcd8:{NFSU2_TR(0x62bcd8);
{u32 ea_=u32(r4(G+16)+u32(1628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bcdf:{NFSU2_TR(0x62bcdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bce1:{NFSU2_TR(0x62bce1);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bce8:{NFSU2_TR(0x62bce8);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bcec:{NFSU2_TR(0x62bcec);
{u32 ea_=u32(r4(G+16)+u32(1648u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bcf3:{NFSU2_TR(0x62bcf3);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bcf7:{NFSU2_TR(0x62bcf7);
{u32 ea_=u32(r4(G+16)+u32(1664u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bcfe:{NFSU2_TR(0x62bcfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd00:{NFSU2_TR(0x62bd00);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd04:{NFSU2_TR(0x62bd04);
{u32 ea_=u32(r4(G+16)+u32(1680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd0b:{NFSU2_TR(0x62bd0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd0d:{NFSU2_TR(0x62bd0d);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd11:{NFSU2_TR(0x62bd11);
{u32 ea_=u32(r4(G+16)+u32(1632u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd18:{NFSU2_TR(0x62bd18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd1a:{NFSU2_TR(0x62bd1a);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bd21:{NFSU2_TR(0x62bd21);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd25:{NFSU2_TR(0x62bd25);
{u32 ea_=u32(r4(G+16)+u32(1668u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd2c:{NFSU2_TR(0x62bd2c);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd30:{NFSU2_TR(0x62bd30);
{u32 ea_=u32(r4(G+16)+u32(1684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd37:{NFSU2_TR(0x62bd37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd39:{NFSU2_TR(0x62bd39);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd3d:{NFSU2_TR(0x62bd3d);
{u32 ea_=u32(r4(G+16)+u32(1636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd44:{NFSU2_TR(0x62bd44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd46:{NFSU2_TR(0x62bd46);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd4a:{NFSU2_TR(0x62bd4a);
{u32 ea_=u32(r4(G+16)+u32(1652u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd51:{NFSU2_TR(0x62bd51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd53:{NFSU2_TR(0x62bd53);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bd5a:{NFSU2_TR(0x62bd5a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd5e:{NFSU2_TR(0x62bd5e);
{u32 ea_=u32(r4(G+16)+u32(1640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd65:{NFSU2_TR(0x62bd65);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd69:{NFSU2_TR(0x62bd69);
{u32 ea_=u32(r4(G+16)+u32(1624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd70:{NFSU2_TR(0x62bd70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd72:{NFSU2_TR(0x62bd72);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd76:{NFSU2_TR(0x62bd76);
{u32 ea_=u32(r4(G+16)+u32(1656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd7d:{NFSU2_TR(0x62bd7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd7f:{NFSU2_TR(0x62bd7f);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd83:{NFSU2_TR(0x62bd83);
{u32 ea_=u32(r4(G+16)+u32(1672u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd8a:{NFSU2_TR(0x62bd8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bd8c:{NFSU2_TR(0x62bd8c);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bd93:{NFSU2_TR(0x62bd93);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bd97:{NFSU2_TR(0x62bd97);
{u32 ea_=u32(r4(G+16)+u32(1644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bd9e:{NFSU2_TR(0x62bd9e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bda2:{NFSU2_TR(0x62bda2);
{u32 ea_=u32(r4(G+16)+u32(1660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bda9:{NFSU2_TR(0x62bda9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bdab:{NFSU2_TR(0x62bdab);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bdaf:{NFSU2_TR(0x62bdaf);
{u32 ea_=u32(r4(G+16)+u32(1676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bdb6:{NFSU2_TR(0x62bdb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bdb8:{NFSU2_TR(0x62bdb8);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bdbc:{NFSU2_TR(0x62bdbc);
{u32 ea_=u32(r4(G+16)+u32(1628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bdc3:{NFSU2_TR(0x62bdc3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bdc5:{NFSU2_TR(0x62bdc5);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bdcc:{NFSU2_TR(0x62bdcc);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bdd0:{NFSU2_TR(0x62bdd0);
{u32 ea_=u32(r4(G+16)+u32(1648u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bdd7:{NFSU2_TR(0x62bdd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62bddb:{NFSU2_TR(0x62bddb);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bddf:{NFSU2_TR(0x62bddf);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62bde0:{NFSU2_TR(0x62bde0);
{u32 ea_=u32(r4(G+16)+u32(1668u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bde7:{NFSU2_TR(0x62bde7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62bdeb:{NFSU2_TR(0x62bdeb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62bdec:{NFSU2_TR(0x62bdec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bdee:{NFSU2_TR(0x62bdee);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bdf2:{NFSU2_TR(0x62bdf2);
{u32 ea_=u32(r4(G+16)+u32(1688u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bdf9:{NFSU2_TR(0x62bdf9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bdfb:{NFSU2_TR(0x62bdfb);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bdff:{NFSU2_TR(0x62bdff);
{u32 ea_=u32(r4(G+16)+u32(1640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be06:{NFSU2_TR(0x62be06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be08:{NFSU2_TR(0x62be08);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62be0f:{NFSU2_TR(0x62be0f);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be13:{NFSU2_TR(0x62be13);
{u32 ea_=u32(r4(G+16)+u32(1676u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be1a:{NFSU2_TR(0x62be1a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be1e:{NFSU2_TR(0x62be1e);
{u32 ea_=u32(r4(G+16)+u32(1692u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be25:{NFSU2_TR(0x62be25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be27:{NFSU2_TR(0x62be27);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be2b:{NFSU2_TR(0x62be2b);
{u32 ea_=u32(r4(G+16)+u32(1644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be32:{NFSU2_TR(0x62be32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be34:{NFSU2_TR(0x62be34);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be38:{NFSU2_TR(0x62be38);
{u32 ea_=u32(r4(G+16)+u32(1660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be3f:{NFSU2_TR(0x62be3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be41:{NFSU2_TR(0x62be41);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62be48:{NFSU2_TR(0x62be48);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62be4dull));
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
PN u32 blk_62be4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62be4d:L62be4d:{bud-=129;NFSU2_TR(0x62be4d);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be51:{NFSU2_TR(0x62be51);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be54:{NFSU2_TR(0x62be54);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be58:{NFSU2_TR(0x62be58);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be5b:{NFSU2_TR(0x62be5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be5d:{NFSU2_TR(0x62be5d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be61:{NFSU2_TR(0x62be61);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be64:{NFSU2_TR(0x62be64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be66:{NFSU2_TR(0x62be66);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be6a:{NFSU2_TR(0x62be6a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be6c:{NFSU2_TR(0x62be6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be6e:{NFSU2_TR(0x62be6e);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62be75:{NFSU2_TR(0x62be75);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be79:{NFSU2_TR(0x62be79);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be7c:{NFSU2_TR(0x62be7c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be80:{NFSU2_TR(0x62be80);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be83:{NFSU2_TR(0x62be83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be85:{NFSU2_TR(0x62be85);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be89:{NFSU2_TR(0x62be89);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be8c:{NFSU2_TR(0x62be8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be8e:{NFSU2_TR(0x62be8e);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62be92:{NFSU2_TR(0x62be92);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62be95:{NFSU2_TR(0x62be95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62be97:{NFSU2_TR(0x62be97);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62be9e:{NFSU2_TR(0x62be9e);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bea2:{NFSU2_TR(0x62bea2);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bea5:{NFSU2_TR(0x62bea5);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bea9:{NFSU2_TR(0x62bea9);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62beac:{NFSU2_TR(0x62beac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62beae:{NFSU2_TR(0x62beae);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62beb2:{NFSU2_TR(0x62beb2);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62beb5:{NFSU2_TR(0x62beb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62beb7:{NFSU2_TR(0x62beb7);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bebb:{NFSU2_TR(0x62bebb);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bebe:{NFSU2_TR(0x62bebe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bec0:{NFSU2_TR(0x62bec0);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bec7:{NFSU2_TR(0x62bec7);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62becb:{NFSU2_TR(0x62becb);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bece:{NFSU2_TR(0x62bece);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bed2:{NFSU2_TR(0x62bed2);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bed5:{NFSU2_TR(0x62bed5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bed7:{NFSU2_TR(0x62bed7);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bedb:{NFSU2_TR(0x62bedb);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bede:{NFSU2_TR(0x62bede);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bee0:{NFSU2_TR(0x62bee0);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bee4:{NFSU2_TR(0x62bee4);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bee7:{NFSU2_TR(0x62bee7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bee9:{NFSU2_TR(0x62bee9);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bef0:{NFSU2_TR(0x62bef0);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bef4:{NFSU2_TR(0x62bef4);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bef7:{NFSU2_TR(0x62bef7);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62befb:{NFSU2_TR(0x62befb);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62befe:{NFSU2_TR(0x62befe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf00:{NFSU2_TR(0x62bf00);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf04:{NFSU2_TR(0x62bf04);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf07:{NFSU2_TR(0x62bf07);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf09:{NFSU2_TR(0x62bf09);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf0d:{NFSU2_TR(0x62bf0d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf0f:{NFSU2_TR(0x62bf0f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf11:{NFSU2_TR(0x62bf11);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bf18:{NFSU2_TR(0x62bf18);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf1c:{NFSU2_TR(0x62bf1c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf1f:{NFSU2_TR(0x62bf1f);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf23:{NFSU2_TR(0x62bf23);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf26:{NFSU2_TR(0x62bf26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf28:{NFSU2_TR(0x62bf28);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf2c:{NFSU2_TR(0x62bf2c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf2f:{NFSU2_TR(0x62bf2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf31:{NFSU2_TR(0x62bf31);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf35:{NFSU2_TR(0x62bf35);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf38:{NFSU2_TR(0x62bf38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf3a:{NFSU2_TR(0x62bf3a);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bf41:{NFSU2_TR(0x62bf41);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf45:{NFSU2_TR(0x62bf45);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf48:{NFSU2_TR(0x62bf48);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf4c:{NFSU2_TR(0x62bf4c);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf4f:{NFSU2_TR(0x62bf4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf51:{NFSU2_TR(0x62bf51);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf55:{NFSU2_TR(0x62bf55);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf58:{NFSU2_TR(0x62bf58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf5a:{NFSU2_TR(0x62bf5a);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf5e:{NFSU2_TR(0x62bf5e);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf61:{NFSU2_TR(0x62bf61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf63:{NFSU2_TR(0x62bf63);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bf6a:{NFSU2_TR(0x62bf6a);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf6e:{NFSU2_TR(0x62bf6e);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf71:{NFSU2_TR(0x62bf71);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf75:{NFSU2_TR(0x62bf75);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf78:{NFSU2_TR(0x62bf78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf7a:{NFSU2_TR(0x62bf7a);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf7e:{NFSU2_TR(0x62bf7e);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf81:{NFSU2_TR(0x62bf81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf83:{NFSU2_TR(0x62bf83);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf87:{NFSU2_TR(0x62bf87);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf8a:{NFSU2_TR(0x62bf8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bf8c:{NFSU2_TR(0x62bf8c);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bf93:{NFSU2_TR(0x62bf93);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf97:{NFSU2_TR(0x62bf97);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bf9a:{NFSU2_TR(0x62bf9a);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bf9e:{NFSU2_TR(0x62bf9e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfa1:{NFSU2_TR(0x62bfa1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bfa3:{NFSU2_TR(0x62bfa3);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfa7:{NFSU2_TR(0x62bfa7);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfaa:{NFSU2_TR(0x62bfaa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bfac:{NFSU2_TR(0x62bfac);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfb0:{NFSU2_TR(0x62bfb0);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfb2:{NFSU2_TR(0x62bfb2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bfb4:{NFSU2_TR(0x62bfb4);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bfbb:{NFSU2_TR(0x62bfbb);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfbf:{NFSU2_TR(0x62bfbf);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfc2:{NFSU2_TR(0x62bfc2);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfc6:{NFSU2_TR(0x62bfc6);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfc9:{NFSU2_TR(0x62bfc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bfcb:{NFSU2_TR(0x62bfcb);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfcf:{NFSU2_TR(0x62bfcf);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfd2:{NFSU2_TR(0x62bfd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bfd4:{NFSU2_TR(0x62bfd4);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfd8:{NFSU2_TR(0x62bfd8);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfdb:{NFSU2_TR(0x62bfdb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bfdd:{NFSU2_TR(0x62bfdd);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62bfe4:{NFSU2_TR(0x62bfe4);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfe8:{NFSU2_TR(0x62bfe8);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bfeb:{NFSU2_TR(0x62bfeb);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bfef:{NFSU2_TR(0x62bfef);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bff2:{NFSU2_TR(0x62bff2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bff4:{NFSU2_TR(0x62bff4);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62bff8:{NFSU2_TR(0x62bff8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62bffb:{NFSU2_TR(0x62bffb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62bffd:{NFSU2_TR(0x62bffd);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{EXIT(0x62c001u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_62b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x62b321:[[clang::musttail]] return blk_62b321(c,a4,a0,a1,bud);
case 0x62b5c7:[[clang::musttail]] return blk_62b5c7(c,a4,a0,a1,bud);
case 0x62b600:[[clang::musttail]] return blk_62b600(c,a4,a0,a1,bud);
case 0x62b62d:[[clang::musttail]] return blk_62b62d(c,a4,a0,a1,bud);
case 0x62b64e:[[clang::musttail]] return blk_62b64e(c,a4,a0,a1,bud);
case 0x62b692:[[clang::musttail]] return blk_62b692(c,a4,a0,a1,bud);
case 0x62bab4:[[clang::musttail]] return blk_62bab4(c,a4,a0,a1,bud);
case 0x62be4d:[[clang::musttail]] return blk_62be4d(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_62b(Cpu& c){u8* R=c.regs.data();return ent_62b(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
