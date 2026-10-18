#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_731799(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7317b4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_731000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B731000:L731000:{bud-=414;NFSU2_TR(0x731000);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B731003:{NFSU2_TR(0x731003);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x290ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73100a:{NFSU2_TR(0x73100a);
__builtin_memmove((R+4400),(R+4368),8);
}
B73100d:{NFSU2_TR(0x73100d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B731014:{NFSU2_TR(0x731014);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B731018:{NFSU2_TR(0x731018);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B73101f:{NFSU2_TR(0x73101f);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B731022:{NFSU2_TR(0x731022);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B731029:{NFSU2_TR(0x731029);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B73102d:{NFSU2_TR(0x73102d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B731034:{NFSU2_TR(0x731034);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B731037:{NFSU2_TR(0x731037);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B73103e:{NFSU2_TR(0x73103e);
w4(G+0,u32(r8(R+4400)));
}
B731041:{NFSU2_TR(0x731041);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731045:{NFSU2_TR(0x731045);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B731048:{NFSU2_TR(0x731048);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B73104f:{NFSU2_TR(0x73104f);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B731052:{NFSU2_TR(0x731052);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B731059:{NFSU2_TR(0x731059);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B73105c:{NFSU2_TR(0x73105c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B731063:{NFSU2_TR(0x731063);
__builtin_memmove((R+4384),(R+4352),8);
}
B731066:{NFSU2_TR(0x731066);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73106d:{NFSU2_TR(0x73106d);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B731071:{NFSU2_TR(0x731071);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B731078:{NFSU2_TR(0x731078);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B73107b:{NFSU2_TR(0x73107b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B731082:{NFSU2_TR(0x731082);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B731086:{NFSU2_TR(0x731086);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B73108d:{NFSU2_TR(0x73108d);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B731090:{NFSU2_TR(0x731090);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B731097:{NFSU2_TR(0x731097);
w4(G+0,u32(r8(R+4384)));
}
B73109a:{NFSU2_TR(0x73109a);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73109e:{NFSU2_TR(0x73109e);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B7310a1:{NFSU2_TR(0x7310a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x300ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B7310a8:{NFSU2_TR(0x7310a8);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B7310ab:{NFSU2_TR(0x7310ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7310b2:{NFSU2_TR(0x7310b2);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B7310b5:{NFSU2_TR(0x7310b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7310bc:{NFSU2_TR(0x7310bc);
__builtin_memmove((R+4400),(R+4368),8);
}
B7310bf:{NFSU2_TR(0x7310bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7310c6:{NFSU2_TR(0x7310c6);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B7310ca:{NFSU2_TR(0x7310ca);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B7310d1:{NFSU2_TR(0x7310d1);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B7310d4:{NFSU2_TR(0x7310d4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B7310db:{NFSU2_TR(0x7310db);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B7310df:{NFSU2_TR(0x7310df);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B7310e6:{NFSU2_TR(0x7310e6);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B7310e9:{NFSU2_TR(0x7310e9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B7310f0:{NFSU2_TR(0x7310f0);
w4(G+0,u32(r8(R+4400)));
}
B7310f3:{NFSU2_TR(0x7310f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7310f7:{NFSU2_TR(0x7310f7);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7310fa:{NFSU2_TR(0x7310fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B731101:{NFSU2_TR(0x731101);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B731104:{NFSU2_TR(0x731104);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B73110b:{NFSU2_TR(0x73110b);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B73110e:{NFSU2_TR(0x73110e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B731115:{NFSU2_TR(0x731115);
__builtin_memmove((R+4384),(R+4352),8);
}
B731118:{NFSU2_TR(0x731118);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73111f:{NFSU2_TR(0x73111f);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B731123:{NFSU2_TR(0x731123);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B73112a:{NFSU2_TR(0x73112a);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B73112d:{NFSU2_TR(0x73112d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B731134:{NFSU2_TR(0x731134);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B731138:{NFSU2_TR(0x731138);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B73113f:{NFSU2_TR(0x73113f);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B731142:{NFSU2_TR(0x731142);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B731149:{NFSU2_TR(0x731149);
w4(G+0,u32(r8(R+4384)));
}
B73114c:{NFSU2_TR(0x73114c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731150:{NFSU2_TR(0x731150);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731153:{NFSU2_TR(0x731153);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B73115a:{NFSU2_TR(0x73115a);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B73115d:{NFSU2_TR(0x73115d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B731164:{NFSU2_TR(0x731164);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B731167:{NFSU2_TR(0x731167);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73116e:{NFSU2_TR(0x73116e);
__builtin_memmove((R+4400),(R+4368),8);
}
B731171:{NFSU2_TR(0x731171);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B731178:{NFSU2_TR(0x731178);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B73117c:{NFSU2_TR(0x73117c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B731183:{NFSU2_TR(0x731183);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B731186:{NFSU2_TR(0x731186);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B73118d:{NFSU2_TR(0x73118d);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B731191:{NFSU2_TR(0x731191);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B731198:{NFSU2_TR(0x731198);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B73119b:{NFSU2_TR(0x73119b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B7311a2:{NFSU2_TR(0x7311a2);
w4(G+0,u32(r8(R+4400)));
}
B7311a5:{NFSU2_TR(0x7311a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7311a9:{NFSU2_TR(0x7311a9);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7311ac:{NFSU2_TR(0x7311ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7311b3:{NFSU2_TR(0x7311b3);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B7311b6:{NFSU2_TR(0x7311b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B7311bd:{NFSU2_TR(0x7311bd);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B7311c0:{NFSU2_TR(0x7311c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7311c7:{NFSU2_TR(0x7311c7);
__builtin_memmove((R+4384),(R+4352),8);
}
B7311ca:{NFSU2_TR(0x7311ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7311d1:{NFSU2_TR(0x7311d1);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B7311d5:{NFSU2_TR(0x7311d5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B7311dc:{NFSU2_TR(0x7311dc);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B7311df:{NFSU2_TR(0x7311df);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B7311e6:{NFSU2_TR(0x7311e6);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B7311ea:{NFSU2_TR(0x7311ea);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B7311f1:{NFSU2_TR(0x7311f1);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B7311f4:{NFSU2_TR(0x7311f4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B7311fb:{NFSU2_TR(0x7311fb);
w4(G+0,u32(r8(R+4384)));
}
B7311fe:{NFSU2_TR(0x7311fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731202:{NFSU2_TR(0x731202);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731205:{NFSU2_TR(0x731205);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B73120c:{NFSU2_TR(0x73120c);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B73120f:{NFSU2_TR(0x73120f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x408ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B731216:{NFSU2_TR(0x731216);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B731219:{NFSU2_TR(0x731219);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x410ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B731220:{NFSU2_TR(0x731220);
__builtin_memmove((R+4400),(R+4368),8);
}
B731223:{NFSU2_TR(0x731223);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x418ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73122a:{NFSU2_TR(0x73122a);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B73122e:{NFSU2_TR(0x73122e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmulhw<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B731235:{NFSU2_TR(0x731235);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B731238:{NFSU2_TR(0x731238);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmulhw<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B73123f:{NFSU2_TR(0x73123f);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B731243:{NFSU2_TR(0x731243);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmulhw<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B73124a:{NFSU2_TR(0x73124a);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B73124d:{NFSU2_TR(0x73124d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmulhw<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B731254:{NFSU2_TR(0x731254);
w4(R+4352,shl<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shl<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B731258:{NFSU2_TR(0x731258);
w4(R+4384,shl<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shl<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B73125c:{NFSU2_TR(0x73125c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73125f:{NFSU2_TR(0x73125f);
w4(R+4416,shl<u32>(r4(R+4416),u64(u32(0x10ull))));
w4(R+4420,shl<u32>(r4(R+4420),u64(u32(0x10ull))));
}
B731263:{NFSU2_TR(0x731263);
w4(R+12,u32(0-u32(r4(R+12))));
}
B731265:{NFSU2_TR(0x731265);
w4(R+4448,shl<u32>(r4(R+4448),u64(u32(0x10ull))));
w4(R+4452,shl<u32>(r4(R+4452),u64(u32(0x10ull))));
}
B731269:{NFSU2_TR(0x731269);
w4(G+0,u32(r8(R+4400)));
}
B73126c:{NFSU2_TR(0x73126c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731270:{NFSU2_TR(0x731270);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7d0de0ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B731277:{NFSU2_TR(0x731277);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B73127a:{NFSU2_TR(0x73127a);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B73127d:{NFSU2_TR(0x73127d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B731281:{NFSU2_TR(0x731281);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B731284:{NFSU2_TR(0x731284);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B731288:{NFSU2_TR(0x731288);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B73128b:{NFSU2_TR(0x73128b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73128f:{NFSU2_TR(0x73128f);
__builtin_memmove((R+4384),(R+4352),8);
}
B731292:{NFSU2_TR(0x731292);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B731299:{NFSU2_TR(0x731299);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B73129d:{NFSU2_TR(0x73129d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B7312a4:{NFSU2_TR(0x7312a4);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7312a7:{NFSU2_TR(0x7312a7);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B7312ae:{NFSU2_TR(0x7312ae);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B7312b2:{NFSU2_TR(0x7312b2);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B7312b9:{NFSU2_TR(0x7312b9);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B7312bc:{NFSU2_TR(0x7312bc);
w4(G+0,u32(r8(R+4352)));
}
B7312bf:{NFSU2_TR(0x7312bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7312c3:{NFSU2_TR(0x7312c3);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B7312c6:{NFSU2_TR(0x7312c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B7312ca:{NFSU2_TR(0x7312ca);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B7312cd:{NFSU2_TR(0x7312cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7312d1:{NFSU2_TR(0x7312d1);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B7312d4:{NFSU2_TR(0x7312d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7312d8:{NFSU2_TR(0x7312d8);
__builtin_memmove((R+4400),(R+4368),8);
}
B7312db:{NFSU2_TR(0x7312db);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7312df:{NFSU2_TR(0x7312df);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7312e3:{NFSU2_TR(0x7312e3);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B7312ea:{NFSU2_TR(0x7312ea);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B7312ed:{NFSU2_TR(0x7312ed);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B7312f4:{NFSU2_TR(0x7312f4);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B7312f8:{NFSU2_TR(0x7312f8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B7312ff:{NFSU2_TR(0x7312ff);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B731302:{NFSU2_TR(0x731302);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B731309:{NFSU2_TR(0x731309);
w4(G+0,u32(r8(R+4368)));
}
B73130c:{NFSU2_TR(0x73130c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731310:{NFSU2_TR(0x731310);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B731313:{NFSU2_TR(0x731313);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B73131a:{NFSU2_TR(0x73131a);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B73131d:{NFSU2_TR(0x73131d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B731324:{NFSU2_TR(0x731324);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B731327:{NFSU2_TR(0x731327);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73132e:{NFSU2_TR(0x73132e);
__builtin_memmove((R+4384),(R+4352),8);
}
B731331:{NFSU2_TR(0x731331);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B731338:{NFSU2_TR(0x731338);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B73133c:{NFSU2_TR(0x73133c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B731343:{NFSU2_TR(0x731343);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B731346:{NFSU2_TR(0x731346);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B73134d:{NFSU2_TR(0x73134d);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B731351:{NFSU2_TR(0x731351);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B731358:{NFSU2_TR(0x731358);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B73135b:{NFSU2_TR(0x73135b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B731362:{NFSU2_TR(0x731362);
w4(G+0,u32(r8(R+4352)));
}
B731365:{NFSU2_TR(0x731365);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731369:{NFSU2_TR(0x731369);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B73136c:{NFSU2_TR(0x73136c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B731373:{NFSU2_TR(0x731373);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B731376:{NFSU2_TR(0x731376);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B73137d:{NFSU2_TR(0x73137d);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B731380:{NFSU2_TR(0x731380);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B731387:{NFSU2_TR(0x731387);
__builtin_memmove((R+4400),(R+4368),8);
}
B73138a:{NFSU2_TR(0x73138a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B731391:{NFSU2_TR(0x731391);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B731395:{NFSU2_TR(0x731395);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B73139c:{NFSU2_TR(0x73139c);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B73139f:{NFSU2_TR(0x73139f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B7313a6:{NFSU2_TR(0x7313a6);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B7313aa:{NFSU2_TR(0x7313aa);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B7313b1:{NFSU2_TR(0x7313b1);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B7313b4:{NFSU2_TR(0x7313b4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B7313bb:{NFSU2_TR(0x7313bb);
w4(G+0,u32(r8(R+4368)));
}
B7313be:{NFSU2_TR(0x7313be);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7313c2:{NFSU2_TR(0x7313c2);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7313c5:{NFSU2_TR(0x7313c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7313cc:{NFSU2_TR(0x7313cc);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B7313cf:{NFSU2_TR(0x7313cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B7313d6:{NFSU2_TR(0x7313d6);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B7313d9:{NFSU2_TR(0x7313d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7313e0:{NFSU2_TR(0x7313e0);
__builtin_memmove((R+4384),(R+4352),8);
}
B7313e3:{NFSU2_TR(0x7313e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7313ea:{NFSU2_TR(0x7313ea);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B7313ee:{NFSU2_TR(0x7313ee);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B7313f5:{NFSU2_TR(0x7313f5);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7313f8:{NFSU2_TR(0x7313f8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B7313ff:{NFSU2_TR(0x7313ff);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B731403:{NFSU2_TR(0x731403);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B73140a:{NFSU2_TR(0x73140a);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B73140d:{NFSU2_TR(0x73140d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B731414:{NFSU2_TR(0x731414);
w4(G+0,u32(r8(R+4352)));
}
B731417:{NFSU2_TR(0x731417);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73141b:{NFSU2_TR(0x73141b);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B73141e:{NFSU2_TR(0x73141e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B731425:{NFSU2_TR(0x731425);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B731428:{NFSU2_TR(0x731428);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B73142f:{NFSU2_TR(0x73142f);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B731432:{NFSU2_TR(0x731432);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B731439:{NFSU2_TR(0x731439);
__builtin_memmove((R+4400),(R+4368),8);
}
B73143c:{NFSU2_TR(0x73143c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B731443:{NFSU2_TR(0x731443);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B731447:{NFSU2_TR(0x731447);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B73144e:{NFSU2_TR(0x73144e);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731451:{NFSU2_TR(0x731451);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B731458:{NFSU2_TR(0x731458);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B73145c:{NFSU2_TR(0x73145c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B731463:{NFSU2_TR(0x731463);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B731466:{NFSU2_TR(0x731466);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B73146d:{NFSU2_TR(0x73146d);
w4(G+0,u32(r8(R+4368)));
}
B731470:{NFSU2_TR(0x731470);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731474:{NFSU2_TR(0x731474);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B731477:{NFSU2_TR(0x731477);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B73147e:{NFSU2_TR(0x73147e);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B731481:{NFSU2_TR(0x731481);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B731488:{NFSU2_TR(0x731488);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B73148b:{NFSU2_TR(0x73148b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B731492:{NFSU2_TR(0x731492);
__builtin_memmove((R+4384),(R+4352),8);
}
B731495:{NFSU2_TR(0x731495);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73149c:{NFSU2_TR(0x73149c);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B7314a0:{NFSU2_TR(0x7314a0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B7314a7:{NFSU2_TR(0x7314a7);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7314aa:{NFSU2_TR(0x7314aa);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B7314b1:{NFSU2_TR(0x7314b1);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B7314b5:{NFSU2_TR(0x7314b5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B7314bc:{NFSU2_TR(0x7314bc);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B7314bf:{NFSU2_TR(0x7314bf);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B7314c6:{NFSU2_TR(0x7314c6);
w4(G+0,u32(r8(R+4352)));
}
B7314c9:{NFSU2_TR(0x7314c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7314cd:{NFSU2_TR(0x7314cd);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B7314d0:{NFSU2_TR(0x7314d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B7314d7:{NFSU2_TR(0x7314d7);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B7314da:{NFSU2_TR(0x7314da);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7314e1:{NFSU2_TR(0x7314e1);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B7314e4:{NFSU2_TR(0x7314e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7314eb:{NFSU2_TR(0x7314eb);
__builtin_memmove((R+4400),(R+4368),8);
}
B7314ee:{NFSU2_TR(0x7314ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7314f5:{NFSU2_TR(0x7314f5);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7314f9:{NFSU2_TR(0x7314f9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B731500:{NFSU2_TR(0x731500);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731503:{NFSU2_TR(0x731503);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B73150a:{NFSU2_TR(0x73150a);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B73150e:{NFSU2_TR(0x73150e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B731515:{NFSU2_TR(0x731515);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B731518:{NFSU2_TR(0x731518);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B73151f:{NFSU2_TR(0x73151f);
w4(G+0,u32(r8(R+4368)));
}
B731522:{NFSU2_TR(0x731522);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731526:{NFSU2_TR(0x731526);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B731529:{NFSU2_TR(0x731529);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B731530:{NFSU2_TR(0x731530);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B731533:{NFSU2_TR(0x731533);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B73153a:{NFSU2_TR(0x73153a);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B73153d:{NFSU2_TR(0x73153d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B731544:{NFSU2_TR(0x731544);
__builtin_memmove((R+4384),(R+4352),8);
}
B731547:{NFSU2_TR(0x731547);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73154e:{NFSU2_TR(0x73154e);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B731552:{NFSU2_TR(0x731552);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B731559:{NFSU2_TR(0x731559);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B73155c:{NFSU2_TR(0x73155c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B731563:{NFSU2_TR(0x731563);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B731567:{NFSU2_TR(0x731567);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B73156e:{NFSU2_TR(0x73156e);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B731571:{NFSU2_TR(0x731571);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B731578:{NFSU2_TR(0x731578);
w4(G+0,u32(r8(R+4352)));
}
B73157b:{NFSU2_TR(0x73157b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73157f:{NFSU2_TR(0x73157f);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731582:{NFSU2_TR(0x731582);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B731589:{NFSU2_TR(0x731589);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B73158c:{NFSU2_TR(0x73158c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B731593:{NFSU2_TR(0x731593);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B731596:{NFSU2_TR(0x731596);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73159d:{NFSU2_TR(0x73159d);
__builtin_memmove((R+4400),(R+4368),8);
}
B7315a0:{NFSU2_TR(0x7315a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7315a7:{NFSU2_TR(0x7315a7);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7315ab:{NFSU2_TR(0x7315ab);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B7315b2:{NFSU2_TR(0x7315b2);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B7315b5:{NFSU2_TR(0x7315b5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B7315bc:{NFSU2_TR(0x7315bc);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B7315c0:{NFSU2_TR(0x7315c0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B7315c7:{NFSU2_TR(0x7315c7);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B7315ca:{NFSU2_TR(0x7315ca);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B7315d1:{NFSU2_TR(0x7315d1);
w4(G+0,u32(r8(R+4368)));
}
B7315d4:{NFSU2_TR(0x7315d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7315d8:{NFSU2_TR(0x7315d8);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7315db:{NFSU2_TR(0x7315db);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7315e2:{NFSU2_TR(0x7315e2);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B7315e5:{NFSU2_TR(0x7315e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B7315ec:{NFSU2_TR(0x7315ec);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B7315ef:{NFSU2_TR(0x7315ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x290ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7315f6:{NFSU2_TR(0x7315f6);
__builtin_memmove((R+4384),(R+4352),8);
}
B7315f9:{NFSU2_TR(0x7315f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B731600:{NFSU2_TR(0x731600);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B731604:{NFSU2_TR(0x731604);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B73160b:{NFSU2_TR(0x73160b);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B73160e:{NFSU2_TR(0x73160e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B731615:{NFSU2_TR(0x731615);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B731619:{NFSU2_TR(0x731619);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B731620:{NFSU2_TR(0x731620);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B731623:{NFSU2_TR(0x731623);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B73162a:{NFSU2_TR(0x73162a);
w4(G+0,u32(r8(R+4352)));
}
B73162d:{NFSU2_TR(0x73162d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731631:{NFSU2_TR(0x731631);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731634:{NFSU2_TR(0x731634);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B73163b:{NFSU2_TR(0x73163b);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B73163e:{NFSU2_TR(0x73163e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B731645:{NFSU2_TR(0x731645);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B731648:{NFSU2_TR(0x731648);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73164f:{NFSU2_TR(0x73164f);
__builtin_memmove((R+4400),(R+4368),8);
}
B731652:{NFSU2_TR(0x731652);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B731659:{NFSU2_TR(0x731659);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B73165d:{NFSU2_TR(0x73165d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B731664:{NFSU2_TR(0x731664);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731667:{NFSU2_TR(0x731667);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B73166e:{NFSU2_TR(0x73166e);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B731672:{NFSU2_TR(0x731672);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B731679:{NFSU2_TR(0x731679);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B73167c:{NFSU2_TR(0x73167c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B731683:{NFSU2_TR(0x731683);
w4(G+0,u32(r8(R+4368)));
}
B731686:{NFSU2_TR(0x731686);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73168a:{NFSU2_TR(0x73168a);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B73168d:{NFSU2_TR(0x73168d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x300ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B731694:{NFSU2_TR(0x731694);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B731697:{NFSU2_TR(0x731697);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B73169e:{NFSU2_TR(0x73169e);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B7316a1:{NFSU2_TR(0x7316a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7316a8:{NFSU2_TR(0x7316a8);
__builtin_memmove((R+4384),(R+4352),8);
}
B7316ab:{NFSU2_TR(0x7316ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7316b2:{NFSU2_TR(0x7316b2);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B7316b6:{NFSU2_TR(0x7316b6);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B7316ba:{NFSU2_TR(0x7316ba);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B7316bd:{NFSU2_TR(0x7316bd);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B7316c1:{NFSU2_TR(0x7316c1);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B7316c5:{NFSU2_TR(0x7316c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B7316c9:{NFSU2_TR(0x7316c9);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B7316cc:{NFSU2_TR(0x7316cc);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B7316d0:{NFSU2_TR(0x7316d0);
w4(G+0,u32(r8(R+4352)));
}
B7316d3:{NFSU2_TR(0x7316d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7316d7:{NFSU2_TR(0x7316d7);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B7316da:{NFSU2_TR(0x7316da);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B7316e1:{NFSU2_TR(0x7316e1);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B7316e4:{NFSU2_TR(0x7316e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7316eb:{NFSU2_TR(0x7316eb);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B7316ee:{NFSU2_TR(0x7316ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7316f5:{NFSU2_TR(0x7316f5);
__builtin_memmove((R+4400),(R+4368),8);
}
B7316f8:{NFSU2_TR(0x7316f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7316ff:{NFSU2_TR(0x7316ff);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B731703:{NFSU2_TR(0x731703);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B731707:{NFSU2_TR(0x731707);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B73170a:{NFSU2_TR(0x73170a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B73170e:{NFSU2_TR(0x73170e);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B731712:{NFSU2_TR(0x731712);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B731716:{NFSU2_TR(0x731716);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B731719:{NFSU2_TR(0x731719);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B73171d:{NFSU2_TR(0x73171d);
w4(G+0,u32(r8(R+4368)));
}
B731720:{NFSU2_TR(0x731720);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731724:{NFSU2_TR(0x731724);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B731727:{NFSU2_TR(0x731727);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B73172e:{NFSU2_TR(0x73172e);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B731731:{NFSU2_TR(0x731731);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B731738:{NFSU2_TR(0x731738);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B73173b:{NFSU2_TR(0x73173b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B731742:{NFSU2_TR(0x731742);
__builtin_memmove((R+4384),(R+4352),8);
}
B731745:{NFSU2_TR(0x731745);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73174c:{NFSU2_TR(0x73174c);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B731750:{NFSU2_TR(0x731750);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B731754:{NFSU2_TR(0x731754);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B731757:{NFSU2_TR(0x731757);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B73175b:{NFSU2_TR(0x73175b);
w4(R+4352,sar<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,sar<u32>(r4(R+4356),u64(u32(0xdull))));
}
B73175f:{NFSU2_TR(0x73175f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B731763:{NFSU2_TR(0x731763);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B731766:{NFSU2_TR(0x731766);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B73176a:{NFSU2_TR(0x73176a);
w4(G+0,u32(r8(R+4352)));
}
B73176d:{NFSU2_TR(0x73176d);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731770:{NFSU2_TR(0x731770);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731774:{NFSU2_TR(0x731774);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B731777:{NFSU2_TR(0x731777);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B73177a:{NFSU2_TR(0x73177a);
__builtin_memmove((R+4400),(R+4368),8);
}
B73177d:{NFSU2_TR(0x73177d);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B731781:{NFSU2_TR(0x731781);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B731784:{NFSU2_TR(0x731784);
w4(R+4368,sar<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,sar<u32>(r4(R+4372),u64(u32(0xdull))));
}
B731788:{NFSU2_TR(0x731788);
{wv<8>((R+4368),uo::packssdw<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B73178b:{NFSU2_TR(0x73178b);
w4(G+0,u32(r8(R+4368)));
}
B73178e:{NFSU2_TR(0x73178e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B731792:{NFSU2_TR(0x731792);
w2(R+4260,u16(0xffffull));
}
B731794:{NFSU2_TR(0x731794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B731795:{NFSU2_TR(0x731795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B731796:{NFSU2_TR(0x731796);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B731798:{NFSU2_TR(0x731798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{[[clang::musttail]] return blk_731799(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_731799(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B731799:L731799:{bud-=8;NFSU2_TR(0x731799);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(G+4,u32(s32(s16(r2(U+12)))));
}
B73179e:{NFSU2_TR(0x73179e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7317a1:{NFSU2_TR(0x7317a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7317a4:{NFSU2_TR(0x7317a4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7317a7:{NFSU2_TR(0x7317a7);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7317aa:{NFSU2_TR(0x7317aa);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B7317ab:{NFSU2_TR(0x7317ab);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x20ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7317ae:{NFSU2_TR(0x7317ae);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x731799u);}goto L731799;}}
}
B7317b0:L7317b0:{bud-=2;NFSU2_TR(0x7317b0);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7317b1:{NFSU2_TR(0x7317b1);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
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
PN u32 blk_7317b4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7317b4:L7317b4:{bud-=415;NFSU2_TR(0x7317b4);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7317b6:{NFSU2_TR(0x7317b6);
{u32 ea_=u32(r4(G+0)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7317b9:{NFSU2_TR(0x7317b9);
{u32 ea_=u32(u32(9128504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7317bf:{NFSU2_TR(0x7317bf);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7317c1:{NFSU2_TR(0x7317c1);
{u32 ea_=u32(r4(G+0)+u32(124u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7317c4:{NFSU2_TR(0x7317c4);
{u32 ea_=u32(u32(8199808u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7317ca:{NFSU2_TR(0x7317ca);
{u32 ea_=u32(u32(9128628u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7317d0:{NFSU2_TR(0x7317d0);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7317d3:{NFSU2_TR(0x7317d3);
{u32 ea_=u32(r4(G+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7317d6:{NFSU2_TR(0x7317d6);
{u32 ea_=u32(u32(9128508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7317dc:{NFSU2_TR(0x7317dc);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7317df:{NFSU2_TR(0x7317df);
{u32 ea_=u32(r4(G+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7317e2:{NFSU2_TR(0x7317e2);
{u32 ea_=u32(u32(8199812u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7317e8:{NFSU2_TR(0x7317e8);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7317ee:{NFSU2_TR(0x7317ee);
{u32 ea_=u32(r4(G+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7317f1:{NFSU2_TR(0x7317f1);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7317f4:{NFSU2_TR(0x7317f4);
{u32 ea_=u32(u32(9128512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7317fa:{NFSU2_TR(0x7317fa);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7317fd:{NFSU2_TR(0x7317fd);
{u32 ea_=u32(r4(G+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731800:{NFSU2_TR(0x731800);
{u32 ea_=u32(u32(8199816u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731806:{NFSU2_TR(0x731806);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73180c:{NFSU2_TR(0x73180c);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73180f:{NFSU2_TR(0x73180f);
{u32 ea_=u32(r4(G+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731812:{NFSU2_TR(0x731812);
{u32 ea_=u32(u32(9128516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731818:{NFSU2_TR(0x731818);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73181b:{NFSU2_TR(0x73181b);
{u32 ea_=u32(r4(G+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73181e:{NFSU2_TR(0x73181e);
{u32 ea_=u32(u32(8199820u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731824:{NFSU2_TR(0x731824);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73182a:{NFSU2_TR(0x73182a);
{u32 ea_=u32(r4(G+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73182d:{NFSU2_TR(0x73182d);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731830:{NFSU2_TR(0x731830);
{u32 ea_=u32(u32(9128520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731836:{NFSU2_TR(0x731836);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731839:{NFSU2_TR(0x731839);
{u32 ea_=u32(r4(G+0)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73183c:{NFSU2_TR(0x73183c);
{u32 ea_=u32(u32(8199824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731842:{NFSU2_TR(0x731842);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731848:{NFSU2_TR(0x731848);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73184b:{NFSU2_TR(0x73184b);
{u32 ea_=u32(r4(G+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73184e:{NFSU2_TR(0x73184e);
{u32 ea_=u32(u32(9128524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731854:{NFSU2_TR(0x731854);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731857:{NFSU2_TR(0x731857);
{u32 ea_=u32(r4(G+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73185a:{NFSU2_TR(0x73185a);
{u32 ea_=u32(u32(8199828u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731860:{NFSU2_TR(0x731860);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731866:{NFSU2_TR(0x731866);
{u32 ea_=u32(r4(G+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731869:{NFSU2_TR(0x731869);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73186c:{NFSU2_TR(0x73186c);
{u32 ea_=u32(u32(9128528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731872:{NFSU2_TR(0x731872);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731875:{NFSU2_TR(0x731875);
{u32 ea_=u32(r4(G+0)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731878:{NFSU2_TR(0x731878);
{u32 ea_=u32(u32(8199832u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73187e:{NFSU2_TR(0x73187e);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731884:{NFSU2_TR(0x731884);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731887:{NFSU2_TR(0x731887);
{u32 ea_=u32(r4(G+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73188a:{NFSU2_TR(0x73188a);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731890:{NFSU2_TR(0x731890);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731893:{NFSU2_TR(0x731893);
{u32 ea_=u32(r4(G+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731896:{NFSU2_TR(0x731896);
{u32 ea_=u32(u32(8199836u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73189c:{NFSU2_TR(0x73189c);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7318a2:{NFSU2_TR(0x7318a2);
{u32 ea_=u32(r4(G+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7318a5:{NFSU2_TR(0x7318a5);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7318a8:{NFSU2_TR(0x7318a8);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7318ae:{NFSU2_TR(0x7318ae);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7318b1:{NFSU2_TR(0x7318b1);
{u32 ea_=u32(r4(G+0)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7318b4:{NFSU2_TR(0x7318b4);
{u32 ea_=u32(u32(8199840u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7318ba:{NFSU2_TR(0x7318ba);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7318c0:{NFSU2_TR(0x7318c0);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7318c3:{NFSU2_TR(0x7318c3);
{u32 ea_=u32(r4(G+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7318c6:{NFSU2_TR(0x7318c6);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7318cc:{NFSU2_TR(0x7318cc);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7318cf:{NFSU2_TR(0x7318cf);
{u32 ea_=u32(r4(G+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7318d2:{NFSU2_TR(0x7318d2);
{u32 ea_=u32(u32(8199844u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7318d8:{NFSU2_TR(0x7318d8);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7318de:{NFSU2_TR(0x7318de);
{u32 ea_=u32(r4(G+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7318e1:{NFSU2_TR(0x7318e1);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7318e4:{NFSU2_TR(0x7318e4);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7318ea:{NFSU2_TR(0x7318ea);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7318ed:{NFSU2_TR(0x7318ed);
{u32 ea_=u32(r4(G+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7318f0:{NFSU2_TR(0x7318f0);
{u32 ea_=u32(u32(8199848u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7318f6:{NFSU2_TR(0x7318f6);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7318fc:{NFSU2_TR(0x7318fc);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7318ff:{NFSU2_TR(0x7318ff);
{u32 ea_=u32(r4(G+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731902:{NFSU2_TR(0x731902);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731908:{NFSU2_TR(0x731908);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73190b:{NFSU2_TR(0x73190b);
{u32 ea_=u32(r4(G+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73190e:{NFSU2_TR(0x73190e);
{u32 ea_=u32(u32(8199852u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731914:{NFSU2_TR(0x731914);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73191a:{NFSU2_TR(0x73191a);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73191d:{NFSU2_TR(0x73191d);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731920:{NFSU2_TR(0x731920);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731926:{NFSU2_TR(0x731926);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731929:{NFSU2_TR(0x731929);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73192c:{NFSU2_TR(0x73192c);
{u32 ea_=u32(u32(8199856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731932:{NFSU2_TR(0x731932);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731938:{NFSU2_TR(0x731938);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73193b:{NFSU2_TR(0x73193b);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73193e:{NFSU2_TR(0x73193e);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731944:{NFSU2_TR(0x731944);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731947:{NFSU2_TR(0x731947);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73194a:{NFSU2_TR(0x73194a);
{u32 ea_=u32(u32(8199860u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731950:{NFSU2_TR(0x731950);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731956:{NFSU2_TR(0x731956);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731959:{NFSU2_TR(0x731959);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73195c:{NFSU2_TR(0x73195c);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731962:{NFSU2_TR(0x731962);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731965:{NFSU2_TR(0x731965);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731968:{NFSU2_TR(0x731968);
{u32 ea_=u32(u32(8199864u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73196e:{NFSU2_TR(0x73196e);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731974:{NFSU2_TR(0x731974);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731977:{NFSU2_TR(0x731977);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73197a:{NFSU2_TR(0x73197a);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731980:{NFSU2_TR(0x731980);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731983:{NFSU2_TR(0x731983);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731986:{NFSU2_TR(0x731986);
{u32 ea_=u32(u32(8199868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73198c:{NFSU2_TR(0x73198c);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731992:{NFSU2_TR(0x731992);
{u32 ea_=u32(u32(9128504u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731998:{NFSU2_TR(0x731998);
{u32 ea_=u32(u32(9128504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73199e:{NFSU2_TR(0x73199e);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7319a4:{NFSU2_TR(0x7319a4);
{u32 ea_=u32(u32(8199872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7319aa:{NFSU2_TR(0x7319aa);
{u32 ea_=u32(u32(9128692u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7319b0:{NFSU2_TR(0x7319b0);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7319b6:{NFSU2_TR(0x7319b6);
{u32 ea_=u32(u32(9128508u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7319bc:{NFSU2_TR(0x7319bc);
{u32 ea_=u32(u32(9128636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7319c2:{NFSU2_TR(0x7319c2);
{u32 ea_=u32(u32(9128508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7319c8:{NFSU2_TR(0x7319c8);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7319ce:{NFSU2_TR(0x7319ce);
{u32 ea_=u32(u32(8199876u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7319d4:{NFSU2_TR(0x7319d4);
{u32 ea_=u32(u32(9128688u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7319da:{NFSU2_TR(0x7319da);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7319e0:{NFSU2_TR(0x7319e0);
{u32 ea_=u32(u32(9128512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7319e6:{NFSU2_TR(0x7319e6);
{u32 ea_=u32(u32(9128640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7319ec:{NFSU2_TR(0x7319ec);
{u32 ea_=u32(u32(9128512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7319f2:{NFSU2_TR(0x7319f2);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7319f8:{NFSU2_TR(0x7319f8);
{u32 ea_=u32(u32(8199880u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7319fe:{NFSU2_TR(0x7319fe);
{u32 ea_=u32(u32(9128684u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a04:{NFSU2_TR(0x731a04);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a0a:{NFSU2_TR(0x731a0a);
{u32 ea_=u32(u32(9128516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731a10:{NFSU2_TR(0x731a10);
{u32 ea_=u32(u32(9128644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a16:{NFSU2_TR(0x731a16);
{u32 ea_=u32(u32(9128516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a1c:{NFSU2_TR(0x731a1c);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731a22:{NFSU2_TR(0x731a22);
{u32 ea_=u32(u32(8199884u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731a28:{NFSU2_TR(0x731a28);
{u32 ea_=u32(u32(9128680u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a2e:{NFSU2_TR(0x731a2e);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a34:{NFSU2_TR(0x731a34);
{u32 ea_=u32(u32(9128520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731a3a:{NFSU2_TR(0x731a3a);
{u32 ea_=u32(u32(9128648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a40:{NFSU2_TR(0x731a40);
{u32 ea_=u32(u32(9128520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a46:{NFSU2_TR(0x731a46);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731a4c:{NFSU2_TR(0x731a4c);
{u32 ea_=u32(u32(8199888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731a52:{NFSU2_TR(0x731a52);
{u32 ea_=u32(u32(9128676u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a58:{NFSU2_TR(0x731a58);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a5e:{NFSU2_TR(0x731a5e);
{u32 ea_=u32(u32(9128524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731a64:{NFSU2_TR(0x731a64);
{u32 ea_=u32(u32(9128652u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a6a:{NFSU2_TR(0x731a6a);
{u32 ea_=u32(u32(9128524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a70:{NFSU2_TR(0x731a70);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731a76:{NFSU2_TR(0x731a76);
{u32 ea_=u32(u32(8199892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731a7c:{NFSU2_TR(0x731a7c);
{u32 ea_=u32(u32(9128672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a82:{NFSU2_TR(0x731a82);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a88:{NFSU2_TR(0x731a88);
{u32 ea_=u32(u32(9128528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731a8e:{NFSU2_TR(0x731a8e);
{u32 ea_=u32(u32(9128656u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731a94:{NFSU2_TR(0x731a94);
{u32 ea_=u32(u32(9128528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731a9a:{NFSU2_TR(0x731a9a);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731aa0:{NFSU2_TR(0x731aa0);
{u32 ea_=u32(u32(8199896u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731aa6:{NFSU2_TR(0x731aa6);
{u32 ea_=u32(u32(9128668u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731aac:{NFSU2_TR(0x731aac);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ab2:{NFSU2_TR(0x731ab2);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731ab8:{NFSU2_TR(0x731ab8);
{u32 ea_=u32(u32(8199900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731abe:{NFSU2_TR(0x731abe);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ac4:{NFSU2_TR(0x731ac4);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731aca:{NFSU2_TR(0x731aca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731acc:{NFSU2_TR(0x731acc);
{u32 ea_=u32(u32(9128664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731ad2:{NFSU2_TR(0x731ad2);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B731ad4:{NFSU2_TR(0x731ad4);
__asm__ volatile(".byte 0xd8,0xc5":::"memory");
}
B731ad6:{NFSU2_TR(0x731ad6);
{u32 ea_=u32(u32(9128696u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731adc:{NFSU2_TR(0x731adc);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B731ade:{NFSU2_TR(0x731ade);
__asm__ volatile(".byte 0xd8,0xe4":::"memory");
}
B731ae0:{NFSU2_TR(0x731ae0);
{u32 ea_=u32(u32(8199872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731ae6:{NFSU2_TR(0x731ae6);
{u32 ea_=u32(u32(9128756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731aec:{NFSU2_TR(0x731aec);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731af2:{NFSU2_TR(0x731af2);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731af8:{NFSU2_TR(0x731af8);
{u32 ea_=u32(u32(9128700u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731afe:{NFSU2_TR(0x731afe);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b04:{NFSU2_TR(0x731b04);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731b0a:{NFSU2_TR(0x731b0a);
{u32 ea_=u32(u32(8199876u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731b10:{NFSU2_TR(0x731b10);
{u32 ea_=u32(u32(9128752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731b16:{NFSU2_TR(0x731b16);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b1c:{NFSU2_TR(0x731b1c);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731b22:{NFSU2_TR(0x731b22);
{u32 ea_=u32(u32(9128704u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731b28:{NFSU2_TR(0x731b28);
{u32 ea_=u32(u32(9128620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b2e:{NFSU2_TR(0x731b2e);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731b34:{NFSU2_TR(0x731b34);
{u32 ea_=u32(u32(8199880u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731b3a:{NFSU2_TR(0x731b3a);
{u32 ea_=u32(u32(9128748u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731b40:{NFSU2_TR(0x731b40);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b46:{NFSU2_TR(0x731b46);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731b4c:{NFSU2_TR(0x731b4c);
{u32 ea_=u32(u32(9128708u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731b52:{NFSU2_TR(0x731b52);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b58:{NFSU2_TR(0x731b58);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731b5e:{NFSU2_TR(0x731b5e);
{u32 ea_=u32(u32(8199884u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731b64:{NFSU2_TR(0x731b64);
{u32 ea_=u32(u32(9128744u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731b6a:{NFSU2_TR(0x731b6a);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b70:{NFSU2_TR(0x731b70);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731b76:{NFSU2_TR(0x731b76);
{u32 ea_=u32(u32(9128712u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731b7c:{NFSU2_TR(0x731b7c);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b82:{NFSU2_TR(0x731b82);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731b88:{NFSU2_TR(0x731b88);
{u32 ea_=u32(u32(8199888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731b8e:{NFSU2_TR(0x731b8e);
{u32 ea_=u32(u32(9128740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731b94:{NFSU2_TR(0x731b94);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731b9a:{NFSU2_TR(0x731b9a);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731ba0:{NFSU2_TR(0x731ba0);
{u32 ea_=u32(u32(9128716u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731ba6:{NFSU2_TR(0x731ba6);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731bac:{NFSU2_TR(0x731bac);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731bb2:{NFSU2_TR(0x731bb2);
{u32 ea_=u32(u32(8199892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731bb8:{NFSU2_TR(0x731bb8);
{u32 ea_=u32(u32(9128736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731bbe:{NFSU2_TR(0x731bbe);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731bc4:{NFSU2_TR(0x731bc4);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731bca:{NFSU2_TR(0x731bca);
{u32 ea_=u32(u32(9128720u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731bd0:{NFSU2_TR(0x731bd0);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731bd6:{NFSU2_TR(0x731bd6);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731bdc:{NFSU2_TR(0x731bdc);
{u32 ea_=u32(u32(8199896u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731be2:{NFSU2_TR(0x731be2);
{u32 ea_=u32(u32(9128732u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731be8:{NFSU2_TR(0x731be8);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731bee:{NFSU2_TR(0x731bee);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731bf4:{NFSU2_TR(0x731bf4);
{u32 ea_=u32(u32(9128724u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731bfa:{NFSU2_TR(0x731bfa);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c00:{NFSU2_TR(0x731c00);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731c06:{NFSU2_TR(0x731c06);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731c08:{NFSU2_TR(0x731c08);
{u32 ea_=u32(u32(9128728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c0e:{NFSU2_TR(0x731c0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731c10:{NFSU2_TR(0x731c10);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B731c12:{NFSU2_TR(0x731c12);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B731c14:{NFSU2_TR(0x731c14);
{u32 ea_=u32(u32(9128504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c1a:{NFSU2_TR(0x731c1a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B731c1c:{NFSU2_TR(0x731c1c);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B731c1e:{NFSU2_TR(0x731c1e);
{u32 ea_=u32(u32(8199904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731c24:{NFSU2_TR(0x731c24);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c2a:{NFSU2_TR(0x731c2a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731c2c:{NFSU2_TR(0x731c2c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731c2e:{NFSU2_TR(0x731c2e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731c30:{NFSU2_TR(0x731c30);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731c32:{NFSU2_TR(0x731c32);
{u32 ea_=u32(u32(9128656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c38:{NFSU2_TR(0x731c38);
{u32 ea_=u32(u32(9128636u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731c3e:{NFSU2_TR(0x731c3e);
{u32 ea_=u32(u32(9128508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c44:{NFSU2_TR(0x731c44);
{u32 ea_=u32(u32(8199908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c4a:{NFSU2_TR(0x731c4a);
{u32 ea_=u32(u32(9128636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c50:{NFSU2_TR(0x731c50);
{u32 ea_=u32(u32(9128656u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731c56:{NFSU2_TR(0x731c56);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731c58:{NFSU2_TR(0x731c58);
{u32 ea_=u32(u32(9128528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c5e:{NFSU2_TR(0x731c5e);
{u32 ea_=u32(u32(9128652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c64:{NFSU2_TR(0x731c64);
{u32 ea_=u32(u32(9128640u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731c6a:{NFSU2_TR(0x731c6a);
{u32 ea_=u32(u32(9128512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c70:{NFSU2_TR(0x731c70);
{u32 ea_=u32(u32(8199912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c76:{NFSU2_TR(0x731c76);
{u32 ea_=u32(u32(9128640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c7c:{NFSU2_TR(0x731c7c);
{u32 ea_=u32(u32(9128652u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731c82:{NFSU2_TR(0x731c82);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731c84:{NFSU2_TR(0x731c84);
{u32 ea_=u32(u32(9128524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c8a:{NFSU2_TR(0x731c8a);
{u32 ea_=u32(u32(9128648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731c90:{NFSU2_TR(0x731c90);
{u32 ea_=u32(u32(9128644u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731c96:{NFSU2_TR(0x731c96);
{u32 ea_=u32(u32(9128516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731c9c:{NFSU2_TR(0x731c9c);
{u32 ea_=u32(u32(8199916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ca2:{NFSU2_TR(0x731ca2);
{u32 ea_=u32(u32(9128644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ca8:{NFSU2_TR(0x731ca8);
{u32 ea_=u32(u32(9128648u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731cae:{NFSU2_TR(0x731cae);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731cb0:{NFSU2_TR(0x731cb0);
{u32 ea_=u32(u32(9128520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731cb6:{NFSU2_TR(0x731cb6);
{u32 ea_=u32(u32(9128664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731cbc:{NFSU2_TR(0x731cbc);
{u32 ea_=u32(u32(9128692u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731cc2:{NFSU2_TR(0x731cc2);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731cc8:{NFSU2_TR(0x731cc8);
{u32 ea_=u32(u32(8199904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731cce:{NFSU2_TR(0x731cce);
{u32 ea_=u32(u32(9128692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731cd4:{NFSU2_TR(0x731cd4);
{u32 ea_=u32(u32(9128664u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731cda:{NFSU2_TR(0x731cda);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731cdc:{NFSU2_TR(0x731cdc);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731ce2:{NFSU2_TR(0x731ce2);
{u32 ea_=u32(u32(9128668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ce8:{NFSU2_TR(0x731ce8);
{u32 ea_=u32(u32(9128688u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731cee:{NFSU2_TR(0x731cee);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731cf4:{NFSU2_TR(0x731cf4);
{u32 ea_=u32(u32(9128688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731cfa:{NFSU2_TR(0x731cfa);
{u32 ea_=u32(u32(9128668u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731d00:{NFSU2_TR(0x731d00);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B731d02:{NFSU2_TR(0x731d02);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d08:{NFSU2_TR(0x731d08);
{u32 ea_=u32(u32(9128672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d0e:{NFSU2_TR(0x731d0e);
{u32 ea_=u32(u32(9128684u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731d14:{NFSU2_TR(0x731d14);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d1a:{NFSU2_TR(0x731d1a);
{u32 ea_=u32(u32(9128684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d20:{NFSU2_TR(0x731d20);
{u32 ea_=u32(u32(9128672u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731d26:{NFSU2_TR(0x731d26);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B731d28:{NFSU2_TR(0x731d28);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d2e:{NFSU2_TR(0x731d2e);
{u32 ea_=u32(u32(9128676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d34:{NFSU2_TR(0x731d34);
{u32 ea_=u32(u32(9128680u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731d3a:{NFSU2_TR(0x731d3a);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d40:{NFSU2_TR(0x731d40);
{u32 ea_=u32(u32(9128680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d46:{NFSU2_TR(0x731d46);
{u32 ea_=u32(u32(9128676u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731d4c:{NFSU2_TR(0x731d4c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B731d4e:{NFSU2_TR(0x731d4e);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d54:{NFSU2_TR(0x731d54);
{u32 ea_=u32(u32(9128724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d5a:{NFSU2_TR(0x731d5a);
{u32 ea_=u32(u32(9128696u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731d60:{NFSU2_TR(0x731d60);
{u32 ea_=u32(u32(9128568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d66:{NFSU2_TR(0x731d66);
{u32 ea_=u32(u32(9128696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d6c:{NFSU2_TR(0x731d6c);
{u32 ea_=u32(u32(9128724u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731d72:{NFSU2_TR(0x731d72);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731d74:{NFSU2_TR(0x731d74);
{u32 ea_=u32(u32(9128596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d7a:{NFSU2_TR(0x731d7a);
{u32 ea_=u32(u32(9128720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d80:{NFSU2_TR(0x731d80);
{u32 ea_=u32(u32(9128700u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731d86:{NFSU2_TR(0x731d86);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731d8c:{NFSU2_TR(0x731d8c);
{u32 ea_=u32(u32(9128700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731d92:{NFSU2_TR(0x731d92);
{u32 ea_=u32(u32(9128720u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731d98:{NFSU2_TR(0x731d98);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B731d9a:{NFSU2_TR(0x731d9a);
{u32 ea_=u32(u32(9128592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731da0:{NFSU2_TR(0x731da0);
{u32 ea_=u32(u32(9128716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731da6:{NFSU2_TR(0x731da6);
{u32 ea_=u32(u32(9128704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731dac:{NFSU2_TR(0x731dac);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731db2:{NFSU2_TR(0x731db2);
{u32 ea_=u32(u32(9128704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731db8:{NFSU2_TR(0x731db8);
{u32 ea_=u32(u32(9128716u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731dbe:{NFSU2_TR(0x731dbe);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B731dc0:{NFSU2_TR(0x731dc0);
{u32 ea_=u32(u32(9128588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731dc6:{NFSU2_TR(0x731dc6);
{u32 ea_=u32(u32(9128712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731dcc:{NFSU2_TR(0x731dcc);
{u32 ea_=u32(u32(9128708u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731dd2:{NFSU2_TR(0x731dd2);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731dd8:{NFSU2_TR(0x731dd8);
{u32 ea_=u32(u32(9128708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731dde:{NFSU2_TR(0x731dde);
{u32 ea_=u32(u32(9128712u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731de4:{NFSU2_TR(0x731de4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B731de6:{NFSU2_TR(0x731de6);
{u32 ea_=u32(u32(9128584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731dec:{NFSU2_TR(0x731dec);
{u32 ea_=u32(u32(9128728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731df2:{NFSU2_TR(0x731df2);
{u32 ea_=u32(u32(9128756u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731df8:{NFSU2_TR(0x731df8);
{u32 ea_=u32(u32(9128600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731dfe:{NFSU2_TR(0x731dfe);
{u32 ea_=u32(u32(9128756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e04:{NFSU2_TR(0x731e04);
{u32 ea_=u32(u32(9128728u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731e0a:{NFSU2_TR(0x731e0a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731e0c:{NFSU2_TR(0x731e0c);
{u32 ea_=u32(u32(9128628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731e12:{NFSU2_TR(0x731e12);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731e14:{NFSU2_TR(0x731e14);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731e16:{NFSU2_TR(0x731e16);
{u32 ea_=u32(u32(9128732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e1c:{NFSU2_TR(0x731e1c);
{u32 ea_=u32(u32(9128752u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731e22:{NFSU2_TR(0x731e22);
{u32 ea_=u32(u32(9128604u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731e28:{NFSU2_TR(0x731e28);
{u32 ea_=u32(u32(9128752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e2e:{NFSU2_TR(0x731e2e);
{u32 ea_=u32(u32(9128732u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731e34:{NFSU2_TR(0x731e34);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B731e36:{NFSU2_TR(0x731e36);
{u32 ea_=u32(u32(9128624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731e3c:{NFSU2_TR(0x731e3c);
{u32 ea_=u32(u32(9128736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e42:{NFSU2_TR(0x731e42);
{u32 ea_=u32(u32(9128748u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731e48:{NFSU2_TR(0x731e48);
{u32 ea_=u32(u32(9128608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731e4e:{NFSU2_TR(0x731e4e);
{u32 ea_=u32(u32(9128748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e54:{NFSU2_TR(0x731e54);
{u32 ea_=u32(u32(9128736u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731e5a:{NFSU2_TR(0x731e5a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731e5c:{NFSU2_TR(0x731e5c);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B731e5e:{NFSU2_TR(0x731e5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B731e60:{NFSU2_TR(0x731e60);
{u32 ea_=u32(u32(9128740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e66:{NFSU2_TR(0x731e66);
{u32 ea_=u32(u32(9128744u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731e6c:{NFSU2_TR(0x731e6c);
{u32 ea_=u32(u32(9128612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731e72:{NFSU2_TR(0x731e72);
{u32 ea_=u32(u32(9128744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e78:{NFSU2_TR(0x731e78);
{u32 ea_=u32(u32(9128740u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731e7e:{NFSU2_TR(0x731e7e);
{u32 ea_=u32(u32(8199916u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B731e84:{NFSU2_TR(0x731e84);
{u32 ea_=u32(u32(9128616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731e8a:{NFSU2_TR(0x731e8a);
{u32 ea_=u32(u32(9128516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731e90:{NFSU2_TR(0x731e90);
{u32 ea_=u32(u32(9128504u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731e96:{NFSU2_TR(0x731e96);
{u32 ea_=u32(u32(9128632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731e9c:{NFSU2_TR(0x731e9c);
{u32 ea_=u32(u32(8199920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ea2:{NFSU2_TR(0x731ea2);
{u32 ea_=u32(u32(9128504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ea8:{NFSU2_TR(0x731ea8);
{u32 ea_=u32(u32(9128516u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731eae:{NFSU2_TR(0x731eae);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731eb0:{NFSU2_TR(0x731eb0);
{u32 ea_=u32(u32(9128644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731eb6:{NFSU2_TR(0x731eb6);
{u32 ea_=u32(u32(9128512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ebc:{NFSU2_TR(0x731ebc);
{u32 ea_=u32(u32(9128508u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731ec2:{NFSU2_TR(0x731ec2);
{u32 ea_=u32(u32(9128636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731ec8:{NFSU2_TR(0x731ec8);
{u32 ea_=u32(u32(8199924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ece:{NFSU2_TR(0x731ece);
{u32 ea_=u32(u32(9128508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ed4:{NFSU2_TR(0x731ed4);
{u32 ea_=u32(u32(9128512u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731eda:{NFSU2_TR(0x731eda);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731edc:{NFSU2_TR(0x731edc);
{u32 ea_=u32(u32(9128640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731ee2:{NFSU2_TR(0x731ee2);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ee8:{NFSU2_TR(0x731ee8);
{u32 ea_=u32(u32(9128520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731eee:{NFSU2_TR(0x731eee);
{u32 ea_=u32(u32(9128648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731ef4:{NFSU2_TR(0x731ef4);
{u32 ea_=u32(u32(9128532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731efa:{NFSU2_TR(0x731efa);
{u32 ea_=u32(u32(9128520u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731f00:{NFSU2_TR(0x731f00);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B731f02:{NFSU2_TR(0x731f02);
{u32 ea_=u32(u32(9128660u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f08:{NFSU2_TR(0x731f08);
{u32 ea_=u32(u32(9128528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f0e:{NFSU2_TR(0x731f0e);
{u32 ea_=u32(u32(9128524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731f14:{NFSU2_TR(0x731f14);
{u32 ea_=u32(u32(9128652u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f1a:{NFSU2_TR(0x731f1a);
{u32 ea_=u32(u32(9128528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f20:{NFSU2_TR(0x731f20);
{u32 ea_=u32(u32(9128524u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731f26:{NFSU2_TR(0x731f26);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731f28:{NFSU2_TR(0x731f28);
{u32 ea_=u32(u32(9128656u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f2e:{NFSU2_TR(0x731f2e);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f34:{NFSU2_TR(0x731f34);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731f3a:{NFSU2_TR(0x731f3a);
{u32 ea_=u32(u32(9128664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f40:{NFSU2_TR(0x731f40);
{u32 ea_=u32(u32(9128536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f46:{NFSU2_TR(0x731f46);
{u32 ea_=u32(u32(9128548u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731f4c:{NFSU2_TR(0x731f4c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B731f4e:{NFSU2_TR(0x731f4e);
{u32 ea_=u32(u32(9128676u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f54:{NFSU2_TR(0x731f54);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f5a:{NFSU2_TR(0x731f5a);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731f60:{NFSU2_TR(0x731f60);
{u32 ea_=u32(u32(9128668u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f66:{NFSU2_TR(0x731f66);
{u32 ea_=u32(u32(9128540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f6c:{NFSU2_TR(0x731f6c);
{u32 ea_=u32(u32(9128544u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731f72:{NFSU2_TR(0x731f72);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731f74:{NFSU2_TR(0x731f74);
{u32 ea_=u32(u32(9128672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f7a:{NFSU2_TR(0x731f7a);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f80:{NFSU2_TR(0x731f80);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731f86:{NFSU2_TR(0x731f86);
{u32 ea_=u32(u32(9128680u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731f8c:{NFSU2_TR(0x731f8c);
{u32 ea_=u32(u32(9128564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731f92:{NFSU2_TR(0x731f92);
{u32 ea_=u32(u32(9128552u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731f98:{NFSU2_TR(0x731f98);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B731f9a:{NFSU2_TR(0x731f9a);
{u32 ea_=u32(u32(9128692u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731fa0:{NFSU2_TR(0x731fa0);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731fa6:{NFSU2_TR(0x731fa6);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731fac:{NFSU2_TR(0x731fac);
{u32 ea_=u32(u32(9128684u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731fb2:{NFSU2_TR(0x731fb2);
{u32 ea_=u32(u32(9128560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731fb8:{NFSU2_TR(0x731fb8);
{u32 ea_=u32(u32(9128556u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731fbe:{NFSU2_TR(0x731fbe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B731fc0:{NFSU2_TR(0x731fc0);
{u32 ea_=u32(u32(9128688u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731fc6:{NFSU2_TR(0x731fc6);
{u32 ea_=u32(u32(9128568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731fcc:{NFSU2_TR(0x731fcc);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731fd2:{NFSU2_TR(0x731fd2);
{u32 ea_=u32(u32(9128696u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731fd8:{NFSU2_TR(0x731fd8);
{u32 ea_=u32(u32(9128568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731fde:{NFSU2_TR(0x731fde);
{u32 ea_=u32(u32(9128580u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B731fe4:{NFSU2_TR(0x731fe4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B731fe6:{NFSU2_TR(0x731fe6);
{u32 ea_=u32(u32(9128708u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731fec:{NFSU2_TR(0x731fec);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B731ff2:{NFSU2_TR(0x731ff2);
{u32 ea_=u32(u32(9128576u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B731ff8:{NFSU2_TR(0x731ff8);
{u32 ea_=u32(u32(9128700u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B731ffe:{NFSU2_TR(0x731ffe);
{u32 ea_=u32(u32(9128572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{EXIT(0x732004u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_731(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x731799:[[clang::musttail]] return blk_731799(c,a4,a0,a1,bud);
case 0x7317b4:[[clang::musttail]] return blk_7317b4(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_731(Cpu& c){u8* R=c.regs.data();return ent_731(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
