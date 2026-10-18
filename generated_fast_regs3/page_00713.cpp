#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_713004(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B713004:L713004:{bud-=618;NFSU2_TR(0x713004);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff801ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71300a:{NFSU2_TR(0x71300a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff802ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713010:{NFSU2_TR(0x713010);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff803ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713016:{NFSU2_TR(0x713016);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff804ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71301d:{NFSU2_TR(0x71301d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff805ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713024:{NFSU2_TR(0x713024);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff806ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71302b:{NFSU2_TR(0x71302b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff807ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713032:{NFSU2_TR(0x713032);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff808ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713038:{NFSU2_TR(0x713038);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff809ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71303e:{NFSU2_TR(0x71303e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713045:{NFSU2_TR(0x713045);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71304c:{NFSU2_TR(0x71304c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713053:{NFSU2_TR(0x713053);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71305a:{NFSU2_TR(0x71305a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713060:{NFSU2_TR(0x713060);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713066:{NFSU2_TR(0x713066);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff810ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71306d:{NFSU2_TR(0x71306d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff811ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713074:{NFSU2_TR(0x713074);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff812ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71307b:{NFSU2_TR(0x71307b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff813ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713082:{NFSU2_TR(0x713082);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff814ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713088:{NFSU2_TR(0x713088);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff815ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71308f:{NFSU2_TR(0x71308f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff816ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713095:{NFSU2_TR(0x713095);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff817ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71309b:{NFSU2_TR(0x71309b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff818ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130a2:{NFSU2_TR(0x7130a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff819ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130a8:{NFSU2_TR(0x7130a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130af:{NFSU2_TR(0x7130af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130b6:{NFSU2_TR(0x7130b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130bd:{NFSU2_TR(0x7130bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130c4:{NFSU2_TR(0x7130c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130cb:{NFSU2_TR(0x7130cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130d1:{NFSU2_TR(0x7130d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff820ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130d7:{NFSU2_TR(0x7130d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff821ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130dd:{NFSU2_TR(0x7130dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff822ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130e4:{NFSU2_TR(0x7130e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff823ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130eb:{NFSU2_TR(0x7130eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff824ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130f1:{NFSU2_TR(0x7130f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff825ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130f8:{NFSU2_TR(0x7130f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff826ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130ff:{NFSU2_TR(0x7130ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff827ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713106:{NFSU2_TR(0x713106);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff828ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71310d:{NFSU2_TR(0x71310d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff829ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713114:{NFSU2_TR(0x713114);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71311a:{NFSU2_TR(0x71311a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713120:{NFSU2_TR(0x713120);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713126:{NFSU2_TR(0x713126);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71312d:{NFSU2_TR(0x71312d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713134:{NFSU2_TR(0x713134);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71313b:{NFSU2_TR(0x71313b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff830ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713141:{NFSU2_TR(0x713141);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff831ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713147:{NFSU2_TR(0x713147);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff832ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71314e:{NFSU2_TR(0x71314e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff833ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713154:{NFSU2_TR(0x713154);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff834ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71315a:{NFSU2_TR(0x71315a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff835ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713161:{NFSU2_TR(0x713161);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff836ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713168:{NFSU2_TR(0x713168);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff837ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71316f:{NFSU2_TR(0x71316f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff838ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713175:{NFSU2_TR(0x713175);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff839ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71317b:{NFSU2_TR(0x71317b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713182:{NFSU2_TR(0x713182);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713189:{NFSU2_TR(0x713189);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71318f:{NFSU2_TR(0x71318f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83dull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713195:{NFSU2_TR(0x713195);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71319c:{NFSU2_TR(0x71319c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131a2:{NFSU2_TR(0x7131a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff840ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131a8:{NFSU2_TR(0x7131a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff841ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131af:{NFSU2_TR(0x7131af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff842ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131b5:{NFSU2_TR(0x7131b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff843ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131bc:{NFSU2_TR(0x7131bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff844ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131c3:{NFSU2_TR(0x7131c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff845ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131c9:{NFSU2_TR(0x7131c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff846ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131d0:{NFSU2_TR(0x7131d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff847ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131d7:{NFSU2_TR(0x7131d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff848ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131dd:{NFSU2_TR(0x7131dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff849ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131e4:{NFSU2_TR(0x7131e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131eb:{NFSU2_TR(0x7131eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131f1:{NFSU2_TR(0x7131f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131f8:{NFSU2_TR(0x7131f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131ff:{NFSU2_TR(0x7131ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713206:{NFSU2_TR(0x713206);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71320d:{NFSU2_TR(0x71320d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff850ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713214:{NFSU2_TR(0x713214);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff851ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71321a:{NFSU2_TR(0x71321a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff852ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713220:{NFSU2_TR(0x713220);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff853ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713227:{NFSU2_TR(0x713227);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff854ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71322e:{NFSU2_TR(0x71322e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff855ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713235:{NFSU2_TR(0x713235);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff856ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71323c:{NFSU2_TR(0x71323c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff857ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713243:{NFSU2_TR(0x713243);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff858ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71324a:{NFSU2_TR(0x71324a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff859ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713250:{NFSU2_TR(0x713250);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713257:{NFSU2_TR(0x713257);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71325e:{NFSU2_TR(0x71325e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713265:{NFSU2_TR(0x713265);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71326b:{NFSU2_TR(0x71326b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713272:{NFSU2_TR(0x713272);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713278:{NFSU2_TR(0x713278);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff860ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71327f:{NFSU2_TR(0x71327f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff861ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713285:{NFSU2_TR(0x713285);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff862ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71328b:{NFSU2_TR(0x71328b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff863ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713291:{NFSU2_TR(0x713291);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff864ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713298:{NFSU2_TR(0x713298);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff865ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71329f:{NFSU2_TR(0x71329f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff866ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132a6:{NFSU2_TR(0x7132a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff867ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132ac:{NFSU2_TR(0x7132ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff868ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132b3:{NFSU2_TR(0x7132b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff869ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132b9:{NFSU2_TR(0x7132b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132c0:{NFSU2_TR(0x7132c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132c7:{NFSU2_TR(0x7132c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132cd:{NFSU2_TR(0x7132cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132d4:{NFSU2_TR(0x7132d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132da:{NFSU2_TR(0x7132da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132e1:{NFSU2_TR(0x7132e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff870ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132e8:{NFSU2_TR(0x7132e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff871ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132ef:{NFSU2_TR(0x7132ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff872ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132f5:{NFSU2_TR(0x7132f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff873ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132fb:{NFSU2_TR(0x7132fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff874ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713301:{NFSU2_TR(0x713301);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff875ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713307:{NFSU2_TR(0x713307);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff876ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71330e:{NFSU2_TR(0x71330e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff877ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713314:{NFSU2_TR(0x713314);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff878ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71331a:{NFSU2_TR(0x71331a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff879ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713320:{NFSU2_TR(0x713320);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713327:{NFSU2_TR(0x713327);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71332d:{NFSU2_TR(0x71332d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713334:{NFSU2_TR(0x713334);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71333a:{NFSU2_TR(0x71333a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713341:{NFSU2_TR(0x713341);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713348:{NFSU2_TR(0x713348);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff880ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71334f:{NFSU2_TR(0x71334f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff881ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713355:{NFSU2_TR(0x713355);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff882ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71335b:{NFSU2_TR(0x71335b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff883ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713362:{NFSU2_TR(0x713362);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff884ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713369:{NFSU2_TR(0x713369);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff885ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713370:{NFSU2_TR(0x713370);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff886ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713376:{NFSU2_TR(0x713376);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff887ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71337d:{NFSU2_TR(0x71337d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff888ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713383:{NFSU2_TR(0x713383);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff889ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71338a:{NFSU2_TR(0x71338a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713391:{NFSU2_TR(0x713391);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713398:{NFSU2_TR(0x713398);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71339f:{NFSU2_TR(0x71339f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133a6:{NFSU2_TR(0x7133a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133ad:{NFSU2_TR(0x7133ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133b4:{NFSU2_TR(0x7133b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff890ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133bb:{NFSU2_TR(0x7133bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff891ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133c2:{NFSU2_TR(0x7133c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff892ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7133c8:{NFSU2_TR(0x7133c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff893ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133cf:{NFSU2_TR(0x7133cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff894ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7133d5:{NFSU2_TR(0x7133d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff895ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7133db:{NFSU2_TR(0x7133db);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff896ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133e2:{NFSU2_TR(0x7133e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff897ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133e9:{NFSU2_TR(0x7133e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff898ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133f0:{NFSU2_TR(0x7133f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff899ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133f7:{NFSU2_TR(0x7133f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133fe:{NFSU2_TR(0x7133fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713405:{NFSU2_TR(0x713405);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71340b:{NFSU2_TR(0x71340b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713412:{NFSU2_TR(0x713412);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713419:{NFSU2_TR(0x713419);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713420:{NFSU2_TR(0x713420);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713427:{NFSU2_TR(0x713427);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71342e:{NFSU2_TR(0x71342e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713434:{NFSU2_TR(0x713434);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71343b:{NFSU2_TR(0x71343b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713441:{NFSU2_TR(0x713441);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713448:{NFSU2_TR(0x713448);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71344f:{NFSU2_TR(0x71344f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713455:{NFSU2_TR(0x713455);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71345c:{NFSU2_TR(0x71345c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713463:{NFSU2_TR(0x713463);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8aaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713469:{NFSU2_TR(0x713469);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8abull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713470:{NFSU2_TR(0x713470);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8acull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713476:{NFSU2_TR(0x713476);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8adull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71347c:{NFSU2_TR(0x71347c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8aeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713483:{NFSU2_TR(0x713483);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8afull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713489:{NFSU2_TR(0x713489);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71348f:{NFSU2_TR(0x71348f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b1ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713495:{NFSU2_TR(0x713495);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71349b:{NFSU2_TR(0x71349b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134a1:{NFSU2_TR(0x7134a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134a8:{NFSU2_TR(0x7134a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134af:{NFSU2_TR(0x7134af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134b5:{NFSU2_TR(0x7134b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134bc:{NFSU2_TR(0x7134bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134c3:{NFSU2_TR(0x7134c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134ca:{NFSU2_TR(0x7134ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8baull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134d1:{NFSU2_TR(0x7134d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bbull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134d7:{NFSU2_TR(0x7134d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134de:{NFSU2_TR(0x7134de);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bdull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134e5:{NFSU2_TR(0x7134e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8beull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134eb:{NFSU2_TR(0x7134eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134f2:{NFSU2_TR(0x7134f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134f9:{NFSU2_TR(0x7134f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713500:{NFSU2_TR(0x713500);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713507:{NFSU2_TR(0x713507);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71350d:{NFSU2_TR(0x71350d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713514:{NFSU2_TR(0x713514);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71351b:{NFSU2_TR(0x71351b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713522:{NFSU2_TR(0x713522);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c7ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713528:{NFSU2_TR(0x713528);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c8ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71352e:{NFSU2_TR(0x71352e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713535:{NFSU2_TR(0x713535);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8caull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71353b:{NFSU2_TR(0x71353b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8cbull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713541:{NFSU2_TR(0x713541);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ccull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713548:{NFSU2_TR(0x713548);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8cdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71354f:{NFSU2_TR(0x71354f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ceull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713555:{NFSU2_TR(0x713555);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8cfull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71355b:{NFSU2_TR(0x71355b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713561:{NFSU2_TR(0x713561);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713568:{NFSU2_TR(0x713568);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71356f:{NFSU2_TR(0x71356f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713576:{NFSU2_TR(0x713576);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71357d:{NFSU2_TR(0x71357d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713584:{NFSU2_TR(0x713584);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71358a:{NFSU2_TR(0x71358a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d7ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713590:{NFSU2_TR(0x713590);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713597:{NFSU2_TR(0x713597);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71359e:{NFSU2_TR(0x71359e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8daull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135a4:{NFSU2_TR(0x7135a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8dbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135ab:{NFSU2_TR(0x7135ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8dcull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135b1:{NFSU2_TR(0x7135b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ddull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135b8:{NFSU2_TR(0x7135b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8deull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135bf:{NFSU2_TR(0x7135bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8dfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135c6:{NFSU2_TR(0x7135c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135cc:{NFSU2_TR(0x7135cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e1ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135d2:{NFSU2_TR(0x7135d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135d8:{NFSU2_TR(0x7135d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135df:{NFSU2_TR(0x7135df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135e6:{NFSU2_TR(0x7135e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135ed:{NFSU2_TR(0x7135ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135f4:{NFSU2_TR(0x7135f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135fb:{NFSU2_TR(0x7135fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713602:{NFSU2_TR(0x713602);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713609:{NFSU2_TR(0x713609);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8eaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71360f:{NFSU2_TR(0x71360f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ebull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713616:{NFSU2_TR(0x713616);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ecull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71361d:{NFSU2_TR(0x71361d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8edull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713624:{NFSU2_TR(0x713624);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8eeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71362b:{NFSU2_TR(0x71362b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8efull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713632:{NFSU2_TR(0x713632);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713639:{NFSU2_TR(0x713639);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713640:{NFSU2_TR(0x713640);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713646:{NFSU2_TR(0x713646);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71364c:{NFSU2_TR(0x71364c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f4ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713652:{NFSU2_TR(0x713652);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713659:{NFSU2_TR(0x713659);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713660:{NFSU2_TR(0x713660);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713667:{NFSU2_TR(0x713667);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71366e:{NFSU2_TR(0x71366e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713675:{NFSU2_TR(0x713675);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8faull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71367c:{NFSU2_TR(0x71367c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8fbull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713682:{NFSU2_TR(0x713682);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8fcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713689:{NFSU2_TR(0x713689);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8fdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713690:{NFSU2_TR(0x713690);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713697:{NFSU2_TR(0x713697);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ffull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71369e:{NFSU2_TR(0x71369e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff900ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136a4:{NFSU2_TR(0x7136a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff901ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136aa:{NFSU2_TR(0x7136aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff902ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136b0:{NFSU2_TR(0x7136b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff903ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136b6:{NFSU2_TR(0x7136b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff904ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136bc:{NFSU2_TR(0x7136bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff905ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136c2:{NFSU2_TR(0x7136c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff906ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136c9:{NFSU2_TR(0x7136c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff907ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136cf:{NFSU2_TR(0x7136cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff908ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136d6:{NFSU2_TR(0x7136d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff909ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136dc:{NFSU2_TR(0x7136dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136e3:{NFSU2_TR(0x7136e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136ea:{NFSU2_TR(0x7136ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136f1:{NFSU2_TR(0x7136f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136f8:{NFSU2_TR(0x7136f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90eull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136fe:{NFSU2_TR(0x7136fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713705:{NFSU2_TR(0x713705);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff910ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71370c:{NFSU2_TR(0x71370c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff911ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713713:{NFSU2_TR(0x713713);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff912ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71371a:{NFSU2_TR(0x71371a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff913ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713720:{NFSU2_TR(0x713720);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff914ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713727:{NFSU2_TR(0x713727);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff915ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71372e:{NFSU2_TR(0x71372e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff916ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713735:{NFSU2_TR(0x713735);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff917ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71373c:{NFSU2_TR(0x71373c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff918ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713743:{NFSU2_TR(0x713743);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff919ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713749:{NFSU2_TR(0x713749);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713750:{NFSU2_TR(0x713750);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713756:{NFSU2_TR(0x713756);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71375c:{NFSU2_TR(0x71375c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91dull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713762:{NFSU2_TR(0x713762);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713769:{NFSU2_TR(0x713769);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71376f:{NFSU2_TR(0x71376f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff920ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713776:{NFSU2_TR(0x713776);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff921ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71377d:{NFSU2_TR(0x71377d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff922ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713783:{NFSU2_TR(0x713783);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff923ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713789:{NFSU2_TR(0x713789);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff924ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71378f:{NFSU2_TR(0x71378f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff925ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713796:{NFSU2_TR(0x713796);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff926ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71379c:{NFSU2_TR(0x71379c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff927ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137a2:{NFSU2_TR(0x7137a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff928ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137a9:{NFSU2_TR(0x7137a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff929ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137af:{NFSU2_TR(0x7137af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137b6:{NFSU2_TR(0x7137b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137bc:{NFSU2_TR(0x7137bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137c3:{NFSU2_TR(0x7137c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137ca:{NFSU2_TR(0x7137ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137d1:{NFSU2_TR(0x7137d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137d8:{NFSU2_TR(0x7137d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff930ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137df:{NFSU2_TR(0x7137df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff931ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137e5:{NFSU2_TR(0x7137e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff932ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137ec:{NFSU2_TR(0x7137ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff933ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137f2:{NFSU2_TR(0x7137f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff934ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137f8:{NFSU2_TR(0x7137f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff935ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137ff:{NFSU2_TR(0x7137ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff936ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713805:{NFSU2_TR(0x713805);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff937ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71380b:{NFSU2_TR(0x71380b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff938ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713812:{NFSU2_TR(0x713812);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff939ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713819:{NFSU2_TR(0x713819);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713820:{NFSU2_TR(0x713820);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93bull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713826:{NFSU2_TR(0x713826);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71382d:{NFSU2_TR(0x71382d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713834:{NFSU2_TR(0x713834);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71383b:{NFSU2_TR(0x71383b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713842:{NFSU2_TR(0x713842);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff940ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713849:{NFSU2_TR(0x713849);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff941ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71384f:{NFSU2_TR(0x71384f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff942ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713856:{NFSU2_TR(0x713856);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff943ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71385d:{NFSU2_TR(0x71385d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff944ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713864:{NFSU2_TR(0x713864);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff945ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71386b:{NFSU2_TR(0x71386b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff946ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713872:{NFSU2_TR(0x713872);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff947ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713878:{NFSU2_TR(0x713878);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff948ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71387f:{NFSU2_TR(0x71387f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff949ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713886:{NFSU2_TR(0x713886);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71388d:{NFSU2_TR(0x71388d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713894:{NFSU2_TR(0x713894);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71389b:{NFSU2_TR(0x71389b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138a2:{NFSU2_TR(0x7138a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94eull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138a8:{NFSU2_TR(0x7138a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138af:{NFSU2_TR(0x7138af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff950ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138b6:{NFSU2_TR(0x7138b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff951ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138bd:{NFSU2_TR(0x7138bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff952ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138c3:{NFSU2_TR(0x7138c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff953ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138c9:{NFSU2_TR(0x7138c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff954ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138cf:{NFSU2_TR(0x7138cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff955ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138d6:{NFSU2_TR(0x7138d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff956ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138dd:{NFSU2_TR(0x7138dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff957ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138e4:{NFSU2_TR(0x7138e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff958ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138ea:{NFSU2_TR(0x7138ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff959ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138f1:{NFSU2_TR(0x7138f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138f8:{NFSU2_TR(0x7138f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138ff:{NFSU2_TR(0x7138ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713906:{NFSU2_TR(0x713906);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71390d:{NFSU2_TR(0x71390d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713913:{NFSU2_TR(0x713913);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713919:{NFSU2_TR(0x713919);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff960ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713920:{NFSU2_TR(0x713920);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff961ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713927:{NFSU2_TR(0x713927);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff962ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71392e:{NFSU2_TR(0x71392e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff963ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713934:{NFSU2_TR(0x713934);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff964ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71393a:{NFSU2_TR(0x71393a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff965ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713940:{NFSU2_TR(0x713940);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff966ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713946:{NFSU2_TR(0x713946);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff967ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71394c:{NFSU2_TR(0x71394c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff968ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713952:{NFSU2_TR(0x713952);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff969ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713959:{NFSU2_TR(0x713959);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713960:{NFSU2_TR(0x713960);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713967:{NFSU2_TR(0x713967);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71396d:{NFSU2_TR(0x71396d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713974:{NFSU2_TR(0x713974);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71397b:{NFSU2_TR(0x71397b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713982:{NFSU2_TR(0x713982);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff970ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713989:{NFSU2_TR(0x713989);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff971ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713990:{NFSU2_TR(0x713990);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff972ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713996:{NFSU2_TR(0x713996);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff973ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71399d:{NFSU2_TR(0x71399d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff974ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139a3:{NFSU2_TR(0x7139a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff975ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139aa:{NFSU2_TR(0x7139aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff976ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139b0:{NFSU2_TR(0x7139b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff977ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139b6:{NFSU2_TR(0x7139b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff978ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139bc:{NFSU2_TR(0x7139bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff979ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139c3:{NFSU2_TR(0x7139c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139ca:{NFSU2_TR(0x7139ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139d1:{NFSU2_TR(0x7139d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139d7:{NFSU2_TR(0x7139d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139dd:{NFSU2_TR(0x7139dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139e4:{NFSU2_TR(0x7139e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139ea:{NFSU2_TR(0x7139ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff980ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139f1:{NFSU2_TR(0x7139f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff981ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139f7:{NFSU2_TR(0x7139f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff982ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139fe:{NFSU2_TR(0x7139fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff983ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a05:{NFSU2_TR(0x713a05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff984ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a0c:{NFSU2_TR(0x713a0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff985ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a13:{NFSU2_TR(0x713a13);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff986ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a1a:{NFSU2_TR(0x713a1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff987ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a21:{NFSU2_TR(0x713a21);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff988ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a27:{NFSU2_TR(0x713a27);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff989ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a2e:{NFSU2_TR(0x713a2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a34:{NFSU2_TR(0x713a34);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a3a:{NFSU2_TR(0x713a3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a41:{NFSU2_TR(0x713a41);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a48:{NFSU2_TR(0x713a48);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a4e:{NFSU2_TR(0x713a4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a55:{NFSU2_TR(0x713a55);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff990ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a5c:{NFSU2_TR(0x713a5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff991ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a62:{NFSU2_TR(0x713a62);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff992ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a68:{NFSU2_TR(0x713a68);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff993ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a6f:{NFSU2_TR(0x713a6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff994ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a75:{NFSU2_TR(0x713a75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff995ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a7c:{NFSU2_TR(0x713a7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff996ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a82:{NFSU2_TR(0x713a82);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff997ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a88:{NFSU2_TR(0x713a88);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff998ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a8e:{NFSU2_TR(0x713a8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff999ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a94:{NFSU2_TR(0x713a94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a9b:{NFSU2_TR(0x713a9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aa2:{NFSU2_TR(0x713aa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713aa8:{NFSU2_TR(0x713aa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aaf:{NFSU2_TR(0x713aaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ab6:{NFSU2_TR(0x713ab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713abd:{NFSU2_TR(0x713abd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ac4:{NFSU2_TR(0x713ac4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713acb:{NFSU2_TR(0x713acb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ad1:{NFSU2_TR(0x713ad1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ad8:{NFSU2_TR(0x713ad8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a4ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ade:{NFSU2_TR(0x713ade);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a5ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ae4:{NFSU2_TR(0x713ae4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aeb:{NFSU2_TR(0x713aeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713af1:{NFSU2_TR(0x713af1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713af8:{NFSU2_TR(0x713af8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aff:{NFSU2_TR(0x713aff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9aaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b06:{NFSU2_TR(0x713b06);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9abull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b0d:{NFSU2_TR(0x713b0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9acull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b14:{NFSU2_TR(0x713b14);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9adull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b1b:{NFSU2_TR(0x713b1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9aeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b22:{NFSU2_TR(0x713b22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9afull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b29:{NFSU2_TR(0x713b29);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713b2f:{NFSU2_TR(0x713b2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b36:{NFSU2_TR(0x713b36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b3d:{NFSU2_TR(0x713b3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b44:{NFSU2_TR(0x713b44);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b4b:{NFSU2_TR(0x713b4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b52:{NFSU2_TR(0x713b52);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b59:{NFSU2_TR(0x713b59);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b60:{NFSU2_TR(0x713b60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b67:{NFSU2_TR(0x713b67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b6e:{NFSU2_TR(0x713b6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9baull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b75:{NFSU2_TR(0x713b75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713b7b:{NFSU2_TR(0x713b7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b82:{NFSU2_TR(0x713b82);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b89:{NFSU2_TR(0x713b89);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9beull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713b8f:{NFSU2_TR(0x713b8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bfull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b96:{NFSU2_TR(0x713b96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b9d:{NFSU2_TR(0x713b9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ba4:{NFSU2_TR(0x713ba4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c2ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713baa:{NFSU2_TR(0x713baa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bb1:{NFSU2_TR(0x713bb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c4ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bb7:{NFSU2_TR(0x713bb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bbe:{NFSU2_TR(0x713bbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c6ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bc4:{NFSU2_TR(0x713bc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bcb:{NFSU2_TR(0x713bcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c8ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bd1:{NFSU2_TR(0x713bd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bd7:{NFSU2_TR(0x713bd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9caull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bde:{NFSU2_TR(0x713bde);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9cbull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713be5:{NFSU2_TR(0x713be5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ccull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bec:{NFSU2_TR(0x713bec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9cdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bf2:{NFSU2_TR(0x713bf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ceull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bf9:{NFSU2_TR(0x713bf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9cfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c00:{NFSU2_TR(0x713c00);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c07:{NFSU2_TR(0x713c07);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c0e:{NFSU2_TR(0x713c0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c15:{NFSU2_TR(0x713c15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c1c:{NFSU2_TR(0x713c1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d4ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c22:{NFSU2_TR(0x713c22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c28:{NFSU2_TR(0x713c28);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c2f:{NFSU2_TR(0x713c2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c36:{NFSU2_TR(0x713c36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c3d:{NFSU2_TR(0x713c3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c43:{NFSU2_TR(0x713c43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9daull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c49:{NFSU2_TR(0x713c49);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9dbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c50:{NFSU2_TR(0x713c50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9dcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c57:{NFSU2_TR(0x713c57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ddull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c5d:{NFSU2_TR(0x713c5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9deull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c64:{NFSU2_TR(0x713c64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9dfull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c6a:{NFSU2_TR(0x713c6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c71:{NFSU2_TR(0x713c71);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c78:{NFSU2_TR(0x713c78);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c7f:{NFSU2_TR(0x713c7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c86:{NFSU2_TR(0x713c86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c8d:{NFSU2_TR(0x713c8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c94:{NFSU2_TR(0x713c94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c9b:{NFSU2_TR(0x713c9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ca2:{NFSU2_TR(0x713ca2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ca9:{NFSU2_TR(0x713ca9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713caf:{NFSU2_TR(0x713caf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9eaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cb6:{NFSU2_TR(0x713cb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ebull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cbd:{NFSU2_TR(0x713cbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ecull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cc4:{NFSU2_TR(0x713cc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9edull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ccb:{NFSU2_TR(0x713ccb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9eeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cd1:{NFSU2_TR(0x713cd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9efull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cd7:{NFSU2_TR(0x713cd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cde:{NFSU2_TR(0x713cde);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ce4:{NFSU2_TR(0x713ce4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cea:{NFSU2_TR(0x713cea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cf0:{NFSU2_TR(0x713cf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f4ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cf6:{NFSU2_TR(0x713cf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f5ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cfc:{NFSU2_TR(0x713cfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f6ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d02:{NFSU2_TR(0x713d02);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d09:{NFSU2_TR(0x713d09);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d10:{NFSU2_TR(0x713d10);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d17:{NFSU2_TR(0x713d17);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9faull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d1e:{NFSU2_TR(0x713d1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9fbull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d24:{NFSU2_TR(0x713d24);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9fcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d2a:{NFSU2_TR(0x713d2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9fdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d31:{NFSU2_TR(0x713d31);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9feull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d38:{NFSU2_TR(0x713d38);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ffull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d3f:{NFSU2_TR(0x713d3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa00ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d46:{NFSU2_TR(0x713d46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa01ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d4c:{NFSU2_TR(0x713d4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa02ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d53:{NFSU2_TR(0x713d53);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa03ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d5a:{NFSU2_TR(0x713d5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa04ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d60:{NFSU2_TR(0x713d60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa05ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d67:{NFSU2_TR(0x713d67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa06ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d6d:{NFSU2_TR(0x713d6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa07ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d74:{NFSU2_TR(0x713d74);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa08ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d7a:{NFSU2_TR(0x713d7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa09ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d81:{NFSU2_TR(0x713d81);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d88:{NFSU2_TR(0x713d88);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d8f:{NFSU2_TR(0x713d8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d95:{NFSU2_TR(0x713d95);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d9c:{NFSU2_TR(0x713d9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713da3:{NFSU2_TR(0x713da3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713daa:{NFSU2_TR(0x713daa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713db0:{NFSU2_TR(0x713db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa11ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713db6:{NFSU2_TR(0x713db6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa12ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713dbd:{NFSU2_TR(0x713dbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713dc4:{NFSU2_TR(0x713dc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa14ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713dcb:{NFSU2_TR(0x713dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa15ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713dd1:{NFSU2_TR(0x713dd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa16ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713dd7:{NFSU2_TR(0x713dd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa17ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ddd:{NFSU2_TR(0x713ddd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa18ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713de4:{NFSU2_TR(0x713de4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713deb:{NFSU2_TR(0x713deb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713df2:{NFSU2_TR(0x713df2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713df9:{NFSU2_TR(0x713df9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713dff:{NFSU2_TR(0x713dff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1dull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e05:{NFSU2_TR(0x713e05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e0c:{NFSU2_TR(0x713e0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1full))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e12:{NFSU2_TR(0x713e12);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa20ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e18:{NFSU2_TR(0x713e18);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e1e:{NFSU2_TR(0x713e1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa22ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e24:{NFSU2_TR(0x713e24);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e2b:{NFSU2_TR(0x713e2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa24ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e32:{NFSU2_TR(0x713e32);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa25ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e39:{NFSU2_TR(0x713e39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa26ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e40:{NFSU2_TR(0x713e40);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa27ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e47:{NFSU2_TR(0x713e47);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa28ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e4d:{NFSU2_TR(0x713e4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa29ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e53:{NFSU2_TR(0x713e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e5a:{NFSU2_TR(0x713e5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e61:{NFSU2_TR(0x713e61);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e67:{NFSU2_TR(0x713e67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e6d:{NFSU2_TR(0x713e6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e74:{NFSU2_TR(0x713e74);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e7b:{NFSU2_TR(0x713e7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa30ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e81:{NFSU2_TR(0x713e81);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa31ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e87:{NFSU2_TR(0x713e87);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa32ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e8e:{NFSU2_TR(0x713e8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa33ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e94:{NFSU2_TR(0x713e94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e9b:{NFSU2_TR(0x713e9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa35ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ea2:{NFSU2_TR(0x713ea2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa36ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ea9:{NFSU2_TR(0x713ea9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa37ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eb0:{NFSU2_TR(0x713eb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa38ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eb7:{NFSU2_TR(0x713eb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa39ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ebd:{NFSU2_TR(0x713ebd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ec3:{NFSU2_TR(0x713ec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eca:{NFSU2_TR(0x713eca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ed1:{NFSU2_TR(0x713ed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3dull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ed7:{NFSU2_TR(0x713ed7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ede:{NFSU2_TR(0x713ede);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ee5:{NFSU2_TR(0x713ee5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eec:{NFSU2_TR(0x713eec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa41ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ef3:{NFSU2_TR(0x713ef3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa42ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713efa:{NFSU2_TR(0x713efa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa43ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f01:{NFSU2_TR(0x713f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f08:{NFSU2_TR(0x713f08);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f0e:{NFSU2_TR(0x713f0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa46ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f15:{NFSU2_TR(0x713f15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa47ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f1b:{NFSU2_TR(0x713f1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa48ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f22:{NFSU2_TR(0x713f22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa49ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f29:{NFSU2_TR(0x713f29);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f2f:{NFSU2_TR(0x713f2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f36:{NFSU2_TR(0x713f36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f3d:{NFSU2_TR(0x713f3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f43:{NFSU2_TR(0x713f43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f4a:{NFSU2_TR(0x713f4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f51:{NFSU2_TR(0x713f51);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa50ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f57:{NFSU2_TR(0x713f57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa51ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f5d:{NFSU2_TR(0x713f5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa52ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f64:{NFSU2_TR(0x713f64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa53ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f6b:{NFSU2_TR(0x713f6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa54ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f72:{NFSU2_TR(0x713f72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa55ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f79:{NFSU2_TR(0x713f79);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa56ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f7f:{NFSU2_TR(0x713f7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa57ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f86:{NFSU2_TR(0x713f86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa58ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f8c:{NFSU2_TR(0x713f8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa59ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f92:{NFSU2_TR(0x713f92);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f98:{NFSU2_TR(0x713f98);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f9f:{NFSU2_TR(0x713f9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fa5:{NFSU2_TR(0x713fa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fab:{NFSU2_TR(0x713fab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fb2:{NFSU2_TR(0x713fb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fb9:{NFSU2_TR(0x713fb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa60ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fbf:{NFSU2_TR(0x713fbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa61ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fc5:{NFSU2_TR(0x713fc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa62ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fcc:{NFSU2_TR(0x713fcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa63ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fd3:{NFSU2_TR(0x713fd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fda:{NFSU2_TR(0x713fda);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa65ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fe1:{NFSU2_TR(0x713fe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa66ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fe8:{NFSU2_TR(0x713fe8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa67ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fee:{NFSU2_TR(0x713fee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa68ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ff5:{NFSU2_TR(0x713ff5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa69ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ffb:{NFSU2_TR(0x713ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa6aull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
{EXIT(0x714001u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_713(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
default:missing_instruction(c.pc);}}
u32 page_713(Cpu& c){u8* R=c.regs.data();return ent_713(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
