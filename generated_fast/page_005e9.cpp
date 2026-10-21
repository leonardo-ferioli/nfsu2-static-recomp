#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4022c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_435c84(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43bdf0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_440540(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_502fd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5caaf8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d3e40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d4ad0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d6470(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d69b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d8860(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d8f00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d8fc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d9140(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d9430(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d95f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d9710(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5d98c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ddde0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5de5c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5de8d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5de990(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5dfd30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e00d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e1e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e2130(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e23d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e2750(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e27d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e2bd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e41a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e5300(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e5aa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e79d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e7af0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e8ff2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9010(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9030(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9049(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9071(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9080(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e90b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e912a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e912f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e917a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e917f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e91b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e91c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e921e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9240(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9250(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e927c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9294(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e92c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e92d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9300(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9316(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9318(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9340(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9370(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e93cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e93da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9422(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9424(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9459(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9469(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e946f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9471(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e94a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e94a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e94bd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e94c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e94d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e94e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9524(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9556(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e956d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9573(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9579(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e957d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9586(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e958e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e959b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e95fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9698(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e96b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e96f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9719(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9724(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9730(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9752(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9756(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9775(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9794(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e97b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e97d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e97f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9810(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e982f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e984e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e986d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9887(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e98ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e98b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e98d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e990c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9950(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e99a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e99b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e99c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e99e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e99f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a18(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a7c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a85(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9aa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9aa5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9aa7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ad6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ade(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ae9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9aec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9af0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9af4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9af6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9afa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9afc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9afe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b02(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b04(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b06(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b13(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b5e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b8f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9bad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9bc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9be5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9bfe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9c49(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9c50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9c70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ca2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9cb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9cc3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d46(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9d80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9da0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9db5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9de0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9df3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e63(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e6f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9eae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9eb9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ec1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ecc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ed8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ee4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f04(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fc1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ea000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ea0be(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ea0d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ea0ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_600f77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9018(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9038(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9040(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9068(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9090(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9209(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9216(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9263(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9271(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e92a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e92b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e954c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9566(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e961e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9635(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9688(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e969f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e96cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e96ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9909(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e994b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9996(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9b84(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9c10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9cf0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9e96(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f36(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f66(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9f9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fa3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fbd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fcb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fe2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9fec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ff1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9ff8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e9000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9000:L5e9000:{bud-=2;NFSU2_TR(0x5e9000);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
}
B5e9001:{NFSU2_TR(0x5e9001);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e8ff2u);}[[clang::musttail]] return blk_5e8ff2(ARGS);}}
}
B5e9003:L5e9003:{bud-=2;NFSU2_TR(0x5e9003);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9005:{NFSU2_TR(0x5e9005);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9049(ARGS);}}
}
B5e9007:L5e9007:{bud-=3;NFSU2_TR(0x5e9007);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e900b:{NFSU2_TR(0x5e900b);
__builtin_memmove((R+12),(R+20),4);
}
B5e900d:{NFSU2_TR(0x5e900d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_5e9010(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9010(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9010:L5e9010:{bud-=3;NFSU2_TR(0x5e9010);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9011:{NFSU2_TR(0x5e9011);
__builtin_memmove((G+4),(R+24),4);
}
B5e9013:{NFSU2_TR(0x5e9013);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9018ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e5aa0u);}[[clang::musttail]] return blk_5e5aa0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9018(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9018:L5e9018:{bud-=3;NFSU2_TR(0x5e9018);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e901e:{NFSU2_TR(0x5e901e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
}
B5e901f:{NFSU2_TR(0x5e901f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9010u);}[[clang::musttail]] return blk_5e9010(ARGS);}}
}
B5e9021:L5e9021:{bud-=2;NFSU2_TR(0x5e9021);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9023:{NFSU2_TR(0x5e9023);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9049(ARGS);}}
}
B5e9025:L5e9025:{bud-=3;NFSU2_TR(0x5e9025);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e9029:{NFSU2_TR(0x5e9029);
__builtin_memmove((R+12),(R+20),4);
}
B5e902b:{NFSU2_TR(0x5e902b);
{[[clang::musttail]] return blk_5e9030(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9030(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9030:L5e9030:{bud-=3;NFSU2_TR(0x5e9030);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9031:{NFSU2_TR(0x5e9031);
__builtin_memmove((G+4),(R+24),4);
}
B5e9033:{NFSU2_TR(0x5e9033);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9038ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d4ad0u);}[[clang::musttail]] return blk_5d4ad0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9038(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9038:L5e9038:{bud-=3;NFSU2_TR(0x5e9038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9039:{NFSU2_TR(0x5e9039);
__builtin_memmove((G+4),(R+24),4);
}
B5e903b:{NFSU2_TR(0x5e903b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9040ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d8f00u);}[[clang::musttail]] return blk_5d8f00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9040(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9040:L5e9040:{bud-=3;NFSU2_TR(0x5e9040);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e9046:{NFSU2_TR(0x5e9046);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
}
B5e9047:{NFSU2_TR(0x5e9047);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9030u);}[[clang::musttail]] return blk_5e9030(ARGS);}}
{[[clang::musttail]] return blk_5e9049(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9049(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9049:L5e9049:{bud-=4;NFSU2_TR(0x5e9049);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e904b:{NFSU2_TR(0x5e904b);
__builtin_memmove((G+0),gp(0x7a478c),4);
}
B5e9050:{NFSU2_TR(0x5e9050);
__builtin_memmove(gp(0x876d24),(G+0),4);
}
B5e9055:{NFSU2_TR(0x5e9055);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9071(ARGS);}}
}
B5e9057:L5e9057:{bud-=3;NFSU2_TR(0x5e9057);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e905b:{NFSU2_TR(0x5e905b);
__builtin_memmove((R+12),(R+20),4);
}
B5e905d:{NFSU2_TR(0x5e905d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_5e9060(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9060:L5e9060:{bud-=3;NFSU2_TR(0x5e9060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9061:{NFSU2_TR(0x5e9061);
__builtin_memmove((G+4),(R+24),4);
}
B5e9063:{NFSU2_TR(0x5e9063);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9068ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e5aa0u);}[[clang::musttail]] return blk_5e5aa0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9068(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9068:L5e9068:{bud-=3;NFSU2_TR(0x5e9068);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e906e:{NFSU2_TR(0x5e906e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
}
B5e906f:{NFSU2_TR(0x5e906f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9060u);}[[clang::musttail]] return blk_5e9060(ARGS);}}
{[[clang::musttail]] return blk_5e9071(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9071(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9071:L5e9071:{bud-=3;NFSU2_TR(0x5e9071);
w1(R+12,u8(0x1ull));
}
B5e9073:{NFSU2_TR(0x5e9073);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e907b:{NFSU2_TR(0x5e907b);
{[[clang::musttail]] return blk_5e9080(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9080(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9080:L5e9080:{bud-=2;NFSU2_TR(0x5e9080);
u8 U[22];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0xaull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0xaull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xaull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B5e9085:{NFSU2_TR(0x5e9085);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e92d1(ARGS);}}
}
B5e908b:L5e908b:{bud-=1;NFSU2_TR(0x5e908b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9090ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x4022c0u);}[[clang::musttail]] return blk_4022c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9090(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9090:L5e9090:{bud-=5;NFSU2_TR(0x5e9090);
__builtin_memmove((G+0),gp(0x883db4),4);
}
B5e9095:{NFSU2_TR(0x5e9095);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e9097:{NFSU2_TR(0x5e9097);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9099:{NFSU2_TR(0x5e9099);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e909d:{NFSU2_TR(0x5e909d);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9240(ARGS);}}
}
B5e90a3:L5e90a3:{bud-=3;NFSU2_TR(0x5e90a3);
__builtin_memmove((R+24),gp(0x883db0),4);
}
B5e90a9:{NFSU2_TR(0x5e90a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e90ad:{NFSU2_TR(0x5e90ad);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_5e90b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e90b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e90b0:L5e90b0:{bud-=6;NFSU2_TR(0x5e90b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B5e90b4:{NFSU2_TR(0x5e90b4);
__builtin_memmove((G+4),(G+0),1);
}
B5e90b6:{NFSU2_TR(0x5e90b6);
w1(G+4,u8(u32(r1(G+4))&u32(u8(0xfull))));
}
B5e90b9:{NFSU2_TR(0x5e90b9);
u8 U[2];
__builtin_memmove((U+0),(G+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e90bc:{NFSU2_TR(0x5e90bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e90c0:{NFSU2_TR(0x5e90c0);
if(r1(F+6)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e90c6:L5e90c6:{bud-=2;NFSU2_TR(0x5e90c6);
u8 U[2];
__builtin_memmove((U+0),(G+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e90c9:{NFSU2_TR(0x5e90c9);
if(r1(F+6)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e90cf:L5e90cf:{bud-=4;NFSU2_TR(0x5e90cf);
__builtin_memmove((G+4),(G+0),4);
}
B5e90d1:{NFSU2_TR(0x5e90d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B5e90d4:{NFSU2_TR(0x5e90d4);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e90d7:{NFSU2_TR(0x5e90d7);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e90dd:L5e90dd:{bud-=3;NFSU2_TR(0x5e90dd);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(G+4,u32(s32(s16(r2(U+12)))));
}
B5e90e2:{NFSU2_TR(0x5e90e2);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e90e4:{NFSU2_TR(0x5e90e4);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e90ea:L5e90ea:{bud-=3;NFSU2_TR(0x5e90ea);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e90f1:{NFSU2_TR(0x5e90f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e90f3:{NFSU2_TR(0x5e90f3);
if(r1(F+6)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e90f9:L5e90f9:{bud-=5;NFSU2_TR(0x5e90f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e90fc:{NFSU2_TR(0x5e90fc);
__builtin_memmove((R+8),(R+20),4);
}
B5e90fe:{NFSU2_TR(0x5e90fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e9101:{NFSU2_TR(0x5e9101);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9104:{NFSU2_TR(0x5e9104);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e910a:L5e910a:{bud-=4;NFSU2_TR(0x5e910a);
__builtin_memmove((R+8),(R+20),4);
}
B5e910c:{NFSU2_TR(0x5e910c);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e910f:{NFSU2_TR(0x5e910f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9112:{NFSU2_TR(0x5e9112);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e9118:L5e9118:{bud-=3;NFSU2_TR(0x5e9118);
u8 U[7];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B5e911d:{NFSU2_TR(0x5e911d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9121:{NFSU2_TR(0x5e9121);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e912a(ARGS);}}
}
B5e9123:L5e9123:{bud-=2;NFSU2_TR(0x5e9123);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e9128:{NFSU2_TR(0x5e9128);
{[[clang::musttail]] return blk_5e912f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e912a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e912a:L5e912a:{bud-=1;NFSU2_TR(0x5e912a);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
{[[clang::musttail]] return blk_5e912f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e912f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e912f:L5e912f:{bud-=3;NFSU2_TR(0x5e912f);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e9132:{NFSU2_TR(0x5e9132);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9134:{NFSU2_TR(0x5e9134);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e913a:L5e913a:{bud-=3;NFSU2_TR(0x5e913a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e9141:{NFSU2_TR(0x5e9141);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9143:{NFSU2_TR(0x5e9143);
if(r1(F+6)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e9149:L5e9149:{bud-=5;NFSU2_TR(0x5e9149);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e914c:{NFSU2_TR(0x5e914c);
__builtin_memmove((R+8),(R+20),4);
}
B5e914e:{NFSU2_TR(0x5e914e);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e9151:{NFSU2_TR(0x5e9151);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9154:{NFSU2_TR(0x5e9154);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e915a:L5e915a:{bud-=4;NFSU2_TR(0x5e915a);
__builtin_memmove((R+8),(R+20),4);
}
B5e915c:{NFSU2_TR(0x5e915c);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e915f:{NFSU2_TR(0x5e915f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9162:{NFSU2_TR(0x5e9162);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e9168:L5e9168:{bud-=3;NFSU2_TR(0x5e9168);
u8 U[7];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B5e916d:{NFSU2_TR(0x5e916d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9171:{NFSU2_TR(0x5e9171);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e917a(ARGS);}}
}
B5e9173:L5e9173:{bud-=2;NFSU2_TR(0x5e9173);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e9178:{NFSU2_TR(0x5e9178);
{[[clang::musttail]] return blk_5e917f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e917a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e917a:L5e917a:{bud-=1;NFSU2_TR(0x5e917a);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
{[[clang::musttail]] return blk_5e917f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e917f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e917f:L5e917f:{bud-=3;NFSU2_TR(0x5e917f);
w4(R+20,u32(s32(s16(r2(R+8)))));
}
B5e9182:{NFSU2_TR(0x5e9182);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9184:{NFSU2_TR(0x5e9184);
if(r1(F+6)){{[[clang::musttail]] return blk_5e921e(ARGS);}}
}
B5e918a:L5e918a:{bud-=12;NFSU2_TR(0x5e918a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e918e:{NFSU2_TR(0x5e918e);
u8 U[14];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+24),(U+12),2);
}
B5e9193:{NFSU2_TR(0x5e9193);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9197:{NFSU2_TR(0x5e9197);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e919a:{NFSU2_TR(0x5e919a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e919e:{NFSU2_TR(0x5e919e);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B5e91a1:{NFSU2_TR(0x5e91a1);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B5e91a3:{NFSU2_TR(0x5e91a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e91a7:{NFSU2_TR(0x5e91a7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B5e91ad:{NFSU2_TR(0x5e91ad);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B5e91af:{NFSU2_TR(0x5e91af);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e91b2:{NFSU2_TR(0x5e91b2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e91b8(ARGS);}}
}
B5e91b4:L5e91b4:{bud-=2;NFSU2_TR(0x5e91b4);
__builtin_memmove((R+8),(R+24),4);
}
B5e91b6:{NFSU2_TR(0x5e91b6);
{[[clang::musttail]] return blk_5e91c7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e91b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e91b8:L5e91b8:{bud-=3;NFSU2_TR(0x5e91b8);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e91be:{NFSU2_TR(0x5e91be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e91c2:{NFSU2_TR(0x5e91c2);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
{[[clang::musttail]] return blk_5e91c7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e91c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e91c7:L5e91c7:{bud-=23;NFSU2_TR(0x5e91c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e91cb:{NFSU2_TR(0x5e91cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e91ce:{NFSU2_TR(0x5e91ce);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e91d1:{NFSU2_TR(0x5e91d1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5e91d3:{NFSU2_TR(0x5e91d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e91d7:{NFSU2_TR(0x5e91d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e91dd:{NFSU2_TR(0x5e91dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e91e1:{NFSU2_TR(0x5e91e1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5e91e3:{NFSU2_TR(0x5e91e3);
__builtin_memmove((R+8),(G+0),4);
}
B5e91e5:{NFSU2_TR(0x5e91e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e91e8:{NFSU2_TR(0x5e91e8);
w4(R+20,u32(r1(R+8)));
}
B5e91eb:{NFSU2_TR(0x5e91eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B5e91ee:{NFSU2_TR(0x5e91ee);
w4(G+0,u32(u32(r4(G+0))^u32(r4(R+20))));
}
B5e91f0:{NFSU2_TR(0x5e91f0);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1ull))));
}
B5e91f3:{NFSU2_TR(0x5e91f3);
__builtin_memmove((R+8),(R+20),4);
}
B5e91f5:{NFSU2_TR(0x5e91f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e91f7:{NFSU2_TR(0x5e91f7);
__builtin_memmove((R+20),(G+0),4);
}
B5e91f9:{NFSU2_TR(0x5e91f9);
__builtin_memmove((G+0),gp(0x876d28),4);
}
B5e91fe:{NFSU2_TR(0x5e91fe);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e91ff:{NFSU2_TR(0x5e91ff);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B5e9202:{NFSU2_TR(0x5e9202);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9203:{NFSU2_TR(0x5e9203);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9204:{NFSU2_TR(0x5e9204);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9209ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d8fc0u);}[[clang::musttail]] return blk_5d8fc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9209(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9209:L5e9209:{bud-=6;NFSU2_TR(0x5e9209);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e920b:{NFSU2_TR(0x5e920b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e920c:{NFSU2_TR(0x5e920c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e920d:{NFSU2_TR(0x5e920d);
__builtin_memmove((G+4),(R+24),4);
}
B5e920f:{NFSU2_TR(0x5e920f);
w1(R+12,u8(u32(r1(R+12))|u32(r1(G+0))));
}
B5e9211:{NFSU2_TR(0x5e9211);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9216ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d9140u);}[[clang::musttail]] return blk_5d9140(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9216(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9216:L5e9216:{bud-=2;NFSU2_TR(0x5e9216);
__builtin_memmove((R+24),gp(0x883db0),4);
}
B5e921c:{NFSU2_TR(0x5e921c);
w1(R+12,u8(u32(r1(R+12))|u32(r1(G+0))));
{[[clang::musttail]] return blk_5e921e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e921e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e921e:L5e921e:{bud-=9;NFSU2_TR(0x5e921e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9222:{NFSU2_TR(0x5e9222);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9226:{NFSU2_TR(0x5e9226);
__builtin_memmove((G+4),gp(0x883db4),4);
}
B5e922c:{NFSU2_TR(0x5e922c);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B5e922d:{NFSU2_TR(0x5e922d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B5e9230:{NFSU2_TR(0x5e9230);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
}
B5e9232:{NFSU2_TR(0x5e9232);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9236:{NFSU2_TR(0x5e9236);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e923a:{NFSU2_TR(0x5e923a);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e90b0u);}[[clang::musttail]] return blk_5e90b0(ARGS);}}
{[[clang::musttail]] return blk_5e9240(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9240(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9240:L5e9240:{bud-=3;NFSU2_TR(0x5e9240);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9244:{NFSU2_TR(0x5e9244);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9246:{NFSU2_TR(0x5e9246);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e927c(ARGS);}}
}
B5e9248:L5e9248:{bud-=3;NFSU2_TR(0x5e9248);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e924c:{NFSU2_TR(0x5e924c);
__builtin_memmove((R+20),(G+0),4);
}
B5e924e:{NFSU2_TR(0x5e924e);
__builtin_memmove((R+28),(R+28),4);
{[[clang::musttail]] return blk_5e9250(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9250(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9250:L5e9250:{bud-=7;NFSU2_TR(0x5e9250);
__builtin_memmove((G+4),gp(0x876d28),4);
}
B5e9256:{NFSU2_TR(0x5e9256);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9258:{NFSU2_TR(0x5e9258);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9259:{NFSU2_TR(0x5e9259);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e925a:{NFSU2_TR(0x5e925a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e925c:{NFSU2_TR(0x5e925c);
__builtin_memmove((G+4),(R+24),4);
}
B5e925e:{NFSU2_TR(0x5e925e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9263ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d8fc0u);}[[clang::musttail]] return blk_5d8fc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9263(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9263:L5e9263:{bud-=6;NFSU2_TR(0x5e9263);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9265:{NFSU2_TR(0x5e9265);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9266:{NFSU2_TR(0x5e9266);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9268:{NFSU2_TR(0x5e9268);
__builtin_memmove((G+4),(R+24),4);
}
B5e926a:{NFSU2_TR(0x5e926a);
w1(R+12,u8(u32(r1(R+12))|u32(r1(G+0))));
}
B5e926c:{NFSU2_TR(0x5e926c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9271ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d9140u);}[[clang::musttail]] return blk_5d9140(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9271(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9271:L5e9271:{bud-=4;NFSU2_TR(0x5e9271);
w1(R+12,u8(u32(r1(R+12))|u32(r1(G+0))));
}
B5e9273:{NFSU2_TR(0x5e9273);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
}
B5e9279:{NFSU2_TR(0x5e9279);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+20))==(u32(0x0ull))));
}
B5e927a:{NFSU2_TR(0x5e927a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9250u);}[[clang::musttail]] return blk_5e9250(ARGS);}}
{[[clang::musttail]] return blk_5e927c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e927c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e927c:L5e927c:{bud-=4;NFSU2_TR(0x5e927c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9280:{NFSU2_TR(0x5e9280);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B5e9281:{NFSU2_TR(0x5e9281);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9283:{NFSU2_TR(0x5e9283);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e92c0(ARGS);}}
}
B5e9285:L5e9285:{bud-=5;NFSU2_TR(0x5e9285);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9289:{NFSU2_TR(0x5e9289);
__builtin_memmove((R+24),(R+20),4);
}
B5e928b:{NFSU2_TR(0x5e928b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e9291:{NFSU2_TR(0x5e9291);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B5e9293:{NFSU2_TR(0x5e9293);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e9294(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9294(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9294:L5e9294:{bud-=7;NFSU2_TR(0x5e9294);
__builtin_memmove((R+8),gp(0x876d28),4);
}
B5e929a:{NFSU2_TR(0x5e929a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e929c:{NFSU2_TR(0x5e929c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e929d:{NFSU2_TR(0x5e929d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e929e:{NFSU2_TR(0x5e929e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e92a0:{NFSU2_TR(0x5e92a0);
__builtin_memmove((G+4),(R+24),4);
}
B5e92a2:{NFSU2_TR(0x5e92a2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e92a7ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d8fc0u);}[[clang::musttail]] return blk_5d8fc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e92a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e92a7:L5e92a7:{bud-=6;NFSU2_TR(0x5e92a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e92a9:{NFSU2_TR(0x5e92a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e92aa:{NFSU2_TR(0x5e92aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e92ac:{NFSU2_TR(0x5e92ac);
__builtin_memmove((G+4),(R+24),4);
}
B5e92ae:{NFSU2_TR(0x5e92ae);
w1(R+12,u8(u32(r1(R+12))|u32(r1(G+0))));
}
B5e92b0:{NFSU2_TR(0x5e92b0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e92b5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d9140u);}[[clang::musttail]] return blk_5d9140(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e92b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e92b5:L5e92b5:{bud-=4;NFSU2_TR(0x5e92b5);
w1(R+12,u8(u32(r1(R+12))|u32(r1(G+0))));
}
B5e92b7:{NFSU2_TR(0x5e92b7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x190ull))));
}
B5e92bd:{NFSU2_TR(0x5e92bd);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+20))==(u32(0x0ull))));
}
B5e92be:{NFSU2_TR(0x5e92be);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9294u);}[[clang::musttail]] return blk_5e9294(ARGS);}}
{[[clang::musttail]] return blk_5e92c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e92c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e92c0:L5e92c0:{bud-=5;NFSU2_TR(0x5e92c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e92c4:{NFSU2_TR(0x5e92c4);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B5e92c5:{NFSU2_TR(0x5e92c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e92c7:{NFSU2_TR(0x5e92c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e92cb:{NFSU2_TR(0x5e92cb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9080u);}[[clang::musttail]] return blk_5e9080(ARGS);}}
{[[clang::musttail]] return blk_5e92d1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e92d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e92d1:L5e92d1:{bud-=3;NFSU2_TR(0x5e92d1);
__builtin_memmove((G+0),gp(0x88f2be),1);
}
B5e92d6:{NFSU2_TR(0x5e92d6);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e92d8:{NFSU2_TR(0x5e92d8);
if(r1(F+6)){{[[clang::musttail]] return blk_5e95fe(ARGS);}}
}
B5e92de:L5e92de:{bud-=5;NFSU2_TR(0x5e92de);
__builtin_memmove((R+8),gp(0x883da4),4);
}
B5e92e4:{NFSU2_TR(0x5e92e4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e92e6:{NFSU2_TR(0x5e92e6);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B5e92e8:{NFSU2_TR(0x5e92e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e92ea:{NFSU2_TR(0x5e92ea);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9316(ARGS);}}
}
B5e92ec:L5e92ec:{bud-=3;NFSU2_TR(0x5e92ec);
__builtin_memmove((G+4),gp(0x883da0),4);
}
B5e92f2:{NFSU2_TR(0x5e92f2);
__builtin_memmove((R+24),gp(0x88f2c0),4);
}
B5e92f8:{NFSU2_TR(0x5e92f8);
{[[clang::musttail]] return blk_5e9300(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9300(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9300:L5e9300:{bud-=3;NFSU2_TR(0x5e9300);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B5e9307:{NFSU2_TR(0x5e9307);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9309:{NFSU2_TR(0x5e9309);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9318(ARGS);}}
}
B5e930b:L5e930b:{bud-=4;NFSU2_TR(0x5e930b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B5e930c:{NFSU2_TR(0x5e930c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x128ull))));
}
B5e9312:{NFSU2_TR(0x5e9312);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9314:{NFSU2_TR(0x5e9314);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9300u);}goto L5e9300;}}
{[[clang::musttail]] return blk_5e9316(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9316(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9316:L5e9316:{bud-=1;NFSU2_TR(0x5e9316);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
{[[clang::musttail]] return blk_5e9318(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9318(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9318:L5e9318:{bud-=2;NFSU2_TR(0x5e9318);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B5e931f:{NFSU2_TR(0x5e931f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95fe(ARGS);}}
}
B5e9325:L5e9325:{bud-=3;NFSU2_TR(0x5e9325);
u8 U[14];
__builtin_memmove((U+6),gp(0x883db4),4);
w1(F+0,u8((r4(U+6))<(r4(R+12))));
w1(F+11,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5e932b:{NFSU2_TR(0x5e932b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e932f:{NFSU2_TR(0x5e932f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95fe(ARGS);}}
}
B5e9335:L5e9335:{bud-=2;NFSU2_TR(0x5e9335);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9339:{NFSU2_TR(0x5e9339);
__builtin_memmove((G+16),(G+16),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e9340(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9340(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9340:L5e9340:{bud-=1;NFSU2_TR(0x5e9340);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9345ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x4022c0u);}[[clang::musttail]] return blk_4022c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9345:L5e9345:{bud-=9;NFSU2_TR(0x5e9345);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9349:{NFSU2_TR(0x5e9349);
__builtin_memmove((G+4),gp(0x883db0),4);
}
B5e934f:{NFSU2_TR(0x5e934f);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B5e9353:{NFSU2_TR(0x5e9353);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9357:{NFSU2_TR(0x5e9357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5e9359:{NFSU2_TR(0x5e9359);
__builtin_memmove((R+12),(G+0),1);
}
B5e935b:{NFSU2_TR(0x5e935b);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B5e935e:{NFSU2_TR(0x5e935e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e9361:{NFSU2_TR(0x5e9361);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9370(ARGS);}}
}
B5e9363:L5e9363:{bud-=2;NFSU2_TR(0x5e9363);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9365:{NFSU2_TR(0x5e9365);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9370(ARGS);}}
}
B5e9367:L5e9367:{bud-=2;NFSU2_TR(0x5e9367);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e936a:{NFSU2_TR(0x5e936a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
{[[clang::musttail]] return blk_5e9370(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9370(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9370:L5e9370:{bud-=8;NFSU2_TR(0x5e9370);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9374:{NFSU2_TR(0x5e9374);
__builtin_memmove((G+4),gp(0x883db0),4);
}
B5e937a:{NFSU2_TR(0x5e937a);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(G+4,u32(s32(s16(r2(U+12)))));
}
B5e937f:{NFSU2_TR(0x5e937f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9383:{NFSU2_TR(0x5e9383);
w4(G+4,u32(s32(s16(r2(G+4)))));
}
B5e9386:{NFSU2_TR(0x5e9386);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9388:{NFSU2_TR(0x5e9388);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e938c:{NFSU2_TR(0x5e938c);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e9392:L5e9392:{bud-=4;NFSU2_TR(0x5e9392);
__builtin_memmove((R+8),(G+4),4);
}
B5e9394:{NFSU2_TR(0x5e9394);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e939b:{NFSU2_TR(0x5e939b);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e939d:{NFSU2_TR(0x5e939d);
if(r1(F+6)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e93a3:L5e93a3:{bud-=5;NFSU2_TR(0x5e93a3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e93a6:{NFSU2_TR(0x5e93a6);
__builtin_memmove((R+8),(G+4),4);
}
B5e93a8:{NFSU2_TR(0x5e93a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e93ab:{NFSU2_TR(0x5e93ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e93ae:{NFSU2_TR(0x5e93ae);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e93b4:L5e93b4:{bud-=3;NFSU2_TR(0x5e93b4);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B5e93b7:{NFSU2_TR(0x5e93b7);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e93ba:{NFSU2_TR(0x5e93ba);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e93c0:L5e93c0:{bud-=2;NFSU2_TR(0x5e93c0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e93c3:{NFSU2_TR(0x5e93c3);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e93cb(ARGS);}}
}
B5e93c5:L5e93c5:{bud-=2;NFSU2_TR(0x5e93c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e93c9:{NFSU2_TR(0x5e93c9);
{[[clang::musttail]] return blk_5e93da(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e93cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e93cb:L5e93cb:{bud-=3;NFSU2_TR(0x5e93cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e93cf:{NFSU2_TR(0x5e93cf);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e93d5:{NFSU2_TR(0x5e93d5);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((G+4),(U+12),2);
{[[clang::musttail]] return blk_5e93da(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e93da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e93da:L5e93da:{bud-=3;NFSU2_TR(0x5e93da);
w4(G+4,u32(s32(s16(r2(G+4)))));
}
B5e93dd:{NFSU2_TR(0x5e93dd);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e93df:{NFSU2_TR(0x5e93df);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e93e5:L5e93e5:{bud-=3;NFSU2_TR(0x5e93e5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e93ec:{NFSU2_TR(0x5e93ec);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e93ee:{NFSU2_TR(0x5e93ee);
if(r1(F+6)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e93f4:L5e93f4:{bud-=5;NFSU2_TR(0x5e93f4);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e93f7:{NFSU2_TR(0x5e93f7);
__builtin_memmove((R+8),(G+4),4);
}
B5e93f9:{NFSU2_TR(0x5e93f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e93fc:{NFSU2_TR(0x5e93fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e93ff:{NFSU2_TR(0x5e93ff);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e9405:L5e9405:{bud-=3;NFSU2_TR(0x5e9405);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B5e9408:{NFSU2_TR(0x5e9408);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e940b:{NFSU2_TR(0x5e940b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e9411:L5e9411:{bud-=3;NFSU2_TR(0x5e9411);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9415:{NFSU2_TR(0x5e9415);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9417:{NFSU2_TR(0x5e9417);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9422(ARGS);}}
}
B5e9419:L5e9419:{bud-=2;NFSU2_TR(0x5e9419);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e9420:{NFSU2_TR(0x5e9420);
{[[clang::musttail]] return blk_5e9424(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9422(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9422:L5e9422:{bud-=1;NFSU2_TR(0x5e9422);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
{[[clang::musttail]] return blk_5e9424(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9424(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9424:L5e9424:{bud-=9;NFSU2_TR(0x5e9424);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e9428:{NFSU2_TR(0x5e9428);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e942e:{NFSU2_TR(0x5e942e);
u8 U[14];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e9433:{NFSU2_TR(0x5e9433);
w4(R+20,u32(s32(s16(r2(R+8)))));
}
B5e9436:{NFSU2_TR(0x5e9436);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5e9439:{NFSU2_TR(0x5e9439);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e943c:{NFSU2_TR(0x5e943c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9440:{NFSU2_TR(0x5e9440);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5e9447:{NFSU2_TR(0x5e9447);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9469(ARGS);}}
}
B5e9449:L5e9449:{bud-=3;NFSU2_TR(0x5e9449);
__builtin_memmove((G+4),gp(0x883db0),4);
}
B5e944f:{NFSU2_TR(0x5e944f);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5e9454:{NFSU2_TR(0x5e9454);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((G+4),(U+12),2);
{[[clang::musttail]] return blk_5e9459(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9459(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9459:L5e9459:{bud-=3;NFSU2_TR(0x5e9459);
w4(G+4,u32(s32(s16(r2(G+4)))));
}
B5e945c:{NFSU2_TR(0x5e945c);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e945e:{NFSU2_TR(0x5e945e);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e946f(ARGS);}}
}
B5e9460:L5e9460:{bud-=2;NFSU2_TR(0x5e9460);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e9467:{NFSU2_TR(0x5e9467);
{[[clang::musttail]] return blk_5e9471(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9469(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9469:L5e9469:{bud-=2;NFSU2_TR(0x5e9469);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e946d:{NFSU2_TR(0x5e946d);
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9459u);}[[clang::musttail]] return blk_5e9459(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e946f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e946f:L5e946f:{bud-=1;NFSU2_TR(0x5e946f);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
{[[clang::musttail]] return blk_5e9471(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9471(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9471:L5e9471:{bud-=15;NFSU2_TR(0x5e9471);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e9474:{NFSU2_TR(0x5e9474);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e9477:{NFSU2_TR(0x5e9477);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e947e:{NFSU2_TR(0x5e947e);
__builtin_memmove((G+4),(G+0),4);
}
B5e9480:{NFSU2_TR(0x5e9480);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B5e9483:{NFSU2_TR(0x5e9483);
w4(G+4,u32(r1(G+4)));
}
B5e9486:{NFSU2_TR(0x5e9486);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B5e9489:{NFSU2_TR(0x5e9489);
__builtin_memmove((R+8),(G+4),4);
}
B5e948b:{NFSU2_TR(0x5e948b);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+4))));
}
B5e948d:{NFSU2_TR(0x5e948d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9490:{NFSU2_TR(0x5e9490);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B5e9493:{NFSU2_TR(0x5e9493);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1ull))));
}
B5e9496:{NFSU2_TR(0x5e9496);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9498:{NFSU2_TR(0x5e9498);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e949c:{NFSU2_TR(0x5e949c);
if(r1(F+6)){{[[clang::musttail]] return blk_5e94a3(ARGS);}}
}
B5e949e:L5e949e:{bud-=2;NFSU2_TR(0x5e949e);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B5e94a1:{NFSU2_TR(0x5e94a1);
{[[clang::musttail]] return blk_5e94a6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e94a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e94a3:L5e94a3:{bud-=1;NFSU2_TR(0x5e94a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
{[[clang::musttail]] return blk_5e94a6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e94a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e94a6:L5e94a6:{bud-=3;NFSU2_TR(0x5e94a6);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x1ull))));
}
B5e94a9:{NFSU2_TR(0x5e94a9);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e94ab:{NFSU2_TR(0x5e94ab);
if(r1(F+6)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e94b1:L5e94b1:{bud-=3;NFSU2_TR(0x5e94b1);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e94b3:{NFSU2_TR(0x5e94b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e94b6:{NFSU2_TR(0x5e94b6);
if(r1(F+6)){{[[clang::musttail]] return blk_5e94bd(ARGS);}}
}
B5e94b8:L5e94b8:{bud-=2;NFSU2_TR(0x5e94b8);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B5e94bb:{NFSU2_TR(0x5e94bb);
{[[clang::musttail]] return blk_5e94c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e94bd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e94bd:L5e94bd:{bud-=1;NFSU2_TR(0x5e94bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
{[[clang::musttail]] return blk_5e94c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e94c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e94c0:L5e94c0:{bud-=3;NFSU2_TR(0x5e94c0);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1ull))));
}
B5e94c3:{NFSU2_TR(0x5e94c3);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e94c5:{NFSU2_TR(0x5e94c5);
if(r1(F+6)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e94cb:L5e94cb:{bud-=2;NFSU2_TR(0x5e94cb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e94ce:{NFSU2_TR(0x5e94ce);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e94d6(ARGS);}}
}
B5e94d0:L5e94d0:{bud-=2;NFSU2_TR(0x5e94d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e94d4:{NFSU2_TR(0x5e94d4);
{[[clang::musttail]] return blk_5e94e5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e94d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e94d6:L5e94d6:{bud-=3;NFSU2_TR(0x5e94d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e94da:{NFSU2_TR(0x5e94da);
__builtin_memmove((G+4),gp(0x883db0),4);
}
B5e94e0:{NFSU2_TR(0x5e94e0);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((G+0),(U+12),2);
{[[clang::musttail]] return blk_5e94e5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e94e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e94e5:L5e94e5:{bud-=4;NFSU2_TR(0x5e94e5);
w4(R+24,u32(s32(s16(r2(G+0)))));
}
B5e94e8:{NFSU2_TR(0x5e94e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e94ec:{NFSU2_TR(0x5e94ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e94ee:{NFSU2_TR(0x5e94ee);
if(r1(F+6)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e94f4:L5e94f4:{bud-=10;NFSU2_TR(0x5e94f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e94f8:{NFSU2_TR(0x5e94f8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e94fb:{NFSU2_TR(0x5e94fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e94ff:{NFSU2_TR(0x5e94ff);
w4(R+20,u32(s32(s16(r2(G+0)))));
}
B5e9502:{NFSU2_TR(0x5e9502);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
}
B5e9504:{NFSU2_TR(0x5e9504);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9508:{NFSU2_TR(0x5e9508);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B5e950e:{NFSU2_TR(0x5e950e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
}
B5e9510:{NFSU2_TR(0x5e9510);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B5e9513:{NFSU2_TR(0x5e9513);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9524(ARGS);}}
}
B5e9515:L5e9515:{bud-=3;NFSU2_TR(0x5e9515);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9519:{NFSU2_TR(0x5e9519);
__builtin_memmove((R+12),gp(0x883db0),4);
}
B5e951f:{NFSU2_TR(0x5e951f);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((G+0),(U+12),2);
{[[clang::musttail]] return blk_5e9524(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9524(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9524:L5e9524:{bud-=14;NFSU2_TR(0x5e9524);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9528:{NFSU2_TR(0x5e9528);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e952c:{NFSU2_TR(0x5e952c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e9530:{NFSU2_TR(0x5e9530);
w4(G+0,u32(s32(s16(r2(G+0)))));
}
B5e9533:{NFSU2_TR(0x5e9533);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B5e9535:{NFSU2_TR(0x5e9535);
__builtin_memmove((G+0),gp(0x7a4790),4);
}
B5e953a:{NFSU2_TR(0x5e953a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e9540:{NFSU2_TR(0x5e9540);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9541:{NFSU2_TR(0x5e9541);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9542:{NFSU2_TR(0x5e9542);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9543:{NFSU2_TR(0x5e9543);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9544:{NFSU2_TR(0x5e9544);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9545:{NFSU2_TR(0x5e9545);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5e9547:{NFSU2_TR(0x5e9547);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e954cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5ddde0u);}[[clang::musttail]] return blk_5ddde0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e954c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e954c:L5e954c:{bud-=2;NFSU2_TR(0x5e954c);
__builtin_memmove((G+4),gp(0x7a4790),4);
}
B5e9552:{NFSU2_TR(0x5e9552);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_5e9556(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9556(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9556:L5e9556:{bud-=8;NFSU2_TR(0x5e9556);
{u32 ea_=u32(r4(G+16)+u32(60u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B5e955a:{NFSU2_TR(0x5e955a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e955b:{NFSU2_TR(0x5e955b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e955c:{NFSU2_TR(0x5e955c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e955d:{NFSU2_TR(0x5e955d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e955e:{NFSU2_TR(0x5e955e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e955f:{NFSU2_TR(0x5e955f);
__builtin_memmove((G+4),(R+24),4);
}
B5e9561:{NFSU2_TR(0x5e9561);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9566ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5ddde0u);}[[clang::musttail]] return blk_5ddde0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9566(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9566:L5e9566:{bud-=2;NFSU2_TR(0x5e9566);
__builtin_memmove((G+0),gp(0x88f2bc),1);
}
B5e956b:{NFSU2_TR(0x5e956b);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_5e956d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e956d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e956d:L5e956d:{bud-=2;NFSU2_TR(0x5e956d);
{u32 ea_=u32(r4(G+16)+u32(60u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
}
B5e9571:{NFSU2_TR(0x5e9571);
if(r1(F+6)){{[[clang::musttail]] return blk_5e95a1(ARGS);}}
{[[clang::musttail]] return blk_5e9573(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9573(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9573:L5e9573:{bud-=1;NFSU2_TR(0x5e9573);
{u32 ea_=u32(u32(8975028u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_5e9579(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9579(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9579:L5e9579:{bud-=2;NFSU2_TR(0x5e9579);
__asm__ volatile(".byte 0xd9,0xe0"::);
}
B5e957b:{NFSU2_TR(0x5e957b);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_5e957d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e957d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e957d:L5e957d:{bud-=4;NFSU2_TR(0x5e957d);
__asm__ volatile(".byte 0xde,0xd9"::);
}
B5e957f:{NFSU2_TR(0x5e957f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B5e9581:{NFSU2_TR(0x5e9581);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5e9584:{NFSU2_TR(0x5e9584);
if(r1(F+2)){{[[clang::musttail]] return blk_5e958e(ARGS);}}
{[[clang::musttail]] return blk_5e9586(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9586(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9586:L5e9586:{bud-=2;NFSU2_TR(0x5e9586);
{u32 ea_=u32(u32(8975024u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
}
B5e958c:{NFSU2_TR(0x5e958c);
{[[clang::musttail]] return blk_5e95a1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e958e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e958e:L5e958e:{bud-=4;NFSU2_TR(0x5e958e);
{u32 ea_=u32(u32(8975028u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_),"m"(m_));}
}
B5e9594:{NFSU2_TR(0x5e9594);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B5e9596:{NFSU2_TR(0x5e9596);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9599:{NFSU2_TR(0x5e9599);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95a1(ARGS);}}
{[[clang::musttail]] return blk_5e959b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e959b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e959b:L5e959b:{bud-=1;NFSU2_TR(0x5e959b);
{u32 ea_=u32(u32(8975024u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_5e95a1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95a1:L5e95a1:{bud-=1;NFSU2_TR(0x5e95a1);
{u32 ea_=u32(u32(8013716u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_5e95a7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95a7:L5e95a7:{bud-=2;NFSU2_TR(0x5e95a7);
__asm__ volatile(".byte 0xd9,0xe0"::);
}
B5e95a9:{NFSU2_TR(0x5e95a9);
__asm__ volatile(".byte 0xd9,0xc1"::);
{[[clang::musttail]] return blk_5e95ab(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95ab:L5e95ab:{bud-=4;NFSU2_TR(0x5e95ab);
__asm__ volatile(".byte 0xde,0xd9"::);
}
B5e95ad:{NFSU2_TR(0x5e95ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B5e95af:{NFSU2_TR(0x5e95af);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5e95b2:{NFSU2_TR(0x5e95b2);
if(r1(F+2)){{[[clang::musttail]] return blk_5e95c4(ARGS);}}
}
B5e95b4:L5e95b4:{bud-=1;NFSU2_TR(0x5e95b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_5e95b8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95b8:L5e95b8:{bud-=5;NFSU2_TR(0x5e95b8);
__asm__ volatile(".byte 0xdd,0xd8"::);
}
B5e95ba:{NFSU2_TR(0x5e95ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5e95bc:{NFSU2_TR(0x5e95bc);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xfffffff1ull))));
}
B5e95bf:{NFSU2_TR(0x5e95bf);
w4(G+4,u32(u32(r4(G+4))|u32(u32(0x1ull))));
}
B5e95c2:{NFSU2_TR(0x5e95c2);
{[[clang::musttail]] return blk_5e95da(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95c4:L5e95c4:{bud-=4;NFSU2_TR(0x5e95c4);
{u32 ea_=u32(u32(8013716u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_),"m"(m_));}
}
B5e95ca:{NFSU2_TR(0x5e95ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B5e95cc:{NFSU2_TR(0x5e95cc);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e95cf:{NFSU2_TR(0x5e95cf);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e95dc(ARGS);}}
}
B5e95d1:L5e95d1:{bud-=3;NFSU2_TR(0x5e95d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e95d5:{NFSU2_TR(0x5e95d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5e95d7:{NFSU2_TR(0x5e95d7);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xfffffff0ull))));
{[[clang::musttail]] return blk_5e95da(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95da:L5e95da:{bud-=1;NFSU2_TR(0x5e95da);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
{[[clang::musttail]] return blk_5e95dc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95dc:L5e95dc:{bud-=9;NFSU2_TR(0x5e95dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e95e0:{NFSU2_TR(0x5e95e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e95e4:{NFSU2_TR(0x5e95e4);
__builtin_memmove((G+4),gp(0x883db4),4);
}
B5e95ea:{NFSU2_TR(0x5e95ea);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B5e95eb:{NFSU2_TR(0x5e95eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5e95ee:{NFSU2_TR(0x5e95ee);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+6)));
w4(U+10,u32(u32(r4(G+0))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5e95f0:{NFSU2_TR(0x5e95f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e95f4:{NFSU2_TR(0x5e95f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e95f8:{NFSU2_TR(0x5e95f8);
if(r1(F+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x5e9340u);}[[clang::musttail]] return blk_5e9340(ARGS);}}
{[[clang::musttail]] return blk_5e95fe(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e95fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e95fe:L5e95fe:{bud-=8;NFSU2_TR(0x5e95fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9602:{NFSU2_TR(0x5e9602);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x468cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9608:{NFSU2_TR(0x5e9608);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e960c:{NFSU2_TR(0x5e960c);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B5e960e:{NFSU2_TR(0x5e960e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x468cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9614:{NFSU2_TR(0x5e9614);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9618:{NFSU2_TR(0x5e9618);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9619:{NFSU2_TR(0x5e9619);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e961eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x440540u);}[[clang::musttail]] return blk_440540(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e961e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e961e:L5e961e:{bud-=6;NFSU2_TR(0x5e961e);
__builtin_memmove((R+24),gp(0x88f1a8),4);
}
B5e9624:{NFSU2_TR(0x5e9624);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9628:{NFSU2_TR(0x5e9628);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5e9629:{NFSU2_TR(0x5e9629);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e962a:{NFSU2_TR(0x5e962a);
__builtin_memmove(gp(0x88f1a8),(R+24),4);
}
B5e9630:{NFSU2_TR(0x5e9630);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9635ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x440540u);}[[clang::musttail]] return blk_440540(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9635(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9635:L5e9635:{bud-=10;NFSU2_TR(0x5e9635);
__builtin_memmove((G+0),gp(0x88f1a8),4);
}
B5e963a:{NFSU2_TR(0x5e963a);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B5e963d:{NFSU2_TR(0x5e963d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e963e:{NFSU2_TR(0x5e963e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e963f:{NFSU2_TR(0x5e963f);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B5e9640:{NFSU2_TR(0x5e9640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9641:{NFSU2_TR(0x5e9641);
__builtin_memmove(gp(0x88f1a8),(G+0),4);
}
B5e9646:{NFSU2_TR(0x5e9646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9647:{NFSU2_TR(0x5e9647);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x30ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x30ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5e964a:{NFSU2_TR(0x5e964a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x5ea0d4u)[[clang::musttail]] return blk_5ea0d4(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9650:L5e9650:{bud-=10;NFSU2_TR(0x5e9650);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9651:{NFSU2_TR(0x5e9651);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
}
B5e9654:{NFSU2_TR(0x5e9654);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9655:{NFSU2_TR(0x5e9655);
__builtin_memmove((R+24),(G+4),4);
}
B5e9657:{NFSU2_TR(0x5e9657);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e965e:{NFSU2_TR(0x5e965e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9664:{NFSU2_TR(0x5e9664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e966a:{NFSU2_TR(0x5e966a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x289ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B5e9670:{NFSU2_TR(0x5e9670);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9672:{NFSU2_TR(0x5e9672);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9698(ARGS);}}
}
B5e9674:L5e9674:{bud-=3;NFSU2_TR(0x5e9674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e967a:{NFSU2_TR(0x5e967a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e967c:{NFSU2_TR(0x5e967c);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9698(ARGS);}}
}
B5e967e:L5e967e:{bud-=3;NFSU2_TR(0x5e967e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5e9682:{NFSU2_TR(0x5e9682);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9683:{NFSU2_TR(0x5e9683);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9688ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e5300u);}[[clang::musttail]] return blk_5e5300(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9688(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9688:L5e9688:{bud-=2;NFSU2_TR(0x5e9688);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e968a:{NFSU2_TR(0x5e968a);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9698(ARGS);}}
}
B5e968c:L5e968c:{bud-=4;NFSU2_TR(0x5e968c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5e9690:{NFSU2_TR(0x5e9690);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9691:{NFSU2_TR(0x5e9691);
__builtin_memmove((G+4),(R+24),4);
}
B5e9693:{NFSU2_TR(0x5e9693);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9698ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e7af0u);}[[clang::musttail]] return blk_5e7af0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9698(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9698:L5e9698:{bud-=2;NFSU2_TR(0x5e9698);
__builtin_memmove((G+4),(R+24),4);
}
B5e969a:{NFSU2_TR(0x5e969a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e969full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e79d0u);}[[clang::musttail]] return blk_5e79d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e969f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e969f:L5e969f:{bud-=3;NFSU2_TR(0x5e969f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e96a0:{NFSU2_TR(0x5e96a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e96a1:{NFSU2_TR(0x5e96a1);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x435c84u)[[clang::musttail]] return blk_435c84(ARGS);if(t__==0x600f77u)[[clang::musttail]] return blk_600f77(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e96b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e96b0:L5e96b0:{bud-=12;NFSU2_TR(0x5e96b0);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e96b1:{NFSU2_TR(0x5e96b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e96b5:{NFSU2_TR(0x5e96b5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e96b8:{NFSU2_TR(0x5e96b8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e96bb:{NFSU2_TR(0x5e96bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e96bc:{NFSU2_TR(0x5e96bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e96bd:{NFSU2_TR(0x5e96bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e96be:{NFSU2_TR(0x5e96be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e96bf:{NFSU2_TR(0x5e96bf);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B5e96c2:{NFSU2_TR(0x5e96c2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e96c3:{NFSU2_TR(0x5e96c3);
w4(G+4,u32(0x883e70ull));
}
B5e96c8:{NFSU2_TR(0x5e96c8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e96cdull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e00d0u);}[[clang::musttail]] return blk_5e00d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e96cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e96cd:L5e96cd:{bud-=6;NFSU2_TR(0x5e96cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e96d1:{NFSU2_TR(0x5e96d1);
__builtin_memmove((R+12),(G+0),4);
}
B5e96d3:{NFSU2_TR(0x5e96d3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e96d5:{NFSU2_TR(0x5e96d5);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5e96d7:{NFSU2_TR(0x5e96d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e96db:{NFSU2_TR(0x5e96db);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9724(ARGS);}}
}
B5e96dd:L5e96dd:{bud-=3;NFSU2_TR(0x5e96dd);
__builtin_memmove((R+28),gp(0x88ead4),4);
}
B5e96e3:{NFSU2_TR(0x5e96e3);
w4(G+4,u32(0x88ead4ull));
}
B5e96e8:{NFSU2_TR(0x5e96e8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e96edull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x502fd0u);}[[clang::musttail]] return blk_502fd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e96ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e96ed:L5e96ed:{bud-=3;NFSU2_TR(0x5e96ed);
__builtin_memmove((R+12),(G+0),4);
}
B5e96ef:{NFSU2_TR(0x5e96ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e96f1:{NFSU2_TR(0x5e96f1);
if(r1(F+6)){{[[clang::musttail]] return blk_5e98b6(ARGS);}}
{[[clang::musttail]] return blk_5e96f7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e96f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e96f7:L5e96f7:{bud-=8;NFSU2_TR(0x5e96f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e96fa:{NFSU2_TR(0x5e96fa);
__builtin_memmove((G+0),(G+4),4);
}
B5e96fc:{NFSU2_TR(0x5e96fc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e96fd:{NFSU2_TR(0x5e96fd);
w4(R+20,u32(0x64ull));
}
B5e9702:{NFSU2_TR(0x5e9702);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9702);w8(U+40,u64(x_/y_));}
w4(G+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9702);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e9704:{NFSU2_TR(0x5e9704);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9708:{NFSU2_TR(0x5e9708);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e970b:{NFSU2_TR(0x5e970b);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9719(ARGS);}}
}
B5e970d:L5e970d:{bud-=2;NFSU2_TR(0x5e970d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e9711:{NFSU2_TR(0x5e9711);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9719(ARGS);}}
}
B5e9713:L5e9713:{bud-=2;NFSU2_TR(0x5e9713);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e9718:{NFSU2_TR(0x5e9718);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e9719(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9719(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9719:L5e9719:{bud-=3;NFSU2_TR(0x5e9719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e971b:{NFSU2_TR(0x5e971b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e971d:{NFSU2_TR(0x5e971d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e96f7u);}[[clang::musttail]] return blk_5e96f7(ARGS);}}
}
B5e971f:L5e971f:{bud-=1;NFSU2_TR(0x5e971f);
{[[clang::musttail]] return blk_5e98b6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9724(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9724:L5e9724:{bud-=2;NFSU2_TR(0x5e9724);
w4(G+0,u32(0xa28ull));
}
B5e9729:{NFSU2_TR(0x5e9729);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_5e9730(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9730(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9730:L5e9730:{bud-=3;NFSU2_TR(0x5e9730);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e9737:{NFSU2_TR(0x5e9737);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9739:{NFSU2_TR(0x5e9739);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9752(ARGS);}}
}
B5e973b:L5e973b:{bud-=3;NFSU2_TR(0x5e973b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e973e:{NFSU2_TR(0x5e973e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9740:{NFSU2_TR(0x5e9740);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9752(ARGS);}}
}
B5e9742:L5e9742:{bud-=3;NFSU2_TR(0x5e9742);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9746:{NFSU2_TR(0x5e9746);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9748:{NFSU2_TR(0x5e9748);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9756(ARGS);}}
}
B5e974a:L5e974a:{bud-=3;NFSU2_TR(0x5e974a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e974f:{NFSU2_TR(0x5e974f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9750:{NFSU2_TR(0x5e9750);
{[[clang::musttail]] return blk_5e9756(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9752(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9752:L5e9752:{bud-=1;NFSU2_TR(0x5e9752);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_5e9756(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9756(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9756:L5e9756:{bud-=3;NFSU2_TR(0x5e9756);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e975d:{NFSU2_TR(0x5e975d);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e975f:{NFSU2_TR(0x5e975f);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9775(ARGS);}}
}
B5e9761:L5e9761:{bud-=3;NFSU2_TR(0x5e9761);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9764:{NFSU2_TR(0x5e9764);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9766:{NFSU2_TR(0x5e9766);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9775(ARGS);}}
}
B5e9768:L5e9768:{bud-=2;NFSU2_TR(0x5e9768);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e976a:{NFSU2_TR(0x5e976a);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9775(ARGS);}}
}
B5e976c:L5e976c:{bud-=3;NFSU2_TR(0x5e976c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e976f:{NFSU2_TR(0x5e976f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e9774:{NFSU2_TR(0x5e9774);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e9775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9775(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9775:L5e9775:{bud-=3;NFSU2_TR(0x5e9775);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e977c:{NFSU2_TR(0x5e977c);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e977e:{NFSU2_TR(0x5e977e);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9794(ARGS);}}
}
B5e9780:L5e9780:{bud-=3;NFSU2_TR(0x5e9780);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9783:{NFSU2_TR(0x5e9783);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9785:{NFSU2_TR(0x5e9785);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9794(ARGS);}}
}
B5e9787:L5e9787:{bud-=2;NFSU2_TR(0x5e9787);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9789:{NFSU2_TR(0x5e9789);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9794(ARGS);}}
}
B5e978b:L5e978b:{bud-=3;NFSU2_TR(0x5e978b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e978e:{NFSU2_TR(0x5e978e);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e9793:{NFSU2_TR(0x5e9793);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e9794(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9794(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9794:L5e9794:{bud-=3;NFSU2_TR(0x5e9794);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883eccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e979b:{NFSU2_TR(0x5e979b);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e979d:{NFSU2_TR(0x5e979d);
if(r1(F+6)){{[[clang::musttail]] return blk_5e97b3(ARGS);}}
}
B5e979f:L5e979f:{bud-=3;NFSU2_TR(0x5e979f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97a2:{NFSU2_TR(0x5e97a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97a4:{NFSU2_TR(0x5e97a4);
if(r1(F+6)){{[[clang::musttail]] return blk_5e97b3(ARGS);}}
}
B5e97a6:L5e97a6:{bud-=2;NFSU2_TR(0x5e97a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e97a8:{NFSU2_TR(0x5e97a8);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e97b3(ARGS);}}
}
B5e97aa:L5e97aa:{bud-=3;NFSU2_TR(0x5e97aa);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e97ad:{NFSU2_TR(0x5e97ad);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e97b2:{NFSU2_TR(0x5e97b2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e97b3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e97b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e97b3:L5e97b3:{bud-=3;NFSU2_TR(0x5e97b3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ed0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e97ba:{NFSU2_TR(0x5e97ba);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97bc:{NFSU2_TR(0x5e97bc);
if(r1(F+6)){{[[clang::musttail]] return blk_5e97d2(ARGS);}}
}
B5e97be:L5e97be:{bud-=3;NFSU2_TR(0x5e97be);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97c1:{NFSU2_TR(0x5e97c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97c3:{NFSU2_TR(0x5e97c3);
if(r1(F+6)){{[[clang::musttail]] return blk_5e97d2(ARGS);}}
}
B5e97c5:L5e97c5:{bud-=2;NFSU2_TR(0x5e97c5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e97c7:{NFSU2_TR(0x5e97c7);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e97d2(ARGS);}}
}
B5e97c9:L5e97c9:{bud-=3;NFSU2_TR(0x5e97c9);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e97cc:{NFSU2_TR(0x5e97cc);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e97d1:{NFSU2_TR(0x5e97d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e97d2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e97d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e97d2:L5e97d2:{bud-=3;NFSU2_TR(0x5e97d2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ed4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e97d9:{NFSU2_TR(0x5e97d9);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97db:{NFSU2_TR(0x5e97db);
if(r1(F+6)){{[[clang::musttail]] return blk_5e97f1(ARGS);}}
}
B5e97dd:L5e97dd:{bud-=3;NFSU2_TR(0x5e97dd);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97e0:{NFSU2_TR(0x5e97e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97e2:{NFSU2_TR(0x5e97e2);
if(r1(F+6)){{[[clang::musttail]] return blk_5e97f1(ARGS);}}
}
B5e97e4:L5e97e4:{bud-=2;NFSU2_TR(0x5e97e4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e97e6:{NFSU2_TR(0x5e97e6);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e97f1(ARGS);}}
}
B5e97e8:L5e97e8:{bud-=3;NFSU2_TR(0x5e97e8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e97eb:{NFSU2_TR(0x5e97eb);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e97f0:{NFSU2_TR(0x5e97f0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e97f1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e97f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e97f1:L5e97f1:{bud-=3;NFSU2_TR(0x5e97f1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ed8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e97f8:{NFSU2_TR(0x5e97f8);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e97fa:{NFSU2_TR(0x5e97fa);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9810(ARGS);}}
}
B5e97fc:L5e97fc:{bud-=3;NFSU2_TR(0x5e97fc);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e97ff:{NFSU2_TR(0x5e97ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9801:{NFSU2_TR(0x5e9801);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9810(ARGS);}}
}
B5e9803:L5e9803:{bud-=2;NFSU2_TR(0x5e9803);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9805:{NFSU2_TR(0x5e9805);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9810(ARGS);}}
}
B5e9807:L5e9807:{bud-=3;NFSU2_TR(0x5e9807);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x6ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e980a:{NFSU2_TR(0x5e980a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e980f:{NFSU2_TR(0x5e980f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e9810(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9810(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9810:L5e9810:{bud-=3;NFSU2_TR(0x5e9810);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883edcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e9817:{NFSU2_TR(0x5e9817);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9819:{NFSU2_TR(0x5e9819);
if(r1(F+6)){{[[clang::musttail]] return blk_5e982f(ARGS);}}
}
B5e981b:L5e981b:{bud-=3;NFSU2_TR(0x5e981b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e981e:{NFSU2_TR(0x5e981e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9820:{NFSU2_TR(0x5e9820);
if(r1(F+6)){{[[clang::musttail]] return blk_5e982f(ARGS);}}
}
B5e9822:L5e9822:{bud-=2;NFSU2_TR(0x5e9822);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9824:{NFSU2_TR(0x5e9824);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e982f(ARGS);}}
}
B5e9826:L5e9826:{bud-=3;NFSU2_TR(0x5e9826);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e9829:{NFSU2_TR(0x5e9829);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e982e:{NFSU2_TR(0x5e982e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e982f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e982f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e982f:L5e982f:{bud-=3;NFSU2_TR(0x5e982f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ee0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e9836:{NFSU2_TR(0x5e9836);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9838:{NFSU2_TR(0x5e9838);
if(r1(F+6)){{[[clang::musttail]] return blk_5e984e(ARGS);}}
}
B5e983a:L5e983a:{bud-=3;NFSU2_TR(0x5e983a);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e983d:{NFSU2_TR(0x5e983d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e983f:{NFSU2_TR(0x5e983f);
if(r1(F+6)){{[[clang::musttail]] return blk_5e984e(ARGS);}}
}
B5e9841:L5e9841:{bud-=2;NFSU2_TR(0x5e9841);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9843:{NFSU2_TR(0x5e9843);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e984e(ARGS);}}
}
B5e9845:L5e9845:{bud-=3;NFSU2_TR(0x5e9845);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e9848:{NFSU2_TR(0x5e9848);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e984d:{NFSU2_TR(0x5e984d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e984e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e984e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e984e:L5e984e:{bud-=3;NFSU2_TR(0x5e984e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ee4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e9855:{NFSU2_TR(0x5e9855);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9857:{NFSU2_TR(0x5e9857);
if(r1(F+6)){{[[clang::musttail]] return blk_5e986d(ARGS);}}
}
B5e9859:L5e9859:{bud-=3;NFSU2_TR(0x5e9859);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e985c:{NFSU2_TR(0x5e985c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e985e:{NFSU2_TR(0x5e985e);
if(r1(F+6)){{[[clang::musttail]] return blk_5e986d(ARGS);}}
}
B5e9860:L5e9860:{bud-=2;NFSU2_TR(0x5e9860);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9862:{NFSU2_TR(0x5e9862);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e986d(ARGS);}}
}
B5e9864:L5e9864:{bud-=3;NFSU2_TR(0x5e9864);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x9ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e9867:{NFSU2_TR(0x5e9867);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e986c:{NFSU2_TR(0x5e986c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e986d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e986d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e986d:L5e986d:{bud-=3;NFSU2_TR(0x5e986d);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0xaull))));
}
B5e9870:{NFSU2_TR(0x5e9870);
u8 U[4];
w1(F+11,sborrow<u32>(r4(G+0),u32(0xa8cull)));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xa8cull))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e9875:{NFSU2_TR(0x5e9875);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9730u);}[[clang::musttail]] return blk_5e9730(ARGS);}}
}
B5e987b:L5e987b:{bud-=4;NFSU2_TR(0x5e987b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e987e:{NFSU2_TR(0x5e987e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e9880:{NFSU2_TR(0x5e9880);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9882:{NFSU2_TR(0x5e9882);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e98b6(ARGS);}}
}
B5e9884:L5e9884:{bud-=1;NFSU2_TR(0x5e9884);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
{[[clang::musttail]] return blk_5e9887(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9887(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9887:L5e9887:{bud-=3;NFSU2_TR(0x5e9887);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(G+0,u32(s32(s16(r2(U+0)))));
}
B5e988a:{NFSU2_TR(0x5e988a);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e988c:{NFSU2_TR(0x5e988c);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e98ab(ARGS);}}
}
B5e988e:L5e988e:{bud-=3;NFSU2_TR(0x5e988e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B5e9895:{NFSU2_TR(0x5e9895);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9897:{NFSU2_TR(0x5e9897);
if(r1(F+6)){{[[clang::musttail]] return blk_5e98ab(ARGS);}}
}
B5e9899:L5e9899:{bud-=2;NFSU2_TR(0x5e9899);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B5e989d:{NFSU2_TR(0x5e989d);
if(r1(F+6)){{[[clang::musttail]] return blk_5e98ab(ARGS);}}
}
B5e989f:L5e989f:{bud-=2;NFSU2_TR(0x5e989f);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e98a3:{NFSU2_TR(0x5e98a3);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e98ab(ARGS);}}
}
B5e98a5:L5e98a5:{bud-=2;NFSU2_TR(0x5e98a5);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5e98aa:{NFSU2_TR(0x5e98aa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5e98ab(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e98ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e98ab:L5e98ab:{bud-=5;NFSU2_TR(0x5e98ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e98ae:{NFSU2_TR(0x5e98ae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e98af:{NFSU2_TR(0x5e98af);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5e98b2:{NFSU2_TR(0x5e98b2);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e98b4:{NFSU2_TR(0x5e98b4);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9887u);}[[clang::musttail]] return blk_5e9887(ARGS);}}
{[[clang::musttail]] return blk_5e98b6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e98b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e98b6:L5e98b6:{bud-=4;NFSU2_TR(0x5e98b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e98ba:{NFSU2_TR(0x5e98ba);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e98bd:{NFSU2_TR(0x5e98bd);
u8 U[22];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x1ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B5e98c1:{NFSU2_TR(0x5e98c1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99b3(ARGS);}}
}
B5e98c7:L5e98c7:{bud-=5;NFSU2_TR(0x5e98c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e98cb:{NFSU2_TR(0x5e98cb);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B5e98ce:{NFSU2_TR(0x5e98ce);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e98d0:{NFSU2_TR(0x5e98d0);
__builtin_memmove((G+0),(R+12),4);
}
B5e98d2:{NFSU2_TR(0x5e98d2);
if(r1(F+6)){{[[clang::musttail]] return blk_5e98d8(ARGS);}}
}
B5e98d4:L5e98d4:{bud-=1;NFSU2_TR(0x5e98d4);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(s32(s16(r2(U+4)))));
{[[clang::musttail]] return blk_5e98d8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e98d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e98d8:L5e98d8:{bud-=2;NFSU2_TR(0x5e98d8);
u8 U[8];
__builtin_memmove((U+0),gp(0x800df0),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e98de:{NFSU2_TR(0x5e98de);
if(r1(F+6)){{[[clang::musttail]] return blk_5e990c(ARGS);}}
}
B5e98e0:L5e98e0:{bud-=4;NFSU2_TR(0x5e98e0);
__builtin_memmove(gp(0x800df0),(G+0),4);
}
B5e98e5:{NFSU2_TR(0x5e98e5);
__builtin_memmove((G+0),gp(0x883de0),4);
}
B5e98ea:{NFSU2_TR(0x5e98ea);
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
B5e98ec:{NFSU2_TR(0x5e98ec);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99b3(ARGS);}}
}
B5e98f2:L5e98f2:{bud-=2;NFSU2_TR(0x5e98f2);
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
B5e98f4:{NFSU2_TR(0x5e98f4);
if(r1(F+6)){{[[clang::musttail]] return blk_5e990c(ARGS);}}
}
B5e98f6:L5e98f6:{bud-=5;NFSU2_TR(0x5e98f6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e98f8:{NFSU2_TR(0x5e98f8);
u8 U[4];
w4(U+0,u32(0x800df0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e98fd:{NFSU2_TR(0x5e98fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e98ff:{NFSU2_TR(0x5e98ff);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9904:{NFSU2_TR(0x5e9904);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9909ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x4022c0u);}[[clang::musttail]] return blk_4022c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9909(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9909:L5e9909:{bud-=1;NFSU2_TR(0x5e9909);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_5e990c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e990c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e990c:L5e990c:{bud-=3;NFSU2_TR(0x5e990c);
__builtin_memmove((G+0),gp(0x883de0),4);
}
B5e9911:{NFSU2_TR(0x5e9911);
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
B5e9913:{NFSU2_TR(0x5e9913);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99b3(ARGS);}}
}
B5e9919:L5e9919:{bud-=3;NFSU2_TR(0x5e9919);
__builtin_memmove((R+28),gp(0x883de4),4);
}
B5e991f:{NFSU2_TR(0x5e991f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9921:{NFSU2_TR(0x5e9921);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9950(ARGS);}}
}
B5e9923:L5e9923:{bud-=9;NFSU2_TR(0x5e9923);
__builtin_memmove((G+4),gp(0x7fb708),4);
}
B5e9929:{NFSU2_TR(0x5e9929);
w4(G+0,u32(0x66666667ull));
}
B5e992e:{NFSU2_TR(0x5e992e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B5e9930:{NFSU2_TR(0x5e9930);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5e9932:{NFSU2_TR(0x5e9932);
__builtin_memmove((G+0),(R+8),4);
}
B5e9934:{NFSU2_TR(0x5e9934);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B5e9937:{NFSU2_TR(0x5e9937);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B5e9939:{NFSU2_TR(0x5e9939);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e993c:{NFSU2_TR(0x5e993c);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9950(ARGS);}}
}
B5e993e:L5e993e:{bud-=6;NFSU2_TR(0x5e993e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9942:{NFSU2_TR(0x5e9942);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9943:{NFSU2_TR(0x5e9943);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9944:{NFSU2_TR(0x5e9944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9945:{NFSU2_TR(0x5e9945);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9946:{NFSU2_TR(0x5e9946);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e994bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d6470u);}[[clang::musttail]] return blk_5d6470(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e994b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e994b:L5e994b:{bud-=2;NFSU2_TR(0x5e994b);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B5e994e:{NFSU2_TR(0x5e994e);
__builtin_memmove((R+24),(G+0),4);
{[[clang::musttail]] return blk_5e9950(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9950(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9950:L5e9950:{bud-=3;NFSU2_TR(0x5e9950);
__builtin_memmove((G+0),gp(0x883de0),4);
}
B5e9955:{NFSU2_TR(0x5e9955);
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
B5e9957:{NFSU2_TR(0x5e9957);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99b3(ARGS);}}
}
B5e9959:L5e9959:{bud-=3;NFSU2_TR(0x5e9959);
__builtin_memmove((G+0),gp(0x883dec),4);
}
B5e995e:{NFSU2_TR(0x5e995e);
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
B5e9960:{NFSU2_TR(0x5e9960);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99b3(ARGS);}}
}
B5e9962:L5e9962:{bud-=6;NFSU2_TR(0x5e9962);
__builtin_memmove((G+0),gp(0x88ed89),1);
}
B5e9967:{NFSU2_TR(0x5e9967);
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
B5e9969:{NFSU2_TR(0x5e9969);
s1(0x88ed88,u8(0x1ull));
}
B5e9970:{NFSU2_TR(0x5e9970);
__builtin_memmove(gp(0x88ebcc),(R+12),4);
}
B5e9976:{NFSU2_TR(0x5e9976);
__builtin_memmove(gp(0x88ec28),(R+12),4);
}
B5e997c:{NFSU2_TR(0x5e997c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99a9(ARGS);}}
}
B5e997e:L5e997e:{bud-=3;NFSU2_TR(0x5e997e);
__builtin_memmove((G+0),gp(0x88f19c),4);
}
B5e9983:{NFSU2_TR(0x5e9983);
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
B5e9985:{NFSU2_TR(0x5e9985);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99a9(ARGS);}}
}
B5e9987:L5e9987:{bud-=4;NFSU2_TR(0x5e9987);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e998b:{NFSU2_TR(0x5e998b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e998c:{NFSU2_TR(0x5e998c);
w4(G+4,u32(0x88eb00ull));
}
B5e9991:{NFSU2_TR(0x5e9991);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9996ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e5300u);}[[clang::musttail]] return blk_5e5300(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9996(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9996:L5e9996:{bud-=2;NFSU2_TR(0x5e9996);
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
B5e9998:{NFSU2_TR(0x5e9998);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e99a9(ARGS);}}
}
B5e999a:L5e999a:{bud-=4;NFSU2_TR(0x5e999a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5e999e:{NFSU2_TR(0x5e999e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e999f:{NFSU2_TR(0x5e999f);
w4(G+4,u32(0x88eb00ull));
}
B5e99a4:{NFSU2_TR(0x5e99a4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e99a9ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e7af0u);}[[clang::musttail]] return blk_5e7af0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e99a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e99a9:L5e99a9:{bud-=1;NFSU2_TR(0x5e99a9);
s4(0x883dec,u32(0x0ull));
{[[clang::musttail]] return blk_5e99b3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e99b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e99b3:L5e99b3:{bud-=7;NFSU2_TR(0x5e99b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e99b4:{NFSU2_TR(0x5e99b4);
__builtin_memmove((G+0),(R+24),4);
}
B5e99b6:{NFSU2_TR(0x5e99b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e99b7:{NFSU2_TR(0x5e99b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e99b8:{NFSU2_TR(0x5e99b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e99b9:{NFSU2_TR(0x5e99b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e99ba:{NFSU2_TR(0x5e99ba);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x5e99e0u)[[clang::musttail]] return blk_5e99e0(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e99c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e99c0:L5e99c0:{bud-=10;NFSU2_TR(0x5e99c0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x100ull))));
}
B5e99c6:{NFSU2_TR(0x5e99c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e99c7:{NFSU2_TR(0x5e99c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e99ce:{NFSU2_TR(0x5e99ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e99cf:{NFSU2_TR(0x5e99cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e99d0:{NFSU2_TR(0x5e99d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e99d1:{NFSU2_TR(0x5e99d1);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e99d6:{NFSU2_TR(0x5e99d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5e99da:{NFSU2_TR(0x5e99da);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e99db:{NFSU2_TR(0x5e99db);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e99e0ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e96b0u);}[[clang::musttail]] return blk_5e96b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e99e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e99e0:L5e99e0:{bud-=4;NFSU2_TR(0x5e99e0);
__builtin_memmove((R+28),(G+0),4);
}
B5e99e2:{NFSU2_TR(0x5e99e2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e99e4:{NFSU2_TR(0x5e99e4);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e99e6:{NFSU2_TR(0x5e99e6);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9a1d(ARGS);}}
}
B5e99e8:L5e99e8:{bud-=1;NFSU2_TR(0x5e99e8);
{[[clang::musttail]] return blk_5e99f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e99f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e99f0:L5e99f0:{bud-=3;NFSU2_TR(0x5e99f0);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(G+0,u32(s32(s16(r2(U+12)))));
}
B5e99f5:{NFSU2_TR(0x5e99f5);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e99f7:{NFSU2_TR(0x5e99f7);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9a18(ARGS);}}
}
B5e99f9:L5e99f9:{bud-=3;NFSU2_TR(0x5e99f9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B5e9a00:{NFSU2_TR(0x5e9a00);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a02:{NFSU2_TR(0x5e9a02);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9a18(ARGS);}}
}
B5e9a04:L5e9a04:{bud-=3;NFSU2_TR(0x5e9a04);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9a07:{NFSU2_TR(0x5e9a07);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a09:{NFSU2_TR(0x5e9a09);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9a18(ARGS);}}
}
B5e9a0b:L5e9a0b:{bud-=3;NFSU2_TR(0x5e9a0b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9a0e:{NFSU2_TR(0x5e9a0e);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a10:{NFSU2_TR(0x5e9a10);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9a18(ARGS);}}
}
B5e9a12:L5e9a12:{bud-=2;NFSU2_TR(0x5e9a12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9a13:{NFSU2_TR(0x5e9a13);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9a18ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d69b0u);}[[clang::musttail]] return blk_5d69b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a18(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a18:L5e9a18:{bud-=3;NFSU2_TR(0x5e9a18);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e9a19:{NFSU2_TR(0x5e9a19);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9a1b:{NFSU2_TR(0x5e9a1b);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e99f0u);}[[clang::musttail]] return blk_5e99f0(ARGS);}}
{[[clang::musttail]] return blk_5e9a1d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a1d:L5e9a1d:{bud-=5;NFSU2_TR(0x5e9a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9a1e:{NFSU2_TR(0x5e9a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9a1f:{NFSU2_TR(0x5e9a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9a20:{NFSU2_TR(0x5e9a20);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x100ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x100ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x100ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5e9a26:{NFSU2_TR(0x5e9a26);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x5e9be5u)[[clang::musttail]] return blk_5e9be5(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a30:L5e9a30:{bud-=13;NFSU2_TR(0x5e9a30);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9a31:{NFSU2_TR(0x5e9a31);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9a32:{NFSU2_TR(0x5e9a32);
__builtin_memmove((R+20),(G+4),4);
}
B5e9a34:{NFSU2_TR(0x5e9a34);
w4(G+0,u32(0x876de0ull));
}
B5e9a39:{NFSU2_TR(0x5e9a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a3f:{NFSU2_TR(0x5e9a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a45:{NFSU2_TR(0x5e9a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9a4b:{NFSU2_TR(0x5e9a4b);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9a4d:{NFSU2_TR(0x5e9a4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9a4e:{NFSU2_TR(0x5e9a4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9a4f:{NFSU2_TR(0x5e9a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ccull))));
w4(U+4,u32(0x8832c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a59:{NFSU2_TR(0x5e9a59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e9a61:{NFSU2_TR(0x5e9a61);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9bad(ARGS);}}
}
B5e9a67:L5e9a67:{bud-=3;NFSU2_TR(0x5e9a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9a6a:{NFSU2_TR(0x5e9a6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9a6b:{NFSU2_TR(0x5e9a6b);
{[[clang::musttail]] return blk_5e9a70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a70:L5e9a70:{bud-=2;NFSU2_TR(0x5e9a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9a73:{NFSU2_TR(0x5e9a73);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_5e9a76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a76:L5e9a76:{bud-=2;NFSU2_TR(0x5e9a76);
{u32 ea_=u32(r4(G+0)+u32(68u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9a79:{NFSU2_TR(0x5e9a79);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_5e9a7c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a7c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a7c:L5e9a7c:{bud-=3;NFSU2_TR(0x5e9a7c);
{u32 ea_=u32(r4(G+0)+u32(72u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9a7f:{NFSU2_TR(0x5e9a7f);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B5e9a82:{NFSU2_TR(0x5e9a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5e9a85(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a85(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a85:L5e9a85:{bud-=1;NFSU2_TR(0x5e9a85);
__asm__ volatile(".byte 0xd9,0xc9"::);
{[[clang::musttail]] return blk_5e9a87(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a87:L5e9a87:{bud-=2;NFSU2_TR(0x5e9a87);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B5e9a8a:{NFSU2_TR(0x5e9a8a);
w1(R+12,u8(0x1ull));
{[[clang::musttail]] return blk_5e9a8c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a8c:L5e9a8c:{bud-=3;NFSU2_TR(0x5e9a8c);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B5e9a8f:{NFSU2_TR(0x5e9a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9a92:{NFSU2_TR(0x5e9a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_5e9a95(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a95:L5e9a95:{bud-=2;NFSU2_TR(0x5e9a95);
{u32 ea_=u32(r4(G+0)+u32(84u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9a98:{NFSU2_TR(0x5e9a98);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
{[[clang::musttail]] return blk_5e9a9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9a9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9a9b:L5e9a9b:{bud-=2;NFSU2_TR(0x5e9a9b);
{u32 ea_=u32(r4(G+0)+u32(8u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9a9e:{NFSU2_TR(0x5e9a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+0),(U+0),4);
{[[clang::musttail]] return blk_5e9aa0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9aa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9aa0:L5e9aa0:{bud-=2;NFSU2_TR(0x5e9aa0);
__asm__ volatile(".byte 0xd9,0xc9"::);
}
B5e9aa2:{NFSU2_TR(0x5e9aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5e9aa5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9aa5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9aa5:L5e9aa5:{bud-=1;NFSU2_TR(0x5e9aa5);
{u32 ea_=u32(r4(R+24));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_5e9aa7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9aa7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9aa7:L5e9aa7:{bud-=7;NFSU2_TR(0x5e9aa7);
{u32 ea_=u32(r4(R+24)+u32(4u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B5e9aaa:{NFSU2_TR(0x5e9aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9aad:{NFSU2_TR(0x5e9aad);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9ab0:{NFSU2_TR(0x5e9ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9ab3:{NFSU2_TR(0x5e9ab3);
__builtin_memmove((G+4),gp(0x800df8),4);
}
B5e9ab9:{NFSU2_TR(0x5e9ab9);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9abb:{NFSU2_TR(0x5e9abb);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9b13(ARGS);}}
}
B5e9abd:L5e9abd:{bud-=2;NFSU2_TR(0x5e9abd);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9ac0:{NFSU2_TR(0x5e9ac0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9ad6(ARGS);}}
}
B5e9ac2:L5e9ac2:{bud-=6;NFSU2_TR(0x5e9ac2);
__builtin_memmove((G+0),gp(0x7fb708),4);
}
B5e9ac7:{NFSU2_TR(0x5e9ac7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e9ac8:{NFSU2_TR(0x5e9ac8);
w4(R+28,u32(0x3dull));
}
B5e9acd:{NFSU2_TR(0x5e9acd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9acd);w8(U+40,u64(x_/y_));}
w4(G+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9acd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e9acf:{NFSU2_TR(0x5e9acf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9ad2:{NFSU2_TR(0x5e9ad2);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9b15(ARGS);}}
}
B5e9ad4:L5e9ad4:{bud-=1;NFSU2_TR(0x5e9ad4);
{[[clang::musttail]] return blk_5e9b13(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ad6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ad6:L5e9ad6:{bud-=2;NFSU2_TR(0x5e9ad6);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9ad9:{NFSU2_TR(0x5e9ad9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9b15(ARGS);}}
}
B5e9adb:L5e9adb:{bud-=1;NFSU2_TR(0x5e9adb);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_5e9ade(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ade(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ade:L5e9ade:{bud-=2;NFSU2_TR(0x5e9ade);
{u32 ea_=u32(r4(G+0)+u32(488u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9ae4:{NFSU2_TR(0x5e9ae4);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1e0ull))));
{[[clang::musttail]] return blk_5e9ae9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ae9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ae9:L5e9ae9:{bud-=1;NFSU2_TR(0x5e9ae9);
{u32 ea_=u32(r4(G+0)+u32(4u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_5e9aec(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9aec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9aec:L5e9aec:{bud-=2;NFSU2_TR(0x5e9aec);
{u32 ea_=u32(r4(G+0));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9aee:{NFSU2_TR(0x5e9aee);
__asm__ volatile(".byte 0xd9,0xc0"::);
{[[clang::musttail]] return blk_5e9af0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9af0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9af0:L5e9af0:{bud-=2;NFSU2_TR(0x5e9af0);
__asm__ volatile(".byte 0xd8,0xc9"::);
}
B5e9af2:{NFSU2_TR(0x5e9af2);
__asm__ volatile(".byte 0xd9,0xc2"::);
{[[clang::musttail]] return blk_5e9af4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9af4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9af4:L5e9af4:{bud-=1;NFSU2_TR(0x5e9af4);
__asm__ volatile(".byte 0xd8,0xcb"::);
{[[clang::musttail]] return blk_5e9af6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9af6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9af6:L5e9af6:{bud-=2;NFSU2_TR(0x5e9af6);
__asm__ volatile(".byte 0xde,0xc1"::);
}
B5e9af8:{NFSU2_TR(0x5e9af8);
__asm__ volatile(".byte 0xd9,0xc3"::);
{[[clang::musttail]] return blk_5e9afa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9afa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9afa:L5e9afa:{bud-=1;NFSU2_TR(0x5e9afa);
__asm__ volatile(".byte 0xd8,0xcc"::);
{[[clang::musttail]] return blk_5e9afc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9afc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9afc:L5e9afc:{bud-=1;NFSU2_TR(0x5e9afc);
__asm__ volatile(".byte 0xde,0xc1"::);
{[[clang::musttail]] return blk_5e9afe(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9afe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9afe:L5e9afe:{bud-=1;NFSU2_TR(0x5e9afe);
__asm__ volatile(".byte 0xd9,0xfa"::);
{[[clang::musttail]] return blk_5e9b00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b00:L5e9b00:{bud-=1;NFSU2_TR(0x5e9b00);
__asm__ volatile(".byte 0xdd,0xdb"::);
{[[clang::musttail]] return blk_5e9b02(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b02(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b02:L5e9b02:{bud-=1;NFSU2_TR(0x5e9b02);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_5e9b04(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b04(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b04:L5e9b04:{bud-=1;NFSU2_TR(0x5e9b04);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_5e9b06(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b06(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b06:L5e9b06:{bud-=4;NFSU2_TR(0x5e9b06);
{u32 ea_=u32(u32(8013784u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_),"m"(m_));}
}
B5e9b0c:{NFSU2_TR(0x5e9b0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B5e9b0e:{NFSU2_TR(0x5e9b0e);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5e9b11:{NFSU2_TR(0x5e9b11);
if(r1(F+2)){{[[clang::musttail]] return blk_5e9b15(ARGS);}}
{[[clang::musttail]] return blk_5e9b13(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b13(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b13:L5e9b13:{bud-=1;NFSU2_TR(0x5e9b13);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
{[[clang::musttail]] return blk_5e9b15(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b15:L5e9b15:{bud-=3;NFSU2_TR(0x5e9b15);
__builtin_memmove((G+0),gp(0x883dfc),4);
}
B5e9b1a:{NFSU2_TR(0x5e9b1a);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9b1c:{NFSU2_TR(0x5e9b1c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9b25(ARGS);}}
}
B5e9b1e:L5e9b1e:{bud-=2;NFSU2_TR(0x5e9b1e);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9b21:{NFSU2_TR(0x5e9b21);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9b25(ARGS);}}
}
B5e9b23:L5e9b23:{bud-=1;NFSU2_TR(0x5e9b23);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
{[[clang::musttail]] return blk_5e9b25(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b25:L5e9b25:{bud-=2;NFSU2_TR(0x5e9b25);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9b28:{NFSU2_TR(0x5e9b28);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9b2dull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b2d:L5e9b2d:{bud-=6;NFSU2_TR(0x5e9b2d);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9b30:{NFSU2_TR(0x5e9b30);
__builtin_memmove((R+28),(G+0),4);
}
B5e9b32:{NFSU2_TR(0x5e9b32);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b35:{NFSU2_TR(0x5e9b35);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7full))));
}
B5e9b38:{NFSU2_TR(0x5e9b38);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b3b:{NFSU2_TR(0x5e9b3b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9b40ull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b40:L5e9b40:{bud-=10;NFSU2_TR(0x5e9b40);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B5e9b43:{NFSU2_TR(0x5e9b43);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7full))));
}
B5e9b46:{NFSU2_TR(0x5e9b46);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B5e9b48:{NFSU2_TR(0x5e9b48);
__builtin_memmove((G+4),(R+28),4);
}
B5e9b4a:{NFSU2_TR(0x5e9b4a);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x7ull))));
}
B5e9b4d:{NFSU2_TR(0x5e9b4d);
w1(R+8,u8(0x1ull));
}
B5e9b4f:{NFSU2_TR(0x5e9b4f);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5e9b51:{NFSU2_TR(0x5e9b51);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b54:{NFSU2_TR(0x5e9b54);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8832c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+8))));
w1(F+6,u8((r1(U+5))==(u8(0x0ull))));
}
B5e9b5a:{NFSU2_TR(0x5e9b5a);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9b5e(ARGS);}}
}
B5e9b5c:L5e9b5c:{bud-=1;NFSU2_TR(0x5e9b5c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
{[[clang::musttail]] return blk_5e9b5e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b5e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b5e:L5e9b5e:{bud-=3;NFSU2_TR(0x5e9b5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9b60:{NFSU2_TR(0x5e9b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e9b67:{NFSU2_TR(0x5e9b67);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9b8f(ARGS);}}
{[[clang::musttail]] return blk_5e9b69(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b69:L5e9b69:{bud-=2;NFSU2_TR(0x5e9b69);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9b6c:{NFSU2_TR(0x5e9b6c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9b71ull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b71:L5e9b71:{bud-=6;NFSU2_TR(0x5e9b71);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B5e9b74:{NFSU2_TR(0x5e9b74);
__builtin_memmove((R+28),(G+0),4);
}
B5e9b76:{NFSU2_TR(0x5e9b76);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b79:{NFSU2_TR(0x5e9b79);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1full))));
}
B5e9b7c:{NFSU2_TR(0x5e9b7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5e9b7f:{NFSU2_TR(0x5e9b7f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9b84ull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b84(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b84:L5e9b84:{bud-=4;NFSU2_TR(0x5e9b84);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B5e9b87:{NFSU2_TR(0x5e9b87);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1full))));
}
B5e9b8a:{NFSU2_TR(0x5e9b8a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B5e9b8c:{NFSU2_TR(0x5e9b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5e9b8f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9b8f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9b8f:L5e9b8f:{bud-=7;NFSU2_TR(0x5e9b8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9b93:{NFSU2_TR(0x5e9b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9b99:{NFSU2_TR(0x5e9b99);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B5e9b9a:{NFSU2_TR(0x5e9b9a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B5e9ba0:{NFSU2_TR(0x5e9ba0);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9ba2:{NFSU2_TR(0x5e9ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9ba6:{NFSU2_TR(0x5e9ba6);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9a70u);}[[clang::musttail]] return blk_5e9a70(ARGS);}}
}
B5e9bac:L5e9bac:{bud-=1;NFSU2_TR(0x5e9bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{[[clang::musttail]] return blk_5e9bad(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9bad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9bad:L5e9bad:{bud-=4;NFSU2_TR(0x5e9bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9bb3:{NFSU2_TR(0x5e9bb3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e9bb5:{NFSU2_TR(0x5e9bb5);
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
B5e9bb7:{NFSU2_TR(0x5e9bb7);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e9bfe(ARGS);}}
}
B5e9bb9:L5e9bb9:{bud-=2;NFSU2_TR(0x5e9bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9bbc:{NFSU2_TR(0x5e9bbc);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_5e9bc0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9bc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9bc0:L5e9bc0:{bud-=10;NFSU2_TR(0x5e9bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9bc6:{NFSU2_TR(0x5e9bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9bc9:{NFSU2_TR(0x5e9bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9bcf:{NFSU2_TR(0x5e9bcf);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e9bd1:{NFSU2_TR(0x5e9bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9bd7:{NFSU2_TR(0x5e9bd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffb4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B5e9bda:{NFSU2_TR(0x5e9bda);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9bdb:{NFSU2_TR(0x5e9bdb);
__builtin_memmove((G+4),(R+20),4);
}
B5e9bdd:{NFSU2_TR(0x5e9bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9be0:{NFSU2_TR(0x5e9be0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9be5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e99c0u);}[[clang::musttail]] return blk_5e99c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9be5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9be5:L5e9be5:{bud-=7;NFSU2_TR(0x5e9be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5e9be7:{NFSU2_TR(0x5e9be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9bed:{NFSU2_TR(0x5e9bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9bf3:{NFSU2_TR(0x5e9bf3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e9bf4:{NFSU2_TR(0x5e9bf4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B5e9bfa:{NFSU2_TR(0x5e9bfa);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(R+28))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5e9bfc:{NFSU2_TR(0x5e9bfc);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9bc0u);}[[clang::musttail]] return blk_5e9bc0(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5e9bfe(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9bfe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9bfe:L5e9bfe:{bud-=5;NFSU2_TR(0x5e9bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9bff:{NFSU2_TR(0x5e9bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9c00:{NFSU2_TR(0x5e9c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9c01:{NFSU2_TR(0x5e9c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e9c02:{NFSU2_TR(0x5e9c02);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x5caaf8u)[[clang::musttail]] return blk_5caaf8(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9c10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9c10:L5e9c10:{bud-=7;NFSU2_TR(0x5e9c10);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xcull))));
}
B5e9c13:{NFSU2_TR(0x5e9c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9c17:{NFSU2_TR(0x5e9c17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9c18:{NFSU2_TR(0x5e9c18);
__builtin_memmove((R+20),(G+4),4);
}
B5e9c1a:{NFSU2_TR(0x5e9c1a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034150ull))));
w1(F+6,u8((r4(U+8))==(u32(0x0ull))));
}
B5e9c20:{NFSU2_TR(0x5e9c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c24:{NFSU2_TR(0x5e9c24);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9e6f(ARGS);}}
}
B5e9c2a:L5e9c2a:{bud-=8;NFSU2_TR(0x5e9c2a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9c2d:{NFSU2_TR(0x5e9c2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9c2e:{NFSU2_TR(0x5e9c2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B5e9c32:{NFSU2_TR(0x5e9c32);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9c35:{NFSU2_TR(0x5e9c35);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(R+12))<(r4(U+0))));
}
B5e9c37:{NFSU2_TR(0x5e9c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c3b:{NFSU2_TR(0x5e9c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c3f:{NFSU2_TR(0x5e9c3f);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9e0c(ARGS);}}
}
B5e9c45:L5e9c45:{bud-=3;NFSU2_TR(0x5e9c45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9c46:{NFSU2_TR(0x5e9c46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9c47:{NFSU2_TR(0x5e9c47);
{[[clang::musttail]] return blk_5e9c50(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9c49(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9c49:L5e9c49:{bud-=2;NFSU2_TR(0x5e9c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e9c4d:{NFSU2_TR(0x5e9c4d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_5e9c50(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9c50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9c50:L5e9c50:{bud-=3;NFSU2_TR(0x5e9c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5e9c52:{NFSU2_TR(0x5e9c52);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x34152ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9c57:{NFSU2_TR(0x5e9c57);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9cc3(ARGS);}}
}
B5e9c59:L5e9c59:{bud-=5;NFSU2_TR(0x5e9c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9c5c:{NFSU2_TR(0x5e9c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e9c5f:{NFSU2_TR(0x5e9c5f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e9c63:{NFSU2_TR(0x5e9c63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B5e9c65:{NFSU2_TR(0x5e9c65);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9df3(ARGS);}}
}
B5e9c6b:L5e9c6b:{bud-=1;NFSU2_TR(0x5e9c6b);
{[[clang::musttail]] return blk_5e9c70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9c70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9c70:L5e9c70:{bud-=7;NFSU2_TR(0x5e9c70);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(s32(s16(r2(U+4)))));
}
B5e9c74:{NFSU2_TR(0x5e9c74);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e9c75:{NFSU2_TR(0x5e9c75);
w4(R+28,u32(0x64ull));
}
B5e9c7a:{NFSU2_TR(0x5e9c7a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9c7a);w8(U+40,u64(x_/y_));}
w4(G+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e9c7a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e9c7c:{NFSU2_TR(0x5e9c7c);
w1(G+0,u8(u32(r1(G+0))+u32(u8(0x40ull))));
}
B5e9c7e:{NFSU2_TR(0x5e9c7e);
u8 U[1];
w1(F+11,sborrow<u8>(r1(G+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5e9c80:{NFSU2_TR(0x5e9c80);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9ca2(ARGS);}}
}
B5e9c82:L5e9c82:{bud-=2;NFSU2_TR(0x5e9c82);
u8 U[1];
w1(F+11,sborrow<u8>(r1(G+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x54ull))));
w1(F+7,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9c84:{NFSU2_TR(0x5e9c84);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_5e9ca2(ARGS);}}
}
B5e9c86:L5e9c86:{bud-=2;NFSU2_TR(0x5e9c86);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9c89:{NFSU2_TR(0x5e9c89);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9ca2(ARGS);}}
}
B5e9c8b:L5e9c8b:{bud-=2;NFSU2_TR(0x5e9c8b);
u8 U[8];
__builtin_memmove((U+0),gp(0x800dfc),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e9c91:{NFSU2_TR(0x5e9c91);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9ca2(ARGS);}}
}
B5e9c93:L5e9c93:{bud-=6;NFSU2_TR(0x5e9c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9c96:{NFSU2_TR(0x5e9c96);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B5e9c98:{NFSU2_TR(0x5e9c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c9b:{NFSU2_TR(0x5e9c9b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9c9e:{NFSU2_TR(0x5e9c9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(G+4)),r4(U+0));
}
B5e9ca0:{NFSU2_TR(0x5e9ca0);
{[[clang::musttail]] return blk_5e9cb2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ca2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ca2:L5e9ca2:{bud-=6;NFSU2_TR(0x5e9ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9ca5:{NFSU2_TR(0x5e9ca5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B5e9ca8:{NFSU2_TR(0x5e9ca8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e9caa:{NFSU2_TR(0x5e9caa);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9cad:{NFSU2_TR(0x5e9cad);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9cb0:{NFSU2_TR(0x5e9cb0);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
{[[clang::musttail]] return blk_5e9cb2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9cb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9cb2:L5e9cb2:{bud-=4;NFSU2_TR(0x5e9cb2);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(s32(s16(r2(U+4)))));
}
B5e9cb6:{NFSU2_TR(0x5e9cb6);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B5e9cba:{NFSU2_TR(0x5e9cba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B5e9cbc:{NFSU2_TR(0x5e9cbc);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9c70u);}[[clang::musttail]] return blk_5e9c70(ARGS);}}
}
B5e9cbe:L5e9cbe:{bud-=1;NFSU2_TR(0x5e9cbe);
{[[clang::musttail]] return blk_5e9df3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9cc3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9cc3:L5e9cc3:{bud-=2;NFSU2_TR(0x5e9cc3);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x34153ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9cc8:{NFSU2_TR(0x5e9cc8);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9d69(ARGS);}}
}
B5e9cce:L5e9cce:{bud-=7;NFSU2_TR(0x5e9cce);
w4(G+0,u32(0xc7ce0c7dull));
}
B5e9cd3:{NFSU2_TR(0x5e9cd3);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w8(U+8,u64(r4(G+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(G+0,u32(r8(U+24)));
}
B5e9cd6:{NFSU2_TR(0x5e9cd6);
__builtin_memmove((R+24),(R+8),4);
}
B5e9cd8:{NFSU2_TR(0x5e9cd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B5e9cdb:{NFSU2_TR(0x5e9cdb);
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
B5e9cdd:{NFSU2_TR(0x5e9cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9ce0:{NFSU2_TR(0x5e9ce0);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9df3(ARGS);}}
}
B5e9ce6:L5e9ce6:{bud-=3;NFSU2_TR(0x5e9ce6);
__builtin_memmove((G+4),(R+20),4);
}
B5e9ce8:{NFSU2_TR(0x5e9ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9ceb:{NFSU2_TR(0x5e9ceb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9cf0ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x502fd0u);}[[clang::musttail]] return blk_502fd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9cf0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9cf0:L5e9cf0:{bud-=4;NFSU2_TR(0x5e9cf0);
__builtin_memmove((R+20),(G+0),4);
}
B5e9cf2:{NFSU2_TR(0x5e9cf2);
__builtin_memmove((G+4),(R+28),4);
}
B5e9cf4:{NFSU2_TR(0x5e9cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9cf8:{NFSU2_TR(0x5e9cf8);
{[[clang::musttail]] return blk_5e9d00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d00:L5e9d00:{bud-=10;NFSU2_TR(0x5e9d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9d03:{NFSU2_TR(0x5e9d03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9d07:{NFSU2_TR(0x5e9d07);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e9d09:{NFSU2_TR(0x5e9d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d0c:{NFSU2_TR(0x5e9d0c);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(s32(s16(r2(U+4)))));
}
B5e9d10:{NFSU2_TR(0x5e9d10);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d13:{NFSU2_TR(0x5e9d13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(G+4)),r4(U+0));
}
B5e9d15:{NFSU2_TR(0x5e9d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e9d17:{NFSU2_TR(0x5e9d17);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d19:{NFSU2_TR(0x5e9d19);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9d2e(ARGS);}}
}
B5e9d1b:L5e9d1b:{bud-=1;NFSU2_TR(0x5e9d1b);
{[[clang::musttail]] return blk_5e9d20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d20:L5e9d20:{bud-=3;NFSU2_TR(0x5e9d20);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5e9d24:{NFSU2_TR(0x5e9d24);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d26:{NFSU2_TR(0x5e9d26);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9d48(ARGS);}}
}
B5e9d28:L5e9d28:{bud-=3;NFSU2_TR(0x5e9d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e9d2a:{NFSU2_TR(0x5e9d2a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d2c:{NFSU2_TR(0x5e9d2c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9d20u);}goto L5e9d20;}}
{[[clang::musttail]] return blk_5e9d2e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d2e:L5e9d2e:{bud-=4;NFSU2_TR(0x5e9d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9d31:{NFSU2_TR(0x5e9d31);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5e9d34:{NFSU2_TR(0x5e9d34);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d36:{NFSU2_TR(0x5e9d36);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9d46(ARGS);}}
{[[clang::musttail]] return blk_5e9d38(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d38:L5e9d38:{bud-=3;NFSU2_TR(0x5e9d38);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5e9d3c:{NFSU2_TR(0x5e9d3c);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d3e:{NFSU2_TR(0x5e9d3e);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9d48(ARGS);}}
}
B5e9d40:L5e9d40:{bud-=3;NFSU2_TR(0x5e9d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e9d42:{NFSU2_TR(0x5e9d42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9d44:{NFSU2_TR(0x5e9d44);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9d38u);}goto L5e9d38;}}
{[[clang::musttail]] return blk_5e9d46(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d46(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d46:L5e9d46:{bud-=1;NFSU2_TR(0x5e9d46);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_5e9d48(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d48:L5e9d48:{bud-=6;NFSU2_TR(0x5e9d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9d4c:{NFSU2_TR(0x5e9d4c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d4f:{NFSU2_TR(0x5e9d4f);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0xa4ull))));
}
B5e9d55:{NFSU2_TR(0x5e9d55);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B5e9d56:{NFSU2_TR(0x5e9d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d5a:{NFSU2_TR(0x5e9d5a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9d00u);}[[clang::musttail]] return blk_5e9d00(ARGS);}}
}
B5e9d5c:L5e9d5c:{bud-=3;NFSU2_TR(0x5e9d5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e9d60:{NFSU2_TR(0x5e9d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e9d64:{NFSU2_TR(0x5e9d64);
{[[clang::musttail]] return blk_5e9df3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d69:L5e9d69:{bud-=2;NFSU2_TR(0x5e9d69);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x34151ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9d6e:{NFSU2_TR(0x5e9d6e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9d80(ARGS);}}
}
B5e9d70:L5e9d70:{bud-=5;NFSU2_TR(0x5e9d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B5e9d73:{NFSU2_TR(0x5e9d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9d76:{NFSU2_TR(0x5e9d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5e9d78:{NFSU2_TR(0x5e9d78);
__builtin_memmove(gp(0x800dfc),(G+4),4);
}
B5e9d7e:{NFSU2_TR(0x5e9d7e);
{[[clang::musttail]] return blk_5e9df3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9d80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9d80:L5e9d80:{bud-=2;NFSU2_TR(0x5e9d80);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x34154ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9d85:{NFSU2_TR(0x5e9d85);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9db5(ARGS);}}
}
B5e9d87:L5e9d87:{bud-=5;NFSU2_TR(0x5e9d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9d8a:{NFSU2_TR(0x5e9d8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e9d8d:{NFSU2_TR(0x5e9d8d);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9d8f:{NFSU2_TR(0x5e9d8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B5e9d92:{NFSU2_TR(0x5e9d92);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9df3(ARGS);}}
}
B5e9d94:L5e9d94:{bud-=3;NFSU2_TR(0x5e9d94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5e9d97:{NFSU2_TR(0x5e9d97);
__builtin_memmove((R+24),(R+8),4);
}
B5e9d99:{NFSU2_TR(0x5e9d99);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_5e9da0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9da0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9da0:L5e9da0:{bud-=8;NFSU2_TR(0x5e9da0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9da3:{NFSU2_TR(0x5e9da3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e9da5:{NFSU2_TR(0x5e9da5);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9da8:{NFSU2_TR(0x5e9da8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9dab:{NFSU2_TR(0x5e9dab);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B5e9dad:{NFSU2_TR(0x5e9dad);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
}
B5e9db0:{NFSU2_TR(0x5e9db0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
}
B5e9db1:{NFSU2_TR(0x5e9db1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9da0u);}goto L5e9da0;}}
}
B5e9db3:L5e9db3:{bud-=1;NFSU2_TR(0x5e9db3);
{[[clang::musttail]] return blk_5e9df3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9db5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9db5:L5e9db5:{bud-=2;NFSU2_TR(0x5e9db5);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x34155ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9dba:{NFSU2_TR(0x5e9dba);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9df3(ARGS);}}
}
B5e9dbc:L5e9dbc:{bud-=10;NFSU2_TR(0x5e9dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9dbf:{NFSU2_TR(0x5e9dbf);
w4(G+0,u32(0xaf286bcbull));
}
B5e9dc4:{NFSU2_TR(0x5e9dc4);
u8 U[24];
w8(U+0,u64(r4(G+0)));
w8(U+8,u64(r4(G+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B5e9dc6:{NFSU2_TR(0x5e9dc6);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+8))));
}
B5e9dc8:{NFSU2_TR(0x5e9dc8);
w4(G+4,shr<u32>(r4(G+4),u64(u32(0x1ull))));
}
B5e9dca:{NFSU2_TR(0x5e9dca);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B5e9dcc:{NFSU2_TR(0x5e9dcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B5e9dcf:{NFSU2_TR(0x5e9dcf);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9dd1:{NFSU2_TR(0x5e9dd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e9dd4:{NFSU2_TR(0x5e9dd4);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9df3(ARGS);}}
}
B5e9dd6:L5e9dd6:{bud-=4;NFSU2_TR(0x5e9dd6);
__builtin_memmove((G+0),(R+24),4);
}
B5e9dd8:{NFSU2_TR(0x5e9dd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e9ddb:{NFSU2_TR(0x5e9ddb);
__builtin_memmove((R+24),(G+4),4);
}
B5e9ddd:{NFSU2_TR(0x5e9ddd);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_5e9de0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9de0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9de0:L5e9de0:{bud-=8;NFSU2_TR(0x5e9de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5e9de3:{NFSU2_TR(0x5e9de3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B5e9de5:{NFSU2_TR(0x5e9de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9de8:{NFSU2_TR(0x5e9de8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9deb:{NFSU2_TR(0x5e9deb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B5e9ded:{NFSU2_TR(0x5e9ded);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4cull))));
}
B5e9df0:{NFSU2_TR(0x5e9df0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
}
B5e9df1:{NFSU2_TR(0x5e9df1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9de0u);}goto L5e9de0;}}
{[[clang::musttail]] return blk_5e9df3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9df3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9df3:L5e9df3:{bud-=6;NFSU2_TR(0x5e9df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e9df6:{NFSU2_TR(0x5e9df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9dfa:{NFSU2_TR(0x5e9dfa);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5e9dfe:{NFSU2_TR(0x5e9dfe);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(R+12))<(r4(U+0))));
}
B5e9e00:{NFSU2_TR(0x5e9e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e9e04:{NFSU2_TR(0x5e9e04);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9c49u);}[[clang::musttail]] return blk_5e9c49(ARGS);}}
}
B5e9e0a:L5e9e0a:{bud-=2;NFSU2_TR(0x5e9e0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e9e0b:{NFSU2_TR(0x5e9e0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{[[clang::musttail]] return blk_5e9e0c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e0c:L5e9e0c:{bud-=4;NFSU2_TR(0x5e9e0c);
__builtin_memmove((G+0),gp(0x864f7c),4);
}
B5e9e11:{NFSU2_TR(0x5e9e11);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9e13:{NFSU2_TR(0x5e9e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e9e14:{NFSU2_TR(0x5e9e14);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9e63(ARGS);}}
}
B5e9e16:L5e9e16:{bud-=1;NFSU2_TR(0x5e9e16);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9e1bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5dfd30u);}[[clang::musttail]] return blk_5dfd30(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e1b:L5e9e1b:{bud-=7;NFSU2_TR(0x5e9e1b);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
}
B5e9e1e:{NFSU2_TR(0x5e9e1e);
__builtin_memmove(gp(0x88ebcc),(G+0),4);
}
B5e9e23:{NFSU2_TR(0x5e9e23);
__builtin_memmove(gp(0x88ec28),(G+0),4);
}
B5e9e28:{NFSU2_TR(0x5e9e28);
__builtin_memmove((G+0),gp(0x88ed89),1);
}
B5e9e2d:{NFSU2_TR(0x5e9e2d);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9e2f:{NFSU2_TR(0x5e9e2f);
s1(0x88ed88,u8(0x1ull));
}
B5e9e36:{NFSU2_TR(0x5e9e36);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5e9e63(ARGS);}}
}
B5e9e38:L5e9e38:{bud-=3;NFSU2_TR(0x5e9e38);
__builtin_memmove((G+0),gp(0x88f19c),4);
}
B5e9e3d:{NFSU2_TR(0x5e9e3d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9e3f:{NFSU2_TR(0x5e9e3f);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9e63(ARGS);}}
}
B5e9e41:L5e9e41:{bud-=4;NFSU2_TR(0x5e9e41);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5e9e45:{NFSU2_TR(0x5e9e45);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9e46:{NFSU2_TR(0x5e9e46);
w4(G+4,u32(0x88eb00ull));
}
B5e9e4b:{NFSU2_TR(0x5e9e4b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9e50ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e5300u);}[[clang::musttail]] return blk_5e5300(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e50:L5e9e50:{bud-=2;NFSU2_TR(0x5e9e50);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9e52:{NFSU2_TR(0x5e9e52);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9e63(ARGS);}}
}
B5e9e54:L5e9e54:{bud-=4;NFSU2_TR(0x5e9e54);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5e9e58:{NFSU2_TR(0x5e9e58);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9e59:{NFSU2_TR(0x5e9e59);
w4(G+4,u32(0x88eb00ull));
}
B5e9e5e:{NFSU2_TR(0x5e9e5e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9e63ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e7af0u);}[[clang::musttail]] return blk_5e7af0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e63(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e63:L5e9e63:{bud-=4;NFSU2_TR(0x5e9e63);
w4(G+0,u32(0x1ull));
}
B5e9e68:{NFSU2_TR(0x5e9e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9e69:{NFSU2_TR(0x5e9e69);
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
B5e9e6c:{NFSU2_TR(0x5e9e6c);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x5ea0ffu)[[clang::musttail]] return blk_5ea0ff(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e6f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e6f:L5e9e6f:{bud-=4;NFSU2_TR(0x5e9e6f);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B5e9e71:{NFSU2_TR(0x5e9e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e9e72:{NFSU2_TR(0x5e9e72);
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
B5e9e75:{NFSU2_TR(0x5e9e75);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x5ea0ffu)[[clang::musttail]] return blk_5ea0ff(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e80:L5e9e80:{bud-=3;NFSU2_TR(0x5e9e80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9e81:{NFSU2_TR(0x5e9e81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9e82:{NFSU2_TR(0x5e9e82);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9e87ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43bdf0u);}[[clang::musttail]] return blk_43bdf0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e87(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e87:L5e9e87:{bud-=4;NFSU2_TR(0x5e9e87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e9e8b:{NFSU2_TR(0x5e9e8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9e8c:{NFSU2_TR(0x5e9e8c);
w4(R+24,u32(0x3ull));
}
B5e9e91:{NFSU2_TR(0x5e9e91);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9e96ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d3e40u);}[[clang::musttail]] return blk_5d3e40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9e96(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9e96:L5e9e96:{bud-=3;NFSU2_TR(0x5e9e96);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B5e9e99:{NFSU2_TR(0x5e9e99);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5e9e9b:{NFSU2_TR(0x5e9e9b);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9f10(ARGS);}}
}
B5e9e9d:L5e9e9d:{bud-=3;NFSU2_TR(0x5e9e9d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5e9ea3:{NFSU2_TR(0x5e9ea3);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ea5:{NFSU2_TR(0x5e9ea5);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9eae(ARGS);}}
}
B5e9ea7:L5e9ea7:{bud-=2;NFSU2_TR(0x5e9ea7);
w4(R+24,u32(0x2ull));
}
B5e9eac:{NFSU2_TR(0x5e9eac);
{[[clang::musttail]] return blk_5e9f10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9eae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9eae:L5e9eae:{bud-=2;NFSU2_TR(0x5e9eae);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(u8(0x4ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9eb0:{NFSU2_TR(0x5e9eb0);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9eb9(ARGS);}}
}
B5e9eb2:L5e9eb2:{bud-=2;NFSU2_TR(0x5e9eb2);
w4(R+24,u32(0x2ull));
}
B5e9eb7:{NFSU2_TR(0x5e9eb7);
{[[clang::musttail]] return blk_5e9f10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9eb9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9eb9:L5e9eb9:{bud-=2;NFSU2_TR(0x5e9eb9);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(u8(0x2ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ebb:{NFSU2_TR(0x5e9ebb);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9ec1(ARGS);}}
}
B5e9ebd:L5e9ebd:{bud-=2;NFSU2_TR(0x5e9ebd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e9ebf:{NFSU2_TR(0x5e9ebf);
{[[clang::musttail]] return blk_5e9f10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ec1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ec1:L5e9ec1:{bud-=2;NFSU2_TR(0x5e9ec1);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(u8(0x8ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ec3:{NFSU2_TR(0x5e9ec3);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9ecc(ARGS);}}
}
B5e9ec5:L5e9ec5:{bud-=2;NFSU2_TR(0x5e9ec5);
w4(R+24,u32(0x1ull));
}
B5e9eca:{NFSU2_TR(0x5e9eca);
{[[clang::musttail]] return blk_5e9f10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ecc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ecc:L5e9ecc:{bud-=2;NFSU2_TR(0x5e9ecc);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x8ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ecf:{NFSU2_TR(0x5e9ecf);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9ed8(ARGS);}}
}
B5e9ed1:L5e9ed1:{bud-=2;NFSU2_TR(0x5e9ed1);
w4(R+24,u32(0x4ull));
}
B5e9ed6:{NFSU2_TR(0x5e9ed6);
{[[clang::musttail]] return blk_5e9f10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ed8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ed8:L5e9ed8:{bud-=2;NFSU2_TR(0x5e9ed8);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x10ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9edb:{NFSU2_TR(0x5e9edb);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9ee4(ARGS);}}
}
B5e9edd:L5e9edd:{bud-=2;NFSU2_TR(0x5e9edd);
w4(R+24,u32(0x4ull));
}
B5e9ee2:{NFSU2_TR(0x5e9ee2);
{[[clang::musttail]] return blk_5e9f10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ee4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ee4:L5e9ee4:{bud-=2;NFSU2_TR(0x5e9ee4);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x20ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9ee7:{NFSU2_TR(0x5e9ee7);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9f10(ARGS);}}
}
B5e9ee9:L5e9ee9:{bud-=2;NFSU2_TR(0x5e9ee9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x125dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x125dull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9eef:{NFSU2_TR(0x5e9eef);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9fae(ARGS);}}
}
B5e9ef5:L5e9ef5:{bud-=3;NFSU2_TR(0x5e9ef5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x1261ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1261ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9efb:{NFSU2_TR(0x5e9efb);
__builtin_memmove((G+0),(R+28),4);
}
B5e9efd:{NFSU2_TR(0x5e9efd);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5e9f04(ARGS);}}
}
B5e9eff:L5e9eff:{bud-=1;NFSU2_TR(0x5e9eff);
w4(G+0,u32(0x1261ull));
{[[clang::musttail]] return blk_5e9f04(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f04(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f04:L5e9f04:{bud-=5;NFSU2_TR(0x5e9f04);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B5e9f06:{NFSU2_TR(0x5e9f06);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9f08:{NFSU2_TR(0x5e9f08);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((G+4),(U+0),1);
}
B5e9f0b:{NFSU2_TR(0x5e9f0b);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x5ull))));
}
B5e9f0e:{NFSU2_TR(0x5e9f0e);
__builtin_memmove((R+24),(G+4),4);
{[[clang::musttail]] return blk_5e9f10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f10:L5e9f10:{bud-=4;NFSU2_TR(0x5e9f10);
__builtin_memmove((G+0),gp(0x88f2be),1);
}
B5e9f15:{NFSU2_TR(0x5e9f15);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9f17:{NFSU2_TR(0x5e9f17);
__builtin_memmove(gp(0x88e9a8),(R+24),4);
}
B5e9f1d:{NFSU2_TR(0x5e9f1d);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9f2c(ARGS);}}
}
B5e9f1f:L5e9f1f:{bud-=2;NFSU2_TR(0x5e9f1f);
u8 U[8];
__builtin_memmove((U+0),gp(0x88a330),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5e9f26:{NFSU2_TR(0x5e9f26);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5ea0be(ARGS);}}
{[[clang::musttail]] return blk_5e9f2c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f2c:L5e9f2c:{bud-=2;NFSU2_TR(0x5e9f2c);
w4(G+4,u32(0x88a320ull));
}
B5e9f31:{NFSU2_TR(0x5e9f31);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f36ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d98c0u);}[[clang::musttail]] return blk_5d98c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f36(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f36:L5e9f36:{bud-=2;NFSU2_TR(0x5e9f36);
w4(G+4,u32(0x88a320ull));
}
B5e9f3b:{NFSU2_TR(0x5e9f3b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f40ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e41a0u);}[[clang::musttail]] return blk_5e41a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f40:L5e9f40:{bud-=2;NFSU2_TR(0x5e9f40);
w4(G+4,u32(0x88a320ull));
}
B5e9f45:{NFSU2_TR(0x5e9f45);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f4aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d9430u);}[[clang::musttail]] return blk_5d9430(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f4a:L5e9f4a:{bud-=3;NFSU2_TR(0x5e9f4a);
__builtin_memmove((G+0),gp(0x88f2be),1);
}
B5e9f4f:{NFSU2_TR(0x5e9f4f);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9f51:{NFSU2_TR(0x5e9f51);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9f58(ARGS);}}
}
B5e9f53:L5e9f53:{bud-=1;NFSU2_TR(0x5e9f53);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f58ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e23d0u);}[[clang::musttail]] return blk_5e23d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f58:L5e9f58:{bud-=3;NFSU2_TR(0x5e9f58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9f59:{NFSU2_TR(0x5e9f59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9f5a:{NFSU2_TR(0x5e9f5a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f5full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e27d0u);}[[clang::musttail]] return blk_5e27d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f5f:L5e9f5f:{bud-=2;NFSU2_TR(0x5e9f5f);
__builtin_memmove((R+24),(G+0),4);
}
B5e9f61:{NFSU2_TR(0x5e9f61);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f66ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e2bd0u);}[[clang::musttail]] return blk_5e2bd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f66(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f66:L5e9f66:{bud-=3;NFSU2_TR(0x5e9f66);
s4(0x883db4,u32(u32(m4(0x883db4))-u32(r4(R+24))));
}
B5e9f6c:{NFSU2_TR(0x5e9f6c);
w4(G+4,u32(0x88a320ull));
}
B5e9f71:{NFSU2_TR(0x5e9f71);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f76ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5de990u);}[[clang::musttail]] return blk_5de990(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f76:L5e9f76:{bud-=2;NFSU2_TR(0x5e9f76);
w4(G+4,u32(0x88a320ull));
}
B5e9f7b:{NFSU2_TR(0x5e9f7b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f80ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d9710u);}[[clang::musttail]] return blk_5d9710(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f80:L5e9f80:{bud-=3;NFSU2_TR(0x5e9f80);
__builtin_memmove((G+0),gp(0x88f2be),1);
}
B5e9f85:{NFSU2_TR(0x5e9f85);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9f87:{NFSU2_TR(0x5e9f87);
if(r1(F+6)){{[[clang::musttail]] return blk_5e9fb8(ARGS);}}
}
B5e9f89:L5e9f89:{bud-=1;NFSU2_TR(0x5e9f89);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_5e9f90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f90:L5e9f90:{bud-=1;NFSU2_TR(0x5e9f90);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f95ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e23d0u);}[[clang::musttail]] return blk_5e23d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f95:L5e9f95:{bud-=2;NFSU2_TR(0x5e9f95);
__builtin_memmove((R+12),(G+0),1);
}
B5e9f97:{NFSU2_TR(0x5e9f97);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9f9cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e1e80u);}[[clang::musttail]] return blk_5e1e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9f9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9f9c:L5e9f9c:{bud-=2;NFSU2_TR(0x5e9f9c);
w1(R+12,u8(u32(r1(R+12))|u32(r1(G+0))));
}
B5e9f9e:{NFSU2_TR(0x5e9f9e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9fa3ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e2130u);}[[clang::musttail]] return blk_5e2130(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fa3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fa3:L5e9fa3:{bud-=2;NFSU2_TR(0x5e9fa3);
w1(G+0,u8(u32(r1(G+0))|u32(r1(R+12))));
w1(F+6,u8((r1(G+0))==(u8(0x0ull))));
}
B5e9fa5:{NFSU2_TR(0x5e9fa5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9f90u);}[[clang::musttail]] return blk_5e9f90(ARGS);}}
}
B5e9fa7:L5e9fa7:{bud-=1;NFSU2_TR(0x5e9fa7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9facull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e2750u);}[[clang::musttail]] return blk_5e2750(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fac:L5e9fac:{bud-=1;NFSU2_TR(0x5e9fac);
{[[clang::musttail]] return blk_5e9fc1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fae:L5e9fae:{bud-=2;NFSU2_TR(0x5e9fae);
w4(G+0,u32(0x125dull));
}
B5e9fb3:{NFSU2_TR(0x5e9fb3);
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9f04u);}[[clang::musttail]] return blk_5e9f04(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fb8:L5e9fb8:{bud-=1;NFSU2_TR(0x5e9fb8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9fbdull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e2130u);}[[clang::musttail]] return blk_5e2130(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fbd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fbd:L5e9fbd:{bud-=2;NFSU2_TR(0x5e9fbd);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5e9fbf:{NFSU2_TR(0x5e9fbf);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5e9fb8u);}[[clang::musttail]] return blk_5e9fb8(ARGS);}}
{[[clang::musttail]] return blk_5e9fc1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fc1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fc1:L5e9fc1:{bud-=2;NFSU2_TR(0x5e9fc1);
w4(G+4,u32(0x88a320ull));
}
B5e9fc6:{NFSU2_TR(0x5e9fc6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9fcbull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d95f0u);}[[clang::musttail]] return blk_5d95f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fcb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fcb:L5e9fcb:{bud-=6;NFSU2_TR(0x5e9fcb);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5e9fd1:{NFSU2_TR(0x5e9fd1);
__builtin_memmove((G+0),gp(0x883db0),4);
}
B5e9fd6:{NFSU2_TR(0x5e9fd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9fd7:{NFSU2_TR(0x5e9fd7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5e9fd8:{NFSU2_TR(0x5e9fd8);
w4(G+4,u32(0x88a320ull));
}
B5e9fdd:{NFSU2_TR(0x5e9fdd);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9fe2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5de5c0u);}[[clang::musttail]] return blk_5de5c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fe2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fe2:L5e9fe2:{bud-=2;NFSU2_TR(0x5e9fe2);
w4(G+4,u32(0x88a320ull));
}
B5e9fe7:{NFSU2_TR(0x5e9fe7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9fecull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5de8d0u);}[[clang::musttail]] return blk_5de8d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9fec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9fec:L5e9fec:{bud-=1;NFSU2_TR(0x5e9fec);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9ff1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5d8860u);}[[clang::musttail]] return blk_5d8860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ff1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ff1:L5e9ff1:{bud-=2;NFSU2_TR(0x5e9ff1);
__builtin_memmove((R+24),(G+0),4);
}
B5e9ff3:{NFSU2_TR(0x5e9ff3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5e9ff8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e2bd0u);}[[clang::musttail]] return blk_5e2bd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_5e9ff8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5e9ff8:L5e9ff8:{bud-=2;NFSU2_TR(0x5e9ff8);
s4(0x883db4,u32(u32(m4(0x883db4))-u32(r4(R+24))));
}
B5e9ffe:{NFSU2_TR(0x5e9ffe);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_5ea000(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 ent_5e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x5e9000:[[clang::musttail]] return blk_5e9000(c,a4,a0,a1,bud);
case 0x5e9010:[[clang::musttail]] return blk_5e9010(c,a4,a0,a1,bud);
case 0x5e9018:[[clang::musttail]] return blk_5e9018(c,a4,a0,a1,bud);
case 0x5e9030:[[clang::musttail]] return blk_5e9030(c,a4,a0,a1,bud);
case 0x5e9038:[[clang::musttail]] return blk_5e9038(c,a4,a0,a1,bud);
case 0x5e9040:[[clang::musttail]] return blk_5e9040(c,a4,a0,a1,bud);
case 0x5e9049:[[clang::musttail]] return blk_5e9049(c,a4,a0,a1,bud);
case 0x5e9060:[[clang::musttail]] return blk_5e9060(c,a4,a0,a1,bud);
case 0x5e9068:[[clang::musttail]] return blk_5e9068(c,a4,a0,a1,bud);
case 0x5e9071:[[clang::musttail]] return blk_5e9071(c,a4,a0,a1,bud);
case 0x5e9080:[[clang::musttail]] return blk_5e9080(c,a4,a0,a1,bud);
case 0x5e9090:[[clang::musttail]] return blk_5e9090(c,a4,a0,a1,bud);
case 0x5e90b0:[[clang::musttail]] return blk_5e90b0(c,a4,a0,a1,bud);
case 0x5e912a:[[clang::musttail]] return blk_5e912a(c,a4,a0,a1,bud);
case 0x5e912f:[[clang::musttail]] return blk_5e912f(c,a4,a0,a1,bud);
case 0x5e917a:[[clang::musttail]] return blk_5e917a(c,a4,a0,a1,bud);
case 0x5e917f:[[clang::musttail]] return blk_5e917f(c,a4,a0,a1,bud);
case 0x5e91b8:[[clang::musttail]] return blk_5e91b8(c,a4,a0,a1,bud);
case 0x5e91c7:[[clang::musttail]] return blk_5e91c7(c,a4,a0,a1,bud);
case 0x5e9209:[[clang::musttail]] return blk_5e9209(c,a4,a0,a1,bud);
case 0x5e9216:[[clang::musttail]] return blk_5e9216(c,a4,a0,a1,bud);
case 0x5e921e:[[clang::musttail]] return blk_5e921e(c,a4,a0,a1,bud);
case 0x5e9240:[[clang::musttail]] return blk_5e9240(c,a4,a0,a1,bud);
case 0x5e9250:[[clang::musttail]] return blk_5e9250(c,a4,a0,a1,bud);
case 0x5e9263:[[clang::musttail]] return blk_5e9263(c,a4,a0,a1,bud);
case 0x5e9271:[[clang::musttail]] return blk_5e9271(c,a4,a0,a1,bud);
case 0x5e927c:[[clang::musttail]] return blk_5e927c(c,a4,a0,a1,bud);
case 0x5e9294:[[clang::musttail]] return blk_5e9294(c,a4,a0,a1,bud);
case 0x5e92a7:[[clang::musttail]] return blk_5e92a7(c,a4,a0,a1,bud);
case 0x5e92b5:[[clang::musttail]] return blk_5e92b5(c,a4,a0,a1,bud);
case 0x5e92c0:[[clang::musttail]] return blk_5e92c0(c,a4,a0,a1,bud);
case 0x5e92d1:[[clang::musttail]] return blk_5e92d1(c,a4,a0,a1,bud);
case 0x5e9300:[[clang::musttail]] return blk_5e9300(c,a4,a0,a1,bud);
case 0x5e9316:[[clang::musttail]] return blk_5e9316(c,a4,a0,a1,bud);
case 0x5e9318:[[clang::musttail]] return blk_5e9318(c,a4,a0,a1,bud);
case 0x5e9340:[[clang::musttail]] return blk_5e9340(c,a4,a0,a1,bud);
case 0x5e9345:[[clang::musttail]] return blk_5e9345(c,a4,a0,a1,bud);
case 0x5e9370:[[clang::musttail]] return blk_5e9370(c,a4,a0,a1,bud);
case 0x5e93cb:[[clang::musttail]] return blk_5e93cb(c,a4,a0,a1,bud);
case 0x5e93da:[[clang::musttail]] return blk_5e93da(c,a4,a0,a1,bud);
case 0x5e9422:[[clang::musttail]] return blk_5e9422(c,a4,a0,a1,bud);
case 0x5e9424:[[clang::musttail]] return blk_5e9424(c,a4,a0,a1,bud);
case 0x5e9459:[[clang::musttail]] return blk_5e9459(c,a4,a0,a1,bud);
case 0x5e9469:[[clang::musttail]] return blk_5e9469(c,a4,a0,a1,bud);
case 0x5e946f:[[clang::musttail]] return blk_5e946f(c,a4,a0,a1,bud);
case 0x5e9471:[[clang::musttail]] return blk_5e9471(c,a4,a0,a1,bud);
case 0x5e94a3:[[clang::musttail]] return blk_5e94a3(c,a4,a0,a1,bud);
case 0x5e94a6:[[clang::musttail]] return blk_5e94a6(c,a4,a0,a1,bud);
case 0x5e94bd:[[clang::musttail]] return blk_5e94bd(c,a4,a0,a1,bud);
case 0x5e94c0:[[clang::musttail]] return blk_5e94c0(c,a4,a0,a1,bud);
case 0x5e94d6:[[clang::musttail]] return blk_5e94d6(c,a4,a0,a1,bud);
case 0x5e94e5:[[clang::musttail]] return blk_5e94e5(c,a4,a0,a1,bud);
case 0x5e9524:[[clang::musttail]] return blk_5e9524(c,a4,a0,a1,bud);
case 0x5e954c:[[clang::musttail]] return blk_5e954c(c,a4,a0,a1,bud);
case 0x5e9556:[[clang::musttail]] return blk_5e9556(c,a4,a0,a1,bud);
case 0x5e9566:[[clang::musttail]] return blk_5e9566(c,a4,a0,a1,bud);
case 0x5e956d:[[clang::musttail]] return blk_5e956d(c,a4,a0,a1,bud);
case 0x5e9573:[[clang::musttail]] return blk_5e9573(c,a4,a0,a1,bud);
case 0x5e9579:[[clang::musttail]] return blk_5e9579(c,a4,a0,a1,bud);
case 0x5e957d:[[clang::musttail]] return blk_5e957d(c,a4,a0,a1,bud);
case 0x5e9586:[[clang::musttail]] return blk_5e9586(c,a4,a0,a1,bud);
case 0x5e958e:[[clang::musttail]] return blk_5e958e(c,a4,a0,a1,bud);
case 0x5e959b:[[clang::musttail]] return blk_5e959b(c,a4,a0,a1,bud);
case 0x5e95a1:[[clang::musttail]] return blk_5e95a1(c,a4,a0,a1,bud);
case 0x5e95a7:[[clang::musttail]] return blk_5e95a7(c,a4,a0,a1,bud);
case 0x5e95ab:[[clang::musttail]] return blk_5e95ab(c,a4,a0,a1,bud);
case 0x5e95b8:[[clang::musttail]] return blk_5e95b8(c,a4,a0,a1,bud);
case 0x5e95c4:[[clang::musttail]] return blk_5e95c4(c,a4,a0,a1,bud);
case 0x5e95da:[[clang::musttail]] return blk_5e95da(c,a4,a0,a1,bud);
case 0x5e95dc:[[clang::musttail]] return blk_5e95dc(c,a4,a0,a1,bud);
case 0x5e95fe:[[clang::musttail]] return blk_5e95fe(c,a4,a0,a1,bud);
case 0x5e961e:[[clang::musttail]] return blk_5e961e(c,a4,a0,a1,bud);
case 0x5e9635:[[clang::musttail]] return blk_5e9635(c,a4,a0,a1,bud);
case 0x5e9650:[[clang::musttail]] return blk_5e9650(c,a4,a0,a1,bud);
case 0x5e9688:[[clang::musttail]] return blk_5e9688(c,a4,a0,a1,bud);
case 0x5e9698:[[clang::musttail]] return blk_5e9698(c,a4,a0,a1,bud);
case 0x5e969f:[[clang::musttail]] return blk_5e969f(c,a4,a0,a1,bud);
case 0x5e96b0:[[clang::musttail]] return blk_5e96b0(c,a4,a0,a1,bud);
case 0x5e96cd:[[clang::musttail]] return blk_5e96cd(c,a4,a0,a1,bud);
case 0x5e96ed:[[clang::musttail]] return blk_5e96ed(c,a4,a0,a1,bud);
case 0x5e96f7:[[clang::musttail]] return blk_5e96f7(c,a4,a0,a1,bud);
case 0x5e9719:[[clang::musttail]] return blk_5e9719(c,a4,a0,a1,bud);
case 0x5e9724:[[clang::musttail]] return blk_5e9724(c,a4,a0,a1,bud);
case 0x5e9730:[[clang::musttail]] return blk_5e9730(c,a4,a0,a1,bud);
case 0x5e9752:[[clang::musttail]] return blk_5e9752(c,a4,a0,a1,bud);
case 0x5e9756:[[clang::musttail]] return blk_5e9756(c,a4,a0,a1,bud);
case 0x5e9775:[[clang::musttail]] return blk_5e9775(c,a4,a0,a1,bud);
case 0x5e9794:[[clang::musttail]] return blk_5e9794(c,a4,a0,a1,bud);
case 0x5e97b3:[[clang::musttail]] return blk_5e97b3(c,a4,a0,a1,bud);
case 0x5e97d2:[[clang::musttail]] return blk_5e97d2(c,a4,a0,a1,bud);
case 0x5e97f1:[[clang::musttail]] return blk_5e97f1(c,a4,a0,a1,bud);
case 0x5e9810:[[clang::musttail]] return blk_5e9810(c,a4,a0,a1,bud);
case 0x5e982f:[[clang::musttail]] return blk_5e982f(c,a4,a0,a1,bud);
case 0x5e984e:[[clang::musttail]] return blk_5e984e(c,a4,a0,a1,bud);
case 0x5e986d:[[clang::musttail]] return blk_5e986d(c,a4,a0,a1,bud);
case 0x5e9887:[[clang::musttail]] return blk_5e9887(c,a4,a0,a1,bud);
case 0x5e98ab:[[clang::musttail]] return blk_5e98ab(c,a4,a0,a1,bud);
case 0x5e98b6:[[clang::musttail]] return blk_5e98b6(c,a4,a0,a1,bud);
case 0x5e98d8:[[clang::musttail]] return blk_5e98d8(c,a4,a0,a1,bud);
case 0x5e9909:[[clang::musttail]] return blk_5e9909(c,a4,a0,a1,bud);
case 0x5e990c:[[clang::musttail]] return blk_5e990c(c,a4,a0,a1,bud);
case 0x5e994b:[[clang::musttail]] return blk_5e994b(c,a4,a0,a1,bud);
case 0x5e9950:[[clang::musttail]] return blk_5e9950(c,a4,a0,a1,bud);
case 0x5e9996:[[clang::musttail]] return blk_5e9996(c,a4,a0,a1,bud);
case 0x5e99a9:[[clang::musttail]] return blk_5e99a9(c,a4,a0,a1,bud);
case 0x5e99b3:[[clang::musttail]] return blk_5e99b3(c,a4,a0,a1,bud);
case 0x5e99c0:[[clang::musttail]] return blk_5e99c0(c,a4,a0,a1,bud);
case 0x5e99e0:[[clang::musttail]] return blk_5e99e0(c,a4,a0,a1,bud);
case 0x5e99f0:[[clang::musttail]] return blk_5e99f0(c,a4,a0,a1,bud);
case 0x5e9a18:[[clang::musttail]] return blk_5e9a18(c,a4,a0,a1,bud);
case 0x5e9a1d:[[clang::musttail]] return blk_5e9a1d(c,a4,a0,a1,bud);
case 0x5e9a30:[[clang::musttail]] return blk_5e9a30(c,a4,a0,a1,bud);
case 0x5e9a70:[[clang::musttail]] return blk_5e9a70(c,a4,a0,a1,bud);
case 0x5e9a76:[[clang::musttail]] return blk_5e9a76(c,a4,a0,a1,bud);
case 0x5e9a7c:[[clang::musttail]] return blk_5e9a7c(c,a4,a0,a1,bud);
case 0x5e9a85:[[clang::musttail]] return blk_5e9a85(c,a4,a0,a1,bud);
case 0x5e9a87:[[clang::musttail]] return blk_5e9a87(c,a4,a0,a1,bud);
case 0x5e9a8c:[[clang::musttail]] return blk_5e9a8c(c,a4,a0,a1,bud);
case 0x5e9a95:[[clang::musttail]] return blk_5e9a95(c,a4,a0,a1,bud);
case 0x5e9a9b:[[clang::musttail]] return blk_5e9a9b(c,a4,a0,a1,bud);
case 0x5e9aa0:[[clang::musttail]] return blk_5e9aa0(c,a4,a0,a1,bud);
case 0x5e9aa5:[[clang::musttail]] return blk_5e9aa5(c,a4,a0,a1,bud);
case 0x5e9aa7:[[clang::musttail]] return blk_5e9aa7(c,a4,a0,a1,bud);
case 0x5e9ad6:[[clang::musttail]] return blk_5e9ad6(c,a4,a0,a1,bud);
case 0x5e9ade:[[clang::musttail]] return blk_5e9ade(c,a4,a0,a1,bud);
case 0x5e9ae9:[[clang::musttail]] return blk_5e9ae9(c,a4,a0,a1,bud);
case 0x5e9aec:[[clang::musttail]] return blk_5e9aec(c,a4,a0,a1,bud);
case 0x5e9af0:[[clang::musttail]] return blk_5e9af0(c,a4,a0,a1,bud);
case 0x5e9af4:[[clang::musttail]] return blk_5e9af4(c,a4,a0,a1,bud);
case 0x5e9af6:[[clang::musttail]] return blk_5e9af6(c,a4,a0,a1,bud);
case 0x5e9afa:[[clang::musttail]] return blk_5e9afa(c,a4,a0,a1,bud);
case 0x5e9afc:[[clang::musttail]] return blk_5e9afc(c,a4,a0,a1,bud);
case 0x5e9afe:[[clang::musttail]] return blk_5e9afe(c,a4,a0,a1,bud);
case 0x5e9b00:[[clang::musttail]] return blk_5e9b00(c,a4,a0,a1,bud);
case 0x5e9b02:[[clang::musttail]] return blk_5e9b02(c,a4,a0,a1,bud);
case 0x5e9b04:[[clang::musttail]] return blk_5e9b04(c,a4,a0,a1,bud);
case 0x5e9b06:[[clang::musttail]] return blk_5e9b06(c,a4,a0,a1,bud);
case 0x5e9b13:[[clang::musttail]] return blk_5e9b13(c,a4,a0,a1,bud);
case 0x5e9b15:[[clang::musttail]] return blk_5e9b15(c,a4,a0,a1,bud);
case 0x5e9b25:[[clang::musttail]] return blk_5e9b25(c,a4,a0,a1,bud);
case 0x5e9b2d:[[clang::musttail]] return blk_5e9b2d(c,a4,a0,a1,bud);
case 0x5e9b40:[[clang::musttail]] return blk_5e9b40(c,a4,a0,a1,bud);
case 0x5e9b5e:[[clang::musttail]] return blk_5e9b5e(c,a4,a0,a1,bud);
case 0x5e9b69:[[clang::musttail]] return blk_5e9b69(c,a4,a0,a1,bud);
case 0x5e9b71:[[clang::musttail]] return blk_5e9b71(c,a4,a0,a1,bud);
case 0x5e9b84:[[clang::musttail]] return blk_5e9b84(c,a4,a0,a1,bud);
case 0x5e9b8f:[[clang::musttail]] return blk_5e9b8f(c,a4,a0,a1,bud);
case 0x5e9bad:[[clang::musttail]] return blk_5e9bad(c,a4,a0,a1,bud);
case 0x5e9bc0:[[clang::musttail]] return blk_5e9bc0(c,a4,a0,a1,bud);
case 0x5e9be5:[[clang::musttail]] return blk_5e9be5(c,a4,a0,a1,bud);
case 0x5e9bfe:[[clang::musttail]] return blk_5e9bfe(c,a4,a0,a1,bud);
case 0x5e9c10:[[clang::musttail]] return blk_5e9c10(c,a4,a0,a1,bud);
case 0x5e9c49:[[clang::musttail]] return blk_5e9c49(c,a4,a0,a1,bud);
case 0x5e9c50:[[clang::musttail]] return blk_5e9c50(c,a4,a0,a1,bud);
case 0x5e9c70:[[clang::musttail]] return blk_5e9c70(c,a4,a0,a1,bud);
case 0x5e9ca2:[[clang::musttail]] return blk_5e9ca2(c,a4,a0,a1,bud);
case 0x5e9cb2:[[clang::musttail]] return blk_5e9cb2(c,a4,a0,a1,bud);
case 0x5e9cc3:[[clang::musttail]] return blk_5e9cc3(c,a4,a0,a1,bud);
case 0x5e9cf0:[[clang::musttail]] return blk_5e9cf0(c,a4,a0,a1,bud);
case 0x5e9d00:[[clang::musttail]] return blk_5e9d00(c,a4,a0,a1,bud);
case 0x5e9d20:[[clang::musttail]] return blk_5e9d20(c,a4,a0,a1,bud);
case 0x5e9d2e:[[clang::musttail]] return blk_5e9d2e(c,a4,a0,a1,bud);
case 0x5e9d38:[[clang::musttail]] return blk_5e9d38(c,a4,a0,a1,bud);
case 0x5e9d46:[[clang::musttail]] return blk_5e9d46(c,a4,a0,a1,bud);
case 0x5e9d48:[[clang::musttail]] return blk_5e9d48(c,a4,a0,a1,bud);
case 0x5e9d69:[[clang::musttail]] return blk_5e9d69(c,a4,a0,a1,bud);
case 0x5e9d80:[[clang::musttail]] return blk_5e9d80(c,a4,a0,a1,bud);
case 0x5e9da0:[[clang::musttail]] return blk_5e9da0(c,a4,a0,a1,bud);
case 0x5e9db5:[[clang::musttail]] return blk_5e9db5(c,a4,a0,a1,bud);
case 0x5e9de0:[[clang::musttail]] return blk_5e9de0(c,a4,a0,a1,bud);
case 0x5e9df3:[[clang::musttail]] return blk_5e9df3(c,a4,a0,a1,bud);
case 0x5e9e0c:[[clang::musttail]] return blk_5e9e0c(c,a4,a0,a1,bud);
case 0x5e9e1b:[[clang::musttail]] return blk_5e9e1b(c,a4,a0,a1,bud);
case 0x5e9e50:[[clang::musttail]] return blk_5e9e50(c,a4,a0,a1,bud);
case 0x5e9e63:[[clang::musttail]] return blk_5e9e63(c,a4,a0,a1,bud);
case 0x5e9e6f:[[clang::musttail]] return blk_5e9e6f(c,a4,a0,a1,bud);
case 0x5e9e80:[[clang::musttail]] return blk_5e9e80(c,a4,a0,a1,bud);
case 0x5e9e87:[[clang::musttail]] return blk_5e9e87(c,a4,a0,a1,bud);
case 0x5e9e96:[[clang::musttail]] return blk_5e9e96(c,a4,a0,a1,bud);
case 0x5e9eae:[[clang::musttail]] return blk_5e9eae(c,a4,a0,a1,bud);
case 0x5e9eb9:[[clang::musttail]] return blk_5e9eb9(c,a4,a0,a1,bud);
case 0x5e9ec1:[[clang::musttail]] return blk_5e9ec1(c,a4,a0,a1,bud);
case 0x5e9ecc:[[clang::musttail]] return blk_5e9ecc(c,a4,a0,a1,bud);
case 0x5e9ed8:[[clang::musttail]] return blk_5e9ed8(c,a4,a0,a1,bud);
case 0x5e9ee4:[[clang::musttail]] return blk_5e9ee4(c,a4,a0,a1,bud);
case 0x5e9f04:[[clang::musttail]] return blk_5e9f04(c,a4,a0,a1,bud);
case 0x5e9f10:[[clang::musttail]] return blk_5e9f10(c,a4,a0,a1,bud);
case 0x5e9f2c:[[clang::musttail]] return blk_5e9f2c(c,a4,a0,a1,bud);
case 0x5e9f36:[[clang::musttail]] return blk_5e9f36(c,a4,a0,a1,bud);
case 0x5e9f40:[[clang::musttail]] return blk_5e9f40(c,a4,a0,a1,bud);
case 0x5e9f4a:[[clang::musttail]] return blk_5e9f4a(c,a4,a0,a1,bud);
case 0x5e9f58:[[clang::musttail]] return blk_5e9f58(c,a4,a0,a1,bud);
case 0x5e9f5f:[[clang::musttail]] return blk_5e9f5f(c,a4,a0,a1,bud);
case 0x5e9f66:[[clang::musttail]] return blk_5e9f66(c,a4,a0,a1,bud);
case 0x5e9f76:[[clang::musttail]] return blk_5e9f76(c,a4,a0,a1,bud);
case 0x5e9f80:[[clang::musttail]] return blk_5e9f80(c,a4,a0,a1,bud);
case 0x5e9f90:[[clang::musttail]] return blk_5e9f90(c,a4,a0,a1,bud);
case 0x5e9f95:[[clang::musttail]] return blk_5e9f95(c,a4,a0,a1,bud);
case 0x5e9f9c:[[clang::musttail]] return blk_5e9f9c(c,a4,a0,a1,bud);
case 0x5e9fa3:[[clang::musttail]] return blk_5e9fa3(c,a4,a0,a1,bud);
case 0x5e9fac:[[clang::musttail]] return blk_5e9fac(c,a4,a0,a1,bud);
case 0x5e9fae:[[clang::musttail]] return blk_5e9fae(c,a4,a0,a1,bud);
case 0x5e9fb8:[[clang::musttail]] return blk_5e9fb8(c,a4,a0,a1,bud);
case 0x5e9fbd:[[clang::musttail]] return blk_5e9fbd(c,a4,a0,a1,bud);
case 0x5e9fc1:[[clang::musttail]] return blk_5e9fc1(c,a4,a0,a1,bud);
case 0x5e9fcb:[[clang::musttail]] return blk_5e9fcb(c,a4,a0,a1,bud);
case 0x5e9fe2:[[clang::musttail]] return blk_5e9fe2(c,a4,a0,a1,bud);
case 0x5e9fec:[[clang::musttail]] return blk_5e9fec(c,a4,a0,a1,bud);
case 0x5e9ff1:[[clang::musttail]] return blk_5e9ff1(c,a4,a0,a1,bud);
case 0x5e9ff8:[[clang::musttail]] return blk_5e9ff8(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_5e9(Cpu& c){u8* R=c.regs.data();return ent_5e9(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
