#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_723699(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7237ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_727030(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_727e0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_727e2a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72ace4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72acea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72c31e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73303d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733073(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733077(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733094(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7330d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7330d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733123(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733154(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733164(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73317b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733184(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733193(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73319b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7331b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733211(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733239(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73325c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733264(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7332b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7332de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7332e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7332ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733308(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733311(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733328(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733369(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7333bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7333cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73344c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733491(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733614(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7336de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73372d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733785(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7337ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733802(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733985(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7339c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7339d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7339d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7339e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a06(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a17(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a2b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a6b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733ab5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733af9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b28(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b49(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b68(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b84(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b8a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b9d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733ba8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733bac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733bb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733bc3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733bc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733bd1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733bf4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733c02(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733c2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733c40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733c90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_734328(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_734919(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_734945(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_734ce9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_734d20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73300e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733023(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73304f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73306f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73307a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733082(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733093(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733095(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7330c5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7330d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7330f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7330f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73311a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733140(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733179(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7331ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7331b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7331d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7331d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7331e1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7331ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733237(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73326a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73329b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7332a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7332ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733306(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733326(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73332f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73335e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733388(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733460(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733700(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7337d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7339e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733a9e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733aea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b0b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b45(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733b5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733bb9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733c54(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733c72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_733000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733000:L733000:{bud-=5;NFSU2_TR(0x733000);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733003:{NFSU2_TR(0x733003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733006:{NFSU2_TR(0x733006);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733009:{NFSU2_TR(0x733009);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73300c:{NFSU2_TR(0x73300c);
{[[clang::musttail]] return blk_733020(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73300e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73300e:L73300e:{bud-=7;NFSU2_TR(0x73300e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733011:{NFSU2_TR(0x733011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733014:{NFSU2_TR(0x733014);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733015:{NFSU2_TR(0x733015);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B733018:{NFSU2_TR(0x733018);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733019:{NFSU2_TR(0x733019);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+4));
}
B73301b:{NFSU2_TR(0x73301b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733020ull));
{[[clang::musttail]] return blk_734919(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733020:L733020:{bud-=3;NFSU2_TR(0x733020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733021:{NFSU2_TR(0x733021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733022:{NFSU2_TR(0x733022);
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
PN u32 blk_733023(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733023:L733023:{bud-=9;NFSU2_TR(0x733023);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733024:{NFSU2_TR(0x733024);
__builtin_memmove((R+20),(G+16),4);
}
B733026:{NFSU2_TR(0x733026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733029:{NFSU2_TR(0x733029);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73302a:{NFSU2_TR(0x73302a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73302d:{NFSU2_TR(0x73302d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733030:{NFSU2_TR(0x733030);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733033:{NFSU2_TR(0x733033);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B733036:{NFSU2_TR(0x733036);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_73303d(ARGS);}}
}
B733038:L733038:{bud-=2;NFSU2_TR(0x733038);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B73303b:{NFSU2_TR(0x73303b);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733077(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73303d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73303d:L73303d:{bud-=8;NFSU2_TR(0x73303d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733040:{NFSU2_TR(0x733040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733041:{NFSU2_TR(0x733041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733044:{NFSU2_TR(0x733044);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733045:{NFSU2_TR(0x733045);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733046:{NFSU2_TR(0x733046);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((G+0),(U+0),4);
}
B733049:{NFSU2_TR(0x733049);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73304a:{NFSU2_TR(0x73304a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x73304full));
{[[clang::musttail]] return blk_734945(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73304f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73304f:L73304f:{bud-=7;NFSU2_TR(0x73304f);
__builtin_memmove((R+24),(G+0),4);
}
B733051:{NFSU2_TR(0x733051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733054:{NFSU2_TR(0x733054);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B733057:{NFSU2_TR(0x733057);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733059:{NFSU2_TR(0x733059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B73305c:{NFSU2_TR(0x73305c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73305f:{NFSU2_TR(0x73305f);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733073(ARGS);}}
}
B733061:L733061:{bud-=6;NFSU2_TR(0x733061);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B733063:{NFSU2_TR(0x733063);
__builtin_memmove((G+4),(R+12),4);
}
B733065:{NFSU2_TR(0x733065);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B733068:{NFSU2_TR(0x733068);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733069:{NFSU2_TR(0x733069);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73306a:{NFSU2_TR(0x73306a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x73306full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x727030u);}[[clang::musttail]] return blk_727030(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73306f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73306f:L73306f:{bud-=3;NFSU2_TR(0x73306f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733070:{NFSU2_TR(0x733070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733071:{NFSU2_TR(0x733071);
u8 U[6];
w1(F+0,carry<u32>(r4(R+24),r4(R+12)));
w1(F+11,scarry<u32>(r4(R+24),r4(R+12)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733073(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733073(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733073:L733073:{bud-=3;NFSU2_TR(0x733073);
__builtin_memmove((G+0),(R+24),4);
}
B733075:{NFSU2_TR(0x733075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733076:{NFSU2_TR(0x733076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{[[clang::musttail]] return blk_733077(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733077(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733077:L733077:{bud-=3;NFSU2_TR(0x733077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733078:{NFSU2_TR(0x733078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B733079:{NFSU2_TR(0x733079);
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
PN u32 blk_73307a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73307a:L73307a:{bud-=3;NFSU2_TR(0x73307a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B73307e:{NFSU2_TR(0x73307e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733081:{NFSU2_TR(0x733081);
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
PN u32 blk_733082(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733082:L733082:{bud-=4;NFSU2_TR(0x733082);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733086:{NFSU2_TR(0x733086);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733089:{NFSU2_TR(0x733089);
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
B73308b:{NFSU2_TR(0x73308b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733094(ARGS);}}
}
B73308d:L73308d:{bud-=2;NFSU2_TR(0x73308d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73308e:{NFSU2_TR(0x73308e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733093ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x72aceau);}[[clang::musttail]] return blk_72acea(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733093(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733093:L733093:{bud-=1;NFSU2_TR(0x733093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_733094(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733094(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733094:L733094:{bud-=1;NFSU2_TR(0x733094);
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
PN u32 blk_733095(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733095:L733095:{bud-=13;NFSU2_TR(0x733095);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733096:{NFSU2_TR(0x733096);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73309a:{NFSU2_TR(0x73309a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73309b:{NFSU2_TR(0x73309b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73309f:{NFSU2_TR(0x73309f);
u8 U[4];
w4(U+0,u32(0x733023ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7330a5:{NFSU2_TR(0x7330a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x733082ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7330ac:{NFSU2_TR(0x7330ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+0),(U+0),4);
}
B7330ae:{NFSU2_TR(0x7330ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7330b1:{NFSU2_TR(0x7330b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7330b4:{NFSU2_TR(0x7330b4);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B7330b8:{NFSU2_TR(0x7330b8);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7330bd:{NFSU2_TR(0x7330bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7330c0:{NFSU2_TR(0x7330c0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7330c5ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x72ace4u);}[[clang::musttail]] return blk_72ace4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7330c5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7330c5:L7330c5:{bud-=3;NFSU2_TR(0x7330c5);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B7330c7:{NFSU2_TR(0x7330c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B7330c8:{NFSU2_TR(0x7330c8);
if(r1(F+6)){{[[clang::musttail]] return blk_7330d3(ARGS);}}
}
B7330ca:L7330ca:{bud-=2;NFSU2_TR(0x7330ca);
__builtin_memmove((G+4),(G+0),4);
}
B7330cc:{NFSU2_TR(0x7330cc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7330d1ull));
{[[clang::musttail]] return blk_734ce9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7330d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7330d1:L7330d1:{bud-=1;NFSU2_TR(0x7330d1);
{[[clang::musttail]] return blk_7330d5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7330d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7330d3:L7330d3:{bud-=1;NFSU2_TR(0x7330d3);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_7330d5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7330d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7330d5:L7330d5:{bud-=9;NFSU2_TR(0x7330d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7330d8:{NFSU2_TR(0x7330d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x73307aull));
s4(u32(r4(U+0)),r4(U+4));
}
B7330df:{NFSU2_TR(0x7330df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7330e2:{NFSU2_TR(0x7330e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7330e5:{NFSU2_TR(0x7330e5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7330e6:{NFSU2_TR(0x7330e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B7330e9:{NFSU2_TR(0x7330e9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7330ea:{NFSU2_TR(0x7330ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B7330ed:{NFSU2_TR(0x7330ed);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7330f2ull));
{[[clang::musttail]] return blk_734919(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7330f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7330f2:L7330f2:{bud-=3;NFSU2_TR(0x7330f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7330f3:{NFSU2_TR(0x7330f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7330f4:{NFSU2_TR(0x7330f4);
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
PN u32 blk_7330f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7330f5:L7330f5:{bud-=10;NFSU2_TR(0x7330f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7330f6:{NFSU2_TR(0x7330f6);
__builtin_memmove((R+20),(G+16),4);
}
B7330f8:{NFSU2_TR(0x7330f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7330f9:{NFSU2_TR(0x7330f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7330fc:{NFSU2_TR(0x7330fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7330fd:{NFSU2_TR(0x7330fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B733100:{NFSU2_TR(0x733100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733103:{NFSU2_TR(0x733103);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B733105:{NFSU2_TR(0x733105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733106:{NFSU2_TR(0x733106);
if(r1(F+6)){{[[clang::musttail]] return blk_733193(ARGS);}}
}
B73310c:L73310c:{bud-=5;NFSU2_TR(0x73310c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73310d:{NFSU2_TR(0x73310d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B733111:{NFSU2_TR(0x733111);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733112:{NFSU2_TR(0x733112);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B733115:{NFSU2_TR(0x733115);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x73311aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7237efu);}[[clang::musttail]] return blk_7237ef(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73311a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73311a:L73311a:{bud-=3;NFSU2_TR(0x73311a);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B73311d:{NFSU2_TR(0x73311d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733121:{NFSU2_TR(0x733121);
{[[clang::musttail]] return blk_733193(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733123(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733123:L733123:{bud-=3;NFSU2_TR(0x733123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733126:{NFSU2_TR(0x733126);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B733129:{NFSU2_TR(0x733129);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_733154(ARGS);}}
}
B73312b:L73312b:{bud-=8;NFSU2_TR(0x73312b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B73312e:{NFSU2_TR(0x73312e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73312f:{NFSU2_TR(0x73312f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((G+0),(U+0),4);
}
B733132:{NFSU2_TR(0x733132);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733133:{NFSU2_TR(0x733133);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B733137:{NFSU2_TR(0x733137);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733138:{NFSU2_TR(0x733138);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B73313b:{NFSU2_TR(0x73313b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733140ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x723699u);}[[clang::musttail]] return blk_723699(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733140(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733140:L733140:{bud-=4;NFSU2_TR(0x733140);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B733143:{NFSU2_TR(0x733143);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B733145:{NFSU2_TR(0x733145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733148:{NFSU2_TR(0x733148);
if(r1(F+6)){{[[clang::musttail]] return blk_73319b(ARGS);}}
}
B73314a:L73314a:{bud-=3;NFSU2_TR(0x73314a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B73314d:{NFSU2_TR(0x73314d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733151:{NFSU2_TR(0x733151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_733154(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733154(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733154:L733154:{bud-=5;NFSU2_TR(0x733154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733157:{NFSU2_TR(0x733157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73315a:{NFSU2_TR(0x73315a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(G+0))));
}
B73315c:{NFSU2_TR(0x73315c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73315f:{NFSU2_TR(0x73315f);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_733164(ARGS);}}
}
B733161:L733161:{bud-=1;NFSU2_TR(0x733161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
{[[clang::musttail]] return blk_733164(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733164(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733164:L733164:{bud-=4;NFSU2_TR(0x733164);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(F+0,u8((r1(U+8))<(u8(0x0ull))));
w1(F+11,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(F+7,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+7))==(u8(0x0ull))));
}
B733168:{NFSU2_TR(0x733168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B73316b:{NFSU2_TR(0x73316b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73316c:{NFSU2_TR(0x73316c);
if(r1(F+6)){{[[clang::musttail]] return blk_73317b(ARGS);}}
}
B73316e:L73316e:{bud-=4;NFSU2_TR(0x73316e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B733171:{NFSU2_TR(0x733171);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733172:{NFSU2_TR(0x733172);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733173:{NFSU2_TR(0x733173);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733179ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733179(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733179:L733179:{bud-=1;NFSU2_TR(0x733179);
{[[clang::musttail]] return blk_733184(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73317b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73317b:L73317b:{bud-=4;NFSU2_TR(0x73317b);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B73317d:{NFSU2_TR(0x73317d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73317e:{NFSU2_TR(0x73317e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73317f:{NFSU2_TR(0x73317f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733184ull));
{[[clang::musttail]] return blk_734d20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733184(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733184:L733184:{bud-=5;NFSU2_TR(0x733184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B733187:{NFSU2_TR(0x733187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B73318a:{NFSU2_TR(0x73318a);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B73318d:{NFSU2_TR(0x73318d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B733190:{NFSU2_TR(0x733190);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_733193(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733193(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733193:L733193:{bud-=2;NFSU2_TR(0x733193);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B733197:{NFSU2_TR(0x733197);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733123u);}[[clang::musttail]] return blk_733123(ARGS);}}
}
B733199:L733199:{bud-=1;NFSU2_TR(0x733199);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7331b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73319b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73319b:L73319b:{bud-=2;NFSU2_TR(0x73319b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B73319f:{NFSU2_TR(0x73319f);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7331b0(ARGS);}}
}
B7331a1:L7331a1:{bud-=5;NFSU2_TR(0x7331a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7331a4:{NFSU2_TR(0x7331a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B7331a7:{NFSU2_TR(0x7331a7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7331a8:{NFSU2_TR(0x7331a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7331a9:{NFSU2_TR(0x7331a9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7331aeull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x727030u);}[[clang::musttail]] return blk_727030(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7331ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7331ae:L7331ae:{bud-=2;NFSU2_TR(0x7331ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B7331af:{NFSU2_TR(0x7331af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_7331b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7331b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7331b0:L7331b0:{bud-=6;NFSU2_TR(0x7331b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7331b3:{NFSU2_TR(0x7331b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7331b4:{NFSU2_TR(0x7331b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7331b5:{NFSU2_TR(0x7331b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7331b6:{NFSU2_TR(0x7331b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7331b7:{NFSU2_TR(0x7331b7);
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
PN u32 blk_7331b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7331b8:L7331b8:{bud-=7;NFSU2_TR(0x7331b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7331b9:{NFSU2_TR(0x7331b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7331bd:{NFSU2_TR(0x7331bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7331be:{NFSU2_TR(0x7331be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7331c2:{NFSU2_TR(0x7331c2);
u8 U[4];
w4(U+0,u32(0x7330f5ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7331c8:{NFSU2_TR(0x7331c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B7331cb:{NFSU2_TR(0x7331cb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7331d0ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x727e0cu);}[[clang::musttail]] return blk_727e0c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7331d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7331d0:L7331d0:{bud-=2;NFSU2_TR(0x7331d0);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7331d1:{NFSU2_TR(0x7331d1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7331d6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x72c31eu);}[[clang::musttail]] return blk_72c31e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7331d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7331d6:L7331d6:{bud-=3;NFSU2_TR(0x7331d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331d9:{NFSU2_TR(0x7331d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B7331dc:{NFSU2_TR(0x7331dc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7331e1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x727e2au);}[[clang::musttail]] return blk_727e2a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7331e1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7331e1:L7331e1:{bud-=12;NFSU2_TR(0x7331e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7331e5:{NFSU2_TR(0x7331e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7331e8:{NFSU2_TR(0x7331e8);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B7331ea:{NFSU2_TR(0x7331ea);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0xcull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0xcull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7331ed:{NFSU2_TR(0x7331ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331f0:{NFSU2_TR(0x7331f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331f3:{NFSU2_TR(0x7331f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B7331f6:{NFSU2_TR(0x7331f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7331f7:{NFSU2_TR(0x7331f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7331fa:{NFSU2_TR(0x7331fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7331fd:{NFSU2_TR(0x7331fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7331fe:{NFSU2_TR(0x7331fe);
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
PN u32 blk_7331ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7331ff:L7331ff:{bud-=6;NFSU2_TR(0x7331ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733200:{NFSU2_TR(0x733200);
__builtin_memmove((R+20),(G+16),4);
}
B733202:{NFSU2_TR(0x733202);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B733206:{NFSU2_TR(0x733206);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733207:{NFSU2_TR(0x733207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73320a:{NFSU2_TR(0x73320a);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_733264(ARGS);}}
}
B73320c:L73320c:{bud-=3;NFSU2_TR(0x73320c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73320d:{NFSU2_TR(0x73320d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B733210:{NFSU2_TR(0x733210);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_733211(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733211(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733211:L733211:{bud-=6;NFSU2_TR(0x733211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733214:{NFSU2_TR(0x733214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B733217:{NFSU2_TR(0x733217);
w4(R+28,u32(u32(r4(R+28))-u32(r4(G+0))));
}
B733219:{NFSU2_TR(0x733219);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B73321a:{NFSU2_TR(0x73321a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73321d:{NFSU2_TR(0x73321d);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_733222(ARGS);}}
}
B73321f:L73321f:{bud-=1;NFSU2_TR(0x73321f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
{[[clang::musttail]] return blk_733222(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733222:L733222:{bud-=4;NFSU2_TR(0x733222);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B733226:{NFSU2_TR(0x733226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733229:{NFSU2_TR(0x733229);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73322a:{NFSU2_TR(0x73322a);
if(r1(F+6)){{[[clang::musttail]] return blk_733239(ARGS);}}
}
B73322c:L73322c:{bud-=4;NFSU2_TR(0x73322c);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B73322f:{NFSU2_TR(0x73322f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733230:{NFSU2_TR(0x733230);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733231:{NFSU2_TR(0x733231);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733237ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733237(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733237:L733237:{bud-=1;NFSU2_TR(0x733237);
{[[clang::musttail]] return blk_733242(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733239(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733239:L733239:{bud-=4;NFSU2_TR(0x733239);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B73323b:{NFSU2_TR(0x73323b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73323c:{NFSU2_TR(0x73323c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73323d:{NFSU2_TR(0x73323d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733242ull));
{[[clang::musttail]] return blk_734d20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733242:L733242:{bud-=7;NFSU2_TR(0x733242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B733245:{NFSU2_TR(0x733245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733248:{NFSU2_TR(0x733248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B73324b:{NFSU2_TR(0x73324b);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B73324e:{NFSU2_TR(0x73324e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B733251:{NFSU2_TR(0x733251);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B733254:{NFSU2_TR(0x733254);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_73325c(ARGS);}}
}
B733256:L733256:{bud-=2;NFSU2_TR(0x733256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733259:{NFSU2_TR(0x733259);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_73325c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73325c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73325c:L73325c:{bud-=2;NFSU2_TR(0x73325c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B733260:{NFSU2_TR(0x733260);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733211u);}[[clang::musttail]] return blk_733211(ARGS);}}
}
B733262:L733262:{bud-=2;NFSU2_TR(0x733262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733263:{NFSU2_TR(0x733263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{[[clang::musttail]] return blk_733264(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733264(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733264:L733264:{bud-=5;NFSU2_TR(0x733264);
w1(F+0,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B733266:{NFSU2_TR(0x733266);
u8 U[6];
w1(F+11,scarry<u32>(r4(G+0),u32(0x1ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733267:{NFSU2_TR(0x733267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733268:{NFSU2_TR(0x733268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B733269:{NFSU2_TR(0x733269);
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
PN u32 blk_73326a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73326a:L73326a:{bud-=14;NFSU2_TR(0x73326a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B73326e:{NFSU2_TR(0x73326e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733272:{NFSU2_TR(0x733272);
u8 U[4];
w4(U+0,u32(0x7331ffull));
s4(u32(r4(G+0)),r4(U+0));
}
B733278:{NFSU2_TR(0x733278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73327a:{NFSU2_TR(0x73327a);
u8 U[14];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B73327e:{NFSU2_TR(0x73327e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733281:{NFSU2_TR(0x733281);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733284:{NFSU2_TR(0x733284);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733287:{NFSU2_TR(0x733287);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73328a:{NFSU2_TR(0x73328a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73328d:{NFSU2_TR(0x73328d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733290:{NFSU2_TR(0x733290);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733293:{NFSU2_TR(0x733293);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B73329a:{NFSU2_TR(0x73329a);
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
PN u32 blk_73329b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73329b:L73329b:{bud-=3;NFSU2_TR(0x73329b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B73329f:{NFSU2_TR(0x73329f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7332a2:{NFSU2_TR(0x7332a2);
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
PN u32 blk_7332a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7332a3:L7332a3:{bud-=7;NFSU2_TR(0x7332a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332a4:{NFSU2_TR(0x7332a4);
__builtin_memmove((R+20),(G+16),4);
}
B7332a6:{NFSU2_TR(0x7332a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7332a9:{NFSU2_TR(0x7332a9);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7332ac:{NFSU2_TR(0x7332ac);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7332af:{NFSU2_TR(0x7332af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B7332b1:{NFSU2_TR(0x7332b1);
if(r1(F+0)){{[[clang::musttail]] return blk_7332b8(ARGS);}}
}
B7332b3:L7332b3:{bud-=3;NFSU2_TR(0x7332b3);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7332b6:{NFSU2_TR(0x7332b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7332b7:{NFSU2_TR(0x7332b7);
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
PN u32 blk_7332b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7332b8:L7332b8:{bud-=8;NFSU2_TR(0x7332b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332b9:{NFSU2_TR(0x7332b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332ba:{NFSU2_TR(0x7332ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7332bd:{NFSU2_TR(0x7332bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B7332c0:{NFSU2_TR(0x7332c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7332c3:{NFSU2_TR(0x7332c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(R+24))<(r4(U+0))));
}
B7332c5:{NFSU2_TR(0x7332c5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7332c8:{NFSU2_TR(0x7332c8);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_7332ee(ARGS);}}
}
B7332ca:L7332ca:{bud-=3;NFSU2_TR(0x7332ca);
u8 U[22];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B7332ce:{NFSU2_TR(0x7332ce);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7332d1:{NFSU2_TR(0x7332d1);
if(r1(F+6)){{[[clang::musttail]] return blk_7332e3(ARGS);}}
}
B7332d3:L7332d3:{bud-=4;NFSU2_TR(0x7332d3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7332d6:{NFSU2_TR(0x7332d6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332d7:{NFSU2_TR(0x7332d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332d8:{NFSU2_TR(0x7332d8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7332deull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7332de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7332de:L7332de:{bud-=2;NFSU2_TR(0x7332de);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B7332e1:{NFSU2_TR(0x7332e1);
{[[clang::musttail]] return blk_733328(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7332e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7332e3:L7332e3:{bud-=4;NFSU2_TR(0x7332e3);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B7332e5:{NFSU2_TR(0x7332e5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332e6:{NFSU2_TR(0x7332e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332e7:{NFSU2_TR(0x7332e7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7332ecull));
{[[clang::musttail]] return blk_734d20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7332ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7332ec:L7332ec:{bud-=1;NFSU2_TR(0x7332ec);
{if(__builtin_expect(bud<=0,0)){EXIT(0x7332deu);}[[clang::musttail]] return blk_7332de(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7332ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7332ee:L7332ee:{bud-=5;NFSU2_TR(0x7332ee);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
}
B7332f0:{NFSU2_TR(0x7332f0);
u8 U[22];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B7332f4:{NFSU2_TR(0x7332f4);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7332f7:{NFSU2_TR(0x7332f7);
__builtin_memmove((R+24),(R+8),4);
}
B7332f9:{NFSU2_TR(0x7332f9);
if(r1(F+6)){{[[clang::musttail]] return blk_733308(ARGS);}}
}
B7332fb:L7332fb:{bud-=4;NFSU2_TR(0x7332fb);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7332fe:{NFSU2_TR(0x7332fe);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7332ff:{NFSU2_TR(0x7332ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733300:{NFSU2_TR(0x733300);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a08),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733306ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733306(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733306:L733306:{bud-=1;NFSU2_TR(0x733306);
{[[clang::musttail]] return blk_733311(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733308(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733308:L733308:{bud-=4;NFSU2_TR(0x733308);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B73330a:{NFSU2_TR(0x73330a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73330b:{NFSU2_TR(0x73330b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73330c:{NFSU2_TR(0x73330c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733311ull));
{[[clang::musttail]] return blk_734d20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733311(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733311:L733311:{bud-=8;NFSU2_TR(0x733311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733314:{NFSU2_TR(0x733314);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B733316:{NFSU2_TR(0x733316);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B733319:{NFSU2_TR(0x733319);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B73331c:{NFSU2_TR(0x73331c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B73331f:{NFSU2_TR(0x73331f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733320:{NFSU2_TR(0x733320);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733321:{NFSU2_TR(0x733321);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733326ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x727030u);}[[clang::musttail]] return blk_727030(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733326(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733326:L733326:{bud-=2;NFSU2_TR(0x733326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733327:{NFSU2_TR(0x733327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_733328(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733328(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733328:L733328:{bud-=6;NFSU2_TR(0x733328);
w1(F+0,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B73332a:{NFSU2_TR(0x73332a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73332b:{NFSU2_TR(0x73332b);
u8 U[6];
w1(F+11,scarry<u32>(r4(G+0),u32(0x1ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B73332c:{NFSU2_TR(0x73332c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73332d:{NFSU2_TR(0x73332d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73332e:{NFSU2_TR(0x73332e);
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
PN u32 blk_73332f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73332f:L73332f:{bud-=13;NFSU2_TR(0x73332f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733333:{NFSU2_TR(0x733333);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733337:{NFSU2_TR(0x733337);
u8 U[4];
w4(U+0,u32(0x7332a3ull));
s4(u32(r4(G+0)),r4(U+0));
}
B73333d:{NFSU2_TR(0x73333d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73333f:{NFSU2_TR(0x73333f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733343:{NFSU2_TR(0x733343);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733346:{NFSU2_TR(0x733346);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733349:{NFSU2_TR(0x733349);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73334c:{NFSU2_TR(0x73334c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73334f:{NFSU2_TR(0x73334f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733352:{NFSU2_TR(0x733352);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x73329bull));
s4(u32(r4(U+0)),r4(U+4));
}
B733359:{NFSU2_TR(0x733359);
u8 U[14];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B73335d:{NFSU2_TR(0x73335d);
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
PN u32 blk_73335e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73335e:L73335e:{bud-=4;NFSU2_TR(0x73335e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73335f:{NFSU2_TR(0x73335f);
__builtin_memmove((R+20),(G+16),4);
}
B733361:{NFSU2_TR(0x733361);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733362:{NFSU2_TR(0x733362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffff80ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_733369(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733369(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733369:L733369:{bud-=7;NFSU2_TR(0x733369);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73336c:{NFSU2_TR(0x73336c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B733370:{NFSU2_TR(0x733370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733373:{NFSU2_TR(0x733373);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x7full))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x7full)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x7full))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B733377:{NFSU2_TR(0x733377);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73337d:{NFSU2_TR(0x73337d);
{u32 ea_=u32((r4(G+0)*4u)+u32(9128760u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733384:{NFSU2_TR(0x733384);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733369u);}goto L733369;}}
}
B733386:L733386:{bud-=2;NFSU2_TR(0x733386);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B733387:{NFSU2_TR(0x733387);
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
PN u32 blk_733388(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733388:L733388:{bud-=14;NFSU2_TR(0x733388);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733389:{NFSU2_TR(0x733389);
__builtin_memmove((R+20),(G+16),4);
}
B73338b:{NFSU2_TR(0x73338b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B73338e:{NFSU2_TR(0x73338e);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B733392:{NFSU2_TR(0x733392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B733396:{NFSU2_TR(0x733396);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733397:{NFSU2_TR(0x733397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73339a:{NFSU2_TR(0x73339a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B73339c:{NFSU2_TR(0x73339c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B73339f:{NFSU2_TR(0x73339f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7333a2:{NFSU2_TR(0x7333a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B7333a5:{NFSU2_TR(0x7333a5);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+0))));
}
B7333a7:{NFSU2_TR(0x7333a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B7333ab:{NFSU2_TR(0x7333ab);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_73344c(ARGS);}}
}
B7333b1:L7333b1:{bud-=5;NFSU2_TR(0x7333b1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7333b7:{NFSU2_TR(0x7333b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7333b8:{NFSU2_TR(0x7333b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7333bb:{NFSU2_TR(0x7333bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7333bc:{NFSU2_TR(0x7333bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_7333bf(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7333bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7333bf:L7333bf:{bud-=4;NFSU2_TR(0x7333bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B7333c1:{NFSU2_TR(0x7333c1);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7333c3:{NFSU2_TR(0x7333c3);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7333c5:{NFSU2_TR(0x7333c5);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_7333cd(ARGS);}}
}
B7333c7:L7333c7:{bud-=1;NFSU2_TR(0x7333c7);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_7333cd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7333cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7333cd:L7333cd:{bud-=45;NFSU2_TR(0x7333cd);
{u32 ea_=u32(u32(8199932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7333d3:{NFSU2_TR(0x7333d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7333d5:{NFSU2_TR(0x7333d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7333d8:{NFSU2_TR(0x7333d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7333dc:{NFSU2_TR(0x7333dc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B7333de:{NFSU2_TR(0x7333de);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B7333e0:{NFSU2_TR(0x7333e0);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7333e2:{NFSU2_TR(0x7333e2);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7333e5:{NFSU2_TR(0x7333e5);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7333eb:{NFSU2_TR(0x7333eb);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7333ee:{NFSU2_TR(0x7333ee);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7333f0:{NFSU2_TR(0x7333f0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B7333f2:{NFSU2_TR(0x7333f2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B7333f4:{NFSU2_TR(0x7333f4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B7333f6:{NFSU2_TR(0x7333f6);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B7333f8:{NFSU2_TR(0x7333f8);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7333fb:{NFSU2_TR(0x7333fb);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7333fd:{NFSU2_TR(0x7333fd);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733400:{NFSU2_TR(0x733400);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733402:{NFSU2_TR(0x733402);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733408:{NFSU2_TR(0x733408);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73340a:{NFSU2_TR(0x73340a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73340d:{NFSU2_TR(0x73340d);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B73340f:{NFSU2_TR(0x73340f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B733411:{NFSU2_TR(0x733411);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B733413:{NFSU2_TR(0x733413);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733415:{NFSU2_TR(0x733415);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733418:{NFSU2_TR(0x733418);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73341b:{NFSU2_TR(0x73341b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B73341d:{NFSU2_TR(0x73341d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B73341f:{NFSU2_TR(0x73341f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733421:{NFSU2_TR(0x733421);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733423:{NFSU2_TR(0x733423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733426:{NFSU2_TR(0x733426);
{u32 ea_=u32((r4(R+8)*4u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733429:{NFSU2_TR(0x733429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(G+4)),r4(U+0));
}
B73342b:{NFSU2_TR(0x73342b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B73342d:{NFSU2_TR(0x73342d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B733430:{NFSU2_TR(0x733430);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B733432:{NFSU2_TR(0x733432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(G+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B733434:{NFSU2_TR(0x733434);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B733436:{NFSU2_TR(0x733436);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B73343b:{NFSU2_TR(0x73343b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73343c:{NFSU2_TR(0x73343c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(R+8))<(r4(U+14))));
w1(F+11,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B73343f:{NFSU2_TR(0x73343f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733442:{NFSU2_TR(0x733442);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7333bfu);}[[clang::musttail]] return blk_7333bf(ARGS);}}
}
B733448:L733448:{bud-=3;NFSU2_TR(0x733448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733449:{NFSU2_TR(0x733449);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73344b:{NFSU2_TR(0x73344b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_73344c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73344c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73344c:L73344c:{bud-=4;NFSU2_TR(0x73344c);
u8 U[49];
w4(U+41,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+5),gp(u32(r4(G+4))),4);
__builtin_memmove((U+45),(U+5),4);
__builtin_memmove((U+5),gp(u32(r4(G+4))),4);
w4(U+5,shl<u32>(r4(U+5),u64(r4(U+41))));
s4(u32(r4(G+4)),r4(U+5));
w1(U+28,u8((r4(U+41))==(u32(0x0ull))));
w4(U+29,u32(u32(r4(U+41))-u32(u32(0x1ull))));
w4(U+33,shl<u32>(r4(U+45),u64(r4(U+29))));
w1(U+37,u8(s32(r4(U+33))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+28),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+28))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+41))==(u32(0x1ull))));
__builtin_memmove((U+5),gp(u32(r4(G+4))),4);
w1(U+39,u8(s32(r4(U+5))<s32(u32(0x0ull))));
w1(U+40,u8(u32(r1(F+0))^u32(r1(U+39))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+40))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(F+11))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+9,u8((r4(U+41))!=(u32(0x0ull))));
__builtin_memmove((U+5),gp(u32(r4(G+4))),4);
w1(U+10,u8(s32(r4(U+5))<s32(u32(0x0ull))));
w1(U+11,u8(!(r1(U+9))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+7))));
w1(U+13,u8(u32(r1(U+9))&u32(r1(U+10))));
w1(F+7,u8(u32(r1(U+12))|u32(r1(U+13))));
__builtin_memmove((U+5),gp(u32(r4(G+4))),4);
w1(U+14,u8((r4(U+5))==(u32(0x0ull))));
w1(U+15,u8(!(r1(U+9))));
w1(U+16,u8(u32(r1(U+15))&u32(r1(F+6))));
w1(U+17,u8(u32(r1(U+9))&u32(r1(U+14))));
w1(F+6,u8(u32(r1(U+16))|u32(r1(U+17))));
__builtin_memmove((U+5),gp(u32(r4(G+4))),4);
w4(U+18,u32(u32(r4(U+5))&u32(u32(0xffull))));
w1(U+22,u8(__builtin_popcountll(u64(r4(U+18)))));
w1(U+23,u8(u32(r1(U+22))&u32(u8(0x1ull))));
w1(U+24,u8((r1(U+23))==(u8(0x0ull))));
w1(U+25,u8(!(r1(U+9))));
w1(U+26,u8(u32(r1(U+25))&u32(r1(F+2))));
w1(U+27,u8(u32(r1(U+9))&u32(r1(U+24))));
w1(F+2,u8(u32(r1(U+26))|u32(r1(U+27))));
}
B73344f:{NFSU2_TR(0x73344f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733450:{NFSU2_TR(0x733450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B733451:{NFSU2_TR(0x733451);
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
PN u32 blk_733460(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733460:L733460:{bud-=16;NFSU2_TR(0x733460);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733461:{NFSU2_TR(0x733461);
__builtin_memmove((R+20),(G+16),4);
}
B733463:{NFSU2_TR(0x733463);
u8 U[8];
__builtin_memmove((U+4),(G+16),4);
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733464:{NFSU2_TR(0x733464);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733465:{NFSU2_TR(0x733465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733468:{NFSU2_TR(0x733468);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73346b:{NFSU2_TR(0x73346b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73346e:{NFSU2_TR(0x73346e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733471:{NFSU2_TR(0x733471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733474:{NFSU2_TR(0x733474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B733476:{NFSU2_TR(0x733476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733479:{NFSU2_TR(0x733479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73347c:{NFSU2_TR(0x73347c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B73347f:{NFSU2_TR(0x73347f);
__builtin_memmove(gp(0x819160),(G+16),4);
}
B733485:{NFSU2_TR(0x733485);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733488:{NFSU2_TR(0x733488);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_733614(ARGS);}}
}
B73348e:L73348e:{bud-=1;NFSU2_TR(0x73348e);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
{[[clang::musttail]] return blk_733491(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733491(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733491:L733491:{bud-=90;NFSU2_TR(0x733491);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733493:{NFSU2_TR(0x733493);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B733497:{NFSU2_TR(0x733497);
__builtin_memmove(gp(0x819110),(R+12),4);
}
B73349d:{NFSU2_TR(0x73349d);
__builtin_memmove(gp(0x8190d0),(G+16),4);
}
B7334a3:{NFSU2_TR(0x7334a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+16),(U+8),4);
}
B7334a6:{NFSU2_TR(0x7334a6);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334a8:{NFSU2_TR(0x7334a8);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7334aa:{NFSU2_TR(0x7334aa);
__builtin_memmove(gp(0x8190e0),(G+16),4);
}
B7334b0:{NFSU2_TR(0x7334b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B7334b4:{NFSU2_TR(0x7334b4);
__builtin_memmove(gp(0x8190f0),(G+16),4);
}
B7334ba:{NFSU2_TR(0x7334ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B7334be:{NFSU2_TR(0x7334be);
__builtin_memmove(gp(0x819100),(G+16),4);
}
B7334c4:{NFSU2_TR(0x7334c4);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7334c6:{NFSU2_TR(0x7334c6);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334c8:{NFSU2_TR(0x7334c8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B7334cc:{NFSU2_TR(0x7334cc);
__builtin_memmove(gp(0x819114),(R+12),4);
}
B7334d2:{NFSU2_TR(0x7334d2);
__builtin_memmove(gp(0x8190d4),(G+16),4);
}
B7334d8:{NFSU2_TR(0x7334d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+16),(U+8),4);
}
B7334db:{NFSU2_TR(0x7334db);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334dd:{NFSU2_TR(0x7334dd);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7334df:{NFSU2_TR(0x7334df);
__builtin_memmove(gp(0x8190e4),(G+16),4);
}
B7334e5:{NFSU2_TR(0x7334e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B7334e9:{NFSU2_TR(0x7334e9);
__builtin_memmove(gp(0x8190f4),(G+16),4);
}
B7334ef:{NFSU2_TR(0x7334ef);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B7334f3:{NFSU2_TR(0x7334f3);
__builtin_memmove(gp(0x819104),(G+16),4);
}
B7334f9:{NFSU2_TR(0x7334f9);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7334fb:{NFSU2_TR(0x7334fb);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7334fd:{NFSU2_TR(0x7334fd);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B733501:{NFSU2_TR(0x733501);
__builtin_memmove(gp(0x819118),(R+12),4);
}
B733507:{NFSU2_TR(0x733507);
__builtin_memmove(gp(0x8190d8),(G+16),4);
}
B73350d:{NFSU2_TR(0x73350d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+16),(U+8),4);
}
B733510:{NFSU2_TR(0x733510);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733512:{NFSU2_TR(0x733512);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733514:{NFSU2_TR(0x733514);
__builtin_memmove(gp(0x8190e8),(G+16),4);
}
B73351a:{NFSU2_TR(0x73351a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B73351e:{NFSU2_TR(0x73351e);
__builtin_memmove(gp(0x8190f8),(G+16),4);
}
B733524:{NFSU2_TR(0x733524);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B733528:{NFSU2_TR(0x733528);
__builtin_memmove(gp(0x819108),(G+16),4);
}
B73352e:{NFSU2_TR(0x73352e);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733530:{NFSU2_TR(0x733530);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733532:{NFSU2_TR(0x733532);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B733536:{NFSU2_TR(0x733536);
__builtin_memmove(gp(0x81911c),(R+12),4);
}
B73353c:{NFSU2_TR(0x73353c);
__builtin_memmove(gp(0x8190dc),(G+16),4);
}
B733542:{NFSU2_TR(0x733542);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+16),(U+8),4);
}
B733545:{NFSU2_TR(0x733545);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733547:{NFSU2_TR(0x733547);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733549:{NFSU2_TR(0x733549);
__builtin_memmove(gp(0x8190ec),(G+16),4);
}
B73354f:{NFSU2_TR(0x73354f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B733553:{NFSU2_TR(0x733553);
__builtin_memmove(gp(0x8190fc),(G+16),4);
}
B733559:{NFSU2_TR(0x733559);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+16),(U+12),4);
}
B73355d:{NFSU2_TR(0x73355d);
__builtin_memmove(gp(0x81910c),(G+16),4);
}
B733563:{NFSU2_TR(0x733563);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733565:{NFSU2_TR(0x733565);
u8 U[8];
__builtin_memmove((U+0),gp(0x819118),8);
w4(R+5056,b32(float(s64(s32(r4(U+0))))));
w4(R+5060,b32(float(s64(s32(r4(U+4))))));
}
B73356c:{NFSU2_TR(0x73356c);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190d0),16);
__builtin_memmove((R+4608),(U+0),4);
__builtin_memmove((R+4612),(U+4),4);
__builtin_memmove((R+4616),(U+8),4);
__builtin_memmove((R+4620),(U+12),4);
}
B733573:{NFSU2_TR(0x733573);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733577:{NFSU2_TR(0x733577);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190e0),16);
__builtin_memmove((R+4672),(U+0),4);
__builtin_memmove((R+4676),(U+4),4);
__builtin_memmove((R+4680),(U+8),4);
__builtin_memmove((R+4684),(U+12),4);
}
B73357e:{NFSU2_TR(0x73357e);
u8 U[8];
__builtin_memmove((U+0),gp(0x819110),8);
w4(R+5056,b32(float(s64(s32(r4(U+0))))));
w4(R+5060,b32(float(s64(s32(r4(U+4))))));
}
B733585:{NFSU2_TR(0x733585);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190f0),16);
__builtin_memmove((R+4736),(U+0),4);
__builtin_memmove((R+4740),(U+4),4);
__builtin_memmove((R+4744),(U+8),4);
__builtin_memmove((R+4748),(U+12),4);
}
B73358c:{NFSU2_TR(0x73358c);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733590:{NFSU2_TR(0x733590);
u8 U[16];
__builtin_memmove((U+0),gp(0x819100),16);
__builtin_memmove((R+4800),(U+0),4);
__builtin_memmove((R+4804),(U+4),4);
__builtin_memmove((R+4808),(U+8),4);
__builtin_memmove((R+4812),(U+12),4);
}
B733597:{NFSU2_TR(0x733597);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190c0),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+0))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+4))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+8))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+12))));
}
B73359e:{NFSU2_TR(0x73359e);
u8 U[16];
__builtin_memmove((U+0),gp(0x819130),16);
__builtin_memmove((R+4928),(U+0),4);
__builtin_memmove((R+4932),(U+4),4);
__builtin_memmove((R+4936),(U+8),4);
__builtin_memmove((R+4940),(U+12),4);
}
B7335a5:{NFSU2_TR(0x7335a5);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B7335a8:{NFSU2_TR(0x7335a8);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B7335ab:{NFSU2_TR(0x7335ab);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4736))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4740))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+4744))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+4748))));
}
B7335ae:{NFSU2_TR(0x7335ae);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4620))));
}
B7335b1:{NFSU2_TR(0x7335b1);
u8 U[16];
__builtin_memmove((U+0),gp(0x819140),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+0))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+4))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+8))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+12))));
}
B7335b8:{NFSU2_TR(0x7335b8);
u8 U[16];
__builtin_memmove((U+0),gp(0x819150),16);
__builtin_memmove((R+4992),(U+0),4);
__builtin_memmove((R+4996),(U+4),4);
__builtin_memmove((R+5000),(U+8),4);
__builtin_memmove((R+5004),(U+12),4);
}
B7335bf:{NFSU2_TR(0x7335bf);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4608))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4612))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+4616))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+4620))));
}
B7335c2:{NFSU2_TR(0x7335c2);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4676))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4680))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4684))));
}
B7335c5:{NFSU2_TR(0x7335c5);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4804))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4808))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4812))));
}
B7335c8:{NFSU2_TR(0x7335c8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B7335cb:{NFSU2_TR(0x7335cb);
u8 U[16];
__builtin_memmove((U+0),gp(0x819120),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+0))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+4))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+8))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+12))));
}
B7335d2:{NFSU2_TR(0x7335d2);
u8 U[16];
__builtin_memmove((U+0),gp(0x819120),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+12))));
}
B7335d9:{NFSU2_TR(0x7335d9);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5004))));
}
B7335dc:{NFSU2_TR(0x7335dc);
__builtin_memmove((R+4992),(R+4736),4);
__builtin_memmove((R+4996),(R+4740),4);
__builtin_memmove((R+5000),(R+4744),4);
__builtin_memmove((R+5004),(R+4748),4);
}
B7335df:{NFSU2_TR(0x7335df);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4608))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4612))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4616))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4620))));
}
B7335e2:{NFSU2_TR(0x7335e2);
u8 U[16];
__builtin_memmove((U+0),gp(0x819120),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+12))));
}
B7335e9:{NFSU2_TR(0x7335e9);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B7335ec:{NFSU2_TR(0x7335ec);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+5060))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+5064))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+5068))));
}
B7335ef:{NFSU2_TR(0x7335ef);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+5068))));
}
B7335f2:{NFSU2_TR(0x7335f2);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+5060))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+5064))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+5068))));
}
B7335f5:{NFSU2_TR(0x7335f5);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+5056))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+5060))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+5064))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+5068))));
}
B7335f8:{NFSU2_TR(0x7335f8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B7335fb:{NFSU2_TR(0x7335fb);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4876))));
}
B7335fe:{NFSU2_TR(0x7335fe);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4992))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4996))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+5000))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+5004))));
}
B733601:{NFSU2_TR(0x733601);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B733604:{NFSU2_TR(0x733604);
w1(F+11,sborrow<u32>(r4(G+4),u32(0x4ull)));
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
}
B733607:{NFSU2_TR(0x733607);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B73360b:{NFSU2_TR(0x73360b);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733491u);}goto L733491;}}
}
B733611:L733611:{bud-=1;NFSU2_TR(0x733611);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x4ull))));
{[[clang::musttail]] return blk_733614(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733614(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733614:L733614:{bud-=2;NFSU2_TR(0x733614);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+4))&u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B73361a:{NFSU2_TR(0x73361a);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7336de(ARGS);}}
}
B733620:L733620:{bud-=40;NFSU2_TR(0x733620);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733622:{NFSU2_TR(0x733622);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4608),(U+12),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B733628:{NFSU2_TR(0x733628);
__builtin_memmove(gp(0x819110),(R+12),4);
}
B73362e:{NFSU2_TR(0x73362e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4672),(U+8),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B733633:{NFSU2_TR(0x733633);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733635:{NFSU2_TR(0x733635);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733637:{NFSU2_TR(0x733637);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B73363d:{NFSU2_TR(0x73363d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4800),(U+12),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B733643:{NFSU2_TR(0x733643);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733645:{NFSU2_TR(0x733645);
u8 U[8];
__builtin_memmove((U+0),gp(0x819110),8);
w4(R+5056,b32(float(s64(s32(r4(U+0))))));
w4(R+5060,b32(float(s64(s32(r4(U+4))))));
}
B73364c:{NFSU2_TR(0x73364c);
u8 U[16];
__builtin_memmove((U+0),gp(0x8190c0),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+0))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+4))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+8))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+12))));
}
B733653:{NFSU2_TR(0x733653);
__builtin_memmove((R+4864),(R+4672),4);
}
B733657:{NFSU2_TR(0x733657);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4736))));
}
B73365b:{NFSU2_TR(0x73365b);
w4(R+4864,b32(f32(r4(R+4864))*f32(m4(0x819140))));
}
B733663:{NFSU2_TR(0x733663);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4608))));
}
B733667:{NFSU2_TR(0x733667);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
}
B73366b:{NFSU2_TR(0x73366b);
w4(R+4864,b32(f32(r4(R+4864))*f32(m4(0x819120))));
}
B733673:{NFSU2_TR(0x733673);
__builtin_memmove((R+4928),gp(0x819130),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B73367b:{NFSU2_TR(0x73367b);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
}
B73367f:{NFSU2_TR(0x73367f);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4608))));
}
B733683:{NFSU2_TR(0x733683);
__builtin_memmove((R+4992),gp(0x819150),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B73368b:{NFSU2_TR(0x73368b);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
}
B73368f:{NFSU2_TR(0x73368f);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
}
B733693:{NFSU2_TR(0x733693);
w4(R+4992,b32(f32(r4(R+4992))*f32(m4(0x819120))));
}
B73369b:{NFSU2_TR(0x73369b);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4992))));
}
B73369f:{NFSU2_TR(0x73369f);
__builtin_memmove((R+4992),(R+4736),4);
}
B7336a3:{NFSU2_TR(0x7336a3);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4608))));
}
B7336a7:{NFSU2_TR(0x7336a7);
w4(R+4992,b32(f32(r4(R+4992))*f32(m4(0x819120))));
}
B7336af:{NFSU2_TR(0x7336af);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B7336b3:{NFSU2_TR(0x7336b3);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
}
B7336b7:{NFSU2_TR(0x7336b7);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+5056))));
}
B7336bb:{NFSU2_TR(0x7336bb);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+5056))));
}
B7336bf:{NFSU2_TR(0x7336bf);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+5056))));
}
B7336c3:{NFSU2_TR(0x7336c3);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
}
B7336c7:{NFSU2_TR(0x7336c7);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4864))));
}
B7336cb:{NFSU2_TR(0x7336cb);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4992))));
}
B7336cf:{NFSU2_TR(0x7336cf);
u8 U[4];
__builtin_memmove((U+0),(R+4672),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7336d3:{NFSU2_TR(0x7336d3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7336d6:{NFSU2_TR(0x7336d6);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B7336d9:{NFSU2_TR(0x7336d9);
{if(__builtin_expect(bud<=0,0)){EXIT(0x733614u);}goto L733614;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7336de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7336de:L7336de:{bud-=10;NFSU2_TR(0x7336de);
__builtin_memmove((G+16),gp(0x819160),4);
}
B7336e4:{NFSU2_TR(0x7336e4);
__builtin_memmove((G+4),(R+20),4);
}
B7336e6:{NFSU2_TR(0x7336e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7336e7:{NFSU2_TR(0x7336e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7336ea:{NFSU2_TR(0x7336ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7336ed:{NFSU2_TR(0x7336ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7336ef:{NFSU2_TR(0x7336ef);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B7336f1:{NFSU2_TR(0x7336f1);
__builtin_memmove((R+28),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7336f2:{NFSU2_TR(0x7336f2);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7336f3:{NFSU2_TR(0x7336f3);
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
PN u32 blk_733700(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733700:L733700:{bud-=16;NFSU2_TR(0x733700);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733701:{NFSU2_TR(0x733701);
__builtin_memmove((R+20),(G+16),4);
}
B733703:{NFSU2_TR(0x733703);
u8 U[8];
__builtin_memmove((U+4),(G+16),4);
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733704:{NFSU2_TR(0x733704);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733705:{NFSU2_TR(0x733705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733708:{NFSU2_TR(0x733708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73370b:{NFSU2_TR(0x73370b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73370e:{NFSU2_TR(0x73370e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733711:{NFSU2_TR(0x733711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733714:{NFSU2_TR(0x733714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B733716:{NFSU2_TR(0x733716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733719:{NFSU2_TR(0x733719);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B73371f:{NFSU2_TR(0x73371f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B733722:{NFSU2_TR(0x733722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B733725:{NFSU2_TR(0x733725);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733728:{NFSU2_TR(0x733728);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_733785(ARGS);}}
}
B73372a:L73372a:{bud-=1;NFSU2_TR(0x73372a);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x2ull))));
{[[clang::musttail]] return blk_73372d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_73372d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73372d:L73372d:{bud-=24;NFSU2_TR(0x73372d);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733731:{NFSU2_TR(0x733731);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B733734:{NFSU2_TR(0x733734);
{u32 ea_=u32(u32(8491376u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B73373a:{NFSU2_TR(0x73373a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B73373c:{NFSU2_TR(0x73373c);
{u32 ea_=u32(u32(8491384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733742:{NFSU2_TR(0x733742);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B733744:{NFSU2_TR(0x733744);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733747:{NFSU2_TR(0x733747);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733749:{NFSU2_TR(0x733749);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B73374c:{NFSU2_TR(0x73374c);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B733752:{NFSU2_TR(0x733752);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733755:{NFSU2_TR(0x733755);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733759:{NFSU2_TR(0x733759);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73375c:{NFSU2_TR(0x73375c);
{u32 ea_=u32(u32(8491376u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B733762:{NFSU2_TR(0x733762);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B733764:{NFSU2_TR(0x733764);
{u32 ea_=u32(u32(8491384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73376a:{NFSU2_TR(0x73376a);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73376c:{NFSU2_TR(0x73376c);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73376f:{NFSU2_TR(0x73376f);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733771:{NFSU2_TR(0x733771);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B733774:{NFSU2_TR(0x733774);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B73377a:{NFSU2_TR(0x73377a);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73377d:{NFSU2_TR(0x73377d);
w1(F+11,sborrow<u32>(r4(G+4),u32(0x2ull)));
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
}
B733780:{NFSU2_TR(0x733780);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x73372du);}goto L73372d;}}
}
B733782:L733782:{bud-=1;NFSU2_TR(0x733782);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x2ull))));
{[[clang::musttail]] return blk_733785(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733785(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733785:L733785:{bud-=2;NFSU2_TR(0x733785);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+4))&u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B73378b:{NFSU2_TR(0x73378b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7337ba(ARGS);}}
}
B73378d:L73378d:{bud-=13;NFSU2_TR(0x73378d);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733791:{NFSU2_TR(0x733791);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B733794:{NFSU2_TR(0x733794);
{u32 ea_=u32(u32(8491376u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B73379a:{NFSU2_TR(0x73379a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B73379c:{NFSU2_TR(0x73379c);
{u32 ea_=u32(u32(8491384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7337a2:{NFSU2_TR(0x7337a2);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7337a4:{NFSU2_TR(0x7337a4);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7337a7:{NFSU2_TR(0x7337a7);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7337a9:{NFSU2_TR(0x7337a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7337ac:{NFSU2_TR(0x7337ac);
__builtin_memmove(gp(0x819170),(R+12),4);
}
B7337b2:{NFSU2_TR(0x7337b2);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7337b5:{NFSU2_TR(0x7337b5);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B7337b8:{NFSU2_TR(0x7337b8);
{if(__builtin_expect(bud<=0,0)){EXIT(0x733785u);}goto L733785;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7337ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7337ba:L7337ba:{bud-=9;NFSU2_TR(0x7337ba);
__builtin_memmove((G+4),(R+20),4);
}
B7337bc:{NFSU2_TR(0x7337bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7337bd:{NFSU2_TR(0x7337bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7337c0:{NFSU2_TR(0x7337c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7337c3:{NFSU2_TR(0x7337c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7337c5:{NFSU2_TR(0x7337c5);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B7337c7:{NFSU2_TR(0x7337c7);
__builtin_memmove((R+28),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7337c8:{NFSU2_TR(0x7337c8);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7337c9:{NFSU2_TR(0x7337c9);
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
PN u32 blk_7337d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7337d0:L7337d0:{bud-=16;NFSU2_TR(0x7337d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7337d1:{NFSU2_TR(0x7337d1);
__builtin_memmove((R+20),(G+16),4);
}
B7337d3:{NFSU2_TR(0x7337d3);
u8 U[8];
__builtin_memmove((U+4),(G+16),4);
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7337d4:{NFSU2_TR(0x7337d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7337d5:{NFSU2_TR(0x7337d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7337d8:{NFSU2_TR(0x7337d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7337db:{NFSU2_TR(0x7337db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7337de:{NFSU2_TR(0x7337de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7337e1:{NFSU2_TR(0x7337e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7337e4:{NFSU2_TR(0x7337e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B7337e6:{NFSU2_TR(0x7337e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7337e9:{NFSU2_TR(0x7337e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7337ec:{NFSU2_TR(0x7337ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B7337ef:{NFSU2_TR(0x7337ef);
u8 U[16];
__builtin_memmove((U+0),gp(0x819180),16);
__builtin_memmove((R+5056),(U+0),4);
__builtin_memmove((R+5060),(U+4),4);
__builtin_memmove((R+5064),(U+8),4);
__builtin_memmove((R+5068),(U+12),4);
}
B7337f6:{NFSU2_TR(0x7337f6);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7337f9:{NFSU2_TR(0x7337f9);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_733985(ARGS);}}
}
B7337ff:L7337ff:{bud-=1;NFSU2_TR(0x7337ff);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x8ull))));
{[[clang::musttail]] return blk_733802(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733802(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733802:L733802:{bud-=97;NFSU2_TR(0x733802);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733803:{NFSU2_TR(0x733803);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733805:{NFSU2_TR(0x733805);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B733809:{NFSU2_TR(0x733809);
__builtin_memmove(gp(0x8191c0),(R+12),4);
}
B73380f:{NFSU2_TR(0x73380f);
__builtin_memmove(gp(0x8191b0),(R+28),4);
}
B733815:{NFSU2_TR(0x733815);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B733818:{NFSU2_TR(0x733818);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73381a:{NFSU2_TR(0x73381a);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73381c:{NFSU2_TR(0x73381c);
__builtin_memmove(gp(0x819190),(R+28),4);
}
B733822:{NFSU2_TR(0x733822);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733824:{NFSU2_TR(0x733824);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733826:{NFSU2_TR(0x733826);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73382a:{NFSU2_TR(0x73382a);
__builtin_memmove(gp(0x8191c4),(R+12),4);
}
B733830:{NFSU2_TR(0x733830);
__builtin_memmove(gp(0x8191b4),(R+28),4);
}
B733836:{NFSU2_TR(0x733836);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B733839:{NFSU2_TR(0x733839);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73383b:{NFSU2_TR(0x73383b);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73383d:{NFSU2_TR(0x73383d);
__builtin_memmove(gp(0x819194),(R+28),4);
}
B733843:{NFSU2_TR(0x733843);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733845:{NFSU2_TR(0x733845);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733847:{NFSU2_TR(0x733847);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73384b:{NFSU2_TR(0x73384b);
__builtin_memmove(gp(0x8191c8),(R+12),4);
}
B733851:{NFSU2_TR(0x733851);
__builtin_memmove(gp(0x8191b8),(R+28),4);
}
B733857:{NFSU2_TR(0x733857);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B73385a:{NFSU2_TR(0x73385a);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73385c:{NFSU2_TR(0x73385c);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73385e:{NFSU2_TR(0x73385e);
__builtin_memmove(gp(0x819198),(R+28),4);
}
B733864:{NFSU2_TR(0x733864);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733866:{NFSU2_TR(0x733866);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733868:{NFSU2_TR(0x733868);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73386c:{NFSU2_TR(0x73386c);
__builtin_memmove(gp(0x8191cc),(R+12),4);
}
B733872:{NFSU2_TR(0x733872);
__builtin_memmove(gp(0x8191bc),(R+28),4);
}
B733878:{NFSU2_TR(0x733878);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B73387b:{NFSU2_TR(0x73387b);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73387d:{NFSU2_TR(0x73387d);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73387f:{NFSU2_TR(0x73387f);
__builtin_memmove(gp(0x81919c),(R+28),4);
}
B733885:{NFSU2_TR(0x733885);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733887:{NFSU2_TR(0x733887);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191b0),16);
__builtin_memmove((R+4672),(U+0),4);
__builtin_memmove((R+4676),(U+4),4);
__builtin_memmove((R+4680),(U+8),4);
__builtin_memmove((R+4684),(U+12),4);
}
B73388e:{NFSU2_TR(0x73388e);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733890:{NFSU2_TR(0x733890);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B733894:{NFSU2_TR(0x733894);
__builtin_memmove(gp(0x8191d0),(R+12),4);
}
B73389a:{NFSU2_TR(0x73389a);
__builtin_memmove(gp(0x8191b0),(R+28),4);
}
B7338a0:{NFSU2_TR(0x7338a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B7338a3:{NFSU2_TR(0x7338a3);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338a5:{NFSU2_TR(0x7338a5);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7338a7:{NFSU2_TR(0x7338a7);
__builtin_memmove(gp(0x8191a0),(R+28),4);
}
B7338ad:{NFSU2_TR(0x7338ad);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7338af:{NFSU2_TR(0x7338af);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338b1:{NFSU2_TR(0x7338b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7338b5:{NFSU2_TR(0x7338b5);
__builtin_memmove(gp(0x8191d4),(R+12),4);
}
B7338bb:{NFSU2_TR(0x7338bb);
__builtin_memmove(gp(0x8191b4),(R+28),4);
}
B7338c1:{NFSU2_TR(0x7338c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B7338c4:{NFSU2_TR(0x7338c4);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338c6:{NFSU2_TR(0x7338c6);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7338c8:{NFSU2_TR(0x7338c8);
__builtin_memmove(gp(0x8191a4),(R+28),4);
}
B7338ce:{NFSU2_TR(0x7338ce);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7338d0:{NFSU2_TR(0x7338d0);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338d2:{NFSU2_TR(0x7338d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7338d6:{NFSU2_TR(0x7338d6);
__builtin_memmove(gp(0x8191d8),(R+12),4);
}
B7338dc:{NFSU2_TR(0x7338dc);
__builtin_memmove(gp(0x8191b8),(R+28),4);
}
B7338e2:{NFSU2_TR(0x7338e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B7338e5:{NFSU2_TR(0x7338e5);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338e7:{NFSU2_TR(0x7338e7);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7338e9:{NFSU2_TR(0x7338e9);
__builtin_memmove(gp(0x8191a8),(R+28),4);
}
B7338ef:{NFSU2_TR(0x7338ef);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7338f1:{NFSU2_TR(0x7338f1);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7338f3:{NFSU2_TR(0x7338f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B7338f7:{NFSU2_TR(0x7338f7);
__builtin_memmove(gp(0x8191dc),(R+12),4);
}
B7338fd:{NFSU2_TR(0x7338fd);
__builtin_memmove(gp(0x8191bc),(R+28),4);
}
B733903:{NFSU2_TR(0x733903);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B733906:{NFSU2_TR(0x733906);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B733908:{NFSU2_TR(0x733908);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B73390a:{NFSU2_TR(0x73390a);
__builtin_memmove(gp(0x8191ac),(R+28),4);
}
B733910:{NFSU2_TR(0x733910);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B733912:{NFSU2_TR(0x733912);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191b0),16);
__builtin_memmove((R+4800),(U+0),4);
__builtin_memmove((R+4804),(U+4),4);
__builtin_memmove((R+4808),(U+8),4);
__builtin_memmove((R+4812),(U+12),4);
}
B733919:{NFSU2_TR(0x733919);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191c8),8);
w4(R+4992,b32(float(s64(s32(r4(U+0))))));
w4(R+4996,b32(float(s64(s32(r4(U+4))))));
}
B733920:{NFSU2_TR(0x733920);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191d8),8);
w4(R+4928,b32(float(s64(s32(r4(U+0))))));
w4(R+4932,b32(float(s64(s32(r4(U+4))))));
}
B733927:{NFSU2_TR(0x733927);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B73392b:{NFSU2_TR(0x73392b);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B73392f:{NFSU2_TR(0x73392f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191c0),8);
w4(R+4992,b32(float(s64(s32(r4(U+0))))));
w4(R+4996,b32(float(s64(s32(r4(U+4))))));
}
B733936:{NFSU2_TR(0x733936);
u8 U[8];
__builtin_memmove((U+0),gp(0x8191d0),8);
w4(R+4928,b32(float(s64(s32(r4(U+0))))));
w4(R+4932,b32(float(s64(s32(r4(U+4))))));
}
B73393d:{NFSU2_TR(0x73393d);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733941:{NFSU2_TR(0x733941);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B733945:{NFSU2_TR(0x733945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733946:{NFSU2_TR(0x733946);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B733949:{NFSU2_TR(0x733949);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+5068))));
}
B73394c:{NFSU2_TR(0x73394c);
u8 U[16];
__builtin_memmove((U+0),gp(0x819190),16);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(U+0))));
w4(R+4676,b32(f32(r4(R+4676))-f32(r4(U+4))));
w4(R+4680,b32(f32(r4(R+4680))-f32(r4(U+8))));
w4(R+4684,b32(f32(r4(R+4684))-f32(r4(U+12))));
}
B733953:{NFSU2_TR(0x733953);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191a0),16);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(U+0))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(U+4))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(U+8))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(U+12))));
}
B73395a:{NFSU2_TR(0x73395a);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4992))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4996))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+5000))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+5004))));
}
B73395d:{NFSU2_TR(0x73395d);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4940))));
}
B733960:{NFSU2_TR(0x733960);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B733963:{NFSU2_TR(0x733963);
u8 U[16];
__builtin_memmove((U+0),gp(0x819190),16);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+0))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(U+4))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(U+8))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(U+12))));
}
B73396a:{NFSU2_TR(0x73396a);
u8 U[16];
__builtin_memmove((U+0),gp(0x8191a0),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+0))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+4))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+8))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+12))));
}
B733971:{NFSU2_TR(0x733971);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B733975:{NFSU2_TR(0x733975);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B733979:{NFSU2_TR(0x733979);
w1(F+11,sborrow<u32>(r4(G+4),u32(0x8ull)));
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
}
B73397c:{NFSU2_TR(0x73397c);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733802u);}goto L733802;}}
}
B733982:L733982:{bud-=1;NFSU2_TR(0x733982);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
{[[clang::musttail]] return blk_733985(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733985(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733985:L733985:{bud-=2;NFSU2_TR(0x733985);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+4))&u32(u32(0x7ull))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B73398b:{NFSU2_TR(0x73398b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7339c1(ARGS);}}
}
B73398d:L73398d:{bud-=15;NFSU2_TR(0x73398d);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73398f:{NFSU2_TR(0x73398f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B733995:{NFSU2_TR(0x733995);
w4(R+4992,b32(float(s64(s32(r4(R+12))))));
}
B733999:{NFSU2_TR(0x733999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4608),(U+8),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B73399e:{NFSU2_TR(0x73399e);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(R+4608))));
}
B7339a2:{NFSU2_TR(0x7339a2);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B7339a6:{NFSU2_TR(0x7339a6);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7339a8:{NFSU2_TR(0x7339a8);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4992))));
}
B7339ac:{NFSU2_TR(0x7339ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7339af:{NFSU2_TR(0x7339af);
w1(F+0,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B7339b1:{NFSU2_TR(0x7339b1);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B7339b5:{NFSU2_TR(0x7339b5);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(G+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7339b7:{NFSU2_TR(0x7339b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4608),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7339bc:{NFSU2_TR(0x7339bc);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B7339bf:{NFSU2_TR(0x7339bf);
{if(__builtin_expect(bud<=0,0)){EXIT(0x733985u);}goto L733985;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7339c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7339c1:L7339c1:{bud-=9;NFSU2_TR(0x7339c1);
__builtin_memmove((G+4),(R+20),4);
}
B7339c3:{NFSU2_TR(0x7339c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7339c4:{NFSU2_TR(0x7339c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7339c7:{NFSU2_TR(0x7339c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7339ca:{NFSU2_TR(0x7339ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7339cc:{NFSU2_TR(0x7339cc);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B7339ce:{NFSU2_TR(0x7339ce);
__builtin_memmove((R+28),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7339cf:{NFSU2_TR(0x7339cf);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7339d0:{NFSU2_TR(0x7339d0);
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
PN u32 blk_7339d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7339d1:L7339d1:{bud-=1;NFSU2_TR(0x7339d1);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
{[[clang::musttail]] return blk_7339d3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7339d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7339d3:L7339d3:{bud-=5;NFSU2_TR(0x7339d3);
__builtin_memmove((G+0),(G+4),4);
}
B7339d5:{NFSU2_TR(0x7339d5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B7339d8:{NFSU2_TR(0x7339d8);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B7339d9:{NFSU2_TR(0x7339d9);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+14))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+14)));
w4(U+18,u32(u32(r4(G+0))-u32(r4(U+14))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B7339dd:{NFSU2_TR(0x7339dd);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7339e5(ARGS);}}
}
B7339df:L7339df:{bud-=1;NFSU2_TR(0x7339df);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7339d3u);}goto L7339d3;}}
}
B7339e1:L7339e1:{bud-=2;NFSU2_TR(0x7339e1);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((G+0),(U+0),4);
}
B7339e4:{NFSU2_TR(0x7339e4);
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
PN u32 blk_7339e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7339e5:L7339e5:{bud-=2;NFSU2_TR(0x7339e5);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((G+0),(U+0),4);
}
B7339e8:{NFSU2_TR(0x7339e8);
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
PN u32 blk_7339e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7339e9:L7339e9:{bud-=10;NFSU2_TR(0x7339e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7339ed:{NFSU2_TR(0x7339ed);
u8 U[32];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
w8(U+8,u64(s64(s32(r4(G+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(G+0,u32(r8(U+24)));
}
B7339f2:{NFSU2_TR(0x7339f2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7339f3:{NFSU2_TR(0x7339f3);
w4(G+4,u32(0x3e8ull));
}
B7339f8:{NFSU2_TR(0x7339f8);
u8 U[56];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7339f8);w8(U+40,u64(x_/y_));}
w4(G+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7339f8);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7339fa:{NFSU2_TR(0x7339fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7339fb:{NFSU2_TR(0x7339fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7339fc:{NFSU2_TR(0x7339fc);
__builtin_memmove((R+28),(G+0),4);
}
B7339fe:{NFSU2_TR(0x7339fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733a01:{NFSU2_TR(0x733a01);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_733a06(ARGS);}}
}
B733a03:L733a03:{bud-=2;NFSU2_TR(0x733a03);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a05:{NFSU2_TR(0x733a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_733a06(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733a06(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a06:L733a06:{bud-=2;NFSU2_TR(0x733a06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a07:{NFSU2_TR(0x733a07);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733a0cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7339d1u);}[[clang::musttail]] return blk_7339d1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733a0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a0c:L733a0c:{bud-=7;NFSU2_TR(0x733a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733a0d:{NFSU2_TR(0x733a0d);
__builtin_memmove((G+4),(G+0),4);
}
B733a0f:{NFSU2_TR(0x733a0f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a11:{NFSU2_TR(0x733a11);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B733a12:{NFSU2_TR(0x733a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a13:{NFSU2_TR(0x733a13);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733a15:{NFSU2_TR(0x733a15);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733a06u);}[[clang::musttail]] return blk_733a06(ARGS);}}
{[[clang::musttail]] return blk_733a17(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733a17(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a17:L733a17:{bud-=5;NFSU2_TR(0x733a17);
__builtin_memmove((G+0),(R+28),4);
}
B733a19:{NFSU2_TR(0x733a19);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B733a1a:{NFSU2_TR(0x733a1a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733a1a);w8(U+40,u64(x_/y_));}
w4(G+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733a1a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B733a1c:{NFSU2_TR(0x733a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B733a1e:{NFSU2_TR(0x733a1e);
if(r1(F+6)){{[[clang::musttail]] return blk_733a2b(ARGS);}}
}
B733a20:L733a20:{bud-=2;NFSU2_TR(0x733a20);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733a22:{NFSU2_TR(0x733a22);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733a2e(ARGS);}}
}
B733a24:L733a24:{bud-=3;NFSU2_TR(0x733a24);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B733a25:{NFSU2_TR(0x733a25);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733a27:{NFSU2_TR(0x733a27);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733a17u);}goto L733a17;}}
}
B733a29:L733a29:{bud-=1;NFSU2_TR(0x733a29);
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a06u);}[[clang::musttail]] return blk_733a06(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733a2b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a2b:L733a2b:{bud-=2;NFSU2_TR(0x733a2b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B733a2c:{NFSU2_TR(0x733a2c);
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a06u);}[[clang::musttail]] return blk_733a06(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733a2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a2e:L733a2e:{bud-=4;NFSU2_TR(0x733a2e);
__builtin_memmove((G+0),(R+28),4);
}
B733a30:{NFSU2_TR(0x733a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733a31:{NFSU2_TR(0x733a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a32:{NFSU2_TR(0x733a32);
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
PN u32 blk_733a33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a33:L733a33:{bud-=10;NFSU2_TR(0x733a33);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8191e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B733a3a:{NFSU2_TR(0x733a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B733a3d:{NFSU2_TR(0x733a3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a3e:{NFSU2_TR(0x733a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B733a41:{NFSU2_TR(0x733a41);
w4(G+0,u32(u32(r4(G+0))&u32(r4(R+28))));
}
B733a43:{NFSU2_TR(0x733a43);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B733a45:{NFSU2_TR(0x733a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733a48:{NFSU2_TR(0x733a48);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(U+6))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733a4b:{NFSU2_TR(0x733a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a4e:{NFSU2_TR(0x733a4e);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733a69(ARGS);}}
}
B733a50:L733a50:{bud-=13;NFSU2_TR(0x733a50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a51:{NFSU2_TR(0x733a51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a52:{NFSU2_TR(0x733a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B733a54:{NFSU2_TR(0x733a54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+12,u32(r1(U+0)));
}
B733a57:{NFSU2_TR(0x733a57);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B733a59:{NFSU2_TR(0x733a59);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B733a5b:{NFSU2_TR(0x733a5b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B733a5c:{NFSU2_TR(0x733a5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B733a5e:{NFSU2_TR(0x733a5e);
u8 U[6];
w1(F+0,carry<u32>(r4(G+4),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+4),u32(0x8ull)));
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733a61:{NFSU2_TR(0x733a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a62:{NFSU2_TR(0x733a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a65:{NFSU2_TR(0x733a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a68:{NFSU2_TR(0x733a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733a69(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733a69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a69:L733a69:{bud-=2;NFSU2_TR(0x733a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733a6a:{NFSU2_TR(0x733a6a);
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
PN u32 blk_733a6b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a6b:L733a6b:{bud-=9;NFSU2_TR(0x733a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733a6f:{NFSU2_TR(0x733a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733a73:{NFSU2_TR(0x733a73);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
w1(U+8,u8(u32(r1(G+4))&u32(u8(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(r1(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B733a76:{NFSU2_TR(0x733a76);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B733a79:{NFSU2_TR(0x733a79);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733a7c:{NFSU2_TR(0x733a7c);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(U+6))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733a7f:{NFSU2_TR(0x733a7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a80:{NFSU2_TR(0x733a80);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B733a83:{NFSU2_TR(0x733a83);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733a9c(ARGS);}}
}
B733a85:L733a85:{bud-=11;NFSU2_TR(0x733a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B733a87:{NFSU2_TR(0x733a87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a88:{NFSU2_TR(0x733a88);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B733a8b:{NFSU2_TR(0x733a8b);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B733a8d:{NFSU2_TR(0x733a8d);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B733a8f:{NFSU2_TR(0x733a8f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B733a90:{NFSU2_TR(0x733a90);
u8 U[6];
w1(F+0,carry<u32>(r4(G+4),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+4),u32(0x8ull)));
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733a93:{NFSU2_TR(0x733a93);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a96:{NFSU2_TR(0x733a96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B733a98:{NFSU2_TR(0x733a98);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733a9b:{NFSU2_TR(0x733a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733a9c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733a9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a9c:L733a9c:{bud-=2;NFSU2_TR(0x733a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733a9d:{NFSU2_TR(0x733a9d);
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
PN u32 blk_733a9e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733a9e:L733a9e:{bud-=9;NFSU2_TR(0x733a9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733a9f:{NFSU2_TR(0x733a9f);
__builtin_memmove((R+20),(G+16),4);
}
B733aa1:{NFSU2_TR(0x733aa1);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733aa2:{NFSU2_TR(0x733aa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733aa3:{NFSU2_TR(0x733aa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733aa4:{NFSU2_TR(0x733aa4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B733aa6:{NFSU2_TR(0x733aa6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B733aa9:{NFSU2_TR(0x733aa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733aaa:{NFSU2_TR(0x733aaa);
if(r1(F+6)){{[[clang::musttail]] return blk_733b84(ARGS);}}
}
B733ab0:L733ab0:{bud-=2;NFSU2_TR(0x733ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733ab3:{NFSU2_TR(0x733ab3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
{[[clang::musttail]] return blk_733ab5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733ab5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733ab5:L733ab5:{bud-=13;NFSU2_TR(0x733ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733ab8:{NFSU2_TR(0x733ab8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733abb:{NFSU2_TR(0x733abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733abe:{NFSU2_TR(0x733abe);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xffull))));
}
B733ac4:{NFSU2_TR(0x733ac4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B733ac7:{NFSU2_TR(0x733ac7);
u8 U[13];
w4(U+0,u32(u32(u32(0x819308ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(r1(U+12)));
}
B733acf:{NFSU2_TR(0x733acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B733ad2:{NFSU2_TR(0x733ad2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B733ad5:{NFSU2_TR(0x733ad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81950cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B733adb:{NFSU2_TR(0x733adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x819508ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733ae1:{NFSU2_TR(0x733ae1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733ae2:{NFSU2_TR(0x733ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733ae5:{NFSU2_TR(0x733ae5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733aeaull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a6bu);}[[clang::musttail]] return blk_733a6b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733aea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733aea:L733aea:{bud-=4;NFSU2_TR(0x733aea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733aed:{NFSU2_TR(0x733aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733aee:{NFSU2_TR(0x733aee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733aef:{NFSU2_TR(0x733aef);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_733af9(ARGS);}}
}
B733af1:L733af1:{bud-=2;NFSU2_TR(0x733af1);
{u32 ea_=u32(r4(R+24)+u32(8492304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733af7:{NFSU2_TR(0x733af7);
{[[clang::musttail]] return blk_733b70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733af9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733af9:L733af9:{bud-=5;NFSU2_TR(0x733af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733afc:{NFSU2_TR(0x733afc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B733afe:{NFSU2_TR(0x733afe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B733aff:{NFSU2_TR(0x733aff);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(F+11,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733b01:{NFSU2_TR(0x733b01);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_733b38(ARGS);}}
}
B733b03:L733b03:{bud-=3;NFSU2_TR(0x733b03);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733b05:{NFSU2_TR(0x733b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733b06:{NFSU2_TR(0x733b06);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733b0bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a33u);}[[clang::musttail]] return blk_733a33(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b0b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b0b:L733b0b:{bud-=6;NFSU2_TR(0x733b0b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x7ull))));
}
B733b0e:{NFSU2_TR(0x733b0e);
__builtin_memmove((G+4),(G+0),4);
}
B733b10:{NFSU2_TR(0x733b10);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(G+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(G+4,u32(r8(U+24)));
}
B733b14:{NFSU2_TR(0x733b14);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B733b16:{NFSU2_TR(0x733b16);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x6cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6cull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733b19:{NFSU2_TR(0x733b19);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_733b24(ARGS);}}
}
B733b1b:L733b1b:{bud-=5;NFSU2_TR(0x733b1b);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733b1d:{NFSU2_TR(0x733b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B733b1e:{NFSU2_TR(0x733b1e);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
}
B733b20:{NFSU2_TR(0x733b20);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B733b21:{NFSU2_TR(0x733b21);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(G+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733b21);w8(U+48,u64(x_/y_));}
w4(G+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x733b21);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
{[[clang::musttail]] return blk_733b24(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b24:L733b24:{bud-=2;NFSU2_TR(0x733b24);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B733b26:{NFSU2_TR(0x733b26);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_733b79(ARGS);}}
{[[clang::musttail]] return blk_733b28(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b28(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b28:L733b28:{bud-=6;NFSU2_TR(0x733b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B733b2b:{NFSU2_TR(0x733b2b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B733b2d:{NFSU2_TR(0x733b2d);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733b30:{NFSU2_TR(0x733b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B733b33:{NFSU2_TR(0x733b33);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B733b34:{NFSU2_TR(0x733b34);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733b28u);}goto L733b28;}}
}
B733b36:L733b36:{bud-=1;NFSU2_TR(0x733b36);
{[[clang::musttail]] return blk_733b79(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b38:L733b38:{bud-=5;NFSU2_TR(0x733b38);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733b3a:{NFSU2_TR(0x733b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733b3b:{NFSU2_TR(0x733b3b);
__builtin_memmove((G+4),(R+24),4);
}
B733b3d:{NFSU2_TR(0x733b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733b40:{NFSU2_TR(0x733b40);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733b45ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a33u);}[[clang::musttail]] return blk_733a33(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b45(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b45:L733b45:{bud-=2;NFSU2_TR(0x733b45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733b47:{NFSU2_TR(0x733b47);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_733b58(ARGS);}}
{[[clang::musttail]] return blk_733b49(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b49(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b49:L733b49:{bud-=3;NFSU2_TR(0x733b49);
__builtin_memmove((G+4),(R+24),4);
}
B733b4b:{NFSU2_TR(0x733b4b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B733b4c:{NFSU2_TR(0x733b4c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733b51ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a33u);}[[clang::musttail]] return blk_733a33(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b51:L733b51:{bud-=2;NFSU2_TR(0x733b51);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733b53:{NFSU2_TR(0x733b53);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733b49u);}[[clang::musttail]] return blk_733b49(ARGS);}}
}
B733b55:L733b55:{bud-=1;NFSU2_TR(0x733b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_733b58(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b58:L733b58:{bud-=2;NFSU2_TR(0x733b58);
__builtin_memmove((G+4),(R+24),4);
}
B733b5a:{NFSU2_TR(0x733b5a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733b5full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a33u);}[[clang::musttail]] return blk_733a33(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b5f:L733b5f:{bud-=2;NFSU2_TR(0x733b5f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733b61:{NFSU2_TR(0x733b61);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_733b68(ARGS);}}
}
B733b63:L733b63:{bud-=2;NFSU2_TR(0x733b63);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B733b66:{NFSU2_TR(0x733b66);
{[[clang::musttail]] return blk_733b70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b68(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b68:L733b68:{bud-=3;NFSU2_TR(0x733b68);
w4(R+28,u32(0-u32(r4(R+28))));
}
B733b6a:{NFSU2_TR(0x733b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B733b6d:{NFSU2_TR(0x733b6d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_733b70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b70:L733b70:{bud-=3;NFSU2_TR(0x733b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733b73:{NFSU2_TR(0x733b73);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733b76:{NFSU2_TR(0x733b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
{[[clang::musttail]] return blk_733b79(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b79:L733b79:{bud-=2;NFSU2_TR(0x733b79);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(F+0,u8((r4(U+6))<(u32(0x6cull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x6cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6cull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733b7c:{NFSU2_TR(0x733b7c);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733ab5u);}[[clang::musttail]] return blk_733ab5(ARGS);}}
}
B733b82:L733b82:{bud-=1;NFSU2_TR(0x733b82);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733bc3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b84(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b84:L733b84:{bud-=2;NFSU2_TR(0x733b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B733b87:{NFSU2_TR(0x733b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
{[[clang::musttail]] return blk_733b8a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b8a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b8a:L733b8a:{bud-=4;NFSU2_TR(0x733b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733b8d:{NFSU2_TR(0x733b8d);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x3ull))));
}
B733b90:{NFSU2_TR(0x733b90);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733b93:{NFSU2_TR(0x733b93);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_733b9d(ARGS);}}
}
B733b95:L733b95:{bud-=2;NFSU2_TR(0x733b95);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733b9b:{NFSU2_TR(0x733b9b);
{[[clang::musttail]] return blk_733ba8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733b9d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733b9d:L733b9d:{bud-=2;NFSU2_TR(0x733b9d);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B733ba0:{NFSU2_TR(0x733ba0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_733bac(ARGS);}}
}
B733ba2:L733ba2:{bud-=1;NFSU2_TR(0x733ba2);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_733ba8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733ba8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733ba8:L733ba8:{bud-=2;NFSU2_TR(0x733ba8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733baa:{NFSU2_TR(0x733baa);
{[[clang::musttail]] return blk_733bb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733bac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733bac:L733bac:{bud-=2;NFSU2_TR(0x733bac);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B733bae:{NFSU2_TR(0x733bae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_733bb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733bb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733bb0:L733bb0:{bud-=3;NFSU2_TR(0x733bb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733bb1:{NFSU2_TR(0x733bb1);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733bb4:{NFSU2_TR(0x733bb4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733bb9ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x733a6bu);}[[clang::musttail]] return blk_733a6b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733bb9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733bb9:L733bb9:{bud-=5;NFSU2_TR(0x733bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B733bbc:{NFSU2_TR(0x733bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733bbd:{NFSU2_TR(0x733bbd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(F+0,u8((r4(U+6))<(u32(0x6cull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x6cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6cull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733bc0:{NFSU2_TR(0x733bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733bc1:{NFSU2_TR(0x733bc1);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733b8au);}[[clang::musttail]] return blk_733b8a(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_733bc3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733bc3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733bc3:L733bc3:{bud-=5;NFSU2_TR(0x733bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733bc4:{NFSU2_TR(0x733bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733bc5:{NFSU2_TR(0x733bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733bc6:{NFSU2_TR(0x733bc6);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B733bc7:{NFSU2_TR(0x733bc7);
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
PN u32 blk_733bc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733bc8:L733bc8:{bud-=5;NFSU2_TR(0x733bc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733bc9:{NFSU2_TR(0x733bc9);
__builtin_memmove((R+20),(G+16),4);
}
B733bcb:{NFSU2_TR(0x733bcb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x64ull))));
}
B733bce:{NFSU2_TR(0x733bce);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733bd0:{NFSU2_TR(0x733bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
{[[clang::musttail]] return blk_733bd1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733bd1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733bd1:L733bd1:{bud-=4;NFSU2_TR(0x733bd1);
{u32 ea_=u32((r4(G+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733bd4:{NFSU2_TR(0x733bd4);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
}
B733bd5:{NFSU2_TR(0x733bd5);
{u32 ea_=u32((r4(G+0)*4u)+r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733bd9:{NFSU2_TR(0x733bd9);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733bd1u);}goto L733bd1;}}
}
B733bdb:L733bdb:{bud-=11;NFSU2_TR(0x733bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733bde:{NFSU2_TR(0x733bde);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B733be0:{NFSU2_TR(0x733be0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733be1:{NFSU2_TR(0x733be1);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733be4:{NFSU2_TR(0x733be4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733be5:{NFSU2_TR(0x733be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733be8:{NFSU2_TR(0x733be8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((G+4),(U+0),4);
}
B733beb:{NFSU2_TR(0x733beb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B733bed:{NFSU2_TR(0x733bed);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B733bef:{NFSU2_TR(0x733bef);
w4(G+0,u32(u32(r4(G+0))-u32(r4(G+4))));
}
B733bf1:{NFSU2_TR(0x733bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_733bf4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733bf4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733bf4:L733bf4:{bud-=6;NFSU2_TR(0x733bf4);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733bf7:{NFSU2_TR(0x733bf7);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733bf9:{NFSU2_TR(0x733bf9);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733bfc:{NFSU2_TR(0x733bfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B733bfd:{NFSU2_TR(0x733bfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((G+0),(U+0),4);
}
B733c00:{NFSU2_TR(0x733c00);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
{[[clang::musttail]] return blk_733c02(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733c02(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733c02:L733c02:{bud-=12;NFSU2_TR(0x733c02);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B733c06:{NFSU2_TR(0x733c06);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c08:{NFSU2_TR(0x733c08);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B733c09:{NFSU2_TR(0x733c09);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c0b:{NFSU2_TR(0x733c0b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B733c0d:{NFSU2_TR(0x733c0d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B733c0f:{NFSU2_TR(0x733c0f);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c11:{NFSU2_TR(0x733c11);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733c13:{NFSU2_TR(0x733c13);
{u32 ea_=u32(r4(G+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733c16:{NFSU2_TR(0x733c16);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x4ull))));
}
B733c19:{NFSU2_TR(0x733c19);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B733c1b:{NFSU2_TR(0x733c1b);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733c02u);}goto L733c02;}}
}
B733c1d:L733c1d:{bud-=5;NFSU2_TR(0x733c1d);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B733c1f:{NFSU2_TR(0x733c1f);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733c22:{NFSU2_TR(0x733c22);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B733c24:{NFSU2_TR(0x733c24);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733c28:{NFSU2_TR(0x733c28);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_733c40(ARGS);}}
}
B733c2a:L733c2a:{bud-=1;NFSU2_TR(0x733c2a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
{[[clang::musttail]] return blk_733c2e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733c2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733c2e:L733c2e:{bud-=8;NFSU2_TR(0x733c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B733c31:{NFSU2_TR(0x733c31);
{u32 ea_=u32((r4(G+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c34:{NFSU2_TR(0x733c34);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B733c35:{NFSU2_TR(0x733c35);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c37:{NFSU2_TR(0x733c37);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
}
B733c3a:{NFSU2_TR(0x733c3a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B733c3c:{NFSU2_TR(0x733c3c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B733c3e:{NFSU2_TR(0x733c3e);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733c2eu);}goto L733c2e;}}
{[[clang::musttail]] return blk_733c40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733c40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733c40:L733c40:{bud-=6;NFSU2_TR(0x733c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733c43:{NFSU2_TR(0x733c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B733c46:{NFSU2_TR(0x733c46);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B733c47:{NFSU2_TR(0x733c47);
{u32 ea_=u32(r4(G+0)+r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733c4b:{NFSU2_TR(0x733c4b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(F+0,u8((r4(U+6))<(u32(0xcull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B733c4e:{NFSU2_TR(0x733c4e);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x733bf4u);}[[clang::musttail]] return blk_733bf4(ARGS);}}
}
B733c50:L733c50:{bud-=4;NFSU2_TR(0x733c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B733c51:{NFSU2_TR(0x733c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B733c52:{NFSU2_TR(0x733c52);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B733c53:{NFSU2_TR(0x733c53);
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
PN u32 blk_733c54(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733c54:L733c54:{bud-=10;NFSU2_TR(0x733c54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733c55:{NFSU2_TR(0x733c55);
__builtin_memmove((R+20),(G+16),4);
}
B733c57:{NFSU2_TR(0x733c57);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x30ull))));
}
B733c5a:{NFSU2_TR(0x733c5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733c5b:{NFSU2_TR(0x733c5b);
u8 U[12];
w4(U+0,u32(u32(u32(0x684ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B733c62:{NFSU2_TR(0x733c62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733c63:{NFSU2_TR(0x733c63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B733c66:{NFSU2_TR(0x733c66);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B733c67:{NFSU2_TR(0x733c67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((R+24),(U+0),4);
}
B733c6d:{NFSU2_TR(0x733c6d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x733c72ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x733bc8u);}[[clang::musttail]] return blk_733bc8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733c72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733c72:L733c72:{bud-=4;NFSU2_TR(0x733c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B733c75:{NFSU2_TR(0x733c75);
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
B733c77:{NFSU2_TR(0x733c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B733c78:{NFSU2_TR(0x733c78);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_734328(ARGS);}}
}
B733c7e:L733c7e:{bud-=6;NFSU2_TR(0x733c7e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c81:{NFSU2_TR(0x733c81);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c84:{NFSU2_TR(0x733c84);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c87:{NFSU2_TR(0x733c87);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c8a:{NFSU2_TR(0x733c8a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c8d:{NFSU2_TR(0x733c8d);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_733c90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_733c90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B733c90:L733c90:{bud-=248;NFSU2_TR(0x733c90);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733c92:{NFSU2_TR(0x733c92);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733c98:{NFSU2_TR(0x733c98);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733c9b:{NFSU2_TR(0x733c9b);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ca1:{NFSU2_TR(0x733ca1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ca3:{NFSU2_TR(0x733ca3);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ca6:{NFSU2_TR(0x733ca6);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cac:{NFSU2_TR(0x733cac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cae:{NFSU2_TR(0x733cae);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733cb0:{NFSU2_TR(0x733cb0);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cb6:{NFSU2_TR(0x733cb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cb8:{NFSU2_TR(0x733cb8);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733cbb:{NFSU2_TR(0x733cbb);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cc1:{NFSU2_TR(0x733cc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cc3:{NFSU2_TR(0x733cc3);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733cc6:{NFSU2_TR(0x733cc6);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ccc:{NFSU2_TR(0x733ccc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cce:{NFSU2_TR(0x733cce);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733cd0:{NFSU2_TR(0x733cd0);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cd6:{NFSU2_TR(0x733cd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cd8:{NFSU2_TR(0x733cd8);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733cda:{NFSU2_TR(0x733cda);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ce0:{NFSU2_TR(0x733ce0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ce2:{NFSU2_TR(0x733ce2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733ce4:{NFSU2_TR(0x733ce4);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cea:{NFSU2_TR(0x733cea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cec:{NFSU2_TR(0x733cec);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733cef:{NFSU2_TR(0x733cef);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cf5:{NFSU2_TR(0x733cf5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733cf7:{NFSU2_TR(0x733cf7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733cf9:{NFSU2_TR(0x733cf9);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733cff:{NFSU2_TR(0x733cff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d01:{NFSU2_TR(0x733d01);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d04:{NFSU2_TR(0x733d04);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d0a:{NFSU2_TR(0x733d0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d0c:{NFSU2_TR(0x733d0c);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733d0e:{NFSU2_TR(0x733d0e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733d11:{NFSU2_TR(0x733d11);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733d17:{NFSU2_TR(0x733d17);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733d19:{NFSU2_TR(0x733d19);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733d1b:{NFSU2_TR(0x733d1b);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d21:{NFSU2_TR(0x733d21);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d24:{NFSU2_TR(0x733d24);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d2a:{NFSU2_TR(0x733d2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d2c:{NFSU2_TR(0x733d2c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d2f:{NFSU2_TR(0x733d2f);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d35:{NFSU2_TR(0x733d35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d37:{NFSU2_TR(0x733d37);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733d39:{NFSU2_TR(0x733d39);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d3f:{NFSU2_TR(0x733d3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d41:{NFSU2_TR(0x733d41);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733d43:{NFSU2_TR(0x733d43);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d49:{NFSU2_TR(0x733d49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d4b:{NFSU2_TR(0x733d4b);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d4e:{NFSU2_TR(0x733d4e);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d54:{NFSU2_TR(0x733d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d56:{NFSU2_TR(0x733d56);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733d58:{NFSU2_TR(0x733d58);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d5e:{NFSU2_TR(0x733d5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d60:{NFSU2_TR(0x733d60);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733d62:{NFSU2_TR(0x733d62);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d68:{NFSU2_TR(0x733d68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d6a:{NFSU2_TR(0x733d6a);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d6d:{NFSU2_TR(0x733d6d);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d73:{NFSU2_TR(0x733d73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d75:{NFSU2_TR(0x733d75);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d78:{NFSU2_TR(0x733d78);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d7e:{NFSU2_TR(0x733d7e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d80:{NFSU2_TR(0x733d80);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733d82:{NFSU2_TR(0x733d82);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d88:{NFSU2_TR(0x733d88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d8a:{NFSU2_TR(0x733d8a);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733d8d:{NFSU2_TR(0x733d8d);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733d93:{NFSU2_TR(0x733d93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733d95:{NFSU2_TR(0x733d95);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733d98:{NFSU2_TR(0x733d98);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733d9b:{NFSU2_TR(0x733d9b);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733da1:{NFSU2_TR(0x733da1);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733da4:{NFSU2_TR(0x733da4);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733da6:{NFSU2_TR(0x733da6);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dac:{NFSU2_TR(0x733dac);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733dae:{NFSU2_TR(0x733dae);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733db4:{NFSU2_TR(0x733db4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733db6:{NFSU2_TR(0x733db6);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733db9:{NFSU2_TR(0x733db9);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dbf:{NFSU2_TR(0x733dbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dc1:{NFSU2_TR(0x733dc1);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733dc3:{NFSU2_TR(0x733dc3);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dc9:{NFSU2_TR(0x733dc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dcb:{NFSU2_TR(0x733dcb);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733dcd:{NFSU2_TR(0x733dcd);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dd3:{NFSU2_TR(0x733dd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dd5:{NFSU2_TR(0x733dd5);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733dd8:{NFSU2_TR(0x733dd8);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dde:{NFSU2_TR(0x733dde);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733de0:{NFSU2_TR(0x733de0);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733de2:{NFSU2_TR(0x733de2);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733de8:{NFSU2_TR(0x733de8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733dea:{NFSU2_TR(0x733dea);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ded:{NFSU2_TR(0x733ded);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733df3:{NFSU2_TR(0x733df3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733df5:{NFSU2_TR(0x733df5);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733df8:{NFSU2_TR(0x733df8);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733dfe:{NFSU2_TR(0x733dfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e00:{NFSU2_TR(0x733e00);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e03:{NFSU2_TR(0x733e03);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e09:{NFSU2_TR(0x733e09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e0b:{NFSU2_TR(0x733e0b);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733e0d:{NFSU2_TR(0x733e0d);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e13:{NFSU2_TR(0x733e13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e15:{NFSU2_TR(0x733e15);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e18:{NFSU2_TR(0x733e18);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e1e:{NFSU2_TR(0x733e1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e20:{NFSU2_TR(0x733e20);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733e23:{NFSU2_TR(0x733e23);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733e26:{NFSU2_TR(0x733e26);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733e2c:{NFSU2_TR(0x733e2c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733e2f:{NFSU2_TR(0x733e2f);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733e31:{NFSU2_TR(0x733e31);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e37:{NFSU2_TR(0x733e37);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733e39:{NFSU2_TR(0x733e39);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e3f:{NFSU2_TR(0x733e3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e41:{NFSU2_TR(0x733e41);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e44:{NFSU2_TR(0x733e44);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e4a:{NFSU2_TR(0x733e4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e4c:{NFSU2_TR(0x733e4c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733e4e:{NFSU2_TR(0x733e4e);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e54:{NFSU2_TR(0x733e54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e56:{NFSU2_TR(0x733e56);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e59:{NFSU2_TR(0x733e59);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e5f:{NFSU2_TR(0x733e5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e61:{NFSU2_TR(0x733e61);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e64:{NFSU2_TR(0x733e64);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e6a:{NFSU2_TR(0x733e6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e6c:{NFSU2_TR(0x733e6c);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733e6e:{NFSU2_TR(0x733e6e);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e74:{NFSU2_TR(0x733e74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e76:{NFSU2_TR(0x733e76);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e79:{NFSU2_TR(0x733e79);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e7f:{NFSU2_TR(0x733e7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e81:{NFSU2_TR(0x733e81);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e84:{NFSU2_TR(0x733e84);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e8a:{NFSU2_TR(0x733e8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e8c:{NFSU2_TR(0x733e8c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733e8f:{NFSU2_TR(0x733e8f);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e95:{NFSU2_TR(0x733e95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733e97:{NFSU2_TR(0x733e97);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733e99:{NFSU2_TR(0x733e99);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733e9f:{NFSU2_TR(0x733e9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ea1:{NFSU2_TR(0x733ea1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733ea3:{NFSU2_TR(0x733ea3);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ea9:{NFSU2_TR(0x733ea9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733eab:{NFSU2_TR(0x733eab);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733eae:{NFSU2_TR(0x733eae);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733eb1:{NFSU2_TR(0x733eb1);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733eb7:{NFSU2_TR(0x733eb7);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733eba:{NFSU2_TR(0x733eba);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733ebc:{NFSU2_TR(0x733ebc);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ec2:{NFSU2_TR(0x733ec2);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ec5:{NFSU2_TR(0x733ec5);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ecb:{NFSU2_TR(0x733ecb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ecd:{NFSU2_TR(0x733ecd);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ed0:{NFSU2_TR(0x733ed0);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ed6:{NFSU2_TR(0x733ed6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ed8:{NFSU2_TR(0x733ed8);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733eda:{NFSU2_TR(0x733eda);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ee0:{NFSU2_TR(0x733ee0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ee2:{NFSU2_TR(0x733ee2);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ee5:{NFSU2_TR(0x733ee5);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733eeb:{NFSU2_TR(0x733eeb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733eed:{NFSU2_TR(0x733eed);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733ef0:{NFSU2_TR(0x733ef0);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ef6:{NFSU2_TR(0x733ef6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ef8:{NFSU2_TR(0x733ef8);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733efa:{NFSU2_TR(0x733efa);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f00:{NFSU2_TR(0x733f00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f02:{NFSU2_TR(0x733f02);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733f04:{NFSU2_TR(0x733f04);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f0a:{NFSU2_TR(0x733f0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f0c:{NFSU2_TR(0x733f0c);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f0f:{NFSU2_TR(0x733f0f);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f15:{NFSU2_TR(0x733f15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f17:{NFSU2_TR(0x733f17);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f1a:{NFSU2_TR(0x733f1a);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f20:{NFSU2_TR(0x733f20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f22:{NFSU2_TR(0x733f22);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733f24:{NFSU2_TR(0x733f24);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f2a:{NFSU2_TR(0x733f2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f2c:{NFSU2_TR(0x733f2c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733f2e:{NFSU2_TR(0x733f2e);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f34:{NFSU2_TR(0x733f34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f36:{NFSU2_TR(0x733f36);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733f39:{NFSU2_TR(0x733f39);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733f3c:{NFSU2_TR(0x733f3c);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733f42:{NFSU2_TR(0x733f42);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733f45:{NFSU2_TR(0x733f45);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733f47:{NFSU2_TR(0x733f47);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f4d:{NFSU2_TR(0x733f4d);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f50:{NFSU2_TR(0x733f50);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f56:{NFSU2_TR(0x733f56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f58:{NFSU2_TR(0x733f58);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f5b:{NFSU2_TR(0x733f5b);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f61:{NFSU2_TR(0x733f61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f63:{NFSU2_TR(0x733f63);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B733f65:{NFSU2_TR(0x733f65);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f6b:{NFSU2_TR(0x733f6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f6d:{NFSU2_TR(0x733f6d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733f6f:{NFSU2_TR(0x733f6f);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f75:{NFSU2_TR(0x733f75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f77:{NFSU2_TR(0x733f77);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f7a:{NFSU2_TR(0x733f7a);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f80:{NFSU2_TR(0x733f80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f82:{NFSU2_TR(0x733f82);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733f84:{NFSU2_TR(0x733f84);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f8a:{NFSU2_TR(0x733f8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f8c:{NFSU2_TR(0x733f8c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733f8e:{NFSU2_TR(0x733f8e);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f94:{NFSU2_TR(0x733f94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733f96:{NFSU2_TR(0x733f96);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733f99:{NFSU2_TR(0x733f99);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733f9f:{NFSU2_TR(0x733f9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fa1:{NFSU2_TR(0x733fa1);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733fa4:{NFSU2_TR(0x733fa4);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733faa:{NFSU2_TR(0x733faa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fac:{NFSU2_TR(0x733fac);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B733fae:{NFSU2_TR(0x733fae);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fb4:{NFSU2_TR(0x733fb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fb6:{NFSU2_TR(0x733fb6);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733fb9:{NFSU2_TR(0x733fb9);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fbf:{NFSU2_TR(0x733fbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fc1:{NFSU2_TR(0x733fc1);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B733fc4:{NFSU2_TR(0x733fc4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733fc7:{NFSU2_TR(0x733fc7);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B733fcd:{NFSU2_TR(0x733fcd);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B733fd0:{NFSU2_TR(0x733fd0);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B733fd2:{NFSU2_TR(0x733fd2);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fd8:{NFSU2_TR(0x733fd8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B733fda:{NFSU2_TR(0x733fda);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fe0:{NFSU2_TR(0x733fe0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fe2:{NFSU2_TR(0x733fe2);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B733fe5:{NFSU2_TR(0x733fe5);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733feb:{NFSU2_TR(0x733feb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733fed:{NFSU2_TR(0x733fed);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B733fef:{NFSU2_TR(0x733fef);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733ff5:{NFSU2_TR(0x733ff5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B733ff7:{NFSU2_TR(0x733ff7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B733ff9:{NFSU2_TR(0x733ff9);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B733fff:{NFSU2_TR(0x733fff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
{EXIT(0x734001u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_733(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x73300e:[[clang::musttail]] return blk_73300e(c,a4,a0,a1,bud);
case 0x733020:[[clang::musttail]] return blk_733020(c,a4,a0,a1,bud);
case 0x733023:[[clang::musttail]] return blk_733023(c,a4,a0,a1,bud);
case 0x73303d:[[clang::musttail]] return blk_73303d(c,a4,a0,a1,bud);
case 0x73304f:[[clang::musttail]] return blk_73304f(c,a4,a0,a1,bud);
case 0x73306f:[[clang::musttail]] return blk_73306f(c,a4,a0,a1,bud);
case 0x733073:[[clang::musttail]] return blk_733073(c,a4,a0,a1,bud);
case 0x733077:[[clang::musttail]] return blk_733077(c,a4,a0,a1,bud);
case 0x73307a:[[clang::musttail]] return blk_73307a(c,a4,a0,a1,bud);
case 0x733082:[[clang::musttail]] return blk_733082(c,a4,a0,a1,bud);
case 0x733093:[[clang::musttail]] return blk_733093(c,a4,a0,a1,bud);
case 0x733094:[[clang::musttail]] return blk_733094(c,a4,a0,a1,bud);
case 0x733095:[[clang::musttail]] return blk_733095(c,a4,a0,a1,bud);
case 0x7330c5:[[clang::musttail]] return blk_7330c5(c,a4,a0,a1,bud);
case 0x7330d1:[[clang::musttail]] return blk_7330d1(c,a4,a0,a1,bud);
case 0x7330d3:[[clang::musttail]] return blk_7330d3(c,a4,a0,a1,bud);
case 0x7330d5:[[clang::musttail]] return blk_7330d5(c,a4,a0,a1,bud);
case 0x7330f2:[[clang::musttail]] return blk_7330f2(c,a4,a0,a1,bud);
case 0x7330f5:[[clang::musttail]] return blk_7330f5(c,a4,a0,a1,bud);
case 0x73311a:[[clang::musttail]] return blk_73311a(c,a4,a0,a1,bud);
case 0x733123:[[clang::musttail]] return blk_733123(c,a4,a0,a1,bud);
case 0x733140:[[clang::musttail]] return blk_733140(c,a4,a0,a1,bud);
case 0x733154:[[clang::musttail]] return blk_733154(c,a4,a0,a1,bud);
case 0x733164:[[clang::musttail]] return blk_733164(c,a4,a0,a1,bud);
case 0x733179:[[clang::musttail]] return blk_733179(c,a4,a0,a1,bud);
case 0x73317b:[[clang::musttail]] return blk_73317b(c,a4,a0,a1,bud);
case 0x733184:[[clang::musttail]] return blk_733184(c,a4,a0,a1,bud);
case 0x733193:[[clang::musttail]] return blk_733193(c,a4,a0,a1,bud);
case 0x73319b:[[clang::musttail]] return blk_73319b(c,a4,a0,a1,bud);
case 0x7331ae:[[clang::musttail]] return blk_7331ae(c,a4,a0,a1,bud);
case 0x7331b0:[[clang::musttail]] return blk_7331b0(c,a4,a0,a1,bud);
case 0x7331b8:[[clang::musttail]] return blk_7331b8(c,a4,a0,a1,bud);
case 0x7331d0:[[clang::musttail]] return blk_7331d0(c,a4,a0,a1,bud);
case 0x7331d6:[[clang::musttail]] return blk_7331d6(c,a4,a0,a1,bud);
case 0x7331e1:[[clang::musttail]] return blk_7331e1(c,a4,a0,a1,bud);
case 0x7331ff:[[clang::musttail]] return blk_7331ff(c,a4,a0,a1,bud);
case 0x733211:[[clang::musttail]] return blk_733211(c,a4,a0,a1,bud);
case 0x733222:[[clang::musttail]] return blk_733222(c,a4,a0,a1,bud);
case 0x733237:[[clang::musttail]] return blk_733237(c,a4,a0,a1,bud);
case 0x733239:[[clang::musttail]] return blk_733239(c,a4,a0,a1,bud);
case 0x733242:[[clang::musttail]] return blk_733242(c,a4,a0,a1,bud);
case 0x73325c:[[clang::musttail]] return blk_73325c(c,a4,a0,a1,bud);
case 0x733264:[[clang::musttail]] return blk_733264(c,a4,a0,a1,bud);
case 0x73326a:[[clang::musttail]] return blk_73326a(c,a4,a0,a1,bud);
case 0x73329b:[[clang::musttail]] return blk_73329b(c,a4,a0,a1,bud);
case 0x7332a3:[[clang::musttail]] return blk_7332a3(c,a4,a0,a1,bud);
case 0x7332b8:[[clang::musttail]] return blk_7332b8(c,a4,a0,a1,bud);
case 0x7332de:[[clang::musttail]] return blk_7332de(c,a4,a0,a1,bud);
case 0x7332e3:[[clang::musttail]] return blk_7332e3(c,a4,a0,a1,bud);
case 0x7332ec:[[clang::musttail]] return blk_7332ec(c,a4,a0,a1,bud);
case 0x7332ee:[[clang::musttail]] return blk_7332ee(c,a4,a0,a1,bud);
case 0x733306:[[clang::musttail]] return blk_733306(c,a4,a0,a1,bud);
case 0x733308:[[clang::musttail]] return blk_733308(c,a4,a0,a1,bud);
case 0x733311:[[clang::musttail]] return blk_733311(c,a4,a0,a1,bud);
case 0x733326:[[clang::musttail]] return blk_733326(c,a4,a0,a1,bud);
case 0x733328:[[clang::musttail]] return blk_733328(c,a4,a0,a1,bud);
case 0x73332f:[[clang::musttail]] return blk_73332f(c,a4,a0,a1,bud);
case 0x73335e:[[clang::musttail]] return blk_73335e(c,a4,a0,a1,bud);
case 0x733369:[[clang::musttail]] return blk_733369(c,a4,a0,a1,bud);
case 0x733388:[[clang::musttail]] return blk_733388(c,a4,a0,a1,bud);
case 0x7333bf:[[clang::musttail]] return blk_7333bf(c,a4,a0,a1,bud);
case 0x7333cd:[[clang::musttail]] return blk_7333cd(c,a4,a0,a1,bud);
case 0x73344c:[[clang::musttail]] return blk_73344c(c,a4,a0,a1,bud);
case 0x733460:[[clang::musttail]] return blk_733460(c,a4,a0,a1,bud);
case 0x733491:[[clang::musttail]] return blk_733491(c,a4,a0,a1,bud);
case 0x733614:[[clang::musttail]] return blk_733614(c,a4,a0,a1,bud);
case 0x7336de:[[clang::musttail]] return blk_7336de(c,a4,a0,a1,bud);
case 0x733700:[[clang::musttail]] return blk_733700(c,a4,a0,a1,bud);
case 0x73372d:[[clang::musttail]] return blk_73372d(c,a4,a0,a1,bud);
case 0x733785:[[clang::musttail]] return blk_733785(c,a4,a0,a1,bud);
case 0x7337ba:[[clang::musttail]] return blk_7337ba(c,a4,a0,a1,bud);
case 0x7337d0:[[clang::musttail]] return blk_7337d0(c,a4,a0,a1,bud);
case 0x733802:[[clang::musttail]] return blk_733802(c,a4,a0,a1,bud);
case 0x733985:[[clang::musttail]] return blk_733985(c,a4,a0,a1,bud);
case 0x7339c1:[[clang::musttail]] return blk_7339c1(c,a4,a0,a1,bud);
case 0x7339d1:[[clang::musttail]] return blk_7339d1(c,a4,a0,a1,bud);
case 0x7339d3:[[clang::musttail]] return blk_7339d3(c,a4,a0,a1,bud);
case 0x7339e5:[[clang::musttail]] return blk_7339e5(c,a4,a0,a1,bud);
case 0x7339e9:[[clang::musttail]] return blk_7339e9(c,a4,a0,a1,bud);
case 0x733a06:[[clang::musttail]] return blk_733a06(c,a4,a0,a1,bud);
case 0x733a0c:[[clang::musttail]] return blk_733a0c(c,a4,a0,a1,bud);
case 0x733a17:[[clang::musttail]] return blk_733a17(c,a4,a0,a1,bud);
case 0x733a2b:[[clang::musttail]] return blk_733a2b(c,a4,a0,a1,bud);
case 0x733a2e:[[clang::musttail]] return blk_733a2e(c,a4,a0,a1,bud);
case 0x733a33:[[clang::musttail]] return blk_733a33(c,a4,a0,a1,bud);
case 0x733a69:[[clang::musttail]] return blk_733a69(c,a4,a0,a1,bud);
case 0x733a6b:[[clang::musttail]] return blk_733a6b(c,a4,a0,a1,bud);
case 0x733a9c:[[clang::musttail]] return blk_733a9c(c,a4,a0,a1,bud);
case 0x733a9e:[[clang::musttail]] return blk_733a9e(c,a4,a0,a1,bud);
case 0x733ab5:[[clang::musttail]] return blk_733ab5(c,a4,a0,a1,bud);
case 0x733aea:[[clang::musttail]] return blk_733aea(c,a4,a0,a1,bud);
case 0x733af9:[[clang::musttail]] return blk_733af9(c,a4,a0,a1,bud);
case 0x733b0b:[[clang::musttail]] return blk_733b0b(c,a4,a0,a1,bud);
case 0x733b24:[[clang::musttail]] return blk_733b24(c,a4,a0,a1,bud);
case 0x733b28:[[clang::musttail]] return blk_733b28(c,a4,a0,a1,bud);
case 0x733b38:[[clang::musttail]] return blk_733b38(c,a4,a0,a1,bud);
case 0x733b45:[[clang::musttail]] return blk_733b45(c,a4,a0,a1,bud);
case 0x733b49:[[clang::musttail]] return blk_733b49(c,a4,a0,a1,bud);
case 0x733b51:[[clang::musttail]] return blk_733b51(c,a4,a0,a1,bud);
case 0x733b58:[[clang::musttail]] return blk_733b58(c,a4,a0,a1,bud);
case 0x733b5f:[[clang::musttail]] return blk_733b5f(c,a4,a0,a1,bud);
case 0x733b68:[[clang::musttail]] return blk_733b68(c,a4,a0,a1,bud);
case 0x733b70:[[clang::musttail]] return blk_733b70(c,a4,a0,a1,bud);
case 0x733b79:[[clang::musttail]] return blk_733b79(c,a4,a0,a1,bud);
case 0x733b84:[[clang::musttail]] return blk_733b84(c,a4,a0,a1,bud);
case 0x733b8a:[[clang::musttail]] return blk_733b8a(c,a4,a0,a1,bud);
case 0x733b9d:[[clang::musttail]] return blk_733b9d(c,a4,a0,a1,bud);
case 0x733ba8:[[clang::musttail]] return blk_733ba8(c,a4,a0,a1,bud);
case 0x733bac:[[clang::musttail]] return blk_733bac(c,a4,a0,a1,bud);
case 0x733bb0:[[clang::musttail]] return blk_733bb0(c,a4,a0,a1,bud);
case 0x733bb9:[[clang::musttail]] return blk_733bb9(c,a4,a0,a1,bud);
case 0x733bc3:[[clang::musttail]] return blk_733bc3(c,a4,a0,a1,bud);
case 0x733bc8:[[clang::musttail]] return blk_733bc8(c,a4,a0,a1,bud);
case 0x733bd1:[[clang::musttail]] return blk_733bd1(c,a4,a0,a1,bud);
case 0x733bf4:[[clang::musttail]] return blk_733bf4(c,a4,a0,a1,bud);
case 0x733c02:[[clang::musttail]] return blk_733c02(c,a4,a0,a1,bud);
case 0x733c2e:[[clang::musttail]] return blk_733c2e(c,a4,a0,a1,bud);
case 0x733c40:[[clang::musttail]] return blk_733c40(c,a4,a0,a1,bud);
case 0x733c54:[[clang::musttail]] return blk_733c54(c,a4,a0,a1,bud);
case 0x733c72:[[clang::musttail]] return blk_733c72(c,a4,a0,a1,bud);
case 0x733c90:[[clang::musttail]] return blk_733c90(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_733(Cpu& c){u8* R=c.regs.data();return ent_733(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
