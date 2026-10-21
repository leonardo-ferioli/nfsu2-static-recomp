#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4912ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6533e2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6535fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6536ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75c6c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75c6da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75c7b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75c80a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75e058(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75e0af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_760da0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_760ddb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76115e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_763e79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_763eac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_763ed0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_763f3c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764058(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76408e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764097(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7640a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7640ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7640d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76412d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764189(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764196(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7641bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7641ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7641d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7641f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764203(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764235(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764246(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76424a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764251(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764274(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764284(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764292(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7642c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7642cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7642db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7642eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7642f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76431f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764322(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764367(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764378(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764385(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764386(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764391(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7643d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7643d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7643dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7643e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7643f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7643f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7643ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764403(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76440b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764412(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764415(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76443e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764458(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764471(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764476(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764482(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764497(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76449a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7644fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76450c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76452b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764530(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76454d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764557(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76455a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764577(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764582(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76458b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764592(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7645b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7645c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7645dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7645f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764623(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764632(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764649(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76465c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764669(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76466b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76469c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7646c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7646f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764710(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764721(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764739(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76473b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76473e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764747(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764749(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7647c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764918(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764a8f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764a97(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764ba0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764bdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764be4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764c18(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764c6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764cb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764cc5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764cc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764d69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764d70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764d77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764d90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764d93(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764dac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764daf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764dc1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764e08(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764e59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764e5c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764eb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764eba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764ecb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764ece(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764ed5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764ee4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764f29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764f32(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764f3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764f51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764f81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764fae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764fd4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_765000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7651aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7651cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7651f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_766bc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7694d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76cab5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76cae0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764017(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76402c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764035(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76406d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764127(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76413a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76413f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764310(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76434b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764366(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764377(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76438b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764519(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7645ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7645c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7645d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764603(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76461a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764631(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764646(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764657(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76467a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7646a8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7646bd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7646d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7646d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764730(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764f79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_764000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764000:L764000:{bud-=3;NFSU2_TR(0x764000);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B764002:{NFSU2_TR(0x764002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764005:{NFSU2_TR(0x764005);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B76400b:L76400b:{bud-=3;NFSU2_TR(0x76400b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76400f:{NFSU2_TR(0x76400f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B764012:{NFSU2_TR(0x764012);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_764017(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764017:L764017:{bud-=6;NFSU2_TR(0x764017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B76401a:{NFSU2_TR(0x76401a);
w4(G+4,u32(s32(s8(r1(R+12)))));
}
B76401d:{NFSU2_TR(0x76401d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B764020:{NFSU2_TR(0x764020);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B764024:{NFSU2_TR(0x764024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764027:{NFSU2_TR(0x764027);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_76402c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76402c:L76402c:{bud-=2;NFSU2_TR(0x76402c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764030:{NFSU2_TR(0x764030);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_764035(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764035:L764035:{bud-=2;NFSU2_TR(0x764035);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2aull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B764038:{NFSU2_TR(0x764038);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764058(ARGS);}}
}
B76403a:L76403a:{bud-=6;NFSU2_TR(0x76403a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76403e:{NFSU2_TR(0x76403e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764041:{NFSU2_TR(0x764041);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764044:{NFSU2_TR(0x764044);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B764046:{NFSU2_TR(0x764046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764049:{NFSU2_TR(0x764049);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B76404f:L76404f:{bud-=2;NFSU2_TR(0x76404f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764053:{NFSU2_TR(0x764053);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_764058(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764058:L764058:{bud-=6;NFSU2_TR(0x764058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B76405b:{NFSU2_TR(0x76405b);
w4(G+4,u32(s32(s8(r1(R+12)))));
}
B76405e:{NFSU2_TR(0x76405e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B764061:{NFSU2_TR(0x764061);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B764065:{NFSU2_TR(0x764065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764068:{NFSU2_TR(0x764068);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_76406d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76406d:L76406d:{bud-=2;NFSU2_TR(0x76406d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x49ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B764070:{NFSU2_TR(0x764070);
if(r1(F+6)){{[[clang::musttail]] return blk_7640a0(ARGS);}}
}
B764072:L764072:{bud-=2;NFSU2_TR(0x764072);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x68ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B764075:{NFSU2_TR(0x764075);
if(r1(F+6)){{[[clang::musttail]] return blk_764097(ARGS);}}
}
B764077:L764077:{bud-=2;NFSU2_TR(0x764077);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x6cull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B76407a:{NFSU2_TR(0x76407a);
if(r1(F+6)){{[[clang::musttail]] return blk_76408e(ARGS);}}
}
B76407c:L76407c:{bud-=2;NFSU2_TR(0x76407c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x77ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B76407f:{NFSU2_TR(0x76407f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B764085:L764085:{bud-=2;NFSU2_TR(0x764085);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764089:{NFSU2_TR(0x764089);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_76408e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76408e:L76408e:{bud-=2;NFSU2_TR(0x76408e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764092:{NFSU2_TR(0x764092);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_764097(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764097:L764097:{bud-=2;NFSU2_TR(0x764097);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76409b:{NFSU2_TR(0x76409b);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_7640a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7640a0:L7640a0:{bud-=3;NFSU2_TR(0x7640a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((G+0),(U+0),1);
}
B7640a2:{NFSU2_TR(0x7640a2);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x36ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640a4:{NFSU2_TR(0x7640a4);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7640ba(ARGS);}}
}
B7640a6:L7640a6:{bud-=2;NFSU2_TR(0x7640a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x34ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B7640aa:{NFSU2_TR(0x7640aa);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7640ba(ARGS);}}
}
B7640ac:L7640ac:{bud-=5;NFSU2_TR(0x7640ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640ad:{NFSU2_TR(0x7640ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640ae:{NFSU2_TR(0x7640ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7640b2:{NFSU2_TR(0x7640b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7640b5:{NFSU2_TR(0x7640b5);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_7640ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7640ba:L7640ba:{bud-=2;NFSU2_TR(0x7640ba);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x33ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640bc:{NFSU2_TR(0x7640bc);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7640d2(ARGS);}}
}
B7640be:L7640be:{bud-=2;NFSU2_TR(0x7640be);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x32ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B7640c2:{NFSU2_TR(0x7640c2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7640d2(ARGS);}}
}
B7640c4:L7640c4:{bud-=5;NFSU2_TR(0x7640c4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640c5:{NFSU2_TR(0x7640c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7640c6:{NFSU2_TR(0x7640c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B7640ca:{NFSU2_TR(0x7640ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7640cd:{NFSU2_TR(0x7640cd);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_7640d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7640d2:L7640d2:{bud-=2;NFSU2_TR(0x7640d2);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x64ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640d4:{NFSU2_TR(0x7640d4);
if(r1(F+6)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B7640da:L7640da:{bud-=2;NFSU2_TR(0x7640da);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x69ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640dc:{NFSU2_TR(0x7640dc);
if(r1(F+6)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B7640e2:L7640e2:{bud-=2;NFSU2_TR(0x7640e2);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x6full))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640e4:{NFSU2_TR(0x7640e4);
if(r1(F+6)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B7640ea:L7640ea:{bud-=2;NFSU2_TR(0x7640ea);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x75ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640ec:{NFSU2_TR(0x7640ec);
if(r1(F+6)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B7640f2:L7640f2:{bud-=2;NFSU2_TR(0x7640f2);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x78ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640f4:{NFSU2_TR(0x7640f4);
if(r1(F+6)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B7640fa:L7640fa:{bud-=2;NFSU2_TR(0x7640fa);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x58ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7640fc:{NFSU2_TR(0x7640fc);
if(r1(F+6)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B764102:L764102:{bud-=1;NFSU2_TR(0x764102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764106(ARGS);}
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
PN u32 blk_764106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764106:L764106:{bud-=5;NFSU2_TR(0x764106);
__builtin_memmove((G+4),gp(0x81aa00),4);
}
B76410c:{NFSU2_TR(0x76410c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764110:{NFSU2_TR(0x764110);
w4(G+0,u32(r1(R+12)));
}
B764113:{NFSU2_TR(0x764113);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x80ull))));
w1(F+6,u8((r1(U+13))==(u8(0x0ull))));
}
B764118:{NFSU2_TR(0x764118);
if(r1(F+6)){{[[clang::musttail]] return blk_76412d(ARGS);}}
}
B76411a:L76411a:{bud-=4;NFSU2_TR(0x76411a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B76411d:{NFSU2_TR(0x76411d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B764120:{NFSU2_TR(0x764120);
__builtin_memmove((G+0),(R+12),1);
}
B764122:{NFSU2_TR(0x764122);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764127ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763e79u);}[[clang::musttail]] return blk_763e79(ARGS);}
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
PN u32 blk_764127(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764127:L764127:{bud-=3;NFSU2_TR(0x764127);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B764129:{NFSU2_TR(0x764129);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76412a:{NFSU2_TR(0x76412a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_76412d(ARGS);}
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
PN u32 blk_76412d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76412d:L76412d:{bud-=4;NFSU2_TR(0x76412d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B764130:{NFSU2_TR(0x764130);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B764133:{NFSU2_TR(0x764133);
__builtin_memmove((G+0),(R+12),1);
}
B764135:{NFSU2_TR(0x764135);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x76413aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763e79u);}[[clang::musttail]] return blk_763e79(ARGS);}
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
PN u32 blk_76413a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76413a:L76413a:{bud-=1;NFSU2_TR(0x76413a);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_76413f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76413f:L76413f:{bud-=3;NFSU2_TR(0x76413f);
w4(G+0,u32(s32(s8(r1(R+12)))));
}
B764142:{NFSU2_TR(0x764142);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x67ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x67ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764145:{NFSU2_TR(0x764145);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_764391(ARGS);}}
}
B76414b:L76414b:{bud-=2;NFSU2_TR(0x76414b);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x65ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x65ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76414e:{NFSU2_TR(0x76414e);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_7641d4(ARGS);}}
}
B764154:L764154:{bud-=2;NFSU2_TR(0x764154);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x58ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x58ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764157:{NFSU2_TR(0x764157);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_764235(ARGS);}}
}
B76415d:L76415d:{bud-=1;NFSU2_TR(0x76415d);
if(r1(F+6)){{[[clang::musttail]] return blk_764412(ARGS);}}
}
B764163:L764163:{bud-=2;NFSU2_TR(0x764163);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x43ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B764166:{NFSU2_TR(0x764166);
if(r1(F+6)){{[[clang::musttail]] return blk_7641f7(ARGS);}}
}
B76416c:L76416c:{bud-=3;NFSU2_TR(0x76416c);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B76416d:{NFSU2_TR(0x76416d);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B76416e:{NFSU2_TR(0x76416e);
if(r1(F+6)){{[[clang::musttail]] return blk_7641ca(ARGS);}}
}
B764170:L764170:{bud-=3;NFSU2_TR(0x764170);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B764171:{NFSU2_TR(0x764171);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B764172:{NFSU2_TR(0x764172);
if(r1(F+6)){{[[clang::musttail]] return blk_7641ca(ARGS);}}
}
B764174:L764174:{bud-=2;NFSU2_TR(0x764174);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0xcull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B764177:{NFSU2_TR(0x764177);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_76455a(ARGS);}}
}
B76417d:L76417d:{bud-=2;NFSU2_TR(0x76417d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x830ull))));
w1(F+6,u8((r2(U+6))==(u16(0x0ull))));
}
B764183:{NFSU2_TR(0x764183);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764189(ARGS);}}
}
B764185:L764185:{bud-=1;NFSU2_TR(0x764185);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_764189(ARGS);}
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
PN u32 blk_764189(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764189:L764189:{bud-=3;NFSU2_TR(0x764189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B76418c:{NFSU2_TR(0x76418c);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B76418f:{NFSU2_TR(0x76418f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764196(ARGS);}}
}
B764191:L764191:{bud-=1;NFSU2_TR(0x764191);
w4(G+4,u32(0x7fffffffull));
{[[clang::musttail]] return blk_764196(ARGS);}
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
PN u32 blk_764196(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764196:L764196:{bud-=6;NFSU2_TR(0x764196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76419a:{NFSU2_TR(0x76419a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x810ull))));
w1(F+6,u8((r2(U+6))==(u16(0x0ull))));
}
B7641a0:{NFSU2_TR(0x7641a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7641a3:{NFSU2_TR(0x7641a3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7641a6:{NFSU2_TR(0x7641a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7641a9:{NFSU2_TR(0x7641a9);
if(r1(F+6)){{[[clang::musttail]] return blk_7643e7(ARGS);}}
}
B7641af:L7641af:{bud-=2;NFSU2_TR(0x7641af);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B7641b1:{NFSU2_TR(0x7641b1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7641bb(ARGS);}}
}
B7641b3:L7641b3:{bud-=2;NFSU2_TR(0x7641b3);
__builtin_memmove((G+0),gp(0x81a464),4);
}
B7641b8:{NFSU2_TR(0x7641b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7641bb(ARGS);}
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
PN u32 blk_7641bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7641bb:L7641bb:{bud-=3;NFSU2_TR(0x7641bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7641be:{NFSU2_TR(0x7641be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7641c5:{NFSU2_TR(0x7641c5);
{[[clang::musttail]] return blk_7643d9(ARGS);}
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
PN u32 blk_7641ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7641ca:L7641ca:{bud-=2;NFSU2_TR(0x7641ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7641d1:{NFSU2_TR(0x7641d1);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x20ull))));
{[[clang::musttail]] return blk_7641d4(ARGS);}
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
PN u32 blk_7641d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7641d4:L7641d4:{bud-=5;NFSU2_TR(0x7641d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7641d8:{NFSU2_TR(0x7641d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7641dc:{NFSU2_TR(0x7641dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((R+24),(U+0),4);
}
B7641e2:{NFSU2_TR(0x7641e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7641e5:{NFSU2_TR(0x7641e5);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_7642db(ARGS);}}
}
B7641eb:L7641eb:{bud-=2;NFSU2_TR(0x7641eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7641f2:{NFSU2_TR(0x7641f2);
{[[clang::musttail]] return blk_764322(ARGS);}
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
PN u32 blk_7641f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7641f7:L7641f7:{bud-=2;NFSU2_TR(0x7641f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x830ull))));
w1(F+6,u8((r2(U+6))==(u16(0x0ull))));
}
B7641fd:{NFSU2_TR(0x7641fd);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764203(ARGS);}}
}
B7641ff:L7641ff:{bud-=1;NFSU2_TR(0x7641ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_764203(ARGS);}
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
PN u32 blk_764203(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764203:L764203:{bud-=4;NFSU2_TR(0x764203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764207:{NFSU2_TR(0x764207);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+10,u16(u32(r2(U+4))&u32(u16(0x810ull))));
w1(F+7,u8(s16(r2(U+10))<s16(u16(0x0ull))));
w1(F+6,u8((r2(U+10))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+10))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B76420d:{NFSU2_TR(0x76420d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764210:{NFSU2_TR(0x764210);
if(r1(F+6)){{[[clang::musttail]] return blk_764274(ARGS);}}
}
B764212:L764212:{bud-=5;NFSU2_TR(0x764212);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(s32(s16(r2(U+4)))));
}
B764216:{NFSU2_TR(0x764216);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764217:{NFSU2_TR(0x764217);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((G+0),(U+0),4);
}
B76421d:{NFSU2_TR(0x76421d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B76421e:{NFSU2_TR(0x76421e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764223ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_76cab5(ARGS);}
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
PN u32 blk_764223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764223:L764223:{bud-=5;NFSU2_TR(0x764223);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B764225:{NFSU2_TR(0x764225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B764226:{NFSU2_TR(0x764226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B764227:{NFSU2_TR(0x764227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76422a:{NFSU2_TR(0x76422a);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_764284(ARGS);}}
}
B76422c:L76422c:{bud-=2;NFSU2_TR(0x76422c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764233:{NFSU2_TR(0x764233);
{[[clang::musttail]] return blk_764284(ARGS);}
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
PN u32 blk_764235(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764235:L764235:{bud-=2;NFSU2_TR(0x764235);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x5aull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B764238:{NFSU2_TR(0x764238);
if(r1(F+6)){{[[clang::musttail]] return blk_764292(ARGS);}}
}
B76423a:L76423a:{bud-=2;NFSU2_TR(0x76423a);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x9ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B76423d:{NFSU2_TR(0x76423d);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764203u);}[[clang::musttail]] return blk_764203(ARGS);}}
}
B76423f:L76423f:{bud-=2;NFSU2_TR(0x76423f);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B764240:{NFSU2_TR(0x764240);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_76455a(ARGS);}}
{[[clang::musttail]] return blk_764246(ARGS);}
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
PN u32 blk_764246(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764246:L764246:{bud-=1;NFSU2_TR(0x764246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_76424a(ARGS);}
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
PN u32 blk_76424a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76424a:L76424a:{bud-=1;NFSU2_TR(0x76424a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764251(ARGS);}
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
PN u32 blk_764251(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764251:L764251:{bud-=4;NFSU2_TR(0x764251);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B764254:{NFSU2_TR(0x764254);
w4(R+24,u32(0x8000ull));
}
B764259:{NFSU2_TR(0x764259);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+12))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B76425b:{NFSU2_TR(0x76425b);
if(r1(F+6)){{[[clang::musttail]] return blk_764482(ARGS);}}
}
B764261:L764261:{bud-=6;NFSU2_TR(0x764261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B764264:{NFSU2_TR(0x764264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B764266:{NFSU2_TR(0x764266);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B764269:{NFSU2_TR(0x764269);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B76426c:{NFSU2_TR(0x76426c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76426f:{NFSU2_TR(0x76426f);
{[[clang::musttail]] return blk_7644aa(ARGS);}
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
PN u32 blk_764274(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764274:L764274:{bud-=3;NFSU2_TR(0x764274);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B764277:{NFSU2_TR(0x764277);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76427d:{NFSU2_TR(0x76427d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764284(ARGS);}
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
PN u32 blk_764284(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764284:L764284:{bud-=3;NFSU2_TR(0x764284);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
__builtin_memmove((G+0),(U+0),4);
}
B76428a:{NFSU2_TR(0x76428a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76428d:{NFSU2_TR(0x76428d);
{[[clang::musttail]] return blk_76455a(ARGS);}
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
PN u32 blk_764292(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764292:L764292:{bud-=5;NFSU2_TR(0x764292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764296:{NFSU2_TR(0x764296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764299:{NFSU2_TR(0x764299);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B76429c:{NFSU2_TR(0x76429c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B76429e:{NFSU2_TR(0x76429e);
if(r1(F+6)){{[[clang::musttail]] return blk_7642cd(ARGS);}}
}
B7642a0:L7642a0:{bud-=3;NFSU2_TR(0x7642a0);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7642a3:{NFSU2_TR(0x7642a3);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B7642a5:{NFSU2_TR(0x7642a5);
if(r1(F+6)){{[[clang::musttail]] return blk_7642cd(ARGS);}}
}
B7642a7:L7642a7:{bud-=4;NFSU2_TR(0x7642a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B7642ab:{NFSU2_TR(0x7642ab);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
w4(G+0,u32(s32(s16(r2(U+0)))));
}
B7642ae:{NFSU2_TR(0x7642ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7642b1:{NFSU2_TR(0x7642b1);
if(r1(F+6)){{[[clang::musttail]] return blk_7642c4(ARGS);}}
}
B7642b3:L7642b3:{bud-=5;NFSU2_TR(0x7642b3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7642b4:{NFSU2_TR(0x7642b4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B7642b6:{NFSU2_TR(0x7642b6);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B7642b8:{NFSU2_TR(0x7642b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7642bf:{NFSU2_TR(0x7642bf);
{[[clang::musttail]] return blk_764557(ARGS);}
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
PN u32 blk_7642c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7642c4:L7642c4:{bud-=2;NFSU2_TR(0x7642c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7642c8:{NFSU2_TR(0x7642c8);
{[[clang::musttail]] return blk_764557(ARGS);}
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
PN u32 blk_7642cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7642cd:L7642cd:{bud-=4;NFSU2_TR(0x7642cd);
__builtin_memmove((G+0),gp(0x81a460),4);
}
B7642d2:{NFSU2_TR(0x7642d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7642d5:{NFSU2_TR(0x7642d5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7642d6:{NFSU2_TR(0x7642d6);
{[[clang::musttail]] return blk_764386(ARGS);}
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
PN u32 blk_7642db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7642db:L7642db:{bud-=1;NFSU2_TR(0x7642db);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7642eb(ARGS);}}
}
B7642dd:L7642dd:{bud-=2;NFSU2_TR(0x7642dd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x67ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B7642e0:{NFSU2_TR(0x7642e0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764322(ARGS);}}
}
B7642e2:L7642e2:{bud-=2;NFSU2_TR(0x7642e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7642e9:{NFSU2_TR(0x7642e9);
{[[clang::musttail]] return blk_764322(ARGS);}
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
PN u32 blk_7642eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7642eb:L7642eb:{bud-=3;NFSU2_TR(0x7642eb);
w4(G+0,u32(0x200ull));
}
B7642f0:{NFSU2_TR(0x7642f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7642f3:{NFSU2_TR(0x7642f3);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_7642f8(ARGS);}}
}
B7642f5:L7642f5:{bud-=1;NFSU2_TR(0x7642f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7642f8(ARGS);}
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
PN u32 blk_7642f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7642f8:L7642f8:{bud-=3;NFSU2_TR(0x7642f8);
w4(R+28,u32(0xa3ull));
}
B7642fd:{NFSU2_TR(0x7642fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B764300:{NFSU2_TR(0x764300);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764322(ARGS);}}
}
B764302:L764302:{bud-=4;NFSU2_TR(0x764302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764305:{NFSU2_TR(0x764305);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x15dull))));
}
B76430a:{NFSU2_TR(0x76430a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B76430b:{NFSU2_TR(0x76430b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764310ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x75c6c8u);}[[clang::musttail]] return blk_75c6c8(ARGS);}
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
PN u32 blk_764310(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764310:L764310:{bud-=4;NFSU2_TR(0x764310);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764312:{NFSU2_TR(0x764312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B764313:{NFSU2_TR(0x764313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764316:{NFSU2_TR(0x764316);
if(r1(F+6)){{[[clang::musttail]] return blk_76431f(ARGS);}}
}
B764318:L764318:{bud-=3;NFSU2_TR(0x764318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76431b:{NFSU2_TR(0x76431b);
__builtin_memmove((R+24),(G+0),4);
}
B76431d:{NFSU2_TR(0x76431d);
{[[clang::musttail]] return blk_764322(ARGS);}
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
PN u32 blk_76431f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76431f:L76431f:{bud-=1;NFSU2_TR(0x76431f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764322(ARGS);}
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
PN u32 blk_764322(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764322:L764322:{bud-=15;NFSU2_TR(0x764322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764325:{NFSU2_TR(0x764325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B764327:{NFSU2_TR(0x764327);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B76432a:{NFSU2_TR(0x76432a);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0x8ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B76432d:{NFSU2_TR(0x76432d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B764330:{NFSU2_TR(0x764330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764333:{NFSU2_TR(0x764333);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764336:{NFSU2_TR(0x764336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764339:{NFSU2_TR(0x764339);
w4(G+0,u32(s32(s8(r1(R+12)))));
}
B76433c:{NFSU2_TR(0x76433c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B76433d:{NFSU2_TR(0x76433d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B764340:{NFSU2_TR(0x764340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764341:{NFSU2_TR(0x764341);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764342:{NFSU2_TR(0x764342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764345:{NFSU2_TR(0x764345);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a31c),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x76434bull));
{u32 t_=u32(r4(U+0));TAIL_PRED(t_,);}
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
PN u32 blk_76434b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76434b:L76434b:{bud-=4;NFSU2_TR(0x76434b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76434e:{NFSU2_TR(0x76434e);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
}
B764351:{NFSU2_TR(0x764351);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x80ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B764357:{NFSU2_TR(0x764357);
if(r1(F+6)){{[[clang::musttail]] return blk_764367(ARGS);}}
}
B764359:L764359:{bud-=2;NFSU2_TR(0x764359);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B76435d:{NFSU2_TR(0x76435d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764367(ARGS);}}
}
B76435f:L76435f:{bud-=2;NFSU2_TR(0x76435f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764360:{NFSU2_TR(0x764360);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a328),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764366ull));
{u32 t_=u32(r4(U+0));TAIL_PRED(t_,);}
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
PN u32 blk_764366(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764366:L764366:{bud-=1;NFSU2_TR(0x764366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_764367(ARGS);}
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
PN u32 blk_764367(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764367:L764367:{bud-=2;NFSU2_TR(0x764367);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x67ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B76436a:{NFSU2_TR(0x76436a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764378(ARGS);}}
}
B76436c:L76436c:{bud-=2;NFSU2_TR(0x76436c);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B76436e:{NFSU2_TR(0x76436e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764378(ARGS);}}
}
B764370:L764370:{bud-=2;NFSU2_TR(0x764370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764371:{NFSU2_TR(0x764371);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a320),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764377ull));
{u32 t_=u32(r4(U+0));TAIL_PRED(t_,);}
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
PN u32 blk_764377(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764377:L764377:{bud-=1;NFSU2_TR(0x764377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_764378(ARGS);}
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
PN u32 blk_764378(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764378:L764378:{bud-=2;NFSU2_TR(0x764378);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2dull))));
w1(F+6,u8((r1(U+2))==(u8(0x0ull))));
}
B76437b:{NFSU2_TR(0x76437b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764385(ARGS);}}
}
B76437d:L76437d:{bud-=3;NFSU2_TR(0x76437d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764381:{NFSU2_TR(0x764381);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B764382:{NFSU2_TR(0x764382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764385(ARGS);}
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
PN u32 blk_764385(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764385:L764385:{bud-=1;NFSU2_TR(0x764385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_764386(ARGS);}
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
PN u32 blk_764386(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764386:L764386:{bud-=1;NFSU2_TR(0x764386);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x76438bull));
{[[clang::musttail]] return blk_766bc0(ARGS);}
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
PN u32 blk_76438b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76438b:L76438b:{bud-=2;NFSU2_TR(0x76438b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B76438c:{NFSU2_TR(0x76438c);
{[[clang::musttail]] return blk_764557(ARGS);}
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
PN u32 blk_764391(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764391:L764391:{bud-=2;NFSU2_TR(0x764391);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x69ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B764394:{NFSU2_TR(0x764394);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764246u);}[[clang::musttail]] return blk_764246(ARGS);}}
}
B76439a:L76439a:{bud-=2;NFSU2_TR(0x76439a);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x5ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B76439d:{NFSU2_TR(0x76439d);
if(r1(F+6)){{[[clang::musttail]] return blk_764458(ARGS);}}
}
B7643a3:L7643a3:{bud-=2;NFSU2_TR(0x7643a3);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B7643a4:{NFSU2_TR(0x7643a4);
if(r1(F+6)){{[[clang::musttail]] return blk_76443e(ARGS);}}
}
B7643aa:L7643aa:{bud-=2;NFSU2_TR(0x7643aa);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B7643ab:{NFSU2_TR(0x7643ab);
if(r1(F+6)){{[[clang::musttail]] return blk_76440b(ARGS);}}
}
B7643ad:L7643ad:{bud-=2;NFSU2_TR(0x7643ad);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B7643b0:{NFSU2_TR(0x7643b0);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764189u);}[[clang::musttail]] return blk_764189(ARGS);}}
}
B7643b6:L7643b6:{bud-=3;NFSU2_TR(0x7643b6);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B7643b7:{NFSU2_TR(0x7643b7);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B7643b8:{NFSU2_TR(0x7643b8);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x76424au);}[[clang::musttail]] return blk_76424a(ARGS);}}
}
B7643be:L7643be:{bud-=2;NFSU2_TR(0x7643be);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B7643c1:{NFSU2_TR(0x7643c1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_76455a(ARGS);}}
}
B7643c7:L7643c7:{bud-=2;NFSU2_TR(0x7643c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x27ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7643ce:{NFSU2_TR(0x7643ce);
{[[clang::musttail]] return blk_764415(ARGS);}
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
PN u32 blk_7643d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7643d0:L7643d0:{bud-=3;NFSU2_TR(0x7643d0);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B7643d1:{NFSU2_TR(0x7643d1);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(F+6,u8((r2(U+4))==(u16(0x0ull))));
}
B7643d5:{NFSU2_TR(0x7643d5);
if(r1(F+6)){{[[clang::musttail]] return blk_7643dd(ARGS);}}
}
B7643d7:L7643d7:{bud-=2;NFSU2_TR(0x7643d7);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B7643d8:{NFSU2_TR(0x7643d8);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_7643d9(ARGS);}
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
PN u32 blk_7643d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7643d9:L7643d9:{bud-=2;NFSU2_TR(0x7643d9);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B7643db:{NFSU2_TR(0x7643db);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7643d0u);}[[clang::musttail]] return blk_7643d0(ARGS);}}
{[[clang::musttail]] return blk_7643dd(ARGS);}
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
PN u32 blk_7643dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7643dd:L7643dd:{bud-=3;NFSU2_TR(0x7643dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B7643e0:{NFSU2_TR(0x7643e0);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B7643e2:{NFSU2_TR(0x7643e2);
{[[clang::musttail]] return blk_764557(ARGS);}
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
PN u32 blk_7643e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7643e7:L7643e7:{bud-=2;NFSU2_TR(0x7643e7);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B7643e9:{NFSU2_TR(0x7643e9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7643f3(ARGS);}}
}
B7643eb:L7643eb:{bud-=2;NFSU2_TR(0x7643eb);
__builtin_memmove((G+0),gp(0x81a460),4);
}
B7643f0:{NFSU2_TR(0x7643f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7643f3(ARGS);}
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
PN u32 blk_7643f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7643f3:L7643f3:{bud-=2;NFSU2_TR(0x7643f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7643f6:{NFSU2_TR(0x7643f6);
{[[clang::musttail]] return blk_7643ff(ARGS);}
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
PN u32 blk_7643f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7643f8:L7643f8:{bud-=3;NFSU2_TR(0x7643f8);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B7643f9:{NFSU2_TR(0x7643f9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(F+6,u8((r1(U+2))==(u8(0x0ull))));
}
B7643fc:{NFSU2_TR(0x7643fc);
if(r1(F+6)){{[[clang::musttail]] return blk_764403(ARGS);}}
}
B7643fe:L7643fe:{bud-=1;NFSU2_TR(0x7643fe);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_7643ff(ARGS);}
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
PN u32 blk_7643ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7643ff:L7643ff:{bud-=2;NFSU2_TR(0x7643ff);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764401:{NFSU2_TR(0x764401);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7643f8u);}[[clang::musttail]] return blk_7643f8(ARGS);}}
{[[clang::musttail]] return blk_764403(ARGS);}
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
PN u32 blk_764403(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764403:L764403:{bud-=2;NFSU2_TR(0x764403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B764406:{NFSU2_TR(0x764406);
{[[clang::musttail]] return blk_764557(ARGS);}
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
PN u32 blk_76440b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76440b:L76440b:{bud-=1;NFSU2_TR(0x76440b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764412(ARGS);}
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
PN u32 blk_764412(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764412:L764412:{bud-=1;NFSU2_TR(0x764412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764415(ARGS);}
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
PN u32 blk_764415(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764415:L764415:{bud-=3;NFSU2_TR(0x764415);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B764419:{NFSU2_TR(0x764419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764420:{NFSU2_TR(0x764420);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764251u);}[[clang::musttail]] return blk_764251(ARGS);}}
}
B764426:L764426:{bud-=6;NFSU2_TR(0x764426);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B764429:{NFSU2_TR(0x764429);
w1(G+0,u8(u32(r1(G+0))+u32(u8(0x51ull))));
}
B76442b:{NFSU2_TR(0x76442b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x30ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76442f:{NFSU2_TR(0x76442f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe5ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B764432:{NFSU2_TR(0x764432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764439:{NFSU2_TR(0x764439);
{if(__builtin_expect(bud<=0,0)){EXIT(0x764251u);}[[clang::musttail]] return blk_764251(ARGS);}
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
PN u32 blk_76443e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76443e:L76443e:{bud-=3;NFSU2_TR(0x76443e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B764442:{NFSU2_TR(0x764442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B764449:{NFSU2_TR(0x764449);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764251u);}[[clang::musttail]] return blk_764251(ARGS);}}
}
B76444f:L76444f:{bud-=2;NFSU2_TR(0x76444f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B764453:{NFSU2_TR(0x764453);
{if(__builtin_expect(bud<=0,0)){EXIT(0x764251u);}[[clang::musttail]] return blk_764251(ARGS);}
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
PN u32 blk_764458(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764458:L764458:{bud-=5;NFSU2_TR(0x764458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76445c:{NFSU2_TR(0x76445c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B764460:{NFSU2_TR(0x764460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764463:{NFSU2_TR(0x764463);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764466:{NFSU2_TR(0x764466);
if(r1(F+6)){{[[clang::musttail]] return blk_764471(ARGS);}}
}
B764468:L764468:{bud-=3;NFSU2_TR(0x764468);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((G+4),(U+4),2);
}
B76446c:{NFSU2_TR(0x76446c);
u8 U[2];
__builtin_memmove((U+0),(G+4),2);
s2(u32(r4(G+0)),r2(U+0));
}
B76446f:{NFSU2_TR(0x76446f);
{[[clang::musttail]] return blk_764476(ARGS);}
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
PN u32 blk_764471(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764471:L764471:{bud-=2;NFSU2_TR(0x764471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B764474:{NFSU2_TR(0x764474);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
{[[clang::musttail]] return blk_764476(ARGS);}
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
PN u32 blk_764476(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764476:L764476:{bud-=2;NFSU2_TR(0x764476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76447d:{NFSU2_TR(0x76447d);
{[[clang::musttail]] return blk_764649(ARGS);}
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
PN u32 blk_764482(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764482:L764482:{bud-=4;NFSU2_TR(0x764482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764486:{NFSU2_TR(0x764486);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B764489:{NFSU2_TR(0x764489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B76448c:{NFSU2_TR(0x76448c);
if(r1(F+6)){{[[clang::musttail]] return blk_7644a0(ARGS);}}
}
B76448e:L76448e:{bud-=2;NFSU2_TR(0x76448e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B764491:{NFSU2_TR(0x764491);
if(r1(F+6)){{[[clang::musttail]] return blk_76449a(ARGS);}}
}
B764493:L764493:{bud-=1;NFSU2_TR(0x764493);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(s32(s16(r2(U+4)))));
{[[clang::musttail]] return blk_764497(ARGS);}
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
PN u32 blk_764497(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764497:L764497:{bud-=2;NFSU2_TR(0x764497);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B764498:{NFSU2_TR(0x764498);
{[[clang::musttail]] return blk_7644aa(ARGS);}
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
PN u32 blk_76449a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76449a:L76449a:{bud-=2;NFSU2_TR(0x76449a);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B76449e:{NFSU2_TR(0x76449e);
{if(__builtin_expect(bud<=0,0)){EXIT(0x764497u);}[[clang::musttail]] return blk_764497(ARGS);}
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
PN u32 blk_7644a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644a0:L7644a0:{bud-=3;NFSU2_TR(0x7644a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7644a3:{NFSU2_TR(0x7644a3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7644a6:{NFSU2_TR(0x7644a6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764497u);}[[clang::musttail]] return blk_764497(ARGS);}}
}
B7644a8:L7644a8:{bud-=1;NFSU2_TR(0x7644a8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_7644aa(ARGS);}
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
PN u32 blk_7644aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644aa:L7644aa:{bud-=2;NFSU2_TR(0x7644aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7644ad:{NFSU2_TR(0x7644ad);
if(r1(F+6)){{[[clang::musttail]] return blk_7644c4(ARGS);}}
}
B7644af:L7644af:{bud-=2;NFSU2_TR(0x7644af);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B7644b1:{NFSU2_TR(0x7644b1);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_7644c4(ARGS);}}
}
B7644b3:L7644b3:{bud-=1;NFSU2_TR(0x7644b3);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_7644b9(ARGS);}}
}
B7644b5:L7644b5:{bud-=2;NFSU2_TR(0x7644b5);
w1(F+0,u8(0x0ull));
}
B7644b7:{NFSU2_TR(0x7644b7);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_7644c4(ARGS);}}
{[[clang::musttail]] return blk_7644b9(ARGS);}
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
PN u32 blk_7644b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644b9:L7644b9:{bud-=4;NFSU2_TR(0x7644b9);
w1(F+0,u8((r4(G+0))!=(u32(0x0ull))));
w4(G+0,u32(0-u32(r4(G+0))));
}
B7644bb:{NFSU2_TR(0x7644bb);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+8))+u32(u32(0x0ull))));
w4(R+8,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7644be:{NFSU2_TR(0x7644be);
w4(R+8,u32(0-u32(r4(R+8))));
}
B7644c0:{NFSU2_TR(0x7644c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_7644c4(ARGS);}
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
PN u32 blk_7644c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644c4:L7644c4:{bud-=4;NFSU2_TR(0x7644c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(F+6,u8((r4(U+8))==(u32(0x0ull))));
}
B7644c7:{NFSU2_TR(0x7644c7);
__builtin_memmove((R+12),(G+0),4);
}
B7644c9:{NFSU2_TR(0x7644c9);
__builtin_memmove((R+28),(R+8),4);
}
B7644cb:{NFSU2_TR(0x7644cb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7644cf(ARGS);}}
}
B7644cd:L7644cd:{bud-=1;NFSU2_TR(0x7644cd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
{[[clang::musttail]] return blk_7644cf(ARGS);}
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
PN u32 blk_7644cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644cf:L7644cf:{bud-=2;NFSU2_TR(0x7644cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7644d3:{NFSU2_TR(0x7644d3);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_7644de(ARGS);}}
}
B7644d5:L7644d5:{bud-=2;NFSU2_TR(0x7644d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7644dc:{NFSU2_TR(0x7644dc);
{[[clang::musttail]] return blk_7644ef(ARGS);}
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
PN u32 blk_7644de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644de:L7644de:{bud-=4;NFSU2_TR(0x7644de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7644e2:{NFSU2_TR(0x7644e2);
w4(G+0,u32(0x200ull));
}
B7644e7:{NFSU2_TR(0x7644e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7644ea:{NFSU2_TR(0x7644ea);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_7644ef(ARGS);}}
}
B7644ec:L7644ec:{bud-=1;NFSU2_TR(0x7644ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7644ef(ARGS);}
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
PN u32 blk_7644ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644ef:L7644ef:{bud-=3;NFSU2_TR(0x7644ef);
__builtin_memmove((G+0),(R+12),4);
}
B7644f1:{NFSU2_TR(0x7644f1);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B7644f3:{NFSU2_TR(0x7644f3);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7644f9(ARGS);}}
}
B7644f5:L7644f5:{bud-=1;NFSU2_TR(0x7644f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7644f9(ARGS);}
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
PN u32 blk_7644f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644f9:L7644f9:{bud-=1;NFSU2_TR(0x7644f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffabull))));
__builtin_memmove((R+24),(U+0),4);
{[[clang::musttail]] return blk_7644fc(ARGS);}
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
PN u32 blk_7644fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7644fc:L7644fc:{bud-=4;NFSU2_TR(0x7644fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7644ff:{NFSU2_TR(0x7644ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764502:{NFSU2_TR(0x764502);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764504:{NFSU2_TR(0x764504);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_76450c(ARGS);}}
}
B764506:L764506:{bud-=3;NFSU2_TR(0x764506);
__builtin_memmove((G+0),(R+12),4);
}
B764508:{NFSU2_TR(0x764508);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B76450a:{NFSU2_TR(0x76450a);
if(r1(F+6)){{[[clang::musttail]] return blk_764530(ARGS);}}
{[[clang::musttail]] return blk_76450c(ARGS);}
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
PN u32 blk_76450c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76450c:L76450c:{bud-=7;NFSU2_TR(0x76450c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B76450f:{NFSU2_TR(0x76450f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B764510:{NFSU2_TR(0x764510);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764511:{NFSU2_TR(0x764511);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764512:{NFSU2_TR(0x764512);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764513:{NFSU2_TR(0x764513);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764514:{NFSU2_TR(0x764514);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764519ull));
{[[clang::musttail]] return blk_76cae0(ARGS);}
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
PN u32 blk_764519(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764519:L764519:{bud-=6;NFSU2_TR(0x764519);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x30ull))));
}
B76451c:{NFSU2_TR(0x76451c);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x39ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B76451f:{NFSU2_TR(0x76451f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764522:{NFSU2_TR(0x764522);
__builtin_memmove((R+12),(G+0),4);
}
B764524:{NFSU2_TR(0x764524);
__builtin_memmove((R+28),(R+8),4);
}
B764526:{NFSU2_TR(0x764526);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_76452b(ARGS);}}
}
B764528:L764528:{bud-=1;NFSU2_TR(0x764528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
{[[clang::musttail]] return blk_76452b(ARGS);}
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
PN u32 blk_76452b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76452b:L76452b:{bud-=3;NFSU2_TR(0x76452b);
u8 U[1];
__builtin_memmove((U+0),(G+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76452d:{NFSU2_TR(0x76452d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76452e:{NFSU2_TR(0x76452e);
{if(__builtin_expect(bud<=0,0)){EXIT(0x7644fcu);}[[clang::musttail]] return blk_7644fc(ARGS);}
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
PN u32 blk_764530(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764530:L764530:{bud-=7;NFSU2_TR(0x764530);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffabull))));
__builtin_memmove((G+0),(U+0),4);
}
B764533:{NFSU2_TR(0x764533);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B764535:{NFSU2_TR(0x764535);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B764536:{NFSU2_TR(0x764536);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B76453a:{NFSU2_TR(0x76453a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76453d:{NFSU2_TR(0x76453d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764540:{NFSU2_TR(0x764540);
if(r1(F+6)){{[[clang::musttail]] return blk_76455a(ARGS);}}
}
B764542:L764542:{bud-=3;NFSU2_TR(0x764542);
__builtin_memmove((G+4),(R+24),4);
}
B764544:{NFSU2_TR(0x764544);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(F+6,u8((r1(U+2))==(u8(0x0ull))));
}
B764547:{NFSU2_TR(0x764547);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_76454d(ARGS);}}
}
B764549:L764549:{bud-=2;NFSU2_TR(0x764549);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B76454b:{NFSU2_TR(0x76454b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_76455a(ARGS);}}
{[[clang::musttail]] return blk_76454d(ARGS);}
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
PN u32 blk_76454d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76454d:L76454d:{bud-=4;NFSU2_TR(0x76454d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B764550:{NFSU2_TR(0x764550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B764553:{NFSU2_TR(0x764553);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(G+4)),r1(U+0));
}
B764556:{NFSU2_TR(0x764556);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_764557(ARGS);}
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
PN u32 blk_764557(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764557:L764557:{bud-=1;NFSU2_TR(0x764557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_76455a(ARGS);}
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
PN u32 blk_76455a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76455a:L76455a:{bud-=2;NFSU2_TR(0x76455a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B76455e:{NFSU2_TR(0x76455e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764649(ARGS);}}
}
B764564:L764564:{bud-=3;NFSU2_TR(0x764564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B764567:{NFSU2_TR(0x764567);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B76456a:{NFSU2_TR(0x76456a);
if(r1(F+6)){{[[clang::musttail]] return blk_764592(ARGS);}}
}
B76456c:L76456c:{bud-=2;NFSU2_TR(0x76456c);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B76456f:{NFSU2_TR(0x76456f);
if(r1(F+6)){{[[clang::musttail]] return blk_764577(ARGS);}}
}
B764571:L764571:{bud-=2;NFSU2_TR(0x764571);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x2dull));
s1(u32(r4(U+0)),r1(U+4));
}
B764575:{NFSU2_TR(0x764575);
{[[clang::musttail]] return blk_76458b(ARGS);}
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
PN u32 blk_764577(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764577:L764577:{bud-=2;NFSU2_TR(0x764577);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B76457a:{NFSU2_TR(0x76457a);
if(r1(F+6)){{[[clang::musttail]] return blk_764582(ARGS);}}
}
B76457c:L76457c:{bud-=2;NFSU2_TR(0x76457c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x2bull));
s1(u32(r4(U+0)),r1(U+4));
}
B764580:{NFSU2_TR(0x764580);
{[[clang::musttail]] return blk_76458b(ARGS);}
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
PN u32 blk_764582(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764582:L764582:{bud-=2;NFSU2_TR(0x764582);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B764585:{NFSU2_TR(0x764585);
if(r1(F+6)){{[[clang::musttail]] return blk_764592(ARGS);}}
}
B764587:L764587:{bud-=1;NFSU2_TR(0x764587);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_76458b(ARGS);}
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
PN u32 blk_76458b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76458b:L76458b:{bud-=1;NFSU2_TR(0x76458b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_764592(ARGS);}
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
PN u32 blk_764592(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764592:L764592:{bud-=5;NFSU2_TR(0x764592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B764595:{NFSU2_TR(0x764595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B764598:{NFSU2_TR(0x764598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B76459b:{NFSU2_TR(0x76459b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xcull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B76459e:{NFSU2_TR(0x76459e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7645b1(ARGS);}}
}
B7645a0:L7645a0:{bud-=5;NFSU2_TR(0x7645a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B7645a3:{NFSU2_TR(0x7645a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B7645a6:{NFSU2_TR(0x7645a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7645a7:{NFSU2_TR(0x7645a7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7645a9:{NFSU2_TR(0x7645a9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7645aeull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763eacu);}[[clang::musttail]] return blk_763eac(ARGS);}
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
PN u32 blk_7645ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7645ae:L7645ae:{bud-=1;NFSU2_TR(0x7645ae);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{[[clang::musttail]] return blk_7645b1(ARGS);}
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
PN u32 blk_7645b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7645b1:L7645b1:{bud-=5;NFSU2_TR(0x7645b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B7645b4:{NFSU2_TR(0x7645b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7645b7:{NFSU2_TR(0x7645b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B7645ba:{NFSU2_TR(0x7645ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B7645bd:{NFSU2_TR(0x7645bd);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7645c2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763ed0u);}[[clang::musttail]] return blk_763ed0(ARGS);}
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
PN u32 blk_7645c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7645c2:L7645c2:{bud-=2;NFSU2_TR(0x7645c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7645c5:{NFSU2_TR(0x7645c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_7645c6(ARGS);}
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
PN u32 blk_7645c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7645c6:L7645c6:{bud-=1;NFSU2_TR(0x7645c6);
if(r1(F+6)){{[[clang::musttail]] return blk_7645dc(ARGS);}}
}
B7645c8:L7645c8:{bud-=2;NFSU2_TR(0x7645c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B7645cb:{NFSU2_TR(0x7645cb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_7645dc(ARGS);}}
}
B7645cd:L7645cd:{bud-=5;NFSU2_TR(0x7645cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7645ce:{NFSU2_TR(0x7645ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7645cf:{NFSU2_TR(0x7645cf);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7645d1:{NFSU2_TR(0x7645d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B7645d4:{NFSU2_TR(0x7645d4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7645d9ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763eacu);}[[clang::musttail]] return blk_763eac(ARGS);}
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
PN u32 blk_7645d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7645d9:L7645d9:{bud-=1;NFSU2_TR(0x7645d9);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{[[clang::musttail]] return blk_7645dc(ARGS);}
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
PN u32 blk_7645dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7645dc:L7645dc:{bud-=2;NFSU2_TR(0x7645dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7645e0:{NFSU2_TR(0x7645e0);
if(r1(F+6)){{[[clang::musttail]] return blk_764623(ARGS);}}
}
B7645e2:L7645e2:{bud-=2;NFSU2_TR(0x7645e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7645e6:{NFSU2_TR(0x7645e6);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764623(ARGS);}}
}
B7645e8:L7645e8:{bud-=3;NFSU2_TR(0x7645e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7645eb:{NFSU2_TR(0x7645eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7645ee:{NFSU2_TR(0x7645ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7645f1(ARGS);}
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
PN u32 blk_7645f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7645f1:L7645f1:{bud-=7;NFSU2_TR(0x7645f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7645f4:{NFSU2_TR(0x7645f4);
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
}
B7645f6:{NFSU2_TR(0x7645f6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((G+0),(U+0),2);
}
B7645f9:{NFSU2_TR(0x7645f9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7645fa:{NFSU2_TR(0x7645fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((G+0),(U+0),4);
}
B7645fd:{NFSU2_TR(0x7645fd);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7645fe:{NFSU2_TR(0x7645fe);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764603ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_76cab5(ARGS);}
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
PN u32 blk_764603(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764603:L764603:{bud-=6;NFSU2_TR(0x764603);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B764604:{NFSU2_TR(0x764604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B764605:{NFSU2_TR(0x764605);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B764606:{NFSU2_TR(0x764606);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764608:{NFSU2_TR(0x764608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B764609:{NFSU2_TR(0x764609);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764632(ARGS);}}
}
B76460b:L76460b:{bud-=5;NFSU2_TR(0x76460b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76460e:{NFSU2_TR(0x76460e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B76460f:{NFSU2_TR(0x76460f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B764612:{NFSU2_TR(0x764612);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((G+4),(U+0),4);
}
B764615:{NFSU2_TR(0x764615);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x76461aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763ed0u);}[[clang::musttail]] return blk_763ed0(ARGS);}
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
PN u32 blk_76461a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76461a:L76461a:{bud-=3;NFSU2_TR(0x76461a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B76461e:{NFSU2_TR(0x76461e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B76461f:{NFSU2_TR(0x76461f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7645f1u);}[[clang::musttail]] return blk_7645f1(ARGS);}}
}
B764621:L764621:{bud-=1;NFSU2_TR(0x764621);
{[[clang::musttail]] return blk_764632(ARGS);}
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
PN u32 blk_764623(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764623:L764623:{bud-=4;NFSU2_TR(0x764623);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B764626:{NFSU2_TR(0x764626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B764629:{NFSU2_TR(0x764629);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B76462c:{NFSU2_TR(0x76462c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764631ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763ed0u);}[[clang::musttail]] return blk_763ed0(ARGS);}
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
PN u32 blk_764631(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764631:L764631:{bud-=1;NFSU2_TR(0x764631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_764632(ARGS);}
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
PN u32 blk_764632(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764632:L764632:{bud-=2;NFSU2_TR(0x764632);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B764636:{NFSU2_TR(0x764636);
if(r1(F+6)){{[[clang::musttail]] return blk_764649(ARGS);}}
}
B764638:L764638:{bud-=5;NFSU2_TR(0x764638);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B76463b:{NFSU2_TR(0x76463b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B76463e:{NFSU2_TR(0x76463e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B76463f:{NFSU2_TR(0x76463f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764641:{NFSU2_TR(0x764641);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764646ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x763eacu);}[[clang::musttail]] return blk_763eac(ARGS);}
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
PN u32 blk_764646(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764646:L764646:{bud-=1;NFSU2_TR(0x764646);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{[[clang::musttail]] return blk_764649(ARGS);}
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
PN u32 blk_764649(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764649:L764649:{bud-=2;NFSU2_TR(0x764649);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B76464d:{NFSU2_TR(0x76464d);
if(r1(F+6)){{[[clang::musttail]] return blk_76465c(ARGS);}}
}
B76464f:L76464f:{bud-=2;NFSU2_TR(0x76464f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B764652:{NFSU2_TR(0x764652);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764657ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x75c6dau);}[[clang::musttail]] return blk_75c6da(ARGS);}
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
PN u32 blk_764657(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764657:L764657:{bud-=2;NFSU2_TR(0x764657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76465b:{NFSU2_TR(0x76465b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_76465c(ARGS);}
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
PN u32 blk_76465c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76465c:L76465c:{bud-=4;NFSU2_TR(0x76465c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76465f:{NFSU2_TR(0x76465f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B764661:{NFSU2_TR(0x764661);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B764663:{NFSU2_TR(0x764663);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x763f3cu);}[[clang::musttail]] return blk_763f3c(ARGS);}}
{[[clang::musttail]] return blk_764669(ARGS);}
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
PN u32 blk_764669(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764669:L764669:{bud-=2;NFSU2_TR(0x764669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76466a:{NFSU2_TR(0x76466a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{[[clang::musttail]] return blk_76466b(ARGS);}
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
PN u32 blk_76466b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76466b:L76466b:{bud-=5;NFSU2_TR(0x76466b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B76466e:{NFSU2_TR(0x76466e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))^u32(r4(U+4))));
}
B764671:{NFSU2_TR(0x764671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B764674:{NFSU2_TR(0x764674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B764675:{NFSU2_TR(0x764675);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x76467aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x76115eu);}[[clang::musttail]] return blk_76115e(ARGS);}
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
PN u32 blk_76467a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76467a:L76467a:{bud-=2;NFSU2_TR(0x76467a);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B76467b:{NFSU2_TR(0x76467b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x75c7b3u)[[clang::musttail]] return blk_75c7b3(ARGS);if(t__==0x75c80au)[[clang::musttail]] return blk_75c80a(ARGS);if(t__==0x75e058u)[[clang::musttail]] return blk_75e058(ARGS);if(t__==0x75e0afu)[[clang::musttail]] return blk_75e0af(ARGS););}
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
PN u32 blk_76469c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76469c:L76469c:{bud-=3;NFSU2_TR(0x76469c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B76469e:{NFSU2_TR(0x76469e);
u8 U[4];
w4(U+0,u32(0x7d4300ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7646a3:{NFSU2_TR(0x7646a3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7646a8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x760da0u);}[[clang::musttail]] return blk_760da0(ARGS);}
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
PN u32 blk_7646a8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7646a8:L7646a8:{bud-=5;NFSU2_TR(0x7646a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7646ac:{NFSU2_TR(0x7646ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7646b0:{NFSU2_TR(0x7646b0);
__builtin_memmove((R+4608),(R+4672),8);
__builtin_memmove((R+4616),(R+4680),8);
}
B7646b4:{NFSU2_TR(0x7646b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7646bb:{NFSU2_TR(0x7646bb);
{[[clang::musttail]] return blk_7646c4(ARGS);}
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
PN u32 blk_7646bd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7646bd:L7646bd:{bud-=3;NFSU2_TR(0x7646bd);
w1(F+0,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B7646bf:{NFSU2_TR(0x7646bf);
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
B7646c0:{NFSU2_TR(0x7646c0);
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
PN u32 blk_7646c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7646c4:L7646c4:{bud-=3;NFSU2_TR(0x7646c4);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B7646c8:{NFSU2_TR(0x7646c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7646cb:{NFSU2_TR(0x7646cb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7646d0ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x760ddbu);}[[clang::musttail]] return blk_760ddb(ARGS);}
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
PN u32 blk_7646d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7646d0:L7646d0:{bud-=1;NFSU2_TR(0x7646d0);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764710u)[[clang::musttail]] return blk_764710(ARGS););}
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
PN u32 blk_7646d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,6);__builtin_memcpy(R+525,F+13,1);__builtin_memcpy(R+529,F+17,4);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7646d1:L7646d1:{bud-=16;NFSU2_TR(0x7646d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7646d2:{NFSU2_TR(0x7646d2);
__builtin_memmove((R+20),(G+16),4);
}
B7646d4:{NFSU2_TR(0x7646d4);
u8 U[6];
w1(F+0,u8((r4(G+16))<(u32(0x4ull))));
w1(F+11,sborrow<u32>(r4(G+16),u32(0x4ull)));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7646d7:{NFSU2_TR(0x7646d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7646d8:{NFSU2_TR(0x7646d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7646d9:{NFSU2_TR(0x7646d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7646da:{NFSU2_TR(0x7646da);
u8 U[170];
w1(U+0,u8(u32(r1(F+13))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(F+11))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(F+10))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(F+9))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(F+8))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(F+7))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(F+6))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(F+4))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(F+2))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(F+0))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(F+20))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(F+19))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(F+18))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(F+17))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(R+640));
}
B7646db:{NFSU2_TR(0x7646db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B7646dc:{NFSU2_TR(0x7646dc);
__builtin_memmove((G+4),(G+0),4);
}
B7646de:{NFSU2_TR(0x7646de);
w4(G+0,u32(u32(r4(G+0))^u32(u32(0x200000ull))));
}
B7646e3:{NFSU2_TR(0x7646e3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7646e4:{NFSU2_TR(0x7646e4);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(F+13,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(F+11,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(F+10,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(F+9,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(F+8,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(F+7,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(F+6,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(F+4,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(F+2,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(F+0,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(F+20,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(F+17,u8((r4(U+44))!=(u32(0x0ull))));
w1(F+19,u8(0x0ull));
w1(F+18,u8(0x0ull));
}
B7646e5:{NFSU2_TR(0x7646e5);
u8 U[170];
w1(U+0,u8(u32(r1(F+13))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(F+11))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(F+10))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(F+9))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(F+8))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(F+7))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(F+6))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(F+4))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(F+2))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(F+0))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(F+20))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(F+19))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(F+18))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(F+17))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(R+640));
}
B7646e6:{NFSU2_TR(0x7646e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7646e7:{NFSU2_TR(0x7646e7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B7646e9:{NFSU2_TR(0x7646e9);
if(r1(F+6)){{__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+520,F+8,3);__builtin_memcpy(R+525,F+13,1);__builtin_memcpy(R+529,F+17,4);[[clang::musttail]] return blk_7646f4(ARGS);}}
}
B7646eb:L7646eb:{bud-=4;NFSU2_TR(0x7646eb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7646ec:{NFSU2_TR(0x7646ec);
u8 U[28];
__builtin_memmove((R+640),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(F+13,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(F+10,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(F+9,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(F+8,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(F+4,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(F+20,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(F+17,u8((r4(U+24))!=(u32(0x0ull))));
w1(F+19,u8(0x0ull));
w1(F+18,u8(0x0ull));
}
B7646ed:{NFSU2_TR(0x7646ed);
w4(G+0,u32(0x1ull));
}
B7646f2:{NFSU2_TR(0x7646f2);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(G+0))==(u32(0x0ull))));
if(r1(U+4)){goto L7646f2_35;}
w1(U+5,u8((r4(G+0))==(u32(0x1ull))));
if(r1(U+5)){goto L7646f2_37;}
w1(U+6,u8((r4(G+0))==(u32(0x2ull))));
if(r1(U+6)){goto L7646f2_39;}
w1(U+7,u8((r4(G+0))==(u32(0x3ull))));
if(r1(U+7)){goto L7646f2_41;}
w1(U+8,u8((r4(G+0))==(u32(0x4ull))));
if(r1(U+8)){goto L7646f2_43;}
w1(U+9,u8((r4(G+0))==(u32(0x5ull))));
if(r1(U+9)){goto L7646f2_45;}
w1(U+10,u8((r4(G+0))==(u32(0x6ull))));
if(r1(U+10)){goto L7646f2_47;}
w1(U+11,u8((r4(G+0))==(u32(0x7ull))));
if(r1(U+11)){goto L7646f2_49;}
w1(U+12,u8((r4(G+0))==(u32(0x9ull))));
if(r1(U+12)){goto L7646f2_51;}
w1(U+13,u8((r4(G+0))==(u32(0xaull))));
if(r1(U+13)){goto L7646f2_53;}
w1(U+14,u8((r4(G+0))==(u32(0xbull))));
if(r1(U+14)){goto L7646f2_55;}
w1(U+15,u8((r4(G+0))==(u32(0xdull))));
if(r1(U+15)){goto L7646f2_57;}
w1(U+16,u8((r4(G+0))==(u32(0xfull))));
if(r1(U+16)){goto L7646f2_59;}
w1(U+17,u8((r4(G+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L7646f2_61;}
w1(U+18,u8((r4(G+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L7646f2_63;}
w1(U+19,u8((r4(G+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L7646f2_65;}
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262189,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_35:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262190,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_37:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262191,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_39:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262192,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_41:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262193,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_43:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262194,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_45:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262195,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_47:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262196,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_49:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262197,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_51:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262198,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_53:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262199,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_55:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262200,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_57:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262201,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_59:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262202,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_61:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262203,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_63:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262204,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_65:;
{SPILL_OUT();c.pc=0x7646f2u;V r_=user_op(c,262205,{rv<4>((G+0))});SPILL_IN();wv<4>((U+0),r_);}
goto L7646f2_67;
L7646f2_67:;
__builtin_memmove((G+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((G+4),gp(u32(r4(U+28))),4);
{__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+520,F+8,3);__builtin_memcpy(R+525,F+13,1);__builtin_memcpy(R+529,F+17,4);[[clang::musttail]] return blk_7646f4(ARGS);}
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
PN u32 blk_7646f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7646f4:L7646f4:{bud-=5;NFSU2_TR(0x7646f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7646f7:{NFSU2_TR(0x7646f7);
s4(0x8ba484,u32(u32(m4(0x8ba484))&u32(u32(0x0ull))));
}
B7646fe:{NFSU2_TR(0x7646fe);
s4(0x8ba480,u32(u32(m4(0x8ba480))&u32(u32(0x0ull))));
}
B764705:{NFSU2_TR(0x764705);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B764709:{NFSU2_TR(0x764709);
if(r1(F+6)){{[[clang::musttail]] return blk_764721(ARGS);}}
}
B76470b:L76470b:{bud-=1;NFSU2_TR(0x76470b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764710ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x76469cu);}[[clang::musttail]] return blk_76469c(ARGS);}
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
PN u32 blk_764710(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764710:L764710:{bud-=2;NFSU2_TR(0x764710);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764712:{NFSU2_TR(0x764712);
if(r1(F+6)){{[[clang::musttail]] return blk_764721(ARGS);}}
}
B764714:L764714:{bud-=4;NFSU2_TR(0x764714);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B764716:{NFSU2_TR(0x764716);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B764717:{NFSU2_TR(0x764717);
__builtin_memmove(gp(0x8ba484),(G+0),4);
}
B76471c:{NFSU2_TR(0x76471c);
__builtin_memmove(gp(0x8ba480),(G+0),4);
{[[clang::musttail]] return blk_764721(ARGS);}
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
PN u32 blk_764721(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764721:L764721:{bud-=6;NFSU2_TR(0x764721);
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
}
B764723:{NFSU2_TR(0x764723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B764724:{NFSU2_TR(0x764724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B764725:{NFSU2_TR(0x764725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B764726:{NFSU2_TR(0x764726);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B764727:{NFSU2_TR(0x764727);
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
PN u32 blk_764730(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764730:L764730:{bud-=4;NFSU2_TR(0x764730);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764731:{NFSU2_TR(0x764731);
__builtin_memmove((R+20),(G+16),4);
}
B764733:{NFSU2_TR(0x764733);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x10ull))));
}
B764736:{NFSU2_TR(0x764736);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
{[[clang::musttail]] return blk_764739(ARGS);}
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
PN u32 blk_764739(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764739:L764739:{bud-=1;NFSU2_TR(0x764739);
__asm__ volatile(".byte 0xd9,0xc9"::);
{[[clang::musttail]] return blk_76473b(ARGS);}
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
PN u32 blk_76473b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76473b:L76473b:{bud-=1;NFSU2_TR(0x76473b);
{u32 ea_=u32(r4(G+16));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_76473e(ARGS);}
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
PN u32 blk_76473e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B76473e:L76473e:{bud-=2;NFSU2_TR(0x76473e);
{u32 ea_=u32(r4(G+16)+u32(8u));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B764742:{NFSU2_TR(0x764742);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764747ull));
{[[clang::musttail]] return blk_764749(ARGS);}
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
PN u32 blk_764747(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764747:L764747:{bud-=2;NFSU2_TR(0x764747);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B764748:{NFSU2_TR(0x764748);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x4912acu)[[clang::musttail]] return blk_4912ac(ARGS);if(t__==0x6533e2u)[[clang::musttail]] return blk_6533e2(ARGS);if(t__==0x6535fau)[[clang::musttail]] return blk_6535fa(ARGS);if(t__==0x6536cau)[[clang::musttail]] return blk_6536ca(ARGS););}
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
PN u32 blk_764749(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764749:L764749:{bud-=22;NFSU2_TR(0x764749);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4608),(U+4),8);
}
B76474f:{NFSU2_TR(0x76474f);
__builtin_memmove((R+5056),gp(0x7d7ba0),8);
}
B764757:{NFSU2_TR(0x764757);
__builtin_memmove((R+4736),gp(0x7d7bb0),8);
}
B76475f:{NFSU2_TR(0x76475f);
w8(R+5056,u64(u64(r8(R+5056))&u64(r8(R+4608))));
w8(R+5064,u64(u64(r8(R+5064))&u64(r8(R+4616))));
}
B764763:{NFSU2_TR(0x764763);
__builtin_memmove((R+4864),(R+4608),8);
}
B764767:{NFSU2_TR(0x764767);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x2cull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x2cull))));
}
B76476c:{NFSU2_TR(0x76476c);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4608),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4616),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764771:{NFSU2_TR(0x764771);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4736))));
}
B764775:{NFSU2_TR(0x764775);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+4,u32(r2(U+36)));
}
B76477a:{NFSU2_TR(0x76477a);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B76477f:{NFSU2_TR(0x76477f);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B764782:{NFSU2_TR(0x764782);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1feull))));
}
B764787:{NFSU2_TR(0x764787);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(U+8))));
}
B764790:{NFSU2_TR(0x764790);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4928),(U+8),8);
}
B764799:{NFSU2_TR(0x764799);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B76479b:{NFSU2_TR(0x76479b);
u8 U[40];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4720ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4992),(U+24),8);
__builtin_memmove((R+5000),(U+32),8);
}
B7647a4:{NFSU2_TR(0x7647a4);
w4(R+8,u32(0x7fefull));
}
B7647a9:{NFSU2_TR(0x7647a9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
}
B7647ab:{NFSU2_TR(0x7647ab);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x10ull))));
}
B7647ae:{NFSU2_TR(0x7647ae);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B7647b0:{NFSU2_TR(0x7647b0);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(U+0))<(u32(0x80000000ull))));
}
B7647b6:{NFSU2_TR(0x7647b6);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_764a97(ARGS);}}
}
B7647bc:L7647bc:{bud-=2;NFSU2_TR(0x7647bc);
w4(G+4,u32(0x0ull));
}
B7647c1:{NFSU2_TR(0x7647c1);
w4(R+8,u32(0x3fe7full));
{[[clang::musttail]] return blk_7647c6(ARGS);}
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
PN u32 blk_7647c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7647c6:L7647c6:{bud-=58;NFSU2_TR(0x7647c6);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B7647ca:{NFSU2_TR(0x7647ca);
w8(R+4608,u64(u64(r8(R+4608))-u64(r8(R+4672))));
w8(R+4616,u64(u64(r8(R+4616))-u64(r8(R+4680))));
}
B7647ce:{NFSU2_TR(0x7647ce);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x8ull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x8ull))));
}
B7647d3:{NFSU2_TR(0x7647d3);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
w8(R+4608,b64(double(s64(s32(r4(U+0))))));
w8(R+4616,b64(double(s64(s32(r4(U+4))))));
}
B7647d7:{NFSU2_TR(0x7647d7);
__builtin_memmove((R+4672),gp(0x7d7bf8),8);
}
B7647df:{NFSU2_TR(0x7647df);
__builtin_memmove((R+4800),(R+5056),8);
}
B7647e3:{NFSU2_TR(0x7647e3);
w8(R+5056,shr<u64>(r8(R+5056),u64(u32(0x26ull))));
w8(R+5064,shr<u64>(r8(R+5064),u64(u32(0x26ull))));
}
B7647e8:{NFSU2_TR(0x7647e8);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+5056),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+5064),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B7647ed:{NFSU2_TR(0x7647ed);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7ba0),16);
w8(R+4864,u64(u64(r8(R+4864))&u64(r8(U+0))));
w8(R+4872,u64(u64(r8(R+4872))&u64(r8(U+8))));
}
B7647f5:{NFSU2_TR(0x7647f5);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B7647fa:{NFSU2_TR(0x7647fa);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B7647fd:{NFSU2_TR(0x7647fd);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1feull))));
}
B764802:{NFSU2_TR(0x764802);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4f30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(U+8))));
}
B76480b:{NFSU2_TR(0x76480b);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4f30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4928,b64(f64(r8(R+4928))*f64(r8(U+8))));
}
B764814:{NFSU2_TR(0x764814);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B764816:{NFSU2_TR(0x764816);
u8 U[28];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d5340ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(U+8))));
w4(U+24,u32(u32(r4(U+4))+u32(u32(0x8ull))));
__builtin_memmove((U+16),gp(u32(r4(U+24))),8);
w8(R+5000,b64(f64(r8(R+5000))+f64(r8(U+16))));
}
B76481f:{NFSU2_TR(0x76481f);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>(gp(0x7d7bb0))));
}
B764827:{NFSU2_TR(0x764827);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(R+4608))));
}
B76482b:{NFSU2_TR(0x76482b);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(R+4864))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(R+4872))));
}
B76482f:{NFSU2_TR(0x76482f);
__builtin_memmove((R+4736),(R+4800),8);
}
B764833:{NFSU2_TR(0x764833);
w8(R+4800,shr<u64>(r8(R+4800),u64(u32(0x1full))));
w8(R+4808,shr<u64>(r8(R+4808),u64(u32(0x1full))));
}
B764838:{NFSU2_TR(0x764838);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4800),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4808),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B76483d:{NFSU2_TR(0x76483d);
__builtin_memmove((R+4608),gp(0x7d7bf8),8);
}
B764845:{NFSU2_TR(0x764845);
w8(R+4864,b64(f64(r8(R+4864))-f64(r8(R+4672))));
}
B764849:{NFSU2_TR(0x764849);
__builtin_memmove((R+5056),gp(0x7d7c00),8);
}
B764851:{NFSU2_TR(0x764851);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1ffull))));
}
B764856:{NFSU2_TR(0x764856);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B764859:{NFSU2_TR(0x764859);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x3feull))));
}
B76485e:{NFSU2_TR(0x76485e);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d5b50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4928,b64(f64(r8(R+4928))*f64(r8(U+8))));
}
B764867:{NFSU2_TR(0x764867);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d5b50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(U+8))));
}
B764870:{NFSU2_TR(0x764870);
u8 U[28];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7d6360ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(U+8))));
w4(U+24,u32(u32(r4(U+4))+u32(u32(0x8ull))));
__builtin_memmove((U+16),gp(u32(r4(U+24))),8);
w8(R+5000,b64(f64(r8(R+5000))+f64(r8(U+16))));
}
B764879:{NFSU2_TR(0x764879);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(R+4928))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(R+4936))));
}
B76487d:{NFSU2_TR(0x76487d);
w8(R+4928,b64(f64(r8(R+4928))-f64(r8(R+4608))));
}
B764881:{NFSU2_TR(0x764881);
w8(R+5056,b64(f64(r8(R+5056))+f64(r8(R+4736))));
}
B764885:{NFSU2_TR(0x764885);
__builtin_memmove((R+4800),(R+4608),8);
}
B764889:{NFSU2_TR(0x764889);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4672))));
}
B76488d:{NFSU2_TR(0x76488d);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+4928))));
}
B764891:{NFSU2_TR(0x764891);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4864))));
}
B764895:{NFSU2_TR(0x764895);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4608))));
}
B764899:{NFSU2_TR(0x764899);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4928))));
}
B76489d:{NFSU2_TR(0x76489d);
__builtin_memmove((R+4608),(R+4992),8);
}
B7648a1:{NFSU2_TR(0x7648a1);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4672))));
}
B7648a5:{NFSU2_TR(0x7648a5);
w8(R+4992,b64(f64(r8(R+4992))+f64(r8(R+5056))));
}
B7648a9:{NFSU2_TR(0x7648a9);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B7648af:{NFSU2_TR(0x7648af);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B7648b4:{NFSU2_TR(0x7648b4);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4800))));
}
B7648b8:{NFSU2_TR(0x7648b8);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4992))));
}
B7648bc:{NFSU2_TR(0x7648bc);
__builtin_memmove((R+4800),gp(0x7d7bf8),8);
}
B7648c4:{NFSU2_TR(0x7648c4);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4992),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+5000),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+8,u32(r2(U+36)));
}
B7648c9:{NFSU2_TR(0x7648c9);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4864))));
}
B7648cd:{NFSU2_TR(0x7648cd);
__builtin_memmove((R+4864),(R+4992),8);
}
B7648d1:{NFSU2_TR(0x7648d1);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+5056))));
}
B7648d5:{NFSU2_TR(0x7648d5);
w8(R+5056,b64(f64(r8(R+5056))-f64(r8(R+4736))));
}
B7648d9:{NFSU2_TR(0x7648d9);
w8(R+4992,b64(f64(r8(R+4992))-f64(r8(R+4736))));
}
B7648dd:{NFSU2_TR(0x7648dd);
__builtin_memmove((R+5064),(R+5056),8);
}
B7648e1:{NFSU2_TR(0x7648e1);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7ff0ull))));
}
B7648e6:{NFSU2_TR(0x7648e6);
w1(F+0,u8((r4(G+0))<(u32(0x7ff0ull))));
}
B7648eb:{NFSU2_TR(0x7648eb);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_764e08(ARGS);}}
}
B7648f1:L7648f1:{bud-=9;NFSU2_TR(0x7648f1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ff0ull))));
}
B7648f7:{NFSU2_TR(0x7648f7);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x3ff0ull))));
}
B7648fc:{NFSU2_TR(0x7648fc);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B7648fe:{NFSU2_TR(0x7648fe);
w4(R+8,u32(0x40a0ull));
}
B764903:{NFSU2_TR(0x764903);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+0))));
}
B764905:{NFSU2_TR(0x764905);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x3c70ull))));
}
B76490a:{NFSU2_TR(0x76490a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B76490c:{NFSU2_TR(0x76490c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(U+0))<(u32(0x80000000ull))));
}
B764912:{NFSU2_TR(0x764912);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_7651f1(ARGS);}}
{[[clang::musttail]] return blk_764918(ARGS);}
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
PN u32 blk_764918(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764918:L764918:{bud-=30;NFSU2_TR(0x764918);
w8(R+4864,b64(f64(r8(R+4864))-f64(r8(R+4992))));
}
B76491c:{NFSU2_TR(0x76491c);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4864))));
}
B764920:{NFSU2_TR(0x764920);
__builtin_memmove((R+4864),gp(0x7d7bf8),8);
}
B764928:{NFSU2_TR(0x764928);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4672))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4680))));
}
B76492c:{NFSU2_TR(0x76492c);
w8(R+4864,u64(u64(r8(R+4864))&u64(r8(R+4992))));
w8(R+4872,u64(u64(r8(R+4872))&u64(r8(R+5000))));
}
B764930:{NFSU2_TR(0x764930);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4736))));
}
B764934:{NFSU2_TR(0x764934);
w8(R+4736,u64(u64(r8(R+4736))^u64(r8(R+4736))));
w8(R+4744,u64(u64(r8(R+4744))^u64(r8(R+4744))));
}
B764938:{NFSU2_TR(0x764938);
w4(R+8,u32(0x4060ull));
}
B76493d:{NFSU2_TR(0x76493d);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(R+8)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+4736))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(R+8)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+4744))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4736))));
w8(R+4736,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4744))));
w8(R+4744,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B764942:{NFSU2_TR(0x764942);
__builtin_memmove((R+4928),(R+4800),8);
}
B764946:{NFSU2_TR(0x764946);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4864))));
}
B76494a:{NFSU2_TR(0x76494a);
w8(R+4992,b64(f64(r8(R+4992))-f64(r8(R+4864))));
}
B76494e:{NFSU2_TR(0x76494e);
w8(R+4672,b64(f64(r8(R+4672))-f64(r8(R+4928))));
}
B764952:{NFSU2_TR(0x764952);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4736))));
}
B764956:{NFSU2_TR(0x764956);
w8(R+4928,b64(f64(r8(R+4928))*f64(r8(R+4992))));
}
B76495a:{NFSU2_TR(0x76495a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7370),16);
__builtin_memmove((R+4736),(U+0),8);
__builtin_memmove((R+4744),(U+8),8);
}
B764962:{NFSU2_TR(0x764962);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4672))));
}
B764966:{NFSU2_TR(0x764966);
u8 U[8];
wv<8>((U+0),float_op("ROUND",rv<8>((R+4800)),8,V(0x0ull),4,8));
wv<4>((G+0),float_op("TRUNC",rv<8>((U+0)),8,V(0x0ull),4,4));
}
B76496a:{NFSU2_TR(0x76496a);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4672))));
}
B76496e:{NFSU2_TR(0x76496e);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7380),16);
__builtin_memmove((R+4672),(U+0),8);
__builtin_memmove((R+4680),(U+8),8);
}
B764976:{NFSU2_TR(0x764976);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4864))));
}
B76497a:{NFSU2_TR(0x76497a);
u8 U[60];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
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
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B76497f:{NFSU2_TR(0x76497f);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4992))));
}
B764983:{NFSU2_TR(0x764983);
w4(R+8,u32(0x1ff7full));
}
B764988:{NFSU2_TR(0x764988);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+0))));
}
B76498a:{NFSU2_TR(0x76498a);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1e1ffull))));
}
B76498f:{NFSU2_TR(0x76498f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B764991:{NFSU2_TR(0x764991);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1e1ffull))));
}
B764996:{NFSU2_TR(0x764996);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764999:{NFSU2_TR(0x764999);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764f81(ARGS);}}
}
B76499f:L76499f:{bud-=54;NFSU2_TR(0x76499f);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B7649a1:{NFSU2_TR(0x7649a1);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7full))));
}
B7649a4:{NFSU2_TR(0x7649a4);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xffffff80ull))));
}
B7649a7:{NFSU2_TR(0x7649a7);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ff80ull))));
}
B7649ad:{NFSU2_TR(0x7649ad);
w8(R+4864,b64(f64(r8(R+4864))+f64(r8(R+4608))));
}
B7649b1:{NFSU2_TR(0x7649b1);
__builtin_memmove((R+4608),(R+4800),8);
}
B7649b5:{NFSU2_TR(0x7649b5);
w8(R+4800,b64(f64(r8(R+4800))+f64(m8(0x7d7b90))));
}
B7649bd:{NFSU2_TR(0x7649bd);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+5056))));
w8(R+4744,b64(f64(r8(R+4744))*f64(r8(R+5064))));
}
B7649c1:{NFSU2_TR(0x7649c1);
w8(R+4800,b64(f64(r8(R+4800))-f64(m8(0x7d7b90))));
}
B7649c9:{NFSU2_TR(0x7649c9);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(R+5056))));
w8(R+5064,b64(f64(r8(R+5064))*f64(r8(R+5064))));
}
B7649cd:{NFSU2_TR(0x7649cd);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4800))));
}
B7649d1:{NFSU2_TR(0x7649d1);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B7649d3:{NFSU2_TR(0x7649d3);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B7649d5:{NFSU2_TR(0x7649d5);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B7649d7:{NFSU2_TR(0x7649d7);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B7649d9:{NFSU2_TR(0x7649d9);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7d7390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),8);
__builtin_memmove((R+4808),(U+28),8);
}
B7649e1:{NFSU2_TR(0x7649e1);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bd0),16);
__builtin_memmove((R+4992),(U+0),8);
__builtin_memmove((R+5000),(U+8),8);
}
B7649e9:{NFSU2_TR(0x7649e9);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+5056))));
w8(R+4680,b64(f64(r8(R+4680))*f64(r8(R+5064))));
}
B7649ed:{NFSU2_TR(0x7649ed);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4672))));
w8(R+4744,b64(f64(r8(R+4744))+f64(r8(R+4680))));
}
B7649f1:{NFSU2_TR(0x7649f1);
u8 U[60];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
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
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B7649f6:{NFSU2_TR(0x7649f6);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+5056))));
}
B7649fa:{NFSU2_TR(0x7649fa);
w8(R+5056,u64(u64(r8(R+5056))^u64(r8(R+5056))));
w8(R+5064,u64(u64(r8(R+5064))^u64(r8(R+5064))));
}
B7649fe:{NFSU2_TR(0x7649fe);
w4(R+8,u32(0x3f80ull));
}
B764a03:{NFSU2_TR(0x764a03);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4672))));
}
B764a07:{NFSU2_TR(0x764a07);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(R+8)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+5056))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(R+8)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+5064))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+5056))));
w8(R+5056,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+5064))));
w8(R+5064,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B764a0c:{NFSU2_TR(0x764a0c);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4864))));
}
B764a10:{NFSU2_TR(0x764a10);
__builtin_memmove((R+4864),gp(0x7d7bf0),8);
}
B764a18:{NFSU2_TR(0x764a18);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,4>(rv<4>((G+4))));
}
B764a1c:{NFSU2_TR(0x764a1c);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(U+4))));
}
B764a22:{NFSU2_TR(0x764a22);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B764a26:{NFSU2_TR(0x764a26);
w8(R+4672,shl<u64>(r8(R+4672),u64(u32(0x2dull))));
w8(R+4680,shl<u64>(r8(R+4680),u64(u32(0x2dull))));
}
B764a2b:{NFSU2_TR(0x764a2b);
u8 U[60];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
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
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
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
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B764a30:{NFSU2_TR(0x764a30);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7be0),16);
__builtin_memmove((R+5056),(U+0),8);
__builtin_memmove((R+5064),(U+8),8);
}
B764a38:{NFSU2_TR(0x764a38);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4736))));
}
B764a3c:{NFSU2_TR(0x764a3c);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4672))));
w8(R+4808,b64(f64(r8(R+4808))*f64(r8(R+4680))));
}
B764a40:{NFSU2_TR(0x764a40);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4928))));
}
B764a44:{NFSU2_TR(0x764a44);
__builtin_memmove((R+4616),(R+4608),8);
}
B764a48:{NFSU2_TR(0x764a48);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4608))));
w8(R+5000,b64(f64(r8(R+5000))*f64(r8(R+4616))));
}
B764a4c:{NFSU2_TR(0x764a4c);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4608))));
}
B764a50:{NFSU2_TR(0x764a50);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
w8(R+4616,b64(f64(r8(R+4616))*f64(r8(R+4616))));
}
B764a54:{NFSU2_TR(0x764a54);
w8(R+5056,b64(f64(r8(R+5056))+f64(r8(R+4992))));
w8(R+5064,b64(f64(r8(R+5064))+f64(r8(R+5000))));
}
B764a58:{NFSU2_TR(0x764a58);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(R+4608))));
w8(R+5064,b64(f64(r8(R+5064))*f64(r8(R+4616))));
}
B764a5c:{NFSU2_TR(0x764a5c);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4800))));
}
B764a60:{NFSU2_TR(0x764a60);
u8 U[60];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
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
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
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
B764a65:{NFSU2_TR(0x764a65);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B764a69:{NFSU2_TR(0x764a69);
u8 U[60];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
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
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
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
B764a6e:{NFSU2_TR(0x764a6e);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4800))));
}
B764a72:{NFSU2_TR(0x764a72);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4800))));
}
B764a76:{NFSU2_TR(0x764a76);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4928))));
}
B764a7a:{NFSU2_TR(0x764a7a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x10ull))));
}
B764a7d:{NFSU2_TR(0x764a7d);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4992))));
}
B764a81:{NFSU2_TR(0x764a81);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4864))));
}
B764a85:{NFSU2_TR(0x764a85);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4800))));
}
B764a89:{NFSU2_TR(0x764a89);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_764a8f(ARGS);}
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
PN u32 blk_764a8f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764a8f:L764a8f:{bud-=3;NFSU2_TR(0x764a8f);
{u32 ea_=u32(r4(G+16)+u32(4u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B764a93:{NFSU2_TR(0x764a93);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x10ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x10ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764a96:{NFSU2_TR(0x764a96);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764a97(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764a97:L764a97:{bud-=9;NFSU2_TR(0x764a97);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764a9d:{NFSU2_TR(0x764a9d);
__builtin_memmove((R+4800),gp(0x7d7bc0),8);
}
B764aa5:{NFSU2_TR(0x764aa5);
wv<4>((G+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4672)),V(0x0ull)));
}
B764aa9:{NFSU2_TR(0x764aa9);
__builtin_memmove((R+4736),(R+4672),8);
}
B764aad:{NFSU2_TR(0x764aad);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(R+4800))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(R+4808))));
}
B764ab1:{NFSU2_TR(0x764ab1);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x20ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x20ull))));
}
B764ab6:{NFSU2_TR(0x764ab6);
wv<4>((G+4),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4672)),V(0x0ull)));
}
B764aba:{NFSU2_TR(0x764aba);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(U+0))<(u32(0x7ff00000ull))));
}
B764ac0:{NFSU2_TR(0x764ac0);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_764ba0(ARGS);}}
}
B764ac6:L764ac6:{bud-=3;NFSU2_TR(0x764ac6);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B764ac8:{NFSU2_TR(0x764ac8);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764acb:{NFSU2_TR(0x764acb);
if(r1(F+6)){{[[clang::musttail]] return blk_764ee4(ARGS);}}
}
B764ad1:L764ad1:{bud-=2;NFSU2_TR(0x764ad1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B764ad4:{NFSU2_TR(0x764ad4);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_764bdf(ARGS);}}
}
B764ada:L764ada:{bud-=17;NFSU2_TR(0x764ada);
w4(R+8,u32(0-u32(r4(R+8))));
}
B764adc:{NFSU2_TR(0x764adc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7fefull))));
}
B764ae2:{NFSU2_TR(0x764ae2);
w8(R+4800,shl<u64>(r8(R+4800),u64(u32(0x34ull))));
w8(R+4808,shl<u64>(r8(R+4808),u64(u32(0x34ull))));
}
B764ae7:{NFSU2_TR(0x764ae7);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4800))));
}
B764aeb:{NFSU2_TR(0x764aeb);
w4(G+4,u32(0x3f3ull));
}
B764af0:{NFSU2_TR(0x764af0);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,4>(rv<4>((G+4))));
}
B764af4:{NFSU2_TR(0x764af4);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x14ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x14ull))));
}
B764af9:{NFSU2_TR(0x764af9);
w4(R+4672,u32(u32(r4(R+4672))-u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))-u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))-u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))-u32(r4(R+4812))));
}
B764afd:{NFSU2_TR(0x764afd);
wv<16>((R+4800),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4800))));
}
B764b01:{NFSU2_TR(0x764b01);
u8 U[33];
__builtin_memmove((U+9),(R+4800),16);
w1(U+25,u8(s16(r2(R+4672))<s16(r2(U+9))));
w2(U+0,u16(r1(U+25)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+9))));
w1(U+4,u8(!(r1(U+25))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4672))));
w2(R+4672,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+26,u8(s16(r2(R+4674))<s16(r2(U+11))));
w2(U+0,u16(r1(U+26)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+11))));
w1(U+4,u8(!(r1(U+26))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4674))));
w2(R+4674,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+27,u8(s16(r2(R+4676))<s16(r2(U+13))));
w2(U+0,u16(r1(U+27)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+13))));
w1(U+4,u8(!(r1(U+27))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4676))));
w2(R+4676,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+28,u8(s16(r2(R+4678))<s16(r2(U+15))));
w2(U+0,u16(r1(U+28)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+15))));
w1(U+4,u8(!(r1(U+28))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4678))));
w2(R+4678,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+29,u8(s16(r2(R+4680))<s16(r2(U+17))));
w2(U+0,u16(r1(U+29)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+17))));
w1(U+4,u8(!(r1(U+29))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4680))));
w2(R+4680,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+30,u8(s16(r2(R+4682))<s16(r2(U+19))));
w2(U+0,u16(r1(U+30)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+19))));
w1(U+4,u8(!(r1(U+30))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4682))));
w2(R+4682,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+31,u8(s16(r2(R+4684))<s16(r2(U+21))));
w2(U+0,u16(r1(U+31)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+21))));
w1(U+4,u8(!(r1(U+31))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4684))));
w2(R+4684,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+32,u8(s16(r2(R+4686))<s16(r2(U+23))));
w2(U+0,u16(r1(U+32)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+23))));
w1(U+4,u8(!(r1(U+32))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4686))));
w2(R+4686,u16(u32(r2(U+2))|u32(r2(U+7))));
}
B764b05:{NFSU2_TR(0x764b05);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
w8(R+4736,shl<u64>(r8(R+4736),u64(r8(U+0))));
w8(R+4744,shl<u64>(r8(R+4744),u64(r8(U+0))));
}
B764b09:{NFSU2_TR(0x764b09);
u8 U[20];
w1(U+0,u8((r4(R+4736))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4736,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4740))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4740,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4744))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4744,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4748))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4748,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764b0d:{NFSU2_TR(0x764b0d);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(G+0,u32(r2(U+0)));
}
B764b11:{NFSU2_TR(0x764b11);
__builtin_memmove((G+4),(R+8),4);
}
B764b13:{NFSU2_TR(0x764b13);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B764b19:{NFSU2_TR(0x764b19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(U+0))<(u32(0x7ff0ull))));
}
B764b1f:{NFSU2_TR(0x764b1f);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_764cc8(ARGS);}}
}
B764b25:L764b25:{bud-=3;NFSU2_TR(0x764b25);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B764b2a:{NFSU2_TR(0x764b2a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xffull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764b2f:{NFSU2_TR(0x764b2f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764dc1(ARGS);}}
}
B764b35:L764b35:{bud-=17;NFSU2_TR(0x764b35);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764b3b:{NFSU2_TR(0x764b3b);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764b41:{NFSU2_TR(0x764b41);
w4(G+4,u32(0x3f4ull));
}
B764b46:{NFSU2_TR(0x764b46);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,4>(rv<4>((G+4))));
}
B764b4a:{NFSU2_TR(0x764b4a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bc0),16);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(U+0))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(U+8))));
}
B764b52:{NFSU2_TR(0x764b52);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x34ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x34ull))));
}
B764b57:{NFSU2_TR(0x764b57);
w4(R+4672,u32(u32(r4(R+4672))-u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))-u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))-u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))-u32(r4(R+4812))));
}
B764b5b:{NFSU2_TR(0x764b5b);
__builtin_memmove((R+4800),gp(0x7d7c20),8);
}
B764b63:{NFSU2_TR(0x764b63);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
w8(R+4736,shl<u64>(r8(R+4736),u64(r8(U+0))));
w8(R+4744,shl<u64>(r8(R+4744),u64(r8(U+0))));
}
B764b67:{NFSU2_TR(0x764b67);
u8 U[20];
w1(U+0,u8((r4(R+4736))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4736,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4740))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4740,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4744))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4744,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4748))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4748,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764b6b:{NFSU2_TR(0x764b6b);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(G+0,u32(r2(U+0)));
}
B764b6f:{NFSU2_TR(0x764b6f);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B764b74:{NFSU2_TR(0x764b74);
w4(G+4,u32(0x3ff01ull));
}
B764b79:{NFSU2_TR(0x764b79);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B764b7b:{NFSU2_TR(0x764b7b);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x40000ull))));
}
B764b81:{NFSU2_TR(0x764b81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(U+0))<(u32(0x10ull))));
}
B764b84:{NFSU2_TR(0x764b84);
if(r1(F+0)){{[[clang::musttail]] return blk_764be4(ARGS);}}
}
B764b86:L764b86:{bud-=4;NFSU2_TR(0x764b86);
w4(R+8,u32(0xbfe7full));
}
B764b8b:{NFSU2_TR(0x764b8b);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764b93:{NFSU2_TR(0x764b93);
__builtin_memmove((R+4736),gp(0x7d7bb0),8);
}
B764b9b:{NFSU2_TR(0x764b9b);
{if(__builtin_expect(bud<=0,0)){EXIT(0x7647c6u);}[[clang::musttail]] return blk_7647c6(ARGS);}
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
PN u32 blk_764ba0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764ba0:L764ba0:{bud-=9;NFSU2_TR(0x764ba0);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+5056),(U+4),8);
}
B764ba6:{NFSU2_TR(0x764ba6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B764bac:{NFSU2_TR(0x764bac);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+5056)),V(0x0ull)));
}
B764bb0:{NFSU2_TR(0x764bb0);
w8(R+5056,shr<u64>(r8(R+5056),u64(u32(0x20ull))));
w8(R+5064,shr<u64>(r8(R+5064),u64(u32(0x20ull))));
}
B764bb5:{NFSU2_TR(0x764bb5);
wv<4>((G+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+5056)),V(0x0ull)));
}
B764bb9:{NFSU2_TR(0x764bb9);
__builtin_memmove((G+4),(G+0),4);
}
B764bbb:{NFSU2_TR(0x764bbb);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7fffffffull))));
}
B764bc0:{NFSU2_TR(0x764bc0);
u8 U[4];
w1(F+0,u8((r4(G+0))<(u32(0x7ff00000ull))));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x7ff00000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764bc5:{NFSU2_TR(0x764bc5);
if(r1(F+0)){{[[clang::musttail]] return blk_764e5c(ARGS);}}
}
B764bcb:L764bcb:{bud-=1;NFSU2_TR(0x764bcb);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764daf(ARGS);}}
}
B764bd1:L764bd1:{bud-=2;NFSU2_TR(0x764bd1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(U+0))<(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764bd4:{NFSU2_TR(0x764bd4);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764daf(ARGS);}}
}
B764bda:L764bda:{bud-=1;NFSU2_TR(0x764bda);
{[[clang::musttail]] return blk_764e5c(ARGS);}
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
PN u32 blk_764bdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764bdf:L764bdf:{bud-=1;NFSU2_TR(0x764bdf);
w4(G+4,u32(0x0ull));
{[[clang::musttail]] return blk_764be4(ARGS);}
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
PN u32 blk_764be4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764be4:L764be4:{bud-=11;NFSU2_TR(0x764be4);
w8(R+4608,u64(u64(r8(R+4608))^u64(r8(R+4608))));
w8(R+4616,u64(u64(r8(R+4616))^u64(r8(R+4616))));
}
B764be8:{NFSU2_TR(0x764be8);
w4(G+0,u32(0x43f0ull));
}
B764bed:{NFSU2_TR(0x764bed);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(G+0)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+4608))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(G+0)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+4616))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4608))));
w8(R+4608,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4616))));
w8(R+4616,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B764bf2:{NFSU2_TR(0x764bf2);
__builtin_memmove((R+5056),gp(0x7d7ba0),8);
}
B764bfa:{NFSU2_TR(0x764bfa);
__builtin_memmove((R+4736),gp(0x7d7bb0),8);
}
B764c02:{NFSU2_TR(0x764c02);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4864))));
}
B764c06:{NFSU2_TR(0x764c06);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764c0a:{NFSU2_TR(0x764c0a);
w8(R+4864,shr<u64>(r8(R+4864),u64(u32(0x20ull))));
w8(R+4872,shr<u64>(r8(R+4872),u64(u32(0x20ull))));
}
B764c0f:{NFSU2_TR(0x764c0f);
wv<4>((G+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764c13:{NFSU2_TR(0x764c13);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764c16:{NFSU2_TR(0x764c16);
if(r1(F+6)){{[[clang::musttail]] return blk_764c6a(ARGS);}}
{[[clang::musttail]] return blk_764c18(ARGS);}
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
PN u32 blk_764c18(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764c18:L764c18:{bud-=15;NFSU2_TR(0x764c18);
w8(R+5056,u64(u64(r8(R+5056))&u64(r8(R+4608))));
w8(R+5064,u64(u64(r8(R+5064))&u64(r8(R+4616))));
}
B764c1c:{NFSU2_TR(0x764c1c);
__builtin_memmove((R+4864),(R+4608),8);
}
B764c20:{NFSU2_TR(0x764c20);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bc0),16);
w8(R+4608,u64(u64(r8(R+4608))&u64(r8(U+0))));
w8(R+4616,u64(u64(r8(R+4616))&u64(r8(U+8))));
}
B764c28:{NFSU2_TR(0x764c28);
w8(R+4608,shr<u64>(r8(R+4608),u64(u32(0x2cull))));
w8(R+4616,shr<u64>(r8(R+4616),u64(u32(0x2cull))));
}
B764c2d:{NFSU2_TR(0x764c2d);
u8 U[61];
w1(U+33,u8(u32(u8(0x0ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4608),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4616),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764c32:{NFSU2_TR(0x764c32);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4736))));
}
B764c36:{NFSU2_TR(0x764c36);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B764c3b:{NFSU2_TR(0x764c3b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B764c3e:{NFSU2_TR(0x764c3e);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1feull))));
}
B764c43:{NFSU2_TR(0x764c43);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(U+8))));
}
B764c4c:{NFSU2_TR(0x764c4c);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4310ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4928),(U+8),8);
}
B764c55:{NFSU2_TR(0x764c55);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B764c57:{NFSU2_TR(0x764c57);
u8 U[40];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d4720ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4992),(U+24),8);
__builtin_memmove((R+5000),(U+32),8);
}
B764c60:{NFSU2_TR(0x764c60);
w4(R+8,u32(0x43e7full));
}
B764c65:{NFSU2_TR(0x764c65);
{if(__builtin_expect(bud<=0,0)){EXIT(0x7647c6u);}[[clang::musttail]] return blk_7647c6(ARGS);}
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
PN u32 blk_764c6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764c6a:L764c6a:{bud-=4;NFSU2_TR(0x764c6a);
__builtin_memmove((R+8),(G+0),4);
}
B764c6c:{NFSU2_TR(0x764c6c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B764c72:{NFSU2_TR(0x764c72);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764c75:{NFSU2_TR(0x764c75);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764c18u);}[[clang::musttail]] return blk_764c18(ARGS);}}
}
B764c77:L764c77:{bud-=4;NFSU2_TR(0x764c77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B764c7b:{NFSU2_TR(0x764c7b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000000ull))));
}
B764c81:{NFSU2_TR(0x764c81);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764c84:{NFSU2_TR(0x764c84);
if(r1(F+6)){{[[clang::musttail]] return blk_764cb7(ARGS);}}
}
B764c86:L764c86:{bud-=11;NFSU2_TR(0x764c86);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B764c89:{NFSU2_TR(0x764c89);
w4(G+0,u32(u32(r4(G+0))&u32(r4(G+4))));
}
B764c8b:{NFSU2_TR(0x764c8b);
w4(R+8,u32(0x7ff00000ull));
}
B764c90:{NFSU2_TR(0x764c90);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B764c92:{NFSU2_TR(0x764c92);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B764c96:{NFSU2_TR(0x764c96);
w8(R+4608,shl<u64>(r8(R+4608),u64(u32(0x20ull))));
w8(R+4616,shl<u64>(r8(R+4616),u64(u32(0x20ull))));
}
B764c9b:{NFSU2_TR(0x764c9b);
__builtin_memmove((R+4672),gp(0x7d7bb0),8);
}
B764ca3:{NFSU2_TR(0x764ca3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764ca9:{NFSU2_TR(0x764ca9);
w8(R+4672,b64(f64(r8(R+4672))/f64(r8(R+4736))));
}
B764cad:{NFSU2_TR(0x764cad);
w4(R+8,u32(0x1bull));
}
B764cb2:{NFSU2_TR(0x764cb2);
{[[clang::musttail]] return blk_764f51(ARGS);}
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
PN u32 blk_764cb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764cb7:L764cb7:{bud-=4;NFSU2_TR(0x764cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B764cba:{NFSU2_TR(0x764cba);
w4(G+0,u32(u32(r4(G+0))&u32(r4(G+4))));
}
B764cbc:{NFSU2_TR(0x764cbc);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764cbf:{NFSU2_TR(0x764cbf);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764d69(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764cc5(ARGS);}
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
PN u32 blk_764cc5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764cc5:L764cc5:{bud-=2;NFSU2_TR(0x764cc5);
__asm__ volatile(".byte 0xd9,0xee"::);
}
B764cc7:{NFSU2_TR(0x764cc7);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764cc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764cc8:L764cc8:{bud-=8;NFSU2_TR(0x764cc8);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764cd0:{NFSU2_TR(0x764cd0);
w8(R+4672,u64(u64(r8(R+4672))^u64(r8(R+4672))));
w8(R+4680,u64(u64(r8(R+4680))^u64(r8(R+4680))));
}
B764cd4:{NFSU2_TR(0x764cd4);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4864))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4872))));
}
B764cd8:{NFSU2_TR(0x764cd8);
u8 U[20];
w1(U+0,u8((r4(R+4672))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4672,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4676))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4676,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4680))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4680,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4684))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4684,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764cdc:{NFSU2_TR(0x764cdc);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(G+4,u32(r2(U+0)));
}
B764ce0:{NFSU2_TR(0x764ce0);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xffull))));
}
B764ce6:{NFSU2_TR(0x764ce6);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764cec:{NFSU2_TR(0x764cec);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764daf(ARGS);}}
}
B764cf2:L764cf2:{bud-=4;NFSU2_TR(0x764cf2);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+4,u32(r2(U+36)));
}
B764cf7:{NFSU2_TR(0x764cf7);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x8000ull))));
}
B764cfd:{NFSU2_TR(0x764cfd);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764d00:{NFSU2_TR(0x764d00);
if(r1(F+6)){{[[clang::musttail]] return blk_764d93(ARGS);}}
}
B764d06:L764d06:{bud-=3;NFSU2_TR(0x764d06);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B764d0b:{NFSU2_TR(0x764d0b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xffull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764d10:{NFSU2_TR(0x764d10);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764d77(ARGS);}}
}
B764d12:L764d12:{bud-=14;NFSU2_TR(0x764d12);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d18:{NFSU2_TR(0x764d18);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764d1e:{NFSU2_TR(0x764d1e);
w4(G+4,u32(0x3f4ull));
}
B764d23:{NFSU2_TR(0x764d23);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,4>(rv<4>((G+4))));
}
B764d27:{NFSU2_TR(0x764d27);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bc0),16);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(U+0))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(U+8))));
}
B764d2f:{NFSU2_TR(0x764d2f);
w8(R+4672,shr<u64>(r8(R+4672),u64(u32(0x34ull))));
w8(R+4680,shr<u64>(r8(R+4680),u64(u32(0x34ull))));
}
B764d34:{NFSU2_TR(0x764d34);
w4(R+4672,u32(u32(r4(R+4672))-u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))-u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))-u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))-u32(r4(R+4812))));
}
B764d38:{NFSU2_TR(0x764d38);
wv<16>((R+4800),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4800))));
}
B764d3c:{NFSU2_TR(0x764d3c);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
w8(R+4736,shl<u64>(r8(R+4736),u64(r8(U+0))));
w8(R+4744,shl<u64>(r8(R+4744),u64(r8(U+0))));
}
B764d40:{NFSU2_TR(0x764d40);
u8 U[20];
w1(U+0,u8((r4(R+4736))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4736,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4740))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4740,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4744))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4744,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4748))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4748,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764d44:{NFSU2_TR(0x764d44);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(G+0,u32(r2(U+0)));
}
B764d48:{NFSU2_TR(0x764d48);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B764d4d:{NFSU2_TR(0x764d4d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xffull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764d52:{NFSU2_TR(0x764d52);
if(r1(F+6)){{[[clang::musttail]] return blk_764d77(ARGS);}}
}
B764d54:L764d54:{bud-=5;NFSU2_TR(0x764d54);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d5a:{NFSU2_TR(0x764d5a);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764d5f:{NFSU2_TR(0x764d5f);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x8000ull))));
}
B764d64:{NFSU2_TR(0x764d64);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764d67:{NFSU2_TR(0x764d67);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764d70(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764d69(ARGS);}
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
PN u32 blk_764d69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764d69:L764d69:{bud-=2;NFSU2_TR(0x764d69);
{u32 ea_=u32(u32(8223776u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B764d6f:{NFSU2_TR(0x764d6f);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764d70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764d70:L764d70:{bud-=2;NFSU2_TR(0x764d70);
{u32 ea_=u32(u32(8223768u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B764d76:{NFSU2_TR(0x764d76);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764d77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764d77:L764d77:{bud-=5;NFSU2_TR(0x764d77);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d7d:{NFSU2_TR(0x764d7d);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764d82:{NFSU2_TR(0x764d82);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x8000ull))));
}
B764d87:{NFSU2_TR(0x764d87);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764d8a:{NFSU2_TR(0x764d8a);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764ece(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764d90(ARGS);}
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
PN u32 blk_764d90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764d90:L764d90:{bud-=2;NFSU2_TR(0x764d90);
__asm__ volatile(".byte 0xd9,0xee"::);
}
B764d92:{NFSU2_TR(0x764d92);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764d93(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764d93:L764d93:{bud-=5;NFSU2_TR(0x764d93);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B764d99:{NFSU2_TR(0x764d99);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764d9e:{NFSU2_TR(0x764d9e);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x8000ull))));
}
B764da3:{NFSU2_TR(0x764da3);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764da6:{NFSU2_TR(0x764da6);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764ece(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764dac(ARGS);}
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
PN u32 blk_764dac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764dac:L764dac:{bud-=2;NFSU2_TR(0x764dac);
__asm__ volatile(".byte 0xd9,0xee"::);
}
B764dae:{NFSU2_TR(0x764dae);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764daf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764daf:L764daf:{bud-=4;NFSU2_TR(0x764daf);
w8(R+4864,b64(f64(r8(R+4864))+f64(r8(R+4864))));
}
B764db3:{NFSU2_TR(0x764db3);
__builtin_memmove((R+4608),(R+4864),8);
}
B764db7:{NFSU2_TR(0x764db7);
w4(R+8,u32(0x3eeull));
}
B764dbc:{NFSU2_TR(0x764dbc);
{[[clang::musttail]] return blk_764f51(ARGS);}
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
PN u32 blk_764dc1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764dc1:L764dc1:{bud-=9;NFSU2_TR(0x764dc1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764dc7:{NFSU2_TR(0x764dc7);
wv<4>((G+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4736)),V(0x0ull)));
}
B764dcb:{NFSU2_TR(0x764dcb);
w8(R+4736,shr<u64>(r8(R+4736),u64(u32(0x20ull))));
w8(R+4744,shr<u64>(r8(R+4744),u64(u32(0x20ull))));
}
B764dd0:{NFSU2_TR(0x764dd0);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4736)),V(0x0ull)));
}
B764dd4:{NFSU2_TR(0x764dd4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B764dda:{NFSU2_TR(0x764dda);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B764ddc:{NFSU2_TR(0x764ddc);
w4(G+4,u32(0x0ull));
}
B764de1:{NFSU2_TR(0x764de1);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764de4:{NFSU2_TR(0x764de4);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x764c6au);}[[clang::musttail]] return blk_764c6a(ARGS);}}
}
B764dea:L764dea:{bud-=5;NFSU2_TR(0x764dea);
__builtin_memmove((R+4672),gp(0x7d7c08),8);
}
B764df2:{NFSU2_TR(0x764df2);
__builtin_memmove((R+4608),gp(0x7d7c30),8);
}
B764dfa:{NFSU2_TR(0x764dfa);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+4672))));
}
B764dfe:{NFSU2_TR(0x764dfe);
w4(R+8,u32(0x1cull));
}
B764e03:{NFSU2_TR(0x764e03);
{[[clang::musttail]] return blk_764f51(ARGS);}
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
PN u32 blk_764e08(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764e08:L764e08:{bud-=5;NFSU2_TR(0x764e08);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B764e0e:{NFSU2_TR(0x764e0e);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B764e14:{NFSU2_TR(0x764e14);
wv<4>((G+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764e18:{NFSU2_TR(0x764e18);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764e1b:{NFSU2_TR(0x764e1b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764e5c(ARGS);}}
}
B764e1d:L764e1d:{bud-=4;NFSU2_TR(0x764e1d);
w8(R+4864,shr<u64>(r8(R+4864),u64(u32(0x20ull))));
w8(R+4872,shr<u64>(r8(R+4872),u64(u32(0x20ull))));
}
B764e22:{NFSU2_TR(0x764e22);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764e26:{NFSU2_TR(0x764e26);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ff00000ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764e2c:{NFSU2_TR(0x764e2c);
if(r1(F+6)){{[[clang::musttail]] return blk_764f3a(ARGS);}}
}
B764e32:L764e32:{bud-=2;NFSU2_TR(0x764e32);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbff00000ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764e38:{NFSU2_TR(0x764e38);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764e5c(ARGS);}}
}
B764e3a:L764e3a:{bud-=7;NFSU2_TR(0x764e3a);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764e42:{NFSU2_TR(0x764e42);
w8(R+4672,u64(u64(r8(R+4672))^u64(r8(R+4672))));
w8(R+4680,u64(u64(r8(R+4680))^u64(r8(R+4680))));
}
B764e46:{NFSU2_TR(0x764e46);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4736))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4744))));
}
B764e4a:{NFSU2_TR(0x764e4a);
u8 U[20];
w1(U+0,u8((r4(R+4672))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4672,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4676))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4676,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4680))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4680,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4684))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4684,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764e4e:{NFSU2_TR(0x764e4e);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(G+0,u32(r2(U+0)));
}
B764e52:{NFSU2_TR(0x764e52);
u8 U[10];
w1(F+0,u8((r4(G+0))<(u32(0xffull))));
w1(F+11,sborrow<u32>(r4(G+0),u32(0xffull)));
w4(U+6,u32(u32(r4(G+0))-u32(u32(0xffull))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764e57:{NFSU2_TR(0x764e57);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764ed5(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764e59(ARGS);}
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
PN u32 blk_764e59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764e59:L764e59:{bud-=2;NFSU2_TR(0x764e59);
__asm__ volatile(".byte 0xd9,0xe8"::);
}
B764e5b:{NFSU2_TR(0x764e5b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764e5c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764e5c:L764e5c:{bud-=8;NFSU2_TR(0x764e5c);
__builtin_memmove((R+4800),gp(0x7d7ba0),8);
}
B764e64:{NFSU2_TR(0x764e64);
w8(R+4672,u64(u64(r8(R+4672))^u64(r8(R+4672))));
w8(R+4680,u64(u64(r8(R+4680))^u64(r8(R+4680))));
}
B764e68:{NFSU2_TR(0x764e68);
w8(R+4800,u64(u64(r8(R+4800))&u64(r8(R+4736))));
w8(R+4808,u64(u64(r8(R+4808))&u64(r8(R+4744))));
}
B764e6c:{NFSU2_TR(0x764e6c);
u8 U[20];
w1(U+0,u8((r4(R+4672))==(r4(R+4800))));
w4(U+1,u32(r1(U+0)));
w4(R+4672,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4676))==(r4(R+4804))));
w4(U+6,u32(r1(U+5)));
w4(R+4676,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4680))==(r4(R+4808))));
w4(U+11,u32(r1(U+10)));
w4(R+4680,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4684))==(r4(R+4812))));
w4(U+16,u32(r1(U+15)));
w4(R+4684,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B764e70:{NFSU2_TR(0x764e70);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(G+0,u32(r2(U+0)));
}
B764e74:{NFSU2_TR(0x764e74);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B764e79:{NFSU2_TR(0x764e79);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xffull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764e7e:{NFSU2_TR(0x764e7e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_764ed5(ARGS);}}
}
B764e80:L764e80:{bud-=7;NFSU2_TR(0x764e80);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4736),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4744),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764e85:{NFSU2_TR(0x764e85);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B764e8b:{NFSU2_TR(0x764e8b);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x8000ull))));
}
B764e90:{NFSU2_TR(0x764e90);
w4(G+4,u32(u32(r4(G+4))^u32(u32(0xbff00000ull))));
}
B764e96:{NFSU2_TR(0x764e96);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+4))));
}
B764e98:{NFSU2_TR(0x764e98);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764e9b:{NFSU2_TR(0x764e9b);
if(r1(F+6)){{[[clang::musttail]] return blk_764f3a(ARGS);}}
}
B764ea1:L764ea1:{bud-=2;NFSU2_TR(0x764ea1);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764ea4:{NFSU2_TR(0x764ea4);
if(r1(F+6)){{[[clang::musttail]] return blk_764eba(ARGS);}}
}
B764ea6:L764ea6:{bud-=4;NFSU2_TR(0x764ea6);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764eab:{NFSU2_TR(0x764eab);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7ff0ull))));
}
B764eb0:{NFSU2_TR(0x764eb0);
u8 U[10];
w1(F+0,u8((r4(G+0))<(u32(0x3ff0ull))));
w1(F+11,sborrow<u32>(r4(G+0),u32(0x3ff0ull)));
w4(U+6,u32(u32(r4(G+0))-u32(u32(0x3ff0ull))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764eb5:{NFSU2_TR(0x764eb5);
if(r1(F+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764ece(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764eb7(ARGS);}
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
PN u32 blk_764eb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764eb7:L764eb7:{bud-=2;NFSU2_TR(0x764eb7);
__asm__ volatile(".byte 0xd9,0xee"::);
}
B764eb9:{NFSU2_TR(0x764eb9);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764eba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764eba:L764eba:{bud-=4;NFSU2_TR(0x764eba);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(G+0,u32(r2(U+36)));
}
B764ebf:{NFSU2_TR(0x764ebf);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7ff0ull))));
}
B764ec4:{NFSU2_TR(0x764ec4);
u8 U[10];
w1(F+0,u8((r4(G+0))<(u32(0x3ff0ull))));
w1(F+11,sborrow<u32>(r4(G+0),u32(0x3ff0ull)));
w4(U+6,u32(u32(r4(G+0))-u32(u32(0x3ff0ull))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764ec9:{NFSU2_TR(0x764ec9);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764ece(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_764ecb(ARGS);}
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
PN u32 blk_764ecb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764ecb:L764ecb:{bud-=2;NFSU2_TR(0x764ecb);
__asm__ volatile(".byte 0xd9,0xee"::);
}
B764ecd:{NFSU2_TR(0x764ecd);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764ece(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764ece:L764ece:{bud-=2;NFSU2_TR(0x764ece);
{u32 ea_=u32(u32(8223760u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B764ed4:{NFSU2_TR(0x764ed4);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764ed5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764ed5:L764ed5:{bud-=4;NFSU2_TR(0x764ed5);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4736))));
}
B764ed9:{NFSU2_TR(0x764ed9);
__builtin_memmove((R+4608),(R+4736),8);
}
B764edd:{NFSU2_TR(0x764edd);
w4(R+8,u32(0x3eeull));
}
B764ee2:{NFSU2_TR(0x764ee2);
{[[clang::musttail]] return blk_764f51(ARGS);}
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
PN u32 blk_764ee4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764ee4:L764ee4:{bud-=10;NFSU2_TR(0x764ee4);
wv<4>((G+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764ee8:{NFSU2_TR(0x764ee8);
w8(R+4864,shr<u64>(r8(R+4864),u64(u32(0x20ull))));
w8(R+4872,shr<u64>(r8(R+4872),u64(u32(0x20ull))));
}
B764eed:{NFSU2_TR(0x764eed);
wv<4>((R+8),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764ef1:{NFSU2_TR(0x764ef1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B764ef7:{NFSU2_TR(0x764ef7);
__builtin_memmove((G+4),(G+0),4);
}
B764ef9:{NFSU2_TR(0x764ef9);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B764efb:{NFSU2_TR(0x764efb);
__builtin_memmove((R+4608),gp(0x7d7bb0),8);
}
B764f03:{NFSU2_TR(0x764f03);
w4(R+8,u32(0x1aull));
}
B764f08:{NFSU2_TR(0x764f08);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764f0b:{NFSU2_TR(0x764f0b);
if(r1(F+6)){{[[clang::musttail]] return blk_764f51(ARGS);}}
}
B764f0d:L764f0d:{bud-=5;NFSU2_TR(0x764f0d);
wv<4>((G+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+4864)),V(0x0ull)));
}
B764f11:{NFSU2_TR(0x764f11);
w4(R+8,u32(0x1dull));
}
B764f16:{NFSU2_TR(0x764f16);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7fffffffull))));
}
B764f1b:{NFSU2_TR(0x764f1b);
u8 U[4];
w1(F+0,u8((r4(G+0))<(u32(0x7ff00000ull))));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x7ff00000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764f20:{NFSU2_TR(0x764f20);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764f51(ARGS);}}
}
B764f22:L764f22:{bud-=1;NFSU2_TR(0x764f22);
if(r1(F+0)){{[[clang::musttail]] return blk_764f29(ARGS);}}
}
B764f24:L764f24:{bud-=2;NFSU2_TR(0x764f24);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(U+0))<(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764f27:{NFSU2_TR(0x764f27);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764f51(ARGS);}}
{[[clang::musttail]] return blk_764f29(ARGS);}
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
PN u32 blk_764f29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764f29:L764f29:{bud-=2;NFSU2_TR(0x764f29);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x10ull))));
}
B764f2c:{NFSU2_TR(0x764f2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_764f32(ARGS);}
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
PN u32 blk_764f32(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764f32:L764f32:{bud-=3;NFSU2_TR(0x764f32);
{u32 ea_=u32(r4(G+16)+u32(4u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B764f36:{NFSU2_TR(0x764f36);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x10ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x10ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764f39:{NFSU2_TR(0x764f39);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764f3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764f3a:L764f3a:{bud-=4;NFSU2_TR(0x764f3a);
__builtin_memmove((R+4672),gp(0x7d7c30),8);
}
B764f42:{NFSU2_TR(0x764f42);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4608),(U+4),8);
}
B764f48:{NFSU2_TR(0x764f48);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4672))));
}
B764f4c:{NFSU2_TR(0x764f4c);
w4(R+8,u32(0x1cull));
{[[clang::musttail]] return blk_764f51(ARGS);}
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
PN u32 blk_764f51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764f51:L764f51:{bud-=11;NFSU2_TR(0x764f51);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x1cull))));
}
B764f54:{NFSU2_TR(0x764f54);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B764f5a:{NFSU2_TR(0x764f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764f5e:{NFSU2_TR(0x764f5e);
__builtin_memmove((R+8),(G+16),4);
}
B764f60:{NFSU2_TR(0x764f60);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B764f63:{NFSU2_TR(0x764f63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764f67:{NFSU2_TR(0x764f67);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B764f6a:{NFSU2_TR(0x764f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B764f6e:{NFSU2_TR(0x764f6e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
}
B764f71:{NFSU2_TR(0x764f71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+16)),r4(U+0));
}
B764f74:{NFSU2_TR(0x764f74);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x764f79ull));
{[[clang::musttail]] return blk_7694d0(ARGS);}
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
PN u32 blk_764f79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764f79:L764f79:{bud-=3;NFSU2_TR(0x764f79);
{u32 ea_=u32(r4(G+16)+u32(16u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B764f7d:{NFSU2_TR(0x764f7d);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x1cull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x1cull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B764f80:{NFSU2_TR(0x764f80);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x764747u)[[clang::musttail]] return blk_764747(ARGS););}
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
PN u32 blk_764f81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764f81:L764f81:{bud-=2;NFSU2_TR(0x764f81);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B764f84:{NFSU2_TR(0x764f84);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_764fae(ARGS);}}
}
B764f86:L764f86:{bud-=2;NFSU2_TR(0x764f86);
w1(F+0,u8((r4(G+0))<(u32(0x40000ull))));
}
B764f8b:{NFSU2_TR(0x764f8b);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_7651cd(ARGS);}}
}
B764f91:L764f91:{bud-=9;NFSU2_TR(0x764f91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764f92:{NFSU2_TR(0x764f92);
__builtin_memmove((R+8),(G+0),4);
}
B764f94:{NFSU2_TR(0x764f94);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7full))));
}
B764f97:{NFSU2_TR(0x764f97);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x3ff00ull))));
}
B764f9d:{NFSU2_TR(0x764f9d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x80ull))));
}
B764fa3:{NFSU2_TR(0x764fa3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff80ull))));
}
B764fa6:{NFSU2_TR(0x764fa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764fa7:{NFSU2_TR(0x764fa7);
w4(R+28,u32(0x3ff0ull));
}
B764fac:{NFSU2_TR(0x764fac);
{[[clang::musttail]] return blk_764fd4(ARGS);}
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
PN u32 blk_764fae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764fae:L764fae:{bud-=2;NFSU2_TR(0x764fae);
u8 U[4];
w1(F+11,sborrow<u32>(r4(G+0),u32(0xfffc0200ull)));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xfffc0200ull))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B764fb3:{NFSU2_TR(0x764fb3);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_7651aa(ARGS);}}
}
B764fb9:L764fb9:{bud-=8;NFSU2_TR(0x764fb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764fba:{NFSU2_TR(0x764fba);
__builtin_memmove((R+8),(G+0),4);
}
B764fbc:{NFSU2_TR(0x764fbc);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7full))));
}
B764fbf:{NFSU2_TR(0x764fbf);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x80ull))));
}
B764fc5:{NFSU2_TR(0x764fc5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff80ull))));
}
B764fc8:{NFSU2_TR(0x764fc8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3fe80ull))));
}
B764fce:{NFSU2_TR(0x764fce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B764fcf:{NFSU2_TR(0x764fcf);
w4(R+28,u32(0x0ull));
{[[clang::musttail]] return blk_764fd4(ARGS);}
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
PN u32 blk_764fd4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B764fd4:L764fd4:{bud-=9;NFSU2_TR(0x764fd4);
w8(R+4864,b64(f64(r8(R+4864))+f64(r8(R+4608))));
}
B764fd8:{NFSU2_TR(0x764fd8);
__builtin_memmove((R+4608),(R+4800),8);
}
B764fdc:{NFSU2_TR(0x764fdc);
w8(R+4800,b64(f64(r8(R+4800))+f64(m8(0x7d7b90))));
}
B764fe4:{NFSU2_TR(0x764fe4);
__builtin_memmove((R+24),(R+8),4);
}
B764fe6:{NFSU2_TR(0x764fe6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ff80ull))));
}
B764fec:{NFSU2_TR(0x764fec);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+5056))));
w8(R+4744,b64(f64(r8(R+4744))*f64(r8(R+5064))));
}
B764ff0:{NFSU2_TR(0x764ff0);
w8(R+4800,b64(f64(r8(R+4800))-f64(m8(0x7d7b90))));
}
B764ff8:{NFSU2_TR(0x764ff8);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(R+5056))));
w8(R+5064,b64(f64(r8(R+5064))*f64(r8(R+5064))));
}
B764ffc:{NFSU2_TR(0x764ffc);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4800))));
{[[clang::musttail]] return blk_765000(ARGS);}
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
PN u32 ent_764(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x764000:[[clang::musttail]] return blk_764000(c,a4,a0,a1,bud);
case 0x764017:[[clang::musttail]] return blk_764017(c,a4,a0,a1,bud);
case 0x76402c:[[clang::musttail]] return blk_76402c(c,a4,a0,a1,bud);
case 0x764035:[[clang::musttail]] return blk_764035(c,a4,a0,a1,bud);
case 0x764058:[[clang::musttail]] return blk_764058(c,a4,a0,a1,bud);
case 0x76406d:[[clang::musttail]] return blk_76406d(c,a4,a0,a1,bud);
case 0x76408e:[[clang::musttail]] return blk_76408e(c,a4,a0,a1,bud);
case 0x764097:[[clang::musttail]] return blk_764097(c,a4,a0,a1,bud);
case 0x7640a0:[[clang::musttail]] return blk_7640a0(c,a4,a0,a1,bud);
case 0x7640ba:[[clang::musttail]] return blk_7640ba(c,a4,a0,a1,bud);
case 0x7640d2:[[clang::musttail]] return blk_7640d2(c,a4,a0,a1,bud);
case 0x764106:[[clang::musttail]] return blk_764106(c,a4,a0,a1,bud);
case 0x764127:[[clang::musttail]] return blk_764127(c,a4,a0,a1,bud);
case 0x76412d:[[clang::musttail]] return blk_76412d(c,a4,a0,a1,bud);
case 0x76413a:[[clang::musttail]] return blk_76413a(c,a4,a0,a1,bud);
case 0x76413f:[[clang::musttail]] return blk_76413f(c,a4,a0,a1,bud);
case 0x764189:[[clang::musttail]] return blk_764189(c,a4,a0,a1,bud);
case 0x764196:[[clang::musttail]] return blk_764196(c,a4,a0,a1,bud);
case 0x7641bb:[[clang::musttail]] return blk_7641bb(c,a4,a0,a1,bud);
case 0x7641ca:[[clang::musttail]] return blk_7641ca(c,a4,a0,a1,bud);
case 0x7641d4:[[clang::musttail]] return blk_7641d4(c,a4,a0,a1,bud);
case 0x7641f7:[[clang::musttail]] return blk_7641f7(c,a4,a0,a1,bud);
case 0x764203:[[clang::musttail]] return blk_764203(c,a4,a0,a1,bud);
case 0x764223:[[clang::musttail]] return blk_764223(c,a4,a0,a1,bud);
case 0x764235:[[clang::musttail]] return blk_764235(c,a4,a0,a1,bud);
case 0x764246:[[clang::musttail]] return blk_764246(c,a4,a0,a1,bud);
case 0x76424a:[[clang::musttail]] return blk_76424a(c,a4,a0,a1,bud);
case 0x764251:[[clang::musttail]] return blk_764251(c,a4,a0,a1,bud);
case 0x764274:[[clang::musttail]] return blk_764274(c,a4,a0,a1,bud);
case 0x764284:[[clang::musttail]] return blk_764284(c,a4,a0,a1,bud);
case 0x764292:[[clang::musttail]] return blk_764292(c,a4,a0,a1,bud);
case 0x7642c4:[[clang::musttail]] return blk_7642c4(c,a4,a0,a1,bud);
case 0x7642cd:[[clang::musttail]] return blk_7642cd(c,a4,a0,a1,bud);
case 0x7642db:[[clang::musttail]] return blk_7642db(c,a4,a0,a1,bud);
case 0x7642eb:[[clang::musttail]] return blk_7642eb(c,a4,a0,a1,bud);
case 0x7642f8:[[clang::musttail]] return blk_7642f8(c,a4,a0,a1,bud);
case 0x764310:[[clang::musttail]] return blk_764310(c,a4,a0,a1,bud);
case 0x76431f:[[clang::musttail]] return blk_76431f(c,a4,a0,a1,bud);
case 0x764322:[[clang::musttail]] return blk_764322(c,a4,a0,a1,bud);
case 0x76434b:[[clang::musttail]] return blk_76434b(c,a4,a0,a1,bud);
case 0x764366:[[clang::musttail]] return blk_764366(c,a4,a0,a1,bud);
case 0x764367:[[clang::musttail]] return blk_764367(c,a4,a0,a1,bud);
case 0x764377:[[clang::musttail]] return blk_764377(c,a4,a0,a1,bud);
case 0x764378:[[clang::musttail]] return blk_764378(c,a4,a0,a1,bud);
case 0x764385:[[clang::musttail]] return blk_764385(c,a4,a0,a1,bud);
case 0x764386:[[clang::musttail]] return blk_764386(c,a4,a0,a1,bud);
case 0x76438b:[[clang::musttail]] return blk_76438b(c,a4,a0,a1,bud);
case 0x764391:[[clang::musttail]] return blk_764391(c,a4,a0,a1,bud);
case 0x7643d0:[[clang::musttail]] return blk_7643d0(c,a4,a0,a1,bud);
case 0x7643d9:[[clang::musttail]] return blk_7643d9(c,a4,a0,a1,bud);
case 0x7643dd:[[clang::musttail]] return blk_7643dd(c,a4,a0,a1,bud);
case 0x7643e7:[[clang::musttail]] return blk_7643e7(c,a4,a0,a1,bud);
case 0x7643f3:[[clang::musttail]] return blk_7643f3(c,a4,a0,a1,bud);
case 0x7643f8:[[clang::musttail]] return blk_7643f8(c,a4,a0,a1,bud);
case 0x7643ff:[[clang::musttail]] return blk_7643ff(c,a4,a0,a1,bud);
case 0x764403:[[clang::musttail]] return blk_764403(c,a4,a0,a1,bud);
case 0x76440b:[[clang::musttail]] return blk_76440b(c,a4,a0,a1,bud);
case 0x764412:[[clang::musttail]] return blk_764412(c,a4,a0,a1,bud);
case 0x764415:[[clang::musttail]] return blk_764415(c,a4,a0,a1,bud);
case 0x76443e:[[clang::musttail]] return blk_76443e(c,a4,a0,a1,bud);
case 0x764458:[[clang::musttail]] return blk_764458(c,a4,a0,a1,bud);
case 0x764471:[[clang::musttail]] return blk_764471(c,a4,a0,a1,bud);
case 0x764476:[[clang::musttail]] return blk_764476(c,a4,a0,a1,bud);
case 0x764482:[[clang::musttail]] return blk_764482(c,a4,a0,a1,bud);
case 0x764497:[[clang::musttail]] return blk_764497(c,a4,a0,a1,bud);
case 0x76449a:[[clang::musttail]] return blk_76449a(c,a4,a0,a1,bud);
case 0x7644a0:[[clang::musttail]] return blk_7644a0(c,a4,a0,a1,bud);
case 0x7644aa:[[clang::musttail]] return blk_7644aa(c,a4,a0,a1,bud);
case 0x7644b9:[[clang::musttail]] return blk_7644b9(c,a4,a0,a1,bud);
case 0x7644c4:[[clang::musttail]] return blk_7644c4(c,a4,a0,a1,bud);
case 0x7644cf:[[clang::musttail]] return blk_7644cf(c,a4,a0,a1,bud);
case 0x7644de:[[clang::musttail]] return blk_7644de(c,a4,a0,a1,bud);
case 0x7644ef:[[clang::musttail]] return blk_7644ef(c,a4,a0,a1,bud);
case 0x7644f9:[[clang::musttail]] return blk_7644f9(c,a4,a0,a1,bud);
case 0x7644fc:[[clang::musttail]] return blk_7644fc(c,a4,a0,a1,bud);
case 0x76450c:[[clang::musttail]] return blk_76450c(c,a4,a0,a1,bud);
case 0x764519:[[clang::musttail]] return blk_764519(c,a4,a0,a1,bud);
case 0x76452b:[[clang::musttail]] return blk_76452b(c,a4,a0,a1,bud);
case 0x764530:[[clang::musttail]] return blk_764530(c,a4,a0,a1,bud);
case 0x76454d:[[clang::musttail]] return blk_76454d(c,a4,a0,a1,bud);
case 0x764557:[[clang::musttail]] return blk_764557(c,a4,a0,a1,bud);
case 0x76455a:[[clang::musttail]] return blk_76455a(c,a4,a0,a1,bud);
case 0x764577:[[clang::musttail]] return blk_764577(c,a4,a0,a1,bud);
case 0x764582:[[clang::musttail]] return blk_764582(c,a4,a0,a1,bud);
case 0x76458b:[[clang::musttail]] return blk_76458b(c,a4,a0,a1,bud);
case 0x764592:[[clang::musttail]] return blk_764592(c,a4,a0,a1,bud);
case 0x7645ae:[[clang::musttail]] return blk_7645ae(c,a4,a0,a1,bud);
case 0x7645b1:[[clang::musttail]] return blk_7645b1(c,a4,a0,a1,bud);
case 0x7645c2:[[clang::musttail]] return blk_7645c2(c,a4,a0,a1,bud);
case 0x7645c6:[[clang::musttail]] return blk_7645c6(c,a4,a0,a1,bud);
case 0x7645d9:[[clang::musttail]] return blk_7645d9(c,a4,a0,a1,bud);
case 0x7645dc:[[clang::musttail]] return blk_7645dc(c,a4,a0,a1,bud);
case 0x7645f1:[[clang::musttail]] return blk_7645f1(c,a4,a0,a1,bud);
case 0x764603:[[clang::musttail]] return blk_764603(c,a4,a0,a1,bud);
case 0x76461a:[[clang::musttail]] return blk_76461a(c,a4,a0,a1,bud);
case 0x764623:[[clang::musttail]] return blk_764623(c,a4,a0,a1,bud);
case 0x764631:[[clang::musttail]] return blk_764631(c,a4,a0,a1,bud);
case 0x764632:[[clang::musttail]] return blk_764632(c,a4,a0,a1,bud);
case 0x764646:[[clang::musttail]] return blk_764646(c,a4,a0,a1,bud);
case 0x764649:[[clang::musttail]] return blk_764649(c,a4,a0,a1,bud);
case 0x764657:[[clang::musttail]] return blk_764657(c,a4,a0,a1,bud);
case 0x76465c:[[clang::musttail]] return blk_76465c(c,a4,a0,a1,bud);
case 0x764669:[[clang::musttail]] return blk_764669(c,a4,a0,a1,bud);
case 0x76466b:[[clang::musttail]] return blk_76466b(c,a4,a0,a1,bud);
case 0x76467a:[[clang::musttail]] return blk_76467a(c,a4,a0,a1,bud);
case 0x76469c:[[clang::musttail]] return blk_76469c(c,a4,a0,a1,bud);
case 0x7646a8:[[clang::musttail]] return blk_7646a8(c,a4,a0,a1,bud);
case 0x7646bd:[[clang::musttail]] return blk_7646bd(c,a4,a0,a1,bud);
case 0x7646c4:[[clang::musttail]] return blk_7646c4(c,a4,a0,a1,bud);
case 0x7646d0:[[clang::musttail]] return blk_7646d0(c,a4,a0,a1,bud);
case 0x7646d1:[[clang::musttail]] return blk_7646d1(c,a4,a0,a1,bud);
case 0x7646f4:[[clang::musttail]] return blk_7646f4(c,a4,a0,a1,bud);
case 0x764710:[[clang::musttail]] return blk_764710(c,a4,a0,a1,bud);
case 0x764721:[[clang::musttail]] return blk_764721(c,a4,a0,a1,bud);
case 0x764730:[[clang::musttail]] return blk_764730(c,a4,a0,a1,bud);
case 0x764739:[[clang::musttail]] return blk_764739(c,a4,a0,a1,bud);
case 0x76473b:[[clang::musttail]] return blk_76473b(c,a4,a0,a1,bud);
case 0x76473e:[[clang::musttail]] return blk_76473e(c,a4,a0,a1,bud);
case 0x764747:[[clang::musttail]] return blk_764747(c,a4,a0,a1,bud);
case 0x764749:[[clang::musttail]] return blk_764749(c,a4,a0,a1,bud);
case 0x7647c6:[[clang::musttail]] return blk_7647c6(c,a4,a0,a1,bud);
case 0x764918:[[clang::musttail]] return blk_764918(c,a4,a0,a1,bud);
case 0x764a8f:[[clang::musttail]] return blk_764a8f(c,a4,a0,a1,bud);
case 0x764a97:[[clang::musttail]] return blk_764a97(c,a4,a0,a1,bud);
case 0x764ba0:[[clang::musttail]] return blk_764ba0(c,a4,a0,a1,bud);
case 0x764bdf:[[clang::musttail]] return blk_764bdf(c,a4,a0,a1,bud);
case 0x764be4:[[clang::musttail]] return blk_764be4(c,a4,a0,a1,bud);
case 0x764c18:[[clang::musttail]] return blk_764c18(c,a4,a0,a1,bud);
case 0x764c6a:[[clang::musttail]] return blk_764c6a(c,a4,a0,a1,bud);
case 0x764cb7:[[clang::musttail]] return blk_764cb7(c,a4,a0,a1,bud);
case 0x764cc5:[[clang::musttail]] return blk_764cc5(c,a4,a0,a1,bud);
case 0x764cc8:[[clang::musttail]] return blk_764cc8(c,a4,a0,a1,bud);
case 0x764d69:[[clang::musttail]] return blk_764d69(c,a4,a0,a1,bud);
case 0x764d70:[[clang::musttail]] return blk_764d70(c,a4,a0,a1,bud);
case 0x764d77:[[clang::musttail]] return blk_764d77(c,a4,a0,a1,bud);
case 0x764d90:[[clang::musttail]] return blk_764d90(c,a4,a0,a1,bud);
case 0x764d93:[[clang::musttail]] return blk_764d93(c,a4,a0,a1,bud);
case 0x764dac:[[clang::musttail]] return blk_764dac(c,a4,a0,a1,bud);
case 0x764daf:[[clang::musttail]] return blk_764daf(c,a4,a0,a1,bud);
case 0x764dc1:[[clang::musttail]] return blk_764dc1(c,a4,a0,a1,bud);
case 0x764e08:[[clang::musttail]] return blk_764e08(c,a4,a0,a1,bud);
case 0x764e59:[[clang::musttail]] return blk_764e59(c,a4,a0,a1,bud);
case 0x764e5c:[[clang::musttail]] return blk_764e5c(c,a4,a0,a1,bud);
case 0x764eb7:[[clang::musttail]] return blk_764eb7(c,a4,a0,a1,bud);
case 0x764eba:[[clang::musttail]] return blk_764eba(c,a4,a0,a1,bud);
case 0x764ecb:[[clang::musttail]] return blk_764ecb(c,a4,a0,a1,bud);
case 0x764ece:[[clang::musttail]] return blk_764ece(c,a4,a0,a1,bud);
case 0x764ed5:[[clang::musttail]] return blk_764ed5(c,a4,a0,a1,bud);
case 0x764ee4:[[clang::musttail]] return blk_764ee4(c,a4,a0,a1,bud);
case 0x764f29:[[clang::musttail]] return blk_764f29(c,a4,a0,a1,bud);
case 0x764f32:[[clang::musttail]] return blk_764f32(c,a4,a0,a1,bud);
case 0x764f3a:[[clang::musttail]] return blk_764f3a(c,a4,a0,a1,bud);
case 0x764f51:[[clang::musttail]] return blk_764f51(c,a4,a0,a1,bud);
case 0x764f79:[[clang::musttail]] return blk_764f79(c,a4,a0,a1,bud);
case 0x764f81:[[clang::musttail]] return blk_764f81(c,a4,a0,a1,bud);
case 0x764fae:[[clang::musttail]] return blk_764fae(c,a4,a0,a1,bud);
case 0x764fd4:[[clang::musttail]] return blk_764fd4(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_764(Cpu& c){u8* R=c.regs.data();return ent_764(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
