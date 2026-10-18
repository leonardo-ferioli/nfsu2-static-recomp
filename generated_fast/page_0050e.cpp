#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4fd(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x50e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x50e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_50e(u8* __restrict R,Cpu& c);
u32 page_50e(Cpu& c){return body_50e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_50e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x50e001:goto L50e001;
case 0x50e005:c.instructions+=4;goto B50e005;
case 0x50e008:c.instructions+=3;goto B50e008;
case 0x50e00a:c.instructions+=2;goto B50e00a;
case 0x50e00d:c.instructions+=1;goto B50e00d;
case 0x50e013:goto L50e013;
case 0x50e017:c.instructions+=4;goto B50e017;
case 0x50e01b:c.instructions+=3;goto B50e01b;
case 0x50e01d:c.instructions+=2;goto B50e01d;
case 0x50e020:c.instructions+=1;goto B50e020;
case 0x50e022:goto L50e022;
case 0x50e025:c.instructions+=7;goto B50e025;
case 0x50e027:c.instructions+=6;goto B50e027;
case 0x50e028:c.instructions+=5;goto B50e028;
case 0x50e02c:c.instructions+=4;goto B50e02c;
case 0x50e02d:c.instructions+=3;goto B50e02d;
case 0x50e031:c.instructions+=2;goto B50e031;
case 0x50e032:c.instructions+=1;goto B50e032;
case 0x50e037:goto L50e037;
case 0x50e03a:c.instructions+=5;goto B50e03a;
case 0x50e03d:c.instructions+=4;goto B50e03d;
case 0x50e03e:c.instructions+=3;goto B50e03e;
case 0x50e03f:c.instructions+=2;goto B50e03f;
case 0x50e041:c.instructions+=1;goto B50e041;
case 0x50e047:goto L50e047;
case 0x50e04c:goto L50e04c;
case 0x50e050:c.instructions+=4;goto B50e050;
case 0x50e054:c.instructions+=3;goto B50e054;
case 0x50e056:c.instructions+=2;goto B50e056;
case 0x50e059:c.instructions+=1;goto B50e059;
case 0x50e05b:goto L50e05b;
case 0x50e05f:c.instructions+=1;goto B50e05f;
case 0x50e061:goto L50e061;
case 0x50e065:goto L50e065;
case 0x50e069:c.instructions+=4;goto B50e069;
case 0x50e06b:c.instructions+=3;goto B50e06b;
case 0x50e06d:c.instructions+=2;goto B50e06d;
case 0x50e070:c.instructions+=1;goto B50e070;
case 0x50e072:goto L50e072;
case 0x50e074:c.instructions+=1;goto B50e074;
case 0x50e078:goto L50e078;
case 0x50e07c:c.instructions+=11;goto B50e07c;
case 0x50e080:c.instructions+=10;goto B50e080;
case 0x50e084:c.instructions+=9;goto B50e084;
case 0x50e088:c.instructions+=8;goto B50e088;
case 0x50e08c:c.instructions+=7;goto B50e08c;
case 0x50e08e:c.instructions+=6;goto B50e08e;
case 0x50e092:c.instructions+=5;goto B50e092;
case 0x50e096:c.instructions+=4;goto B50e096;
case 0x50e09c:c.instructions+=3;goto B50e09c;
case 0x50e09e:c.instructions+=2;goto B50e09e;
case 0x50e0a1:c.instructions+=1;goto B50e0a1;
case 0x50e0a7:goto L50e0a7;
case 0x50e0ab:c.instructions+=5;goto B50e0ab;
case 0x50e0b1:c.instructions+=4;goto B50e0b1;
case 0x50e0b5:c.instructions+=3;goto B50e0b5;
case 0x50e0b7:c.instructions+=2;goto B50e0b7;
case 0x50e0ba:c.instructions+=1;goto B50e0ba;
case 0x50e0bc:goto L50e0bc;
case 0x50e0be:c.instructions+=1;goto B50e0be;
case 0x50e0c4:goto L50e0c4;
case 0x50e0c8:c.instructions+=13;goto B50e0c8;
case 0x50e0cb:c.instructions+=12;goto B50e0cb;
case 0x50e0cf:c.instructions+=11;goto B50e0cf;
case 0x50e0d1:c.instructions+=10;goto B50e0d1;
case 0x50e0d2:c.instructions+=9;goto B50e0d2;
case 0x50e0d6:c.instructions+=8;goto B50e0d6;
case 0x50e0d8:c.instructions+=7;goto B50e0d8;
case 0x50e0d9:c.instructions+=6;goto B50e0d9;
case 0x50e0dd:c.instructions+=5;goto B50e0dd;
case 0x50e0e1:c.instructions+=4;goto B50e0e1;
case 0x50e0e2:c.instructions+=3;goto B50e0e2;
case 0x50e0e6:c.instructions+=2;goto B50e0e6;
case 0x50e0e8:c.instructions+=1;goto B50e0e8;
case 0x50e0ed:goto L50e0ed;
case 0x50e0f0:goto L50e0f0;
case 0x50e0f4:c.instructions+=9;goto B50e0f4;
case 0x50e0f8:c.instructions+=8;goto B50e0f8;
case 0x50e0fc:c.instructions+=7;goto B50e0fc;
case 0x50e0ff:c.instructions+=6;goto B50e0ff;
case 0x50e100:c.instructions+=5;goto B50e100;
case 0x50e103:c.instructions+=4;goto B50e103;
case 0x50e105:c.instructions+=3;goto B50e105;
case 0x50e109:c.instructions+=2;goto B50e109;
case 0x50e10d:c.instructions+=1;goto B50e10d;
case 0x50e113:goto L50e113;
case 0x50e116:c.instructions+=4;goto B50e116;
case 0x50e11c:c.instructions+=3;goto B50e11c;
case 0x50e11e:c.instructions+=2;goto B50e11e;
case 0x50e121:c.instructions+=1;goto B50e121;
case 0x50e123:goto L50e123;
case 0x50e127:c.instructions+=14;goto B50e127;
case 0x50e12b:c.instructions+=13;goto B50e12b;
case 0x50e12d:c.instructions+=12;goto B50e12d;
case 0x50e12f:c.instructions+=11;goto B50e12f;
case 0x50e133:c.instructions+=10;goto B50e133;
case 0x50e138:c.instructions+=9;goto B50e138;
case 0x50e13c:c.instructions+=8;goto B50e13c;
case 0x50e140:c.instructions+=7;goto B50e140;
case 0x50e144:c.instructions+=6;goto B50e144;
case 0x50e148:c.instructions+=5;goto B50e148;
case 0x50e149:c.instructions+=4;goto B50e149;
case 0x50e14d:c.instructions+=3;goto B50e14d;
case 0x50e14e:c.instructions+=2;goto B50e14e;
case 0x50e152:c.instructions+=1;goto B50e152;
case 0x50e157:goto L50e157;
case 0x50e15a:goto L50e15a;
case 0x50e15b:c.instructions+=6;goto B50e15b;
case 0x50e15c:c.instructions+=5;goto B50e15c;
case 0x50e15d:c.instructions+=4;goto B50e15d;
case 0x50e15e:c.instructions+=3;goto B50e15e;
case 0x50e160:c.instructions+=2;goto B50e160;
case 0x50e161:c.instructions+=1;goto B50e161;
case 0x50e162:goto L50e162;
case 0x50e168:c.instructions+=1;goto B50e168;
case 0x50e170:goto L50e170;
case 0x50e174:c.instructions+=2;goto B50e174;
case 0x50e177:c.instructions+=1;goto B50e177;
case 0x50e179:goto L50e179;
case 0x50e17c:c.instructions+=1;goto B50e17c;
case 0x50e17e:goto L50e17e;
case 0x50e183:c.instructions+=1;goto B50e183;
case 0x50e186:goto L50e186;
case 0x50e188:c.instructions+=1;goto B50e188;
case 0x50e190:goto L50e190;
case 0x50e194:c.instructions+=2;goto B50e194;
case 0x50e197:c.instructions+=1;goto B50e197;
case 0x50e19d:goto L50e19d;
case 0x50e1a4:goto L50e1a4;
case 0x50e1a9:c.instructions+=1;goto B50e1a9;
case 0x50e1aa:goto L50e1aa;
case 0x50e1af:c.instructions+=1;goto B50e1af;
case 0x50e1b0:goto L50e1b0;
case 0x50e1b5:c.instructions+=1;goto B50e1b5;
case 0x50e1b6:goto L50e1b6;
case 0x50e1bb:c.instructions+=1;goto B50e1bb;
case 0x50e1bc:goto L50e1bc;
case 0x50e1c1:c.instructions+=1;goto B50e1c1;
case 0x50e1c2:goto L50e1c2;
case 0x50e1c7:c.instructions+=1;goto B50e1c7;
case 0x50e1c8:goto L50e1c8;
case 0x50e1cd:c.instructions+=1;goto B50e1cd;
case 0x50e1ce:goto L50e1ce;
case 0x50e1d3:c.instructions+=1;goto B50e1d3;
case 0x50e1d4:goto L50e1d4;
case 0x50e1d9:c.instructions+=1;goto B50e1d9;
case 0x50e1da:goto L50e1da;
case 0x50e1df:c.instructions+=1;goto B50e1df;
case 0x50e1e0:goto L50e1e0;
case 0x50e1e5:c.instructions+=1;goto B50e1e5;
case 0x50e1e6:goto L50e1e6;
case 0x50e1eb:c.instructions+=1;goto B50e1eb;
case 0x50e1ec:goto L50e1ec;
case 0x50e1f1:c.instructions+=1;goto B50e1f1;
case 0x50e1f2:goto L50e1f2;
case 0x50e1f7:c.instructions+=1;goto B50e1f7;
case 0x50e1f8:goto L50e1f8;
case 0x50e1fd:c.instructions+=1;goto B50e1fd;
case 0x50e1fe:goto L50e1fe;
case 0x50e203:c.instructions+=1;goto B50e203;
case 0x50e204:goto L50e204;
case 0x50e209:c.instructions+=1;goto B50e209;
case 0x50e20a:goto L50e20a;
case 0x50e20f:c.instructions+=1;goto B50e20f;
case 0x50e210:goto L50e210;
case 0x50e215:c.instructions+=1;goto B50e215;
case 0x50e216:goto L50e216;
case 0x50e21b:c.instructions+=1;goto B50e21b;
case 0x50e21c:goto L50e21c;
case 0x50e221:c.instructions+=1;goto B50e221;
case 0x50e222:goto L50e222;
case 0x50e227:c.instructions+=1;goto B50e227;
case 0x50e228:goto L50e228;
case 0x50e22d:c.instructions+=1;goto B50e22d;
case 0x50e22e:goto L50e22e;
case 0x50e233:c.instructions+=1;goto B50e233;
case 0x50e234:goto L50e234;
case 0x50e239:c.instructions+=1;goto B50e239;
case 0x50e23a:goto L50e23a;
case 0x50e23f:c.instructions+=1;goto B50e23f;
case 0x50e240:goto L50e240;
case 0x50e245:c.instructions+=1;goto B50e245;
case 0x50e246:goto L50e246;
case 0x50e24b:c.instructions+=1;goto B50e24b;
case 0x50e24c:goto L50e24c;
case 0x50e24e:c.instructions+=1;goto B50e24e;
case 0x50e2c0:goto L50e2c0;
case 0x50e2c5:c.instructions+=1;goto B50e2c5;
case 0x50e2d0:goto L50e2d0;
case 0x50e2d7:c.instructions+=1;goto B50e2d7;
case 0x50e2e0:goto L50e2e0;
case 0x50e2e4:c.instructions+=3;goto B50e2e4;
case 0x50e2e7:c.instructions+=2;goto B50e2e7;
case 0x50e2e9:c.instructions+=1;goto B50e2e9;
case 0x50e2eb:goto L50e2eb;
case 0x50e2f0:c.instructions+=1;goto B50e2f0;
case 0x50e2f1:goto L50e2f1;
case 0x50e2f3:c.instructions+=1;goto B50e2f3;
case 0x50e2f5:goto L50e2f5;
case 0x50e2fa:c.instructions+=1;goto B50e2fa;
case 0x50e2fb:goto L50e2fb;
case 0x50e2fd:c.instructions+=1;goto B50e2fd;
case 0x50e2ff:goto L50e2ff;
case 0x50e301:c.instructions+=1;goto B50e301;
case 0x50e303:goto L50e303;
case 0x50e308:c.instructions+=1;goto B50e308;
case 0x50e309:goto L50e309;
case 0x50e30b:c.instructions+=2;goto B50e30b;
case 0x50e310:c.instructions+=1;goto B50e310;
case 0x50e312:goto L50e312;
case 0x50e317:goto L50e317;
case 0x50e320:goto L50e320;
case 0x50e325:c.instructions+=2;goto B50e325;
case 0x50e328:c.instructions+=1;goto B50e328;
case 0x50e32a:goto L50e32a;
case 0x50e331:goto L50e331;
case 0x50e336:c.instructions+=1;goto B50e336;
case 0x50e337:goto L50e337;
case 0x50e33c:c.instructions+=1;goto B50e33c;
case 0x50e33d:goto L50e33d;
case 0x50e342:c.instructions+=1;goto B50e342;
case 0x50e343:goto L50e343;
case 0x50e348:c.instructions+=1;goto B50e348;
case 0x50e349:goto L50e349;
case 0x50e34e:c.instructions+=1;goto B50e34e;
case 0x50e34f:goto L50e34f;
case 0x50e354:c.instructions+=1;goto B50e354;
case 0x50e355:goto L50e355;
case 0x50e35a:c.instructions+=1;goto B50e35a;
case 0x50e380:goto L50e380;
case 0x50e385:c.instructions+=2;goto B50e385;
case 0x50e388:c.instructions+=1;goto B50e388;
case 0x50e38a:goto L50e38a;
case 0x50e38b:c.instructions+=1;goto B50e38b;
case 0x50e38d:goto L50e38d;
case 0x50e38e:c.instructions+=1;goto B50e38e;
case 0x50e390:goto L50e390;
case 0x50e392:c.instructions+=1;goto B50e392;
case 0x50e393:goto L50e393;
case 0x50e398:c.instructions+=1;goto B50e398;
case 0x50e399:goto L50e399;
case 0x50e39e:c.instructions+=1;goto B50e39e;
case 0x50e39f:goto L50e39f;
case 0x50e3a4:c.instructions+=1;goto B50e3a4;
case 0x50e3b0:goto L50e3b0;
case 0x50e3b5:c.instructions+=3;goto B50e3b5;
case 0x50e3b7:c.instructions+=2;goto B50e3b7;
case 0x50e3bc:c.instructions+=1;goto B50e3bc;
case 0x50e3be:goto L50e3be;
case 0x50e3c3:goto L50e3c3;
case 0x50e3d0:goto L50e3d0;
case 0x50e3d5:c.instructions+=2;goto B50e3d5;
case 0x50e3d8:c.instructions+=1;goto B50e3d8;
case 0x50e3da:goto L50e3da;
case 0x50e3df:c.instructions+=1;goto B50e3df;
case 0x50e3e0:goto L50e3e0;
case 0x50e3e3:c.instructions+=2;goto B50e3e3;
case 0x50e3e8:c.instructions+=1;goto B50e3e8;
case 0x50e3ea:goto L50e3ea;
case 0x50e3ef:goto L50e3ef;
case 0x50e3f0:goto L50e3f0;
case 0x50e3f5:c.instructions+=3;goto B50e3f5;
case 0x50e3f7:c.instructions+=2;goto B50e3f7;
case 0x50e3fc:c.instructions+=1;goto B50e3fc;
case 0x50e3fe:goto L50e3fe;
case 0x50e403:goto L50e403;
case 0x50e410:goto L50e410;
case 0x50e415:c.instructions+=2;goto B50e415;
case 0x50e416:c.instructions+=1;goto B50e416;
case 0x50e418:goto L50e418;
case 0x50e419:c.instructions+=1;goto B50e419;
case 0x50e41b:goto L50e41b;
case 0x50e41d:c.instructions+=1;goto B50e41d;
case 0x50e41e:goto L50e41e;
case 0x50e423:c.instructions+=1;goto B50e423;
case 0x50e424:goto L50e424;
case 0x50e429:c.instructions+=1;goto B50e429;
case 0x50e430:goto L50e430;
case 0x50e437:c.instructions+=1;goto B50e437;
case 0x50e439:goto L50e439;
case 0x50e440:c.instructions+=1;goto B50e440;
case 0x50e442:goto L50e442;
case 0x50e447:c.instructions+=1;goto B50e447;
case 0x50e448:goto L50e448;
case 0x50e44d:c.instructions+=1;goto B50e44d;
case 0x50e44e:goto L50e44e;
case 0x50e453:c.instructions+=5;goto B50e453;
case 0x50e459:c.instructions+=4;goto B50e459;
case 0x50e45b:c.instructions+=3;goto B50e45b;
case 0x50e45d:c.instructions+=2;goto B50e45d;
case 0x50e45f:c.instructions+=1;goto B50e45f;
case 0x50e460:goto L50e460;
case 0x50e465:c.instructions+=3;goto B50e465;
case 0x50e466:c.instructions+=2;goto B50e466;
case 0x50e469:c.instructions+=1;goto B50e469;
case 0x50e46b:goto L50e46b;
case 0x50e472:goto L50e472;
case 0x50e47c:c.instructions+=2;goto B50e47c;
case 0x50e481:c.instructions+=1;goto B50e481;
case 0x50e482:goto L50e482;
case 0x50e48c:c.instructions+=2;goto B50e48c;
case 0x50e491:c.instructions+=1;goto B50e491;
case 0x50e492:goto L50e492;
case 0x50e497:c.instructions+=1;goto B50e497;
case 0x50e4c0:goto L50e4c0;
case 0x50e4c5:c.instructions+=3;goto B50e4c5;
case 0x50e4c7:c.instructions+=2;goto B50e4c7;
case 0x50e4cc:c.instructions+=1;goto B50e4cc;
case 0x50e4ce:goto L50e4ce;
case 0x50e4d3:goto L50e4d3;
case 0x50e4e0:goto L50e4e0;
case 0x50e4e5:c.instructions+=2;goto B50e4e5;
case 0x50e4e8:c.instructions+=1;goto B50e4e8;
case 0x50e4ea:goto L50e4ea;
case 0x50e4eb:c.instructions+=1;goto B50e4eb;
case 0x50e4ed:goto L50e4ed;
case 0x50e4ee:c.instructions+=1;goto B50e4ee;
case 0x50e4f0:goto L50e4f0;
case 0x50e4f5:c.instructions+=1;goto B50e4f5;
case 0x50e4f6:goto L50e4f6;
case 0x50e4fb:c.instructions+=1;goto B50e4fb;
case 0x50e4fc:goto L50e4fc;
case 0x50e501:c.instructions+=1;goto B50e501;
case 0x50e510:goto L50e510;
case 0x50e516:c.instructions+=3;goto B50e516;
case 0x50e51c:c.instructions+=2;goto B50e51c;
case 0x50e51e:c.instructions+=1;goto B50e51e;
case 0x50e520:goto L50e520;
case 0x50e522:c.instructions+=1;goto B50e522;
case 0x50e523:goto L50e523;
case 0x50e529:c.instructions+=1;goto B50e529;
case 0x50e530:goto L50e530;
case 0x50e531:c.instructions+=3;goto B50e531;
case 0x50e535:c.instructions+=2;goto B50e535;
case 0x50e537:c.instructions+=1;goto B50e537;
case 0x50e539:goto L50e539;
case 0x50e53e:c.instructions+=2;goto B50e53e;
case 0x50e540:c.instructions+=1;goto B50e540;
case 0x50e545:goto L50e545;
case 0x50e547:c.instructions+=2;goto B50e547;
case 0x50e549:c.instructions+=1;goto B50e549;
case 0x50e54b:goto L50e54b;
case 0x50e54d:c.instructions+=2;goto B50e54d;
case 0x50e552:c.instructions+=1;goto B50e552;
case 0x50e557:goto L50e557;
case 0x50e559:c.instructions+=1;goto B50e559;
case 0x50e55e:goto L50e55e;
case 0x50e560:c.instructions+=1;goto B50e560;
case 0x50e562:goto L50e562;
case 0x50e567:c.instructions+=1;goto B50e567;
case 0x50e56c:goto L50e56c;
case 0x50e56d:c.instructions+=1;goto B50e56d;
case 0x50e570:goto L50e570;
case 0x50e575:goto L50e575;
case 0x50e576:c.instructions+=1;goto B50e576;
case 0x50e579:goto L50e579;
case 0x50e57b:goto L50e57b;
case 0x50e57c:c.instructions+=1;goto B50e57c;
case 0x50e580:goto L50e580;
case 0x50e584:c.instructions+=6;goto B50e584;
case 0x50e588:c.instructions+=5;goto B50e588;
case 0x50e58a:c.instructions+=4;goto B50e58a;
case 0x50e58c:c.instructions+=3;goto B50e58c;
case 0x50e58d:c.instructions+=2;goto B50e58d;
case 0x50e58e:c.instructions+=1;goto B50e58e;
case 0x50e593:goto L50e593;
case 0x50e596:c.instructions+=1;goto B50e596;
case 0x50e5a0:goto L50e5a0;
case 0x50e5a4:c.instructions+=2;goto B50e5a4;
case 0x50e5a7:c.instructions+=1;goto B50e5a7;
case 0x50e5a9:goto L50e5a9;
case 0x50e5ac:c.instructions+=1;goto B50e5ac;
case 0x50e5ae:goto L50e5ae;
case 0x50e5b3:c.instructions+=1;goto B50e5b3;
case 0x50e5b6:goto L50e5b6;
case 0x50e5b9:c.instructions+=1;goto B50e5b9;
case 0x50e5bb:goto L50e5bb;
case 0x50e5be:c.instructions+=1;goto B50e5be;
case 0x50e5c0:goto L50e5c0;
case 0x50e5c5:c.instructions+=1;goto B50e5c5;
case 0x50e5c8:goto L50e5c8;
case 0x50e5cb:c.instructions+=1;goto B50e5cb;
case 0x50e5cd:goto L50e5cd;
case 0x50e5d0:c.instructions+=1;goto B50e5d0;
case 0x50e5d2:goto L50e5d2;
case 0x50e5d7:c.instructions+=1;goto B50e5d7;
case 0x50e5da:goto L50e5da;
case 0x50e5dd:c.instructions+=1;goto B50e5dd;
case 0x50e5df:goto L50e5df;
case 0x50e5e4:c.instructions+=1;goto B50e5e4;
case 0x50e5e6:goto L50e5e6;
case 0x50e5eb:c.instructions+=1;goto B50e5eb;
case 0x50e5ee:goto L50e5ee;
case 0x50e5f3:c.instructions+=1;goto B50e5f3;
case 0x50e5f5:goto L50e5f5;
case 0x50e5fa:c.instructions+=1;goto B50e5fa;
case 0x50e5fc:goto L50e5fc;
case 0x50e601:c.instructions+=1;goto B50e601;
case 0x50e604:goto L50e604;
case 0x50e609:c.instructions+=1;goto B50e609;
case 0x50e60b:goto L50e60b;
case 0x50e610:c.instructions+=1;goto B50e610;
case 0x50e612:goto L50e612;
case 0x50e617:c.instructions+=1;goto B50e617;
case 0x50e61a:goto L50e61a;
case 0x50e61f:c.instructions+=1;goto B50e61f;
case 0x50e621:goto L50e621;
case 0x50e626:c.instructions+=2;goto B50e626;
case 0x50e62b:c.instructions+=1;goto B50e62b;
case 0x50e62d:goto L50e62d;
case 0x50e632:goto L50e632;
case 0x50e640:goto L50e640;
case 0x50e644:c.instructions+=3;goto B50e644;
case 0x50e647:c.instructions+=2;goto B50e647;
case 0x50e64a:c.instructions+=1;goto B50e64a;
case 0x50e64c:goto L50e64c;
case 0x50e653:c.instructions+=1;goto B50e653;
case 0x50e65a:goto L50e65a;
case 0x50e65f:c.instructions+=1;goto B50e65f;
case 0x50e662:goto L50e662;
case 0x50e667:c.instructions+=1;goto B50e667;
case 0x50e66a:goto L50e66a;
case 0x50e66f:c.instructions+=1;goto B50e66f;
case 0x50e672:goto L50e672;
case 0x50e677:c.instructions+=1;goto B50e677;
case 0x50e67a:goto L50e67a;
case 0x50e67f:c.instructions+=1;goto B50e67f;
case 0x50e682:goto L50e682;
case 0x50e687:c.instructions+=1;goto B50e687;
case 0x50e6f0:goto L50e6f0;
case 0x50e6f4:c.instructions+=3;goto B50e6f4;
case 0x50e6f7:c.instructions+=2;goto B50e6f7;
case 0x50e6fa:c.instructions+=1;goto B50e6fa;
case 0x50e6fc:goto L50e6fc;
case 0x50e703:c.instructions+=1;goto B50e703;
case 0x50e70a:goto L50e70a;
case 0x50e70f:c.instructions+=1;goto B50e70f;
case 0x50e712:goto L50e712;
case 0x50e717:c.instructions+=1;goto B50e717;
case 0x50e71a:goto L50e71a;
case 0x50e71f:c.instructions+=1;goto B50e71f;
case 0x50e722:goto L50e722;
case 0x50e727:c.instructions+=1;goto B50e727;
case 0x50e72a:goto L50e72a;
case 0x50e72f:c.instructions+=1;goto B50e72f;
case 0x50e732:goto L50e732;
case 0x50e734:c.instructions+=1;goto B50e734;
case 0x50e790:goto L50e790;
case 0x50e794:c.instructions+=2;goto B50e794;
case 0x50e797:c.instructions+=1;goto B50e797;
case 0x50e799:goto L50e799;
case 0x50e7a0:goto L50e7a0;
case 0x50e7a5:c.instructions+=1;goto B50e7a5;
case 0x50e7a8:goto L50e7a8;
case 0x50e7ad:c.instructions+=1;goto B50e7ad;
case 0x50e7b0:goto L50e7b0;
case 0x50e7b5:c.instructions+=1;goto B50e7b5;
case 0x50e7b8:goto L50e7b8;
case 0x50e7bd:c.instructions+=1;goto B50e7bd;
case 0x50e7c0:goto L50e7c0;
case 0x50e7c5:c.instructions+=1;goto B50e7c5;
case 0x50e7c8:goto L50e7c8;
case 0x50e7cd:c.instructions+=1;goto B50e7cd;
case 0x50e7d0:goto L50e7d0;
case 0x50e7d5:c.instructions+=1;goto B50e7d5;
case 0x50e7d8:goto L50e7d8;
case 0x50e7dd:c.instructions+=1;goto B50e7dd;
case 0x50e7e0:goto L50e7e0;
case 0x50e7e5:c.instructions+=1;goto B50e7e5;
case 0x50e7e8:goto L50e7e8;
case 0x50e7ea:c.instructions+=1;goto B50e7ea;
case 0x50e820:goto L50e820;
case 0x50e824:c.instructions+=2;goto B50e824;
case 0x50e827:c.instructions+=1;goto B50e827;
case 0x50e829:goto L50e829;
case 0x50e830:goto L50e830;
case 0x50e835:c.instructions+=1;goto B50e835;
case 0x50e838:goto L50e838;
case 0x50e83d:c.instructions+=1;goto B50e83d;
case 0x50e840:goto L50e840;
case 0x50e845:c.instructions+=1;goto B50e845;
case 0x50e848:goto L50e848;
case 0x50e84d:c.instructions+=1;goto B50e84d;
case 0x50e850:goto L50e850;
case 0x50e855:c.instructions+=1;goto B50e855;
case 0x50e858:goto L50e858;
case 0x50e85d:c.instructions+=1;goto B50e85d;
case 0x50e860:goto L50e860;
case 0x50e865:c.instructions+=1;goto B50e865;
case 0x50e868:goto L50e868;
case 0x50e86d:c.instructions+=1;goto B50e86d;
case 0x50e870:goto L50e870;
case 0x50e875:c.instructions+=1;goto B50e875;
case 0x50e878:goto L50e878;
case 0x50e87a:c.instructions+=1;goto B50e87a;
case 0x50e8b0:goto L50e8b0;
case 0x50e8b4:c.instructions+=14;goto B50e8b4;
case 0x50e8b5:c.instructions+=13;goto B50e8b5;
case 0x50e8b7:c.instructions+=12;goto B50e8b7;
case 0x50e8bb:c.instructions+=11;goto B50e8bb;
case 0x50e8bc:c.instructions+=10;goto B50e8bc;
case 0x50e8c0:c.instructions+=9;goto B50e8c0;
case 0x50e8c6:c.instructions+=8;goto B50e8c6;
case 0x50e8c8:c.instructions+=7;goto B50e8c8;
case 0x50e8ce:c.instructions+=6;goto B50e8ce;
case 0x50e8cf:c.instructions+=5;goto B50e8cf;
case 0x50e8d2:c.instructions+=4;goto B50e8d2;
case 0x50e8d5:c.instructions+=3;goto B50e8d5;
case 0x50e8d7:c.instructions+=2;goto B50e8d7;
case 0x50e8d8:c.instructions+=1;goto B50e8d8;
case 0x50e8db:goto L50e8db;
case 0x50e8de:c.instructions+=6;goto B50e8de;
case 0x50e8e0:c.instructions+=5;goto B50e8e0;
case 0x50e8e2:c.instructions+=4;goto B50e8e2;
case 0x50e8e5:c.instructions+=3;goto B50e8e5;
case 0x50e8e6:c.instructions+=2;goto B50e8e6;
case 0x50e8e7:c.instructions+=1;goto B50e8e7;
case 0x50e8ea:goto L50e8ea;
case 0x50e8eb:c.instructions+=3;goto B50e8eb;
case 0x50e8ee:c.instructions+=2;goto B50e8ee;
case 0x50e8ef:c.instructions+=1;goto B50e8ef;
case 0x50e900:goto L50e900;
case 0x50e901:c.instructions+=3;goto B50e901;
case 0x50e903:c.instructions+=2;goto B50e903;
case 0x50e906:c.instructions+=1;goto B50e906;
case 0x50e90b:goto L50e90b;
case 0x50e90d:c.instructions+=3;goto B50e90d;
case 0x50e910:c.instructions+=2;goto B50e910;
case 0x50e912:c.instructions+=1;goto B50e912;
case 0x50e917:goto L50e917;
case 0x50e918:c.instructions+=2;goto B50e918;
case 0x50e91a:c.instructions+=1;goto B50e91a;
case 0x50e91f:goto L50e91f;
case 0x50e921:c.instructions+=1;goto B50e921;
case 0x50e923:goto L50e923;
case 0x50e925:c.instructions+=2;goto B50e925;
case 0x50e926:c.instructions+=1;goto B50e926;
case 0x50e927:goto L50e927;
case 0x50e929:c.instructions+=2;goto B50e929;
case 0x50e92a:c.instructions+=1;goto B50e92a;
case 0x50e930:goto L50e930;
case 0x50e931:c.instructions+=2;goto B50e931;
case 0x50e933:c.instructions+=1;goto B50e933;
case 0x50e938:goto L50e938;
case 0x50e939:c.instructions+=3;goto B50e939;
case 0x50e93b:c.instructions+=2;goto B50e93b;
case 0x50e93d:c.instructions+=1;goto B50e93d;
case 0x50e942:goto L50e942;
case 0x50e944:c.instructions+=1;goto B50e944;
case 0x50e946:goto L50e946;
case 0x50e947:c.instructions+=2;goto B50e947;
case 0x50e94d:c.instructions+=1;goto B50e94d;
case 0x50e94f:goto L50e94f;
case 0x50e950:c.instructions+=3;goto B50e950;
case 0x50e952:c.instructions+=2;goto B50e952;
case 0x50e953:c.instructions+=1;goto B50e953;
case 0x50e954:goto L50e954;
case 0x50e955:c.instructions+=3;goto B50e955;
case 0x50e957:c.instructions+=2;goto B50e957;
case 0x50e958:c.instructions+=1;goto B50e958;
case 0x50e960:goto L50e960;
case 0x50e961:c.instructions+=3;goto B50e961;
case 0x50e965:c.instructions+=2;goto B50e965;
case 0x50e966:c.instructions+=1;goto B50e966;
case 0x50e96b:goto L50e96b;
case 0x50e96e:c.instructions+=2;goto B50e96e;
case 0x50e970:c.instructions+=1;goto B50e970;
case 0x50e972:goto L50e972;
case 0x50e973:c.instructions+=1;goto B50e973;
case 0x50e978:goto L50e978;
case 0x50e97b:c.instructions+=2;goto B50e97b;
case 0x50e97c:c.instructions+=1;goto B50e97c;
case 0x50e97f:goto L50e97f;
case 0x50e985:c.instructions+=1;goto B50e985;
case 0x50e98b:goto L50e98b;
case 0x50e991:goto L50e991;
case 0x50e997:c.instructions+=1;goto B50e997;
case 0x50e99d:goto L50e99d;
case 0x50e9a3:goto L50e9a3;
case 0x50e9a9:c.instructions+=1;goto B50e9a9;
case 0x50e9ab:goto L50e9ab;
case 0x50e9ad:goto L50e9ad;
case 0x50e9b3:c.instructions+=1;goto B50e9b3;
case 0x50e9b5:goto L50e9b5;
case 0x50e9bb:c.instructions+=1;goto B50e9bb;
case 0x50e9c1:goto L50e9c1;
case 0x50e9c6:c.instructions+=1;goto B50e9c6;
case 0x50e9cb:goto L50e9cb;
case 0x50e9ce:c.instructions+=2;goto B50e9ce;
case 0x50e9cf:c.instructions+=1;goto B50e9cf;
case 0x50e9d2:goto L50e9d2;
case 0x50e9d7:c.instructions+=1;goto B50e9d7;
case 0x50e9dc:goto L50e9dc;
case 0x50e9df:c.instructions+=2;goto B50e9df;
case 0x50e9e0:c.instructions+=1;goto B50e9e0;
case 0x50e9e3:goto L50e9e3;
case 0x50e9e8:c.instructions+=1;goto B50e9e8;
case 0x50e9ed:goto L50e9ed;
case 0x50e9f0:c.instructions+=2;goto B50e9f0;
case 0x50e9f1:c.instructions+=1;goto B50e9f1;
case 0x50e9f4:goto L50e9f4;
case 0x50e9fa:c.instructions+=1;goto B50e9fa;
case 0x50e9fc:goto L50e9fc;
case 0x50ea02:c.instructions+=1;goto B50ea02;
case 0x50ea08:goto L50ea08;
case 0x50ea0d:c.instructions+=1;goto B50ea0d;
case 0x50ea12:goto L50ea12;
case 0x50ea15:c.instructions+=2;goto B50ea15;
case 0x50ea16:c.instructions+=1;goto B50ea16;
case 0x50ea19:goto L50ea19;
case 0x50ea1e:c.instructions+=1;goto B50ea1e;
case 0x50ea23:goto L50ea23;
case 0x50ea26:c.instructions+=2;goto B50ea26;
case 0x50ea27:c.instructions+=1;goto B50ea27;
case 0x50ea2a:goto L50ea2a;
case 0x50ea2f:c.instructions+=1;goto B50ea2f;
case 0x50ea34:goto L50ea34;
case 0x50ea37:c.instructions+=2;goto B50ea37;
case 0x50ea38:c.instructions+=1;goto B50ea38;
case 0x50ea3b:goto L50ea3b;
case 0x50ea41:c.instructions+=1;goto B50ea41;
case 0x50ea43:goto L50ea43;
case 0x50ea45:goto L50ea45;
case 0x50ea4b:c.instructions+=1;goto B50ea4b;
case 0x50ea4d:goto L50ea4d;
case 0x50ea53:c.instructions+=1;goto B50ea53;
case 0x50ea59:goto L50ea59;
case 0x50ea5e:c.instructions+=1;goto B50ea5e;
case 0x50ea63:goto L50ea63;
case 0x50ea66:c.instructions+=2;goto B50ea66;
case 0x50ea67:c.instructions+=1;goto B50ea67;
case 0x50ea6a:goto L50ea6a;
case 0x50ea6f:c.instructions+=1;goto B50ea6f;
case 0x50ea74:goto L50ea74;
case 0x50ea77:c.instructions+=2;goto B50ea77;
case 0x50ea78:c.instructions+=1;goto B50ea78;
case 0x50ea7b:goto L50ea7b;
case 0x50ea80:c.instructions+=1;goto B50ea80;
case 0x50ea85:goto L50ea85;
case 0x50ea88:c.instructions+=2;goto B50ea88;
case 0x50ea89:c.instructions+=1;goto B50ea89;
case 0x50ea8c:goto L50ea8c;
case 0x50ea92:c.instructions+=1;goto B50ea92;
case 0x50ea94:goto L50ea94;
case 0x50ea9a:c.instructions+=1;goto B50ea9a;
case 0x50eaa0:goto L50eaa0;
case 0x50eaa5:c.instructions+=1;goto B50eaa5;
case 0x50eaaa:goto L50eaaa;
case 0x50eaad:c.instructions+=2;goto B50eaad;
case 0x50eaae:c.instructions+=1;goto B50eaae;
case 0x50eab1:goto L50eab1;
case 0x50eab6:c.instructions+=1;goto B50eab6;
case 0x50eabb:goto L50eabb;
case 0x50eabe:c.instructions+=2;goto B50eabe;
case 0x50eabf:c.instructions+=1;goto B50eabf;
case 0x50eac2:goto L50eac2;
case 0x50eac7:goto L50eac7;
case 0x50eacc:goto L50eacc;
case 0x50eace:c.instructions+=1;goto B50eace;
case 0x50ead4:goto L50ead4;
case 0x50ead9:c.instructions+=1;goto B50ead9;
case 0x50eade:goto L50eade;
case 0x50eadf:c.instructions+=1;goto B50eadf;
case 0x50eae2:goto L50eae2;
case 0x50eae8:c.instructions+=1;goto B50eae8;
case 0x50eaee:goto L50eaee;
case 0x50eaf4:goto L50eaf4;
case 0x50eafa:c.instructions+=1;goto B50eafa;
case 0x50eafc:goto L50eafc;
case 0x50eafe:goto L50eafe;
case 0x50eb04:c.instructions+=1;goto B50eb04;
case 0x50eb06:goto L50eb06;
case 0x50eb0c:c.instructions+=1;goto B50eb0c;
case 0x50eb12:goto L50eb12;
case 0x50eb17:c.instructions+=1;goto B50eb17;
case 0x50eb1c:goto L50eb1c;
case 0x50eb1f:c.instructions+=2;goto B50eb1f;
case 0x50eb20:c.instructions+=1;goto B50eb20;
case 0x50eb23:goto L50eb23;
case 0x50eb28:c.instructions+=1;goto B50eb28;
case 0x50eb2d:goto L50eb2d;
case 0x50eb30:c.instructions+=2;goto B50eb30;
case 0x50eb31:c.instructions+=1;goto B50eb31;
case 0x50eb34:goto L50eb34;
case 0x50eb39:c.instructions+=1;goto B50eb39;
case 0x50eb3e:goto L50eb3e;
case 0x50eb41:c.instructions+=2;goto B50eb41;
case 0x50eb42:c.instructions+=1;goto B50eb42;
case 0x50eb45:goto L50eb45;
case 0x50eb4b:c.instructions+=1;goto B50eb4b;
case 0x50eb4d:goto L50eb4d;
case 0x50eb53:c.instructions+=1;goto B50eb53;
case 0x50eb59:goto L50eb59;
case 0x50eb5e:c.instructions+=1;goto B50eb5e;
case 0x50eb63:goto L50eb63;
case 0x50eb66:c.instructions+=2;goto B50eb66;
case 0x50eb67:c.instructions+=1;goto B50eb67;
case 0x50eb6a:goto L50eb6a;
case 0x50eb6f:c.instructions+=1;goto B50eb6f;
case 0x50eb74:goto L50eb74;
case 0x50eb77:c.instructions+=2;goto B50eb77;
case 0x50eb78:c.instructions+=1;goto B50eb78;
case 0x50eb7b:goto L50eb7b;
case 0x50eb80:c.instructions+=1;goto B50eb80;
case 0x50eb85:goto L50eb85;
case 0x50eb8b:c.instructions+=1;goto B50eb8b;
case 0x50eb8d:goto L50eb8d;
case 0x50eb8f:goto L50eb8f;
case 0x50eb95:c.instructions+=1;goto B50eb95;
case 0x50eb97:goto L50eb97;
case 0x50eb9d:c.instructions+=1;goto B50eb9d;
case 0x50eb9f:goto L50eb9f;
case 0x50eba4:c.instructions+=1;goto B50eba4;
case 0x50eba9:goto L50eba9;
case 0x50ebac:c.instructions+=2;goto B50ebac;
case 0x50ebad:c.instructions+=1;goto B50ebad;
case 0x50ebb0:goto L50ebb0;
case 0x50ebb5:c.instructions+=1;goto B50ebb5;
case 0x50ebba:goto L50ebba;
case 0x50ebbd:c.instructions+=2;goto B50ebbd;
case 0x50ebbe:c.instructions+=1;goto B50ebbe;
case 0x50ebc1:goto L50ebc1;
case 0x50ebc6:c.instructions+=1;goto B50ebc6;
case 0x50ebcb:goto L50ebcb;
case 0x50ebce:c.instructions+=2;goto B50ebce;
case 0x50ebcf:c.instructions+=1;goto B50ebcf;
case 0x50ebd2:goto L50ebd2;
case 0x50ebd8:c.instructions+=1;goto B50ebd8;
case 0x50ebda:goto L50ebda;
case 0x50ebe0:c.instructions+=1;goto B50ebe0;
case 0x50ebe2:goto L50ebe2;
case 0x50ebe4:c.instructions+=2;goto B50ebe4;
case 0x50ebe5:c.instructions+=1;goto B50ebe5;
case 0x50ebe8:goto L50ebe8;
case 0x50ebed:c.instructions+=1;goto B50ebed;
case 0x50ebf2:goto L50ebf2;
case 0x50ebf5:c.instructions+=2;goto B50ebf5;
case 0x50ebf6:c.instructions+=1;goto B50ebf6;
case 0x50ebf9:goto L50ebf9;
case 0x50ebfe:c.instructions+=1;goto B50ebfe;
case 0x50ec03:goto L50ec03;
case 0x50ec06:goto L50ec06;
case 0x50ec07:c.instructions+=1;goto B50ec07;
case 0x50ec10:goto L50ec10;
case 0x50ec11:c.instructions+=5;goto B50ec11;
case 0x50ec12:c.instructions+=4;goto B50ec12;
case 0x50ec13:c.instructions+=3;goto B50ec13;
case 0x50ec19:c.instructions+=2;goto B50ec19;
case 0x50ec1e:c.instructions+=1;goto B50ec1e;
case 0x50ec23:goto L50ec23;
case 0x50ec24:c.instructions+=2;goto B50ec24;
case 0x50ec26:c.instructions+=1;goto B50ec26;
case 0x50ec2b:goto L50ec2b;
case 0x50ec2d:c.instructions+=1;goto B50ec2d;
case 0x50ec2f:goto L50ec2f;
case 0x50ec32:c.instructions+=3;goto B50ec32;
case 0x50ec34:c.instructions+=2;goto B50ec34;
case 0x50ec36:c.instructions+=1;goto B50ec36;
case 0x50ec38:goto L50ec38;
case 0x50ec3a:c.instructions+=3;goto B50ec3a;
case 0x50ec3b:c.instructions+=2;goto B50ec3b;
case 0x50ec3d:c.instructions+=1;goto B50ec3d;
case 0x50ec42:goto L50ec42;
case 0x50ec43:c.instructions+=2;goto B50ec43;
case 0x50ec44:c.instructions+=1;goto B50ec44;
case 0x50ec46:goto L50ec46;
case 0x50ec47:c.instructions+=3;goto B50ec47;
case 0x50ec48:c.instructions+=2;goto B50ec48;
case 0x50ec49:c.instructions+=1;goto B50ec49;
case 0x50ec50:goto L50ec50;
case 0x50ec51:c.instructions+=4;goto B50ec51;
case 0x50ec52:c.instructions+=3;goto B50ec52;
case 0x50ec54:c.instructions+=2;goto B50ec54;
case 0x50ec5a:c.instructions+=1;goto B50ec5a;
case 0x50ec60:goto L50ec60;
case 0x50ec62:c.instructions+=4;goto B50ec62;
case 0x50ec65:c.instructions+=3;goto B50ec65;
case 0x50ec66:c.instructions+=2;goto B50ec66;
case 0x50ec68:c.instructions+=1;goto B50ec68;
case 0x50ec6d:goto L50ec6d;
case 0x50ec6e:c.instructions+=2;goto B50ec6e;
case 0x50ec71:c.instructions+=1;goto B50ec71;
case 0x50ec73:goto L50ec73;
case 0x50ec74:c.instructions+=2;goto B50ec74;
case 0x50ec75:c.instructions+=1;goto B50ec75;
case 0x50ec80:goto L50ec80;
case 0x50ec81:c.instructions+=5;goto B50ec81;
case 0x50ec82:c.instructions+=4;goto B50ec82;
case 0x50ec83:c.instructions+=3;goto B50ec83;
case 0x50ec89:c.instructions+=2;goto B50ec89;
case 0x50ec8e:c.instructions+=1;goto B50ec8e;
case 0x50ec93:goto L50ec93;
case 0x50ec94:c.instructions+=2;goto B50ec94;
case 0x50ec96:c.instructions+=1;goto B50ec96;
case 0x50ec9b:goto L50ec9b;
case 0x50ec9d:c.instructions+=1;goto B50ec9d;
case 0x50ec9f:goto L50ec9f;
case 0x50eca3:c.instructions+=3;goto B50eca3;
case 0x50eca6:c.instructions+=2;goto B50eca6;
case 0x50eca9:c.instructions+=1;goto B50eca9;
case 0x50ecab:goto L50ecab;
case 0x50ecae:c.instructions+=1;goto B50ecae;
case 0x50ecb0:goto L50ecb0;
case 0x50ecb3:c.instructions+=1;goto B50ecb3;
case 0x50ecb5:goto L50ecb5;
case 0x50ecb8:c.instructions+=1;goto B50ecb8;
case 0x50ecba:goto L50ecba;
case 0x50ecbd:c.instructions+=1;goto B50ecbd;
case 0x50ecbf:goto L50ecbf;
case 0x50ecc2:c.instructions+=1;goto B50ecc2;
case 0x50ecc4:goto L50ecc4;
case 0x50ecc7:c.instructions+=1;goto B50ecc7;
case 0x50ecc9:goto L50ecc9;
case 0x50eccc:c.instructions+=1;goto B50eccc;
case 0x50ecce:goto L50ecce;
case 0x50ecd0:c.instructions+=3;goto B50ecd0;
case 0x50ecd1:c.instructions+=2;goto B50ecd1;
case 0x50ecd3:c.instructions+=1;goto B50ecd3;
case 0x50ecd8:goto L50ecd8;
case 0x50ecd9:c.instructions+=2;goto B50ecd9;
case 0x50ecda:c.instructions+=1;goto B50ecda;
case 0x50ecdc:goto L50ecdc;
case 0x50ecdd:c.instructions+=3;goto B50ecdd;
case 0x50ecde:c.instructions+=2;goto B50ecde;
case 0x50ecdf:c.instructions+=1;goto B50ecdf;
case 0x50ece0:goto L50ece0;
case 0x50ece1:c.instructions+=5;goto B50ece1;
case 0x50ece2:c.instructions+=4;goto B50ece2;
case 0x50ece3:c.instructions+=3;goto B50ece3;
case 0x50ece9:c.instructions+=2;goto B50ece9;
case 0x50ecee:c.instructions+=1;goto B50ecee;
case 0x50ecf3:goto L50ecf3;
case 0x50ecf4:c.instructions+=2;goto B50ecf4;
case 0x50ecf6:c.instructions+=1;goto B50ecf6;
case 0x50ecfb:goto L50ecfb;
case 0x50ecfd:c.instructions+=1;goto B50ecfd;
case 0x50ecff:goto L50ecff;
case 0x50ed02:c.instructions+=3;goto B50ed02;
case 0x50ed04:c.instructions+=2;goto B50ed04;
case 0x50ed06:c.instructions+=1;goto B50ed06;
case 0x50ed08:goto L50ed08;
case 0x50ed0a:c.instructions+=3;goto B50ed0a;
case 0x50ed0b:c.instructions+=2;goto B50ed0b;
case 0x50ed0d:c.instructions+=1;goto B50ed0d;
case 0x50ed12:goto L50ed12;
case 0x50ed13:c.instructions+=2;goto B50ed13;
case 0x50ed14:c.instructions+=1;goto B50ed14;
case 0x50ed16:goto L50ed16;
case 0x50ed17:c.instructions+=3;goto B50ed17;
case 0x50ed18:c.instructions+=2;goto B50ed18;
case 0x50ed19:c.instructions+=1;goto B50ed19;
case 0x50ed20:goto L50ed20;
case 0x50ed21:c.instructions+=11;goto B50ed21;
case 0x50ed25:c.instructions+=10;goto B50ed25;
case 0x50ed26:c.instructions+=9;goto B50ed26;
case 0x50ed27:c.instructions+=8;goto B50ed27;
case 0x50ed28:c.instructions+=7;goto B50ed28;
case 0x50ed2a:c.instructions+=6;goto B50ed2a;
case 0x50ed2c:c.instructions+=5;goto B50ed2c;
case 0x50ed2f:c.instructions+=4;goto B50ed2f;
case 0x50ed31:c.instructions+=3;goto B50ed31;
case 0x50ed33:c.instructions+=2;goto B50ed33;
case 0x50ed34:c.instructions+=1;goto B50ed34;
case 0x50ed37:goto L50ed37;
case 0x50ed38:c.instructions+=2;goto B50ed38;
case 0x50ed3d:c.instructions+=1;goto B50ed3d;
case 0x50ed42:goto L50ed42;
case 0x50ed46:c.instructions+=3;goto B50ed46;
case 0x50ed48:c.instructions+=2;goto B50ed48;
case 0x50ed4a:c.instructions+=1;goto B50ed4a;
case 0x50ed4c:goto L50ed4c;
case 0x50ed4e:c.instructions+=1;goto B50ed4e;
case 0x50ed50:goto L50ed50;
case 0x50ed53:c.instructions+=4;goto B50ed53;
case 0x50ed56:c.instructions+=3;goto B50ed56;
case 0x50ed59:c.instructions+=2;goto B50ed59;
case 0x50ed5b:c.instructions+=1;goto B50ed5b;
case 0x50ed5d:goto L50ed5d;
case 0x50ed60:c.instructions+=5;goto B50ed60;
case 0x50ed62:c.instructions+=4;goto B50ed62;
case 0x50ed64:c.instructions+=3;goto B50ed64;
case 0x50ed66:c.instructions+=2;goto B50ed66;
case 0x50ed67:c.instructions+=1;goto B50ed67;
case 0x50ed6a:goto L50ed6a;
case 0x50ed6b:c.instructions+=3;goto B50ed6b;
case 0x50ed6c:c.instructions+=2;goto B50ed6c;
case 0x50ed71:c.instructions+=1;goto B50ed71;
case 0x50ed76:goto L50ed76;
case 0x50ed78:c.instructions+=2;goto B50ed78;
case 0x50ed7a:c.instructions+=1;goto B50ed7a;
case 0x50ed7c:goto L50ed7c;
case 0x50ed7d:c.instructions+=5;goto B50ed7d;
case 0x50ed7f:c.instructions+=4;goto B50ed7f;
case 0x50ed80:c.instructions+=3;goto B50ed80;
case 0x50ed81:c.instructions+=2;goto B50ed81;
case 0x50ed82:c.instructions+=1;goto B50ed82;
case 0x50ed90:goto L50ed90;
case 0x50ed91:c.instructions+=5;goto B50ed91;
case 0x50ed92:c.instructions+=4;goto B50ed92;
case 0x50ed98:c.instructions+=3;goto B50ed98;
case 0x50ed9a:c.instructions+=2;goto B50ed9a;
case 0x50ed9c:c.instructions+=1;goto B50ed9c;
case 0x50eda1:goto L50eda1;
case 0x50eda3:c.instructions+=3;goto B50eda3;
case 0x50eda5:c.instructions+=2;goto B50eda5;
case 0x50eda7:c.instructions+=1;goto B50eda7;
case 0x50edac:goto L50edac;
case 0x50edae:c.instructions+=3;goto B50edae;
case 0x50edb0:c.instructions+=2;goto B50edb0;
case 0x50edb2:c.instructions+=1;goto B50edb2;
case 0x50edb7:goto L50edb7;
case 0x50edb8:c.instructions+=3;goto B50edb8;
case 0x50edba:c.instructions+=2;goto B50edba;
case 0x50edbb:c.instructions+=1;goto B50edbb;
case 0x50edc0:goto L50edc0;
case 0x50edc2:c.instructions+=2;goto B50edc2;
case 0x50edc8:c.instructions+=1;goto B50edc8;
case 0x50edcd:goto L50edcd;
case 0x50edd0:c.instructions+=4;goto B50edd0;
case 0x50edd3:c.instructions+=3;goto B50edd3;
case 0x50edd5:c.instructions+=2;goto B50edd5;
case 0x50edd8:c.instructions+=1;goto B50edd8;
case 0x50ede0:goto L50ede0;
case 0x50ede4:c.instructions+=3;goto B50ede4;
case 0x50ede7:c.instructions+=2;goto B50ede7;
case 0x50edea:c.instructions+=1;goto B50edea;
case 0x50edec:goto L50edec;
case 0x50edf3:goto L50edf3;
case 0x50edf7:c.instructions+=2;goto B50edf7;
case 0x50edfa:c.instructions+=1;goto B50edfa;
case 0x50edfc:goto L50edfc;
case 0x50edff:c.instructions+=1;goto B50edff;
case 0x50ee01:goto L50ee01;
case 0x50ee03:c.instructions+=1;goto B50ee03;
case 0x50ee06:goto L50ee06;
case 0x50ee0a:c.instructions+=2;goto B50ee0a;
case 0x50ee0d:c.instructions+=1;goto B50ee0d;
case 0x50ee0f:goto L50ee0f;
case 0x50ee12:c.instructions+=1;goto B50ee12;
case 0x50ee14:goto L50ee14;
case 0x50ee16:c.instructions+=1;goto B50ee16;
case 0x50ee19:goto L50ee19;
case 0x50ee1d:c.instructions+=2;goto B50ee1d;
case 0x50ee20:c.instructions+=1;goto B50ee20;
case 0x50ee22:goto L50ee22;
case 0x50ee25:c.instructions+=1;goto B50ee25;
case 0x50ee27:goto L50ee27;
case 0x50ee29:c.instructions+=1;goto B50ee29;
case 0x50ee2c:goto L50ee2c;
case 0x50ee30:c.instructions+=2;goto B50ee30;
case 0x50ee33:c.instructions+=1;goto B50ee33;
case 0x50ee35:goto L50ee35;
case 0x50ee38:c.instructions+=1;goto B50ee38;
case 0x50ee3a:goto L50ee3a;
case 0x50ee3c:c.instructions+=1;goto B50ee3c;
case 0x50ee3f:goto L50ee3f;
case 0x50ee41:c.instructions+=1;goto B50ee41;
case 0x50ee60:goto L50ee60;
case 0x50ee64:c.instructions+=2;goto B50ee64;
case 0x50ee67:c.instructions+=1;goto B50ee67;
case 0x50ee69:goto L50ee69;
case 0x50ee6c:c.instructions+=1;goto B50ee6c;
case 0x50ee6e:goto L50ee6e;
case 0x50ee70:c.instructions+=1;goto B50ee70;
case 0x50ee73:goto L50ee73;
case 0x50ee74:c.instructions+=2;goto B50ee74;
case 0x50ee7a:c.instructions+=1;goto B50ee7a;
case 0x50ee7f:goto L50ee7f;
case 0x50ee81:c.instructions+=2;goto B50ee81;
case 0x50ee84:c.instructions+=1;goto B50ee84;
case 0x50ee90:goto L50ee90;
case 0x50ee94:c.instructions+=4;goto B50ee94;
case 0x50ee99:c.instructions+=3;goto B50ee99;
case 0x50ee9a:c.instructions+=2;goto B50ee9a;
case 0x50ee9b:c.instructions+=1;goto B50ee9b;
case 0x50ee9d:goto L50ee9d;
case 0x50eea2:c.instructions+=1;goto B50eea2;
case 0x50eea8:goto L50eea8;
case 0x50eea9:c.instructions+=2;goto B50eea9;
case 0x50eeab:c.instructions+=1;goto B50eeab;
case 0x50eeb0:goto L50eeb0;
case 0x50eeb2:c.instructions+=1;goto B50eeb2;
case 0x50eeb4:goto L50eeb4;
case 0x50eeb6:c.instructions+=3;goto B50eeb6;
case 0x50eebb:c.instructions+=2;goto B50eebb;
case 0x50eebd:c.instructions+=1;goto B50eebd;
case 0x50eec2:goto L50eec2;
case 0x50eec5:c.instructions+=1;goto B50eec5;
case 0x50eec7:goto L50eec7;
case 0x50eec8:c.instructions+=2;goto B50eec8;
case 0x50eecb:c.instructions+=1;goto B50eecb;
case 0x50eecd:goto L50eecd;
case 0x50eece:c.instructions+=3;goto B50eece;
case 0x50eed0:c.instructions+=2;goto B50eed0;
case 0x50eed1:c.instructions+=1;goto B50eed1;
case 0x50eed4:goto L50eed4;
case 0x50eed7:c.instructions+=1;goto B50eed7;
case 0x50eed9:goto L50eed9;
case 0x50eedc:c.instructions+=1;goto B50eedc;
case 0x50eede:goto L50eede;
case 0x50eedf:c.instructions+=2;goto B50eedf;
case 0x50eee5:c.instructions+=1;goto B50eee5;
case 0x50eeea:goto L50eeea;
case 0x50eeec:c.instructions+=1;goto B50eeec;
case 0x50eeee:goto L50eeee;
case 0x50eef0:c.instructions+=3;goto B50eef0;
case 0x50eef5:c.instructions+=2;goto B50eef5;
case 0x50eef7:c.instructions+=1;goto B50eef7;
case 0x50eefc:goto L50eefc;
case 0x50eeff:c.instructions+=1;goto B50eeff;
case 0x50ef01:goto L50ef01;
case 0x50ef02:c.instructions+=3;goto B50ef02;
case 0x50ef04:c.instructions+=2;goto B50ef04;
case 0x50ef05:c.instructions+=1;goto B50ef05;
case 0x50ef10:goto L50ef10;
case 0x50ef11:c.instructions+=4;goto B50ef11;
case 0x50ef12:c.instructions+=3;goto B50ef12;
case 0x50ef17:c.instructions+=2;goto B50ef17;
case 0x50ef1a:c.instructions+=1;goto B50ef1a;
case 0x50ef20:goto L50ef20;
case 0x50ef21:c.instructions+=2;goto B50ef21;
case 0x50ef23:c.instructions+=1;goto B50ef23;
case 0x50ef28:goto L50ef28;
case 0x50ef2a:c.instructions+=1;goto B50ef2a;
case 0x50ef2c:goto L50ef2c;
case 0x50ef2e:c.instructions+=3;goto B50ef2e;
case 0x50ef33:c.instructions+=2;goto B50ef33;
case 0x50ef35:c.instructions+=1;goto B50ef35;
case 0x50ef3a:goto L50ef3a;
case 0x50ef3d:c.instructions+=1;goto B50ef3d;
case 0x50ef3f:goto L50ef3f;
case 0x50ef40:c.instructions+=2;goto B50ef40;
case 0x50ef43:c.instructions+=1;goto B50ef43;
case 0x50ef45:goto L50ef45;
case 0x50ef46:c.instructions+=3;goto B50ef46;
case 0x50ef48:c.instructions+=2;goto B50ef48;
case 0x50ef49:c.instructions+=1;goto B50ef49;
case 0x50ef4a:goto L50ef4a;
case 0x50ef4b:c.instructions+=3;goto B50ef4b;
case 0x50ef4d:c.instructions+=2;goto B50ef4d;
case 0x50ef4e:c.instructions+=1;goto B50ef4e;
case 0x50ef50:goto L50ef50;
case 0x50ef54:c.instructions+=4;goto B50ef54;
case 0x50ef57:c.instructions+=3;goto B50ef57;
case 0x50ef59:c.instructions+=2;goto B50ef59;
case 0x50ef5c:c.instructions+=1;goto B50ef5c;
case 0x50ef5e:goto L50ef5e;
case 0x50ef65:c.instructions+=1;goto B50ef65;
case 0x50ef6c:goto L50ef6c;
case 0x50ef70:c.instructions+=4;goto B50ef70;
case 0x50ef75:c.instructions+=3;goto B50ef75;
case 0x50ef77:c.instructions+=2;goto B50ef77;
case 0x50ef7a:c.instructions+=1;goto B50ef7a;
case 0x50ef7d:goto L50ef7d;
case 0x50ef81:c.instructions+=4;goto B50ef81;
case 0x50ef86:c.instructions+=3;goto B50ef86;
case 0x50ef88:c.instructions+=2;goto B50ef88;
case 0x50ef8b:c.instructions+=1;goto B50ef8b;
case 0x50ef8e:goto L50ef8e;
case 0x50ef92:c.instructions+=4;goto B50ef92;
case 0x50ef97:c.instructions+=3;goto B50ef97;
case 0x50ef99:c.instructions+=2;goto B50ef99;
case 0x50ef9c:c.instructions+=1;goto B50ef9c;
case 0x50ef9f:goto L50ef9f;
case 0x50efa4:goto L50efa4;
case 0x50efa8:c.instructions+=3;goto B50efa8;
case 0x50efaa:c.instructions+=2;goto B50efaa;
case 0x50efad:c.instructions+=1;goto B50efad;
case 0x50efd0:goto L50efd0;
case 0x50efd1:c.instructions+=3;goto B50efd1;
case 0x50efd5:c.instructions+=2;goto B50efd5;
case 0x50efd8:c.instructions+=1;goto B50efd8;
case 0x50efda:goto L50efda;
case 0x50efdd:c.instructions+=1;goto B50efdd;
case 0x50efdf:goto L50efdf;
case 0x50efe1:c.instructions+=2;goto B50efe1;
case 0x50efe2:c.instructions+=1;goto B50efe2;
case 0x50efe5:goto L50efe5;
case 0x50efe6:c.instructions+=6;goto B50efe6;
case 0x50efe7:c.instructions+=5;goto B50efe7;
case 0x50efec:c.instructions+=4;goto B50efec;
case 0x50eff2:c.instructions+=3;goto B50eff2;
case 0x50eff3:c.instructions+=2;goto B50eff3;
case 0x50eff5:c.instructions+=1;goto B50eff5;
case 0x50effa:goto L50effa;
case 0x50effc:c.instructions+=1;goto B50effc;
case 0x50effe:goto L50effe;
default:missing_instruction(c.pc);}
B50e001:L50e001:{c.instructions+=5;NFSU2_TR(0x50e001);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50e005:{NFSU2_TR(0x50e005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B50e008:{NFSU2_TR(0x50e008);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50e00a:{NFSU2_TR(0x50e00a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50e00d:{NFSU2_TR(0x50e00d);
if(r1(R+518)){{goto L50e0f0;}}
}
B50e013:L50e013:{c.instructions+=5;NFSU2_TR(0x50e013);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e017:{NFSU2_TR(0x50e017);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50e01b:{NFSU2_TR(0x50e01b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50e01d:{NFSU2_TR(0x50e01d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50e020:{NFSU2_TR(0x50e020);
if(r1(R+518)){{goto L50e04c;}}
}
B50e022:L50e022:{c.instructions+=8;NFSU2_TR(0x50e022);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50e025:{NFSU2_TR(0x50e025);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e027:{NFSU2_TR(0x50e027);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e028:{NFSU2_TR(0x50e028);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50e02c:{NFSU2_TR(0x50e02c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e02d:{NFSU2_TR(0x50e02d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50e031:{NFSU2_TR(0x50e031);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e032:{NFSU2_TR(0x50e032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e037ull));
TAIL_STATIC(0x50dcd0u,50d);
}
B50e037:L50e037:{c.instructions+=6;NFSU2_TR(0x50e037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50e03a:{NFSU2_TR(0x50e03a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50e03d:{NFSU2_TR(0x50e03d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50e03e:{NFSU2_TR(0x50e03e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B50e03f:{NFSU2_TR(0x50e03f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50e041:{NFSU2_TR(0x50e041);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x50dfc0u,50d);}
}
B50e047:L50e047:{c.instructions+=1;NFSU2_TR(0x50e047);
{goto L50e0f0;}
}
B50e04c:L50e04c:{c.instructions+=5;NFSU2_TR(0x50e04c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e050:{NFSU2_TR(0x50e050);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50e054:{NFSU2_TR(0x50e054);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50e056:{NFSU2_TR(0x50e056);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50e059:{NFSU2_TR(0x50e059);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e061;}}
}
B50e05b:L50e05b:{c.instructions+=2;NFSU2_TR(0x50e05b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e05f:{NFSU2_TR(0x50e05f);
{goto L50e065;}
}
B50e061:L50e061:{c.instructions+=1;NFSU2_TR(0x50e061);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e065:L50e065:{c.instructions+=5;NFSU2_TR(0x50e065);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e069:{NFSU2_TR(0x50e069);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B50e06b:{NFSU2_TR(0x50e06b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50e06d:{NFSU2_TR(0x50e06d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e070:{NFSU2_TR(0x50e070);
if(r1(R+514)){{goto L50e078;}}
}
B50e072:L50e072:{c.instructions+=2;NFSU2_TR(0x50e072);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50e074:{NFSU2_TR(0x50e074);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e078:L50e078:{c.instructions+=12;NFSU2_TR(0x50e078);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50e07c:{NFSU2_TR(0x50e07c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50e080:{NFSU2_TR(0x50e080);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e084:{NFSU2_TR(0x50e084);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e088:{NFSU2_TR(0x50e088);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50e08c:{NFSU2_TR(0x50e08c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B50e08e:{NFSU2_TR(0x50e08e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50e092:{NFSU2_TR(0x50e092);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e096:{NFSU2_TR(0x50e096);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50e09c:{NFSU2_TR(0x50e09c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50e09e:{NFSU2_TR(0x50e09e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50e0a1:{NFSU2_TR(0x50e0a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e162;}}
}
B50e0a7:L50e0a7:{c.instructions+=6;NFSU2_TR(0x50e0a7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e0ab:{NFSU2_TR(0x50e0ab);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e0b1:{NFSU2_TR(0x50e0b1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50e0b5:{NFSU2_TR(0x50e0b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50e0b7:{NFSU2_TR(0x50e0b7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e0ba:{NFSU2_TR(0x50e0ba);
if(r1(R+514)){{goto L50e0c4;}}
}
B50e0bc:L50e0bc:{c.instructions+=2;NFSU2_TR(0x50e0bc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50e0be:{NFSU2_TR(0x50e0be);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e0c4:L50e0c4:{c.instructions+=14;NFSU2_TR(0x50e0c4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e0c8:{NFSU2_TR(0x50e0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e0cb:{NFSU2_TR(0x50e0cb);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50e0cf:{NFSU2_TR(0x50e0cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e0d1:{NFSU2_TR(0x50e0d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e0d2:{NFSU2_TR(0x50e0d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50e0d6:{NFSU2_TR(0x50e0d6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50e0d8:{NFSU2_TR(0x50e0d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e0d9:{NFSU2_TR(0x50e0d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50e0dd:{NFSU2_TR(0x50e0dd);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50e0e1:{NFSU2_TR(0x50e0e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e0e2:{NFSU2_TR(0x50e0e2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50e0e6:{NFSU2_TR(0x50e0e6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50e0e8:{NFSU2_TR(0x50e0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e0edull));
TAIL_STATIC(0x50dcd0u,50d);
}
B50e0ed:L50e0ed:{c.instructions+=1;NFSU2_TR(0x50e0ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50e0f0:L50e0f0:{c.instructions+=10;NFSU2_TR(0x50e0f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50e0f4:{NFSU2_TR(0x50e0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e0f8:{NFSU2_TR(0x50e0f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50e0fc:{NFSU2_TR(0x50e0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50e0ff:{NFSU2_TR(0x50e0ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50e100:{NFSU2_TR(0x50e100);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B50e103:{NFSU2_TR(0x50e103);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50e105:{NFSU2_TR(0x50e105);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e109:{NFSU2_TR(0x50e109);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e10d:{NFSU2_TR(0x50e10d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x50dfa3u,50d);}
}
B50e113:L50e113:{c.instructions+=5;NFSU2_TR(0x50e113);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e116:{NFSU2_TR(0x50e116);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50e11c:{NFSU2_TR(0x50e11c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50e11e:{NFSU2_TR(0x50e11e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e121:{NFSU2_TR(0x50e121);
if(r1(R+514)){{goto L50e15a;}}
}
B50e123:L50e123:{c.instructions+=15;NFSU2_TR(0x50e123);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e127:{NFSU2_TR(0x50e127);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50e12b:{NFSU2_TR(0x50e12b);
__builtin_memmove((R+8),(R+0),4);
}
B50e12d:{NFSU2_TR(0x50e12d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e12f:{NFSU2_TR(0x50e12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e133:{NFSU2_TR(0x50e133);
u8 U[4];
w4(U+0,u32(0xffffff00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e138:{NFSU2_TR(0x50e138);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50e13c:{NFSU2_TR(0x50e13c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e140:{NFSU2_TR(0x50e140);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e144:{NFSU2_TR(0x50e144);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e148:{NFSU2_TR(0x50e148);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e149:{NFSU2_TR(0x50e149);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50e14d:{NFSU2_TR(0x50e14d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e14e:{NFSU2_TR(0x50e14e);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e152:{NFSU2_TR(0x50e152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e157ull));
TAIL_STATIC(0x50dcd0u,50d);
}
B50e157:L50e157:{c.instructions+=1;NFSU2_TR(0x50e157);
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
B50e15a:L50e15a:{c.instructions+=7;NFSU2_TR(0x50e15a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50e15b:{NFSU2_TR(0x50e15b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e15c:{NFSU2_TR(0x50e15c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50e15d:{NFSU2_TR(0x50e15d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50e15e:{NFSU2_TR(0x50e15e);
__builtin_memmove((R+16),(R+20),4);
}
B50e160:{NFSU2_TR(0x50e160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50e161:{NFSU2_TR(0x50e161);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e162:L50e162:{c.instructions+=2;NFSU2_TR(0x50e162);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50e168:{NFSU2_TR(0x50e168);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50e0c4u);}goto L50e0c4;}
}
B50e170:L50e170:{c.instructions+=3;NFSU2_TR(0x50e170);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e174:{NFSU2_TR(0x50e174);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50e177:{NFSU2_TR(0x50e177);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e186;}}
}
B50e179:L50e179:{c.instructions+=2;NFSU2_TR(0x50e179);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e17c:{NFSU2_TR(0x50e17c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50e186;}}
}
B50e17e:L50e17e:{c.instructions+=2;NFSU2_TR(0x50e17e);
w4(R+0,u32(0x1ull));
}
B50e183:{NFSU2_TR(0x50e183);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e186:L50e186:{c.instructions+=2;NFSU2_TR(0x50e186);
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
B50e188:{NFSU2_TR(0x50e188);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e190:L50e190:{c.instructions+=3;NFSU2_TR(0x50e190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e194:{NFSU2_TR(0x50e194);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e197:{NFSU2_TR(0x50e197);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e24c;}}
}
B50e19d:L50e19d:{c.instructions+=1;NFSU2_TR(0x50e19d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50e250ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e1a4:L50e1a4:{c.instructions+=2;NFSU2_TR(0x50e1a4);
w4(R+0,u32(0x695654a8ull));
}
B50e1a9:{NFSU2_TR(0x50e1a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1aa:L50e1aa:{c.instructions+=2;NFSU2_TR(0x50e1aa);
w4(R+0,u32(0x2075eaf3ull));
}
B50e1af:{NFSU2_TR(0x50e1af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1b0:L50e1b0:{c.instructions+=2;NFSU2_TR(0x50e1b0);
w4(R+0,u32(0xf7352706ull));
}
B50e1b5:{NFSU2_TR(0x50e1b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1b6:L50e1b6:{c.instructions+=2;NFSU2_TR(0x50e1b6);
w4(R+0,u32(0x4c12bc51ull));
}
B50e1bb:{NFSU2_TR(0x50e1bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1bc:L50e1bc:{c.instructions+=2;NFSU2_TR(0x50e1bc);
w4(R+0,u32(0x16b5ce67ull));
}
B50e1c1:{NFSU2_TR(0x50e1c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1c2:L50e1c2:{c.instructions+=2;NFSU2_TR(0x50e1c2);
w4(R+0,u32(0x6a2c32ull));
}
B50e1c7:{NFSU2_TR(0x50e1c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1c8:L50e1c8:{c.instructions+=2;NFSU2_TR(0x50e1c8);
w4(R+0,u32(0x8a07001ull));
}
B50e1cd:{NFSU2_TR(0x50e1cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1ce:L50e1ce:{c.instructions+=2;NFSU2_TR(0x50e1ce);
w4(R+0,u32(0x43a00accull));
}
B50e1d3:{NFSU2_TR(0x50e1d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1d4:L50e1d4:{c.instructions+=2;NFSU2_TR(0x50e1d4);
w4(R+0,u32(0xf8148554ull));
}
B50e1d9:{NFSU2_TR(0x50e1d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1da:L50e1da:{c.instructions+=2;NFSU2_TR(0x50e1da);
w4(R+0,u32(0x4ef4919full));
}
B50e1df:{NFSU2_TR(0x50e1df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1e0:L50e1e0:{c.instructions+=2;NFSU2_TR(0x50e1e0);
w4(R+0,u32(0xf2173020ull));
}
B50e1e5:{NFSU2_TR(0x50e1e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1e6:L50e1e6:{c.instructions+=2;NFSU2_TR(0x50e1e6);
w4(R+0,u32(0x8ca7c26bull));
}
B50e1eb:{NFSU2_TR(0x50e1eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1ec:L50e1ec:{c.instructions+=2;NFSU2_TR(0x50e1ec);
w4(R+0,u32(0x134c6830ull));
}
B50e1f1:{NFSU2_TR(0x50e1f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1f2:L50e1f2:{c.instructions+=2;NFSU2_TR(0x50e1f2);
w4(R+0,u32(0x36da827bull));
}
B50e1f7:{NFSU2_TR(0x50e1f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1f8:L50e1f8:{c.instructions+=2;NFSU2_TR(0x50e1f8);
w4(R+0,u32(0x694ec516ull));
}
B50e1fd:{NFSU2_TR(0x50e1fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e1fe:L50e1fe:{c.instructions+=2;NFSU2_TR(0x50e1fe);
w4(R+0,u32(0x4eece261ull));
}
B50e203:{NFSU2_TR(0x50e203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e204:L50e204:{c.instructions+=2;NFSU2_TR(0x50e204);
w4(R+0,u32(0x192d84daull));
}
B50e209:{NFSU2_TR(0x50e209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e20a:L50e20a:{c.instructions+=2;NFSU2_TR(0x50e20a);
w4(R+0,u32(0x4bede425ull));
}
B50e20f:{NFSU2_TR(0x50e20f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e210:L50e210:{c.instructions+=2;NFSU2_TR(0x50e210);
w4(R+0,u32(0x69580c2cull));
}
B50e215:{NFSU2_TR(0x50e215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e216:L50e216:{c.instructions+=2;NFSU2_TR(0x50e216);
w4(R+0,u32(0x31cfc477ull));
}
B50e21b:{NFSU2_TR(0x50e21b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e21c:L50e21c:{c.instructions+=2;NFSU2_TR(0x50e21c);
w4(R+0,u32(0x694fec66ull));
}
B50e221:{NFSU2_TR(0x50e221);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e222:L50e222:{c.instructions+=2;NFSU2_TR(0x50e222);
w4(R+0,u32(0xe22eb851ull));
}
B50e227:{NFSU2_TR(0x50e227);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e228:L50e228:{c.instructions+=2;NFSU2_TR(0x50e228);
w4(R+0,u32(0x93ec1ce9ull));
}
B50e22d:{NFSU2_TR(0x50e22d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e22e:L50e22e:{c.instructions+=2;NFSU2_TR(0x50e22e);
w4(R+0,u32(0x694ca0caull));
}
B50e233:{NFSU2_TR(0x50e233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e234:L50e234:{c.instructions+=2;NFSU2_TR(0x50e234);
w4(R+0,u32(0x1b3a8dd3ull));
}
B50e239:{NFSU2_TR(0x50e239);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e23a:L50e23a:{c.instructions+=2;NFSU2_TR(0x50e23a);
w4(R+0,u32(0x960dcabull));
}
B50e23f:{NFSU2_TR(0x50e23f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e240:L50e240:{c.instructions+=2;NFSU2_TR(0x50e240);
w4(R+0,u32(0xdd7673aull));
}
B50e245:{NFSU2_TR(0x50e245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e246:L50e246:{c.instructions+=2;NFSU2_TR(0x50e246);
w4(R+0,u32(0x1ba508fcull));
}
B50e24b:{NFSU2_TR(0x50e24b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e24c:L50e24c:{c.instructions+=2;NFSU2_TR(0x50e24c);
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
B50e24e:{NFSU2_TR(0x50e24e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e2c0:L50e2c0:{c.instructions+=2;NFSU2_TR(0x50e2c0);
__builtin_memmove((R+0),gp(0x838540),1);
}
B50e2c5:{NFSU2_TR(0x50e2c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e2d0:L50e2d0:{c.instructions+=2;NFSU2_TR(0x50e2d0);
s1(0x838540,u8(0x0ull));
}
B50e2d7:{NFSU2_TR(0x50e2d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e2e0:L50e2e0:{c.instructions+=4;NFSU2_TR(0x50e2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e2e4:{NFSU2_TR(0x50e2e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50e2e7:{NFSU2_TR(0x50e2e7);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e2e9:{NFSU2_TR(0x50e2e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e2f1;}}
}
B50e2eb:L50e2eb:{c.instructions+=2;NFSU2_TR(0x50e2eb);
__builtin_memmove((R+0),gp(0x7fa1bc),4);
}
B50e2f0:{NFSU2_TR(0x50e2f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e2f1:L50e2f1:{c.instructions+=2;NFSU2_TR(0x50e2f1);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e2f3:{NFSU2_TR(0x50e2f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e2fb;}}
}
B50e2f5:L50e2f5:{c.instructions+=2;NFSU2_TR(0x50e2f5);
__builtin_memmove((R+0),gp(0x7fa1b4),4);
}
B50e2fa:{NFSU2_TR(0x50e2fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e2fb:L50e2fb:{c.instructions+=2;NFSU2_TR(0x50e2fb);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e2fd:{NFSU2_TR(0x50e2fd);
if(r1(R+518)){{goto L50e312;}}
}
B50e2ff:L50e2ff:{c.instructions+=2;NFSU2_TR(0x50e2ff);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e301:{NFSU2_TR(0x50e301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e309;}}
}
B50e303:L50e303:{c.instructions+=2;NFSU2_TR(0x50e303);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B50e308:{NFSU2_TR(0x50e308);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e309:L50e309:{c.instructions+=3;NFSU2_TR(0x50e309);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x6ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x6ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e30b:{NFSU2_TR(0x50e30b);
__builtin_memmove((R+0),gp(0x7fa1ec),4);
}
B50e310:{NFSU2_TR(0x50e310);
if(r1(R+518)){{goto L50e317;}}
}
B50e312:L50e312:{c.instructions+=1;NFSU2_TR(0x50e312);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B50e317:L50e317:{c.instructions+=1;NFSU2_TR(0x50e317);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e320:L50e320:{c.instructions+=3;NFSU2_TR(0x50e320);
__builtin_memmove((R+0),gp(0x838990),4);
}
B50e325:{NFSU2_TR(0x50e325);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e328:{NFSU2_TR(0x50e328);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e355;}}
}
B50e32a:L50e32a:{c.instructions+=1;NFSU2_TR(0x50e32a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50e35cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e331:L50e331:{c.instructions+=2;NFSU2_TR(0x50e331);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B50e336:{NFSU2_TR(0x50e336);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e337:L50e337:{c.instructions+=2;NFSU2_TR(0x50e337);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B50e33c:{NFSU2_TR(0x50e33c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e33d:L50e33d:{c.instructions+=2;NFSU2_TR(0x50e33d);
__builtin_memmove((R+0),gp(0x7fa1b4),4);
}
B50e342:{NFSU2_TR(0x50e342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e343:L50e343:{c.instructions+=2;NFSU2_TR(0x50e343);
__builtin_memmove((R+0),gp(0x7fa1bc),4);
}
B50e348:{NFSU2_TR(0x50e348);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e349:L50e349:{c.instructions+=2;NFSU2_TR(0x50e349);
__builtin_memmove((R+0),gp(0x7fa1d0),4);
}
B50e34e:{NFSU2_TR(0x50e34e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e34f:L50e34f:{c.instructions+=2;NFSU2_TR(0x50e34f);
__builtin_memmove((R+0),gp(0x7fa1e8),4);
}
B50e354:{NFSU2_TR(0x50e354);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e355:L50e355:{c.instructions+=2;NFSU2_TR(0x50e355);
w4(R+0,u32(0x783fe5ull));
}
B50e35a:{NFSU2_TR(0x50e35a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e380:L50e380:{c.instructions+=3;NFSU2_TR(0x50e380);
__builtin_memmove((R+0),gp(0x83899c),4);
}
B50e385:{NFSU2_TR(0x50e385);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e388:{NFSU2_TR(0x50e388);
if(r1(R+518)){{goto L50e39f;}}
}
B50e38a:L50e38a:{c.instructions+=2;NFSU2_TR(0x50e38a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e38b:{NFSU2_TR(0x50e38b);
if(r1(R+518)){{goto L50e399;}}
}
B50e38d:L50e38d:{c.instructions+=2;NFSU2_TR(0x50e38d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e38e:{NFSU2_TR(0x50e38e);
if(r1(R+518)){{goto L50e393;}}
}
B50e390:L50e390:{c.instructions+=2;NFSU2_TR(0x50e390);
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
B50e392:{NFSU2_TR(0x50e392);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e393:L50e393:{c.instructions+=2;NFSU2_TR(0x50e393);
__builtin_memmove((R+0),gp(0x7fa1d8),4);
}
B50e398:{NFSU2_TR(0x50e398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e399:L50e399:{c.instructions+=2;NFSU2_TR(0x50e399);
__builtin_memmove((R+0),gp(0x7fa1e0),4);
}
B50e39e:{NFSU2_TR(0x50e39e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e39f:L50e39f:{c.instructions+=2;NFSU2_TR(0x50e39f);
__builtin_memmove((R+0),gp(0x7fa1dc),4);
}
B50e3a4:{NFSU2_TR(0x50e3a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e3b0:L50e3b0:{c.instructions+=4;NFSU2_TR(0x50e3b0);
__builtin_memmove((R+0),gp(0x838983),1);
}
B50e3b5:{NFSU2_TR(0x50e3b5);
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
B50e3b7:{NFSU2_TR(0x50e3b7);
__builtin_memmove((R+0),gp(0x7fa1d8),4);
}
B50e3bc:{NFSU2_TR(0x50e3bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e3c3;}}
}
B50e3be:L50e3be:{c.instructions+=1;NFSU2_TR(0x50e3be);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B50e3c3:L50e3c3:{c.instructions+=1;NFSU2_TR(0x50e3c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e3d0:L50e3d0:{c.instructions+=3;NFSU2_TR(0x50e3d0);
__builtin_memmove((R+0),gp(0x838998),4);
}
B50e3d5:{NFSU2_TR(0x50e3d5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e3d8:{NFSU2_TR(0x50e3d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e3e0;}}
}
B50e3da:L50e3da:{c.instructions+=2;NFSU2_TR(0x50e3da);
__builtin_memmove((R+0),gp(0x7fa1c4),4);
}
B50e3df:{NFSU2_TR(0x50e3df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e3e0:L50e3e0:{c.instructions+=3;NFSU2_TR(0x50e3e0);
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
B50e3e3:{NFSU2_TR(0x50e3e3);
__builtin_memmove((R+0),gp(0x7fa1f8),4);
}
B50e3e8:{NFSU2_TR(0x50e3e8);
if(r1(R+518)){{goto L50e3ef;}}
}
B50e3ea:L50e3ea:{c.instructions+=1;NFSU2_TR(0x50e3ea);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B50e3ef:L50e3ef:{c.instructions+=1;NFSU2_TR(0x50e3ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e3f0:L50e3f0:{c.instructions+=4;NFSU2_TR(0x50e3f0);
__builtin_memmove((R+0),gp(0x839bc0),1);
}
B50e3f5:{NFSU2_TR(0x50e3f5);
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
B50e3f7:{NFSU2_TR(0x50e3f7);
__builtin_memmove((R+0),gp(0x7fa1f0),4);
}
B50e3fc:{NFSU2_TR(0x50e3fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e403;}}
}
B50e3fe:L50e3fe:{c.instructions+=1;NFSU2_TR(0x50e3fe);
__builtin_memmove((R+0),gp(0x7fa1d8),4);
}
B50e403:L50e403:{c.instructions+=1;NFSU2_TR(0x50e403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e410:L50e410:{c.instructions+=3;NFSU2_TR(0x50e410);
__builtin_memmove((R+0),gp(0x8389a0),4);
}
B50e415:{NFSU2_TR(0x50e415);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e416:{NFSU2_TR(0x50e416);
if(r1(R+518)){{goto L50e424;}}
}
B50e418:L50e418:{c.instructions+=2;NFSU2_TR(0x50e418);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e419:{NFSU2_TR(0x50e419);
if(r1(R+518)){{goto L50e41e;}}
}
B50e41b:L50e41b:{c.instructions+=2;NFSU2_TR(0x50e41b);
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
B50e41d:{NFSU2_TR(0x50e41d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e41e:L50e41e:{c.instructions+=2;NFSU2_TR(0x50e41e);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B50e423:{NFSU2_TR(0x50e423);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e424:L50e424:{c.instructions+=2;NFSU2_TR(0x50e424);
__builtin_memmove((R+0),gp(0x7fa1dc),4);
}
B50e429:{NFSU2_TR(0x50e429);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e430:L50e430:{c.instructions+=2;NFSU2_TR(0x50e430);
u8 U[8];
__builtin_memmove((U+0),gp(0x838990),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50e437:{NFSU2_TR(0x50e437);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e44e;}}
}
B50e439:L50e439:{c.instructions+=2;NFSU2_TR(0x50e439);
u8 U[14];
__builtin_memmove((U+6),gp(0x8389a0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e440:{NFSU2_TR(0x50e440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e448;}}
}
B50e442:L50e442:{c.instructions+=2;NFSU2_TR(0x50e442);
__builtin_memmove((R+0),gp(0x7fa1dc),4);
}
B50e447:{NFSU2_TR(0x50e447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e448:L50e448:{c.instructions+=2;NFSU2_TR(0x50e448);
__builtin_memmove((R+0),gp(0x7fa1bc),4);
}
B50e44d:{NFSU2_TR(0x50e44d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e44e:L50e44e:{c.instructions+=6;NFSU2_TR(0x50e44e);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B50e453:{NFSU2_TR(0x50e453);
__builtin_memmove((R+4),gp(0x7fa1b0),4);
}
B50e459:{NFSU2_TR(0x50e459);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B50e45b:{NFSU2_TR(0x50e45b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50e45d:{NFSU2_TR(0x50e45d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e45f:{NFSU2_TR(0x50e45f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e460:L50e460:{c.instructions+=4;NFSU2_TR(0x50e460);
__builtin_memmove((R+0),gp(0x838998),4);
}
B50e465:{NFSU2_TR(0x50e465);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50e466:{NFSU2_TR(0x50e466);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e469:{NFSU2_TR(0x50e469);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e492;}}
}
B50e46b:L50e46b:{c.instructions+=1;NFSU2_TR(0x50e46b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50e498ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e472:L50e472:{c.instructions+=3;NFSU2_TR(0x50e472);
s4(0x838998,u32(0x0ull));
}
B50e47c:{NFSU2_TR(0x50e47c);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B50e481:{NFSU2_TR(0x50e481);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e482:L50e482:{c.instructions+=3;NFSU2_TR(0x50e482);
s4(0x838998,u32(0x3ull));
}
B50e48c:{NFSU2_TR(0x50e48c);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B50e491:{NFSU2_TR(0x50e491);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e492:L50e492:{c.instructions+=2;NFSU2_TR(0x50e492);
__builtin_memmove((R+0),gp(0x7fa1b0),4);
}
B50e497:{NFSU2_TR(0x50e497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e4c0:L50e4c0:{c.instructions+=4;NFSU2_TR(0x50e4c0);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B50e4c5:{NFSU2_TR(0x50e4c5);
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
B50e4c7:{NFSU2_TR(0x50e4c7);
__builtin_memmove((R+0),gp(0x7fa1b0),4);
}
B50e4cc:{NFSU2_TR(0x50e4cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e4d3;}}
}
B50e4ce:L50e4ce:{c.instructions+=1;NFSU2_TR(0x50e4ce);
w4(R+0,u32(0x783fe5ull));
}
B50e4d3:L50e4d3:{c.instructions+=1;NFSU2_TR(0x50e4d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e4e0:L50e4e0:{c.instructions+=3;NFSU2_TR(0x50e4e0);
__builtin_memmove((R+0),gp(0x8389a0),4);
}
B50e4e5:{NFSU2_TR(0x50e4e5);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e4e8:{NFSU2_TR(0x50e4e8);
if(r1(R+518)){{goto L50e4fc;}}
}
B50e4ea:L50e4ea:{c.instructions+=2;NFSU2_TR(0x50e4ea);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e4eb:{NFSU2_TR(0x50e4eb);
if(r1(R+518)){{goto L50e4f6;}}
}
B50e4ed:L50e4ed:{c.instructions+=2;NFSU2_TR(0x50e4ed);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e4ee:{NFSU2_TR(0x50e4ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e4fc;}}
}
B50e4f0:L50e4f0:{c.instructions+=2;NFSU2_TR(0x50e4f0);
w4(R+0,u32(0x783fe5ull));
}
B50e4f5:{NFSU2_TR(0x50e4f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e4f6:L50e4f6:{c.instructions+=2;NFSU2_TR(0x50e4f6);
__builtin_memmove((R+0),gp(0x7fa1dc),4);
}
B50e4fb:{NFSU2_TR(0x50e4fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e4fc:L50e4fc:{c.instructions+=2;NFSU2_TR(0x50e4fc);
__builtin_memmove((R+0),gp(0x7fa1bc),4);
}
B50e501:{NFSU2_TR(0x50e501);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e510:L50e510:{c.instructions+=4;NFSU2_TR(0x50e510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50e516:{NFSU2_TR(0x50e516);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50e51c:{NFSU2_TR(0x50e51c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e51e:{NFSU2_TR(0x50e51e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e523;}}
}
B50e520:L50e520:{c.instructions+=2;NFSU2_TR(0x50e520);
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
B50e522:{NFSU2_TR(0x50e522);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e523:L50e523:{c.instructions+=2;NFSU2_TR(0x50e523);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e529:{NFSU2_TR(0x50e529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e530:L50e530:{c.instructions+=4;NFSU2_TR(0x50e530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e531:{NFSU2_TR(0x50e531);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50e535:{NFSU2_TR(0x50e535);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50e537:{NFSU2_TR(0x50e537);
if(r1(R+518)){{goto L50e579;}}
}
B50e539:L50e539:{c.instructions+=3;NFSU2_TR(0x50e539);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e53e:{NFSU2_TR(0x50e53e);
__builtin_memmove((R+4),(R+24),4);
}
B50e540:{NFSU2_TR(0x50e540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e545ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B50e545:L50e545:{c.instructions+=3;NFSU2_TR(0x50e545);
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
B50e547:{NFSU2_TR(0x50e547);
__builtin_memmove((R+4),(R+24),4);
}
B50e549:{NFSU2_TR(0x50e549);
if(r1(R+518)){{goto L50e570;}}
}
B50e54b:L50e54b:{c.instructions+=3;NFSU2_TR(0x50e54b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e54d:{NFSU2_TR(0x50e54d);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e552:{NFSU2_TR(0x50e552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e557ull));
TAIL_STATIC(0x61b500u,61b);
}
B50e557:L50e557:{c.instructions+=2;NFSU2_TR(0x50e557);
__builtin_memmove((R+8),(R+0),4);
}
B50e559:{NFSU2_TR(0x50e559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e55eull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B50e55e:L50e55e:{c.instructions+=2;NFSU2_TR(0x50e55e);
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
B50e560:{NFSU2_TR(0x50e560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e57b;}}
}
B50e562:L50e562:{c.instructions+=2;NFSU2_TR(0x50e562);
w4(R+8,u32(0xc01a6f63ull));
}
B50e567:{NFSU2_TR(0x50e567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e56cull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B50e56c:L50e56c:{c.instructions+=2;NFSU2_TR(0x50e56c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e56d:{NFSU2_TR(0x50e56d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e570:L50e570:{c.instructions+=1;NFSU2_TR(0x50e570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e575ull));
TAIL_STATIC(0x610000u,610);
}
B50e575:L50e575:{c.instructions+=2;NFSU2_TR(0x50e575);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e576:{NFSU2_TR(0x50e576);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e579:L50e579:{c.instructions+=1;NFSU2_TR(0x50e579);
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
B50e57b:L50e57b:{c.instructions+=2;NFSU2_TR(0x50e57b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e57c:{NFSU2_TR(0x50e57c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e580:L50e580:{c.instructions+=7;NFSU2_TR(0x50e580);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e584:{NFSU2_TR(0x50e584);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50e588:{NFSU2_TR(0x50e588);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e58a:{NFSU2_TR(0x50e58a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e58c:{NFSU2_TR(0x50e58c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e58d:{NFSU2_TR(0x50e58d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e58e:{NFSU2_TR(0x50e58e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e593ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B50e593:L50e593:{c.instructions+=2;NFSU2_TR(0x50e593);
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
B50e596:{NFSU2_TR(0x50e596);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e5a0:L50e5a0:{c.instructions+=3;NFSU2_TR(0x50e5a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e5a4:{NFSU2_TR(0x50e5a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50e5a7:{NFSU2_TR(0x50e5a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e5b6;}}
}
B50e5a9:L50e5a9:{c.instructions+=2;NFSU2_TR(0x50e5a9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x68ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x68ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e5ac:{NFSU2_TR(0x50e5ac);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50e5b6;}}
}
B50e5ae:L50e5ae:{c.instructions+=2;NFSU2_TR(0x50e5ae);
w4(R+0,u32(0x34ull));
}
B50e5b3:{NFSU2_TR(0x50e5b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e5b6:L50e5b6:{c.instructions+=2;NFSU2_TR(0x50e5b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x69ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x69ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50e5b9:{NFSU2_TR(0x50e5b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e5c8;}}
}
B50e5bb:L50e5bb:{c.instructions+=2;NFSU2_TR(0x50e5bb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x70ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x70ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e5be:{NFSU2_TR(0x50e5be);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50e5c8;}}
}
B50e5c0:L50e5c0:{c.instructions+=2;NFSU2_TR(0x50e5c0);
w4(R+0,u32(0x35ull));
}
B50e5c5:{NFSU2_TR(0x50e5c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e5c8:L50e5c8:{c.instructions+=2;NFSU2_TR(0x50e5c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x71ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x71ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50e5cb:{NFSU2_TR(0x50e5cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e5da;}}
}
B50e5cd:L50e5cd:{c.instructions+=2;NFSU2_TR(0x50e5cd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x78ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x78ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e5d0:{NFSU2_TR(0x50e5d0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50e5da;}}
}
B50e5d2:L50e5d2:{c.instructions+=2;NFSU2_TR(0x50e5d2);
w4(R+0,u32(0x36ull));
}
B50e5d7:{NFSU2_TR(0x50e5d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e5da:L50e5da:{c.instructions+=2;NFSU2_TR(0x50e5da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x79ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x79ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50e5dd:{NFSU2_TR(0x50e5dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e5ee;}}
}
B50e5df:L50e5df:{c.instructions+=2;NFSU2_TR(0x50e5df);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e5e4:{NFSU2_TR(0x50e5e4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50e5ee;}}
}
B50e5e6:L50e5e6:{c.instructions+=2;NFSU2_TR(0x50e5e6);
w4(R+0,u32(0x37ull));
}
B50e5eb:{NFSU2_TR(0x50e5eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e5ee:L50e5ee:{c.instructions+=2;NFSU2_TR(0x50e5ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x81ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B50e5f3:{NFSU2_TR(0x50e5f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e604;}}
}
B50e5f5:L50e5f5:{c.instructions+=2;NFSU2_TR(0x50e5f5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e5fa:{NFSU2_TR(0x50e5fa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50e604;}}
}
B50e5fc:L50e5fc:{c.instructions+=2;NFSU2_TR(0x50e5fc);
w4(R+0,u32(0x38ull));
}
B50e601:{NFSU2_TR(0x50e601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e604:L50e604:{c.instructions+=2;NFSU2_TR(0x50e604);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x89ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x89ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B50e609:{NFSU2_TR(0x50e609);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e61a;}}
}
B50e60b:L50e60b:{c.instructions+=2;NFSU2_TR(0x50e60b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x90ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x90ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e610:{NFSU2_TR(0x50e610);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50e61a;}}
}
B50e612:L50e612:{c.instructions+=2;NFSU2_TR(0x50e612);
w4(R+0,u32(0x39ull));
}
B50e617:{NFSU2_TR(0x50e617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e61a:L50e61a:{c.instructions+=2;NFSU2_TR(0x50e61a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x91ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x91ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x91ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e61f:{NFSU2_TR(0x50e61f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50e62d;}}
}
B50e621:L50e621:{c.instructions+=3;NFSU2_TR(0x50e621);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x98ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x98ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e626:{NFSU2_TR(0x50e626);
w4(R+0,u32(0x3aull));
}
B50e62b:{NFSU2_TR(0x50e62b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50e632;}}
}
B50e62d:L50e62d:{c.instructions+=1;NFSU2_TR(0x50e62d);
w4(R+0,u32(0xa9ull));
}
B50e632:L50e632:{c.instructions+=1;NFSU2_TR(0x50e632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e640:L50e640:{c.instructions+=4;NFSU2_TR(0x50e640);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e644:{NFSU2_TR(0x50e644);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
}
B50e647:{NFSU2_TR(0x50e647);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e64a:{NFSU2_TR(0x50e64a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e682;}}
}
B50e64c:L50e64c:{c.instructions+=2;NFSU2_TR(0x50e64c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50e6a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50e653:{NFSU2_TR(0x50e653);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50e68cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e65a:L50e65a:{c.instructions+=2;NFSU2_TR(0x50e65a);
w4(R+0,u32(0x28f7092ull));
}
B50e65f:{NFSU2_TR(0x50e65f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e662:L50e662:{c.instructions+=2;NFSU2_TR(0x50e662);
w4(R+0,u32(0x945e9bc5ull));
}
B50e667:{NFSU2_TR(0x50e667);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e66a:L50e66a:{c.instructions+=2;NFSU2_TR(0x50e66a);
w4(R+0,u32(0x294d2a3ull));
}
B50e66f:{NFSU2_TR(0x50e66f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e672:L50e672:{c.instructions+=2;NFSU2_TR(0x50e672);
w4(R+0,u32(0xbb034ea6ull));
}
B50e677:{NFSU2_TR(0x50e677);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e67a:L50e67a:{c.instructions+=2;NFSU2_TR(0x50e67a);
w4(R+0,u32(0x1b3a8dd3ull));
}
B50e67f:{NFSU2_TR(0x50e67f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e682:L50e682:{c.instructions+=2;NFSU2_TR(0x50e682);
w4(R+0,u32(0x74ce8c0bull));
}
B50e687:{NFSU2_TR(0x50e687);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e6f0:L50e6f0:{c.instructions+=4;NFSU2_TR(0x50e6f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e6f4:{NFSU2_TR(0x50e6f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
}
B50e6f7:{NFSU2_TR(0x50e6f7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e6fa:{NFSU2_TR(0x50e6fa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e732;}}
}
B50e6fc:L50e6fc:{c.instructions+=2;NFSU2_TR(0x50e6fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50e750ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50e703:{NFSU2_TR(0x50e703);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50e738ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e70a:L50e70a:{c.instructions+=2;NFSU2_TR(0x50e70a);
w4(R+0,u32(0x28f7092ull));
}
B50e70f:{NFSU2_TR(0x50e70f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e712:L50e712:{c.instructions+=2;NFSU2_TR(0x50e712);
w4(R+0,u32(0x945e9bc5ull));
}
B50e717:{NFSU2_TR(0x50e717);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e71a:L50e71a:{c.instructions+=2;NFSU2_TR(0x50e71a);
w4(R+0,u32(0x294d2a3ull));
}
B50e71f:{NFSU2_TR(0x50e71f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e722:L50e722:{c.instructions+=2;NFSU2_TR(0x50e722);
w4(R+0,u32(0xbb034ea6ull));
}
B50e727:{NFSU2_TR(0x50e727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e72a:L50e72a:{c.instructions+=2;NFSU2_TR(0x50e72a);
w4(R+0,u32(0xd6d115e4ull));
}
B50e72f:{NFSU2_TR(0x50e72f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e732:L50e732:{c.instructions+=2;NFSU2_TR(0x50e732);
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
B50e734:{NFSU2_TR(0x50e734);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e790:L50e790:{c.instructions+=3;NFSU2_TR(0x50e790);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e794:{NFSU2_TR(0x50e794);
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
B50e797:{NFSU2_TR(0x50e797);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e7e8;}}
}
B50e799:L50e799:{c.instructions+=1;NFSU2_TR(0x50e799);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50e7f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e7a0:L50e7a0:{c.instructions+=2;NFSU2_TR(0x50e7a0);
w4(R+0,u32(0x758d5e3cull));
}
B50e7a5:{NFSU2_TR(0x50e7a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7a8:L50e7a8:{c.instructions+=2;NFSU2_TR(0x50e7a8);
w4(R+0,u32(0x9c34c75full));
}
B50e7ad:{NFSU2_TR(0x50e7ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7b0:L50e7b0:{c.instructions+=2;NFSU2_TR(0x50e7b0);
w4(R+0,u32(0x26eea5eull));
}
B50e7b5:{NFSU2_TR(0x50e7b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7b8:L50e7b8:{c.instructions+=2;NFSU2_TR(0x50e7b8);
w4(R+0,u32(0xabd0ff14ull));
}
B50e7bd:{NFSU2_TR(0x50e7bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7c0:L50e7c0:{c.instructions+=2;NFSU2_TR(0x50e7c0);
w4(R+0,u32(0xa7886f38ull));
}
B50e7c5:{NFSU2_TR(0x50e7c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7c8:L50e7c8:{c.instructions+=2;NFSU2_TR(0x50e7c8);
w4(R+0,u32(0xa7884765ull));
}
B50e7cd:{NFSU2_TR(0x50e7cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7d0:L50e7d0:{c.instructions+=2;NFSU2_TR(0x50e7d0);
w4(R+0,u32(0x73ad2f72ull));
}
B50e7d5:{NFSU2_TR(0x50e7d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7d8:L50e7d8:{c.instructions+=2;NFSU2_TR(0x50e7d8);
w4(R+0,u32(0xabca6aefull));
}
B50e7dd:{NFSU2_TR(0x50e7dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7e0:L50e7e0:{c.instructions+=2;NFSU2_TR(0x50e7e0);
w4(R+0,u32(0xaa8959adull));
}
B50e7e5:{NFSU2_TR(0x50e7e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e7e8:L50e7e8:{c.instructions+=2;NFSU2_TR(0x50e7e8);
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
B50e7ea:{NFSU2_TR(0x50e7ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e820:L50e820:{c.instructions+=3;NFSU2_TR(0x50e820);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50e824:{NFSU2_TR(0x50e824);
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
B50e827:{NFSU2_TR(0x50e827);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e878;}}
}
B50e829:L50e829:{c.instructions+=1;NFSU2_TR(0x50e829);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50e880ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e830:L50e830:{c.instructions+=2;NFSU2_TR(0x50e830);
w4(R+0,u32(0xea57d2c4ull));
}
B50e835:{NFSU2_TR(0x50e835);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e838:L50e838:{c.instructions+=2;NFSU2_TR(0x50e838);
w4(R+0,u32(0x178475e7ull));
}
B50e83d:{NFSU2_TR(0x50e83d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e840:L50e840:{c.instructions+=2;NFSU2_TR(0x50e840);
w4(R+0,u32(0xc15c94e6ull));
}
B50e845:{NFSU2_TR(0x50e845);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e848:L50e848:{c.instructions+=2;NFSU2_TR(0x50e848);
w4(R+0,u32(0x6ef789cull));
}
B50e84d:{NFSU2_TR(0x50e84d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e850:L50e850:{c.instructions+=2;NFSU2_TR(0x50e850);
w4(R+0,u32(0x9701bde4ull));
}
B50e855:{NFSU2_TR(0x50e855);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e858:L50e858:{c.instructions+=2;NFSU2_TR(0x50e858);
w4(R+0,u32(0x502abeedull));
}
B50e85d:{NFSU2_TR(0x50e85d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e860:L50e860:{c.instructions+=2;NFSU2_TR(0x50e860);
w4(R+0,u32(0x1a29ffaull));
}
B50e865:{NFSU2_TR(0x50e865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e868:L50e868:{c.instructions+=2;NFSU2_TR(0x50e868);
w4(R+0,u32(0x6e8e477ull));
}
B50e86d:{NFSU2_TR(0x50e86d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e870:L50e870:{c.instructions+=2;NFSU2_TR(0x50e870);
w4(R+0,u32(0xbaa23a28ull));
}
B50e875:{NFSU2_TR(0x50e875);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e878:L50e878:{c.instructions+=2;NFSU2_TR(0x50e878);
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
B50e87a:{NFSU2_TR(0x50e87a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e8b0:L50e8b0:{c.instructions+=15;NFSU2_TR(0x50e8b0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50e8b4:{NFSU2_TR(0x50e8b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8b5:{NFSU2_TR(0x50e8b5);
__builtin_memmove((R+24),(R+4),4);
}
B50e8b7:{NFSU2_TR(0x50e8b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50e8bb:{NFSU2_TR(0x50e8bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8bc:{NFSU2_TR(0x50e8bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50e8c0:{NFSU2_TR(0x50e8c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1242ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50e8c6:{NFSU2_TR(0x50e8c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8c8:{NFSU2_TR(0x50e8c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50e8ce:{NFSU2_TR(0x50e8ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8cf:{NFSU2_TR(0x50e8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e8d2:{NFSU2_TR(0x50e8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50e8d5:{NFSU2_TR(0x50e8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50e8d7:{NFSU2_TR(0x50e8d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8d8:{NFSU2_TR(0x50e8d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e8dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e8db:L50e8db:{c.instructions+=7;NFSU2_TR(0x50e8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50e8de:{NFSU2_TR(0x50e8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50e8e0:{NFSU2_TR(0x50e8e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8e2:{NFSU2_TR(0x50e8e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50e8e5:{NFSU2_TR(0x50e8e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8e6:{NFSU2_TR(0x50e8e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e8e7:{NFSU2_TR(0x50e8e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e8eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50e8ea:L50e8ea:{c.instructions+=4;NFSU2_TR(0x50e8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50e8eb:{NFSU2_TR(0x50e8eb);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+24)),r1(U+0));
}
B50e8ee:{NFSU2_TR(0x50e8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e8ef:{NFSU2_TR(0x50e8ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e900:L50e900:{c.instructions+=4;NFSU2_TR(0x50e900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e901:{NFSU2_TR(0x50e901);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e903:{NFSU2_TR(0x50e903);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50e906:{NFSU2_TR(0x50e906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e90bull));
TAIL_STATIC(0x5b5350u,5b5);
}
B50e90b:L50e90b:{c.instructions+=4;NFSU2_TR(0x50e90b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e90d:{NFSU2_TR(0x50e90d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50e910:{NFSU2_TR(0x50e910);
__builtin_memmove((R+24),(R+0),4);
}
B50e912:{NFSU2_TR(0x50e912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e917ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B50e917:L50e917:{c.instructions+=3;NFSU2_TR(0x50e917);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e918:{NFSU2_TR(0x50e918);
__builtin_memmove((R+4),(R+24),4);
}
B50e91a:{NFSU2_TR(0x50e91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e91full));
TAIL_STATIC(0x4fdd90u,4fd);
}
B50e91f:L50e91f:{c.instructions+=2;NFSU2_TR(0x50e91f);
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
B50e921:{NFSU2_TR(0x50e921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e927;}}
}
B50e923:L50e923:{c.instructions+=3;NFSU2_TR(0x50e923);
w1(R+0,u8(0x1ull));
}
B50e925:{NFSU2_TR(0x50e925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e926:{NFSU2_TR(0x50e926);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e927:L50e927:{c.instructions+=3;NFSU2_TR(0x50e927);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e929:{NFSU2_TR(0x50e929);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e92a:{NFSU2_TR(0x50e92a);
__builtin_memmove((R+12),(R+12),4);
}
B50e930:L50e930:{c.instructions+=3;NFSU2_TR(0x50e930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e931:{NFSU2_TR(0x50e931);
__builtin_memmove((R+4),(R+12),4);
}
B50e933:{NFSU2_TR(0x50e933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e938ull));
TAIL_STATIC(0x6102f0u,610);
}
B50e938:L50e938:{c.instructions+=4;NFSU2_TR(0x50e938);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e939:{NFSU2_TR(0x50e939);
__builtin_memmove((R+4),(R+28),4);
}
B50e93b:{NFSU2_TR(0x50e93b);
__builtin_memmove((R+20),(R+0),4);
}
B50e93d:{NFSU2_TR(0x50e93d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e942ull));
TAIL_STATIC(0x6102f0u,610);
}
B50e942:L50e942:{c.instructions+=2;NFSU2_TR(0x50e942);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e944:{NFSU2_TR(0x50e944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50e954;}}
}
B50e946:L50e946:{c.instructions+=3;NFSU2_TR(0x50e946);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50e947:{NFSU2_TR(0x50e947);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50e94d:{NFSU2_TR(0x50e94d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50e930u);}goto L50e930;}}
}
B50e94f:L50e94f:{c.instructions+=4;NFSU2_TR(0x50e94f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50e950:{NFSU2_TR(0x50e950);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50e952:{NFSU2_TR(0x50e952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e953:{NFSU2_TR(0x50e953);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e954:L50e954:{c.instructions+=4;NFSU2_TR(0x50e954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50e955:{NFSU2_TR(0x50e955);
w1(R+0,u8(0x1ull));
}
B50e957:{NFSU2_TR(0x50e957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e958:{NFSU2_TR(0x50e958);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e960:L50e960:{c.instructions+=4;NFSU2_TR(0x50e960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e961:{NFSU2_TR(0x50e961);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50e965:{NFSU2_TR(0x50e965);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e966:{NFSU2_TR(0x50e966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e96bull));
TAIL_STATIC(0x4fff40u,4ff);
}
B50e96b:L50e96b:{c.instructions+=3;NFSU2_TR(0x50e96b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50e96e:{NFSU2_TR(0x50e96e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50e970:{NFSU2_TR(0x50e970);
if(r1(R+518)){{goto L50e97f;}}
}
B50e972:L50e972:{c.instructions+=2;NFSU2_TR(0x50e972);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e973:{NFSU2_TR(0x50e973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e978ull));
TAIL_STATIC(0x4fff40u,4ff);
}
B50e978:L50e978:{c.instructions+=3;NFSU2_TR(0x50e978);
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
B50e97b:{NFSU2_TR(0x50e97b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e97c:{NFSU2_TR(0x50e97c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e97f:L50e97f:{c.instructions+=2;NFSU2_TR(0x50e97f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x2b77febull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b77febull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50e985:{NFSU2_TR(0x50e985);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50eae2;}}
}
B50e98b:L50e98b:{c.instructions+=1;NFSU2_TR(0x50e98b);
if(r1(R+518)){{goto L50eac2;}}
}
B50e991:L50e991:{c.instructions+=2;NFSU2_TR(0x50e991);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x197af7ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x197af7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50e997:{NFSU2_TR(0x50e997);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50ea3b;}}
}
B50e99d:L50e99d:{c.instructions+=1;NFSU2_TR(0x50e99d);
if(r1(R+518)){{goto L50ea2a;}}
}
B50e9a3:L50e9a3:{c.instructions+=2;NFSU2_TR(0x50e9a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x13053eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13053eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50e9a9:{NFSU2_TR(0x50e9a9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50e9f4;}}
}
B50e9ab:L50e9ab:{c.instructions+=1;NFSU2_TR(0x50e9ab);
if(r1(R+518)){{goto L50e9e3;}}
}
B50e9ad:L50e9ad:{c.instructions+=2;NFSU2_TR(0x50e9ad);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x648ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50e9b3:{NFSU2_TR(0x50e9b3);
if(r1(R+518)){{goto L50e9d2;}}
}
B50e9b5:L50e9b5:{c.instructions+=2;NFSU2_TR(0x50e9b5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9536ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50e9bb:{NFSU2_TR(0x50e9bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ebe2;}}
}
B50e9c1:L50e9c1:{c.instructions+=2;NFSU2_TR(0x50e9c1);
u8 U[4];
w4(U+0,u32(0x6b3d4f56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e9c6:{NFSU2_TR(0x50e9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e9cbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50e9cb:L50e9cb:{c.instructions+=3;NFSU2_TR(0x50e9cb);
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
B50e9ce:{NFSU2_TR(0x50e9ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e9cf:{NFSU2_TR(0x50e9cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e9d2:L50e9d2:{c.instructions+=2;NFSU2_TR(0x50e9d2);
u8 U[4];
w4(U+0,u32(0xfb7dfc68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e9d7:{NFSU2_TR(0x50e9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e9dcull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50e9dc:L50e9dc:{c.instructions+=3;NFSU2_TR(0x50e9dc);
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
B50e9df:{NFSU2_TR(0x50e9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e9e0:{NFSU2_TR(0x50e9e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e9e3:L50e9e3:{c.instructions+=2;NFSU2_TR(0x50e9e3);
u8 U[4];
w4(U+0,u32(0xd2e7035eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50e9e8:{NFSU2_TR(0x50e9e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50e9edull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50e9ed:L50e9ed:{c.instructions+=3;NFSU2_TR(0x50e9ed);
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
B50e9f0:{NFSU2_TR(0x50e9f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50e9f1:{NFSU2_TR(0x50e9f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50e9f4:L50e9f4:{c.instructions+=2;NFSU2_TR(0x50e9f4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x148bbaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50e9fa:{NFSU2_TR(0x50e9fa);
if(r1(R+518)){{goto L50ea19;}}
}
B50e9fc:L50e9fc:{c.instructions+=2;NFSU2_TR(0x50e9fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15a5c4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ea02:{NFSU2_TR(0x50ea02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ebe2;}}
}
B50ea08:L50ea08:{c.instructions+=2;NFSU2_TR(0x50ea08);
u8 U[4];
w4(U+0,u32(0xd2e9a3e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ea0d:{NFSU2_TR(0x50ea0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ea12ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ea12:L50ea12:{c.instructions+=3;NFSU2_TR(0x50ea12);
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
B50ea15:{NFSU2_TR(0x50ea15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ea16:{NFSU2_TR(0x50ea16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ea19:L50ea19:{c.instructions+=2;NFSU2_TR(0x50ea19);
u8 U[4];
w4(U+0,u32(0xd2e889daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ea1e:{NFSU2_TR(0x50ea1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ea23ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ea23:L50ea23:{c.instructions+=3;NFSU2_TR(0x50ea23);
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
B50ea26:{NFSU2_TR(0x50ea26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ea27:{NFSU2_TR(0x50ea27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ea2a:L50ea2a:{c.instructions+=2;NFSU2_TR(0x50ea2a);
u8 U[4];
w4(U+0,u32(0xd2ed7917ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ea2f:{NFSU2_TR(0x50ea2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ea34ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ea34:L50ea34:{c.instructions+=3;NFSU2_TR(0x50ea34);
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
B50ea37:{NFSU2_TR(0x50ea37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ea38:{NFSU2_TR(0x50ea38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ea3b:L50ea3b:{c.instructions+=2;NFSU2_TR(0x50ea3b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x1e6a3bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1e6a3bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ea41:{NFSU2_TR(0x50ea41);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50ea8c;}}
}
B50ea43:L50ea43:{c.instructions+=1;NFSU2_TR(0x50ea43);
if(r1(R+518)){{goto L50ea7b;}}
}
B50ea45:L50ea45:{c.instructions+=2;NFSU2_TR(0x50ea45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19e1dbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ea4b:{NFSU2_TR(0x50ea4b);
if(r1(R+518)){{goto L50ea6a;}}
}
B50ea4d:L50ea4d:{c.instructions+=2;NFSU2_TR(0x50ea4d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1c39b5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ea53:{NFSU2_TR(0x50ea53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ebe2;}}
}
B50ea59:L50ea59:{c.instructions+=2;NFSU2_TR(0x50ea59);
u8 U[4];
w4(U+0,u32(0xd2f037d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ea5e:{NFSU2_TR(0x50ea5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ea63ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ea63:L50ea63:{c.instructions+=3;NFSU2_TR(0x50ea63);
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
B50ea66:{NFSU2_TR(0x50ea66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ea67:{NFSU2_TR(0x50ea67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ea6a:L50ea6a:{c.instructions+=2;NFSU2_TR(0x50ea6a);
u8 U[4];
w4(U+0,u32(0xd2eddffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ea6f:{NFSU2_TR(0x50ea6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ea74ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ea74:L50ea74:{c.instructions+=3;NFSU2_TR(0x50ea74);
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
B50ea77:{NFSU2_TR(0x50ea77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ea78:{NFSU2_TR(0x50ea78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ea7b:L50ea7b:{c.instructions+=2;NFSU2_TR(0x50ea7b);
u8 U[4];
w4(U+0,u32(0xd2f2685bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ea80:{NFSU2_TR(0x50ea80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ea85ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ea85:L50ea85:{c.instructions+=3;NFSU2_TR(0x50ea85);
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
B50ea88:{NFSU2_TR(0x50ea88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ea89:{NFSU2_TR(0x50ea89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ea8c:L50ea8c:{c.instructions+=2;NFSU2_TR(0x50ea8c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ef762ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ea92:{NFSU2_TR(0x50ea92);
if(r1(R+518)){{goto L50eab1;}}
}
B50ea94:L50ea94:{c.instructions+=2;NFSU2_TR(0x50ea94);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29e75d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ea9a:{NFSU2_TR(0x50ea9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ebe2;}}
}
B50eaa0:L50eaa0:{c.instructions+=2;NFSU2_TR(0x50eaa0);
u8 U[4];
w4(U+0,u32(0x6322f230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eaa5:{NFSU2_TR(0x50eaa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eaaaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eaaa:L50eaaa:{c.instructions+=3;NFSU2_TR(0x50eaaa);
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
B50eaad:{NFSU2_TR(0x50eaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eaae:{NFSU2_TR(0x50eaae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eab1:L50eab1:{c.instructions+=2;NFSU2_TR(0x50eab1);
u8 U[4];
w4(U+0,u32(0xd2f2f582ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eab6:{NFSU2_TR(0x50eab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eabbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eabb:L50eabb:{c.instructions+=3;NFSU2_TR(0x50eabb);
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
B50eabe:{NFSU2_TR(0x50eabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eabf:{NFSU2_TR(0x50eabf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eac2:L50eac2:{c.instructions+=1;NFSU2_TR(0x50eac2);
w4(R+8,u32(0x300b420bull));
}
B50eac7:L50eac7:{c.instructions+=1;NFSU2_TR(0x50eac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eaccull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B50eacc:L50eacc:{c.instructions+=2;NFSU2_TR(0x50eacc);
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
B50eace:{NFSU2_TR(0x50eace);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ec06;}}
}
B50ead4:L50ead4:{c.instructions+=2;NFSU2_TR(0x50ead4);
w4(R+8,u32(0xc01a6f63ull));
}
B50ead9:{NFSU2_TR(0x50ead9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eadeull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B50eade:L50eade:{c.instructions+=2;NFSU2_TR(0x50eade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eadf:{NFSU2_TR(0x50eadf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eae2:L50eae2:{c.instructions+=2;NFSU2_TR(0x50eae2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x66ba72e5ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x66ba72e5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eae8:{NFSU2_TR(0x50eae8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50eb85;}}
}
B50eaee:L50eaee:{c.instructions+=1;NFSU2_TR(0x50eaee);
if(r1(R+518)){{goto L50eb7b;}}
}
B50eaf4:L50eaf4:{c.instructions+=2;NFSU2_TR(0x50eaf4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x3b83203ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3b83203ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eafa:{NFSU2_TR(0x50eafa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50eb45;}}
}
B50eafc:L50eafc:{c.instructions+=1;NFSU2_TR(0x50eafc);
if(r1(R+518)){{goto L50eb34;}}
}
B50eafe:L50eafe:{c.instructions+=2;NFSU2_TR(0x50eafe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x324ac97ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eb04:{NFSU2_TR(0x50eb04);
if(r1(R+518)){{goto L50eb23;}}
}
B50eb06:L50eb06:{c.instructions+=2;NFSU2_TR(0x50eb06);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x365769eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eb0c:{NFSU2_TR(0x50eb0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ebe2;}}
}
B50eb12:L50eb12:{c.instructions+=2;NFSU2_TR(0x50eb12);
u8 U[4];
w4(U+0,u32(0x30b938beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eb17:{NFSU2_TR(0x50eb17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eb1cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eb1c:L50eb1c:{c.instructions+=3;NFSU2_TR(0x50eb1c);
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
B50eb1f:{NFSU2_TR(0x50eb1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eb20:{NFSU2_TR(0x50eb20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eb23:L50eb23:{c.instructions+=2;NFSU2_TR(0x50eb23);
u8 U[4];
w4(U+0,u32(0x30786eb7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eb28:{NFSU2_TR(0x50eb28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eb2dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eb2d:L50eb2d:{c.instructions+=3;NFSU2_TR(0x50eb2d);
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
B50eb30:{NFSU2_TR(0x50eb30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eb31:{NFSU2_TR(0x50eb31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eb34:L50eb34:{c.instructions+=2;NFSU2_TR(0x50eb34);
u8 U[4];
w4(U+0,u32(0x310bf423ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eb39:{NFSU2_TR(0x50eb39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eb3eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eb3e:L50eb3e:{c.instructions+=3;NFSU2_TR(0x50eb3e);
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
B50eb41:{NFSU2_TR(0x50eb41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eb42:{NFSU2_TR(0x50eb42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eb45:L50eb45:{c.instructions+=2;NFSU2_TR(0x50eb45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x352d08d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eb4b:{NFSU2_TR(0x50eb4b);
if(r1(R+518)){{goto L50eb6a;}}
}
B50eb4d:L50eb4d:{c.instructions+=2;NFSU2_TR(0x50eb4d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x48e25793ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eb53:{NFSU2_TR(0x50eb53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ebe2;}}
}
B50eb59:L50eb59:{c.instructions+=2;NFSU2_TR(0x50eb59);
u8 U[4];
w4(U+0,u32(0xa08a29b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eb5e:{NFSU2_TR(0x50eb5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eb63ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eb63:L50eb63:{c.instructions+=3;NFSU2_TR(0x50eb63);
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
B50eb66:{NFSU2_TR(0x50eb66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eb67:{NFSU2_TR(0x50eb67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eb6a:L50eb6a:{c.instructions+=2;NFSU2_TR(0x50eb6a);
u8 U[4];
w4(U+0,u32(0xcf90ef1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eb6f:{NFSU2_TR(0x50eb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eb74ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eb74:L50eb74:{c.instructions+=3;NFSU2_TR(0x50eb74);
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
B50eb77:{NFSU2_TR(0x50eb77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eb78:{NFSU2_TR(0x50eb78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eb7b:L50eb7b:{c.instructions+=2;NFSU2_TR(0x50eb7b);
w4(R+8,u32(0x3e867905ull));
}
B50eb80:{NFSU2_TR(0x50eb80);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50eac7u);}goto L50eac7;}
}
B50eb85:L50eb85:{c.instructions+=2;NFSU2_TR(0x50eb85);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xbf3608c0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbf3608c0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eb8b:{NFSU2_TR(0x50eb8b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50ebd2;}}
}
B50eb8d:L50eb8d:{c.instructions+=1;NFSU2_TR(0x50eb8d);
if(r1(R+518)){{goto L50ebc1;}}
}
B50eb8f:L50eb8f:{c.instructions+=2;NFSU2_TR(0x50eb8f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x695fce00ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eb95:{NFSU2_TR(0x50eb95);
if(r1(R+518)){{goto L50ebb0;}}
}
B50eb97:L50eb97:{c.instructions+=2;NFSU2_TR(0x50eb97);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa26ad820ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eb9d:{NFSU2_TR(0x50eb9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ebe2;}}
}
B50eb9f:L50eb9f:{c.instructions+=2;NFSU2_TR(0x50eb9f);
u8 U[4];
w4(U+0,u32(0x9d50e640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eba4:{NFSU2_TR(0x50eba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eba9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50eba9:L50eba9:{c.instructions+=3;NFSU2_TR(0x50eba9);
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
B50ebac:{NFSU2_TR(0x50ebac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ebad:{NFSU2_TR(0x50ebad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ebb0:L50ebb0:{c.instructions+=2;NFSU2_TR(0x50ebb0);
u8 U[4];
w4(U+0,u32(0x412bd420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ebb5:{NFSU2_TR(0x50ebb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ebbaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ebba:L50ebba:{c.instructions+=3;NFSU2_TR(0x50ebba);
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
B50ebbd:{NFSU2_TR(0x50ebbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ebbe:{NFSU2_TR(0x50ebbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ebc1:L50ebc1:{c.instructions+=2;NFSU2_TR(0x50ebc1);
u8 U[4];
w4(U+0,u32(0xc49c11feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ebc6:{NFSU2_TR(0x50ebc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ebcbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ebcb:L50ebcb:{c.instructions+=3;NFSU2_TR(0x50ebcb);
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
B50ebce:{NFSU2_TR(0x50ebce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ebcf:{NFSU2_TR(0x50ebcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ebd2:L50ebd2:{c.instructions+=2;NFSU2_TR(0x50ebd2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc3a1ac32ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ebd8:{NFSU2_TR(0x50ebd8);
if(r1(R+518)){{goto L50ebf9;}}
}
B50ebda:L50ebda:{c.instructions+=2;NFSU2_TR(0x50ebda);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdd544a02ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ebe0:{NFSU2_TR(0x50ebe0);
if(r1(R+518)){{goto L50ebe8;}}
}
B50ebe2:L50ebe2:{c.instructions+=3;NFSU2_TR(0x50ebe2);
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
B50ebe4:{NFSU2_TR(0x50ebe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ebe5:{NFSU2_TR(0x50ebe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ebe8:L50ebe8:{c.instructions+=2;NFSU2_TR(0x50ebe8);
u8 U[4];
w4(U+0,u32(0x29f66022ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ebed:{NFSU2_TR(0x50ebed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ebf2ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ebf2:L50ebf2:{c.instructions+=3;NFSU2_TR(0x50ebf2);
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
B50ebf5:{NFSU2_TR(0x50ebf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ebf6:{NFSU2_TR(0x50ebf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ebf9:L50ebf9:{c.instructions+=2;NFSU2_TR(0x50ebf9);
u8 U[4];
w4(U+0,u32(0xbe87ba52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ebfe:{NFSU2_TR(0x50ebfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ec03ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B50ec03:L50ec03:{c.instructions+=1;NFSU2_TR(0x50ec03);
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
B50ec06:L50ec06:{c.instructions+=2;NFSU2_TR(0x50ec06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ec07:{NFSU2_TR(0x50ec07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ec10:L50ec10:{c.instructions+=6;NFSU2_TR(0x50ec10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec11:{NFSU2_TR(0x50ec11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec12:{NFSU2_TR(0x50ec12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec13:{NFSU2_TR(0x50ec13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ec19:{NFSU2_TR(0x50ec19);
w4(R+24,u32(0x40ull));
}
B50ec1e:{NFSU2_TR(0x50ec1e);
w4(R+12,u32(0x4ull));
}
B50ec23:L50ec23:{c.instructions+=3;NFSU2_TR(0x50ec23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec24:{NFSU2_TR(0x50ec24);
__builtin_memmove((R+4),(R+28),4);
}
B50ec26:{NFSU2_TR(0x50ec26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ec2bull));
TAIL_STATIC(0x6102f0u,610);
}
B50ec2b:L50ec2b:{c.instructions+=2;NFSU2_TR(0x50ec2b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ec2d:{NFSU2_TR(0x50ec2d);
if(r1(R+518)){{goto L50ec42;}}
}
B50ec2f:L50ec2f:{c.instructions+=4;NFSU2_TR(0x50ec2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50ec32:{NFSU2_TR(0x50ec32);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B50ec34:{NFSU2_TR(0x50ec34);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x14ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ec36:{NFSU2_TR(0x50ec36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ec42;}}
}
B50ec38:L50ec38:{c.instructions+=4;NFSU2_TR(0x50ec38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec3a:{NFSU2_TR(0x50ec3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec3b:{NFSU2_TR(0x50ec3b);
__builtin_memmove((R+4),(R+28),4);
}
B50ec3d:{NFSU2_TR(0x50ec3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ec42ull));
TAIL_STATIC(0x631d20u,631);
}
B50ec42:L50ec42:{c.instructions+=3;NFSU2_TR(0x50ec42);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50ec43:{NFSU2_TR(0x50ec43);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ec44:{NFSU2_TR(0x50ec44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ec23u);}goto L50ec23;}}
}
B50ec46:L50ec46:{c.instructions+=4;NFSU2_TR(0x50ec46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ec47:{NFSU2_TR(0x50ec47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ec48:{NFSU2_TR(0x50ec48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50ec49:{NFSU2_TR(0x50ec49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ec50:L50ec50:{c.instructions+=5;NFSU2_TR(0x50ec50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec51:{NFSU2_TR(0x50ec51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec52:{NFSU2_TR(0x50ec52);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B50ec54:{NFSU2_TR(0x50ec54);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ec5a:{NFSU2_TR(0x50ec5a);
__builtin_memmove((R+12),(R+12),4);
}
B50ec60:L50ec60:{c.instructions+=5;NFSU2_TR(0x50ec60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec62:{NFSU2_TR(0x50ec62);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50ec65:{NFSU2_TR(0x50ec65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec66:{NFSU2_TR(0x50ec66);
__builtin_memmove((R+4),(R+28),4);
}
B50ec68:{NFSU2_TR(0x50ec68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ec6dull));
TAIL_STATIC(0x631d20u,631);
}
B50ec6d:L50ec6d:{c.instructions+=3;NFSU2_TR(0x50ec6d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50ec6e:{NFSU2_TR(0x50ec6e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B50ec71:{NFSU2_TR(0x50ec71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ec60u);}goto L50ec60;}}
}
B50ec73:L50ec73:{c.instructions+=3;NFSU2_TR(0x50ec73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ec74:{NFSU2_TR(0x50ec74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ec75:{NFSU2_TR(0x50ec75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ec80:L50ec80:{c.instructions+=6;NFSU2_TR(0x50ec80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec81:{NFSU2_TR(0x50ec81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec82:{NFSU2_TR(0x50ec82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec83:{NFSU2_TR(0x50ec83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ec89:{NFSU2_TR(0x50ec89);
w4(R+24,u32(0x40ull));
}
B50ec8e:{NFSU2_TR(0x50ec8e);
w4(R+12,u32(0x4ull));
}
B50ec93:L50ec93:{c.instructions+=3;NFSU2_TR(0x50ec93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ec94:{NFSU2_TR(0x50ec94);
__builtin_memmove((R+4),(R+28),4);
}
B50ec96:{NFSU2_TR(0x50ec96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ec9bull));
TAIL_STATIC(0x6102f0u,610);
}
B50ec9b:L50ec9b:{c.instructions+=2;NFSU2_TR(0x50ec9b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ec9d:{NFSU2_TR(0x50ec9d);
if(r1(R+518)){{goto L50ecd8;}}
}
B50ec9f:L50ec9f:{c.instructions+=4;NFSU2_TR(0x50ec9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B50eca3:{NFSU2_TR(0x50eca3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B50eca6:{NFSU2_TR(0x50eca6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eca9:{NFSU2_TR(0x50eca9);
if(r1(R+518)){{goto L50ecce;}}
}
B50ecab:L50ecab:{c.instructions+=2;NFSU2_TR(0x50ecab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ecae:{NFSU2_TR(0x50ecae);
if(r1(R+518)){{goto L50ecce;}}
}
B50ecb0:L50ecb0:{c.instructions+=2;NFSU2_TR(0x50ecb0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ecb3:{NFSU2_TR(0x50ecb3);
if(r1(R+518)){{goto L50ecce;}}
}
B50ecb5:L50ecb5:{c.instructions+=2;NFSU2_TR(0x50ecb5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ecb8:{NFSU2_TR(0x50ecb8);
if(r1(R+518)){{goto L50ecce;}}
}
B50ecba:L50ecba:{c.instructions+=2;NFSU2_TR(0x50ecba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ecbd:{NFSU2_TR(0x50ecbd);
if(r1(R+518)){{goto L50ecce;}}
}
B50ecbf:L50ecbf:{c.instructions+=2;NFSU2_TR(0x50ecbf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ecc2:{NFSU2_TR(0x50ecc2);
if(r1(R+518)){{goto L50ecce;}}
}
B50ecc4:L50ecc4:{c.instructions+=2;NFSU2_TR(0x50ecc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ecc7:{NFSU2_TR(0x50ecc7);
if(r1(R+518)){{goto L50ecce;}}
}
B50ecc9:L50ecc9:{c.instructions+=2;NFSU2_TR(0x50ecc9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x16ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eccc:{NFSU2_TR(0x50eccc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ecd8;}}
}
B50ecce:L50ecce:{c.instructions+=4;NFSU2_TR(0x50ecce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ecd0:{NFSU2_TR(0x50ecd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ecd1:{NFSU2_TR(0x50ecd1);
__builtin_memmove((R+4),(R+28),4);
}
B50ecd3:{NFSU2_TR(0x50ecd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ecd8ull));
TAIL_STATIC(0x631d20u,631);
}
B50ecd8:L50ecd8:{c.instructions+=3;NFSU2_TR(0x50ecd8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50ecd9:{NFSU2_TR(0x50ecd9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ecda:{NFSU2_TR(0x50ecda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ec93u);}goto L50ec93;}}
}
B50ecdc:L50ecdc:{c.instructions+=4;NFSU2_TR(0x50ecdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ecdd:{NFSU2_TR(0x50ecdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ecde:{NFSU2_TR(0x50ecde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50ecdf:{NFSU2_TR(0x50ecdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ece0:L50ece0:{c.instructions+=6;NFSU2_TR(0x50ece0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ece1:{NFSU2_TR(0x50ece1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ece2:{NFSU2_TR(0x50ece2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ece3:{NFSU2_TR(0x50ece3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ece9:{NFSU2_TR(0x50ece9);
w4(R+24,u32(0x40ull));
}
B50ecee:{NFSU2_TR(0x50ecee);
w4(R+12,u32(0x4ull));
}
B50ecf3:L50ecf3:{c.instructions+=3;NFSU2_TR(0x50ecf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ecf4:{NFSU2_TR(0x50ecf4);
__builtin_memmove((R+4),(R+28),4);
}
B50ecf6:{NFSU2_TR(0x50ecf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ecfbull));
TAIL_STATIC(0x6102f0u,610);
}
B50ecfb:L50ecfb:{c.instructions+=2;NFSU2_TR(0x50ecfb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ecfd:{NFSU2_TR(0x50ecfd);
if(r1(R+518)){{goto L50ed12;}}
}
B50ecff:L50ecff:{c.instructions+=4;NFSU2_TR(0x50ecff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50ed02:{NFSU2_TR(0x50ed02);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B50ed04:{NFSU2_TR(0x50ed04);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x14ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ed06:{NFSU2_TR(0x50ed06);
if(r1(R+518)){{goto L50ed12;}}
}
B50ed08:L50ed08:{c.instructions+=4;NFSU2_TR(0x50ed08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed0a:{NFSU2_TR(0x50ed0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed0b:{NFSU2_TR(0x50ed0b);
__builtin_memmove((R+4),(R+28),4);
}
B50ed0d:{NFSU2_TR(0x50ed0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ed12ull));
TAIL_STATIC(0x631d20u,631);
}
B50ed12:L50ed12:{c.instructions+=3;NFSU2_TR(0x50ed12);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50ed13:{NFSU2_TR(0x50ed13);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ed14:{NFSU2_TR(0x50ed14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ecf3u);}goto L50ecf3;}}
}
B50ed16:L50ed16:{c.instructions+=4;NFSU2_TR(0x50ed16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ed17:{NFSU2_TR(0x50ed17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ed18:{NFSU2_TR(0x50ed18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50ed19:{NFSU2_TR(0x50ed19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ed20:L50ed20:{c.instructions+=12;NFSU2_TR(0x50ed20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed21:{NFSU2_TR(0x50ed21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50ed25:{NFSU2_TR(0x50ed25);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed26:{NFSU2_TR(0x50ed26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed27:{NFSU2_TR(0x50ed27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed28:{NFSU2_TR(0x50ed28);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed2a:{NFSU2_TR(0x50ed2a);
__builtin_memmove((R+28),(R+4),4);
}
B50ed2c:{NFSU2_TR(0x50ed2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ed2f:{NFSU2_TR(0x50ed2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50ed31:{NFSU2_TR(0x50ed31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed33:{NFSU2_TR(0x50ed33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed34:{NFSU2_TR(0x50ed34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ed37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50ed37:L50ed37:{c.instructions+=3;NFSU2_TR(0x50ed37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed38:{NFSU2_TR(0x50ed38);
w4(R+4,u32(0x8a2b68ull));
}
B50ed3d:{NFSU2_TR(0x50ed3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ed42ull));
TAIL_STATIC(0x61ba30u,61b);
}
B50ed42:L50ed42:{c.instructions+=4;NFSU2_TR(0x50ed42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B50ed46:{NFSU2_TR(0x50ed46);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ed48:{NFSU2_TR(0x50ed48);
__builtin_memmove((R+24),(R+0),4);
}
B50ed4a:{NFSU2_TR(0x50ed4a);
if(r1(R+518)){{goto L50ed7c;}}
}
B50ed4c:L50ed4c:{c.instructions+=2;NFSU2_TR(0x50ed4c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ed4e:{NFSU2_TR(0x50ed4e);
if(r1(R+518)){{goto L50ed7c;}}
}
B50ed50:L50ed50:{c.instructions+=5;NFSU2_TR(0x50ed50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50ed53:{NFSU2_TR(0x50ed53);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B50ed56:{NFSU2_TR(0x50ed56);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B50ed59:{NFSU2_TR(0x50ed59);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ed5b:{NFSU2_TR(0x50ed5b);
if(r1(R+518)){{goto L50ed7c;}}
}
B50ed5d:L50ed5d:{c.instructions+=6;NFSU2_TR(0x50ed5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ed60:{NFSU2_TR(0x50ed60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50ed62:{NFSU2_TR(0x50ed62);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed64:{NFSU2_TR(0x50ed64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed66:{NFSU2_TR(0x50ed66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed67:{NFSU2_TR(0x50ed67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ed6aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50ed6a:L50ed6a:{c.instructions+=4;NFSU2_TR(0x50ed6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed6b:{NFSU2_TR(0x50ed6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed6c:{NFSU2_TR(0x50ed6c);
w4(R+4,u32(0x8a2b68ull));
}
B50ed71:{NFSU2_TR(0x50ed71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ed76ull));
TAIL_STATIC(0x61ba50u,61b);
}
B50ed76:L50ed76:{c.instructions+=3;NFSU2_TR(0x50ed76);
__builtin_memmove((R+24),(R+0),4);
}
B50ed78:{NFSU2_TR(0x50ed78);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ed7a:{NFSU2_TR(0x50ed7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ed50u);}goto L50ed50;}}
}
B50ed7c:L50ed7c:{c.instructions+=6;NFSU2_TR(0x50ed7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ed7d:{NFSU2_TR(0x50ed7d);
__builtin_memmove((R+0),(R+24),4);
}
B50ed7f:{NFSU2_TR(0x50ed7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ed80:{NFSU2_TR(0x50ed80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50ed81:{NFSU2_TR(0x50ed81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50ed82:{NFSU2_TR(0x50ed82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ed90:L50ed90:{c.instructions+=6;NFSU2_TR(0x50ed90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed91:{NFSU2_TR(0x50ed91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed92:{NFSU2_TR(0x50ed92);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ed98:{NFSU2_TR(0x50ed98);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ed9a:{NFSU2_TR(0x50ed9a);
__builtin_memmove((R+4),(R+24),4);
}
B50ed9c:{NFSU2_TR(0x50ed9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eda1ull));
TAIL_STATIC(0x599610u,599);
}
B50eda1:L50eda1:{c.instructions+=4;NFSU2_TR(0x50eda1);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eda3:{NFSU2_TR(0x50eda3);
__builtin_memmove((R+4),(R+24),4);
}
B50eda5:{NFSU2_TR(0x50eda5);
__builtin_memmove((R+12),(R+0),1);
}
B50eda7:{NFSU2_TR(0x50eda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50edacull));
TAIL_STATIC(0x599610u,599);
}
B50edac:L50edac:{c.instructions+=4;NFSU2_TR(0x50edac);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50edae:{NFSU2_TR(0x50edae);
__builtin_memmove((R+4),(R+24),4);
}
B50edb0:{NFSU2_TR(0x50edb0);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B50edb2:{NFSU2_TR(0x50edb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50edb7ull));
TAIL_STATIC(0x599610u,599);
}
B50edb7:L50edb7:{c.instructions+=4;NFSU2_TR(0x50edb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50edb8:{NFSU2_TR(0x50edb8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50edba:{NFSU2_TR(0x50edba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50edbb:{NFSU2_TR(0x50edbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50edc0:L50edc0:{c.instructions+=3;NFSU2_TR(0x50edc0);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50edc2:{NFSU2_TR(0x50edc2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x940ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x940ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50edc8:{NFSU2_TR(0x50edc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50edcdull));
TAIL_STATIC(0x6102f0u,610);
}
B50edcd:L50edcd:{c.instructions+=5;NFSU2_TR(0x50edcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50edd0:{NFSU2_TR(0x50edd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B50edd3:{NFSU2_TR(0x50edd3);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50edd5:{NFSU2_TR(0x50edd5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B50edd8:{NFSU2_TR(0x50edd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ede0:L50ede0:{c.instructions+=4;NFSU2_TR(0x50ede0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ede4:{NFSU2_TR(0x50ede4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffc0ull))));
}
B50ede7:{NFSU2_TR(0x50ede7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50edea:{NFSU2_TR(0x50edea);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50ee3f;}}
}
B50edec:L50edec:{c.instructions+=1;NFSU2_TR(0x50edec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50ee44ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50edf3:L50edf3:{c.instructions+=3;NFSU2_TR(0x50edf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50edf7:{NFSU2_TR(0x50edf7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50edfa:{NFSU2_TR(0x50edfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50ee3f;}}
}
B50edfc:L50edfc:{c.instructions+=2;NFSU2_TR(0x50edfc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x50ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x50ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50edff:{NFSU2_TR(0x50edff);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50ee3f;}}
}
B50ee01:L50ee01:{c.instructions+=2;NFSU2_TR(0x50ee01);
w1(R+0,u8(0x1ull));
}
B50ee03:{NFSU2_TR(0x50ee03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ee06:L50ee06:{c.instructions+=3;NFSU2_TR(0x50ee06);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ee0a:{NFSU2_TR(0x50ee0a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x51ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50ee0d:{NFSU2_TR(0x50ee0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50ee3f;}}
}
B50ee0f:L50ee0f:{c.instructions+=2;NFSU2_TR(0x50ee0f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x54ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x54ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ee12:{NFSU2_TR(0x50ee12);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50ee3f;}}
}
B50ee14:L50ee14:{c.instructions+=2;NFSU2_TR(0x50ee14);
w1(R+0,u8(0x1ull));
}
B50ee16:{NFSU2_TR(0x50ee16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ee19:L50ee19:{c.instructions+=3;NFSU2_TR(0x50ee19);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ee1d:{NFSU2_TR(0x50ee1d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x55ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x55ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50ee20:{NFSU2_TR(0x50ee20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50ee3f;}}
}
B50ee22:L50ee22:{c.instructions+=2;NFSU2_TR(0x50ee22);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x58ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x58ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ee25:{NFSU2_TR(0x50ee25);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50ee3f;}}
}
B50ee27:L50ee27:{c.instructions+=2;NFSU2_TR(0x50ee27);
w1(R+0,u8(0x1ull));
}
B50ee29:{NFSU2_TR(0x50ee29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ee2c:L50ee2c:{c.instructions+=3;NFSU2_TR(0x50ee2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ee30:{NFSU2_TR(0x50ee30);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x59ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x59ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50ee33:{NFSU2_TR(0x50ee33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50ee3f;}}
}
B50ee35:L50ee35:{c.instructions+=2;NFSU2_TR(0x50ee35);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ee38:{NFSU2_TR(0x50ee38);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50ee3f;}}
}
B50ee3a:L50ee3a:{c.instructions+=2;NFSU2_TR(0x50ee3a);
w1(R+0,u8(0x1ull));
}
B50ee3c:{NFSU2_TR(0x50ee3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ee3f:L50ee3f:{c.instructions+=2;NFSU2_TR(0x50ee3f);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50ee41:{NFSU2_TR(0x50ee41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ee60:L50ee60:{c.instructions+=3;NFSU2_TR(0x50ee60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ee64:{NFSU2_TR(0x50ee64);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50ee67:{NFSU2_TR(0x50ee67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50ee6e;}}
}
B50ee69:L50ee69:{c.instructions+=2;NFSU2_TR(0x50ee69);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50ee6c:{NFSU2_TR(0x50ee6c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50ee73;}}
}
B50ee6e:L50ee6e:{c.instructions+=2;NFSU2_TR(0x50ee6e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50ee70:{NFSU2_TR(0x50ee70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ee73:L50ee73:{c.instructions+=3;NFSU2_TR(0x50ee73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ee74:{NFSU2_TR(0x50ee74);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x940ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x940ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ee7a:{NFSU2_TR(0x50ee7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ee7full));
TAIL_STATIC(0x6102f0u,610);
}
B50ee7f:L50ee7f:{c.instructions+=3;NFSU2_TR(0x50ee7f);
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
B50ee81:{NFSU2_TR(0x50ee81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50ee84:{NFSU2_TR(0x50ee84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ee90:L50ee90:{c.instructions+=5;NFSU2_TR(0x50ee90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ee94:{NFSU2_TR(0x50ee94);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xa9ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa9ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xa9ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ee99:{NFSU2_TR(0x50ee99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ee9a:{NFSU2_TR(0x50ee9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ee9b:{NFSU2_TR(0x50ee9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50eed4;}}
}
B50ee9d:L50ee9d:{c.instructions+=2;NFSU2_TR(0x50ee9d);
w4(R+24,u32(0x40ull));
}
B50eea2:{NFSU2_TR(0x50eea2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50eea8:L50eea8:{c.instructions+=3;NFSU2_TR(0x50eea8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eea9:{NFSU2_TR(0x50eea9);
__builtin_memmove((R+4),(R+28),4);
}
B50eeab:{NFSU2_TR(0x50eeab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eeb0ull));
TAIL_STATIC(0x6102f0u,610);
}
B50eeb0:L50eeb0:{c.instructions+=2;NFSU2_TR(0x50eeb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50eeb2:{NFSU2_TR(0x50eeb2);
if(r1(R+518)){{goto L50eec7;}}
}
B50eeb4:L50eeb4:{c.instructions+=4;NFSU2_TR(0x50eeb4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eeb6:{NFSU2_TR(0x50eeb6);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eebb:{NFSU2_TR(0x50eebb);
__builtin_memmove((R+4),(R+0),4);
}
B50eebd:{NFSU2_TR(0x50eebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eec2ull));
TAIL_STATIC(0x61b500u,61b);
}
B50eec2:L50eec2:{c.instructions+=2;NFSU2_TR(0x50eec2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50eec5:{NFSU2_TR(0x50eec5);
if(r1(R+518)){{goto L50ef01;}}
}
B50eec7:L50eec7:{c.instructions+=3;NFSU2_TR(0x50eec7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50eec8:{NFSU2_TR(0x50eec8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50eecb:{NFSU2_TR(0x50eecb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50eea8u);}goto L50eea8;}}
}
B50eecd:L50eecd:{c.instructions+=4;NFSU2_TR(0x50eecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50eece:{NFSU2_TR(0x50eece);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50eed0:{NFSU2_TR(0x50eed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50eed1:{NFSU2_TR(0x50eed1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50eed4:L50eed4:{c.instructions+=2;NFSU2_TR(0x50eed4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50eed7:{NFSU2_TR(0x50eed7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50eecdu);}goto L50eecd;}}
}
B50eed9:L50eed9:{c.instructions+=2;NFSU2_TR(0x50eed9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50eedc:{NFSU2_TR(0x50eedc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50eecdu);}goto L50eecd;}}
}
B50eede:L50eede:{c.instructions+=3;NFSU2_TR(0x50eede);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eedf:{NFSU2_TR(0x50eedf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x940ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x940ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50eee5:{NFSU2_TR(0x50eee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eeeaull));
TAIL_STATIC(0x6102f0u,610);
}
B50eeea:L50eeea:{c.instructions+=2;NFSU2_TR(0x50eeea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50eeec:{NFSU2_TR(0x50eeec);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50eecdu);}goto L50eecd;}}
}
B50eeee:L50eeee:{c.instructions+=4;NFSU2_TR(0x50eeee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eef0:{NFSU2_TR(0x50eef0);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eef5:{NFSU2_TR(0x50eef5);
__builtin_memmove((R+4),(R+0),4);
}
B50eef7:{NFSU2_TR(0x50eef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50eefcull));
TAIL_STATIC(0x61b500u,61b);
}
B50eefc:L50eefc:{c.instructions+=2;NFSU2_TR(0x50eefc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50eeff:{NFSU2_TR(0x50eeff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50eecdu);}goto L50eecd;}}
}
B50ef01:L50ef01:{c.instructions+=4;NFSU2_TR(0x50ef01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ef02:{NFSU2_TR(0x50ef02);
w1(R+0,u8(0x1ull));
}
B50ef04:{NFSU2_TR(0x50ef04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ef05:{NFSU2_TR(0x50ef05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ef10:L50ef10:{c.instructions+=5;NFSU2_TR(0x50ef10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ef11:{NFSU2_TR(0x50ef11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ef12:{NFSU2_TR(0x50ef12);
w4(R+24,u32(0x40ull));
}
B50ef17:{NFSU2_TR(0x50ef17);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ef1a:{NFSU2_TR(0x50ef1a);
__builtin_memmove((R+12),(R+12),4);
}
B50ef20:L50ef20:{c.instructions+=3;NFSU2_TR(0x50ef20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ef21:{NFSU2_TR(0x50ef21);
__builtin_memmove((R+4),(R+28),4);
}
B50ef23:{NFSU2_TR(0x50ef23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ef28ull));
TAIL_STATIC(0x6102f0u,610);
}
B50ef28:L50ef28:{c.instructions+=2;NFSU2_TR(0x50ef28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ef2a:{NFSU2_TR(0x50ef2a);
if(r1(R+518)){{goto L50ef3f;}}
}
B50ef2c:L50ef2c:{c.instructions+=4;NFSU2_TR(0x50ef2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ef2e:{NFSU2_TR(0x50ef2e);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ef33:{NFSU2_TR(0x50ef33);
__builtin_memmove((R+4),(R+0),4);
}
B50ef35:{NFSU2_TR(0x50ef35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ef3aull));
TAIL_STATIC(0x61b500u,61b);
}
B50ef3a:L50ef3a:{c.instructions+=2;NFSU2_TR(0x50ef3a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ef3d:{NFSU2_TR(0x50ef3d);
if(r1(R+518)){{goto L50ef4a;}}
}
B50ef3f:L50ef3f:{c.instructions+=3;NFSU2_TR(0x50ef3f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50ef40:{NFSU2_TR(0x50ef40);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ef43:{NFSU2_TR(0x50ef43);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ef20u);}goto L50ef20;}}
}
B50ef45:L50ef45:{c.instructions+=4;NFSU2_TR(0x50ef45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ef46:{NFSU2_TR(0x50ef46);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50ef48:{NFSU2_TR(0x50ef48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ef49:{NFSU2_TR(0x50ef49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ef4a:L50ef4a:{c.instructions+=4;NFSU2_TR(0x50ef4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ef4b:{NFSU2_TR(0x50ef4b);
w1(R+0,u8(0x1ull));
}
B50ef4d:{NFSU2_TR(0x50ef4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ef4e:{NFSU2_TR(0x50ef4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ef50:L50ef50:{c.instructions+=5;NFSU2_TR(0x50ef50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50ef54:{NFSU2_TR(0x50ef54);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffb3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50ef57:{NFSU2_TR(0x50ef57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50ef59:{NFSU2_TR(0x50ef59);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ef5c:{NFSU2_TR(0x50ef5c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50efa4;}}
}
B50ef5e:L50ef5e:{c.instructions+=2;NFSU2_TR(0x50ef5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50efc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B50ef65:{NFSU2_TR(0x50ef65);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50efb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50ef6c:L50ef6c:{c.instructions+=5;NFSU2_TR(0x50ef6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ef70:{NFSU2_TR(0x50ef70);
w4(R+0,u32(0x40ull));
}
B50ef75:{NFSU2_TR(0x50ef75);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ef77:{NFSU2_TR(0x50ef77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50ef7a:{NFSU2_TR(0x50ef7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ef7d:L50ef7d:{c.instructions+=5;NFSU2_TR(0x50ef7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ef81:{NFSU2_TR(0x50ef81);
w4(R+0,u32(0x41ull));
}
B50ef86:{NFSU2_TR(0x50ef86);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ef88:{NFSU2_TR(0x50ef88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50ef8b:{NFSU2_TR(0x50ef8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ef8e:L50ef8e:{c.instructions+=5;NFSU2_TR(0x50ef8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ef92:{NFSU2_TR(0x50ef92);
w4(R+0,u32(0x42ull));
}
B50ef97:{NFSU2_TR(0x50ef97);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ef99:{NFSU2_TR(0x50ef99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50ef9c:{NFSU2_TR(0x50ef9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ef9f:L50ef9f:{c.instructions+=1;NFSU2_TR(0x50ef9f);
w4(R+0,u32(0x43ull));
}
B50efa4:L50efa4:{c.instructions+=4;NFSU2_TR(0x50efa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50efa8:{NFSU2_TR(0x50efa8);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50efaa:{NFSU2_TR(0x50efaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50efad:{NFSU2_TR(0x50efad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50efd0:L50efd0:{c.instructions+=4;NFSU2_TR(0x50efd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50efd1:{NFSU2_TR(0x50efd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50efd5:{NFSU2_TR(0x50efd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50efd8:{NFSU2_TR(0x50efd8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50efdf;}}
}
B50efda:L50efda:{c.instructions+=2;NFSU2_TR(0x50efda);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50efdd:{NFSU2_TR(0x50efdd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50efe5;}}
}
B50efdf:L50efdf:{c.instructions+=3;NFSU2_TR(0x50efdf);
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
B50efe1:{NFSU2_TR(0x50efe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50efe2:{NFSU2_TR(0x50efe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50efe5:L50efe5:{c.instructions+=7;NFSU2_TR(0x50efe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50efe6:{NFSU2_TR(0x50efe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50efe7:{NFSU2_TR(0x50efe7);
w4(R+24,u32(0x40ull));
}
B50efec:{NFSU2_TR(0x50efec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50eff2:{NFSU2_TR(0x50eff2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50eff3:{NFSU2_TR(0x50eff3);
__builtin_memmove((R+4),(R+28),4);
}
B50eff5:{NFSU2_TR(0x50eff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50effaull));
TAIL_STATIC(0x6102f0u,610);
}
B50effa:L50effa:{c.instructions+=2;NFSU2_TR(0x50effa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50effc:{NFSU2_TR(0x50effc);
if(r1(R+518)){TAIL_STATIC(0x50f011u,50f);}
}
B50effe:L50effe:{c.instructions+=1;NFSU2_TR(0x50effe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x50f000u,50f);
}
XIT:NFSU2_TR_EXIT(0x50e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
