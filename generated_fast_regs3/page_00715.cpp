#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7033a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715b60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715b62(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715b93(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715bfb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715bfd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c02(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c04(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c09(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c46(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c4f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715cd4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715cf9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715d2f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715dcf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715dda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715e05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715e9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715eaa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715ed0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715ef3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715ef5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715f01(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715f03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715f0d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715f2a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715f98(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715fac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715fae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715fb3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715fb5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_760d7d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715bb1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715bc5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715be3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715c56(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715cdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715d38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715e0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715ed9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715fba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_715001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715001:L715001:{bud-=445;NFSU2_TR(0x715001);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd4ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715007:{NFSU2_TR(0x715007);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71500d:{NFSU2_TR(0x71500d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd6ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715013:{NFSU2_TR(0x715013);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715019:{NFSU2_TR(0x715019);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715020:{NFSU2_TR(0x715020);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715027:{NFSU2_TR(0x715027);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71502e:{NFSU2_TR(0x71502e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715035:{NFSU2_TR(0x715035);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71503c:{NFSU2_TR(0x71503c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcddull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715043:{NFSU2_TR(0x715043);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715049:{NFSU2_TR(0x715049);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715050:{NFSU2_TR(0x715050);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715057:{NFSU2_TR(0x715057);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71505e:{NFSU2_TR(0x71505e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715065:{NFSU2_TR(0x715065);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71506c:{NFSU2_TR(0x71506c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce4ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715072:{NFSU2_TR(0x715072);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715078:{NFSU2_TR(0x715078);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71507f:{NFSU2_TR(0x71507f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715085:{NFSU2_TR(0x715085);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce8ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71508b:{NFSU2_TR(0x71508b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715092:{NFSU2_TR(0x715092);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffceaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715099:{NFSU2_TR(0x715099);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcebull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150a0:{NFSU2_TR(0x7150a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcecull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150a6:{NFSU2_TR(0x7150a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcedull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150ac:{NFSU2_TR(0x7150ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffceeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150b3:{NFSU2_TR(0x7150b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcefull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150ba:{NFSU2_TR(0x7150ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150c1:{NFSU2_TR(0x7150c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150c7:{NFSU2_TR(0x7150c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150cd:{NFSU2_TR(0x7150cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf3ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150d3:{NFSU2_TR(0x7150d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150d9:{NFSU2_TR(0x7150d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150e0:{NFSU2_TR(0x7150e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150e7:{NFSU2_TR(0x7150e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150ee:{NFSU2_TR(0x7150ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150f5:{NFSU2_TR(0x7150f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf9ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150fb:{NFSU2_TR(0x7150fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715101:{NFSU2_TR(0x715101);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfbull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715107:{NFSU2_TR(0x715107);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71510e:{NFSU2_TR(0x71510e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715114:{NFSU2_TR(0x715114);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfeull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71511a:{NFSU2_TR(0x71511a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715120:{NFSU2_TR(0x715120);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd00ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715126:{NFSU2_TR(0x715126);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd01ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71512c:{NFSU2_TR(0x71512c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd02ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715132:{NFSU2_TR(0x715132);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd03ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715139:{NFSU2_TR(0x715139);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd04ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71513f:{NFSU2_TR(0x71513f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd05ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715145:{NFSU2_TR(0x715145);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd06ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71514c:{NFSU2_TR(0x71514c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd07ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715153:{NFSU2_TR(0x715153);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd08ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71515a:{NFSU2_TR(0x71515a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd09ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715161:{NFSU2_TR(0x715161);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715168:{NFSU2_TR(0x715168);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71516e:{NFSU2_TR(0x71516e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715175:{NFSU2_TR(0x715175);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71517c:{NFSU2_TR(0x71517c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715183:{NFSU2_TR(0x715183);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71518a:{NFSU2_TR(0x71518a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd10ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715190:{NFSU2_TR(0x715190);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd11ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715197:{NFSU2_TR(0x715197);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd12ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71519d:{NFSU2_TR(0x71519d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd13ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151a4:{NFSU2_TR(0x7151a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd14ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151ab:{NFSU2_TR(0x7151ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd15ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151b2:{NFSU2_TR(0x7151b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd16ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7151b8:{NFSU2_TR(0x7151b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd17ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151bf:{NFSU2_TR(0x7151bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7151c5:{NFSU2_TR(0x7151c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151cc:{NFSU2_TR(0x7151cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151d3:{NFSU2_TR(0x7151d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151da:{NFSU2_TR(0x7151da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151e1:{NFSU2_TR(0x7151e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151e8:{NFSU2_TR(0x7151e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151ef:{NFSU2_TR(0x7151ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7151f5:{NFSU2_TR(0x7151f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151fc:{NFSU2_TR(0x7151fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd21ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715203:{NFSU2_TR(0x715203);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd22ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715209:{NFSU2_TR(0x715209);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd23ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715210:{NFSU2_TR(0x715210);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd24ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715216:{NFSU2_TR(0x715216);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd25ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71521c:{NFSU2_TR(0x71521c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd26ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715223:{NFSU2_TR(0x715223);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd27ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715229:{NFSU2_TR(0x715229);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd28ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715230:{NFSU2_TR(0x715230);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715236:{NFSU2_TR(0x715236);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71523d:{NFSU2_TR(0x71523d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715244:{NFSU2_TR(0x715244);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71524a:{NFSU2_TR(0x71524a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715251:{NFSU2_TR(0x715251);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715258:{NFSU2_TR(0x715258);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71525e:{NFSU2_TR(0x71525e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd30ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715264:{NFSU2_TR(0x715264);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd31ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71526a:{NFSU2_TR(0x71526a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd32ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715271:{NFSU2_TR(0x715271);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd33ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715278:{NFSU2_TR(0x715278);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71527f:{NFSU2_TR(0x71527f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd35ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715286:{NFSU2_TR(0x715286);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd36ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71528c:{NFSU2_TR(0x71528c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd37ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715292:{NFSU2_TR(0x715292);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715299:{NFSU2_TR(0x715299);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd39ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152a0:{NFSU2_TR(0x7152a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152a7:{NFSU2_TR(0x7152a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152ad:{NFSU2_TR(0x7152ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152b4:{NFSU2_TR(0x7152b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3dull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152ba:{NFSU2_TR(0x7152ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152c0:{NFSU2_TR(0x7152c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152c7:{NFSU2_TR(0x7152c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152ce:{NFSU2_TR(0x7152ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd41ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152d5:{NFSU2_TR(0x7152d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd42ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152db:{NFSU2_TR(0x7152db);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd43ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152e2:{NFSU2_TR(0x7152e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd44ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152e8:{NFSU2_TR(0x7152e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd45ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152ef:{NFSU2_TR(0x7152ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd46ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152f5:{NFSU2_TR(0x7152f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd47ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152fc:{NFSU2_TR(0x7152fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd48ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715303:{NFSU2_TR(0x715303);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd49ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715309:{NFSU2_TR(0x715309);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715310:{NFSU2_TR(0x715310);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715317:{NFSU2_TR(0x715317);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71531e:{NFSU2_TR(0x71531e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715325:{NFSU2_TR(0x715325);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71532c:{NFSU2_TR(0x71532c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715333:{NFSU2_TR(0x715333);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd50ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715339:{NFSU2_TR(0x715339);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd51ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71533f:{NFSU2_TR(0x71533f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd52ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715346:{NFSU2_TR(0x715346);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd53ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71534d:{NFSU2_TR(0x71534d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd54ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715353:{NFSU2_TR(0x715353);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd55ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71535a:{NFSU2_TR(0x71535a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd56ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715360:{NFSU2_TR(0x715360);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd57ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715366:{NFSU2_TR(0x715366);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd58ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71536c:{NFSU2_TR(0x71536c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd59ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715373:{NFSU2_TR(0x715373);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715379:{NFSU2_TR(0x715379);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715380:{NFSU2_TR(0x715380);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715386:{NFSU2_TR(0x715386);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71538d:{NFSU2_TR(0x71538d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5eull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715393:{NFSU2_TR(0x715393);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71539a:{NFSU2_TR(0x71539a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd60ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153a1:{NFSU2_TR(0x7153a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd61ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153a7:{NFSU2_TR(0x7153a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd62ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153ad:{NFSU2_TR(0x7153ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd63ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153b4:{NFSU2_TR(0x7153b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd64ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153bb:{NFSU2_TR(0x7153bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd65ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153c1:{NFSU2_TR(0x7153c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd66ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153c8:{NFSU2_TR(0x7153c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd67ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153ce:{NFSU2_TR(0x7153ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd68ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153d5:{NFSU2_TR(0x7153d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd69ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153dc:{NFSU2_TR(0x7153dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153e2:{NFSU2_TR(0x7153e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153e8:{NFSU2_TR(0x7153e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153ee:{NFSU2_TR(0x7153ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153f4:{NFSU2_TR(0x7153f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6eull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153fa:{NFSU2_TR(0x7153fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715400:{NFSU2_TR(0x715400);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd70ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715407:{NFSU2_TR(0x715407);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd71ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71540e:{NFSU2_TR(0x71540e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd72ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715415:{NFSU2_TR(0x715415);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd73ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71541c:{NFSU2_TR(0x71541c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd74ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715423:{NFSU2_TR(0x715423);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd75ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71542a:{NFSU2_TR(0x71542a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd76ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715431:{NFSU2_TR(0x715431);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd77ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715437:{NFSU2_TR(0x715437);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd78ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71543e:{NFSU2_TR(0x71543e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd79ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715445:{NFSU2_TR(0x715445);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71544b:{NFSU2_TR(0x71544b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715452:{NFSU2_TR(0x715452);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715459:{NFSU2_TR(0x715459);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715460:{NFSU2_TR(0x715460);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715467:{NFSU2_TR(0x715467);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71546e:{NFSU2_TR(0x71546e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd80ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715475:{NFSU2_TR(0x715475);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd81ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71547b:{NFSU2_TR(0x71547b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd82ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715482:{NFSU2_TR(0x715482);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd83ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715489:{NFSU2_TR(0x715489);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd84ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71548f:{NFSU2_TR(0x71548f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd85ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715496:{NFSU2_TR(0x715496);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd86ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71549c:{NFSU2_TR(0x71549c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd87ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154a3:{NFSU2_TR(0x7154a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd88ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154aa:{NFSU2_TR(0x7154aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd89ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154b0:{NFSU2_TR(0x7154b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154b7:{NFSU2_TR(0x7154b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154be:{NFSU2_TR(0x7154be);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154c4:{NFSU2_TR(0x7154c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154cb:{NFSU2_TR(0x7154cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8eull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154d1:{NFSU2_TR(0x7154d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154d8:{NFSU2_TR(0x7154d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd90ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154df:{NFSU2_TR(0x7154df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd91ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154e6:{NFSU2_TR(0x7154e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd92ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154ed:{NFSU2_TR(0x7154ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd93ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154f3:{NFSU2_TR(0x7154f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd94ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154fa:{NFSU2_TR(0x7154fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd95ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715501:{NFSU2_TR(0x715501);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd96ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715508:{NFSU2_TR(0x715508);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd97ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71550e:{NFSU2_TR(0x71550e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd98ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715515:{NFSU2_TR(0x715515);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd99ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71551b:{NFSU2_TR(0x71551b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715522:{NFSU2_TR(0x715522);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715528:{NFSU2_TR(0x715528);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71552e:{NFSU2_TR(0x71552e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715534:{NFSU2_TR(0x715534);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71553b:{NFSU2_TR(0x71553b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715542:{NFSU2_TR(0x715542);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715549:{NFSU2_TR(0x715549);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda1ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71554f:{NFSU2_TR(0x71554f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715556:{NFSU2_TR(0x715556);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71555d:{NFSU2_TR(0x71555d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715564:{NFSU2_TR(0x715564);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71556b:{NFSU2_TR(0x71556b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715571:{NFSU2_TR(0x715571);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715578:{NFSU2_TR(0x715578);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71557f:{NFSU2_TR(0x71557f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda9ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715585:{NFSU2_TR(0x715585);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdaaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71558b:{NFSU2_TR(0x71558b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdabull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715591:{NFSU2_TR(0x715591);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715598:{NFSU2_TR(0x715598);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdadull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71559f:{NFSU2_TR(0x71559f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdaeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155a6:{NFSU2_TR(0x7155a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdafull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155ad:{NFSU2_TR(0x7155ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb0ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155b3:{NFSU2_TR(0x7155b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb1ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155b9:{NFSU2_TR(0x7155b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155bf:{NFSU2_TR(0x7155bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155c6:{NFSU2_TR(0x7155c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155cd:{NFSU2_TR(0x7155cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb5ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155d3:{NFSU2_TR(0x7155d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155da:{NFSU2_TR(0x7155da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155e0:{NFSU2_TR(0x7155e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155e6:{NFSU2_TR(0x7155e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155ed:{NFSU2_TR(0x7155ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155f3:{NFSU2_TR(0x7155f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbbull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155f9:{NFSU2_TR(0x7155f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155ff:{NFSU2_TR(0x7155ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbdull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715605:{NFSU2_TR(0x715605);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71560b:{NFSU2_TR(0x71560b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715612:{NFSU2_TR(0x715612);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc0ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715618:{NFSU2_TR(0x715618);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc1ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71561e:{NFSU2_TR(0x71561e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715625:{NFSU2_TR(0x715625);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71562b:{NFSU2_TR(0x71562b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715631:{NFSU2_TR(0x715631);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715638:{NFSU2_TR(0x715638);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71563f:{NFSU2_TR(0x71563f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715646:{NFSU2_TR(0x715646);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71564d:{NFSU2_TR(0x71564d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc9ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715653:{NFSU2_TR(0x715653);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71565a:{NFSU2_TR(0x71565a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcbull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715660:{NFSU2_TR(0x715660);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdccull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715666:{NFSU2_TR(0x715666);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71566d:{NFSU2_TR(0x71566d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdceull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715673:{NFSU2_TR(0x715673);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcfull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71567a:{NFSU2_TR(0x71567a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715681:{NFSU2_TR(0x715681);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715688:{NFSU2_TR(0x715688);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71568e:{NFSU2_TR(0x71568e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715695:{NFSU2_TR(0x715695);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71569b:{NFSU2_TR(0x71569b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156a2:{NFSU2_TR(0x7156a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd6ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156a8:{NFSU2_TR(0x7156a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156af:{NFSU2_TR(0x7156af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156b5:{NFSU2_TR(0x7156b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd9ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156bb:{NFSU2_TR(0x7156bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156c2:{NFSU2_TR(0x7156c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156c8:{NFSU2_TR(0x7156c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156cf:{NFSU2_TR(0x7156cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdddull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156d6:{NFSU2_TR(0x7156d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156dd:{NFSU2_TR(0x7156dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddfull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156e3:{NFSU2_TR(0x7156e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156ea:{NFSU2_TR(0x7156ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156f0:{NFSU2_TR(0x7156f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156f6:{NFSU2_TR(0x7156f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde3ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156fc:{NFSU2_TR(0x7156fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715702:{NFSU2_TR(0x715702);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde5ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715708:{NFSU2_TR(0x715708);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71570e:{NFSU2_TR(0x71570e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715715:{NFSU2_TR(0x715715);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71571c:{NFSU2_TR(0x71571c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde9ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715722:{NFSU2_TR(0x715722);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdeaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715728:{NFSU2_TR(0x715728);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdebull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71572f:{NFSU2_TR(0x71572f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715736:{NFSU2_TR(0x715736);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdedull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71573d:{NFSU2_TR(0x71573d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdeeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715744:{NFSU2_TR(0x715744);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdefull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71574b:{NFSU2_TR(0x71574b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715752:{NFSU2_TR(0x715752);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715759:{NFSU2_TR(0x715759);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71575f:{NFSU2_TR(0x71575f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715765:{NFSU2_TR(0x715765);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71576c:{NFSU2_TR(0x71576c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715772:{NFSU2_TR(0x715772);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715779:{NFSU2_TR(0x715779);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf7ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71577f:{NFSU2_TR(0x71577f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715786:{NFSU2_TR(0x715786);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf9ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71578c:{NFSU2_TR(0x71578c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfaull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715792:{NFSU2_TR(0x715792);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfbull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715799:{NFSU2_TR(0x715799);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfcull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71579f:{NFSU2_TR(0x71579f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157a6:{NFSU2_TR(0x7157a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfeull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157ac:{NFSU2_TR(0x7157ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdffull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157b2:{NFSU2_TR(0x7157b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157b9:{NFSU2_TR(0x7157b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe01ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157bf:{NFSU2_TR(0x7157bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe02ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157c6:{NFSU2_TR(0x7157c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe03ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157cc:{NFSU2_TR(0x7157cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe04ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157d3:{NFSU2_TR(0x7157d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe05ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157da:{NFSU2_TR(0x7157da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe06ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157e0:{NFSU2_TR(0x7157e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe07ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157e7:{NFSU2_TR(0x7157e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe08ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157ee:{NFSU2_TR(0x7157ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe09ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157f4:{NFSU2_TR(0x7157f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157fa:{NFSU2_TR(0x7157fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715801:{NFSU2_TR(0x715801);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715807:{NFSU2_TR(0x715807);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71580e:{NFSU2_TR(0x71580e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0eull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715814:{NFSU2_TR(0x715814);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71581a:{NFSU2_TR(0x71581a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe10ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715821:{NFSU2_TR(0x715821);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe11ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715828:{NFSU2_TR(0x715828);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe12ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71582f:{NFSU2_TR(0x71582f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715836:{NFSU2_TR(0x715836);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe14ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71583d:{NFSU2_TR(0x71583d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe15ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715843:{NFSU2_TR(0x715843);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe16ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715849:{NFSU2_TR(0x715849);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe17ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715850:{NFSU2_TR(0x715850);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe18ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715857:{NFSU2_TR(0x715857);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe19ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71585d:{NFSU2_TR(0x71585d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715864:{NFSU2_TR(0x715864);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71586a:{NFSU2_TR(0x71586a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715871:{NFSU2_TR(0x715871);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715877:{NFSU2_TR(0x715877);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71587e:{NFSU2_TR(0x71587e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715885:{NFSU2_TR(0x715885);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe20ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71588c:{NFSU2_TR(0x71588c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe21ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715892:{NFSU2_TR(0x715892);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe22ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715898:{NFSU2_TR(0x715898);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71589f:{NFSU2_TR(0x71589f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe24ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158a5:{NFSU2_TR(0x7158a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe25ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158ab:{NFSU2_TR(0x7158ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe26ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158b2:{NFSU2_TR(0x7158b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe27ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158b9:{NFSU2_TR(0x7158b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe28ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158c0:{NFSU2_TR(0x7158c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe29ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158c7:{NFSU2_TR(0x7158c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158ce:{NFSU2_TR(0x7158ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158d4:{NFSU2_TR(0x7158d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158db:{NFSU2_TR(0x7158db);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158e2:{NFSU2_TR(0x7158e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158e9:{NFSU2_TR(0x7158e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158ef:{NFSU2_TR(0x7158ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe30ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158f6:{NFSU2_TR(0x7158f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe31ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158fc:{NFSU2_TR(0x7158fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe32ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715903:{NFSU2_TR(0x715903);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe33ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71590a:{NFSU2_TR(0x71590a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe34ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715910:{NFSU2_TR(0x715910);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe35ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715916:{NFSU2_TR(0x715916);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe36ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71591d:{NFSU2_TR(0x71591d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe37ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715924:{NFSU2_TR(0x715924);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe38ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71592b:{NFSU2_TR(0x71592b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe39ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715931:{NFSU2_TR(0x715931);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715937:{NFSU2_TR(0x715937);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71593e:{NFSU2_TR(0x71593e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715944:{NFSU2_TR(0x715944);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71594b:{NFSU2_TR(0x71594b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715952:{NFSU2_TR(0x715952);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715959:{NFSU2_TR(0x715959);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe40ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715960:{NFSU2_TR(0x715960);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe41ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715966:{NFSU2_TR(0x715966);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe42ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71596d:{NFSU2_TR(0x71596d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe43ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715973:{NFSU2_TR(0x715973);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71597a:{NFSU2_TR(0x71597a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715981:{NFSU2_TR(0x715981);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe46ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715988:{NFSU2_TR(0x715988);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe47ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71598f:{NFSU2_TR(0x71598f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe48ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715996:{NFSU2_TR(0x715996);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe49ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71599c:{NFSU2_TR(0x71599c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159a3:{NFSU2_TR(0x7159a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159aa:{NFSU2_TR(0x7159aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159b1:{NFSU2_TR(0x7159b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159b8:{NFSU2_TR(0x7159b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159bf:{NFSU2_TR(0x7159bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159c5:{NFSU2_TR(0x7159c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159cc:{NFSU2_TR(0x7159cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe51ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159d2:{NFSU2_TR(0x7159d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe52ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159d8:{NFSU2_TR(0x7159d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe53ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159df:{NFSU2_TR(0x7159df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe54ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159e6:{NFSU2_TR(0x7159e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe55ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159ec:{NFSU2_TR(0x7159ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe56ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159f2:{NFSU2_TR(0x7159f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe57ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159f9:{NFSU2_TR(0x7159f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe58ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159ff:{NFSU2_TR(0x7159ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe59ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a05:{NFSU2_TR(0x715a05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a0b:{NFSU2_TR(0x715a0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a12:{NFSU2_TR(0x715a12);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a19:{NFSU2_TR(0x715a19);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a20:{NFSU2_TR(0x715a20);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a26:{NFSU2_TR(0x715a26);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a2d:{NFSU2_TR(0x715a2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe60ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a33:{NFSU2_TR(0x715a33);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe61ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a39:{NFSU2_TR(0x715a39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe62ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a3f:{NFSU2_TR(0x715a3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe63ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a46:{NFSU2_TR(0x715a46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe64ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a4d:{NFSU2_TR(0x715a4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a54:{NFSU2_TR(0x715a54);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe66ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a5a:{NFSU2_TR(0x715a5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe67ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a60:{NFSU2_TR(0x715a60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe68ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a66:{NFSU2_TR(0x715a66);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe69ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a6c:{NFSU2_TR(0x715a6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a73:{NFSU2_TR(0x715a73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a7a:{NFSU2_TR(0x715a7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a80:{NFSU2_TR(0x715a80);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a86:{NFSU2_TR(0x715a86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a8d:{NFSU2_TR(0x715a8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a94:{NFSU2_TR(0x715a94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a9b:{NFSU2_TR(0x715a9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe71ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aa2:{NFSU2_TR(0x715aa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe72ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aa9:{NFSU2_TR(0x715aa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe73ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715aaf:{NFSU2_TR(0x715aaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe74ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ab6:{NFSU2_TR(0x715ab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe75ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715abc:{NFSU2_TR(0x715abc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe76ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ac3:{NFSU2_TR(0x715ac3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe77ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aca:{NFSU2_TR(0x715aca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe78ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ad1:{NFSU2_TR(0x715ad1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe79ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715ad7:{NFSU2_TR(0x715ad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ade:{NFSU2_TR(0x715ade);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ae5:{NFSU2_TR(0x715ae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aec:{NFSU2_TR(0x715aec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715af3:{NFSU2_TR(0x715af3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715afa:{NFSU2_TR(0x715afa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b01:{NFSU2_TR(0x715b01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe80ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b08:{NFSU2_TR(0x715b08);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe81ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b0f:{NFSU2_TR(0x715b0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe82ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b16:{NFSU2_TR(0x715b16);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe83ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b1c:{NFSU2_TR(0x715b1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b22:{NFSU2_TR(0x715b22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe85ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b28:{NFSU2_TR(0x715b28);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe86ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b2e:{NFSU2_TR(0x715b2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe87ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b35:{NFSU2_TR(0x715b35);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe88ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b3b:{NFSU2_TR(0x715b3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b41:{NFSU2_TR(0x715b41);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715b43:{NFSU2_TR(0x715b43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe89ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b4a:{NFSU2_TR(0x715b4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b50:{NFSU2_TR(0x715b50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b57:{NFSU2_TR(0x715b57);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B715b59:{NFSU2_TR(0x715b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B715b5a:{NFSU2_TR(0x715b5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8dull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_715b60(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715b60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715b60:L715b60:{bud-=1;NFSU2_TR(0x715b60);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_715b62(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715b60u);}goto L715b60;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715b62(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715b62:L715b62:{bud-=15;NFSU2_TR(0x715b62);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B715b64:{NFSU2_TR(0x715b64);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B715b65:{NFSU2_TR(0x715b65);
w2(R+4260,u16(0xffffull));
}
B715b67:{NFSU2_TR(0x715b67);
u8 U[4];
w4(U+0,u32(0x3full));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715b69:{NFSU2_TR(0x715b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B715b6a:{NFSU2_TR(0x715b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B715b6d:{NFSU2_TR(0x715b6d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B715b6f:{NFSU2_TR(0x715b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715b72:{NFSU2_TR(0x715b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715b75:{NFSU2_TR(0x715b75);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B715b78:{NFSU2_TR(0x715b78);
{u32 ea_=u32(u32(8144400u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B715b7e:{NFSU2_TR(0x715b7e);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B715b84:{NFSU2_TR(0x715b84);
{u32 ea_=u32(r4(R+20)+u32(4294965208u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715b8a:{NFSU2_TR(0x715b8a);
{u32 ea_=u32(u32(8144392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715b90:{NFSU2_TR(0x715b90);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_715b93(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715b93(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715b93:L715b93:{bud-=8;NFSU2_TR(0x715b93);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715b96:{NFSU2_TR(0x715b96);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x18ull))));
}
B715b99:{NFSU2_TR(0x715b99);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715b9d:{NFSU2_TR(0x715b9d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B715b9f:{NFSU2_TR(0x715b9f);
{u32 ea_=u32(r4(G+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715ba3:{NFSU2_TR(0x715ba3);
{u32 ea_=u32(r4(R+20)+u32(4294965208u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715ba9:{NFSU2_TR(0x715ba9);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715bac:{NFSU2_TR(0x715bac);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x715bb1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7033a5u);}[[clang::musttail]] return blk_7033a5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715bb1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715bb1:L715bb1:{bud-=4;NFSU2_TR(0x715bb1);
{u32 ea_=u32(u32(8144384u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B715bb7:{NFSU2_TR(0x715bb7);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B715bba:{NFSU2_TR(0x715bba);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B715bc0:{NFSU2_TR(0x715bc0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x715bc5ull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715bc5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715bc5:L715bc5:{bud-=4;NFSU2_TR(0x715bc5);
__builtin_memmove((R+24),(G+0),4);
}
B715bc7:{NFSU2_TR(0x715bc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B715bc9:{NFSU2_TR(0x715bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715bcc:{NFSU2_TR(0x715bcc);
if(r1(F+6)){{[[clang::musttail]] return blk_715c0e(ARGS);}}
}
B715bce:L715bce:{bud-=3;NFSU2_TR(0x715bce);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B715bd0:{NFSU2_TR(0x715bd0);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B715bd2:{NFSU2_TR(0x715bd2);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_715c09(ARGS);}}
}
B715bd4:L715bd4:{bud-=3;NFSU2_TR(0x715bd4);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715bd7:{NFSU2_TR(0x715bd7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B715bde:{NFSU2_TR(0x715bde);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x715be3ull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715be3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715be3:L715be3:{bud-=10;NFSU2_TR(0x715be3);
__builtin_memmove((G+4),(R+24),4);
}
B715be5:{NFSU2_TR(0x715be5);
__builtin_memmove((R+8),(G+4),4);
}
B715be7:{NFSU2_TR(0x715be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715bea:{NFSU2_TR(0x715bea);
__builtin_memmove((R+8),(G+0),1);
}
B715bec:{NFSU2_TR(0x715bec);
__builtin_memmove((R+9),(R+8),1);
}
B715bee:{NFSU2_TR(0x715bee);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B715bf1:{NFSU2_TR(0x715bf1);
__builtin_memmove((G+0),(R+8),4);
}
B715bf3:{NFSU2_TR(0x715bf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715bf6:{NFSU2_TR(0x715bf6);
__builtin_memmove((G+0),(R+8),2);
}
B715bf9:{NFSU2_TR(0x715bf9);
__builtin_memmove((R+8),(R+24),4);
{[[clang::musttail]] return blk_715bfb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715bfb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715bfb:L715bfb:{bud-=1;NFSU2_TR(0x715bfb);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_715bfd(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715bfbu);}goto L715bfb;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715bfd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715bfd:L715bfd:{bud-=2;NFSU2_TR(0x715bfd);
__builtin_memmove((G+4),(R+8),4);
}
B715bff:{NFSU2_TR(0x715bff);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
{[[clang::musttail]] return blk_715c02(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c02(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c02:L715c02:{bud-=1;NFSU2_TR(0x715c02);
u8 U[18];
w1(U+17,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+17)){{[[clang::musttail]] return blk_715c04(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715c02u);}goto L715c02;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c04(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c04:L715c04:{bud-=2;NFSU2_TR(0x715c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715c07:{NFSU2_TR(0x715c07);
__builtin_memmove((G+0),(R+24),4);
{[[clang::musttail]] return blk_715c09(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c09(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c09:L715c09:{bud-=2;NFSU2_TR(0x715c09);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B715c0b:{NFSU2_TR(0x715c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_715c0e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c0e:L715c0e:{bud-=7;NFSU2_TR(0x715c0e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715c11:{NFSU2_TR(0x715c11);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B715c17:{NFSU2_TR(0x715c17);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B715c1a:{NFSU2_TR(0x715c1a);
{u32 ea_=u32(u32(8144376u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B715c20:{NFSU2_TR(0x715c20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B715c22:{NFSU2_TR(0x715c22);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B715c25:{NFSU2_TR(0x715c25);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715b93u);}[[clang::musttail]] return blk_715b93(ARGS);}}
}
B715c2b:L715c2b:{bud-=3;NFSU2_TR(0x715c2b);
w4(G+4,u32(0x100ull));
}
B715c30:{NFSU2_TR(0x715c30);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715c32:{NFSU2_TR(0x715c32);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_715c4f(ARGS);}}
}
B715c34:L715c34:{bud-=6;NFSU2_TR(0x715c34);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B715c36:{NFSU2_TR(0x715c36);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B715c3d:{NFSU2_TR(0x715c3d);
__builtin_memmove((R+28),(R+8),4);
}
B715c3f:{NFSU2_TR(0x715c3f);
__builtin_memmove((R+8),(G+4),4);
}
B715c41:{NFSU2_TR(0x715c41);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B715c44:{NFSU2_TR(0x715c44);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_715c46(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c46(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c46:L715c46:{bud-=1;NFSU2_TR(0x715c46);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_715c48(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715c46u);}goto L715c46;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c48:L715c48:{bud-=2;NFSU2_TR(0x715c48);
__builtin_memmove((G+4),(R+8),4);
}
B715c4a:{NFSU2_TR(0x715c4a);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
{[[clang::musttail]] return blk_715c4d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c4d:L715c4d:{bud-=1;NFSU2_TR(0x715c4d);
u8 U[18];
w1(U+17,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+17)){{[[clang::musttail]] return blk_715c4f(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715c4du);}goto L715c4d;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c4f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c4f:L715c4f:{bud-=1;NFSU2_TR(0x715c4f);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715c51(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c51:L715c51:{bud-=1;NFSU2_TR(0x715c51);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x715c56ull));
{[[clang::musttail]] return blk_760d7d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715c56(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715c56:L715c56:{bud-=6;NFSU2_TR(0x715c56);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B715c5b:{NFSU2_TR(0x715c5b);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((G+0),(U+12),1);
}
B715c62:{NFSU2_TR(0x715c62);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff7e8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B715c69:{NFSU2_TR(0x715c69);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B715c6a:{NFSU2_TR(0x715c6a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(F+0,u8((r4(U+6))<(u32(0x800ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x800ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x800ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B715c70:{NFSU2_TR(0x715c70);
if(r1(F+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x715c51u);}[[clang::musttail]] return blk_715c51(ARGS);}}
}
B715c72:L715c72:{bud-=39;NFSU2_TR(0x715c72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff680ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B715c78:{NFSU2_TR(0x715c78);
__builtin_memmove((G+4),(G+0),1);
}
B715c7a:{NFSU2_TR(0x715c7a);
w1(R+8,u8(0xfeull));
}
B715c7c:{NFSU2_TR(0x715c7c);
u8 U[4];
w2(U+0,u16(s16(s8(r1(G+0)))));
w2(U+2,u16(s16(s8(r1(R+8)))));
w2(G+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B715c7e:{NFSU2_TR(0x715c7e);
__builtin_memmove((R+8),(G+0),1);
}
B715c80:{NFSU2_TR(0x715c80);
__builtin_memmove((R+9),(R+8),1);
}
B715c82:{NFSU2_TR(0x715c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7c0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715c88:{NFSU2_TR(0x715c88);
w1(G+4,u8(0-u32(r1(G+4))));
}
B715c8a:{NFSU2_TR(0x715c8a);
__builtin_memmove((G+5),(G+4),1);
}
B715c8c:{NFSU2_TR(0x715c8c);
__builtin_memmove((G+0),(R+8),4);
}
B715c8e:{NFSU2_TR(0x715c8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715c91:{NFSU2_TR(0x715c91);
__builtin_memmove((G+0),(R+8),2);
}
B715c94:{NFSU2_TR(0x715c94);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c95:{NFSU2_TR(0x715c95);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c96:{NFSU2_TR(0x715c96);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c97:{NFSU2_TR(0x715c97);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c98:{NFSU2_TR(0x715c98);
__builtin_memmove((G+0),(G+4),1);
}
B715c9a:{NFSU2_TR(0x715c9a);
__builtin_memmove((R+8),(G+0),1);
}
B715c9c:{NFSU2_TR(0x715c9c);
__builtin_memmove((R+9),(R+8),1);
}
B715c9e:{NFSU2_TR(0x715c9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7d0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715ca4:{NFSU2_TR(0x715ca4);
__builtin_memmove((G+0),(R+8),4);
}
B715ca6:{NFSU2_TR(0x715ca6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715ca9:{NFSU2_TR(0x715ca9);
__builtin_memmove((G+0),(R+8),2);
}
B715cac:{NFSU2_TR(0x715cac);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cad:{NFSU2_TR(0x715cad);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cae:{NFSU2_TR(0x715cae);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715caf:{NFSU2_TR(0x715caf);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cb0:{NFSU2_TR(0x715cb0);
__builtin_memmove((G+0),(G+4),1);
}
B715cb2:{NFSU2_TR(0x715cb2);
__builtin_memmove((G+0),(G+4),4);
}
B715cb4:{NFSU2_TR(0x715cb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715cb7:{NFSU2_TR(0x715cb7);
__builtin_memmove((G+0),(G+4),2);
}
B715cba:{NFSU2_TR(0x715cba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715cc0:{NFSU2_TR(0x715cc0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc1:{NFSU2_TR(0x715cc1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc2:{NFSU2_TR(0x715cc2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc3:{NFSU2_TR(0x715cc3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc4:{NFSU2_TR(0x715cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715cc7:{NFSU2_TR(0x715cc7);
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
B715cc9:{NFSU2_TR(0x715cc9);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715d2f(ARGS);}}
}
B715ccb:L715ccb:{bud-=3;NFSU2_TR(0x715ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715cce:{NFSU2_TR(0x715cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715cd1:{NFSU2_TR(0x715cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715cd4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715cd4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715cd4:L715cd4:{bud-=3;NFSU2_TR(0x715cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715cd7:{NFSU2_TR(0x715cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715cda:{NFSU2_TR(0x715cda);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x715cdfull));
{[[clang::musttail]] return blk_760d7d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715cdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715cdf:L715cdf:{bud-=7;NFSU2_TR(0x715cdf);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B715ce4:{NFSU2_TR(0x715ce4);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff7e8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B715ceb:{NFSU2_TR(0x715ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715cee:{NFSU2_TR(0x715cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715cf1:{NFSU2_TR(0x715cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715cf4:{NFSU2_TR(0x715cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715cf7:{NFSU2_TR(0x715cf7);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_715cf9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715cf9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715cf9:L715cf9:{bud-=10;NFSU2_TR(0x715cf9);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B715cfd:{NFSU2_TR(0x715cfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715d04:{NFSU2_TR(0x715d04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715d0b:{NFSU2_TR(0x715d0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715d12:{NFSU2_TR(0x715d12);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B715d16:{NFSU2_TR(0x715d16);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4384))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4385))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4386))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4387))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4388))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4389))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4390))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4391))));
}
B715d19:{NFSU2_TR(0x715d19);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B715d1d:{NFSU2_TR(0x715d1d);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B715d20:{NFSU2_TR(0x715d20);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715d22:{NFSU2_TR(0x715d22);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715cf9u);}goto L715cf9;}}
}
B715d24:L715d24:{bud-=4;NFSU2_TR(0x715d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715d27:{NFSU2_TR(0x715d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(U+4),r4(G+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B715d2a:{NFSU2_TR(0x715d2a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+11,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B715d2d:{NFSU2_TR(0x715d2d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x715cd4u);}[[clang::musttail]] return blk_715cd4(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715d2f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715d2f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715d2f:L715d2f:{bud-=7;NFSU2_TR(0x715d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715d30:{NFSU2_TR(0x715d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715d31:{NFSU2_TR(0x715d31);
__builtin_memmove((G+16),(R+20),4);
}
B715d33:{NFSU2_TR(0x715d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715d34:{NFSU2_TR(0x715d34);
__builtin_memmove((G+16),(R+12),4);
}
B715d36:{NFSU2_TR(0x715d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715d37:{NFSU2_TR(0x715d37);
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
PN u32 blk_715d38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715d38:L715d38:{bud-=63;NFSU2_TR(0x715d38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715d39:{NFSU2_TR(0x715d39);
__builtin_memmove((R+12),(G+16),4);
}
B715d3b:{NFSU2_TR(0x715d3b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715d3c:{NFSU2_TR(0x715d3c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715d3d:{NFSU2_TR(0x715d3d);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B715d40:{NFSU2_TR(0x715d40);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B715d43:{NFSU2_TR(0x715d43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715d44:{NFSU2_TR(0x715d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B715d47:{NFSU2_TR(0x715d47);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d4b:{NFSU2_TR(0x715d4b);
__builtin_memmove((R+20),(G+16),4);
}
B715d4d:{NFSU2_TR(0x715d4d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x48ull))));
}
B715d50:{NFSU2_TR(0x715d50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715d51:{NFSU2_TR(0x715d51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715d52:{NFSU2_TR(0x715d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715d55:{NFSU2_TR(0x715d55);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715d5b:{NFSU2_TR(0x715d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715d5e:{NFSU2_TR(0x715d5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B715d61:{NFSU2_TR(0x715d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d64:{NFSU2_TR(0x715d64);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715d67:{NFSU2_TR(0x715d67);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B715d69:{NFSU2_TR(0x715d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d6c:{NFSU2_TR(0x715d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715d6f:{NFSU2_TR(0x715d6f);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B715d71:{NFSU2_TR(0x715d71);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715d77:{NFSU2_TR(0x715d77);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715d7d:{NFSU2_TR(0x715d7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B715d80:{NFSU2_TR(0x715d80);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(G+0,u8(u32(r1(G+0))+u32(r1(U+4))));
}
B715d83:{NFSU2_TR(0x715d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d86:{NFSU2_TR(0x715d86);
__builtin_memmove((G+4),(G+0),1);
}
B715d88:{NFSU2_TR(0x715d88);
__builtin_memmove((G+5),(G+4),1);
}
B715d8a:{NFSU2_TR(0x715d8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715d8d:{NFSU2_TR(0x715d8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B715d90:{NFSU2_TR(0x715d90);
__builtin_memmove((G+0),(G+4),4);
}
B715d92:{NFSU2_TR(0x715d92);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715d95:{NFSU2_TR(0x715d95);
__builtin_memmove((G+0),(G+4),2);
}
B715d98:{NFSU2_TR(0x715d98);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d99:{NFSU2_TR(0x715d99);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d9a:{NFSU2_TR(0x715d9a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d9b:{NFSU2_TR(0x715d9b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d9c:{NFSU2_TR(0x715d9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B715d9f:{NFSU2_TR(0x715d9f);
__builtin_memmove((G+4),(G+0),1);
}
B715da1:{NFSU2_TR(0x715da1);
__builtin_memmove((G+5),(G+4),1);
}
B715da3:{NFSU2_TR(0x715da3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715da6:{NFSU2_TR(0x715da6);
__builtin_memmove((G+0),(G+4),4);
}
B715da8:{NFSU2_TR(0x715da8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715dab:{NFSU2_TR(0x715dab);
__builtin_memmove((G+0),(G+4),2);
}
B715dae:{NFSU2_TR(0x715dae);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715daf:{NFSU2_TR(0x715daf);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715db0:{NFSU2_TR(0x715db0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715db1:{NFSU2_TR(0x715db1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715db2:{NFSU2_TR(0x715db2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B715db5:{NFSU2_TR(0x715db5);
__builtin_memmove((G+4),(G+0),1);
}
B715db7:{NFSU2_TR(0x715db7);
__builtin_memmove((G+5),(G+4),1);
}
B715db9:{NFSU2_TR(0x715db9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715dbc:{NFSU2_TR(0x715dbc);
__builtin_memmove((G+0),(G+4),4);
}
B715dbe:{NFSU2_TR(0x715dbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715dc1:{NFSU2_TR(0x715dc1);
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
B715dc3:{NFSU2_TR(0x715dc3);
__builtin_memmove((G+0),(G+4),2);
}
B715dc6:{NFSU2_TR(0x715dc6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dc7:{NFSU2_TR(0x715dc7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dc8:{NFSU2_TR(0x715dc8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dc9:{NFSU2_TR(0x715dc9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dca:{NFSU2_TR(0x715dca);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715e05(ARGS);}}
}
B715dcc:L715dcc:{bud-=1;NFSU2_TR(0x715dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_715dcf(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715dcf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715dcf:L715dcf:{bud-=4;NFSU2_TR(0x715dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715dd2:{NFSU2_TR(0x715dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715dd5:{NFSU2_TR(0x715dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715dd8:{NFSU2_TR(0x715dd8);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_715dda(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715dda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715dda:L715dda:{bud-=8;NFSU2_TR(0x715dda);
u8 U[24];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4672),(U+8),16);
}
B715ddf:{NFSU2_TR(0x715ddf);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B715de4:{NFSU2_TR(0x715de4);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::paddusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B715de9:{NFSU2_TR(0x715de9);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B715dee:{NFSU2_TR(0x715dee);
u8 U[24];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+4))),(U+8),16);
}
B715df3:{NFSU2_TR(0x715df3);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B715df6:{NFSU2_TR(0x715df6);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715df8:{NFSU2_TR(0x715df8);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715ddau);}goto L715dda;}}
}
B715dfa:L715dfa:{bud-=4;NFSU2_TR(0x715dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715dfd:{NFSU2_TR(0x715dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715e00:{NFSU2_TR(0x715e00);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+11,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B715e03:{NFSU2_TR(0x715e03);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715dcfu);}[[clang::musttail]] return blk_715dcf(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715e05(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715e05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715e05:L715e05:{bud-=7;NFSU2_TR(0x715e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e06:{NFSU2_TR(0x715e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715e07:{NFSU2_TR(0x715e07);
__builtin_memmove((G+16),(R+20),4);
}
B715e09:{NFSU2_TR(0x715e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715e0a:{NFSU2_TR(0x715e0a);
__builtin_memmove((G+16),(R+12),4);
}
B715e0c:{NFSU2_TR(0x715e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715e0d:{NFSU2_TR(0x715e0d);
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
PN u32 blk_715e0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715e0e:L715e0e:{bud-=57;NFSU2_TR(0x715e0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715e0f:{NFSU2_TR(0x715e0f);
__builtin_memmove((R+12),(G+16),4);
}
B715e11:{NFSU2_TR(0x715e11);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715e12:{NFSU2_TR(0x715e12);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715e13:{NFSU2_TR(0x715e13);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff8ull))));
}
B715e16:{NFSU2_TR(0x715e16);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B715e19:{NFSU2_TR(0x715e19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715e1a:{NFSU2_TR(0x715e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B715e1d:{NFSU2_TR(0x715e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e21:{NFSU2_TR(0x715e21);
__builtin_memmove((R+20),(G+16),4);
}
B715e23:{NFSU2_TR(0x715e23);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x40ull))));
}
B715e26:{NFSU2_TR(0x715e26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715e27:{NFSU2_TR(0x715e27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715e28:{NFSU2_TR(0x715e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715e2b:{NFSU2_TR(0x715e2b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715e31:{NFSU2_TR(0x715e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715e34:{NFSU2_TR(0x715e34);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B715e37:{NFSU2_TR(0x715e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e3a:{NFSU2_TR(0x715e3a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715e3d:{NFSU2_TR(0x715e3d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B715e3f:{NFSU2_TR(0x715e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e42:{NFSU2_TR(0x715e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715e45:{NFSU2_TR(0x715e45);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B715e47:{NFSU2_TR(0x715e47);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715e4d:{NFSU2_TR(0x715e4d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715e53:{NFSU2_TR(0x715e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B715e56:{NFSU2_TR(0x715e56);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(G+0,u8(u32(r1(G+0))+u32(r1(U+4))));
}
B715e59:{NFSU2_TR(0x715e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e5c:{NFSU2_TR(0x715e5c);
__builtin_memmove((G+4),(G+0),1);
}
B715e5e:{NFSU2_TR(0x715e5e);
__builtin_memmove((G+5),(G+4),1);
}
B715e60:{NFSU2_TR(0x715e60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e63:{NFSU2_TR(0x715e63);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B715e66:{NFSU2_TR(0x715e66);
__builtin_memmove((G+0),(G+4),4);
}
B715e68:{NFSU2_TR(0x715e68);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715e6b:{NFSU2_TR(0x715e6b);
__builtin_memmove((G+0),(G+4),2);
}
B715e6e:{NFSU2_TR(0x715e6e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e6f:{NFSU2_TR(0x715e6f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e70:{NFSU2_TR(0x715e70);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B715e73:{NFSU2_TR(0x715e73);
__builtin_memmove((G+4),(G+0),1);
}
B715e75:{NFSU2_TR(0x715e75);
__builtin_memmove((G+5),(G+4),1);
}
B715e77:{NFSU2_TR(0x715e77);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e7a:{NFSU2_TR(0x715e7a);
__builtin_memmove((G+0),(G+4),4);
}
B715e7c:{NFSU2_TR(0x715e7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715e7f:{NFSU2_TR(0x715e7f);
__builtin_memmove((G+0),(G+4),2);
}
B715e82:{NFSU2_TR(0x715e82);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e83:{NFSU2_TR(0x715e83);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e84:{NFSU2_TR(0x715e84);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B715e87:{NFSU2_TR(0x715e87);
__builtin_memmove((G+4),(G+0),1);
}
B715e89:{NFSU2_TR(0x715e89);
__builtin_memmove((G+5),(G+4),1);
}
B715e8b:{NFSU2_TR(0x715e8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e8e:{NFSU2_TR(0x715e8e);
__builtin_memmove((G+0),(G+4),4);
}
B715e90:{NFSU2_TR(0x715e90);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B715e93:{NFSU2_TR(0x715e93);
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
B715e95:{NFSU2_TR(0x715e95);
__builtin_memmove((G+0),(G+4),2);
}
B715e98:{NFSU2_TR(0x715e98);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e99:{NFSU2_TR(0x715e99);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e9a:{NFSU2_TR(0x715e9a);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715ed0(ARGS);}}
}
B715e9c:L715e9c:{bud-=1;NFSU2_TR(0x715e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_715e9f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715e9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715e9f:L715e9f:{bud-=4;NFSU2_TR(0x715e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715ea2:{NFSU2_TR(0x715ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715ea5:{NFSU2_TR(0x715ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715ea8:{NFSU2_TR(0x715ea8);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_715eaa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715eaa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715eaa:L715eaa:{bud-=8;NFSU2_TR(0x715eaa);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B715eae:{NFSU2_TR(0x715eae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715eb2:{NFSU2_TR(0x715eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715eb6:{NFSU2_TR(0x715eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715eba:{NFSU2_TR(0x715eba);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B715ebe:{NFSU2_TR(0x715ebe);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B715ec1:{NFSU2_TR(0x715ec1);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715ec3:{NFSU2_TR(0x715ec3);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715eaau);}goto L715eaa;}}
}
B715ec5:L715ec5:{bud-=4;NFSU2_TR(0x715ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715ec8:{NFSU2_TR(0x715ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715ecb:{NFSU2_TR(0x715ecb);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+11,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B715ece:{NFSU2_TR(0x715ece);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715e9fu);}[[clang::musttail]] return blk_715e9f(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715ed0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715ed0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715ed0:L715ed0:{bud-=7;NFSU2_TR(0x715ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715ed1:{NFSU2_TR(0x715ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715ed2:{NFSU2_TR(0x715ed2);
__builtin_memmove((G+16),(R+20),4);
}
B715ed4:{NFSU2_TR(0x715ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715ed5:{NFSU2_TR(0x715ed5);
__builtin_memmove((G+16),(R+12),4);
}
B715ed7:{NFSU2_TR(0x715ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715ed8:{NFSU2_TR(0x715ed8);
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
PN u32 blk_715ed9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715ed9:L715ed9:{bud-=12;NFSU2_TR(0x715ed9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715eda:{NFSU2_TR(0x715eda);
__builtin_memmove((R+20),(G+16),4);
}
B715edc:{NFSU2_TR(0x715edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715edf:{NFSU2_TR(0x715edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715ee0:{NFSU2_TR(0x715ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715ee1:{NFSU2_TR(0x715ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715ee4:{NFSU2_TR(0x715ee4);
__builtin_memmove((G+0),(G+4),4);
}
B715ee6:{NFSU2_TR(0x715ee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B715ee9:{NFSU2_TR(0x715ee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715eea:{NFSU2_TR(0x715eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715eed:{NFSU2_TR(0x715eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715ef0:{NFSU2_TR(0x715ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_715ef3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715ef3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715ef3:L715ef3:{bud-=1;NFSU2_TR(0x715ef3);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_715ef5(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(F+10)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715ef3u);}goto L715ef3;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715ef5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715ef5:L715ef5:{bud-=5;NFSU2_TR(0x715ef5);
__builtin_memmove((G+4),(G+0),4);
}
B715ef7:{NFSU2_TR(0x715ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715efa:{NFSU2_TR(0x715efa);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
}
B715efd:{NFSU2_TR(0x715efd);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B715efe:{NFSU2_TR(0x715efe);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715f01(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715f01(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715f01:L715f01:{bud-=1;NFSU2_TR(0x715f01);
u8 U[35];
w1(U+34,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+34)){{[[clang::musttail]] return blk_715f03(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(F+10)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715f01u);}goto L715f01;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715f03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715f03:L715f03:{bud-=1;NFSU2_TR(0x715f03);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_715f98(ARGS);}}
}
B715f09:L715f09:{bud-=2;NFSU2_TR(0x715f09);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B715f0a:{NFSU2_TR(0x715f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_715f0d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715f0d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715f0d:L715f0d:{bud-=10;NFSU2_TR(0x715f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715f10:{NFSU2_TR(0x715f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B715f13:{NFSU2_TR(0x715f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715f16:{NFSU2_TR(0x715f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715f19:{NFSU2_TR(0x715f19);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B715f1b:{NFSU2_TR(0x715f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715f1e:{NFSU2_TR(0x715f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B715f21:{NFSU2_TR(0x715f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B715f24:{NFSU2_TR(0x715f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B715f27:{NFSU2_TR(0x715f27);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
{[[clang::musttail]] return blk_715f2a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715f2a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715f2a:L715f2a:{bud-=27;NFSU2_TR(0x715f2a);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B715f2e:{NFSU2_TR(0x715f2e);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B715f32:{NFSU2_TR(0x715f32);
__builtin_memmove((R+4400),(R+4352),8);
}
B715f35:{NFSU2_TR(0x715f35);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B715f38:{NFSU2_TR(0x715f38);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B715f3c:{NFSU2_TR(0x715f3c);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B715f3f:{NFSU2_TR(0x715f3f);
__builtin_memmove((R+4416),(R+4368),8);
}
B715f42:{NFSU2_TR(0x715f42);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B715f45:{NFSU2_TR(0x715f45);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175f0),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B715f4c:{NFSU2_TR(0x715f4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175f0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B715f53:{NFSU2_TR(0x715f53);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4468),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4469),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4470),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4471),1);
}
B715f56:{NFSU2_TR(0x715f56);
{wv<8>((R+4368),uo::psllw<8>(rv<8>((R+4368)),V(0x1ull)));}
}
B715f5a:{NFSU2_TR(0x715f5a);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B715f5e:{NFSU2_TR(0x715f5e);
__builtin_memmove((R+4432),(R+4384),8);
}
B715f61:{NFSU2_TR(0x715f61);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B715f64:{NFSU2_TR(0x715f64);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B715f67:{NFSU2_TR(0x715f67);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B715f6a:{NFSU2_TR(0x715f6a);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B715f6d:{NFSU2_TR(0x715f6d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B715f70:{NFSU2_TR(0x715f70);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B715f73:{NFSU2_TR(0x715f73);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x2ull)));}
}
B715f77:{NFSU2_TR(0x715f77);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x2ull)));}
}
B715f7b:{NFSU2_TR(0x715f7b);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B715f7e:{NFSU2_TR(0x715f7e);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B715f82:{NFSU2_TR(0x715f82);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B715f85:{NFSU2_TR(0x715f85);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715f87:{NFSU2_TR(0x715f87);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715f2au);}goto L715f2a;}}
}
B715f89:L715f89:{bud-=4;NFSU2_TR(0x715f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715f8c:{NFSU2_TR(0x715f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B715f8f:{NFSU2_TR(0x715f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B715f92:{NFSU2_TR(0x715f92);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x715f0du);}[[clang::musttail]] return blk_715f0d(ARGS);}}
{[[clang::musttail]] return blk_715f98(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715f98(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715f98:L715f98:{bud-=7;NFSU2_TR(0x715f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715f9b:{NFSU2_TR(0x715f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715f9e:{NFSU2_TR(0x715f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B715fa1:{NFSU2_TR(0x715fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715fa4:{NFSU2_TR(0x715fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B715fa7:{NFSU2_TR(0x715fa7);
__builtin_memmove((G+0),(G+4),4);
}
B715fa9:{NFSU2_TR(0x715fa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
{[[clang::musttail]] return blk_715fac(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715fac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715fac:L715fac:{bud-=1;NFSU2_TR(0x715fac);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_715fae(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(F+10)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715facu);}goto L715fac;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715fae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715fae:L715fae:{bud-=2;NFSU2_TR(0x715fae);
__builtin_memmove((G+4),(G+0),4);
}
B715fb0:{NFSU2_TR(0x715fb0);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_715fb3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715fb3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715fb3:L715fb3:{bud-=1;NFSU2_TR(0x715fb3);
u8 U[35];
w1(U+34,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+34)){{[[clang::musttail]] return blk_715fb5(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(F+10)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(bud<=0,0)){EXIT(0x715fb3u);}goto L715fb3;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_715fb5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715fb5:L715fb5:{bud-=5;NFSU2_TR(0x715fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715fb6:{NFSU2_TR(0x715fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715fb7:{NFSU2_TR(0x715fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715fb8:{NFSU2_TR(0x715fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715fb9:{NFSU2_TR(0x715fb9);
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
PN u32 blk_715fba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B715fba:L715fba:{bud-=26;NFSU2_TR(0x715fba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715fbb:{NFSU2_TR(0x715fbb);
__builtin_memmove((R+12),(G+16),4);
}
B715fbd:{NFSU2_TR(0x715fbd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715fbe:{NFSU2_TR(0x715fbe);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715fbf:{NFSU2_TR(0x715fbf);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B715fc2:{NFSU2_TR(0x715fc2);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B715fc5:{NFSU2_TR(0x715fc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715fc6:{NFSU2_TR(0x715fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B715fc9:{NFSU2_TR(0x715fc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fcd:{NFSU2_TR(0x715fcd);
__builtin_memmove((R+20),(G+16),4);
}
B715fcf:{NFSU2_TR(0x715fcf);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x1b4ull))));
}
B715fd5:{NFSU2_TR(0x715fd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715fd6:{NFSU2_TR(0x715fd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715fd7:{NFSU2_TR(0x715fd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B715fd8:{NFSU2_TR(0x715fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715fdb:{NFSU2_TR(0x715fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B715fde:{NFSU2_TR(0x715fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fe1:{NFSU2_TR(0x715fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715fe4:{NFSU2_TR(0x715fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fe7:{NFSU2_TR(0x715fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B715fea:{NFSU2_TR(0x715fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fed:{NFSU2_TR(0x715fed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((G+0),(U+0),4);
}
B715ff3:{NFSU2_TR(0x715ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715ff6:{NFSU2_TR(0x715ff6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
__builtin_memmove((G+0),(U+0),4);
}
B715ffc:{NFSU2_TR(0x715ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fff:{NFSU2_TR(0x715fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{EXIT(0x716002u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_715(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x715b60:[[clang::musttail]] return blk_715b60(c,a4,a0,a1,bud);
case 0x715b62:[[clang::musttail]] return blk_715b62(c,a4,a0,a1,bud);
case 0x715b93:[[clang::musttail]] return blk_715b93(c,a4,a0,a1,bud);
case 0x715bb1:[[clang::musttail]] return blk_715bb1(c,a4,a0,a1,bud);
case 0x715bc5:[[clang::musttail]] return blk_715bc5(c,a4,a0,a1,bud);
case 0x715be3:[[clang::musttail]] return blk_715be3(c,a4,a0,a1,bud);
case 0x715bfb:[[clang::musttail]] return blk_715bfb(c,a4,a0,a1,bud);
case 0x715bfd:[[clang::musttail]] return blk_715bfd(c,a4,a0,a1,bud);
case 0x715c02:[[clang::musttail]] return blk_715c02(c,a4,a0,a1,bud);
case 0x715c04:[[clang::musttail]] return blk_715c04(c,a4,a0,a1,bud);
case 0x715c09:[[clang::musttail]] return blk_715c09(c,a4,a0,a1,bud);
case 0x715c0e:[[clang::musttail]] return blk_715c0e(c,a4,a0,a1,bud);
case 0x715c46:[[clang::musttail]] return blk_715c46(c,a4,a0,a1,bud);
case 0x715c48:[[clang::musttail]] return blk_715c48(c,a4,a0,a1,bud);
case 0x715c4d:[[clang::musttail]] return blk_715c4d(c,a4,a0,a1,bud);
case 0x715c4f:[[clang::musttail]] return blk_715c4f(c,a4,a0,a1,bud);
case 0x715c51:[[clang::musttail]] return blk_715c51(c,a4,a0,a1,bud);
case 0x715c56:[[clang::musttail]] return blk_715c56(c,a4,a0,a1,bud);
case 0x715cd4:[[clang::musttail]] return blk_715cd4(c,a4,a0,a1,bud);
case 0x715cdf:[[clang::musttail]] return blk_715cdf(c,a4,a0,a1,bud);
case 0x715cf9:[[clang::musttail]] return blk_715cf9(c,a4,a0,a1,bud);
case 0x715d2f:[[clang::musttail]] return blk_715d2f(c,a4,a0,a1,bud);
case 0x715d38:[[clang::musttail]] return blk_715d38(c,a4,a0,a1,bud);
case 0x715dcf:[[clang::musttail]] return blk_715dcf(c,a4,a0,a1,bud);
case 0x715dda:[[clang::musttail]] return blk_715dda(c,a4,a0,a1,bud);
case 0x715e05:[[clang::musttail]] return blk_715e05(c,a4,a0,a1,bud);
case 0x715e0e:[[clang::musttail]] return blk_715e0e(c,a4,a0,a1,bud);
case 0x715e9f:[[clang::musttail]] return blk_715e9f(c,a4,a0,a1,bud);
case 0x715eaa:[[clang::musttail]] return blk_715eaa(c,a4,a0,a1,bud);
case 0x715ed0:[[clang::musttail]] return blk_715ed0(c,a4,a0,a1,bud);
case 0x715ed9:[[clang::musttail]] return blk_715ed9(c,a4,a0,a1,bud);
case 0x715ef3:[[clang::musttail]] return blk_715ef3(c,a4,a0,a1,bud);
case 0x715ef5:[[clang::musttail]] return blk_715ef5(c,a4,a0,a1,bud);
case 0x715f01:[[clang::musttail]] return blk_715f01(c,a4,a0,a1,bud);
case 0x715f03:[[clang::musttail]] return blk_715f03(c,a4,a0,a1,bud);
case 0x715f0d:[[clang::musttail]] return blk_715f0d(c,a4,a0,a1,bud);
case 0x715f2a:[[clang::musttail]] return blk_715f2a(c,a4,a0,a1,bud);
case 0x715f98:[[clang::musttail]] return blk_715f98(c,a4,a0,a1,bud);
case 0x715fac:[[clang::musttail]] return blk_715fac(c,a4,a0,a1,bud);
case 0x715fae:[[clang::musttail]] return blk_715fae(c,a4,a0,a1,bud);
case 0x715fb3:[[clang::musttail]] return blk_715fb3(c,a4,a0,a1,bud);
case 0x715fb5:[[clang::musttail]] return blk_715fb5(c,a4,a0,a1,bud);
case 0x715fba:[[clang::musttail]] return blk_715fba(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_715(Cpu& c){u8* R=c.regs.data();return ent_715(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
