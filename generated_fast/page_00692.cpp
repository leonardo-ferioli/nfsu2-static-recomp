#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692a27(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692a92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692d72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692f48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692f6e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6925ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6929c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692a65(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692f76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692002:L692002:{bud-=328;NFSU2_TR(0x692002);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692006:{NFSU2_TR(0x692006);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69200a:{NFSU2_TR(0x69200a);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692013:{NFSU2_TR(0x692013);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692017:{NFSU2_TR(0x692017);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69201b:{NFSU2_TR(0x69201b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69201f:{NFSU2_TR(0x69201f);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692028:{NFSU2_TR(0x692028);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69202c:{NFSU2_TR(0x69202c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692030:{NFSU2_TR(0x692030);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692034:{NFSU2_TR(0x692034);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692038:{NFSU2_TR(0x692038);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69203b:{NFSU2_TR(0x69203b);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692043:{NFSU2_TR(0x692043);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692047:{NFSU2_TR(0x692047);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69204a:{NFSU2_TR(0x69204a);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692052:{NFSU2_TR(0x692052);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692055:{NFSU2_TR(0x692055);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69205d:{NFSU2_TR(0x69205d);
__builtin_memmove((R+4356),(R+4352),4);
}
B692060:{NFSU2_TR(0x692060);
__builtin_memmove((R+4372),(R+4368),4);
}
B692063:{NFSU2_TR(0x692063);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692067:{NFSU2_TR(0x692067);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69206a:{NFSU2_TR(0x69206a);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692073:{NFSU2_TR(0x692073);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69207b:{NFSU2_TR(0x69207b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69207f:{NFSU2_TR(0x69207f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692082:{NFSU2_TR(0x692082);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69208b:{NFSU2_TR(0x69208b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69208f:{NFSU2_TR(0x69208f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692093:{NFSU2_TR(0x692093);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692097:{NFSU2_TR(0x692097);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6920a0:{NFSU2_TR(0x6920a0);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6920a4:{NFSU2_TR(0x6920a4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6920a8:{NFSU2_TR(0x6920a8);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6920ac:{NFSU2_TR(0x6920ac);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6920b5:{NFSU2_TR(0x6920b5);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6920b9:{NFSU2_TR(0x6920b9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6920bd:{NFSU2_TR(0x6920bd);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6920c1:{NFSU2_TR(0x6920c1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6920c5:{NFSU2_TR(0x6920c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6920c9:{NFSU2_TR(0x6920c9);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6920d1:{NFSU2_TR(0x6920d1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6920d5:{NFSU2_TR(0x6920d5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6920d8:{NFSU2_TR(0x6920d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6920e0:{NFSU2_TR(0x6920e0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6920e3:{NFSU2_TR(0x6920e3);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6920eb:{NFSU2_TR(0x6920eb);
__builtin_memmove((R+4356),(R+4352),4);
}
B6920ee:{NFSU2_TR(0x6920ee);
__builtin_memmove((R+4372),(R+4368),4);
}
B6920f1:{NFSU2_TR(0x6920f1);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6920f5:{NFSU2_TR(0x6920f5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6920f8:{NFSU2_TR(0x6920f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692101:{NFSU2_TR(0x692101);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692109:{NFSU2_TR(0x692109);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69210d:{NFSU2_TR(0x69210d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692110:{NFSU2_TR(0x692110);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692119:{NFSU2_TR(0x692119);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69211d:{NFSU2_TR(0x69211d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692121:{NFSU2_TR(0x692121);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692125:{NFSU2_TR(0x692125);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69212e:{NFSU2_TR(0x69212e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692132:{NFSU2_TR(0x692132);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692136:{NFSU2_TR(0x692136);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69213a:{NFSU2_TR(0x69213a);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692143:{NFSU2_TR(0x692143);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692147:{NFSU2_TR(0x692147);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69214b:{NFSU2_TR(0x69214b);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69214f:{NFSU2_TR(0x69214f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692153:{NFSU2_TR(0x692153);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692157:{NFSU2_TR(0x692157);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69215f:{NFSU2_TR(0x69215f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692163:{NFSU2_TR(0x692163);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692166:{NFSU2_TR(0x692166);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69216e:{NFSU2_TR(0x69216e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692171:{NFSU2_TR(0x692171);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692179:{NFSU2_TR(0x692179);
__builtin_memmove((R+4356),(R+4352),4);
}
B69217c:{NFSU2_TR(0x69217c);
__builtin_memmove((R+4372),(R+4368),4);
}
B69217f:{NFSU2_TR(0x69217f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692183:{NFSU2_TR(0x692183);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692186:{NFSU2_TR(0x692186);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69218f:{NFSU2_TR(0x69218f);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692197:{NFSU2_TR(0x692197);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69219b:{NFSU2_TR(0x69219b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69219e:{NFSU2_TR(0x69219e);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6921a7:{NFSU2_TR(0x6921a7);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6921ab:{NFSU2_TR(0x6921ab);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6921af:{NFSU2_TR(0x6921af);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6921b3:{NFSU2_TR(0x6921b3);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6921bc:{NFSU2_TR(0x6921bc);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6921c0:{NFSU2_TR(0x6921c0);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6921c4:{NFSU2_TR(0x6921c4);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6921c8:{NFSU2_TR(0x6921c8);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6921d1:{NFSU2_TR(0x6921d1);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6921d5:{NFSU2_TR(0x6921d5);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6921d9:{NFSU2_TR(0x6921d9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6921dd:{NFSU2_TR(0x6921dd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6921e1:{NFSU2_TR(0x6921e1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6921e4:{NFSU2_TR(0x6921e4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6921e8:{NFSU2_TR(0x6921e8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6921ec:{NFSU2_TR(0x6921ec);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6921ef:{NFSU2_TR(0x6921ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6921f4:{NFSU2_TR(0x6921f4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6921f7:{NFSU2_TR(0x6921f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6921fc:{NFSU2_TR(0x6921fc);
__builtin_memmove((R+4356),(R+4352),4);
}
B6921ff:{NFSU2_TR(0x6921ff);
__builtin_memmove((R+4372),(R+4368),4);
}
B692202:{NFSU2_TR(0x692202);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692206:{NFSU2_TR(0x692206);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692209:{NFSU2_TR(0x692209);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69220f:{NFSU2_TR(0x69220f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692214:{NFSU2_TR(0x692214);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692218:{NFSU2_TR(0x692218);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69221b:{NFSU2_TR(0x69221b);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692221:{NFSU2_TR(0x692221);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692225:{NFSU2_TR(0x692225);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692229:{NFSU2_TR(0x692229);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69222d:{NFSU2_TR(0x69222d);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692233:{NFSU2_TR(0x692233);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692237:{NFSU2_TR(0x692237);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69223b:{NFSU2_TR(0x69223b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69223f:{NFSU2_TR(0x69223f);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692245:{NFSU2_TR(0x692245);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692249:{NFSU2_TR(0x692249);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69224d:{NFSU2_TR(0x69224d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692251:{NFSU2_TR(0x692251);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692255:{NFSU2_TR(0x692255);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692258:{NFSU2_TR(0x692258);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69225c:{NFSU2_TR(0x69225c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692260:{NFSU2_TR(0x692260);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692263:{NFSU2_TR(0x692263);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692268:{NFSU2_TR(0x692268);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69226b:{NFSU2_TR(0x69226b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692270:{NFSU2_TR(0x692270);
__builtin_memmove((R+4356),(R+4352),4);
}
B692273:{NFSU2_TR(0x692273);
__builtin_memmove((R+4372),(R+4368),4);
}
B692276:{NFSU2_TR(0x692276);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69227a:{NFSU2_TR(0x69227a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69227d:{NFSU2_TR(0x69227d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692283:{NFSU2_TR(0x692283);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692288:{NFSU2_TR(0x692288);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69228c:{NFSU2_TR(0x69228c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69228f:{NFSU2_TR(0x69228f);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692295:{NFSU2_TR(0x692295);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692299:{NFSU2_TR(0x692299);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69229d:{NFSU2_TR(0x69229d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6922a1:{NFSU2_TR(0x6922a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6922a7:{NFSU2_TR(0x6922a7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6922ab:{NFSU2_TR(0x6922ab);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6922af:{NFSU2_TR(0x6922af);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6922b3:{NFSU2_TR(0x6922b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6922b9:{NFSU2_TR(0x6922b9);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6922bd:{NFSU2_TR(0x6922bd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6922c1:{NFSU2_TR(0x6922c1);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6922c5:{NFSU2_TR(0x6922c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6922c9:{NFSU2_TR(0x6922c9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6922cd:{NFSU2_TR(0x6922cd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6922d1:{NFSU2_TR(0x6922d1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6922d5:{NFSU2_TR(0x6922d5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6922d8:{NFSU2_TR(0x6922d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6922dd:{NFSU2_TR(0x6922dd);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6922e0:{NFSU2_TR(0x6922e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6922e5:{NFSU2_TR(0x6922e5);
__builtin_memmove((R+4356),(R+4352),4);
}
B6922e8:{NFSU2_TR(0x6922e8);
__builtin_memmove((R+4372),(R+4368),4);
}
B6922eb:{NFSU2_TR(0x6922eb);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6922ef:{NFSU2_TR(0x6922ef);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6922f2:{NFSU2_TR(0x6922f2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6922f8:{NFSU2_TR(0x6922f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6922fd:{NFSU2_TR(0x6922fd);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692301:{NFSU2_TR(0x692301);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692304:{NFSU2_TR(0x692304);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69230a:{NFSU2_TR(0x69230a);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69230e:{NFSU2_TR(0x69230e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692312:{NFSU2_TR(0x692312);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692316:{NFSU2_TR(0x692316);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69231c:{NFSU2_TR(0x69231c);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692320:{NFSU2_TR(0x692320);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692324:{NFSU2_TR(0x692324);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692328:{NFSU2_TR(0x692328);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69232e:{NFSU2_TR(0x69232e);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692332:{NFSU2_TR(0x692332);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692336:{NFSU2_TR(0x692336);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69233a:{NFSU2_TR(0x69233a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69233e:{NFSU2_TR(0x69233e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692342:{NFSU2_TR(0x692342);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692346:{NFSU2_TR(0x692346);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69234a:{NFSU2_TR(0x69234a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69234d:{NFSU2_TR(0x69234d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692352:{NFSU2_TR(0x692352);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692355:{NFSU2_TR(0x692355);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69235a:{NFSU2_TR(0x69235a);
__builtin_memmove((R+4356),(R+4352),4);
}
B69235d:{NFSU2_TR(0x69235d);
__builtin_memmove((R+4372),(R+4368),4);
}
B692360:{NFSU2_TR(0x692360);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692364:{NFSU2_TR(0x692364);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692367:{NFSU2_TR(0x692367);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69236d:{NFSU2_TR(0x69236d);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692372:{NFSU2_TR(0x692372);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692376:{NFSU2_TR(0x692376);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692379:{NFSU2_TR(0x692379);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69237f:{NFSU2_TR(0x69237f);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692383:{NFSU2_TR(0x692383);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692387:{NFSU2_TR(0x692387);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69238b:{NFSU2_TR(0x69238b);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692391:{NFSU2_TR(0x692391);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692395:{NFSU2_TR(0x692395);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692399:{NFSU2_TR(0x692399);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69239d:{NFSU2_TR(0x69239d);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6923a3:{NFSU2_TR(0x6923a3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6923a7:{NFSU2_TR(0x6923a7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6923ab:{NFSU2_TR(0x6923ab);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6923af:{NFSU2_TR(0x6923af);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6923b3:{NFSU2_TR(0x6923b3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6923b6:{NFSU2_TR(0x6923b6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6923ba:{NFSU2_TR(0x6923ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6923bf:{NFSU2_TR(0x6923bf);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6923c2:{NFSU2_TR(0x6923c2);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6923c7:{NFSU2_TR(0x6923c7);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6923ca:{NFSU2_TR(0x6923ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6923cf:{NFSU2_TR(0x6923cf);
__builtin_memmove((R+4356),(R+4352),4);
}
B6923d2:{NFSU2_TR(0x6923d2);
__builtin_memmove((R+4372),(R+4368),4);
}
B6923d5:{NFSU2_TR(0x6923d5);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6923d9:{NFSU2_TR(0x6923d9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6923dc:{NFSU2_TR(0x6923dc);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6923e2:{NFSU2_TR(0x6923e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6923e7:{NFSU2_TR(0x6923e7);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6923eb:{NFSU2_TR(0x6923eb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6923ee:{NFSU2_TR(0x6923ee);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6923f4:{NFSU2_TR(0x6923f4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6923f8:{NFSU2_TR(0x6923f8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6923fc:{NFSU2_TR(0x6923fc);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692400:{NFSU2_TR(0x692400);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692406:{NFSU2_TR(0x692406);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69240a:{NFSU2_TR(0x69240a);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69240e:{NFSU2_TR(0x69240e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692412:{NFSU2_TR(0x692412);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692418:{NFSU2_TR(0x692418);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69241c:{NFSU2_TR(0x69241c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692420:{NFSU2_TR(0x692420);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692424:{NFSU2_TR(0x692424);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692428:{NFSU2_TR(0x692428);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69242b:{NFSU2_TR(0x69242b);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692430:{NFSU2_TR(0x692430);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692434:{NFSU2_TR(0x692434);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692437:{NFSU2_TR(0x692437);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69243c:{NFSU2_TR(0x69243c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69243f:{NFSU2_TR(0x69243f);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692444:{NFSU2_TR(0x692444);
__builtin_memmove((R+4356),(R+4352),4);
}
B692447:{NFSU2_TR(0x692447);
__builtin_memmove((R+4372),(R+4368),4);
}
B69244a:{NFSU2_TR(0x69244a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69244e:{NFSU2_TR(0x69244e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692451:{NFSU2_TR(0x692451);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692457:{NFSU2_TR(0x692457);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69245c:{NFSU2_TR(0x69245c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692460:{NFSU2_TR(0x692460);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692463:{NFSU2_TR(0x692463);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692469:{NFSU2_TR(0x692469);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69246d:{NFSU2_TR(0x69246d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692471:{NFSU2_TR(0x692471);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692475:{NFSU2_TR(0x692475);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69247b:{NFSU2_TR(0x69247b);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69247f:{NFSU2_TR(0x69247f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692483:{NFSU2_TR(0x692483);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692487:{NFSU2_TR(0x692487);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69248d:{NFSU2_TR(0x69248d);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692491:{NFSU2_TR(0x692491);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692495:{NFSU2_TR(0x692495);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692499:{NFSU2_TR(0x692499);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69249d:{NFSU2_TR(0x69249d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6924a1:{NFSU2_TR(0x6924a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6924a6:{NFSU2_TR(0x6924a6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6924aa:{NFSU2_TR(0x6924aa);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6924ad:{NFSU2_TR(0x6924ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6924b2:{NFSU2_TR(0x6924b2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6924b5:{NFSU2_TR(0x6924b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6924ba:{NFSU2_TR(0x6924ba);
__builtin_memmove((R+4356),(R+4352),4);
}
B6924bd:{NFSU2_TR(0x6924bd);
__builtin_memmove((R+4372),(R+4368),4);
}
B6924c0:{NFSU2_TR(0x6924c0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6924c4:{NFSU2_TR(0x6924c4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6924c7:{NFSU2_TR(0x6924c7);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6924cd:{NFSU2_TR(0x6924cd);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6924d2:{NFSU2_TR(0x6924d2);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6924d6:{NFSU2_TR(0x6924d6);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6924d9:{NFSU2_TR(0x6924d9);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6924df:{NFSU2_TR(0x6924df);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6924e3:{NFSU2_TR(0x6924e3);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6924e7:{NFSU2_TR(0x6924e7);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6924eb:{NFSU2_TR(0x6924eb);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6924f1:{NFSU2_TR(0x6924f1);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6924f5:{NFSU2_TR(0x6924f5);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6924f9:{NFSU2_TR(0x6924f9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6924fd:{NFSU2_TR(0x6924fd);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692503:{NFSU2_TR(0x692503);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692507:{NFSU2_TR(0x692507);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69250b:{NFSU2_TR(0x69250b);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69250f:{NFSU2_TR(0x69250f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692513:{NFSU2_TR(0x692513);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692517:{NFSU2_TR(0x692517);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69251c:{NFSU2_TR(0x69251c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692520:{NFSU2_TR(0x692520);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692523:{NFSU2_TR(0x692523);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692528:{NFSU2_TR(0x692528);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69252b:{NFSU2_TR(0x69252b);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692530:{NFSU2_TR(0x692530);
__builtin_memmove((R+4356),(R+4352),4);
}
B692533:{NFSU2_TR(0x692533);
__builtin_memmove((R+4372),(R+4368),4);
}
B692536:{NFSU2_TR(0x692536);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69253a:{NFSU2_TR(0x69253a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69253d:{NFSU2_TR(0x69253d);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692543:{NFSU2_TR(0x692543);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692548:{NFSU2_TR(0x692548);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69254c:{NFSU2_TR(0x69254c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69254f:{NFSU2_TR(0x69254f);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692555:{NFSU2_TR(0x692555);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692559:{NFSU2_TR(0x692559);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69255d:{NFSU2_TR(0x69255d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692561:{NFSU2_TR(0x692561);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692567:{NFSU2_TR(0x692567);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69256b:{NFSU2_TR(0x69256b);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69256f:{NFSU2_TR(0x69256f);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692573:{NFSU2_TR(0x692573);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692579:{NFSU2_TR(0x692579);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69257d:{NFSU2_TR(0x69257d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692581:{NFSU2_TR(0x692581);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692585:{NFSU2_TR(0x692585);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692589:{NFSU2_TR(0x692589);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69258c:{NFSU2_TR(0x69258c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692590:{NFSU2_TR(0x692590);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B692594:{NFSU2_TR(0x692594);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692598:{NFSU2_TR(0x692598);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69259c:{NFSU2_TR(0x69259c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6925a0:{NFSU2_TR(0x6925a0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925a4:{NFSU2_TR(0x6925a4);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B6925a8:{NFSU2_TR(0x6925a8);
{[[clang::musttail]] return blk_692a92(ARGS);}
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
PN u32 blk_6925ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6925ad:L6925ad:{bud-=254;NFSU2_TR(0x6925ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6925b0:{NFSU2_TR(0x6925b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6925b5:{NFSU2_TR(0x6925b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6925ba:{NFSU2_TR(0x6925ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6925bf:{NFSU2_TR(0x6925bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6925c4:{NFSU2_TR(0x6925c4);
__builtin_memmove((R+4384),(R+4352),8);
}
B6925c7:{NFSU2_TR(0x6925c7);
__builtin_memmove((R+4356),(R+4368),4);
}
B6925ca:{NFSU2_TR(0x6925ca);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B6925cd:{NFSU2_TR(0x6925cd);
__builtin_memmove((R+4432),(R+4400),8);
}
B6925d0:{NFSU2_TR(0x6925d0);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6925d3:{NFSU2_TR(0x6925d3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925d7:{NFSU2_TR(0x6925d7);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6925dc:{NFSU2_TR(0x6925dc);
__builtin_memmove((R+4404),(R+4416),4);
}
B6925df:{NFSU2_TR(0x6925df);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6925e4:{NFSU2_TR(0x6925e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6925e9:{NFSU2_TR(0x6925e9);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B6925ec:{NFSU2_TR(0x6925ec);
__builtin_memmove((R+4368),(R+4448),8);
}
B6925ef:{NFSU2_TR(0x6925ef);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925f3:{NFSU2_TR(0x6925f3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925f7:{NFSU2_TR(0x6925f7);
__builtin_memmove((R+4452),(R+4464),4);
}
B6925fa:{NFSU2_TR(0x6925fa);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6925ff:{NFSU2_TR(0x6925ff);
__builtin_memmove((R+4384),(R+4352),8);
}
B692602:{NFSU2_TR(0x692602);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B692605:{NFSU2_TR(0x692605);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692609:{NFSU2_TR(0x692609);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B69260c:{NFSU2_TR(0x69260c);
__builtin_memmove((R+4388),(R+4416),4);
}
B69260f:{NFSU2_TR(0x69260f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692613:{NFSU2_TR(0x692613);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692617:{NFSU2_TR(0x692617);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69261b:{NFSU2_TR(0x69261b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69261e:{NFSU2_TR(0x69261e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692622:{NFSU2_TR(0x692622);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692626:{NFSU2_TR(0x692626);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692629:{NFSU2_TR(0x692629);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69262e:{NFSU2_TR(0x69262e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692631:{NFSU2_TR(0x692631);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692636:{NFSU2_TR(0x692636);
__builtin_memmove((R+4356),(R+4352),4);
}
B692639:{NFSU2_TR(0x692639);
__builtin_memmove((R+4372),(R+4368),4);
}
B69263c:{NFSU2_TR(0x69263c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692640:{NFSU2_TR(0x692640);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692643:{NFSU2_TR(0x692643);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692649:{NFSU2_TR(0x692649);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69264e:{NFSU2_TR(0x69264e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692652:{NFSU2_TR(0x692652);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692655:{NFSU2_TR(0x692655);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69265b:{NFSU2_TR(0x69265b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69265f:{NFSU2_TR(0x69265f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692663:{NFSU2_TR(0x692663);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692667:{NFSU2_TR(0x692667);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69266d:{NFSU2_TR(0x69266d);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692671:{NFSU2_TR(0x692671);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692675:{NFSU2_TR(0x692675);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692679:{NFSU2_TR(0x692679);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69267f:{NFSU2_TR(0x69267f);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692683:{NFSU2_TR(0x692683);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692687:{NFSU2_TR(0x692687);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69268b:{NFSU2_TR(0x69268b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69268f:{NFSU2_TR(0x69268f);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692692:{NFSU2_TR(0x692692);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692696:{NFSU2_TR(0x692696);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69269a:{NFSU2_TR(0x69269a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69269d:{NFSU2_TR(0x69269d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6926a2:{NFSU2_TR(0x6926a2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6926a5:{NFSU2_TR(0x6926a5);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6926aa:{NFSU2_TR(0x6926aa);
__builtin_memmove((R+4356),(R+4352),4);
}
B6926ad:{NFSU2_TR(0x6926ad);
__builtin_memmove((R+4372),(R+4368),4);
}
B6926b0:{NFSU2_TR(0x6926b0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6926b4:{NFSU2_TR(0x6926b4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6926b7:{NFSU2_TR(0x6926b7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6926bd:{NFSU2_TR(0x6926bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6926c2:{NFSU2_TR(0x6926c2);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6926c6:{NFSU2_TR(0x6926c6);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6926c9:{NFSU2_TR(0x6926c9);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6926cf:{NFSU2_TR(0x6926cf);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6926d3:{NFSU2_TR(0x6926d3);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6926d7:{NFSU2_TR(0x6926d7);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6926db:{NFSU2_TR(0x6926db);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6926e1:{NFSU2_TR(0x6926e1);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6926e5:{NFSU2_TR(0x6926e5);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6926e9:{NFSU2_TR(0x6926e9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6926ed:{NFSU2_TR(0x6926ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6926f3:{NFSU2_TR(0x6926f3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6926f7:{NFSU2_TR(0x6926f7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6926fb:{NFSU2_TR(0x6926fb);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6926ff:{NFSU2_TR(0x6926ff);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692703:{NFSU2_TR(0x692703);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692707:{NFSU2_TR(0x692707);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69270b:{NFSU2_TR(0x69270b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69270f:{NFSU2_TR(0x69270f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692712:{NFSU2_TR(0x692712);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692717:{NFSU2_TR(0x692717);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69271a:{NFSU2_TR(0x69271a);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69271f:{NFSU2_TR(0x69271f);
__builtin_memmove((R+4356),(R+4352),4);
}
B692722:{NFSU2_TR(0x692722);
__builtin_memmove((R+4372),(R+4368),4);
}
B692725:{NFSU2_TR(0x692725);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692729:{NFSU2_TR(0x692729);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69272c:{NFSU2_TR(0x69272c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692732:{NFSU2_TR(0x692732);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692737:{NFSU2_TR(0x692737);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69273b:{NFSU2_TR(0x69273b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69273e:{NFSU2_TR(0x69273e);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692744:{NFSU2_TR(0x692744);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692748:{NFSU2_TR(0x692748);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69274c:{NFSU2_TR(0x69274c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692750:{NFSU2_TR(0x692750);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692756:{NFSU2_TR(0x692756);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69275a:{NFSU2_TR(0x69275a);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69275e:{NFSU2_TR(0x69275e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692762:{NFSU2_TR(0x692762);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692768:{NFSU2_TR(0x692768);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69276c:{NFSU2_TR(0x69276c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692770:{NFSU2_TR(0x692770);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692774:{NFSU2_TR(0x692774);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692778:{NFSU2_TR(0x692778);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69277c:{NFSU2_TR(0x69277c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692780:{NFSU2_TR(0x692780);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692784:{NFSU2_TR(0x692784);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692787:{NFSU2_TR(0x692787);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69278c:{NFSU2_TR(0x69278c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69278f:{NFSU2_TR(0x69278f);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692794:{NFSU2_TR(0x692794);
__builtin_memmove((R+4356),(R+4352),4);
}
B692797:{NFSU2_TR(0x692797);
__builtin_memmove((R+4372),(R+4368),4);
}
B69279a:{NFSU2_TR(0x69279a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69279e:{NFSU2_TR(0x69279e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6927a1:{NFSU2_TR(0x6927a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6927a7:{NFSU2_TR(0x6927a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6927ac:{NFSU2_TR(0x6927ac);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6927b0:{NFSU2_TR(0x6927b0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6927b3:{NFSU2_TR(0x6927b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6927b9:{NFSU2_TR(0x6927b9);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6927bd:{NFSU2_TR(0x6927bd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6927c1:{NFSU2_TR(0x6927c1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6927c5:{NFSU2_TR(0x6927c5);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6927cb:{NFSU2_TR(0x6927cb);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6927cf:{NFSU2_TR(0x6927cf);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6927d3:{NFSU2_TR(0x6927d3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6927d7:{NFSU2_TR(0x6927d7);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6927dd:{NFSU2_TR(0x6927dd);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6927e1:{NFSU2_TR(0x6927e1);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6927e5:{NFSU2_TR(0x6927e5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6927e9:{NFSU2_TR(0x6927e9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6927ed:{NFSU2_TR(0x6927ed);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6927f0:{NFSU2_TR(0x6927f0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6927f4:{NFSU2_TR(0x6927f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6927f9:{NFSU2_TR(0x6927f9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6927fc:{NFSU2_TR(0x6927fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692801:{NFSU2_TR(0x692801);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692804:{NFSU2_TR(0x692804);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692809:{NFSU2_TR(0x692809);
__builtin_memmove((R+4356),(R+4352),4);
}
B69280c:{NFSU2_TR(0x69280c);
__builtin_memmove((R+4372),(R+4368),4);
}
B69280f:{NFSU2_TR(0x69280f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692813:{NFSU2_TR(0x692813);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692816:{NFSU2_TR(0x692816);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69281c:{NFSU2_TR(0x69281c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692821:{NFSU2_TR(0x692821);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692825:{NFSU2_TR(0x692825);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692828:{NFSU2_TR(0x692828);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69282e:{NFSU2_TR(0x69282e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692832:{NFSU2_TR(0x692832);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692836:{NFSU2_TR(0x692836);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69283a:{NFSU2_TR(0x69283a);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692840:{NFSU2_TR(0x692840);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692844:{NFSU2_TR(0x692844);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692848:{NFSU2_TR(0x692848);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69284c:{NFSU2_TR(0x69284c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692852:{NFSU2_TR(0x692852);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692856:{NFSU2_TR(0x692856);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69285a:{NFSU2_TR(0x69285a);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69285e:{NFSU2_TR(0x69285e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692862:{NFSU2_TR(0x692862);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692865:{NFSU2_TR(0x692865);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69286a:{NFSU2_TR(0x69286a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69286e:{NFSU2_TR(0x69286e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692871:{NFSU2_TR(0x692871);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692876:{NFSU2_TR(0x692876);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692879:{NFSU2_TR(0x692879);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69287e:{NFSU2_TR(0x69287e);
__builtin_memmove((R+4356),(R+4352),4);
}
B692881:{NFSU2_TR(0x692881);
__builtin_memmove((R+4372),(R+4368),4);
}
B692884:{NFSU2_TR(0x692884);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692888:{NFSU2_TR(0x692888);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69288b:{NFSU2_TR(0x69288b);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692891:{NFSU2_TR(0x692891);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692896:{NFSU2_TR(0x692896);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69289a:{NFSU2_TR(0x69289a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69289d:{NFSU2_TR(0x69289d);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6928a3:{NFSU2_TR(0x6928a3);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6928a7:{NFSU2_TR(0x6928a7);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6928ab:{NFSU2_TR(0x6928ab);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6928af:{NFSU2_TR(0x6928af);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6928b5:{NFSU2_TR(0x6928b5);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6928b9:{NFSU2_TR(0x6928b9);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6928bd:{NFSU2_TR(0x6928bd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6928c1:{NFSU2_TR(0x6928c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6928c7:{NFSU2_TR(0x6928c7);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6928cb:{NFSU2_TR(0x6928cb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6928cf:{NFSU2_TR(0x6928cf);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6928d3:{NFSU2_TR(0x6928d3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6928d7:{NFSU2_TR(0x6928d7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6928db:{NFSU2_TR(0x6928db);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6928e0:{NFSU2_TR(0x6928e0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6928e4:{NFSU2_TR(0x6928e4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6928e7:{NFSU2_TR(0x6928e7);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6928ec:{NFSU2_TR(0x6928ec);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6928ef:{NFSU2_TR(0x6928ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6928f4:{NFSU2_TR(0x6928f4);
__builtin_memmove((R+4356),(R+4352),4);
}
B6928f7:{NFSU2_TR(0x6928f7);
__builtin_memmove((R+4372),(R+4368),4);
}
B6928fa:{NFSU2_TR(0x6928fa);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6928fe:{NFSU2_TR(0x6928fe);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692901:{NFSU2_TR(0x692901);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692907:{NFSU2_TR(0x692907);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69290c:{NFSU2_TR(0x69290c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692910:{NFSU2_TR(0x692910);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692913:{NFSU2_TR(0x692913);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692919:{NFSU2_TR(0x692919);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69291d:{NFSU2_TR(0x69291d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692921:{NFSU2_TR(0x692921);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692925:{NFSU2_TR(0x692925);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69292b:{NFSU2_TR(0x69292b);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69292f:{NFSU2_TR(0x69292f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692933:{NFSU2_TR(0x692933);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692937:{NFSU2_TR(0x692937);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69293d:{NFSU2_TR(0x69293d);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692941:{NFSU2_TR(0x692941);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692945:{NFSU2_TR(0x692945);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692949:{NFSU2_TR(0x692949);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69294d:{NFSU2_TR(0x69294d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692951:{NFSU2_TR(0x692951);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692956:{NFSU2_TR(0x692956);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69295a:{NFSU2_TR(0x69295a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69295d:{NFSU2_TR(0x69295d);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692962:{NFSU2_TR(0x692962);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692965:{NFSU2_TR(0x692965);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69296a:{NFSU2_TR(0x69296a);
__builtin_memmove((R+4356),(R+4352),4);
}
B69296d:{NFSU2_TR(0x69296d);
__builtin_memmove((R+4372),(R+4368),4);
}
B692970:{NFSU2_TR(0x692970);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692974:{NFSU2_TR(0x692974);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692977:{NFSU2_TR(0x692977);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69297d:{NFSU2_TR(0x69297d);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692982:{NFSU2_TR(0x692982);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692986:{NFSU2_TR(0x692986);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692989:{NFSU2_TR(0x692989);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69298f:{NFSU2_TR(0x69298f);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692993:{NFSU2_TR(0x692993);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692997:{NFSU2_TR(0x692997);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69299b:{NFSU2_TR(0x69299b);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6929a1:{NFSU2_TR(0x6929a1);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6929a5:{NFSU2_TR(0x6929a5);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6929a9:{NFSU2_TR(0x6929a9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6929ad:{NFSU2_TR(0x6929ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6929b3:{NFSU2_TR(0x6929b3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6929b7:{NFSU2_TR(0x6929b7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6929bb:{NFSU2_TR(0x6929bb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929bf:{NFSU2_TR(0x6929bf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929c3:{NFSU2_TR(0x6929c3);
{[[clang::musttail]] return blk_692a92(ARGS);}
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
PN u32 blk_6929c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6929c8:L6929c8:{bud-=3;NFSU2_TR(0x6929c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6929cb:{NFSU2_TR(0x6929cb);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6929cd:{NFSU2_TR(0x6929cd);
if(r1(F+6)){{[[clang::musttail]] return blk_692a27(ARGS);}}
}
B6929cf:L6929cf:{bud-=24;NFSU2_TR(0x6929cf);
__builtin_memmove((R+4368),gp(0x7b7158),8);
}
B6929d6:{NFSU2_TR(0x6929d6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6929d9:{NFSU2_TR(0x6929d9);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B6929dd:{NFSU2_TR(0x6929dd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6929e0:{NFSU2_TR(0x6929e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6929e4:{NFSU2_TR(0x6929e4);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6929e7:{NFSU2_TR(0x6929e7);
__builtin_memmove((R+4448),(R+4368),8);
}
B6929ea:{NFSU2_TR(0x6929ea);
__builtin_memmove((R+4436),(R+4368),4);
}
B6929ed:{NFSU2_TR(0x6929ed);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6929f1:{NFSU2_TR(0x6929f1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929f5:{NFSU2_TR(0x6929f5);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B6929f9:{NFSU2_TR(0x6929f9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929fd:{NFSU2_TR(0x6929fd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a01:{NFSU2_TR(0x692a01);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a05:{NFSU2_TR(0x692a05);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B692a09:{NFSU2_TR(0x692a09);
__builtin_memmove((R+4416),(R+4384),8);
}
B692a0c:{NFSU2_TR(0x692a0c);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692a10:{NFSU2_TR(0x692a10);
__builtin_memmove((R+4388),(R+4352),4);
}
B692a13:{NFSU2_TR(0x692a13);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B692a16:{NFSU2_TR(0x692a16);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692a19:{NFSU2_TR(0x692a19);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a1d:{NFSU2_TR(0x692a1d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a21:{NFSU2_TR(0x692a21);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a25:{NFSU2_TR(0x692a25);
{[[clang::musttail]] return blk_692a92(ARGS);}
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
PN u32 blk_692a27(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692a27:L692a27:{bud-=17;NFSU2_TR(0x692a27);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B692a2e:{NFSU2_TR(0x692a2e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692a31:{NFSU2_TR(0x692a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B692a35:{NFSU2_TR(0x692a35);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B692a38:{NFSU2_TR(0x692a38);
__builtin_memmove((R+4400),(R+4384),8);
}
B692a3b:{NFSU2_TR(0x692a3b);
__builtin_memmove((R+4388),(R+4432),4);
}
B692a3e:{NFSU2_TR(0x692a3e);
__builtin_memmove((R+4352),(R+4432),8);
}
B692a41:{NFSU2_TR(0x692a41);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B692a44:{NFSU2_TR(0x692a44);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692a47:{NFSU2_TR(0x692a47);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a4b:{NFSU2_TR(0x692a4b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a4f:{NFSU2_TR(0x692a4f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a53:{NFSU2_TR(0x692a53);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a57:{NFSU2_TR(0x692a57);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a5b:{NFSU2_TR(0x692a5b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a5f:{NFSU2_TR(0x692a5f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a63:{NFSU2_TR(0x692a63);
{[[clang::musttail]] return blk_692a92(ARGS);}
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
PN u32 blk_692a65(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692a65:L692a65:{bud-=11;NFSU2_TR(0x692a65);
w8(R+4368,u64(m4(0x7b7148)));
}
B692a6c:{NFSU2_TR(0x692a6c);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B692a6f:{NFSU2_TR(0x692a6f);
{wv<8>((R+4384),uo::pswapd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692a73:{NFSU2_TR(0x692a73);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692a76:{NFSU2_TR(0x692a76);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a7a:{NFSU2_TR(0x692a7a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a7e:{NFSU2_TR(0x692a7e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a82:{NFSU2_TR(0x692a82);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a86:{NFSU2_TR(0x692a86);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a8a:{NFSU2_TR(0x692a8a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a8e:{NFSU2_TR(0x692a8e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_692a92(ARGS);}
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
PN u32 blk_692a92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692a92:L692a92:{bud-=4;NFSU2_TR(0x692a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B692a95:{NFSU2_TR(0x692a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B692a98:{NFSU2_TR(0x692a98);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B692a9a:{NFSU2_TR(0x692a9a);
if(r1(F+6)){{[[clang::musttail]] return blk_692f48(ARGS);}}
}
B692aa0:L692aa0:{bud-=46;NFSU2_TR(0x692aa0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692aa3:{NFSU2_TR(0x692aa3);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692aa7:{NFSU2_TR(0x692aa7);
{wv<8>((R+4400),uo::pswapd<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B692aab:{NFSU2_TR(0x692aab);
__builtin_memmove((R+4448),(R+4352),8);
}
B692aae:{NFSU2_TR(0x692aae);
__builtin_memmove((R+4384),(R+4352),8);
}
B692ab1:{NFSU2_TR(0x692ab1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B692ab5:{NFSU2_TR(0x692ab5);
__builtin_memmove((R+4416),(R+4368),8);
}
B692ab8:{NFSU2_TR(0x692ab8);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4372),4);
}
B692abb:{NFSU2_TR(0x692abb);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B692abf:{NFSU2_TR(0x692abf);
__builtin_memmove((R+4432),(R+4352),8);
}
B692ac2:{NFSU2_TR(0x692ac2);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692ac6:{NFSU2_TR(0x692ac6);
__builtin_memmove((R+4436),(R+4368),4);
}
B692ac9:{NFSU2_TR(0x692ac9);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692acd:{NFSU2_TR(0x692acd);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B692ad1:{NFSU2_TR(0x692ad1);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B692ad5:{NFSU2_TR(0x692ad5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692ad9:{NFSU2_TR(0x692ad9);
__builtin_memmove((R+4416),(R+4352),8);
}
B692adc:{NFSU2_TR(0x692adc);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B692ae4:{NFSU2_TR(0x692ae4);
__builtin_memmove((R+4432),(R+4368),8);
}
B692ae7:{NFSU2_TR(0x692ae7);
__builtin_memmove((R+4372),(R+4368),4);
}
B692aea:{NFSU2_TR(0x692aea);
{wv<8>((R+4400),uo::pfpnacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B692aee:{NFSU2_TR(0x692aee);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B692af2:{NFSU2_TR(0x692af2);
{wv<8>((R+4448),uo::pfpnacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B692af6:{NFSU2_TR(0x692af6);
{wv<8>((R+4384),uo::pfpnacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B692afa:{NFSU2_TR(0x692afa);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B692afe:{NFSU2_TR(0x692afe);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692b02:{NFSU2_TR(0x692b02);
{wv<8>((R+4416),uo::pfsubr<8>(rv<8>((R+4416)),rv<8>(gp(0x7b7158))));}
}
B692b0a:{NFSU2_TR(0x692b0a);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B692b0d:{NFSU2_TR(0x692b0d);
__builtin_memmove((R+4368),(R+4352),8);
}
B692b10:{NFSU2_TR(0x692b10);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b15:{NFSU2_TR(0x692b15);
__builtin_memmove((R+4436),(R+4400),4);
}
B692b18:{NFSU2_TR(0x692b18);
__builtin_memmove((R+4388),(R+4464),4);
}
B692b1b:{NFSU2_TR(0x692b1b);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4468),4);
}
B692b1e:{NFSU2_TR(0x692b1e);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4452),4);
}
B692b21:{NFSU2_TR(0x692b21);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b26:{NFSU2_TR(0x692b26);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4468),4);
}
B692b29:{NFSU2_TR(0x692b29);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b2e:{NFSU2_TR(0x692b2e);
__builtin_memmove((R+4452),(R+4368),4);
}
B692b31:{NFSU2_TR(0x692b31);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b36:{NFSU2_TR(0x692b36);
__builtin_memmove((R+4468),gp(0x7b7158),4);
}
B692b3d:{NFSU2_TR(0x692b3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b42:{NFSU2_TR(0x692b42);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b47:{NFSU2_TR(0x692b47);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b4c:{NFSU2_TR(0x692b4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b51:{NFSU2_TR(0x692b51);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B692b53:{NFSU2_TR(0x692b53);
if(r1(F+6)){{[[clang::musttail]] return blk_692d72(ARGS);}}
}
B692b59:L692b59:{bud-=129;NFSU2_TR(0x692b59);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692b5d:{NFSU2_TR(0x692b5d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B692b61:{NFSU2_TR(0x692b61);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692b64:{NFSU2_TR(0x692b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692b68:{NFSU2_TR(0x692b68);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692b6c:{NFSU2_TR(0x692b6c);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B692b70:{NFSU2_TR(0x692b70);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b74:{NFSU2_TR(0x692b74);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B692b78:{NFSU2_TR(0x692b78);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692b7b:{NFSU2_TR(0x692b7b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692b7f:{NFSU2_TR(0x692b7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692b84:{NFSU2_TR(0x692b84);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692b87:{NFSU2_TR(0x692b87);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692b8c:{NFSU2_TR(0x692b8c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692b8f:{NFSU2_TR(0x692b8f);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692b94:{NFSU2_TR(0x692b94);
__builtin_memmove((R+4356),(R+4352),4);
}
B692b97:{NFSU2_TR(0x692b97);
__builtin_memmove((R+4372),(R+4368),4);
}
B692b9a:{NFSU2_TR(0x692b9a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692b9e:{NFSU2_TR(0x692b9e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692ba1:{NFSU2_TR(0x692ba1);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692ba7:{NFSU2_TR(0x692ba7);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692bac:{NFSU2_TR(0x692bac);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692bb0:{NFSU2_TR(0x692bb0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692bb3:{NFSU2_TR(0x692bb3);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692bb9:{NFSU2_TR(0x692bb9);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692bbd:{NFSU2_TR(0x692bbd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692bc1:{NFSU2_TR(0x692bc1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692bc5:{NFSU2_TR(0x692bc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692bcb:{NFSU2_TR(0x692bcb);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692bcf:{NFSU2_TR(0x692bcf);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692bd3:{NFSU2_TR(0x692bd3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692bd7:{NFSU2_TR(0x692bd7);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692bdd:{NFSU2_TR(0x692bdd);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692be1:{NFSU2_TR(0x692be1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692be5:{NFSU2_TR(0x692be5);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692be9:{NFSU2_TR(0x692be9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692bed:{NFSU2_TR(0x692bed);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692bf0:{NFSU2_TR(0x692bf0);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692bf5:{NFSU2_TR(0x692bf5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692bf9:{NFSU2_TR(0x692bf9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692bfc:{NFSU2_TR(0x692bfc);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692c01:{NFSU2_TR(0x692c01);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692c04:{NFSU2_TR(0x692c04);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692c09:{NFSU2_TR(0x692c09);
__builtin_memmove((R+4356),(R+4352),4);
}
B692c0c:{NFSU2_TR(0x692c0c);
__builtin_memmove((R+4372),(R+4368),4);
}
B692c0f:{NFSU2_TR(0x692c0f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692c13:{NFSU2_TR(0x692c13);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692c16:{NFSU2_TR(0x692c16);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692c1c:{NFSU2_TR(0x692c1c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692c21:{NFSU2_TR(0x692c21);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692c25:{NFSU2_TR(0x692c25);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692c28:{NFSU2_TR(0x692c28);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692c2e:{NFSU2_TR(0x692c2e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692c32:{NFSU2_TR(0x692c32);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692c36:{NFSU2_TR(0x692c36);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692c3a:{NFSU2_TR(0x692c3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692c40:{NFSU2_TR(0x692c40);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692c44:{NFSU2_TR(0x692c44);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692c48:{NFSU2_TR(0x692c48);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692c4c:{NFSU2_TR(0x692c4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692c52:{NFSU2_TR(0x692c52);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692c56:{NFSU2_TR(0x692c56);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692c5a:{NFSU2_TR(0x692c5a);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692c5e:{NFSU2_TR(0x692c5e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692c62:{NFSU2_TR(0x692c62);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692c66:{NFSU2_TR(0x692c66);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692c6b:{NFSU2_TR(0x692c6b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692c6f:{NFSU2_TR(0x692c6f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692c72:{NFSU2_TR(0x692c72);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692c77:{NFSU2_TR(0x692c77);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692c7a:{NFSU2_TR(0x692c7a);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692c7f:{NFSU2_TR(0x692c7f);
__builtin_memmove((R+4356),(R+4352),4);
}
B692c82:{NFSU2_TR(0x692c82);
__builtin_memmove((R+4372),(R+4368),4);
}
B692c85:{NFSU2_TR(0x692c85);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692c89:{NFSU2_TR(0x692c89);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692c8c:{NFSU2_TR(0x692c8c);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692c92:{NFSU2_TR(0x692c92);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692c97:{NFSU2_TR(0x692c97);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692c9b:{NFSU2_TR(0x692c9b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692c9e:{NFSU2_TR(0x692c9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692ca4:{NFSU2_TR(0x692ca4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692ca8:{NFSU2_TR(0x692ca8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692cac:{NFSU2_TR(0x692cac);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692cb0:{NFSU2_TR(0x692cb0);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692cb6:{NFSU2_TR(0x692cb6);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692cba:{NFSU2_TR(0x692cba);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692cbe:{NFSU2_TR(0x692cbe);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692cc2:{NFSU2_TR(0x692cc2);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692cc8:{NFSU2_TR(0x692cc8);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692ccc:{NFSU2_TR(0x692ccc);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692cd0:{NFSU2_TR(0x692cd0);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692cd4:{NFSU2_TR(0x692cd4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692cd8:{NFSU2_TR(0x692cd8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692cdc:{NFSU2_TR(0x692cdc);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692ce1:{NFSU2_TR(0x692ce1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692ce5:{NFSU2_TR(0x692ce5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692ce8:{NFSU2_TR(0x692ce8);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692ced:{NFSU2_TR(0x692ced);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692cf0:{NFSU2_TR(0x692cf0);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692cf5:{NFSU2_TR(0x692cf5);
__builtin_memmove((R+4356),(R+4352),4);
}
B692cf8:{NFSU2_TR(0x692cf8);
__builtin_memmove((R+4372),(R+4368),4);
}
B692cfb:{NFSU2_TR(0x692cfb);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692cff:{NFSU2_TR(0x692cff);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692d02:{NFSU2_TR(0x692d02);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692d08:{NFSU2_TR(0x692d08);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692d0d:{NFSU2_TR(0x692d0d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692d11:{NFSU2_TR(0x692d11);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692d14:{NFSU2_TR(0x692d14);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692d1a:{NFSU2_TR(0x692d1a);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692d1e:{NFSU2_TR(0x692d1e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692d22:{NFSU2_TR(0x692d22);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692d26:{NFSU2_TR(0x692d26);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692d2c:{NFSU2_TR(0x692d2c);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692d30:{NFSU2_TR(0x692d30);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692d34:{NFSU2_TR(0x692d34);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692d38:{NFSU2_TR(0x692d38);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692d3e:{NFSU2_TR(0x692d3e);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692d42:{NFSU2_TR(0x692d42);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692d46:{NFSU2_TR(0x692d46);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692d4a:{NFSU2_TR(0x692d4a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692d4e:{NFSU2_TR(0x692d4e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692d52:{NFSU2_TR(0x692d52);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B692d56:{NFSU2_TR(0x692d56);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692d59:{NFSU2_TR(0x692d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692d5d:{NFSU2_TR(0x692d5d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692d61:{NFSU2_TR(0x692d61);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B692d65:{NFSU2_TR(0x692d65);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692d69:{NFSU2_TR(0x692d69);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B692d6d:{NFSU2_TR(0x692d6d);
{[[clang::musttail]] return blk_692f48(ARGS);}
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
PN u32 blk_692d72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692d72:L692d72:{bud-=112;NFSU2_TR(0x692d72);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692d75:{NFSU2_TR(0x692d75);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692d79:{NFSU2_TR(0x692d79);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692d7e:{NFSU2_TR(0x692d7e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692d81:{NFSU2_TR(0x692d81);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692d86:{NFSU2_TR(0x692d86);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692d89:{NFSU2_TR(0x692d89);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692d8e:{NFSU2_TR(0x692d8e);
__builtin_memmove((R+4356),(R+4352),4);
}
B692d91:{NFSU2_TR(0x692d91);
__builtin_memmove((R+4372),(R+4368),4);
}
B692d94:{NFSU2_TR(0x692d94);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692d98:{NFSU2_TR(0x692d98);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692d9b:{NFSU2_TR(0x692d9b);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692da1:{NFSU2_TR(0x692da1);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692da6:{NFSU2_TR(0x692da6);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692daa:{NFSU2_TR(0x692daa);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692dad:{NFSU2_TR(0x692dad);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692db3:{NFSU2_TR(0x692db3);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692db7:{NFSU2_TR(0x692db7);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692dbb:{NFSU2_TR(0x692dbb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692dbf:{NFSU2_TR(0x692dbf);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692dc5:{NFSU2_TR(0x692dc5);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692dc9:{NFSU2_TR(0x692dc9);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692dcd:{NFSU2_TR(0x692dcd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692dd1:{NFSU2_TR(0x692dd1);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692dd7:{NFSU2_TR(0x692dd7);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692ddb:{NFSU2_TR(0x692ddb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692ddf:{NFSU2_TR(0x692ddf);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692de3:{NFSU2_TR(0x692de3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692de7:{NFSU2_TR(0x692de7);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B692dea:{NFSU2_TR(0x692dea);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692def:{NFSU2_TR(0x692def);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692df3:{NFSU2_TR(0x692df3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692df6:{NFSU2_TR(0x692df6);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692dfb:{NFSU2_TR(0x692dfb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692dfe:{NFSU2_TR(0x692dfe);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692e03:{NFSU2_TR(0x692e03);
__builtin_memmove((R+4356),(R+4352),4);
}
B692e06:{NFSU2_TR(0x692e06);
__builtin_memmove((R+4372),(R+4368),4);
}
B692e09:{NFSU2_TR(0x692e09);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692e0d:{NFSU2_TR(0x692e0d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692e10:{NFSU2_TR(0x692e10);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692e16:{NFSU2_TR(0x692e16);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692e1b:{NFSU2_TR(0x692e1b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692e1f:{NFSU2_TR(0x692e1f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692e22:{NFSU2_TR(0x692e22);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692e28:{NFSU2_TR(0x692e28);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692e2c:{NFSU2_TR(0x692e2c);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692e30:{NFSU2_TR(0x692e30);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692e34:{NFSU2_TR(0x692e34);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692e3a:{NFSU2_TR(0x692e3a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692e3e:{NFSU2_TR(0x692e3e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692e42:{NFSU2_TR(0x692e42);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692e46:{NFSU2_TR(0x692e46);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692e4c:{NFSU2_TR(0x692e4c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692e50:{NFSU2_TR(0x692e50);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692e54:{NFSU2_TR(0x692e54);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692e58:{NFSU2_TR(0x692e58);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692e5c:{NFSU2_TR(0x692e5c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692e60:{NFSU2_TR(0x692e60);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692e65:{NFSU2_TR(0x692e65);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692e69:{NFSU2_TR(0x692e69);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692e6c:{NFSU2_TR(0x692e6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692e71:{NFSU2_TR(0x692e71);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692e74:{NFSU2_TR(0x692e74);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692e79:{NFSU2_TR(0x692e79);
__builtin_memmove((R+4356),(R+4352),4);
}
B692e7c:{NFSU2_TR(0x692e7c);
__builtin_memmove((R+4372),(R+4368),4);
}
B692e7f:{NFSU2_TR(0x692e7f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692e83:{NFSU2_TR(0x692e83);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692e86:{NFSU2_TR(0x692e86);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692e8c:{NFSU2_TR(0x692e8c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692e91:{NFSU2_TR(0x692e91);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692e95:{NFSU2_TR(0x692e95);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692e98:{NFSU2_TR(0x692e98);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692e9e:{NFSU2_TR(0x692e9e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692ea2:{NFSU2_TR(0x692ea2);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692ea6:{NFSU2_TR(0x692ea6);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692eaa:{NFSU2_TR(0x692eaa);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692eb0:{NFSU2_TR(0x692eb0);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692eb4:{NFSU2_TR(0x692eb4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692eb8:{NFSU2_TR(0x692eb8);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692ebc:{NFSU2_TR(0x692ebc);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692ec2:{NFSU2_TR(0x692ec2);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692ec6:{NFSU2_TR(0x692ec6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692eca:{NFSU2_TR(0x692eca);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692ece:{NFSU2_TR(0x692ece);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692ed2:{NFSU2_TR(0x692ed2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692ed6:{NFSU2_TR(0x692ed6);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692edb:{NFSU2_TR(0x692edb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692edf:{NFSU2_TR(0x692edf);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692ee2:{NFSU2_TR(0x692ee2);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692ee7:{NFSU2_TR(0x692ee7);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692eea:{NFSU2_TR(0x692eea);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692eef:{NFSU2_TR(0x692eef);
__builtin_memmove((R+4356),(R+4352),4);
}
B692ef2:{NFSU2_TR(0x692ef2);
__builtin_memmove((R+4372),(R+4368),4);
}
B692ef5:{NFSU2_TR(0x692ef5);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692ef9:{NFSU2_TR(0x692ef9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692efc:{NFSU2_TR(0x692efc);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692f02:{NFSU2_TR(0x692f02);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692f07:{NFSU2_TR(0x692f07);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692f0b:{NFSU2_TR(0x692f0b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692f0e:{NFSU2_TR(0x692f0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692f14:{NFSU2_TR(0x692f14);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692f18:{NFSU2_TR(0x692f18);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692f1c:{NFSU2_TR(0x692f1c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692f20:{NFSU2_TR(0x692f20);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692f26:{NFSU2_TR(0x692f26);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692f2a:{NFSU2_TR(0x692f2a);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692f2e:{NFSU2_TR(0x692f2e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692f32:{NFSU2_TR(0x692f32);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692f38:{NFSU2_TR(0x692f38);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692f3c:{NFSU2_TR(0x692f3c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692f40:{NFSU2_TR(0x692f40);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692f44:{NFSU2_TR(0x692f44);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_692f48(ARGS);}
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
PN u32 blk_692f48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692f48:L692f48:{bud-=3;NFSU2_TR(0x692f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B692f4b:{NFSU2_TR(0x692f4b);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B692f4d:{NFSU2_TR(0x692f4d);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_692f6e(ARGS);}}
}
B692f4f:L692f4f:{bud-=8;NFSU2_TR(0x692f4f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692f53:{NFSU2_TR(0x692f53);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B692f57:{NFSU2_TR(0x692f57);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692f5a:{NFSU2_TR(0x692f5a);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692f5e:{NFSU2_TR(0x692f5e);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692f62:{NFSU2_TR(0x692f62);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B692f66:{NFSU2_TR(0x692f66);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692f6a:{NFSU2_TR(0x692f6a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_692f6e(ARGS);}
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
PN u32 blk_692f6e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692f6e:L692f6e:{bud-=4;NFSU2_TR(0x692f6e);
__builtin_memmove((G+16),(R+20),4);
}
B692f70:{NFSU2_TR(0x692f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B692f71:{NFSU2_TR(0x692f71);
w2(R+4260,0xffffu);
}
B692f73:{NFSU2_TR(0x692f73);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
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
PN u32 blk_692f76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B692f76:L692f76:{bud-=37;NFSU2_TR(0x692f76);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B692f7a:{NFSU2_TR(0x692f7a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x40ull))));
}
B692f7d:{NFSU2_TR(0x692f7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692f81:{NFSU2_TR(0x692f81);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B692f85:{NFSU2_TR(0x692f85);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B692f89:{NFSU2_TR(0x692f89);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B692f8d:{NFSU2_TR(0x692f8d);
{wv<8>((R+4416),uo::pswapd<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B692f91:{NFSU2_TR(0x692f91);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692f94:{NFSU2_TR(0x692f94);
{wv<8>((R+4448),uo::pswapd<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B692f98:{NFSU2_TR(0x692f98);
{wv<8>((R+4464),uo::pswapd<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B692f9c:{NFSU2_TR(0x692f9c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B692fa0:{NFSU2_TR(0x692fa0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692fa4:{NFSU2_TR(0x692fa4);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B692fa8:{NFSU2_TR(0x692fa8);
{wv<8>((R+4352),uo::pswapd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B692fac:{NFSU2_TR(0x692fac);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B692fb0:{NFSU2_TR(0x692fb0);
{wv<8>((R+4432),uo::pfnacc<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692fb4:{NFSU2_TR(0x692fb4);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B692fb8:{NFSU2_TR(0x692fb8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692fbc:{NFSU2_TR(0x692fbc);
{wv<8>((R+4448),uo::pfnacc<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B692fc0:{NFSU2_TR(0x692fc0);
{wv<8>((R+4368),uo::pfnacc<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B692fc4:{NFSU2_TR(0x692fc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692fc8:{NFSU2_TR(0x692fc8);
__builtin_memmove((R+4384),(R+4448),8);
}
B692fcb:{NFSU2_TR(0x692fcb);
__builtin_memmove((R+4416),(R+4368),8);
}
B692fce:{NFSU2_TR(0x692fce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692fd2:{NFSU2_TR(0x692fd2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692fd5:{NFSU2_TR(0x692fd5);
__builtin_memmove((R+4400),(R+4368),8);
}
B692fd8:{NFSU2_TR(0x692fd8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B692fdb:{NFSU2_TR(0x692fdb);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692fdf:{NFSU2_TR(0x692fdf);
__builtin_memmove((R+4404),(R+4400),4);
}
B692fe2:{NFSU2_TR(0x692fe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B692fe7:{NFSU2_TR(0x692fe7);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B692feb:{NFSU2_TR(0x692feb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B692fef:{NFSU2_TR(0x692fef);
__builtin_memmove((R+4416),(R+4448),8);
}
B692ff2:{NFSU2_TR(0x692ff2);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B692ff6:{NFSU2_TR(0x692ff6);
__builtin_memmove((R+4400),(R+4368),8);
}
B692ff9:{NFSU2_TR(0x692ff9);
__builtin_memmove((R+4420),(R+4416),4);
}
B692ffc:{NFSU2_TR(0x692ffc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_693001(ARGS);}
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
PN u32 ent_692(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x692002:[[clang::musttail]] return blk_692002(c,a4,a0,a1,bud);
case 0x6925ad:[[clang::musttail]] return blk_6925ad(c,a4,a0,a1,bud);
case 0x6929c8:[[clang::musttail]] return blk_6929c8(c,a4,a0,a1,bud);
case 0x692a27:[[clang::musttail]] return blk_692a27(c,a4,a0,a1,bud);
case 0x692a65:[[clang::musttail]] return blk_692a65(c,a4,a0,a1,bud);
case 0x692a92:[[clang::musttail]] return blk_692a92(c,a4,a0,a1,bud);
case 0x692d72:[[clang::musttail]] return blk_692d72(c,a4,a0,a1,bud);
case 0x692f48:[[clang::musttail]] return blk_692f48(c,a4,a0,a1,bud);
case 0x692f6e:[[clang::musttail]] return blk_692f6e(c,a4,a0,a1,bud);
case 0x692f76:[[clang::musttail]] return blk_692f76(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_692(Cpu& c){u8* R=c.regs.data();return ent_692(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
