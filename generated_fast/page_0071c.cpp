#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_missing(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c205(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c218(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c221(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c1d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c226(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c917(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71c001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c001:L71c001:{bud-=140;NFSU2_TR(0x71c001);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71c004:{NFSU2_TR(0x71c004);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c007:{NFSU2_TR(0x71c007);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71c00a:{NFSU2_TR(0x71c00a);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71c00d:{NFSU2_TR(0x71c00d);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c010:{NFSU2_TR(0x71c010);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71c013:{NFSU2_TR(0x71c013);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(U+8))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(U+10))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(U+12))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(U+14))));
}
B71c016:{NFSU2_TR(0x71c016);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c019:{NFSU2_TR(0x71c019);
__builtin_memmove((R+4416),(R+4448),8);
}
B71c01c:{NFSU2_TR(0x71c01c);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c01f:{NFSU2_TR(0x71c01f);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c022:{NFSU2_TR(0x71c022);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71c025:{NFSU2_TR(0x71c025);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c029:{NFSU2_TR(0x71c029);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71c02c:{NFSU2_TR(0x71c02c);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71c02f:{NFSU2_TR(0x71c02f);
}
B71c030:{NFSU2_TR(0x71c030);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c034:{NFSU2_TR(0x71c034);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c037:{NFSU2_TR(0x71c037);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c03a:{NFSU2_TR(0x71c03a);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71c03e:{NFSU2_TR(0x71c03e);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c041:{NFSU2_TR(0x71c041);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71c045:{NFSU2_TR(0x71c045);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c049:{NFSU2_TR(0x71c049);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71c04c:{NFSU2_TR(0x71c04c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c050:{NFSU2_TR(0x71c050);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71c053:{NFSU2_TR(0x71c053);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c057:{NFSU2_TR(0x71c057);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c05a:{NFSU2_TR(0x71c05a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71c05e:{NFSU2_TR(0x71c05e);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c061:{NFSU2_TR(0x71c061);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c064:{NFSU2_TR(0x71c064);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71c068:{NFSU2_TR(0x71c068);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71c06b:{NFSU2_TR(0x71c06b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71c06f:{NFSU2_TR(0x71c06f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71c073:{NFSU2_TR(0x71c073);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71c076:{NFSU2_TR(0x71c076);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71c079:{NFSU2_TR(0x71c079);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71c07d:{NFSU2_TR(0x71c07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c081:{NFSU2_TR(0x71c081);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71c085:{NFSU2_TR(0x71c085);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c089:{NFSU2_TR(0x71c089);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71c08c:{NFSU2_TR(0x71c08c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c090:{NFSU2_TR(0x71c090);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71c093:{NFSU2_TR(0x71c093);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c096:{NFSU2_TR(0x71c096);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71c09a:{NFSU2_TR(0x71c09a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c09e:{NFSU2_TR(0x71c09e);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71c0a2:{NFSU2_TR(0x71c0a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c0a6:{NFSU2_TR(0x71c0a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c0aa:{NFSU2_TR(0x71c0aa);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71c0ad:{NFSU2_TR(0x71c0ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c0b1:{NFSU2_TR(0x71c0b1);
}
B71c0b2:{NFSU2_TR(0x71c0b2);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c0b6:{NFSU2_TR(0x71c0b6);
__builtin_memmove((R+4416),(R+4384),8);
}
B71c0b9:{NFSU2_TR(0x71c0b9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c0bd:{NFSU2_TR(0x71c0bd);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71c0c0:{NFSU2_TR(0x71c0c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c0c4:{NFSU2_TR(0x71c0c4);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c0c7:{NFSU2_TR(0x71c0c7);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c0cb:{NFSU2_TR(0x71c0cb);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71c0ce:{NFSU2_TR(0x71c0ce);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71c0d1:{NFSU2_TR(0x71c0d1);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c0d4:{NFSU2_TR(0x71c0d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c0d8:{NFSU2_TR(0x71c0d8);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71c0db:{NFSU2_TR(0x71c0db);
__builtin_memmove((R+4368),(R+4432),8);
}
B71c0de:{NFSU2_TR(0x71c0de);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71c0e1:{NFSU2_TR(0x71c0e1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B71c0e5:{NFSU2_TR(0x71c0e5);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c0e8:{NFSU2_TR(0x71c0e8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71c0ec:{NFSU2_TR(0x71c0ec);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c0ef:{NFSU2_TR(0x71c0ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c0f3:{NFSU2_TR(0x71c0f3);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71c0f6:{NFSU2_TR(0x71c0f6);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71c0f9:{NFSU2_TR(0x71c0f9);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71c0fc:{NFSU2_TR(0x71c0fc);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71c100:{NFSU2_TR(0x71c100);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71c103:{NFSU2_TR(0x71c103);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c107:{NFSU2_TR(0x71c107);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71c10a:{NFSU2_TR(0x71c10a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c10e:{NFSU2_TR(0x71c10e);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c111:{NFSU2_TR(0x71c111);
__builtin_memmove((R+4432),(R+4400),8);
}
B71c114:{NFSU2_TR(0x71c114);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c117:{NFSU2_TR(0x71c117);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c11b:{NFSU2_TR(0x71c11b);
__builtin_memmove((R+4384),(R+4352),8);
}
B71c11e:{NFSU2_TR(0x71c11e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c122:{NFSU2_TR(0x71c122);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c125:{NFSU2_TR(0x71c125);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71c128:{NFSU2_TR(0x71c128);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71c12b:{NFSU2_TR(0x71c12b);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c12e:{NFSU2_TR(0x71c12e);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71c131:{NFSU2_TR(0x71c131);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(U+12))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(U+14))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(U+16))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(U+18))));
}
B71c135:{NFSU2_TR(0x71c135);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c138:{NFSU2_TR(0x71c138);
__builtin_memmove((R+4416),(R+4448),8);
}
B71c13b:{NFSU2_TR(0x71c13b);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c13e:{NFSU2_TR(0x71c13e);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c141:{NFSU2_TR(0x71c141);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71c144:{NFSU2_TR(0x71c144);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c148:{NFSU2_TR(0x71c148);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71c14b:{NFSU2_TR(0x71c14b);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71c14e:{NFSU2_TR(0x71c14e);
}
B71c14f:{NFSU2_TR(0x71c14f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c153:{NFSU2_TR(0x71c153);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c156:{NFSU2_TR(0x71c156);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c159:{NFSU2_TR(0x71c159);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71c15d:{NFSU2_TR(0x71c15d);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c160:{NFSU2_TR(0x71c160);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71c164:{NFSU2_TR(0x71c164);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c168:{NFSU2_TR(0x71c168);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71c16b:{NFSU2_TR(0x71c16b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c16f:{NFSU2_TR(0x71c16f);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71c172:{NFSU2_TR(0x71c172);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c176:{NFSU2_TR(0x71c176);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c179:{NFSU2_TR(0x71c179);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71c17d:{NFSU2_TR(0x71c17d);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c180:{NFSU2_TR(0x71c180);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c183:{NFSU2_TR(0x71c183);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71c187:{NFSU2_TR(0x71c187);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71c18a:{NFSU2_TR(0x71c18a);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71c18e:{NFSU2_TR(0x71c18e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71c192:{NFSU2_TR(0x71c192);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71c195:{NFSU2_TR(0x71c195);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71c198:{NFSU2_TR(0x71c198);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71c19c:{NFSU2_TR(0x71c19c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c1a0:{NFSU2_TR(0x71c1a0);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71c1a4:{NFSU2_TR(0x71c1a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c1a8:{NFSU2_TR(0x71c1a8);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71c1ab:{NFSU2_TR(0x71c1ab);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c1af:{NFSU2_TR(0x71c1af);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71c1b2:{NFSU2_TR(0x71c1b2);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c1b5:{NFSU2_TR(0x71c1b5);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71c1b9:{NFSU2_TR(0x71c1b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c1bd:{NFSU2_TR(0x71c1bd);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71c1c1:{NFSU2_TR(0x71c1c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c1c5:{NFSU2_TR(0x71c1c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c1c9:{NFSU2_TR(0x71c1c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c1cd:{NFSU2_TR(0x71c1cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71c1ce:{NFSU2_TR(0x71c1ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71c1cf:{NFSU2_TR(0x71c1cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71c1d0:{NFSU2_TR(0x71c1d0);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_71c1d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c1d1:L71c1d1:{bud-=6;NFSU2_TR(0x71c1d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c1d2:{NFSU2_TR(0x71c1d2);
__builtin_memmove((R+20),(G+16),4);
}
B71c1d4:{NFSU2_TR(0x71c1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71c1d7:{NFSU2_TR(0x71c1d7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
__builtin_memmove((G+4),(U+0),2);
}
B71c1da:{NFSU2_TR(0x71c1da);
u8 U[2];
w2(U+0,u16(u32(r2(G+4))&u32(r2(G+4))));
w1(F+6,u8((r2(U+0))==(u16(0x0ull))));
}
B71c1dd:{NFSU2_TR(0x71c1dd);
if(r1(F+6)){{[[clang::musttail]] return blk_71c218(ARGS);}}
}
B71c1df:L71c1df:{bud-=12;NFSU2_TR(0x71c1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71c1e2:{NFSU2_TR(0x71c1e2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
w4(G+0,u32(s32(s16(r2(U+0)))));
}
B71c1e5:{NFSU2_TR(0x71c1e5);
w4(G+4,u32(s32(s16(r2(G+4)))));
}
B71c1e8:{NFSU2_TR(0x71c1e8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B71c1eb:{NFSU2_TR(0x71c1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71c1ee:{NFSU2_TR(0x71c1ee);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0xfull))));
}
B71c1f1:{NFSU2_TR(0x71c1f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B71c1f4:{NFSU2_TR(0x71c1f4);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffffull))));
}
B71c1f9:{NFSU2_TR(0x71c1f9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c1fb:{NFSU2_TR(0x71c1fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(u32(0x10001ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B71c201:{NFSU2_TR(0x71c201);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B71c204:{NFSU2_TR(0x71c204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
{[[clang::musttail]] return blk_71c205(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_71c205(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c205:L71c205:{bud-=7;NFSU2_TR(0x71c205);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71c208:{NFSU2_TR(0x71c208);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71c20b:{NFSU2_TR(0x71c20b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B71c20d:{NFSU2_TR(0x71c20d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71c210:{NFSU2_TR(0x71c210);
w1(F+0,carry<u32>(r4(G+4),u32(0x10ull)));
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B71c213:{NFSU2_TR(0x71c213);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71c214:{NFSU2_TR(0x71c214);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71c205u);}goto L71c205;}}
}
B71c216:L71c216:{bud-=2;NFSU2_TR(0x71c216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71c217:{NFSU2_TR(0x71c217);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_71c218(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c218:L71c218:{bud-=5;NFSU2_TR(0x71c218);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c219:{NFSU2_TR(0x71c219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71c21c:{NFSU2_TR(0x71c21c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c21e:{NFSU2_TR(0x71c21e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71c21f:{NFSU2_TR(0x71c21f);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71c221(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_71c221(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c221:L71c221:{bud-=1;NFSU2_TR(0x71c221);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_71c223(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71c221u);}goto L71c221;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_71c223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c223:L71c223:{bud-=3;NFSU2_TR(0x71c223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71c224:{NFSU2_TR(0x71c224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71c225:{NFSU2_TR(0x71c225);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_71c226(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c226:L71c226:{bud-=533;NFSU2_TR(0x71c226);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c227:{NFSU2_TR(0x71c227);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c228:{NFSU2_TR(0x71c228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c229:{NFSU2_TR(0x71c229);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71c22d:{NFSU2_TR(0x71c22d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71c231:{NFSU2_TR(0x71c231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+4),(U+0),4);
}
B71c233:{NFSU2_TR(0x71c233);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c236:{NFSU2_TR(0x71c236);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71c239:{NFSU2_TR(0x71c239);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c23c:{NFSU2_TR(0x71c23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71c23f:{NFSU2_TR(0x71c23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c242:{NFSU2_TR(0x71c242);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c246:{NFSU2_TR(0x71c246);
w4(G+4,u32(0x8b98e0ull));
}
B71c24c:{NFSU2_TR(0x71c24c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71c24f:{NFSU2_TR(0x71c24f);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+8))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+10))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+12))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+14))));
}
B71c252:{NFSU2_TR(0x71c252);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c256:{NFSU2_TR(0x71c256);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71c25a:{NFSU2_TR(0x71c25a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c25e:{NFSU2_TR(0x71c25e);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(U+12))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(U+14))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(U+16))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(U+18))));
}
B71c262:{NFSU2_TR(0x71c262);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c266:{NFSU2_TR(0x71c266);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+18))));
}
B71c26a:{NFSU2_TR(0x71c26a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c26e:{NFSU2_TR(0x71c26e);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+18))));
}
B71c272:{NFSU2_TR(0x71c272);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c276:{NFSU2_TR(0x71c276);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71c27a:{NFSU2_TR(0x71c27a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c27e:{NFSU2_TR(0x71c27e);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+12))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+14))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+16))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+18))));
}
B71c282:{NFSU2_TR(0x71c282);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c286:{NFSU2_TR(0x71c286);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+18))));
}
B71c28a:{NFSU2_TR(0x71c28a);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71c28d:{NFSU2_TR(0x71c28d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c291:{NFSU2_TR(0x71c291);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c295:{NFSU2_TR(0x71c295);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c299:{NFSU2_TR(0x71c299);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c29d:{NFSU2_TR(0x71c29d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2a1:{NFSU2_TR(0x71c2a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2a5:{NFSU2_TR(0x71c2a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2a9:{NFSU2_TR(0x71c2a9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c2ad:{NFSU2_TR(0x71c2ad);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+18))));
}
B71c2b1:{NFSU2_TR(0x71c2b1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c2b5:{NFSU2_TR(0x71c2b5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71c2b9:{NFSU2_TR(0x71c2b9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c2bd:{NFSU2_TR(0x71c2bd);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(U+12))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(U+14))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(U+16))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(U+18))));
}
B71c2c1:{NFSU2_TR(0x71c2c1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c2c5:{NFSU2_TR(0x71c2c5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+18))));
}
B71c2c9:{NFSU2_TR(0x71c2c9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c2cd:{NFSU2_TR(0x71c2cd);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+18))));
}
B71c2d1:{NFSU2_TR(0x71c2d1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c2d5:{NFSU2_TR(0x71c2d5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+18))));
}
B71c2d9:{NFSU2_TR(0x71c2d9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c2dd:{NFSU2_TR(0x71c2dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+12))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+14))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+16))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+18))));
}
B71c2e1:{NFSU2_TR(0x71c2e1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c2e5:{NFSU2_TR(0x71c2e5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+18))));
}
B71c2e9:{NFSU2_TR(0x71c2e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2ed:{NFSU2_TR(0x71c2ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2f1:{NFSU2_TR(0x71c2f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2f5:{NFSU2_TR(0x71c2f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2f9:{NFSU2_TR(0x71c2f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c2fd:{NFSU2_TR(0x71c2fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c301:{NFSU2_TR(0x71c301);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c305:{NFSU2_TR(0x71c305);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c309:{NFSU2_TR(0x71c309);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c30d:{NFSU2_TR(0x71c30d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c311:{NFSU2_TR(0x71c311);
__builtin_memmove((R+4416),(R+4384),8);
}
B71c314:{NFSU2_TR(0x71c314);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c318:{NFSU2_TR(0x71c318);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71c31b:{NFSU2_TR(0x71c31b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c31f:{NFSU2_TR(0x71c31f);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71c322:{NFSU2_TR(0x71c322);
__builtin_memmove((R+4432),(R+4368),8);
}
B71c325:{NFSU2_TR(0x71c325);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c328:{NFSU2_TR(0x71c328);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c32c:{NFSU2_TR(0x71c32c);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71c32f:{NFSU2_TR(0x71c32f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c333:{NFSU2_TR(0x71c333);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71c336:{NFSU2_TR(0x71c336);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71c339:{NFSU2_TR(0x71c339);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c33c:{NFSU2_TR(0x71c33c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c340:{NFSU2_TR(0x71c340);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71c343:{NFSU2_TR(0x71c343);
__builtin_memmove((R+4432),(R+4352),8);
}
B71c346:{NFSU2_TR(0x71c346);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71c349:{NFSU2_TR(0x71c349);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c34c:{NFSU2_TR(0x71c34c);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c34f:{NFSU2_TR(0x71c34f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c353:{NFSU2_TR(0x71c353);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c356:{NFSU2_TR(0x71c356);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71c359:{NFSU2_TR(0x71c359);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71c35c:{NFSU2_TR(0x71c35c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c360:{NFSU2_TR(0x71c360);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71c363:{NFSU2_TR(0x71c363);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71c366:{NFSU2_TR(0x71c366);
__builtin_memmove((R+4368),(R+4384),8);
}
B71c369:{NFSU2_TR(0x71c369);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c36d:{NFSU2_TR(0x71c36d);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71c370:{NFSU2_TR(0x71c370);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c374:{NFSU2_TR(0x71c374);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c377:{NFSU2_TR(0x71c377);
__builtin_memmove((R+4464),(R+4432),8);
}
B71c37a:{NFSU2_TR(0x71c37a);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c37d:{NFSU2_TR(0x71c37d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71c381:{NFSU2_TR(0x71c381);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c384:{NFSU2_TR(0x71c384);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71c388:{NFSU2_TR(0x71c388);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71c38b:{NFSU2_TR(0x71c38b);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71c38e:{NFSU2_TR(0x71c38e);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71c391:{NFSU2_TR(0x71c391);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71c394:{NFSU2_TR(0x71c394);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71c397:{NFSU2_TR(0x71c397);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c39b:{NFSU2_TR(0x71c39b);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c39e:{NFSU2_TR(0x71c39e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c3a2:{NFSU2_TR(0x71c3a2);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c3a5:{NFSU2_TR(0x71c3a5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c3a9:{NFSU2_TR(0x71c3a9);
__builtin_memmove((R+4432),(R+4400),8);
}
B71c3ac:{NFSU2_TR(0x71c3ac);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c3af:{NFSU2_TR(0x71c3af);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71c3b2:{NFSU2_TR(0x71c3b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c3b6:{NFSU2_TR(0x71c3b6);
__builtin_memmove((R+4384),(R+4352),8);
}
B71c3b9:{NFSU2_TR(0x71c3b9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71c3bc:{NFSU2_TR(0x71c3bc);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c3bf:{NFSU2_TR(0x71c3bf);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71c3c2:{NFSU2_TR(0x71c3c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c3c6:{NFSU2_TR(0x71c3c6);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c3c9:{NFSU2_TR(0x71c3c9);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71c3cc:{NFSU2_TR(0x71c3cc);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c3cf:{NFSU2_TR(0x71c3cf);
__builtin_memmove((R+4352),(R+4448),8);
}
B71c3d2:{NFSU2_TR(0x71c3d2);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71c3d5:{NFSU2_TR(0x71c3d5);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c3d8:{NFSU2_TR(0x71c3d8);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c3db:{NFSU2_TR(0x71c3db);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71c3de:{NFSU2_TR(0x71c3de);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c3e1:{NFSU2_TR(0x71c3e1);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c3e4:{NFSU2_TR(0x71c3e4);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71c3e7:{NFSU2_TR(0x71c3e7);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c3ea:{NFSU2_TR(0x71c3ea);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71c3ed:{NFSU2_TR(0x71c3ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c3f1:{NFSU2_TR(0x71c3f1);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71c3f4:{NFSU2_TR(0x71c3f4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71c3f7:{NFSU2_TR(0x71c3f7);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71c3fa:{NFSU2_TR(0x71c3fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c3fe:{NFSU2_TR(0x71c3fe);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c401:{NFSU2_TR(0x71c401);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c404:{NFSU2_TR(0x71c404);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71c407:{NFSU2_TR(0x71c407);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c40a:{NFSU2_TR(0x71c40a);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71c40d:{NFSU2_TR(0x71c40d);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c410:{NFSU2_TR(0x71c410);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c413:{NFSU2_TR(0x71c413);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71c416:{NFSU2_TR(0x71c416);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71c419:{NFSU2_TR(0x71c419);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c41c:{NFSU2_TR(0x71c41c);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71c41f:{NFSU2_TR(0x71c41f);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71c422:{NFSU2_TR(0x71c422);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71c425:{NFSU2_TR(0x71c425);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c429:{NFSU2_TR(0x71c429);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c42c:{NFSU2_TR(0x71c42c);
__builtin_memmove((R+4368),(R+4416),8);
}
B71c42f:{NFSU2_TR(0x71c42f);
__builtin_memmove((R+4422),(R+4434),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4432),2);
}
B71c432:{NFSU2_TR(0x71c432);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71c435:{NFSU2_TR(0x71c435);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4436),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4438),2);
}
B71c438:{NFSU2_TR(0x71c438);
__builtin_memmove((R+4352),(R+4448),8);
}
B71c43b:{NFSU2_TR(0x71c43b);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B71c43e:{NFSU2_TR(0x71c43e);
__builtin_memmove((R+4432),(R+4416),8);
}
B71c441:{NFSU2_TR(0x71c441);
__builtin_memmove((R+4420),(R+4448),4);
}
B71c444:{NFSU2_TR(0x71c444);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B71c447:{NFSU2_TR(0x71c447);
__builtin_memmove((R+4448),(R+4368),8);
}
B71c44a:{NFSU2_TR(0x71c44a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c44e:{NFSU2_TR(0x71c44e);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4468),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4470),2);
}
B71c451:{NFSU2_TR(0x71c451);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c455:{NFSU2_TR(0x71c455);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4356),4);
}
B71c458:{NFSU2_TR(0x71c458);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71c45b:{NFSU2_TR(0x71c45b);
__builtin_memmove((R+4372),(R+4352),4);
}
B71c45e:{NFSU2_TR(0x71c45e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c462:{NFSU2_TR(0x71c462);
__builtin_memmove((R+4352),(R+4416),8);
}
B71c465:{NFSU2_TR(0x71c465);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c469:{NFSU2_TR(0x71c469);
__builtin_memmove((R+4358),(R+4434),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4432),2);
}
B71c46c:{NFSU2_TR(0x71c46c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c470:{NFSU2_TR(0x71c470);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71c473:{NFSU2_TR(0x71c473);
__builtin_memmove((R+4432),(R+4384),8);
}
B71c476:{NFSU2_TR(0x71c476);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B71c479:{NFSU2_TR(0x71c479);
__builtin_memmove((R+4368),(R+4352),8);
}
B71c47c:{NFSU2_TR(0x71c47c);
__builtin_memmove((R+4356),(R+4384),4);
}
B71c47f:{NFSU2_TR(0x71c47f);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B71c482:{NFSU2_TR(0x71c482);
__builtin_memmove((R+4384),(R+4416),8);
}
B71c485:{NFSU2_TR(0x71c485);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71c488:{NFSU2_TR(0x71c488);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B71c48b:{NFSU2_TR(0x71c48b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c48f:{NFSU2_TR(0x71c48f);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B71c492:{NFSU2_TR(0x71c492);
__builtin_memmove((R+4388),(R+4432),4);
}
B71c495:{NFSU2_TR(0x71c495);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c499:{NFSU2_TR(0x71c499);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c49d:{NFSU2_TR(0x71c49d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c4a1:{NFSU2_TR(0x71c4a1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c4a5:{NFSU2_TR(0x71c4a5);
__builtin_memmove((R+4416),(R+4384),8);
}
B71c4a8:{NFSU2_TR(0x71c4a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c4ac:{NFSU2_TR(0x71c4ac);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71c4af:{NFSU2_TR(0x71c4af);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c4b3:{NFSU2_TR(0x71c4b3);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71c4b6:{NFSU2_TR(0x71c4b6);
__builtin_memmove((R+4432),(R+4368),8);
}
B71c4b9:{NFSU2_TR(0x71c4b9);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c4bc:{NFSU2_TR(0x71c4bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c4c0:{NFSU2_TR(0x71c4c0);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71c4c3:{NFSU2_TR(0x71c4c3);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c4c7:{NFSU2_TR(0x71c4c7);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71c4ca:{NFSU2_TR(0x71c4ca);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71c4cd:{NFSU2_TR(0x71c4cd);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c4d0:{NFSU2_TR(0x71c4d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c4d4:{NFSU2_TR(0x71c4d4);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71c4d7:{NFSU2_TR(0x71c4d7);
__builtin_memmove((R+4432),(R+4352),8);
}
B71c4da:{NFSU2_TR(0x71c4da);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71c4dd:{NFSU2_TR(0x71c4dd);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c4e0:{NFSU2_TR(0x71c4e0);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c4e3:{NFSU2_TR(0x71c4e3);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c4e7:{NFSU2_TR(0x71c4e7);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c4ea:{NFSU2_TR(0x71c4ea);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71c4ed:{NFSU2_TR(0x71c4ed);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71c4f0:{NFSU2_TR(0x71c4f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c4f4:{NFSU2_TR(0x71c4f4);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71c4f7:{NFSU2_TR(0x71c4f7);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71c4fa:{NFSU2_TR(0x71c4fa);
__builtin_memmove((R+4368),(R+4384),8);
}
B71c4fd:{NFSU2_TR(0x71c4fd);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c501:{NFSU2_TR(0x71c501);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71c504:{NFSU2_TR(0x71c504);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c508:{NFSU2_TR(0x71c508);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c50b:{NFSU2_TR(0x71c50b);
__builtin_memmove((R+4464),(R+4432),8);
}
B71c50e:{NFSU2_TR(0x71c50e);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c511:{NFSU2_TR(0x71c511);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71c515:{NFSU2_TR(0x71c515);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c518:{NFSU2_TR(0x71c518);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71c51c:{NFSU2_TR(0x71c51c);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71c51f:{NFSU2_TR(0x71c51f);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71c522:{NFSU2_TR(0x71c522);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71c525:{NFSU2_TR(0x71c525);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71c528:{NFSU2_TR(0x71c528);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71c52b:{NFSU2_TR(0x71c52b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c52f:{NFSU2_TR(0x71c52f);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c532:{NFSU2_TR(0x71c532);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c536:{NFSU2_TR(0x71c536);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c539:{NFSU2_TR(0x71c539);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c53d:{NFSU2_TR(0x71c53d);
__builtin_memmove((R+4432),(R+4400),8);
}
B71c540:{NFSU2_TR(0x71c540);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c543:{NFSU2_TR(0x71c543);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71c546:{NFSU2_TR(0x71c546);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c54a:{NFSU2_TR(0x71c54a);
__builtin_memmove((R+4384),(R+4352),8);
}
B71c54d:{NFSU2_TR(0x71c54d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c551:{NFSU2_TR(0x71c551);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c554:{NFSU2_TR(0x71c554);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71c557:{NFSU2_TR(0x71c557);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c55b:{NFSU2_TR(0x71c55b);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c55e:{NFSU2_TR(0x71c55e);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71c561:{NFSU2_TR(0x71c561);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c564:{NFSU2_TR(0x71c564);
__builtin_memmove((R+4352),(R+4448),8);
}
B71c567:{NFSU2_TR(0x71c567);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71c56a:{NFSU2_TR(0x71c56a);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c56d:{NFSU2_TR(0x71c56d);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c570:{NFSU2_TR(0x71c570);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71c573:{NFSU2_TR(0x71c573);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c576:{NFSU2_TR(0x71c576);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c579:{NFSU2_TR(0x71c579);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71c57c:{NFSU2_TR(0x71c57c);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c57f:{NFSU2_TR(0x71c57f);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71c582:{NFSU2_TR(0x71c582);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c586:{NFSU2_TR(0x71c586);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71c589:{NFSU2_TR(0x71c589);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71c58c:{NFSU2_TR(0x71c58c);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71c58f:{NFSU2_TR(0x71c58f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c593:{NFSU2_TR(0x71c593);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c596:{NFSU2_TR(0x71c596);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c599:{NFSU2_TR(0x71c599);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71c59c:{NFSU2_TR(0x71c59c);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c59f:{NFSU2_TR(0x71c59f);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71c5a2:{NFSU2_TR(0x71c5a2);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c5a5:{NFSU2_TR(0x71c5a5);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c5a8:{NFSU2_TR(0x71c5a8);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71c5ab:{NFSU2_TR(0x71c5ab);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71c5ae:{NFSU2_TR(0x71c5ae);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c5b1:{NFSU2_TR(0x71c5b1);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71c5b4:{NFSU2_TR(0x71c5b4);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71c5b7:{NFSU2_TR(0x71c5b7);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71c5ba:{NFSU2_TR(0x71c5ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c5be:{NFSU2_TR(0x71c5be);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c5c1:{NFSU2_TR(0x71c5c1);
__builtin_memmove((R+4368),(R+4416),8);
}
B71c5c4:{NFSU2_TR(0x71c5c4);
__builtin_memmove((R+4422),(R+4434),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4432),2);
}
B71c5c7:{NFSU2_TR(0x71c5c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c5cb:{NFSU2_TR(0x71c5cb);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4436),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4438),2);
}
B71c5ce:{NFSU2_TR(0x71c5ce);
__builtin_memmove((R+4352),(R+4448),8);
}
B71c5d1:{NFSU2_TR(0x71c5d1);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B71c5d4:{NFSU2_TR(0x71c5d4);
__builtin_memmove((R+4432),(R+4416),8);
}
B71c5d7:{NFSU2_TR(0x71c5d7);
__builtin_memmove((R+4420),(R+4448),4);
}
B71c5da:{NFSU2_TR(0x71c5da);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B71c5dd:{NFSU2_TR(0x71c5dd);
__builtin_memmove((R+4448),(R+4368),8);
}
B71c5e0:{NFSU2_TR(0x71c5e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c5e4:{NFSU2_TR(0x71c5e4);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4468),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4470),2);
}
B71c5e7:{NFSU2_TR(0x71c5e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c5eb:{NFSU2_TR(0x71c5eb);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4356),4);
}
B71c5ee:{NFSU2_TR(0x71c5ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c5f2:{NFSU2_TR(0x71c5f2);
__builtin_memmove((R+4372),(R+4352),4);
}
B71c5f5:{NFSU2_TR(0x71c5f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c5f9:{NFSU2_TR(0x71c5f9);
__builtin_memmove((R+4352),(R+4416),8);
}
B71c5fc:{NFSU2_TR(0x71c5fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c600:{NFSU2_TR(0x71c600);
__builtin_memmove((R+4358),(R+4434),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4432),2);
}
B71c603:{NFSU2_TR(0x71c603);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c607:{NFSU2_TR(0x71c607);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71c60a:{NFSU2_TR(0x71c60a);
__builtin_memmove((R+4432),(R+4384),8);
}
B71c60d:{NFSU2_TR(0x71c60d);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B71c610:{NFSU2_TR(0x71c610);
__builtin_memmove((R+4368),(R+4352),8);
}
B71c613:{NFSU2_TR(0x71c613);
__builtin_memmove((R+4356),(R+4384),4);
}
B71c616:{NFSU2_TR(0x71c616);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B71c619:{NFSU2_TR(0x71c619);
__builtin_memmove((R+4384),(R+4416),8);
}
B71c61c:{NFSU2_TR(0x71c61c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c620:{NFSU2_TR(0x71c620);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B71c623:{NFSU2_TR(0x71c623);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c627:{NFSU2_TR(0x71c627);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B71c62a:{NFSU2_TR(0x71c62a);
__builtin_memmove((R+4388),(R+4432),4);
}
B71c62d:{NFSU2_TR(0x71c62d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c631:{NFSU2_TR(0x71c631);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c635:{NFSU2_TR(0x71c635);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c639:{NFSU2_TR(0x71c639);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c63d:{NFSU2_TR(0x71c63d);
__builtin_memmove((R+4416),(R+4384),8);
}
B71c640:{NFSU2_TR(0x71c640);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c644:{NFSU2_TR(0x71c644);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71c647:{NFSU2_TR(0x71c647);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c64b:{NFSU2_TR(0x71c64b);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71c64e:{NFSU2_TR(0x71c64e);
__builtin_memmove((R+4432),(R+4368),8);
}
B71c651:{NFSU2_TR(0x71c651);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c654:{NFSU2_TR(0x71c654);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c658:{NFSU2_TR(0x71c658);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71c65b:{NFSU2_TR(0x71c65b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c65f:{NFSU2_TR(0x71c65f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71c662:{NFSU2_TR(0x71c662);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71c665:{NFSU2_TR(0x71c665);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c668:{NFSU2_TR(0x71c668);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c66c:{NFSU2_TR(0x71c66c);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71c66f:{NFSU2_TR(0x71c66f);
__builtin_memmove((R+4432),(R+4352),8);
}
B71c672:{NFSU2_TR(0x71c672);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71c675:{NFSU2_TR(0x71c675);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c678:{NFSU2_TR(0x71c678);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c67b:{NFSU2_TR(0x71c67b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c67f:{NFSU2_TR(0x71c67f);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c682:{NFSU2_TR(0x71c682);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71c685:{NFSU2_TR(0x71c685);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71c688:{NFSU2_TR(0x71c688);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c68c:{NFSU2_TR(0x71c68c);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71c68f:{NFSU2_TR(0x71c68f);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71c692:{NFSU2_TR(0x71c692);
__builtin_memmove((R+4368),(R+4384),8);
}
B71c695:{NFSU2_TR(0x71c695);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c699:{NFSU2_TR(0x71c699);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71c69c:{NFSU2_TR(0x71c69c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c6a0:{NFSU2_TR(0x71c6a0);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c6a3:{NFSU2_TR(0x71c6a3);
__builtin_memmove((R+4464),(R+4432),8);
}
B71c6a6:{NFSU2_TR(0x71c6a6);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c6a9:{NFSU2_TR(0x71c6a9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71c6ad:{NFSU2_TR(0x71c6ad);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c6b0:{NFSU2_TR(0x71c6b0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71c6b4:{NFSU2_TR(0x71c6b4);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71c6b7:{NFSU2_TR(0x71c6b7);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71c6ba:{NFSU2_TR(0x71c6ba);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71c6bd:{NFSU2_TR(0x71c6bd);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71c6c0:{NFSU2_TR(0x71c6c0);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71c6c3:{NFSU2_TR(0x71c6c3);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c6c7:{NFSU2_TR(0x71c6c7);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c6ca:{NFSU2_TR(0x71c6ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c6ce:{NFSU2_TR(0x71c6ce);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c6d1:{NFSU2_TR(0x71c6d1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c6d5:{NFSU2_TR(0x71c6d5);
__builtin_memmove((R+4432),(R+4400),8);
}
B71c6d8:{NFSU2_TR(0x71c6d8);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c6db:{NFSU2_TR(0x71c6db);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71c6de:{NFSU2_TR(0x71c6de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c6e2:{NFSU2_TR(0x71c6e2);
__builtin_memmove((R+4384),(R+4352),8);
}
B71c6e5:{NFSU2_TR(0x71c6e5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71c6e8:{NFSU2_TR(0x71c6e8);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c6eb:{NFSU2_TR(0x71c6eb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71c6ee:{NFSU2_TR(0x71c6ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c6f2:{NFSU2_TR(0x71c6f2);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c6f5:{NFSU2_TR(0x71c6f5);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71c6f8:{NFSU2_TR(0x71c6f8);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c6fb:{NFSU2_TR(0x71c6fb);
__builtin_memmove((R+4352),(R+4448),8);
}
B71c6fe:{NFSU2_TR(0x71c6fe);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71c701:{NFSU2_TR(0x71c701);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c704:{NFSU2_TR(0x71c704);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c707:{NFSU2_TR(0x71c707);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71c70a:{NFSU2_TR(0x71c70a);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c70d:{NFSU2_TR(0x71c70d);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c710:{NFSU2_TR(0x71c710);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71c713:{NFSU2_TR(0x71c713);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c716:{NFSU2_TR(0x71c716);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71c719:{NFSU2_TR(0x71c719);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c71d:{NFSU2_TR(0x71c71d);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71c720:{NFSU2_TR(0x71c720);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71c723:{NFSU2_TR(0x71c723);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71c726:{NFSU2_TR(0x71c726);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c72a:{NFSU2_TR(0x71c72a);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c72d:{NFSU2_TR(0x71c72d);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c730:{NFSU2_TR(0x71c730);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71c734:{NFSU2_TR(0x71c734);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c737:{NFSU2_TR(0x71c737);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71c73b:{NFSU2_TR(0x71c73b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c73f:{NFSU2_TR(0x71c73f);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71c742:{NFSU2_TR(0x71c742);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c746:{NFSU2_TR(0x71c746);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71c749:{NFSU2_TR(0x71c749);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c74d:{NFSU2_TR(0x71c74d);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c750:{NFSU2_TR(0x71c750);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71c754:{NFSU2_TR(0x71c754);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c757:{NFSU2_TR(0x71c757);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c75a:{NFSU2_TR(0x71c75a);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71c75e:{NFSU2_TR(0x71c75e);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71c761:{NFSU2_TR(0x71c761);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71c765:{NFSU2_TR(0x71c765);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71c769:{NFSU2_TR(0x71c769);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71c76c:{NFSU2_TR(0x71c76c);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71c76f:{NFSU2_TR(0x71c76f);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71c773:{NFSU2_TR(0x71c773);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c777:{NFSU2_TR(0x71c777);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71c77b:{NFSU2_TR(0x71c77b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c77f:{NFSU2_TR(0x71c77f);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71c782:{NFSU2_TR(0x71c782);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c786:{NFSU2_TR(0x71c786);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71c789:{NFSU2_TR(0x71c789);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c78c:{NFSU2_TR(0x71c78c);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71c790:{NFSU2_TR(0x71c790);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c794:{NFSU2_TR(0x71c794);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71c798:{NFSU2_TR(0x71c798);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c79c:{NFSU2_TR(0x71c79c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c7a0:{NFSU2_TR(0x71c7a0);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71c7a3:{NFSU2_TR(0x71c7a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c7a7:{NFSU2_TR(0x71c7a7);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c7ab:{NFSU2_TR(0x71c7ab);
__builtin_memmove((R+4416),(R+4384),8);
}
B71c7ae:{NFSU2_TR(0x71c7ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c7b2:{NFSU2_TR(0x71c7b2);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71c7b5:{NFSU2_TR(0x71c7b5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c7b9:{NFSU2_TR(0x71c7b9);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B71c7bc:{NFSU2_TR(0x71c7bc);
__builtin_memmove((R+4432),(R+4368),8);
}
B71c7bf:{NFSU2_TR(0x71c7bf);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c7c2:{NFSU2_TR(0x71c7c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c7c6:{NFSU2_TR(0x71c7c6);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B71c7c9:{NFSU2_TR(0x71c7c9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c7cd:{NFSU2_TR(0x71c7cd);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71c7d0:{NFSU2_TR(0x71c7d0);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4464))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4466))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4468))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4470))));
}
B71c7d3:{NFSU2_TR(0x71c7d3);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c7d6:{NFSU2_TR(0x71c7d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c7da:{NFSU2_TR(0x71c7da);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71c7dd:{NFSU2_TR(0x71c7dd);
__builtin_memmove((R+4432),(R+4352),8);
}
B71c7e0:{NFSU2_TR(0x71c7e0);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71c7e3:{NFSU2_TR(0x71c7e3);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c7e6:{NFSU2_TR(0x71c7e6);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c7e9:{NFSU2_TR(0x71c7e9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c7ed:{NFSU2_TR(0x71c7ed);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c7f0:{NFSU2_TR(0x71c7f0);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71c7f3:{NFSU2_TR(0x71c7f3);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B71c7f6:{NFSU2_TR(0x71c7f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c7fa:{NFSU2_TR(0x71c7fa);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B71c7fd:{NFSU2_TR(0x71c7fd);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4374))));
}
B71c800:{NFSU2_TR(0x71c800);
__builtin_memmove((R+4368),(R+4384),8);
}
B71c803:{NFSU2_TR(0x71c803);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c807:{NFSU2_TR(0x71c807);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71c80a:{NFSU2_TR(0x71c80a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c80e:{NFSU2_TR(0x71c80e);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c811:{NFSU2_TR(0x71c811);
__builtin_memmove((R+4464),(R+4432),8);
}
B71c814:{NFSU2_TR(0x71c814);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c817:{NFSU2_TR(0x71c817);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71c81b:{NFSU2_TR(0x71c81b);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c81e:{NFSU2_TR(0x71c81e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71c822:{NFSU2_TR(0x71c822);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71c825:{NFSU2_TR(0x71c825);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71c828:{NFSU2_TR(0x71c828);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71c82b:{NFSU2_TR(0x71c82b);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71c82e:{NFSU2_TR(0x71c82e);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71c831:{NFSU2_TR(0x71c831);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmulhw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c835:{NFSU2_TR(0x71c835);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c838:{NFSU2_TR(0x71c838);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c83c:{NFSU2_TR(0x71c83c);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c83f:{NFSU2_TR(0x71c83f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c843:{NFSU2_TR(0x71c843);
__builtin_memmove((R+4432),(R+4400),8);
}
B71c846:{NFSU2_TR(0x71c846);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c849:{NFSU2_TR(0x71c849);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B71c84c:{NFSU2_TR(0x71c84c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c850:{NFSU2_TR(0x71c850);
__builtin_memmove((R+4384),(R+4352),8);
}
B71c853:{NFSU2_TR(0x71c853);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c857:{NFSU2_TR(0x71c857);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c85a:{NFSU2_TR(0x71c85a);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71c85d:{NFSU2_TR(0x71c85d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c861:{NFSU2_TR(0x71c861);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71c864:{NFSU2_TR(0x71c864);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71c867:{NFSU2_TR(0x71c867);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71c86a:{NFSU2_TR(0x71c86a);
__builtin_memmove((R+4352),(R+4448),8);
}
B71c86d:{NFSU2_TR(0x71c86d);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71c870:{NFSU2_TR(0x71c870);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c873:{NFSU2_TR(0x71c873);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c876:{NFSU2_TR(0x71c876);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71c879:{NFSU2_TR(0x71c879);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71c87c:{NFSU2_TR(0x71c87c);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c87f:{NFSU2_TR(0x71c87f);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71c882:{NFSU2_TR(0x71c882);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c885:{NFSU2_TR(0x71c885);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71c888:{NFSU2_TR(0x71c888);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c88c:{NFSU2_TR(0x71c88c);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71c88f:{NFSU2_TR(0x71c88f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71c892:{NFSU2_TR(0x71c892);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71c895:{NFSU2_TR(0x71c895);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71c899:{NFSU2_TR(0x71c899);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71c89c:{NFSU2_TR(0x71c89c);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c89f:{NFSU2_TR(0x71c89f);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71c8a3:{NFSU2_TR(0x71c8a3);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71c8a6:{NFSU2_TR(0x71c8a6);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71c8aa:{NFSU2_TR(0x71c8aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c8ae:{NFSU2_TR(0x71c8ae);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71c8b1:{NFSU2_TR(0x71c8b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c8b5:{NFSU2_TR(0x71c8b5);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71c8b8:{NFSU2_TR(0x71c8b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c8bc:{NFSU2_TR(0x71c8bc);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71c8bf:{NFSU2_TR(0x71c8bf);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71c8c3:{NFSU2_TR(0x71c8c3);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71c8c6:{NFSU2_TR(0x71c8c6);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71c8c9:{NFSU2_TR(0x71c8c9);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71c8cd:{NFSU2_TR(0x71c8cd);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71c8d0:{NFSU2_TR(0x71c8d0);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71c8d4:{NFSU2_TR(0x71c8d4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71c8d8:{NFSU2_TR(0x71c8d8);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71c8db:{NFSU2_TR(0x71c8db);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71c8de:{NFSU2_TR(0x71c8de);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71c8e2:{NFSU2_TR(0x71c8e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c8e6:{NFSU2_TR(0x71c8e6);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71c8ea:{NFSU2_TR(0x71c8ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c8ee:{NFSU2_TR(0x71c8ee);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71c8f1:{NFSU2_TR(0x71c8f1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71c8f5:{NFSU2_TR(0x71c8f5);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71c8f8:{NFSU2_TR(0x71c8f8);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71c8fb:{NFSU2_TR(0x71c8fb);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71c8ff:{NFSU2_TR(0x71c8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c903:{NFSU2_TR(0x71c903);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71c907:{NFSU2_TR(0x71c907);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c90b:{NFSU2_TR(0x71c90b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c90f:{NFSU2_TR(0x71c90f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c913:{NFSU2_TR(0x71c913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71c914:{NFSU2_TR(0x71c914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71c915:{NFSU2_TR(0x71c915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71c916:{NFSU2_TR(0x71c916);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_71c917(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71c917:L71c917:{bud-=313;NFSU2_TR(0x71c917);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c918:{NFSU2_TR(0x71c918);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c919:{NFSU2_TR(0x71c919);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71c91a:{NFSU2_TR(0x71c91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71c91e:{NFSU2_TR(0x71c91e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71c922:{NFSU2_TR(0x71c922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+4),(U+0),4);
}
B71c924:{NFSU2_TR(0x71c924);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c927:{NFSU2_TR(0x71c927);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71c92a:{NFSU2_TR(0x71c92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c92d:{NFSU2_TR(0x71c92d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71c930:{NFSU2_TR(0x71c930);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c933:{NFSU2_TR(0x71c933);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71c937:{NFSU2_TR(0x71c937);
w4(G+4,u32(0x8b98e0ull));
}
B71c93d:{NFSU2_TR(0x71c93d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71c940:{NFSU2_TR(0x71c940);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(U+8))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(U+10))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(U+12))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(U+14))));
}
B71c943:{NFSU2_TR(0x71c943);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c947:{NFSU2_TR(0x71c947);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+18))));
}
B71c94b:{NFSU2_TR(0x71c94b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c94f:{NFSU2_TR(0x71c94f);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(U+12))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(U+14))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(U+16))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(U+18))));
}
B71c953:{NFSU2_TR(0x71c953);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c957:{NFSU2_TR(0x71c957);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+18))));
}
B71c95b:{NFSU2_TR(0x71c95b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71c95e:{NFSU2_TR(0x71c95e);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B71c961:{NFSU2_TR(0x71c961);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c965:{NFSU2_TR(0x71c965);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c969:{NFSU2_TR(0x71c969);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c96d:{NFSU2_TR(0x71c96d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c971:{NFSU2_TR(0x71c971);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c975:{NFSU2_TR(0x71c975);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c979:{NFSU2_TR(0x71c979);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c97d:{NFSU2_TR(0x71c97d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c981:{NFSU2_TR(0x71c981);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c985:{NFSU2_TR(0x71c985);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c989:{NFSU2_TR(0x71c989);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c98d:{NFSU2_TR(0x71c98d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c991:{NFSU2_TR(0x71c991);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c995:{NFSU2_TR(0x71c995);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c999:{NFSU2_TR(0x71c999);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c99d:{NFSU2_TR(0x71c99d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71c9a1:{NFSU2_TR(0x71c9a1);
}
B71c9a2:{NFSU2_TR(0x71c9a2);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71c9a6:{NFSU2_TR(0x71c9a6);
__builtin_memmove((R+4416),(R+4384),8);
}
B71c9a9:{NFSU2_TR(0x71c9a9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71c9ad:{NFSU2_TR(0x71c9ad);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71c9b0:{NFSU2_TR(0x71c9b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71c9b4:{NFSU2_TR(0x71c9b4);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71c9b7:{NFSU2_TR(0x71c9b7);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71c9bb:{NFSU2_TR(0x71c9bb);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71c9be:{NFSU2_TR(0x71c9be);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71c9c1:{NFSU2_TR(0x71c9c1);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71c9c4:{NFSU2_TR(0x71c9c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71c9c8:{NFSU2_TR(0x71c9c8);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71c9cb:{NFSU2_TR(0x71c9cb);
__builtin_memmove((R+4368),(R+4432),8);
}
B71c9ce:{NFSU2_TR(0x71c9ce);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71c9d1:{NFSU2_TR(0x71c9d1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B71c9d5:{NFSU2_TR(0x71c9d5);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71c9d8:{NFSU2_TR(0x71c9d8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71c9dc:{NFSU2_TR(0x71c9dc);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71c9df:{NFSU2_TR(0x71c9df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71c9e3:{NFSU2_TR(0x71c9e3);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71c9e6:{NFSU2_TR(0x71c9e6);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71c9e9:{NFSU2_TR(0x71c9e9);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71c9ec:{NFSU2_TR(0x71c9ec);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71c9f0:{NFSU2_TR(0x71c9f0);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71c9f3:{NFSU2_TR(0x71c9f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71c9f7:{NFSU2_TR(0x71c9f7);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71c9fa:{NFSU2_TR(0x71c9fa);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71c9fe:{NFSU2_TR(0x71c9fe);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ca01:{NFSU2_TR(0x71ca01);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ca04:{NFSU2_TR(0x71ca04);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ca07:{NFSU2_TR(0x71ca07);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ca0b:{NFSU2_TR(0x71ca0b);
__builtin_memmove((R+4384),(R+4352),8);
}
B71ca0e:{NFSU2_TR(0x71ca0e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71ca11:{NFSU2_TR(0x71ca11);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71ca14:{NFSU2_TR(0x71ca14);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71ca17:{NFSU2_TR(0x71ca17);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71ca1a:{NFSU2_TR(0x71ca1a);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71ca1d:{NFSU2_TR(0x71ca1d);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71ca20:{NFSU2_TR(0x71ca20);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(U+8))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(U+10))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(U+12))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(U+14))));
}
B71ca23:{NFSU2_TR(0x71ca23);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71ca26:{NFSU2_TR(0x71ca26);
__builtin_memmove((R+4416),(R+4448),8);
}
B71ca29:{NFSU2_TR(0x71ca29);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71ca2c:{NFSU2_TR(0x71ca2c);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71ca2f:{NFSU2_TR(0x71ca2f);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71ca32:{NFSU2_TR(0x71ca32);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71ca36:{NFSU2_TR(0x71ca36);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71ca39:{NFSU2_TR(0x71ca39);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71ca3c:{NFSU2_TR(0x71ca3c);
}
B71ca3d:{NFSU2_TR(0x71ca3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71ca41:{NFSU2_TR(0x71ca41);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71ca44:{NFSU2_TR(0x71ca44);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71ca47:{NFSU2_TR(0x71ca47);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71ca4a:{NFSU2_TR(0x71ca4a);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71ca4d:{NFSU2_TR(0x71ca4d);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71ca50:{NFSU2_TR(0x71ca50);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71ca53:{NFSU2_TR(0x71ca53);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ca56:{NFSU2_TR(0x71ca56);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71ca59:{NFSU2_TR(0x71ca59);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71ca5c:{NFSU2_TR(0x71ca5c);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ca5f:{NFSU2_TR(0x71ca5f);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71ca62:{NFSU2_TR(0x71ca62);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71ca65:{NFSU2_TR(0x71ca65);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71ca68:{NFSU2_TR(0x71ca68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ca6c:{NFSU2_TR(0x71ca6c);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71ca6f:{NFSU2_TR(0x71ca6f);
__builtin_memmove((R+4368),(R+4416),8);
}
B71ca72:{NFSU2_TR(0x71ca72);
__builtin_memmove((R+4422),(R+4434),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4432),2);
}
B71ca75:{NFSU2_TR(0x71ca75);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71ca78:{NFSU2_TR(0x71ca78);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4436),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4438),2);
}
B71ca7b:{NFSU2_TR(0x71ca7b);
__builtin_memmove((R+4352),(R+4448),8);
}
B71ca7e:{NFSU2_TR(0x71ca7e);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B71ca81:{NFSU2_TR(0x71ca81);
__builtin_memmove((R+4432),(R+4416),8);
}
B71ca84:{NFSU2_TR(0x71ca84);
__builtin_memmove((R+4420),(R+4448),4);
}
B71ca87:{NFSU2_TR(0x71ca87);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B71ca8a:{NFSU2_TR(0x71ca8a);
__builtin_memmove((R+4448),(R+4368),8);
}
B71ca8d:{NFSU2_TR(0x71ca8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ca91:{NFSU2_TR(0x71ca91);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4468),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4470),2);
}
B71ca94:{NFSU2_TR(0x71ca94);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ca98:{NFSU2_TR(0x71ca98);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4356),4);
}
B71ca9b:{NFSU2_TR(0x71ca9b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71ca9e:{NFSU2_TR(0x71ca9e);
__builtin_memmove((R+4372),(R+4352),4);
}
B71caa1:{NFSU2_TR(0x71caa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71caa5:{NFSU2_TR(0x71caa5);
__builtin_memmove((R+4352),(R+4416),8);
}
B71caa8:{NFSU2_TR(0x71caa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71caac:{NFSU2_TR(0x71caac);
__builtin_memmove((R+4358),(R+4434),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4432),2);
}
B71caaf:{NFSU2_TR(0x71caaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cab3:{NFSU2_TR(0x71cab3);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71cab6:{NFSU2_TR(0x71cab6);
__builtin_memmove((R+4432),(R+4384),8);
}
B71cab9:{NFSU2_TR(0x71cab9);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B71cabc:{NFSU2_TR(0x71cabc);
__builtin_memmove((R+4368),(R+4352),8);
}
B71cabf:{NFSU2_TR(0x71cabf);
__builtin_memmove((R+4356),(R+4384),4);
}
B71cac2:{NFSU2_TR(0x71cac2);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B71cac5:{NFSU2_TR(0x71cac5);
__builtin_memmove((R+4384),(R+4416),8);
}
B71cac8:{NFSU2_TR(0x71cac8);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71cacb:{NFSU2_TR(0x71cacb);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B71cace:{NFSU2_TR(0x71cace);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cad2:{NFSU2_TR(0x71cad2);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B71cad5:{NFSU2_TR(0x71cad5);
__builtin_memmove((R+4388),(R+4432),4);
}
B71cad8:{NFSU2_TR(0x71cad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cadc:{NFSU2_TR(0x71cadc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cae0:{NFSU2_TR(0x71cae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71cae4:{NFSU2_TR(0x71cae4);
}
B71cae5:{NFSU2_TR(0x71cae5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71cae9:{NFSU2_TR(0x71cae9);
__builtin_memmove((R+4416),(R+4384),8);
}
B71caec:{NFSU2_TR(0x71caec);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71caf0:{NFSU2_TR(0x71caf0);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71caf3:{NFSU2_TR(0x71caf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71caf7:{NFSU2_TR(0x71caf7);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71cafa:{NFSU2_TR(0x71cafa);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71cafe:{NFSU2_TR(0x71cafe);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71cb01:{NFSU2_TR(0x71cb01);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71cb04:{NFSU2_TR(0x71cb04);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71cb07:{NFSU2_TR(0x71cb07);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71cb0b:{NFSU2_TR(0x71cb0b);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71cb0e:{NFSU2_TR(0x71cb0e);
__builtin_memmove((R+4368),(R+4432),8);
}
B71cb11:{NFSU2_TR(0x71cb11);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71cb14:{NFSU2_TR(0x71cb14);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B71cb18:{NFSU2_TR(0x71cb18);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71cb1b:{NFSU2_TR(0x71cb1b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71cb1f:{NFSU2_TR(0x71cb1f);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71cb22:{NFSU2_TR(0x71cb22);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71cb26:{NFSU2_TR(0x71cb26);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71cb29:{NFSU2_TR(0x71cb29);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71cb2c:{NFSU2_TR(0x71cb2c);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71cb2f:{NFSU2_TR(0x71cb2f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71cb33:{NFSU2_TR(0x71cb33);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71cb36:{NFSU2_TR(0x71cb36);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cb3a:{NFSU2_TR(0x71cb3a);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71cb3d:{NFSU2_TR(0x71cb3d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71cb41:{NFSU2_TR(0x71cb41);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71cb44:{NFSU2_TR(0x71cb44);
__builtin_memmove((R+4432),(R+4400),8);
}
B71cb47:{NFSU2_TR(0x71cb47);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71cb4a:{NFSU2_TR(0x71cb4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cb4e:{NFSU2_TR(0x71cb4e);
__builtin_memmove((R+4384),(R+4352),8);
}
B71cb51:{NFSU2_TR(0x71cb51);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71cb54:{NFSU2_TR(0x71cb54);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71cb57:{NFSU2_TR(0x71cb57);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71cb5a:{NFSU2_TR(0x71cb5a);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71cb5d:{NFSU2_TR(0x71cb5d);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71cb60:{NFSU2_TR(0x71cb60);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71cb63:{NFSU2_TR(0x71cb63);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(U+8))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(U+10))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(U+12))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(U+14))));
}
B71cb66:{NFSU2_TR(0x71cb66);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71cb69:{NFSU2_TR(0x71cb69);
__builtin_memmove((R+4416),(R+4448),8);
}
B71cb6c:{NFSU2_TR(0x71cb6c);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71cb6f:{NFSU2_TR(0x71cb6f);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71cb72:{NFSU2_TR(0x71cb72);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71cb75:{NFSU2_TR(0x71cb75);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71cb79:{NFSU2_TR(0x71cb79);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71cb7c:{NFSU2_TR(0x71cb7c);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71cb7f:{NFSU2_TR(0x71cb7f);
}
B71cb80:{NFSU2_TR(0x71cb80);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71cb84:{NFSU2_TR(0x71cb84);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71cb87:{NFSU2_TR(0x71cb87);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71cb8a:{NFSU2_TR(0x71cb8a);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71cb8e:{NFSU2_TR(0x71cb8e);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71cb91:{NFSU2_TR(0x71cb91);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71cb95:{NFSU2_TR(0x71cb95);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71cb99:{NFSU2_TR(0x71cb99);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71cb9c:{NFSU2_TR(0x71cb9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cba0:{NFSU2_TR(0x71cba0);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71cba3:{NFSU2_TR(0x71cba3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cba7:{NFSU2_TR(0x71cba7);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71cbaa:{NFSU2_TR(0x71cbaa);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71cbae:{NFSU2_TR(0x71cbae);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71cbb1:{NFSU2_TR(0x71cbb1);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71cbb4:{NFSU2_TR(0x71cbb4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71cbb8:{NFSU2_TR(0x71cbb8);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71cbbb:{NFSU2_TR(0x71cbbb);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71cbbf:{NFSU2_TR(0x71cbbf);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71cbc3:{NFSU2_TR(0x71cbc3);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71cbc6:{NFSU2_TR(0x71cbc6);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71cbc9:{NFSU2_TR(0x71cbc9);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71cbcd:{NFSU2_TR(0x71cbcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cbd1:{NFSU2_TR(0x71cbd1);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71cbd5:{NFSU2_TR(0x71cbd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cbd9:{NFSU2_TR(0x71cbd9);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71cbdc:{NFSU2_TR(0x71cbdc);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71cbe0:{NFSU2_TR(0x71cbe0);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71cbe3:{NFSU2_TR(0x71cbe3);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71cbe6:{NFSU2_TR(0x71cbe6);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71cbea:{NFSU2_TR(0x71cbea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cbee:{NFSU2_TR(0x71cbee);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71cbf2:{NFSU2_TR(0x71cbf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cbf6:{NFSU2_TR(0x71cbf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cbfa:{NFSU2_TR(0x71cbfa);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71cbfd:{NFSU2_TR(0x71cbfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71cc01:{NFSU2_TR(0x71cc01);
}
B71cc02:{NFSU2_TR(0x71cc02);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71cc06:{NFSU2_TR(0x71cc06);
__builtin_memmove((R+4416),(R+4384),8);
}
B71cc09:{NFSU2_TR(0x71cc09);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71cc0d:{NFSU2_TR(0x71cc0d);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B71cc10:{NFSU2_TR(0x71cc10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71cc14:{NFSU2_TR(0x71cc14);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71cc17:{NFSU2_TR(0x71cc17);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71cc1b:{NFSU2_TR(0x71cc1b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B71cc1e:{NFSU2_TR(0x71cc1e);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71cc21:{NFSU2_TR(0x71cc21);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4374))));
}
B71cc24:{NFSU2_TR(0x71cc24);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71cc28:{NFSU2_TR(0x71cc28);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B71cc2b:{NFSU2_TR(0x71cc2b);
__builtin_memmove((R+4368),(R+4432),8);
}
B71cc2e:{NFSU2_TR(0x71cc2e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B71cc31:{NFSU2_TR(0x71cc31);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B71cc35:{NFSU2_TR(0x71cc35);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71cc38:{NFSU2_TR(0x71cc38);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmulhw<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B71cc3c:{NFSU2_TR(0x71cc3c);
{wv<8>((R+4352),uo::psubsw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71cc3f:{NFSU2_TR(0x71cc3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71cc43:{NFSU2_TR(0x71cc43);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B71cc46:{NFSU2_TR(0x71cc46);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71cc49:{NFSU2_TR(0x71cc49);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B71cc4c:{NFSU2_TR(0x71cc4c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmulhw<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B71cc50:{NFSU2_TR(0x71cc50);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71cc53:{NFSU2_TR(0x71cc53);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cc57:{NFSU2_TR(0x71cc57);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B71cc5a:{NFSU2_TR(0x71cc5a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71cc5e:{NFSU2_TR(0x71cc5e);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71cc61:{NFSU2_TR(0x71cc61);
__builtin_memmove((R+4432),(R+4400),8);
}
B71cc64:{NFSU2_TR(0x71cc64);
{wv<8>((R+4400),uo::pmulhw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71cc67:{NFSU2_TR(0x71cc67);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cc6b:{NFSU2_TR(0x71cc6b);
__builtin_memmove((R+4384),(R+4352),8);
}
B71cc6e:{NFSU2_TR(0x71cc6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71cc72:{NFSU2_TR(0x71cc72);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B71cc75:{NFSU2_TR(0x71cc75);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4406))));
}
B71cc78:{NFSU2_TR(0x71cc78);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4358))));
}
B71cc7b:{NFSU2_TR(0x71cc7b);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71cc7e:{NFSU2_TR(0x71cc7e);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B71cc81:{NFSU2_TR(0x71cc81);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(U+12))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(U+14))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(U+16))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(U+18))));
}
B71cc85:{NFSU2_TR(0x71cc85);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71cc88:{NFSU2_TR(0x71cc88);
__builtin_memmove((R+4416),(R+4448),8);
}
B71cc8b:{NFSU2_TR(0x71cc8b);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B71cc8e:{NFSU2_TR(0x71cc8e);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71cc91:{NFSU2_TR(0x71cc91);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B71cc94:{NFSU2_TR(0x71cc94);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B71cc98:{NFSU2_TR(0x71cc98);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B71cc9b:{NFSU2_TR(0x71cc9b);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B71cc9e:{NFSU2_TR(0x71cc9e);
}
B71cc9f:{NFSU2_TR(0x71cc9f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71cca3:{NFSU2_TR(0x71cca3);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B71cca6:{NFSU2_TR(0x71cca6);
{wv<8>((R+4368),uo::paddsw<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71cca9:{NFSU2_TR(0x71cca9);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x4ull)));}
}
B71ccad:{NFSU2_TR(0x71ccad);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B71ccb0:{NFSU2_TR(0x71ccb0);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x4ull)));}
}
B71ccb4:{NFSU2_TR(0x71ccb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71ccb8:{NFSU2_TR(0x71ccb8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B71ccbb:{NFSU2_TR(0x71ccbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ccbf:{NFSU2_TR(0x71ccbf);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B71ccc2:{NFSU2_TR(0x71ccc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ccc6:{NFSU2_TR(0x71ccc6);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71ccc9:{NFSU2_TR(0x71ccc9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::paddsw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B71cccd:{NFSU2_TR(0x71cccd);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ccd0:{NFSU2_TR(0x71ccd0);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ccd3:{NFSU2_TR(0x71ccd3);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B71ccd7:{NFSU2_TR(0x71ccd7);
{wv<8>((R+4448),uo::psubsw<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B71ccda:{NFSU2_TR(0x71ccda);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x4ull)));}
}
B71ccde:{NFSU2_TR(0x71ccde);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::paddsw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B71cce2:{NFSU2_TR(0x71cce2);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B71cce5:{NFSU2_TR(0x71cce5);
{wv<8>((R+4432),uo::paddsw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71cce8:{NFSU2_TR(0x71cce8);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x4ull)));}
}
B71ccec:{NFSU2_TR(0x71ccec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ccf0:{NFSU2_TR(0x71ccf0);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0x4ull)));}
}
B71ccf4:{NFSU2_TR(0x71ccf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71ccf8:{NFSU2_TR(0x71ccf8);
{wv<8>((R+4464),uo::psubsw<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71ccfb:{NFSU2_TR(0x71ccfb);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::paddsw<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B71ccff:{NFSU2_TR(0x71ccff);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B71cd02:{NFSU2_TR(0x71cd02);
{wv<8>((R+4352),uo::paddsw<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B71cd05:{NFSU2_TR(0x71cd05);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x4ull)));}
}
B71cd09:{NFSU2_TR(0x71cd09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cd0d:{NFSU2_TR(0x71cd0d);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x4ull)));}
}
B71cd11:{NFSU2_TR(0x71cd11);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cd15:{NFSU2_TR(0x71cd15);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cd19:{NFSU2_TR(0x71cd19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71cd1d:{NFSU2_TR(0x71cd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71cd1e:{NFSU2_TR(0x71cd1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71cd1f:{NFSU2_TR(0x71cd1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71cd20:{NFSU2_TR(0x71cd20);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 ent_71c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x71c001:[[clang::musttail]] return blk_71c001(c,a4,a0,a1,bud);
case 0x71c1d1:[[clang::musttail]] return blk_71c1d1(c,a4,a0,a1,bud);
case 0x71c205:[[clang::musttail]] return blk_71c205(c,a4,a0,a1,bud);
case 0x71c218:[[clang::musttail]] return blk_71c218(c,a4,a0,a1,bud);
case 0x71c221:[[clang::musttail]] return blk_71c221(c,a4,a0,a1,bud);
case 0x71c223:[[clang::musttail]] return blk_71c223(c,a4,a0,a1,bud);
case 0x71c226:[[clang::musttail]] return blk_71c226(c,a4,a0,a1,bud);
case 0x71c917:[[clang::musttail]] return blk_71c917(c,a4,a0,a1,bud);
default:[[clang::musttail]] return ent_missing(c,a4,a0,a1,bud);}}
u32 page_71c(Cpu& c){u8* R=c.regs.data();return ent_71c(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
