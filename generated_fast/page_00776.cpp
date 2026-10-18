#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cc(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4df(u8* __restrict R,Cpu& c);
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 body_4e9(u8* __restrict R,Cpu& c);
u32 body_4ea(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x776,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x776,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_776(u8* __restrict R,Cpu& c);
u32 page_776(Cpu& c){return body_776(c.regs.data(),c);}
__attribute__((noinline)) u32 body_776(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x776004:goto L776004;
case 0x776007:c.instructions+=1;goto B776007;
case 0x776008:goto L776008;
case 0x77600a:c.instructions+=4;goto B77600a;
case 0x77600f:c.instructions+=3;goto B77600f;
case 0x776012:c.instructions+=2;goto B776012;
case 0x776013:c.instructions+=1;goto B776013;
case 0x776018:goto L776018;
case 0x77601b:c.instructions+=1;goto B77601b;
case 0x77601c:goto L77601c;
case 0x77601e:c.instructions+=4;goto B77601e;
case 0x776023:c.instructions+=3;goto B776023;
case 0x776026:c.instructions+=2;goto B776026;
case 0x776027:c.instructions+=1;goto B776027;
case 0x77602c:goto L77602c;
case 0x77602f:c.instructions+=1;goto B77602f;
case 0x776030:goto L776030;
case 0x776035:c.instructions+=1;goto B776035;
case 0x776040:goto L776040;
case 0x776043:c.instructions+=1;goto B776043;
case 0x776048:goto L776048;
case 0x77604b:c.instructions+=2;goto B77604b;
case 0x77604e:c.instructions+=1;goto B77604e;
case 0x776053:goto L776053;
case 0x776056:c.instructions+=2;goto B776056;
case 0x776059:c.instructions+=1;goto B776059;
case 0x77605e:goto L77605e;
case 0x776063:c.instructions+=1;goto B776063;
case 0x776070:goto L776070;
case 0x776073:c.instructions+=1;goto B776073;
case 0x776078:goto L776078;
case 0x77607b:c.instructions+=2;goto B77607b;
case 0x776081:c.instructions+=1;goto B776081;
case 0x776086:goto L776086;
case 0x77608b:c.instructions+=1;goto B77608b;
case 0x776090:goto L776090;
case 0x776093:c.instructions+=1;goto B776093;
case 0x776098:goto L776098;
case 0x77609b:c.instructions+=2;goto B77609b;
case 0x77609e:c.instructions+=1;goto B77609e;
case 0x7760a3:goto L7760a3;
case 0x7760a6:c.instructions+=2;goto B7760a6;
case 0x7760ac:c.instructions+=1;goto B7760ac;
case 0x7760b1:goto L7760b1;
case 0x7760b3:c.instructions+=4;goto B7760b3;
case 0x7760b8:c.instructions+=3;goto B7760b8;
case 0x7760bb:c.instructions+=2;goto B7760bb;
case 0x7760bc:c.instructions+=1;goto B7760bc;
case 0x7760c1:goto L7760c1;
case 0x7760c4:c.instructions+=1;goto B7760c4;
case 0x7760c5:goto L7760c5;
case 0x7760c7:c.instructions+=4;goto B7760c7;
case 0x7760cc:c.instructions+=3;goto B7760cc;
case 0x7760cf:c.instructions+=2;goto B7760cf;
case 0x7760d0:c.instructions+=1;goto B7760d0;
case 0x7760d5:goto L7760d5;
case 0x7760d8:c.instructions+=1;goto B7760d8;
case 0x7760d9:goto L7760d9;
case 0x7760db:c.instructions+=4;goto B7760db;
case 0x7760e0:c.instructions+=3;goto B7760e0;
case 0x7760e3:c.instructions+=2;goto B7760e3;
case 0x7760e4:c.instructions+=1;goto B7760e4;
case 0x7760e9:goto L7760e9;
case 0x7760ec:c.instructions+=1;goto B7760ec;
case 0x7760ed:goto L7760ed;
case 0x7760ef:c.instructions+=4;goto B7760ef;
case 0x7760f4:c.instructions+=3;goto B7760f4;
case 0x7760f7:c.instructions+=2;goto B7760f7;
case 0x7760f8:c.instructions+=1;goto B7760f8;
case 0x7760fd:goto L7760fd;
case 0x776100:c.instructions+=1;goto B776100;
case 0x776101:goto L776101;
case 0x776106:c.instructions+=1;goto B776106;
case 0x776110:goto L776110;
case 0x776112:c.instructions+=4;goto B776112;
case 0x776117:c.instructions+=3;goto B776117;
case 0x77611a:c.instructions+=2;goto B77611a;
case 0x77611b:c.instructions+=1;goto B77611b;
case 0x776120:goto L776120;
case 0x776123:c.instructions+=1;goto B776123;
case 0x776124:goto L776124;
case 0x776129:c.instructions+=1;goto B776129;
case 0x776130:goto L776130;
case 0x776132:c.instructions+=4;goto B776132;
case 0x776137:c.instructions+=3;goto B776137;
case 0x77613a:c.instructions+=2;goto B77613a;
case 0x77613b:c.instructions+=1;goto B77613b;
case 0x776140:goto L776140;
case 0x776143:c.instructions+=1;goto B776143;
case 0x776144:goto L776144;
case 0x776149:c.instructions+=1;goto B776149;
case 0x776150:goto L776150;
case 0x776152:c.instructions+=4;goto B776152;
case 0x776157:c.instructions+=3;goto B776157;
case 0x77615a:c.instructions+=2;goto B77615a;
case 0x77615b:c.instructions+=1;goto B77615b;
case 0x776160:goto L776160;
case 0x776163:c.instructions+=1;goto B776163;
case 0x776164:goto L776164;
case 0x776169:c.instructions+=1;goto B776169;
case 0x776170:goto L776170;
case 0x776173:c.instructions+=1;goto B776173;
case 0x776178:goto L776178;
case 0x77617d:c.instructions+=1;goto B77617d;
case 0x776190:goto L776190;
case 0x776193:c.instructions+=2;goto B776193;
case 0x776196:c.instructions+=1;goto B776196;
case 0x77619b:goto L77619b;
case 0x7761a0:c.instructions+=1;goto B7761a0;
case 0x7761b0:goto L7761b0;
case 0x7761b3:c.instructions+=2;goto B7761b3;
case 0x7761b4:c.instructions+=1;goto B7761b4;
case 0x7761b9:goto L7761b9;
case 0x7761ba:c.instructions+=1;goto B7761ba;
case 0x7761bb:goto L7761bb;
case 0x7761c0:c.instructions+=1;goto B7761c0;
case 0x7761d0:goto L7761d0;
case 0x7761d3:c.instructions+=1;goto B7761d3;
case 0x7761d8:goto L7761d8;
case 0x7761dd:c.instructions+=1;goto B7761dd;
case 0x7761f0:goto L7761f0;
case 0x7761f2:c.instructions+=4;goto B7761f2;
case 0x7761f7:c.instructions+=3;goto B7761f7;
case 0x7761fa:c.instructions+=2;goto B7761fa;
case 0x7761fb:c.instructions+=1;goto B7761fb;
case 0x776200:goto L776200;
case 0x776203:c.instructions+=1;goto B776203;
case 0x776204:goto L776204;
case 0x776209:c.instructions+=1;goto B776209;
case 0x776210:goto L776210;
case 0x776213:c.instructions+=1;goto B776213;
case 0x776218:goto L776218;
case 0x77621b:c.instructions+=2;goto B77621b;
case 0x77621e:c.instructions+=1;goto B77621e;
case 0x776223:goto L776223;
case 0x776226:c.instructions+=2;goto B776226;
case 0x776229:c.instructions+=1;goto B776229;
case 0x77622e:goto L77622e;
case 0x776231:c.instructions+=2;goto B776231;
case 0x776234:c.instructions+=1;goto B776234;
case 0x776239:goto L776239;
case 0x77623e:c.instructions+=1;goto B77623e;
case 0x776250:goto L776250;
case 0x776253:c.instructions+=1;goto B776253;
case 0x776258:goto L776258;
case 0x77625b:c.instructions+=2;goto B77625b;
case 0x77625e:c.instructions+=1;goto B77625e;
case 0x776263:goto L776263;
case 0x776266:c.instructions+=2;goto B776266;
case 0x776269:c.instructions+=1;goto B776269;
case 0x77626e:goto L77626e;
case 0x776273:c.instructions+=1;goto B776273;
case 0x776280:goto L776280;
case 0x776282:c.instructions+=4;goto B776282;
case 0x776287:c.instructions+=3;goto B776287;
case 0x77628a:c.instructions+=2;goto B77628a;
case 0x77628b:c.instructions+=1;goto B77628b;
case 0x776290:goto L776290;
case 0x776293:c.instructions+=1;goto B776293;
case 0x776294:goto L776294;
case 0x776299:c.instructions+=1;goto B776299;
case 0x7762a0:goto L7762a0;
case 0x7762a2:c.instructions+=4;goto B7762a2;
case 0x7762a7:c.instructions+=3;goto B7762a7;
case 0x7762aa:c.instructions+=2;goto B7762aa;
case 0x7762ab:c.instructions+=1;goto B7762ab;
case 0x7762b0:goto L7762b0;
case 0x7762b3:c.instructions+=1;goto B7762b3;
case 0x7762b4:goto L7762b4;
case 0x7762b9:c.instructions+=1;goto B7762b9;
case 0x7762c0:goto L7762c0;
case 0x7762c2:c.instructions+=4;goto B7762c2;
case 0x7762c7:c.instructions+=3;goto B7762c7;
case 0x7762ca:c.instructions+=2;goto B7762ca;
case 0x7762cb:c.instructions+=1;goto B7762cb;
case 0x7762d0:goto L7762d0;
case 0x7762d3:c.instructions+=1;goto B7762d3;
case 0x7762d4:goto L7762d4;
case 0x7762d9:c.instructions+=1;goto B7762d9;
case 0x7762e0:goto L7762e0;
case 0x7762e2:c.instructions+=4;goto B7762e2;
case 0x7762e7:c.instructions+=3;goto B7762e7;
case 0x7762ea:c.instructions+=2;goto B7762ea;
case 0x7762eb:c.instructions+=1;goto B7762eb;
case 0x7762f0:goto L7762f0;
case 0x7762f3:c.instructions+=1;goto B7762f3;
case 0x7762f4:goto L7762f4;
case 0x7762f9:c.instructions+=1;goto B7762f9;
case 0x776300:goto L776300;
case 0x776302:c.instructions+=4;goto B776302;
case 0x776307:c.instructions+=3;goto B776307;
case 0x77630a:c.instructions+=2;goto B77630a;
case 0x77630b:c.instructions+=1;goto B77630b;
case 0x776310:goto L776310;
case 0x776313:c.instructions+=1;goto B776313;
case 0x776314:goto L776314;
case 0x776319:c.instructions+=1;goto B776319;
case 0x776320:goto L776320;
case 0x776323:c.instructions+=1;goto B776323;
case 0x776328:goto L776328;
case 0x77632b:c.instructions+=2;goto B77632b;
case 0x77632e:c.instructions+=1;goto B77632e;
case 0x776333:goto L776333;
case 0x776335:c.instructions+=4;goto B776335;
case 0x77633a:c.instructions+=3;goto B77633a;
case 0x77633d:c.instructions+=2;goto B77633d;
case 0x77633e:c.instructions+=1;goto B77633e;
case 0x776343:goto L776343;
case 0x776346:c.instructions+=1;goto B776346;
case 0x776347:goto L776347;
case 0x776349:c.instructions+=4;goto B776349;
case 0x77634e:c.instructions+=3;goto B77634e;
case 0x776351:c.instructions+=2;goto B776351;
case 0x776352:c.instructions+=1;goto B776352;
case 0x776357:goto L776357;
case 0x77635a:c.instructions+=1;goto B77635a;
case 0x77635b:goto L77635b;
case 0x77635d:c.instructions+=4;goto B77635d;
case 0x776362:c.instructions+=3;goto B776362;
case 0x776365:c.instructions+=2;goto B776365;
case 0x776366:c.instructions+=1;goto B776366;
case 0x77636b:goto L77636b;
case 0x77636e:c.instructions+=1;goto B77636e;
case 0x77636f:goto L77636f;
case 0x776371:c.instructions+=4;goto B776371;
case 0x776376:c.instructions+=3;goto B776376;
case 0x776379:c.instructions+=2;goto B776379;
case 0x77637a:c.instructions+=1;goto B77637a;
case 0x77637f:goto L77637f;
case 0x776382:c.instructions+=1;goto B776382;
case 0x776383:goto L776383;
case 0x776385:c.instructions+=4;goto B776385;
case 0x77638a:c.instructions+=3;goto B77638a;
case 0x77638d:c.instructions+=2;goto B77638d;
case 0x77638e:c.instructions+=1;goto B77638e;
case 0x776393:goto L776393;
case 0x776396:c.instructions+=1;goto B776396;
case 0x776397:goto L776397;
case 0x77639c:c.instructions+=1;goto B77639c;
case 0x7763b0:goto L7763b0;
case 0x7763b3:c.instructions+=1;goto B7763b3;
case 0x7763b8:goto L7763b8;
case 0x7763bb:c.instructions+=2;goto B7763bb;
case 0x7763c1:c.instructions+=1;goto B7763c1;
case 0x7763c6:goto L7763c6;
case 0x7763c9:c.instructions+=2;goto B7763c9;
case 0x7763cf:c.instructions+=1;goto B7763cf;
case 0x7763d4:goto L7763d4;
case 0x7763d7:c.instructions+=2;goto B7763d7;
case 0x7763dd:c.instructions+=1;goto B7763dd;
case 0x7763e2:goto L7763e2;
case 0x7763e7:c.instructions+=1;goto B7763e7;
case 0x7763f0:goto L7763f0;
case 0x7763f3:c.instructions+=1;goto B7763f3;
case 0x7763f8:goto L7763f8;
case 0x7763fb:c.instructions+=2;goto B7763fb;
case 0x7763fe:c.instructions+=1;goto B7763fe;
case 0x776403:goto L776403;
case 0x776408:c.instructions+=1;goto B776408;
case 0x776410:goto L776410;
case 0x776413:c.instructions+=1;goto B776413;
case 0x776418:goto L776418;
case 0x77641d:c.instructions+=1;goto B77641d;
case 0x776430:goto L776430;
case 0x776432:c.instructions+=4;goto B776432;
case 0x776437:c.instructions+=3;goto B776437;
case 0x77643a:c.instructions+=2;goto B77643a;
case 0x77643b:c.instructions+=1;goto B77643b;
case 0x776440:goto L776440;
case 0x776443:c.instructions+=1;goto B776443;
case 0x776444:goto L776444;
case 0x776449:c.instructions+=1;goto B776449;
case 0x776450:goto L776450;
case 0x776452:c.instructions+=4;goto B776452;
case 0x776457:c.instructions+=3;goto B776457;
case 0x77645a:c.instructions+=2;goto B77645a;
case 0x77645b:c.instructions+=1;goto B77645b;
case 0x776460:goto L776460;
case 0x776463:c.instructions+=1;goto B776463;
case 0x776464:goto L776464;
case 0x776469:c.instructions+=1;goto B776469;
case 0x776470:goto L776470;
case 0x776476:c.instructions+=1;goto B776476;
case 0x77647b:goto L77647b;
case 0x77647d:c.instructions+=4;goto B77647d;
case 0x776482:c.instructions+=3;goto B776482;
case 0x776488:c.instructions+=2;goto B776488;
case 0x776489:c.instructions+=1;goto B776489;
case 0x77648e:goto L77648e;
case 0x776491:c.instructions+=1;goto B776491;
case 0x776492:goto L776492;
case 0x776497:c.instructions+=1;goto B776497;
case 0x7764a0:goto L7764a0;
case 0x7764a2:c.instructions+=4;goto B7764a2;
case 0x7764a7:c.instructions+=3;goto B7764a7;
case 0x7764aa:c.instructions+=2;goto B7764aa;
case 0x7764ab:c.instructions+=1;goto B7764ab;
case 0x7764b0:goto L7764b0;
case 0x7764b3:c.instructions+=1;goto B7764b3;
case 0x7764b4:goto L7764b4;
case 0x7764b9:c.instructions+=1;goto B7764b9;
case 0x7764c0:goto L7764c0;
case 0x7764c2:c.instructions+=4;goto B7764c2;
case 0x7764c7:c.instructions+=3;goto B7764c7;
case 0x7764ca:c.instructions+=2;goto B7764ca;
case 0x7764cb:c.instructions+=1;goto B7764cb;
case 0x7764d0:goto L7764d0;
case 0x7764d3:c.instructions+=1;goto B7764d3;
case 0x7764d4:goto L7764d4;
case 0x7764d9:c.instructions+=1;goto B7764d9;
case 0x7764e0:goto L7764e0;
case 0x7764e2:c.instructions+=4;goto B7764e2;
case 0x7764e7:c.instructions+=3;goto B7764e7;
case 0x7764ea:c.instructions+=2;goto B7764ea;
case 0x7764eb:c.instructions+=1;goto B7764eb;
case 0x7764f0:goto L7764f0;
case 0x7764f3:c.instructions+=1;goto B7764f3;
case 0x7764f4:goto L7764f4;
case 0x7764f9:c.instructions+=1;goto B7764f9;
case 0x776500:goto L776500;
case 0x776502:c.instructions+=4;goto B776502;
case 0x776507:c.instructions+=3;goto B776507;
case 0x77650a:c.instructions+=2;goto B77650a;
case 0x77650b:c.instructions+=1;goto B77650b;
case 0x776510:goto L776510;
case 0x776513:c.instructions+=1;goto B776513;
case 0x776514:goto L776514;
case 0x776519:c.instructions+=1;goto B776519;
case 0x776520:goto L776520;
case 0x776526:c.instructions+=1;goto B776526;
case 0x77652b:goto L77652b;
case 0x776531:c.instructions+=2;goto B776531;
case 0x776534:c.instructions+=1;goto B776534;
case 0x776539:goto L776539;
case 0x77653f:c.instructions+=2;goto B77653f;
case 0x776545:c.instructions+=1;goto B776545;
case 0x77654a:goto L77654a;
case 0x776550:c.instructions+=1;goto B776550;
case 0x776555:goto L776555;
case 0x77655b:c.instructions+=1;goto B77655b;
case 0x776560:goto L776560;
case 0x776565:c.instructions+=1;goto B776565;
case 0x77656e:goto L77656e;
case 0x776570:goto L776570;
case 0x776572:c.instructions+=4;goto B776572;
case 0x776577:c.instructions+=3;goto B776577;
case 0x77657a:c.instructions+=2;goto B77657a;
case 0x77657b:c.instructions+=1;goto B77657b;
case 0x776580:goto L776580;
case 0x776583:c.instructions+=1;goto B776583;
case 0x776584:goto L776584;
case 0x776589:c.instructions+=1;goto B776589;
case 0x776590:goto L776590;
case 0x776592:c.instructions+=4;goto B776592;
case 0x776597:c.instructions+=3;goto B776597;
case 0x77659a:c.instructions+=2;goto B77659a;
case 0x77659b:c.instructions+=1;goto B77659b;
case 0x7765a0:goto L7765a0;
case 0x7765a3:c.instructions+=1;goto B7765a3;
case 0x7765a4:goto L7765a4;
case 0x7765a9:c.instructions+=1;goto B7765a9;
case 0x7765b0:goto L7765b0;
case 0x7765b2:c.instructions+=4;goto B7765b2;
case 0x7765b7:c.instructions+=3;goto B7765b7;
case 0x7765ba:c.instructions+=2;goto B7765ba;
case 0x7765bb:c.instructions+=1;goto B7765bb;
case 0x7765c0:goto L7765c0;
case 0x7765c3:c.instructions+=1;goto B7765c3;
case 0x7765c4:goto L7765c4;
case 0x7765c9:c.instructions+=1;goto B7765c9;
case 0x7765d0:goto L7765d0;
case 0x7765d2:c.instructions+=4;goto B7765d2;
case 0x7765d7:c.instructions+=3;goto B7765d7;
case 0x7765da:c.instructions+=2;goto B7765da;
case 0x7765db:c.instructions+=1;goto B7765db;
case 0x7765e0:goto L7765e0;
case 0x7765e3:c.instructions+=1;goto B7765e3;
case 0x7765e4:goto L7765e4;
case 0x7765e9:c.instructions+=1;goto B7765e9;
case 0x7765f0:goto L7765f0;
case 0x7765f2:c.instructions+=4;goto B7765f2;
case 0x7765f7:c.instructions+=3;goto B7765f7;
case 0x7765fa:c.instructions+=2;goto B7765fa;
case 0x7765fb:c.instructions+=1;goto B7765fb;
case 0x776600:goto L776600;
case 0x776603:c.instructions+=1;goto B776603;
case 0x776604:goto L776604;
case 0x776609:c.instructions+=1;goto B776609;
case 0x776610:goto L776610;
case 0x776613:c.instructions+=1;goto B776613;
case 0x776618:goto L776618;
case 0x77661b:c.instructions+=2;goto B77661b;
case 0x77661e:c.instructions+=1;goto B77661e;
case 0x776623:goto L776623;
case 0x776626:c.instructions+=2;goto B776626;
case 0x77662c:c.instructions+=1;goto B77662c;
case 0x776631:goto L776631;
case 0x776634:c.instructions+=2;goto B776634;
case 0x77663a:c.instructions+=1;goto B77663a;
case 0x77663f:goto L77663f;
case 0x776644:c.instructions+=1;goto B776644;
case 0x776650:goto L776650;
case 0x776652:c.instructions+=4;goto B776652;
case 0x776657:c.instructions+=3;goto B776657;
case 0x77665a:c.instructions+=2;goto B77665a;
case 0x77665b:c.instructions+=1;goto B77665b;
case 0x776660:goto L776660;
case 0x776663:c.instructions+=1;goto B776663;
case 0x776664:goto L776664;
case 0x776669:c.instructions+=1;goto B776669;
case 0x776670:goto L776670;
case 0x776672:c.instructions+=4;goto B776672;
case 0x776677:c.instructions+=3;goto B776677;
case 0x77667a:c.instructions+=2;goto B77667a;
case 0x77667b:c.instructions+=1;goto B77667b;
case 0x776680:goto L776680;
case 0x776683:c.instructions+=1;goto B776683;
case 0x776684:goto L776684;
case 0x776689:c.instructions+=1;goto B776689;
case 0x776690:goto L776690;
case 0x776692:c.instructions+=4;goto B776692;
case 0x776697:c.instructions+=3;goto B776697;
case 0x77669a:c.instructions+=2;goto B77669a;
case 0x77669b:c.instructions+=1;goto B77669b;
case 0x7766a0:goto L7766a0;
case 0x7766a3:c.instructions+=1;goto B7766a3;
case 0x7766a4:goto L7766a4;
case 0x7766a9:c.instructions+=1;goto B7766a9;
case 0x7766b0:goto L7766b0;
case 0x7766b2:c.instructions+=4;goto B7766b2;
case 0x7766b7:c.instructions+=3;goto B7766b7;
case 0x7766ba:c.instructions+=2;goto B7766ba;
case 0x7766bb:c.instructions+=1;goto B7766bb;
case 0x7766c0:goto L7766c0;
case 0x7766c3:c.instructions+=1;goto B7766c3;
case 0x7766c4:goto L7766c4;
case 0x7766c9:c.instructions+=1;goto B7766c9;
case 0x7766d0:goto L7766d0;
case 0x7766d3:c.instructions+=1;goto B7766d3;
case 0x7766d8:goto L7766d8;
case 0x7766db:c.instructions+=2;goto B7766db;
case 0x7766de:c.instructions+=1;goto B7766de;
case 0x7766e3:goto L7766e3;
case 0x7766e6:c.instructions+=2;goto B7766e6;
case 0x7766ec:c.instructions+=1;goto B7766ec;
case 0x7766f1:goto L7766f1;
case 0x7766f4:c.instructions+=2;goto B7766f4;
case 0x7766fa:c.instructions+=1;goto B7766fa;
case 0x7766ff:goto L7766ff;
case 0x776704:c.instructions+=1;goto B776704;
case 0x776710:goto L776710;
case 0x776713:c.instructions+=1;goto B776713;
case 0x776718:goto L776718;
case 0x77671d:c.instructions+=1;goto B77671d;
case 0x776730:goto L776730;
case 0x776732:c.instructions+=4;goto B776732;
case 0x776737:c.instructions+=3;goto B776737;
case 0x77673a:c.instructions+=2;goto B77673a;
case 0x77673b:c.instructions+=1;goto B77673b;
case 0x776740:goto L776740;
case 0x776743:c.instructions+=1;goto B776743;
case 0x776744:goto L776744;
case 0x776749:c.instructions+=1;goto B776749;
case 0x776750:goto L776750;
case 0x776752:c.instructions+=4;goto B776752;
case 0x776757:c.instructions+=3;goto B776757;
case 0x77675a:c.instructions+=2;goto B77675a;
case 0x77675b:c.instructions+=1;goto B77675b;
case 0x776760:goto L776760;
case 0x776763:c.instructions+=1;goto B776763;
case 0x776764:goto L776764;
case 0x776769:c.instructions+=1;goto B776769;
case 0x776770:goto L776770;
case 0x776772:c.instructions+=4;goto B776772;
case 0x776777:c.instructions+=3;goto B776777;
case 0x77677a:c.instructions+=2;goto B77677a;
case 0x77677b:c.instructions+=1;goto B77677b;
case 0x776780:goto L776780;
case 0x776783:c.instructions+=1;goto B776783;
case 0x776784:goto L776784;
case 0x776789:c.instructions+=1;goto B776789;
case 0x776790:goto L776790;
case 0x776792:c.instructions+=4;goto B776792;
case 0x776797:c.instructions+=3;goto B776797;
case 0x77679a:c.instructions+=2;goto B77679a;
case 0x77679b:c.instructions+=1;goto B77679b;
case 0x7767a0:goto L7767a0;
case 0x7767a3:c.instructions+=1;goto B7767a3;
case 0x7767a4:goto L7767a4;
case 0x7767a9:c.instructions+=1;goto B7767a9;
case 0x7767b0:goto L7767b0;
case 0x7767b3:c.instructions+=1;goto B7767b3;
case 0x7767b8:goto L7767b8;
case 0x7767bb:c.instructions+=2;goto B7767bb;
case 0x7767be:c.instructions+=1;goto B7767be;
case 0x7767c3:goto L7767c3;
case 0x7767c8:c.instructions+=1;goto B7767c8;
case 0x7767d0:goto L7767d0;
case 0x7767d3:c.instructions+=2;goto B7767d3;
case 0x7767d6:c.instructions+=1;goto B7767d6;
case 0x7767db:goto L7767db;
case 0x7767de:c.instructions+=2;goto B7767de;
case 0x7767e1:c.instructions+=1;goto B7767e1;
case 0x7767e6:goto L7767e6;
case 0x7767eb:c.instructions+=1;goto B7767eb;
case 0x7767f0:goto L7767f0;
case 0x7767f2:c.instructions+=4;goto B7767f2;
case 0x7767f7:c.instructions+=3;goto B7767f7;
case 0x7767fa:c.instructions+=2;goto B7767fa;
case 0x7767fb:c.instructions+=1;goto B7767fb;
case 0x776800:goto L776800;
case 0x776803:c.instructions+=1;goto B776803;
case 0x776804:goto L776804;
case 0x776809:c.instructions+=1;goto B776809;
case 0x776810:goto L776810;
case 0x776813:c.instructions+=1;goto B776813;
case 0x776818:goto L776818;
case 0x77681b:c.instructions+=2;goto B77681b;
case 0x776821:c.instructions+=1;goto B776821;
case 0x776826:goto L776826;
case 0x77682b:c.instructions+=1;goto B77682b;
case 0x776830:goto L776830;
case 0x776832:c.instructions+=4;goto B776832;
case 0x776837:c.instructions+=3;goto B776837;
case 0x77683a:c.instructions+=2;goto B77683a;
case 0x77683b:c.instructions+=1;goto B77683b;
case 0x776840:goto L776840;
case 0x776843:c.instructions+=1;goto B776843;
case 0x776844:goto L776844;
case 0x776849:c.instructions+=1;goto B776849;
case 0x776850:goto L776850;
case 0x776852:c.instructions+=4;goto B776852;
case 0x776857:c.instructions+=3;goto B776857;
case 0x77685a:c.instructions+=2;goto B77685a;
case 0x77685b:c.instructions+=1;goto B77685b;
case 0x776860:goto L776860;
case 0x776863:c.instructions+=1;goto B776863;
case 0x776864:goto L776864;
case 0x776869:c.instructions+=1;goto B776869;
case 0x776870:goto L776870;
case 0x776872:c.instructions+=4;goto B776872;
case 0x776877:c.instructions+=3;goto B776877;
case 0x77687a:c.instructions+=2;goto B77687a;
case 0x77687b:c.instructions+=1;goto B77687b;
case 0x776880:goto L776880;
case 0x776883:c.instructions+=1;goto B776883;
case 0x776884:goto L776884;
case 0x776889:c.instructions+=1;goto B776889;
case 0x776890:goto L776890;
case 0x776892:c.instructions+=4;goto B776892;
case 0x776897:c.instructions+=3;goto B776897;
case 0x77689a:c.instructions+=2;goto B77689a;
case 0x77689b:c.instructions+=1;goto B77689b;
case 0x7768a0:goto L7768a0;
case 0x7768a3:c.instructions+=1;goto B7768a3;
case 0x7768a4:goto L7768a4;
case 0x7768a9:c.instructions+=1;goto B7768a9;
case 0x7768b0:goto L7768b0;
case 0x7768b2:c.instructions+=4;goto B7768b2;
case 0x7768b7:c.instructions+=3;goto B7768b7;
case 0x7768ba:c.instructions+=2;goto B7768ba;
case 0x7768bb:c.instructions+=1;goto B7768bb;
case 0x7768c0:goto L7768c0;
case 0x7768c3:c.instructions+=1;goto B7768c3;
case 0x7768c4:goto L7768c4;
case 0x7768c9:c.instructions+=1;goto B7768c9;
case 0x7768d0:goto L7768d0;
case 0x7768d2:c.instructions+=4;goto B7768d2;
case 0x7768d7:c.instructions+=3;goto B7768d7;
case 0x7768da:c.instructions+=2;goto B7768da;
case 0x7768db:c.instructions+=1;goto B7768db;
case 0x7768e0:goto L7768e0;
case 0x7768e3:c.instructions+=1;goto B7768e3;
case 0x7768e4:goto L7768e4;
case 0x7768e9:c.instructions+=1;goto B7768e9;
case 0x7768f0:goto L7768f0;
case 0x7768f3:c.instructions+=1;goto B7768f3;
case 0x7768f8:goto L7768f8;
case 0x7768fd:c.instructions+=1;goto B7768fd;
case 0x776910:goto L776910;
case 0x776913:c.instructions+=1;goto B776913;
case 0x776918:goto L776918;
case 0x77691d:c.instructions+=1;goto B77691d;
case 0x776930:goto L776930;
case 0x776933:c.instructions+=1;goto B776933;
case 0x776938:goto L776938;
case 0x77693d:c.instructions+=1;goto B77693d;
case 0x776950:goto L776950;
case 0x776953:c.instructions+=1;goto B776953;
case 0x776958:goto L776958;
case 0x77695d:c.instructions+=1;goto B77695d;
case 0x776970:goto L776970;
case 0x776973:c.instructions+=1;goto B776973;
case 0x776978:goto L776978;
case 0x77697b:c.instructions+=2;goto B77697b;
case 0x77697e:c.instructions+=1;goto B77697e;
case 0x776983:goto L776983;
case 0x776988:c.instructions+=1;goto B776988;
case 0x776990:goto L776990;
case 0x776993:c.instructions+=2;goto B776993;
case 0x776996:c.instructions+=1;goto B776996;
case 0x77699b:goto L77699b;
case 0x77699e:c.instructions+=2;goto B77699e;
case 0x7769a1:c.instructions+=1;goto B7769a1;
case 0x7769a6:goto L7769a6;
case 0x7769ab:c.instructions+=1;goto B7769ab;
case 0x7769b0:goto L7769b0;
case 0x7769b4:c.instructions+=1;goto B7769b4;
case 0x7769ba:goto L7769ba;
case 0x7769bd:c.instructions+=3;goto B7769bd;
case 0x7769c0:c.instructions+=2;goto B7769c0;
case 0x7769c3:c.instructions+=1;goto B7769c3;
case 0x7769c8:goto L7769c8;
case 0x7769cf:goto L7769cf;
case 0x7769d2:c.instructions+=1;goto B7769d2;
case 0x7769d7:goto L7769d7;
case 0x7769dc:c.instructions+=1;goto B7769dc;
case 0x7769f0:goto L7769f0;
case 0x7769f2:c.instructions+=4;goto B7769f2;
case 0x7769f7:c.instructions+=3;goto B7769f7;
case 0x7769fa:c.instructions+=2;goto B7769fa;
case 0x7769fb:c.instructions+=1;goto B7769fb;
case 0x776a00:goto L776a00;
case 0x776a03:c.instructions+=1;goto B776a03;
case 0x776a04:goto L776a04;
case 0x776a06:c.instructions+=4;goto B776a06;
case 0x776a0b:c.instructions+=3;goto B776a0b;
case 0x776a0e:c.instructions+=2;goto B776a0e;
case 0x776a0f:c.instructions+=1;goto B776a0f;
case 0x776a14:goto L776a14;
case 0x776a17:c.instructions+=1;goto B776a17;
case 0x776a18:goto L776a18;
case 0x776a1a:c.instructions+=4;goto B776a1a;
case 0x776a1f:c.instructions+=3;goto B776a1f;
case 0x776a22:c.instructions+=2;goto B776a22;
case 0x776a23:c.instructions+=1;goto B776a23;
case 0x776a28:goto L776a28;
case 0x776a2b:c.instructions+=1;goto B776a2b;
case 0x776a2c:goto L776a2c;
case 0x776a2e:c.instructions+=4;goto B776a2e;
case 0x776a33:c.instructions+=3;goto B776a33;
case 0x776a36:c.instructions+=2;goto B776a36;
case 0x776a37:c.instructions+=1;goto B776a37;
case 0x776a3c:goto L776a3c;
case 0x776a3f:c.instructions+=1;goto B776a3f;
case 0x776a40:goto L776a40;
case 0x776a42:c.instructions+=4;goto B776a42;
case 0x776a47:c.instructions+=3;goto B776a47;
case 0x776a4a:c.instructions+=2;goto B776a4a;
case 0x776a4b:c.instructions+=1;goto B776a4b;
case 0x776a50:goto L776a50;
case 0x776a53:c.instructions+=1;goto B776a53;
case 0x776a54:goto L776a54;
case 0x776a56:c.instructions+=4;goto B776a56;
case 0x776a5b:c.instructions+=3;goto B776a5b;
case 0x776a5e:c.instructions+=2;goto B776a5e;
case 0x776a5f:c.instructions+=1;goto B776a5f;
case 0x776a64:goto L776a64;
case 0x776a67:c.instructions+=1;goto B776a67;
case 0x776a68:goto L776a68;
case 0x776a6a:c.instructions+=4;goto B776a6a;
case 0x776a6f:c.instructions+=3;goto B776a6f;
case 0x776a72:c.instructions+=2;goto B776a72;
case 0x776a73:c.instructions+=1;goto B776a73;
case 0x776a78:goto L776a78;
case 0x776a7b:c.instructions+=1;goto B776a7b;
case 0x776a7c:goto L776a7c;
case 0x776a7e:c.instructions+=4;goto B776a7e;
case 0x776a83:c.instructions+=3;goto B776a83;
case 0x776a86:c.instructions+=2;goto B776a86;
case 0x776a87:c.instructions+=1;goto B776a87;
case 0x776a8c:goto L776a8c;
case 0x776a8f:c.instructions+=1;goto B776a8f;
case 0x776a90:goto L776a90;
case 0x776a92:c.instructions+=4;goto B776a92;
case 0x776a97:c.instructions+=3;goto B776a97;
case 0x776a9a:c.instructions+=2;goto B776a9a;
case 0x776a9b:c.instructions+=1;goto B776a9b;
case 0x776aa0:goto L776aa0;
case 0x776aa3:c.instructions+=1;goto B776aa3;
case 0x776aa4:goto L776aa4;
case 0x776aa6:c.instructions+=4;goto B776aa6;
case 0x776aab:c.instructions+=3;goto B776aab;
case 0x776aae:c.instructions+=2;goto B776aae;
case 0x776aaf:c.instructions+=1;goto B776aaf;
case 0x776ab4:goto L776ab4;
case 0x776ab7:c.instructions+=1;goto B776ab7;
case 0x776ab8:goto L776ab8;
case 0x776aba:c.instructions+=4;goto B776aba;
case 0x776abf:c.instructions+=3;goto B776abf;
case 0x776ac2:c.instructions+=2;goto B776ac2;
case 0x776ac3:c.instructions+=1;goto B776ac3;
case 0x776ac8:goto L776ac8;
case 0x776acb:c.instructions+=1;goto B776acb;
case 0x776acc:goto L776acc;
case 0x776ace:c.instructions+=4;goto B776ace;
case 0x776ad3:c.instructions+=3;goto B776ad3;
case 0x776ad6:c.instructions+=2;goto B776ad6;
case 0x776ad7:c.instructions+=1;goto B776ad7;
case 0x776adc:goto L776adc;
case 0x776adf:c.instructions+=1;goto B776adf;
case 0x776ae0:goto L776ae0;
case 0x776ae2:c.instructions+=4;goto B776ae2;
case 0x776ae7:c.instructions+=3;goto B776ae7;
case 0x776aea:c.instructions+=2;goto B776aea;
case 0x776aeb:c.instructions+=1;goto B776aeb;
case 0x776af0:goto L776af0;
case 0x776af3:c.instructions+=1;goto B776af3;
case 0x776af4:goto L776af4;
case 0x776af6:c.instructions+=4;goto B776af6;
case 0x776afb:c.instructions+=3;goto B776afb;
case 0x776afe:c.instructions+=2;goto B776afe;
case 0x776aff:c.instructions+=1;goto B776aff;
case 0x776b04:goto L776b04;
case 0x776b07:c.instructions+=1;goto B776b07;
case 0x776b08:goto L776b08;
case 0x776b0a:c.instructions+=4;goto B776b0a;
case 0x776b0f:c.instructions+=3;goto B776b0f;
case 0x776b12:c.instructions+=2;goto B776b12;
case 0x776b13:c.instructions+=1;goto B776b13;
case 0x776b18:goto L776b18;
case 0x776b1b:c.instructions+=1;goto B776b1b;
case 0x776b1c:goto L776b1c;
case 0x776b1e:c.instructions+=4;goto B776b1e;
case 0x776b23:c.instructions+=3;goto B776b23;
case 0x776b26:c.instructions+=2;goto B776b26;
case 0x776b27:c.instructions+=1;goto B776b27;
case 0x776b2c:goto L776b2c;
case 0x776b2f:c.instructions+=1;goto B776b2f;
case 0x776b30:goto L776b30;
case 0x776b32:c.instructions+=4;goto B776b32;
case 0x776b37:c.instructions+=3;goto B776b37;
case 0x776b3a:c.instructions+=2;goto B776b3a;
case 0x776b3b:c.instructions+=1;goto B776b3b;
case 0x776b40:goto L776b40;
case 0x776b43:c.instructions+=1;goto B776b43;
case 0x776b44:goto L776b44;
case 0x776b46:c.instructions+=4;goto B776b46;
case 0x776b4b:c.instructions+=3;goto B776b4b;
case 0x776b4e:c.instructions+=2;goto B776b4e;
case 0x776b4f:c.instructions+=1;goto B776b4f;
case 0x776b54:goto L776b54;
case 0x776b57:c.instructions+=1;goto B776b57;
case 0x776b58:goto L776b58;
case 0x776b5a:c.instructions+=4;goto B776b5a;
case 0x776b5f:c.instructions+=3;goto B776b5f;
case 0x776b62:c.instructions+=2;goto B776b62;
case 0x776b63:c.instructions+=1;goto B776b63;
case 0x776b68:goto L776b68;
case 0x776b6b:c.instructions+=1;goto B776b6b;
case 0x776b6c:goto L776b6c;
case 0x776b6e:c.instructions+=4;goto B776b6e;
case 0x776b73:c.instructions+=3;goto B776b73;
case 0x776b76:c.instructions+=2;goto B776b76;
case 0x776b77:c.instructions+=1;goto B776b77;
case 0x776b7c:goto L776b7c;
case 0x776b7f:c.instructions+=1;goto B776b7f;
case 0x776b80:goto L776b80;
case 0x776b82:c.instructions+=4;goto B776b82;
case 0x776b87:c.instructions+=3;goto B776b87;
case 0x776b8a:c.instructions+=2;goto B776b8a;
case 0x776b8b:c.instructions+=1;goto B776b8b;
case 0x776b90:goto L776b90;
case 0x776b93:c.instructions+=1;goto B776b93;
case 0x776b94:goto L776b94;
case 0x776b96:c.instructions+=4;goto B776b96;
case 0x776b9b:c.instructions+=3;goto B776b9b;
case 0x776b9e:c.instructions+=2;goto B776b9e;
case 0x776b9f:c.instructions+=1;goto B776b9f;
case 0x776ba4:goto L776ba4;
case 0x776ba7:c.instructions+=1;goto B776ba7;
case 0x776ba8:goto L776ba8;
case 0x776baa:c.instructions+=4;goto B776baa;
case 0x776baf:c.instructions+=3;goto B776baf;
case 0x776bb2:c.instructions+=2;goto B776bb2;
case 0x776bb3:c.instructions+=1;goto B776bb3;
case 0x776bb8:goto L776bb8;
case 0x776bbb:c.instructions+=1;goto B776bbb;
case 0x776bbc:goto L776bbc;
case 0x776bbe:c.instructions+=4;goto B776bbe;
case 0x776bc3:c.instructions+=3;goto B776bc3;
case 0x776bc6:c.instructions+=2;goto B776bc6;
case 0x776bc7:c.instructions+=1;goto B776bc7;
case 0x776bcc:goto L776bcc;
case 0x776bcf:c.instructions+=1;goto B776bcf;
case 0x776bd0:goto L776bd0;
case 0x776bd5:c.instructions+=1;goto B776bd5;
case 0x776be0:goto L776be0;
case 0x776be2:c.instructions+=4;goto B776be2;
case 0x776be7:c.instructions+=3;goto B776be7;
case 0x776bea:c.instructions+=2;goto B776bea;
case 0x776beb:c.instructions+=1;goto B776beb;
case 0x776bf0:goto L776bf0;
case 0x776bf3:c.instructions+=1;goto B776bf3;
case 0x776bf4:goto L776bf4;
case 0x776bf9:c.instructions+=1;goto B776bf9;
case 0x776c00:goto L776c00;
case 0x776c03:c.instructions+=1;goto B776c03;
case 0x776c08:goto L776c08;
case 0x776c0b:c.instructions+=2;goto B776c0b;
case 0x776c0e:c.instructions+=1;goto B776c0e;
case 0x776c13:goto L776c13;
case 0x776c16:c.instructions+=2;goto B776c16;
case 0x776c1c:c.instructions+=1;goto B776c1c;
case 0x776c21:goto L776c21;
case 0x776c24:c.instructions+=2;goto B776c24;
case 0x776c2a:c.instructions+=1;goto B776c2a;
case 0x776c2f:goto L776c2f;
case 0x776c32:c.instructions+=2;goto B776c32;
case 0x776c38:c.instructions+=1;goto B776c38;
case 0x776c3d:goto L776c3d;
case 0x776c42:c.instructions+=1;goto B776c42;
case 0x776c50:goto L776c50;
case 0x776c52:c.instructions+=4;goto B776c52;
case 0x776c57:c.instructions+=3;goto B776c57;
case 0x776c5a:c.instructions+=2;goto B776c5a;
case 0x776c5b:c.instructions+=1;goto B776c5b;
case 0x776c60:goto L776c60;
case 0x776c63:c.instructions+=1;goto B776c63;
case 0x776c64:goto L776c64;
case 0x776c69:c.instructions+=1;goto B776c69;
case 0x776c70:goto L776c70;
case 0x776c73:c.instructions+=1;goto B776c73;
case 0x776c78:goto L776c78;
case 0x776c7b:c.instructions+=2;goto B776c7b;
case 0x776c7e:c.instructions+=1;goto B776c7e;
case 0x776c83:goto L776c83;
case 0x776c88:c.instructions+=1;goto B776c88;
case 0x776c90:goto L776c90;
case 0x776c92:c.instructions+=4;goto B776c92;
case 0x776c97:c.instructions+=3;goto B776c97;
case 0x776c9a:c.instructions+=2;goto B776c9a;
case 0x776c9b:c.instructions+=1;goto B776c9b;
case 0x776ca0:goto L776ca0;
case 0x776ca3:c.instructions+=1;goto B776ca3;
case 0x776ca4:goto L776ca4;
case 0x776ca9:c.instructions+=1;goto B776ca9;
case 0x776cb0:goto L776cb0;
case 0x776cb3:c.instructions+=1;goto B776cb3;
case 0x776cb8:goto L776cb8;
case 0x776cbb:c.instructions+=2;goto B776cbb;
case 0x776cbe:c.instructions+=1;goto B776cbe;
case 0x776cc3:goto L776cc3;
case 0x776cc6:c.instructions+=2;goto B776cc6;
case 0x776ccc:c.instructions+=1;goto B776ccc;
case 0x776cd1:goto L776cd1;
case 0x776cd4:c.instructions+=2;goto B776cd4;
case 0x776cda:c.instructions+=1;goto B776cda;
case 0x776cdf:goto L776cdf;
case 0x776ce2:c.instructions+=2;goto B776ce2;
case 0x776ce8:c.instructions+=1;goto B776ce8;
case 0x776ced:goto L776ced;
case 0x776cf2:c.instructions+=1;goto B776cf2;
case 0x776d00:goto L776d00;
case 0x776d02:c.instructions+=4;goto B776d02;
case 0x776d07:c.instructions+=3;goto B776d07;
case 0x776d0a:c.instructions+=2;goto B776d0a;
case 0x776d0b:c.instructions+=1;goto B776d0b;
case 0x776d10:goto L776d10;
case 0x776d13:c.instructions+=1;goto B776d13;
case 0x776d14:goto L776d14;
case 0x776d19:c.instructions+=1;goto B776d19;
case 0x776d20:goto L776d20;
case 0x776d22:c.instructions+=4;goto B776d22;
case 0x776d27:c.instructions+=3;goto B776d27;
case 0x776d2a:c.instructions+=2;goto B776d2a;
case 0x776d2b:c.instructions+=1;goto B776d2b;
case 0x776d30:goto L776d30;
case 0x776d33:c.instructions+=1;goto B776d33;
case 0x776d34:goto L776d34;
case 0x776d39:c.instructions+=1;goto B776d39;
case 0x776d40:goto L776d40;
case 0x776d42:c.instructions+=4;goto B776d42;
case 0x776d47:c.instructions+=3;goto B776d47;
case 0x776d4a:c.instructions+=2;goto B776d4a;
case 0x776d4b:c.instructions+=1;goto B776d4b;
case 0x776d50:goto L776d50;
case 0x776d53:c.instructions+=1;goto B776d53;
case 0x776d54:goto L776d54;
case 0x776d59:c.instructions+=1;goto B776d59;
case 0x776d60:goto L776d60;
case 0x776d62:c.instructions+=4;goto B776d62;
case 0x776d67:c.instructions+=3;goto B776d67;
case 0x776d6a:c.instructions+=2;goto B776d6a;
case 0x776d6b:c.instructions+=1;goto B776d6b;
case 0x776d70:goto L776d70;
case 0x776d73:c.instructions+=1;goto B776d73;
case 0x776d74:goto L776d74;
case 0x776d79:c.instructions+=1;goto B776d79;
case 0x776d80:goto L776d80;
case 0x776d82:c.instructions+=4;goto B776d82;
case 0x776d87:c.instructions+=3;goto B776d87;
case 0x776d8a:c.instructions+=2;goto B776d8a;
case 0x776d8b:c.instructions+=1;goto B776d8b;
case 0x776d90:goto L776d90;
case 0x776d93:c.instructions+=1;goto B776d93;
case 0x776d94:goto L776d94;
case 0x776d99:c.instructions+=1;goto B776d99;
case 0x776da0:goto L776da0;
case 0x776da2:c.instructions+=4;goto B776da2;
case 0x776da7:c.instructions+=3;goto B776da7;
case 0x776daa:c.instructions+=2;goto B776daa;
case 0x776dab:c.instructions+=1;goto B776dab;
case 0x776db0:goto L776db0;
case 0x776db3:c.instructions+=1;goto B776db3;
case 0x776db4:goto L776db4;
case 0x776db9:c.instructions+=1;goto B776db9;
case 0x776dc0:goto L776dc0;
case 0x776dc3:c.instructions+=1;goto B776dc3;
case 0x776dc8:goto L776dc8;
case 0x776dcd:c.instructions+=1;goto B776dcd;
case 0x776de0:goto L776de0;
case 0x776de2:c.instructions+=4;goto B776de2;
case 0x776de7:c.instructions+=3;goto B776de7;
case 0x776dea:c.instructions+=2;goto B776dea;
case 0x776deb:c.instructions+=1;goto B776deb;
case 0x776df0:goto L776df0;
case 0x776df3:c.instructions+=1;goto B776df3;
case 0x776df4:goto L776df4;
case 0x776df9:c.instructions+=1;goto B776df9;
case 0x776e00:goto L776e00;
case 0x776e03:c.instructions+=1;goto B776e03;
case 0x776e08:goto L776e08;
case 0x776e0b:c.instructions+=2;goto B776e0b;
case 0x776e11:c.instructions+=1;goto B776e11;
case 0x776e16:goto L776e16;
case 0x776e1b:c.instructions+=1;goto B776e1b;
case 0x776e20:goto L776e20;
case 0x776e23:c.instructions+=1;goto B776e23;
case 0x776e28:goto L776e28;
case 0x776e2d:c.instructions+=1;goto B776e2d;
case 0x776e40:goto L776e40;
case 0x776e42:c.instructions+=4;goto B776e42;
case 0x776e47:c.instructions+=3;goto B776e47;
case 0x776e4a:c.instructions+=2;goto B776e4a;
case 0x776e4b:c.instructions+=1;goto B776e4b;
case 0x776e50:goto L776e50;
case 0x776e53:c.instructions+=1;goto B776e53;
case 0x776e54:goto L776e54;
case 0x776e59:c.instructions+=1;goto B776e59;
case 0x776e60:goto L776e60;
case 0x776e62:c.instructions+=4;goto B776e62;
case 0x776e67:c.instructions+=3;goto B776e67;
case 0x776e6a:c.instructions+=2;goto B776e6a;
case 0x776e6b:c.instructions+=1;goto B776e6b;
case 0x776e70:goto L776e70;
case 0x776e73:c.instructions+=1;goto B776e73;
case 0x776e74:goto L776e74;
case 0x776e79:c.instructions+=1;goto B776e79;
case 0x776e80:goto L776e80;
case 0x776e82:c.instructions+=4;goto B776e82;
case 0x776e87:c.instructions+=3;goto B776e87;
case 0x776e8a:c.instructions+=2;goto B776e8a;
case 0x776e8b:c.instructions+=1;goto B776e8b;
case 0x776e90:goto L776e90;
case 0x776e93:c.instructions+=1;goto B776e93;
case 0x776e94:goto L776e94;
case 0x776e99:c.instructions+=1;goto B776e99;
case 0x776ea0:goto L776ea0;
case 0x776ea2:c.instructions+=4;goto B776ea2;
case 0x776ea7:c.instructions+=3;goto B776ea7;
case 0x776eaa:c.instructions+=2;goto B776eaa;
case 0x776eab:c.instructions+=1;goto B776eab;
case 0x776eb0:goto L776eb0;
case 0x776eb3:c.instructions+=1;goto B776eb3;
case 0x776eb4:goto L776eb4;
case 0x776eb9:c.instructions+=1;goto B776eb9;
case 0x776ec0:goto L776ec0;
case 0x776ec2:c.instructions+=4;goto B776ec2;
case 0x776ec7:c.instructions+=3;goto B776ec7;
case 0x776eca:c.instructions+=2;goto B776eca;
case 0x776ecb:c.instructions+=1;goto B776ecb;
case 0x776ed0:goto L776ed0;
case 0x776ed3:c.instructions+=1;goto B776ed3;
case 0x776ed4:goto L776ed4;
case 0x776ed9:c.instructions+=1;goto B776ed9;
case 0x776ee0:goto L776ee0;
case 0x776ee2:c.instructions+=4;goto B776ee2;
case 0x776ee7:c.instructions+=3;goto B776ee7;
case 0x776eea:c.instructions+=2;goto B776eea;
case 0x776eeb:c.instructions+=1;goto B776eeb;
case 0x776ef0:goto L776ef0;
case 0x776ef3:c.instructions+=1;goto B776ef3;
case 0x776ef4:goto L776ef4;
case 0x776ef9:c.instructions+=1;goto B776ef9;
case 0x776f00:goto L776f00;
case 0x776f02:c.instructions+=4;goto B776f02;
case 0x776f07:c.instructions+=3;goto B776f07;
case 0x776f0a:c.instructions+=2;goto B776f0a;
case 0x776f0b:c.instructions+=1;goto B776f0b;
case 0x776f10:goto L776f10;
case 0x776f13:c.instructions+=1;goto B776f13;
case 0x776f14:goto L776f14;
case 0x776f19:c.instructions+=1;goto B776f19;
case 0x776f20:goto L776f20;
case 0x776f22:c.instructions+=4;goto B776f22;
case 0x776f27:c.instructions+=3;goto B776f27;
case 0x776f2a:c.instructions+=2;goto B776f2a;
case 0x776f2b:c.instructions+=1;goto B776f2b;
case 0x776f30:goto L776f30;
case 0x776f33:c.instructions+=1;goto B776f33;
case 0x776f34:goto L776f34;
case 0x776f39:c.instructions+=1;goto B776f39;
case 0x776f40:goto L776f40;
case 0x776f46:c.instructions+=1;goto B776f46;
case 0x776f4b:goto L776f4b;
case 0x776f50:c.instructions+=1;goto B776f50;
case 0x776f60:goto L776f60;
case 0x776f63:c.instructions+=1;goto B776f63;
case 0x776f68:goto L776f68;
case 0x776f6d:c.instructions+=1;goto B776f6d;
case 0x776f80:goto L776f80;
case 0x776f83:c.instructions+=1;goto B776f83;
case 0x776f88:goto L776f88;
case 0x776f8d:c.instructions+=1;goto B776f8d;
case 0x776fa0:goto L776fa0;
case 0x776fa3:c.instructions+=1;goto B776fa3;
case 0x776fa8:goto L776fa8;
case 0x776fad:c.instructions+=1;goto B776fad;
case 0x776fc0:goto L776fc0;
case 0x776fc2:c.instructions+=4;goto B776fc2;
case 0x776fc7:c.instructions+=3;goto B776fc7;
case 0x776fca:c.instructions+=2;goto B776fca;
case 0x776fcb:c.instructions+=1;goto B776fcb;
case 0x776fd0:goto L776fd0;
case 0x776fd3:c.instructions+=1;goto B776fd3;
case 0x776fd4:goto L776fd4;
case 0x776fd9:c.instructions+=1;goto B776fd9;
case 0x776fe0:goto L776fe0;
case 0x776fe3:c.instructions+=1;goto B776fe3;
case 0x776fe8:goto L776fe8;
case 0x776fed:c.instructions+=1;goto B776fed;
default:missing_instruction(c.pc);}
B776004:L776004:{c.instructions+=2;NFSU2_TR(0x776004);
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
B776007:{NFSU2_TR(0x776007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776008:L776008:{c.instructions+=5;NFSU2_TR(0x776008);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77600a:{NFSU2_TR(0x77600a);
u8 U[4];
w4(U+0,u32(0x797ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77600f:{NFSU2_TR(0x77600f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776012:{NFSU2_TR(0x776012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776013:{NFSU2_TR(0x776013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776018ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776018:L776018:{c.instructions+=2;NFSU2_TR(0x776018);
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
B77601b:{NFSU2_TR(0x77601b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77601c:L77601c:{c.instructions+=5;NFSU2_TR(0x77601c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77601e:{NFSU2_TR(0x77601e);
u8 U[4];
w4(U+0,u32(0x797ab4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776023:{NFSU2_TR(0x776023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776026:{NFSU2_TR(0x776026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776027:{NFSU2_TR(0x776027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77602cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77602c:L77602c:{c.instructions+=2;NFSU2_TR(0x77602c);
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
B77602f:{NFSU2_TR(0x77602f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776030:L776030:{c.instructions+=2;NFSU2_TR(0x776030);
w4(R+0,u32(0x7e15a0ull));
}
B776035:{NFSU2_TR(0x776035);
TAIL_STATIC(0x75bfd2u,75b);
}
B776040:L776040:{c.instructions+=2;NFSU2_TR(0x776040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776043:{NFSU2_TR(0x776043);
TAIL_STATIC(0x510d40u,510);
}
B776048:L776048:{c.instructions+=3;NFSU2_TR(0x776048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77604b:{NFSU2_TR(0x77604b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77604e:{NFSU2_TR(0x77604e);
TAIL_STATIC(0x4def30u,4de);
}
B776053:L776053:{c.instructions+=3;NFSU2_TR(0x776053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776056:{NFSU2_TR(0x776056);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B776059:{NFSU2_TR(0x776059);
TAIL_STATIC(0x49d870u,49d);
}
B77605e:L77605e:{c.instructions+=2;NFSU2_TR(0x77605e);
w4(R+0,u32(0x7e1d78ull));
}
B776063:{NFSU2_TR(0x776063);
TAIL_STATIC(0x75bfd2u,75b);
}
B776070:L776070:{c.instructions+=2;NFSU2_TR(0x776070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776073:{NFSU2_TR(0x776073);
TAIL_STATIC(0x4defb0u,4de);
}
B776078:L776078:{c.instructions+=3;NFSU2_TR(0x776078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77607b:{NFSU2_TR(0x77607b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x160ull))));
}
B776081:{NFSU2_TR(0x776081);
TAIL_STATIC(0x50db70u,50d);
}
B776086:L776086:{c.instructions+=2;NFSU2_TR(0x776086);
w4(R+0,u32(0x7e15ccull));
}
B77608b:{NFSU2_TR(0x77608b);
TAIL_STATIC(0x75bfd2u,75b);
}
B776090:L776090:{c.instructions+=2;NFSU2_TR(0x776090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776093:{NFSU2_TR(0x776093);
TAIL_STATIC(0x510d40u,510);
}
B776098:L776098:{c.instructions+=3;NFSU2_TR(0x776098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77609b:{NFSU2_TR(0x77609b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6cull))));
}
B77609e:{NFSU2_TR(0x77609e);
TAIL_STATIC(0x4c19e0u,4c1);
}
B7760a3:L7760a3:{c.instructions+=3;NFSU2_TR(0x7760a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7760a6:{NFSU2_TR(0x7760a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x23cull))));
}
B7760ac:{NFSU2_TR(0x7760ac);
TAIL_STATIC(0x4c1720u,4c1);
}
B7760b1:L7760b1:{c.instructions+=5;NFSU2_TR(0x7760b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760b3:{NFSU2_TR(0x7760b3);
u8 U[4];
w4(U+0,u32(0x797c00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760b8:{NFSU2_TR(0x7760b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7760bb:{NFSU2_TR(0x7760bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760bc:{NFSU2_TR(0x7760bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7760c1ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7760c1:L7760c1:{c.instructions+=2;NFSU2_TR(0x7760c1);
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
B7760c4:{NFSU2_TR(0x7760c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7760c5:L7760c5:{c.instructions+=5;NFSU2_TR(0x7760c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760c7:{NFSU2_TR(0x7760c7);
u8 U[4];
w4(U+0,u32(0x797be8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760cc:{NFSU2_TR(0x7760cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7760cf:{NFSU2_TR(0x7760cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760d0:{NFSU2_TR(0x7760d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7760d5ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7760d5:L7760d5:{c.instructions+=2;NFSU2_TR(0x7760d5);
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
B7760d8:{NFSU2_TR(0x7760d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7760d9:L7760d9:{c.instructions+=5;NFSU2_TR(0x7760d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760db:{NFSU2_TR(0x7760db);
u8 U[4];
w4(U+0,u32(0x797be8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760e0:{NFSU2_TR(0x7760e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7760e3:{NFSU2_TR(0x7760e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760e4:{NFSU2_TR(0x7760e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7760e9ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7760e9:L7760e9:{c.instructions+=2;NFSU2_TR(0x7760e9);
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
B7760ec:{NFSU2_TR(0x7760ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7760ed:L7760ed:{c.instructions+=5;NFSU2_TR(0x7760ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760ef:{NFSU2_TR(0x7760ef);
u8 U[4];
w4(U+0,u32(0x797bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760f4:{NFSU2_TR(0x7760f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7760f7:{NFSU2_TR(0x7760f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7760f8:{NFSU2_TR(0x7760f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7760fdull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7760fd:L7760fd:{c.instructions+=2;NFSU2_TR(0x7760fd);
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
B776100:{NFSU2_TR(0x776100);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776101:L776101:{c.instructions+=2;NFSU2_TR(0x776101);
w4(R+0,u32(0x7e1620ull));
}
B776106:{NFSU2_TR(0x776106);
TAIL_STATIC(0x75bfd2u,75b);
}
B776110:L776110:{c.instructions+=5;NFSU2_TR(0x776110);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776112:{NFSU2_TR(0x776112);
u8 U[4];
w4(U+0,u32(0x797c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776117:{NFSU2_TR(0x776117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77611a:{NFSU2_TR(0x77611a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77611b:{NFSU2_TR(0x77611b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776120ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776120:L776120:{c.instructions+=2;NFSU2_TR(0x776120);
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
B776123:{NFSU2_TR(0x776123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776124:L776124:{c.instructions+=2;NFSU2_TR(0x776124);
w4(R+0,u32(0x7e1644ull));
}
B776129:{NFSU2_TR(0x776129);
TAIL_STATIC(0x75bfd2u,75b);
}
B776130:L776130:{c.instructions+=5;NFSU2_TR(0x776130);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776132:{NFSU2_TR(0x776132);
u8 U[4];
w4(U+0,u32(0x797c7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776137:{NFSU2_TR(0x776137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77613a:{NFSU2_TR(0x77613a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77613b:{NFSU2_TR(0x77613b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776140ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776140:L776140:{c.instructions+=2;NFSU2_TR(0x776140);
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
B776143:{NFSU2_TR(0x776143);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776144:L776144:{c.instructions+=2;NFSU2_TR(0x776144);
w4(R+0,u32(0x7e1668ull));
}
B776149:{NFSU2_TR(0x776149);
TAIL_STATIC(0x75bfd2u,75b);
}
B776150:L776150:{c.instructions+=5;NFSU2_TR(0x776150);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776152:{NFSU2_TR(0x776152);
u8 U[4];
w4(U+0,u32(0x797ce8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776157:{NFSU2_TR(0x776157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77615a:{NFSU2_TR(0x77615a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77615b:{NFSU2_TR(0x77615b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776160ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776160:L776160:{c.instructions+=2;NFSU2_TR(0x776160);
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
B776163:{NFSU2_TR(0x776163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776164:L776164:{c.instructions+=2;NFSU2_TR(0x776164);
w4(R+0,u32(0x7e168cull));
}
B776169:{NFSU2_TR(0x776169);
TAIL_STATIC(0x75bfd2u,75b);
}
B776170:L776170:{c.instructions+=2;NFSU2_TR(0x776170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776173:{NFSU2_TR(0x776173);
TAIL_STATIC(0x4defb0u,4de);
}
B776178:L776178:{c.instructions+=2;NFSU2_TR(0x776178);
w4(R+0,u32(0x7e0eb8ull));
}
B77617d:{NFSU2_TR(0x77617d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776190:L776190:{c.instructions+=3;NFSU2_TR(0x776190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776193:{NFSU2_TR(0x776193);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B776196:{NFSU2_TR(0x776196);
TAIL_STATIC(0x4835c0u,483);
}
B77619b:L77619b:{c.instructions+=2;NFSU2_TR(0x77619b);
w4(R+0,u32(0x7e16b0ull));
}
B7761a0:{NFSU2_TR(0x7761a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7761b0:L7761b0:{c.instructions+=3;NFSU2_TR(0x7761b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7761b3:{NFSU2_TR(0x7761b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7761b4:{NFSU2_TR(0x7761b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7761b9ull));
TAIL_STATIC(0x4ac290u,4ac);
}
B7761b9:L7761b9:{c.instructions+=2;NFSU2_TR(0x7761b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7761ba:{NFSU2_TR(0x7761ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7761bb:L7761bb:{c.instructions+=2;NFSU2_TR(0x7761bb);
w4(R+0,u32(0x7e16f8ull));
}
B7761c0:{NFSU2_TR(0x7761c0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7761d0:L7761d0:{c.instructions+=2;NFSU2_TR(0x7761d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7761d3:{NFSU2_TR(0x7761d3);
TAIL_STATIC(0x4def70u,4de);
}
B7761d8:L7761d8:{c.instructions+=2;NFSU2_TR(0x7761d8);
w4(R+0,u32(0x7e171cull));
}
B7761dd:{NFSU2_TR(0x7761dd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7761f0:L7761f0:{c.instructions+=5;NFSU2_TR(0x7761f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7761f2:{NFSU2_TR(0x7761f2);
u8 U[4];
w4(U+0,u32(0x797d60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7761f7:{NFSU2_TR(0x7761f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7761fa:{NFSU2_TR(0x7761fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7761fb:{NFSU2_TR(0x7761fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776200ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776200:L776200:{c.instructions+=2;NFSU2_TR(0x776200);
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
B776203:{NFSU2_TR(0x776203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776204:L776204:{c.instructions+=2;NFSU2_TR(0x776204);
w4(R+0,u32(0x7e1740ull));
}
B776209:{NFSU2_TR(0x776209);
TAIL_STATIC(0x75bfd2u,75b);
}
B776210:L776210:{c.instructions+=2;NFSU2_TR(0x776210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776213:{NFSU2_TR(0x776213);
TAIL_STATIC(0x510d40u,510);
}
B776218:L776218:{c.instructions+=3;NFSU2_TR(0x776218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77621b:{NFSU2_TR(0x77621b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77621e:{NFSU2_TR(0x77621e);
TAIL_STATIC(0x4358e0u,435);
}
B776223:L776223:{c.instructions+=3;NFSU2_TR(0x776223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776226:{NFSU2_TR(0x776226);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B776229:{NFSU2_TR(0x776229);
TAIL_STATIC(0x4358e0u,435);
}
B77622e:L77622e:{c.instructions+=3;NFSU2_TR(0x77622e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776231:{NFSU2_TR(0x776231);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B776234:{NFSU2_TR(0x776234);
TAIL_STATIC(0x4358e0u,435);
}
B776239:L776239:{c.instructions+=2;NFSU2_TR(0x776239);
w4(R+0,u32(0x7e177cull));
}
B77623e:{NFSU2_TR(0x77623e);
TAIL_STATIC(0x75bfd2u,75b);
}
B776250:L776250:{c.instructions+=2;NFSU2_TR(0x776250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776253:{NFSU2_TR(0x776253);
TAIL_STATIC(0x510d40u,510);
}
B776258:L776258:{c.instructions+=3;NFSU2_TR(0x776258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77625b:{NFSU2_TR(0x77625b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77625e:{NFSU2_TR(0x77625e);
TAIL_STATIC(0x4358e0u,435);
}
B776263:L776263:{c.instructions+=3;NFSU2_TR(0x776263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776266:{NFSU2_TR(0x776266);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B776269:{NFSU2_TR(0x776269);
TAIL_STATIC(0x4358e0u,435);
}
B77626e:L77626e:{c.instructions+=2;NFSU2_TR(0x77626e);
w4(R+0,u32(0x7e17b0ull));
}
B776273:{NFSU2_TR(0x776273);
TAIL_STATIC(0x75bfd2u,75b);
}
B776280:L776280:{c.instructions+=5;NFSU2_TR(0x776280);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776282:{NFSU2_TR(0x776282);
u8 U[4];
w4(U+0,u32(0x797e10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776287:{NFSU2_TR(0x776287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77628a:{NFSU2_TR(0x77628a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77628b:{NFSU2_TR(0x77628b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776290ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776290:L776290:{c.instructions+=2;NFSU2_TR(0x776290);
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
B776293:{NFSU2_TR(0x776293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776294:L776294:{c.instructions+=2;NFSU2_TR(0x776294);
w4(R+0,u32(0x7e17d4ull));
}
B776299:{NFSU2_TR(0x776299);
TAIL_STATIC(0x75bfd2u,75b);
}
B7762a0:L7762a0:{c.instructions+=5;NFSU2_TR(0x7762a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762a2:{NFSU2_TR(0x7762a2);
u8 U[4];
w4(U+0,u32(0x797e18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762a7:{NFSU2_TR(0x7762a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7762aa:{NFSU2_TR(0x7762aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762ab:{NFSU2_TR(0x7762ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7762b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7762b0:L7762b0:{c.instructions+=2;NFSU2_TR(0x7762b0);
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
B7762b3:{NFSU2_TR(0x7762b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7762b4:L7762b4:{c.instructions+=2;NFSU2_TR(0x7762b4);
w4(R+0,u32(0x7e17f8ull));
}
B7762b9:{NFSU2_TR(0x7762b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7762c0:L7762c0:{c.instructions+=5;NFSU2_TR(0x7762c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762c2:{NFSU2_TR(0x7762c2);
u8 U[4];
w4(U+0,u32(0x797e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762c7:{NFSU2_TR(0x7762c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7762ca:{NFSU2_TR(0x7762ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762cb:{NFSU2_TR(0x7762cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7762d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7762d0:L7762d0:{c.instructions+=2;NFSU2_TR(0x7762d0);
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
B7762d3:{NFSU2_TR(0x7762d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7762d4:L7762d4:{c.instructions+=2;NFSU2_TR(0x7762d4);
w4(R+0,u32(0x7e181cull));
}
B7762d9:{NFSU2_TR(0x7762d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7762e0:L7762e0:{c.instructions+=5;NFSU2_TR(0x7762e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762e2:{NFSU2_TR(0x7762e2);
u8 U[4];
w4(U+0,u32(0x797e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762e7:{NFSU2_TR(0x7762e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7762ea:{NFSU2_TR(0x7762ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7762eb:{NFSU2_TR(0x7762eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7762f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7762f0:L7762f0:{c.instructions+=2;NFSU2_TR(0x7762f0);
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
B7762f3:{NFSU2_TR(0x7762f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7762f4:L7762f4:{c.instructions+=2;NFSU2_TR(0x7762f4);
w4(R+0,u32(0x7e1840ull));
}
B7762f9:{NFSU2_TR(0x7762f9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776300:L776300:{c.instructions+=5;NFSU2_TR(0x776300);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776302:{NFSU2_TR(0x776302);
u8 U[4];
w4(U+0,u32(0x797e50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776307:{NFSU2_TR(0x776307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77630a:{NFSU2_TR(0x77630a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77630b:{NFSU2_TR(0x77630b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776310ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776310:L776310:{c.instructions+=2;NFSU2_TR(0x776310);
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
B776313:{NFSU2_TR(0x776313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776314:L776314:{c.instructions+=2;NFSU2_TR(0x776314);
w4(R+0,u32(0x7e1864ull));
}
B776319:{NFSU2_TR(0x776319);
TAIL_STATIC(0x75bfd2u,75b);
}
B776320:L776320:{c.instructions+=2;NFSU2_TR(0x776320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776323:{NFSU2_TR(0x776323);
TAIL_STATIC(0x510d40u,510);
}
B776328:L776328:{c.instructions+=3;NFSU2_TR(0x776328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77632b:{NFSU2_TR(0x77632b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B77632e:{NFSU2_TR(0x77632e);
TAIL_STATIC(0x4def30u,4de);
}
B776333:L776333:{c.instructions+=5;NFSU2_TR(0x776333);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776335:{NFSU2_TR(0x776335);
u8 U[4];
w4(U+0,u32(0x797f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77633a:{NFSU2_TR(0x77633a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77633d:{NFSU2_TR(0x77633d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77633e:{NFSU2_TR(0x77633e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776343ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776343:L776343:{c.instructions+=2;NFSU2_TR(0x776343);
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
B776346:{NFSU2_TR(0x776346);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776347:L776347:{c.instructions+=5;NFSU2_TR(0x776347);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776349:{NFSU2_TR(0x776349);
u8 U[4];
w4(U+0,u32(0x797ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77634e:{NFSU2_TR(0x77634e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776351:{NFSU2_TR(0x776351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776352:{NFSU2_TR(0x776352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776357ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776357:L776357:{c.instructions+=2;NFSU2_TR(0x776357);
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
B77635a:{NFSU2_TR(0x77635a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77635b:L77635b:{c.instructions+=5;NFSU2_TR(0x77635b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77635d:{NFSU2_TR(0x77635d);
u8 U[4];
w4(U+0,u32(0x797ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776362:{NFSU2_TR(0x776362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776365:{NFSU2_TR(0x776365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776366:{NFSU2_TR(0x776366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77636bull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77636b:L77636b:{c.instructions+=2;NFSU2_TR(0x77636b);
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
B77636e:{NFSU2_TR(0x77636e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77636f:L77636f:{c.instructions+=5;NFSU2_TR(0x77636f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776371:{NFSU2_TR(0x776371);
u8 U[4];
w4(U+0,u32(0x797ee4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776376:{NFSU2_TR(0x776376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776379:{NFSU2_TR(0x776379);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77637a:{NFSU2_TR(0x77637a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77637full));
TAIL_STATIC(0x6d7120u,6d7);
}
B77637f:L77637f:{c.instructions+=2;NFSU2_TR(0x77637f);
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
B776382:{NFSU2_TR(0x776382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776383:L776383:{c.instructions+=5;NFSU2_TR(0x776383);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776385:{NFSU2_TR(0x776385);
u8 U[4];
w4(U+0,u32(0x797ed0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77638a:{NFSU2_TR(0x77638a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77638d:{NFSU2_TR(0x77638d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77638e:{NFSU2_TR(0x77638e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776393ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776393:L776393:{c.instructions+=2;NFSU2_TR(0x776393);
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
B776396:{NFSU2_TR(0x776396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776397:L776397:{c.instructions+=2;NFSU2_TR(0x776397);
w4(R+0,u32(0x7e18b8ull));
}
B77639c:{NFSU2_TR(0x77639c);
TAIL_STATIC(0x75bfd2u,75b);
}
B7763b0:L7763b0:{c.instructions+=2;NFSU2_TR(0x7763b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7763b3:{NFSU2_TR(0x7763b3);
TAIL_STATIC(0x510d40u,510);
}
B7763b8:L7763b8:{c.instructions+=3;NFSU2_TR(0x7763b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7763bb:{NFSU2_TR(0x7763bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8cull))));
}
B7763c1:{NFSU2_TR(0x7763c1);
TAIL_STATIC(0x4cbba0u,4cb);
}
B7763c6:L7763c6:{c.instructions+=3;NFSU2_TR(0x7763c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7763c9:{NFSU2_TR(0x7763c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x138ull))));
}
B7763cf:{NFSU2_TR(0x7763cf);
TAIL_STATIC(0x52ea90u,52e);
}
B7763d4:L7763d4:{c.instructions+=3;NFSU2_TR(0x7763d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7763d7:{NFSU2_TR(0x7763d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f4ull))));
}
B7763dd:{NFSU2_TR(0x7763dd);
TAIL_STATIC(0x4985a0u,498);
}
B7763e2:L7763e2:{c.instructions+=2;NFSU2_TR(0x7763e2);
w4(R+0,u32(0x7e18f4ull));
}
B7763e7:{NFSU2_TR(0x7763e7);
TAIL_STATIC(0x75bfd2u,75b);
}
B7763f0:L7763f0:{c.instructions+=2;NFSU2_TR(0x7763f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7763f3:{NFSU2_TR(0x7763f3);
TAIL_STATIC(0x510d40u,510);
}
B7763f8:L7763f8:{c.instructions+=3;NFSU2_TR(0x7763f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7763fb:{NFSU2_TR(0x7763fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B7763fe:{NFSU2_TR(0x7763fe);
TAIL_STATIC(0x4cc240u,4cc);
}
B776403:L776403:{c.instructions+=2;NFSU2_TR(0x776403);
w4(R+0,u32(0x7e1920ull));
}
B776408:{NFSU2_TR(0x776408);
TAIL_STATIC(0x75bfd2u,75b);
}
B776410:L776410:{c.instructions+=2;NFSU2_TR(0x776410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776413:{NFSU2_TR(0x776413);
TAIL_STATIC(0x510d40u,510);
}
B776418:L776418:{c.instructions+=2;NFSU2_TR(0x776418);
w4(R+0,u32(0x7dee70ull));
}
B77641d:{NFSU2_TR(0x77641d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776430:L776430:{c.instructions+=5;NFSU2_TR(0x776430);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776432:{NFSU2_TR(0x776432);
u8 U[4];
w4(U+0,u32(0x797fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776437:{NFSU2_TR(0x776437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77643a:{NFSU2_TR(0x77643a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77643b:{NFSU2_TR(0x77643b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776440ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776440:L776440:{c.instructions+=2;NFSU2_TR(0x776440);
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
B776443:{NFSU2_TR(0x776443);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776444:L776444:{c.instructions+=2;NFSU2_TR(0x776444);
w4(R+0,u32(0x7e1944ull));
}
B776449:{NFSU2_TR(0x776449);
TAIL_STATIC(0x75bfd2u,75b);
}
B776450:L776450:{c.instructions+=5;NFSU2_TR(0x776450);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776452:{NFSU2_TR(0x776452);
u8 U[4];
w4(U+0,u32(0x797fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776457:{NFSU2_TR(0x776457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77645a:{NFSU2_TR(0x77645a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77645b:{NFSU2_TR(0x77645b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776460ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776460:L776460:{c.instructions+=2;NFSU2_TR(0x776460);
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
B776463:{NFSU2_TR(0x776463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776464:L776464:{c.instructions+=2;NFSU2_TR(0x776464);
w4(R+0,u32(0x7e1968ull));
}
B776469:{NFSU2_TR(0x776469);
TAIL_STATIC(0x75bfd2u,75b);
}
B776470:L776470:{c.instructions+=2;NFSU2_TR(0x776470);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B776476:{NFSU2_TR(0x776476);
TAIL_STATIC(0x401800u,401);
}
B77647b:L77647b:{c.instructions+=5;NFSU2_TR(0x77647b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77647d:{NFSU2_TR(0x77647d);
u8 U[4];
w4(U+0,u32(0x798004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776482:{NFSU2_TR(0x776482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776488:{NFSU2_TR(0x776488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776489:{NFSU2_TR(0x776489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77648eull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77648e:L77648e:{c.instructions+=2;NFSU2_TR(0x77648e);
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
B776491:{NFSU2_TR(0x776491);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776492:L776492:{c.instructions+=2;NFSU2_TR(0x776492);
w4(R+0,u32(0x7e1994ull));
}
B776497:{NFSU2_TR(0x776497);
TAIL_STATIC(0x75bfd2u,75b);
}
B7764a0:L7764a0:{c.instructions+=5;NFSU2_TR(0x7764a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764a2:{NFSU2_TR(0x7764a2);
u8 U[4];
w4(U+0,u32(0x798028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764a7:{NFSU2_TR(0x7764a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7764aa:{NFSU2_TR(0x7764aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764ab:{NFSU2_TR(0x7764ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7764b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7764b0:L7764b0:{c.instructions+=2;NFSU2_TR(0x7764b0);
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
B7764b3:{NFSU2_TR(0x7764b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7764b4:L7764b4:{c.instructions+=2;NFSU2_TR(0x7764b4);
w4(R+0,u32(0x7e19b8ull));
}
B7764b9:{NFSU2_TR(0x7764b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7764c0:L7764c0:{c.instructions+=5;NFSU2_TR(0x7764c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764c2:{NFSU2_TR(0x7764c2);
u8 U[4];
w4(U+0,u32(0x798038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764c7:{NFSU2_TR(0x7764c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7764ca:{NFSU2_TR(0x7764ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764cb:{NFSU2_TR(0x7764cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7764d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7764d0:L7764d0:{c.instructions+=2;NFSU2_TR(0x7764d0);
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
B7764d3:{NFSU2_TR(0x7764d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7764d4:L7764d4:{c.instructions+=2;NFSU2_TR(0x7764d4);
w4(R+0,u32(0x7e19dcull));
}
B7764d9:{NFSU2_TR(0x7764d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7764e0:L7764e0:{c.instructions+=5;NFSU2_TR(0x7764e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764e2:{NFSU2_TR(0x7764e2);
u8 U[4];
w4(U+0,u32(0x798044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764e7:{NFSU2_TR(0x7764e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7764ea:{NFSU2_TR(0x7764ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7764eb:{NFSU2_TR(0x7764eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7764f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7764f0:L7764f0:{c.instructions+=2;NFSU2_TR(0x7764f0);
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
B7764f3:{NFSU2_TR(0x7764f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7764f4:L7764f4:{c.instructions+=2;NFSU2_TR(0x7764f4);
w4(R+0,u32(0x7e1a00ull));
}
B7764f9:{NFSU2_TR(0x7764f9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776500:L776500:{c.instructions+=5;NFSU2_TR(0x776500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776502:{NFSU2_TR(0x776502);
u8 U[4];
w4(U+0,u32(0x798054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776507:{NFSU2_TR(0x776507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77650a:{NFSU2_TR(0x77650a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77650b:{NFSU2_TR(0x77650b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776510ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776510:L776510:{c.instructions+=2;NFSU2_TR(0x776510);
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
B776513:{NFSU2_TR(0x776513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776514:L776514:{c.instructions+=2;NFSU2_TR(0x776514);
w4(R+0,u32(0x7e1a24ull));
}
B776519:{NFSU2_TR(0x776519);
TAIL_STATIC(0x75bfd2u,75b);
}
B776520:L776520:{c.instructions+=2;NFSU2_TR(0x776520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776526:{NFSU2_TR(0x776526);
TAIL_STATIC(0x510d40u,510);
}
B77652b:L77652b:{c.instructions+=3;NFSU2_TR(0x77652b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776531:{NFSU2_TR(0x776531);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B776534:{NFSU2_TR(0x776534);
TAIL_STATIC(0x4cbba0u,4cb);
}
B776539:L776539:{c.instructions+=3;NFSU2_TR(0x776539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77653f:{NFSU2_TR(0x77653f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x120ull))));
}
B776545:{NFSU2_TR(0x776545);
TAIL_STATIC(0x49d870u,49d);
}
B77654a:L77654a:{c.instructions+=2;NFSU2_TR(0x77654a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B776550:{NFSU2_TR(0x776550);
TAIL_STATIC(0x4017f0u,401);
}
B776555:L776555:{c.instructions+=2;NFSU2_TR(0x776555);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77655b:{NFSU2_TR(0x77655b);
TAIL_STATIC(0x401800u,401);
}
B776560:L776560:{c.instructions+=2;NFSU2_TR(0x776560);
w4(R+0,u32(0x7e1a68ull));
}
B776565:{NFSU2_TR(0x776565);
TAIL_STATIC(0x75bfd2u,75b);
}
B77656e:L77656e:{c.instructions+=1;NFSU2_TR(0x77656e);
u8 U[4];
{SPILL();c.pc=0x77656eu;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B776570:L776570:{c.instructions+=5;NFSU2_TR(0x776570);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776572:{NFSU2_TR(0x776572);
u8 U[4];
w4(U+0,u32(0x7980f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776577:{NFSU2_TR(0x776577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77657a:{NFSU2_TR(0x77657a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77657b:{NFSU2_TR(0x77657b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776580ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776580:L776580:{c.instructions+=2;NFSU2_TR(0x776580);
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
B776583:{NFSU2_TR(0x776583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776584:L776584:{c.instructions+=2;NFSU2_TR(0x776584);
w4(R+0,u32(0x7e1a8cull));
}
B776589:{NFSU2_TR(0x776589);
TAIL_STATIC(0x75bfd2u,75b);
}
B776590:L776590:{c.instructions+=5;NFSU2_TR(0x776590);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776592:{NFSU2_TR(0x776592);
u8 U[4];
w4(U+0,u32(0x798100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776597:{NFSU2_TR(0x776597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77659a:{NFSU2_TR(0x77659a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77659b:{NFSU2_TR(0x77659b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7765a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7765a0:L7765a0:{c.instructions+=2;NFSU2_TR(0x7765a0);
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
B7765a3:{NFSU2_TR(0x7765a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7765a4:L7765a4:{c.instructions+=2;NFSU2_TR(0x7765a4);
w4(R+0,u32(0x7e1ab0ull));
}
B7765a9:{NFSU2_TR(0x7765a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7765b0:L7765b0:{c.instructions+=5;NFSU2_TR(0x7765b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765b2:{NFSU2_TR(0x7765b2);
u8 U[4];
w4(U+0,u32(0x798114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765b7:{NFSU2_TR(0x7765b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7765ba:{NFSU2_TR(0x7765ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765bb:{NFSU2_TR(0x7765bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7765c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7765c0:L7765c0:{c.instructions+=2;NFSU2_TR(0x7765c0);
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
B7765c3:{NFSU2_TR(0x7765c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7765c4:L7765c4:{c.instructions+=2;NFSU2_TR(0x7765c4);
w4(R+0,u32(0x7e1ad4ull));
}
B7765c9:{NFSU2_TR(0x7765c9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7765d0:L7765d0:{c.instructions+=5;NFSU2_TR(0x7765d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765d2:{NFSU2_TR(0x7765d2);
u8 U[4];
w4(U+0,u32(0x798128ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765d7:{NFSU2_TR(0x7765d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7765da:{NFSU2_TR(0x7765da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765db:{NFSU2_TR(0x7765db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7765e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7765e0:L7765e0:{c.instructions+=2;NFSU2_TR(0x7765e0);
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
B7765e3:{NFSU2_TR(0x7765e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7765e4:L7765e4:{c.instructions+=2;NFSU2_TR(0x7765e4);
w4(R+0,u32(0x7e1af8ull));
}
B7765e9:{NFSU2_TR(0x7765e9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7765f0:L7765f0:{c.instructions+=5;NFSU2_TR(0x7765f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765f2:{NFSU2_TR(0x7765f2);
u8 U[4];
w4(U+0,u32(0x798218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765f7:{NFSU2_TR(0x7765f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7765fa:{NFSU2_TR(0x7765fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7765fb:{NFSU2_TR(0x7765fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776600ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776600:L776600:{c.instructions+=2;NFSU2_TR(0x776600);
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
B776603:{NFSU2_TR(0x776603);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776604:L776604:{c.instructions+=2;NFSU2_TR(0x776604);
w4(R+0,u32(0x7e1b1cull));
}
B776609:{NFSU2_TR(0x776609);
TAIL_STATIC(0x75bfd2u,75b);
}
B776610:L776610:{c.instructions+=2;NFSU2_TR(0x776610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776613:{NFSU2_TR(0x776613);
TAIL_STATIC(0x510d40u,510);
}
B776618:L776618:{c.instructions+=3;NFSU2_TR(0x776618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77661b:{NFSU2_TR(0x77661b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B77661e:{NFSU2_TR(0x77661e);
TAIL_STATIC(0x4cbaf0u,4cb);
}
B776623:L776623:{c.instructions+=3;NFSU2_TR(0x776623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776626:{NFSU2_TR(0x776626);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1a4ull))));
}
B77662c:{NFSU2_TR(0x77662c);
TAIL_STATIC(0x4cbba0u,4cb);
}
B776631:L776631:{c.instructions+=3;NFSU2_TR(0x776631);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776634:{NFSU2_TR(0x776634);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x380ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x380ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x380ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77663a:{NFSU2_TR(0x77663a);
TAIL_STATIC(0x4957a0u,495);
}
B77663f:L77663f:{c.instructions+=2;NFSU2_TR(0x77663f);
w4(R+0,u32(0x7e1b58ull));
}
B776644:{NFSU2_TR(0x776644);
TAIL_STATIC(0x75bfd2u,75b);
}
B776650:L776650:{c.instructions+=5;NFSU2_TR(0x776650);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776652:{NFSU2_TR(0x776652);
u8 U[4];
w4(U+0,u32(0x798274ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776657:{NFSU2_TR(0x776657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77665a:{NFSU2_TR(0x77665a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77665b:{NFSU2_TR(0x77665b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776660ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776660:L776660:{c.instructions+=2;NFSU2_TR(0x776660);
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
B776663:{NFSU2_TR(0x776663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776664:L776664:{c.instructions+=2;NFSU2_TR(0x776664);
w4(R+0,u32(0x7e1b7cull));
}
B776669:{NFSU2_TR(0x776669);
TAIL_STATIC(0x75bfd2u,75b);
}
B776670:L776670:{c.instructions+=5;NFSU2_TR(0x776670);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776672:{NFSU2_TR(0x776672);
u8 U[4];
w4(U+0,u32(0x79829cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776677:{NFSU2_TR(0x776677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77667a:{NFSU2_TR(0x77667a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77667b:{NFSU2_TR(0x77667b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776680ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776680:L776680:{c.instructions+=2;NFSU2_TR(0x776680);
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
B776683:{NFSU2_TR(0x776683);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776684:L776684:{c.instructions+=2;NFSU2_TR(0x776684);
w4(R+0,u32(0x7e1bccull));
}
B776689:{NFSU2_TR(0x776689);
TAIL_STATIC(0x75bfd2u,75b);
}
B776690:L776690:{c.instructions+=5;NFSU2_TR(0x776690);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776692:{NFSU2_TR(0x776692);
u8 U[4];
w4(U+0,u32(0x7982b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776697:{NFSU2_TR(0x776697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77669a:{NFSU2_TR(0x77669a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77669b:{NFSU2_TR(0x77669b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7766a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7766a0:L7766a0:{c.instructions+=2;NFSU2_TR(0x7766a0);
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
B7766a3:{NFSU2_TR(0x7766a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7766a4:L7766a4:{c.instructions+=2;NFSU2_TR(0x7766a4);
w4(R+0,u32(0x7e1bf0ull));
}
B7766a9:{NFSU2_TR(0x7766a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7766b0:L7766b0:{c.instructions+=5;NFSU2_TR(0x7766b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7766b2:{NFSU2_TR(0x7766b2);
u8 U[4];
w4(U+0,u32(0x7982c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7766b7:{NFSU2_TR(0x7766b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7766ba:{NFSU2_TR(0x7766ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7766bb:{NFSU2_TR(0x7766bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7766c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7766c0:L7766c0:{c.instructions+=2;NFSU2_TR(0x7766c0);
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
B7766c3:{NFSU2_TR(0x7766c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7766c4:L7766c4:{c.instructions+=2;NFSU2_TR(0x7766c4);
w4(R+0,u32(0x7e1c14ull));
}
B7766c9:{NFSU2_TR(0x7766c9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7766d0:L7766d0:{c.instructions+=2;NFSU2_TR(0x7766d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7766d3:{NFSU2_TR(0x7766d3);
TAIL_STATIC(0x510d40u,510);
}
B7766d8:L7766d8:{c.instructions+=3;NFSU2_TR(0x7766d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7766db:{NFSU2_TR(0x7766db);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x54ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7766de:{NFSU2_TR(0x7766de);
TAIL_STATIC(0x4957a0u,495);
}
B7766e3:L7766e3:{c.instructions+=3;NFSU2_TR(0x7766e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7766e6:{NFSU2_TR(0x7766e6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x98ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x98ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7766ec:{NFSU2_TR(0x7766ec);
TAIL_STATIC(0x4957a0u,495);
}
B7766f1:L7766f1:{c.instructions+=3;NFSU2_TR(0x7766f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7766f4:{NFSU2_TR(0x7766f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xdcull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xdcull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdcull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7766fa:{NFSU2_TR(0x7766fa);
TAIL_STATIC(0x4957a0u,495);
}
B7766ff:L7766ff:{c.instructions+=2;NFSU2_TR(0x7766ff);
w4(R+0,u32(0x7defe4ull));
}
B776704:{NFSU2_TR(0x776704);
TAIL_STATIC(0x75bfd2u,75b);
}
B776710:L776710:{c.instructions+=2;NFSU2_TR(0x776710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776713:{NFSU2_TR(0x776713);
TAIL_STATIC(0x4df030u,4df);
}
B776718:L776718:{c.instructions+=2;NFSU2_TR(0x776718);
w4(R+0,u32(0x7e1c38ull));
}
B77671d:{NFSU2_TR(0x77671d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776730:L776730:{c.instructions+=5;NFSU2_TR(0x776730);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776732:{NFSU2_TR(0x776732);
u8 U[4];
w4(U+0,u32(0x7982f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776737:{NFSU2_TR(0x776737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77673a:{NFSU2_TR(0x77673a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77673b:{NFSU2_TR(0x77673b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776740ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776740:L776740:{c.instructions+=2;NFSU2_TR(0x776740);
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
B776743:{NFSU2_TR(0x776743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776744:L776744:{c.instructions+=2;NFSU2_TR(0x776744);
w4(R+0,u32(0x7e1c5cull));
}
B776749:{NFSU2_TR(0x776749);
TAIL_STATIC(0x75bfd2u,75b);
}
B776750:L776750:{c.instructions+=5;NFSU2_TR(0x776750);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776752:{NFSU2_TR(0x776752);
u8 U[4];
w4(U+0,u32(0x798324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776757:{NFSU2_TR(0x776757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77675a:{NFSU2_TR(0x77675a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77675b:{NFSU2_TR(0x77675b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776760ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776760:L776760:{c.instructions+=2;NFSU2_TR(0x776760);
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
B776763:{NFSU2_TR(0x776763);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776764:L776764:{c.instructions+=2;NFSU2_TR(0x776764);
w4(R+0,u32(0x7e1c80ull));
}
B776769:{NFSU2_TR(0x776769);
TAIL_STATIC(0x75bfd2u,75b);
}
B776770:L776770:{c.instructions+=5;NFSU2_TR(0x776770);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776772:{NFSU2_TR(0x776772);
u8 U[4];
w4(U+0,u32(0x798338ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776777:{NFSU2_TR(0x776777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77677a:{NFSU2_TR(0x77677a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77677b:{NFSU2_TR(0x77677b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776780ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776780:L776780:{c.instructions+=2;NFSU2_TR(0x776780);
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
B776783:{NFSU2_TR(0x776783);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776784:L776784:{c.instructions+=2;NFSU2_TR(0x776784);
w4(R+0,u32(0x7e1ca4ull));
}
B776789:{NFSU2_TR(0x776789);
TAIL_STATIC(0x75bfd2u,75b);
}
B776790:L776790:{c.instructions+=5;NFSU2_TR(0x776790);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776792:{NFSU2_TR(0x776792);
u8 U[4];
w4(U+0,u32(0x79834cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776797:{NFSU2_TR(0x776797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77679a:{NFSU2_TR(0x77679a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77679b:{NFSU2_TR(0x77679b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7767a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7767a0:L7767a0:{c.instructions+=2;NFSU2_TR(0x7767a0);
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
B7767a3:{NFSU2_TR(0x7767a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7767a4:L7767a4:{c.instructions+=2;NFSU2_TR(0x7767a4);
w4(R+0,u32(0x7e1cc8ull));
}
B7767a9:{NFSU2_TR(0x7767a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7767b0:L7767b0:{c.instructions+=2;NFSU2_TR(0x7767b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7767b3:{NFSU2_TR(0x7767b3);
TAIL_STATIC(0x510d40u,510);
}
B7767b8:L7767b8:{c.instructions+=3;NFSU2_TR(0x7767b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7767bb:{NFSU2_TR(0x7767bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B7767be:{NFSU2_TR(0x7767be);
TAIL_STATIC(0x4def30u,4de);
}
B7767c3:L7767c3:{c.instructions+=2;NFSU2_TR(0x7767c3);
w4(R+0,u32(0x7e1cf4ull));
}
B7767c8:{NFSU2_TR(0x7767c8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7767d0:L7767d0:{c.instructions+=3;NFSU2_TR(0x7767d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7767d3:{NFSU2_TR(0x7767d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7767d6:{NFSU2_TR(0x7767d6);
TAIL_STATIC(0x4e9180u,4e9);
}
B7767db:L7767db:{c.instructions+=3;NFSU2_TR(0x7767db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7767de:{NFSU2_TR(0x7767de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B7767e1:{NFSU2_TR(0x7767e1);
TAIL_STATIC(0x4835c0u,483);
}
B7767e6:L7767e6:{c.instructions+=2;NFSU2_TR(0x7767e6);
w4(R+0,u32(0x7e1d20ull));
}
B7767eb:{NFSU2_TR(0x7767eb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7767f0:L7767f0:{c.instructions+=5;NFSU2_TR(0x7767f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7767f2:{NFSU2_TR(0x7767f2);
u8 U[4];
w4(U+0,u32(0x798378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7767f7:{NFSU2_TR(0x7767f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7767fa:{NFSU2_TR(0x7767fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7767fb:{NFSU2_TR(0x7767fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776800ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776800:L776800:{c.instructions+=2;NFSU2_TR(0x776800);
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
B776803:{NFSU2_TR(0x776803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776804:L776804:{c.instructions+=2;NFSU2_TR(0x776804);
w4(R+0,u32(0x7e1d44ull));
}
B776809:{NFSU2_TR(0x776809);
TAIL_STATIC(0x75bfd2u,75b);
}
B776810:L776810:{c.instructions+=2;NFSU2_TR(0x776810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776813:{NFSU2_TR(0x776813);
TAIL_STATIC(0x4ea360u,4ea);
}
B776818:L776818:{c.instructions+=3;NFSU2_TR(0x776818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77681b:{NFSU2_TR(0x77681b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8cull))));
}
B776821:{NFSU2_TR(0x776821);
TAIL_STATIC(0x4def30u,4de);
}
B776826:L776826:{c.instructions+=2;NFSU2_TR(0x776826);
w4(R+0,u32(0x7e1da4ull));
}
B77682b:{NFSU2_TR(0x77682b);
TAIL_STATIC(0x75bfd2u,75b);
}
B776830:L776830:{c.instructions+=5;NFSU2_TR(0x776830);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776832:{NFSU2_TR(0x776832);
u8 U[4];
w4(U+0,u32(0x7983a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776837:{NFSU2_TR(0x776837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77683a:{NFSU2_TR(0x77683a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77683b:{NFSU2_TR(0x77683b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776840ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776840:L776840:{c.instructions+=2;NFSU2_TR(0x776840);
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
B776843:{NFSU2_TR(0x776843);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776844:L776844:{c.instructions+=2;NFSU2_TR(0x776844);
w4(R+0,u32(0x7e1dc8ull));
}
B776849:{NFSU2_TR(0x776849);
TAIL_STATIC(0x75bfd2u,75b);
}
B776850:L776850:{c.instructions+=5;NFSU2_TR(0x776850);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776852:{NFSU2_TR(0x776852);
u8 U[4];
w4(U+0,u32(0x7983b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776857:{NFSU2_TR(0x776857);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77685a:{NFSU2_TR(0x77685a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77685b:{NFSU2_TR(0x77685b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776860ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776860:L776860:{c.instructions+=2;NFSU2_TR(0x776860);
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
B776863:{NFSU2_TR(0x776863);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776864:L776864:{c.instructions+=2;NFSU2_TR(0x776864);
w4(R+0,u32(0x7e1decull));
}
B776869:{NFSU2_TR(0x776869);
TAIL_STATIC(0x75bfd2u,75b);
}
B776870:L776870:{c.instructions+=5;NFSU2_TR(0x776870);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776872:{NFSU2_TR(0x776872);
u8 U[4];
w4(U+0,u32(0x7983bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776877:{NFSU2_TR(0x776877);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77687a:{NFSU2_TR(0x77687a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77687b:{NFSU2_TR(0x77687b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776880ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776880:L776880:{c.instructions+=2;NFSU2_TR(0x776880);
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
B776883:{NFSU2_TR(0x776883);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776884:L776884:{c.instructions+=2;NFSU2_TR(0x776884);
w4(R+0,u32(0x7e1e10ull));
}
B776889:{NFSU2_TR(0x776889);
TAIL_STATIC(0x75bfd2u,75b);
}
B776890:L776890:{c.instructions+=5;NFSU2_TR(0x776890);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776892:{NFSU2_TR(0x776892);
u8 U[4];
w4(U+0,u32(0x7983d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776897:{NFSU2_TR(0x776897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77689a:{NFSU2_TR(0x77689a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77689b:{NFSU2_TR(0x77689b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7768a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7768a0:L7768a0:{c.instructions+=2;NFSU2_TR(0x7768a0);
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
B7768a3:{NFSU2_TR(0x7768a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7768a4:L7768a4:{c.instructions+=2;NFSU2_TR(0x7768a4);
w4(R+0,u32(0x7e1e34ull));
}
B7768a9:{NFSU2_TR(0x7768a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7768b0:L7768b0:{c.instructions+=5;NFSU2_TR(0x7768b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7768b2:{NFSU2_TR(0x7768b2);
u8 U[4];
w4(U+0,u32(0x7983e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7768b7:{NFSU2_TR(0x7768b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7768ba:{NFSU2_TR(0x7768ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7768bb:{NFSU2_TR(0x7768bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7768c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7768c0:L7768c0:{c.instructions+=2;NFSU2_TR(0x7768c0);
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
B7768c3:{NFSU2_TR(0x7768c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7768c4:L7768c4:{c.instructions+=2;NFSU2_TR(0x7768c4);
w4(R+0,u32(0x7e1e58ull));
}
B7768c9:{NFSU2_TR(0x7768c9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7768d0:L7768d0:{c.instructions+=5;NFSU2_TR(0x7768d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7768d2:{NFSU2_TR(0x7768d2);
u8 U[4];
w4(U+0,u32(0x798400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7768d7:{NFSU2_TR(0x7768d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7768da:{NFSU2_TR(0x7768da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7768db:{NFSU2_TR(0x7768db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7768e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7768e0:L7768e0:{c.instructions+=2;NFSU2_TR(0x7768e0);
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
B7768e3:{NFSU2_TR(0x7768e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7768e4:L7768e4:{c.instructions+=2;NFSU2_TR(0x7768e4);
w4(R+0,u32(0x7e1e7cull));
}
B7768e9:{NFSU2_TR(0x7768e9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7768f0:L7768f0:{c.instructions+=2;NFSU2_TR(0x7768f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7768f3:{NFSU2_TR(0x7768f3);
TAIL_STATIC(0x4835c0u,483);
}
B7768f8:L7768f8:{c.instructions+=2;NFSU2_TR(0x7768f8);
w4(R+0,u32(0x7e1ea0ull));
}
B7768fd:{NFSU2_TR(0x7768fd);
TAIL_STATIC(0x75bfd2u,75b);
}
B776910:L776910:{c.instructions+=2;NFSU2_TR(0x776910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776913:{NFSU2_TR(0x776913);
TAIL_STATIC(0x4835c0u,483);
}
B776918:L776918:{c.instructions+=2;NFSU2_TR(0x776918);
w4(R+0,u32(0x7e16d4ull));
}
B77691d:{NFSU2_TR(0x77691d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776930:L776930:{c.instructions+=2;NFSU2_TR(0x776930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776933:{NFSU2_TR(0x776933);
TAIL_STATIC(0x4835c0u,483);
}
B776938:L776938:{c.instructions+=2;NFSU2_TR(0x776938);
w4(R+0,u32(0x7e1ec4ull));
}
B77693d:{NFSU2_TR(0x77693d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776950:L776950:{c.instructions+=2;NFSU2_TR(0x776950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776953:{NFSU2_TR(0x776953);
TAIL_STATIC(0x4835c0u,483);
}
B776958:L776958:{c.instructions+=2;NFSU2_TR(0x776958);
w4(R+0,u32(0x7e1ee8ull));
}
B77695d:{NFSU2_TR(0x77695d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776970:L776970:{c.instructions+=2;NFSU2_TR(0x776970);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776973:{NFSU2_TR(0x776973);
TAIL_STATIC(0x4835c0u,483);
}
B776978:L776978:{c.instructions+=3;NFSU2_TR(0x776978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77697b:{NFSU2_TR(0x77697b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B77697e:{NFSU2_TR(0x77697e);
TAIL_STATIC(0x4def30u,4de);
}
B776983:L776983:{c.instructions+=2;NFSU2_TR(0x776983);
w4(R+0,u32(0x7e1f14ull));
}
B776988:{NFSU2_TR(0x776988);
TAIL_STATIC(0x75bfd2u,75b);
}
B776990:L776990:{c.instructions+=3;NFSU2_TR(0x776990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776993:{NFSU2_TR(0x776993);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B776996:{NFSU2_TR(0x776996);
TAIL_STATIC(0x4835c0u,483);
}
B77699b:L77699b:{c.instructions+=3;NFSU2_TR(0x77699b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77699e:{NFSU2_TR(0x77699e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B7769a1:{NFSU2_TR(0x7769a1);
TAIL_STATIC(0x4358e0u,435);
}
B7769a6:L7769a6:{c.instructions+=2;NFSU2_TR(0x7769a6);
w4(R+0,u32(0x7e1f40ull));
}
B7769ab:{NFSU2_TR(0x7769ab);
TAIL_STATIC(0x75bfd2u,75b);
}
B7769b0:L7769b0:{c.instructions+=2;NFSU2_TR(0x7769b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7769b4:{NFSU2_TR(0x7769b4);
if(r1(R+518)){{goto L7769c8;}}
}
B7769ba:L7769ba:{c.instructions+=4;NFSU2_TR(0x7769ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7769bd:{NFSU2_TR(0x7769bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B7769c0:{NFSU2_TR(0x7769c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7769c3:{NFSU2_TR(0x7769c3);
{goto L7769cf;}
}
B7769c8:L7769c8:{c.instructions+=1;NFSU2_TR(0x7769c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7769cf:L7769cf:{c.instructions+=2;NFSU2_TR(0x7769cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7769d2:{NFSU2_TR(0x7769d2);
TAIL_STATIC(0x4835c0u,483);
}
B7769d7:L7769d7:{c.instructions+=2;NFSU2_TR(0x7769d7);
w4(R+0,u32(0x7e1f64ull));
}
B7769dc:{NFSU2_TR(0x7769dc);
TAIL_STATIC(0x75bfd2u,75b);
}
B7769f0:L7769f0:{c.instructions+=5;NFSU2_TR(0x7769f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7769f2:{NFSU2_TR(0x7769f2);
u8 U[4];
w4(U+0,u32(0x798efcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7769f7:{NFSU2_TR(0x7769f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7769fa:{NFSU2_TR(0x7769fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7769fb:{NFSU2_TR(0x7769fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a00ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a00:L776a00:{c.instructions+=2;NFSU2_TR(0x776a00);
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
B776a03:{NFSU2_TR(0x776a03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a04:L776a04:{c.instructions+=5;NFSU2_TR(0x776a04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a06:{NFSU2_TR(0x776a06);
u8 U[4];
w4(U+0,u32(0x798ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a0b:{NFSU2_TR(0x776a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a0e:{NFSU2_TR(0x776a0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a0f:{NFSU2_TR(0x776a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a14ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a14:L776a14:{c.instructions+=2;NFSU2_TR(0x776a14);
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
B776a17:{NFSU2_TR(0x776a17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a18:L776a18:{c.instructions+=5;NFSU2_TR(0x776a18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a1a:{NFSU2_TR(0x776a1a);
u8 U[4];
w4(U+0,u32(0x798ee4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a1f:{NFSU2_TR(0x776a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a22:{NFSU2_TR(0x776a22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a23:{NFSU2_TR(0x776a23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a28ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a28:L776a28:{c.instructions+=2;NFSU2_TR(0x776a28);
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
B776a2b:{NFSU2_TR(0x776a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a2c:L776a2c:{c.instructions+=5;NFSU2_TR(0x776a2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a2e:{NFSU2_TR(0x776a2e);
u8 U[4];
w4(U+0,u32(0x798ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a33:{NFSU2_TR(0x776a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a36:{NFSU2_TR(0x776a36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a37:{NFSU2_TR(0x776a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a3cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a3c:L776a3c:{c.instructions+=2;NFSU2_TR(0x776a3c);
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
B776a3f:{NFSU2_TR(0x776a3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a40:L776a40:{c.instructions+=5;NFSU2_TR(0x776a40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a42:{NFSU2_TR(0x776a42);
u8 U[4];
w4(U+0,u32(0x798ed8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a47:{NFSU2_TR(0x776a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a4a:{NFSU2_TR(0x776a4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a4b:{NFSU2_TR(0x776a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a50:L776a50:{c.instructions+=2;NFSU2_TR(0x776a50);
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
B776a53:{NFSU2_TR(0x776a53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a54:L776a54:{c.instructions+=5;NFSU2_TR(0x776a54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a56:{NFSU2_TR(0x776a56);
u8 U[4];
w4(U+0,u32(0x798ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a5b:{NFSU2_TR(0x776a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a5e:{NFSU2_TR(0x776a5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a5f:{NFSU2_TR(0x776a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a64:L776a64:{c.instructions+=2;NFSU2_TR(0x776a64);
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
B776a67:{NFSU2_TR(0x776a67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a68:L776a68:{c.instructions+=5;NFSU2_TR(0x776a68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a6a:{NFSU2_TR(0x776a6a);
u8 U[4];
w4(U+0,u32(0x798eb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a6f:{NFSU2_TR(0x776a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a72:{NFSU2_TR(0x776a72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a73:{NFSU2_TR(0x776a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a78ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a78:L776a78:{c.instructions+=2;NFSU2_TR(0x776a78);
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
B776a7b:{NFSU2_TR(0x776a7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a7c:L776a7c:{c.instructions+=5;NFSU2_TR(0x776a7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a7e:{NFSU2_TR(0x776a7e);
u8 U[4];
w4(U+0,u32(0x798ea8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a83:{NFSU2_TR(0x776a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a86:{NFSU2_TR(0x776a86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a87:{NFSU2_TR(0x776a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776a8cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776a8c:L776a8c:{c.instructions+=2;NFSU2_TR(0x776a8c);
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
B776a8f:{NFSU2_TR(0x776a8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776a90:L776a90:{c.instructions+=5;NFSU2_TR(0x776a90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a92:{NFSU2_TR(0x776a92);
u8 U[4];
w4(U+0,u32(0x798e9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a97:{NFSU2_TR(0x776a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776a9a:{NFSU2_TR(0x776a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776a9b:{NFSU2_TR(0x776a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776aa0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776aa0:L776aa0:{c.instructions+=2;NFSU2_TR(0x776aa0);
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
B776aa3:{NFSU2_TR(0x776aa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776aa4:L776aa4:{c.instructions+=5;NFSU2_TR(0x776aa4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776aa6:{NFSU2_TR(0x776aa6);
u8 U[4];
w4(U+0,u32(0x798a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776aab:{NFSU2_TR(0x776aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776aae:{NFSU2_TR(0x776aae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776aaf:{NFSU2_TR(0x776aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776ab4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776ab4:L776ab4:{c.instructions+=2;NFSU2_TR(0x776ab4);
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
B776ab7:{NFSU2_TR(0x776ab7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776ab8:L776ab8:{c.instructions+=5;NFSU2_TR(0x776ab8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776aba:{NFSU2_TR(0x776aba);
u8 U[4];
w4(U+0,u32(0x798e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776abf:{NFSU2_TR(0x776abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776ac2:{NFSU2_TR(0x776ac2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ac3:{NFSU2_TR(0x776ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776ac8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776ac8:L776ac8:{c.instructions+=2;NFSU2_TR(0x776ac8);
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
B776acb:{NFSU2_TR(0x776acb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776acc:L776acc:{c.instructions+=5;NFSU2_TR(0x776acc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ace:{NFSU2_TR(0x776ace);
u8 U[4];
w4(U+0,u32(0x798e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ad3:{NFSU2_TR(0x776ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776ad6:{NFSU2_TR(0x776ad6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ad7:{NFSU2_TR(0x776ad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776adcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776adc:L776adc:{c.instructions+=2;NFSU2_TR(0x776adc);
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
B776adf:{NFSU2_TR(0x776adf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776ae0:L776ae0:{c.instructions+=5;NFSU2_TR(0x776ae0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ae2:{NFSU2_TR(0x776ae2);
u8 U[4];
w4(U+0,u32(0x798e78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ae7:{NFSU2_TR(0x776ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776aea:{NFSU2_TR(0x776aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776aeb:{NFSU2_TR(0x776aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776af0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776af0:L776af0:{c.instructions+=2;NFSU2_TR(0x776af0);
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
B776af3:{NFSU2_TR(0x776af3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776af4:L776af4:{c.instructions+=5;NFSU2_TR(0x776af4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776af6:{NFSU2_TR(0x776af6);
u8 U[4];
w4(U+0,u32(0x798e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776afb:{NFSU2_TR(0x776afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776afe:{NFSU2_TR(0x776afe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776aff:{NFSU2_TR(0x776aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b04ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b04:L776b04:{c.instructions+=2;NFSU2_TR(0x776b04);
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
B776b07:{NFSU2_TR(0x776b07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b08:L776b08:{c.instructions+=5;NFSU2_TR(0x776b08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b0a:{NFSU2_TR(0x776b0a);
u8 U[4];
w4(U+0,u32(0x798e58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b0f:{NFSU2_TR(0x776b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b12:{NFSU2_TR(0x776b12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b13:{NFSU2_TR(0x776b13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b18ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b18:L776b18:{c.instructions+=2;NFSU2_TR(0x776b18);
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
B776b1b:{NFSU2_TR(0x776b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b1c:L776b1c:{c.instructions+=5;NFSU2_TR(0x776b1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b1e:{NFSU2_TR(0x776b1e);
u8 U[4];
w4(U+0,u32(0x798e48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b23:{NFSU2_TR(0x776b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b26:{NFSU2_TR(0x776b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b27:{NFSU2_TR(0x776b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b2cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b2c:L776b2c:{c.instructions+=2;NFSU2_TR(0x776b2c);
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
B776b2f:{NFSU2_TR(0x776b2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b30:L776b30:{c.instructions+=5;NFSU2_TR(0x776b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b32:{NFSU2_TR(0x776b32);
u8 U[4];
w4(U+0,u32(0x798e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b37:{NFSU2_TR(0x776b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b3a:{NFSU2_TR(0x776b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b3b:{NFSU2_TR(0x776b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b40:L776b40:{c.instructions+=2;NFSU2_TR(0x776b40);
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
B776b43:{NFSU2_TR(0x776b43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b44:L776b44:{c.instructions+=5;NFSU2_TR(0x776b44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b46:{NFSU2_TR(0x776b46);
u8 U[4];
w4(U+0,u32(0x798e24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b4b:{NFSU2_TR(0x776b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b4e:{NFSU2_TR(0x776b4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b4f:{NFSU2_TR(0x776b4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b54ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b54:L776b54:{c.instructions+=2;NFSU2_TR(0x776b54);
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
B776b57:{NFSU2_TR(0x776b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b58:L776b58:{c.instructions+=5;NFSU2_TR(0x776b58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b5a:{NFSU2_TR(0x776b5a);
u8 U[4];
w4(U+0,u32(0x798e14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b5f:{NFSU2_TR(0x776b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b62:{NFSU2_TR(0x776b62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b63:{NFSU2_TR(0x776b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b68ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b68:L776b68:{c.instructions+=2;NFSU2_TR(0x776b68);
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
B776b6b:{NFSU2_TR(0x776b6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b6c:L776b6c:{c.instructions+=5;NFSU2_TR(0x776b6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b6e:{NFSU2_TR(0x776b6e);
u8 U[4];
w4(U+0,u32(0x798dfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b73:{NFSU2_TR(0x776b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b76:{NFSU2_TR(0x776b76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b77:{NFSU2_TR(0x776b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b7cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b7c:L776b7c:{c.instructions+=2;NFSU2_TR(0x776b7c);
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
B776b7f:{NFSU2_TR(0x776b7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b80:L776b80:{c.instructions+=5;NFSU2_TR(0x776b80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b82:{NFSU2_TR(0x776b82);
u8 U[4];
w4(U+0,u32(0x798de4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b87:{NFSU2_TR(0x776b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b8a:{NFSU2_TR(0x776b8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b8b:{NFSU2_TR(0x776b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776b90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776b90:L776b90:{c.instructions+=2;NFSU2_TR(0x776b90);
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
B776b93:{NFSU2_TR(0x776b93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776b94:L776b94:{c.instructions+=5;NFSU2_TR(0x776b94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b96:{NFSU2_TR(0x776b96);
u8 U[4];
w4(U+0,u32(0x798dccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b9b:{NFSU2_TR(0x776b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776b9e:{NFSU2_TR(0x776b9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776b9f:{NFSU2_TR(0x776b9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776ba4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776ba4:L776ba4:{c.instructions+=2;NFSU2_TR(0x776ba4);
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
B776ba7:{NFSU2_TR(0x776ba7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776ba8:L776ba8:{c.instructions+=5;NFSU2_TR(0x776ba8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776baa:{NFSU2_TR(0x776baa);
u8 U[4];
w4(U+0,u32(0x798dbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776baf:{NFSU2_TR(0x776baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776bb2:{NFSU2_TR(0x776bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776bb3:{NFSU2_TR(0x776bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776bb8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776bb8:L776bb8:{c.instructions+=2;NFSU2_TR(0x776bb8);
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
B776bbb:{NFSU2_TR(0x776bbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776bbc:L776bbc:{c.instructions+=5;NFSU2_TR(0x776bbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776bbe:{NFSU2_TR(0x776bbe);
u8 U[4];
w4(U+0,u32(0x798da8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776bc3:{NFSU2_TR(0x776bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776bc6:{NFSU2_TR(0x776bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776bc7:{NFSU2_TR(0x776bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776bccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776bcc:L776bcc:{c.instructions+=2;NFSU2_TR(0x776bcc);
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
B776bcf:{NFSU2_TR(0x776bcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776bd0:L776bd0:{c.instructions+=2;NFSU2_TR(0x776bd0);
w4(R+0,u32(0x7e2040ull));
}
B776bd5:{NFSU2_TR(0x776bd5);
TAIL_STATIC(0x75bfd2u,75b);
}
B776be0:L776be0:{c.instructions+=5;NFSU2_TR(0x776be0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776be2:{NFSU2_TR(0x776be2);
u8 U[4];
w4(U+0,u32(0x798f14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776be7:{NFSU2_TR(0x776be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776bea:{NFSU2_TR(0x776bea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776beb:{NFSU2_TR(0x776beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776bf0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776bf0:L776bf0:{c.instructions+=2;NFSU2_TR(0x776bf0);
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
B776bf3:{NFSU2_TR(0x776bf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776bf4:L776bf4:{c.instructions+=2;NFSU2_TR(0x776bf4);
w4(R+0,u32(0x7e2064ull));
}
B776bf9:{NFSU2_TR(0x776bf9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776c00:L776c00:{c.instructions+=2;NFSU2_TR(0x776c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776c03:{NFSU2_TR(0x776c03);
TAIL_STATIC(0x510d40u,510);
}
B776c08:L776c08:{c.instructions+=3;NFSU2_TR(0x776c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776c0b:{NFSU2_TR(0x776c0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B776c0e:{NFSU2_TR(0x776c0e);
TAIL_STATIC(0x479100u,479);
}
B776c13:L776c13:{c.instructions+=3;NFSU2_TR(0x776c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776c16:{NFSU2_TR(0x776c16);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xf0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xf0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B776c1c:{NFSU2_TR(0x776c1c);
TAIL_STATIC(0x4957a0u,495);
}
B776c21:L776c21:{c.instructions+=3;NFSU2_TR(0x776c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776c24:{NFSU2_TR(0x776c24);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x134ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x134ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x134ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B776c2a:{NFSU2_TR(0x776c2a);
TAIL_STATIC(0x4957a0u,495);
}
B776c2f:L776c2f:{c.instructions+=3;NFSU2_TR(0x776c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776c32:{NFSU2_TR(0x776c32);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x178ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x178ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x178ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B776c38:{NFSU2_TR(0x776c38);
TAIL_STATIC(0x4957a0u,495);
}
B776c3d:L776c3d:{c.instructions+=2;NFSU2_TR(0x776c3d);
w4(R+0,u32(0x7e20a8ull));
}
B776c42:{NFSU2_TR(0x776c42);
TAIL_STATIC(0x75bfd2u,75b);
}
B776c50:L776c50:{c.instructions+=5;NFSU2_TR(0x776c50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776c52:{NFSU2_TR(0x776c52);
u8 U[4];
w4(U+0,u32(0x798f3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776c57:{NFSU2_TR(0x776c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776c5a:{NFSU2_TR(0x776c5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776c5b:{NFSU2_TR(0x776c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776c60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776c60:L776c60:{c.instructions+=2;NFSU2_TR(0x776c60);
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
B776c63:{NFSU2_TR(0x776c63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776c64:L776c64:{c.instructions+=2;NFSU2_TR(0x776c64);
w4(R+0,u32(0x7e2110ull));
}
B776c69:{NFSU2_TR(0x776c69);
TAIL_STATIC(0x75bfd2u,75b);
}
B776c70:L776c70:{c.instructions+=2;NFSU2_TR(0x776c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776c73:{NFSU2_TR(0x776c73);
TAIL_STATIC(0x510d40u,510);
}
B776c78:L776c78:{c.instructions+=3;NFSU2_TR(0x776c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776c7b:{NFSU2_TR(0x776c7b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B776c7e:{NFSU2_TR(0x776c7e);
TAIL_STATIC(0x4def30u,4de);
}
B776c83:L776c83:{c.instructions+=2;NFSU2_TR(0x776c83);
w4(R+0,u32(0x7e213cull));
}
B776c88:{NFSU2_TR(0x776c88);
TAIL_STATIC(0x75bfd2u,75b);
}
B776c90:L776c90:{c.instructions+=5;NFSU2_TR(0x776c90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776c92:{NFSU2_TR(0x776c92);
u8 U[4];
w4(U+0,u32(0x798f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776c97:{NFSU2_TR(0x776c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776c9a:{NFSU2_TR(0x776c9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776c9b:{NFSU2_TR(0x776c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776ca0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776ca0:L776ca0:{c.instructions+=2;NFSU2_TR(0x776ca0);
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
B776ca3:{NFSU2_TR(0x776ca3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776ca4:L776ca4:{c.instructions+=2;NFSU2_TR(0x776ca4);
w4(R+0,u32(0x7e2160ull));
}
B776ca9:{NFSU2_TR(0x776ca9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776cb0:L776cb0:{c.instructions+=2;NFSU2_TR(0x776cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776cb3:{NFSU2_TR(0x776cb3);
TAIL_STATIC(0x510d40u,510);
}
B776cb8:L776cb8:{c.instructions+=3;NFSU2_TR(0x776cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776cbb:{NFSU2_TR(0x776cbb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B776cbe:{NFSU2_TR(0x776cbe);
TAIL_STATIC(0x479100u,479);
}
B776cc3:L776cc3:{c.instructions+=3;NFSU2_TR(0x776cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776cc6:{NFSU2_TR(0x776cc6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xd8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xd8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B776ccc:{NFSU2_TR(0x776ccc);
TAIL_STATIC(0x4957a0u,495);
}
B776cd1:L776cd1:{c.instructions+=3;NFSU2_TR(0x776cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776cd4:{NFSU2_TR(0x776cd4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x11cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B776cda:{NFSU2_TR(0x776cda);
TAIL_STATIC(0x4957a0u,495);
}
B776cdf:L776cdf:{c.instructions+=3;NFSU2_TR(0x776cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776ce2:{NFSU2_TR(0x776ce2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x160ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x160ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x160ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B776ce8:{NFSU2_TR(0x776ce8);
TAIL_STATIC(0x4957a0u,495);
}
B776ced:L776ced:{c.instructions+=2;NFSU2_TR(0x776ced);
w4(R+0,u32(0x7e21a4ull));
}
B776cf2:{NFSU2_TR(0x776cf2);
TAIL_STATIC(0x75bfd2u,75b);
}
B776d00:L776d00:{c.instructions+=5;NFSU2_TR(0x776d00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d02:{NFSU2_TR(0x776d02);
u8 U[4];
w4(U+0,u32(0x798f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d07:{NFSU2_TR(0x776d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776d0a:{NFSU2_TR(0x776d0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d0b:{NFSU2_TR(0x776d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776d10ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776d10:L776d10:{c.instructions+=2;NFSU2_TR(0x776d10);
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
B776d13:{NFSU2_TR(0x776d13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776d14:L776d14:{c.instructions+=2;NFSU2_TR(0x776d14);
w4(R+0,u32(0x7e21c8ull));
}
B776d19:{NFSU2_TR(0x776d19);
TAIL_STATIC(0x75bfd2u,75b);
}
B776d20:L776d20:{c.instructions+=5;NFSU2_TR(0x776d20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d22:{NFSU2_TR(0x776d22);
u8 U[4];
w4(U+0,u32(0x798facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d27:{NFSU2_TR(0x776d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776d2a:{NFSU2_TR(0x776d2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d2b:{NFSU2_TR(0x776d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776d30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776d30:L776d30:{c.instructions+=2;NFSU2_TR(0x776d30);
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
B776d33:{NFSU2_TR(0x776d33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776d34:L776d34:{c.instructions+=2;NFSU2_TR(0x776d34);
w4(R+0,u32(0x7e21ecull));
}
B776d39:{NFSU2_TR(0x776d39);
TAIL_STATIC(0x75bfd2u,75b);
}
B776d40:L776d40:{c.instructions+=5;NFSU2_TR(0x776d40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d42:{NFSU2_TR(0x776d42);
u8 U[4];
w4(U+0,u32(0x798fe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d47:{NFSU2_TR(0x776d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776d4a:{NFSU2_TR(0x776d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d4b:{NFSU2_TR(0x776d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776d50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776d50:L776d50:{c.instructions+=2;NFSU2_TR(0x776d50);
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
B776d53:{NFSU2_TR(0x776d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776d54:L776d54:{c.instructions+=2;NFSU2_TR(0x776d54);
w4(R+0,u32(0x7e2210ull));
}
B776d59:{NFSU2_TR(0x776d59);
TAIL_STATIC(0x75bfd2u,75b);
}
B776d60:L776d60:{c.instructions+=5;NFSU2_TR(0x776d60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d62:{NFSU2_TR(0x776d62);
u8 U[4];
w4(U+0,u32(0x798ffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d67:{NFSU2_TR(0x776d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776d6a:{NFSU2_TR(0x776d6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d6b:{NFSU2_TR(0x776d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776d70ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776d70:L776d70:{c.instructions+=2;NFSU2_TR(0x776d70);
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
B776d73:{NFSU2_TR(0x776d73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776d74:L776d74:{c.instructions+=2;NFSU2_TR(0x776d74);
w4(R+0,u32(0x7e2234ull));
}
B776d79:{NFSU2_TR(0x776d79);
TAIL_STATIC(0x75bfd2u,75b);
}
B776d80:L776d80:{c.instructions+=5;NFSU2_TR(0x776d80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d82:{NFSU2_TR(0x776d82);
u8 U[4];
w4(U+0,u32(0x799010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d87:{NFSU2_TR(0x776d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776d8a:{NFSU2_TR(0x776d8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776d8b:{NFSU2_TR(0x776d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776d90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776d90:L776d90:{c.instructions+=2;NFSU2_TR(0x776d90);
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
B776d93:{NFSU2_TR(0x776d93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776d94:L776d94:{c.instructions+=2;NFSU2_TR(0x776d94);
w4(R+0,u32(0x7e2258ull));
}
B776d99:{NFSU2_TR(0x776d99);
TAIL_STATIC(0x75bfd2u,75b);
}
B776da0:L776da0:{c.instructions+=5;NFSU2_TR(0x776da0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776da2:{NFSU2_TR(0x776da2);
u8 U[4];
w4(U+0,u32(0x799020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776da7:{NFSU2_TR(0x776da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776daa:{NFSU2_TR(0x776daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776dab:{NFSU2_TR(0x776dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776db0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776db0:L776db0:{c.instructions+=2;NFSU2_TR(0x776db0);
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
B776db3:{NFSU2_TR(0x776db3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776db4:L776db4:{c.instructions+=2;NFSU2_TR(0x776db4);
w4(R+0,u32(0x7e227cull));
}
B776db9:{NFSU2_TR(0x776db9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776dc0:L776dc0:{c.instructions+=2;NFSU2_TR(0x776dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776dc3:{NFSU2_TR(0x776dc3);
TAIL_STATIC(0x4e20b0u,4e2);
}
B776dc8:L776dc8:{c.instructions+=2;NFSU2_TR(0x776dc8);
w4(R+0,u32(0x7e22a0ull));
}
B776dcd:{NFSU2_TR(0x776dcd);
TAIL_STATIC(0x75bfd2u,75b);
}
B776de0:L776de0:{c.instructions+=5;NFSU2_TR(0x776de0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776de2:{NFSU2_TR(0x776de2);
u8 U[4];
w4(U+0,u32(0x7990f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776de7:{NFSU2_TR(0x776de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776dea:{NFSU2_TR(0x776dea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776deb:{NFSU2_TR(0x776deb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776df0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776df0:L776df0:{c.instructions+=2;NFSU2_TR(0x776df0);
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
B776df3:{NFSU2_TR(0x776df3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776df4:L776df4:{c.instructions+=2;NFSU2_TR(0x776df4);
w4(R+0,u32(0x7e22f8ull));
}
B776df9:{NFSU2_TR(0x776df9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776e00:L776e00:{c.instructions+=2;NFSU2_TR(0x776e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776e03:{NFSU2_TR(0x776e03);
TAIL_STATIC(0x4cbc30u,4cb);
}
B776e08:L776e08:{c.instructions+=3;NFSU2_TR(0x776e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776e0b:{NFSU2_TR(0x776e0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x178ull))));
}
B776e11:{NFSU2_TR(0x776e11);
TAIL_STATIC(0x4358e0u,435);
}
B776e16:L776e16:{c.instructions+=2;NFSU2_TR(0x776e16);
w4(R+0,u32(0x7e2324ull));
}
B776e1b:{NFSU2_TR(0x776e1b);
TAIL_STATIC(0x75bfd2u,75b);
}
B776e20:L776e20:{c.instructions+=2;NFSU2_TR(0x776e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776e23:{NFSU2_TR(0x776e23);
TAIL_STATIC(0x4cbc30u,4cb);
}
B776e28:L776e28:{c.instructions+=2;NFSU2_TR(0x776e28);
w4(R+0,u32(0x7e02c0ull));
}
B776e2d:{NFSU2_TR(0x776e2d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776e40:L776e40:{c.instructions+=5;NFSU2_TR(0x776e40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e42:{NFSU2_TR(0x776e42);
u8 U[4];
w4(U+0,u32(0x79911cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e47:{NFSU2_TR(0x776e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776e4a:{NFSU2_TR(0x776e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e4b:{NFSU2_TR(0x776e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776e50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776e50:L776e50:{c.instructions+=2;NFSU2_TR(0x776e50);
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
B776e53:{NFSU2_TR(0x776e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776e54:L776e54:{c.instructions+=2;NFSU2_TR(0x776e54);
w4(R+0,u32(0x7e2348ull));
}
B776e59:{NFSU2_TR(0x776e59);
TAIL_STATIC(0x75bfd2u,75b);
}
B776e60:L776e60:{c.instructions+=5;NFSU2_TR(0x776e60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e62:{NFSU2_TR(0x776e62);
u8 U[4];
w4(U+0,u32(0x799138ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e67:{NFSU2_TR(0x776e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776e6a:{NFSU2_TR(0x776e6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e6b:{NFSU2_TR(0x776e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776e70ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776e70:L776e70:{c.instructions+=2;NFSU2_TR(0x776e70);
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
B776e73:{NFSU2_TR(0x776e73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776e74:L776e74:{c.instructions+=2;NFSU2_TR(0x776e74);
w4(R+0,u32(0x7e236cull));
}
B776e79:{NFSU2_TR(0x776e79);
TAIL_STATIC(0x75bfd2u,75b);
}
B776e80:L776e80:{c.instructions+=5;NFSU2_TR(0x776e80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e82:{NFSU2_TR(0x776e82);
u8 U[4];
w4(U+0,u32(0x799158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e87:{NFSU2_TR(0x776e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776e8a:{NFSU2_TR(0x776e8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776e8b:{NFSU2_TR(0x776e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776e90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776e90:L776e90:{c.instructions+=2;NFSU2_TR(0x776e90);
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
B776e93:{NFSU2_TR(0x776e93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776e94:L776e94:{c.instructions+=2;NFSU2_TR(0x776e94);
w4(R+0,u32(0x7e2390ull));
}
B776e99:{NFSU2_TR(0x776e99);
TAIL_STATIC(0x75bfd2u,75b);
}
B776ea0:L776ea0:{c.instructions+=5;NFSU2_TR(0x776ea0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ea2:{NFSU2_TR(0x776ea2);
u8 U[4];
w4(U+0,u32(0x799168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ea7:{NFSU2_TR(0x776ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776eaa:{NFSU2_TR(0x776eaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776eab:{NFSU2_TR(0x776eab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776eb0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776eb0:L776eb0:{c.instructions+=2;NFSU2_TR(0x776eb0);
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
B776eb3:{NFSU2_TR(0x776eb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776eb4:L776eb4:{c.instructions+=2;NFSU2_TR(0x776eb4);
w4(R+0,u32(0x7e23b4ull));
}
B776eb9:{NFSU2_TR(0x776eb9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776ec0:L776ec0:{c.instructions+=5;NFSU2_TR(0x776ec0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ec2:{NFSU2_TR(0x776ec2);
u8 U[4];
w4(U+0,u32(0x799180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ec7:{NFSU2_TR(0x776ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776eca:{NFSU2_TR(0x776eca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ecb:{NFSU2_TR(0x776ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776ed0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776ed0:L776ed0:{c.instructions+=2;NFSU2_TR(0x776ed0);
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
B776ed3:{NFSU2_TR(0x776ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776ed4:L776ed4:{c.instructions+=2;NFSU2_TR(0x776ed4);
w4(R+0,u32(0x7e23d8ull));
}
B776ed9:{NFSU2_TR(0x776ed9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776ee0:L776ee0:{c.instructions+=5;NFSU2_TR(0x776ee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ee2:{NFSU2_TR(0x776ee2);
u8 U[4];
w4(U+0,u32(0x799190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776ee7:{NFSU2_TR(0x776ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776eea:{NFSU2_TR(0x776eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776eeb:{NFSU2_TR(0x776eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776ef0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776ef0:L776ef0:{c.instructions+=2;NFSU2_TR(0x776ef0);
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
B776ef3:{NFSU2_TR(0x776ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776ef4:L776ef4:{c.instructions+=2;NFSU2_TR(0x776ef4);
w4(R+0,u32(0x7e23fcull));
}
B776ef9:{NFSU2_TR(0x776ef9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776f00:L776f00:{c.instructions+=5;NFSU2_TR(0x776f00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776f02:{NFSU2_TR(0x776f02);
u8 U[4];
w4(U+0,u32(0x7991a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776f07:{NFSU2_TR(0x776f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776f0a:{NFSU2_TR(0x776f0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776f0b:{NFSU2_TR(0x776f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776f10ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776f10:L776f10:{c.instructions+=2;NFSU2_TR(0x776f10);
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
B776f13:{NFSU2_TR(0x776f13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776f14:L776f14:{c.instructions+=2;NFSU2_TR(0x776f14);
w4(R+0,u32(0x7e2420ull));
}
B776f19:{NFSU2_TR(0x776f19);
TAIL_STATIC(0x75bfd2u,75b);
}
B776f20:L776f20:{c.instructions+=5;NFSU2_TR(0x776f20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776f22:{NFSU2_TR(0x776f22);
u8 U[4];
w4(U+0,u32(0x7991b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776f27:{NFSU2_TR(0x776f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776f2a:{NFSU2_TR(0x776f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776f2b:{NFSU2_TR(0x776f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776f30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776f30:L776f30:{c.instructions+=2;NFSU2_TR(0x776f30);
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
B776f33:{NFSU2_TR(0x776f33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776f34:L776f34:{c.instructions+=2;NFSU2_TR(0x776f34);
w4(R+0,u32(0x7e2444ull));
}
B776f39:{NFSU2_TR(0x776f39);
TAIL_STATIC(0x75bfd2u,75b);
}
B776f40:L776f40:{c.instructions+=2;NFSU2_TR(0x776f40);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B776f46:{NFSU2_TR(0x776f46);
TAIL_STATIC(0x50f7d0u,50f);
}
B776f4b:L776f4b:{c.instructions+=2;NFSU2_TR(0x776f4b);
w4(R+0,u32(0x7e2468ull));
}
B776f50:{NFSU2_TR(0x776f50);
TAIL_STATIC(0x75bfd2u,75b);
}
B776f60:L776f60:{c.instructions+=2;NFSU2_TR(0x776f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776f63:{NFSU2_TR(0x776f63);
TAIL_STATIC(0x51ab10u,51a);
}
B776f68:L776f68:{c.instructions+=2;NFSU2_TR(0x776f68);
w4(R+0,u32(0x7e248cull));
}
B776f6d:{NFSU2_TR(0x776f6d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776f80:L776f80:{c.instructions+=2;NFSU2_TR(0x776f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B776f83:{NFSU2_TR(0x776f83);
TAIL_STATIC(0x504950u,504);
}
B776f88:L776f88:{c.instructions+=2;NFSU2_TR(0x776f88);
w4(R+0,u32(0x7e24b0ull));
}
B776f8d:{NFSU2_TR(0x776f8d);
TAIL_STATIC(0x75bfd2u,75b);
}
B776fa0:L776fa0:{c.instructions+=2;NFSU2_TR(0x776fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B776fa3:{NFSU2_TR(0x776fa3);
TAIL_STATIC(0x504950u,504);
}
B776fa8:L776fa8:{c.instructions+=2;NFSU2_TR(0x776fa8);
w4(R+0,u32(0x7e35e4ull));
}
B776fad:{NFSU2_TR(0x776fad);
TAIL_STATIC(0x75bfd2u,75b);
}
B776fc0:L776fc0:{c.instructions+=5;NFSU2_TR(0x776fc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776fc2:{NFSU2_TR(0x776fc2);
u8 U[4];
w4(U+0,u32(0x79ac18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776fc7:{NFSU2_TR(0x776fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B776fca:{NFSU2_TR(0x776fca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B776fcb:{NFSU2_TR(0x776fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776fd0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B776fd0:L776fd0:{c.instructions+=2;NFSU2_TR(0x776fd0);
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
B776fd3:{NFSU2_TR(0x776fd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B776fd4:L776fd4:{c.instructions+=2;NFSU2_TR(0x776fd4);
w4(R+0,u32(0x7e24d4ull));
}
B776fd9:{NFSU2_TR(0x776fd9);
TAIL_STATIC(0x75bfd2u,75b);
}
B776fe0:L776fe0:{c.instructions+=2;NFSU2_TR(0x776fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B776fe3:{NFSU2_TR(0x776fe3);
TAIL_STATIC(0x510d40u,510);
}
B776fe8:L776fe8:{c.instructions+=2;NFSU2_TR(0x776fe8);
w4(R+0,u32(0x7e3cecull));
}
B776fed:{NFSU2_TR(0x776fed);
TAIL_STATIC(0x75bfd2u,75b);
}
XIT:NFSU2_TR_EXIT(0x776,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
