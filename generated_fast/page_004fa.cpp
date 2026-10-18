#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4b5(u8* __restrict R,Cpu& c);
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 body_4cc(u8* __restrict R,Cpu& c);
u32 body_4ce(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4ee(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4f1(u8* __restrict R,Cpu& c);
u32 body_4fb(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_590(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4fa,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4fa,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4fa(u8* __restrict R,Cpu& c);
u32 page_4fa(Cpu& c){return body_4fa(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4fa(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4fa003:goto L4fa003;
case 0x4fa005:goto L4fa005;
case 0x4fa00b:c.instructions+=1;goto B4fa00b;
case 0x4fa00d:goto L4fa00d;
case 0x4fa013:c.instructions+=3;goto B4fa013;
case 0x4fa014:c.instructions+=2;goto B4fa014;
case 0x4fa019:c.instructions+=1;goto B4fa019;
case 0x4fa01e:goto L4fa01e;
case 0x4fa01f:c.instructions+=2;goto B4fa01f;
case 0x4fa021:c.instructions+=1;goto B4fa021;
case 0x4fa026:goto L4fa026;
case 0x4fa028:goto L4fa028;
case 0x4fa02f:c.instructions+=5;goto B4fa02f;
case 0x4fa035:c.instructions+=4;goto B4fa035;
case 0x4fa03b:c.instructions+=3;goto B4fa03b;
case 0x4fa040:c.instructions+=2;goto B4fa040;
case 0x4fa046:c.instructions+=1;goto B4fa046;
case 0x4fa04b:goto L4fa04b;
case 0x4fa050:c.instructions+=3;goto B4fa050;
case 0x4fa056:c.instructions+=2;goto B4fa056;
case 0x4fa05c:c.instructions+=1;goto B4fa05c;
case 0x4fa05e:goto L4fa05e;
case 0x4fa061:c.instructions+=3;goto B4fa061;
case 0x4fa066:c.instructions+=2;goto B4fa066;
case 0x4fa067:c.instructions+=1;goto B4fa067;
case 0x4fa06c:goto L4fa06c;
case 0x4fa06f:c.instructions+=2;goto B4fa06f;
case 0x4fa071:c.instructions+=1;goto B4fa071;
case 0x4fa073:goto L4fa073;
case 0x4fa076:c.instructions+=2;goto B4fa076;
case 0x4fa07b:c.instructions+=1;goto B4fa07b;
case 0x4fa080:goto L4fa080;
case 0x4fa081:c.instructions+=2;goto B4fa081;
case 0x4fa082:c.instructions+=1;goto B4fa082;
case 0x4fa087:goto L4fa087;
case 0x4fa088:c.instructions+=1;goto B4fa088;
case 0x4fa08d:goto L4fa08d;
case 0x4fa08f:goto L4fa08f;
case 0x4fa092:c.instructions+=2;goto B4fa092;
case 0x4fa097:c.instructions+=1;goto B4fa097;
case 0x4fa09c:goto L4fa09c;
case 0x4fa09d:c.instructions+=2;goto B4fa09d;
case 0x4fa09e:c.instructions+=1;goto B4fa09e;
case 0x4fa0a3:goto L4fa0a3;
case 0x4fa0a4:c.instructions+=1;goto B4fa0a4;
case 0x4fa0a9:goto L4fa0a9;
case 0x4fa0ac:c.instructions+=2;goto B4fa0ac;
case 0x4fa0ae:c.instructions+=1;goto B4fa0ae;
case 0x4fa0b3:goto L4fa0b3;
case 0x4fa0b5:c.instructions+=4;goto B4fa0b5;
case 0x4fa0b7:c.instructions+=3;goto B4fa0b7;
case 0x4fa0bb:c.instructions+=2;goto B4fa0bb;
case 0x4fa0bc:c.instructions+=1;goto B4fa0bc;
case 0x4fa0be:goto L4fa0be;
case 0x4fa0c1:c.instructions+=1;goto B4fa0c1;
case 0x4fa0c3:goto L4fa0c3;
case 0x4fa0c5:goto L4fa0c5;
case 0x4fa0c8:c.instructions+=4;goto B4fa0c8;
case 0x4fa0cb:c.instructions+=3;goto B4fa0cb;
case 0x4fa0d0:c.instructions+=2;goto B4fa0d0;
case 0x4fa0d1:c.instructions+=1;goto B4fa0d1;
case 0x4fa0d3:goto L4fa0d3;
case 0x4fa0d8:goto L4fa0d8;
case 0x4fa0d9:c.instructions+=1;goto B4fa0d9;
case 0x4fa0de:goto L4fa0de;
case 0x4fa0e4:c.instructions+=1;goto B4fa0e4;
case 0x4fa0e6:goto L4fa0e6;
case 0x4fa0eb:goto L4fa0eb;
case 0x4fa0ec:c.instructions+=1;goto B4fa0ec;
case 0x4fa0f1:goto L4fa0f1;
case 0x4fa0f8:goto L4fa0f8;
case 0x4fa0fb:c.instructions+=3;goto B4fa0fb;
case 0x4fa0fe:c.instructions+=2;goto B4fa0fe;
case 0x4fa100:c.instructions+=1;goto B4fa100;
case 0x4fa102:goto L4fa102;
case 0x4fa105:c.instructions+=1;goto B4fa105;
case 0x4fa107:goto L4fa107;
case 0x4fa109:goto L4fa109;
case 0x4fa10c:c.instructions+=4;goto B4fa10c;
case 0x4fa10f:c.instructions+=3;goto B4fa10f;
case 0x4fa114:c.instructions+=2;goto B4fa114;
case 0x4fa115:c.instructions+=1;goto B4fa115;
case 0x4fa117:goto L4fa117;
case 0x4fa11c:goto L4fa11c;
case 0x4fa11d:c.instructions+=1;goto B4fa11d;
case 0x4fa122:goto L4fa122;
case 0x4fa128:c.instructions+=1;goto B4fa128;
case 0x4fa12a:goto L4fa12a;
case 0x4fa12f:goto L4fa12f;
case 0x4fa130:c.instructions+=1;goto B4fa130;
case 0x4fa135:goto L4fa135;
case 0x4fa13c:goto L4fa13c;
case 0x4fa13f:c.instructions+=4;goto B4fa13f;
case 0x4fa142:c.instructions+=3;goto B4fa142;
case 0x4fa147:c.instructions+=2;goto B4fa147;
case 0x4fa148:c.instructions+=1;goto B4fa148;
case 0x4fa14d:goto L4fa14d;
case 0x4fa153:c.instructions+=4;goto B4fa153;
case 0x4fa156:c.instructions+=3;goto B4fa156;
case 0x4fa15b:c.instructions+=2;goto B4fa15b;
case 0x4fa15c:c.instructions+=1;goto B4fa15c;
case 0x4fa161:goto L4fa161;
case 0x4fa165:c.instructions+=10;goto B4fa165;
case 0x4fa168:c.instructions+=9;goto B4fa168;
case 0x4fa16e:c.instructions+=8;goto B4fa16e;
case 0x4fa16f:c.instructions+=7;goto B4fa16f;
case 0x4fa171:c.instructions+=6;goto B4fa171;
case 0x4fa172:c.instructions+=5;goto B4fa172;
case 0x4fa178:c.instructions+=4;goto B4fa178;
case 0x4fa179:c.instructions+=3;goto B4fa179;
case 0x4fa180:c.instructions+=2;goto B4fa180;
case 0x4fa183:c.instructions+=1;goto B4fa183;
case 0x4fa2a0:goto L4fa2a0;
case 0x4fa2a1:c.instructions+=14;goto B4fa2a1;
case 0x4fa2a3:c.instructions+=13;goto B4fa2a3;
case 0x4fa2a6:c.instructions+=12;goto B4fa2a6;
case 0x4fa2a7:c.instructions+=11;goto B4fa2a7;
case 0x4fa2a9:c.instructions+=10;goto B4fa2a9;
case 0x4fa2ab:c.instructions+=9;goto B4fa2ab;
case 0x4fa2b1:c.instructions+=8;goto B4fa2b1;
case 0x4fa2b3:c.instructions+=7;goto B4fa2b3;
case 0x4fa2b6:c.instructions+=6;goto B4fa2b6;
case 0x4fa2bb:c.instructions+=5;goto B4fa2bb;
case 0x4fa2c1:c.instructions+=4;goto B4fa2c1;
case 0x4fa2c2:c.instructions+=3;goto B4fa2c2;
case 0x4fa2c8:c.instructions+=2;goto B4fa2c8;
case 0x4fa2cb:c.instructions+=1;goto B4fa2cb;
case 0x4fa2cd:goto L4fa2cd;
case 0x4fa2d2:c.instructions+=2;goto B4fa2d2;
case 0x4fa2d7:c.instructions+=1;goto B4fa2d7;
case 0x4fa2dc:goto L4fa2dc;
case 0x4fa2dd:c.instructions+=2;goto B4fa2dd;
case 0x4fa2de:c.instructions+=1;goto B4fa2de;
case 0x4fa2e3:goto L4fa2e3;
case 0x4fa2e6:c.instructions+=2;goto B4fa2e6;
case 0x4fa2e7:c.instructions+=1;goto B4fa2e7;
case 0x4fa2ec:goto L4fa2ec;
case 0x4fa2ef:c.instructions+=3;goto B4fa2ef;
case 0x4fa2f1:c.instructions+=2;goto B4fa2f1;
case 0x4fa2f2:c.instructions+=1;goto B4fa2f2;
case 0x4fa2f4:goto L4fa2f4;
case 0x4fa2f9:c.instructions+=2;goto B4fa2f9;
case 0x4fa2fe:c.instructions+=1;goto B4fa2fe;
case 0x4fa303:goto L4fa303;
case 0x4fa304:c.instructions+=2;goto B4fa304;
case 0x4fa305:c.instructions+=1;goto B4fa305;
case 0x4fa30a:goto L4fa30a;
case 0x4fa30d:c.instructions+=2;goto B4fa30d;
case 0x4fa30e:c.instructions+=1;goto B4fa30e;
case 0x4fa313:goto L4fa313;
case 0x4fa316:c.instructions+=2;goto B4fa316;
case 0x4fa318:c.instructions+=1;goto B4fa318;
case 0x4fa319:goto L4fa319;
case 0x4fa31e:goto L4fa31e;
case 0x4fa321:c.instructions+=2;goto B4fa321;
case 0x4fa323:c.instructions+=1;goto B4fa323;
case 0x4fa328:goto L4fa328;
case 0x4fa32b:c.instructions+=3;goto B4fa32b;
case 0x4fa32d:c.instructions+=2;goto B4fa32d;
case 0x4fa330:c.instructions+=1;goto B4fa330;
case 0x4fa332:goto L4fa332;
case 0x4fa335:c.instructions+=1;goto B4fa335;
case 0x4fa337:goto L4fa337;
case 0x4fa339:goto L4fa339;
case 0x4fa33b:c.instructions+=3;goto B4fa33b;
case 0x4fa33e:c.instructions+=2;goto B4fa33e;
case 0x4fa345:c.instructions+=1;goto B4fa345;
case 0x4fa347:goto L4fa347;
case 0x4fa34a:c.instructions+=1;goto B4fa34a;
case 0x4fa34c:goto L4fa34c;
case 0x4fa34e:goto L4fa34e;
case 0x4fa34f:c.instructions+=1;goto B4fa34f;
case 0x4fa350:goto L4fa350;
case 0x4fa352:c.instructions+=1;goto B4fa352;
case 0x4fa354:goto L4fa354;
case 0x4fa357:c.instructions+=1;goto B4fa357;
case 0x4fa359:goto L4fa359;
case 0x4fa35b:goto L4fa35b;
case 0x4fa35d:c.instructions+=1;goto B4fa35d;
case 0x4fa35f:goto L4fa35f;
case 0x4fa362:c.instructions+=3;goto B4fa362;
case 0x4fa368:c.instructions+=2;goto B4fa368;
case 0x4fa36f:c.instructions+=1;goto B4fa36f;
case 0x4fa371:goto L4fa371;
case 0x4fa374:c.instructions+=3;goto B4fa374;
case 0x4fa377:c.instructions+=2;goto B4fa377;
case 0x4fa379:c.instructions+=1;goto B4fa379;
case 0x4fa37b:goto L4fa37b;
case 0x4fa37e:c.instructions+=1;goto B4fa37e;
case 0x4fa380:goto L4fa380;
case 0x4fa382:c.instructions+=1;goto B4fa382;
case 0x4fa384:goto L4fa384;
case 0x4fa387:goto L4fa387;
case 0x4fa38a:c.instructions+=6;goto B4fa38a;
case 0x4fa38d:c.instructions+=5;goto B4fa38d;
case 0x4fa393:c.instructions+=4;goto B4fa393;
case 0x4fa394:c.instructions+=3;goto B4fa394;
case 0x4fa395:c.instructions+=2;goto B4fa395;
case 0x4fa39a:c.instructions+=1;goto B4fa39a;
case 0x4fa39f:goto L4fa39f;
case 0x4fa3a2:c.instructions+=1;goto B4fa3a2;
case 0x4fa3a7:goto L4fa3a7;
case 0x4fa3ac:c.instructions+=2;goto B4fa3ac;
case 0x4fa3ae:c.instructions+=1;goto B4fa3ae;
case 0x4fa3b3:goto L4fa3b3;
case 0x4fa3b6:c.instructions+=2;goto B4fa3b6;
case 0x4fa3b8:c.instructions+=1;goto B4fa3b8;
case 0x4fa3ba:goto L4fa3ba;
case 0x4fa3bf:c.instructions+=1;goto B4fa3bf;
case 0x4fa3c4:goto L4fa3c4;
case 0x4fa3c7:c.instructions+=2;goto B4fa3c7;
case 0x4fa3c9:c.instructions+=1;goto B4fa3c9;
case 0x4fa3cb:goto L4fa3cb;
case 0x4fa3d0:c.instructions+=1;goto B4fa3d0;
case 0x4fa3d5:goto L4fa3d5;
case 0x4fa3d8:c.instructions+=2;goto B4fa3d8;
case 0x4fa3da:c.instructions+=1;goto B4fa3da;
case 0x4fa3dc:goto L4fa3dc;
case 0x4fa3e1:c.instructions+=1;goto B4fa3e1;
case 0x4fa3e6:goto L4fa3e6;
case 0x4fa3e9:c.instructions+=2;goto B4fa3e9;
case 0x4fa3eb:c.instructions+=1;goto B4fa3eb;
case 0x4fa3ed:goto L4fa3ed;
case 0x4fa3f0:c.instructions+=1;goto B4fa3f0;
case 0x4fa3f2:goto L4fa3f2;
case 0x4fa3f4:goto L4fa3f4;
case 0x4fa3f5:c.instructions+=2;goto B4fa3f5;
case 0x4fa3fa:c.instructions+=1;goto B4fa3fa;
case 0x4fa3ff:goto L4fa3ff;
case 0x4fa401:c.instructions+=3;goto B4fa401;
case 0x4fa40b:c.instructions+=2;goto B4fa40b;
case 0x4fa40c:c.instructions+=1;goto B4fa40c;
case 0x4fa40e:goto L4fa40e;
case 0x4fa410:c.instructions+=3;goto B4fa410;
case 0x4fa415:c.instructions+=2;goto B4fa415;
case 0x4fa417:c.instructions+=1;goto B4fa417;
case 0x4fa41c:goto L4fa41c;
case 0x4fa41e:c.instructions+=1;goto B4fa41e;
case 0x4fa423:goto L4fa423;
case 0x4fa42a:c.instructions+=1;goto B4fa42a;
case 0x4fa42c:goto L4fa42c;
case 0x4fa42f:c.instructions+=2;goto B4fa42f;
case 0x4fa431:c.instructions+=1;goto B4fa431;
case 0x4fa433:goto L4fa433;
case 0x4fa438:c.instructions+=1;goto B4fa438;
case 0x4fa43d:goto L4fa43d;
case 0x4fa440:c.instructions+=2;goto B4fa440;
case 0x4fa442:c.instructions+=1;goto B4fa442;
case 0x4fa444:goto L4fa444;
case 0x4fa447:c.instructions+=5;goto B4fa447;
case 0x4fa449:c.instructions+=4;goto B4fa449;
case 0x4fa44e:c.instructions+=3;goto B4fa44e;
case 0x4fa44f:c.instructions+=2;goto B4fa44f;
case 0x4fa454:c.instructions+=1;goto B4fa454;
case 0x4fa459:goto L4fa459;
case 0x4fa45c:goto L4fa45c;
case 0x4fa45d:c.instructions+=4;goto B4fa45d;
case 0x4fa461:c.instructions+=3;goto B4fa461;
case 0x4fa462:c.instructions+=2;goto B4fa462;
case 0x4fa463:c.instructions+=1;goto B4fa463;
case 0x4fa470:goto L4fa470;
case 0x4fa475:c.instructions+=2;goto B4fa475;
case 0x4fa477:c.instructions+=1;goto B4fa477;
case 0x4fa47d:goto L4fa47d;
case 0x4fa47e:c.instructions+=2;goto B4fa47e;
case 0x4fa47f:c.instructions+=1;goto B4fa47f;
case 0x4fa484:goto L4fa484;
case 0x4fa489:c.instructions+=2;goto B4fa489;
case 0x4fa48c:c.instructions+=1;goto B4fa48c;
case 0x4fa48e:goto L4fa48e;
case 0x4fa495:c.instructions+=1;goto B4fa495;
case 0x4fa49c:goto L4fa49c;
case 0x4fa4a1:c.instructions+=5;goto B4fa4a1;
case 0x4fa4a7:c.instructions+=4;goto B4fa4a7;
case 0x4fa4a8:c.instructions+=3;goto B4fa4a8;
case 0x4fa4aa:c.instructions+=2;goto B4fa4aa;
case 0x4fa4ac:c.instructions+=1;goto B4fa4ac;
case 0x4fa4b1:goto L4fa4b1;
case 0x4fa4b5:c.instructions+=5;goto B4fa4b5;
case 0x4fa4b7:c.instructions+=4;goto B4fa4b7;
case 0x4fa4b8:c.instructions+=3;goto B4fa4b8;
case 0x4fa4b9:c.instructions+=2;goto B4fa4b9;
case 0x4fa4bc:c.instructions+=1;goto B4fa4bc;
case 0x4fa4c1:goto L4fa4c1;
case 0x4fa4c4:c.instructions+=3;goto B4fa4c4;
case 0x4fa4c5:c.instructions+=2;goto B4fa4c5;
case 0x4fa4c6:c.instructions+=1;goto B4fa4c6;
case 0x4fa4c7:goto L4fa4c7;
case 0x4fa4cd:c.instructions+=5;goto B4fa4cd;
case 0x4fa4d1:c.instructions+=4;goto B4fa4d1;
case 0x4fa4d7:c.instructions+=3;goto B4fa4d7;
case 0x4fa4d8:c.instructions+=2;goto B4fa4d8;
case 0x4fa4d9:c.instructions+=1;goto B4fa4d9;
case 0x4fa4de:goto L4fa4de;
case 0x4fa4df:c.instructions+=2;goto B4fa4df;
case 0x4fa4e0:c.instructions+=1;goto B4fa4e0;
case 0x4fa4e1:goto L4fa4e1;
case 0x4fa4e7:c.instructions+=5;goto B4fa4e7;
case 0x4fa4eb:c.instructions+=4;goto B4fa4eb;
case 0x4fa4ec:c.instructions+=3;goto B4fa4ec;
case 0x4fa4f2:c.instructions+=2;goto B4fa4f2;
case 0x4fa4f3:c.instructions+=1;goto B4fa4f3;
case 0x4fa4f8:goto L4fa4f8;
case 0x4fa4f9:c.instructions+=2;goto B4fa4f9;
case 0x4fa4fa:c.instructions+=1;goto B4fa4fa;
case 0x4fa4fb:goto L4fa4fb;
case 0x4fa500:c.instructions+=5;goto B4fa500;
case 0x4fa506:c.instructions+=4;goto B4fa506;
case 0x4fa507:c.instructions+=3;goto B4fa507;
case 0x4fa509:c.instructions+=2;goto B4fa509;
case 0x4fa50b:c.instructions+=1;goto B4fa50b;
case 0x4fa510:goto L4fa510;
case 0x4fa512:c.instructions+=5;goto B4fa512;
case 0x4fa515:c.instructions+=4;goto B4fa515;
case 0x4fa519:c.instructions+=3;goto B4fa519;
case 0x4fa51a:c.instructions+=2;goto B4fa51a;
case 0x4fa51b:c.instructions+=1;goto B4fa51b;
case 0x4fa520:goto L4fa520;
case 0x4fa523:c.instructions+=2;goto B4fa523;
case 0x4fa524:c.instructions+=1;goto B4fa524;
case 0x4fa525:goto L4fa525;
case 0x4fa550:goto L4fa550;
case 0x4fa552:c.instructions+=7;goto B4fa552;
case 0x4fa557:c.instructions+=6;goto B4fa557;
case 0x4fa55d:c.instructions+=5;goto B4fa55d;
case 0x4fa55e:c.instructions+=4;goto B4fa55e;
case 0x4fa565:c.instructions+=3;goto B4fa565;
case 0x4fa566:c.instructions+=2;goto B4fa566;
case 0x4fa56b:c.instructions+=1;goto B4fa56b;
case 0x4fa570:goto L4fa570;
case 0x4fa573:c.instructions+=4;goto B4fa573;
case 0x4fa577:c.instructions+=3;goto B4fa577;
case 0x4fa579:c.instructions+=2;goto B4fa579;
case 0x4fa581:c.instructions+=1;goto B4fa581;
case 0x4fa583:goto L4fa583;
case 0x4fa587:c.instructions+=3;goto B4fa587;
case 0x4fa588:c.instructions+=2;goto B4fa588;
case 0x4fa58a:c.instructions+=1;goto B4fa58a;
case 0x4fa58f:goto L4fa58f;
case 0x4fa593:c.instructions+=3;goto B4fa593;
case 0x4fa59a:c.instructions+=2;goto B4fa59a;
case 0x4fa59d:c.instructions+=1;goto B4fa59d;
case 0x4fa59e:goto L4fa59e;
case 0x4fa5a2:c.instructions+=4;goto B4fa5a2;
case 0x4fa5a4:c.instructions+=3;goto B4fa5a4;
case 0x4fa5ab:c.instructions+=2;goto B4fa5ab;
case 0x4fa5ae:c.instructions+=1;goto B4fa5ae;
case 0x4fa5b0:goto L4fa5b0;
case 0x4fa5b4:c.instructions+=6;goto B4fa5b4;
case 0x4fa5b9:c.instructions+=5;goto B4fa5b9;
case 0x4fa5ba:c.instructions+=4;goto B4fa5ba;
case 0x4fa5bb:c.instructions+=3;goto B4fa5bb;
case 0x4fa5bc:c.instructions+=2;goto B4fa5bc;
case 0x4fa5be:c.instructions+=1;goto B4fa5be;
case 0x4fa5c4:goto L4fa5c4;
case 0x4fa5c6:goto L4fa5c6;
case 0x4fa5cb:c.instructions+=1;goto B4fa5cb;
case 0x4fa5d1:goto L4fa5d1;
case 0x4fa5d7:goto L4fa5d7;
case 0x4fa5dc:c.instructions+=1;goto B4fa5dc;
case 0x4fa5de:goto L4fa5de;
case 0x4fa5e3:c.instructions+=1;goto B4fa5e3;
case 0x4fa5e5:goto L4fa5e5;
case 0x4fa5ea:c.instructions+=1;goto B4fa5ea;
case 0x4fa5f0:goto L4fa5f0;
case 0x4fa5f4:c.instructions+=5;goto B4fa5f4;
case 0x4fa5f9:c.instructions+=4;goto B4fa5f9;
case 0x4fa5fc:c.instructions+=3;goto B4fa5fc;
case 0x4fa5fe:c.instructions+=2;goto B4fa5fe;
case 0x4fa602:c.instructions+=1;goto B4fa602;
case 0x4fa608:goto L4fa608;
case 0x4fa609:c.instructions+=2;goto B4fa609;
case 0x4fa60b:c.instructions+=1;goto B4fa60b;
case 0x4fa610:goto L4fa610;
case 0x4fa612:c.instructions+=1;goto B4fa612;
case 0x4fa618:goto L4fa618;
case 0x4fa61c:c.instructions+=4;goto B4fa61c;
case 0x4fa61d:c.instructions+=3;goto B4fa61d;
case 0x4fa61e:c.instructions+=2;goto B4fa61e;
case 0x4fa620:c.instructions+=1;goto B4fa620;
case 0x4fa625:goto L4fa625;
case 0x4fa626:c.instructions+=3;goto B4fa626;
case 0x4fa627:c.instructions+=2;goto B4fa627;
case 0x4fa628:c.instructions+=1;goto B4fa628;
case 0x4fa62b:goto L4fa62b;
case 0x4fa630:goto L4fa630;
case 0x4fa633:c.instructions+=1;goto B4fa633;
case 0x4fa639:goto L4fa639;
case 0x4fa63f:c.instructions+=2;goto B4fa63f;
case 0x4fa641:c.instructions+=1;goto B4fa641;
case 0x4fa646:goto L4fa646;
case 0x4fa648:c.instructions+=1;goto B4fa648;
case 0x4fa64d:goto L4fa64d;
case 0x4fa64e:c.instructions+=3;goto B4fa64e;
case 0x4fa64f:c.instructions+=2;goto B4fa64f;
case 0x4fa650:c.instructions+=1;goto B4fa650;
case 0x4fa653:goto L4fa653;
case 0x4fa657:c.instructions+=2;goto B4fa657;
case 0x4fa659:c.instructions+=1;goto B4fa659;
case 0x4fa65f:goto L4fa65f;
case 0x4fa660:c.instructions+=2;goto B4fa660;
case 0x4fa662:c.instructions+=1;goto B4fa662;
case 0x4fa667:goto L4fa667;
case 0x4fa669:c.instructions+=2;goto B4fa669;
case 0x4fa66b:c.instructions+=1;goto B4fa66b;
case 0x4fa66d:goto L4fa66d;
case 0x4fa673:c.instructions+=2;goto B4fa673;
case 0x4fa675:c.instructions+=1;goto B4fa675;
case 0x4fa67a:goto L4fa67a;
case 0x4fa67b:c.instructions+=2;goto B4fa67b;
case 0x4fa67d:c.instructions+=1;goto B4fa67d;
case 0x4fa682:goto L4fa682;
case 0x4fa683:c.instructions+=3;goto B4fa683;
case 0x4fa684:c.instructions+=2;goto B4fa684;
case 0x4fa685:c.instructions+=1;goto B4fa685;
case 0x4fa688:goto L4fa688;
case 0x4fa689:c.instructions+=2;goto B4fa689;
case 0x4fa68b:c.instructions+=1;goto B4fa68b;
case 0x4fa690:goto L4fa690;
case 0x4fa692:c.instructions+=1;goto B4fa692;
case 0x4fa698:goto L4fa698;
case 0x4fa69b:c.instructions+=1;goto B4fa69b;
case 0x4fa6a1:goto L4fa6a1;
case 0x4fa6a8:goto L4fa6a8;
case 0x4fa6ae:c.instructions+=2;goto B4fa6ae;
case 0x4fa6b0:c.instructions+=1;goto B4fa6b0;
case 0x4fa6b5:goto L4fa6b5;
case 0x4fa6b7:c.instructions+=1;goto B4fa6b7;
case 0x4fa6bc:goto L4fa6bc;
case 0x4fa6bd:c.instructions+=3;goto B4fa6bd;
case 0x4fa6be:c.instructions+=2;goto B4fa6be;
case 0x4fa6bf:c.instructions+=1;goto B4fa6bf;
case 0x4fa6c2:goto L4fa6c2;
case 0x4fa6c5:c.instructions+=2;goto B4fa6c5;
case 0x4fa6c7:c.instructions+=1;goto B4fa6c7;
case 0x4fa6c9:goto L4fa6c9;
case 0x4fa6d0:c.instructions+=1;goto B4fa6d0;
case 0x4fa6d6:goto L4fa6d6;
case 0x4fa6dc:c.instructions+=2;goto B4fa6dc;
case 0x4fa6de:c.instructions+=1;goto B4fa6de;
case 0x4fa6e3:goto L4fa6e3;
case 0x4fa6e6:c.instructions+=2;goto B4fa6e6;
case 0x4fa6e8:c.instructions+=1;goto B4fa6e8;
case 0x4fa6ea:goto L4fa6ea;
case 0x4fa6f0:c.instructions+=2;goto B4fa6f0;
case 0x4fa6f5:c.instructions+=1;goto B4fa6f5;
case 0x4fa6f7:goto L4fa6f7;
case 0x4fa6f9:goto L4fa6f9;
case 0x4fa6ff:c.instructions+=6;goto B4fa6ff;
case 0x4fa702:c.instructions+=5;goto B4fa702;
case 0x4fa705:c.instructions+=4;goto B4fa705;
case 0x4fa70b:c.instructions+=3;goto B4fa70b;
case 0x4fa70c:c.instructions+=2;goto B4fa70c;
case 0x4fa70d:c.instructions+=1;goto B4fa70d;
case 0x4fa712:goto L4fa712;
case 0x4fa715:c.instructions+=2;goto B4fa715;
case 0x4fa716:c.instructions+=1;goto B4fa716;
case 0x4fa71b:goto L4fa71b;
case 0x4fa71e:c.instructions+=5;goto B4fa71e;
case 0x4fa71f:c.instructions+=4;goto B4fa71f;
case 0x4fa720:c.instructions+=3;goto B4fa720;
case 0x4fa72a:c.instructions+=2;goto B4fa72a;
case 0x4fa72b:c.instructions+=1;goto B4fa72b;
case 0x4fa72e:goto L4fa72e;
case 0x4fa730:c.instructions+=1;goto B4fa730;
case 0x4fa735:goto L4fa735;
case 0x4fa73b:c.instructions+=2;goto B4fa73b;
case 0x4fa73d:c.instructions+=1;goto B4fa73d;
case 0x4fa742:goto L4fa742;
case 0x4fa743:c.instructions+=3;goto B4fa743;
case 0x4fa744:c.instructions+=2;goto B4fa744;
case 0x4fa745:c.instructions+=1;goto B4fa745;
case 0x4fa748:goto L4fa748;
case 0x4fa74a:c.instructions+=1;goto B4fa74a;
case 0x4fa74f:goto L4fa74f;
case 0x4fa755:c.instructions+=2;goto B4fa755;
case 0x4fa757:c.instructions+=1;goto B4fa757;
case 0x4fa75c:goto L4fa75c;
case 0x4fa75d:c.instructions+=3;goto B4fa75d;
case 0x4fa75e:c.instructions+=2;goto B4fa75e;
case 0x4fa75f:c.instructions+=1;goto B4fa75f;
case 0x4fa762:goto L4fa762;
case 0x4fa764:c.instructions+=1;goto B4fa764;
case 0x4fa769:goto L4fa769;
case 0x4fa76f:c.instructions+=2;goto B4fa76f;
case 0x4fa771:c.instructions+=1;goto B4fa771;
case 0x4fa776:goto L4fa776;
case 0x4fa777:c.instructions+=3;goto B4fa777;
case 0x4fa778:c.instructions+=2;goto B4fa778;
case 0x4fa779:c.instructions+=1;goto B4fa779;
case 0x4fa77c:goto L4fa77c;
case 0x4fa782:c.instructions+=2;goto B4fa782;
case 0x4fa784:c.instructions+=1;goto B4fa784;
case 0x4fa789:goto L4fa789;
case 0x4fa78a:c.instructions+=3;goto B4fa78a;
case 0x4fa78b:c.instructions+=2;goto B4fa78b;
case 0x4fa78c:c.instructions+=1;goto B4fa78c;
case 0x4fa78f:goto L4fa78f;
case 0x4fa794:c.instructions+=1;goto B4fa794;
case 0x4fa796:goto L4fa796;
case 0x4fa79b:c.instructions+=1;goto B4fa79b;
case 0x4fa79d:goto L4fa79d;
case 0x4fa7a2:c.instructions+=1;goto B4fa7a2;
case 0x4fa7a8:goto L4fa7a8;
case 0x4fa7ae:c.instructions+=2;goto B4fa7ae;
case 0x4fa7b0:c.instructions+=1;goto B4fa7b0;
case 0x4fa7b5:goto L4fa7b5;
case 0x4fa7b6:c.instructions+=3;goto B4fa7b6;
case 0x4fa7b7:c.instructions+=2;goto B4fa7b7;
case 0x4fa7b8:c.instructions+=1;goto B4fa7b8;
case 0x4fa7bb:goto L4fa7bb;
case 0x4fa7c1:c.instructions+=2;goto B4fa7c1;
case 0x4fa7c3:c.instructions+=1;goto B4fa7c3;
case 0x4fa7c8:goto L4fa7c8;
case 0x4fa7c9:c.instructions+=3;goto B4fa7c9;
case 0x4fa7ca:c.instructions+=2;goto B4fa7ca;
case 0x4fa7cb:c.instructions+=1;goto B4fa7cb;
case 0x4fa7ce:goto L4fa7ce;
case 0x4fa7d4:c.instructions+=2;goto B4fa7d4;
case 0x4fa7d6:c.instructions+=1;goto B4fa7d6;
case 0x4fa7db:goto L4fa7db;
case 0x4fa7e2:c.instructions+=1;goto B4fa7e2;
case 0x4fa7e8:goto L4fa7e8;
case 0x4fa7ea:c.instructions+=2;goto B4fa7ea;
case 0x4fa7ec:c.instructions+=1;goto B4fa7ec;
case 0x4fa7f1:goto L4fa7f1;
case 0x4fa7f2:c.instructions+=3;goto B4fa7f2;
case 0x4fa7f3:c.instructions+=2;goto B4fa7f3;
case 0x4fa7f4:c.instructions+=1;goto B4fa7f4;
case 0x4fa7f7:goto L4fa7f7;
case 0x4fa7f8:c.instructions+=2;goto B4fa7f8;
case 0x4fa7fa:c.instructions+=1;goto B4fa7fa;
case 0x4fa7ff:goto L4fa7ff;
case 0x4fa801:c.instructions+=1;goto B4fa801;
case 0x4fa807:goto L4fa807;
case 0x4fa80b:c.instructions+=4;goto B4fa80b;
case 0x4fa80c:c.instructions+=3;goto B4fa80c;
case 0x4fa80d:c.instructions+=2;goto B4fa80d;
case 0x4fa80f:c.instructions+=1;goto B4fa80f;
case 0x4fa814:goto L4fa814;
case 0x4fa815:c.instructions+=3;goto B4fa815;
case 0x4fa816:c.instructions+=2;goto B4fa816;
case 0x4fa817:c.instructions+=1;goto B4fa817;
case 0x4fa81a:goto L4fa81a;
case 0x4fa81f:c.instructions+=1;goto B4fa81f;
case 0x4fa825:goto L4fa825;
case 0x4fa827:goto L4fa827;
case 0x4fa82c:c.instructions+=1;goto B4fa82c;
case 0x4fa82e:goto L4fa82e;
case 0x4fa833:c.instructions+=1;goto B4fa833;
case 0x4fa835:goto L4fa835;
case 0x4fa83a:c.instructions+=1;goto B4fa83a;
case 0x4fa840:goto L4fa840;
case 0x4fa843:c.instructions+=2;goto B4fa843;
case 0x4fa845:c.instructions+=1;goto B4fa845;
case 0x4fa84b:goto L4fa84b;
case 0x4fa84d:c.instructions+=1;goto B4fa84d;
case 0x4fa852:goto L4fa852;
case 0x4fa858:c.instructions+=2;goto B4fa858;
case 0x4fa85a:c.instructions+=1;goto B4fa85a;
case 0x4fa85f:goto L4fa85f;
case 0x4fa860:c.instructions+=3;goto B4fa860;
case 0x4fa861:c.instructions+=2;goto B4fa861;
case 0x4fa862:c.instructions+=1;goto B4fa862;
case 0x4fa865:goto L4fa865;
case 0x4fa868:c.instructions+=2;goto B4fa868;
case 0x4fa86a:c.instructions+=1;goto B4fa86a;
case 0x4fa870:goto L4fa870;
case 0x4fa877:c.instructions+=1;goto B4fa877;
case 0x4fa87d:goto L4fa87d;
case 0x4fa882:goto L4fa882;
case 0x4fa888:c.instructions+=2;goto B4fa888;
case 0x4fa88a:c.instructions+=1;goto B4fa88a;
case 0x4fa88f:goto L4fa88f;
case 0x4fa890:c.instructions+=3;goto B4fa890;
case 0x4fa891:c.instructions+=2;goto B4fa891;
case 0x4fa892:c.instructions+=1;goto B4fa892;
case 0x4fa895:goto L4fa895;
case 0x4fa898:c.instructions+=3;goto B4fa898;
case 0x4fa89a:c.instructions+=2;goto B4fa89a;
case 0x4fa8a0:c.instructions+=1;goto B4fa8a0;
case 0x4fa8a2:goto L4fa8a2;
case 0x4fa8a5:c.instructions+=1;goto B4fa8a5;
case 0x4fa8a7:goto L4fa8a7;
case 0x4fa8aa:c.instructions+=3;goto B4fa8aa;
case 0x4fa8af:c.instructions+=2;goto B4fa8af;
case 0x4fa8b0:c.instructions+=1;goto B4fa8b0;
case 0x4fa8b5:goto L4fa8b5;
case 0x4fa8b8:goto L4fa8b8;
case 0x4fa8bb:c.instructions+=2;goto B4fa8bb;
case 0x4fa8c0:c.instructions+=1;goto B4fa8c0;
case 0x4fa8c5:goto L4fa8c5;
case 0x4fa8c6:c.instructions+=2;goto B4fa8c6;
case 0x4fa8c7:c.instructions+=1;goto B4fa8c7;
case 0x4fa8cc:goto L4fa8cc;
case 0x4fa8cd:c.instructions+=1;goto B4fa8cd;
case 0x4fa8d2:goto L4fa8d2;
case 0x4fa8d5:c.instructions+=3;goto B4fa8d5;
case 0x4fa8da:c.instructions+=2;goto B4fa8da;
case 0x4fa8db:c.instructions+=1;goto B4fa8db;
case 0x4fa8e0:goto L4fa8e0;
case 0x4fa8e1:c.instructions+=1;goto B4fa8e1;
case 0x4fa8e6:goto L4fa8e6;
case 0x4fa8e9:c.instructions+=4;goto B4fa8e9;
case 0x4fa8ea:c.instructions+=3;goto B4fa8ea;
case 0x4fa8eb:c.instructions+=2;goto B4fa8eb;
case 0x4fa8ec:c.instructions+=1;goto B4fa8ec;
case 0x4fa8ef:goto L4fa8ef;
case 0x4fa8f2:c.instructions+=1;goto B4fa8f2;
case 0x4fa8f4:goto L4fa8f4;
case 0x4fa8f7:c.instructions+=3;goto B4fa8f7;
case 0x4fa8fc:c.instructions+=2;goto B4fa8fc;
case 0x4fa8fd:c.instructions+=1;goto B4fa8fd;
case 0x4fa902:goto L4fa902;
case 0x4fa905:goto L4fa905;
case 0x4fa908:c.instructions+=2;goto B4fa908;
case 0x4fa90d:c.instructions+=1;goto B4fa90d;
case 0x4fa912:goto L4fa912;
case 0x4fa913:c.instructions+=2;goto B4fa913;
case 0x4fa914:c.instructions+=1;goto B4fa914;
case 0x4fa919:goto L4fa919;
case 0x4fa91a:c.instructions+=1;goto B4fa91a;
case 0x4fa91f:goto L4fa91f;
case 0x4fa922:c.instructions+=3;goto B4fa922;
case 0x4fa927:c.instructions+=2;goto B4fa927;
case 0x4fa928:c.instructions+=1;goto B4fa928;
case 0x4fa92d:goto L4fa92d;
case 0x4fa92e:c.instructions+=1;goto B4fa92e;
case 0x4fa933:goto L4fa933;
case 0x4fa936:c.instructions+=4;goto B4fa936;
case 0x4fa937:c.instructions+=3;goto B4fa937;
case 0x4fa938:c.instructions+=2;goto B4fa938;
case 0x4fa939:c.instructions+=1;goto B4fa939;
case 0x4fa93c:goto L4fa93c;
case 0x4fa941:c.instructions+=1;goto B4fa941;
case 0x4fa943:goto L4fa943;
case 0x4fa948:c.instructions+=1;goto B4fa948;
case 0x4fa94a:goto L4fa94a;
case 0x4fa950:c.instructions+=2;goto B4fa950;
case 0x4fa952:c.instructions+=1;goto B4fa952;
case 0x4fa957:goto L4fa957;
case 0x4fa959:c.instructions+=1;goto B4fa959;
case 0x4fa95e:goto L4fa95e;
case 0x4fa95f:c.instructions+=3;goto B4fa95f;
case 0x4fa960:c.instructions+=2;goto B4fa960;
case 0x4fa961:c.instructions+=1;goto B4fa961;
case 0x4fa964:goto L4fa964;
case 0x4fa967:c.instructions+=2;goto B4fa967;
case 0x4fa968:c.instructions+=1;goto B4fa968;
case 0x4fa96d:goto L4fa96d;
case 0x4fa970:goto L4fa970;
case 0x4fa971:c.instructions+=3;goto B4fa971;
case 0x4fa972:c.instructions+=2;goto B4fa972;
case 0x4fa973:c.instructions+=1;goto B4fa973;
case 0x4fa990:goto L4fa990;
case 0x4fa992:c.instructions+=8;goto B4fa992;
case 0x4fa997:c.instructions+=7;goto B4fa997;
case 0x4fa99d:c.instructions+=6;goto B4fa99d;
case 0x4fa99e:c.instructions+=5;goto B4fa99e;
case 0x4fa9a5:c.instructions+=4;goto B4fa9a5;
case 0x4fa9a6:c.instructions+=3;goto B4fa9a6;
case 0x4fa9ab:c.instructions+=2;goto B4fa9ab;
case 0x4fa9b2:c.instructions+=1;goto B4fa9b2;
case 0x4fa9b7:goto L4fa9b7;
case 0x4fa9ba:c.instructions+=4;goto B4fa9ba;
case 0x4fa9be:c.instructions+=3;goto B4fa9be;
case 0x4fa9c0:c.instructions+=2;goto B4fa9c0;
case 0x4fa9c8:c.instructions+=1;goto B4fa9c8;
case 0x4fa9ca:goto L4fa9ca;
case 0x4fa9ce:c.instructions+=3;goto B4fa9ce;
case 0x4fa9cf:c.instructions+=2;goto B4fa9cf;
case 0x4fa9d1:c.instructions+=1;goto B4fa9d1;
case 0x4fa9d6:goto L4fa9d6;
case 0x4fa9da:c.instructions+=3;goto B4fa9da;
case 0x4fa9e1:c.instructions+=2;goto B4fa9e1;
case 0x4fa9e4:c.instructions+=1;goto B4fa9e4;
case 0x4fa9e5:goto L4fa9e5;
case 0x4fa9e9:c.instructions+=4;goto B4fa9e9;
case 0x4fa9eb:c.instructions+=3;goto B4fa9eb;
case 0x4fa9f2:c.instructions+=2;goto B4fa9f2;
case 0x4fa9f5:c.instructions+=1;goto B4fa9f5;
case 0x4faa00:goto L4faa00;
case 0x4faa07:c.instructions+=1;goto B4faa07;
case 0x4faa09:goto L4faa09;
case 0x4faa0e:c.instructions+=5;goto B4faa0e;
case 0x4faa10:c.instructions+=4;goto B4faa10;
case 0x4faa11:c.instructions+=3;goto B4faa11;
case 0x4faa1b:c.instructions+=2;goto B4faa1b;
case 0x4faa1e:c.instructions+=1;goto B4faa1e;
case 0x4faa20:goto L4faa20;
case 0x4faa21:c.instructions+=2;goto B4faa21;
case 0x4faa22:c.instructions+=1;goto B4faa22;
case 0x4faa27:goto L4faa27;
case 0x4faa2c:c.instructions+=5;goto B4faa2c;
case 0x4faa32:c.instructions+=4;goto B4faa32;
case 0x4faa33:c.instructions+=3;goto B4faa33;
case 0x4faa35:c.instructions+=2;goto B4faa35;
case 0x4faa37:c.instructions+=1;goto B4faa37;
case 0x4faa3c:goto L4faa3c;
case 0x4faa3e:c.instructions+=4;goto B4faa3e;
case 0x4faa3f:c.instructions+=3;goto B4faa3f;
case 0x4faa40:c.instructions+=2;goto B4faa40;
case 0x4faa43:c.instructions+=1;goto B4faa43;
case 0x4faa48:goto L4faa48;
case 0x4faa4b:c.instructions+=2;goto B4faa4b;
case 0x4faa4c:c.instructions+=1;goto B4faa4c;
case 0x4faa4d:goto L4faa4d;
case 0x4faa52:c.instructions+=2;goto B4faa52;
case 0x4faa53:c.instructions+=1;goto B4faa53;
case 0x4faa54:goto L4faa54;
case 0x4faa56:c.instructions+=1;goto B4faa56;
case 0x4faa60:goto L4faa60;
case 0x4faa63:c.instructions+=10;goto B4faa63;
case 0x4faa64:c.instructions+=9;goto B4faa64;
case 0x4faa65:c.instructions+=8;goto B4faa65;
case 0x4faa66:c.instructions+=7;goto B4faa66;
case 0x4faa68:c.instructions+=6;goto B4faa68;
case 0x4faa6b:c.instructions+=5;goto B4faa6b;
case 0x4faa6e:c.instructions+=4;goto B4faa6e;
case 0x4faa6f:c.instructions+=3;goto B4faa6f;
case 0x4faa70:c.instructions+=2;goto B4faa70;
case 0x4faa72:c.instructions+=1;goto B4faa72;
case 0x4faa77:goto L4faa77;
case 0x4faa79:c.instructions+=2;goto B4faa79;
case 0x4faa7b:c.instructions+=1;goto B4faa7b;
case 0x4faa80:goto L4faa80;
case 0x4faa86:c.instructions+=1;goto B4faa86;
case 0x4faa8b:goto L4faa8b;
case 0x4faa8d:c.instructions+=3;goto B4faa8d;
case 0x4faa92:c.instructions+=2;goto B4faa92;
case 0x4faa97:c.instructions+=1;goto B4faa97;
case 0x4faa9b:goto L4faa9b;
case 0x4faa9d:goto L4faa9d;
case 0x4faa9f:c.instructions+=5;goto B4faa9f;
case 0x4faaa0:c.instructions+=4;goto B4faaa0;
case 0x4faaa3:c.instructions+=3;goto B4faaa3;
case 0x4faaa4:c.instructions+=2;goto B4faaa4;
case 0x4faaa6:c.instructions+=1;goto B4faaa6;
case 0x4faaab:goto L4faaab;
case 0x4faaad:c.instructions+=6;goto B4faaad;
case 0x4faaae:c.instructions+=5;goto B4faaae;
case 0x4faab3:c.instructions+=4;goto B4faab3;
case 0x4faab7:c.instructions+=3;goto B4faab7;
case 0x4faab9:c.instructions+=2;goto B4faab9;
case 0x4faaba:c.instructions+=1;goto B4faaba;
case 0x4faabf:goto L4faabf;
case 0x4faac2:c.instructions+=3;goto B4faac2;
case 0x4faac6:c.instructions+=2;goto B4faac6;
case 0x4faac7:c.instructions+=1;goto B4faac7;
case 0x4faacc:goto L4faacc;
case 0x4faacd:c.instructions+=2;goto B4faacd;
case 0x4faace:c.instructions+=1;goto B4faace;
case 0x4faad3:goto L4faad3;
case 0x4faad4:c.instructions+=1;goto B4faad4;
case 0x4faad9:goto L4faad9;
case 0x4faadc:c.instructions+=2;goto B4faadc;
case 0x4faade:c.instructions+=1;goto B4faade;
case 0x4faae0:goto L4faae0;
case 0x4faae2:c.instructions+=1;goto B4faae2;
case 0x4faae4:goto L4faae4;
case 0x4faae7:c.instructions+=4;goto B4faae7;
case 0x4faae8:c.instructions+=3;goto B4faae8;
case 0x4faaed:c.instructions+=2;goto B4faaed;
case 0x4faaf7:c.instructions+=1;goto B4faaf7;
case 0x4faafc:goto L4faafc;
case 0x4faaff:goto L4faaff;
case 0x4fab03:c.instructions+=4;goto B4fab03;
case 0x4fab04:c.instructions+=3;goto B4fab04;
case 0x4fab08:c.instructions+=2;goto B4fab08;
case 0x4fab09:c.instructions+=1;goto B4fab09;
case 0x4fab0e:goto L4fab0e;
case 0x4fab14:c.instructions+=7;goto B4fab14;
case 0x4fab18:c.instructions+=6;goto B4fab18;
case 0x4fab1c:c.instructions+=5;goto B4fab1c;
case 0x4fab22:c.instructions+=4;goto B4fab22;
case 0x4fab23:c.instructions+=3;goto B4fab23;
case 0x4fab24:c.instructions+=2;goto B4fab24;
case 0x4fab25:c.instructions+=1;goto B4fab25;
case 0x4fab2a:goto L4fab2a;
case 0x4fab2d:c.instructions+=2;goto B4fab2d;
case 0x4fab2f:c.instructions+=1;goto B4fab2f;
case 0x4fab31:goto L4fab31;
case 0x4fab37:c.instructions+=2;goto B4fab37;
case 0x4fab41:c.instructions+=1;goto B4fab41;
case 0x4fab46:goto L4fab46;
case 0x4fab4c:c.instructions+=6;goto B4fab4c;
case 0x4fab50:c.instructions+=5;goto B4fab50;
case 0x4fab54:c.instructions+=4;goto B4fab54;
case 0x4fab55:c.instructions+=3;goto B4fab55;
case 0x4fab56:c.instructions+=2;goto B4fab56;
case 0x4fab57:c.instructions+=1;goto B4fab57;
case 0x4fab5c:goto L4fab5c;
case 0x4fab5f:c.instructions+=2;goto B4fab5f;
case 0x4fab61:c.instructions+=1;goto B4fab61;
case 0x4fab63:goto L4fab63;
case 0x4fab69:c.instructions+=3;goto B4fab69;
case 0x4fab6f:c.instructions+=2;goto B4fab6f;
case 0x4fab79:c.instructions+=1;goto B4fab79;
case 0x4fab7b:goto L4fab7b;
case 0x4fab81:c.instructions+=6;goto B4fab81;
case 0x4fab85:c.instructions+=5;goto B4fab85;
case 0x4fab89:c.instructions+=4;goto B4fab89;
case 0x4fab8a:c.instructions+=3;goto B4fab8a;
case 0x4fab8b:c.instructions+=2;goto B4fab8b;
case 0x4fab8c:c.instructions+=1;goto B4fab8c;
case 0x4fab91:goto L4fab91;
case 0x4fab94:c.instructions+=2;goto B4fab94;
case 0x4fab96:c.instructions+=1;goto B4fab96;
case 0x4fab98:goto L4fab98;
case 0x4fab9e:c.instructions+=3;goto B4fab9e;
case 0x4faba4:c.instructions+=2;goto B4faba4;
case 0x4fabae:c.instructions+=1;goto B4fabae;
case 0x4fabb0:goto L4fabb0;
case 0x4fabb6:c.instructions+=6;goto B4fabb6;
case 0x4fabba:c.instructions+=5;goto B4fabba;
case 0x4fabbe:c.instructions+=4;goto B4fabbe;
case 0x4fabbf:c.instructions+=3;goto B4fabbf;
case 0x4fabc0:c.instructions+=2;goto B4fabc0;
case 0x4fabc1:c.instructions+=1;goto B4fabc1;
case 0x4fabc6:goto L4fabc6;
case 0x4fabc9:c.instructions+=2;goto B4fabc9;
case 0x4fabcb:c.instructions+=1;goto B4fabcb;
case 0x4fabcd:goto L4fabcd;
case 0x4fabd3:c.instructions+=1;goto B4fabd3;
case 0x4fabdd:goto L4fabdd;
case 0x4fabe3:goto L4fabe3;
case 0x4fabe9:c.instructions+=1;goto B4fabe9;
case 0x4fabeb:goto L4fabeb;
case 0x4fabed:c.instructions+=1;goto B4fabed;
case 0x4fabef:goto L4fabef;
case 0x4fabf1:c.instructions+=3;goto B4fabf1;
case 0x4fabf6:c.instructions+=2;goto B4fabf6;
case 0x4fabf7:c.instructions+=1;goto B4fabf7;
case 0x4fabfc:goto L4fabfc;
case 0x4fabff:goto L4fabff;
case 0x4fac05:c.instructions+=4;goto B4fac05;
case 0x4fac07:c.instructions+=3;goto B4fac07;
case 0x4fac0c:c.instructions+=2;goto B4fac0c;
case 0x4fac0d:c.instructions+=1;goto B4fac0d;
case 0x4fac12:goto L4fac12;
case 0x4fac18:c.instructions+=4;goto B4fac18;
case 0x4fac1b:c.instructions+=3;goto B4fac1b;
case 0x4fac1c:c.instructions+=2;goto B4fac1c;
case 0x4fac1d:c.instructions+=1;goto B4fac1d;
case 0x4fac22:goto L4fac22;
case 0x4fac25:goto L4fac25;
case 0x4fac2a:c.instructions+=3;goto B4fac2a;
case 0x4fac2c:c.instructions+=2;goto B4fac2c;
case 0x4fac33:c.instructions+=1;goto B4fac33;
case 0x4fac35:goto L4fac35;
case 0x4fac3c:goto L4fac3c;
case 0x4fac3e:c.instructions+=1;goto B4fac3e;
case 0x4fac44:goto L4fac44;
case 0x4fac4a:c.instructions+=2;goto B4fac4a;
case 0x4fac4b:c.instructions+=1;goto B4fac4b;
case 0x4fac50:goto L4fac50;
case 0x4fac53:c.instructions+=2;goto B4fac53;
case 0x4fac55:c.instructions+=1;goto B4fac55;
case 0x4fac57:goto L4fac57;
case 0x4fac59:c.instructions+=1;goto B4fac59;
case 0x4fac5e:goto L4fac5e;
case 0x4fac60:goto L4fac60;
case 0x4fac66:c.instructions+=2;goto B4fac66;
case 0x4fac67:c.instructions+=1;goto B4fac67;
case 0x4fac6c:goto L4fac6c;
case 0x4fac6f:c.instructions+=2;goto B4fac6f;
case 0x4fac71:c.instructions+=1;goto B4fac71;
case 0x4fac73:goto L4fac73;
case 0x4fac7a:c.instructions+=2;goto B4fac7a;
case 0x4fac7c:c.instructions+=1;goto B4fac7c;
case 0x4fac7e:goto L4fac7e;
case 0x4fac84:c.instructions+=2;goto B4fac84;
case 0x4fac8e:c.instructions+=1;goto B4fac8e;
case 0x4fac94:goto L4fac94;
case 0x4fac99:goto L4fac99;
case 0x4fac9c:c.instructions+=3;goto B4fac9c;
case 0x4faca1:c.instructions+=2;goto B4faca1;
case 0x4faca2:c.instructions+=1;goto B4faca2;
case 0x4faca7:goto L4faca7;
case 0x4faca9:c.instructions+=4;goto B4faca9;
case 0x4facac:c.instructions+=3;goto B4facac;
case 0x4facb1:c.instructions+=2;goto B4facb1;
case 0x4facb2:c.instructions+=1;goto B4facb2;
case 0x4facb7:goto L4facb7;
case 0x4facb8:c.instructions+=2;goto B4facb8;
case 0x4facba:c.instructions+=1;goto B4facba;
case 0x4facbf:goto L4facbf;
case 0x4facc2:c.instructions+=2;goto B4facc2;
case 0x4facc4:c.instructions+=1;goto B4facc4;
case 0x4facc6:goto L4facc6;
case 0x4facc7:c.instructions+=1;goto B4facc7;
case 0x4faccc:goto L4faccc;
case 0x4faccf:c.instructions+=2;goto B4faccf;
case 0x4facd1:c.instructions+=1;goto B4facd1;
case 0x4facd7:goto L4facd7;
case 0x4facdd:c.instructions+=3;goto B4facdd;
case 0x4facdf:c.instructions+=2;goto B4facdf;
case 0x4face1:c.instructions+=1;goto B4face1;
case 0x4face7:goto L4face7;
case 0x4facec:c.instructions+=1;goto B4facec;
case 0x4facf1:goto L4facf1;
case 0x4facf7:c.instructions+=2;goto B4facf7;
case 0x4facf8:c.instructions+=1;goto B4facf8;
case 0x4facfd:goto L4facfd;
case 0x4fad00:c.instructions+=2;goto B4fad00;
case 0x4fad02:c.instructions+=1;goto B4fad02;
case 0x4fad04:goto L4fad04;
case 0x4fad06:c.instructions+=1;goto B4fad06;
case 0x4fad0b:goto L4fad0b;
case 0x4fad0d:goto L4fad0d;
case 0x4fad13:c.instructions+=2;goto B4fad13;
case 0x4fad14:c.instructions+=1;goto B4fad14;
case 0x4fad19:goto L4fad19;
case 0x4fad1c:c.instructions+=2;goto B4fad1c;
case 0x4fad1e:c.instructions+=1;goto B4fad1e;
case 0x4fad20:goto L4fad20;
case 0x4fad23:c.instructions+=4;goto B4fad23;
case 0x4fad25:c.instructions+=3;goto B4fad25;
case 0x4fad2a:c.instructions+=2;goto B4fad2a;
case 0x4fad2b:c.instructions+=1;goto B4fad2b;
case 0x4fad30:goto L4fad30;
case 0x4fad33:c.instructions+=1;goto B4fad33;
case 0x4fad38:goto L4fad38;
case 0x4fad3e:c.instructions+=2;goto B4fad3e;
case 0x4fad3f:c.instructions+=1;goto B4fad3f;
case 0x4fad44:goto L4fad44;
case 0x4fad47:c.instructions+=2;goto B4fad47;
case 0x4fad49:c.instructions+=1;goto B4fad49;
case 0x4fad4b:goto L4fad4b;
case 0x4fad4e:c.instructions+=3;goto B4fad4e;
case 0x4fad4f:c.instructions+=2;goto B4fad4f;
case 0x4fad54:c.instructions+=1;goto B4fad54;
case 0x4fad59:goto L4fad59;
case 0x4fad5c:c.instructions+=5;goto B4fad5c;
case 0x4fad5e:c.instructions+=4;goto B4fad5e;
case 0x4fad63:c.instructions+=3;goto B4fad63;
case 0x4fad68:c.instructions+=2;goto B4fad68;
case 0x4fad69:c.instructions+=1;goto B4fad69;
case 0x4fad6e:goto L4fad6e;
case 0x4fad71:c.instructions+=6;goto B4fad71;
case 0x4fad72:c.instructions+=5;goto B4fad72;
case 0x4fad73:c.instructions+=4;goto B4fad73;
case 0x4fad74:c.instructions+=3;goto B4fad74;
case 0x4fad75:c.instructions+=2;goto B4fad75;
case 0x4fad78:c.instructions+=1;goto B4fad78;
case 0x4fad79:goto L4fad79;
case 0x4fad7f:c.instructions+=2;goto B4fad7f;
case 0x4fad80:c.instructions+=1;goto B4fad80;
case 0x4fad85:goto L4fad85;
case 0x4fad88:c.instructions+=2;goto B4fad88;
case 0x4fad8a:c.instructions+=1;goto B4fad8a;
case 0x4fad90:goto L4fad90;
case 0x4fad93:c.instructions+=3;goto B4fad93;
case 0x4fad94:c.instructions+=2;goto B4fad94;
case 0x4fad99:c.instructions+=1;goto B4fad99;
case 0x4fad9e:goto L4fad9e;
case 0x4fada1:c.instructions+=5;goto B4fada1;
case 0x4fada3:c.instructions+=4;goto B4fada3;
case 0x4fada8:c.instructions+=3;goto B4fada8;
case 0x4fadad:c.instructions+=2;goto B4fadad;
case 0x4fadae:c.instructions+=1;goto B4fadae;
case 0x4fadb3:goto L4fadb3;
case 0x4fadb6:c.instructions+=6;goto B4fadb6;
case 0x4fadb7:c.instructions+=5;goto B4fadb7;
case 0x4fadb8:c.instructions+=4;goto B4fadb8;
case 0x4fadb9:c.instructions+=3;goto B4fadb9;
case 0x4fadba:c.instructions+=2;goto B4fadba;
case 0x4fadbd:c.instructions+=1;goto B4fadbd;
case 0x4fadbe:goto L4fadbe;
case 0x4fadc3:goto L4fadc3;
case 0x4fadc4:c.instructions+=1;goto B4fadc4;
case 0x4fadc9:goto L4fadc9;
case 0x4fadcf:c.instructions+=8;goto B4fadcf;
case 0x4fadd5:c.instructions+=7;goto B4fadd5;
case 0x4fadd8:c.instructions+=6;goto B4fadd8;
case 0x4fadda:c.instructions+=5;goto B4fadda;
case 0x4faddd:c.instructions+=4;goto B4faddd;
case 0x4fade3:c.instructions+=3;goto B4fade3;
case 0x4fade4:c.instructions+=2;goto B4fade4;
case 0x4fade6:c.instructions+=1;goto B4fade6;
case 0x4fadeb:goto L4fadeb;
case 0x4fadee:c.instructions+=3;goto B4fadee;
case 0x4fadf3:c.instructions+=2;goto B4fadf3;
case 0x4fadf4:c.instructions+=1;goto B4fadf4;
case 0x4fadf9:goto L4fadf9;
case 0x4fadfb:c.instructions+=4;goto B4fadfb;
case 0x4fadfe:c.instructions+=3;goto B4fadfe;
case 0x4fae03:c.instructions+=2;goto B4fae03;
case 0x4fae04:c.instructions+=1;goto B4fae04;
case 0x4fae09:goto L4fae09;
case 0x4fae0a:c.instructions+=2;goto B4fae0a;
case 0x4fae0c:c.instructions+=1;goto B4fae0c;
case 0x4fae11:goto L4fae11;
case 0x4fae14:c.instructions+=2;goto B4fae14;
case 0x4fae16:c.instructions+=1;goto B4fae16;
case 0x4fae18:goto L4fae18;
case 0x4fae19:c.instructions+=1;goto B4fae19;
case 0x4fae1e:goto L4fae1e;
case 0x4fae21:c.instructions+=2;goto B4fae21;
case 0x4fae23:c.instructions+=1;goto B4fae23;
case 0x4fae25:goto L4fae25;
case 0x4fae2b:c.instructions+=3;goto B4fae2b;
case 0x4fae2d:c.instructions+=2;goto B4fae2d;
case 0x4fae2f:c.instructions+=1;goto B4fae2f;
case 0x4fae31:goto L4fae31;
case 0x4fae36:c.instructions+=1;goto B4fae36;
case 0x4fae38:goto L4fae38;
case 0x4fae3d:goto L4fae3d;
case 0x4fae3e:c.instructions+=1;goto B4fae3e;
case 0x4fae43:goto L4fae43;
case 0x4fae49:c.instructions+=8;goto B4fae49;
case 0x4fae4f:c.instructions+=7;goto B4fae4f;
case 0x4fae52:c.instructions+=6;goto B4fae52;
case 0x4fae54:c.instructions+=5;goto B4fae54;
case 0x4fae57:c.instructions+=4;goto B4fae57;
case 0x4fae5d:c.instructions+=3;goto B4fae5d;
case 0x4fae5e:c.instructions+=2;goto B4fae5e;
case 0x4fae60:c.instructions+=1;goto B4fae60;
case 0x4fae65:goto L4fae65;
case 0x4fae68:c.instructions+=3;goto B4fae68;
case 0x4fae6d:c.instructions+=2;goto B4fae6d;
case 0x4fae6e:c.instructions+=1;goto B4fae6e;
case 0x4fae73:goto L4fae73;
case 0x4fae75:c.instructions+=4;goto B4fae75;
case 0x4fae78:c.instructions+=3;goto B4fae78;
case 0x4fae7d:c.instructions+=2;goto B4fae7d;
case 0x4fae7e:c.instructions+=1;goto B4fae7e;
case 0x4fae83:goto L4fae83;
case 0x4fae84:c.instructions+=2;goto B4fae84;
case 0x4fae86:c.instructions+=1;goto B4fae86;
case 0x4fae8b:goto L4fae8b;
case 0x4fae8e:c.instructions+=2;goto B4fae8e;
case 0x4fae90:c.instructions+=1;goto B4fae90;
case 0x4fae92:goto L4fae92;
case 0x4fae93:c.instructions+=1;goto B4fae93;
case 0x4fae98:goto L4fae98;
case 0x4fae9b:c.instructions+=2;goto B4fae9b;
case 0x4fae9d:c.instructions+=1;goto B4fae9d;
case 0x4fae9f:goto L4fae9f;
case 0x4faea5:c.instructions+=3;goto B4faea5;
case 0x4faea7:c.instructions+=2;goto B4faea7;
case 0x4faea9:c.instructions+=1;goto B4faea9;
case 0x4faeab:goto L4faeab;
case 0x4faeb0:c.instructions+=1;goto B4faeb0;
case 0x4faeb2:goto L4faeb2;
case 0x4faeb7:goto L4faeb7;
case 0x4faeb8:c.instructions+=1;goto B4faeb8;
case 0x4faebd:goto L4faebd;
case 0x4faec3:c.instructions+=8;goto B4faec3;
case 0x4faec9:c.instructions+=7;goto B4faec9;
case 0x4faecc:c.instructions+=6;goto B4faecc;
case 0x4faece:c.instructions+=5;goto B4faece;
case 0x4faed1:c.instructions+=4;goto B4faed1;
case 0x4faed7:c.instructions+=3;goto B4faed7;
case 0x4faed8:c.instructions+=2;goto B4faed8;
case 0x4faeda:c.instructions+=1;goto B4faeda;
case 0x4faedf:goto L4faedf;
case 0x4faee2:c.instructions+=3;goto B4faee2;
case 0x4faee7:c.instructions+=2;goto B4faee7;
case 0x4faee8:c.instructions+=1;goto B4faee8;
case 0x4faeed:goto L4faeed;
case 0x4faeef:c.instructions+=4;goto B4faeef;
case 0x4faef2:c.instructions+=3;goto B4faef2;
case 0x4faef7:c.instructions+=2;goto B4faef7;
case 0x4faef8:c.instructions+=1;goto B4faef8;
case 0x4faefd:goto L4faefd;
case 0x4faefe:c.instructions+=2;goto B4faefe;
case 0x4faf00:c.instructions+=1;goto B4faf00;
case 0x4faf05:goto L4faf05;
case 0x4faf08:c.instructions+=2;goto B4faf08;
case 0x4faf0a:c.instructions+=1;goto B4faf0a;
case 0x4faf0c:goto L4faf0c;
case 0x4faf0d:c.instructions+=1;goto B4faf0d;
case 0x4faf12:goto L4faf12;
case 0x4faf15:c.instructions+=2;goto B4faf15;
case 0x4faf17:c.instructions+=1;goto B4faf17;
case 0x4faf19:goto L4faf19;
case 0x4faf1f:c.instructions+=3;goto B4faf1f;
case 0x4faf21:c.instructions+=2;goto B4faf21;
case 0x4faf23:c.instructions+=1;goto B4faf23;
case 0x4faf25:goto L4faf25;
case 0x4faf2a:c.instructions+=1;goto B4faf2a;
case 0x4faf2c:goto L4faf2c;
case 0x4faf31:goto L4faf31;
case 0x4faf32:c.instructions+=1;goto B4faf32;
case 0x4faf37:goto L4faf37;
case 0x4faf3d:c.instructions+=8;goto B4faf3d;
case 0x4faf43:c.instructions+=7;goto B4faf43;
case 0x4faf46:c.instructions+=6;goto B4faf46;
case 0x4faf48:c.instructions+=5;goto B4faf48;
case 0x4faf4b:c.instructions+=4;goto B4faf4b;
case 0x4faf51:c.instructions+=3;goto B4faf51;
case 0x4faf52:c.instructions+=2;goto B4faf52;
case 0x4faf54:c.instructions+=1;goto B4faf54;
case 0x4faf59:goto L4faf59;
case 0x4faf5c:c.instructions+=3;goto B4faf5c;
case 0x4faf61:c.instructions+=2;goto B4faf61;
case 0x4faf62:c.instructions+=1;goto B4faf62;
case 0x4faf67:goto L4faf67;
case 0x4faf69:c.instructions+=4;goto B4faf69;
case 0x4faf6c:c.instructions+=3;goto B4faf6c;
case 0x4faf71:c.instructions+=2;goto B4faf71;
case 0x4faf72:c.instructions+=1;goto B4faf72;
case 0x4faf77:goto L4faf77;
case 0x4faf78:c.instructions+=2;goto B4faf78;
case 0x4faf7a:c.instructions+=1;goto B4faf7a;
case 0x4faf7f:goto L4faf7f;
case 0x4faf82:c.instructions+=2;goto B4faf82;
case 0x4faf84:c.instructions+=1;goto B4faf84;
case 0x4faf86:goto L4faf86;
case 0x4faf87:c.instructions+=1;goto B4faf87;
case 0x4faf8c:goto L4faf8c;
case 0x4faf8f:c.instructions+=2;goto B4faf8f;
case 0x4faf91:c.instructions+=1;goto B4faf91;
case 0x4faf93:goto L4faf93;
case 0x4faf99:c.instructions+=3;goto B4faf99;
case 0x4faf9b:c.instructions+=2;goto B4faf9b;
case 0x4faf9d:c.instructions+=1;goto B4faf9d;
case 0x4faf9f:goto L4faf9f;
case 0x4fafa4:c.instructions+=1;goto B4fafa4;
case 0x4fafa6:goto L4fafa6;
case 0x4fafab:goto L4fafab;
case 0x4fafac:c.instructions+=1;goto B4fafac;
case 0x4fafb1:goto L4fafb1;
case 0x4fafb7:c.instructions+=8;goto B4fafb7;
case 0x4fafbd:c.instructions+=7;goto B4fafbd;
case 0x4fafc0:c.instructions+=6;goto B4fafc0;
case 0x4fafc2:c.instructions+=5;goto B4fafc2;
case 0x4fafc5:c.instructions+=4;goto B4fafc5;
case 0x4fafcb:c.instructions+=3;goto B4fafcb;
case 0x4fafcc:c.instructions+=2;goto B4fafcc;
case 0x4fafce:c.instructions+=1;goto B4fafce;
case 0x4fafd3:goto L4fafd3;
case 0x4fafd6:c.instructions+=3;goto B4fafd6;
case 0x4fafdb:c.instructions+=2;goto B4fafdb;
case 0x4fafdc:c.instructions+=1;goto B4fafdc;
case 0x4fafe1:goto L4fafe1;
case 0x4fafe2:c.instructions+=1;goto B4fafe2;
case 0x4fafe7:goto L4fafe7;
case 0x4fafea:c.instructions+=2;goto B4fafea;
case 0x4fafec:c.instructions+=1;goto B4fafec;
case 0x4fafee:goto L4fafee;
case 0x4faff3:c.instructions+=3;goto B4faff3;
case 0x4faff9:c.instructions+=2;goto B4faff9;
case 0x4faffd:c.instructions+=1;goto B4faffd;
default:missing_instruction(c.pc);}
B4fa003:L4fa003:{c.instructions+=1;NFSU2_TR(0x4fa003);
{goto L4fa04b;}
}
B4fa005:L4fa005:{c.instructions+=2;NFSU2_TR(0x4fa005);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fa00b:{NFSU2_TR(0x4fa00b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa04b;}}
}
B4fa00d:L4fa00d:{c.instructions+=4;NFSU2_TR(0x4fa00d);
__builtin_memmove((R+4),gp(0x83aab8),4);
}
B4fa013:{NFSU2_TR(0x4fa013);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa014:{NFSU2_TR(0x4fa014);
w4(R+4,u32(0x83ad90ull));
}
B4fa019:{NFSU2_TR(0x4fa019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa01eull));
TAIL_STATIC(0x503510u,503);
}
B4fa01e:L4fa01e:{c.instructions+=3;NFSU2_TR(0x4fa01e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa01f:{NFSU2_TR(0x4fa01f);
__builtin_memmove((R+4),(R+24),4);
}
B4fa021:{NFSU2_TR(0x4fa021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa026ull));
TAIL_STATIC(0x497f20u,497);
}
B4fa026:L4fa026:{c.instructions+=1;NFSU2_TR(0x4fa026);
{goto L4fa04b;}
}
B4fa028:L4fa028:{c.instructions+=6;NFSU2_TR(0x4fa028);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1a11990ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fa02f:{NFSU2_TR(0x4fa02f);
__builtin_memmove((R+8),gp(0x85ad28),4);
}
B4fa035:{NFSU2_TR(0x4fa035);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4fa03b:{NFSU2_TR(0x4fa03b);
w4(R+0,u32(0x1ull));
}
B4fa040:{NFSU2_TR(0x4fa040);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa046:{NFSU2_TR(0x4fa046);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4fa04b:L4fa04b:{c.instructions+=4;NFSU2_TR(0x4fa04b);
__builtin_memmove((R+0),gp(0x83aab8),4);
}
B4fa050:{NFSU2_TR(0x4fa050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa056:{NFSU2_TR(0x4fa056);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fa05c:{NFSU2_TR(0x4fa05c);
if(r1(R+518)){{goto L4fa08f;}}
}
B4fa05e:L4fa05e:{c.instructions+=4;NFSU2_TR(0x4fa05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa061:{NFSU2_TR(0x4fa061);
u8 U[4];
w4(U+0,u32(0x7976fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa066:{NFSU2_TR(0x4fa066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa067:{NFSU2_TR(0x4fa067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa06cull));
TAIL_STATIC(0x43dc30u,43d);
}
B4fa06c:L4fa06c:{c.instructions+=3;NFSU2_TR(0x4fa06c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fa06f:{NFSU2_TR(0x4fa06f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa071:{NFSU2_TR(0x4fa071);
if(r1(R+518)){{goto L4fa08f;}}
}
B4fa073:L4fa073:{c.instructions+=3;NFSU2_TR(0x4fa073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fa076:{NFSU2_TR(0x4fa076);
u8 U[4];
w4(U+0,u32(0x797fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa07b:{NFSU2_TR(0x4fa07b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa080ull));
TAIL_STATIC(0x505450u,505);
}
B4fa080:L4fa080:{c.instructions+=3;NFSU2_TR(0x4fa080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa081:{NFSU2_TR(0x4fa081);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa082:{NFSU2_TR(0x4fa082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa087ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa087:L4fa087:{c.instructions+=2;NFSU2_TR(0x4fa087);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa088:{NFSU2_TR(0x4fa088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa08dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fa08d:L4fa08d:{c.instructions+=1;NFSU2_TR(0x4fa08d);
{goto L4fa0a9;}
}
B4fa08f:L4fa08f:{c.instructions+=3;NFSU2_TR(0x4fa08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fa092:{NFSU2_TR(0x4fa092);
u8 U[4];
w4(U+0,u32(0x797fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa097:{NFSU2_TR(0x4fa097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa09cull));
TAIL_STATIC(0x505450u,505);
}
B4fa09c:L4fa09c:{c.instructions+=3;NFSU2_TR(0x4fa09c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa09d:{NFSU2_TR(0x4fa09d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa09e:{NFSU2_TR(0x4fa09e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa0a3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa0a3:L4fa0a3:{c.instructions+=2;NFSU2_TR(0x4fa0a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa0a4:{NFSU2_TR(0x4fa0a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa0a9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4fa0a9:L4fa0a9:{c.instructions+=3;NFSU2_TR(0x4fa0a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fa0ac:{NFSU2_TR(0x4fa0ac);
__builtin_memmove((R+4),(R+24),4);
}
B4fa0ae:{NFSU2_TR(0x4fa0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa0b3ull));
TAIL_STATIC(0x4eeb90u,4ee);
}
B4fa0b3:L4fa0b3:{c.instructions+=5;NFSU2_TR(0x4fa0b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4fa0b5:{NFSU2_TR(0x4fa0b5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fa0b7:{NFSU2_TR(0x4fa0b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fa0bb:{NFSU2_TR(0x4fa0bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fa0bc:{NFSU2_TR(0x4fa0bc);
if(r1(R+518)){{goto L4fa0c3;}}
}
B4fa0be:L4fa0be:{c.instructions+=2;NFSU2_TR(0x4fa0be);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fa0c1:{NFSU2_TR(0x4fa0c1);
{goto L4fa0c5;}
}
B4fa0c3:L4fa0c3:{c.instructions+=1;NFSU2_TR(0x4fa0c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fa0c5:L4fa0c5:{c.instructions+=5;NFSU2_TR(0x4fa0c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fa0c8:{NFSU2_TR(0x4fa0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa0cb:{NFSU2_TR(0x4fa0cb);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa0d0:{NFSU2_TR(0x4fa0d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa0d1:{NFSU2_TR(0x4fa0d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa0e6;}}
}
B4fa0d3:L4fa0d3:{c.instructions+=1;NFSU2_TR(0x4fa0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa0d8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa0d8:L4fa0d8:{c.instructions+=2;NFSU2_TR(0x4fa0d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa0d9:{NFSU2_TR(0x4fa0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa0deull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fa0de:L4fa0de:{c.instructions+=2;NFSU2_TR(0x4fa0de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fa0e4:{NFSU2_TR(0x4fa0e4);
{goto L4fa0f8;}
}
B4fa0e6:L4fa0e6:{c.instructions+=1;NFSU2_TR(0x4fa0e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa0ebull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa0eb:L4fa0eb:{c.instructions+=2;NFSU2_TR(0x4fa0eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa0ec:{NFSU2_TR(0x4fa0ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa0f1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4fa0f1:L4fa0f1:{c.instructions+=1;NFSU2_TR(0x4fa0f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fa0f8:L4fa0f8:{c.instructions+=4;NFSU2_TR(0x4fa0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa0fb:{NFSU2_TR(0x4fa0fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fa0fe:{NFSU2_TR(0x4fa0fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fa100:{NFSU2_TR(0x4fa100);
if(r1(R+518)){{goto L4fa107;}}
}
B4fa102:L4fa102:{c.instructions+=2;NFSU2_TR(0x4fa102);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4fa105:{NFSU2_TR(0x4fa105);
{goto L4fa109;}
}
B4fa107:L4fa107:{c.instructions+=1;NFSU2_TR(0x4fa107);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fa109:L4fa109:{c.instructions+=5;NFSU2_TR(0x4fa109);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fa10c:{NFSU2_TR(0x4fa10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa10f:{NFSU2_TR(0x4fa10f);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa114:{NFSU2_TR(0x4fa114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa115:{NFSU2_TR(0x4fa115);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa12a;}}
}
B4fa117:L4fa117:{c.instructions+=1;NFSU2_TR(0x4fa117);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa11cull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa11c:L4fa11c:{c.instructions+=2;NFSU2_TR(0x4fa11c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa11d:{NFSU2_TR(0x4fa11d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa122ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fa122:L4fa122:{c.instructions+=2;NFSU2_TR(0x4fa122);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fa128:{NFSU2_TR(0x4fa128);
{goto L4fa13c;}
}
B4fa12a:L4fa12a:{c.instructions+=1;NFSU2_TR(0x4fa12a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa12full));
TAIL_STATIC(0x5379c0u,537);
}
B4fa12f:L4fa12f:{c.instructions+=2;NFSU2_TR(0x4fa12f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa130:{NFSU2_TR(0x4fa130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa135ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4fa135:L4fa135:{c.instructions+=1;NFSU2_TR(0x4fa135);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fa13c:L4fa13c:{c.instructions+=5;NFSU2_TR(0x4fa13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa13f:{NFSU2_TR(0x4fa13f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fa142:{NFSU2_TR(0x4fa142);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa147:{NFSU2_TR(0x4fa147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa148:{NFSU2_TR(0x4fa148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa14dull));
TAIL_STATIC(0x537a60u,537);
}
B4fa14d:L4fa14d:{c.instructions+=5;NFSU2_TR(0x4fa14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa153:{NFSU2_TR(0x4fa153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa156:{NFSU2_TR(0x4fa156);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa15b:{NFSU2_TR(0x4fa15b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa15c:{NFSU2_TR(0x4fa15c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa161ull));
TAIL_STATIC(0x537a60u,537);
}
B4fa161:L4fa161:{c.instructions+=11;NFSU2_TR(0x4fa161);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa165:{NFSU2_TR(0x4fa165);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fa168:{NFSU2_TR(0x4fa168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa16e:{NFSU2_TR(0x4fa16e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa16f:{NFSU2_TR(0x4fa16f);
__builtin_memmove((R+0),(R+24),4);
}
B4fa171:{NFSU2_TR(0x4fa171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa172:{NFSU2_TR(0x4fa172);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B4fa178:{NFSU2_TR(0x4fa178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa179:{NFSU2_TR(0x4fa179);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa180:{NFSU2_TR(0x4fa180);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa183:{NFSU2_TR(0x4fa183);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa2a0:L4fa2a0:{c.instructions+=15;NFSU2_TR(0x4fa2a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2a1:{NFSU2_TR(0x4fa2a1);
__builtin_memmove((R+20),(R+16),4);
}
B4fa2a3:{NFSU2_TR(0x4fa2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa2a6:{NFSU2_TR(0x4fa2a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2a7:{NFSU2_TR(0x4fa2a7);
__builtin_memmove((R+24),(R+4),4);
}
B4fa2a9:{NFSU2_TR(0x4fa2a9);
__builtin_memmove((R+4),(R+0),4);
}
B4fa2ab:{NFSU2_TR(0x4fa2ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4fa2b1:{NFSU2_TR(0x4fa2b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa2b3:{NFSU2_TR(0x4fa2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa2b6:{NFSU2_TR(0x4fa2b6);
__builtin_memmove(gp(0x85ad28),(R+0),4);
}
B4fa2bb:{NFSU2_TR(0x4fa2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fa2c1:{NFSU2_TR(0x4fa2c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2c2:{NFSU2_TR(0x4fa2c2);
__builtin_memmove(gp(0x7f444c),(R+8),4);
}
B4fa2c8:{NFSU2_TR(0x4fa2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fa2cb:{NFSU2_TR(0x4fa2cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa2f4;}}
}
B4fa2cd:L4fa2cd:{c.instructions+=3;NFSU2_TR(0x4fa2cd);
u8 U[4];
w4(U+0,u32(0xd87133bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2d2:{NFSU2_TR(0x4fa2d2);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2d7:{NFSU2_TR(0x4fa2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa2dcull));
TAIL_STATIC(0x505450u,505);
}
B4fa2dc:L4fa2dc:{c.instructions+=3;NFSU2_TR(0x4fa2dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2dd:{NFSU2_TR(0x4fa2dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2de:{NFSU2_TR(0x4fa2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa2e3ull));
TAIL_STATIC(0x537a10u,537);
}
B4fa2e3:L4fa2e3:{c.instructions+=3;NFSU2_TR(0x4fa2e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fa2e6:{NFSU2_TR(0x4fa2e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2e7:{NFSU2_TR(0x4fa2e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa2ecull));
TAIL_STATIC(0x50c900u,50c);
}
B4fa2ec:L4fa2ec:{c.instructions+=4;NFSU2_TR(0x4fa2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa2ef:{NFSU2_TR(0x4fa2ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2f1:{NFSU2_TR(0x4fa2f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2f2:{NFSU2_TR(0x4fa2f2);
{goto L4fa319;}
}
B4fa2f4:L4fa2f4:{c.instructions+=3;NFSU2_TR(0x4fa2f4);
u8 U[4];
w4(U+0,u32(0xd87133bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2f9:{NFSU2_TR(0x4fa2f9);
u8 U[4];
w4(U+0,u32(0x78f844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa2fe:{NFSU2_TR(0x4fa2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa303ull));
TAIL_STATIC(0x505450u,505);
}
B4fa303:L4fa303:{c.instructions+=3;NFSU2_TR(0x4fa303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa304:{NFSU2_TR(0x4fa304);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa305:{NFSU2_TR(0x4fa305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa30aull));
TAIL_STATIC(0x537a10u,537);
}
B4fa30a:L4fa30a:{c.instructions+=3;NFSU2_TR(0x4fa30a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fa30d:{NFSU2_TR(0x4fa30d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa30e:{NFSU2_TR(0x4fa30e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa313ull));
TAIL_STATIC(0x50c900u,50c);
}
B4fa313:L4fa313:{c.instructions+=3;NFSU2_TR(0x4fa313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa316:{NFSU2_TR(0x4fa316);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa318:{NFSU2_TR(0x4fa318);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa319:L4fa319:{c.instructions+=1;NFSU2_TR(0x4fa319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa31eull));
TAIL_STATIC(0x537950u,537);
}
B4fa31e:L4fa31e:{c.instructions+=3;NFSU2_TR(0x4fa31e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fa321:{NFSU2_TR(0x4fa321);
__builtin_memmove((R+4),(R+24),4);
}
B4fa323:{NFSU2_TR(0x4fa323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa328ull));
TAIL_STATIC(0x4eec90u,4ee);
}
B4fa328:L4fa328:{c.instructions+=4;NFSU2_TR(0x4fa328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa32b:{NFSU2_TR(0x4fa32b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa32d:{NFSU2_TR(0x4fa32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4fa330:{NFSU2_TR(0x4fa330);
if(r1(R+518)){{goto L4fa337;}}
}
B4fa332:L4fa332:{c.instructions+=2;NFSU2_TR(0x4fa332);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fa335:{NFSU2_TR(0x4fa335);
{goto L4fa339;}
}
B4fa337:L4fa337:{c.instructions+=1;NFSU2_TR(0x4fa337);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4fa339:L4fa339:{c.instructions+=4;NFSU2_TR(0x4fa339);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa33b:{NFSU2_TR(0x4fa33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa33e:{NFSU2_TR(0x4fa33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fa345:{NFSU2_TR(0x4fa345);
if(r1(R+518)){{goto L4fa34c;}}
}
B4fa347:L4fa347:{c.instructions+=2;NFSU2_TR(0x4fa347);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4fa34a:{NFSU2_TR(0x4fa34a);
{goto L4fa34e;}
}
B4fa34c:L4fa34c:{c.instructions+=1;NFSU2_TR(0x4fa34c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fa34e:L4fa34e:{c.instructions+=2;NFSU2_TR(0x4fa34e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa34f:{NFSU2_TR(0x4fa34f);
}
B4fa350:L4fa350:{c.instructions+=2;NFSU2_TR(0x4fa350);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa352:{NFSU2_TR(0x4fa352);
if(r1(R+518)){{goto L4fa359;}}
}
B4fa354:L4fa354:{c.instructions+=2;NFSU2_TR(0x4fa354);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fa357:{NFSU2_TR(0x4fa357);
{goto L4fa35b;}
}
B4fa359:L4fa359:{c.instructions+=1;NFSU2_TR(0x4fa359);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4fa35b:L4fa35b:{c.instructions+=2;NFSU2_TR(0x4fa35b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa35d:{NFSU2_TR(0x4fa35d);
if(r1(R+518)){{goto L4fa387;}}
}
B4fa35f:L4fa35f:{c.instructions+=4;NFSU2_TR(0x4fa35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa362:{NFSU2_TR(0x4fa362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fa368:{NFSU2_TR(0x4fa368);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aab8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+18)));
w4(U+22,u32(u32(r4(R+28))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B4fa36f:{NFSU2_TR(0x4fa36f);
if(r1(R+518)){{goto L4fa384;}}
}
B4fa371:L4fa371:{c.instructions+=4;NFSU2_TR(0x4fa371);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4fa374:{NFSU2_TR(0x4fa374);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa377:{NFSU2_TR(0x4fa377);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa379:{NFSU2_TR(0x4fa379);
if(r1(R+518)){{goto L4fa380;}}
}
B4fa37b:L4fa37b:{c.instructions+=2;NFSU2_TR(0x4fa37b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4fa37e:{NFSU2_TR(0x4fa37e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fa350u);}goto L4fa350;}
}
B4fa380:L4fa380:{c.instructions+=2;NFSU2_TR(0x4fa380);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fa382:{NFSU2_TR(0x4fa382);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fa350u);}goto L4fa350;}
}
B4fa384:L4fa384:{c.instructions+=1;NFSU2_TR(0x4fa384);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa387:L4fa387:{c.instructions+=7;NFSU2_TR(0x4fa387);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fa38a:{NFSU2_TR(0x4fa38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa38d:{NFSU2_TR(0x4fa38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa393:{NFSU2_TR(0x4fa393);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa394:{NFSU2_TR(0x4fa394);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa395:{NFSU2_TR(0x4fa395);
w4(R+4,u32(0x83aab4ull));
}
B4fa39a:{NFSU2_TR(0x4fa39a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa39full));
TAIL_STATIC(0x502a40u,502);
}
B4fa39f:L4fa39f:{c.instructions+=2;NFSU2_TR(0x4fa39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa3a2:{NFSU2_TR(0x4fa3a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa3a7ull));
TAIL_STATIC(0x511e00u,511);
}
B4fa3a7:L4fa3a7:{c.instructions+=3;NFSU2_TR(0x4fa3a7);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa3ac:{NFSU2_TR(0x4fa3ac);
__builtin_memmove((R+12),(R+0),4);
}
B4fa3ae:{NFSU2_TR(0x4fa3ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa3b3ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4fa3b3:L4fa3b3:{c.instructions+=3;NFSU2_TR(0x4fa3b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fa3b6:{NFSU2_TR(0x4fa3b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fa3b8:{NFSU2_TR(0x4fa3b8);
if(r1(R+518)){{goto L4fa3cb;}}
}
B4fa3ba:L4fa3ba:{c.instructions+=2;NFSU2_TR(0x4fa3ba);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa3bf:{NFSU2_TR(0x4fa3bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa3c4ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4fa3c4:L4fa3c4:{c.instructions+=3;NFSU2_TR(0x4fa3c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fa3c7:{NFSU2_TR(0x4fa3c7);
__builtin_memmove((R+28),(R+0),4);
}
B4fa3c9:{NFSU2_TR(0x4fa3c9);
{goto L4fa3f4;}
}
B4fa3cb:L4fa3cb:{c.instructions+=2;NFSU2_TR(0x4fa3cb);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa3d0:{NFSU2_TR(0x4fa3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa3d5ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4fa3d5:L4fa3d5:{c.instructions+=3;NFSU2_TR(0x4fa3d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fa3d8:{NFSU2_TR(0x4fa3d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fa3da:{NFSU2_TR(0x4fa3da);
if(r1(R+518)){{goto L4fa3f2;}}
}
B4fa3dc:L4fa3dc:{c.instructions+=2;NFSU2_TR(0x4fa3dc);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa3e1:{NFSU2_TR(0x4fa3e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa3e6ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4fa3e6:L4fa3e6:{c.instructions+=3;NFSU2_TR(0x4fa3e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fa3e9:{NFSU2_TR(0x4fa3e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa3eb:{NFSU2_TR(0x4fa3eb);
if(r1(R+518)){{goto L4fa3f2;}}
}
B4fa3ed:L4fa3ed:{c.instructions+=2;NFSU2_TR(0x4fa3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fa3f0:{NFSU2_TR(0x4fa3f0);
{goto L4fa3f4;}
}
B4fa3f2:L4fa3f2:{c.instructions+=1;NFSU2_TR(0x4fa3f2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4fa3f4:L4fa3f4:{c.instructions+=3;NFSU2_TR(0x4fa3f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa3f5:{NFSU2_TR(0x4fa3f5);
w4(R+4,u32(0x8371b0ull));
}
B4fa3fa:{NFSU2_TR(0x4fa3fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa3ffull));
TAIL_STATIC(0x413440u,413);
}
B4fa3ff:L4fa3ff:{c.instructions+=4;NFSU2_TR(0x4fa3ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa401:{NFSU2_TR(0x4fa401);
s4(0x83623c,u32(0x1ull));
}
B4fa40b:{NFSU2_TR(0x4fa40b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa40c:{NFSU2_TR(0x4fa40c);
if(r1(R+518)){{goto L4fa41c;}}
}
B4fa40e:L4fa40e:{c.instructions+=4;NFSU2_TR(0x4fa40e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa410:{NFSU2_TR(0x4fa410);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa415:{NFSU2_TR(0x4fa415);
__builtin_memmove((R+4),(R+28),4);
}
B4fa417:{NFSU2_TR(0x4fa417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa41cull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4fa41c:L4fa41c:{c.instructions+=2;NFSU2_TR(0x4fa41c);
__builtin_memmove((R+4),(R+24),4);
}
B4fa41e:{NFSU2_TR(0x4fa41e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa423ull));
TAIL_STATIC(0x4b2310u,4b2);
}
B4fa423:L4fa423:{c.instructions+=2;NFSU2_TR(0x4fa423);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa42a:{NFSU2_TR(0x4fa42a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa45c;}}
}
B4fa42c:L4fa42c:{c.instructions+=3;NFSU2_TR(0x4fa42c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fa42f:{NFSU2_TR(0x4fa42f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fa431:{NFSU2_TR(0x4fa431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa45c;}}
}
B4fa433:L4fa433:{c.instructions+=2;NFSU2_TR(0x4fa433);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa438:{NFSU2_TR(0x4fa438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa43dull));
TAIL_STATIC(0x52cf60u,52c);
}
B4fa43d:L4fa43d:{c.instructions+=3;NFSU2_TR(0x4fa43d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fa440:{NFSU2_TR(0x4fa440);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fa442:{NFSU2_TR(0x4fa442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa45c;}}
}
B4fa444:L4fa444:{c.instructions+=6;NFSU2_TR(0x4fa444);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fa447:{NFSU2_TR(0x4fa447);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa449:{NFSU2_TR(0x4fa449);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa44e:{NFSU2_TR(0x4fa44e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa44f:{NFSU2_TR(0x4fa44f);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa454:{NFSU2_TR(0x4fa454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa459ull));
TAIL_STATIC(0x555eb0u,555);
}
B4fa459:L4fa459:{c.instructions+=1;NFSU2_TR(0x4fa459);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa45c:L4fa45c:{c.instructions+=5;NFSU2_TR(0x4fa45c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa45d:{NFSU2_TR(0x4fa45d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fa461:{NFSU2_TR(0x4fa461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa462:{NFSU2_TR(0x4fa462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fa463:{NFSU2_TR(0x4fa463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa470:L4fa470:{c.instructions+=3;NFSU2_TR(0x4fa470);
__builtin_memmove((R+0),gp(0x836340),4);
}
B4fa475:{NFSU2_TR(0x4fa475);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa477:{NFSU2_TR(0x4fa477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa525;}}
}
B4fa47d:L4fa47d:{c.instructions+=3;NFSU2_TR(0x4fa47d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa47e:{NFSU2_TR(0x4fa47e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa47f:{NFSU2_TR(0x4fa47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa484ull));
TAIL_STATIC(0x4ef1b0u,4ef);
}
B4fa484:L4fa484:{c.instructions+=3;NFSU2_TR(0x4fa484);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B4fa489:{NFSU2_TR(0x4fa489);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa48c:{NFSU2_TR(0x4fa48c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fa4fb;}}
}
B4fa48e:L4fa48e:{c.instructions+=2;NFSU2_TR(0x4fa48e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4fa538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4fa495:{NFSU2_TR(0x4fa495);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4fa528ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4fa49c:L4fa49c:{c.instructions+=6;NFSU2_TR(0x4fa49c);
__builtin_memmove((R+0),gp(0x7f4460),4);
}
B4fa4a1:{NFSU2_TR(0x4fa4a1);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4fa4a7:{NFSU2_TR(0x4fa4a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4a8:{NFSU2_TR(0x4fa4a8);
__builtin_memmove((R+24),(R+0),4);
}
B4fa4aa:{NFSU2_TR(0x4fa4aa);
__builtin_memmove((R+28),(R+4),4);
}
B4fa4ac:{NFSU2_TR(0x4fa4ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa4b1ull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4fa4b1:L4fa4b1:{c.instructions+=6;NFSU2_TR(0x4fa4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa4b5:{NFSU2_TR(0x4fa4b5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4b7:{NFSU2_TR(0x4fa4b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4b8:{NFSU2_TR(0x4fa4b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4b9:{NFSU2_TR(0x4fa4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa4bc:{NFSU2_TR(0x4fa4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa4c1ull));
TAIL_STATIC(0x537980u,537);
}
B4fa4c1:L4fa4c1:{c.instructions+=4;NFSU2_TR(0x4fa4c1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa4c4:{NFSU2_TR(0x4fa4c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa4c5:{NFSU2_TR(0x4fa4c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa4c6:{NFSU2_TR(0x4fa4c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa4c7:L4fa4c7:{c.instructions+=6;NFSU2_TR(0x4fa4c7);
__builtin_memmove((R+8),gp(0x7f4460),4);
}
B4fa4cd:{NFSU2_TR(0x4fa4cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa4d1:{NFSU2_TR(0x4fa4d1);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4fa4d7:{NFSU2_TR(0x4fa4d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4d8:{NFSU2_TR(0x4fa4d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4d9:{NFSU2_TR(0x4fa4d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa4deull));
TAIL_STATIC(0x4ccf30u,4cc);
}
B4fa4de:L4fa4de:{c.instructions+=3;NFSU2_TR(0x4fa4de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa4df:{NFSU2_TR(0x4fa4df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa4e0:{NFSU2_TR(0x4fa4e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa4e1:L4fa4e1:{c.instructions+=6;NFSU2_TR(0x4fa4e1);
__builtin_memmove((R+4),gp(0x7f445c),4);
}
B4fa4e7:{NFSU2_TR(0x4fa4e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fa4eb:{NFSU2_TR(0x4fa4eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4ec:{NFSU2_TR(0x4fa4ec);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4fa4f2:{NFSU2_TR(0x4fa4f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa4f3:{NFSU2_TR(0x4fa4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa4f8ull));
TAIL_STATIC(0x4ccf30u,4cc);
}
B4fa4f8:L4fa4f8:{c.instructions+=3;NFSU2_TR(0x4fa4f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa4f9:{NFSU2_TR(0x4fa4f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa4fa:{NFSU2_TR(0x4fa4fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa4fb:L4fa4fb:{c.instructions+=6;NFSU2_TR(0x4fa4fb);
__builtin_memmove((R+0),gp(0x7f4464),4);
}
B4fa500:{NFSU2_TR(0x4fa500);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4fa506:{NFSU2_TR(0x4fa506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa507:{NFSU2_TR(0x4fa507);
__builtin_memmove((R+24),(R+0),4);
}
B4fa509:{NFSU2_TR(0x4fa509);
__builtin_memmove((R+28),(R+4),4);
}
B4fa50b:{NFSU2_TR(0x4fa50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa510ull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4fa510:L4fa510:{c.instructions+=6;NFSU2_TR(0x4fa510);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa512:{NFSU2_TR(0x4fa512);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa515:{NFSU2_TR(0x4fa515);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa519:{NFSU2_TR(0x4fa519);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa51a:{NFSU2_TR(0x4fa51a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa51b:{NFSU2_TR(0x4fa51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa520ull));
TAIL_STATIC(0x537980u,537);
}
B4fa520:L4fa520:{c.instructions+=3;NFSU2_TR(0x4fa520);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa523:{NFSU2_TR(0x4fa523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa524:{NFSU2_TR(0x4fa524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa525:L4fa525:{c.instructions+=1;NFSU2_TR(0x4fa525);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa550:L4fa550:{c.instructions+=8;NFSU2_TR(0x4fa550);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa552:{NFSU2_TR(0x4fa552);
u8 U[4];
w4(U+0,u32(0x776d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa557:{NFSU2_TR(0x4fa557);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa55d:{NFSU2_TR(0x4fa55d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa55e:{NFSU2_TR(0x4fa55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa565:{NFSU2_TR(0x4fa565);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa566:{NFSU2_TR(0x4fa566);
u8 U[4];
w4(U+0,u32(0x164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa56b:{NFSU2_TR(0x4fa56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa570ull));
TAIL_STATIC(0x575620u,575);
}
B4fa570:L4fa570:{c.instructions+=5;NFSU2_TR(0x4fa570);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fa573:{NFSU2_TR(0x4fa573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fa577:{NFSU2_TR(0x4fa577);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa579:{NFSU2_TR(0x4fa579);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fa581:{NFSU2_TR(0x4fa581);
if(r1(R+518)){{goto L4fa59e;}}
}
B4fa583:L4fa583:{c.instructions+=4;NFSU2_TR(0x4fa583);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa587:{NFSU2_TR(0x4fa587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa588:{NFSU2_TR(0x4fa588);
__builtin_memmove((R+4),(R+0),4);
}
B4fa58a:{NFSU2_TR(0x4fa58a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa58full));
TAIL_STATIC(0x4ef3f0u,4ef);
}
B4fa58f:L4fa58f:{c.instructions+=4;NFSU2_TR(0x4fa58f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa593:{NFSU2_TR(0x4fa593);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa59a:{NFSU2_TR(0x4fa59a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa59d:{NFSU2_TR(0x4fa59d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa59e:L4fa59e:{c.instructions+=5;NFSU2_TR(0x4fa59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa5a2:{NFSU2_TR(0x4fa5a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fa5a4:{NFSU2_TR(0x4fa5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa5ab:{NFSU2_TR(0x4fa5ab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa5ae:{NFSU2_TR(0x4fa5ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa5b0:L4fa5b0:{c.instructions+=7;NFSU2_TR(0x4fa5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa5b4:{NFSU2_TR(0x4fa5b4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xabc08912ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xabc08912ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa5b9:{NFSU2_TR(0x4fa5b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa5ba:{NFSU2_TR(0x4fa5ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa5bb:{NFSU2_TR(0x4fa5bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa5bc:{NFSU2_TR(0x4fa5bc);
__builtin_memmove((R+24),(R+4),4);
}
B4fa5be:{NFSU2_TR(0x4fa5be);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fa81a;}}
}
B4fa5c4:L4fa5c4:{c.instructions+=1;NFSU2_TR(0x4fa5c4);
if(r1(R+518)){{goto L4fa5f0;}}
}
B4fa5c6:L4fa5c6:{c.instructions+=2;NFSU2_TR(0x4fa5c6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa5cb:{NFSU2_TR(0x4fa5cb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fa78f;}}
}
B4fa5d1:L4fa5d1:{c.instructions+=1;NFSU2_TR(0x4fa5d1);
if(r1(R+518)){{goto L4fa77c;}}
}
B4fa5d7:L4fa5d7:{c.instructions+=2;NFSU2_TR(0x4fa5d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa5dc:{NFSU2_TR(0x4fa5dc);
if(r1(R+518)){{goto L4fa653;}}
}
B4fa5de:L4fa5de:{c.instructions+=2;NFSU2_TR(0x4fa5de);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x5073ef13ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5073ef13ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa5e3:{NFSU2_TR(0x4fa5e3);
if(r1(R+518)){{goto L4fa62b;}}
}
B4fa5e5:L4fa5e5:{c.instructions+=2;NFSU2_TR(0x4fa5e5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x55d1e635ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x55d1e635ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x55d1e635ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa5ea:{NFSU2_TR(0x4fa5ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa970;}}
}
B4fa5f0:L4fa5f0:{c.instructions+=6;NFSU2_TR(0x4fa5f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fa5f4:{NFSU2_TR(0x4fa5f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xabc08912ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa5f9:{NFSU2_TR(0x4fa5f9);
__builtin_memmove((R+8),(R+518),1);
}
B4fa5fc:{NFSU2_TR(0x4fa5fc);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa5fe:{NFSU2_TR(0x4fa5fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fa602:{NFSU2_TR(0x4fa602);
if(r1(R+518)){{goto L4fa970;}}
}
B4fa608:L4fa608:{c.instructions+=3;NFSU2_TR(0x4fa608);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa609:{NFSU2_TR(0x4fa609);
__builtin_memmove((R+4),(R+24),4);
}
B4fa60b:{NFSU2_TR(0x4fa60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa610ull));
TAIL_STATIC(0x498b90u,498);
}
B4fa610:L4fa610:{c.instructions+=2;NFSU2_TR(0x4fa610);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4fa612:{NFSU2_TR(0x4fa612);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4fa7f7;}}
}
B4fa618:L4fa618:{c.instructions+=5;NFSU2_TR(0x4fa618);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa61c:{NFSU2_TR(0x4fa61c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa61d:{NFSU2_TR(0x4fa61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa61e:{NFSU2_TR(0x4fa61e);
__builtin_memmove((R+4),(R+24),4);
}
B4fa620:{NFSU2_TR(0x4fa620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa625ull));
TAIL_STATIC(0x498a80u,498);
}
B4fa625:L4fa625:{c.instructions+=4;NFSU2_TR(0x4fa625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa626:{NFSU2_TR(0x4fa626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa627:{NFSU2_TR(0x4fa627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa628:{NFSU2_TR(0x4fa628);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa62b:L4fa62b:{c.instructions+=1;NFSU2_TR(0x4fa62b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa630ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4fa630:L4fa630:{c.instructions+=2;NFSU2_TR(0x4fa630);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa633:{NFSU2_TR(0x4fa633);
if(r1(R+518)){{goto L4fa970;}}
}
B4fa639:L4fa639:{c.instructions+=3;NFSU2_TR(0x4fa639);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa63f:{NFSU2_TR(0x4fa63f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa641:{NFSU2_TR(0x4fa641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa646ull));
TAIL_STATIC(0x458520u,458);
}
B4fa646:L4fa646:{c.instructions+=2;NFSU2_TR(0x4fa646);
__builtin_memmove((R+4),(R+24),4);
}
B4fa648:{NFSU2_TR(0x4fa648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa64dull));
TAIL_STATIC(0x4ce610u,4ce);
}
B4fa64d:L4fa64d:{c.instructions+=4;NFSU2_TR(0x4fa64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa64e:{NFSU2_TR(0x4fa64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa64f:{NFSU2_TR(0x4fa64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa650:{NFSU2_TR(0x4fa650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa653:L4fa653:{c.instructions+=3;NFSU2_TR(0x4fa653);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fa657:{NFSU2_TR(0x4fa657);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa659:{NFSU2_TR(0x4fa659);
if(r1(R+518)){{goto L4fa970;}}
}
B4fa65f:L4fa65f:{c.instructions+=3;NFSU2_TR(0x4fa65f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa660:{NFSU2_TR(0x4fa660);
__builtin_memmove((R+4),(R+24),4);
}
B4fa662:{NFSU2_TR(0x4fa662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa667ull));
TAIL_STATIC(0x498b90u,498);
}
B4fa667:L4fa667:{c.instructions+=3;NFSU2_TR(0x4fa667);
__builtin_memmove((R+28),(R+0),4);
}
B4fa669:{NFSU2_TR(0x4fa669);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4fa66b:{NFSU2_TR(0x4fa66b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4fa688;}}
}
B4fa66d:L4fa66d:{c.instructions+=3;NFSU2_TR(0x4fa66d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa673:{NFSU2_TR(0x4fa673);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa675:{NFSU2_TR(0x4fa675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa67aull));
TAIL_STATIC(0x458520u,458);
}
B4fa67a:L4fa67a:{c.instructions+=3;NFSU2_TR(0x4fa67a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa67b:{NFSU2_TR(0x4fa67b);
__builtin_memmove((R+4),(R+24),4);
}
B4fa67d:{NFSU2_TR(0x4fa67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa682ull));
TAIL_STATIC(0x4efda0u,4ef);
}
B4fa682:L4fa682:{c.instructions+=4;NFSU2_TR(0x4fa682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa683:{NFSU2_TR(0x4fa683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa684:{NFSU2_TR(0x4fa684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa685:{NFSU2_TR(0x4fa685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa688:L4fa688:{c.instructions+=3;NFSU2_TR(0x4fa688);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa689:{NFSU2_TR(0x4fa689);
__builtin_memmove((R+4),(R+24),4);
}
B4fa68b:{NFSU2_TR(0x4fa68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa690ull));
TAIL_STATIC(0x498bc0u,498);
}
B4fa690:L4fa690:{c.instructions+=2;NFSU2_TR(0x4fa690);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa692:{NFSU2_TR(0x4fa692);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4fa970;}}
}
B4fa698:L4fa698:{c.instructions+=2;NFSU2_TR(0x4fa698);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa69b:{NFSU2_TR(0x4fa69b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fa970;}}
}
B4fa6a1:L4fa6a1:{c.instructions+=1;NFSU2_TR(0x4fa6a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4fa978ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4fa6a8:L4fa6a8:{c.instructions+=3;NFSU2_TR(0x4fa6a8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa6ae:{NFSU2_TR(0x4fa6ae);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa6b0:{NFSU2_TR(0x4fa6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa6b5ull));
TAIL_STATIC(0x458520u,458);
}
B4fa6b5:L4fa6b5:{c.instructions+=2;NFSU2_TR(0x4fa6b5);
__builtin_memmove((R+4),(R+24),4);
}
B4fa6b7:{NFSU2_TR(0x4fa6b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa6bcull));
TAIL_STATIC(0x4b51d0u,4b5);
}
B4fa6bc:L4fa6bc:{c.instructions+=4;NFSU2_TR(0x4fa6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa6bd:{NFSU2_TR(0x4fa6bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa6be:{NFSU2_TR(0x4fa6be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa6bf:{NFSU2_TR(0x4fa6bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa6c2:L4fa6c2:{c.instructions+=3;NFSU2_TR(0x4fa6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa6c5:{NFSU2_TR(0x4fa6c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa6c7:{NFSU2_TR(0x4fa6c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa6d6;}}
}
B4fa6c9:L4fa6c9:{c.instructions+=2;NFSU2_TR(0x4fa6c9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4fa6d0:{NFSU2_TR(0x4fa6d0);
if(r1(R+518)){{goto L4fa970;}}
}
B4fa6d6:L4fa6d6:{c.instructions+=3;NFSU2_TR(0x4fa6d6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa6dc:{NFSU2_TR(0x4fa6dc);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa6de:{NFSU2_TR(0x4fa6de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa6e3ull));
TAIL_STATIC(0x458520u,458);
}
B4fa6e3:L4fa6e3:{c.instructions+=3;NFSU2_TR(0x4fa6e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fa6e6:{NFSU2_TR(0x4fa6e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fa6e8:{NFSU2_TR(0x4fa6e8);
if(r1(R+518)){{goto L4fa6f9;}}
}
B4fa6ea:L4fa6ea:{c.instructions+=3;NFSU2_TR(0x4fa6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fa6f0:{NFSU2_TR(0x4fa6f0);
w4(R+4,u32(0x40ull));
}
B4fa6f5:{NFSU2_TR(0x4fa6f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fa6f7:L4fa6f7:{c.instructions+=1;NFSU2_TR(0x4fa6f7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4fa6f9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fa6f7u);}goto L4fa6f7;}
}
B4fa6f9:L4fa6f9:{c.instructions+=7;NFSU2_TR(0x4fa6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa6ff:{NFSU2_TR(0x4fa6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa702:{NFSU2_TR(0x4fa702);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fa705:{NFSU2_TR(0x4fa705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa70b:{NFSU2_TR(0x4fa70b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa70c:{NFSU2_TR(0x4fa70c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa70d:{NFSU2_TR(0x4fa70d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa712ull));
TAIL_STATIC(0x51ce60u,51c);
}
B4fa712:L4fa712:{c.instructions+=3;NFSU2_TR(0x4fa712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa715:{NFSU2_TR(0x4fa715);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa716:{NFSU2_TR(0x4fa716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa71bull));
TAIL_STATIC(0x5379a0u,537);
}
B4fa71b:L4fa71b:{c.instructions+=6;NFSU2_TR(0x4fa71b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa71e:{NFSU2_TR(0x4fa71e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa71f:{NFSU2_TR(0x4fa71f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa720:{NFSU2_TR(0x4fa720);
s4(0x836348,u32(0x0ull));
}
B4fa72a:{NFSU2_TR(0x4fa72a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa72b:{NFSU2_TR(0x4fa72b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa72e:L4fa72e:{c.instructions+=2;NFSU2_TR(0x4fa72e);
__builtin_memmove((R+4),(R+24),4);
}
B4fa730:{NFSU2_TR(0x4fa730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa735ull));
TAIL_STATIC(0x4ce590u,4ce);
}
B4fa735:L4fa735:{c.instructions+=3;NFSU2_TR(0x4fa735);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa73b:{NFSU2_TR(0x4fa73b);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa73d:{NFSU2_TR(0x4fa73d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa742ull));
TAIL_STATIC(0x458520u,458);
}
B4fa742:L4fa742:{c.instructions+=4;NFSU2_TR(0x4fa742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa743:{NFSU2_TR(0x4fa743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa744:{NFSU2_TR(0x4fa744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa745:{NFSU2_TR(0x4fa745);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa748:L4fa748:{c.instructions+=2;NFSU2_TR(0x4fa748);
__builtin_memmove((R+4),(R+24),4);
}
B4fa74a:{NFSU2_TR(0x4fa74a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa74full));
TAIL_STATIC(0x4ce5d0u,4ce);
}
B4fa74f:L4fa74f:{c.instructions+=3;NFSU2_TR(0x4fa74f);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa755:{NFSU2_TR(0x4fa755);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa757:{NFSU2_TR(0x4fa757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa75cull));
TAIL_STATIC(0x458520u,458);
}
B4fa75c:L4fa75c:{c.instructions+=4;NFSU2_TR(0x4fa75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa75d:{NFSU2_TR(0x4fa75d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa75e:{NFSU2_TR(0x4fa75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa75f:{NFSU2_TR(0x4fa75f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa762:L4fa762:{c.instructions+=2;NFSU2_TR(0x4fa762);
__builtin_memmove((R+4),(R+24),4);
}
B4fa764:{NFSU2_TR(0x4fa764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa769ull));
TAIL_STATIC(0x4efdc0u,4ef);
}
B4fa769:L4fa769:{c.instructions+=3;NFSU2_TR(0x4fa769);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa76f:{NFSU2_TR(0x4fa76f);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa771:{NFSU2_TR(0x4fa771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa776ull));
TAIL_STATIC(0x458520u,458);
}
B4fa776:L4fa776:{c.instructions+=4;NFSU2_TR(0x4fa776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa777:{NFSU2_TR(0x4fa777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa778:{NFSU2_TR(0x4fa778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa779:{NFSU2_TR(0x4fa779);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa77c:L4fa77c:{c.instructions+=3;NFSU2_TR(0x4fa77c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa782:{NFSU2_TR(0x4fa782);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa784:{NFSU2_TR(0x4fa784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa789ull));
TAIL_STATIC(0x458520u,458);
}
B4fa789:L4fa789:{c.instructions+=4;NFSU2_TR(0x4fa789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa78a:{NFSU2_TR(0x4fa78a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa78b:{NFSU2_TR(0x4fa78b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa78c:{NFSU2_TR(0x4fa78c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa78f:L4fa78f:{c.instructions+=2;NFSU2_TR(0x4fa78f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa794:{NFSU2_TR(0x4fa794);
if(r1(R+518)){{goto L4fa7ce;}}
}
B4fa796:L4fa796:{c.instructions+=2;NFSU2_TR(0x4fa796);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa79b:{NFSU2_TR(0x4fa79b);
if(r1(R+518)){{goto L4fa7bb;}}
}
B4fa79d:L4fa79d:{c.instructions+=2;NFSU2_TR(0x4fa79d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa7a2:{NFSU2_TR(0x4fa7a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa970;}}
}
B4fa7a8:L4fa7a8:{c.instructions+=3;NFSU2_TR(0x4fa7a8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa7ae:{NFSU2_TR(0x4fa7ae);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa7b0:{NFSU2_TR(0x4fa7b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa7b5ull));
TAIL_STATIC(0x458520u,458);
}
B4fa7b5:L4fa7b5:{c.instructions+=4;NFSU2_TR(0x4fa7b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa7b6:{NFSU2_TR(0x4fa7b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa7b7:{NFSU2_TR(0x4fa7b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa7b8:{NFSU2_TR(0x4fa7b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa7bb:L4fa7bb:{c.instructions+=3;NFSU2_TR(0x4fa7bb);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa7c1:{NFSU2_TR(0x4fa7c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa7c3:{NFSU2_TR(0x4fa7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa7c8ull));
TAIL_STATIC(0x458520u,458);
}
B4fa7c8:L4fa7c8:{c.instructions+=4;NFSU2_TR(0x4fa7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa7c9:{NFSU2_TR(0x4fa7c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa7ca:{NFSU2_TR(0x4fa7ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa7cb:{NFSU2_TR(0x4fa7cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa7ce:L4fa7ce:{c.instructions+=3;NFSU2_TR(0x4fa7ce);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa7d4:{NFSU2_TR(0x4fa7d4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa7d6:{NFSU2_TR(0x4fa7d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa7dbull));
TAIL_STATIC(0x458520u,458);
}
B4fa7db:L4fa7db:{c.instructions+=2;NFSU2_TR(0x4fa7db);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4fa7e2:{NFSU2_TR(0x4fa7e2);
if(r1(R+518)){{goto L4fa970;}}
}
B4fa7e8:L4fa7e8:{c.instructions+=3;NFSU2_TR(0x4fa7e8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa7ea:{NFSU2_TR(0x4fa7ea);
__builtin_memmove((R+4),(R+24),4);
}
B4fa7ec:{NFSU2_TR(0x4fa7ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa7f1ull));
TAIL_STATIC(0x498a00u,498);
}
B4fa7f1:L4fa7f1:{c.instructions+=4;NFSU2_TR(0x4fa7f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa7f2:{NFSU2_TR(0x4fa7f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa7f3:{NFSU2_TR(0x4fa7f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa7f4:{NFSU2_TR(0x4fa7f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa7f7:L4fa7f7:{c.instructions+=3;NFSU2_TR(0x4fa7f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa7f8:{NFSU2_TR(0x4fa7f8);
__builtin_memmove((R+4),(R+24),4);
}
B4fa7fa:{NFSU2_TR(0x4fa7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa7ffull));
TAIL_STATIC(0x498bc0u,498);
}
B4fa7ff:L4fa7ff:{c.instructions+=2;NFSU2_TR(0x4fa7ff);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa801:{NFSU2_TR(0x4fa801);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4fa970;}}
}
B4fa807:L4fa807:{c.instructions+=5;NFSU2_TR(0x4fa807);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fa80b:{NFSU2_TR(0x4fa80b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa80c:{NFSU2_TR(0x4fa80c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa80d:{NFSU2_TR(0x4fa80d);
__builtin_memmove((R+4),(R+24),4);
}
B4fa80f:{NFSU2_TR(0x4fa80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa814ull));
TAIL_STATIC(0x498ae0u,498);
}
B4fa814:L4fa814:{c.instructions+=4;NFSU2_TR(0x4fa814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa815:{NFSU2_TR(0x4fa815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa816:{NFSU2_TR(0x4fa816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa817:{NFSU2_TR(0x4fa817);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa81a:L4fa81a:{c.instructions+=2;NFSU2_TR(0x4fa81a);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa81f:{NFSU2_TR(0x4fa81f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fa93c;}}
}
B4fa825:L4fa825:{c.instructions+=1;NFSU2_TR(0x4fa825);
if(r1(R+518)){{goto L4fa895;}}
}
B4fa827:L4fa827:{c.instructions+=2;NFSU2_TR(0x4fa827);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa82c:{NFSU2_TR(0x4fa82c);
if(r1(R+518)){{goto L4fa882;}}
}
B4fa82e:L4fa82e:{c.instructions+=2;NFSU2_TR(0x4fa82e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa833:{NFSU2_TR(0x4fa833);
if(r1(R+518)){{goto L4fa865;}}
}
B4fa835:L4fa835:{c.instructions+=2;NFSU2_TR(0x4fa835);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc519bfc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa83a:{NFSU2_TR(0x4fa83a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa970;}}
}
B4fa840:L4fa840:{c.instructions+=3;NFSU2_TR(0x4fa840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa843:{NFSU2_TR(0x4fa843);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa845:{NFSU2_TR(0x4fa845);
if(r1(R+518)){{goto L4fa970;}}
}
B4fa84b:L4fa84b:{c.instructions+=2;NFSU2_TR(0x4fa84b);
__builtin_memmove((R+4),(R+24),4);
}
B4fa84d:{NFSU2_TR(0x4fa84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa852ull));
TAIL_STATIC(0x4b51d0u,4b5);
}
B4fa852:L4fa852:{c.instructions+=3;NFSU2_TR(0x4fa852);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa858:{NFSU2_TR(0x4fa858);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa85a:{NFSU2_TR(0x4fa85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa85full));
TAIL_STATIC(0x458520u,458);
}
B4fa85f:L4fa85f:{c.instructions+=4;NFSU2_TR(0x4fa85f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa860:{NFSU2_TR(0x4fa860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa861:{NFSU2_TR(0x4fa861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa862:{NFSU2_TR(0x4fa862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa865:L4fa865:{c.instructions+=3;NFSU2_TR(0x4fa865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa868:{NFSU2_TR(0x4fa868);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa86a:{NFSU2_TR(0x4fa86a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fa6e3u);}goto L4fa6e3;}}
}
B4fa870:L4fa870:{c.instructions+=2;NFSU2_TR(0x4fa870);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4fa877:{NFSU2_TR(0x4fa877);
if(r1(R+518)){{goto L4fa970;}}
}
B4fa87d:L4fa87d:{c.instructions+=1;NFSU2_TR(0x4fa87d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fa6e3u);}goto L4fa6e3;}
}
B4fa882:L4fa882:{c.instructions+=3;NFSU2_TR(0x4fa882);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa888:{NFSU2_TR(0x4fa888);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa88a:{NFSU2_TR(0x4fa88a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa88full));
TAIL_STATIC(0x458520u,458);
}
B4fa88f:L4fa88f:{c.instructions+=4;NFSU2_TR(0x4fa88f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa890:{NFSU2_TR(0x4fa890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa891:{NFSU2_TR(0x4fa891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa892:{NFSU2_TR(0x4fa892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa895:L4fa895:{c.instructions+=4;NFSU2_TR(0x4fa895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa898:{NFSU2_TR(0x4fa898);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa89a:{NFSU2_TR(0x4fa89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa8a0:{NFSU2_TR(0x4fa8a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa8ef;}}
}
B4fa8a2:L4fa8a2:{c.instructions+=2;NFSU2_TR(0x4fa8a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fa8a5:{NFSU2_TR(0x4fa8a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa8b8;}}
}
B4fa8a7:L4fa8a7:{c.instructions+=4;NFSU2_TR(0x4fa8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fa8aa:{NFSU2_TR(0x4fa8aa);
u8 U[4];
w4(U+0,u32(0x798f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8af:{NFSU2_TR(0x4fa8af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8b0:{NFSU2_TR(0x4fa8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa8b5ull));
TAIL_STATIC(0x4954c0u,495);
}
B4fa8b5:L4fa8b5:{c.instructions+=1;NFSU2_TR(0x4fa8b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fa8b8:L4fa8b8:{c.instructions+=3;NFSU2_TR(0x4fa8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fa8bb:{NFSU2_TR(0x4fa8bb);
u8 U[4];
w4(U+0,u32(0x798f8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8c0:{NFSU2_TR(0x4fa8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa8c5ull));
TAIL_STATIC(0x505450u,505);
}
B4fa8c5:L4fa8c5:{c.instructions+=3;NFSU2_TR(0x4fa8c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8c6:{NFSU2_TR(0x4fa8c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8c7:{NFSU2_TR(0x4fa8c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa8ccull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa8cc:L4fa8cc:{c.instructions+=2;NFSU2_TR(0x4fa8cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8cd:{NFSU2_TR(0x4fa8cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa8d2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fa8d2:L4fa8d2:{c.instructions+=4;NFSU2_TR(0x4fa8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fa8d5:{NFSU2_TR(0x4fa8d5);
u8 U[4];
w4(U+0,u32(0xc6f00a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8da:{NFSU2_TR(0x4fa8da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8db:{NFSU2_TR(0x4fa8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa8e0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa8e0:L4fa8e0:{c.instructions+=2;NFSU2_TR(0x4fa8e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8e1:{NFSU2_TR(0x4fa8e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa8e6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4fa8e6:L4fa8e6:{c.instructions+=5;NFSU2_TR(0x4fa8e6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa8e9:{NFSU2_TR(0x4fa8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa8ea:{NFSU2_TR(0x4fa8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa8eb:{NFSU2_TR(0x4fa8eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa8ec:{NFSU2_TR(0x4fa8ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa8ef:L4fa8ef:{c.instructions+=2;NFSU2_TR(0x4fa8ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fa8f2:{NFSU2_TR(0x4fa8f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa905;}}
}
B4fa8f4:L4fa8f4:{c.instructions+=4;NFSU2_TR(0x4fa8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa8f7:{NFSU2_TR(0x4fa8f7);
u8 U[4];
w4(U+0,u32(0x798f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8fc:{NFSU2_TR(0x4fa8fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa8fd:{NFSU2_TR(0x4fa8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa902ull));
TAIL_STATIC(0x495500u,495);
}
B4fa902:L4fa902:{c.instructions+=1;NFSU2_TR(0x4fa902);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fa905:L4fa905:{c.instructions+=3;NFSU2_TR(0x4fa905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fa908:{NFSU2_TR(0x4fa908);
u8 U[4];
w4(U+0,u32(0x798f8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa90d:{NFSU2_TR(0x4fa90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa912ull));
TAIL_STATIC(0x505450u,505);
}
B4fa912:L4fa912:{c.instructions+=3;NFSU2_TR(0x4fa912);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa913:{NFSU2_TR(0x4fa913);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa914:{NFSU2_TR(0x4fa914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa919ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa919:L4fa919:{c.instructions+=2;NFSU2_TR(0x4fa919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa91a:{NFSU2_TR(0x4fa91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa91full));
TAIL_STATIC(0x50ca50u,50c);
}
B4fa91f:L4fa91f:{c.instructions+=4;NFSU2_TR(0x4fa91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fa922:{NFSU2_TR(0x4fa922);
u8 U[4];
w4(U+0,u32(0xc6f00a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa927:{NFSU2_TR(0x4fa927);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa928:{NFSU2_TR(0x4fa928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa92dull));
TAIL_STATIC(0x5379c0u,537);
}
B4fa92d:L4fa92d:{c.instructions+=2;NFSU2_TR(0x4fa92d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa92e:{NFSU2_TR(0x4fa92e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa933ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4fa933:L4fa933:{c.instructions+=5;NFSU2_TR(0x4fa933);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa936:{NFSU2_TR(0x4fa936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa937:{NFSU2_TR(0x4fa937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa938:{NFSU2_TR(0x4fa938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa939:{NFSU2_TR(0x4fa939);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa93c:L4fa93c:{c.instructions+=2;NFSU2_TR(0x4fa93c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa941:{NFSU2_TR(0x4fa941);
if(r1(R+518)){{goto L4fa964;}}
}
B4fa943:L4fa943:{c.instructions+=2;NFSU2_TR(0x4fa943);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd9feec59ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa948:{NFSU2_TR(0x4fa948);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fa970;}}
}
B4fa94a:L4fa94a:{c.instructions+=3;NFSU2_TR(0x4fa94a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4fa950:{NFSU2_TR(0x4fa950);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa952:{NFSU2_TR(0x4fa952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa957ull));
TAIL_STATIC(0x458520u,458);
}
B4fa957:L4fa957:{c.instructions+=2;NFSU2_TR(0x4fa957);
__builtin_memmove((R+4),(R+24),4);
}
B4fa959:{NFSU2_TR(0x4fa959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa95eull));
TAIL_STATIC(0x4ce590u,4ce);
}
B4fa95e:L4fa95e:{c.instructions+=4;NFSU2_TR(0x4fa95e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa95f:{NFSU2_TR(0x4fa95f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa960:{NFSU2_TR(0x4fa960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa961:{NFSU2_TR(0x4fa961);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa964:L4fa964:{c.instructions+=3;NFSU2_TR(0x4fa964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa967:{NFSU2_TR(0x4fa967);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa968:{NFSU2_TR(0x4fa968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa96dull));
TAIL_STATIC(0x5379a0u,537);
}
B4fa96d:L4fa96d:{c.instructions+=1;NFSU2_TR(0x4fa96d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa970:L4fa970:{c.instructions+=4;NFSU2_TR(0x4fa970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fa971:{NFSU2_TR(0x4fa971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fa972:{NFSU2_TR(0x4fa972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fa973:{NFSU2_TR(0x4fa973);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa990:L4fa990:{c.instructions+=9;NFSU2_TR(0x4fa990);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa992:{NFSU2_TR(0x4fa992);
u8 U[4];
w4(U+0,u32(0x776d34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa997:{NFSU2_TR(0x4fa997);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fa99d:{NFSU2_TR(0x4fa99d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa99e:{NFSU2_TR(0x4fa99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa9a5:{NFSU2_TR(0x4fa9a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa9a6:{NFSU2_TR(0x4fa9a6);
u8 U[4];
w4(U+0,u32(0x1d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa9ab:{NFSU2_TR(0x4fa9ab);
s1(0x8362e0,u8(0x0ull));
}
B4fa9b2:{NFSU2_TR(0x4fa9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa9b7ull));
TAIL_STATIC(0x575620u,575);
}
B4fa9b7:L4fa9b7:{c.instructions+=5;NFSU2_TR(0x4fa9b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fa9ba:{NFSU2_TR(0x4fa9ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fa9be:{NFSU2_TR(0x4fa9be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fa9c0:{NFSU2_TR(0x4fa9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fa9c8:{NFSU2_TR(0x4fa9c8);
if(r1(R+518)){{goto L4fa9e5;}}
}
B4fa9ca:L4fa9ca:{c.instructions+=4;NFSU2_TR(0x4fa9ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa9ce:{NFSU2_TR(0x4fa9ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fa9cf:{NFSU2_TR(0x4fa9cf);
__builtin_memmove((R+4),(R+0),4);
}
B4fa9d1:{NFSU2_TR(0x4fa9d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fa9d6ull));
TAIL_STATIC(0x4f1150u,4f1);
}
B4fa9d6:L4fa9d6:{c.instructions+=4;NFSU2_TR(0x4fa9d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa9da:{NFSU2_TR(0x4fa9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa9e1:{NFSU2_TR(0x4fa9e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa9e4:{NFSU2_TR(0x4fa9e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fa9e5:L4fa9e5:{c.instructions+=5;NFSU2_TR(0x4fa9e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fa9e9:{NFSU2_TR(0x4fa9e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fa9eb:{NFSU2_TR(0x4fa9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fa9f2:{NFSU2_TR(0x4fa9f2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fa9f5:{NFSU2_TR(0x4fa9f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4faa00:L4faa00:{c.instructions+=2;NFSU2_TR(0x4faa00);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4faa07:{NFSU2_TR(0x4faa07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4faa54;}}
}
B4faa09:L4faa09:{c.instructions+=6;NFSU2_TR(0x4faa09);
__builtin_memmove((R+0),gp(0x836340),4);
}
B4faa0e:{NFSU2_TR(0x4faa0e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4faa10:{NFSU2_TR(0x4faa10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa11:{NFSU2_TR(0x4faa11);
s4(0x850084,u32(0x0ull));
}
B4faa1b:{NFSU2_TR(0x4faa1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4faa1e:{NFSU2_TR(0x4faa1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4faa4d;}}
}
B4faa20:L4faa20:{c.instructions+=3;NFSU2_TR(0x4faa20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa21:{NFSU2_TR(0x4faa21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa22:{NFSU2_TR(0x4faa22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faa27ull));
TAIL_STATIC(0x4ef1b0u,4ef);
}
B4faa27:L4faa27:{c.instructions+=6;NFSU2_TR(0x4faa27);
__builtin_memmove((R+0),gp(0x7f445c),4);
}
B4faa2c:{NFSU2_TR(0x4faa2c);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4faa32:{NFSU2_TR(0x4faa32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa33:{NFSU2_TR(0x4faa33);
__builtin_memmove((R+24),(R+0),4);
}
B4faa35:{NFSU2_TR(0x4faa35);
__builtin_memmove((R+28),(R+4),4);
}
B4faa37:{NFSU2_TR(0x4faa37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faa3cull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4faa3c:L4faa3c:{c.instructions+=5;NFSU2_TR(0x4faa3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa3e:{NFSU2_TR(0x4faa3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa3f:{NFSU2_TR(0x4faa3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa40:{NFSU2_TR(0x4faa40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4faa43:{NFSU2_TR(0x4faa43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faa48ull));
TAIL_STATIC(0x537980u,537);
}
B4faa48:L4faa48:{c.instructions+=3;NFSU2_TR(0x4faa48);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4faa4b:{NFSU2_TR(0x4faa4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4faa4c:{NFSU2_TR(0x4faa4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4faa4d:L4faa4d:{c.instructions+=3;NFSU2_TR(0x4faa4d);
w4(R+0,u32(0x1ull));
}
B4faa52:{NFSU2_TR(0x4faa52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4faa53:{NFSU2_TR(0x4faa53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4faa54:L4faa54:{c.instructions+=2;NFSU2_TR(0x4faa54);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4faa56:{NFSU2_TR(0x4faa56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4faa60:L4faa60:{c.instructions+=11;NFSU2_TR(0x4faa60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B4faa63:{NFSU2_TR(0x4faa63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa64:{NFSU2_TR(0x4faa64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa65:{NFSU2_TR(0x4faa65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa66:{NFSU2_TR(0x4faa66);
__builtin_memmove((R+24),(R+4),4);
}
B4faa68:{NFSU2_TR(0x4faa68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4faa6b:{NFSU2_TR(0x4faa6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+20),(U+0),4);
}
B4faa6e:{NFSU2_TR(0x4faa6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa6f:{NFSU2_TR(0x4faa6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faa70:{NFSU2_TR(0x4faa70);
__builtin_memmove((R+4),(R+20),4);
}
B4faa72:{NFSU2_TR(0x4faa72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faa77ull));
TAIL_STATIC(0x51f440u,51f);
}
B4faa77:L4faa77:{c.instructions+=3;NFSU2_TR(0x4faa77);
__builtin_memmove((R+4),(R+20),4);
}
B4faa79:{NFSU2_TR(0x4faa79);
__builtin_memmove((R+12),(R+0),4);
}
B4faa7b:{NFSU2_TR(0x4faa7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faa80ull));
TAIL_STATIC(0x54eb80u,54e);
}
B4faa80:L4faa80:{c.instructions+=2;NFSU2_TR(0x4faa80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4faa86:{NFSU2_TR(0x4faa86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faa8bull));
TAIL_STATIC(0x538130u,538);
}
B4faa8b:L4faa8b:{c.instructions+=4;NFSU2_TR(0x4faa8b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4faa8d:{NFSU2_TR(0x4faa8d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4faa92:{NFSU2_TR(0x4faa92);
w4(R+4,u32(0x7ull));
}
B4faa97:{NFSU2_TR(0x4faa97);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4faa9b:L4faa9b:{c.instructions+=1;NFSU2_TR(0x4faa9b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4faa9d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4faa9bu);}goto L4faa9b;}
}
B4faa9d:L4faa9d:{c.instructions+=6;NFSU2_TR(0x4faa9d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4faa9f:{NFSU2_TR(0x4faa9f);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4faaa0:{NFSU2_TR(0x4faaa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4faaa3:{NFSU2_TR(0x4faaa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faaa4:{NFSU2_TR(0x4faaa4);
__builtin_memmove((R+4),(R+20),4);
}
B4faaa6:{NFSU2_TR(0x4faaa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faaabull));
TAIL_STATIC(0x51f440u,51f);
}
B4faaab:L4faaab:{c.instructions+=7;NFSU2_TR(0x4faaab);
__builtin_memmove((R+28),(R+0),4);
}
B4faaad:{NFSU2_TR(0x4faaad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faaae:{NFSU2_TR(0x4faaae);
u8 U[4];
w4(U+0,u32(0x79603cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faab3:{NFSU2_TR(0x4faab3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4faab7:{NFSU2_TR(0x4faab7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faab9:{NFSU2_TR(0x4faab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faaba:{NFSU2_TR(0x4faaba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faabfull));
TAIL_STATIC(0x50c960u,50c);
}
B4faabf:L4faabf:{c.instructions+=4;NFSU2_TR(0x4faabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4faac2:{NFSU2_TR(0x4faac2);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4faac6:{NFSU2_TR(0x4faac6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faac7:{NFSU2_TR(0x4faac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faaccull));
TAIL_STATIC(0x505450u,505);
}
B4faacc:L4faacc:{c.instructions+=3;NFSU2_TR(0x4faacc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faacd:{NFSU2_TR(0x4faacd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faace:{NFSU2_TR(0x4faace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faad3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4faad3:L4faad3:{c.instructions+=2;NFSU2_TR(0x4faad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faad4:{NFSU2_TR(0x4faad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faad9ull));
TAIL_STATIC(0x52d100u,52d);
}
B4faad9:L4faad9:{c.instructions+=3;NFSU2_TR(0x4faad9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4faadc:{NFSU2_TR(0x4faadc);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4faade:{NFSU2_TR(0x4faade);
if(r1(R+518)){{goto L4faaff;}}
}
B4faae0:L4faae0:{c.instructions+=2;NFSU2_TR(0x4faae0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4faae2:{NFSU2_TR(0x4faae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4faaff;}}
}
B4faae4:L4faae4:{c.instructions+=5;NFSU2_TR(0x4faae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4faae7:{NFSU2_TR(0x4faae7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faae8:{NFSU2_TR(0x4faae8);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faaed:{NFSU2_TR(0x4faaed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4faaf7:{NFSU2_TR(0x4faaf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faafcull));
TAIL_STATIC(0x55dda0u,55d);
}
B4faafc:L4faafc:{c.instructions+=1;NFSU2_TR(0x4faafc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4faaff:L4faaff:{c.instructions+=5;NFSU2_TR(0x4faaff);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4fab03:{NFSU2_TR(0x4fab03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab04:{NFSU2_TR(0x4fab04);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4fab08:{NFSU2_TR(0x4fab08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab09:{NFSU2_TR(0x4fab09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fab0eull));
TAIL_STATIC(0x50cd70u,50c);
}
B4fab0e:L4fab0e:{c.instructions+=8;NFSU2_TR(0x4fab0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fab14:{NFSU2_TR(0x4fab14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fab18:{NFSU2_TR(0x4fab18);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fab1c:{NFSU2_TR(0x4fab1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fab22:{NFSU2_TR(0x4fab22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab23:{NFSU2_TR(0x4fab23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab24:{NFSU2_TR(0x4fab24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab25:{NFSU2_TR(0x4fab25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fab2aull));
TAIL_STATIC(0x52d020u,52d);
}
B4fab2a:L4fab2a:{c.instructions+=3;NFSU2_TR(0x4fab2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fab2d:{NFSU2_TR(0x4fab2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fab2f:{NFSU2_TR(0x4fab2f);
if(r1(R+518)){{goto L4fab46;}}
}
B4fab31:L4fab31:{c.instructions+=3;NFSU2_TR(0x4fab31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fab37:{NFSU2_TR(0x4fab37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fab41:{NFSU2_TR(0x4fab41);
{goto L4fabdd;}
}
B4fab46:L4fab46:{c.instructions+=7;NFSU2_TR(0x4fab46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fab4c:{NFSU2_TR(0x4fab4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fab50:{NFSU2_TR(0x4fab50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fab54:{NFSU2_TR(0x4fab54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab55:{NFSU2_TR(0x4fab55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab56:{NFSU2_TR(0x4fab56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab57:{NFSU2_TR(0x4fab57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fab5cull));
TAIL_STATIC(0x52d020u,52d);
}
B4fab5c:L4fab5c:{c.instructions+=3;NFSU2_TR(0x4fab5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fab5f:{NFSU2_TR(0x4fab5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fab61:{NFSU2_TR(0x4fab61);
if(r1(R+518)){{goto L4fab7b;}}
}
B4fab63:L4fab63:{c.instructions+=4;NFSU2_TR(0x4fab63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fab69:{NFSU2_TR(0x4fab69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fab6f:{NFSU2_TR(0x4fab6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fab79:{NFSU2_TR(0x4fab79);
{goto L4fabe3;}
}
B4fab7b:L4fab7b:{c.instructions+=7;NFSU2_TR(0x4fab7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fab81:{NFSU2_TR(0x4fab81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fab85:{NFSU2_TR(0x4fab85);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fab89:{NFSU2_TR(0x4fab89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab8a:{NFSU2_TR(0x4fab8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab8b:{NFSU2_TR(0x4fab8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fab8c:{NFSU2_TR(0x4fab8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fab91ull));
TAIL_STATIC(0x52d020u,52d);
}
B4fab91:L4fab91:{c.instructions+=3;NFSU2_TR(0x4fab91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fab94:{NFSU2_TR(0x4fab94);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fab96:{NFSU2_TR(0x4fab96);
if(r1(R+518)){{goto L4fabb0;}}
}
B4fab98:L4fab98:{c.instructions+=4;NFSU2_TR(0x4fab98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fab9e:{NFSU2_TR(0x4fab9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4faba4:{NFSU2_TR(0x4faba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fabae:{NFSU2_TR(0x4fabae);
{goto L4fabe3;}
}
B4fabb0:L4fabb0:{c.instructions+=7;NFSU2_TR(0x4fabb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fabb6:{NFSU2_TR(0x4fabb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fabba:{NFSU2_TR(0x4fabba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fabbe:{NFSU2_TR(0x4fabbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fabbf:{NFSU2_TR(0x4fabbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fabc0:{NFSU2_TR(0x4fabc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fabc1:{NFSU2_TR(0x4fabc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fabc6ull));
TAIL_STATIC(0x52d020u,52d);
}
B4fabc6:L4fabc6:{c.instructions+=3;NFSU2_TR(0x4fabc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fabc9:{NFSU2_TR(0x4fabc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fabcb:{NFSU2_TR(0x4fabcb);
if(r1(R+518)){{goto L4fabe3;}}
}
B4fabcd:L4fabcd:{c.instructions+=2;NFSU2_TR(0x4fabcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fabd3:{NFSU2_TR(0x4fabd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fabdd:L4fabdd:{c.instructions+=1;NFSU2_TR(0x4fabdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fabe3:L4fabe3:{c.instructions+=2;NFSU2_TR(0x4fabe3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fabe9:{NFSU2_TR(0x4fabe9);
if(r1(R+518)){{goto L4fac25;}}
}
B4fabeb:L4fabeb:{c.instructions+=2;NFSU2_TR(0x4fabeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fabed:{NFSU2_TR(0x4fabed);
if(r1(R+518)){{goto L4fabff;}}
}
B4fabef:L4fabef:{c.instructions+=4;NFSU2_TR(0x4fabef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fabf1:{NFSU2_TR(0x4fabf1);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fabf6:{NFSU2_TR(0x4fabf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fabf7:{NFSU2_TR(0x4fabf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fabfcull));
TAIL_STATIC(0x51cf70u,51c);
}
B4fabfc:L4fabfc:{c.instructions+=1;NFSU2_TR(0x4fabfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fabff:L4fabff:{c.instructions+=5;NFSU2_TR(0x4fabff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fac05:{NFSU2_TR(0x4fac05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fac07:{NFSU2_TR(0x4fac07);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fac0c:{NFSU2_TR(0x4fac0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fac0d:{NFSU2_TR(0x4fac0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fac12ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4fac12:L4fac12:{c.instructions+=5;NFSU2_TR(0x4fac12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fac18:{NFSU2_TR(0x4fac18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fac1b:{NFSU2_TR(0x4fac1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fac1c:{NFSU2_TR(0x4fac1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fac1d:{NFSU2_TR(0x4fac1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fac22ull));
TAIL_STATIC(0x52cec0u,52c);
}
B4fac22:L4fac22:{c.instructions+=1;NFSU2_TR(0x4fac22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fac25:L4fac25:{c.instructions+=4;NFSU2_TR(0x4fac25);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B4fac2a:{NFSU2_TR(0x4fac2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fac2c:{NFSU2_TR(0x4fac2c);
w4(R+0,u32(m1(0x8763f2)));
}
B4fac33:{NFSU2_TR(0x4fac33);
if(r1(R+518)){{goto L4fac3c;}}
}
B4fac35:L4fac35:{c.instructions+=1;NFSU2_TR(0x4fac35);
w4(R+0,u32(m1(0x8763f5)));
}
B4fac3c:L4fac3c:{c.instructions+=2;NFSU2_TR(0x4fac3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fac3e:{NFSU2_TR(0x4fac3e);
if(r1(R+518)){TAIL_STATIC(0x4fb0fau,4fb);}
}
B4fac44:L4fac44:{c.instructions+=3;NFSU2_TR(0x4fac44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fac4a:{NFSU2_TR(0x4fac4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fac4b:{NFSU2_TR(0x4fac4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fac50ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fac50:L4fac50:{c.instructions+=3;NFSU2_TR(0x4fac50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fac53:{NFSU2_TR(0x4fac53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fac55:{NFSU2_TR(0x4fac55);
if(r1(R+518)){{goto L4fac60;}}
}
B4fac57:L4fac57:{c.instructions+=2;NFSU2_TR(0x4fac57);
__builtin_memmove((R+4),(R+24),4);
}
B4fac59:{NFSU2_TR(0x4fac59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fac5eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4faa00u);}goto L4faa00;}
}
B4fac5e:L4fac5e:{c.instructions+=1;NFSU2_TR(0x4fac5e);
{goto L4fac99;}
}
B4fac60:L4fac60:{c.instructions+=3;NFSU2_TR(0x4fac60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fac66:{NFSU2_TR(0x4fac66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fac67:{NFSU2_TR(0x4fac67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fac6cull));
TAIL_STATIC(0x52d100u,52d);
}
B4fac6c:L4fac6c:{c.instructions+=3;NFSU2_TR(0x4fac6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fac6f:{NFSU2_TR(0x4fac6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fac71:{NFSU2_TR(0x4fac71);
if(r1(R+518)){{goto L4facf1;}}
}
B4fac73:L4fac73:{c.instructions+=3;NFSU2_TR(0x4fac73);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4fac7a:{NFSU2_TR(0x4fac7a);
__builtin_memmove((R+4),(R+24),4);
}
B4fac7c:{NFSU2_TR(0x4fac7c);
if(r1(R+518)){{goto L4fac94;}}
}
B4fac7e:L4fac7e:{c.instructions+=3;NFSU2_TR(0x4fac7e);
__builtin_memmove((R+8),gp(0x8500ca),1);
}
B4fac84:{NFSU2_TR(0x4fac84);
s4(0x836388,u32(0x0ull));
}
B4fac8e:{NFSU2_TR(0x4fac8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fac94:L4fac94:{c.instructions+=1;NFSU2_TR(0x4fac94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fac99ull));
TAIL_STATIC(0x49ea80u,49e);
}
B4fac99:L4fac99:{c.instructions+=4;NFSU2_TR(0x4fac99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fac9c:{NFSU2_TR(0x4fac9c);
u8 U[4];
w4(U+0,u32(0x6e351c30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faca1:{NFSU2_TR(0x4faca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faca2:{NFSU2_TR(0x4faca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faca7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4faca7:L4faca7:{c.instructions+=5;NFSU2_TR(0x4faca7);
__builtin_memmove((R+28),(R+0),4);
}
B4faca9:{NFSU2_TR(0x4faca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4facac:{NFSU2_TR(0x4facac);
u8 U[4];
w4(U+0,u32(0x31e62b1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4facb1:{NFSU2_TR(0x4facb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4facb2:{NFSU2_TR(0x4facb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4facb7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4facb7:L4facb7:{c.instructions+=3;NFSU2_TR(0x4facb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4facb8:{NFSU2_TR(0x4facb8);
__builtin_memmove((R+20),(R+0),4);
}
B4facba:{NFSU2_TR(0x4facba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4facbfull));
TAIL_STATIC(0x52d100u,52d);
}
B4facbf:L4facbf:{c.instructions+=3;NFSU2_TR(0x4facbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4facc2:{NFSU2_TR(0x4facc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4facc4:{NFSU2_TR(0x4facc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4facd7;}}
}
B4facc6:L4facc6:{c.instructions+=2;NFSU2_TR(0x4facc6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4facc7:{NFSU2_TR(0x4facc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4facccull));
TAIL_STATIC(0x52d100u,52d);
}
B4faccc:L4faccc:{c.instructions+=3;NFSU2_TR(0x4faccc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4faccf:{NFSU2_TR(0x4faccf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4facd1:{NFSU2_TR(0x4facd1);
if(r1(R+518)){{goto L4fadeb;}}
}
B4facd7:L4facd7:{c.instructions+=4;NFSU2_TR(0x4facd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4facdd:{NFSU2_TR(0x4facdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4facdf:{NFSU2_TR(0x4facdf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4face1:{NFSU2_TR(0x4face1);
if(r1(R+518)){{goto L4fadbe;}}
}
B4face7:L4face7:{c.instructions+=2;NFSU2_TR(0x4face7);
u8 U[4];
w4(U+0,u32(0x798fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4facec:{NFSU2_TR(0x4facec);
{goto L4fadc3;}
}
B4facf1:L4facf1:{c.instructions+=3;NFSU2_TR(0x4facf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4facf7:{NFSU2_TR(0x4facf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4facf8:{NFSU2_TR(0x4facf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4facfdull));
TAIL_STATIC(0x52d100u,52d);
}
B4facfd:L4facfd:{c.instructions+=3;NFSU2_TR(0x4facfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fad00:{NFSU2_TR(0x4fad00);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fad02:{NFSU2_TR(0x4fad02);
if(r1(R+518)){{goto L4fad0d;}}
}
B4fad04:L4fad04:{c.instructions+=2;NFSU2_TR(0x4fad04);
__builtin_memmove((R+4),(R+24),4);
}
B4fad06:{NFSU2_TR(0x4fad06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad0bull));
TAIL_STATIC(0x4bb3f0u,4bb);
}
B4fad0b:L4fad0b:{c.instructions+=1;NFSU2_TR(0x4fad0b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fac99u);}goto L4fac99;}
}
B4fad0d:L4fad0d:{c.instructions+=3;NFSU2_TR(0x4fad0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fad13:{NFSU2_TR(0x4fad13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad14:{NFSU2_TR(0x4fad14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad19ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fad19:L4fad19:{c.instructions+=3;NFSU2_TR(0x4fad19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fad1c:{NFSU2_TR(0x4fad1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fad1e:{NFSU2_TR(0x4fad1e);
if(r1(R+518)){{goto L4fad38;}}
}
B4fad20:L4fad20:{c.instructions+=5;NFSU2_TR(0x4fad20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fad23:{NFSU2_TR(0x4fad23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad25:{NFSU2_TR(0x4fad25);
u8 U[4];
w4(U+0,u32(0x798fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad2a:{NFSU2_TR(0x4fad2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad2b:{NFSU2_TR(0x4fad2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad30ull));
TAIL_STATIC(0x537980u,537);
}
B4fad30:L4fad30:{c.instructions+=2;NFSU2_TR(0x4fad30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fad33:{NFSU2_TR(0x4fad33);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fac99u);}goto L4fac99;}
}
B4fad38:L4fad38:{c.instructions+=3;NFSU2_TR(0x4fad38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fad3e:{NFSU2_TR(0x4fad3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad3f:{NFSU2_TR(0x4fad3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad44ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fad44:L4fad44:{c.instructions+=3;NFSU2_TR(0x4fad44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fad47:{NFSU2_TR(0x4fad47);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fad49:{NFSU2_TR(0x4fad49);
if(r1(R+518)){{goto L4fad79;}}
}
B4fad4b:L4fad4b:{c.instructions+=4;NFSU2_TR(0x4fad4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fad4e:{NFSU2_TR(0x4fad4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad4f:{NFSU2_TR(0x4fad4f);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad54:{NFSU2_TR(0x4fad54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad59ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fad59:L4fad59:{c.instructions+=6;NFSU2_TR(0x4fad59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fad5c:{NFSU2_TR(0x4fad5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad5e:{NFSU2_TR(0x4fad5e);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad63:{NFSU2_TR(0x4fad63);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad68:{NFSU2_TR(0x4fad68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad69:{NFSU2_TR(0x4fad69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad6eull));
TAIL_STATIC(0x537c00u,537);
}
B4fad6e:L4fad6e:{c.instructions+=7;NFSU2_TR(0x4fad6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4fad71:{NFSU2_TR(0x4fad71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fad72:{NFSU2_TR(0x4fad72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fad73:{NFSU2_TR(0x4fad73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fad74:{NFSU2_TR(0x4fad74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fad75:{NFSU2_TR(0x4fad75);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fad78:{NFSU2_TR(0x4fad78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fad79:L4fad79:{c.instructions+=3;NFSU2_TR(0x4fad79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fad7f:{NFSU2_TR(0x4fad7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad80:{NFSU2_TR(0x4fad80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad85ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fad85:L4fad85:{c.instructions+=3;NFSU2_TR(0x4fad85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fad88:{NFSU2_TR(0x4fad88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fad8a:{NFSU2_TR(0x4fad8a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fac99u);}goto L4fac99;}}
}
B4fad90:L4fad90:{c.instructions+=4;NFSU2_TR(0x4fad90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fad93:{NFSU2_TR(0x4fad93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad94:{NFSU2_TR(0x4fad94);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fad99:{NFSU2_TR(0x4fad99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fad9eull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fad9e:L4fad9e:{c.instructions+=6;NFSU2_TR(0x4fad9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fada1:{NFSU2_TR(0x4fada1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fada3:{NFSU2_TR(0x4fada3);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fada8:{NFSU2_TR(0x4fada8);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fadad:{NFSU2_TR(0x4fadad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fadae:{NFSU2_TR(0x4fadae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fadb3ull));
TAIL_STATIC(0x537c00u,537);
}
B4fadb3:L4fadb3:{c.instructions+=7;NFSU2_TR(0x4fadb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4fadb6:{NFSU2_TR(0x4fadb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fadb7:{NFSU2_TR(0x4fadb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fadb8:{NFSU2_TR(0x4fadb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fadb9:{NFSU2_TR(0x4fadb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fadba:{NFSU2_TR(0x4fadba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fadbd:{NFSU2_TR(0x4fadbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fadbe:L4fadbe:{c.instructions+=1;NFSU2_TR(0x4fadbe);
u8 U[4];
w4(U+0,u32(0x798fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fadc3:L4fadc3:{c.instructions+=2;NFSU2_TR(0x4fadc3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fadc4:{NFSU2_TR(0x4fadc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fadc9ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4fadc9:L4fadc9:{c.instructions+=9;NFSU2_TR(0x4fadc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4fadcf:{NFSU2_TR(0x4fadcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fadd5:{NFSU2_TR(0x4fadd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fadd8:{NFSU2_TR(0x4fadd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fadda:{NFSU2_TR(0x4fadda);
__builtin_memmove((R+0),(R+518),1);
}
B4faddd:{NFSU2_TR(0x4faddd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fade3:{NFSU2_TR(0x4fade3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fade4:{NFSU2_TR(0x4fade4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fade6:{NFSU2_TR(0x4fade6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fadebull));
TAIL_STATIC(0x5907a0u,590);
}
B4fadeb:L4fadeb:{c.instructions+=4;NFSU2_TR(0x4fadeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fadee:{NFSU2_TR(0x4fadee);
u8 U[4];
w4(U+0,u32(0x5b80b337ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fadf3:{NFSU2_TR(0x4fadf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fadf4:{NFSU2_TR(0x4fadf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fadf9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fadf9:L4fadf9:{c.instructions+=5;NFSU2_TR(0x4fadf9);
__builtin_memmove((R+12),(R+0),4);
}
B4fadfb:{NFSU2_TR(0x4fadfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fadfe:{NFSU2_TR(0x4fadfe);
u8 U[4];
w4(U+0,u32(0x601eab61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae03:{NFSU2_TR(0x4fae03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae04:{NFSU2_TR(0x4fae04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae09ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fae09:L4fae09:{c.instructions+=3;NFSU2_TR(0x4fae09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae0a:{NFSU2_TR(0x4fae0a);
__builtin_memmove((R+28),(R+0),4);
}
B4fae0c:{NFSU2_TR(0x4fae0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae11ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fae11:L4fae11:{c.instructions+=3;NFSU2_TR(0x4fae11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fae14:{NFSU2_TR(0x4fae14);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fae16:{NFSU2_TR(0x4fae16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fae25;}}
}
B4fae18:L4fae18:{c.instructions+=2;NFSU2_TR(0x4fae18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae19:{NFSU2_TR(0x4fae19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae1eull));
TAIL_STATIC(0x52d100u,52d);
}
B4fae1e:L4fae1e:{c.instructions+=3;NFSU2_TR(0x4fae1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fae21:{NFSU2_TR(0x4fae21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fae23:{NFSU2_TR(0x4fae23);
if(r1(R+518)){{goto L4fae65;}}
}
B4fae25:L4fae25:{c.instructions+=4;NFSU2_TR(0x4fae25);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fae2b:{NFSU2_TR(0x4fae2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fae2d:{NFSU2_TR(0x4fae2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae2f:{NFSU2_TR(0x4fae2f);
if(r1(R+518)){{goto L4fae38;}}
}
B4fae31:L4fae31:{c.instructions+=2;NFSU2_TR(0x4fae31);
u8 U[4];
w4(U+0,u32(0x798fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae36:{NFSU2_TR(0x4fae36);
{goto L4fae3d;}
}
B4fae38:L4fae38:{c.instructions+=1;NFSU2_TR(0x4fae38);
u8 U[4];
w4(U+0,u32(0x798fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae3d:L4fae3d:{c.instructions+=2;NFSU2_TR(0x4fae3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae3e:{NFSU2_TR(0x4fae3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae43ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4fae43:L4fae43:{c.instructions+=9;NFSU2_TR(0x4fae43);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4fae49:{NFSU2_TR(0x4fae49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fae4f:{NFSU2_TR(0x4fae4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fae52:{NFSU2_TR(0x4fae52);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fae54:{NFSU2_TR(0x4fae54);
__builtin_memmove((R+0),(R+518),1);
}
B4fae57:{NFSU2_TR(0x4fae57);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fae5d:{NFSU2_TR(0x4fae5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae5e:{NFSU2_TR(0x4fae5e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae60:{NFSU2_TR(0x4fae60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae65ull));
TAIL_STATIC(0x5907a0u,590);
}
B4fae65:L4fae65:{c.instructions+=4;NFSU2_TR(0x4fae65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fae68:{NFSU2_TR(0x4fae68);
u8 U[4];
w4(U+0,u32(0x8e3e2242ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae6d:{NFSU2_TR(0x4fae6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae6e:{NFSU2_TR(0x4fae6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae73ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fae73:L4fae73:{c.instructions+=5;NFSU2_TR(0x4fae73);
__builtin_memmove((R+12),(R+0),4);
}
B4fae75:{NFSU2_TR(0x4fae75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fae78:{NFSU2_TR(0x4fae78);
u8 U[4];
w4(U+0,u32(0xbbb3f6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae7d:{NFSU2_TR(0x4fae7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae7e:{NFSU2_TR(0x4fae7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae83ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fae83:L4fae83:{c.instructions+=3;NFSU2_TR(0x4fae83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae84:{NFSU2_TR(0x4fae84);
__builtin_memmove((R+28),(R+0),4);
}
B4fae86:{NFSU2_TR(0x4fae86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae8bull));
TAIL_STATIC(0x52d100u,52d);
}
B4fae8b:L4fae8b:{c.instructions+=3;NFSU2_TR(0x4fae8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4fae8e:{NFSU2_TR(0x4fae8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fae90:{NFSU2_TR(0x4fae90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fae9f;}}
}
B4fae92:L4fae92:{c.instructions+=2;NFSU2_TR(0x4fae92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fae93:{NFSU2_TR(0x4fae93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fae98ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fae98:L4fae98:{c.instructions+=3;NFSU2_TR(0x4fae98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fae9b:{NFSU2_TR(0x4fae9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fae9d:{NFSU2_TR(0x4fae9d);
if(r1(R+518)){{goto L4faedf;}}
}
B4fae9f:L4fae9f:{c.instructions+=4;NFSU2_TR(0x4fae9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4faea5:{NFSU2_TR(0x4faea5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faea7:{NFSU2_TR(0x4faea7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faea9:{NFSU2_TR(0x4faea9);
if(r1(R+518)){{goto L4faeb2;}}
}
B4faeab:L4faeab:{c.instructions+=2;NFSU2_TR(0x4faeab);
u8 U[4];
w4(U+0,u32(0x798fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faeb0:{NFSU2_TR(0x4faeb0);
{goto L4faeb7;}
}
B4faeb2:L4faeb2:{c.instructions+=1;NFSU2_TR(0x4faeb2);
u8 U[4];
w4(U+0,u32(0x798fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faeb7:L4faeb7:{c.instructions+=2;NFSU2_TR(0x4faeb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faeb8:{NFSU2_TR(0x4faeb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faebdull));
TAIL_STATIC(0x51cf70u,51c);
}
B4faebd:L4faebd:{c.instructions+=9;NFSU2_TR(0x4faebd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4faec3:{NFSU2_TR(0x4faec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4faec9:{NFSU2_TR(0x4faec9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4faecc:{NFSU2_TR(0x4faecc);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faece:{NFSU2_TR(0x4faece);
__builtin_memmove((R+0),(R+518),1);
}
B4faed1:{NFSU2_TR(0x4faed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4faed7:{NFSU2_TR(0x4faed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faed8:{NFSU2_TR(0x4faed8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faeda:{NFSU2_TR(0x4faeda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faedfull));
TAIL_STATIC(0x5907a0u,590);
}
B4faedf:L4faedf:{c.instructions+=4;NFSU2_TR(0x4faedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4faee2:{NFSU2_TR(0x4faee2);
u8 U[4];
w4(U+0,u32(0x17c1230aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faee7:{NFSU2_TR(0x4faee7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faee8:{NFSU2_TR(0x4faee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faeedull));
TAIL_STATIC(0x5379c0u,537);
}
B4faeed:L4faeed:{c.instructions+=5;NFSU2_TR(0x4faeed);
__builtin_memmove((R+12),(R+0),4);
}
B4faeef:{NFSU2_TR(0x4faeef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4faef2:{NFSU2_TR(0x4faef2);
u8 U[4];
w4(U+0,u32(0x3ef66d74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faef7:{NFSU2_TR(0x4faef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faef8:{NFSU2_TR(0x4faef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faefdull));
TAIL_STATIC(0x5379c0u,537);
}
B4faefd:L4faefd:{c.instructions+=3;NFSU2_TR(0x4faefd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faefe:{NFSU2_TR(0x4faefe);
__builtin_memmove((R+28),(R+0),4);
}
B4faf00:{NFSU2_TR(0x4faf00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf05ull));
TAIL_STATIC(0x52d100u,52d);
}
B4faf05:L4faf05:{c.instructions+=3;NFSU2_TR(0x4faf05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4faf08:{NFSU2_TR(0x4faf08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faf0a:{NFSU2_TR(0x4faf0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4faf19;}}
}
B4faf0c:L4faf0c:{c.instructions+=2;NFSU2_TR(0x4faf0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf0d:{NFSU2_TR(0x4faf0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf12ull));
TAIL_STATIC(0x52d100u,52d);
}
B4faf12:L4faf12:{c.instructions+=3;NFSU2_TR(0x4faf12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4faf15:{NFSU2_TR(0x4faf15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faf17:{NFSU2_TR(0x4faf17);
if(r1(R+518)){{goto L4faf59;}}
}
B4faf19:L4faf19:{c.instructions+=4;NFSU2_TR(0x4faf19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4faf1f:{NFSU2_TR(0x4faf1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faf21:{NFSU2_TR(0x4faf21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf23:{NFSU2_TR(0x4faf23);
if(r1(R+518)){{goto L4faf2c;}}
}
B4faf25:L4faf25:{c.instructions+=2;NFSU2_TR(0x4faf25);
u8 U[4];
w4(U+0,u32(0x798fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf2a:{NFSU2_TR(0x4faf2a);
{goto L4faf31;}
}
B4faf2c:L4faf2c:{c.instructions+=1;NFSU2_TR(0x4faf2c);
u8 U[4];
w4(U+0,u32(0x798fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf31:L4faf31:{c.instructions+=2;NFSU2_TR(0x4faf31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf32:{NFSU2_TR(0x4faf32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf37ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4faf37:L4faf37:{c.instructions+=9;NFSU2_TR(0x4faf37);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4faf3d:{NFSU2_TR(0x4faf3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4faf43:{NFSU2_TR(0x4faf43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4faf46:{NFSU2_TR(0x4faf46);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faf48:{NFSU2_TR(0x4faf48);
__builtin_memmove((R+0),(R+518),1);
}
B4faf4b:{NFSU2_TR(0x4faf4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4faf51:{NFSU2_TR(0x4faf51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf52:{NFSU2_TR(0x4faf52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf54:{NFSU2_TR(0x4faf54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf59ull));
TAIL_STATIC(0x5907a0u,590);
}
B4faf59:L4faf59:{c.instructions+=4;NFSU2_TR(0x4faf59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4faf5c:{NFSU2_TR(0x4faf5c);
u8 U[4];
w4(U+0,u32(0xaaa423abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf61:{NFSU2_TR(0x4faf61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf62:{NFSU2_TR(0x4faf62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf67ull));
TAIL_STATIC(0x5379c0u,537);
}
B4faf67:L4faf67:{c.instructions+=5;NFSU2_TR(0x4faf67);
__builtin_memmove((R+12),(R+0),4);
}
B4faf69:{NFSU2_TR(0x4faf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4faf6c:{NFSU2_TR(0x4faf6c);
u8 U[4];
w4(U+0,u32(0x9979a2d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf71:{NFSU2_TR(0x4faf71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf72:{NFSU2_TR(0x4faf72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf77ull));
TAIL_STATIC(0x5379c0u,537);
}
B4faf77:L4faf77:{c.instructions+=3;NFSU2_TR(0x4faf77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf78:{NFSU2_TR(0x4faf78);
__builtin_memmove((R+28),(R+0),4);
}
B4faf7a:{NFSU2_TR(0x4faf7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf7full));
TAIL_STATIC(0x52d100u,52d);
}
B4faf7f:L4faf7f:{c.instructions+=3;NFSU2_TR(0x4faf7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4faf82:{NFSU2_TR(0x4faf82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faf84:{NFSU2_TR(0x4faf84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4faf93;}}
}
B4faf86:L4faf86:{c.instructions+=2;NFSU2_TR(0x4faf86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf87:{NFSU2_TR(0x4faf87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4faf8cull));
TAIL_STATIC(0x52d100u,52d);
}
B4faf8c:L4faf8c:{c.instructions+=3;NFSU2_TR(0x4faf8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4faf8f:{NFSU2_TR(0x4faf8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faf91:{NFSU2_TR(0x4faf91);
if(r1(R+518)){{goto L4fafd3;}}
}
B4faf93:L4faf93:{c.instructions+=4;NFSU2_TR(0x4faf93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4faf99:{NFSU2_TR(0x4faf99);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4faf9b:{NFSU2_TR(0x4faf9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4faf9d:{NFSU2_TR(0x4faf9d);
if(r1(R+518)){{goto L4fafa6;}}
}
B4faf9f:L4faf9f:{c.instructions+=2;NFSU2_TR(0x4faf9f);
u8 U[4];
w4(U+0,u32(0x798fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafa4:{NFSU2_TR(0x4fafa4);
{goto L4fafab;}
}
B4fafa6:L4fafa6:{c.instructions+=1;NFSU2_TR(0x4fafa6);
u8 U[4];
w4(U+0,u32(0x798fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafab:L4fafab:{c.instructions+=2;NFSU2_TR(0x4fafab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafac:{NFSU2_TR(0x4fafac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fafb1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4fafb1:L4fafb1:{c.instructions+=9;NFSU2_TR(0x4fafb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4fafb7:{NFSU2_TR(0x4fafb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fafbd:{NFSU2_TR(0x4fafbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fafc0:{NFSU2_TR(0x4fafc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fafc2:{NFSU2_TR(0x4fafc2);
__builtin_memmove((R+0),(R+518),1);
}
B4fafc5:{NFSU2_TR(0x4fafc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fafcb:{NFSU2_TR(0x4fafcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafcc:{NFSU2_TR(0x4fafcc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafce:{NFSU2_TR(0x4fafce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fafd3ull));
TAIL_STATIC(0x5907a0u,590);
}
B4fafd3:L4fafd3:{c.instructions+=4;NFSU2_TR(0x4fafd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fafd6:{NFSU2_TR(0x4fafd6);
u8 U[4];
w4(U+0,u32(0x28c0ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafdb:{NFSU2_TR(0x4fafdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafdc:{NFSU2_TR(0x4fafdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fafe1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4fafe1:L4fafe1:{c.instructions+=2;NFSU2_TR(0x4fafe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fafe2:{NFSU2_TR(0x4fafe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fafe7ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fafe7:L4fafe7:{c.instructions+=3;NFSU2_TR(0x4fafe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fafea:{NFSU2_TR(0x4fafea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fafec:{NFSU2_TR(0x4fafec);
if(r1(R+518)){TAIL_STATIC(0x4fb034u,4fb);}
}
B4fafee:L4fafee:{c.instructions+=4;NFSU2_TR(0x4fafee);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4faff3:{NFSU2_TR(0x4faff3);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x83a9c8))));
}
B4faff9:{NFSU2_TR(0x4faff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4faffd:{NFSU2_TR(0x4faffd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x4fb001u,4fb);
}
XIT:NFSU2_TR_EXIT(0x4fa,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
