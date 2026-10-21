#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68e139(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68e459(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68eccd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691cd3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693195(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693250(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69347b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6938c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69397c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69399b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693d0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fb5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fbc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fbf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fc1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fcb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fd3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fd5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fd8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fdd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fe2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fe4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fe7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fe9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693ff1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693ff3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693ff6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693ff8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693ffb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693ffd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69401a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69402f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694042(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694055(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694064(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69419f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6942f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694494(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693258(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693986(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6939a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693a17(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693a80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693adf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693b50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693c24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693d9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693f64(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693f6f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693fb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693001:L693001:{bud-=106;NFSU2_TR(0x693001);
__builtin_memmove((R+4384),(R+4432),8);
}
B693004:{NFSU2_TR(0x693004);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693007:{NFSU2_TR(0x693007);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69300a:{NFSU2_TR(0x69300a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69300f:{NFSU2_TR(0x69300f);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693013:{NFSU2_TR(0x693013);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693017:{NFSU2_TR(0x693017);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B69301b:{NFSU2_TR(0x69301b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B69301f:{NFSU2_TR(0x69301f);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693024:{NFSU2_TR(0x693024);
__builtin_memmove((R+4384),(R+4432),8);
}
B693027:{NFSU2_TR(0x693027);
__builtin_memmove((R+4400),(R+4448),8);
}
B69302a:{NFSU2_TR(0x69302a);
__builtin_memmove((R+4372),(R+4368),4);
}
B69302d:{NFSU2_TR(0x69302d);
__builtin_memmove((R+4388),(R+4384),4);
}
B693030:{NFSU2_TR(0x693030);
__builtin_memmove((R+4404),(R+4400),4);
}
B693033:{NFSU2_TR(0x693033);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693038:{NFSU2_TR(0x693038);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69303c:{NFSU2_TR(0x69303c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693041:{NFSU2_TR(0x693041);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693045:{NFSU2_TR(0x693045);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693049:{NFSU2_TR(0x693049);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69304e:{NFSU2_TR(0x69304e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693051:{NFSU2_TR(0x693051);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693054:{NFSU2_TR(0x693054);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B693058:{NFSU2_TR(0x693058);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69305d:{NFSU2_TR(0x69305d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693061:{NFSU2_TR(0x693061);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693066:{NFSU2_TR(0x693066);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B69306a:{NFSU2_TR(0x69306a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69306e:{NFSU2_TR(0x69306e);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693073:{NFSU2_TR(0x693073);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693077:{NFSU2_TR(0x693077);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69307b:{NFSU2_TR(0x69307b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69307f:{NFSU2_TR(0x69307f);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B693083:{NFSU2_TR(0x693083);
{wv<8>((R+4416),uo::pswapd<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B693087:{NFSU2_TR(0x693087);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B69308b:{NFSU2_TR(0x69308b);
{wv<8>((R+4448),uo::pswapd<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B69308f:{NFSU2_TR(0x69308f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693093:{NFSU2_TR(0x693093);
{wv<8>((R+4464),uo::pswapd<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B693097:{NFSU2_TR(0x693097);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69309b:{NFSU2_TR(0x69309b);
{wv<8>((R+4352),uo::pswapd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69309f:{NFSU2_TR(0x69309f);
{wv<8>((R+4432),uo::pfnacc<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6930a3:{NFSU2_TR(0x6930a3);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6930a7:{NFSU2_TR(0x6930a7);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6930ab:{NFSU2_TR(0x6930ab);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6930af:{NFSU2_TR(0x6930af);
{wv<8>((R+4448),uo::pfnacc<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B6930b3:{NFSU2_TR(0x6930b3);
{wv<8>((R+4368),uo::pfnacc<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6930b7:{NFSU2_TR(0x6930b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6930bb:{NFSU2_TR(0x6930bb);
__builtin_memmove((R+4416),(R+4368),8);
}
B6930be:{NFSU2_TR(0x6930be);
__builtin_memmove((R+4400),(R+4368),8);
}
B6930c1:{NFSU2_TR(0x6930c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6930c5:{NFSU2_TR(0x6930c5);
__builtin_memmove((R+4384),(R+4448),8);
}
B6930c8:{NFSU2_TR(0x6930c8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6930cb:{NFSU2_TR(0x6930cb);
__builtin_memmove((R+4404),(R+4400),4);
}
B6930ce:{NFSU2_TR(0x6930ce);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6930d1:{NFSU2_TR(0x6930d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6930d6:{NFSU2_TR(0x6930d6);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6930da:{NFSU2_TR(0x6930da);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B6930de:{NFSU2_TR(0x6930de);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B6930e2:{NFSU2_TR(0x6930e2);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6930e6:{NFSU2_TR(0x6930e6);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B6930ea:{NFSU2_TR(0x6930ea);
__builtin_memmove((R+4400),(R+4368),8);
}
B6930ed:{NFSU2_TR(0x6930ed);
__builtin_memmove((R+4416),(R+4448),8);
}
B6930f0:{NFSU2_TR(0x6930f0);
__builtin_memmove((R+4384),(R+4432),8);
}
B6930f3:{NFSU2_TR(0x6930f3);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6930f6:{NFSU2_TR(0x6930f6);
__builtin_memmove((R+4420),(R+4416),4);
}
B6930f9:{NFSU2_TR(0x6930f9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6930fc:{NFSU2_TR(0x6930fc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B693100:{NFSU2_TR(0x693100);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693104:{NFSU2_TR(0x693104);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693108:{NFSU2_TR(0x693108);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B69310c:{NFSU2_TR(0x69310c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693110:{NFSU2_TR(0x693110);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693115:{NFSU2_TR(0x693115);
__builtin_memmove((R+4416),(R+4352),8);
}
B693118:{NFSU2_TR(0x693118);
__builtin_memmove((R+4384),(R+4432),8);
}
B69311b:{NFSU2_TR(0x69311b);
__builtin_memmove((R+4400),(R+4448),8);
}
B69311e:{NFSU2_TR(0x69311e);
__builtin_memmove((R+4372),(R+4368),4);
}
B693121:{NFSU2_TR(0x693121);
__builtin_memmove((R+4388),(R+4384),4);
}
B693124:{NFSU2_TR(0x693124);
__builtin_memmove((R+4404),(R+4400),4);
}
B693127:{NFSU2_TR(0x693127);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B69312b:{NFSU2_TR(0x69312b);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69312f:{NFSU2_TR(0x69312f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693134:{NFSU2_TR(0x693134);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693138:{NFSU2_TR(0x693138);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69313c:{NFSU2_TR(0x69313c);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693141:{NFSU2_TR(0x693141);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693144:{NFSU2_TR(0x693144);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693147:{NFSU2_TR(0x693147);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B69314b:{NFSU2_TR(0x69314b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693150:{NFSU2_TR(0x693150);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B693154:{NFSU2_TR(0x693154);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B693158:{NFSU2_TR(0x693158);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69315c:{NFSU2_TR(0x69315c);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693161:{NFSU2_TR(0x693161);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4388),4);
}
B693164:{NFSU2_TR(0x693164);
__builtin_memmove((R+4468),(R+4416),4);
}
B693167:{NFSU2_TR(0x693167);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B69316a:{NFSU2_TR(0x69316a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B69316e:{NFSU2_TR(0x69316e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4404),(U+4),4);
}
B693172:{NFSU2_TR(0x693172);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((R+4368),(R+4372),4);
w4(U+8,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4372),(U+4),4);
}
B693177:{NFSU2_TR(0x693177);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B69317b:{NFSU2_TR(0x69317b);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B69317f:{NFSU2_TR(0x69317f);
{wv<8>((R+4352),uo::pfnacc<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693183:{NFSU2_TR(0x693183);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693187:{NFSU2_TR(0x693187);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B69318b:{NFSU2_TR(0x69318b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B69318d:{NFSU2_TR(0x69318d);
__builtin_memmove((R+4416),(R+4352),8);
}
B693190:{NFSU2_TR(0x693190);
if(r1(F+6)){{[[clang::musttail]] return blk_693195(ARGS);}}
}
B693192:L693192:{bud-=1;NFSU2_TR(0x693192);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(G+0)),r4(U+0));
{[[clang::musttail]] return blk_693195(ARGS);}
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
PN u32 blk_693195(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693195:L693195:{bud-=11;NFSU2_TR(0x693195);
{SPILL_OUT();c.pc=0x693195u;V r_=user_op(c,524532,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL_IN();wv<8>((R+4368),r_);}
}
B693199:{NFSU2_TR(0x693199);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B69319c:{NFSU2_TR(0x69319c);
__builtin_memmove((R+4356),(R+4352),4);
}
B69319f:{NFSU2_TR(0x69319f);
{wv<8>((R+4400),uo::pfcmpeq<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6931a3:{NFSU2_TR(0x6931a3);
{SPILL_OUT();c.pc=0x6931a3u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL_IN();wv<8>((R+4352),r_);}
}
B6931a7:{NFSU2_TR(0x6931a7);
{SPILL_OUT();c.pc=0x6931a7u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL_IN();wv<8>((R+4352),r_);}
}
B6931ab:{NFSU2_TR(0x6931ab);
w4(G+0,u32(r8(R+4400)));
}
B6931ae:{NFSU2_TR(0x6931ae);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7148))));}
}
B6931b6:{NFSU2_TR(0x6931b6);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6931b8:{NFSU2_TR(0x6931b8);
{wv<8>((R+4368),uo::pswapd<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6931bc:{NFSU2_TR(0x6931bc);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_693250(ARGS);}}
}
B6931c2:L6931c2:{bud-=37;NFSU2_TR(0x6931c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6931c6:{NFSU2_TR(0x6931c6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6931ca:{NFSU2_TR(0x6931ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6931cf:{NFSU2_TR(0x6931cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6931d4:{NFSU2_TR(0x6931d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6931d9:{NFSU2_TR(0x6931d9);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6931dd:{NFSU2_TR(0x6931dd);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6931e1:{NFSU2_TR(0x6931e1);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B6931e5:{NFSU2_TR(0x6931e5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6931e9:{NFSU2_TR(0x6931e9);
__builtin_memmove((R+4416),(R+4384),8);
}
B6931ec:{NFSU2_TR(0x6931ec);
__builtin_memmove((R+4464),(R+4432),8);
}
B6931ef:{NFSU2_TR(0x6931ef);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B6931f2:{NFSU2_TR(0x6931f2);
__builtin_memmove((R+4420),(R+4400),4);
}
B6931f5:{NFSU2_TR(0x6931f5);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B6931f8:{NFSU2_TR(0x6931f8);
__builtin_memmove((R+4468),(R+4448),4);
}
B6931fb:{NFSU2_TR(0x6931fb);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6931fe:{NFSU2_TR(0x6931fe);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693202:{NFSU2_TR(0x693202);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693206:{NFSU2_TR(0x693206);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69320a:{NFSU2_TR(0x69320a);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69320f:{NFSU2_TR(0x69320f);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693214:{NFSU2_TR(0x693214);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693219:{NFSU2_TR(0x693219);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69321e:{NFSU2_TR(0x69321e);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693222:{NFSU2_TR(0x693222);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693226:{NFSU2_TR(0x693226);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B69322a:{NFSU2_TR(0x69322a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69322e:{NFSU2_TR(0x69322e);
__builtin_memmove((R+4416),(R+4384),8);
}
B693231:{NFSU2_TR(0x693231);
__builtin_memmove((R+4464),(R+4432),8);
}
B693234:{NFSU2_TR(0x693234);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B693237:{NFSU2_TR(0x693237);
__builtin_memmove((R+4420),(R+4400),4);
}
B69323a:{NFSU2_TR(0x69323a);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B69323d:{NFSU2_TR(0x69323d);
__builtin_memmove((R+4468),(R+4448),4);
}
B693240:{NFSU2_TR(0x693240);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693244:{NFSU2_TR(0x693244);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693248:{NFSU2_TR(0x693248);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69324c:{NFSU2_TR(0x69324c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_693250(ARGS);}
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
PN u32 blk_693250(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693250:L693250:{bud-=3;NFSU2_TR(0x693250);
w2(R+4260,0xffffu);
}
B693252:{NFSU2_TR(0x693252);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x40ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x40ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x40ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B693255:{NFSU2_TR(0x693255);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x6943edu)[[clang::musttail]] return blk_6943ed(ARGS););}
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
PN u32 blk_693258(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693258:L693258:{bud-=37;NFSU2_TR(0x693258);
w2(R+4260,0xffffu);
}
B69325a:{NFSU2_TR(0x69325a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x44ull))));
}
B69325d:{NFSU2_TR(0x69325d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693261:{NFSU2_TR(0x693261);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B693265:{NFSU2_TR(0x693265);
__builtin_memmove((R+20),(G+16),4);
}
B693267:{NFSU2_TR(0x693267);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff8ull))));
}
B69326a:{NFSU2_TR(0x69326a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69326d:{NFSU2_TR(0x69326d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693271:{NFSU2_TR(0x693271);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693275:{NFSU2_TR(0x693275);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B693279:{NFSU2_TR(0x693279);
__builtin_memmove((R+4384),(R+4352),8);
}
B69327c:{NFSU2_TR(0x69327c);
__builtin_memmove((R+4356),(R+4368),4);
}
B69327f:{NFSU2_TR(0x69327f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B693282:{NFSU2_TR(0x693282);
__builtin_memmove((R+4432),(R+4400),8);
}
B693285:{NFSU2_TR(0x693285);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B693289:{NFSU2_TR(0x693289);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69328e:{NFSU2_TR(0x69328e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693292:{NFSU2_TR(0x693292);
__builtin_memmove((R+4404),(R+4416),4);
}
B693295:{NFSU2_TR(0x693295);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693299:{NFSU2_TR(0x693299);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69329d:{NFSU2_TR(0x69329d);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B6932a0:{NFSU2_TR(0x6932a0);
__builtin_memmove((R+4368),(R+4448),8);
}
B6932a3:{NFSU2_TR(0x6932a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932a8:{NFSU2_TR(0x6932a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932ad:{NFSU2_TR(0x6932ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6932b0:{NFSU2_TR(0x6932b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6932b3:{NFSU2_TR(0x6932b3);
__builtin_memmove((R+4452),(R+4464),4);
}
B6932b6:{NFSU2_TR(0x6932b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6932ba:{NFSU2_TR(0x6932ba);
__builtin_memmove((R+4384),(R+4352),8);
}
B6932bd:{NFSU2_TR(0x6932bd);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B6932c0:{NFSU2_TR(0x6932c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932c5:{NFSU2_TR(0x6932c5);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B6932c8:{NFSU2_TR(0x6932c8);
__builtin_memmove((R+4388),(R+4416),4);
}
B6932cb:{NFSU2_TR(0x6932cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932d0:{NFSU2_TR(0x6932d0);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932d5:{NFSU2_TR(0x6932d5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932da:{NFSU2_TR(0x6932da);
if(r1(F+6)){{[[clang::musttail]] return blk_69347b(ARGS);}}
}
B6932e0:L6932e0:{bud-=102;NFSU2_TR(0x6932e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6932e3:{NFSU2_TR(0x6932e3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6932e7:{NFSU2_TR(0x6932e7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6932ec:{NFSU2_TR(0x6932ec);
__builtin_memmove((R+4384),(R+4352),8);
}
B6932ef:{NFSU2_TR(0x6932ef);
__builtin_memmove((R+4400),(R+4368),8);
}
B6932f2:{NFSU2_TR(0x6932f2);
__builtin_memmove((R+4416),(R+4352),8);
}
B6932f5:{NFSU2_TR(0x6932f5);
__builtin_memmove((R+4432),(R+4368),8);
}
B6932f8:{NFSU2_TR(0x6932f8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6932fc:{NFSU2_TR(0x6932fc);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693301:{NFSU2_TR(0x693301);
__builtin_memmove((R+4448),(R+4384),8);
}
B693304:{NFSU2_TR(0x693304);
__builtin_memmove((R+4464),(R+4400),8);
}
B693307:{NFSU2_TR(0x693307);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69330c:{NFSU2_TR(0x69330c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693311:{NFSU2_TR(0x693311);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693316:{NFSU2_TR(0x693316);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69331b:{NFSU2_TR(0x69331b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693320:{NFSU2_TR(0x693320);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693325:{NFSU2_TR(0x693325);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693329:{NFSU2_TR(0x693329);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B69332d:{NFSU2_TR(0x69332d);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693331:{NFSU2_TR(0x693331);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693335:{NFSU2_TR(0x693335);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693339:{NFSU2_TR(0x693339);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B69333d:{NFSU2_TR(0x69333d);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B693340:{NFSU2_TR(0x693340);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693344:{NFSU2_TR(0x693344);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693349:{NFSU2_TR(0x693349);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69334e:{NFSU2_TR(0x69334e);
__builtin_memmove((R+4384),(R+4352),8);
}
B693351:{NFSU2_TR(0x693351);
__builtin_memmove((R+4400),(R+4368),8);
}
B693354:{NFSU2_TR(0x693354);
__builtin_memmove((R+4416),(R+4352),8);
}
B693357:{NFSU2_TR(0x693357);
__builtin_memmove((R+4432),(R+4368),8);
}
B69335a:{NFSU2_TR(0x69335a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B69335e:{NFSU2_TR(0x69335e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693363:{NFSU2_TR(0x693363);
__builtin_memmove((R+4448),(R+4384),8);
}
B693366:{NFSU2_TR(0x693366);
__builtin_memmove((R+4464),(R+4400),8);
}
B693369:{NFSU2_TR(0x693369);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69336e:{NFSU2_TR(0x69336e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693373:{NFSU2_TR(0x693373);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693378:{NFSU2_TR(0x693378);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69337d:{NFSU2_TR(0x69337d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693382:{NFSU2_TR(0x693382);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693387:{NFSU2_TR(0x693387);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69338b:{NFSU2_TR(0x69338b);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B69338f:{NFSU2_TR(0x69338f);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693393:{NFSU2_TR(0x693393);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693397:{NFSU2_TR(0x693397);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69339b:{NFSU2_TR(0x69339b);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B69339f:{NFSU2_TR(0x69339f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6933a3:{NFSU2_TR(0x6933a3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6933a7:{NFSU2_TR(0x6933a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6933ac:{NFSU2_TR(0x6933ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6933b1:{NFSU2_TR(0x6933b1);
__builtin_memmove((R+4384),(R+4352),8);
}
B6933b4:{NFSU2_TR(0x6933b4);
__builtin_memmove((R+4400),(R+4368),8);
}
B6933b7:{NFSU2_TR(0x6933b7);
__builtin_memmove((R+4416),(R+4352),8);
}
B6933ba:{NFSU2_TR(0x6933ba);
__builtin_memmove((R+4432),(R+4368),8);
}
B6933bd:{NFSU2_TR(0x6933bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6933c1:{NFSU2_TR(0x6933c1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6933c6:{NFSU2_TR(0x6933c6);
__builtin_memmove((R+4448),(R+4384),8);
}
B6933c9:{NFSU2_TR(0x6933c9);
__builtin_memmove((R+4464),(R+4400),8);
}
B6933cc:{NFSU2_TR(0x6933cc);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6933d1:{NFSU2_TR(0x6933d1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6933d6:{NFSU2_TR(0x6933d6);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6933db:{NFSU2_TR(0x6933db);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6933e0:{NFSU2_TR(0x6933e0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B6933e5:{NFSU2_TR(0x6933e5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B6933ea:{NFSU2_TR(0x6933ea);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6933ee:{NFSU2_TR(0x6933ee);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6933f2:{NFSU2_TR(0x6933f2);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6933f6:{NFSU2_TR(0x6933f6);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6933fa:{NFSU2_TR(0x6933fa);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6933fe:{NFSU2_TR(0x6933fe);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693402:{NFSU2_TR(0x693402);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693406:{NFSU2_TR(0x693406);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69340a:{NFSU2_TR(0x69340a);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69340f:{NFSU2_TR(0x69340f);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693414:{NFSU2_TR(0x693414);
__builtin_memmove((R+4384),(R+4352),8);
}
B693417:{NFSU2_TR(0x693417);
__builtin_memmove((R+4400),(R+4368),8);
}
B69341a:{NFSU2_TR(0x69341a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69341d:{NFSU2_TR(0x69341d);
__builtin_memmove((R+4432),(R+4368),8);
}
B693420:{NFSU2_TR(0x693420);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693424:{NFSU2_TR(0x693424);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693429:{NFSU2_TR(0x693429);
__builtin_memmove((R+4448),(R+4384),8);
}
B69342c:{NFSU2_TR(0x69342c);
__builtin_memmove((R+4464),(R+4400),8);
}
B69342f:{NFSU2_TR(0x69342f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693434:{NFSU2_TR(0x693434);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693439:{NFSU2_TR(0x693439);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B69343e:{NFSU2_TR(0x69343e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693443:{NFSU2_TR(0x693443);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693448:{NFSU2_TR(0x693448);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B69344d:{NFSU2_TR(0x69344d);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693451:{NFSU2_TR(0x693451);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693455:{NFSU2_TR(0x693455);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693459:{NFSU2_TR(0x693459);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B69345d:{NFSU2_TR(0x69345d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693461:{NFSU2_TR(0x693461);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693465:{NFSU2_TR(0x693465);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693469:{NFSU2_TR(0x693469);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69346d:{NFSU2_TR(0x69346d);
__builtin_memmove((G+16),(R+20),4);
}
B69346f:{NFSU2_TR(0x69346f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B693473:{NFSU2_TR(0x693473);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x44ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x44ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x44ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B693476:{NFSU2_TR(0x693476);
w2(R+4260,0xffffu);
}
B693478:{NFSU2_TR(0x693478);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
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
PN u32 blk_69347b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69347b:L69347b:{bud-=114;NFSU2_TR(0x69347b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69347e:{NFSU2_TR(0x69347e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693482:{NFSU2_TR(0x693482);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693487:{NFSU2_TR(0x693487);
__builtin_memmove((R+4384),(R+4352),8);
}
B69348a:{NFSU2_TR(0x69348a);
__builtin_memmove((R+4400),(R+4368),8);
}
B69348d:{NFSU2_TR(0x69348d);
__builtin_memmove((R+4416),(R+4352),8);
}
B693490:{NFSU2_TR(0x693490);
__builtin_memmove((R+4432),(R+4368),8);
}
B693493:{NFSU2_TR(0x693493);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693497:{NFSU2_TR(0x693497);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69349c:{NFSU2_TR(0x69349c);
__builtin_memmove((R+4448),(R+4384),8);
}
B69349f:{NFSU2_TR(0x69349f);
__builtin_memmove((R+4464),(R+4400),8);
}
B6934a2:{NFSU2_TR(0x6934a2);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6934a7:{NFSU2_TR(0x6934a7);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6934ac:{NFSU2_TR(0x6934ac);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6934b1:{NFSU2_TR(0x6934b1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6934b6:{NFSU2_TR(0x6934b6);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B6934bb:{NFSU2_TR(0x6934bb);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B6934c0:{NFSU2_TR(0x6934c0);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6934c4:{NFSU2_TR(0x6934c4);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6934c8:{NFSU2_TR(0x6934c8);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6934cc:{NFSU2_TR(0x6934cc);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6934d0:{NFSU2_TR(0x6934d0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6934d4:{NFSU2_TR(0x6934d4);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6934d8:{NFSU2_TR(0x6934d8);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B6934dc:{NFSU2_TR(0x6934dc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6934e1:{NFSU2_TR(0x6934e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6934e6:{NFSU2_TR(0x6934e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6934eb:{NFSU2_TR(0x6934eb);
__builtin_memmove((R+4384),(R+4352),8);
}
B6934ee:{NFSU2_TR(0x6934ee);
__builtin_memmove((R+4400),(R+4368),8);
}
B6934f1:{NFSU2_TR(0x6934f1);
__builtin_memmove((R+4416),(R+4352),8);
}
B6934f4:{NFSU2_TR(0x6934f4);
__builtin_memmove((R+4432),(R+4368),8);
}
B6934f7:{NFSU2_TR(0x6934f7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6934fb:{NFSU2_TR(0x6934fb);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693500:{NFSU2_TR(0x693500);
__builtin_memmove((R+4448),(R+4384),8);
}
B693503:{NFSU2_TR(0x693503);
__builtin_memmove((R+4464),(R+4400),8);
}
B693506:{NFSU2_TR(0x693506);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69350b:{NFSU2_TR(0x69350b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693510:{NFSU2_TR(0x693510);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693515:{NFSU2_TR(0x693515);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69351a:{NFSU2_TR(0x69351a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B69351f:{NFSU2_TR(0x69351f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693524:{NFSU2_TR(0x693524);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693528:{NFSU2_TR(0x693528);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B69352c:{NFSU2_TR(0x69352c);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693530:{NFSU2_TR(0x693530);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693534:{NFSU2_TR(0x693534);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693538:{NFSU2_TR(0x693538);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B69353c:{NFSU2_TR(0x69353c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693541:{NFSU2_TR(0x693541);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693546:{NFSU2_TR(0x693546);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69354b:{NFSU2_TR(0x69354b);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693550:{NFSU2_TR(0x693550);
__builtin_memmove((R+4384),(R+4352),8);
}
B693553:{NFSU2_TR(0x693553);
__builtin_memmove((R+4400),(R+4368),8);
}
B693556:{NFSU2_TR(0x693556);
__builtin_memmove((R+4416),(R+4352),8);
}
B693559:{NFSU2_TR(0x693559);
__builtin_memmove((R+4432),(R+4368),8);
}
B69355c:{NFSU2_TR(0x69355c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693560:{NFSU2_TR(0x693560);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693565:{NFSU2_TR(0x693565);
__builtin_memmove((R+4448),(R+4384),8);
}
B693568:{NFSU2_TR(0x693568);
__builtin_memmove((R+4464),(R+4400),8);
}
B69356b:{NFSU2_TR(0x69356b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693570:{NFSU2_TR(0x693570);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693575:{NFSU2_TR(0x693575);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B69357a:{NFSU2_TR(0x69357a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69357f:{NFSU2_TR(0x69357f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693584:{NFSU2_TR(0x693584);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693589:{NFSU2_TR(0x693589);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69358d:{NFSU2_TR(0x69358d);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693591:{NFSU2_TR(0x693591);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693595:{NFSU2_TR(0x693595);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693599:{NFSU2_TR(0x693599);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69359d:{NFSU2_TR(0x69359d);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6935a1:{NFSU2_TR(0x6935a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6935a6:{NFSU2_TR(0x6935a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6935ab:{NFSU2_TR(0x6935ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6935b0:{NFSU2_TR(0x6935b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6935b5:{NFSU2_TR(0x6935b5);
__builtin_memmove((R+4384),(R+4352),8);
}
B6935b8:{NFSU2_TR(0x6935b8);
__builtin_memmove((R+4400),(R+4368),8);
}
B6935bb:{NFSU2_TR(0x6935bb);
__builtin_memmove((R+4416),(R+4352),8);
}
B6935be:{NFSU2_TR(0x6935be);
__builtin_memmove((R+4432),(R+4368),8);
}
B6935c1:{NFSU2_TR(0x6935c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6935c5:{NFSU2_TR(0x6935c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6935ca:{NFSU2_TR(0x6935ca);
__builtin_memmove((R+4448),(R+4384),8);
}
B6935cd:{NFSU2_TR(0x6935cd);
__builtin_memmove((R+4464),(R+4400),8);
}
B6935d0:{NFSU2_TR(0x6935d0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6935d5:{NFSU2_TR(0x6935d5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6935da:{NFSU2_TR(0x6935da);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6935df:{NFSU2_TR(0x6935df);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6935e4:{NFSU2_TR(0x6935e4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B6935e9:{NFSU2_TR(0x6935e9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B6935ee:{NFSU2_TR(0x6935ee);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6935f2:{NFSU2_TR(0x6935f2);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6935f6:{NFSU2_TR(0x6935f6);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6935fa:{NFSU2_TR(0x6935fa);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6935fe:{NFSU2_TR(0x6935fe);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693602:{NFSU2_TR(0x693602);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693606:{NFSU2_TR(0x693606);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69360a:{NFSU2_TR(0x69360a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69360e:{NFSU2_TR(0x69360e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693612:{NFSU2_TR(0x693612);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693617:{NFSU2_TR(0x693617);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69361c:{NFSU2_TR(0x69361c);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693621:{NFSU2_TR(0x693621);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B693626:{NFSU2_TR(0x693626);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69362b:{NFSU2_TR(0x69362b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69362e:{NFSU2_TR(0x69362e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693632:{NFSU2_TR(0x693632);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693636:{NFSU2_TR(0x693636);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69363a:{NFSU2_TR(0x69363a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69363e:{NFSU2_TR(0x69363e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693642:{NFSU2_TR(0x693642);
__builtin_memmove((G+16),(R+20),4);
}
B693644:{NFSU2_TR(0x693644);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B693648:{NFSU2_TR(0x693648);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x44ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x44ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x44ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B69364b:{NFSU2_TR(0x69364b);
w2(R+4260,0xffffu);
}
B69364d:{NFSU2_TR(0x69364d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
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
PN u32 blk_693650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693650:L693650:{bud-=176;NFSU2_TR(0x693650);
__builtin_memmove((R+28),(R+28),4);
}
B693652:{NFSU2_TR(0x693652);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693653:{NFSU2_TR(0x693653);
__builtin_memmove((R+20),(G+16),4);
}
B693655:{NFSU2_TR(0x693655);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x44ull))));
}
B693658:{NFSU2_TR(0x693658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69365b:{NFSU2_TR(0x69365b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69365e:{NFSU2_TR(0x69365e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693662:{NFSU2_TR(0x693662);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B693666:{NFSU2_TR(0x693666);
__builtin_memmove((R+4416),(R+4352),8);
}
B693669:{NFSU2_TR(0x693669);
__builtin_memmove((R+4432),(R+4352),8);
}
B69366c:{NFSU2_TR(0x69366c);
__builtin_memmove((R+4448),(R+4368),8);
}
B69366f:{NFSU2_TR(0x69366f);
__builtin_memmove((R+4464),(R+4368),8);
}
B693672:{NFSU2_TR(0x693672);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B693675:{NFSU2_TR(0x693675);
__builtin_memmove((R+4452),(R+4384),4);
}
B693678:{NFSU2_TR(0x693678);
__builtin_memmove((R+4436),(R+4432),4);
}
B69367b:{NFSU2_TR(0x69367b);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4388),4);
}
B69367e:{NFSU2_TR(0x69367e);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693682:{NFSU2_TR(0x693682);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693686:{NFSU2_TR(0x693686);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69368a:{NFSU2_TR(0x69368a);
__builtin_memmove((R+4464),(R+4352),8);
}
B69368d:{NFSU2_TR(0x69368d);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693691:{NFSU2_TR(0x693691);
__builtin_memmove((R+4356),(R+4368),4);
}
B693694:{NFSU2_TR(0x693694);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B693697:{NFSU2_TR(0x693697);
__builtin_memmove((R+4448),(R+4400),8);
}
B69369a:{NFSU2_TR(0x69369a);
__builtin_memmove((R+4416),(R+4400),8);
}
B69369d:{NFSU2_TR(0x69369d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6936a0:{NFSU2_TR(0x6936a0);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4388),4);
}
B6936a3:{NFSU2_TR(0x6936a3);
__builtin_memmove((R+4420),(R+4384),4);
}
B6936a6:{NFSU2_TR(0x6936a6);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B6936a9:{NFSU2_TR(0x6936a9);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6936ad:{NFSU2_TR(0x6936ad);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B6936b0:{NFSU2_TR(0x6936b0);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B6936b4:{NFSU2_TR(0x6936b4);
__builtin_memmove((R+4420),(R+4416),4);
}
B6936b7:{NFSU2_TR(0x6936b7);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6936bb:{NFSU2_TR(0x6936bb);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6936bf:{NFSU2_TR(0x6936bf);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B6936c3:{NFSU2_TR(0x6936c3);
{wv<8>((R+4368),uo::pfsubr<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6936c7:{NFSU2_TR(0x6936c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6936cb:{NFSU2_TR(0x6936cb);
__builtin_memmove((R+4384),(R+4448),8);
}
B6936ce:{NFSU2_TR(0x6936ce);
__builtin_memmove((R+4416),(R+4368),8);
}
B6936d1:{NFSU2_TR(0x6936d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6936d5:{NFSU2_TR(0x6936d5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6936d8:{NFSU2_TR(0x6936d8);
__builtin_memmove((R+4400),(R+4368),8);
}
B6936db:{NFSU2_TR(0x6936db);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6936de:{NFSU2_TR(0x6936de);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6936e2:{NFSU2_TR(0x6936e2);
__builtin_memmove((R+4404),(R+4400),4);
}
B6936e5:{NFSU2_TR(0x6936e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6936ea:{NFSU2_TR(0x6936ea);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B6936ee:{NFSU2_TR(0x6936ee);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B6936f2:{NFSU2_TR(0x6936f2);
__builtin_memmove((R+4416),(R+4448),8);
}
B6936f5:{NFSU2_TR(0x6936f5);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6936f9:{NFSU2_TR(0x6936f9);
__builtin_memmove((R+4400),(R+4368),8);
}
B6936fc:{NFSU2_TR(0x6936fc);
__builtin_memmove((R+4420),(R+4416),4);
}
B6936ff:{NFSU2_TR(0x6936ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693703:{NFSU2_TR(0x693703);
__builtin_memmove((R+4384),(R+4432),8);
}
B693706:{NFSU2_TR(0x693706);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693709:{NFSU2_TR(0x693709);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69370c:{NFSU2_TR(0x69370c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693711:{NFSU2_TR(0x693711);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693715:{NFSU2_TR(0x693715);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693719:{NFSU2_TR(0x693719);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B69371d:{NFSU2_TR(0x69371d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693721:{NFSU2_TR(0x693721);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693725:{NFSU2_TR(0x693725);
__builtin_memmove((R+4384),(R+4432),8);
}
B693728:{NFSU2_TR(0x693728);
__builtin_memmove((R+4400),(R+4448),8);
}
B69372b:{NFSU2_TR(0x69372b);
__builtin_memmove((R+4372),(R+4368),4);
}
B69372e:{NFSU2_TR(0x69372e);
__builtin_memmove((R+4388),(R+4384),4);
}
B693731:{NFSU2_TR(0x693731);
__builtin_memmove((R+4404),(R+4400),4);
}
B693734:{NFSU2_TR(0x693734);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693739:{NFSU2_TR(0x693739);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69373d:{NFSU2_TR(0x69373d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693742:{NFSU2_TR(0x693742);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693746:{NFSU2_TR(0x693746);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69374a:{NFSU2_TR(0x69374a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69374e:{NFSU2_TR(0x69374e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693751:{NFSU2_TR(0x693751);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693754:{NFSU2_TR(0x693754);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B693758:{NFSU2_TR(0x693758);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69375d:{NFSU2_TR(0x69375d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693762:{NFSU2_TR(0x693762);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B693766:{NFSU2_TR(0x693766);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69376a:{NFSU2_TR(0x69376a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69376e:{NFSU2_TR(0x69376e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693772:{NFSU2_TR(0x693772);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693776:{NFSU2_TR(0x693776);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69377a:{NFSU2_TR(0x69377a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69377d:{NFSU2_TR(0x69377d);
__builtin_memmove((R+4432),(R+4352),8);
}
B693780:{NFSU2_TR(0x693780);
__builtin_memmove((R+4448),(R+4368),8);
}
B693783:{NFSU2_TR(0x693783);
__builtin_memmove((R+4464),(R+4368),8);
}
B693786:{NFSU2_TR(0x693786);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B693789:{NFSU2_TR(0x693789);
__builtin_memmove((R+4452),(R+4384),4);
}
B69378c:{NFSU2_TR(0x69378c);
__builtin_memmove((R+4436),(R+4432),4);
}
B69378f:{NFSU2_TR(0x69378f);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4388),4);
}
B693792:{NFSU2_TR(0x693792);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693796:{NFSU2_TR(0x693796);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B69379a:{NFSU2_TR(0x69379a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69379e:{NFSU2_TR(0x69379e);
__builtin_memmove((R+4464),(R+4352),8);
}
B6937a1:{NFSU2_TR(0x6937a1);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6937a5:{NFSU2_TR(0x6937a5);
__builtin_memmove((R+4356),(R+4368),4);
}
B6937a8:{NFSU2_TR(0x6937a8);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B6937ab:{NFSU2_TR(0x6937ab);
__builtin_memmove((R+4448),(R+4400),8);
}
B6937ae:{NFSU2_TR(0x6937ae);
__builtin_memmove((R+4416),(R+4400),8);
}
B6937b1:{NFSU2_TR(0x6937b1);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6937b4:{NFSU2_TR(0x6937b4);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4388),4);
}
B6937b7:{NFSU2_TR(0x6937b7);
__builtin_memmove((R+4420),(R+4384),4);
}
B6937ba:{NFSU2_TR(0x6937ba);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B6937bd:{NFSU2_TR(0x6937bd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6937c1:{NFSU2_TR(0x6937c1);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B6937c4:{NFSU2_TR(0x6937c4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B6937c8:{NFSU2_TR(0x6937c8);
__builtin_memmove((R+4420),(R+4416),4);
}
B6937cb:{NFSU2_TR(0x6937cb);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6937cf:{NFSU2_TR(0x6937cf);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6937d3:{NFSU2_TR(0x6937d3);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B6937d7:{NFSU2_TR(0x6937d7);
{wv<8>((R+4368),uo::pfsubr<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6937db:{NFSU2_TR(0x6937db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6937df:{NFSU2_TR(0x6937df);
__builtin_memmove((R+4416),(R+4368),8);
}
B6937e2:{NFSU2_TR(0x6937e2);
__builtin_memmove((R+4400),(R+4368),8);
}
B6937e5:{NFSU2_TR(0x6937e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6937e9:{NFSU2_TR(0x6937e9);
__builtin_memmove((R+4384),(R+4448),8);
}
B6937ec:{NFSU2_TR(0x6937ec);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6937ef:{NFSU2_TR(0x6937ef);
__builtin_memmove((R+4404),(R+4400),4);
}
B6937f2:{NFSU2_TR(0x6937f2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6937f5:{NFSU2_TR(0x6937f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6937fa:{NFSU2_TR(0x6937fa);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6937fe:{NFSU2_TR(0x6937fe);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B693802:{NFSU2_TR(0x693802);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693806:{NFSU2_TR(0x693806);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B69380a:{NFSU2_TR(0x69380a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69380e:{NFSU2_TR(0x69380e);
__builtin_memmove((R+4400),(R+4368),8);
}
B693811:{NFSU2_TR(0x693811);
__builtin_memmove((R+4416),(R+4448),8);
}
B693814:{NFSU2_TR(0x693814);
__builtin_memmove((R+4384),(R+4432),8);
}
B693817:{NFSU2_TR(0x693817);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69381a:{NFSU2_TR(0x69381a);
__builtin_memmove((R+4420),(R+4416),4);
}
B69381d:{NFSU2_TR(0x69381d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693820:{NFSU2_TR(0x693820);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B693824:{NFSU2_TR(0x693824);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693828:{NFSU2_TR(0x693828);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B69382c:{NFSU2_TR(0x69382c);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693830:{NFSU2_TR(0x693830);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693834:{NFSU2_TR(0x693834);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693838:{NFSU2_TR(0x693838);
__builtin_memmove((R+4416),(R+4352),8);
}
B69383b:{NFSU2_TR(0x69383b);
__builtin_memmove((R+4384),(R+4432),8);
}
B69383e:{NFSU2_TR(0x69383e);
__builtin_memmove((R+4400),(R+4448),8);
}
B693841:{NFSU2_TR(0x693841);
__builtin_memmove((R+4372),(R+4368),4);
}
B693844:{NFSU2_TR(0x693844);
__builtin_memmove((R+4388),(R+4384),4);
}
B693847:{NFSU2_TR(0x693847);
__builtin_memmove((R+4404),(R+4400),4);
}
B69384a:{NFSU2_TR(0x69384a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B69384e:{NFSU2_TR(0x69384e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693852:{NFSU2_TR(0x693852);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693857:{NFSU2_TR(0x693857);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69385b:{NFSU2_TR(0x69385b);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69385f:{NFSU2_TR(0x69385f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693863:{NFSU2_TR(0x693863);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693866:{NFSU2_TR(0x693866);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693869:{NFSU2_TR(0x693869);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B69386d:{NFSU2_TR(0x69386d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693872:{NFSU2_TR(0x693872);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B693876:{NFSU2_TR(0x693876);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B69387a:{NFSU2_TR(0x69387a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69387e:{NFSU2_TR(0x69387e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693882:{NFSU2_TR(0x693882);
__builtin_memmove((R+4468),(R+4416),4);
}
B693885:{NFSU2_TR(0x693885);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B693888:{NFSU2_TR(0x693888);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4388),4);
}
B69388b:{NFSU2_TR(0x69388b);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7148))));}
}
B693893:{NFSU2_TR(0x693893);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693897:{NFSU2_TR(0x693897);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4404),(U+4),4);
}
B69389b:{NFSU2_TR(0x69389b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4368),(R+4372),4);
w4(U+8,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4372),(U+4),4);
}
B69389f:{NFSU2_TR(0x69389f);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7148))));}
}
B6938a7:{NFSU2_TR(0x6938a7);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B6938ab:{NFSU2_TR(0x6938ab);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B6938af:{NFSU2_TR(0x6938af);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6938b3:{NFSU2_TR(0x6938b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6938b6:{NFSU2_TR(0x6938b6);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6938ba:{NFSU2_TR(0x6938ba);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6938bc:{NFSU2_TR(0x6938bc);
__builtin_memmove((R+4416),(R+4352),8);
}
B6938bf:{NFSU2_TR(0x6938bf);
if(r1(F+6)){{[[clang::musttail]] return blk_6938c4(ARGS);}}
}
B6938c1:L6938c1:{bud-=1;NFSU2_TR(0x6938c1);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(G+0)),r4(U+0));
{[[clang::musttail]] return blk_6938c4(ARGS);}
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
PN u32 blk_6938c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6938c4:L6938c4:{bud-=13;NFSU2_TR(0x6938c4);
{SPILL_OUT();c.pc=0x6938c4u;V r_=user_op(c,524532,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL_IN();wv<8>((R+4368),r_);}
}
B6938c8:{NFSU2_TR(0x6938c8);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B6938cb:{NFSU2_TR(0x6938cb);
__builtin_memmove((R+4356),(R+4352),4);
}
B6938ce:{NFSU2_TR(0x6938ce);
{wv<8>((R+4400),uo::pfcmpeq<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6938d2:{NFSU2_TR(0x6938d2);
{SPILL_OUT();c.pc=0x6938d2u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL_IN();wv<8>((R+4352),r_);}
}
B6938d6:{NFSU2_TR(0x6938d6);
{SPILL_OUT();c.pc=0x6938d6u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL_IN();wv<8>((R+4352),r_);}
}
B6938da:{NFSU2_TR(0x6938da);
w4(G+0,u32(r8(R+4400)));
}
B6938dd:{NFSU2_TR(0x6938dd);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7148))));}
}
B6938e5:{NFSU2_TR(0x6938e5);
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
B6938e7:{NFSU2_TR(0x6938e7);
__builtin_memmove((R+4368),(R+4352),8);
}
B6938ea:{NFSU2_TR(0x6938ea);
__builtin_memmove((R+4388),(R+4368),4);
}
B6938ed:{NFSU2_TR(0x6938ed);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B6938f0:{NFSU2_TR(0x6938f0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_69397c(ARGS);}}
}
B6938f6:L6938f6:{bud-=37;NFSU2_TR(0x6938f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6938f9:{NFSU2_TR(0x6938f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6938fd:{NFSU2_TR(0x6938fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693901:{NFSU2_TR(0x693901);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693905:{NFSU2_TR(0x693905);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693909:{NFSU2_TR(0x693909);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69390d:{NFSU2_TR(0x69390d);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693911:{NFSU2_TR(0x693911);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B693915:{NFSU2_TR(0x693915);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B693919:{NFSU2_TR(0x693919);
__builtin_memmove((R+4416),(R+4384),8);
}
B69391c:{NFSU2_TR(0x69391c);
__builtin_memmove((R+4464),(R+4432),8);
}
B69391f:{NFSU2_TR(0x69391f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B693922:{NFSU2_TR(0x693922);
__builtin_memmove((R+4420),(R+4400),4);
}
B693925:{NFSU2_TR(0x693925);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B693928:{NFSU2_TR(0x693928);
__builtin_memmove((R+4468),(R+4448),4);
}
B69392b:{NFSU2_TR(0x69392b);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69392e:{NFSU2_TR(0x69392e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693932:{NFSU2_TR(0x693932);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693936:{NFSU2_TR(0x693936);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69393a:{NFSU2_TR(0x69393a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69393e:{NFSU2_TR(0x69393e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693942:{NFSU2_TR(0x693942);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693946:{NFSU2_TR(0x693946);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69394a:{NFSU2_TR(0x69394a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69394e:{NFSU2_TR(0x69394e);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693952:{NFSU2_TR(0x693952);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B693956:{NFSU2_TR(0x693956);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69395a:{NFSU2_TR(0x69395a);
__builtin_memmove((R+4416),(R+4384),8);
}
B69395d:{NFSU2_TR(0x69395d);
__builtin_memmove((R+4464),(R+4432),8);
}
B693960:{NFSU2_TR(0x693960);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B693963:{NFSU2_TR(0x693963);
__builtin_memmove((R+4420),(R+4400),4);
}
B693966:{NFSU2_TR(0x693966);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B693969:{NFSU2_TR(0x693969);
__builtin_memmove((R+4468),(R+4448),4);
}
B69396c:{NFSU2_TR(0x69396c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693970:{NFSU2_TR(0x693970);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693974:{NFSU2_TR(0x693974);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693978:{NFSU2_TR(0x693978);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_69397c(ARGS);}
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
PN u32 blk_69397c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69397c:L69397c:{bud-=4;NFSU2_TR(0x69397c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69397f:{NFSU2_TR(0x69397f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693982:{NFSU2_TR(0x693982);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B693983:{NFSU2_TR(0x693983);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x69399bu)[[clang::musttail]] return blk_69399b(ARGS);if(t__==0x69419fu)[[clang::musttail]] return blk_69419f(ARGS);if(t__==0x6941b3u)[[clang::musttail]] return blk_6941b3(ARGS);if(t__==0x6941d4u)[[clang::musttail]] return blk_6941d4(ARGS););}
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
PN u32 blk_693986(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693986:L693986:{bud-=8;NFSU2_TR(0x693986);
__builtin_memmove((R+28),(R+28),4);
}
B693988:{NFSU2_TR(0x693988);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693989:{NFSU2_TR(0x693989);
__builtin_memmove((R+20),(G+16),4);
}
B69398b:{NFSU2_TR(0x69398b);
w2(R+4260,0xffffu);
}
B69398d:{NFSU2_TR(0x69398d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B693990:{NFSU2_TR(0x693990);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B693993:{NFSU2_TR(0x693993);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B693996:{NFSU2_TR(0x693996);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69399bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
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
PN u32 blk_69399b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69399b:L69399b:{bud-=4;NFSU2_TR(0x69399b);
w2(R+4260,0xffffu);
}
B69399d:{NFSU2_TR(0x69399d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6939a0:{NFSU2_TR(0x6939a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6939a1:{NFSU2_TR(0x6939a1);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
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
PN u32 blk_6939a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6939a4:L6939a4:{bud-=34;NFSU2_TR(0x6939a4);
__builtin_memmove((R+28),(R+28),4);
}
B6939a6:{NFSU2_TR(0x6939a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6939a7:{NFSU2_TR(0x6939a7);
__builtin_memmove((R+20),(G+16),4);
}
B6939a9:{NFSU2_TR(0x6939a9);
w2(R+4260,0xffffu);
}
B6939ab:{NFSU2_TR(0x6939ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6939ae:{NFSU2_TR(0x6939ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6939b1:{NFSU2_TR(0x6939b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6939b4:{NFSU2_TR(0x6939b4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6939b7:{NFSU2_TR(0x6939b7);
__builtin_memmove((R+4368),(R+4352),8);
}
B6939ba:{NFSU2_TR(0x6939ba);
__builtin_memmove((R+4356),(R+4352),4);
}
B6939bd:{NFSU2_TR(0x6939bd);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B6939c0:{NFSU2_TR(0x6939c0);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B6939c4:{NFSU2_TR(0x6939c4);
__builtin_memmove((R+4388),(R+4384),4);
}
B6939c7:{NFSU2_TR(0x6939c7);
__builtin_memmove((R+4400),(R+4352),8);
}
B6939ca:{NFSU2_TR(0x6939ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6939ce:{NFSU2_TR(0x6939ce);
__builtin_memmove((R+4416),(R+4368),8);
}
B6939d1:{NFSU2_TR(0x6939d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6939d6:{NFSU2_TR(0x6939d6);
__builtin_memmove((R+4432),(R+4384),8);
}
B6939d9:{NFSU2_TR(0x6939d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6939de:{NFSU2_TR(0x6939de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6939e3:{NFSU2_TR(0x6939e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6939e8:{NFSU2_TR(0x6939e8);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6939ec:{NFSU2_TR(0x6939ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6939f1:{NFSU2_TR(0x6939f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6939f6:{NFSU2_TR(0x6939f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6939fb:{NFSU2_TR(0x6939fb);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6939ff:{NFSU2_TR(0x6939ff);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693a03:{NFSU2_TR(0x693a03);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693a07:{NFSU2_TR(0x693a07);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B693a0a:{NFSU2_TR(0x693a0a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693a0e:{NFSU2_TR(0x693a0e);
w2(R+4260,0xffffu);
}
B693a10:{NFSU2_TR(0x693a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693a13:{NFSU2_TR(0x693a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693a14:{NFSU2_TR(0x693a14);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
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
PN u32 blk_693a17(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693a17:L693a17:{bud-=32;NFSU2_TR(0x693a17);
__builtin_memmove((R+28),(R+28),4);
}
B693a19:{NFSU2_TR(0x693a19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693a1a:{NFSU2_TR(0x693a1a);
__builtin_memmove((R+20),(G+16),4);
}
B693a1c:{NFSU2_TR(0x693a1c);
w2(R+4260,0xffffu);
}
B693a1e:{NFSU2_TR(0x693a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693a21:{NFSU2_TR(0x693a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693a24:{NFSU2_TR(0x693a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693a27:{NFSU2_TR(0x693a27);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693a2a:{NFSU2_TR(0x693a2a);
__builtin_memmove((R+4368),(R+4352),8);
}
B693a2d:{NFSU2_TR(0x693a2d);
__builtin_memmove((R+4356),(R+4352),4);
}
B693a30:{NFSU2_TR(0x693a30);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B693a33:{NFSU2_TR(0x693a33);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B693a37:{NFSU2_TR(0x693a37);
__builtin_memmove((R+4388),(R+4384),4);
}
B693a3a:{NFSU2_TR(0x693a3a);
__builtin_memmove((R+4400),(R+4352),8);
}
B693a3d:{NFSU2_TR(0x693a3d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693a41:{NFSU2_TR(0x693a41);
__builtin_memmove((R+4416),(R+4368),8);
}
B693a44:{NFSU2_TR(0x693a44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693a49:{NFSU2_TR(0x693a49);
__builtin_memmove((R+4432),(R+4384),8);
}
B693a4c:{NFSU2_TR(0x693a4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693a51:{NFSU2_TR(0x693a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693a56:{NFSU2_TR(0x693a56);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693a5a:{NFSU2_TR(0x693a5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693a5f:{NFSU2_TR(0x693a5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693a64:{NFSU2_TR(0x693a64);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693a68:{NFSU2_TR(0x693a68);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693a6c:{NFSU2_TR(0x693a6c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693a70:{NFSU2_TR(0x693a70);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B693a73:{NFSU2_TR(0x693a73);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B693a77:{NFSU2_TR(0x693a77);
w2(R+4260,0xffffu);
}
B693a79:{NFSU2_TR(0x693a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693a7c:{NFSU2_TR(0x693a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693a7d:{NFSU2_TR(0x693a7d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x68e459u)[[clang::musttail]] return blk_68e459(ARGS););}
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
PN u32 blk_693a80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693a80:L693a80:{bud-=26;NFSU2_TR(0x693a80);
w2(R+4260,0xffffu);
}
B693a82:{NFSU2_TR(0x693a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693a86:{NFSU2_TR(0x693a86);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693a89:{NFSU2_TR(0x693a89);
__builtin_memmove((R+4368),(R+4352),8);
}
B693a8c:{NFSU2_TR(0x693a8c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B693a90:{NFSU2_TR(0x693a90);
__builtin_memmove((R+4400),(R+4384),8);
}
B693a93:{NFSU2_TR(0x693a93);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B693a97:{NFSU2_TR(0x693a97);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B693a9b:{NFSU2_TR(0x693a9b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693a9f:{NFSU2_TR(0x693a9f);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B693aa3:{NFSU2_TR(0x693aa3);
__builtin_memmove((R+4432),(R+4352),8);
}
B693aa6:{NFSU2_TR(0x693aa6);
{SPILL_OUT();c.pc=0x693aa6u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL_IN();wv<8>((R+4416),r_);}
}
B693aaa:{NFSU2_TR(0x693aaa);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B693ab2:{NFSU2_TR(0x693ab2);
__builtin_memmove((R+4384),(R+4416),8);
}
B693ab5:{NFSU2_TR(0x693ab5);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693ab9:{NFSU2_TR(0x693ab9);
{SPILL_OUT();c.pc=0x693ab9u;V r_=user_op(c,524535,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL_IN();wv<8>((R+4352),r_);}
}
B693abd:{NFSU2_TR(0x693abd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693ac1:{NFSU2_TR(0x693ac1);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B693ac4:{NFSU2_TR(0x693ac4);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B693ac7:{NFSU2_TR(0x693ac7);
{SPILL_OUT();c.pc=0x693ac7u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4352),r_);}
}
B693acb:{NFSU2_TR(0x693acb);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B693acf:{NFSU2_TR(0x693acf);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693ad3:{NFSU2_TR(0x693ad3);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B693ad6:{NFSU2_TR(0x693ad6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B693ada:{NFSU2_TR(0x693ada);
w2(R+4260,0xffffu);
}
B693adc:{NFSU2_TR(0x693adc);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x68eccdu)[[clang::musttail]] return blk_68eccd(ARGS);if(t__==0x691cd3u)[[clang::musttail]] return blk_691cd3(ARGS););}
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
PN u32 blk_693adf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693adf:L693adf:{bud-=30;NFSU2_TR(0x693adf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693ae3:{NFSU2_TR(0x693ae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693ae7:{NFSU2_TR(0x693ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693aeb:{NFSU2_TR(0x693aeb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693aee:{NFSU2_TR(0x693aee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693af1:{NFSU2_TR(0x693af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B693af6:{NFSU2_TR(0x693af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B693afa:{NFSU2_TR(0x693afa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B693afd:{NFSU2_TR(0x693afd);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B693b01:{NFSU2_TR(0x693b01);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B693b05:{NFSU2_TR(0x693b05);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B693b09:{NFSU2_TR(0x693b09);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693b0e:{NFSU2_TR(0x693b0e);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B693b12:{NFSU2_TR(0x693b12);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693b16:{NFSU2_TR(0x693b16);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693b1a:{NFSU2_TR(0x693b1a);
__builtin_memmove((R+4452),(R+4448),4);
}
B693b1d:{NFSU2_TR(0x693b1d);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B693b21:{NFSU2_TR(0x693b21);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B693b25:{NFSU2_TR(0x693b25);
__builtin_memmove((R+4468),(R+4464),4);
}
B693b28:{NFSU2_TR(0x693b28);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B693b2c:{NFSU2_TR(0x693b2c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B693b30:{NFSU2_TR(0x693b30);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B693b34:{NFSU2_TR(0x693b34);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B693b38:{NFSU2_TR(0x693b38);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B693b3c:{NFSU2_TR(0x693b3c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693b40:{NFSU2_TR(0x693b40);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693b44:{NFSU2_TR(0x693b44);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B693b47:{NFSU2_TR(0x693b47);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B693b4b:{NFSU2_TR(0x693b4b);
w2(R+4260,0xffffu);
}
B693b4d:{NFSU2_TR(0x693b4d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_693b50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693b50:L693b50:{bud-=55;NFSU2_TR(0x693b50);
w2(R+4260,0xffffu);
}
B693b52:{NFSU2_TR(0x693b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B693b57:{NFSU2_TR(0x693b57);
__builtin_memmove((R+4368),(R+4352),8);
}
B693b5a:{NFSU2_TR(0x693b5a);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B693b5e:{NFSU2_TR(0x693b5e);
__builtin_memmove((R+4384),(R+4368),8);
}
B693b61:{NFSU2_TR(0x693b61);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693b65:{NFSU2_TR(0x693b65);
__builtin_memmove((R+4400),gp(0x7b71f0),8);
}
B693b6c:{NFSU2_TR(0x693b6c);
__builtin_memmove((R+4416),(R+4368),8);
}
B693b6f:{NFSU2_TR(0x693b6f);
__builtin_memmove((R+4464),(R+4384),8);
}
B693b72:{NFSU2_TR(0x693b72);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B693b76:{NFSU2_TR(0x693b76);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B693b7a:{NFSU2_TR(0x693b7a);
__builtin_memmove((R+4448),(R+4384),8);
}
B693b7d:{NFSU2_TR(0x693b7d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b71f8))));}
}
B693b85:{NFSU2_TR(0x693b85);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693b89:{NFSU2_TR(0x693b89);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B693b8d:{NFSU2_TR(0x693b8d);
__builtin_memmove((R+4432),(R+4368),8);
}
B693b90:{NFSU2_TR(0x693b90);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693b94:{NFSU2_TR(0x693b94);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B693b98:{NFSU2_TR(0x693b98);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B693b9c:{NFSU2_TR(0x693b9c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71e0))));}
}
B693ba4:{NFSU2_TR(0x693ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693ba8:{NFSU2_TR(0x693ba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693bac:{NFSU2_TR(0x693bac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693bb0:{NFSU2_TR(0x693bb0);
__builtin_memmove((R+4468),(R+4464),4);
}
B693bb3:{NFSU2_TR(0x693bb3);
__builtin_memmove((R+4372),(R+4368),4);
}
B693bb6:{NFSU2_TR(0x693bb6);
__builtin_memmove((R+4452),(R+4448),4);
}
B693bb9:{NFSU2_TR(0x693bb9);
__builtin_memmove((R+4388),(R+4384),4);
}
B693bbc:{NFSU2_TR(0x693bbc);
__builtin_memmove((R+4432),(R+4464),8);
}
B693bbf:{NFSU2_TR(0x693bbf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+0))));}
}
B693bc3:{NFSU2_TR(0x693bc3);
__builtin_memmove((R+4352),(R+4368),8);
}
B693bc6:{NFSU2_TR(0x693bc6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B693bca:{NFSU2_TR(0x693bca);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B693bce:{NFSU2_TR(0x693bce);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693bd2:{NFSU2_TR(0x693bd2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B693bd6:{NFSU2_TR(0x693bd6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693bda:{NFSU2_TR(0x693bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693bde:{NFSU2_TR(0x693bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693be2:{NFSU2_TR(0x693be2);
__builtin_memmove((R+4416),(R+4448),8);
}
B693be5:{NFSU2_TR(0x693be5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B693be9:{NFSU2_TR(0x693be9);
__builtin_memmove((R+4400),(R+4384),8);
}
B693bec:{NFSU2_TR(0x693bec);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B693bf0:{NFSU2_TR(0x693bf0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B693bf4:{NFSU2_TR(0x693bf4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B693bf8:{NFSU2_TR(0x693bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693bfc:{NFSU2_TR(0x693bfc);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693c00:{NFSU2_TR(0x693c00);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B693c04:{NFSU2_TR(0x693c04);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B693c08:{NFSU2_TR(0x693c08);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B693c0c:{NFSU2_TR(0x693c0c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693c10:{NFSU2_TR(0x693c10);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693c14:{NFSU2_TR(0x693c14);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693c18:{NFSU2_TR(0x693c18);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B693c1b:{NFSU2_TR(0x693c1b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B693c1f:{NFSU2_TR(0x693c1f);
w2(R+4260,0xffffu);
}
B693c21:{NFSU2_TR(0x693c21);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_693c24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693c24:L693c24:{bud-=61;NFSU2_TR(0x693c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B693c29:{NFSU2_TR(0x693c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693c2d:{NFSU2_TR(0x693c2d);
__builtin_memmove((R+4368),(R+4352),8);
}
B693c30:{NFSU2_TR(0x693c30);
__builtin_memmove((R+4356),(R+4352),4);
}
B693c33:{NFSU2_TR(0x693c33);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B693c37:{NFSU2_TR(0x693c37);
__builtin_memmove((R+4372),gp(0x7b7158),4);
}
B693c3e:{NFSU2_TR(0x693c3e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693c42:{NFSU2_TR(0x693c42);
__builtin_memmove((R+4400),(R+4368),8);
}
B693c45:{NFSU2_TR(0x693c45);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B693c49:{NFSU2_TR(0x693c49);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B693c4c:{NFSU2_TR(0x693c4c);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693c50:{NFSU2_TR(0x693c50);
__builtin_memmove((R+4372),(R+4368),4);
}
B693c53:{NFSU2_TR(0x693c53);
__builtin_memmove((R+4416),(R+4352),8);
}
B693c56:{NFSU2_TR(0x693c56);
__builtin_memmove((R+4404),(R+4400),4);
}
B693c59:{NFSU2_TR(0x693c59);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7168))));}
}
B693c61:{NFSU2_TR(0x693c61);
__builtin_memmove((R+4432),(R+4352),8);
}
B693c64:{NFSU2_TR(0x693c64);
__builtin_memmove((R+4356),(R+4416),4);
}
B693c67:{NFSU2_TR(0x693c67);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7178))));
}
B693c6e:{NFSU2_TR(0x693c6e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B693c71:{NFSU2_TR(0x693c71);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693c75:{NFSU2_TR(0x693c75);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B693c79:{NFSU2_TR(0x693c79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693c7d:{NFSU2_TR(0x693c7d);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B693c81:{NFSU2_TR(0x693c81);
__builtin_memmove((R+4384),(R+4368),8);
}
B693c84:{NFSU2_TR(0x693c84);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B693c87:{NFSU2_TR(0x693c87);
__builtin_memmove((R+4400),(R+4352),8);
}
B693c8a:{NFSU2_TR(0x693c8a);
__builtin_memmove((R+4356),(R+4352),4);
}
B693c8d:{NFSU2_TR(0x693c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693c91:{NFSU2_TR(0x693c91);
__builtin_memmove((R+4388),(R+4384),4);
}
B693c94:{NFSU2_TR(0x693c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693c98:{NFSU2_TR(0x693c98);
__builtin_memmove((R+4416),(R+4368),8);
}
B693c9b:{NFSU2_TR(0x693c9b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B693c9f:{NFSU2_TR(0x693c9f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693ca2:{NFSU2_TR(0x693ca2);
__builtin_memmove((R+4432),(R+4352),8);
}
B693ca5:{NFSU2_TR(0x693ca5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693ca9:{NFSU2_TR(0x693ca9);
__builtin_memmove((R+4448),(R+4384),8);
}
B693cac:{NFSU2_TR(0x693cac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B693cb0:{NFSU2_TR(0x693cb0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693cb4:{NFSU2_TR(0x693cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693cb8:{NFSU2_TR(0x693cb8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693cbc:{NFSU2_TR(0x693cbc);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693cc0:{NFSU2_TR(0x693cc0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693cc4:{NFSU2_TR(0x693cc4);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693cc8:{NFSU2_TR(0x693cc8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B693ccc:{NFSU2_TR(0x693ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693cd0:{NFSU2_TR(0x693cd0);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693cd4:{NFSU2_TR(0x693cd4);
__builtin_memmove((R+4464),(R+4400),8);
}
B693cd7:{NFSU2_TR(0x693cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B693cdb:{NFSU2_TR(0x693cdb);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693cdf:{NFSU2_TR(0x693cdf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B693ce3:{NFSU2_TR(0x693ce3);
__builtin_memmove((R+4368),gp(0x7b71c0),8);
}
B693cea:{NFSU2_TR(0x693cea);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693cee:{NFSU2_TR(0x693cee);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4432))));}
}
B693cf2:{NFSU2_TR(0x693cf2);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693cf6:{NFSU2_TR(0x693cf6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693cfa:{NFSU2_TR(0x693cfa);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693cfe:{NFSU2_TR(0x693cfe);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B693d01:{NFSU2_TR(0x693d01);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B693d05:{NFSU2_TR(0x693d05);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4416)));
s4(u32(r4(U+0)),r4(U+4));
}
B693d09:{NFSU2_TR(0x693d09);
w2(R+4260,0xffffu);
}
B693d0b:{NFSU2_TR(0x693d0b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_693d0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693d0e:L693d0e:{bud-=41;NFSU2_TR(0x693d0e);
__builtin_memmove((R+28),(R+28),4);
}
B693d10:{NFSU2_TR(0x693d10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693d11:{NFSU2_TR(0x693d11);
__builtin_memmove((R+20),(G+16),4);
}
B693d13:{NFSU2_TR(0x693d13);
w2(R+4260,0xffffu);
}
B693d15:{NFSU2_TR(0x693d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693d18:{NFSU2_TR(0x693d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693d1b:{NFSU2_TR(0x693d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693d1e:{NFSU2_TR(0x693d1e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693d21:{NFSU2_TR(0x693d21);
__builtin_memmove((R+4368),(R+4352),8);
}
B693d24:{NFSU2_TR(0x693d24);
__builtin_memmove((R+4356),(R+4352),4);
}
B693d27:{NFSU2_TR(0x693d27);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B693d2a:{NFSU2_TR(0x693d2a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B693d2e:{NFSU2_TR(0x693d2e);
__builtin_memmove((R+4388),(R+4384),4);
}
B693d31:{NFSU2_TR(0x693d31);
__builtin_memmove((R+4400),(R+4352),8);
}
B693d34:{NFSU2_TR(0x693d34);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693d38:{NFSU2_TR(0x693d38);
__builtin_memmove((R+4416),(R+4368),8);
}
B693d3b:{NFSU2_TR(0x693d3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693d40:{NFSU2_TR(0x693d40);
__builtin_memmove((R+4432),(R+4384),8);
}
B693d43:{NFSU2_TR(0x693d43);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693d48:{NFSU2_TR(0x693d48);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693d4d:{NFSU2_TR(0x693d4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693d52:{NFSU2_TR(0x693d52);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693d56:{NFSU2_TR(0x693d56);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693d5b:{NFSU2_TR(0x693d5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693d60:{NFSU2_TR(0x693d60);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693d65:{NFSU2_TR(0x693d65);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693d69:{NFSU2_TR(0x693d69);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693d6d:{NFSU2_TR(0x693d6d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693d71:{NFSU2_TR(0x693d71);
__builtin_memmove((R+4432),(R+4400),8);
}
B693d74:{NFSU2_TR(0x693d74);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693d77:{NFSU2_TR(0x693d77);
{SPILL_OUT();c.pc=0x693d77u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4416),r_);}
}
B693d7b:{NFSU2_TR(0x693d7b);
{SPILL_OUT();c.pc=0x693d7bu;V r_=user_op(c,524534,{rv<8>((R+4432)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4432),r_);}
}
B693d7f:{NFSU2_TR(0x693d7f);
{SPILL_OUT();c.pc=0x693d7fu;V r_=user_op(c,524536,{rv<8>((R+4432)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4432),r_);}
}
B693d83:{NFSU2_TR(0x693d83);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B693d87:{NFSU2_TR(0x693d87);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B693d8b:{NFSU2_TR(0x693d8b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B693d8e:{NFSU2_TR(0x693d8e);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B693d92:{NFSU2_TR(0x693d92);
w2(R+4260,0xffffu);
}
B693d94:{NFSU2_TR(0x693d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693d97:{NFSU2_TR(0x693d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693d98:{NFSU2_TR(0x693d98);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x694070u)[[clang::musttail]] return blk_694070(ARGS);if(t__==0x6942f1u)[[clang::musttail]] return blk_6942f1(ARGS);if(t__==0x694494u)[[clang::musttail]] return blk_694494(ARGS);if(t__==0x68e139u)[[clang::musttail]] return blk_68e139(ARGS););}
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
PN u32 blk_693d9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693d9b:L693d9b:{bud-=122;NFSU2_TR(0x693d9b);
__builtin_memmove((R+28),(R+28),4);
}
B693d9d:{NFSU2_TR(0x693d9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693d9e:{NFSU2_TR(0x693d9e);
__builtin_memmove((R+20),(G+16),4);
}
B693da0:{NFSU2_TR(0x693da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693da3:{NFSU2_TR(0x693da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693da6:{NFSU2_TR(0x693da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693da9:{NFSU2_TR(0x693da9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693dac:{NFSU2_TR(0x693dac);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693db0:{NFSU2_TR(0x693db0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693db3:{NFSU2_TR(0x693db3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693db6:{NFSU2_TR(0x693db6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693dba:{NFSU2_TR(0x693dba);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693dbd:{NFSU2_TR(0x693dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693dc1:{NFSU2_TR(0x693dc1);
__builtin_memmove((R+4356),(R+4352),4);
}
B693dc4:{NFSU2_TR(0x693dc4);
__builtin_memmove((R+4372),(R+4368),4);
}
B693dc7:{NFSU2_TR(0x693dc7);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693dcb:{NFSU2_TR(0x693dcb);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693dce:{NFSU2_TR(0x693dce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693dd3:{NFSU2_TR(0x693dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693dd7:{NFSU2_TR(0x693dd7);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693ddb:{NFSU2_TR(0x693ddb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693dde:{NFSU2_TR(0x693dde);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693de3:{NFSU2_TR(0x693de3);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693de7:{NFSU2_TR(0x693de7);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693deb:{NFSU2_TR(0x693deb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693def:{NFSU2_TR(0x693def);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693df4:{NFSU2_TR(0x693df4);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693df8:{NFSU2_TR(0x693df8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693dfc:{NFSU2_TR(0x693dfc);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693e00:{NFSU2_TR(0x693e00);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693e05:{NFSU2_TR(0x693e05);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693e09:{NFSU2_TR(0x693e09);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693e0d:{NFSU2_TR(0x693e0d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693e11:{NFSU2_TR(0x693e11);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693e15:{NFSU2_TR(0x693e15);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B693e18:{NFSU2_TR(0x693e18);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693e1b:{NFSU2_TR(0x693e1b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693e1f:{NFSU2_TR(0x693e1f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693e22:{NFSU2_TR(0x693e22);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693e26:{NFSU2_TR(0x693e26);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693e29:{NFSU2_TR(0x693e29);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693e2d:{NFSU2_TR(0x693e2d);
__builtin_memmove((R+4356),(R+4352),4);
}
B693e30:{NFSU2_TR(0x693e30);
__builtin_memmove((R+4372),(R+4368),4);
}
B693e33:{NFSU2_TR(0x693e33);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693e37:{NFSU2_TR(0x693e37);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693e3a:{NFSU2_TR(0x693e3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693e3f:{NFSU2_TR(0x693e3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693e43:{NFSU2_TR(0x693e43);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693e47:{NFSU2_TR(0x693e47);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693e4a:{NFSU2_TR(0x693e4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693e4f:{NFSU2_TR(0x693e4f);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693e53:{NFSU2_TR(0x693e53);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693e57:{NFSU2_TR(0x693e57);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693e5b:{NFSU2_TR(0x693e5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693e60:{NFSU2_TR(0x693e60);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693e64:{NFSU2_TR(0x693e64);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693e68:{NFSU2_TR(0x693e68);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693e6c:{NFSU2_TR(0x693e6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693e71:{NFSU2_TR(0x693e71);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693e75:{NFSU2_TR(0x693e75);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693e79:{NFSU2_TR(0x693e79);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693e7d:{NFSU2_TR(0x693e7d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693e81:{NFSU2_TR(0x693e81);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693e85:{NFSU2_TR(0x693e85);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693e88:{NFSU2_TR(0x693e88);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693e8c:{NFSU2_TR(0x693e8c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693e8f:{NFSU2_TR(0x693e8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693e93:{NFSU2_TR(0x693e93);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693e96:{NFSU2_TR(0x693e96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693e9a:{NFSU2_TR(0x693e9a);
__builtin_memmove((R+4356),(R+4352),4);
}
B693e9d:{NFSU2_TR(0x693e9d);
__builtin_memmove((R+4372),(R+4368),4);
}
B693ea0:{NFSU2_TR(0x693ea0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693ea4:{NFSU2_TR(0x693ea4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693ea7:{NFSU2_TR(0x693ea7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693eac:{NFSU2_TR(0x693eac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693eb0:{NFSU2_TR(0x693eb0);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693eb4:{NFSU2_TR(0x693eb4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693eb7:{NFSU2_TR(0x693eb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693ebc:{NFSU2_TR(0x693ebc);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693ec0:{NFSU2_TR(0x693ec0);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693ec4:{NFSU2_TR(0x693ec4);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693ec8:{NFSU2_TR(0x693ec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693ecd:{NFSU2_TR(0x693ecd);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693ed1:{NFSU2_TR(0x693ed1);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693ed5:{NFSU2_TR(0x693ed5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693ed9:{NFSU2_TR(0x693ed9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693ede:{NFSU2_TR(0x693ede);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693ee2:{NFSU2_TR(0x693ee2);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693ee6:{NFSU2_TR(0x693ee6);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693eea:{NFSU2_TR(0x693eea);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693eee:{NFSU2_TR(0x693eee);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693ef2:{NFSU2_TR(0x693ef2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693ef5:{NFSU2_TR(0x693ef5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693ef9:{NFSU2_TR(0x693ef9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693efc:{NFSU2_TR(0x693efc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693f00:{NFSU2_TR(0x693f00);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693f03:{NFSU2_TR(0x693f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693f07:{NFSU2_TR(0x693f07);
__builtin_memmove((R+4356),(R+4352),4);
}
B693f0a:{NFSU2_TR(0x693f0a);
__builtin_memmove((R+4372),(R+4368),4);
}
B693f0d:{NFSU2_TR(0x693f0d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693f11:{NFSU2_TR(0x693f11);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693f14:{NFSU2_TR(0x693f14);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693f19:{NFSU2_TR(0x693f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693f1d:{NFSU2_TR(0x693f1d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693f21:{NFSU2_TR(0x693f21);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693f24:{NFSU2_TR(0x693f24);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693f29:{NFSU2_TR(0x693f29);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693f2d:{NFSU2_TR(0x693f2d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693f31:{NFSU2_TR(0x693f31);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693f35:{NFSU2_TR(0x693f35);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693f3a:{NFSU2_TR(0x693f3a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693f3e:{NFSU2_TR(0x693f3e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693f42:{NFSU2_TR(0x693f42);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693f46:{NFSU2_TR(0x693f46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693f4b:{NFSU2_TR(0x693f4b);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693f4f:{NFSU2_TR(0x693f4f);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693f53:{NFSU2_TR(0x693f53);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693f57:{NFSU2_TR(0x693f57);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693f5b:{NFSU2_TR(0x693f5b);
w2(R+4260,0xffffu);
}
B693f5d:{NFSU2_TR(0x693f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B693f60:{NFSU2_TR(0x693f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693f61:{NFSU2_TR(0x693f61);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x69401au)[[clang::musttail]] return blk_69401a(ARGS);if(t__==0x69402fu)[[clang::musttail]] return blk_69402f(ARGS);if(t__==0x694042u)[[clang::musttail]] return blk_694042(ARGS);if(t__==0x694055u)[[clang::musttail]] return blk_694055(ARGS););}
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
PN u32 blk_693f64(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693f64:L693f64:{bud-=5;NFSU2_TR(0x693f64);
__builtin_memmove((R+28),(R+28),4);
}
B693f66:{NFSU2_TR(0x693f66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693f67:{NFSU2_TR(0x693f67);
__builtin_memmove((R+20),(G+16),4);
}
B693f69:{NFSU2_TR(0x693f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693f6a:{NFSU2_TR(0x693f6a);
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d0eu);}[[clang::musttail]] return blk_693d0e(ARGS);}
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
PN u32 blk_693f6f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693f6f:L693f6f:{bud-=24;NFSU2_TR(0x693f6f);
__builtin_memmove((R+28),(R+28),4);
}
B693f71:{NFSU2_TR(0x693f71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693f72:{NFSU2_TR(0x693f72);
__builtin_memmove((R+20),(G+16),4);
}
B693f74:{NFSU2_TR(0x693f74);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x40ull))));
}
B693f77:{NFSU2_TR(0x693f77);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B693f79:{NFSU2_TR(0x693f79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693f7a:{NFSU2_TR(0x693f7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B693f7b:{NFSU2_TR(0x693f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B693f7e:{NFSU2_TR(0x693f7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B693f80:{NFSU2_TR(0x693f80);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((G+0),(U+0),1);
}
B693f83:{NFSU2_TR(0x693f83);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B693f85:{NFSU2_TR(0x693f85);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B693f88:{NFSU2_TR(0x693f88);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B693f8a:{NFSU2_TR(0x693f8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B693f8d:{NFSU2_TR(0x693f8d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((G+4),(U+0),1);
}
B693f90:{NFSU2_TR(0x693f90);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B693f92:{NFSU2_TR(0x693f92);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B693f94:{NFSU2_TR(0x693f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B693f97:{NFSU2_TR(0x693f97);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B693f99:{NFSU2_TR(0x693f99);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B693f9b:{NFSU2_TR(0x693f9b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((R+8),(U+0),1);
}
B693f9e:{NFSU2_TR(0x693f9e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B693fa0:{NFSU2_TR(0x693fa0);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x7ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B693fa3:{NFSU2_TR(0x693fa3);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_694064(ARGS);}}
}
B693fa9:L693fa9:{bud-=1;NFSU2_TR(0x693fa9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6940dbull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_PRED(t_,);}
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
PN u32 blk_693fb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fb0:L693fb0:{bud-=1;NFSU2_TR(0x693fb0);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fb2(ARGS);}
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
PN u32 blk_693fb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fb2:L693fb2:{bud-=1;NFSU2_TR(0x693fb2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fb5(ARGS);}
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
PN u32 blk_693fb5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fb5:L693fb5:{bud-=1;NFSU2_TR(0x693fb5);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fb7(ARGS);}
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
PN u32 blk_693fb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fb7:L693fb7:{bud-=1;NFSU2_TR(0x693fb7);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fba(ARGS);}
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
PN u32 blk_693fba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fba:L693fba:{bud-=1;NFSU2_TR(0x693fba);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fbc(ARGS);}
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
PN u32 blk_693fbc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fbc:L693fbc:{bud-=1;NFSU2_TR(0x693fbc);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fbf(ARGS);}
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
PN u32 blk_693fbf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fbf:L693fbf:{bud-=1;NFSU2_TR(0x693fbf);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fc1(ARGS);}
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
PN u32 blk_693fc1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fc1:L693fc1:{bud-=1;NFSU2_TR(0x693fc1);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fc4(ARGS);}
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
PN u32 blk_693fc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fc4:L693fc4:{bud-=1;NFSU2_TR(0x693fc4);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fc6(ARGS);}
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
PN u32 blk_693fc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fc6:L693fc6:{bud-=1;NFSU2_TR(0x693fc6);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fc9(ARGS);}
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
PN u32 blk_693fc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fc9:L693fc9:{bud-=1;NFSU2_TR(0x693fc9);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fcb(ARGS);}
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
PN u32 blk_693fcb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fcb:L693fcb:{bud-=1;NFSU2_TR(0x693fcb);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fce(ARGS);}
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
PN u32 blk_693fce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fce:L693fce:{bud-=1;NFSU2_TR(0x693fce);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fd0(ARGS);}
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
PN u32 blk_693fd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fd0:L693fd0:{bud-=1;NFSU2_TR(0x693fd0);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fd3(ARGS);}
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
PN u32 blk_693fd3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fd3:L693fd3:{bud-=1;NFSU2_TR(0x693fd3);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fd5(ARGS);}
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
PN u32 blk_693fd5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fd5:L693fd5:{bud-=1;NFSU2_TR(0x693fd5);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fd8(ARGS);}
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
PN u32 blk_693fd8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fd8:L693fd8:{bud-=1;NFSU2_TR(0x693fd8);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fda(ARGS);}
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
PN u32 blk_693fda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fda:L693fda:{bud-=1;NFSU2_TR(0x693fda);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fdd(ARGS);}
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
PN u32 blk_693fdd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fdd:L693fdd:{bud-=1;NFSU2_TR(0x693fdd);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fdf(ARGS);}
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
PN u32 blk_693fdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fdf:L693fdf:{bud-=1;NFSU2_TR(0x693fdf);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fe2(ARGS);}
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
PN u32 blk_693fe2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fe2:L693fe2:{bud-=1;NFSU2_TR(0x693fe2);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fe4(ARGS);}
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
PN u32 blk_693fe4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fe4:L693fe4:{bud-=1;NFSU2_TR(0x693fe4);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fe7(ARGS);}
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
PN u32 blk_693fe7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fe7:L693fe7:{bud-=1;NFSU2_TR(0x693fe7);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_693fe9(ARGS);}
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
PN u32 blk_693fe9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fe9:L693fe9:{bud-=1;NFSU2_TR(0x693fe9);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693fec(ARGS);}
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
PN u32 blk_693fec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fec:L693fec:{bud-=1;NFSU2_TR(0x693fec);
__asm__ volatile(".byte 0xd9,0xe8"::);
{[[clang::musttail]] return blk_693fee(ARGS);}
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
PN u32 blk_693fee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693fee:L693fee:{bud-=1;NFSU2_TR(0x693fee);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693ff1(ARGS);}
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
PN u32 blk_693ff1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693ff1:L693ff1:{bud-=1;NFSU2_TR(0x693ff1);
__asm__ volatile(".byte 0xd9,0xe8"::);
{[[clang::musttail]] return blk_693ff3(ARGS);}
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
PN u32 blk_693ff3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693ff3:L693ff3:{bud-=1;NFSU2_TR(0x693ff3);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693ff6(ARGS);}
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
PN u32 blk_693ff6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693ff6:L693ff6:{bud-=1;NFSU2_TR(0x693ff6);
__asm__ volatile(".byte 0xd9,0xe8"::);
{[[clang::musttail]] return blk_693ff8(ARGS);}
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
PN u32 blk_693ff8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693ff8:L693ff8:{bud-=1;NFSU2_TR(0x693ff8);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_693ffb(ARGS);}
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
PN u32 blk_693ffb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693ffb:L693ffb:{bud-=1;NFSU2_TR(0x693ffb);
__asm__ volatile(".byte 0xd9,0xe8"::);
{[[clang::musttail]] return blk_693ffd(ARGS);}
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
PN u32 blk_693ffd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B693ffd:L693ffd:{bud-=1;NFSU2_TR(0x693ffd);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_694000(ARGS);}
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
PN u32 ent_693(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x693001:[[clang::musttail]] return blk_693001(c,a4,a0,a1,bud);
case 0x693195:[[clang::musttail]] return blk_693195(c,a4,a0,a1,bud);
case 0x693250:[[clang::musttail]] return blk_693250(c,a4,a0,a1,bud);
case 0x693258:[[clang::musttail]] return blk_693258(c,a4,a0,a1,bud);
case 0x69347b:[[clang::musttail]] return blk_69347b(c,a4,a0,a1,bud);
case 0x693650:[[clang::musttail]] return blk_693650(c,a4,a0,a1,bud);
case 0x6938c4:[[clang::musttail]] return blk_6938c4(c,a4,a0,a1,bud);
case 0x69397c:[[clang::musttail]] return blk_69397c(c,a4,a0,a1,bud);
case 0x693986:[[clang::musttail]] return blk_693986(c,a4,a0,a1,bud);
case 0x69399b:[[clang::musttail]] return blk_69399b(c,a4,a0,a1,bud);
case 0x6939a4:[[clang::musttail]] return blk_6939a4(c,a4,a0,a1,bud);
case 0x693a17:[[clang::musttail]] return blk_693a17(c,a4,a0,a1,bud);
case 0x693a80:[[clang::musttail]] return blk_693a80(c,a4,a0,a1,bud);
case 0x693adf:[[clang::musttail]] return blk_693adf(c,a4,a0,a1,bud);
case 0x693b50:[[clang::musttail]] return blk_693b50(c,a4,a0,a1,bud);
case 0x693c24:[[clang::musttail]] return blk_693c24(c,a4,a0,a1,bud);
case 0x693d0e:[[clang::musttail]] return blk_693d0e(c,a4,a0,a1,bud);
case 0x693d9b:[[clang::musttail]] return blk_693d9b(c,a4,a0,a1,bud);
case 0x693f64:[[clang::musttail]] return blk_693f64(c,a4,a0,a1,bud);
case 0x693f6f:[[clang::musttail]] return blk_693f6f(c,a4,a0,a1,bud);
case 0x693fb0:[[clang::musttail]] return blk_693fb0(c,a4,a0,a1,bud);
case 0x693fb2:[[clang::musttail]] return blk_693fb2(c,a4,a0,a1,bud);
case 0x693fb5:[[clang::musttail]] return blk_693fb5(c,a4,a0,a1,bud);
case 0x693fb7:[[clang::musttail]] return blk_693fb7(c,a4,a0,a1,bud);
case 0x693fba:[[clang::musttail]] return blk_693fba(c,a4,a0,a1,bud);
case 0x693fbc:[[clang::musttail]] return blk_693fbc(c,a4,a0,a1,bud);
case 0x693fbf:[[clang::musttail]] return blk_693fbf(c,a4,a0,a1,bud);
case 0x693fc1:[[clang::musttail]] return blk_693fc1(c,a4,a0,a1,bud);
case 0x693fc4:[[clang::musttail]] return blk_693fc4(c,a4,a0,a1,bud);
case 0x693fc6:[[clang::musttail]] return blk_693fc6(c,a4,a0,a1,bud);
case 0x693fc9:[[clang::musttail]] return blk_693fc9(c,a4,a0,a1,bud);
case 0x693fcb:[[clang::musttail]] return blk_693fcb(c,a4,a0,a1,bud);
case 0x693fce:[[clang::musttail]] return blk_693fce(c,a4,a0,a1,bud);
case 0x693fd0:[[clang::musttail]] return blk_693fd0(c,a4,a0,a1,bud);
case 0x693fd3:[[clang::musttail]] return blk_693fd3(c,a4,a0,a1,bud);
case 0x693fd5:[[clang::musttail]] return blk_693fd5(c,a4,a0,a1,bud);
case 0x693fd8:[[clang::musttail]] return blk_693fd8(c,a4,a0,a1,bud);
case 0x693fda:[[clang::musttail]] return blk_693fda(c,a4,a0,a1,bud);
case 0x693fdd:[[clang::musttail]] return blk_693fdd(c,a4,a0,a1,bud);
case 0x693fdf:[[clang::musttail]] return blk_693fdf(c,a4,a0,a1,bud);
case 0x693fe2:[[clang::musttail]] return blk_693fe2(c,a4,a0,a1,bud);
case 0x693fe4:[[clang::musttail]] return blk_693fe4(c,a4,a0,a1,bud);
case 0x693fe7:[[clang::musttail]] return blk_693fe7(c,a4,a0,a1,bud);
case 0x693fe9:[[clang::musttail]] return blk_693fe9(c,a4,a0,a1,bud);
case 0x693fec:[[clang::musttail]] return blk_693fec(c,a4,a0,a1,bud);
case 0x693fee:[[clang::musttail]] return blk_693fee(c,a4,a0,a1,bud);
case 0x693ff1:[[clang::musttail]] return blk_693ff1(c,a4,a0,a1,bud);
case 0x693ff3:[[clang::musttail]] return blk_693ff3(c,a4,a0,a1,bud);
case 0x693ff6:[[clang::musttail]] return blk_693ff6(c,a4,a0,a1,bud);
case 0x693ff8:[[clang::musttail]] return blk_693ff8(c,a4,a0,a1,bud);
case 0x693ffb:[[clang::musttail]] return blk_693ffb(c,a4,a0,a1,bud);
case 0x693ffd:[[clang::musttail]] return blk_693ffd(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_693(Cpu& c){u8* R=c.regs.data();return ent_693(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
