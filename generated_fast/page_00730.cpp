#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_missing(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_575630(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72c01e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72c04a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72c1d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72c204(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72dcd5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_72fdc2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730004(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730007(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730012(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730015(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730023(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73002e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730031(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730034(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730042(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730048(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73004a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73004d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730053(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730055(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730058(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73005e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730063(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730069(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73006b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73006e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730073(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73007e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730081(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73008c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73008f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73009a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73009d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300b4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300ea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7300fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730109(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730121(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73014c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730152(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73015c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730165(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730170(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730175(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730181(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73018f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730195(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301bd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7301f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730203(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730205(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73020b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730219(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73021f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730231(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730233(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730239(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730247(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73024d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73025f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730261(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730267(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730272(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730275(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73027b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730280(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73028c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_73029d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302be(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730cc2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_731000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730127(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7302d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730c66(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_730002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730002:L730002:{bud-=1;NFSU2_TR(0x730002);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_730004(ARGS);}
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
PN u32 blk_730004(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730004:L730004:{bud-=1;NFSU2_TR(0x730004);
{u32 ea_=u32(r4(R+20)+u32(124u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730007(ARGS);}
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
PN u32 blk_730007(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730007:L730007:{bud-=3;NFSU2_TR(0x730007);
{u32 ea_=u32(r4(R+20)+u32(64u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B73000a:{NFSU2_TR(0x73000a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73000e:{NFSU2_TR(0x73000e);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_730012(ARGS);}
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
PN u32 blk_730012(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730012:L730012:{bud-=1;NFSU2_TR(0x730012);
{u32 ea_=u32(r4(R+20)+u32(120u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730015(ARGS);}
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
PN u32 blk_730015(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730015:L730015:{bud-=3;NFSU2_TR(0x730015);
{u32 ea_=u32(r4(R+20)+u32(56u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B730018:{NFSU2_TR(0x730018);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73001c:{NFSU2_TR(0x73001c);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_730020(ARGS);}
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
PN u32 blk_730020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730020:L730020:{bud-=1;NFSU2_TR(0x730020);
{u32 ea_=u32(r4(R+20)+u32(108u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730023(ARGS);}
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
PN u32 blk_730023(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730023:L730023:{bud-=3;NFSU2_TR(0x730023);
{u32 ea_=u32(r4(R+20)+u32(48u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B730026:{NFSU2_TR(0x730026);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73002a:{NFSU2_TR(0x73002a);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_73002e(ARGS);}
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
PN u32 blk_73002e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73002e:L73002e:{bud-=1;NFSU2_TR(0x73002e);
{u32 ea_=u32(r4(R+20)+u32(104u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730031(ARGS);}
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
PN u32 blk_730031(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730031:L730031:{bud-=1;NFSU2_TR(0x730031);
{u32 ea_=u32(r4(R+20)+u32(40u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_730034(ARGS);}
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
PN u32 blk_730034(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730034:L730034:{bud-=3;NFSU2_TR(0x730034);
{u32 ea_=u32(u32(7997468u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B73003a:{NFSU2_TR(0x73003a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73003e:{NFSU2_TR(0x73003e);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2aull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_730042(ARGS);}
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
PN u32 blk_730042(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730042:L730042:{bud-=1;NFSU2_TR(0x730042);
{u32 ea_=u32(r4(G+0)+u32(1720u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730048(ARGS);}
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
PN u32 blk_730048(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730048:L730048:{bud-=1;NFSU2_TR(0x730048);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_73004a(ARGS);}
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
PN u32 blk_73004a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73004a:L73004a:{bud-=1;NFSU2_TR(0x73004a);
{u32 ea_=u32(r4(R+20)+u32(124u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_73004d(ARGS);}
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
PN u32 blk_73004d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73004d:L73004d:{bud-=1;NFSU2_TR(0x73004d);
{u32 ea_=u32(r4(G+0)+u32(1724u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730053(ARGS);}
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
PN u32 blk_730053(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730053:L730053:{bud-=1;NFSU2_TR(0x730053);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_730055(ARGS);}
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
PN u32 blk_730055(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730055:L730055:{bud-=1;NFSU2_TR(0x730055);
{u32 ea_=u32(r4(R+20)+u32(120u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_730058(ARGS);}
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
PN u32 blk_730058(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730058:L730058:{bud-=1;NFSU2_TR(0x730058);
{u32 ea_=u32(r4(G+0)+u32(1728u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_73005e(ARGS);}
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
PN u32 blk_73005e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73005e:L73005e:{bud-=1;NFSU2_TR(0x73005e);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_730060(ARGS);}
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
PN u32 blk_730060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730060:L730060:{bud-=1;NFSU2_TR(0x730060);
{u32 ea_=u32(r4(R+20)+u32(108u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_730063(ARGS);}
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
PN u32 blk_730063(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730063:L730063:{bud-=1;NFSU2_TR(0x730063);
{u32 ea_=u32(r4(G+0)+u32(1732u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730069(ARGS);}
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
PN u32 blk_730069(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730069:L730069:{bud-=1;NFSU2_TR(0x730069);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_73006b(ARGS);}
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
PN u32 blk_73006b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73006b:L73006b:{bud-=1;NFSU2_TR(0x73006b);
{u32 ea_=u32(r4(R+20)+u32(104u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_73006e(ARGS);}
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
PN u32 blk_73006e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73006e:L73006e:{bud-=1;NFSU2_TR(0x73006e);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_730070(ARGS);}
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
PN u32 blk_730070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730070:L730070:{bud-=1;NFSU2_TR(0x730070);
{u32 ea_=u32(r4(R+20)+u32(124u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730073(ARGS);}
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
PN u32 blk_730073(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730073:L730073:{bud-=3;NFSU2_TR(0x730073);
{u32 ea_=u32(r4(R+20)+u32(32u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B730076:{NFSU2_TR(0x730076);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B73007a:{NFSU2_TR(0x73007a);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_73007e(ARGS);}
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
PN u32 blk_73007e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73007e:L73007e:{bud-=1;NFSU2_TR(0x73007e);
{u32 ea_=u32(r4(R+20)+u32(120u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730081(ARGS);}
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
PN u32 blk_730081(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730081:L730081:{bud-=3;NFSU2_TR(0x730081);
{u32 ea_=u32(r4(R+20)+u32(24u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B730084:{NFSU2_TR(0x730084);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730088:{NFSU2_TR(0x730088);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_73008c(ARGS);}
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
PN u32 blk_73008c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73008c:L73008c:{bud-=1;NFSU2_TR(0x73008c);
{u32 ea_=u32(r4(R+20)+u32(108u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_73008f(ARGS);}
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
PN u32 blk_73008f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73008f:L73008f:{bud-=3;NFSU2_TR(0x73008f);
{u32 ea_=u32(r4(R+20)+u32(16u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B730092:{NFSU2_TR(0x730092);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730096:{NFSU2_TR(0x730096);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_73009a(ARGS);}
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
PN u32 blk_73009a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73009a:L73009a:{bud-=1;NFSU2_TR(0x73009a);
{u32 ea_=u32(r4(R+20)+u32(104u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_73009d(ARGS);}
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
PN u32 blk_73009d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73009d:L73009d:{bud-=1;NFSU2_TR(0x73009d);
{u32 ea_=u32(r4(R+20)+u32(8u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_7300a0(ARGS);}
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
PN u32 blk_7300a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300a0:L7300a0:{bud-=3;NFSU2_TR(0x7300a0);
{u32 ea_=u32(u32(7997468u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B7300a6:{NFSU2_TR(0x7300a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B7300aa:{NFSU2_TR(0x7300aa);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_7300ae(ARGS);}
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
PN u32 blk_7300ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300ae:L7300ae:{bud-=1;NFSU2_TR(0x7300ae);
{u32 ea_=u32(r4(G+0)+u32(2008u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7300b4(ARGS);}
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
PN u32 blk_7300b4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300b4:L7300b4:{bud-=1;NFSU2_TR(0x7300b4);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_7300b6(ARGS);}
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
PN u32 blk_7300b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300b6:L7300b6:{bud-=1;NFSU2_TR(0x7300b6);
{u32 ea_=u32(r4(R+20)+u32(124u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_7300b9(ARGS);}
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
PN u32 blk_7300b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300b9:L7300b9:{bud-=1;NFSU2_TR(0x7300b9);
{u32 ea_=u32(r4(G+0)+u32(2012u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7300bf(ARGS);}
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
PN u32 blk_7300bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300bf:L7300bf:{bud-=1;NFSU2_TR(0x7300bf);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_7300c1(ARGS);}
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
PN u32 blk_7300c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300c1:L7300c1:{bud-=1;NFSU2_TR(0x7300c1);
{u32 ea_=u32(r4(R+20)+u32(120u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_7300c4(ARGS);}
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
PN u32 blk_7300c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300c4:L7300c4:{bud-=1;NFSU2_TR(0x7300c4);
{u32 ea_=u32(r4(G+0)+u32(2016u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7300ca(ARGS);}
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
PN u32 blk_7300ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300ca:L7300ca:{bud-=1;NFSU2_TR(0x7300ca);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_7300cc(ARGS);}
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
PN u32 blk_7300cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300cc:L7300cc:{bud-=1;NFSU2_TR(0x7300cc);
{u32 ea_=u32(r4(R+20)+u32(108u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_7300cf(ARGS);}
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
PN u32 blk_7300cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300cf:L7300cf:{bud-=1;NFSU2_TR(0x7300cf);
{u32 ea_=u32(r4(G+0)+u32(2020u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7300d5(ARGS);}
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
PN u32 blk_7300d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300d5:L7300d5:{bud-=1;NFSU2_TR(0x7300d5);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_7300d7(ARGS);}
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
PN u32 blk_7300d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300d7:L7300d7:{bud-=1;NFSU2_TR(0x7300d7);
{u32 ea_=u32(r4(R+20)+u32(104u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_7300da(ARGS);}
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
PN u32 blk_7300da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300da:L7300da:{bud-=1;NFSU2_TR(0x7300da);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_7300dc(ARGS);}
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
PN u32 blk_7300dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300dc:L7300dc:{bud-=1;NFSU2_TR(0x7300dc);
{u32 ea_=u32(r4(R+20)+u32(124u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7300df(ARGS);}
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
PN u32 blk_7300df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300df:L7300df:{bud-=3;NFSU2_TR(0x7300df);
{u32 ea_=u32(r4(R+20));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B7300e2:{NFSU2_TR(0x7300e2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((R+24),(U+0),2);
}
B7300e6:{NFSU2_TR(0x7300e6);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_7300ea(ARGS);}
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
PN u32 blk_7300ea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300ea:L7300ea:{bud-=1;NFSU2_TR(0x7300ea);
{u32 ea_=u32(r4(R+20)+u32(120u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7300ed(ARGS);}
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
PN u32 blk_7300ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300ed:L7300ed:{bud-=3;NFSU2_TR(0x7300ed);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B7300f0:{NFSU2_TR(0x7300f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B7300f4:{NFSU2_TR(0x7300f4);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_7300f8(ARGS);}
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
PN u32 blk_7300f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300f8:L7300f8:{bud-=1;NFSU2_TR(0x7300f8);
{u32 ea_=u32(r4(R+20)+u32(108u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7300fb(ARGS);}
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
PN u32 blk_7300fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7300fb:L7300fb:{bud-=3;NFSU2_TR(0x7300fb);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B7300fe:{NFSU2_TR(0x7300fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730102:{NFSU2_TR(0x730102);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
{[[clang::musttail]] return blk_730106(ARGS);}
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
PN u32 blk_730106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730106:L730106:{bud-=1;NFSU2_TR(0x730106);
{u32 ea_=u32(r4(R+20)+u32(104u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730109(ARGS);}
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
PN u32 blk_730109(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730109:L730109:{bud-=7;NFSU2_TR(0x730109);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x18":"=m"(m_):"a"(ea_));}
}
B73010c:{NFSU2_TR(0x73010c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B730110:{NFSU2_TR(0x730110);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730114:{NFSU2_TR(0x730114);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B730117:{NFSU2_TR(0x730117);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B73011a:{NFSU2_TR(0x73011a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B73011b:{NFSU2_TR(0x73011b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x72fdc2u);}[[clang::musttail]] return blk_72fdc2(ARGS);}}
{[[clang::musttail]] return blk_730121(ARGS);}
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
PN u32 blk_730121(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730121:L730121:{bud-=4;NFSU2_TR(0x730121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B730122:{NFSU2_TR(0x730122);
u8 U[6];
w1(F+0,carry<u32>(r4(R+20),u32(0x70ull)));
w1(F+11,scarry<u32>(r4(R+20),u32(0x70ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
w1(F+7,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B730125:{NFSU2_TR(0x730125);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B730126:{NFSU2_TR(0x730126);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x72c04au)[[clang::musttail]] return blk_72c04a(ARGS);if(t__==0x72c204u)[[clang::musttail]] return blk_72c204(ARGS););}
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
PN u32 blk_730127(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730127:L730127:{bud-=7;NFSU2_TR(0x730127);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B730128:{NFSU2_TR(0x730128);
__builtin_memmove((R+20),(G+16),4);
}
B73012a:{NFSU2_TR(0x73012a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B73012b:{NFSU2_TR(0x73012b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73012e:{NFSU2_TR(0x73012e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+8),(U+0),4);
}
B730134:{NFSU2_TR(0x730134);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B730136:{NFSU2_TR(0x730136);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7302be(ARGS);}}
}
B73013c:L73013c:{bud-=7;NFSU2_TR(0x73013c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B73013f:{NFSU2_TR(0x73013f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B730141:{NFSU2_TR(0x730141);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B730144:{NFSU2_TR(0x730144);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B730145:{NFSU2_TR(0x730145);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B730148:{NFSU2_TR(0x730148);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((G+4),(U+0),4);
}
B73014b:{NFSU2_TR(0x73014b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_73014c(ARGS);}
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
PN u32 blk_73014c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73014c:L73014c:{bud-=2;NFSU2_TR(0x73014c);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B73014f:{NFSU2_TR(0x73014f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_730152(ARGS);}
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
PN u32 blk_730152(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730152:L730152:{bud-=4;NFSU2_TR(0x730152);
{u32 ea_=u32(r4(G+0));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B730154:{NFSU2_TR(0x730154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730157:{NFSU2_TR(0x730157);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73015a:{NFSU2_TR(0x73015a);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_73015c(ARGS);}
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
PN u32 blk_73015c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73015c:L73015c:{bud-=3;NFSU2_TR(0x73015c);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B73015f:{NFSU2_TR(0x73015f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730162:{NFSU2_TR(0x730162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_730165(ARGS);}
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
PN u32 blk_730165(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730165:L730165:{bud-=3;NFSU2_TR(0x730165);
{u32 ea_=u32(r4(G+4));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B730167:{NFSU2_TR(0x730167);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73016a:{NFSU2_TR(0x73016a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_730170(ARGS);}
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
PN u32 blk_730170(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730170:L730170:{bud-=2;NFSU2_TR(0x730170);
__asm__ volatile(".byte 0xdd,0xd8"::);
}
B730172:{NFSU2_TR(0x730172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_730175(ARGS);}
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
PN u32 blk_730175(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730175:L730175:{bud-=2;NFSU2_TR(0x730175);
{u32 ea_=u32(r4(G+0)+u32(284u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B73017b:{NFSU2_TR(0x73017b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_730181(ARGS);}
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
PN u32 blk_730181(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730181:L730181:{bud-=4;NFSU2_TR(0x730181);
{u32 ea_=u32(r4(G+0)+u32(288u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B730187:{NFSU2_TR(0x730187);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73018a:{NFSU2_TR(0x73018a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73018d:{NFSU2_TR(0x73018d);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_73018f(ARGS);}
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
PN u32 blk_73018f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73018f:L73018f:{bud-=2;NFSU2_TR(0x73018f);
{u32 ea_=u32(r4(G+4)+u32(12u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B730192:{NFSU2_TR(0x730192);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_730195(ARGS);}
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
PN u32 blk_730195(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730195:L730195:{bud-=4;NFSU2_TR(0x730195);
{u32 ea_=u32(r4(G+4)+u32(16u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B730198:{NFSU2_TR(0x730198);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73019e:{NFSU2_TR(0x73019e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301a1:{NFSU2_TR(0x7301a1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_7301a7(ARGS);}
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
PN u32 blk_7301a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301a7:L7301a7:{bud-=1;NFSU2_TR(0x7301a7);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_7301a9(ARGS);}
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
PN u32 blk_7301a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301a9:L7301a9:{bud-=1;NFSU2_TR(0x7301a9);
{u32 ea_=u32(r4(G+0)+u32(572u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7301af(ARGS);}
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
PN u32 blk_7301af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301af:L7301af:{bud-=4;NFSU2_TR(0x7301af);
{u32 ea_=u32(r4(G+0)+u32(576u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B7301b5:{NFSU2_TR(0x7301b5);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301b8:{NFSU2_TR(0x7301b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301bb:{NFSU2_TR(0x7301bb);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_7301bd(ARGS);}
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
PN u32 blk_7301bd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301bd:L7301bd:{bud-=2;NFSU2_TR(0x7301bd);
{u32 ea_=u32(r4(G+4)+u32(28u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B7301c0:{NFSU2_TR(0x7301c0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7301c3(ARGS);}
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
PN u32 blk_7301c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301c3:L7301c3:{bud-=4;NFSU2_TR(0x7301c3);
{u32 ea_=u32(r4(G+4)+u32(32u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B7301c6:{NFSU2_TR(0x7301c6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301cc:{NFSU2_TR(0x7301cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301cf:{NFSU2_TR(0x7301cf);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_7301d5(ARGS);}
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
PN u32 blk_7301d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301d5:L7301d5:{bud-=1;NFSU2_TR(0x7301d5);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_7301d7(ARGS);}
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
PN u32 blk_7301d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301d7:L7301d7:{bud-=1;NFSU2_TR(0x7301d7);
{u32 ea_=u32(r4(G+0)+u32(860u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_7301dd(ARGS);}
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
PN u32 blk_7301dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301dd:L7301dd:{bud-=4;NFSU2_TR(0x7301dd);
{u32 ea_=u32(r4(G+0)+u32(864u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B7301e3:{NFSU2_TR(0x7301e3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301e6:{NFSU2_TR(0x7301e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301e9:{NFSU2_TR(0x7301e9);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_7301eb(ARGS);}
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
PN u32 blk_7301eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301eb:L7301eb:{bud-=2;NFSU2_TR(0x7301eb);
{u32 ea_=u32(r4(G+4)+u32(44u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B7301ee:{NFSU2_TR(0x7301ee);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7301f1(ARGS);}
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
PN u32 blk_7301f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7301f1:L7301f1:{bud-=4;NFSU2_TR(0x7301f1);
{u32 ea_=u32(r4(G+4)+u32(48u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B7301f4:{NFSU2_TR(0x7301f4);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7301fa:{NFSU2_TR(0x7301fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7301fd:{NFSU2_TR(0x7301fd);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x478ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_730203(ARGS);}
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
PN u32 blk_730203(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730203:L730203:{bud-=1;NFSU2_TR(0x730203);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_730205(ARGS);}
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
PN u32 blk_730205(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730205:L730205:{bud-=1;NFSU2_TR(0x730205);
{u32 ea_=u32(r4(G+0)+u32(1148u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_73020b(ARGS);}
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
PN u32 blk_73020b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73020b:L73020b:{bud-=4;NFSU2_TR(0x73020b);
{u32 ea_=u32(r4(G+0)+u32(1152u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B730211:{NFSU2_TR(0x730211);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730214:{NFSU2_TR(0x730214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730217:{NFSU2_TR(0x730217);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_730219(ARGS);}
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
PN u32 blk_730219(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730219:L730219:{bud-=2;NFSU2_TR(0x730219);
{u32 ea_=u32(r4(G+4)+u32(60u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B73021c:{NFSU2_TR(0x73021c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_73021f(ARGS);}
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
PN u32 blk_73021f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73021f:L73021f:{bud-=4;NFSU2_TR(0x73021f);
{u32 ea_=u32(r4(G+4)+u32(64u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B730222:{NFSU2_TR(0x730222);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730228:{NFSU2_TR(0x730228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73022b:{NFSU2_TR(0x73022b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x598ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_730231(ARGS);}
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
PN u32 blk_730231(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730231:L730231:{bud-=1;NFSU2_TR(0x730231);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_730233(ARGS);}
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
PN u32 blk_730233(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730233:L730233:{bud-=1;NFSU2_TR(0x730233);
{u32 ea_=u32(r4(G+0)+u32(1436u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730239(ARGS);}
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
PN u32 blk_730239(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730239:L730239:{bud-=4;NFSU2_TR(0x730239);
{u32 ea_=u32(r4(G+0)+u32(1440u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B73023f:{NFSU2_TR(0x73023f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730242:{NFSU2_TR(0x730242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730245:{NFSU2_TR(0x730245);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_730247(ARGS);}
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
PN u32 blk_730247(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730247:L730247:{bud-=2;NFSU2_TR(0x730247);
{u32 ea_=u32(r4(G+4)+u32(76u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B73024a:{NFSU2_TR(0x73024a);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_73024d(ARGS);}
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
PN u32 blk_73024d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73024d:L73024d:{bud-=4;NFSU2_TR(0x73024d);
{u32 ea_=u32(r4(G+4)+u32(80u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B730250:{NFSU2_TR(0x730250);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x6c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730256:{NFSU2_TR(0x730256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730259:{NFSU2_TR(0x730259);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x6b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_73025f(ARGS);}
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
PN u32 blk_73025f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73025f:L73025f:{bud-=1;NFSU2_TR(0x73025f);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_730261(ARGS);}
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
PN u32 blk_730261(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730261:L730261:{bud-=1;NFSU2_TR(0x730261);
{u32 ea_=u32(r4(G+0)+u32(1724u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_730267(ARGS);}
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
PN u32 blk_730267(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730267:L730267:{bud-=3;NFSU2_TR(0x730267);
{u32 ea_=u32(r4(G+0)+u32(1728u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B73026d:{NFSU2_TR(0x73026d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730270:{NFSU2_TR(0x730270);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_730272(ARGS);}
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
PN u32 blk_730272(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730272:L730272:{bud-=1;NFSU2_TR(0x730272);
{u32 ea_=u32(r4(G+4)+u32(92u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_730275(ARGS);}
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
PN u32 blk_730275(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730275:L730275:{bud-=2;NFSU2_TR(0x730275);
{u32 ea_=u32(r4(G+4)+u32(96u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B730278:{NFSU2_TR(0x730278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_73027b(ARGS);}
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
PN u32 blk_73027b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73027b:L73027b:{bud-=2;NFSU2_TR(0x73027b);
__asm__ volatile(".byte 0xdd,0xd8"::);
}
B73027d:{NFSU2_TR(0x73027d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_730280(ARGS);}
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
PN u32 blk_730280(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730280:L730280:{bud-=2;NFSU2_TR(0x730280);
{u32 ea_=u32(r4(G+0)+u32(2012u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B730286:{NFSU2_TR(0x730286);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_73028c(ARGS);}
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
PN u32 blk_73028c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73028c:L73028c:{bud-=4;NFSU2_TR(0x73028c);
{u32 ea_=u32(r4(G+0)+u32(2016u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B730292:{NFSU2_TR(0x730292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730295:{NFSU2_TR(0x730295);
__asm__ volatile(".byte 0xd9,0xc1"::);
}
B730297:{NFSU2_TR(0x730297);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_73029d(ARGS);}
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
PN u32 blk_73029d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B73029d:L73029d:{bud-=3;NFSU2_TR(0x73029d);
{u32 ea_=u32(r4(G+4)+u32(108u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B7302a0:{NFSU2_TR(0x7302a0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7302a3:{NFSU2_TR(0x7302a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_7302a6(ARGS);}
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
PN u32 blk_7302a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302a6:L7302a6:{bud-=3;NFSU2_TR(0x7302a6);
{u32 ea_=u32(r4(G+4)+u32(112u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B7302a9:{NFSU2_TR(0x7302a9);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7302ac:{NFSU2_TR(0x7302ac);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_7302af(ARGS);}
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
PN u32 blk_7302af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302af:L7302af:{bud-=4;NFSU2_TR(0x7302af);
__asm__ volatile(".byte 0xdd,0xd8"::);
}
B7302b1:{NFSU2_TR(0x7302b1);
w1(F+0,carry<u32>(r4(G+4),u32(0x80ull)));
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x80ull))));
}
B7302b7:{NFSU2_TR(0x7302b7);
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
B7302b8:{NFSU2_TR(0x7302b8);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x73014cu);}[[clang::musttail]] return blk_73014c(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7302be(ARGS);}
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
PN u32 blk_7302be(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302be:L7302be:{bud-=3;NFSU2_TR(0x7302be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7302bf:{NFSU2_TR(0x7302bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7302c0:{NFSU2_TR(0x7302c0);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x72c01eu)[[clang::musttail]] return blk_72c01e(ARGS);if(t__==0x72c1d6u)[[clang::musttail]] return blk_72c1d6(ARGS););}
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
PN u32 blk_7302c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302c1:L7302c1:{bud-=3;NFSU2_TR(0x7302c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7302c2:{NFSU2_TR(0x7302c2);
__builtin_memmove((R+24),(G+4),4);
}
B7302c4:{NFSU2_TR(0x7302c4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7302c9ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x72dcd5u);}[[clang::musttail]] return blk_72dcd5(ARGS);}
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
PN u32 blk_7302c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302c9:L7302c9:{bud-=2;NFSU2_TR(0x7302c9);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+7,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+7))==(u8(0x0ull))));
}
B7302ce:{NFSU2_TR(0x7302ce);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7302d7(ARGS);}}
}
B7302d0:L7302d0:{bud-=2;NFSU2_TR(0x7302d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7302d1:{NFSU2_TR(0x7302d1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7302d6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x575630u);}[[clang::musttail]] return blk_575630(ARGS);}
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
PN u32 blk_7302d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302d6:L7302d6:{bud-=1;NFSU2_TR(0x7302d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_7302d7(ARGS);}
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
PN u32 blk_7302d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302d7:L7302d7:{bud-=3;NFSU2_TR(0x7302d7);
__builtin_memmove((G+0),(R+24),4);
}
B7302d9:{NFSU2_TR(0x7302d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7302da:{NFSU2_TR(0x7302da);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_7302dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7302dd:L7302dd:{bud-=610;NFSU2_TR(0x7302dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7302de:{NFSU2_TR(0x7302de);
__builtin_memmove((R+20),(G+16),4);
}
B7302e0:{NFSU2_TR(0x7302e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7302e1:{NFSU2_TR(0x7302e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7302e4:{NFSU2_TR(0x7302e4);
w4(G+0,u32(0x818eb8ull));
}
B7302ea:{NFSU2_TR(0x7302ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7302ed:{NFSU2_TR(0x7302ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7302f0:{NFSU2_TR(0x7302f0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x20ull))));
}
B7302f3:{NFSU2_TR(0x7302f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7302f7:{NFSU2_TR(0x7302f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7302fb:{NFSU2_TR(0x7302fb);
__builtin_memmove((R+4352),(R+4416),8);
}
B7302fe:{NFSU2_TR(0x7302fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730302:{NFSU2_TR(0x730302);
__builtin_memmove((R+4368),(R+4432),8);
}
B730305:{NFSU2_TR(0x730305);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730309:{NFSU2_TR(0x730309);
__builtin_memmove((R+4384),(R+4448),8);
}
B73030c:{NFSU2_TR(0x73030c);
__builtin_memmove((R+4400),(R+4464),8);
}
B73030f:{NFSU2_TR(0x73030f);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B730312:{NFSU2_TR(0x730312);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B730315:{NFSU2_TR(0x730315);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B730318:{NFSU2_TR(0x730318);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B73031b:{NFSU2_TR(0x73031b);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x10ull))));
}
B73031f:{NFSU2_TR(0x73031f);
__builtin_memmove((R+4356),(R+4352),4);
}
B730322:{NFSU2_TR(0x730322);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x10ull))));
}
B730326:{NFSU2_TR(0x730326);
__builtin_memmove((R+4372),(R+4368),4);
}
B730329:{NFSU2_TR(0x730329);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x10ull))));
}
B73032d:{NFSU2_TR(0x73032d);
__builtin_memmove((R+4388),(R+4384),4);
}
B730330:{NFSU2_TR(0x730330);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x10ull))));
}
B730334:{NFSU2_TR(0x730334);
__builtin_memmove((R+4404),(R+4400),4);
}
B730337:{NFSU2_TR(0x730337);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B73033b:{NFSU2_TR(0x73033b);
__builtin_memmove((R+4420),(R+4352),4);
}
B73033e:{NFSU2_TR(0x73033e);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x10ull))));
}
B730342:{NFSU2_TR(0x730342);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B730345:{NFSU2_TR(0x730345);
__builtin_memmove((R+4436),(R+4368),4);
}
B730348:{NFSU2_TR(0x730348);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B73034c:{NFSU2_TR(0x73034c);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x10ull))));
}
B730350:{NFSU2_TR(0x730350);
__builtin_memmove((R+4452),(R+4384),4);
}
B730353:{NFSU2_TR(0x730353);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x10ull))));
}
B730357:{NFSU2_TR(0x730357);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B73035b:{NFSU2_TR(0x73035b);
__builtin_memmove((R+4468),(R+4400),4);
}
B73035e:{NFSU2_TR(0x73035e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730362:{NFSU2_TR(0x730362);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4422))));
}
B730365:{NFSU2_TR(0x730365);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B730369:{NFSU2_TR(0x730369);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4438))));
}
B73036c:{NFSU2_TR(0x73036c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B730371:{NFSU2_TR(0x730371);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4454))));
}
B730374:{NFSU2_TR(0x730374);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B730379:{NFSU2_TR(0x730379);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4470))));
}
B73037c:{NFSU2_TR(0x73037c);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B730381:{NFSU2_TR(0x730381);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B730384:{NFSU2_TR(0x730384);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730388:{NFSU2_TR(0x730388);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B73038b:{NFSU2_TR(0x73038b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B73038f:{NFSU2_TR(0x73038f);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4438))));
}
B730392:{NFSU2_TR(0x730392);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730396:{NFSU2_TR(0x730396);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B730399:{NFSU2_TR(0x730399);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B73039c:{NFSU2_TR(0x73039c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4470))));
}
B73039f:{NFSU2_TR(0x73039f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7303a3:{NFSU2_TR(0x7303a3);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7303a6:{NFSU2_TR(0x7303a6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7303aa:{NFSU2_TR(0x7303aa);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7303ad:{NFSU2_TR(0x7303ad);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7303b1:{NFSU2_TR(0x7303b1);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7303b4:{NFSU2_TR(0x7303b4);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7303b7:{NFSU2_TR(0x7303b7);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7303ba:{NFSU2_TR(0x7303ba);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7303be:{NFSU2_TR(0x7303be);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7303c1:{NFSU2_TR(0x7303c1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7303c5:{NFSU2_TR(0x7303c5);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7303c8:{NFSU2_TR(0x7303c8);
__builtin_memmove((R+4464),(R+4448),8);
}
B7303cb:{NFSU2_TR(0x7303cb);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7303cf:{NFSU2_TR(0x7303cf);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7303d2:{NFSU2_TR(0x7303d2);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7303d6:{NFSU2_TR(0x7303d6);
w4(R+8,u32(r8(R+4448)));
}
B7303d9:{NFSU2_TR(0x7303d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7303e0:{NFSU2_TR(0x7303e0);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7303e3:{NFSU2_TR(0x7303e3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7303e7:{NFSU2_TR(0x7303e7);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7303ea:{NFSU2_TR(0x7303ea);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7303ee:{NFSU2_TR(0x7303ee);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7303f1:{NFSU2_TR(0x7303f1);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7303f4:{NFSU2_TR(0x7303f4);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7303f7:{NFSU2_TR(0x7303f7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7303fb:{NFSU2_TR(0x7303fb);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7303fe:{NFSU2_TR(0x7303fe);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730402:{NFSU2_TR(0x730402);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730405:{NFSU2_TR(0x730405);
__builtin_memmove((R+4464),(R+4448),8);
}
B730408:{NFSU2_TR(0x730408);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73040c:{NFSU2_TR(0x73040c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73040f:{NFSU2_TR(0x73040f);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730413:{NFSU2_TR(0x730413);
w4(R+8,u32(r8(R+4448)));
}
B730416:{NFSU2_TR(0x730416);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730419:{NFSU2_TR(0x730419);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73041d:{NFSU2_TR(0x73041d);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730420:{NFSU2_TR(0x730420);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730424:{NFSU2_TR(0x730424);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730427:{NFSU2_TR(0x730427);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73042e:{NFSU2_TR(0x73042e);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730431:{NFSU2_TR(0x730431);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730434:{NFSU2_TR(0x730434);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730438:{NFSU2_TR(0x730438);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73043b:{NFSU2_TR(0x73043b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73043f:{NFSU2_TR(0x73043f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730442:{NFSU2_TR(0x730442);
__builtin_memmove((R+4464),(R+4448),8);
}
B730445:{NFSU2_TR(0x730445);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730449:{NFSU2_TR(0x730449);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73044c:{NFSU2_TR(0x73044c);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730450:{NFSU2_TR(0x730450);
w4(R+8,u32(r8(R+4448)));
}
B730453:{NFSU2_TR(0x730453);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730456:{NFSU2_TR(0x730456);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73045a:{NFSU2_TR(0x73045a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73045d:{NFSU2_TR(0x73045d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730461:{NFSU2_TR(0x730461);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730464:{NFSU2_TR(0x730464);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73046b:{NFSU2_TR(0x73046b);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B73046e:{NFSU2_TR(0x73046e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730471:{NFSU2_TR(0x730471);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730478:{NFSU2_TR(0x730478);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73047b:{NFSU2_TR(0x73047b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730482:{NFSU2_TR(0x730482);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730485:{NFSU2_TR(0x730485);
__builtin_memmove((R+4464),(R+4448),8);
}
B730488:{NFSU2_TR(0x730488);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73048c:{NFSU2_TR(0x73048c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73048f:{NFSU2_TR(0x73048f);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730493:{NFSU2_TR(0x730493);
w4(R+8,u32(r8(R+4448)));
}
B730496:{NFSU2_TR(0x730496);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730499:{NFSU2_TR(0x730499);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7304a0:{NFSU2_TR(0x7304a0);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7304a3:{NFSU2_TR(0x7304a3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7304aa:{NFSU2_TR(0x7304aa);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7304ad:{NFSU2_TR(0x7304ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7304b4:{NFSU2_TR(0x7304b4);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7304b7:{NFSU2_TR(0x7304b7);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7304ba:{NFSU2_TR(0x7304ba);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7304c1:{NFSU2_TR(0x7304c1);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7304c4:{NFSU2_TR(0x7304c4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7304cb:{NFSU2_TR(0x7304cb);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7304ce:{NFSU2_TR(0x7304ce);
__builtin_memmove((R+4464),(R+4448),8);
}
B7304d1:{NFSU2_TR(0x7304d1);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7304d5:{NFSU2_TR(0x7304d5);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7304d8:{NFSU2_TR(0x7304d8);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7304dc:{NFSU2_TR(0x7304dc);
w4(R+8,u32(r8(R+4448)));
}
B7304df:{NFSU2_TR(0x7304df);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7304e2:{NFSU2_TR(0x7304e2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7304e9:{NFSU2_TR(0x7304e9);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7304ec:{NFSU2_TR(0x7304ec);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7304f3:{NFSU2_TR(0x7304f3);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7304f6:{NFSU2_TR(0x7304f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7304fd:{NFSU2_TR(0x7304fd);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730500:{NFSU2_TR(0x730500);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730503:{NFSU2_TR(0x730503);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73050a:{NFSU2_TR(0x73050a);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73050d:{NFSU2_TR(0x73050d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730514:{NFSU2_TR(0x730514);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730517:{NFSU2_TR(0x730517);
__builtin_memmove((R+4464),(R+4448),8);
}
B73051a:{NFSU2_TR(0x73051a);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73051e:{NFSU2_TR(0x73051e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730521:{NFSU2_TR(0x730521);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730525:{NFSU2_TR(0x730525);
w4(R+8,u32(r8(R+4448)));
}
B730528:{NFSU2_TR(0x730528);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73052b:{NFSU2_TR(0x73052b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730532:{NFSU2_TR(0x730532);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730535:{NFSU2_TR(0x730535);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73053c:{NFSU2_TR(0x73053c);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73053f:{NFSU2_TR(0x73053f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730546:{NFSU2_TR(0x730546);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730549:{NFSU2_TR(0x730549);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73054c:{NFSU2_TR(0x73054c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730553:{NFSU2_TR(0x730553);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730556:{NFSU2_TR(0x730556);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73055d:{NFSU2_TR(0x73055d);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730560:{NFSU2_TR(0x730560);
__builtin_memmove((R+4464),(R+4448),8);
}
B730563:{NFSU2_TR(0x730563);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730567:{NFSU2_TR(0x730567);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73056a:{NFSU2_TR(0x73056a);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73056e:{NFSU2_TR(0x73056e);
w4(R+8,u32(r8(R+4448)));
}
B730571:{NFSU2_TR(0x730571);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730574:{NFSU2_TR(0x730574);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73057b:{NFSU2_TR(0x73057b);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73057e:{NFSU2_TR(0x73057e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730585:{NFSU2_TR(0x730585);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730588:{NFSU2_TR(0x730588);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73058f:{NFSU2_TR(0x73058f);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730592:{NFSU2_TR(0x730592);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730595:{NFSU2_TR(0x730595);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73059c:{NFSU2_TR(0x73059c);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73059f:{NFSU2_TR(0x73059f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7305a6:{NFSU2_TR(0x7305a6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305a9:{NFSU2_TR(0x7305a9);
__builtin_memmove((R+4464),(R+4448),8);
}
B7305ac:{NFSU2_TR(0x7305ac);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7305b0:{NFSU2_TR(0x7305b0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305b3:{NFSU2_TR(0x7305b3);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7305b7:{NFSU2_TR(0x7305b7);
w4(R+8,u32(r8(R+4448)));
}
B7305ba:{NFSU2_TR(0x7305ba);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7305bd:{NFSU2_TR(0x7305bd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7305c4:{NFSU2_TR(0x7305c4);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7305c7:{NFSU2_TR(0x7305c7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7305ce:{NFSU2_TR(0x7305ce);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7305d1:{NFSU2_TR(0x7305d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7305d5:{NFSU2_TR(0x7305d5);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7305d8:{NFSU2_TR(0x7305d8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7305db:{NFSU2_TR(0x7305db);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7305e2:{NFSU2_TR(0x7305e2);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7305e5:{NFSU2_TR(0x7305e5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7305ec:{NFSU2_TR(0x7305ec);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305ef:{NFSU2_TR(0x7305ef);
__builtin_memmove((R+4464),(R+4448),8);
}
B7305f2:{NFSU2_TR(0x7305f2);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7305f6:{NFSU2_TR(0x7305f6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7305f9:{NFSU2_TR(0x7305f9);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7305fd:{NFSU2_TR(0x7305fd);
w4(R+8,u32(r8(R+4448)));
}
B730600:{NFSU2_TR(0x730600);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730603:{NFSU2_TR(0x730603);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73060a:{NFSU2_TR(0x73060a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73060d:{NFSU2_TR(0x73060d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730614:{NFSU2_TR(0x730614);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730617:{NFSU2_TR(0x730617);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+12)),r2(U+0));
}
B73061a:{NFSU2_TR(0x73061a);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B73061d:{NFSU2_TR(0x73061d);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(G+4)),r2(U+0));
}
B730620:{NFSU2_TR(0x730620);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730623:{NFSU2_TR(0x730623);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73062a:{NFSU2_TR(0x73062a);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73062d:{NFSU2_TR(0x73062d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730634:{NFSU2_TR(0x730634);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730637:{NFSU2_TR(0x730637);
__builtin_memmove((R+4464),(R+4448),8);
}
B73063a:{NFSU2_TR(0x73063a);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73063e:{NFSU2_TR(0x73063e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730641:{NFSU2_TR(0x730641);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730645:{NFSU2_TR(0x730645);
w4(R+8,u32(r8(R+4448)));
}
B730648:{NFSU2_TR(0x730648);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73064b:{NFSU2_TR(0x73064b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730652:{NFSU2_TR(0x730652);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730655:{NFSU2_TR(0x730655);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73065c:{NFSU2_TR(0x73065c);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73065f:{NFSU2_TR(0x73065f);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730663:{NFSU2_TR(0x730663);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730666:{NFSU2_TR(0x730666);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730669:{NFSU2_TR(0x730669);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730670:{NFSU2_TR(0x730670);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730673:{NFSU2_TR(0x730673);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73067a:{NFSU2_TR(0x73067a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73067d:{NFSU2_TR(0x73067d);
__builtin_memmove((R+4464),(R+4448),8);
}
B730680:{NFSU2_TR(0x730680);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730684:{NFSU2_TR(0x730684);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730687:{NFSU2_TR(0x730687);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73068b:{NFSU2_TR(0x73068b);
w4(R+8,u32(r8(R+4448)));
}
B73068e:{NFSU2_TR(0x73068e);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730691:{NFSU2_TR(0x730691);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730698:{NFSU2_TR(0x730698);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73069b:{NFSU2_TR(0x73069b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7306a2:{NFSU2_TR(0x7306a2);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7306a5:{NFSU2_TR(0x7306a5);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7306ac:{NFSU2_TR(0x7306ac);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7306af:{NFSU2_TR(0x7306af);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7306b2:{NFSU2_TR(0x7306b2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7306b9:{NFSU2_TR(0x7306b9);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7306bc:{NFSU2_TR(0x7306bc);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7306c3:{NFSU2_TR(0x7306c3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7306c6:{NFSU2_TR(0x7306c6);
__builtin_memmove((R+4464),(R+4448),8);
}
B7306c9:{NFSU2_TR(0x7306c9);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7306cd:{NFSU2_TR(0x7306cd);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7306d0:{NFSU2_TR(0x7306d0);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7306d4:{NFSU2_TR(0x7306d4);
w4(R+8,u32(r8(R+4448)));
}
B7306d7:{NFSU2_TR(0x7306d7);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7306da:{NFSU2_TR(0x7306da);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7306e1:{NFSU2_TR(0x7306e1);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7306e4:{NFSU2_TR(0x7306e4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7306eb:{NFSU2_TR(0x7306eb);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7306ee:{NFSU2_TR(0x7306ee);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7306f5:{NFSU2_TR(0x7306f5);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7306f8:{NFSU2_TR(0x7306f8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7306fb:{NFSU2_TR(0x7306fb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730702:{NFSU2_TR(0x730702);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730705:{NFSU2_TR(0x730705);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73070c:{NFSU2_TR(0x73070c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73070f:{NFSU2_TR(0x73070f);
__builtin_memmove((R+4464),(R+4448),8);
}
B730712:{NFSU2_TR(0x730712);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730716:{NFSU2_TR(0x730716);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730719:{NFSU2_TR(0x730719);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73071d:{NFSU2_TR(0x73071d);
w4(R+8,u32(r8(R+4448)));
}
B730720:{NFSU2_TR(0x730720);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730723:{NFSU2_TR(0x730723);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73072a:{NFSU2_TR(0x73072a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73072d:{NFSU2_TR(0x73072d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730734:{NFSU2_TR(0x730734);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730737:{NFSU2_TR(0x730737);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73073e:{NFSU2_TR(0x73073e);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730741:{NFSU2_TR(0x730741);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730744:{NFSU2_TR(0x730744);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73074b:{NFSU2_TR(0x73074b);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73074e:{NFSU2_TR(0x73074e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730755:{NFSU2_TR(0x730755);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730758:{NFSU2_TR(0x730758);
__builtin_memmove((R+4464),(R+4448),8);
}
B73075b:{NFSU2_TR(0x73075b);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73075f:{NFSU2_TR(0x73075f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730762:{NFSU2_TR(0x730762);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730766:{NFSU2_TR(0x730766);
w4(R+8,u32(r8(R+4448)));
}
B730769:{NFSU2_TR(0x730769);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73076c:{NFSU2_TR(0x73076c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730773:{NFSU2_TR(0x730773);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730776:{NFSU2_TR(0x730776);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73077d:{NFSU2_TR(0x73077d);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730780:{NFSU2_TR(0x730780);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730787:{NFSU2_TR(0x730787);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B73078a:{NFSU2_TR(0x73078a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73078d:{NFSU2_TR(0x73078d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730794:{NFSU2_TR(0x730794);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730797:{NFSU2_TR(0x730797);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73079e:{NFSU2_TR(0x73079e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307a1:{NFSU2_TR(0x7307a1);
__builtin_memmove((R+4464),(R+4448),8);
}
B7307a4:{NFSU2_TR(0x7307a4);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7307a8:{NFSU2_TR(0x7307a8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307ab:{NFSU2_TR(0x7307ab);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7307af:{NFSU2_TR(0x7307af);
w4(R+8,u32(r8(R+4448)));
}
B7307b2:{NFSU2_TR(0x7307b2);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7307b5:{NFSU2_TR(0x7307b5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7307bc:{NFSU2_TR(0x7307bc);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7307bf:{NFSU2_TR(0x7307bf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7307c6:{NFSU2_TR(0x7307c6);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7307c9:{NFSU2_TR(0x7307c9);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7307d0:{NFSU2_TR(0x7307d0);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7307d3:{NFSU2_TR(0x7307d3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7307d6:{NFSU2_TR(0x7307d6);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7307d9:{NFSU2_TR(0x7307d9);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307dc:{NFSU2_TR(0x7307dc);
__builtin_memmove((R+4464),(R+4448),8);
}
B7307df:{NFSU2_TR(0x7307df);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7307e3:{NFSU2_TR(0x7307e3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7307e6:{NFSU2_TR(0x7307e6);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7307ea:{NFSU2_TR(0x7307ea);
w4(R+8,u32(r8(R+4448)));
}
B7307ed:{NFSU2_TR(0x7307ed);
w4(G+0,u32(0x818cb8ull));
}
B7307f3:{NFSU2_TR(0x7307f3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7307f7:{NFSU2_TR(0x7307f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7307fc:{NFSU2_TR(0x7307fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730801:{NFSU2_TR(0x730801);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730806:{NFSU2_TR(0x730806);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B730809:{NFSU2_TR(0x730809);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73080d:{NFSU2_TR(0x73080d);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730810:{NFSU2_TR(0x730810);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730814:{NFSU2_TR(0x730814);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730817:{NFSU2_TR(0x730817);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73081b:{NFSU2_TR(0x73081b);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73081e:{NFSU2_TR(0x73081e);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730825:{NFSU2_TR(0x730825);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730828:{NFSU2_TR(0x730828);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73082b:{NFSU2_TR(0x73082b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73082f:{NFSU2_TR(0x73082f);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730832:{NFSU2_TR(0x730832);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730836:{NFSU2_TR(0x730836);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730839:{NFSU2_TR(0x730839);
__builtin_memmove((R+4464),(R+4448),8);
}
B73083c:{NFSU2_TR(0x73083c);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730840:{NFSU2_TR(0x730840);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730843:{NFSU2_TR(0x730843);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730847:{NFSU2_TR(0x730847);
w4(R+8,u32(r8(R+4448)));
}
B73084a:{NFSU2_TR(0x73084a);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73084d:{NFSU2_TR(0x73084d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730851:{NFSU2_TR(0x730851);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730854:{NFSU2_TR(0x730854);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730858:{NFSU2_TR(0x730858);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73085b:{NFSU2_TR(0x73085b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730862:{NFSU2_TR(0x730862);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730865:{NFSU2_TR(0x730865);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730868:{NFSU2_TR(0x730868);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73086c:{NFSU2_TR(0x73086c);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73086f:{NFSU2_TR(0x73086f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730873:{NFSU2_TR(0x730873);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730876:{NFSU2_TR(0x730876);
__builtin_memmove((R+4464),(R+4448),8);
}
B730879:{NFSU2_TR(0x730879);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73087d:{NFSU2_TR(0x73087d);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730880:{NFSU2_TR(0x730880);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730884:{NFSU2_TR(0x730884);
w4(R+8,u32(r8(R+4448)));
}
B730887:{NFSU2_TR(0x730887);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73088a:{NFSU2_TR(0x73088a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73088e:{NFSU2_TR(0x73088e);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730891:{NFSU2_TR(0x730891);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730895:{NFSU2_TR(0x730895);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730898:{NFSU2_TR(0x730898);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73089f:{NFSU2_TR(0x73089f);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7308a2:{NFSU2_TR(0x7308a2);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7308a5:{NFSU2_TR(0x7308a5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7308a9:{NFSU2_TR(0x7308a9);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7308ac:{NFSU2_TR(0x7308ac);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7308b0:{NFSU2_TR(0x7308b0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7308b3:{NFSU2_TR(0x7308b3);
__builtin_memmove((R+4464),(R+4448),8);
}
B7308b6:{NFSU2_TR(0x7308b6);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7308ba:{NFSU2_TR(0x7308ba);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7308bd:{NFSU2_TR(0x7308bd);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7308c1:{NFSU2_TR(0x7308c1);
w4(R+8,u32(r8(R+4448)));
}
B7308c4:{NFSU2_TR(0x7308c4);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7308c7:{NFSU2_TR(0x7308c7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7308cb:{NFSU2_TR(0x7308cb);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7308ce:{NFSU2_TR(0x7308ce);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7308d2:{NFSU2_TR(0x7308d2);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7308d5:{NFSU2_TR(0x7308d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7308dc:{NFSU2_TR(0x7308dc);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7308df:{NFSU2_TR(0x7308df);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7308e2:{NFSU2_TR(0x7308e2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7308e9:{NFSU2_TR(0x7308e9);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7308ec:{NFSU2_TR(0x7308ec);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7308f3:{NFSU2_TR(0x7308f3);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7308f6:{NFSU2_TR(0x7308f6);
__builtin_memmove((R+4464),(R+4448),8);
}
B7308f9:{NFSU2_TR(0x7308f9);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7308fd:{NFSU2_TR(0x7308fd);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730900:{NFSU2_TR(0x730900);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730904:{NFSU2_TR(0x730904);
w4(R+8,u32(r8(R+4448)));
}
B730907:{NFSU2_TR(0x730907);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73090a:{NFSU2_TR(0x73090a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730911:{NFSU2_TR(0x730911);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730914:{NFSU2_TR(0x730914);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B73091b:{NFSU2_TR(0x73091b);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B73091e:{NFSU2_TR(0x73091e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730925:{NFSU2_TR(0x730925);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730928:{NFSU2_TR(0x730928);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B73092b:{NFSU2_TR(0x73092b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730932:{NFSU2_TR(0x730932);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730935:{NFSU2_TR(0x730935);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B73093c:{NFSU2_TR(0x73093c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B73093f:{NFSU2_TR(0x73093f);
__builtin_memmove((R+4464),(R+4448),8);
}
B730942:{NFSU2_TR(0x730942);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730946:{NFSU2_TR(0x730946);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730949:{NFSU2_TR(0x730949);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B73094d:{NFSU2_TR(0x73094d);
w4(R+8,u32(r8(R+4448)));
}
B730950:{NFSU2_TR(0x730950);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730953:{NFSU2_TR(0x730953);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B73095a:{NFSU2_TR(0x73095a);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B73095d:{NFSU2_TR(0x73095d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730964:{NFSU2_TR(0x730964);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730967:{NFSU2_TR(0x730967);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73096e:{NFSU2_TR(0x73096e);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730971:{NFSU2_TR(0x730971);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730974:{NFSU2_TR(0x730974);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B73097b:{NFSU2_TR(0x73097b);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B73097e:{NFSU2_TR(0x73097e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730985:{NFSU2_TR(0x730985);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730988:{NFSU2_TR(0x730988);
__builtin_memmove((R+4464),(R+4448),8);
}
B73098b:{NFSU2_TR(0x73098b);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B73098f:{NFSU2_TR(0x73098f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730992:{NFSU2_TR(0x730992);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730996:{NFSU2_TR(0x730996);
w4(R+8,u32(r8(R+4448)));
}
B730999:{NFSU2_TR(0x730999);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B73099c:{NFSU2_TR(0x73099c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7309a3:{NFSU2_TR(0x7309a3);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7309a6:{NFSU2_TR(0x7309a6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7309ad:{NFSU2_TR(0x7309ad);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7309b0:{NFSU2_TR(0x7309b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7309b7:{NFSU2_TR(0x7309b7);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B7309ba:{NFSU2_TR(0x7309ba);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B7309bd:{NFSU2_TR(0x7309bd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7309c4:{NFSU2_TR(0x7309c4);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B7309c7:{NFSU2_TR(0x7309c7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7309ce:{NFSU2_TR(0x7309ce);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7309d1:{NFSU2_TR(0x7309d1);
__builtin_memmove((R+4464),(R+4448),8);
}
B7309d4:{NFSU2_TR(0x7309d4);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B7309d8:{NFSU2_TR(0x7309d8);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B7309db:{NFSU2_TR(0x7309db);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B7309df:{NFSU2_TR(0x7309df);
w4(R+8,u32(r8(R+4448)));
}
B7309e2:{NFSU2_TR(0x7309e2);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7309e5:{NFSU2_TR(0x7309e5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7309ec:{NFSU2_TR(0x7309ec);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7309ef:{NFSU2_TR(0x7309ef);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7309f6:{NFSU2_TR(0x7309f6);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7309f9:{NFSU2_TR(0x7309f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7309fd:{NFSU2_TR(0x7309fd);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730a00:{NFSU2_TR(0x730a00);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730a03:{NFSU2_TR(0x730a03);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730a0a:{NFSU2_TR(0x730a0a);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730a0d:{NFSU2_TR(0x730a0d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730a14:{NFSU2_TR(0x730a14);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a17:{NFSU2_TR(0x730a17);
__builtin_memmove((R+4464),(R+4448),8);
}
B730a1a:{NFSU2_TR(0x730a1a);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730a1e:{NFSU2_TR(0x730a1e);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a21:{NFSU2_TR(0x730a21);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730a25:{NFSU2_TR(0x730a25);
w4(R+8,u32(r8(R+4448)));
}
B730a28:{NFSU2_TR(0x730a28);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730a2b:{NFSU2_TR(0x730a2b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730a32:{NFSU2_TR(0x730a32);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730a35:{NFSU2_TR(0x730a35);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730a3c:{NFSU2_TR(0x730a3c);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730a3f:{NFSU2_TR(0x730a3f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730a43:{NFSU2_TR(0x730a43);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730a46:{NFSU2_TR(0x730a46);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730a49:{NFSU2_TR(0x730a49);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730a50:{NFSU2_TR(0x730a50);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730a53:{NFSU2_TR(0x730a53);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730a5a:{NFSU2_TR(0x730a5a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a5d:{NFSU2_TR(0x730a5d);
__builtin_memmove((R+4464),(R+4448),8);
}
B730a60:{NFSU2_TR(0x730a60);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730a64:{NFSU2_TR(0x730a64);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730a67:{NFSU2_TR(0x730a67);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730a6b:{NFSU2_TR(0x730a6b);
w4(R+8,u32(r8(R+4448)));
}
B730a6e:{NFSU2_TR(0x730a6e);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730a71:{NFSU2_TR(0x730a71);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730a78:{NFSU2_TR(0x730a78);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730a7b:{NFSU2_TR(0x730a7b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730a82:{NFSU2_TR(0x730a82);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730a85:{NFSU2_TR(0x730a85);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730a89:{NFSU2_TR(0x730a89);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730a8c:{NFSU2_TR(0x730a8c);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730a8f:{NFSU2_TR(0x730a8f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730a96:{NFSU2_TR(0x730a96);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730a99:{NFSU2_TR(0x730a99);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730aa0:{NFSU2_TR(0x730aa0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730aa3:{NFSU2_TR(0x730aa3);
__builtin_memmove((R+4464),(R+4448),8);
}
B730aa6:{NFSU2_TR(0x730aa6);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730aaa:{NFSU2_TR(0x730aaa);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730aad:{NFSU2_TR(0x730aad);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730ab1:{NFSU2_TR(0x730ab1);
w4(R+8,u32(r8(R+4448)));
}
B730ab4:{NFSU2_TR(0x730ab4);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730ab7:{NFSU2_TR(0x730ab7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730abe:{NFSU2_TR(0x730abe);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730ac1:{NFSU2_TR(0x730ac1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730ac8:{NFSU2_TR(0x730ac8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730acb:{NFSU2_TR(0x730acb);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730acf:{NFSU2_TR(0x730acf);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730ad2:{NFSU2_TR(0x730ad2);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730ad5:{NFSU2_TR(0x730ad5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730adc:{NFSU2_TR(0x730adc);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730adf:{NFSU2_TR(0x730adf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730ae6:{NFSU2_TR(0x730ae6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730ae9:{NFSU2_TR(0x730ae9);
__builtin_memmove((R+4464),(R+4448),8);
}
B730aec:{NFSU2_TR(0x730aec);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730af0:{NFSU2_TR(0x730af0);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730af3:{NFSU2_TR(0x730af3);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730af7:{NFSU2_TR(0x730af7);
w4(R+8,u32(r8(R+4448)));
}
B730afa:{NFSU2_TR(0x730afa);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730afd:{NFSU2_TR(0x730afd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730b04:{NFSU2_TR(0x730b04);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730b07:{NFSU2_TR(0x730b07);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730b0e:{NFSU2_TR(0x730b0e);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730b11:{NFSU2_TR(0x730b11);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730b18:{NFSU2_TR(0x730b18);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730b1b:{NFSU2_TR(0x730b1b);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730b1e:{NFSU2_TR(0x730b1e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730b25:{NFSU2_TR(0x730b25);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730b28:{NFSU2_TR(0x730b28);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730b2f:{NFSU2_TR(0x730b2f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b32:{NFSU2_TR(0x730b32);
__builtin_memmove((R+4464),(R+4448),8);
}
B730b35:{NFSU2_TR(0x730b35);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730b39:{NFSU2_TR(0x730b39);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b3c:{NFSU2_TR(0x730b3c);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730b40:{NFSU2_TR(0x730b40);
w4(R+8,u32(r8(R+4448)));
}
B730b43:{NFSU2_TR(0x730b43);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730b46:{NFSU2_TR(0x730b46);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730b4d:{NFSU2_TR(0x730b4d);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730b50:{NFSU2_TR(0x730b50);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730b57:{NFSU2_TR(0x730b57);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730b5a:{NFSU2_TR(0x730b5a);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730b61:{NFSU2_TR(0x730b61);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730b64:{NFSU2_TR(0x730b64);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730b67:{NFSU2_TR(0x730b67);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730b6e:{NFSU2_TR(0x730b6e);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730b71:{NFSU2_TR(0x730b71);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730b78:{NFSU2_TR(0x730b78);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b7b:{NFSU2_TR(0x730b7b);
__builtin_memmove((R+4464),(R+4448),8);
}
B730b7e:{NFSU2_TR(0x730b7e);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730b82:{NFSU2_TR(0x730b82);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730b85:{NFSU2_TR(0x730b85);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730b89:{NFSU2_TR(0x730b89);
w4(R+8,u32(r8(R+4448)));
}
B730b8c:{NFSU2_TR(0x730b8c);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730b8f:{NFSU2_TR(0x730b8f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730b96:{NFSU2_TR(0x730b96);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730b99:{NFSU2_TR(0x730b99);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730ba0:{NFSU2_TR(0x730ba0);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730ba3:{NFSU2_TR(0x730ba3);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730baa:{NFSU2_TR(0x730baa);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730bad:{NFSU2_TR(0x730bad);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730bb0:{NFSU2_TR(0x730bb0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730bb7:{NFSU2_TR(0x730bb7);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730bba:{NFSU2_TR(0x730bba);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730bc1:{NFSU2_TR(0x730bc1);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730bc4:{NFSU2_TR(0x730bc4);
__builtin_memmove((R+4464),(R+4448),8);
}
B730bc7:{NFSU2_TR(0x730bc7);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730bcb:{NFSU2_TR(0x730bcb);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730bce:{NFSU2_TR(0x730bce);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730bd2:{NFSU2_TR(0x730bd2);
w4(R+8,u32(r8(R+4448)));
}
B730bd5:{NFSU2_TR(0x730bd5);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730bd8:{NFSU2_TR(0x730bd8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730bdf:{NFSU2_TR(0x730bdf);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730be2:{NFSU2_TR(0x730be2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730be9:{NFSU2_TR(0x730be9);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730bec:{NFSU2_TR(0x730bec);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730bf3:{NFSU2_TR(0x730bf3);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730bf6:{NFSU2_TR(0x730bf6);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730bf9:{NFSU2_TR(0x730bf9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730c00:{NFSU2_TR(0x730c00);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730c03:{NFSU2_TR(0x730c03);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730c0a:{NFSU2_TR(0x730c0a);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c0d:{NFSU2_TR(0x730c0d);
__builtin_memmove((R+4464),(R+4448),8);
}
B730c10:{NFSU2_TR(0x730c10);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730c14:{NFSU2_TR(0x730c14);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c17:{NFSU2_TR(0x730c17);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730c1b:{NFSU2_TR(0x730c1b);
w4(R+8,u32(r8(R+4448)));
}
B730c1e:{NFSU2_TR(0x730c1e);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B730c21:{NFSU2_TR(0x730c21);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730c28:{NFSU2_TR(0x730c28);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B730c2b:{NFSU2_TR(0x730c2b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730c32:{NFSU2_TR(0x730c32);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B730c35:{NFSU2_TR(0x730c35);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730c3c:{NFSU2_TR(0x730c3c);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B730c3f:{NFSU2_TR(0x730c3f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B730c42:{NFSU2_TR(0x730c42);
w4(R+4464,u32(u32(r4(R+4464))+u32(r4(R+4432))));
w4(R+4468,u32(u32(r4(R+4468))+u32(r4(R+4436))));
}
B730c45:{NFSU2_TR(0x730c45);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c48:{NFSU2_TR(0x730c48);
__builtin_memmove((R+4464),(R+4448),8);
}
B730c4b:{NFSU2_TR(0x730c4b);
w8(R+4448,shr<u64>(r8(R+4448),u64(u32(0x20ull))));
}
B730c4f:{NFSU2_TR(0x730c4f);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4464))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4468))));
}
B730c52:{NFSU2_TR(0x730c52);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0xeull))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0xeull))));
}
B730c56:{NFSU2_TR(0x730c56);
w4(R+8,u32(r8(R+4448)));
}
B730c59:{NFSU2_TR(0x730c59);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730c60:{NFSU2_TR(0x730c60);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x20ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x20ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x20ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B730c63:{NFSU2_TR(0x730c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B730c64:{NFSU2_TR(0x730c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B730c65:{NFSU2_TR(0x730c65);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x730cc2u)[[clang::musttail]] return blk_730cc2(ARGS););}
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
PN u32 blk_730c66(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730c66:L730c66:{bud-=36;NFSU2_TR(0x730c66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B730c67:{NFSU2_TR(0x730c67);
__builtin_memmove((R+20),(G+16),4);
}
B730c69:{NFSU2_TR(0x730c69);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x48ull))));
}
B730c6c:{NFSU2_TR(0x730c6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B730c6d:{NFSU2_TR(0x730c6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B730c6e:{NFSU2_TR(0x730c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B730c71:{NFSU2_TR(0x730c71);
u8 U[13];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((G+0),(U+12),1);
}
B730c75:{NFSU2_TR(0x730c75);
w1(G+0,u8(u32(r1(G+0))-u32(u8(0x1ull))));
}
B730c77:{NFSU2_TR(0x730c77);
w1(G+0,u8(u32(r1(G+0))&u32(u8(0xfull))));
}
B730c79:{NFSU2_TR(0x730c79);
u8 U[13];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B730c7d:{NFSU2_TR(0x730c7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B730c7e:{NFSU2_TR(0x730c7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B730c81:{NFSU2_TR(0x730c81);
w4(R+28,u32(r1(G+0)));
}
B730c84:{NFSU2_TR(0x730c84);
__builtin_memmove((G+0),(R+28),4);
}
B730c86:{NFSU2_TR(0x730c86);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1ull))));
}
B730c89:{NFSU2_TR(0x730c89);
__builtin_memmove((R+8),(G+0),4);
}
B730c8b:{NFSU2_TR(0x730c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B730c8e:{NFSU2_TR(0x730c8e);
w4(R+8,u32(u32(r4(R+8))^u32(u32(0x1ull))));
}
B730c91:{NFSU2_TR(0x730c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B730c94:{NFSU2_TR(0x730c94);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B730c97:{NFSU2_TR(0x730c97);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B730c9a:{NFSU2_TR(0x730c9a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B730c9c:{NFSU2_TR(0x730c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B730c9f:{NFSU2_TR(0x730c9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B730ca2:{NFSU2_TR(0x730ca2);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B730ca5:{NFSU2_TR(0x730ca5);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B730ca7:{NFSU2_TR(0x730ca7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B730caa:{NFSU2_TR(0x730caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730cad:{NFSU2_TR(0x730cad);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B730cb0:{NFSU2_TR(0x730cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B730cb3:{NFSU2_TR(0x730cb3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B730cb5:{NFSU2_TR(0x730cb5);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B730cb6:{NFSU2_TR(0x730cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B730cb9:{NFSU2_TR(0x730cb9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B730cba:{NFSU2_TR(0x730cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730cbd:{NFSU2_TR(0x730cbd);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x730cc2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7302ddu);}[[clang::musttail]] return blk_7302dd(ARGS);}
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
PN u32 blk_730cc2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B730cc2:L730cc2:{bud-=183;NFSU2_TR(0x730cc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B730cc5:{NFSU2_TR(0x730cc5);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B730cc8:{NFSU2_TR(0x730cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B730ccb:{NFSU2_TR(0x730ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B730cce:{NFSU2_TR(0x730cce);
w4(R+12,u32(0x7d11e0ull));
}
B730cd4:{NFSU2_TR(0x730cd4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B730cd6:{NFSU2_TR(0x730cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B730cd9:{NFSU2_TR(0x730cd9);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B730cdb:{NFSU2_TR(0x730cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B730cde:{NFSU2_TR(0x730cde);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B730ce1:{NFSU2_TR(0x730ce1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B730ce4:{NFSU2_TR(0x730ce4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730ce8:{NFSU2_TR(0x730ce8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730cec:{NFSU2_TR(0x730cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730cf0:{NFSU2_TR(0x730cf0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730cf4:{NFSU2_TR(0x730cf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730cf8:{NFSU2_TR(0x730cf8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730cfc:{NFSU2_TR(0x730cfc);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730cff:{NFSU2_TR(0x730cff);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730d03:{NFSU2_TR(0x730d03);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730d06:{NFSU2_TR(0x730d06);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730d0a:{NFSU2_TR(0x730d0a);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730d0d:{NFSU2_TR(0x730d0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730d11:{NFSU2_TR(0x730d11);
__builtin_memmove((R+4384),(R+4352),8);
}
B730d14:{NFSU2_TR(0x730d14);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730d18:{NFSU2_TR(0x730d18);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730d1c:{NFSU2_TR(0x730d1c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730d20:{NFSU2_TR(0x730d20);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730d23:{NFSU2_TR(0x730d23);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730d27:{NFSU2_TR(0x730d27);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730d2b:{NFSU2_TR(0x730d2b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730d2f:{NFSU2_TR(0x730d2f);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730d32:{NFSU2_TR(0x730d32);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730d36:{NFSU2_TR(0x730d36);
w4(G+0,u32(r8(R+4384)));
}
B730d39:{NFSU2_TR(0x730d39);
u8 U[2];
__builtin_memmove((U+0),(G+0),2);
s2(u32(r4(R+8)),r2(U+0));
}
B730d3c:{NFSU2_TR(0x730d3c);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730d3f:{NFSU2_TR(0x730d3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730d46:{NFSU2_TR(0x730d46);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730d49:{NFSU2_TR(0x730d49);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730d50:{NFSU2_TR(0x730d50);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730d53:{NFSU2_TR(0x730d53);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730d5a:{NFSU2_TR(0x730d5a);
__builtin_memmove((R+4400),(R+4368),8);
}
B730d5d:{NFSU2_TR(0x730d5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730d64:{NFSU2_TR(0x730d64);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730d68:{NFSU2_TR(0x730d68);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730d6c:{NFSU2_TR(0x730d6c);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730d6f:{NFSU2_TR(0x730d6f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730d73:{NFSU2_TR(0x730d73);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730d77:{NFSU2_TR(0x730d77);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730d7b:{NFSU2_TR(0x730d7b);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730d7e:{NFSU2_TR(0x730d7e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730d82:{NFSU2_TR(0x730d82);
w4(G+0,u32(r8(R+4400)));
}
B730d85:{NFSU2_TR(0x730d85);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730d89:{NFSU2_TR(0x730d89);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730d8c:{NFSU2_TR(0x730d8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730d93:{NFSU2_TR(0x730d93);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730d96:{NFSU2_TR(0x730d96);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730d9d:{NFSU2_TR(0x730d9d);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730da0:{NFSU2_TR(0x730da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730da7:{NFSU2_TR(0x730da7);
__builtin_memmove((R+4384),(R+4352),8);
}
B730daa:{NFSU2_TR(0x730daa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730db1:{NFSU2_TR(0x730db1);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730db5:{NFSU2_TR(0x730db5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730db9:{NFSU2_TR(0x730db9);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730dbc:{NFSU2_TR(0x730dbc);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730dc0:{NFSU2_TR(0x730dc0);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730dc4:{NFSU2_TR(0x730dc4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730dc8:{NFSU2_TR(0x730dc8);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730dcb:{NFSU2_TR(0x730dcb);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730dcf:{NFSU2_TR(0x730dcf);
w4(G+0,u32(r8(R+4384)));
}
B730dd2:{NFSU2_TR(0x730dd2);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730dd6:{NFSU2_TR(0x730dd6);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730dd9:{NFSU2_TR(0x730dd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730de0:{NFSU2_TR(0x730de0);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730de3:{NFSU2_TR(0x730de3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730dea:{NFSU2_TR(0x730dea);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730ded:{NFSU2_TR(0x730ded);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730df4:{NFSU2_TR(0x730df4);
__builtin_memmove((R+4400),(R+4368),8);
}
B730df7:{NFSU2_TR(0x730df7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730dfe:{NFSU2_TR(0x730dfe);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730e02:{NFSU2_TR(0x730e02);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730e09:{NFSU2_TR(0x730e09);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730e0c:{NFSU2_TR(0x730e0c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730e13:{NFSU2_TR(0x730e13);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730e17:{NFSU2_TR(0x730e17);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730e1e:{NFSU2_TR(0x730e1e);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730e21:{NFSU2_TR(0x730e21);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730e28:{NFSU2_TR(0x730e28);
w4(G+0,u32(r8(R+4400)));
}
B730e2b:{NFSU2_TR(0x730e2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730e2f:{NFSU2_TR(0x730e2f);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730e32:{NFSU2_TR(0x730e32);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730e39:{NFSU2_TR(0x730e39);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730e3c:{NFSU2_TR(0x730e3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730e43:{NFSU2_TR(0x730e43);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730e46:{NFSU2_TR(0x730e46);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730e4d:{NFSU2_TR(0x730e4d);
__builtin_memmove((R+4384),(R+4352),8);
}
B730e50:{NFSU2_TR(0x730e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730e57:{NFSU2_TR(0x730e57);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730e5b:{NFSU2_TR(0x730e5b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730e62:{NFSU2_TR(0x730e62);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730e65:{NFSU2_TR(0x730e65);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730e6c:{NFSU2_TR(0x730e6c);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730e70:{NFSU2_TR(0x730e70);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730e77:{NFSU2_TR(0x730e77);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730e7a:{NFSU2_TR(0x730e7a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730e81:{NFSU2_TR(0x730e81);
w4(G+0,u32(r8(R+4384)));
}
B730e84:{NFSU2_TR(0x730e84);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730e88:{NFSU2_TR(0x730e88);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730e8b:{NFSU2_TR(0x730e8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730e92:{NFSU2_TR(0x730e92);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730e95:{NFSU2_TR(0x730e95);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730e9c:{NFSU2_TR(0x730e9c);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730e9f:{NFSU2_TR(0x730e9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730ea6:{NFSU2_TR(0x730ea6);
__builtin_memmove((R+4400),(R+4368),8);
}
B730ea9:{NFSU2_TR(0x730ea9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730eb0:{NFSU2_TR(0x730eb0);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730eb4:{NFSU2_TR(0x730eb4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730ebb:{NFSU2_TR(0x730ebb);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730ebe:{NFSU2_TR(0x730ebe);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730ec5:{NFSU2_TR(0x730ec5);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730ec9:{NFSU2_TR(0x730ec9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730ed0:{NFSU2_TR(0x730ed0);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730ed3:{NFSU2_TR(0x730ed3);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730eda:{NFSU2_TR(0x730eda);
w4(G+0,u32(r8(R+4400)));
}
B730edd:{NFSU2_TR(0x730edd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730ee1:{NFSU2_TR(0x730ee1);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730ee4:{NFSU2_TR(0x730ee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730eeb:{NFSU2_TR(0x730eeb);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730eee:{NFSU2_TR(0x730eee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730ef5:{NFSU2_TR(0x730ef5);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730ef8:{NFSU2_TR(0x730ef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730eff:{NFSU2_TR(0x730eff);
__builtin_memmove((R+4384),(R+4352),8);
}
B730f02:{NFSU2_TR(0x730f02);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730f09:{NFSU2_TR(0x730f09);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730f0d:{NFSU2_TR(0x730f0d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730f14:{NFSU2_TR(0x730f14);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730f17:{NFSU2_TR(0x730f17);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730f1e:{NFSU2_TR(0x730f1e);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730f22:{NFSU2_TR(0x730f22);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730f29:{NFSU2_TR(0x730f29);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730f2c:{NFSU2_TR(0x730f2c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730f33:{NFSU2_TR(0x730f33);
w4(G+0,u32(r8(R+4384)));
}
B730f36:{NFSU2_TR(0x730f36);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730f3a:{NFSU2_TR(0x730f3a);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730f3d:{NFSU2_TR(0x730f3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730f44:{NFSU2_TR(0x730f44);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730f47:{NFSU2_TR(0x730f47);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B730f4e:{NFSU2_TR(0x730f4e);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4464))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4468))));
}
B730f51:{NFSU2_TR(0x730f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B730f58:{NFSU2_TR(0x730f58);
__builtin_memmove((R+4400),(R+4368),8);
}
B730f5b:{NFSU2_TR(0x730f5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B730f62:{NFSU2_TR(0x730f62);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B730f66:{NFSU2_TR(0x730f66);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B730f6d:{NFSU2_TR(0x730f6d);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4368))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4372))));
}
B730f70:{NFSU2_TR(0x730f70);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pmaddwd<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B730f77:{NFSU2_TR(0x730f77);
w4(R+4400,sar<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,sar<u32>(r4(R+4404),u64(u32(0xdull))));
}
B730f7b:{NFSU2_TR(0x730f7b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pmaddwd<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B730f82:{NFSU2_TR(0x730f82);
{wv<8>((R+4400),uo::packssdw<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B730f85:{NFSU2_TR(0x730f85);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pmaddwd<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B730f8c:{NFSU2_TR(0x730f8c);
w4(G+0,u32(r8(R+4400)));
}
B730f8f:{NFSU2_TR(0x730f8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730f93:{NFSU2_TR(0x730f93);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B730f96:{NFSU2_TR(0x730f96);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B730f9d:{NFSU2_TR(0x730f9d);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4416))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4420))));
}
B730fa0:{NFSU2_TR(0x730fa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B730fa7:{NFSU2_TR(0x730fa7);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4448))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4452))));
}
B730faa:{NFSU2_TR(0x730faa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B730fb1:{NFSU2_TR(0x730fb1);
__builtin_memmove((R+4384),(R+4352),8);
}
B730fb4:{NFSU2_TR(0x730fb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B730fbb:{NFSU2_TR(0x730fbb);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B730fbf:{NFSU2_TR(0x730fbf);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B730fc6:{NFSU2_TR(0x730fc6);
w4(R+4384,u32(u32(r4(R+4384))+u32(r4(R+4352))));
w4(R+4388,u32(u32(r4(R+4388))+u32(r4(R+4356))));
}
B730fc9:{NFSU2_TR(0x730fc9);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pmaddwd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B730fd0:{NFSU2_TR(0x730fd0);
w4(R+4384,sar<u32>(r4(R+4384),u64(u32(0xdull))));
w4(R+4388,sar<u32>(r4(R+4388),u64(u32(0xdull))));
}
B730fd4:{NFSU2_TR(0x730fd4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pmaddwd<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B730fdb:{NFSU2_TR(0x730fdb);
{wv<8>((R+4384),uo::packssdw<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B730fde:{NFSU2_TR(0x730fde);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pmaddwd<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B730fe5:{NFSU2_TR(0x730fe5);
w4(G+0,u32(r8(R+4384)));
}
B730fe8:{NFSU2_TR(0x730fe8);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B730fec:{NFSU2_TR(0x730fec);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B730fef:{NFSU2_TR(0x730fef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B730ff6:{NFSU2_TR(0x730ff6);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4432))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4436))));
}
B730ff9:{NFSU2_TR(0x730ff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x288ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
{[[clang::musttail]] return blk_731000(ARGS);}
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
PN u32 ent_730(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x730002:[[clang::musttail]] return blk_730002(c,a4,a0,a1,bud);
case 0x730004:[[clang::musttail]] return blk_730004(c,a4,a0,a1,bud);
case 0x730007:[[clang::musttail]] return blk_730007(c,a4,a0,a1,bud);
case 0x730012:[[clang::musttail]] return blk_730012(c,a4,a0,a1,bud);
case 0x730015:[[clang::musttail]] return blk_730015(c,a4,a0,a1,bud);
case 0x730020:[[clang::musttail]] return blk_730020(c,a4,a0,a1,bud);
case 0x730023:[[clang::musttail]] return blk_730023(c,a4,a0,a1,bud);
case 0x73002e:[[clang::musttail]] return blk_73002e(c,a4,a0,a1,bud);
case 0x730031:[[clang::musttail]] return blk_730031(c,a4,a0,a1,bud);
case 0x730034:[[clang::musttail]] return blk_730034(c,a4,a0,a1,bud);
case 0x730042:[[clang::musttail]] return blk_730042(c,a4,a0,a1,bud);
case 0x730048:[[clang::musttail]] return blk_730048(c,a4,a0,a1,bud);
case 0x73004a:[[clang::musttail]] return blk_73004a(c,a4,a0,a1,bud);
case 0x73004d:[[clang::musttail]] return blk_73004d(c,a4,a0,a1,bud);
case 0x730053:[[clang::musttail]] return blk_730053(c,a4,a0,a1,bud);
case 0x730055:[[clang::musttail]] return blk_730055(c,a4,a0,a1,bud);
case 0x730058:[[clang::musttail]] return blk_730058(c,a4,a0,a1,bud);
case 0x73005e:[[clang::musttail]] return blk_73005e(c,a4,a0,a1,bud);
case 0x730060:[[clang::musttail]] return blk_730060(c,a4,a0,a1,bud);
case 0x730063:[[clang::musttail]] return blk_730063(c,a4,a0,a1,bud);
case 0x730069:[[clang::musttail]] return blk_730069(c,a4,a0,a1,bud);
case 0x73006b:[[clang::musttail]] return blk_73006b(c,a4,a0,a1,bud);
case 0x73006e:[[clang::musttail]] return blk_73006e(c,a4,a0,a1,bud);
case 0x730070:[[clang::musttail]] return blk_730070(c,a4,a0,a1,bud);
case 0x730073:[[clang::musttail]] return blk_730073(c,a4,a0,a1,bud);
case 0x73007e:[[clang::musttail]] return blk_73007e(c,a4,a0,a1,bud);
case 0x730081:[[clang::musttail]] return blk_730081(c,a4,a0,a1,bud);
case 0x73008c:[[clang::musttail]] return blk_73008c(c,a4,a0,a1,bud);
case 0x73008f:[[clang::musttail]] return blk_73008f(c,a4,a0,a1,bud);
case 0x73009a:[[clang::musttail]] return blk_73009a(c,a4,a0,a1,bud);
case 0x73009d:[[clang::musttail]] return blk_73009d(c,a4,a0,a1,bud);
case 0x7300a0:[[clang::musttail]] return blk_7300a0(c,a4,a0,a1,bud);
case 0x7300ae:[[clang::musttail]] return blk_7300ae(c,a4,a0,a1,bud);
case 0x7300b4:[[clang::musttail]] return blk_7300b4(c,a4,a0,a1,bud);
case 0x7300b6:[[clang::musttail]] return blk_7300b6(c,a4,a0,a1,bud);
case 0x7300b9:[[clang::musttail]] return blk_7300b9(c,a4,a0,a1,bud);
case 0x7300bf:[[clang::musttail]] return blk_7300bf(c,a4,a0,a1,bud);
case 0x7300c1:[[clang::musttail]] return blk_7300c1(c,a4,a0,a1,bud);
case 0x7300c4:[[clang::musttail]] return blk_7300c4(c,a4,a0,a1,bud);
case 0x7300ca:[[clang::musttail]] return blk_7300ca(c,a4,a0,a1,bud);
case 0x7300cc:[[clang::musttail]] return blk_7300cc(c,a4,a0,a1,bud);
case 0x7300cf:[[clang::musttail]] return blk_7300cf(c,a4,a0,a1,bud);
case 0x7300d5:[[clang::musttail]] return blk_7300d5(c,a4,a0,a1,bud);
case 0x7300d7:[[clang::musttail]] return blk_7300d7(c,a4,a0,a1,bud);
case 0x7300da:[[clang::musttail]] return blk_7300da(c,a4,a0,a1,bud);
case 0x7300dc:[[clang::musttail]] return blk_7300dc(c,a4,a0,a1,bud);
case 0x7300df:[[clang::musttail]] return blk_7300df(c,a4,a0,a1,bud);
case 0x7300ea:[[clang::musttail]] return blk_7300ea(c,a4,a0,a1,bud);
case 0x7300ed:[[clang::musttail]] return blk_7300ed(c,a4,a0,a1,bud);
case 0x7300f8:[[clang::musttail]] return blk_7300f8(c,a4,a0,a1,bud);
case 0x7300fb:[[clang::musttail]] return blk_7300fb(c,a4,a0,a1,bud);
case 0x730106:[[clang::musttail]] return blk_730106(c,a4,a0,a1,bud);
case 0x730109:[[clang::musttail]] return blk_730109(c,a4,a0,a1,bud);
case 0x730121:[[clang::musttail]] return blk_730121(c,a4,a0,a1,bud);
case 0x730127:[[clang::musttail]] return blk_730127(c,a4,a0,a1,bud);
case 0x73014c:[[clang::musttail]] return blk_73014c(c,a4,a0,a1,bud);
case 0x730152:[[clang::musttail]] return blk_730152(c,a4,a0,a1,bud);
case 0x73015c:[[clang::musttail]] return blk_73015c(c,a4,a0,a1,bud);
case 0x730165:[[clang::musttail]] return blk_730165(c,a4,a0,a1,bud);
case 0x730170:[[clang::musttail]] return blk_730170(c,a4,a0,a1,bud);
case 0x730175:[[clang::musttail]] return blk_730175(c,a4,a0,a1,bud);
case 0x730181:[[clang::musttail]] return blk_730181(c,a4,a0,a1,bud);
case 0x73018f:[[clang::musttail]] return blk_73018f(c,a4,a0,a1,bud);
case 0x730195:[[clang::musttail]] return blk_730195(c,a4,a0,a1,bud);
case 0x7301a7:[[clang::musttail]] return blk_7301a7(c,a4,a0,a1,bud);
case 0x7301a9:[[clang::musttail]] return blk_7301a9(c,a4,a0,a1,bud);
case 0x7301af:[[clang::musttail]] return blk_7301af(c,a4,a0,a1,bud);
case 0x7301bd:[[clang::musttail]] return blk_7301bd(c,a4,a0,a1,bud);
case 0x7301c3:[[clang::musttail]] return blk_7301c3(c,a4,a0,a1,bud);
case 0x7301d5:[[clang::musttail]] return blk_7301d5(c,a4,a0,a1,bud);
case 0x7301d7:[[clang::musttail]] return blk_7301d7(c,a4,a0,a1,bud);
case 0x7301dd:[[clang::musttail]] return blk_7301dd(c,a4,a0,a1,bud);
case 0x7301eb:[[clang::musttail]] return blk_7301eb(c,a4,a0,a1,bud);
case 0x7301f1:[[clang::musttail]] return blk_7301f1(c,a4,a0,a1,bud);
case 0x730203:[[clang::musttail]] return blk_730203(c,a4,a0,a1,bud);
case 0x730205:[[clang::musttail]] return blk_730205(c,a4,a0,a1,bud);
case 0x73020b:[[clang::musttail]] return blk_73020b(c,a4,a0,a1,bud);
case 0x730219:[[clang::musttail]] return blk_730219(c,a4,a0,a1,bud);
case 0x73021f:[[clang::musttail]] return blk_73021f(c,a4,a0,a1,bud);
case 0x730231:[[clang::musttail]] return blk_730231(c,a4,a0,a1,bud);
case 0x730233:[[clang::musttail]] return blk_730233(c,a4,a0,a1,bud);
case 0x730239:[[clang::musttail]] return blk_730239(c,a4,a0,a1,bud);
case 0x730247:[[clang::musttail]] return blk_730247(c,a4,a0,a1,bud);
case 0x73024d:[[clang::musttail]] return blk_73024d(c,a4,a0,a1,bud);
case 0x73025f:[[clang::musttail]] return blk_73025f(c,a4,a0,a1,bud);
case 0x730261:[[clang::musttail]] return blk_730261(c,a4,a0,a1,bud);
case 0x730267:[[clang::musttail]] return blk_730267(c,a4,a0,a1,bud);
case 0x730272:[[clang::musttail]] return blk_730272(c,a4,a0,a1,bud);
case 0x730275:[[clang::musttail]] return blk_730275(c,a4,a0,a1,bud);
case 0x73027b:[[clang::musttail]] return blk_73027b(c,a4,a0,a1,bud);
case 0x730280:[[clang::musttail]] return blk_730280(c,a4,a0,a1,bud);
case 0x73028c:[[clang::musttail]] return blk_73028c(c,a4,a0,a1,bud);
case 0x73029d:[[clang::musttail]] return blk_73029d(c,a4,a0,a1,bud);
case 0x7302a6:[[clang::musttail]] return blk_7302a6(c,a4,a0,a1,bud);
case 0x7302af:[[clang::musttail]] return blk_7302af(c,a4,a0,a1,bud);
case 0x7302be:[[clang::musttail]] return blk_7302be(c,a4,a0,a1,bud);
case 0x7302c1:[[clang::musttail]] return blk_7302c1(c,a4,a0,a1,bud);
case 0x7302c9:[[clang::musttail]] return blk_7302c9(c,a4,a0,a1,bud);
case 0x7302d6:[[clang::musttail]] return blk_7302d6(c,a4,a0,a1,bud);
case 0x7302d7:[[clang::musttail]] return blk_7302d7(c,a4,a0,a1,bud);
case 0x7302dd:[[clang::musttail]] return blk_7302dd(c,a4,a0,a1,bud);
case 0x730c66:[[clang::musttail]] return blk_730c66(c,a4,a0,a1,bud);
case 0x730cc2:[[clang::musttail]] return blk_730cc2(c,a4,a0,a1,bud);
default:[[clang::musttail]] return ent_missing(c,a4,a0,a1,bud);}}
u32 page_730(Cpu& c){u8* R=c.regs.data();return ent_730(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
