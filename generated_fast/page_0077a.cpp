#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x77a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x77a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_77a(u8* __restrict R,Cpu& c);
u32 page_77a(Cpu& c){return body_77a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_77a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x77a000:goto L77a000;
case 0x77a003:c.instructions+=1;goto B77a003;
case 0x77a008:goto L77a008;
case 0x77a00a:c.instructions+=4;goto B77a00a;
case 0x77a00f:c.instructions+=3;goto B77a00f;
case 0x77a012:c.instructions+=2;goto B77a012;
case 0x77a013:c.instructions+=1;goto B77a013;
case 0x77a018:goto L77a018;
case 0x77a01b:c.instructions+=1;goto B77a01b;
case 0x77a01c:goto L77a01c;
case 0x77a01e:c.instructions+=4;goto B77a01e;
case 0x77a023:c.instructions+=3;goto B77a023;
case 0x77a026:c.instructions+=2;goto B77a026;
case 0x77a027:c.instructions+=1;goto B77a027;
case 0x77a02c:goto L77a02c;
case 0x77a02f:c.instructions+=1;goto B77a02f;
case 0x77a030:goto L77a030;
case 0x77a035:c.instructions+=1;goto B77a035;
case 0x77a040:goto L77a040;
case 0x77a042:c.instructions+=4;goto B77a042;
case 0x77a047:c.instructions+=3;goto B77a047;
case 0x77a04a:c.instructions+=2;goto B77a04a;
case 0x77a04b:c.instructions+=1;goto B77a04b;
case 0x77a050:goto L77a050;
case 0x77a053:c.instructions+=1;goto B77a053;
case 0x77a054:goto L77a054;
case 0x77a056:c.instructions+=4;goto B77a056;
case 0x77a05b:c.instructions+=3;goto B77a05b;
case 0x77a05e:c.instructions+=2;goto B77a05e;
case 0x77a05f:c.instructions+=1;goto B77a05f;
case 0x77a064:goto L77a064;
case 0x77a067:c.instructions+=1;goto B77a067;
case 0x77a068:goto L77a068;
case 0x77a06a:c.instructions+=4;goto B77a06a;
case 0x77a06f:c.instructions+=3;goto B77a06f;
case 0x77a072:c.instructions+=2;goto B77a072;
case 0x77a073:c.instructions+=1;goto B77a073;
case 0x77a078:goto L77a078;
case 0x77a07b:c.instructions+=1;goto B77a07b;
case 0x77a07c:goto L77a07c;
case 0x77a07f:c.instructions+=1;goto B77a07f;
case 0x77a084:goto L77a084;
case 0x77a089:c.instructions+=1;goto B77a089;
case 0x77a090:goto L77a090;
case 0x77a093:c.instructions+=2;goto B77a093;
case 0x77a096:c.instructions+=1;goto B77a096;
case 0x77a09b:goto L77a09b;
case 0x77a0a0:c.instructions+=1;goto B77a0a0;
case 0x77a0b0:goto L77a0b0;
case 0x77a0b2:c.instructions+=4;goto B77a0b2;
case 0x77a0b7:c.instructions+=3;goto B77a0b7;
case 0x77a0ba:c.instructions+=2;goto B77a0ba;
case 0x77a0bb:c.instructions+=1;goto B77a0bb;
case 0x77a0c0:goto L77a0c0;
case 0x77a0c3:c.instructions+=1;goto B77a0c3;
case 0x77a0c4:goto L77a0c4;
case 0x77a0c6:c.instructions+=4;goto B77a0c6;
case 0x77a0cb:c.instructions+=3;goto B77a0cb;
case 0x77a0ce:c.instructions+=2;goto B77a0ce;
case 0x77a0cf:c.instructions+=1;goto B77a0cf;
case 0x77a0d4:goto L77a0d4;
case 0x77a0d7:c.instructions+=1;goto B77a0d7;
case 0x77a0d8:goto L77a0d8;
case 0x77a0da:c.instructions+=4;goto B77a0da;
case 0x77a0df:c.instructions+=3;goto B77a0df;
case 0x77a0e2:c.instructions+=2;goto B77a0e2;
case 0x77a0e3:c.instructions+=1;goto B77a0e3;
case 0x77a0e8:goto L77a0e8;
case 0x77a0eb:c.instructions+=1;goto B77a0eb;
case 0x77a0ec:goto L77a0ec;
case 0x77a0f1:c.instructions+=1;goto B77a0f1;
case 0x77a100:goto L77a100;
case 0x77a103:c.instructions+=2;goto B77a103;
case 0x77a104:c.instructions+=1;goto B77a104;
case 0x77a109:goto L77a109;
case 0x77a10a:c.instructions+=1;goto B77a10a;
case 0x77a10b:goto L77a10b;
case 0x77a10d:c.instructions+=4;goto B77a10d;
case 0x77a112:c.instructions+=3;goto B77a112;
case 0x77a115:c.instructions+=2;goto B77a115;
case 0x77a116:c.instructions+=1;goto B77a116;
case 0x77a11b:goto L77a11b;
case 0x77a11e:c.instructions+=1;goto B77a11e;
case 0x77a11f:goto L77a11f;
case 0x77a124:c.instructions+=1;goto B77a124;
case 0x77a130:goto L77a130;
case 0x77a133:c.instructions+=1;goto B77a133;
case 0x77a138:goto L77a138;
case 0x77a13b:c.instructions+=2;goto B77a13b;
case 0x77a13e:c.instructions+=1;goto B77a13e;
case 0x77a143:goto L77a143;
case 0x77a148:c.instructions+=1;goto B77a148;
case 0x77a150:goto L77a150;
case 0x77a152:c.instructions+=4;goto B77a152;
case 0x77a157:c.instructions+=3;goto B77a157;
case 0x77a15a:c.instructions+=2;goto B77a15a;
case 0x77a15b:c.instructions+=1;goto B77a15b;
case 0x77a160:goto L77a160;
case 0x77a163:c.instructions+=1;goto B77a163;
case 0x77a164:goto L77a164;
case 0x77a169:c.instructions+=1;goto B77a169;
case 0x77a170:goto L77a170;
case 0x77a175:c.instructions+=5;goto B77a175;
case 0x77a177:c.instructions+=4;goto B77a177;
case 0x77a179:c.instructions+=3;goto B77a179;
case 0x77a17f:c.instructions+=2;goto B77a17f;
case 0x77a180:c.instructions+=1;goto B77a180;
case 0x77a185:goto L77a185;
case 0x77a186:goto L77a186;
case 0x77a18b:c.instructions+=1;goto B77a18b;
case 0x77a190:goto L77a190;
case 0x77a193:c.instructions+=2;goto B77a193;
case 0x77a194:c.instructions+=1;goto B77a194;
case 0x77a199:goto L77a199;
case 0x77a19a:c.instructions+=1;goto B77a19a;
case 0x77a19b:goto L77a19b;
case 0x77a19e:c.instructions+=2;goto B77a19e;
case 0x77a19f:c.instructions+=1;goto B77a19f;
case 0x77a1a4:goto L77a1a4;
case 0x77a1a5:c.instructions+=1;goto B77a1a5;
case 0x77a1a6:goto L77a1a6;
case 0x77a1ab:c.instructions+=1;goto B77a1ab;
case 0x77a1b0:goto L77a1b0;
case 0x77a1b3:c.instructions+=2;goto B77a1b3;
case 0x77a1b9:c.instructions+=1;goto B77a1b9;
case 0x77a1be:goto L77a1be;
case 0x77a1c3:c.instructions+=1;goto B77a1c3;
case 0x77a1d0:goto L77a1d0;
case 0x77a1d3:c.instructions+=2;goto B77a1d3;
case 0x77a1d4:c.instructions+=1;goto B77a1d4;
case 0x77a1d9:goto L77a1d9;
case 0x77a1da:c.instructions+=1;goto B77a1da;
case 0x77a1db:goto L77a1db;
case 0x77a1e0:c.instructions+=1;goto B77a1e0;
case 0x77a1f0:goto L77a1f0;
case 0x77a1f3:c.instructions+=2;goto B77a1f3;
case 0x77a1f4:c.instructions+=1;goto B77a1f4;
case 0x77a1f9:goto L77a1f9;
case 0x77a1fa:c.instructions+=1;goto B77a1fa;
case 0x77a1fb:goto L77a1fb;
case 0x77a200:c.instructions+=1;goto B77a200;
case 0x77a210:goto L77a210;
case 0x77a213:c.instructions+=2;goto B77a213;
case 0x77a216:c.instructions+=1;goto B77a216;
case 0x77a21b:goto L77a21b;
case 0x77a220:c.instructions+=1;goto B77a220;
case 0x77a230:goto L77a230;
case 0x77a233:c.instructions+=2;goto B77a233;
case 0x77a239:c.instructions+=1;goto B77a239;
case 0x77a23e:goto L77a23e;
case 0x77a243:c.instructions+=6;goto B77a243;
case 0x77a245:c.instructions+=5;goto B77a245;
case 0x77a247:c.instructions+=4;goto B77a247;
case 0x77a24a:c.instructions+=3;goto B77a24a;
case 0x77a24f:c.instructions+=2;goto B77a24f;
case 0x77a250:c.instructions+=1;goto B77a250;
case 0x77a255:goto L77a255;
case 0x77a256:goto L77a256;
case 0x77a25b:c.instructions+=6;goto B77a25b;
case 0x77a25d:c.instructions+=5;goto B77a25d;
case 0x77a25f:c.instructions+=4;goto B77a25f;
case 0x77a262:c.instructions+=3;goto B77a262;
case 0x77a267:c.instructions+=2;goto B77a267;
case 0x77a268:c.instructions+=1;goto B77a268;
case 0x77a26d:goto L77a26d;
case 0x77a26e:goto L77a26e;
case 0x77a271:c.instructions+=2;goto B77a271;
case 0x77a277:c.instructions+=1;goto B77a277;
case 0x77a27c:goto L77a27c;
case 0x77a281:c.instructions+=6;goto B77a281;
case 0x77a283:c.instructions+=5;goto B77a283;
case 0x77a285:c.instructions+=4;goto B77a285;
case 0x77a288:c.instructions+=3;goto B77a288;
case 0x77a28d:c.instructions+=2;goto B77a28d;
case 0x77a28e:c.instructions+=1;goto B77a28e;
case 0x77a293:goto L77a293;
case 0x77a294:goto L77a294;
case 0x77a299:c.instructions+=6;goto B77a299;
case 0x77a29b:c.instructions+=5;goto B77a29b;
case 0x77a29d:c.instructions+=4;goto B77a29d;
case 0x77a2a0:c.instructions+=3;goto B77a2a0;
case 0x77a2a5:c.instructions+=2;goto B77a2a5;
case 0x77a2a6:c.instructions+=1;goto B77a2a6;
case 0x77a2ab:goto L77a2ab;
case 0x77a2ac:goto L77a2ac;
case 0x77a2b1:c.instructions+=6;goto B77a2b1;
case 0x77a2b3:c.instructions+=5;goto B77a2b3;
case 0x77a2b5:c.instructions+=4;goto B77a2b5;
case 0x77a2b8:c.instructions+=3;goto B77a2b8;
case 0x77a2bd:c.instructions+=2;goto B77a2bd;
case 0x77a2be:c.instructions+=1;goto B77a2be;
case 0x77a2c3:goto L77a2c3;
case 0x77a2c4:goto L77a2c4;
case 0x77a2c9:c.instructions+=6;goto B77a2c9;
case 0x77a2cb:c.instructions+=5;goto B77a2cb;
case 0x77a2cd:c.instructions+=4;goto B77a2cd;
case 0x77a2d0:c.instructions+=3;goto B77a2d0;
case 0x77a2d5:c.instructions+=2;goto B77a2d5;
case 0x77a2d6:c.instructions+=1;goto B77a2d6;
case 0x77a2db:goto L77a2db;
case 0x77a2dc:goto L77a2dc;
case 0x77a2e1:c.instructions+=1;goto B77a2e1;
case 0x77a2f0:goto L77a2f0;
case 0x77a2f5:c.instructions+=3;goto B77a2f5;
case 0x77a2f8:c.instructions+=2;goto B77a2f8;
case 0x77a2fd:c.instructions+=1;goto B77a2fd;
case 0x77a2fe:goto L77a2fe;
case 0x77a303:c.instructions+=1;goto B77a303;
case 0x77a310:goto L77a310;
case 0x77a313:c.instructions+=2;goto B77a313;
case 0x77a316:c.instructions+=1;goto B77a316;
case 0x77a31b:goto L77a31b;
case 0x77a320:c.instructions+=1;goto B77a320;
case 0x77a330:goto L77a330;
case 0x77a333:c.instructions+=2;goto B77a333;
case 0x77a336:c.instructions+=1;goto B77a336;
case 0x77a33b:goto L77a33b;
case 0x77a33e:c.instructions+=2;goto B77a33e;
case 0x77a341:c.instructions+=1;goto B77a341;
case 0x77a346:goto L77a346;
case 0x77a349:c.instructions+=2;goto B77a349;
case 0x77a34c:c.instructions+=1;goto B77a34c;
case 0x77a351:goto L77a351;
case 0x77a354:c.instructions+=2;goto B77a354;
case 0x77a357:c.instructions+=1;goto B77a357;
case 0x77a35c:goto L77a35c;
case 0x77a35f:c.instructions+=2;goto B77a35f;
case 0x77a362:c.instructions+=1;goto B77a362;
case 0x77a367:goto L77a367;
case 0x77a36a:c.instructions+=2;goto B77a36a;
case 0x77a36d:c.instructions+=1;goto B77a36d;
case 0x77a372:goto L77a372;
case 0x77a375:c.instructions+=2;goto B77a375;
case 0x77a378:c.instructions+=1;goto B77a378;
case 0x77a37d:goto L77a37d;
case 0x77a382:c.instructions+=1;goto B77a382;
case 0x77a390:goto L77a390;
case 0x77a393:c.instructions+=2;goto B77a393;
case 0x77a394:c.instructions+=1;goto B77a394;
case 0x77a399:goto L77a399;
case 0x77a39a:c.instructions+=1;goto B77a39a;
case 0x77a39b:goto L77a39b;
case 0x77a3a0:c.instructions+=1;goto B77a3a0;
case 0x77a3b0:goto L77a3b0;
case 0x77a3b3:c.instructions+=2;goto B77a3b3;
case 0x77a3b6:c.instructions+=1;goto B77a3b6;
case 0x77a3bb:goto L77a3bb;
case 0x77a3c0:c.instructions+=1;goto B77a3c0;
case 0x77a3d0:goto L77a3d0;
case 0x77a3d3:c.instructions+=2;goto B77a3d3;
case 0x77a3d4:c.instructions+=1;goto B77a3d4;
case 0x77a3d9:goto L77a3d9;
case 0x77a3da:c.instructions+=1;goto B77a3da;
case 0x77a3db:goto L77a3db;
case 0x77a3e0:c.instructions+=1;goto B77a3e0;
case 0x77a3f0:goto L77a3f0;
case 0x77a3f6:c.instructions+=2;goto B77a3f6;
case 0x77a3fc:c.instructions+=1;goto B77a3fc;
case 0x77a401:goto L77a401;
case 0x77a406:c.instructions+=6;goto B77a406;
case 0x77a408:c.instructions+=5;goto B77a408;
case 0x77a40a:c.instructions+=4;goto B77a40a;
case 0x77a410:c.instructions+=3;goto B77a410;
case 0x77a415:c.instructions+=2;goto B77a415;
case 0x77a416:c.instructions+=1;goto B77a416;
case 0x77a41b:goto L77a41b;
case 0x77a41c:goto L77a41c;
case 0x77a421:c.instructions+=6;goto B77a421;
case 0x77a423:c.instructions+=5;goto B77a423;
case 0x77a425:c.instructions+=4;goto B77a425;
case 0x77a42b:c.instructions+=3;goto B77a42b;
case 0x77a430:c.instructions+=2;goto B77a430;
case 0x77a431:c.instructions+=1;goto B77a431;
case 0x77a436:goto L77a436;
case 0x77a437:goto L77a437;
case 0x77a43d:c.instructions+=2;goto B77a43d;
case 0x77a443:c.instructions+=1;goto B77a443;
case 0x77a448:goto L77a448;
case 0x77a44d:c.instructions+=6;goto B77a44d;
case 0x77a44f:c.instructions+=5;goto B77a44f;
case 0x77a451:c.instructions+=4;goto B77a451;
case 0x77a457:c.instructions+=3;goto B77a457;
case 0x77a45c:c.instructions+=2;goto B77a45c;
case 0x77a45d:c.instructions+=1;goto B77a45d;
case 0x77a462:goto L77a462;
case 0x77a463:goto L77a463;
case 0x77a468:c.instructions+=6;goto B77a468;
case 0x77a46a:c.instructions+=5;goto B77a46a;
case 0x77a46c:c.instructions+=4;goto B77a46c;
case 0x77a472:c.instructions+=3;goto B77a472;
case 0x77a477:c.instructions+=2;goto B77a477;
case 0x77a478:c.instructions+=1;goto B77a478;
case 0x77a47d:goto L77a47d;
case 0x77a47e:goto L77a47e;
case 0x77a483:c.instructions+=6;goto B77a483;
case 0x77a485:c.instructions+=5;goto B77a485;
case 0x77a487:c.instructions+=4;goto B77a487;
case 0x77a48d:c.instructions+=3;goto B77a48d;
case 0x77a492:c.instructions+=2;goto B77a492;
case 0x77a493:c.instructions+=1;goto B77a493;
case 0x77a498:goto L77a498;
case 0x77a499:goto L77a499;
case 0x77a49e:c.instructions+=6;goto B77a49e;
case 0x77a4a0:c.instructions+=5;goto B77a4a0;
case 0x77a4a2:c.instructions+=4;goto B77a4a2;
case 0x77a4a8:c.instructions+=3;goto B77a4a8;
case 0x77a4ad:c.instructions+=2;goto B77a4ad;
case 0x77a4ae:c.instructions+=1;goto B77a4ae;
case 0x77a4b3:goto L77a4b3;
case 0x77a4b4:goto L77a4b4;
case 0x77a4b9:c.instructions+=1;goto B77a4b9;
case 0x77a4c0:goto L77a4c0;
case 0x77a4c3:c.instructions+=2;goto B77a4c3;
case 0x77a4c6:c.instructions+=1;goto B77a4c6;
case 0x77a4cb:goto L77a4cb;
case 0x77a4ce:c.instructions+=2;goto B77a4ce;
case 0x77a4d4:c.instructions+=1;goto B77a4d4;
case 0x77a4d9:goto L77a4d9;
case 0x77a4de:c.instructions+=1;goto B77a4de;
case 0x77a4f0:goto L77a4f0;
case 0x77a4f3:c.instructions+=2;goto B77a4f3;
case 0x77a4f6:c.instructions+=1;goto B77a4f6;
case 0x77a4fb:goto L77a4fb;
case 0x77a500:c.instructions+=1;goto B77a500;
case 0x77a510:goto L77a510;
case 0x77a512:c.instructions+=4;goto B77a512;
case 0x77a517:c.instructions+=3;goto B77a517;
case 0x77a51a:c.instructions+=2;goto B77a51a;
case 0x77a51b:c.instructions+=1;goto B77a51b;
case 0x77a520:goto L77a520;
case 0x77a523:c.instructions+=1;goto B77a523;
case 0x77a524:goto L77a524;
case 0x77a529:c.instructions+=1;goto B77a529;
case 0x77a530:goto L77a530;
case 0x77a533:c.instructions+=2;goto B77a533;
case 0x77a534:c.instructions+=1;goto B77a534;
case 0x77a539:goto L77a539;
case 0x77a53a:c.instructions+=1;goto B77a53a;
case 0x77a53b:goto L77a53b;
case 0x77a540:c.instructions+=1;goto B77a540;
case 0x77a550:goto L77a550;
case 0x77a556:c.instructions+=2;goto B77a556;
case 0x77a557:c.instructions+=1;goto B77a557;
case 0x77a55c:goto L77a55c;
case 0x77a55d:c.instructions+=1;goto B77a55d;
case 0x77a55e:goto L77a55e;
case 0x77a563:c.instructions+=1;goto B77a563;
case 0x77a570:goto L77a570;
case 0x77a573:c.instructions+=2;goto B77a573;
case 0x77a576:c.instructions+=1;goto B77a576;
case 0x77a57b:goto L77a57b;
case 0x77a580:c.instructions+=1;goto B77a580;
case 0x77a590:goto L77a590;
case 0x77a593:c.instructions+=2;goto B77a593;
case 0x77a596:c.instructions+=1;goto B77a596;
case 0x77a59b:goto L77a59b;
case 0x77a5a0:c.instructions+=1;goto B77a5a0;
case 0x77a5b0:goto L77a5b0;
case 0x77a5b3:c.instructions+=2;goto B77a5b3;
case 0x77a5b6:c.instructions+=1;goto B77a5b6;
case 0x77a5bb:goto L77a5bb;
case 0x77a5bd:c.instructions+=4;goto B77a5bd;
case 0x77a5c2:c.instructions+=3;goto B77a5c2;
case 0x77a5c5:c.instructions+=2;goto B77a5c5;
case 0x77a5c6:c.instructions+=1;goto B77a5c6;
case 0x77a5cb:goto L77a5cb;
case 0x77a5ce:c.instructions+=1;goto B77a5ce;
case 0x77a5cf:goto L77a5cf;
case 0x77a5d4:c.instructions+=1;goto B77a5d4;
case 0x77a5e0:goto L77a5e0;
case 0x77a5e3:c.instructions+=2;goto B77a5e3;
case 0x77a5e6:c.instructions+=1;goto B77a5e6;
case 0x77a5eb:goto L77a5eb;
case 0x77a5f0:c.instructions+=1;goto B77a5f0;
case 0x77a5f5:goto L77a5f5;
case 0x77a5fa:c.instructions+=1;goto B77a5fa;
case 0x77a5ff:goto L77a5ff;
case 0x77a602:c.instructions+=1;goto B77a602;
case 0x77a607:goto L77a607;
case 0x77a60c:c.instructions+=1;goto B77a60c;
case 0x77a620:goto L77a620;
case 0x77a626:c.instructions+=3;goto B77a626;
case 0x77a62c:c.instructions+=2;goto B77a62c;
case 0x77a632:c.instructions+=1;goto B77a632;
case 0x77a640:goto L77a640;
case 0x77a642:c.instructions+=3;goto B77a642;
case 0x77a647:c.instructions+=2;goto B77a647;
case 0x77a64c:c.instructions+=1;goto B77a64c;
case 0x77a651:goto L77a651;
case 0x77a660:goto L77a660;
case 0x77a662:c.instructions+=3;goto B77a662;
case 0x77a667:c.instructions+=2;goto B77a667;
case 0x77a66c:c.instructions+=1;goto B77a66c;
case 0x77a671:goto L77a671;
case 0x77a680:goto L77a680;
case 0x77a682:c.instructions+=3;goto B77a682;
case 0x77a687:c.instructions+=2;goto B77a687;
case 0x77a68c:c.instructions+=1;goto B77a68c;
case 0x77a691:goto L77a691;
case 0x77a6a0:goto L77a6a0;
case 0x77a6a5:c.instructions+=1;goto B77a6a5;
case 0x77a6aa:goto L77a6aa;
case 0x77a6af:c.instructions+=1;goto B77a6af;
case 0x77a6b4:goto L77a6b4;
case 0x77a6b5:c.instructions+=1;goto B77a6b5;
case 0x77a6c0:goto L77a6c0;
case 0x77a6c5:c.instructions+=1;goto B77a6c5;
case 0x77a6ca:goto L77a6ca;
case 0x77a6cf:c.instructions+=1;goto B77a6cf;
case 0x77a6d4:goto L77a6d4;
case 0x77a6d5:c.instructions+=1;goto B77a6d5;
case 0x77a6e0:goto L77a6e0;
case 0x77a6e5:c.instructions+=1;goto B77a6e5;
case 0x77a6ea:goto L77a6ea;
case 0x77a6eb:c.instructions+=1;goto B77a6eb;
case 0x77a6f0:goto L77a6f0;
case 0x77a6f6:c.instructions+=3;goto B77a6f6;
case 0x77a6fc:c.instructions+=2;goto B77a6fc;
case 0x77a702:c.instructions+=1;goto B77a702;
case 0x77a710:goto L77a710;
case 0x77a712:c.instructions+=3;goto B77a712;
case 0x77a717:c.instructions+=2;goto B77a717;
case 0x77a71c:c.instructions+=1;goto B77a71c;
case 0x77a721:goto L77a721;
case 0x77a730:goto L77a730;
case 0x77a732:c.instructions+=3;goto B77a732;
case 0x77a737:c.instructions+=2;goto B77a737;
case 0x77a73c:c.instructions+=1;goto B77a73c;
case 0x77a741:goto L77a741;
case 0x77a750:goto L77a750;
case 0x77a752:c.instructions+=3;goto B77a752;
case 0x77a757:c.instructions+=2;goto B77a757;
case 0x77a75c:c.instructions+=1;goto B77a75c;
case 0x77a761:goto L77a761;
case 0x77a770:goto L77a770;
case 0x77a772:c.instructions+=3;goto B77a772;
case 0x77a777:c.instructions+=2;goto B77a777;
case 0x77a77c:c.instructions+=1;goto B77a77c;
case 0x77a781:goto L77a781;
case 0x77a790:goto L77a790;
case 0x77a792:c.instructions+=3;goto B77a792;
case 0x77a797:c.instructions+=2;goto B77a797;
case 0x77a79c:c.instructions+=1;goto B77a79c;
case 0x77a7a1:goto L77a7a1;
case 0x77a7b0:goto L77a7b0;
case 0x77a7b2:c.instructions+=3;goto B77a7b2;
case 0x77a7b7:c.instructions+=2;goto B77a7b7;
case 0x77a7bc:c.instructions+=1;goto B77a7bc;
case 0x77a7c1:goto L77a7c1;
case 0x77a7d0:goto L77a7d0;
case 0x77a7da:c.instructions+=1;goto B77a7da;
case 0x77a7e0:goto L77a7e0;
case 0x77a7e2:c.instructions+=3;goto B77a7e2;
case 0x77a7e7:c.instructions+=2;goto B77a7e7;
case 0x77a7ec:c.instructions+=1;goto B77a7ec;
case 0x77a7f1:goto L77a7f1;
case 0x77a800:goto L77a800;
case 0x77a805:c.instructions+=1;goto B77a805;
case 0x77a80a:goto L77a80a;
case 0x77a80f:c.instructions+=1;goto B77a80f;
case 0x77a814:goto L77a814;
case 0x77a815:c.instructions+=1;goto B77a815;
case 0x77a820:goto L77a820;
case 0x77a825:c.instructions+=53;goto B77a825;
case 0x77a82b:c.instructions+=52;goto B77a82b;
case 0x77a82d:c.instructions+=51;goto B77a82d;
case 0x77a832:c.instructions+=50;goto B77a832;
case 0x77a838:c.instructions+=49;goto B77a838;
case 0x77a83e:c.instructions+=48;goto B77a83e;
case 0x77a840:c.instructions+=47;goto B77a840;
case 0x77a846:c.instructions+=46;goto B77a846;
case 0x77a848:c.instructions+=45;goto B77a848;
case 0x77a84d:c.instructions+=44;goto B77a84d;
case 0x77a853:c.instructions+=43;goto B77a853;
case 0x77a855:c.instructions+=42;goto B77a855;
case 0x77a857:c.instructions+=41;goto B77a857;
case 0x77a85c:c.instructions+=40;goto B77a85c;
case 0x77a861:c.instructions+=39;goto B77a861;
case 0x77a863:c.instructions+=38;goto B77a863;
case 0x77a869:c.instructions+=37;goto B77a869;
case 0x77a86f:c.instructions+=36;goto B77a86f;
case 0x77a875:c.instructions+=35;goto B77a875;
case 0x77a87b:c.instructions+=34;goto B77a87b;
case 0x77a881:c.instructions+=33;goto B77a881;
case 0x77a887:c.instructions+=32;goto B77a887;
case 0x77a889:c.instructions+=31;goto B77a889;
case 0x77a893:c.instructions+=30;goto B77a893;
case 0x77a89d:c.instructions+=29;goto B77a89d;
case 0x77a8a7:c.instructions+=28;goto B77a8a7;
case 0x77a8b1:c.instructions+=27;goto B77a8b1;
case 0x77a8bb:c.instructions+=26;goto B77a8bb;
case 0x77a8c5:c.instructions+=25;goto B77a8c5;
case 0x77a8cf:c.instructions+=24;goto B77a8cf;
case 0x77a8d9:c.instructions+=23;goto B77a8d9;
case 0x77a8e3:c.instructions+=22;goto B77a8e3;
case 0x77a8ed:c.instructions+=21;goto B77a8ed;
case 0x77a8f7:c.instructions+=20;goto B77a8f7;
case 0x77a901:c.instructions+=19;goto B77a901;
case 0x77a907:c.instructions+=18;goto B77a907;
case 0x77a911:c.instructions+=17;goto B77a911;
case 0x77a91b:c.instructions+=16;goto B77a91b;
case 0x77a925:c.instructions+=15;goto B77a925;
case 0x77a92f:c.instructions+=14;goto B77a92f;
case 0x77a939:c.instructions+=13;goto B77a939;
case 0x77a943:c.instructions+=12;goto B77a943;
case 0x77a948:c.instructions+=11;goto B77a948;
case 0x77a94d:c.instructions+=10;goto B77a94d;
case 0x77a952:c.instructions+=9;goto B77a952;
case 0x77a957:c.instructions+=8;goto B77a957;
case 0x77a95c:c.instructions+=7;goto B77a95c;
case 0x77a962:c.instructions+=6;goto B77a962;
case 0x77a967:c.instructions+=5;goto B77a967;
case 0x77a96d:c.instructions+=4;goto B77a96d;
case 0x77a972:c.instructions+=3;goto B77a972;
case 0x77a977:c.instructions+=2;goto B77a977;
case 0x77a97c:c.instructions+=1;goto B77a97c;
case 0x77a980:goto L77a980;
case 0x77a985:c.instructions+=1;goto B77a985;
case 0x77a98a:goto L77a98a;
case 0x77a98b:c.instructions+=1;goto B77a98b;
case 0x77a990:goto L77a990;
case 0x77a995:c.instructions+=1;goto B77a995;
case 0x77a99a:goto L77a99a;
case 0x77a99f:c.instructions+=1;goto B77a99f;
case 0x77a9a4:goto L77a9a4;
case 0x77a9a5:c.instructions+=1;goto B77a9a5;
case 0x77a9b0:goto L77a9b0;
case 0x77a9b5:c.instructions+=1;goto B77a9b5;
case 0x77a9ba:goto L77a9ba;
case 0x77a9bf:c.instructions+=1;goto B77a9bf;
case 0x77a9c4:goto L77a9c4;
case 0x77a9c5:c.instructions+=1;goto B77a9c5;
case 0x77a9d0:goto L77a9d0;
case 0x77a9d6:c.instructions+=3;goto B77a9d6;
case 0x77a9d8:c.instructions+=2;goto B77a9d8;
case 0x77a9de:c.instructions+=1;goto B77a9de;
case 0x77a9e0:goto L77a9e0;
case 0x77a9e6:c.instructions+=3;goto B77a9e6;
case 0x77a9ec:c.instructions+=2;goto B77a9ec;
case 0x77a9f2:c.instructions+=1;goto B77a9f2;
case 0x77aa00:goto L77aa00;
case 0x77aa06:c.instructions+=3;goto B77aa06;
case 0x77aa08:c.instructions+=2;goto B77aa08;
case 0x77aa0e:c.instructions+=1;goto B77aa0e;
case 0x77aa10:goto L77aa10;
case 0x77aa16:c.instructions+=3;goto B77aa16;
case 0x77aa1c:c.instructions+=2;goto B77aa1c;
case 0x77aa22:c.instructions+=1;goto B77aa22;
case 0x77aa30:goto L77aa30;
case 0x77aa36:c.instructions+=3;goto B77aa36;
case 0x77aa3c:c.instructions+=2;goto B77aa3c;
case 0x77aa42:c.instructions+=1;goto B77aa42;
case 0x77aa50:goto L77aa50;
case 0x77aa55:c.instructions+=1;goto B77aa55;
case 0x77aa5a:goto L77aa5a;
case 0x77aa5b:c.instructions+=1;goto B77aa5b;
case 0x77aa60:goto L77aa60;
case 0x77aa65:c.instructions+=1;goto B77aa65;
case 0x77aa6a:goto L77aa6a;
case 0x77aa6d:c.instructions+=2;goto B77aa6d;
case 0x77aa72:c.instructions+=1;goto B77aa72;
case 0x77aa80:goto L77aa80;
case 0x77aa85:c.instructions+=1;goto B77aa85;
case 0x77aa8a:goto L77aa8a;
case 0x77aa8d:c.instructions+=2;goto B77aa8d;
case 0x77aa92:c.instructions+=1;goto B77aa92;
case 0x77aaa0:goto L77aaa0;
case 0x77aaa5:c.instructions+=1;goto B77aaa5;
case 0x77aaaa:goto L77aaaa;
case 0x77aaad:c.instructions+=2;goto B77aaad;
case 0x77aab2:c.instructions+=1;goto B77aab2;
case 0x77aac0:goto L77aac0;
case 0x77aac5:c.instructions+=1;goto B77aac5;
case 0x77aaca:goto L77aaca;
case 0x77aacd:c.instructions+=2;goto B77aacd;
case 0x77aad2:c.instructions+=1;goto B77aad2;
case 0x77aae0:goto L77aae0;
case 0x77aae5:c.instructions+=1;goto B77aae5;
case 0x77aaea:goto L77aaea;
case 0x77aaed:c.instructions+=2;goto B77aaed;
case 0x77aaf2:c.instructions+=1;goto B77aaf2;
case 0x77ab00:goto L77ab00;
case 0x77ab05:c.instructions+=1;goto B77ab05;
case 0x77ab0a:goto L77ab0a;
case 0x77ab0d:c.instructions+=2;goto B77ab0d;
case 0x77ab12:c.instructions+=1;goto B77ab12;
case 0x77ab20:goto L77ab20;
case 0x77ab25:c.instructions+=1;goto B77ab25;
case 0x77ab2a:goto L77ab2a;
case 0x77ab2d:c.instructions+=2;goto B77ab2d;
case 0x77ab32:c.instructions+=1;goto B77ab32;
case 0x77ab40:goto L77ab40;
case 0x77ab45:c.instructions+=1;goto B77ab45;
case 0x77ab4a:goto L77ab4a;
case 0x77ab4d:c.instructions+=2;goto B77ab4d;
case 0x77ab52:c.instructions+=1;goto B77ab52;
case 0x77ab60:goto L77ab60;
case 0x77ab65:c.instructions+=1;goto B77ab65;
case 0x77ab6a:goto L77ab6a;
case 0x77ab6d:c.instructions+=2;goto B77ab6d;
case 0x77ab72:c.instructions+=1;goto B77ab72;
case 0x77ab80:goto L77ab80;
case 0x77ab85:c.instructions+=1;goto B77ab85;
case 0x77ab8a:goto L77ab8a;
case 0x77ab8f:c.instructions+=1;goto B77ab8f;
case 0x77ab94:goto L77ab94;
case 0x77ab95:c.instructions+=1;goto B77ab95;
case 0x77aba0:goto L77aba0;
case 0x77aba5:c.instructions+=1;goto B77aba5;
case 0x77abaa:goto L77abaa;
case 0x77abaf:c.instructions+=1;goto B77abaf;
case 0x77abb4:goto L77abb4;
case 0x77abb5:c.instructions+=1;goto B77abb5;
case 0x77abc0:goto L77abc0;
case 0x77abc5:c.instructions+=1;goto B77abc5;
case 0x77abca:goto L77abca;
case 0x77abcf:c.instructions+=1;goto B77abcf;
case 0x77abd4:goto L77abd4;
case 0x77abd5:c.instructions+=1;goto B77abd5;
case 0x77abe0:goto L77abe0;
case 0x77abe5:c.instructions+=4;goto B77abe5;
case 0x77abe7:c.instructions+=3;goto B77abe7;
case 0x77abea:c.instructions+=2;goto B77abea;
case 0x77abef:c.instructions+=1;goto B77abef;
case 0x77abf0:goto L77abf0;
case 0x77abf5:c.instructions+=1;goto B77abf5;
case 0x77abfa:goto L77abfa;
case 0x77abff:c.instructions+=1;goto B77abff;
case 0x77ac04:goto L77ac04;
case 0x77ac05:c.instructions+=1;goto B77ac05;
case 0x77ac10:goto L77ac10;
case 0x77ac15:c.instructions+=1;goto B77ac15;
case 0x77ac1a:goto L77ac1a;
case 0x77ac1f:c.instructions+=1;goto B77ac1f;
case 0x77ac24:goto L77ac24;
case 0x77ac25:c.instructions+=1;goto B77ac25;
case 0x77ac30:goto L77ac30;
case 0x77ac35:c.instructions+=53;goto B77ac35;
case 0x77ac3b:c.instructions+=52;goto B77ac3b;
case 0x77ac3d:c.instructions+=51;goto B77ac3d;
case 0x77ac42:c.instructions+=50;goto B77ac42;
case 0x77ac48:c.instructions+=49;goto B77ac48;
case 0x77ac4e:c.instructions+=48;goto B77ac4e;
case 0x77ac50:c.instructions+=47;goto B77ac50;
case 0x77ac56:c.instructions+=46;goto B77ac56;
case 0x77ac58:c.instructions+=45;goto B77ac58;
case 0x77ac5d:c.instructions+=44;goto B77ac5d;
case 0x77ac63:c.instructions+=43;goto B77ac63;
case 0x77ac65:c.instructions+=42;goto B77ac65;
case 0x77ac67:c.instructions+=41;goto B77ac67;
case 0x77ac6c:c.instructions+=40;goto B77ac6c;
case 0x77ac71:c.instructions+=39;goto B77ac71;
case 0x77ac73:c.instructions+=38;goto B77ac73;
case 0x77ac79:c.instructions+=37;goto B77ac79;
case 0x77ac7f:c.instructions+=36;goto B77ac7f;
case 0x77ac85:c.instructions+=35;goto B77ac85;
case 0x77ac8b:c.instructions+=34;goto B77ac8b;
case 0x77ac91:c.instructions+=33;goto B77ac91;
case 0x77ac97:c.instructions+=32;goto B77ac97;
case 0x77ac99:c.instructions+=31;goto B77ac99;
case 0x77aca3:c.instructions+=30;goto B77aca3;
case 0x77acad:c.instructions+=29;goto B77acad;
case 0x77acb7:c.instructions+=28;goto B77acb7;
case 0x77acc1:c.instructions+=27;goto B77acc1;
case 0x77accb:c.instructions+=26;goto B77accb;
case 0x77acd5:c.instructions+=25;goto B77acd5;
case 0x77acdf:c.instructions+=24;goto B77acdf;
case 0x77ace9:c.instructions+=23;goto B77ace9;
case 0x77acf3:c.instructions+=22;goto B77acf3;
case 0x77acfd:c.instructions+=21;goto B77acfd;
case 0x77ad07:c.instructions+=20;goto B77ad07;
case 0x77ad11:c.instructions+=19;goto B77ad11;
case 0x77ad17:c.instructions+=18;goto B77ad17;
case 0x77ad21:c.instructions+=17;goto B77ad21;
case 0x77ad2b:c.instructions+=16;goto B77ad2b;
case 0x77ad35:c.instructions+=15;goto B77ad35;
case 0x77ad3f:c.instructions+=14;goto B77ad3f;
case 0x77ad49:c.instructions+=13;goto B77ad49;
case 0x77ad53:c.instructions+=12;goto B77ad53;
case 0x77ad58:c.instructions+=11;goto B77ad58;
case 0x77ad5d:c.instructions+=10;goto B77ad5d;
case 0x77ad62:c.instructions+=9;goto B77ad62;
case 0x77ad67:c.instructions+=8;goto B77ad67;
case 0x77ad6c:c.instructions+=7;goto B77ad6c;
case 0x77ad72:c.instructions+=6;goto B77ad72;
case 0x77ad77:c.instructions+=5;goto B77ad77;
case 0x77ad7d:c.instructions+=4;goto B77ad7d;
case 0x77ad82:c.instructions+=3;goto B77ad82;
case 0x77ad87:c.instructions+=2;goto B77ad87;
case 0x77ad8c:c.instructions+=1;goto B77ad8c;
case 0x77ad90:goto L77ad90;
case 0x77ad95:c.instructions+=1;goto B77ad95;
case 0x77ad9a:goto L77ad9a;
case 0x77ad9d:c.instructions+=2;goto B77ad9d;
case 0x77ada2:c.instructions+=1;goto B77ada2;
case 0x77adb0:goto L77adb0;
case 0x77adb5:c.instructions+=1;goto B77adb5;
case 0x77adba:goto L77adba;
case 0x77adbf:c.instructions+=1;goto B77adbf;
case 0x77adc4:goto L77adc4;
case 0x77adc5:c.instructions+=1;goto B77adc5;
case 0x77add0:goto L77add0;
case 0x77add5:c.instructions+=3;goto B77add5;
case 0x77adda:c.instructions+=2;goto B77adda;
case 0x77addc:c.instructions+=1;goto B77addc;
case 0x77ade0:goto L77ade0;
case 0x77ade3:c.instructions+=7;goto B77ade3;
case 0x77ade6:c.instructions+=6;goto B77ade6;
case 0x77ade8:c.instructions+=5;goto B77ade8;
case 0x77adeb:c.instructions+=4;goto B77adeb;
case 0x77adf2:c.instructions+=3;goto B77adf2;
case 0x77adf5:c.instructions+=2;goto B77adf5;
case 0x77adf6:c.instructions+=1;goto B77adf6;
case 0x77adf8:goto L77adf8;
case 0x77ae00:goto L77ae00;
case 0x77ae05:c.instructions+=1;goto B77ae05;
case 0x77ae0a:goto L77ae0a;
case 0x77ae0f:c.instructions+=2;goto B77ae0f;
case 0x77ae14:c.instructions+=1;goto B77ae14;
case 0x77ae19:goto L77ae19;
case 0x77ae1e:c.instructions+=2;goto B77ae1e;
case 0x77ae23:c.instructions+=1;goto B77ae23;
case 0x77ae28:goto L77ae28;
case 0x77ae2d:c.instructions+=2;goto B77ae2d;
case 0x77ae32:c.instructions+=1;goto B77ae32;
case 0x77ae37:goto L77ae37;
case 0x77ae3c:c.instructions+=2;goto B77ae3c;
case 0x77ae41:c.instructions+=1;goto B77ae41;
case 0x77ae46:goto L77ae46;
case 0x77ae4b:c.instructions+=2;goto B77ae4b;
case 0x77ae50:c.instructions+=1;goto B77ae50;
case 0x77ae55:goto L77ae55;
case 0x77ae5a:c.instructions+=2;goto B77ae5a;
case 0x77ae5f:c.instructions+=1;goto B77ae5f;
case 0x77ae64:goto L77ae64;
case 0x77ae69:c.instructions+=2;goto B77ae69;
case 0x77ae6e:c.instructions+=1;goto B77ae6e;
case 0x77ae73:goto L77ae73;
case 0x77ae76:c.instructions+=2;goto B77ae76;
case 0x77ae7b:c.instructions+=1;goto B77ae7b;
case 0x77ae80:goto L77ae80;
case 0x77ae85:c.instructions+=1;goto B77ae85;
case 0x77ae8a:goto L77ae8a;
case 0x77ae8f:c.instructions+=2;goto B77ae8f;
case 0x77ae94:c.instructions+=1;goto B77ae94;
case 0x77ae99:goto L77ae99;
case 0x77ae9e:c.instructions+=2;goto B77ae9e;
case 0x77aea3:c.instructions+=1;goto B77aea3;
case 0x77aea8:goto L77aea8;
case 0x77aead:c.instructions+=2;goto B77aead;
case 0x77aeb2:c.instructions+=1;goto B77aeb2;
case 0x77aeb7:goto L77aeb7;
case 0x77aebc:c.instructions+=2;goto B77aebc;
case 0x77aec1:c.instructions+=1;goto B77aec1;
case 0x77aec6:goto L77aec6;
case 0x77aecb:c.instructions+=2;goto B77aecb;
case 0x77aed0:c.instructions+=1;goto B77aed0;
case 0x77aed5:goto L77aed5;
case 0x77aeda:c.instructions+=2;goto B77aeda;
case 0x77aedf:c.instructions+=1;goto B77aedf;
case 0x77aee4:goto L77aee4;
case 0x77aee9:c.instructions+=2;goto B77aee9;
case 0x77aeee:c.instructions+=1;goto B77aeee;
case 0x77aef3:goto L77aef3;
case 0x77aef6:c.instructions+=2;goto B77aef6;
case 0x77aefb:c.instructions+=1;goto B77aefb;
case 0x77af00:goto L77af00;
case 0x77af05:c.instructions+=1;goto B77af05;
case 0x77af0a:goto L77af0a;
case 0x77af0f:c.instructions+=2;goto B77af0f;
case 0x77af14:c.instructions+=1;goto B77af14;
case 0x77af19:goto L77af19;
case 0x77af1e:c.instructions+=2;goto B77af1e;
case 0x77af23:c.instructions+=1;goto B77af23;
case 0x77af28:goto L77af28;
case 0x77af2d:c.instructions+=2;goto B77af2d;
case 0x77af32:c.instructions+=1;goto B77af32;
case 0x77af37:goto L77af37;
case 0x77af3c:c.instructions+=2;goto B77af3c;
case 0x77af41:c.instructions+=1;goto B77af41;
case 0x77af46:goto L77af46;
case 0x77af4b:c.instructions+=2;goto B77af4b;
case 0x77af50:c.instructions+=1;goto B77af50;
case 0x77af55:goto L77af55;
case 0x77af5a:c.instructions+=2;goto B77af5a;
case 0x77af5f:c.instructions+=1;goto B77af5f;
case 0x77af64:goto L77af64;
case 0x77af69:c.instructions+=2;goto B77af69;
case 0x77af6e:c.instructions+=1;goto B77af6e;
case 0x77af73:goto L77af73;
case 0x77af76:c.instructions+=2;goto B77af76;
case 0x77af7b:c.instructions+=1;goto B77af7b;
case 0x77af80:goto L77af80;
case 0x77af85:c.instructions+=1;goto B77af85;
case 0x77af8a:goto L77af8a;
case 0x77af8f:c.instructions+=2;goto B77af8f;
case 0x77af94:c.instructions+=1;goto B77af94;
case 0x77af99:goto L77af99;
case 0x77af9e:c.instructions+=2;goto B77af9e;
case 0x77afa3:c.instructions+=1;goto B77afa3;
case 0x77afa8:goto L77afa8;
case 0x77afad:c.instructions+=2;goto B77afad;
case 0x77afb2:c.instructions+=1;goto B77afb2;
case 0x77afb7:goto L77afb7;
case 0x77afbc:c.instructions+=2;goto B77afbc;
case 0x77afc1:c.instructions+=1;goto B77afc1;
case 0x77afc6:goto L77afc6;
case 0x77afcb:c.instructions+=2;goto B77afcb;
case 0x77afd0:c.instructions+=1;goto B77afd0;
case 0x77afd5:goto L77afd5;
case 0x77afda:c.instructions+=2;goto B77afda;
case 0x77afdf:c.instructions+=1;goto B77afdf;
case 0x77afe4:goto L77afe4;
case 0x77afe9:c.instructions+=2;goto B77afe9;
case 0x77afee:c.instructions+=1;goto B77afee;
case 0x77aff3:goto L77aff3;
case 0x77aff6:c.instructions+=2;goto B77aff6;
case 0x77affb:c.instructions+=1;goto B77affb;
default:missing_instruction(c.pc);}
B77a000:L77a000:{c.instructions+=2;NFSU2_TR(0x77a000);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a003:{NFSU2_TR(0x77a003);
TAIL_STATIC(0x4022c0u,402);
}
B77a008:L77a008:{c.instructions+=5;NFSU2_TR(0x77a008);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a00a:{NFSU2_TR(0x77a00a);
u8 U[4];
w4(U+0,u32(0x785bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a00f:{NFSU2_TR(0x77a00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a012:{NFSU2_TR(0x77a012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a013:{NFSU2_TR(0x77a013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a018ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a018:L77a018:{c.instructions+=2;NFSU2_TR(0x77a018);
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
B77a01b:{NFSU2_TR(0x77a01b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a01c:L77a01c:{c.instructions+=5;NFSU2_TR(0x77a01c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a01e:{NFSU2_TR(0x77a01e);
u8 U[4];
w4(U+0,u32(0x785bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a023:{NFSU2_TR(0x77a023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a026:{NFSU2_TR(0x77a026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a027:{NFSU2_TR(0x77a027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a02cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a02c:L77a02c:{c.instructions+=2;NFSU2_TR(0x77a02c);
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
B77a02f:{NFSU2_TR(0x77a02f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a030:L77a030:{c.instructions+=2;NFSU2_TR(0x77a030);
w4(R+0,u32(0x7e55ccull));
}
B77a035:{NFSU2_TR(0x77a035);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a040:L77a040:{c.instructions+=5;NFSU2_TR(0x77a040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a042:{NFSU2_TR(0x77a042);
u8 U[4];
w4(U+0,u32(0x785b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a047:{NFSU2_TR(0x77a047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a04a:{NFSU2_TR(0x77a04a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a04b:{NFSU2_TR(0x77a04b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a050ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a050:L77a050:{c.instructions+=2;NFSU2_TR(0x77a050);
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
B77a053:{NFSU2_TR(0x77a053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a054:L77a054:{c.instructions+=5;NFSU2_TR(0x77a054);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a056:{NFSU2_TR(0x77a056);
u8 U[4];
w4(U+0,u32(0x785b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a05b:{NFSU2_TR(0x77a05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a05e:{NFSU2_TR(0x77a05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a05f:{NFSU2_TR(0x77a05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a064ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a064:L77a064:{c.instructions+=2;NFSU2_TR(0x77a064);
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
B77a067:{NFSU2_TR(0x77a067);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a068:L77a068:{c.instructions+=5;NFSU2_TR(0x77a068);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a06a:{NFSU2_TR(0x77a06a);
u8 U[4];
w4(U+0,u32(0x785b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a06f:{NFSU2_TR(0x77a06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a072:{NFSU2_TR(0x77a072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a073:{NFSU2_TR(0x77a073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a078ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a078:L77a078:{c.instructions+=2;NFSU2_TR(0x77a078);
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
B77a07b:{NFSU2_TR(0x77a07b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a07c:L77a07c:{c.instructions+=2;NFSU2_TR(0x77a07c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a07f:{NFSU2_TR(0x77a07f);
TAIL_STATIC(0x4def30u,4de);
}
B77a084:L77a084:{c.instructions+=2;NFSU2_TR(0x77a084);
w4(R+0,u32(0x7e5680ull));
}
B77a089:{NFSU2_TR(0x77a089);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a090:L77a090:{c.instructions+=3;NFSU2_TR(0x77a090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a093:{NFSU2_TR(0x77a093);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B77a096:{NFSU2_TR(0x77a096);
TAIL_STATIC(0x4358e0u,435);
}
B77a09b:L77a09b:{c.instructions+=2;NFSU2_TR(0x77a09b);
w4(R+0,u32(0x7e56a4ull));
}
B77a0a0:{NFSU2_TR(0x77a0a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a0b0:L77a0b0:{c.instructions+=5;NFSU2_TR(0x77a0b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0b2:{NFSU2_TR(0x77a0b2);
u8 U[4];
w4(U+0,u32(0x7a08b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0b7:{NFSU2_TR(0x77a0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a0ba:{NFSU2_TR(0x77a0ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0bb:{NFSU2_TR(0x77a0bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a0c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a0c0:L77a0c0:{c.instructions+=2;NFSU2_TR(0x77a0c0);
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
B77a0c3:{NFSU2_TR(0x77a0c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a0c4:L77a0c4:{c.instructions+=5;NFSU2_TR(0x77a0c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0c6:{NFSU2_TR(0x77a0c6);
u8 U[4];
w4(U+0,u32(0x7a5ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0cb:{NFSU2_TR(0x77a0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a0ce:{NFSU2_TR(0x77a0ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0cf:{NFSU2_TR(0x77a0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a0d4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a0d4:L77a0d4:{c.instructions+=2;NFSU2_TR(0x77a0d4);
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
B77a0d7:{NFSU2_TR(0x77a0d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a0d8:L77a0d8:{c.instructions+=5;NFSU2_TR(0x77a0d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0da:{NFSU2_TR(0x77a0da);
u8 U[4];
w4(U+0,u32(0x7873e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0df:{NFSU2_TR(0x77a0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a0e2:{NFSU2_TR(0x77a0e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a0e3:{NFSU2_TR(0x77a0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a0e8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a0e8:L77a0e8:{c.instructions+=2;NFSU2_TR(0x77a0e8);
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
B77a0eb:{NFSU2_TR(0x77a0eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a0ec:L77a0ec:{c.instructions+=2;NFSU2_TR(0x77a0ec);
w4(R+0,u32(0x7e56d8ull));
}
B77a0f1:{NFSU2_TR(0x77a0f1);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a100:L77a100:{c.instructions+=3;NFSU2_TR(0x77a100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a103:{NFSU2_TR(0x77a103);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a104:{NFSU2_TR(0x77a104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a109ull));
TAIL_STATIC(0x575630u,575);
}
B77a109:L77a109:{c.instructions+=2;NFSU2_TR(0x77a109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a10a:{NFSU2_TR(0x77a10a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a10b:L77a10b:{c.instructions+=5;NFSU2_TR(0x77a10b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a10d:{NFSU2_TR(0x77a10d);
u8 U[4];
w4(U+0,u32(0x7a6590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a112:{NFSU2_TR(0x77a112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a115:{NFSU2_TR(0x77a115);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a116:{NFSU2_TR(0x77a116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a11bull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a11b:L77a11b:{c.instructions+=2;NFSU2_TR(0x77a11b);
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
B77a11e:{NFSU2_TR(0x77a11e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a11f:L77a11f:{c.instructions+=2;NFSU2_TR(0x77a11f);
w4(R+0,u32(0x7e5704ull));
}
B77a124:{NFSU2_TR(0x77a124);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a130:L77a130:{c.instructions+=2;NFSU2_TR(0x77a130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a133:{NFSU2_TR(0x77a133);
TAIL_STATIC(0x609ca0u,609);
}
B77a138:L77a138:{c.instructions+=3;NFSU2_TR(0x77a138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a13b:{NFSU2_TR(0x77a13b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B77a13e:{NFSU2_TR(0x77a13e);
TAIL_STATIC(0x4358e0u,435);
}
B77a143:L77a143:{c.instructions+=2;NFSU2_TR(0x77a143);
w4(R+0,u32(0x7e5730ull));
}
B77a148:{NFSU2_TR(0x77a148);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a150:L77a150:{c.instructions+=5;NFSU2_TR(0x77a150);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a152:{NFSU2_TR(0x77a152);
u8 U[4];
w4(U+0,u32(0x7a51c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a157:{NFSU2_TR(0x77a157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a15a:{NFSU2_TR(0x77a15a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a15b:{NFSU2_TR(0x77a15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a160ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a160:L77a160:{c.instructions+=2;NFSU2_TR(0x77a160);
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
B77a163:{NFSU2_TR(0x77a163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a164:L77a164:{c.instructions+=2;NFSU2_TR(0x77a164);
w4(R+0,u32(0x7e5754ull));
}
B77a169:{NFSU2_TR(0x77a169);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a170:L77a170:{c.instructions+=6;NFSU2_TR(0x77a170);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a175:{NFSU2_TR(0x77a175);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a177:{NFSU2_TR(0x77a177);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a179:{NFSU2_TR(0x77a179);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B77a17f:{NFSU2_TR(0x77a17f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a180:{NFSU2_TR(0x77a180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a185ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a185:L77a185:{c.instructions+=1;NFSU2_TR(0x77a185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a186:L77a186:{c.instructions+=2;NFSU2_TR(0x77a186);
w4(R+0,u32(0x7e5778ull));
}
B77a18b:{NFSU2_TR(0x77a18b);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a190:L77a190:{c.instructions+=3;NFSU2_TR(0x77a190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a193:{NFSU2_TR(0x77a193);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a194:{NFSU2_TR(0x77a194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a199ull));
TAIL_STATIC(0x486ef0u,486);
}
B77a199:L77a199:{c.instructions+=2;NFSU2_TR(0x77a199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a19a:{NFSU2_TR(0x77a19a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a19b:L77a19b:{c.instructions+=3;NFSU2_TR(0x77a19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a19e:{NFSU2_TR(0x77a19e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a19f:{NFSU2_TR(0x77a19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a1a4ull));
TAIL_STATIC(0x486ef0u,486);
}
B77a1a4:L77a1a4:{c.instructions+=2;NFSU2_TR(0x77a1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a1a5:{NFSU2_TR(0x77a1a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a1a6:L77a1a6:{c.instructions+=2;NFSU2_TR(0x77a1a6);
w4(R+0,u32(0x7e57a4ull));
}
B77a1ab:{NFSU2_TR(0x77a1ab);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a1b0:L77a1b0:{c.instructions+=3;NFSU2_TR(0x77a1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a1b3:{NFSU2_TR(0x77a1b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x374ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x374ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x374ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77a1b9:{NFSU2_TR(0x77a1b9);
TAIL_STATIC(0x4022c0u,402);
}
B77a1be:L77a1be:{c.instructions+=2;NFSU2_TR(0x77a1be);
w4(R+0,u32(0x7e57c8ull));
}
B77a1c3:{NFSU2_TR(0x77a1c3);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a1d0:L77a1d0:{c.instructions+=3;NFSU2_TR(0x77a1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a1d3:{NFSU2_TR(0x77a1d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a1d4:{NFSU2_TR(0x77a1d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a1d9ull));
TAIL_STATIC(0x610660u,610);
}
B77a1d9:L77a1d9:{c.instructions+=2;NFSU2_TR(0x77a1d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a1da:{NFSU2_TR(0x77a1da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a1db:L77a1db:{c.instructions+=2;NFSU2_TR(0x77a1db);
w4(R+0,u32(0x7e57ecull));
}
B77a1e0:{NFSU2_TR(0x77a1e0);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a1f0:L77a1f0:{c.instructions+=3;NFSU2_TR(0x77a1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a1f3:{NFSU2_TR(0x77a1f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a1f4:{NFSU2_TR(0x77a1f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a1f9ull));
TAIL_STATIC(0x610640u,610);
}
B77a1f9:L77a1f9:{c.instructions+=2;NFSU2_TR(0x77a1f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a1fa:{NFSU2_TR(0x77a1fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a1fb:L77a1fb:{c.instructions+=2;NFSU2_TR(0x77a1fb);
w4(R+0,u32(0x7e5810ull));
}
B77a200:{NFSU2_TR(0x77a200);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a210:L77a210:{c.instructions+=3;NFSU2_TR(0x77a210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a213:{NFSU2_TR(0x77a213);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B77a216:{NFSU2_TR(0x77a216);
TAIL_STATIC(0x637ed0u,637);
}
B77a21b:L77a21b:{c.instructions+=2;NFSU2_TR(0x77a21b);
w4(R+0,u32(0x7e5834ull));
}
B77a220:{NFSU2_TR(0x77a220);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a230:L77a230:{c.instructions+=3;NFSU2_TR(0x77a230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a233:{NFSU2_TR(0x77a233);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3f0ull))));
}
B77a239:{NFSU2_TR(0x77a239);
TAIL_STATIC(0x4def30u,4de);
}
B77a23e:L77a23e:{c.instructions+=7;NFSU2_TR(0x77a23e);
u8 U[4];
w4(U+0,u32(0x4367c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a243:{NFSU2_TR(0x77a243);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a245:{NFSU2_TR(0x77a245);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a247:{NFSU2_TR(0x77a247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a24a:{NFSU2_TR(0x77a24a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x458ull))));
}
B77a24f:{NFSU2_TR(0x77a24f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a250:{NFSU2_TR(0x77a250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a255ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a255:L77a255:{c.instructions+=1;NFSU2_TR(0x77a255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a256:L77a256:{c.instructions+=7;NFSU2_TR(0x77a256);
u8 U[4];
w4(U+0,u32(0x61f470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a25b:{NFSU2_TR(0x77a25b);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a25d:{NFSU2_TR(0x77a25d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a25f:{NFSU2_TR(0x77a25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a262:{NFSU2_TR(0x77a262);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x548ull))));
}
B77a267:{NFSU2_TR(0x77a267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a268:{NFSU2_TR(0x77a268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a26dull));
TAIL_STATIC(0x75c401u,75c);
}
B77a26d:L77a26d:{c.instructions+=1;NFSU2_TR(0x77a26d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a26e:L77a26e:{c.instructions+=3;NFSU2_TR(0x77a26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a271:{NFSU2_TR(0x77a271);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f88ull))));
}
B77a277:{NFSU2_TR(0x77a277);
TAIL_STATIC(0x437ad0u,437);
}
B77a27c:L77a27c:{c.instructions+=7;NFSU2_TR(0x77a27c);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a281:{NFSU2_TR(0x77a281);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a283:{NFSU2_TR(0x77a283);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a285:{NFSU2_TR(0x77a285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a288:{NFSU2_TR(0x77a288);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1fbcull))));
}
B77a28d:{NFSU2_TR(0x77a28d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a28e:{NFSU2_TR(0x77a28e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a293ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a293:L77a293:{c.instructions+=1;NFSU2_TR(0x77a293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a294:L77a294:{c.instructions+=7;NFSU2_TR(0x77a294);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a299:{NFSU2_TR(0x77a299);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a29b:{NFSU2_TR(0x77a29b);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a29d:{NFSU2_TR(0x77a29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a2a0:{NFSU2_TR(0x77a2a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x21b4ull))));
}
B77a2a5:{NFSU2_TR(0x77a2a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2a6:{NFSU2_TR(0x77a2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a2abull));
TAIL_STATIC(0x75c401u,75c);
}
B77a2ab:L77a2ab:{c.instructions+=1;NFSU2_TR(0x77a2ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a2ac:L77a2ac:{c.instructions+=7;NFSU2_TR(0x77a2ac);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2b1:{NFSU2_TR(0x77a2b1);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2b3:{NFSU2_TR(0x77a2b3);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2b5:{NFSU2_TR(0x77a2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a2b8:{NFSU2_TR(0x77a2b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2274ull))));
}
B77a2bd:{NFSU2_TR(0x77a2bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2be:{NFSU2_TR(0x77a2be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a2c3ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a2c3:L77a2c3:{c.instructions+=1;NFSU2_TR(0x77a2c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a2c4:L77a2c4:{c.instructions+=7;NFSU2_TR(0x77a2c4);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2c9:{NFSU2_TR(0x77a2c9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2cb:{NFSU2_TR(0x77a2cb);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2cd:{NFSU2_TR(0x77a2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a2d0:{NFSU2_TR(0x77a2d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2b74ull))));
}
B77a2d5:{NFSU2_TR(0x77a2d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a2d6:{NFSU2_TR(0x77a2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a2dbull));
TAIL_STATIC(0x75c401u,75c);
}
B77a2db:L77a2db:{c.instructions+=1;NFSU2_TR(0x77a2db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a2dc:L77a2dc:{c.instructions+=2;NFSU2_TR(0x77a2dc);
w4(R+0,u32(0x7e5890ull));
}
B77a2e1:{NFSU2_TR(0x77a2e1);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a2f0:L77a2f0:{c.instructions+=4;NFSU2_TR(0x77a2f0);
__builtin_memmove((R+0),gp(0x8a4514),4);
}
B77a2f5:{NFSU2_TR(0x77a2f5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77a2f8:{NFSU2_TR(0x77a2f8);
__builtin_memmove(gp(0x8a4514),(R+0),4);
}
B77a2fd:{NFSU2_TR(0x77a2fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a2fe:L77a2fe:{c.instructions+=2;NFSU2_TR(0x77a2fe);
w4(R+0,u32(0x7e58b4ull));
}
B77a303:{NFSU2_TR(0x77a303);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a310:L77a310:{c.instructions+=3;NFSU2_TR(0x77a310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a313:{NFSU2_TR(0x77a313);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B77a316:{NFSU2_TR(0x77a316);
TAIL_STATIC(0x401800u,401);
}
B77a31b:L77a31b:{c.instructions+=2;NFSU2_TR(0x77a31b);
w4(R+0,u32(0x7e58d8ull));
}
B77a320:{NFSU2_TR(0x77a320);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a330:L77a330:{c.instructions+=3;NFSU2_TR(0x77a330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a333:{NFSU2_TR(0x77a333);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B77a336:{NFSU2_TR(0x77a336);
TAIL_STATIC(0x634420u,634);
}
B77a33b:L77a33b:{c.instructions+=3;NFSU2_TR(0x77a33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a33e:{NFSU2_TR(0x77a33e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B77a341:{NFSU2_TR(0x77a341);
TAIL_STATIC(0x634460u,634);
}
B77a346:L77a346:{c.instructions+=3;NFSU2_TR(0x77a346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a349:{NFSU2_TR(0x77a349);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B77a34c:{NFSU2_TR(0x77a34c);
TAIL_STATIC(0x6344a0u,634);
}
B77a351:L77a351:{c.instructions+=3;NFSU2_TR(0x77a351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a354:{NFSU2_TR(0x77a354);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B77a357:{NFSU2_TR(0x77a357);
TAIL_STATIC(0x4def30u,4de);
}
B77a35c:L77a35c:{c.instructions+=3;NFSU2_TR(0x77a35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a35f:{NFSU2_TR(0x77a35f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B77a362:{NFSU2_TR(0x77a362);
TAIL_STATIC(0x4def30u,4de);
}
B77a367:L77a367:{c.instructions+=3;NFSU2_TR(0x77a367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a36a:{NFSU2_TR(0x77a36a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B77a36d:{NFSU2_TR(0x77a36d);
TAIL_STATIC(0x4def30u,4de);
}
B77a372:L77a372:{c.instructions+=3;NFSU2_TR(0x77a372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a375:{NFSU2_TR(0x77a375);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x58ull))));
}
B77a378:{NFSU2_TR(0x77a378);
TAIL_STATIC(0x6344e0u,634);
}
B77a37d:L77a37d:{c.instructions+=2;NFSU2_TR(0x77a37d);
w4(R+0,u32(0x7e592cull));
}
B77a382:{NFSU2_TR(0x77a382);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a390:L77a390:{c.instructions+=3;NFSU2_TR(0x77a390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a393:{NFSU2_TR(0x77a393);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a394:{NFSU2_TR(0x77a394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a399ull));
TAIL_STATIC(0x486ef0u,486);
}
B77a399:L77a399:{c.instructions+=2;NFSU2_TR(0x77a399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a39a:{NFSU2_TR(0x77a39a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a39b:L77a39b:{c.instructions+=2;NFSU2_TR(0x77a39b);
w4(R+0,u32(0x7e5950ull));
}
B77a3a0:{NFSU2_TR(0x77a3a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a3b0:L77a3b0:{c.instructions+=3;NFSU2_TR(0x77a3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a3b3:{NFSU2_TR(0x77a3b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B77a3b6:{NFSU2_TR(0x77a3b6);
TAIL_STATIC(0x637ed0u,637);
}
B77a3bb:L77a3bb:{c.instructions+=2;NFSU2_TR(0x77a3bb);
w4(R+0,u32(0x7e5974ull));
}
B77a3c0:{NFSU2_TR(0x77a3c0);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a3d0:L77a3d0:{c.instructions+=3;NFSU2_TR(0x77a3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a3d3:{NFSU2_TR(0x77a3d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a3d4:{NFSU2_TR(0x77a3d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a3d9ull));
TAIL_STATIC(0x60baf0u,60b);
}
B77a3d9:L77a3d9:{c.instructions+=2;NFSU2_TR(0x77a3d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a3da:{NFSU2_TR(0x77a3da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a3db:L77a3db:{c.instructions+=2;NFSU2_TR(0x77a3db);
w4(R+0,u32(0x7e5998ull));
}
B77a3e0:{NFSU2_TR(0x77a3e0);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a3f0:L77a3f0:{c.instructions+=3;NFSU2_TR(0x77a3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a3f6:{NFSU2_TR(0x77a3f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3f0ull))));
}
B77a3fc:{NFSU2_TR(0x77a3fc);
TAIL_STATIC(0x4def30u,4de);
}
B77a401:L77a401:{c.instructions+=7;NFSU2_TR(0x77a401);
u8 U[4];
w4(U+0,u32(0x4367c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a406:{NFSU2_TR(0x77a406);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a408:{NFSU2_TR(0x77a408);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a40a:{NFSU2_TR(0x77a40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a410:{NFSU2_TR(0x77a410);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x458ull))));
}
B77a415:{NFSU2_TR(0x77a415);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a416:{NFSU2_TR(0x77a416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a41bull));
TAIL_STATIC(0x75c401u,75c);
}
B77a41b:L77a41b:{c.instructions+=1;NFSU2_TR(0x77a41b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a41c:L77a41c:{c.instructions+=7;NFSU2_TR(0x77a41c);
u8 U[4];
w4(U+0,u32(0x61f470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a421:{NFSU2_TR(0x77a421);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a423:{NFSU2_TR(0x77a423);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a425:{NFSU2_TR(0x77a425);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a42b:{NFSU2_TR(0x77a42b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x548ull))));
}
B77a430:{NFSU2_TR(0x77a430);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a431:{NFSU2_TR(0x77a431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a436ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a436:L77a436:{c.instructions+=1;NFSU2_TR(0x77a436);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a437:L77a437:{c.instructions+=3;NFSU2_TR(0x77a437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a43d:{NFSU2_TR(0x77a43d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f88ull))));
}
B77a443:{NFSU2_TR(0x77a443);
TAIL_STATIC(0x437ad0u,437);
}
B77a448:L77a448:{c.instructions+=7;NFSU2_TR(0x77a448);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a44d:{NFSU2_TR(0x77a44d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a44f:{NFSU2_TR(0x77a44f);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a451:{NFSU2_TR(0x77a451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a457:{NFSU2_TR(0x77a457);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1fbcull))));
}
B77a45c:{NFSU2_TR(0x77a45c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a45d:{NFSU2_TR(0x77a45d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a462ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a462:L77a462:{c.instructions+=1;NFSU2_TR(0x77a462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a463:L77a463:{c.instructions+=7;NFSU2_TR(0x77a463);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a468:{NFSU2_TR(0x77a468);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a46a:{NFSU2_TR(0x77a46a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a46c:{NFSU2_TR(0x77a46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a472:{NFSU2_TR(0x77a472);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x21b4ull))));
}
B77a477:{NFSU2_TR(0x77a477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a478:{NFSU2_TR(0x77a478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a47dull));
TAIL_STATIC(0x75c401u,75c);
}
B77a47d:L77a47d:{c.instructions+=1;NFSU2_TR(0x77a47d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a47e:L77a47e:{c.instructions+=7;NFSU2_TR(0x77a47e);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a483:{NFSU2_TR(0x77a483);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a485:{NFSU2_TR(0x77a485);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a487:{NFSU2_TR(0x77a487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a48d:{NFSU2_TR(0x77a48d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2274ull))));
}
B77a492:{NFSU2_TR(0x77a492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a493:{NFSU2_TR(0x77a493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a498ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a498:L77a498:{c.instructions+=1;NFSU2_TR(0x77a498);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a499:L77a499:{c.instructions+=7;NFSU2_TR(0x77a499);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a49e:{NFSU2_TR(0x77a49e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a4a0:{NFSU2_TR(0x77a4a0);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a4a2:{NFSU2_TR(0x77a4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a4a8:{NFSU2_TR(0x77a4a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2b74ull))));
}
B77a4ad:{NFSU2_TR(0x77a4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a4ae:{NFSU2_TR(0x77a4ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a4b3ull));
TAIL_STATIC(0x75c401u,75c);
}
B77a4b3:L77a4b3:{c.instructions+=1;NFSU2_TR(0x77a4b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a4b4:L77a4b4:{c.instructions+=2;NFSU2_TR(0x77a4b4);
w4(R+0,u32(0x7e59f4ull));
}
B77a4b9:{NFSU2_TR(0x77a4b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a4c0:L77a4c0:{c.instructions+=3;NFSU2_TR(0x77a4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a4c3:{NFSU2_TR(0x77a4c3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B77a4c6:{NFSU2_TR(0x77a4c6);
TAIL_STATIC(0x63a320u,63a);
}
B77a4cb:L77a4cb:{c.instructions+=3;NFSU2_TR(0x77a4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a4ce:{NFSU2_TR(0x77a4ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x100ull))));
}
B77a4d4:{NFSU2_TR(0x77a4d4);
TAIL_STATIC(0x610c40u,610);
}
B77a4d9:L77a4d9:{c.instructions+=2;NFSU2_TR(0x77a4d9);
w4(R+0,u32(0x7e5a20ull));
}
B77a4de:{NFSU2_TR(0x77a4de);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a4f0:L77a4f0:{c.instructions+=3;NFSU2_TR(0x77a4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a4f3:{NFSU2_TR(0x77a4f3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x24ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77a4f6:{NFSU2_TR(0x77a4f6);
TAIL_STATIC(0x63a510u,63a);
}
B77a4fb:L77a4fb:{c.instructions+=2;NFSU2_TR(0x77a4fb);
w4(R+0,u32(0x7e5a44ull));
}
B77a500:{NFSU2_TR(0x77a500);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a510:L77a510:{c.instructions+=5;NFSU2_TR(0x77a510);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a512:{NFSU2_TR(0x77a512);
u8 U[4];
w4(U+0,u32(0x7a8d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a517:{NFSU2_TR(0x77a517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a51a:{NFSU2_TR(0x77a51a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a51b:{NFSU2_TR(0x77a51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a520ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a520:L77a520:{c.instructions+=2;NFSU2_TR(0x77a520);
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
B77a523:{NFSU2_TR(0x77a523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a524:L77a524:{c.instructions+=2;NFSU2_TR(0x77a524);
w4(R+0,u32(0x7e5a68ull));
}
B77a529:{NFSU2_TR(0x77a529);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a530:L77a530:{c.instructions+=3;NFSU2_TR(0x77a530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a533:{NFSU2_TR(0x77a533);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a534:{NFSU2_TR(0x77a534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a539ull));
TAIL_STATIC(0x575630u,575);
}
B77a539:L77a539:{c.instructions+=2;NFSU2_TR(0x77a539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a53a:{NFSU2_TR(0x77a53a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a53b:L77a53b:{c.instructions+=2;NFSU2_TR(0x77a53b);
w4(R+0,u32(0x7e5a8cull));
}
B77a540:{NFSU2_TR(0x77a540);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a550:L77a550:{c.instructions+=3;NFSU2_TR(0x77a550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a556:{NFSU2_TR(0x77a556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a557:{NFSU2_TR(0x77a557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a55cull));
TAIL_STATIC(0x6106b0u,610);
}
B77a55c:L77a55c:{c.instructions+=2;NFSU2_TR(0x77a55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a55d:{NFSU2_TR(0x77a55d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a55e:L77a55e:{c.instructions+=2;NFSU2_TR(0x77a55e);
w4(R+0,u32(0x7e5ab0ull));
}
B77a563:{NFSU2_TR(0x77a563);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a570:L77a570:{c.instructions+=3;NFSU2_TR(0x77a570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a573:{NFSU2_TR(0x77a573);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x24ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77a576:{NFSU2_TR(0x77a576);
TAIL_STATIC(0x63a510u,63a);
}
B77a57b:L77a57b:{c.instructions+=2;NFSU2_TR(0x77a57b);
w4(R+0,u32(0x7e5adcull));
}
B77a580:{NFSU2_TR(0x77a580);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a590:L77a590:{c.instructions+=3;NFSU2_TR(0x77a590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a593:{NFSU2_TR(0x77a593);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x24ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77a596:{NFSU2_TR(0x77a596);
TAIL_STATIC(0x63a510u,63a);
}
B77a59b:L77a59b:{c.instructions+=2;NFSU2_TR(0x77a59b);
w4(R+0,u32(0x7e5b00ull));
}
B77a5a0:{NFSU2_TR(0x77a5a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a5b0:L77a5b0:{c.instructions+=3;NFSU2_TR(0x77a5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a5b3:{NFSU2_TR(0x77a5b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x24ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77a5b6:{NFSU2_TR(0x77a5b6);
TAIL_STATIC(0x63a510u,63a);
}
B77a5bb:L77a5bb:{c.instructions+=5;NFSU2_TR(0x77a5bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a5bd:{NFSU2_TR(0x77a5bd);
u8 U[4];
w4(U+0,u32(0x7a6498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a5c2:{NFSU2_TR(0x77a5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77a5c5:{NFSU2_TR(0x77a5c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a5c6:{NFSU2_TR(0x77a5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a5cbull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77a5cb:L77a5cb:{c.instructions+=2;NFSU2_TR(0x77a5cb);
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
B77a5ce:{NFSU2_TR(0x77a5ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a5cf:L77a5cf:{c.instructions+=2;NFSU2_TR(0x77a5cf);
w4(R+0,u32(0x7e5b2cull));
}
B77a5d4:{NFSU2_TR(0x77a5d4);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a5e0:L77a5e0:{c.instructions+=3;NFSU2_TR(0x77a5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77a5e3:{NFSU2_TR(0x77a5e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B77a5e6:{NFSU2_TR(0x77a5e6);
TAIL_STATIC(0x401800u,401);
}
B77a5eb:L77a5eb:{c.instructions+=2;NFSU2_TR(0x77a5eb);
w4(R+0,u32(0x7e5b50ull));
}
B77a5f0:{NFSU2_TR(0x77a5f0);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a5f5:L77a5f5:{c.instructions+=2;NFSU2_TR(0x77a5f5);
w4(R+0,u32(0x7e5ba0ull));
}
B77a5fa:{NFSU2_TR(0x77a5fa);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a5ff:L77a5ff:{c.instructions+=2;NFSU2_TR(0x77a5ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a602:{NFSU2_TR(0x77a602);
TAIL_STATIC(0x5cf000u,5cf);
}
B77a607:L77a607:{c.instructions+=2;NFSU2_TR(0x77a607);
w4(R+0,u32(0x7e5c00ull));
}
B77a60c:{NFSU2_TR(0x77a60c);
TAIL_STATIC(0x75bfd2u,75b);
}
B77a620:L77a620:{c.instructions+=4;NFSU2_TR(0x77a620);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77a626:{NFSU2_TR(0x77a626);
{u32 ea_=u32(u32(7877776u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77a62c:{NFSU2_TR(0x77a62c);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77a632:{NFSU2_TR(0x77a632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a640:L77a640:{c.instructions+=4;NFSU2_TR(0x77a640);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a642:{NFSU2_TR(0x77a642);
u8 U[4];
w4(U+0,u32(0x7e9bc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a647:{NFSU2_TR(0x77a647);
w4(R+4,u32(0x81e378ull));
}
B77a64c:{NFSU2_TR(0x77a64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a651ull));
TAIL_STATIC(0x576770u,576);
}
B77a651:L77a651:{c.instructions+=1;NFSU2_TR(0x77a651);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a660:L77a660:{c.instructions+=4;NFSU2_TR(0x77a660);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a662:{NFSU2_TR(0x77a662);
u8 U[4];
w4(U+0,u32(0x7e9bf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a667:{NFSU2_TR(0x77a667);
w4(R+4,u32(0x81e7dcull));
}
B77a66c:{NFSU2_TR(0x77a66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a671ull));
TAIL_STATIC(0x576770u,576);
}
B77a671:L77a671:{c.instructions+=1;NFSU2_TR(0x77a671);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a680:L77a680:{c.instructions+=4;NFSU2_TR(0x77a680);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a682:{NFSU2_TR(0x77a682);
u8 U[4];
w4(U+0,u32(0x7e9c00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a687:{NFSU2_TR(0x77a687);
w4(R+4,u32(0x827a10ull));
}
B77a68c:{NFSU2_TR(0x77a68c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a691ull));
TAIL_STATIC(0x576770u,576);
}
B77a691:L77a691:{c.instructions+=1;NFSU2_TR(0x77a691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a6a0:L77a6a0:{c.instructions+=2;NFSU2_TR(0x77a6a0);
w4(R+4,u32(0x81e5b8ull));
}
B77a6a5:{NFSU2_TR(0x77a6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a6aaull));
TAIL_STATIC(0x414cf0u,414);
}
B77a6aa:L77a6aa:{c.instructions+=2;NFSU2_TR(0x77a6aa);
u8 U[4];
w4(U+0,u32(0x781980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a6af:{NFSU2_TR(0x77a6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a6b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77a6b4:L77a6b4:{c.instructions+=2;NFSU2_TR(0x77a6b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a6b5:{NFSU2_TR(0x77a6b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a6c0:L77a6c0:{c.instructions+=2;NFSU2_TR(0x77a6c0);
w4(R+4,u32(0x81e388ull));
}
B77a6c5:{NFSU2_TR(0x77a6c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a6caull));
TAIL_STATIC(0x414cf0u,414);
}
B77a6ca:L77a6ca:{c.instructions+=2;NFSU2_TR(0x77a6ca);
u8 U[4];
w4(U+0,u32(0x781990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a6cf:{NFSU2_TR(0x77a6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a6d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77a6d4:L77a6d4:{c.instructions+=2;NFSU2_TR(0x77a6d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a6d5:{NFSU2_TR(0x77a6d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a6e0:L77a6e0:{c.instructions+=2;NFSU2_TR(0x77a6e0);
u8 U[4];
w4(U+0,u32(0x781940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a6e5:{NFSU2_TR(0x77a6e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a6eaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77a6ea:L77a6ea:{c.instructions+=2;NFSU2_TR(0x77a6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a6eb:{NFSU2_TR(0x77a6eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a6f0:L77a6f0:{c.instructions+=4;NFSU2_TR(0x77a6f0);
{u32 ea_=u32(u32(8506244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77a6f6:{NFSU2_TR(0x77a6f6);
{u32 ea_=u32(u32(8506244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77a6fc:{NFSU2_TR(0x77a6fc);
{u32 ea_=u32(u32(8550944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77a702:{NFSU2_TR(0x77a702);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a710:L77a710:{c.instructions+=4;NFSU2_TR(0x77a710);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a712:{NFSU2_TR(0x77a712);
u8 U[4];
w4(U+0,u32(0x7e9c10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a717:{NFSU2_TR(0x77a717);
w4(R+4,u32(0x81e380ull));
}
B77a71c:{NFSU2_TR(0x77a71c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a721ull));
TAIL_STATIC(0x576770u,576);
}
B77a721:L77a721:{c.instructions+=1;NFSU2_TR(0x77a721);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a730:L77a730:{c.instructions+=4;NFSU2_TR(0x77a730);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a732:{NFSU2_TR(0x77a732);
u8 U[4];
w4(U+0,u32(0x7e9c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a737:{NFSU2_TR(0x77a737);
w4(R+4,u32(0x81e370ull));
}
B77a73c:{NFSU2_TR(0x77a73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a741ull));
TAIL_STATIC(0x576770u,576);
}
B77a741:L77a741:{c.instructions+=1;NFSU2_TR(0x77a741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a750:L77a750:{c.instructions+=4;NFSU2_TR(0x77a750);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a752:{NFSU2_TR(0x77a752);
u8 U[4];
w4(U+0,u32(0x7e9c78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a757:{NFSU2_TR(0x77a757);
w4(R+4,u32(0x827a18ull));
}
B77a75c:{NFSU2_TR(0x77a75c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a761ull));
TAIL_STATIC(0x576770u,576);
}
B77a761:L77a761:{c.instructions+=1;NFSU2_TR(0x77a761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a770:L77a770:{c.instructions+=4;NFSU2_TR(0x77a770);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a772:{NFSU2_TR(0x77a772);
u8 U[4];
w4(U+0,u32(0x7e9cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a777:{NFSU2_TR(0x77a777);
w4(R+4,u32(0x81e7f4ull));
}
B77a77c:{NFSU2_TR(0x77a77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a781ull));
TAIL_STATIC(0x576770u,576);
}
B77a781:L77a781:{c.instructions+=1;NFSU2_TR(0x77a781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a790:L77a790:{c.instructions+=4;NFSU2_TR(0x77a790);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a792:{NFSU2_TR(0x77a792);
u8 U[4];
w4(U+0,u32(0x7e9d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a797:{NFSU2_TR(0x77a797);
w4(R+4,u32(0x81e800ull));
}
B77a79c:{NFSU2_TR(0x77a79c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a7a1ull));
TAIL_STATIC(0x576770u,576);
}
B77a7a1:L77a7a1:{c.instructions+=1;NFSU2_TR(0x77a7a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a7b0:L77a7b0:{c.instructions+=4;NFSU2_TR(0x77a7b0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a7b2:{NFSU2_TR(0x77a7b2);
u8 U[4];
w4(U+0,u32(0x7e9d34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a7b7:{NFSU2_TR(0x77a7b7);
w4(R+4,u32(0x81e7e4ull));
}
B77a7bc:{NFSU2_TR(0x77a7bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a7c1ull));
TAIL_STATIC(0x576770u,576);
}
B77a7c1:L77a7c1:{c.instructions+=1;NFSU2_TR(0x77a7c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a7d0:L77a7d0:{c.instructions+=2;NFSU2_TR(0x77a7d0);
s4(0x81e5ac,u32(0x3dd67750ull));
}
B77a7da:{NFSU2_TR(0x77a7da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a7e0:L77a7e0:{c.instructions+=4;NFSU2_TR(0x77a7e0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a7e2:{NFSU2_TR(0x77a7e2);
u8 U[4];
w4(U+0,u32(0x7e9f58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a7e7:{NFSU2_TR(0x77a7e7);
w4(R+4,u32(0x81e5b0ull));
}
B77a7ec:{NFSU2_TR(0x77a7ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a7f1ull));
TAIL_STATIC(0x576770u,576);
}
B77a7f1:L77a7f1:{c.instructions+=1;NFSU2_TR(0x77a7f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a800:L77a800:{c.instructions+=2;NFSU2_TR(0x77a800);
w4(R+4,u32(0x81e7ecull));
}
B77a805:{NFSU2_TR(0x77a805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a80aull));
TAIL_STATIC(0x598750u,598);
}
B77a80a:L77a80a:{c.instructions+=2;NFSU2_TR(0x77a80a);
u8 U[4];
w4(U+0,u32(0x781960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a80f:{NFSU2_TR(0x77a80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a814ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77a814:L77a814:{c.instructions+=2;NFSU2_TR(0x77a814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a815:{NFSU2_TR(0x77a815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a820:L77a820:{c.instructions+=54;NFSU2_TR(0x77a820);
__builtin_memmove((R+0),gp(0x783c30),4);
}
B77a825:{NFSU2_TR(0x77a825);
__builtin_memmove((R+8),gp(0x783c28),4);
}
B77a82b:{NFSU2_TR(0x77a82b);
__builtin_memmove((R+4),(R+0),4);
}
B77a82d:{NFSU2_TR(0x77a82d);
__builtin_memmove(gp(0x7ea088),(R+0),4);
}
B77a832:{NFSU2_TR(0x77a832);
__builtin_memmove(gp(0x7ea08c),(R+4),4);
}
B77a838:{NFSU2_TR(0x77a838);
__builtin_memmove((R+4),gp(0x783c2c),4);
}
B77a83e:{NFSU2_TR(0x77a83e);
__builtin_memmove((R+0),(R+8),4);
}
B77a840:{NFSU2_TR(0x77a840);
__builtin_memmove(gp(0x7ea0c0),(R+8),4);
}
B77a846:{NFSU2_TR(0x77a846);
__builtin_memmove((R+8),(R+4),4);
}
B77a848:{NFSU2_TR(0x77a848);
__builtin_memmove(gp(0x7ea0c4),(R+0),4);
}
B77a84d:{NFSU2_TR(0x77a84d);
__builtin_memmove(gp(0x7ea0c8),(R+4),4);
}
B77a853:{NFSU2_TR(0x77a853);
w1(R+4,u8(0x80ull));
}
B77a855:{NFSU2_TR(0x77a855);
w1(R+0,u8(0x25ull));
}
B77a857:{NFSU2_TR(0x77a857);
__builtin_memmove(gp(0x7ea0e8),(R+0),1);
}
B77a85c:{NFSU2_TR(0x77a85c);
__builtin_memmove(gp(0x7ea0e9),(R+0),1);
}
B77a861:{NFSU2_TR(0x77a861);
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
B77a863:{NFSU2_TR(0x77a863);
__builtin_memmove(gp(0x7ea0ee),(R+4),1);
}
B77a869:{NFSU2_TR(0x77a869);
__builtin_memmove(gp(0x7ea0ef),(R+4),1);
}
B77a86f:{NFSU2_TR(0x77a86f);
__builtin_memmove(gp(0x7ea0f0),(R+4),1);
}
B77a875:{NFSU2_TR(0x77a875);
__builtin_memmove(gp(0x7ea0f1),(R+4),1);
}
B77a87b:{NFSU2_TR(0x77a87b);
__builtin_memmove(gp(0x7ea0f2),(R+4),1);
}
B77a881:{NFSU2_TR(0x77a881);
__builtin_memmove(gp(0x7ea0f3),(R+4),1);
}
B77a887:{NFSU2_TR(0x77a887);
w1(R+4,u8(0x32ull));
}
B77a889:{NFSU2_TR(0x77a889);
s4(0x7ea090,u32(0x0ull));
}
B77a893:{NFSU2_TR(0x77a893);
s4(0x7ea094,u32(0x41200000ull));
}
B77a89d:{NFSU2_TR(0x77a89d);
s4(0x7ea098,u32(0x40000000ull));
}
B77a8a7:{NFSU2_TR(0x77a8a7);
s4(0x7ea09c,u32(0x0ull));
}
B77a8b1:{NFSU2_TR(0x77a8b1);
s4(0x7ea0a0,u32(0x41200000ull));
}
B77a8bb:{NFSU2_TR(0x77a8bb);
s4(0x7ea0a4,u32(0x40000000ull));
}
B77a8c5:{NFSU2_TR(0x77a8c5);
s4(0x7ea0a8,u32(0x0ull));
}
B77a8cf:{NFSU2_TR(0x77a8cf);
s4(0x7ea0ac,u32(0x0ull));
}
B77a8d9:{NFSU2_TR(0x77a8d9);
s4(0x7ea0b0,u32(0x0ull));
}
B77a8e3:{NFSU2_TR(0x77a8e3);
s4(0x7ea0b4,u32(0x0ull));
}
B77a8ed:{NFSU2_TR(0x77a8ed);
s4(0x7ea0b8,u32(0x0ull));
}
B77a8f7:{NFSU2_TR(0x77a8f7);
s4(0x7ea0bc,u32(0x0ull));
}
B77a901:{NFSU2_TR(0x77a901);
__builtin_memmove(gp(0x7ea0cc),(R+8),4);
}
B77a907:{NFSU2_TR(0x77a907);
s4(0x7ea0d0,u32(0x0ull));
}
B77a911:{NFSU2_TR(0x77a911);
s4(0x7ea0d4,u32(0x0ull));
}
B77a91b:{NFSU2_TR(0x77a91b);
s4(0x7ea0d8,u32(0x0ull));
}
B77a925:{NFSU2_TR(0x77a925);
s4(0x7ea0dc,u32(0x0ull));
}
B77a92f:{NFSU2_TR(0x77a92f);
s4(0x7ea0e0,u32(0x0ull));
}
B77a939:{NFSU2_TR(0x77a939);
s4(0x7ea0e4,u32(0x0ull));
}
B77a943:{NFSU2_TR(0x77a943);
__builtin_memmove(gp(0x7ea0ea),(R+0),1);
}
B77a948:{NFSU2_TR(0x77a948);
__builtin_memmove(gp(0x7ea0eb),(R+0),1);
}
B77a94d:{NFSU2_TR(0x77a94d);
__builtin_memmove(gp(0x7ea0ec),(R+0),1);
}
B77a952:{NFSU2_TR(0x77a952);
__builtin_memmove(gp(0x7ea0ed),(R+0),1);
}
B77a957:{NFSU2_TR(0x77a957);
__builtin_memmove(gp(0x7ea0f4),(R+0),1);
}
B77a95c:{NFSU2_TR(0x77a95c);
__builtin_memmove(gp(0x7ea0f5),(R+4),1);
}
B77a962:{NFSU2_TR(0x77a962);
__builtin_memmove(gp(0x7ea0f6),(R+0),1);
}
B77a967:{NFSU2_TR(0x77a967);
__builtin_memmove(gp(0x7ea0f7),(R+4),1);
}
B77a96d:{NFSU2_TR(0x77a96d);
__builtin_memmove(gp(0x7ea0f8),(R+0),1);
}
B77a972:{NFSU2_TR(0x77a972);
__builtin_memmove(gp(0x7ea0f9),(R+0),1);
}
B77a977:{NFSU2_TR(0x77a977);
__builtin_memmove(gp(0x7ea0fc),(R+0),4);
}
B77a97c:{NFSU2_TR(0x77a97c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a980:L77a980:{c.instructions+=2;NFSU2_TR(0x77a980);
u8 U[4];
w4(U+0,u32(0x781950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a985:{NFSU2_TR(0x77a985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a98aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77a98a:L77a98a:{c.instructions+=2;NFSU2_TR(0x77a98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a98b:{NFSU2_TR(0x77a98b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a990:L77a990:{c.instructions+=2;NFSU2_TR(0x77a990);
w4(R+4,u32(0x81e810ull));
}
B77a995:{NFSU2_TR(0x77a995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a99aull));
TAIL_STATIC(0x41aa60u,41a);
}
B77a99a:L77a99a:{c.instructions+=2;NFSU2_TR(0x77a99a);
u8 U[4];
w4(U+0,u32(0x7819a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a99f:{NFSU2_TR(0x77a99f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a9a4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77a9a4:L77a9a4:{c.instructions+=2;NFSU2_TR(0x77a9a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a9a5:{NFSU2_TR(0x77a9a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a9b0:L77a9b0:{c.instructions+=2;NFSU2_TR(0x77a9b0);
w4(R+4,u32(0x81cbc0ull));
}
B77a9b5:{NFSU2_TR(0x77a9b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a9baull));
TAIL_STATIC(0x4130a0u,413);
}
B77a9ba:L77a9ba:{c.instructions+=2;NFSU2_TR(0x77a9ba);
u8 U[4];
w4(U+0,u32(0x781970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77a9bf:{NFSU2_TR(0x77a9bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77a9c4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77a9c4:L77a9c4:{c.instructions+=2;NFSU2_TR(0x77a9c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77a9c5:{NFSU2_TR(0x77a9c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a9d0:L77a9d0:{c.instructions+=4;NFSU2_TR(0x77a9d0);
{u32 ea_=u32(u32(7887816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77a9d6:{NFSU2_TR(0x77a9d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77a9d8:{NFSU2_TR(0x77a9d8);
{u32 ea_=u32(u32(8551620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77a9de:{NFSU2_TR(0x77a9de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77a9e0:L77a9e0:{c.instructions+=4;NFSU2_TR(0x77a9e0);
{u32 ea_=u32(u32(7887816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77a9e6:{NFSU2_TR(0x77a9e6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77a9ec:{NFSU2_TR(0x77a9ec);
{u32 ea_=u32(u32(8551616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77a9f2:{NFSU2_TR(0x77a9f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aa00:L77aa00:{c.instructions+=4;NFSU2_TR(0x77aa00);
{u32 ea_=u32(u32(7887824u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77aa06:{NFSU2_TR(0x77aa06);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77aa08:{NFSU2_TR(0x77aa08);
{u32 ea_=u32(u32(8551608u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77aa0e:{NFSU2_TR(0x77aa0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aa10:L77aa10:{c.instructions+=4;NFSU2_TR(0x77aa10);
{u32 ea_=u32(u32(7887824u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77aa16:{NFSU2_TR(0x77aa16);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77aa1c:{NFSU2_TR(0x77aa1c);
{u32 ea_=u32(u32(8551600u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77aa22:{NFSU2_TR(0x77aa22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aa30:L77aa30:{c.instructions+=4;NFSU2_TR(0x77aa30);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77aa36:{NFSU2_TR(0x77aa36);
{u32 ea_=u32(u32(7887844u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77aa3c:{NFSU2_TR(0x77aa3c);
{u32 ea_=u32(u32(8551840u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77aa42:{NFSU2_TR(0x77aa42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aa50:L77aa50:{c.instructions+=2;NFSU2_TR(0x77aa50);
u8 U[4];
w4(U+0,u32(0x781a30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aa55:{NFSU2_TR(0x77aa55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aa5aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77aa5a:L77aa5a:{c.instructions+=2;NFSU2_TR(0x77aa5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77aa5b:{NFSU2_TR(0x77aa5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aa60:L77aa60:{c.instructions+=2;NFSU2_TR(0x77aa60);
u8 U[4];
w4(U+0,u32(0x7864e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aa65:{NFSU2_TR(0x77aa65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aa6aull));
TAIL_STATIC(0x43db50u,43d);
}
B77aa6a:L77aa6a:{c.instructions+=3;NFSU2_TR(0x77aa6a);
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
B77aa6d:{NFSU2_TR(0x77aa6d);
__builtin_memmove(gp(0x827d34),(R+0),4);
}
B77aa72:{NFSU2_TR(0x77aa72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aa80:L77aa80:{c.instructions+=2;NFSU2_TR(0x77aa80);
u8 U[4];
w4(U+0,u32(0x7864fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aa85:{NFSU2_TR(0x77aa85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aa8aull));
TAIL_STATIC(0x43db50u,43d);
}
B77aa8a:L77aa8a:{c.instructions+=3;NFSU2_TR(0x77aa8a);
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
B77aa8d:{NFSU2_TR(0x77aa8d);
__builtin_memmove(gp(0x827c5c),(R+0),4);
}
B77aa92:{NFSU2_TR(0x77aa92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aaa0:L77aaa0:{c.instructions+=2;NFSU2_TR(0x77aaa0);
u8 U[4];
w4(U+0,u32(0x786510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aaa5:{NFSU2_TR(0x77aaa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aaaaull));
TAIL_STATIC(0x43db50u,43d);
}
B77aaaa:L77aaaa:{c.instructions+=3;NFSU2_TR(0x77aaaa);
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
B77aaad:{NFSU2_TR(0x77aaad);
__builtin_memmove(gp(0x827c68),(R+0),4);
}
B77aab2:{NFSU2_TR(0x77aab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aac0:L77aac0:{c.instructions+=2;NFSU2_TR(0x77aac0);
u8 U[4];
w4(U+0,u32(0x786520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aac5:{NFSU2_TR(0x77aac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aacaull));
TAIL_STATIC(0x43db50u,43d);
}
B77aaca:L77aaca:{c.instructions+=3;NFSU2_TR(0x77aaca);
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
B77aacd:{NFSU2_TR(0x77aacd);
__builtin_memmove(gp(0x827c98),(R+0),4);
}
B77aad2:{NFSU2_TR(0x77aad2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aae0:L77aae0:{c.instructions+=2;NFSU2_TR(0x77aae0);
u8 U[4];
w4(U+0,u32(0x786530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aae5:{NFSU2_TR(0x77aae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aaeaull));
TAIL_STATIC(0x43db50u,43d);
}
B77aaea:L77aaea:{c.instructions+=3;NFSU2_TR(0x77aaea);
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
B77aaed:{NFSU2_TR(0x77aaed);
__builtin_memmove(gp(0x827dac),(R+0),4);
}
B77aaf2:{NFSU2_TR(0x77aaf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ab00:L77ab00:{c.instructions+=2;NFSU2_TR(0x77ab00);
u8 U[4];
w4(U+0,u32(0x786548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ab05:{NFSU2_TR(0x77ab05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ab0aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ab0a:L77ab0a:{c.instructions+=3;NFSU2_TR(0x77ab0a);
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
B77ab0d:{NFSU2_TR(0x77ab0d);
__builtin_memmove(gp(0x827c7c),(R+0),4);
}
B77ab12:{NFSU2_TR(0x77ab12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ab20:L77ab20:{c.instructions+=2;NFSU2_TR(0x77ab20);
u8 U[4];
w4(U+0,u32(0x786560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ab25:{NFSU2_TR(0x77ab25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ab2aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ab2a:L77ab2a:{c.instructions+=3;NFSU2_TR(0x77ab2a);
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
B77ab2d:{NFSU2_TR(0x77ab2d);
__builtin_memmove(gp(0x827f40),(R+0),4);
}
B77ab32:{NFSU2_TR(0x77ab32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ab40:L77ab40:{c.instructions+=2;NFSU2_TR(0x77ab40);
u8 U[4];
w4(U+0,u32(0x78657cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ab45:{NFSU2_TR(0x77ab45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ab4aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ab4a:L77ab4a:{c.instructions+=3;NFSU2_TR(0x77ab4a);
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
B77ab4d:{NFSU2_TR(0x77ab4d);
__builtin_memmove(gp(0x827c8c),(R+0),4);
}
B77ab52:{NFSU2_TR(0x77ab52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ab60:L77ab60:{c.instructions+=2;NFSU2_TR(0x77ab60);
u8 U[4];
w4(U+0,u32(0x786598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ab65:{NFSU2_TR(0x77ab65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ab6aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ab6a:L77ab6a:{c.instructions+=3;NFSU2_TR(0x77ab6a);
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
B77ab6d:{NFSU2_TR(0x77ab6d);
__builtin_memmove(gp(0x827db0),(R+0),4);
}
B77ab72:{NFSU2_TR(0x77ab72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ab80:L77ab80:{c.instructions+=2;NFSU2_TR(0x77ab80);
w4(R+4,u32(0x827e88ull));
}
B77ab85:{NFSU2_TR(0x77ab85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ab8aull));
TAIL_STATIC(0x4301d0u,430);
}
B77ab8a:L77ab8a:{c.instructions+=2;NFSU2_TR(0x77ab8a);
u8 U[4];
w4(U+0,u32(0x781a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ab8f:{NFSU2_TR(0x77ab8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ab94ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ab94:L77ab94:{c.instructions+=2;NFSU2_TR(0x77ab94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ab95:{NFSU2_TR(0x77ab95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77aba0:L77aba0:{c.instructions+=2;NFSU2_TR(0x77aba0);
w4(R+4,u32(0x827c3cull));
}
B77aba5:{NFSU2_TR(0x77aba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77abaaull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77abaa:L77abaa:{c.instructions+=2;NFSU2_TR(0x77abaa);
u8 U[4];
w4(U+0,u32(0x781b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77abaf:{NFSU2_TR(0x77abaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77abb4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77abb4:L77abb4:{c.instructions+=2;NFSU2_TR(0x77abb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77abb5:{NFSU2_TR(0x77abb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77abc0:L77abc0:{c.instructions+=2;NFSU2_TR(0x77abc0);
w4(R+4,u32(0x827d98ull));
}
B77abc5:{NFSU2_TR(0x77abc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77abcaull));
TAIL_STATIC(0x598750u,598);
}
B77abca:L77abca:{c.instructions+=2;NFSU2_TR(0x77abca);
u8 U[4];
w4(U+0,u32(0x781b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77abcf:{NFSU2_TR(0x77abcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77abd4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77abd4:L77abd4:{c.instructions+=2;NFSU2_TR(0x77abd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77abd5:{NFSU2_TR(0x77abd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77abe0:L77abe0:{c.instructions+=5;NFSU2_TR(0x77abe0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B77abe5:{NFSU2_TR(0x77abe5);
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
B77abe7:{NFSU2_TR(0x77abe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B77abea:{NFSU2_TR(0x77abea);
__builtin_memmove(gp(0x827c38),(R+0),1);
}
B77abef:{NFSU2_TR(0x77abef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77abf0:L77abf0:{c.instructions+=2;NFSU2_TR(0x77abf0);
w4(R+4,u32(0x827b88ull));
}
B77abf5:{NFSU2_TR(0x77abf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77abfaull));
TAIL_STATIC(0x435b80u,435);
}
B77abfa:L77abfa:{c.instructions+=2;NFSU2_TR(0x77abfa);
u8 U[4];
w4(U+0,u32(0x781b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77abff:{NFSU2_TR(0x77abff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ac04ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ac04:L77ac04:{c.instructions+=2;NFSU2_TR(0x77ac04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ac05:{NFSU2_TR(0x77ac05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ac10:L77ac10:{c.instructions+=2;NFSU2_TR(0x77ac10);
w4(R+4,u32(0x827c60ull));
}
B77ac15:{NFSU2_TR(0x77ac15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ac1aull));
TAIL_STATIC(0x598750u,598);
}
B77ac1a:L77ac1a:{c.instructions+=2;NFSU2_TR(0x77ac1a);
u8 U[4];
w4(U+0,u32(0x781b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ac1f:{NFSU2_TR(0x77ac1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ac24ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ac24:L77ac24:{c.instructions+=2;NFSU2_TR(0x77ac24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ac25:{NFSU2_TR(0x77ac25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ac30:L77ac30:{c.instructions+=54;NFSU2_TR(0x77ac30);
__builtin_memmove((R+0),gp(0x785bf0),4);
}
B77ac35:{NFSU2_TR(0x77ac35);
__builtin_memmove((R+8),gp(0x785be8),4);
}
B77ac3b:{NFSU2_TR(0x77ac3b);
__builtin_memmove((R+4),(R+0),4);
}
B77ac3d:{NFSU2_TR(0x77ac3d);
__builtin_memmove(gp(0x7ea4f0),(R+0),4);
}
B77ac42:{NFSU2_TR(0x77ac42);
__builtin_memmove(gp(0x7ea4f4),(R+4),4);
}
B77ac48:{NFSU2_TR(0x77ac48);
__builtin_memmove((R+4),gp(0x785bec),4);
}
B77ac4e:{NFSU2_TR(0x77ac4e);
__builtin_memmove((R+0),(R+8),4);
}
B77ac50:{NFSU2_TR(0x77ac50);
__builtin_memmove(gp(0x7ea528),(R+8),4);
}
B77ac56:{NFSU2_TR(0x77ac56);
__builtin_memmove((R+8),(R+4),4);
}
B77ac58:{NFSU2_TR(0x77ac58);
__builtin_memmove(gp(0x7ea52c),(R+0),4);
}
B77ac5d:{NFSU2_TR(0x77ac5d);
__builtin_memmove(gp(0x7ea530),(R+4),4);
}
B77ac63:{NFSU2_TR(0x77ac63);
w1(R+4,u8(0x80ull));
}
B77ac65:{NFSU2_TR(0x77ac65);
w1(R+0,u8(0x25ull));
}
B77ac67:{NFSU2_TR(0x77ac67);
__builtin_memmove(gp(0x7ea550),(R+0),1);
}
B77ac6c:{NFSU2_TR(0x77ac6c);
__builtin_memmove(gp(0x7ea551),(R+0),1);
}
B77ac71:{NFSU2_TR(0x77ac71);
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
B77ac73:{NFSU2_TR(0x77ac73);
__builtin_memmove(gp(0x7ea556),(R+4),1);
}
B77ac79:{NFSU2_TR(0x77ac79);
__builtin_memmove(gp(0x7ea557),(R+4),1);
}
B77ac7f:{NFSU2_TR(0x77ac7f);
__builtin_memmove(gp(0x7ea558),(R+4),1);
}
B77ac85:{NFSU2_TR(0x77ac85);
__builtin_memmove(gp(0x7ea559),(R+4),1);
}
B77ac8b:{NFSU2_TR(0x77ac8b);
__builtin_memmove(gp(0x7ea55a),(R+4),1);
}
B77ac91:{NFSU2_TR(0x77ac91);
__builtin_memmove(gp(0x7ea55b),(R+4),1);
}
B77ac97:{NFSU2_TR(0x77ac97);
w1(R+4,u8(0x32ull));
}
B77ac99:{NFSU2_TR(0x77ac99);
s4(0x7ea4f8,u32(0x0ull));
}
B77aca3:{NFSU2_TR(0x77aca3);
s4(0x7ea4fc,u32(0x41200000ull));
}
B77acad:{NFSU2_TR(0x77acad);
s4(0x7ea500,u32(0x40000000ull));
}
B77acb7:{NFSU2_TR(0x77acb7);
s4(0x7ea504,u32(0x0ull));
}
B77acc1:{NFSU2_TR(0x77acc1);
s4(0x7ea508,u32(0x41200000ull));
}
B77accb:{NFSU2_TR(0x77accb);
s4(0x7ea50c,u32(0x40000000ull));
}
B77acd5:{NFSU2_TR(0x77acd5);
s4(0x7ea510,u32(0x0ull));
}
B77acdf:{NFSU2_TR(0x77acdf);
s4(0x7ea514,u32(0x0ull));
}
B77ace9:{NFSU2_TR(0x77ace9);
s4(0x7ea518,u32(0x0ull));
}
B77acf3:{NFSU2_TR(0x77acf3);
s4(0x7ea51c,u32(0x0ull));
}
B77acfd:{NFSU2_TR(0x77acfd);
s4(0x7ea520,u32(0x0ull));
}
B77ad07:{NFSU2_TR(0x77ad07);
s4(0x7ea524,u32(0x0ull));
}
B77ad11:{NFSU2_TR(0x77ad11);
__builtin_memmove(gp(0x7ea534),(R+8),4);
}
B77ad17:{NFSU2_TR(0x77ad17);
s4(0x7ea538,u32(0x0ull));
}
B77ad21:{NFSU2_TR(0x77ad21);
s4(0x7ea53c,u32(0x0ull));
}
B77ad2b:{NFSU2_TR(0x77ad2b);
s4(0x7ea540,u32(0x0ull));
}
B77ad35:{NFSU2_TR(0x77ad35);
s4(0x7ea544,u32(0x0ull));
}
B77ad3f:{NFSU2_TR(0x77ad3f);
s4(0x7ea548,u32(0x0ull));
}
B77ad49:{NFSU2_TR(0x77ad49);
s4(0x7ea54c,u32(0x0ull));
}
B77ad53:{NFSU2_TR(0x77ad53);
__builtin_memmove(gp(0x7ea552),(R+0),1);
}
B77ad58:{NFSU2_TR(0x77ad58);
__builtin_memmove(gp(0x7ea553),(R+0),1);
}
B77ad5d:{NFSU2_TR(0x77ad5d);
__builtin_memmove(gp(0x7ea554),(R+0),1);
}
B77ad62:{NFSU2_TR(0x77ad62);
__builtin_memmove(gp(0x7ea555),(R+0),1);
}
B77ad67:{NFSU2_TR(0x77ad67);
__builtin_memmove(gp(0x7ea55c),(R+0),1);
}
B77ad6c:{NFSU2_TR(0x77ad6c);
__builtin_memmove(gp(0x7ea55d),(R+4),1);
}
B77ad72:{NFSU2_TR(0x77ad72);
__builtin_memmove(gp(0x7ea55e),(R+0),1);
}
B77ad77:{NFSU2_TR(0x77ad77);
__builtin_memmove(gp(0x7ea55f),(R+4),1);
}
B77ad7d:{NFSU2_TR(0x77ad7d);
__builtin_memmove(gp(0x7ea560),(R+0),1);
}
B77ad82:{NFSU2_TR(0x77ad82);
__builtin_memmove(gp(0x7ea561),(R+0),1);
}
B77ad87:{NFSU2_TR(0x77ad87);
__builtin_memmove(gp(0x7ea564),(R+0),4);
}
B77ad8c:{NFSU2_TR(0x77ad8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ad90:L77ad90:{c.instructions+=2;NFSU2_TR(0x77ad90);
u8 U[4];
w4(U+0,u32(0x786458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ad95:{NFSU2_TR(0x77ad95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ad9aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ad9a:L77ad9a:{c.instructions+=3;NFSU2_TR(0x77ad9a);
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
B77ad9d:{NFSU2_TR(0x77ad9d);
__builtin_memmove(gp(0x827f60),(R+0),4);
}
B77ada2:{NFSU2_TR(0x77ada2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77adb0:L77adb0:{c.instructions+=2;NFSU2_TR(0x77adb0);
w4(R+4,u32(0x827b80ull));
}
B77adb5:{NFSU2_TR(0x77adb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77adbaull));
TAIL_STATIC(0x598750u,598);
}
B77adba:L77adba:{c.instructions+=2;NFSU2_TR(0x77adba);
u8 U[4];
w4(U+0,u32(0x781ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77adbf:{NFSU2_TR(0x77adbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77adc4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77adc4:L77adc4:{c.instructions+=2;NFSU2_TR(0x77adc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77adc5:{NFSU2_TR(0x77adc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77add0:L77add0:{c.instructions+=4;NFSU2_TR(0x77add0);
w4(R+0,u32(0x827ba0ull));
}
B77add5:{NFSU2_TR(0x77add5);
w4(R+8,u32(0x8ull));
}
B77adda:{NFSU2_TR(0x77adda);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B77addc:{NFSU2_TR(0x77addc);
__builtin_memmove((R+16),(R+16),4);
}
B77ade0:L77ade0:{c.instructions+=8;NFSU2_TR(0x77ade0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77ade3:{NFSU2_TR(0x77ade3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77ade6:{NFSU2_TR(0x77ade6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B77ade8:{NFSU2_TR(0x77ade8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77adeb:{NFSU2_TR(0x77adeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B77adf2:{NFSU2_TR(0x77adf2);
w1(R+512,carry<u32>(r4(R+0),u32(0x14ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B77adf5:{NFSU2_TR(0x77adf5);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77adf6:{NFSU2_TR(0x77adf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77ade0u);}goto L77ade0;}}
}
B77adf8:L77adf8:{c.instructions+=1;NFSU2_TR(0x77adf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ae00:L77ae00:{c.instructions+=2;NFSU2_TR(0x77ae00);
u8 U[4];
w4(U+0,u32(0x78660cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae05:{NFSU2_TR(0x77ae05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae0aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae0a:L77ae0a:{c.instructions+=3;NFSU2_TR(0x77ae0a);
u8 U[4];
w4(U+0,u32(0x786600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae0f:{NFSU2_TR(0x77ae0f);
__builtin_memmove(gp(0x827fa4),(R+0),4);
}
B77ae14:{NFSU2_TR(0x77ae14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae19ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae19:L77ae19:{c.instructions+=3;NFSU2_TR(0x77ae19);
u8 U[4];
w4(U+0,u32(0x7865f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae1e:{NFSU2_TR(0x77ae1e);
__builtin_memmove(gp(0x827fa8),(R+0),4);
}
B77ae23:{NFSU2_TR(0x77ae23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae28ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae28:L77ae28:{c.instructions+=3;NFSU2_TR(0x77ae28);
u8 U[4];
w4(U+0,u32(0x7865e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae2d:{NFSU2_TR(0x77ae2d);
__builtin_memmove(gp(0x827fac),(R+0),4);
}
B77ae32:{NFSU2_TR(0x77ae32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae37ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae37:L77ae37:{c.instructions+=3;NFSU2_TR(0x77ae37);
u8 U[4];
w4(U+0,u32(0x7865dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae3c:{NFSU2_TR(0x77ae3c);
__builtin_memmove(gp(0x827fb0),(R+0),4);
}
B77ae41:{NFSU2_TR(0x77ae41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae46ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae46:L77ae46:{c.instructions+=3;NFSU2_TR(0x77ae46);
u8 U[4];
w4(U+0,u32(0x7865d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae4b:{NFSU2_TR(0x77ae4b);
__builtin_memmove(gp(0x827fb4),(R+0),4);
}
B77ae50:{NFSU2_TR(0x77ae50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae55ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae55:L77ae55:{c.instructions+=3;NFSU2_TR(0x77ae55);
u8 U[4];
w4(U+0,u32(0x7865c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae5a:{NFSU2_TR(0x77ae5a);
__builtin_memmove(gp(0x827fb8),(R+0),4);
}
B77ae5f:{NFSU2_TR(0x77ae5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae64ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae64:L77ae64:{c.instructions+=3;NFSU2_TR(0x77ae64);
u8 U[4];
w4(U+0,u32(0x7865b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae69:{NFSU2_TR(0x77ae69);
__builtin_memmove(gp(0x827fbc),(R+0),4);
}
B77ae6e:{NFSU2_TR(0x77ae6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae73ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae73:L77ae73:{c.instructions+=3;NFSU2_TR(0x77ae73);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77ae76:{NFSU2_TR(0x77ae76);
__builtin_memmove(gp(0x827fc0),(R+0),4);
}
B77ae7b:{NFSU2_TR(0x77ae7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ae80:L77ae80:{c.instructions+=2;NFSU2_TR(0x77ae80);
u8 U[4];
w4(U+0,u32(0x78666cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae85:{NFSU2_TR(0x77ae85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae8aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae8a:L77ae8a:{c.instructions+=3;NFSU2_TR(0x77ae8a);
u8 U[4];
w4(U+0,u32(0x786660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae8f:{NFSU2_TR(0x77ae8f);
__builtin_memmove(gp(0x827f64),(R+0),4);
}
B77ae94:{NFSU2_TR(0x77ae94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ae99ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ae99:L77ae99:{c.instructions+=3;NFSU2_TR(0x77ae99);
u8 U[4];
w4(U+0,u32(0x786654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ae9e:{NFSU2_TR(0x77ae9e);
__builtin_memmove(gp(0x827f68),(R+0),4);
}
B77aea3:{NFSU2_TR(0x77aea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aea8ull));
TAIL_STATIC(0x43db50u,43d);
}
B77aea8:L77aea8:{c.instructions+=3;NFSU2_TR(0x77aea8);
u8 U[4];
w4(U+0,u32(0x786648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aead:{NFSU2_TR(0x77aead);
__builtin_memmove(gp(0x827f6c),(R+0),4);
}
B77aeb2:{NFSU2_TR(0x77aeb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aeb7ull));
TAIL_STATIC(0x43db50u,43d);
}
B77aeb7:L77aeb7:{c.instructions+=3;NFSU2_TR(0x77aeb7);
u8 U[4];
w4(U+0,u32(0x78663cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aebc:{NFSU2_TR(0x77aebc);
__builtin_memmove(gp(0x827f70),(R+0),4);
}
B77aec1:{NFSU2_TR(0x77aec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aec6ull));
TAIL_STATIC(0x43db50u,43d);
}
B77aec6:L77aec6:{c.instructions+=3;NFSU2_TR(0x77aec6);
u8 U[4];
w4(U+0,u32(0x786630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aecb:{NFSU2_TR(0x77aecb);
__builtin_memmove(gp(0x827f74),(R+0),4);
}
B77aed0:{NFSU2_TR(0x77aed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aed5ull));
TAIL_STATIC(0x43db50u,43d);
}
B77aed5:L77aed5:{c.instructions+=3;NFSU2_TR(0x77aed5);
u8 U[4];
w4(U+0,u32(0x786624ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aeda:{NFSU2_TR(0x77aeda);
__builtin_memmove(gp(0x827f78),(R+0),4);
}
B77aedf:{NFSU2_TR(0x77aedf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aee4ull));
TAIL_STATIC(0x43db50u,43d);
}
B77aee4:L77aee4:{c.instructions+=3;NFSU2_TR(0x77aee4);
u8 U[4];
w4(U+0,u32(0x786618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77aee9:{NFSU2_TR(0x77aee9);
__builtin_memmove(gp(0x827f7c),(R+0),4);
}
B77aeee:{NFSU2_TR(0x77aeee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aef3ull));
TAIL_STATIC(0x43db50u,43d);
}
B77aef3:L77aef3:{c.instructions+=3;NFSU2_TR(0x77aef3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77aef6:{NFSU2_TR(0x77aef6);
__builtin_memmove(gp(0x827f80),(R+0),4);
}
B77aefb:{NFSU2_TR(0x77aefb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77af00:L77af00:{c.instructions+=2;NFSU2_TR(0x77af00);
u8 U[4];
w4(U+0,u32(0x7866ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af05:{NFSU2_TR(0x77af05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af0aull));
TAIL_STATIC(0x43db50u,43d);
}
B77af0a:L77af0a:{c.instructions+=3;NFSU2_TR(0x77af0a);
u8 U[4];
w4(U+0,u32(0x7866c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af0f:{NFSU2_TR(0x77af0f);
__builtin_memmove(gp(0x827fc4),(R+0),4);
}
B77af14:{NFSU2_TR(0x77af14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af19ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af19:L77af19:{c.instructions+=3;NFSU2_TR(0x77af19);
u8 U[4];
w4(U+0,u32(0x7866b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af1e:{NFSU2_TR(0x77af1e);
__builtin_memmove(gp(0x827fc8),(R+0),4);
}
B77af23:{NFSU2_TR(0x77af23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af28ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af28:L77af28:{c.instructions+=3;NFSU2_TR(0x77af28);
u8 U[4];
w4(U+0,u32(0x7866a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af2d:{NFSU2_TR(0x77af2d);
__builtin_memmove(gp(0x827fcc),(R+0),4);
}
B77af32:{NFSU2_TR(0x77af32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af37ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af37:L77af37:{c.instructions+=3;NFSU2_TR(0x77af37);
u8 U[4];
w4(U+0,u32(0x78669cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af3c:{NFSU2_TR(0x77af3c);
__builtin_memmove(gp(0x827fd0),(R+0),4);
}
B77af41:{NFSU2_TR(0x77af41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af46ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af46:L77af46:{c.instructions+=3;NFSU2_TR(0x77af46);
u8 U[4];
w4(U+0,u32(0x786690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af4b:{NFSU2_TR(0x77af4b);
__builtin_memmove(gp(0x827fd4),(R+0),4);
}
B77af50:{NFSU2_TR(0x77af50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af55ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af55:L77af55:{c.instructions+=3;NFSU2_TR(0x77af55);
u8 U[4];
w4(U+0,u32(0x786684ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af5a:{NFSU2_TR(0x77af5a);
__builtin_memmove(gp(0x827fd8),(R+0),4);
}
B77af5f:{NFSU2_TR(0x77af5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af64ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af64:L77af64:{c.instructions+=3;NFSU2_TR(0x77af64);
u8 U[4];
w4(U+0,u32(0x786678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af69:{NFSU2_TR(0x77af69);
__builtin_memmove(gp(0x827fdc),(R+0),4);
}
B77af6e:{NFSU2_TR(0x77af6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af73ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af73:L77af73:{c.instructions+=3;NFSU2_TR(0x77af73);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77af76:{NFSU2_TR(0x77af76);
__builtin_memmove(gp(0x827fe0),(R+0),4);
}
B77af7b:{NFSU2_TR(0x77af7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77af80:L77af80:{c.instructions+=2;NFSU2_TR(0x77af80);
u8 U[4];
w4(U+0,u32(0x78672cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af85:{NFSU2_TR(0x77af85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af8aull));
TAIL_STATIC(0x43db50u,43d);
}
B77af8a:L77af8a:{c.instructions+=3;NFSU2_TR(0x77af8a);
u8 U[4];
w4(U+0,u32(0x786720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af8f:{NFSU2_TR(0x77af8f);
__builtin_memmove(gp(0x827f84),(R+0),4);
}
B77af94:{NFSU2_TR(0x77af94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77af99ull));
TAIL_STATIC(0x43db50u,43d);
}
B77af99:L77af99:{c.instructions+=3;NFSU2_TR(0x77af99);
u8 U[4];
w4(U+0,u32(0x786714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77af9e:{NFSU2_TR(0x77af9e);
__builtin_memmove(gp(0x827f88),(R+0),4);
}
B77afa3:{NFSU2_TR(0x77afa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77afa8ull));
TAIL_STATIC(0x43db50u,43d);
}
B77afa8:L77afa8:{c.instructions+=3;NFSU2_TR(0x77afa8);
u8 U[4];
w4(U+0,u32(0x786708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77afad:{NFSU2_TR(0x77afad);
__builtin_memmove(gp(0x827f8c),(R+0),4);
}
B77afb2:{NFSU2_TR(0x77afb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77afb7ull));
TAIL_STATIC(0x43db50u,43d);
}
B77afb7:L77afb7:{c.instructions+=3;NFSU2_TR(0x77afb7);
u8 U[4];
w4(U+0,u32(0x7866fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77afbc:{NFSU2_TR(0x77afbc);
__builtin_memmove(gp(0x827f90),(R+0),4);
}
B77afc1:{NFSU2_TR(0x77afc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77afc6ull));
TAIL_STATIC(0x43db50u,43d);
}
B77afc6:L77afc6:{c.instructions+=3;NFSU2_TR(0x77afc6);
u8 U[4];
w4(U+0,u32(0x7866f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77afcb:{NFSU2_TR(0x77afcb);
__builtin_memmove(gp(0x827f94),(R+0),4);
}
B77afd0:{NFSU2_TR(0x77afd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77afd5ull));
TAIL_STATIC(0x43db50u,43d);
}
B77afd5:L77afd5:{c.instructions+=3;NFSU2_TR(0x77afd5);
u8 U[4];
w4(U+0,u32(0x7866e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77afda:{NFSU2_TR(0x77afda);
__builtin_memmove(gp(0x827f98),(R+0),4);
}
B77afdf:{NFSU2_TR(0x77afdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77afe4ull));
TAIL_STATIC(0x43db50u,43d);
}
B77afe4:L77afe4:{c.instructions+=3;NFSU2_TR(0x77afe4);
u8 U[4];
w4(U+0,u32(0x7866d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77afe9:{NFSU2_TR(0x77afe9);
__builtin_memmove(gp(0x827f9c),(R+0),4);
}
B77afee:{NFSU2_TR(0x77afee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77aff3ull));
TAIL_STATIC(0x43db50u,43d);
}
B77aff3:L77aff3:{c.instructions+=3;NFSU2_TR(0x77aff3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77aff6:{NFSU2_TR(0x77aff6);
__builtin_memmove(gp(0x827fa0),(R+0),4);
}
B77affb:{NFSU2_TR(0x77affb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x77a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
