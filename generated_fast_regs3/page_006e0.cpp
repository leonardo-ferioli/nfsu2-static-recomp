#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_63d12c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d8190(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d81f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d94d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d94f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d9550(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d9570(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dba40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dbf90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dbfb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dc2a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dc300(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dc330(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dc520(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dc660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dc720(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dcc00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dcdc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6de800(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6de8b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6de9b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dead0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dec70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6dede0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e006e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0117(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0145(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0147(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e01ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e01dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0279(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e027f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0289(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e02ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e02bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e02ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0326(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0377(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e039a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0420(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0450(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0474(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0483(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e049b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e04c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e04dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e04f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0520(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0544(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0553(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e056b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0590(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e05ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e05c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e05f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0614(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0623(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e063b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e067d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0690(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e06a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e06c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0710(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e075f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0780(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e07cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e07f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e083f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0894(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e08a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0904(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0913(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0974(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0983(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0a16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0af7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0af9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0b34(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0b58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0caa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0cc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0d62(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0d72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0d87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0e22(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0ead(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0ec6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0f81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0f90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0fbd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0fcd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0fe2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_81cb20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0004(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e00e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0143(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e016f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e017b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0187(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0204(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0210(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e021c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0228(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0253(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e025a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0267(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e02e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0323(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0342(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e034e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e03a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e03b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e03d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e03e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e03f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e040a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0412(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0461(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0490(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e04d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0531(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0560(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e05a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0601(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0630(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0674(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e06f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e06f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e073f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e075b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0760(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0765(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e07af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e07cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e07d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e07d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e081f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e083b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0840(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0845(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0877(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e089b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e08b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e08b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e08e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e090b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0920(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0925(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0957(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e097b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0990(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e09a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e09c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e09e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0b2a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0ca0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0cd9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0d6b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0d95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0da0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0db1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0dd7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0df8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0ea3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0f7a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0fa8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0fc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0ff0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e0004(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0004:L6e0004:{bud-=5;NFSU2_TR(0x6e0004);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0008:{NFSU2_TR(0x6e0008);
{u32 ea_=u32(u32(9079300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e000e:{NFSU2_TR(0x6e000e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0010:{NFSU2_TR(0x6e0010);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0013:{NFSU2_TR(0x6e0013);
if(r1(F+2)){{[[clang::musttail]] return blk_6e006e(ARGS);}}
}
B6e0015:L6e0015:{bud-=5;NFSU2_TR(0x6e0015);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0019:{NFSU2_TR(0x6e0019);
{u32 ea_=u32(u32(9079304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e001f:{NFSU2_TR(0x6e001f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0021:{NFSU2_TR(0x6e0021);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0024:{NFSU2_TR(0x6e0024);
if(r1(F+2)){{[[clang::musttail]] return blk_6e006e(ARGS);}}
}
B6e0026:L6e0026:{bud-=5;NFSU2_TR(0x6e0026);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e002a:{NFSU2_TR(0x6e002a);
{u32 ea_=u32(u32(9079308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0030:{NFSU2_TR(0x6e0030);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0032:{NFSU2_TR(0x6e0032);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0035:{NFSU2_TR(0x6e0035);
if(r1(F+2)){{[[clang::musttail]] return blk_6e006e(ARGS);}}
}
B6e0037:L6e0037:{bud-=5;NFSU2_TR(0x6e0037);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e003b:{NFSU2_TR(0x6e003b);
{u32 ea_=u32(u32(9079312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0041:{NFSU2_TR(0x6e0041);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0043:{NFSU2_TR(0x6e0043);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0046:{NFSU2_TR(0x6e0046);
if(r1(F+2)){{[[clang::musttail]] return blk_6e006e(ARGS);}}
}
B6e0048:L6e0048:{bud-=5;NFSU2_TR(0x6e0048);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e004c:{NFSU2_TR(0x6e004c);
{u32 ea_=u32(u32(9079316u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0052:{NFSU2_TR(0x6e0052);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0054:{NFSU2_TR(0x6e0054);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0057:{NFSU2_TR(0x6e0057);
if(r1(F+2)){{[[clang::musttail]] return blk_6e006e(ARGS);}}
}
B6e0059:L6e0059:{bud-=5;NFSU2_TR(0x6e0059);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e005d:{NFSU2_TR(0x6e005d);
{u32 ea_=u32(u32(9079320u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0063:{NFSU2_TR(0x6e0063);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0065:{NFSU2_TR(0x6e0065);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0068:{NFSU2_TR(0x6e0068);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e02ca(ARGS);}}
{[[clang::musttail]] return blk_6e006e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e006e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e006e:L6e006e:{bud-=27;NFSU2_TR(0x6e006e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0072:{NFSU2_TR(0x6e0072);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0076:{NFSU2_TR(0x6e0076);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e007a:{NFSU2_TR(0x6e007a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e007e:{NFSU2_TR(0x6e007e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0082:{NFSU2_TR(0x6e0082);
__builtin_memmove(gp(0x8a8a04),(G+0),4);
}
B6e0087:{NFSU2_TR(0x6e0087);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e008b:{NFSU2_TR(0x6e008b);
__builtin_memmove(gp(0x8a8a08),(G+4),4);
}
B6e0091:{NFSU2_TR(0x6e0091);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0095:{NFSU2_TR(0x6e0095);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0099:{NFSU2_TR(0x6e0099);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e009d:{NFSU2_TR(0x6e009d);
__builtin_memmove(gp(0x8a8a10),(G+0),4);
}
B6e00a2:{NFSU2_TR(0x6e00a2);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e00a6:{NFSU2_TR(0x6e00a6);
__builtin_memmove(gp(0x8a8a14),(G+4),4);
}
B6e00ac:{NFSU2_TR(0x6e00ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e00b0:{NFSU2_TR(0x6e00b0);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e00b1:{NFSU2_TR(0x6e00b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6e00b5:{NFSU2_TR(0x6e00b5);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e00b6:{NFSU2_TR(0x6e00b6);
__builtin_memmove((G+4),gp(0x80f264),4);
}
B6e00bc:{NFSU2_TR(0x6e00bc);
__builtin_memmove(gp(0x8a8a0c),(R+8),4);
}
B6e00c2:{NFSU2_TR(0x6e00c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e00c6:{NFSU2_TR(0x6e00c6);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e00ca:{NFSU2_TR(0x6e00ca);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e00cc:{NFSU2_TR(0x6e00cc);
__builtin_memmove(gp(0x8a8a18),(R+8),4);
}
B6e00d2:{NFSU2_TR(0x6e00d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e00da:{NFSU2_TR(0x6e00da);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e00e2:{NFSU2_TR(0x6e00e2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e00e7ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dba40u);}[[clang::musttail]] return blk_6dba40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e00e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e00e7:L6e00e7:{bud-=9;NFSU2_TR(0x6e00e7);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e00eb:{NFSU2_TR(0x6e00eb);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e00ef:{NFSU2_TR(0x6e00ef);
__builtin_memmove((R+8),gp(0x8a7bdc),4);
}
B6e00f5:{NFSU2_TR(0x6e00f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B6e00fb:{NFSU2_TR(0x6e00fb);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+7,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6e00fd:{NFSU2_TR(0x6e00fd);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0101:{NFSU2_TR(0x6e0101);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e0105:{NFSU2_TR(0x6e0105);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0109:{NFSU2_TR(0x6e0109);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e0117(ARGS);}}
}
B6e010b:L6e010b:{bud-=4;NFSU2_TR(0x6e010b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e010d:{NFSU2_TR(0x6e010d);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0111:{NFSU2_TR(0x6e0111);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e0113:{NFSU2_TR(0x6e0113);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e0117(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0117(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0117:L6e0117:{bud-=5;NFSU2_TR(0x6e0117);
{u32 ea_=u32(u32(8450272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e011d:{NFSU2_TR(0x6e011d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e011f:{NFSU2_TR(0x6e011f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0121:{NFSU2_TR(0x6e0121);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0124:{NFSU2_TR(0x6e0124);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e0145(ARGS);}}
}
B6e0126:L6e0126:{bud-=8;NFSU2_TR(0x6e0126);
__builtin_memmove((G+0),gp(0x8a79a0),4);
}
B6e012b:{NFSU2_TR(0x6e012b);
{u32 ea_=u32(u32(8450272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0131:{NFSU2_TR(0x6e0131);
__builtin_memmove((R+8),gp(0x80f0e0),4);
}
B6e0137:{NFSU2_TR(0x6e0137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B6e0139:{NFSU2_TR(0x6e0139);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e013a:{NFSU2_TR(0x6e013a);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e013c:{NFSU2_TR(0x6e013c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e013d:{NFSU2_TR(0x6e013d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0143ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0143(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0143:L6e0143:{bud-=1;NFSU2_TR(0x6e0143);
{[[clang::musttail]] return blk_6e0147(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0145(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0145:L6e0145:{bud-=1;NFSU2_TR(0x6e0145);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_6e0147(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0147(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0147:L6e0147:{bud-=5;NFSU2_TR(0x6e0147);
{u32 ea_=u32(u32(8450276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e014d:{NFSU2_TR(0x6e014d);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0151:{NFSU2_TR(0x6e0151);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e0153:{NFSU2_TR(0x6e0153);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0156:{NFSU2_TR(0x6e0156);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e02ca(ARGS);}}
}
B6e015c:L6e015c:{bud-=6;NFSU2_TR(0x6e015c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0160:{NFSU2_TR(0x6e0160);
__builtin_memmove((R+8),(G+0),4);
}
B6e0162:{NFSU2_TR(0x6e0162);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0163:{NFSU2_TR(0x6e0163);
__builtin_memmove(gp(0x80f0e4),(G+0),4);
}
B6e0168:{NFSU2_TR(0x6e0168);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e016a:{NFSU2_TR(0x6e016a);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e02bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e016f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e016f:L6e016f:{bud-=4;NFSU2_TR(0x6e016f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e0173:{NFSU2_TR(0x6e0173);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0174:{NFSU2_TR(0x6e0174);
__builtin_memmove((G+4),(R+24),4);
}
B6e0176:{NFSU2_TR(0x6e0176);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e017bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d94d0u);}[[clang::musttail]] return blk_6d94d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e017b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e017b:L6e017b:{bud-=4;NFSU2_TR(0x6e017b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6e017f:{NFSU2_TR(0x6e017f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0180:{NFSU2_TR(0x6e0180);
__builtin_memmove((G+4),(R+24),4);
}
B6e0182:{NFSU2_TR(0x6e0182);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0187ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d94f0u);}[[clang::musttail]] return blk_6d94f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0187(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0187:L6e0187:{bud-=4;NFSU2_TR(0x6e0187);
__builtin_memmove((R+8),gp(0x8a7bdc),4);
}
B6e018d:{NFSU2_TR(0x6e018d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B6e0193:{NFSU2_TR(0x6e0193);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+7,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6e0195:{NFSU2_TR(0x6e0195);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e01ab(ARGS);}}
}
B6e0197:L6e0197:{bud-=6;NFSU2_TR(0x6e0197);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e019b:{NFSU2_TR(0x6e019b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e019d:{NFSU2_TR(0x6e019d);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e01a1:{NFSU2_TR(0x6e01a1);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e01a5:{NFSU2_TR(0x6e01a5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e01a7:{NFSU2_TR(0x6e01a7);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e01ab(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e01ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e01ab:L6e01ab:{bud-=5;NFSU2_TR(0x6e01ab);
{u32 ea_=u32(u32(8450272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e01b1:{NFSU2_TR(0x6e01b1);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e01b5:{NFSU2_TR(0x6e01b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e01b7:{NFSU2_TR(0x6e01b7);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e01ba:{NFSU2_TR(0x6e01ba);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e01dc(ARGS);}}
}
B6e01bc:L6e01bc:{bud-=9;NFSU2_TR(0x6e01bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e01c0:{NFSU2_TR(0x6e01c0);
__builtin_memmove(gp(0x80f0e0),(G+0),4);
}
B6e01c5:{NFSU2_TR(0x6e01c5);
__builtin_memmove((R+8),gp(0x80f0e0),4);
}
B6e01cb:{NFSU2_TR(0x6e01cb);
__builtin_memmove((G+0),gp(0x8a79a0),4);
}
B6e01d0:{NFSU2_TR(0x6e01d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B6e01d2:{NFSU2_TR(0x6e01d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e01d3:{NFSU2_TR(0x6e01d3);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e01d5:{NFSU2_TR(0x6e01d5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e01d6:{NFSU2_TR(0x6e01d6);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e01dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e01dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e01dc:L6e01dc:{bud-=5;NFSU2_TR(0x6e01dc);
{u32 ea_=u32(u32(8450276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e01e2:{NFSU2_TR(0x6e01e2);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e01e6:{NFSU2_TR(0x6e01e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e01e8:{NFSU2_TR(0x6e01e8);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e01eb:{NFSU2_TR(0x6e01eb);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e02ca(ARGS);}}
}
B6e01f1:L6e01f1:{bud-=6;NFSU2_TR(0x6e01f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e01f5:{NFSU2_TR(0x6e01f5);
__builtin_memmove((R+8),(G+0),4);
}
B6e01f7:{NFSU2_TR(0x6e01f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e01f8:{NFSU2_TR(0x6e01f8);
__builtin_memmove(gp(0x80f0e4),(G+0),4);
}
B6e01fd:{NFSU2_TR(0x6e01fd);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e01ff:{NFSU2_TR(0x6e01ff);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e02bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0204(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0204:L6e0204:{bud-=4;NFSU2_TR(0x6e0204);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e0208:{NFSU2_TR(0x6e0208);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0209:{NFSU2_TR(0x6e0209);
__builtin_memmove((G+4),(R+24),4);
}
B6e020b:{NFSU2_TR(0x6e020b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0210ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d94d0u);}[[clang::musttail]] return blk_6d94d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0210(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0210:L6e0210:{bud-=4;NFSU2_TR(0x6e0210);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6e0214:{NFSU2_TR(0x6e0214);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0215:{NFSU2_TR(0x6e0215);
__builtin_memmove((G+4),(R+24),4);
}
B6e0217:{NFSU2_TR(0x6e0217);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e021cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d94f0u);}[[clang::musttail]] return blk_6d94f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e021c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e021c:L6e021c:{bud-=4;NFSU2_TR(0x6e021c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e0220:{NFSU2_TR(0x6e0220);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0221:{NFSU2_TR(0x6e0221);
__builtin_memmove((G+4),(R+24),4);
}
B6e0223:{NFSU2_TR(0x6e0223);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0228ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d9570u);}[[clang::musttail]] return blk_6d9570(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0228(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0228:L6e0228:{bud-=9;NFSU2_TR(0x6e0228);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e022c:{NFSU2_TR(0x6e022c);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e0230:{NFSU2_TR(0x6e0230);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e0236:{NFSU2_TR(0x6e0236);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e023c:{NFSU2_TR(0x6e023c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e023e:{NFSU2_TR(0x6e023e);
{u32 ea_=u32(u32(9075328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0244:{NFSU2_TR(0x6e0244);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0248:{NFSU2_TR(0x6e0248);
{u32 ea_=u32(u32(9075332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e024e:{NFSU2_TR(0x6e024e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0253ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d81f0u);}[[clang::musttail]] return blk_6d81f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0253(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0253:L6e0253:{bud-=2;NFSU2_TR(0x6e0253);
__builtin_memmove((G+4),(G+0),4);
}
B6e0255:{NFSU2_TR(0x6e0255);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e025aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d8190u);}[[clang::musttail]] return blk_6d8190(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e025a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e025a:L6e025a:{bud-=4;NFSU2_TR(0x6e025a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6e025e:{NFSU2_TR(0x6e025e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e025f:{NFSU2_TR(0x6e025f);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6e0262:{NFSU2_TR(0x6e0262);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0267ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6d9550u);}[[clang::musttail]] return blk_6d9550(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0267(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0267:L6e0267:{bud-=3;NFSU2_TR(0x6e0267);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e026b:{NFSU2_TR(0x6e026b);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B6e026c:{NFSU2_TR(0x6e026c);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0279(ARGS);}}
}
B6e026e:L6e026e:{bud-=2;NFSU2_TR(0x6e026e);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B6e026f:{NFSU2_TR(0x6e026f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e0289(ARGS);}}
}
B6e0271:L6e0271:{bud-=2;NFSU2_TR(0x6e0271);
{u32 ea_=u32(u32(8130828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0277:{NFSU2_TR(0x6e0277);
{[[clang::musttail]] return blk_6e027f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0279(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0279:L6e0279:{bud-=1;NFSU2_TR(0x6e0279);
{u32 ea_=u32(u32(8130824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e027f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e027f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e027f:L6e027f:{bud-=2;NFSU2_TR(0x6e027f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0283:{NFSU2_TR(0x6e0283);
{u32 ea_=u32(u32(9075340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e0289(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0289(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0289:L6e0289:{bud-=2;NFSU2_TR(0x6e0289);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7bd4),4);
w1(F+0,u8((r4(U+6))<(r4(R+20))));
w1(F+11,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e028f:{NFSU2_TR(0x6e028f);
if(r1(F+6)){{[[clang::musttail]] return blk_6e02ab(ARGS);}}
}
B6e0291:L6e0291:{bud-=7;NFSU2_TR(0x6e0291);
__builtin_memmove((G+0),gp(0x8a79a0),4);
}
B6e0296:{NFSU2_TR(0x6e0296);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0297:{NFSU2_TR(0x6e0297);
u8 U[4];
w4(U+0,u32(0x8cull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e029c:{NFSU2_TR(0x6e029c);
__builtin_memmove(gp(0x8a7bd4),(R+20),4);
}
B6e02a2:{NFSU2_TR(0x6e02a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e02a4:{NFSU2_TR(0x6e02a4);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02a5:{NFSU2_TR(0x6e02a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e02abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e02ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e02ab:L6e02ab:{bud-=2;NFSU2_TR(0x6e02ab);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7bd8),4);
w1(F+0,u8((r4(U+6))<(r4(R+20))));
w1(F+11,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e02b1:{NFSU2_TR(0x6e02b1);
if(r1(F+6)){{[[clang::musttail]] return blk_6e02ca(ARGS);}}
}
B6e02b3:L6e02b3:{bud-=3;NFSU2_TR(0x6e02b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02b4:{NFSU2_TR(0x6e02b4);
__builtin_memmove(gp(0x8a7bd8),(R+20),4);
}
B6e02ba:{NFSU2_TR(0x6e02ba);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e02bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e02bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e02bc:L6e02bc:{bud-=4;NFSU2_TR(0x6e02bc);
__builtin_memmove((G+0),gp(0x8a79a0),4);
}
B6e02c1:{NFSU2_TR(0x6e02c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B6e02c3:{NFSU2_TR(0x6e02c3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02c4:{NFSU2_TR(0x6e02c4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e02caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e02ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e02ca:L6e02ca:{bud-=7;NFSU2_TR(0x6e02ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e02cb:{NFSU2_TR(0x6e02cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e02cc:{NFSU2_TR(0x6e02cc);
__builtin_memmove(gp(0x8a8a30),(R+20),4);
}
B6e02d2:{NFSU2_TR(0x6e02d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e02d3:{NFSU2_TR(0x6e02d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e02d4:{NFSU2_TR(0x6e02d4);
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
B6e02d7:{NFSU2_TR(0x6e02d7);
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
PN u32 blk_6e02e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e02e0:L6e02e0:{bud-=19;NFSU2_TR(0x6e02e0);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02e1:{NFSU2_TR(0x6e02e1);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e02e6:{NFSU2_TR(0x6e02e6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e02e9:{NFSU2_TR(0x6e02e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02ea:{NFSU2_TR(0x6e02ea);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e02ed:{NFSU2_TR(0x6e02ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02ee:{NFSU2_TR(0x6e02ee);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e02f1:{NFSU2_TR(0x6e02f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02f2:{NFSU2_TR(0x6e02f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e02f3:{NFSU2_TR(0x6e02f3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e02f6:{NFSU2_TR(0x6e02f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e02fa:{NFSU2_TR(0x6e02fa);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e02fd:{NFSU2_TR(0x6e02fd);
__builtin_memmove((G+4),gp(0x8a7a14),4);
}
B6e0303:{NFSU2_TR(0x6e0303);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B6e0306:{NFSU2_TR(0x6e0306);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0309:{NFSU2_TR(0x6e0309);
__builtin_memmove((R+24),(G+4),4);
}
B6e030b:{NFSU2_TR(0x6e030b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6e030e:{NFSU2_TR(0x6e030e);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0310:{NFSU2_TR(0x6e0310);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e0377(ARGS);}}
}
B6e0312:L6e0312:{bud-=2;NFSU2_TR(0x6e0312);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e0316:{NFSU2_TR(0x6e0316);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0326(ARGS);}}
}
B6e0318:L6e0318:{bud-=4;NFSU2_TR(0x6e0318);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e031c:{NFSU2_TR(0x6e031c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e031d:{NFSU2_TR(0x6e031d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e031e:{NFSU2_TR(0x6e031e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0323ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc660u);}[[clang::musttail]] return blk_6dc660(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0323(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0323:L6e0323:{bud-=1;NFSU2_TR(0x6e0323);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
{[[clang::musttail]] return blk_6e0326(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0326(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0326:L6e0326:{bud-=9;NFSU2_TR(0x6e0326);
__builtin_memmove((G+4),gp(0x8a8a28),4);
}
B6e032c:{NFSU2_TR(0x6e032c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B6e0333:{NFSU2_TR(0x6e0333);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0334:{NFSU2_TR(0x6e0334);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0335:{NFSU2_TR(0x6e0335);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0336:{NFSU2_TR(0x6e0336);
u8 U[4];
w4(U+0,u32(0x208ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e033b:{NFSU2_TR(0x6e033b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e033c:{NFSU2_TR(0x6e033c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e033d:{NFSU2_TR(0x6e033d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0342ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc720u);}[[clang::musttail]] return blk_6dc720(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0342(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0342:L6e0342:{bud-=3;NFSU2_TR(0x6e0342);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B6e0345:{NFSU2_TR(0x6e0345);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0349:{NFSU2_TR(0x6e0349);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e034eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc2a0u);}[[clang::musttail]] return blk_6dc2a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e034e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e034e:L6e034e:{bud-=10;NFSU2_TR(0x6e034e);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0354:{NFSU2_TR(0x6e0354);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0358:{NFSU2_TR(0x6e0358);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e035b:{NFSU2_TR(0x6e035b);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0360:{NFSU2_TR(0x6e0360);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0363:{NFSU2_TR(0x6e0363);
__builtin_memmove((R+8),gp(0x8a7a14),4);
}
B6e0369:{NFSU2_TR(0x6e0369);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B6e036c:{NFSU2_TR(0x6e036c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B6e036f:{NFSU2_TR(0x6e036f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0372:{NFSU2_TR(0x6e0372);
__builtin_memmove((G+0),gp(0x8a7a10),4);
{[[clang::musttail]] return blk_6e0377(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0377(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0377:L6e0377:{bud-=3;NFSU2_TR(0x6e0377);
__builtin_memmove((G+4),gp(0x8a7a20),4);
}
B6e037d:{NFSU2_TR(0x6e037d);
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
B6e037f:{NFSU2_TR(0x6e037f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e039a(ARGS);}}
}
B6e0381:L6e0381:{bud-=8;NFSU2_TR(0x6e0381);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0384:{NFSU2_TR(0x6e0384);
__builtin_memmove((G+0),gp(0x8a7a14),4);
}
B6e0389:{NFSU2_TR(0x6e0389);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B6e038d:{NFSU2_TR(0x6e038d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e038f:{NFSU2_TR(0x6e038f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0390:{NFSU2_TR(0x6e0390);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0391:{NFSU2_TR(0x6e0391);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0395:{NFSU2_TR(0x6e0395);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e039aull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6dcdc0u);}[[clang::musttail]] return blk_6dcdc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e039a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e039a:L6e039a:{bud-=4;NFSU2_TR(0x6e039a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e039e:{NFSU2_TR(0x6e039e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e039f:{NFSU2_TR(0x6e039f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e03a0:{NFSU2_TR(0x6e03a0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e03a5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dbfb0u);}[[clang::musttail]] return blk_6dbfb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e03a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e03a5:L6e03a5:{bud-=7;NFSU2_TR(0x6e03a5);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x8ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e03a8:{NFSU2_TR(0x6e03a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e03a9:{NFSU2_TR(0x6e03a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e03aa:{NFSU2_TR(0x6e03aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e03ab:{NFSU2_TR(0x6e03ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e03ac:{NFSU2_TR(0x6e03ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6e03ad:{NFSU2_TR(0x6e03ad);
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
PN u32 blk_6e03b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e03b0:L6e03b0:{bud-=9;NFSU2_TR(0x6e03b0);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e03b5:{NFSU2_TR(0x6e03b5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e03b8:{NFSU2_TR(0x6e03b8);
__builtin_memmove((R+8),gp(0x8a7a14),4);
}
B6e03be:{NFSU2_TR(0x6e03be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e03bf:{NFSU2_TR(0x6e03bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e03c0:{NFSU2_TR(0x6e03c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6e03c4:{NFSU2_TR(0x6e03c4);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03c7:{NFSU2_TR(0x6e03c7);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e03cd:{NFSU2_TR(0x6e03cd);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e03d2ull));
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
PN u32 blk_6e03d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e03d2:L6e03d2:{bud-=5;NFSU2_TR(0x6e03d2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03d4:{NFSU2_TR(0x6e03d4);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e03da:{NFSU2_TR(0x6e03da);
__builtin_memmove((R+24),(G+0),4);
}
B6e03dc:{NFSU2_TR(0x6e03dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e03df:{NFSU2_TR(0x6e03df);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e03e4ull));
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
PN u32 blk_6e03e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e03e4:L6e03e4:{bud-=5;NFSU2_TR(0x6e03e4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03e7:{NFSU2_TR(0x6e03e7);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e03ed:{NFSU2_TR(0x6e03ed);
w4(R+24,u32(u32(r4(R+24))|u32(r4(G+0))));
}
B6e03ef:{NFSU2_TR(0x6e03ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e03f2:{NFSU2_TR(0x6e03f2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e03f7ull));
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
PN u32 blk_6e03f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e03f7:L6e03f7:{bud-=5;NFSU2_TR(0x6e03f7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03fa:{NFSU2_TR(0x6e03fa);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0400:{NFSU2_TR(0x6e0400);
w4(R+24,u32(u32(r4(R+24))|u32(r4(G+0))));
}
B6e0402:{NFSU2_TR(0x6e0402);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e0405:{NFSU2_TR(0x6e0405);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e040aull));
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
PN u32 blk_6e040a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e040a:L6e040a:{bud-=3;NFSU2_TR(0x6e040a);
w4(R+24,u32(u32(r4(R+24))|u32(r4(G+0))));
}
B6e040c:{NFSU2_TR(0x6e040c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e040d:{NFSU2_TR(0x6e040d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0412ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc300u);}[[clang::musttail]] return blk_6dc300(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0412(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0412:L6e0412:{bud-=4;NFSU2_TR(0x6e0412);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x4ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x4ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0415:{NFSU2_TR(0x6e0415);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0416:{NFSU2_TR(0x6e0416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0417:{NFSU2_TR(0x6e0417);
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
PN u32 blk_6e0420(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0420:L6e0420:{bud-=14;NFSU2_TR(0x6e0420);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0424:{NFSU2_TR(0x6e0424);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0428:{NFSU2_TR(0x6e0428);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0429:{NFSU2_TR(0x6e0429);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e042a:{NFSU2_TR(0x6e042a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e042e:{NFSU2_TR(0x6e042e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e042f:{NFSU2_TR(0x6e042f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0430:{NFSU2_TR(0x6e0430);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0434:{NFSU2_TR(0x6e0434);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e0437:{NFSU2_TR(0x6e0437);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e0439:{NFSU2_TR(0x6e0439);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e043b:{NFSU2_TR(0x6e043b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e043e:{NFSU2_TR(0x6e043e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0442:{NFSU2_TR(0x6e0442);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e0474(ARGS);}}
}
B6e0444:L6e0444:{bud-=3;NFSU2_TR(0x6e0444);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0448:{NFSU2_TR(0x6e0448);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e044c:{NFSU2_TR(0x6e044c);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_6e0450(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0450(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0450:L6e0450:{bud-=7;NFSU2_TR(0x6e0450);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0454:{NFSU2_TR(0x6e0454);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0458:{NFSU2_TR(0x6e0458);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0459:{NFSU2_TR(0x6e0459);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e045a:{NFSU2_TR(0x6e045a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e045b:{NFSU2_TR(0x6e045b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e045c:{NFSU2_TR(0x6e045c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0461ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6de8b0u);}[[clang::musttail]] return blk_6de8b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0461(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0461:L6e0461:{bud-=7;NFSU2_TR(0x6e0461);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0465:{NFSU2_TR(0x6e0465);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e0468:{NFSU2_TR(0x6e0468);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0469:{NFSU2_TR(0x6e0469);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B6e046c:{NFSU2_TR(0x6e046c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e046e:{NFSU2_TR(0x6e046e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0472:{NFSU2_TR(0x6e0472);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0450u);}[[clang::musttail]] return blk_6e0450(ARGS);}}
{[[clang::musttail]] return blk_6e0474(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0474(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0474:L6e0474:{bud-=2;NFSU2_TR(0x6e0474);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0476:{NFSU2_TR(0x6e0476);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e049b(ARGS);}}
}
B6e0478:L6e0478:{bud-=4;NFSU2_TR(0x6e0478);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e047c:{NFSU2_TR(0x6e047c);
__builtin_memmove((R+28),(R+24),4);
}
B6e047e:{NFSU2_TR(0x6e047e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0481:{NFSU2_TR(0x6e0481);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
{[[clang::musttail]] return blk_6e0483(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0483(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0483:L6e0483:{bud-=6;NFSU2_TR(0x6e0483);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0487:{NFSU2_TR(0x6e0487);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0488:{NFSU2_TR(0x6e0488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0489:{NFSU2_TR(0x6e0489);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e048a:{NFSU2_TR(0x6e048a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e048b:{NFSU2_TR(0x6e048b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0490ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6de800u);}[[clang::musttail]] return blk_6de800(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0490(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0490:L6e0490:{bud-=5;NFSU2_TR(0x6e0490);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e0493:{NFSU2_TR(0x6e0493);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0494:{NFSU2_TR(0x6e0494);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e0497:{NFSU2_TR(0x6e0497);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0499:{NFSU2_TR(0x6e0499);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0483u);}[[clang::musttail]] return blk_6e0483(ARGS);}}
{[[clang::musttail]] return blk_6e049b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e049b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e049b:L6e049b:{bud-=3;NFSU2_TR(0x6e049b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e049f:{NFSU2_TR(0x6e049f);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
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
B6e04a1:{NFSU2_TR(0x6e04a1);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e04dd(ARGS);}}
}
B6e04a3:L6e04a3:{bud-=11;NFSU2_TR(0x6e04a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e04a7:{NFSU2_TR(0x6e04a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e04ab:{NFSU2_TR(0x6e04ab);
__builtin_memmove((R+12),(R+24),4);
}
B6e04ad:{NFSU2_TR(0x6e04ad);
__builtin_memmove((R+28),(R+24),4);
}
B6e04af:{NFSU2_TR(0x6e04af);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e04b2:{NFSU2_TR(0x6e04b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e04b5:{NFSU2_TR(0x6e04b5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B6e04b7:{NFSU2_TR(0x6e04b7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e04b9:{NFSU2_TR(0x6e04b9);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B6e04bb:{NFSU2_TR(0x6e04bb);
__builtin_memmove((R+24),(G+0),4);
}
B6e04bd:{NFSU2_TR(0x6e04bd);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_6e04c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e04c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e04c0:L6e04c0:{bud-=7;NFSU2_TR(0x6e04c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+4),(U+0),4);
}
B6e04c2:{NFSU2_TR(0x6e04c2);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xffull))));
}
B6e04c8:{NFSU2_TR(0x6e04c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B6e04cb:{NFSU2_TR(0x6e04cb);
u8 U[6];
w1(F+0,carry<u32>(r4(G+4),r4(R+20)));
w1(F+11,scarry<u32>(r4(G+4),r4(R+20)));
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e04cd:{NFSU2_TR(0x6e04cd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e04ce:{NFSU2_TR(0x6e04ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e04cf:{NFSU2_TR(0x6e04cf);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e04d4ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x63d12cu);}[[clang::musttail]] return blk_63d12c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e04d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e04d4:L6e04d4:{bud-=4;NFSU2_TR(0x6e04d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e04d7:{NFSU2_TR(0x6e04d7);
w1(F+0,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B6e04da:{NFSU2_TR(0x6e04da);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e04db:{NFSU2_TR(0x6e04db);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e04c0u);}[[clang::musttail]] return blk_6e04c0(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e04dd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e04dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e04dd:L6e04dd:{bud-=5;NFSU2_TR(0x6e04dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e04de:{NFSU2_TR(0x6e04de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e04df:{NFSU2_TR(0x6e04df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e04e0:{NFSU2_TR(0x6e04e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e04e1:{NFSU2_TR(0x6e04e1);
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
PN u32 blk_6e04f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e04f0:L6e04f0:{bud-=14;NFSU2_TR(0x6e04f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e04f4:{NFSU2_TR(0x6e04f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e04f8:{NFSU2_TR(0x6e04f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e04f9:{NFSU2_TR(0x6e04f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e04fa:{NFSU2_TR(0x6e04fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e04fe:{NFSU2_TR(0x6e04fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e04ff:{NFSU2_TR(0x6e04ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0500:{NFSU2_TR(0x6e0500);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0504:{NFSU2_TR(0x6e0504);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e0507:{NFSU2_TR(0x6e0507);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e0509:{NFSU2_TR(0x6e0509);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e050b:{NFSU2_TR(0x6e050b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e050e:{NFSU2_TR(0x6e050e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0512:{NFSU2_TR(0x6e0512);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e0544(ARGS);}}
}
B6e0514:L6e0514:{bud-=3;NFSU2_TR(0x6e0514);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0518:{NFSU2_TR(0x6e0518);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e051c:{NFSU2_TR(0x6e051c);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_6e0520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0520(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0520:L6e0520:{bud-=7;NFSU2_TR(0x6e0520);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0524:{NFSU2_TR(0x6e0524);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0528:{NFSU2_TR(0x6e0528);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0529:{NFSU2_TR(0x6e0529);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e052a:{NFSU2_TR(0x6e052a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e052b:{NFSU2_TR(0x6e052b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e052c:{NFSU2_TR(0x6e052c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0531ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dead0u);}[[clang::musttail]] return blk_6dead0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0531(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0531:L6e0531:{bud-=7;NFSU2_TR(0x6e0531);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0535:{NFSU2_TR(0x6e0535);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e0538:{NFSU2_TR(0x6e0538);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0539:{NFSU2_TR(0x6e0539);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B6e053c:{NFSU2_TR(0x6e053c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e053e:{NFSU2_TR(0x6e053e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0542:{NFSU2_TR(0x6e0542);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0520u);}[[clang::musttail]] return blk_6e0520(ARGS);}}
{[[clang::musttail]] return blk_6e0544(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0544(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0544:L6e0544:{bud-=2;NFSU2_TR(0x6e0544);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0546:{NFSU2_TR(0x6e0546);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e056b(ARGS);}}
}
B6e0548:L6e0548:{bud-=4;NFSU2_TR(0x6e0548);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e054c:{NFSU2_TR(0x6e054c);
__builtin_memmove((R+28),(R+24),4);
}
B6e054e:{NFSU2_TR(0x6e054e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0551:{NFSU2_TR(0x6e0551);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
{[[clang::musttail]] return blk_6e0553(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0553(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0553:L6e0553:{bud-=6;NFSU2_TR(0x6e0553);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0557:{NFSU2_TR(0x6e0557);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0558:{NFSU2_TR(0x6e0558);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0559:{NFSU2_TR(0x6e0559);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e055a:{NFSU2_TR(0x6e055a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e055b:{NFSU2_TR(0x6e055b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0560ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6de9b0u);}[[clang::musttail]] return blk_6de9b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0560(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0560:L6e0560:{bud-=5;NFSU2_TR(0x6e0560);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e0563:{NFSU2_TR(0x6e0563);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0564:{NFSU2_TR(0x6e0564);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e0567:{NFSU2_TR(0x6e0567);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0569:{NFSU2_TR(0x6e0569);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0553u);}[[clang::musttail]] return blk_6e0553(ARGS);}}
{[[clang::musttail]] return blk_6e056b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e056b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e056b:L6e056b:{bud-=3;NFSU2_TR(0x6e056b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e056f:{NFSU2_TR(0x6e056f);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
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
B6e0571:{NFSU2_TR(0x6e0571);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e05ad(ARGS);}}
}
B6e0573:L6e0573:{bud-=11;NFSU2_TR(0x6e0573);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0577:{NFSU2_TR(0x6e0577);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e057b:{NFSU2_TR(0x6e057b);
__builtin_memmove((R+12),(R+24),4);
}
B6e057d:{NFSU2_TR(0x6e057d);
__builtin_memmove((R+28),(R+24),4);
}
B6e057f:{NFSU2_TR(0x6e057f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e0582:{NFSU2_TR(0x6e0582);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0585:{NFSU2_TR(0x6e0585);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B6e0587:{NFSU2_TR(0x6e0587);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e0589:{NFSU2_TR(0x6e0589);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B6e058b:{NFSU2_TR(0x6e058b);
__builtin_memmove((R+24),(G+0),4);
}
B6e058d:{NFSU2_TR(0x6e058d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_6e0590(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0590(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0590:L6e0590:{bud-=7;NFSU2_TR(0x6e0590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+4),(U+0),4);
}
B6e0592:{NFSU2_TR(0x6e0592);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xffull))));
}
B6e0598:{NFSU2_TR(0x6e0598);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B6e059b:{NFSU2_TR(0x6e059b);
u8 U[6];
w1(F+0,carry<u32>(r4(G+4),r4(R+20)));
w1(F+11,scarry<u32>(r4(G+4),r4(R+20)));
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e059d:{NFSU2_TR(0x6e059d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e059e:{NFSU2_TR(0x6e059e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e059f:{NFSU2_TR(0x6e059f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e05a4ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x63d12cu);}[[clang::musttail]] return blk_63d12c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e05a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e05a4:L6e05a4:{bud-=4;NFSU2_TR(0x6e05a4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e05a7:{NFSU2_TR(0x6e05a7);
w1(F+0,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B6e05aa:{NFSU2_TR(0x6e05aa);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e05ab:{NFSU2_TR(0x6e05ab);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0590u);}[[clang::musttail]] return blk_6e0590(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e05ad(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e05ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e05ad:L6e05ad:{bud-=5;NFSU2_TR(0x6e05ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e05ae:{NFSU2_TR(0x6e05ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e05af:{NFSU2_TR(0x6e05af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e05b0:{NFSU2_TR(0x6e05b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e05b1:{NFSU2_TR(0x6e05b1);
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
PN u32 blk_6e05c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e05c0:L6e05c0:{bud-=14;NFSU2_TR(0x6e05c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e05c4:{NFSU2_TR(0x6e05c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e05c8:{NFSU2_TR(0x6e05c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05c9:{NFSU2_TR(0x6e05c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05ca:{NFSU2_TR(0x6e05ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e05ce:{NFSU2_TR(0x6e05ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05cf:{NFSU2_TR(0x6e05cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05d0:{NFSU2_TR(0x6e05d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e05d4:{NFSU2_TR(0x6e05d4);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e05d7:{NFSU2_TR(0x6e05d7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e05d9:{NFSU2_TR(0x6e05d9);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e05db:{NFSU2_TR(0x6e05db);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e05de:{NFSU2_TR(0x6e05de);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e05e2:{NFSU2_TR(0x6e05e2);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e0614(ARGS);}}
}
B6e05e4:L6e05e4:{bud-=3;NFSU2_TR(0x6e05e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e05e8:{NFSU2_TR(0x6e05e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e05ec:{NFSU2_TR(0x6e05ec);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_6e05f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e05f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e05f0:L6e05f0:{bud-=7;NFSU2_TR(0x6e05f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e05f4:{NFSU2_TR(0x6e05f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e05f8:{NFSU2_TR(0x6e05f8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05f9:{NFSU2_TR(0x6e05f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05fa:{NFSU2_TR(0x6e05fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05fb:{NFSU2_TR(0x6e05fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e05fc:{NFSU2_TR(0x6e05fc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0601ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dede0u);}[[clang::musttail]] return blk_6dede0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0601(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0601:L6e0601:{bud-=7;NFSU2_TR(0x6e0601);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0605:{NFSU2_TR(0x6e0605);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e0608:{NFSU2_TR(0x6e0608);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0609:{NFSU2_TR(0x6e0609);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B6e060c:{NFSU2_TR(0x6e060c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e060e:{NFSU2_TR(0x6e060e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0612:{NFSU2_TR(0x6e0612);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e05f0u);}[[clang::musttail]] return blk_6e05f0(ARGS);}}
{[[clang::musttail]] return blk_6e0614(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0614(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0614:L6e0614:{bud-=2;NFSU2_TR(0x6e0614);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0616:{NFSU2_TR(0x6e0616);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e063b(ARGS);}}
}
B6e0618:L6e0618:{bud-=4;NFSU2_TR(0x6e0618);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e061c:{NFSU2_TR(0x6e061c);
__builtin_memmove((R+28),(R+24),4);
}
B6e061e:{NFSU2_TR(0x6e061e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0621:{NFSU2_TR(0x6e0621);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
{[[clang::musttail]] return blk_6e0623(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0623(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0623:L6e0623:{bud-=6;NFSU2_TR(0x6e0623);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0627:{NFSU2_TR(0x6e0627);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0628:{NFSU2_TR(0x6e0628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0629:{NFSU2_TR(0x6e0629);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e062a:{NFSU2_TR(0x6e062a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e062b:{NFSU2_TR(0x6e062b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0630ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dec70u);}[[clang::musttail]] return blk_6dec70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0630(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0630:L6e0630:{bud-=5;NFSU2_TR(0x6e0630);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e0633:{NFSU2_TR(0x6e0633);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0634:{NFSU2_TR(0x6e0634);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e0637:{NFSU2_TR(0x6e0637);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0639:{NFSU2_TR(0x6e0639);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0623u);}[[clang::musttail]] return blk_6e0623(ARGS);}}
{[[clang::musttail]] return blk_6e063b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e063b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e063b:L6e063b:{bud-=3;NFSU2_TR(0x6e063b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e063f:{NFSU2_TR(0x6e063f);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
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
B6e0641:{NFSU2_TR(0x6e0641);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e067d(ARGS);}}
}
B6e0643:L6e0643:{bud-=11;NFSU2_TR(0x6e0643);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0647:{NFSU2_TR(0x6e0647);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e064b:{NFSU2_TR(0x6e064b);
__builtin_memmove((R+12),(R+24),4);
}
B6e064d:{NFSU2_TR(0x6e064d);
__builtin_memmove((R+28),(R+24),4);
}
B6e064f:{NFSU2_TR(0x6e064f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e0652:{NFSU2_TR(0x6e0652);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0655:{NFSU2_TR(0x6e0655);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B6e0657:{NFSU2_TR(0x6e0657);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e0659:{NFSU2_TR(0x6e0659);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B6e065b:{NFSU2_TR(0x6e065b);
__builtin_memmove((R+24),(G+0),4);
}
B6e065d:{NFSU2_TR(0x6e065d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_6e0660(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0660:L6e0660:{bud-=7;NFSU2_TR(0x6e0660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+4),(U+0),4);
}
B6e0662:{NFSU2_TR(0x6e0662);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xffull))));
}
B6e0668:{NFSU2_TR(0x6e0668);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B6e066b:{NFSU2_TR(0x6e066b);
u8 U[6];
w1(F+0,carry<u32>(r4(G+4),r4(R+20)));
w1(F+11,scarry<u32>(r4(G+4),r4(R+20)));
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e066d:{NFSU2_TR(0x6e066d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e066e:{NFSU2_TR(0x6e066e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e066f:{NFSU2_TR(0x6e066f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0674ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x63d12cu);}[[clang::musttail]] return blk_63d12c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0674(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0674:L6e0674:{bud-=4;NFSU2_TR(0x6e0674);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e0677:{NFSU2_TR(0x6e0677);
w1(F+0,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B6e067a:{NFSU2_TR(0x6e067a);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e067b:{NFSU2_TR(0x6e067b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0660u);}[[clang::musttail]] return blk_6e0660(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e067d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e067d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e067d:L6e067d:{bud-=5;NFSU2_TR(0x6e067d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e067e:{NFSU2_TR(0x6e067e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e067f:{NFSU2_TR(0x6e067f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e0680:{NFSU2_TR(0x6e0680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e0681:{NFSU2_TR(0x6e0681);
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
PN u32 blk_6e0690(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0690:L6e0690:{bud-=4;NFSU2_TR(0x6e0690);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0696:{NFSU2_TR(0x6e0696);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0699:{NFSU2_TR(0x6e0699);
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
B6e069b:{NFSU2_TR(0x6e069b);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e06a5(ARGS);}}
}
B6e069d:L6e069d:{bud-=3;NFSU2_TR(0x6e069d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e06a0:{NFSU2_TR(0x6e06a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e06a3:{NFSU2_TR(0x6e06a3);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e06c9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e06a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e06a5:L6e06a5:{bud-=12;NFSU2_TR(0x6e06a5);
__builtin_memmove((G+4),gp(0x8a7b90),4);
}
B6e06ab:{NFSU2_TR(0x6e06ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e06ae:{NFSU2_TR(0x6e06ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e06af:{NFSU2_TR(0x6e06af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e06b2:{NFSU2_TR(0x6e06b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e06b5:{NFSU2_TR(0x6e06b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B6e06b8:{NFSU2_TR(0x6e06b8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e06bb:{NFSU2_TR(0x6e06bb);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
w8(U+8,u64(s64(s32(r4(G+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(G+4,u32(r8(U+24)));
}
B6e06c0:{NFSU2_TR(0x6e06c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e06c3:{NFSU2_TR(0x6e06c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B6e06c6:{NFSU2_TR(0x6e06c6);
u8 U[6];
w1(F+0,carry<u32>(r4(G+4),r4(R+24)));
w1(F+11,scarry<u32>(r4(G+4),r4(R+24)));
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e06c8:{NFSU2_TR(0x6e06c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e06c9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e06c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e06c9:L6e06c9:{bud-=11;NFSU2_TR(0x6e06c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e06cd:{NFSU2_TR(0x6e06cd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e06cf:{NFSU2_TR(0x6e06cf);
__builtin_memmove((G+4),gp(0x8a7a10),4);
}
B6e06d5:{NFSU2_TR(0x6e06d5);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e06d8:{NFSU2_TR(0x6e06d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e06dc:{NFSU2_TR(0x6e06dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+4)),r4(U+0));
}
B6e06de:{NFSU2_TR(0x6e06de);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e06e4:{NFSU2_TR(0x6e06e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e06e7:{NFSU2_TR(0x6e06e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e06eb:{NFSU2_TR(0x6e06eb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e06ed:{NFSU2_TR(0x6e06ed);
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
PN u32 blk_6e06f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e06f0:L6e06f0:{bud-=1;NFSU2_TR(0x6e06f0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e06f5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e06f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e06f5:L6e06f5:{bud-=2;NFSU2_TR(0x6e06f5);
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
B6e06f7:{NFSU2_TR(0x6e06f7);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e075f(ARGS);}}
}
B6e06f9:L6e06f9:{bud-=7;NFSU2_TR(0x6e06f9);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e06fe:{NFSU2_TR(0x6e06fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e06ff:{NFSU2_TR(0x6e06ff);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0702:{NFSU2_TR(0x6e0702);
__builtin_memmove((G+0),gp(0x8a88a4),4);
}
B6e0707:{NFSU2_TR(0x6e0707);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e070a:{NFSU2_TR(0x6e070a);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e070c:{NFSU2_TR(0x6e070c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e0710(ARGS);}}
}
B6e070e:L6e070e:{bud-=1;NFSU2_TR(0x6e070e);
__builtin_memmove((R+24),(G+0),4);
{[[clang::musttail]] return blk_6e0710(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0710(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0710:L6e0710:{bud-=13;NFSU2_TR(0x6e0710);
__builtin_memmove((G+4),gp(0x8a8a24),4);
}
B6e0716:{NFSU2_TR(0x6e0716);
__builtin_memmove((R+8),gp(0x8a8a20),4);
}
B6e071c:{NFSU2_TR(0x6e071c);
__builtin_memmove((G+0),gp(0x8a8a1c),4);
}
B6e0721:{NFSU2_TR(0x6e0721);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0722:{NFSU2_TR(0x6e0722);
__builtin_memmove((G+4),gp(0x8a88a0),4);
}
B6e0728:{NFSU2_TR(0x6e0728);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0729:{NFSU2_TR(0x6e0729);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6e072f:{NFSU2_TR(0x6e072f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0730:{NFSU2_TR(0x6e0730);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0733:{NFSU2_TR(0x6e0733);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0734:{NFSU2_TR(0x6e0734);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0739:{NFSU2_TR(0x6e0739);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e073a:{NFSU2_TR(0x6e073a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e073full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e05c0u);}[[clang::musttail]] return blk_6e05c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e073f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e073f:L6e073f:{bud-=7;NFSU2_TR(0x6e073f);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0745:{NFSU2_TR(0x6e0745);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0748:{NFSU2_TR(0x6e0748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B6e074f:{NFSU2_TR(0x6e074f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0750:{NFSU2_TR(0x6e0750);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0755:{NFSU2_TR(0x6e0755);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0756:{NFSU2_TR(0x6e0756);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e075bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dbf90u);}[[clang::musttail]] return blk_6dbf90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e075b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e075b:L6e075b:{bud-=2;NFSU2_TR(0x6e075b);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x24ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x24ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e075e:{NFSU2_TR(0x6e075e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e075f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e075f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e075f:L6e075f:{bud-=1;NFSU2_TR(0x6e075f);
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
PN u32 blk_6e0760(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0760:L6e0760:{bud-=1;NFSU2_TR(0x6e0760);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0765ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0765(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0765:L6e0765:{bud-=2;NFSU2_TR(0x6e0765);
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
B6e0767:{NFSU2_TR(0x6e0767);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e07cf(ARGS);}}
}
B6e0769:L6e0769:{bud-=7;NFSU2_TR(0x6e0769);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e076e:{NFSU2_TR(0x6e076e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e076f:{NFSU2_TR(0x6e076f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0772:{NFSU2_TR(0x6e0772);
__builtin_memmove((G+0),gp(0x8a88a4),4);
}
B6e0777:{NFSU2_TR(0x6e0777);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e077a:{NFSU2_TR(0x6e077a);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e077c:{NFSU2_TR(0x6e077c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e0780(ARGS);}}
}
B6e077e:L6e077e:{bud-=1;NFSU2_TR(0x6e077e);
__builtin_memmove((R+24),(G+0),4);
{[[clang::musttail]] return blk_6e0780(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0780(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0780:L6e0780:{bud-=13;NFSU2_TR(0x6e0780);
__builtin_memmove((G+4),gp(0x8a8a24),4);
}
B6e0786:{NFSU2_TR(0x6e0786);
__builtin_memmove((R+8),gp(0x8a8a20),4);
}
B6e078c:{NFSU2_TR(0x6e078c);
__builtin_memmove((G+0),gp(0x8a8a1c),4);
}
B6e0791:{NFSU2_TR(0x6e0791);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0792:{NFSU2_TR(0x6e0792);
__builtin_memmove((G+4),gp(0x8a88a0),4);
}
B6e0798:{NFSU2_TR(0x6e0798);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0799:{NFSU2_TR(0x6e0799);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6e079f:{NFSU2_TR(0x6e079f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07a0:{NFSU2_TR(0x6e07a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e07a3:{NFSU2_TR(0x6e07a3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07a4:{NFSU2_TR(0x6e07a4);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07a9:{NFSU2_TR(0x6e07a9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07aa:{NFSU2_TR(0x6e07aa);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e07afull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0420u);}[[clang::musttail]] return blk_6e0420(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e07af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e07af:L6e07af:{bud-=7;NFSU2_TR(0x6e07af);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e07b5:{NFSU2_TR(0x6e07b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e07b8:{NFSU2_TR(0x6e07b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B6e07bf:{NFSU2_TR(0x6e07bf);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07c0:{NFSU2_TR(0x6e07c0);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07c5:{NFSU2_TR(0x6e07c5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07c6:{NFSU2_TR(0x6e07c6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e07cbull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dbf90u);}[[clang::musttail]] return blk_6dbf90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e07cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e07cb:L6e07cb:{bud-=2;NFSU2_TR(0x6e07cb);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x24ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x24ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e07ce:{NFSU2_TR(0x6e07ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e07cf(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e07cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e07cf:L6e07cf:{bud-=1;NFSU2_TR(0x6e07cf);
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
PN u32 blk_6e07d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e07d0:L6e07d0:{bud-=1;NFSU2_TR(0x6e07d0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e07d5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e07d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e07d5:L6e07d5:{bud-=2;NFSU2_TR(0x6e07d5);
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
B6e07d7:{NFSU2_TR(0x6e07d7);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e083f(ARGS);}}
}
B6e07d9:L6e07d9:{bud-=7;NFSU2_TR(0x6e07d9);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e07de:{NFSU2_TR(0x6e07de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e07df:{NFSU2_TR(0x6e07df);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e07e2:{NFSU2_TR(0x6e07e2);
__builtin_memmove((G+0),gp(0x8a88a4),4);
}
B6e07e7:{NFSU2_TR(0x6e07e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e07ea:{NFSU2_TR(0x6e07ea);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e07ec:{NFSU2_TR(0x6e07ec);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e07f0(ARGS);}}
}
B6e07ee:L6e07ee:{bud-=1;NFSU2_TR(0x6e07ee);
__builtin_memmove((R+24),(G+0),4);
{[[clang::musttail]] return blk_6e07f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e07f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e07f0:L6e07f0:{bud-=13;NFSU2_TR(0x6e07f0);
__builtin_memmove((G+4),gp(0x8a8a24),4);
}
B6e07f6:{NFSU2_TR(0x6e07f6);
__builtin_memmove((R+8),gp(0x8a8a20),4);
}
B6e07fc:{NFSU2_TR(0x6e07fc);
__builtin_memmove((G+0),gp(0x8a8a1c),4);
}
B6e0801:{NFSU2_TR(0x6e0801);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0802:{NFSU2_TR(0x6e0802);
__builtin_memmove((G+4),gp(0x8a88a0),4);
}
B6e0808:{NFSU2_TR(0x6e0808);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0809:{NFSU2_TR(0x6e0809);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6e080f:{NFSU2_TR(0x6e080f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0810:{NFSU2_TR(0x6e0810);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0813:{NFSU2_TR(0x6e0813);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0814:{NFSU2_TR(0x6e0814);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0819:{NFSU2_TR(0x6e0819);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e081a:{NFSU2_TR(0x6e081a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e081full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e04f0u);}[[clang::musttail]] return blk_6e04f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e081f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e081f:L6e081f:{bud-=7;NFSU2_TR(0x6e081f);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0825:{NFSU2_TR(0x6e0825);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0828:{NFSU2_TR(0x6e0828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B6e082f:{NFSU2_TR(0x6e082f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0830:{NFSU2_TR(0x6e0830);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0835:{NFSU2_TR(0x6e0835);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0836:{NFSU2_TR(0x6e0836);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e083bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dbf90u);}[[clang::musttail]] return blk_6dbf90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e083b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e083b:L6e083b:{bud-=2;NFSU2_TR(0x6e083b);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x24ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x24ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e083e:{NFSU2_TR(0x6e083e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e083f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e083f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e083f:L6e083f:{bud-=1;NFSU2_TR(0x6e083f);
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
PN u32 blk_6e0840(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0840:L6e0840:{bud-=1;NFSU2_TR(0x6e0840);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0845ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0845(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0845:L6e0845:{bud-=2;NFSU2_TR(0x6e0845);
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
B6e0847:{NFSU2_TR(0x6e0847);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e08a3(ARGS);}}
}
B6e0849:L6e0849:{bud-=13;NFSU2_TR(0x6e0849);
__builtin_memmove((G+0),gp(0x8a8a24),4);
}
B6e084e:{NFSU2_TR(0x6e084e);
__builtin_memmove((G+4),gp(0x8a8a20),4);
}
B6e0854:{NFSU2_TR(0x6e0854);
__builtin_memmove((R+8),gp(0x8a8a1c),4);
}
B6e085a:{NFSU2_TR(0x6e085a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e085b:{NFSU2_TR(0x6e085b);
__builtin_memmove((G+0),gp(0x8a88a0),4);
}
B6e0860:{NFSU2_TR(0x6e0860);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0861:{NFSU2_TR(0x6e0861);
__builtin_memmove((G+4),gp(0x8a7a18),4);
}
B6e0867:{NFSU2_TR(0x6e0867);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0868:{NFSU2_TR(0x6e0868);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e086b:{NFSU2_TR(0x6e086b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e086c:{NFSU2_TR(0x6e086c);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0871:{NFSU2_TR(0x6e0871);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0872:{NFSU2_TR(0x6e0872);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0877ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e05c0u);}[[clang::musttail]] return blk_6e05c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0877(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0877:L6e0877:{bud-=6;NFSU2_TR(0x6e0877);
__builtin_memmove((G+0),gp(0x8a8a20),4);
}
B6e087c:{NFSU2_TR(0x6e087c);
__builtin_memmove((G+4),gp(0x8a8a1c),4);
}
B6e0882:{NFSU2_TR(0x6e0882);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B6e0884:{NFSU2_TR(0x6e0884);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B6e0887:{NFSU2_TR(0x6e0887);
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
B6e0889:{NFSU2_TR(0x6e0889);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e08a3(ARGS);}}
}
B6e088b:L6e088b:{bud-=4;NFSU2_TR(0x6e088b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e088c:{NFSU2_TR(0x6e088c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e088d:{NFSU2_TR(0x6e088d);
w4(R+24,u32(0x8a8a80ull));
}
B6e0892:{NFSU2_TR(0x6e0892);
__builtin_memmove((R+28),(G+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0894(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0894(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0894:L6e0894:{bud-=3;NFSU2_TR(0x6e0894);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0895:{NFSU2_TR(0x6e0895);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0896:{NFSU2_TR(0x6e0896);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e089bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63d12cu);}[[clang::musttail]] return blk_63d12c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e089b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e089b:L6e089b:{bud-=3;NFSU2_TR(0x6e089b);
w1(F+0,carry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6e089e:{NFSU2_TR(0x6e089e);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e089f:{NFSU2_TR(0x6e089f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6e0894u);}[[clang::musttail]] return blk_6e0894(ARGS);}}
}
B6e08a1:L6e08a1:{bud-=2;NFSU2_TR(0x6e08a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e08a2:{NFSU2_TR(0x6e08a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e08a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e08a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e08a3:L6e08a3:{bud-=1;NFSU2_TR(0x6e08a3);
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
PN u32 blk_6e08b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e08b0:L6e08b0:{bud-=1;NFSU2_TR(0x6e08b0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e08b5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e08b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e08b5:L6e08b5:{bud-=2;NFSU2_TR(0x6e08b5);
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
B6e08b7:{NFSU2_TR(0x6e08b7);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0913(ARGS);}}
}
B6e08b9:L6e08b9:{bud-=13;NFSU2_TR(0x6e08b9);
__builtin_memmove((G+0),gp(0x8a8a24),4);
}
B6e08be:{NFSU2_TR(0x6e08be);
__builtin_memmove((G+4),gp(0x8a8a20),4);
}
B6e08c4:{NFSU2_TR(0x6e08c4);
__builtin_memmove((R+8),gp(0x8a8a1c),4);
}
B6e08ca:{NFSU2_TR(0x6e08ca);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08cb:{NFSU2_TR(0x6e08cb);
__builtin_memmove((G+0),gp(0x8a88a0),4);
}
B6e08d0:{NFSU2_TR(0x6e08d0);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08d1:{NFSU2_TR(0x6e08d1);
__builtin_memmove((G+4),gp(0x8a7a18),4);
}
B6e08d7:{NFSU2_TR(0x6e08d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08d8:{NFSU2_TR(0x6e08d8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e08db:{NFSU2_TR(0x6e08db);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08dc:{NFSU2_TR(0x6e08dc);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08e1:{NFSU2_TR(0x6e08e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08e2:{NFSU2_TR(0x6e08e2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e08e7ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0420u);}[[clang::musttail]] return blk_6e0420(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e08e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e08e7:L6e08e7:{bud-=6;NFSU2_TR(0x6e08e7);
__builtin_memmove((G+0),gp(0x8a8a20),4);
}
B6e08ec:{NFSU2_TR(0x6e08ec);
__builtin_memmove((G+4),gp(0x8a8a1c),4);
}
B6e08f2:{NFSU2_TR(0x6e08f2);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B6e08f4:{NFSU2_TR(0x6e08f4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B6e08f7:{NFSU2_TR(0x6e08f7);
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
B6e08f9:{NFSU2_TR(0x6e08f9);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0913(ARGS);}}
}
B6e08fb:L6e08fb:{bud-=4;NFSU2_TR(0x6e08fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08fc:{NFSU2_TR(0x6e08fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e08fd:{NFSU2_TR(0x6e08fd);
w4(R+24,u32(0x8a8a80ull));
}
B6e0902:{NFSU2_TR(0x6e0902);
__builtin_memmove((R+28),(G+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0904(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0904(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0904:L6e0904:{bud-=3;NFSU2_TR(0x6e0904);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0905:{NFSU2_TR(0x6e0905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0906:{NFSU2_TR(0x6e0906);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e090bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63d12cu);}[[clang::musttail]] return blk_63d12c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e090b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e090b:L6e090b:{bud-=3;NFSU2_TR(0x6e090b);
w1(F+0,carry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6e090e:{NFSU2_TR(0x6e090e);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e090f:{NFSU2_TR(0x6e090f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6e0904u);}[[clang::musttail]] return blk_6e0904(ARGS);}}
}
B6e0911:L6e0911:{bud-=2;NFSU2_TR(0x6e0911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0912:{NFSU2_TR(0x6e0912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0913(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0913(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0913:L6e0913:{bud-=1;NFSU2_TR(0x6e0913);
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
PN u32 blk_6e0920(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0920:L6e0920:{bud-=1;NFSU2_TR(0x6e0920);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0925ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0925(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0925:L6e0925:{bud-=2;NFSU2_TR(0x6e0925);
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
B6e0927:{NFSU2_TR(0x6e0927);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0983(ARGS);}}
}
B6e0929:L6e0929:{bud-=13;NFSU2_TR(0x6e0929);
__builtin_memmove((G+0),gp(0x8a8a24),4);
}
B6e092e:{NFSU2_TR(0x6e092e);
__builtin_memmove((G+4),gp(0x8a8a20),4);
}
B6e0934:{NFSU2_TR(0x6e0934);
__builtin_memmove((R+8),gp(0x8a8a1c),4);
}
B6e093a:{NFSU2_TR(0x6e093a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e093b:{NFSU2_TR(0x6e093b);
__builtin_memmove((G+0),gp(0x8a88a0),4);
}
B6e0940:{NFSU2_TR(0x6e0940);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0941:{NFSU2_TR(0x6e0941);
__builtin_memmove((G+4),gp(0x8a7a18),4);
}
B6e0947:{NFSU2_TR(0x6e0947);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0948:{NFSU2_TR(0x6e0948);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e094b:{NFSU2_TR(0x6e094b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e094c:{NFSU2_TR(0x6e094c);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0951:{NFSU2_TR(0x6e0951);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0952:{NFSU2_TR(0x6e0952);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0957ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e04f0u);}[[clang::musttail]] return blk_6e04f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0957(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0957:L6e0957:{bud-=6;NFSU2_TR(0x6e0957);
__builtin_memmove((G+0),gp(0x8a8a20),4);
}
B6e095c:{NFSU2_TR(0x6e095c);
__builtin_memmove((G+4),gp(0x8a8a1c),4);
}
B6e0962:{NFSU2_TR(0x6e0962);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B6e0964:{NFSU2_TR(0x6e0964);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B6e0967:{NFSU2_TR(0x6e0967);
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
B6e0969:{NFSU2_TR(0x6e0969);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0983(ARGS);}}
}
B6e096b:L6e096b:{bud-=4;NFSU2_TR(0x6e096b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e096c:{NFSU2_TR(0x6e096c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e096d:{NFSU2_TR(0x6e096d);
w4(R+24,u32(0x8a8a80ull));
}
B6e0972:{NFSU2_TR(0x6e0972);
__builtin_memmove((R+28),(G+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0974(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0974(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0974:L6e0974:{bud-=3;NFSU2_TR(0x6e0974);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0975:{NFSU2_TR(0x6e0975);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0976:{NFSU2_TR(0x6e0976);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e097bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63d12cu);}[[clang::musttail]] return blk_63d12c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e097b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e097b:L6e097b:{bud-=3;NFSU2_TR(0x6e097b);
w1(F+0,carry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6e097e:{NFSU2_TR(0x6e097e);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e097f:{NFSU2_TR(0x6e097f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6e0974u);}[[clang::musttail]] return blk_6e0974(ARGS);}}
}
B6e0981:L6e0981:{bud-=2;NFSU2_TR(0x6e0981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0982:{NFSU2_TR(0x6e0982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0983(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0983(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0983:L6e0983:{bud-=1;NFSU2_TR(0x6e0983);
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
PN u32 blk_6e0990(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0990:L6e0990:{bud-=8;NFSU2_TR(0x6e0990);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0991:{NFSU2_TR(0x6e0991);
__builtin_memmove((R+20),(G+16),4);
}
B6e0993:{NFSU2_TR(0x6e0993);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B6e0996:{NFSU2_TR(0x6e0996);
u8 U[6];
w1(F+0,u8((r4(G+16))<(u32(0x54ull))));
w1(F+11,sborrow<u32>(r4(G+16),u32(0x54ull)));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x54ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0999:{NFSU2_TR(0x6e0999);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e099a:{NFSU2_TR(0x6e099a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e099b:{NFSU2_TR(0x6e099b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e099c:{NFSU2_TR(0x6e099c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e09a1ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e09a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e09a1:L6e09a1:{bud-=2;NFSU2_TR(0x6e09a1);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e09a3:{NFSU2_TR(0x6e09a3);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0d72(ARGS);}}
}
B6e09a9:L6e09a9:{bud-=9;NFSU2_TR(0x6e09a9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09ab:{NFSU2_TR(0x6e09ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e09af:{NFSU2_TR(0x6e09af);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09b0:{NFSU2_TR(0x6e09b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6e09b4:{NFSU2_TR(0x6e09b4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09b5:{NFSU2_TR(0x6e09b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e09b9:{NFSU2_TR(0x6e09b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09ba:{NFSU2_TR(0x6e09ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e09c2:{NFSU2_TR(0x6e09c2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e09c7ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0690u);}[[clang::musttail]] return blk_6e0690(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e09c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e09c7:L6e09c7:{bud-=12;NFSU2_TR(0x6e09c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e09cb:{NFSU2_TR(0x6e09cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e09ce:{NFSU2_TR(0x6e09ce);
__builtin_memmove((G+4),(R+24),4);
}
B6e09d0:{NFSU2_TR(0x6e09d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B6e09d3:{NFSU2_TR(0x6e09d3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e09d6:{NFSU2_TR(0x6e09d6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09d7:{NFSU2_TR(0x6e09d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e09db:{NFSU2_TR(0x6e09db);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09dc:{NFSU2_TR(0x6e09dc);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09dd:{NFSU2_TR(0x6e09dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e09e1:{NFSU2_TR(0x6e09e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e09e3:{NFSU2_TR(0x6e09e3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e09e8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dcc00u);}[[clang::musttail]] return blk_6dcc00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e09e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e09e8:L6e09e8:{bud-=6;NFSU2_TR(0x6e09e8);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e09ee:{NFSU2_TR(0x6e09ee);
__builtin_memmove(gp(0x8a8a30),(G+0),4);
}
B6e09f3:{NFSU2_TR(0x6e09f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e09f6:{NFSU2_TR(0x6e09f6);
__builtin_memmove((G+0),gp(0x81cb38),4);
}
B6e09fb:{NFSU2_TR(0x6e09fb);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e09fd:{NFSU2_TR(0x6e09fd);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0b34(ARGS);}}
}
B6e0a03:L6e0a03:{bud-=2;NFSU2_TR(0x6e0a03);
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
B6e0a05:{NFSU2_TR(0x6e0a05);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0d62(ARGS);}}
}
B6e0a0b:L6e0a0b:{bud-=3;NFSU2_TR(0x6e0a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0a0f:{NFSU2_TR(0x6e0a0f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B6e0a12:{NFSU2_TR(0x6e0a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e0a16(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0a16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0a16:L6e0a16:{bud-=60;NFSU2_TR(0x6e0a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0a1a:{NFSU2_TR(0x6e0a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0a1c:{NFSU2_TR(0x6e0a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0a1f:{NFSU2_TR(0x6e0a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0a22:{NFSU2_TR(0x6e0a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0a26:{NFSU2_TR(0x6e0a26);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a2a:{NFSU2_TR(0x6e0a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B6e0a30:{NFSU2_TR(0x6e0a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0a33:{NFSU2_TR(0x6e0a33);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B6e0a36:{NFSU2_TR(0x6e0a36);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8a8a80ull))));
}
B6e0a3b:{NFSU2_TR(0x6e0a3b);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B6e0a3f:{NFSU2_TR(0x6e0a3f);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6e0a43:{NFSU2_TR(0x6e0a43);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4736),(U+16),4);
__builtin_memmove((R+4740),(U+20),4);
__builtin_memmove((R+4744),(U+24),4);
__builtin_memmove((R+4748),(U+28),4);
}
B6e0a46:{NFSU2_TR(0x6e0a46);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B6e0a4a:{NFSU2_TR(0x6e0a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0a4d:{NFSU2_TR(0x6e0a4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a51:{NFSU2_TR(0x6e0a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B6e0a57:{NFSU2_TR(0x6e0a57);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B6e0a5a:{NFSU2_TR(0x6e0a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a5e:{NFSU2_TR(0x6e0a5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B6e0a64:{NFSU2_TR(0x6e0a64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0a66:{NFSU2_TR(0x6e0a66);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
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
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a6a:{NFSU2_TR(0x6e0a6a);
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
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a6e:{NFSU2_TR(0x6e0a6e);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B6e0a71:{NFSU2_TR(0x6e0a71);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
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
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a75:{NFSU2_TR(0x6e0a75);
__builtin_memmove((R+4928),(R+4672),4);
__builtin_memmove((R+4932),(R+4676),4);
__builtin_memmove((R+4936),(R+4680),4);
__builtin_memmove((R+4940),(R+4684),4);
}
B6e0a78:{NFSU2_TR(0x6e0a78);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6e0a7b:{NFSU2_TR(0x6e0a7b);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B6e0a7e:{NFSU2_TR(0x6e0a7e);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4800))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4804))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4808))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4812))));
}
B6e0a81:{NFSU2_TR(0x6e0a81);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a85:{NFSU2_TR(0x6e0a85);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B6e0a8b:{NFSU2_TR(0x6e0a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0a8e:{NFSU2_TR(0x6e0a8e);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
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
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a92:{NFSU2_TR(0x6e0a92);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4812))));
}
B6e0a95:{NFSU2_TR(0x6e0a95);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B6e0a98:{NFSU2_TR(0x6e0a98);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((G+4),(U+0),4);
}
B6e0a9b:{NFSU2_TR(0x6e0a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a9f:{NFSU2_TR(0x6e0a9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0aa5:{NFSU2_TR(0x6e0aa5);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
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
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0aa9:{NFSU2_TR(0x6e0aa9);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6e0aac:{NFSU2_TR(0x6e0aac);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0ab0:{NFSU2_TR(0x6e0ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0ab6:{NFSU2_TR(0x6e0ab6);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
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
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0aba:{NFSU2_TR(0x6e0aba);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6e0abd:{NFSU2_TR(0x6e0abd);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B6e0ac0:{NFSU2_TR(0x6e0ac0);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B6e0ac3:{NFSU2_TR(0x6e0ac3);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B6e0ac6:{NFSU2_TR(0x6e0ac6);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+5056))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+5060))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+5064))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+5068))));
}
B6e0ac9:{NFSU2_TR(0x6e0ac9);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B6e0acc:{NFSU2_TR(0x6e0acc);
w2(R+4260,u16(0xffffull));
}
B6e0ace:{NFSU2_TR(0x6e0ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0ad2:{NFSU2_TR(0x6e0ad2);
u8 U[20];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6e0ad7:{NFSU2_TR(0x6e0ad7);
u8 U[20];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6e0adc:{NFSU2_TR(0x6e0adc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0ae0:{NFSU2_TR(0x6e0ae0);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e0ae4:{NFSU2_TR(0x6e0ae4);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0ae7:{NFSU2_TR(0x6e0ae7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0aea:{NFSU2_TR(0x6e0aea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0aee:{NFSU2_TR(0x6e0aee);
w4(G+4,u32(0x8ull));
}
B6e0af3:{NFSU2_TR(0x6e0af3);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((R+24),(U+0),4);
{[[clang::musttail]] return blk_6e0af7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0af7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0af7:L6e0af7:{bud-=1;NFSU2_TR(0x6e0af7);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_6e0af9(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0af7u);}goto L6e0af7;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0af9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0af9:L6e0af9:{bud-=12;NFSU2_TR(0x6e0af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0afd:{NFSU2_TR(0x6e0afd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b01:{NFSU2_TR(0x6e0b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0b04:{NFSU2_TR(0x6e0b04);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B6e0b07:{NFSU2_TR(0x6e0b07);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B6e0b09:{NFSU2_TR(0x6e0b09);
w1(F+0,carry<u32>(r4(R+12),u32(0x20ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6e0b0c:{NFSU2_TR(0x6e0b0c);
u8 U[6];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x1ull)));
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0b0d:{NFSU2_TR(0x6e0b0d);
w2(R+4260,u16(0xffffull));
}
B6e0b0f:{NFSU2_TR(0x6e0b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0b13:{NFSU2_TR(0x6e0b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0b17:{NFSU2_TR(0x6e0b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0b1b:{NFSU2_TR(0x6e0b1b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0a16u);}[[clang::musttail]] return blk_6e0a16(ARGS);}}
}
B6e0b21:L6e0b21:{bud-=2;NFSU2_TR(0x6e0b21);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0b25:{NFSU2_TR(0x6e0b25);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0b2aull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6dc520u);}[[clang::musttail]] return blk_6dc520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0b2a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0b2a:L6e0b2a:{bud-=2;NFSU2_TR(0x6e0b2a);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0b2f:{NFSU2_TR(0x6e0b2f);
{[[clang::musttail]] return blk_6e0d87(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0b34(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0b34:L6e0b34:{bud-=3;NFSU2_TR(0x6e0b34);
__builtin_memmove((G+0),gp(0x81cb54),4);
}
B6e0b39:{NFSU2_TR(0x6e0b39);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e0b3b:{NFSU2_TR(0x6e0b3b);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0caa(ARGS);}}
}
B6e0b41:L6e0b41:{bud-=2;NFSU2_TR(0x6e0b41);
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
B6e0b43:{NFSU2_TR(0x6e0b43);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0d62(ARGS);}}
}
B6e0b49:L6e0b49:{bud-=4;NFSU2_TR(0x6e0b49);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0b4d:{NFSU2_TR(0x6e0b4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b51:{NFSU2_TR(0x6e0b51);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0b54:{NFSU2_TR(0x6e0b54);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e0b58(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0b58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0b58:L6e0b58:{bud-=92;NFSU2_TR(0x6e0b58);
w2(R+4260,0xffffu);
}
B6e0b5a:{NFSU2_TR(0x6e0b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0b5c:{NFSU2_TR(0x6e0b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0b5f:{NFSU2_TR(0x6e0b5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0b63:{NFSU2_TR(0x6e0b63);
w8(R+4352,u64(r4(R+8)));
}
B6e0b66:{NFSU2_TR(0x6e0b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b69:{NFSU2_TR(0x6e0b69);
__builtin_memmove((R+4368),(R+4352),8);
}
B6e0b6c:{NFSU2_TR(0x6e0b6c);
__builtin_memmove((R+4372),(R+4352),4);
}
B6e0b6f:{NFSU2_TR(0x6e0b6f);
__builtin_memmove((R+4352),(R+4368),8);
}
B6e0b72:{NFSU2_TR(0x6e0b72);
w8(R+4368,u64(r4(R+8)));
}
B6e0b75:{NFSU2_TR(0x6e0b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b78:{NFSU2_TR(0x6e0b78);
__builtin_memmove((R+4384),(R+4368),8);
}
B6e0b7b:{NFSU2_TR(0x6e0b7b);
__builtin_memmove((R+4388),(R+4368),4);
}
B6e0b7e:{NFSU2_TR(0x6e0b7e);
__builtin_memmove((R+4368),(R+4384),8);
}
B6e0b81:{NFSU2_TR(0x6e0b81);
w8(R+4384,u64(r4(R+8)));
}
B6e0b84:{NFSU2_TR(0x6e0b84);
__builtin_memmove((R+4400),(R+4384),8);
}
B6e0b87:{NFSU2_TR(0x6e0b87);
__builtin_memmove((R+4404),(R+4384),4);
}
B6e0b8a:{NFSU2_TR(0x6e0b8a);
__builtin_memmove((R+4384),(R+4400),8);
}
B6e0b8d:{NFSU2_TR(0x6e0b8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B6e0b90:{NFSU2_TR(0x6e0b90);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8a8a80ull))));
}
B6e0b95:{NFSU2_TR(0x6e0b95);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0b99:{NFSU2_TR(0x6e0b99);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0b9d:{NFSU2_TR(0x6e0b9d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B6e0ba0:{NFSU2_TR(0x6e0ba0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0ba4:{NFSU2_TR(0x6e0ba4);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0ba8:{NFSU2_TR(0x6e0ba8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0bac:{NFSU2_TR(0x6e0bac);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B6e0bb0:{NFSU2_TR(0x6e0bb0);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6e0bb4:{NFSU2_TR(0x6e0bb4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6e0bb8:{NFSU2_TR(0x6e0bb8);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6e0bbc:{NFSU2_TR(0x6e0bbc);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B6e0bbf:{NFSU2_TR(0x6e0bbf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0bc3:{NFSU2_TR(0x6e0bc3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0bc7:{NFSU2_TR(0x6e0bc7);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0bcb:{NFSU2_TR(0x6e0bcb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6e0bcf:{NFSU2_TR(0x6e0bcf);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0bd3:{NFSU2_TR(0x6e0bd3);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6e0bd7:{NFSU2_TR(0x6e0bd7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6e0bdb:{NFSU2_TR(0x6e0bdb);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6e0bdf:{NFSU2_TR(0x6e0bdf);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6e0be3:{NFSU2_TR(0x6e0be3);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6e0be7:{NFSU2_TR(0x6e0be7);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0beb:{NFSU2_TR(0x6e0beb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0bef:{NFSU2_TR(0x6e0bef);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B6e0bf2:{NFSU2_TR(0x6e0bf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e0bf5:{NFSU2_TR(0x6e0bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0bf9:{NFSU2_TR(0x6e0bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0bfb:{NFSU2_TR(0x6e0bfb);
w8(R+4352,u64(r4(R+8)));
}
B6e0bfe:{NFSU2_TR(0x6e0bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0c01:{NFSU2_TR(0x6e0c01);
__builtin_memmove((R+4368),(R+4352),8);
}
B6e0c04:{NFSU2_TR(0x6e0c04);
__builtin_memmove((R+4372),(R+4352),4);
}
B6e0c07:{NFSU2_TR(0x6e0c07);
__builtin_memmove((R+4352),(R+4368),8);
}
B6e0c0a:{NFSU2_TR(0x6e0c0a);
w8(R+4368,u64(r4(R+8)));
}
B6e0c0d:{NFSU2_TR(0x6e0c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0c0f:{NFSU2_TR(0x6e0c0f);
__builtin_memmove((R+4384),(R+4368),8);
}
B6e0c12:{NFSU2_TR(0x6e0c12);
__builtin_memmove((R+4388),(R+4368),4);
}
B6e0c15:{NFSU2_TR(0x6e0c15);
__builtin_memmove((R+4368),(R+4384),8);
}
B6e0c18:{NFSU2_TR(0x6e0c18);
w8(R+4384,u64(r4(R+8)));
}
B6e0c1b:{NFSU2_TR(0x6e0c1b);
__builtin_memmove((R+4400),(R+4384),8);
}
B6e0c1e:{NFSU2_TR(0x6e0c1e);
__builtin_memmove((R+4404),(R+4384),4);
}
B6e0c21:{NFSU2_TR(0x6e0c21);
__builtin_memmove((R+4384),(R+4400),8);
}
B6e0c24:{NFSU2_TR(0x6e0c24);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0c28:{NFSU2_TR(0x6e0c28);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6e0c2c:{NFSU2_TR(0x6e0c2c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6e0c30:{NFSU2_TR(0x6e0c30);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6e0c34:{NFSU2_TR(0x6e0c34);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6e0c38:{NFSU2_TR(0x6e0c38);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6e0c3c:{NFSU2_TR(0x6e0c3c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0c40:{NFSU2_TR(0x6e0c40);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0c44:{NFSU2_TR(0x6e0c44);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6e0c48:{NFSU2_TR(0x6e0c48);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6e0c4c:{NFSU2_TR(0x6e0c4c);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6e0c50:{NFSU2_TR(0x6e0c50);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6e0c54:{NFSU2_TR(0x6e0c54);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6e0c58:{NFSU2_TR(0x6e0c58);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6e0c5c:{NFSU2_TR(0x6e0c5c);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6e0c60:{NFSU2_TR(0x6e0c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c64:{NFSU2_TR(0x6e0c64);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0c68:{NFSU2_TR(0x6e0c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0c6c:{NFSU2_TR(0x6e0c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0c70:{NFSU2_TR(0x6e0c70);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0c73:{NFSU2_TR(0x6e0c73);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c76:{NFSU2_TR(0x6e0c76);
w2(R+4260,0xffffu);
}
B6e0c78:{NFSU2_TR(0x6e0c78);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6e0c7b:{NFSU2_TR(0x6e0c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0c7f:{NFSU2_TR(0x6e0c7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0c83:{NFSU2_TR(0x6e0c83);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B6e0c85:{NFSU2_TR(0x6e0c85);
w1(F+0,carry<u32>(r4(R+24),u32(0x20ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6e0c88:{NFSU2_TR(0x6e0c88);
u8 U[6];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x1ull)));
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0c89:{NFSU2_TR(0x6e0c89);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c8d:{NFSU2_TR(0x6e0c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c91:{NFSU2_TR(0x6e0c91);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0b58u);}goto L6e0b58;}}
}
B6e0c97:L6e0c97:{bud-=2;NFSU2_TR(0x6e0c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0c9b:{NFSU2_TR(0x6e0c9b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0ca0ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6dc520u);}[[clang::musttail]] return blk_6dc520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0ca0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0ca0:L6e0ca0:{bud-=2;NFSU2_TR(0x6e0ca0);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0ca5:{NFSU2_TR(0x6e0ca5);
{[[clang::musttail]] return blk_6e0d87(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0caa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0caa:L6e0caa:{bud-=2;NFSU2_TR(0x6e0caa);
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
B6e0cac:{NFSU2_TR(0x6e0cac);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0d62(ARGS);}}
}
B6e0cb2:L6e0cb2:{bud-=4;NFSU2_TR(0x6e0cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0cb6:{NFSU2_TR(0x6e0cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0cba:{NFSU2_TR(0x6e0cba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0cbe:{NFSU2_TR(0x6e0cbe);
__builtin_memmove((R+28),(R+28),4);
{[[clang::musttail]] return blk_6e0cc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0cc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0cc0:L6e0cc0:{bud-=9;NFSU2_TR(0x6e0cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0cc3:{NFSU2_TR(0x6e0cc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B6e0cc6:{NFSU2_TR(0x6e0cc6);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8a8a80ull))));
}
B6e0ccb:{NFSU2_TR(0x6e0ccb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0ccc:{NFSU2_TR(0x6e0ccc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0ccd:{NFSU2_TR(0x6e0ccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0cce:{NFSU2_TR(0x6e0cce);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0cd2:{NFSU2_TR(0x6e0cd2);
__builtin_memmove((R+12),(G+4),4);
}
B6e0cd4:{NFSU2_TR(0x6e0cd4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0cd9ull));
{[[clang::musttail]] return blk_81cb20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0cd9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0cd9:L6e0cd9:{bud-=48;NFSU2_TR(0x6e0cd9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e0cdc:{NFSU2_TR(0x6e0cdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6e0cdf:{NFSU2_TR(0x6e0cdf);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B6e0ce2:{NFSU2_TR(0x6e0ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0ce6:{NFSU2_TR(0x6e0ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0cea:{NFSU2_TR(0x6e0cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0cee:{NFSU2_TR(0x6e0cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0cf2:{NFSU2_TR(0x6e0cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0cf6:{NFSU2_TR(0x6e0cf6);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0cf8:{NFSU2_TR(0x6e0cf8);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0cfb:{NFSU2_TR(0x6e0cfb);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0cfd:{NFSU2_TR(0x6e0cfd);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d00:{NFSU2_TR(0x6e0d00);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d02:{NFSU2_TR(0x6e0d02);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d04:{NFSU2_TR(0x6e0d04);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d07:{NFSU2_TR(0x6e0d07);
{u32 ea_=u32(r4(G+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d0a:{NFSU2_TR(0x6e0d0a);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d0d:{NFSU2_TR(0x6e0d0d);
{u32 ea_=u32(r4(G+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d10:{NFSU2_TR(0x6e0d10);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d13:{NFSU2_TR(0x6e0d13);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d16:{NFSU2_TR(0x6e0d16);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d18:{NFSU2_TR(0x6e0d18);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B6e0d1a:{NFSU2_TR(0x6e0d1a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B6e0d1c:{NFSU2_TR(0x6e0d1c);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B6e0d1e:{NFSU2_TR(0x6e0d1e);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d21:{NFSU2_TR(0x6e0d21);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d24:{NFSU2_TR(0x6e0d24);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d27:{NFSU2_TR(0x6e0d27);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d2a:{NFSU2_TR(0x6e0d2a);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d2d:{NFSU2_TR(0x6e0d2d);
{u32 ea_=u32(r4(G+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d30:{NFSU2_TR(0x6e0d30);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d32:{NFSU2_TR(0x6e0d32);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B6e0d34:{NFSU2_TR(0x6e0d34);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B6e0d36:{NFSU2_TR(0x6e0d36);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B6e0d38:{NFSU2_TR(0x6e0d38);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d3a:{NFSU2_TR(0x6e0d3a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e0d3c:{NFSU2_TR(0x6e0d3c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d3e:{NFSU2_TR(0x6e0d3e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0d40:{NFSU2_TR(0x6e0d40);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0d43:{NFSU2_TR(0x6e0d43);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0d46:{NFSU2_TR(0x6e0d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0d4a:{NFSU2_TR(0x6e0d4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0d4e:{NFSU2_TR(0x6e0d4e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B6e0d50:{NFSU2_TR(0x6e0d50);
w1(F+0,carry<u32>(r4(R+24),u32(0x20ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6e0d53:{NFSU2_TR(0x6e0d53);
u8 U[6];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x1ull)));
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0d54:{NFSU2_TR(0x6e0d54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0d58:{NFSU2_TR(0x6e0d58);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0d5c:{NFSU2_TR(0x6e0d5c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0cc0u);}[[clang::musttail]] return blk_6e0cc0(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0d62(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0d62(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0d62:L6e0d62:{bud-=2;NFSU2_TR(0x6e0d62);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0d66:{NFSU2_TR(0x6e0d66);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0d6bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc520u);}[[clang::musttail]] return blk_6dc520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0d6b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0d6b:L6e0d6b:{bud-=2;NFSU2_TR(0x6e0d6b);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0d70:{NFSU2_TR(0x6e0d70);
{[[clang::musttail]] return blk_6e0d87(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0d72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0d72:L6e0d72:{bud-=5;NFSU2_TR(0x6e0d72);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0d77:{NFSU2_TR(0x6e0d77);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0d7a:{NFSU2_TR(0x6e0d7a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0d7d:{NFSU2_TR(0x6e0d7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0d81:{NFSU2_TR(0x6e0d81);
__builtin_memmove(gp(0x8a8a30),(R+8),4);
{[[clang::musttail]] return blk_6e0d87(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0d87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0d87:L6e0d87:{bud-=5;NFSU2_TR(0x6e0d87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0d8b:{NFSU2_TR(0x6e0d8b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0d8e:{NFSU2_TR(0x6e0d8e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0d8f:{NFSU2_TR(0x6e0d8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0d90:{NFSU2_TR(0x6e0d90);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0d95ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dbfb0u);}[[clang::musttail]] return blk_6dbfb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0d95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0d95:L6e0d95:{bud-=7;NFSU2_TR(0x6e0d95);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x8ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0d98:{NFSU2_TR(0x6e0d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0d99:{NFSU2_TR(0x6e0d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0d9a:{NFSU2_TR(0x6e0d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e0d9b:{NFSU2_TR(0x6e0d9b);
__builtin_memmove((G+16),(R+20),4);
}
B6e0d9d:{NFSU2_TR(0x6e0d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e0d9e:{NFSU2_TR(0x6e0d9e);
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
PN u32 blk_6e0da0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0da0:L6e0da0:{bud-=8;NFSU2_TR(0x6e0da0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0da1:{NFSU2_TR(0x6e0da1);
__builtin_memmove((R+20),(G+16),4);
}
B6e0da3:{NFSU2_TR(0x6e0da3);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B6e0da6:{NFSU2_TR(0x6e0da6);
u8 U[6];
w1(F+0,u8((r4(G+16))<(u32(0x14ull))));
w1(F+11,sborrow<u32>(r4(G+16),u32(0x14ull)));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x14ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0da9:{NFSU2_TR(0x6e0da9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0daa:{NFSU2_TR(0x6e0daa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0dab:{NFSU2_TR(0x6e0dab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0dac:{NFSU2_TR(0x6e0dac);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0db1ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6dc330u);}[[clang::musttail]] return blk_6dc330(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0db1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0db1:L6e0db1:{bud-=2;NFSU2_TR(0x6e0db1);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e0db3:{NFSU2_TR(0x6e0db3);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0fcd(ARGS);}}
}
B6e0db9:L6e0db9:{bud-=9;NFSU2_TR(0x6e0db9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0dbb:{NFSU2_TR(0x6e0dbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e0dbf:{NFSU2_TR(0x6e0dbf);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0dc0:{NFSU2_TR(0x6e0dc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6e0dc4:{NFSU2_TR(0x6e0dc4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0dc5:{NFSU2_TR(0x6e0dc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e0dc9:{NFSU2_TR(0x6e0dc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0dca:{NFSU2_TR(0x6e0dca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e0dd2:{NFSU2_TR(0x6e0dd2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0dd7ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0690u);}[[clang::musttail]] return blk_6e0690(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0dd7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0dd7:L6e0dd7:{bud-=12;NFSU2_TR(0x6e0dd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0ddb:{NFSU2_TR(0x6e0ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0dde:{NFSU2_TR(0x6e0dde);
__builtin_memmove((G+4),(R+24),4);
}
B6e0de0:{NFSU2_TR(0x6e0de0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B6e0de3:{NFSU2_TR(0x6e0de3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6e0de6:{NFSU2_TR(0x6e0de6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0de7:{NFSU2_TR(0x6e0de7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6e0deb:{NFSU2_TR(0x6e0deb);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0dec:{NFSU2_TR(0x6e0dec);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0ded:{NFSU2_TR(0x6e0ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0df1:{NFSU2_TR(0x6e0df1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0df3:{NFSU2_TR(0x6e0df3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0df8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dcc00u);}[[clang::musttail]] return blk_6dcc00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0df8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0df8:L6e0df8:{bud-=6;NFSU2_TR(0x6e0df8);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0dfe:{NFSU2_TR(0x6e0dfe);
__builtin_memmove(gp(0x8a8a30),(G+0),4);
}
B6e0e03:{NFSU2_TR(0x6e0e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e06:{NFSU2_TR(0x6e0e06);
__builtin_memmove((G+0),gp(0x81cb38),4);
}
B6e0e0b:{NFSU2_TR(0x6e0e0b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e0e0d:{NFSU2_TR(0x6e0e0d);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0ead(ARGS);}}
}
B6e0e13:L6e0e13:{bud-=2;NFSU2_TR(0x6e0e13);
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
B6e0e15:{NFSU2_TR(0x6e0e15);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0fbd(ARGS);}}
}
B6e0e1b:L6e0e1b:{bud-=2;NFSU2_TR(0x6e0e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0e1e:{NFSU2_TR(0x6e0e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_6e0e22(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0e22(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0e22:L6e0e22:{bud-=35;NFSU2_TR(0x6e0e22);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0e25:{NFSU2_TR(0x6e0e25);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0e28:{NFSU2_TR(0x6e0e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e2c:{NFSU2_TR(0x6e0e2c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0e2f:{NFSU2_TR(0x6e0e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0e35:{NFSU2_TR(0x6e0e35);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B6e0e38:{NFSU2_TR(0x6e0e38);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8a8a80ull))));
}
B6e0e3d:{NFSU2_TR(0x6e0e3d);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6e0e41:{NFSU2_TR(0x6e0e41);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6e0e45:{NFSU2_TR(0x6e0e45);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B6e0e48:{NFSU2_TR(0x6e0e48);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
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
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0e4c:{NFSU2_TR(0x6e0e4c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6e0e4f:{NFSU2_TR(0x6e0e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e53:{NFSU2_TR(0x6e0e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e0e55:{NFSU2_TR(0x6e0e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0e5b:{NFSU2_TR(0x6e0e5b);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B6e0e5e:{NFSU2_TR(0x6e0e5e);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6e0e62:{NFSU2_TR(0x6e0e62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0e66:{NFSU2_TR(0x6e0e66);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
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
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0e6a:{NFSU2_TR(0x6e0e6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e6e:{NFSU2_TR(0x6e0e6e);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6e0e71:{NFSU2_TR(0x6e0e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0e77:{NFSU2_TR(0x6e0e77);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
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
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0e7b:{NFSU2_TR(0x6e0e7b);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B6e0e7e:{NFSU2_TR(0x6e0e7e);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4684))));
}
B6e0e81:{NFSU2_TR(0x6e0e81);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B6e0e84:{NFSU2_TR(0x6e0e84);
u8 U[16];
__builtin_memmove((U+0),(R+4800),16);
__builtin_memmove(gp(u32(r4(G+0))),(U+0),16);
}
B6e0e87:{NFSU2_TR(0x6e0e87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0e8b:{NFSU2_TR(0x6e0e8b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B6e0e8d:{NFSU2_TR(0x6e0e8d);
w1(F+0,carry<u32>(r4(G+4),r4(R+8)));
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B6e0e8f:{NFSU2_TR(0x6e0e8f);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0e90:{NFSU2_TR(0x6e0e90);
w2(R+4260,u16(0xffffull));
}
B6e0e92:{NFSU2_TR(0x6e0e92);
w2(R+4260,u16(0xffffull));
}
B6e0e94:{NFSU2_TR(0x6e0e94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e98:{NFSU2_TR(0x6e0e98);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0e22u);}goto L6e0e22;}}
}
B6e0e9a:L6e0e9a:{bud-=2;NFSU2_TR(0x6e0e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0e9e:{NFSU2_TR(0x6e0e9e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0ea3ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6dc520u);}[[clang::musttail]] return blk_6dc520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0ea3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0ea3:L6e0ea3:{bud-=2;NFSU2_TR(0x6e0ea3);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0ea8:{NFSU2_TR(0x6e0ea8);
{[[clang::musttail]] return blk_6e0fe2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0ead(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0ead:L6e0ead:{bud-=3;NFSU2_TR(0x6e0ead);
__builtin_memmove((G+0),gp(0x81cb54),4);
}
B6e0eb2:{NFSU2_TR(0x6e0eb2);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e0eb4:{NFSU2_TR(0x6e0eb4);
if(r1(F+6)){{[[clang::musttail]] return blk_6e0f81(ARGS);}}
}
B6e0eba:L6e0eba:{bud-=2;NFSU2_TR(0x6e0eba);
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
B6e0ebc:{NFSU2_TR(0x6e0ebc);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0fbd(ARGS);}}
}
B6e0ec2:L6e0ec2:{bud-=1;NFSU2_TR(0x6e0ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_6e0ec6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0ec6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0ec6:L6e0ec6:{bud-=50;NFSU2_TR(0x6e0ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e0ec8:{NFSU2_TR(0x6e0ec8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e0ecb:{NFSU2_TR(0x6e0ecb);
w2(R+4260,0xffffu);
}
B6e0ecd:{NFSU2_TR(0x6e0ecd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0ed1:{NFSU2_TR(0x6e0ed1);
w8(R+4352,u64(r4(R+12)));
}
B6e0ed4:{NFSU2_TR(0x6e0ed4);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0ed7:{NFSU2_TR(0x6e0ed7);
__builtin_memmove((R+4368),(R+4352),8);
}
B6e0eda:{NFSU2_TR(0x6e0eda);
__builtin_memmove((R+4372),(R+4352),4);
}
B6e0edd:{NFSU2_TR(0x6e0edd);
__builtin_memmove((R+4352),(R+4368),8);
}
B6e0ee0:{NFSU2_TR(0x6e0ee0);
w8(R+4368,u64(r4(R+12)));
}
B6e0ee3:{NFSU2_TR(0x6e0ee3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0ee6:{NFSU2_TR(0x6e0ee6);
__builtin_memmove((R+4384),(R+4368),8);
}
B6e0ee9:{NFSU2_TR(0x6e0ee9);
__builtin_memmove((R+4388),(R+4368),4);
}
B6e0eec:{NFSU2_TR(0x6e0eec);
__builtin_memmove((R+4368),(R+4384),8);
}
B6e0eef:{NFSU2_TR(0x6e0eef);
w8(R+4384,u64(r4(R+12)));
}
B6e0ef2:{NFSU2_TR(0x6e0ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0ef5:{NFSU2_TR(0x6e0ef5);
__builtin_memmove((R+4400),(R+4384),8);
}
B6e0ef8:{NFSU2_TR(0x6e0ef8);
__builtin_memmove((R+4404),(R+4384),4);
}
B6e0efb:{NFSU2_TR(0x6e0efb);
__builtin_memmove((R+4384),(R+4400),8);
}
B6e0efe:{NFSU2_TR(0x6e0efe);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B6e0f01:{NFSU2_TR(0x6e0f01);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8a8a80ull))));
}
B6e0f06:{NFSU2_TR(0x6e0f06);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0f0a:{NFSU2_TR(0x6e0f0a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0f0e:{NFSU2_TR(0x6e0f0e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B6e0f11:{NFSU2_TR(0x6e0f11);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0f15:{NFSU2_TR(0x6e0f15);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0f19:{NFSU2_TR(0x6e0f19);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0f1d:{NFSU2_TR(0x6e0f1d);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B6e0f21:{NFSU2_TR(0x6e0f21);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6e0f25:{NFSU2_TR(0x6e0f25);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6e0f29:{NFSU2_TR(0x6e0f29);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6e0f2d:{NFSU2_TR(0x6e0f2d);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B6e0f30:{NFSU2_TR(0x6e0f30);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0f34:{NFSU2_TR(0x6e0f34);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0f38:{NFSU2_TR(0x6e0f38);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0f3c:{NFSU2_TR(0x6e0f3c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6e0f40:{NFSU2_TR(0x6e0f40);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0f44:{NFSU2_TR(0x6e0f44);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6e0f48:{NFSU2_TR(0x6e0f48);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6e0f4c:{NFSU2_TR(0x6e0f4c);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6e0f50:{NFSU2_TR(0x6e0f50);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6e0f54:{NFSU2_TR(0x6e0f54);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6e0f58:{NFSU2_TR(0x6e0f58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0f5c:{NFSU2_TR(0x6e0f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0f60:{NFSU2_TR(0x6e0f60);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6e0f62:{NFSU2_TR(0x6e0f62);
w1(F+0,carry<u32>(r4(G+4),r4(R+12)));
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B6e0f64:{NFSU2_TR(0x6e0f64);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0f65:{NFSU2_TR(0x6e0f65);
w2(R+4260,0xffffu);
}
B6e0f67:{NFSU2_TR(0x6e0f67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0f6b:{NFSU2_TR(0x6e0f6b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0ec6u);}goto L6e0ec6;}}
}
B6e0f71:L6e0f71:{bud-=2;NFSU2_TR(0x6e0f71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0f75:{NFSU2_TR(0x6e0f75);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0f7aull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x6dc520u);}[[clang::musttail]] return blk_6dc520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0f7a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0f7a:L6e0f7a:{bud-=2;NFSU2_TR(0x6e0f7a);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0f7f:{NFSU2_TR(0x6e0f7f);
{[[clang::musttail]] return blk_6e0fe2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0f81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0f81:L6e0f81:{bud-=2;NFSU2_TR(0x6e0f81);
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
B6e0f83:{NFSU2_TR(0x6e0f83);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0fbd(ARGS);}}
}
B6e0f85:L6e0f85:{bud-=3;NFSU2_TR(0x6e0f85);
__builtin_memmove((R+12),(R+24),4);
}
B6e0f87:{NFSU2_TR(0x6e0f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0f8b:{NFSU2_TR(0x6e0f8b);
{[[clang::musttail]] return blk_6e0f90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0f90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0f90:L6e0f90:{bud-=8;NFSU2_TR(0x6e0f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0f93:{NFSU2_TR(0x6e0f93);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0f97:{NFSU2_TR(0x6e0f97);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e0f9a:{NFSU2_TR(0x6e0f9a);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0f9b:{NFSU2_TR(0x6e0f9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8a8a80ull))));
}
B6e0fa1:{NFSU2_TR(0x6e0fa1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0fa2:{NFSU2_TR(0x6e0fa2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0fa3:{NFSU2_TR(0x6e0fa3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0fa8ull));
{[[clang::musttail]] return blk_81cb20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0fa8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0fa8:L6e0fa8:{bud-=8;NFSU2_TR(0x6e0fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0fac:{NFSU2_TR(0x6e0fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0faf:{NFSU2_TR(0x6e0faf);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B6e0fb1:{NFSU2_TR(0x6e0fb1);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B6e0fb4:{NFSU2_TR(0x6e0fb4);
w1(F+0,carry<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6e0fb6:{NFSU2_TR(0x6e0fb6);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0fb7:{NFSU2_TR(0x6e0fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0fbb:{NFSU2_TR(0x6e0fbb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e0f90u);}[[clang::musttail]] return blk_6e0f90(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e0fbd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0fbd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0fbd:L6e0fbd:{bud-=2;NFSU2_TR(0x6e0fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0fc1:{NFSU2_TR(0x6e0fc1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0fc6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dc520u);}[[clang::musttail]] return blk_6dc520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0fc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0fc6:L6e0fc6:{bud-=2;NFSU2_TR(0x6e0fc6);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0fcb:{NFSU2_TR(0x6e0fcb);
{[[clang::musttail]] return blk_6e0fe2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0fcd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0fcd:L6e0fcd:{bud-=5;NFSU2_TR(0x6e0fcd);
__builtin_memmove((G+0),gp(0x8a7a10),4);
}
B6e0fd2:{NFSU2_TR(0x6e0fd2);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0fd5:{NFSU2_TR(0x6e0fd5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0fd8:{NFSU2_TR(0x6e0fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0fdc:{NFSU2_TR(0x6e0fdc);
__builtin_memmove(gp(0x8a8a30),(R+8),4);
{[[clang::musttail]] return blk_6e0fe2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0fe2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0fe2:L6e0fe2:{bud-=5;NFSU2_TR(0x6e0fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e0fe6:{NFSU2_TR(0x6e0fe6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0fe9:{NFSU2_TR(0x6e0fe9);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0fea:{NFSU2_TR(0x6e0fea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e0feb:{NFSU2_TR(0x6e0feb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e0ff0ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6dbfb0u);}[[clang::musttail]] return blk_6dbfb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e0ff0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e0ff0:L6e0ff0:{bud-=7;NFSU2_TR(0x6e0ff0);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x8ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0ff3:{NFSU2_TR(0x6e0ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0ff4:{NFSU2_TR(0x6e0ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0ff5:{NFSU2_TR(0x6e0ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e0ff6:{NFSU2_TR(0x6e0ff6);
__builtin_memmove((G+16),(R+20),4);
}
B6e0ff8:{NFSU2_TR(0x6e0ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e0ff9:{NFSU2_TR(0x6e0ff9);
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
PN u32 ent_6e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x6e0004:[[clang::musttail]] return blk_6e0004(c,a4,a0,a1,bud);
case 0x6e006e:[[clang::musttail]] return blk_6e006e(c,a4,a0,a1,bud);
case 0x6e00e7:[[clang::musttail]] return blk_6e00e7(c,a4,a0,a1,bud);
case 0x6e0117:[[clang::musttail]] return blk_6e0117(c,a4,a0,a1,bud);
case 0x6e0143:[[clang::musttail]] return blk_6e0143(c,a4,a0,a1,bud);
case 0x6e0145:[[clang::musttail]] return blk_6e0145(c,a4,a0,a1,bud);
case 0x6e0147:[[clang::musttail]] return blk_6e0147(c,a4,a0,a1,bud);
case 0x6e016f:[[clang::musttail]] return blk_6e016f(c,a4,a0,a1,bud);
case 0x6e017b:[[clang::musttail]] return blk_6e017b(c,a4,a0,a1,bud);
case 0x6e0187:[[clang::musttail]] return blk_6e0187(c,a4,a0,a1,bud);
case 0x6e01ab:[[clang::musttail]] return blk_6e01ab(c,a4,a0,a1,bud);
case 0x6e01dc:[[clang::musttail]] return blk_6e01dc(c,a4,a0,a1,bud);
case 0x6e0204:[[clang::musttail]] return blk_6e0204(c,a4,a0,a1,bud);
case 0x6e0210:[[clang::musttail]] return blk_6e0210(c,a4,a0,a1,bud);
case 0x6e021c:[[clang::musttail]] return blk_6e021c(c,a4,a0,a1,bud);
case 0x6e0228:[[clang::musttail]] return blk_6e0228(c,a4,a0,a1,bud);
case 0x6e0253:[[clang::musttail]] return blk_6e0253(c,a4,a0,a1,bud);
case 0x6e025a:[[clang::musttail]] return blk_6e025a(c,a4,a0,a1,bud);
case 0x6e0267:[[clang::musttail]] return blk_6e0267(c,a4,a0,a1,bud);
case 0x6e0279:[[clang::musttail]] return blk_6e0279(c,a4,a0,a1,bud);
case 0x6e027f:[[clang::musttail]] return blk_6e027f(c,a4,a0,a1,bud);
case 0x6e0289:[[clang::musttail]] return blk_6e0289(c,a4,a0,a1,bud);
case 0x6e02ab:[[clang::musttail]] return blk_6e02ab(c,a4,a0,a1,bud);
case 0x6e02bc:[[clang::musttail]] return blk_6e02bc(c,a4,a0,a1,bud);
case 0x6e02ca:[[clang::musttail]] return blk_6e02ca(c,a4,a0,a1,bud);
case 0x6e02e0:[[clang::musttail]] return blk_6e02e0(c,a4,a0,a1,bud);
case 0x6e0323:[[clang::musttail]] return blk_6e0323(c,a4,a0,a1,bud);
case 0x6e0326:[[clang::musttail]] return blk_6e0326(c,a4,a0,a1,bud);
case 0x6e0342:[[clang::musttail]] return blk_6e0342(c,a4,a0,a1,bud);
case 0x6e034e:[[clang::musttail]] return blk_6e034e(c,a4,a0,a1,bud);
case 0x6e0377:[[clang::musttail]] return blk_6e0377(c,a4,a0,a1,bud);
case 0x6e039a:[[clang::musttail]] return blk_6e039a(c,a4,a0,a1,bud);
case 0x6e03a5:[[clang::musttail]] return blk_6e03a5(c,a4,a0,a1,bud);
case 0x6e03b0:[[clang::musttail]] return blk_6e03b0(c,a4,a0,a1,bud);
case 0x6e03d2:[[clang::musttail]] return blk_6e03d2(c,a4,a0,a1,bud);
case 0x6e03e4:[[clang::musttail]] return blk_6e03e4(c,a4,a0,a1,bud);
case 0x6e03f7:[[clang::musttail]] return blk_6e03f7(c,a4,a0,a1,bud);
case 0x6e040a:[[clang::musttail]] return blk_6e040a(c,a4,a0,a1,bud);
case 0x6e0412:[[clang::musttail]] return blk_6e0412(c,a4,a0,a1,bud);
case 0x6e0420:[[clang::musttail]] return blk_6e0420(c,a4,a0,a1,bud);
case 0x6e0450:[[clang::musttail]] return blk_6e0450(c,a4,a0,a1,bud);
case 0x6e0461:[[clang::musttail]] return blk_6e0461(c,a4,a0,a1,bud);
case 0x6e0474:[[clang::musttail]] return blk_6e0474(c,a4,a0,a1,bud);
case 0x6e0483:[[clang::musttail]] return blk_6e0483(c,a4,a0,a1,bud);
case 0x6e0490:[[clang::musttail]] return blk_6e0490(c,a4,a0,a1,bud);
case 0x6e049b:[[clang::musttail]] return blk_6e049b(c,a4,a0,a1,bud);
case 0x6e04c0:[[clang::musttail]] return blk_6e04c0(c,a4,a0,a1,bud);
case 0x6e04d4:[[clang::musttail]] return blk_6e04d4(c,a4,a0,a1,bud);
case 0x6e04dd:[[clang::musttail]] return blk_6e04dd(c,a4,a0,a1,bud);
case 0x6e04f0:[[clang::musttail]] return blk_6e04f0(c,a4,a0,a1,bud);
case 0x6e0520:[[clang::musttail]] return blk_6e0520(c,a4,a0,a1,bud);
case 0x6e0531:[[clang::musttail]] return blk_6e0531(c,a4,a0,a1,bud);
case 0x6e0544:[[clang::musttail]] return blk_6e0544(c,a4,a0,a1,bud);
case 0x6e0553:[[clang::musttail]] return blk_6e0553(c,a4,a0,a1,bud);
case 0x6e0560:[[clang::musttail]] return blk_6e0560(c,a4,a0,a1,bud);
case 0x6e056b:[[clang::musttail]] return blk_6e056b(c,a4,a0,a1,bud);
case 0x6e0590:[[clang::musttail]] return blk_6e0590(c,a4,a0,a1,bud);
case 0x6e05a4:[[clang::musttail]] return blk_6e05a4(c,a4,a0,a1,bud);
case 0x6e05ad:[[clang::musttail]] return blk_6e05ad(c,a4,a0,a1,bud);
case 0x6e05c0:[[clang::musttail]] return blk_6e05c0(c,a4,a0,a1,bud);
case 0x6e05f0:[[clang::musttail]] return blk_6e05f0(c,a4,a0,a1,bud);
case 0x6e0601:[[clang::musttail]] return blk_6e0601(c,a4,a0,a1,bud);
case 0x6e0614:[[clang::musttail]] return blk_6e0614(c,a4,a0,a1,bud);
case 0x6e0623:[[clang::musttail]] return blk_6e0623(c,a4,a0,a1,bud);
case 0x6e0630:[[clang::musttail]] return blk_6e0630(c,a4,a0,a1,bud);
case 0x6e063b:[[clang::musttail]] return blk_6e063b(c,a4,a0,a1,bud);
case 0x6e0660:[[clang::musttail]] return blk_6e0660(c,a4,a0,a1,bud);
case 0x6e0674:[[clang::musttail]] return blk_6e0674(c,a4,a0,a1,bud);
case 0x6e067d:[[clang::musttail]] return blk_6e067d(c,a4,a0,a1,bud);
case 0x6e0690:[[clang::musttail]] return blk_6e0690(c,a4,a0,a1,bud);
case 0x6e06a5:[[clang::musttail]] return blk_6e06a5(c,a4,a0,a1,bud);
case 0x6e06c9:[[clang::musttail]] return blk_6e06c9(c,a4,a0,a1,bud);
case 0x6e06f0:[[clang::musttail]] return blk_6e06f0(c,a4,a0,a1,bud);
case 0x6e06f5:[[clang::musttail]] return blk_6e06f5(c,a4,a0,a1,bud);
case 0x6e0710:[[clang::musttail]] return blk_6e0710(c,a4,a0,a1,bud);
case 0x6e073f:[[clang::musttail]] return blk_6e073f(c,a4,a0,a1,bud);
case 0x6e075b:[[clang::musttail]] return blk_6e075b(c,a4,a0,a1,bud);
case 0x6e075f:[[clang::musttail]] return blk_6e075f(c,a4,a0,a1,bud);
case 0x6e0760:[[clang::musttail]] return blk_6e0760(c,a4,a0,a1,bud);
case 0x6e0765:[[clang::musttail]] return blk_6e0765(c,a4,a0,a1,bud);
case 0x6e0780:[[clang::musttail]] return blk_6e0780(c,a4,a0,a1,bud);
case 0x6e07af:[[clang::musttail]] return blk_6e07af(c,a4,a0,a1,bud);
case 0x6e07cb:[[clang::musttail]] return blk_6e07cb(c,a4,a0,a1,bud);
case 0x6e07cf:[[clang::musttail]] return blk_6e07cf(c,a4,a0,a1,bud);
case 0x6e07d0:[[clang::musttail]] return blk_6e07d0(c,a4,a0,a1,bud);
case 0x6e07d5:[[clang::musttail]] return blk_6e07d5(c,a4,a0,a1,bud);
case 0x6e07f0:[[clang::musttail]] return blk_6e07f0(c,a4,a0,a1,bud);
case 0x6e081f:[[clang::musttail]] return blk_6e081f(c,a4,a0,a1,bud);
case 0x6e083b:[[clang::musttail]] return blk_6e083b(c,a4,a0,a1,bud);
case 0x6e083f:[[clang::musttail]] return blk_6e083f(c,a4,a0,a1,bud);
case 0x6e0840:[[clang::musttail]] return blk_6e0840(c,a4,a0,a1,bud);
case 0x6e0845:[[clang::musttail]] return blk_6e0845(c,a4,a0,a1,bud);
case 0x6e0877:[[clang::musttail]] return blk_6e0877(c,a4,a0,a1,bud);
case 0x6e0894:[[clang::musttail]] return blk_6e0894(c,a4,a0,a1,bud);
case 0x6e089b:[[clang::musttail]] return blk_6e089b(c,a4,a0,a1,bud);
case 0x6e08a3:[[clang::musttail]] return blk_6e08a3(c,a4,a0,a1,bud);
case 0x6e08b0:[[clang::musttail]] return blk_6e08b0(c,a4,a0,a1,bud);
case 0x6e08b5:[[clang::musttail]] return blk_6e08b5(c,a4,a0,a1,bud);
case 0x6e08e7:[[clang::musttail]] return blk_6e08e7(c,a4,a0,a1,bud);
case 0x6e0904:[[clang::musttail]] return blk_6e0904(c,a4,a0,a1,bud);
case 0x6e090b:[[clang::musttail]] return blk_6e090b(c,a4,a0,a1,bud);
case 0x6e0913:[[clang::musttail]] return blk_6e0913(c,a4,a0,a1,bud);
case 0x6e0920:[[clang::musttail]] return blk_6e0920(c,a4,a0,a1,bud);
case 0x6e0925:[[clang::musttail]] return blk_6e0925(c,a4,a0,a1,bud);
case 0x6e0957:[[clang::musttail]] return blk_6e0957(c,a4,a0,a1,bud);
case 0x6e0974:[[clang::musttail]] return blk_6e0974(c,a4,a0,a1,bud);
case 0x6e097b:[[clang::musttail]] return blk_6e097b(c,a4,a0,a1,bud);
case 0x6e0983:[[clang::musttail]] return blk_6e0983(c,a4,a0,a1,bud);
case 0x6e0990:[[clang::musttail]] return blk_6e0990(c,a4,a0,a1,bud);
case 0x6e09a1:[[clang::musttail]] return blk_6e09a1(c,a4,a0,a1,bud);
case 0x6e09c7:[[clang::musttail]] return blk_6e09c7(c,a4,a0,a1,bud);
case 0x6e09e8:[[clang::musttail]] return blk_6e09e8(c,a4,a0,a1,bud);
case 0x6e0a16:[[clang::musttail]] return blk_6e0a16(c,a4,a0,a1,bud);
case 0x6e0af7:[[clang::musttail]] return blk_6e0af7(c,a4,a0,a1,bud);
case 0x6e0af9:[[clang::musttail]] return blk_6e0af9(c,a4,a0,a1,bud);
case 0x6e0b2a:[[clang::musttail]] return blk_6e0b2a(c,a4,a0,a1,bud);
case 0x6e0b34:[[clang::musttail]] return blk_6e0b34(c,a4,a0,a1,bud);
case 0x6e0b58:[[clang::musttail]] return blk_6e0b58(c,a4,a0,a1,bud);
case 0x6e0ca0:[[clang::musttail]] return blk_6e0ca0(c,a4,a0,a1,bud);
case 0x6e0caa:[[clang::musttail]] return blk_6e0caa(c,a4,a0,a1,bud);
case 0x6e0cc0:[[clang::musttail]] return blk_6e0cc0(c,a4,a0,a1,bud);
case 0x6e0cd9:[[clang::musttail]] return blk_6e0cd9(c,a4,a0,a1,bud);
case 0x6e0d62:[[clang::musttail]] return blk_6e0d62(c,a4,a0,a1,bud);
case 0x6e0d6b:[[clang::musttail]] return blk_6e0d6b(c,a4,a0,a1,bud);
case 0x6e0d72:[[clang::musttail]] return blk_6e0d72(c,a4,a0,a1,bud);
case 0x6e0d87:[[clang::musttail]] return blk_6e0d87(c,a4,a0,a1,bud);
case 0x6e0d95:[[clang::musttail]] return blk_6e0d95(c,a4,a0,a1,bud);
case 0x6e0da0:[[clang::musttail]] return blk_6e0da0(c,a4,a0,a1,bud);
case 0x6e0db1:[[clang::musttail]] return blk_6e0db1(c,a4,a0,a1,bud);
case 0x6e0dd7:[[clang::musttail]] return blk_6e0dd7(c,a4,a0,a1,bud);
case 0x6e0df8:[[clang::musttail]] return blk_6e0df8(c,a4,a0,a1,bud);
case 0x6e0e22:[[clang::musttail]] return blk_6e0e22(c,a4,a0,a1,bud);
case 0x6e0ea3:[[clang::musttail]] return blk_6e0ea3(c,a4,a0,a1,bud);
case 0x6e0ead:[[clang::musttail]] return blk_6e0ead(c,a4,a0,a1,bud);
case 0x6e0ec6:[[clang::musttail]] return blk_6e0ec6(c,a4,a0,a1,bud);
case 0x6e0f7a:[[clang::musttail]] return blk_6e0f7a(c,a4,a0,a1,bud);
case 0x6e0f81:[[clang::musttail]] return blk_6e0f81(c,a4,a0,a1,bud);
case 0x6e0f90:[[clang::musttail]] return blk_6e0f90(c,a4,a0,a1,bud);
case 0x6e0fa8:[[clang::musttail]] return blk_6e0fa8(c,a4,a0,a1,bud);
case 0x6e0fbd:[[clang::musttail]] return blk_6e0fbd(c,a4,a0,a1,bud);
case 0x6e0fc6:[[clang::musttail]] return blk_6e0fc6(c,a4,a0,a1,bud);
case 0x6e0fcd:[[clang::musttail]] return blk_6e0fcd(c,a4,a0,a1,bud);
case 0x6e0fe2:[[clang::musttail]] return blk_6e0fe2(c,a4,a0,a1,bud);
case 0x6e0ff0:[[clang::musttail]] return blk_6e0ff0(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_6e0(Cpu& c){u8* R=c.regs.data();return ent_6e0(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
