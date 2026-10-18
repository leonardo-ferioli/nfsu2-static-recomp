#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_44c(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_473(u8* __restrict R,Cpu& c);
u32 body_475(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_485(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49c(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_773(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x772,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x772,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_772(u8* __restrict R,Cpu& c);
u32 page_772(Cpu& c){return body_772(c.regs.data(),c);}
__attribute__((noinline)) u32 body_772(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x772000:goto L772000;
case 0x772003:c.instructions+=1;goto B772003;
case 0x772008:goto L772008;
case 0x77200d:c.instructions+=1;goto B77200d;
case 0x772020:goto L772020;
case 0x772022:c.instructions+=4;goto B772022;
case 0x772027:c.instructions+=3;goto B772027;
case 0x77202a:c.instructions+=2;goto B77202a;
case 0x77202b:c.instructions+=1;goto B77202b;
case 0x772030:goto L772030;
case 0x772033:c.instructions+=1;goto B772033;
case 0x772034:goto L772034;
case 0x772039:c.instructions+=1;goto B772039;
case 0x772040:goto L772040;
case 0x772042:c.instructions+=4;goto B772042;
case 0x772047:c.instructions+=3;goto B772047;
case 0x77204a:c.instructions+=2;goto B77204a;
case 0x77204b:c.instructions+=1;goto B77204b;
case 0x772050:goto L772050;
case 0x772053:c.instructions+=1;goto B772053;
case 0x772054:goto L772054;
case 0x772059:c.instructions+=1;goto B772059;
case 0x772060:goto L772060;
case 0x772063:c.instructions+=1;goto B772063;
case 0x772068:goto L772068;
case 0x77206d:c.instructions+=1;goto B77206d;
case 0x772080:goto L772080;
case 0x772083:c.instructions+=1;goto B772083;
case 0x772088:goto L772088;
case 0x77208b:c.instructions+=2;goto B77208b;
case 0x772091:c.instructions+=1;goto B772091;
case 0x772096:goto L772096;
case 0x772099:c.instructions+=2;goto B772099;
case 0x77209f:c.instructions+=1;goto B77209f;
case 0x7720a4:goto L7720a4;
case 0x7720a7:c.instructions+=2;goto B7720a7;
case 0x7720ad:c.instructions+=1;goto B7720ad;
case 0x7720b2:goto L7720b2;
case 0x7720b5:c.instructions+=2;goto B7720b5;
case 0x7720bb:c.instructions+=1;goto B7720bb;
case 0x7720c0:goto L7720c0;
case 0x7720c5:c.instructions+=1;goto B7720c5;
case 0x7720d0:goto L7720d0;
case 0x7720d3:c.instructions+=1;goto B7720d3;
case 0x7720d8:goto L7720d8;
case 0x7720db:c.instructions+=2;goto B7720db;
case 0x7720e1:c.instructions+=1;goto B7720e1;
case 0x7720e6:goto L7720e6;
case 0x7720e9:c.instructions+=2;goto B7720e9;
case 0x7720ef:c.instructions+=1;goto B7720ef;
case 0x7720f4:goto L7720f4;
case 0x7720f7:c.instructions+=2;goto B7720f7;
case 0x7720fd:c.instructions+=1;goto B7720fd;
case 0x772102:goto L772102;
case 0x772107:c.instructions+=1;goto B772107;
case 0x772110:goto L772110;
case 0x772112:c.instructions+=4;goto B772112;
case 0x772117:c.instructions+=3;goto B772117;
case 0x77211a:c.instructions+=2;goto B77211a;
case 0x77211b:c.instructions+=1;goto B77211b;
case 0x772120:goto L772120;
case 0x772123:c.instructions+=1;goto B772123;
case 0x772124:goto L772124;
case 0x772129:c.instructions+=1;goto B772129;
case 0x772130:goto L772130;
case 0x772136:c.instructions+=1;goto B772136;
case 0x77213b:goto L77213b;
case 0x77213d:c.instructions+=4;goto B77213d;
case 0x772142:c.instructions+=3;goto B772142;
case 0x772148:c.instructions+=2;goto B772148;
case 0x772149:c.instructions+=1;goto B772149;
case 0x77214e:goto L77214e;
case 0x772151:c.instructions+=1;goto B772151;
case 0x772152:goto L772152;
case 0x772157:c.instructions+=1;goto B772157;
case 0x772160:goto L772160;
case 0x772166:c.instructions+=1;goto B772166;
case 0x77216b:goto L77216b;
case 0x772170:c.instructions+=1;goto B772170;
case 0x772180:goto L772180;
case 0x772186:c.instructions+=1;goto B772186;
case 0x77218b:goto L77218b;
case 0x772190:c.instructions+=1;goto B772190;
case 0x7721a0:goto L7721a0;
case 0x7721a2:c.instructions+=4;goto B7721a2;
case 0x7721a7:c.instructions+=3;goto B7721a7;
case 0x7721aa:c.instructions+=2;goto B7721aa;
case 0x7721ab:c.instructions+=1;goto B7721ab;
case 0x7721b0:goto L7721b0;
case 0x7721b3:c.instructions+=1;goto B7721b3;
case 0x7721b4:goto L7721b4;
case 0x7721b6:c.instructions+=4;goto B7721b6;
case 0x7721bb:c.instructions+=3;goto B7721bb;
case 0x7721be:c.instructions+=2;goto B7721be;
case 0x7721bf:c.instructions+=1;goto B7721bf;
case 0x7721c4:goto L7721c4;
case 0x7721c7:c.instructions+=1;goto B7721c7;
case 0x7721c8:goto L7721c8;
case 0x7721ca:c.instructions+=4;goto B7721ca;
case 0x7721cf:c.instructions+=3;goto B7721cf;
case 0x7721d2:c.instructions+=2;goto B7721d2;
case 0x7721d3:c.instructions+=1;goto B7721d3;
case 0x7721d8:goto L7721d8;
case 0x7721db:c.instructions+=1;goto B7721db;
case 0x7721dc:goto L7721dc;
case 0x7721e1:c.instructions+=1;goto B7721e1;
case 0x7721f0:goto L7721f0;
case 0x7721f3:c.instructions+=1;goto B7721f3;
case 0x7721f8:goto L7721f8;
case 0x7721fa:c.instructions+=4;goto B7721fa;
case 0x7721ff:c.instructions+=3;goto B7721ff;
case 0x772202:c.instructions+=2;goto B772202;
case 0x772203:c.instructions+=1;goto B772203;
case 0x772208:goto L772208;
case 0x77220b:c.instructions+=1;goto B77220b;
case 0x77220c:goto L77220c;
case 0x772211:c.instructions+=1;goto B772211;
case 0x772220:goto L772220;
case 0x772223:c.instructions+=2;goto B772223;
case 0x772224:c.instructions+=1;goto B772224;
case 0x772229:goto L772229;
case 0x77222a:c.instructions+=1;goto B77222a;
case 0x77222b:goto L77222b;
case 0x772230:c.instructions+=1;goto B772230;
case 0x772240:goto L772240;
case 0x772246:c.instructions+=1;goto B772246;
case 0x77224b:goto L77224b;
case 0x772250:c.instructions+=1;goto B772250;
case 0x772260:goto L772260;
case 0x772263:c.instructions+=1;goto B772263;
case 0x772268:goto L772268;
case 0x77226d:c.instructions+=1;goto B77226d;
case 0x772280:goto L772280;
case 0x772283:c.instructions+=2;goto B772283;
case 0x772284:c.instructions+=1;goto B772284;
case 0x772289:goto L772289;
case 0x77228a:c.instructions+=1;goto B77228a;
case 0x77228b:goto L77228b;
case 0x772290:c.instructions+=1;goto B772290;
case 0x7722a0:goto L7722a0;
case 0x7722a3:c.instructions+=2;goto B7722a3;
case 0x7722a4:c.instructions+=1;goto B7722a4;
case 0x7722a9:goto L7722a9;
case 0x7722aa:c.instructions+=1;goto B7722aa;
case 0x7722ab:goto L7722ab;
case 0x7722ae:c.instructions+=2;goto B7722ae;
case 0x7722af:c.instructions+=1;goto B7722af;
case 0x7722b4:goto L7722b4;
case 0x7722b5:c.instructions+=1;goto B7722b5;
case 0x7722b6:goto L7722b6;
case 0x7722bb:c.instructions+=1;goto B7722bb;
case 0x7722c0:goto L7722c0;
case 0x7722c3:c.instructions+=1;goto B7722c3;
case 0x7722c8:goto L7722c8;
case 0x7722cb:c.instructions+=2;goto B7722cb;
case 0x7722ce:c.instructions+=1;goto B7722ce;
case 0x7722d3:goto L7722d3;
case 0x7722d6:c.instructions+=2;goto B7722d6;
case 0x7722d9:c.instructions+=1;goto B7722d9;
case 0x7722de:goto L7722de;
case 0x7722e1:c.instructions+=2;goto B7722e1;
case 0x7722e7:c.instructions+=1;goto B7722e7;
case 0x7722ec:goto L7722ec;
case 0x7722ef:c.instructions+=2;goto B7722ef;
case 0x7722f5:c.instructions+=1;goto B7722f5;
case 0x7722fa:goto L7722fa;
case 0x7722ff:c.instructions+=1;goto B7722ff;
case 0x772310:goto L772310;
case 0x772313:c.instructions+=1;goto B772313;
case 0x772318:goto L772318;
case 0x77231b:c.instructions+=2;goto B77231b;
case 0x772321:c.instructions+=1;goto B772321;
case 0x772326:goto L772326;
case 0x772329:c.instructions+=2;goto B772329;
case 0x77232f:c.instructions+=1;goto B77232f;
case 0x772334:goto L772334;
case 0x772337:c.instructions+=2;goto B772337;
case 0x77233d:c.instructions+=1;goto B77233d;
case 0x772342:goto L772342;
case 0x772345:c.instructions+=2;goto B772345;
case 0x77234b:c.instructions+=1;goto B77234b;
case 0x772350:goto L772350;
case 0x772353:c.instructions+=2;goto B772353;
case 0x772359:c.instructions+=1;goto B772359;
case 0x77235e:goto L77235e;
case 0x772363:c.instructions+=1;goto B772363;
case 0x772370:goto L772370;
case 0x772373:c.instructions+=1;goto B772373;
case 0x772378:goto L772378;
case 0x77237b:c.instructions+=2;goto B77237b;
case 0x772381:c.instructions+=1;goto B772381;
case 0x772386:goto L772386;
case 0x77238b:c.instructions+=1;goto B77238b;
case 0x772390:goto L772390;
case 0x772393:c.instructions+=1;goto B772393;
case 0x772398:goto L772398;
case 0x77239b:c.instructions+=2;goto B77239b;
case 0x7723a1:c.instructions+=1;goto B7723a1;
case 0x7723a6:goto L7723a6;
case 0x7723ab:c.instructions+=1;goto B7723ab;
case 0x7723b0:goto L7723b0;
case 0x7723b3:c.instructions+=1;goto B7723b3;
case 0x7723b8:goto L7723b8;
case 0x7723bb:c.instructions+=2;goto B7723bb;
case 0x7723c1:c.instructions+=1;goto B7723c1;
case 0x7723c6:goto L7723c6;
case 0x7723cb:c.instructions+=1;goto B7723cb;
case 0x7723d0:goto L7723d0;
case 0x7723d3:c.instructions+=1;goto B7723d3;
case 0x7723d8:goto L7723d8;
case 0x7723dd:c.instructions+=1;goto B7723dd;
case 0x7723f0:goto L7723f0;
case 0x7723f3:c.instructions+=1;goto B7723f3;
case 0x7723f8:goto L7723f8;
case 0x7723fb:c.instructions+=1;goto B7723fb;
case 0x772400:goto L772400;
case 0x772405:c.instructions+=1;goto B772405;
case 0x772410:goto L772410;
case 0x772413:c.instructions+=1;goto B772413;
case 0x772418:goto L772418;
case 0x77241b:c.instructions+=2;goto B77241b;
case 0x772421:c.instructions+=1;goto B772421;
case 0x772426:goto L772426;
case 0x77242b:c.instructions+=1;goto B77242b;
case 0x772430:goto L772430;
case 0x772433:c.instructions+=2;goto B772433;
case 0x772434:c.instructions+=1;goto B772434;
case 0x772439:goto L772439;
case 0x77243a:c.instructions+=1;goto B77243a;
case 0x77243b:goto L77243b;
case 0x772440:c.instructions+=1;goto B772440;
case 0x772450:goto L772450;
case 0x772453:c.instructions+=2;goto B772453;
case 0x772454:c.instructions+=1;goto B772454;
case 0x772459:goto L772459;
case 0x77245a:c.instructions+=1;goto B77245a;
case 0x77245b:goto L77245b;
case 0x77245e:c.instructions+=2;goto B77245e;
case 0x77245f:c.instructions+=1;goto B77245f;
case 0x772464:goto L772464;
case 0x772465:c.instructions+=1;goto B772465;
case 0x772466:goto L772466;
case 0x77246b:c.instructions+=1;goto B77246b;
case 0x772470:goto L772470;
case 0x772473:c.instructions+=2;goto B772473;
case 0x772474:c.instructions+=1;goto B772474;
case 0x772479:goto L772479;
case 0x77247a:c.instructions+=1;goto B77247a;
case 0x77247b:goto L77247b;
case 0x77247e:c.instructions+=2;goto B77247e;
case 0x77247f:c.instructions+=1;goto B77247f;
case 0x772484:goto L772484;
case 0x772485:c.instructions+=1;goto B772485;
case 0x772486:goto L772486;
case 0x77248b:c.instructions+=1;goto B77248b;
case 0x772490:goto L772490;
case 0x772493:c.instructions+=2;goto B772493;
case 0x772494:c.instructions+=1;goto B772494;
case 0x772499:goto L772499;
case 0x77249a:c.instructions+=1;goto B77249a;
case 0x77249b:goto L77249b;
case 0x77249e:c.instructions+=2;goto B77249e;
case 0x77249f:c.instructions+=1;goto B77249f;
case 0x7724a4:goto L7724a4;
case 0x7724a5:c.instructions+=1;goto B7724a5;
case 0x7724a6:goto L7724a6;
case 0x7724ab:c.instructions+=1;goto B7724ab;
case 0x7724b0:goto L7724b0;
case 0x7724b5:c.instructions+=6;goto B7724b5;
case 0x7724b7:c.instructions+=5;goto B7724b7;
case 0x7724b9:c.instructions+=4;goto B7724b9;
case 0x7724bc:c.instructions+=3;goto B7724bc;
case 0x7724bf:c.instructions+=2;goto B7724bf;
case 0x7724c0:c.instructions+=1;goto B7724c0;
case 0x7724c5:goto L7724c5;
case 0x7724c6:goto L7724c6;
case 0x7724cb:c.instructions+=1;goto B7724cb;
case 0x7724d0:goto L7724d0;
case 0x7724d3:c.instructions+=2;goto B7724d3;
case 0x7724d6:c.instructions+=1;goto B7724d6;
case 0x7724db:goto L7724db;
case 0x7724e0:c.instructions+=1;goto B7724e0;
case 0x7724f0:goto L7724f0;
case 0x7724f3:c.instructions+=1;goto B7724f3;
case 0x7724f8:goto L7724f8;
case 0x7724fb:c.instructions+=2;goto B7724fb;
case 0x772501:c.instructions+=1;goto B772501;
case 0x772506:goto L772506;
case 0x77250b:c.instructions+=1;goto B77250b;
case 0x772510:goto L772510;
case 0x772513:c.instructions+=1;goto B772513;
case 0x772518:goto L772518;
case 0x77251b:c.instructions+=2;goto B77251b;
case 0x772521:c.instructions+=1;goto B772521;
case 0x772526:goto L772526;
case 0x77252b:c.instructions+=1;goto B77252b;
case 0x772530:goto L772530;
case 0x772533:c.instructions+=2;goto B772533;
case 0x772534:c.instructions+=1;goto B772534;
case 0x772539:goto L772539;
case 0x77253a:c.instructions+=1;goto B77253a;
case 0x77253b:goto L77253b;
case 0x772540:c.instructions+=1;goto B772540;
case 0x772550:goto L772550;
case 0x772553:c.instructions+=2;goto B772553;
case 0x772554:c.instructions+=1;goto B772554;
case 0x772559:goto L772559;
case 0x77255a:c.instructions+=1;goto B77255a;
case 0x77255b:goto L77255b;
case 0x77255e:c.instructions+=2;goto B77255e;
case 0x77255f:c.instructions+=1;goto B77255f;
case 0x772564:goto L772564;
case 0x772565:c.instructions+=1;goto B772565;
case 0x772566:goto L772566;
case 0x77256b:c.instructions+=1;goto B77256b;
case 0x772570:goto L772570;
case 0x772573:c.instructions+=1;goto B772573;
case 0x772578:goto L772578;
case 0x77257d:c.instructions+=1;goto B77257d;
case 0x772590:goto L772590;
case 0x772593:c.instructions+=2;goto B772593;
case 0x772594:c.instructions+=1;goto B772594;
case 0x772599:goto L772599;
case 0x77259a:c.instructions+=1;goto B77259a;
case 0x77259b:goto L77259b;
case 0x7725a0:c.instructions+=1;goto B7725a0;
case 0x7725b0:goto L7725b0;
case 0x7725b3:c.instructions+=1;goto B7725b3;
case 0x7725b8:goto L7725b8;
case 0x7725bb:c.instructions+=1;goto B7725bb;
case 0x7725c0:goto L7725c0;
case 0x7725c5:c.instructions+=1;goto B7725c5;
case 0x7725d0:goto L7725d0;
case 0x7725d3:c.instructions+=2;goto B7725d3;
case 0x7725d6:c.instructions+=1;goto B7725d6;
case 0x7725db:goto L7725db;
case 0x7725e0:c.instructions+=1;goto B7725e0;
case 0x7725f0:goto L7725f0;
case 0x7725f3:c.instructions+=1;goto B7725f3;
case 0x7725f8:goto L7725f8;
case 0x7725fd:c.instructions+=1;goto B7725fd;
case 0x772610:goto L772610;
case 0x772613:c.instructions+=2;goto B772613;
case 0x772614:c.instructions+=1;goto B772614;
case 0x772619:goto L772619;
case 0x77261a:c.instructions+=1;goto B77261a;
case 0x77261b:goto L77261b;
case 0x772620:c.instructions+=1;goto B772620;
case 0x772630:goto L772630;
case 0x772633:c.instructions+=2;goto B772633;
case 0x772634:c.instructions+=1;goto B772634;
case 0x772639:goto L772639;
case 0x77263a:c.instructions+=1;goto B77263a;
case 0x77263b:goto L77263b;
case 0x772640:c.instructions+=1;goto B772640;
case 0x772650:goto L772650;
case 0x772653:c.instructions+=2;goto B772653;
case 0x772654:c.instructions+=1;goto B772654;
case 0x772659:goto L772659;
case 0x77265a:c.instructions+=1;goto B77265a;
case 0x77265b:goto L77265b;
case 0x772660:c.instructions+=1;goto B772660;
case 0x772670:goto L772670;
case 0x772673:c.instructions+=1;goto B772673;
case 0x772678:goto L772678;
case 0x77267d:c.instructions+=1;goto B77267d;
case 0x772690:goto L772690;
case 0x772693:c.instructions+=1;goto B772693;
case 0x772698:goto L772698;
case 0x77269b:c.instructions+=2;goto B77269b;
case 0x77269e:c.instructions+=1;goto B77269e;
case 0x7726a3:goto L7726a3;
case 0x7726a8:c.instructions+=1;goto B7726a8;
case 0x7726b0:goto L7726b0;
case 0x7726b3:c.instructions+=1;goto B7726b3;
case 0x7726b8:goto L7726b8;
case 0x7726bb:c.instructions+=1;goto B7726bb;
case 0x7726c0:goto L7726c0;
case 0x7726c5:c.instructions+=1;goto B7726c5;
case 0x7726d0:goto L7726d0;
case 0x7726d2:c.instructions+=4;goto B7726d2;
case 0x7726d7:c.instructions+=3;goto B7726d7;
case 0x7726da:c.instructions+=2;goto B7726da;
case 0x7726db:c.instructions+=1;goto B7726db;
case 0x7726e0:goto L7726e0;
case 0x7726e3:c.instructions+=1;goto B7726e3;
case 0x7726e4:goto L7726e4;
case 0x7726e6:c.instructions+=4;goto B7726e6;
case 0x7726eb:c.instructions+=3;goto B7726eb;
case 0x7726ee:c.instructions+=2;goto B7726ee;
case 0x7726ef:c.instructions+=1;goto B7726ef;
case 0x7726f4:goto L7726f4;
case 0x7726f7:c.instructions+=1;goto B7726f7;
case 0x7726f8:goto L7726f8;
case 0x7726fa:c.instructions+=4;goto B7726fa;
case 0x7726ff:c.instructions+=3;goto B7726ff;
case 0x772702:c.instructions+=2;goto B772702;
case 0x772703:c.instructions+=1;goto B772703;
case 0x772708:goto L772708;
case 0x77270b:c.instructions+=1;goto B77270b;
case 0x77270c:goto L77270c;
case 0x77270e:c.instructions+=4;goto B77270e;
case 0x772713:c.instructions+=3;goto B772713;
case 0x772716:c.instructions+=2;goto B772716;
case 0x772717:c.instructions+=1;goto B772717;
case 0x77271c:goto L77271c;
case 0x77271f:c.instructions+=1;goto B77271f;
case 0x772720:goto L772720;
case 0x772725:c.instructions+=1;goto B772725;
case 0x772730:goto L772730;
case 0x772733:c.instructions+=2;goto B772733;
case 0x772734:c.instructions+=1;goto B772734;
case 0x772739:goto L772739;
case 0x77273a:c.instructions+=1;goto B77273a;
case 0x77273b:goto L77273b;
case 0x772740:c.instructions+=3;goto B772740;
case 0x772743:c.instructions+=2;goto B772743;
case 0x772748:c.instructions+=1;goto B772748;
case 0x772749:goto L772749;
case 0x77274e:c.instructions+=1;goto B77274e;
case 0x772760:goto L772760;
case 0x772763:c.instructions+=1;goto B772763;
case 0x772768:goto L772768;
case 0x77276d:c.instructions+=1;goto B77276d;
case 0x772780:goto L772780;
case 0x772782:c.instructions+=4;goto B772782;
case 0x772787:c.instructions+=3;goto B772787;
case 0x77278a:c.instructions+=2;goto B77278a;
case 0x77278b:c.instructions+=1;goto B77278b;
case 0x772790:goto L772790;
case 0x772793:c.instructions+=1;goto B772793;
case 0x772794:goto L772794;
case 0x772799:c.instructions+=1;goto B772799;
case 0x7727a0:goto L7727a0;
case 0x7727a6:c.instructions+=1;goto B7727a6;
case 0x7727ab:goto L7727ab;
case 0x7727b0:c.instructions+=1;goto B7727b0;
case 0x7727c0:goto L7727c0;
case 0x7727c3:c.instructions+=2;goto B7727c3;
case 0x7727c6:c.instructions+=1;goto B7727c6;
case 0x7727cb:goto L7727cb;
case 0x7727d0:c.instructions+=1;goto B7727d0;
case 0x7727e0:goto L7727e0;
case 0x7727e6:c.instructions+=2;goto B7727e6;
case 0x7727e7:c.instructions+=1;goto B7727e7;
case 0x7727ec:goto L7727ec;
case 0x7727ed:c.instructions+=1;goto B7727ed;
case 0x7727ee:goto L7727ee;
case 0x7727f3:c.instructions+=1;goto B7727f3;
case 0x772800:goto L772800;
case 0x772803:c.instructions+=2;goto B772803;
case 0x772804:c.instructions+=1;goto B772804;
case 0x772809:goto L772809;
case 0x77280a:c.instructions+=1;goto B77280a;
case 0x77280b:goto L77280b;
case 0x772810:c.instructions+=1;goto B772810;
case 0x772820:goto L772820;
case 0x772823:c.instructions+=1;goto B772823;
case 0x772828:goto L772828;
case 0x77282d:c.instructions+=1;goto B77282d;
case 0x772840:goto L772840;
case 0x772843:c.instructions+=1;goto B772843;
case 0x772848:goto L772848;
case 0x77284d:c.instructions+=1;goto B77284d;
case 0x772860:goto L772860;
case 0x772863:c.instructions+=2;goto B772863;
case 0x772869:c.instructions+=1;goto B772869;
case 0x77286e:goto L77286e;
case 0x772873:c.instructions+=1;goto B772873;
case 0x772880:goto L772880;
case 0x772883:c.instructions+=1;goto B772883;
case 0x772888:goto L772888;
case 0x77288d:c.instructions+=1;goto B77288d;
case 0x7728a0:goto L7728a0;
case 0x7728a3:c.instructions+=1;goto B7728a3;
case 0x7728a8:goto L7728a8;
case 0x7728ab:c.instructions+=2;goto B7728ab;
case 0x7728ae:c.instructions+=1;goto B7728ae;
case 0x7728b3:goto L7728b3;
case 0x7728b8:c.instructions+=1;goto B7728b8;
case 0x7728c0:goto L7728c0;
case 0x7728c3:c.instructions+=2;goto B7728c3;
case 0x7728c4:c.instructions+=1;goto B7728c4;
case 0x7728c9:goto L7728c9;
case 0x7728ca:c.instructions+=1;goto B7728ca;
case 0x7728cb:goto L7728cb;
case 0x7728d0:c.instructions+=1;goto B7728d0;
case 0x7728e0:goto L7728e0;
case 0x7728e3:c.instructions+=2;goto B7728e3;
case 0x7728e4:c.instructions+=1;goto B7728e4;
case 0x7728e9:goto L7728e9;
case 0x7728ea:c.instructions+=1;goto B7728ea;
case 0x7728eb:goto L7728eb;
case 0x7728f0:c.instructions+=1;goto B7728f0;
case 0x772900:goto L772900;
case 0x772903:c.instructions+=1;goto B772903;
case 0x772908:goto L772908;
case 0x77290b:c.instructions+=2;goto B77290b;
case 0x77290e:c.instructions+=1;goto B77290e;
case 0x772913:goto L772913;
case 0x772918:c.instructions+=1;goto B772918;
case 0x772920:goto L772920;
case 0x772923:c.instructions+=1;goto B772923;
case 0x772928:goto L772928;
case 0x77292b:c.instructions+=2;goto B77292b;
case 0x77292e:c.instructions+=1;goto B77292e;
case 0x772933:goto L772933;
case 0x772938:c.instructions+=1;goto B772938;
case 0x772940:goto L772940;
case 0x772943:c.instructions+=1;goto B772943;
case 0x772948:goto L772948;
case 0x77294b:c.instructions+=2;goto B77294b;
case 0x772951:c.instructions+=1;goto B772951;
case 0x772956:goto L772956;
case 0x77295b:c.instructions+=1;goto B77295b;
case 0x772960:goto L772960;
case 0x772963:c.instructions+=1;goto B772963;
case 0x772968:goto L772968;
case 0x77296d:c.instructions+=1;goto B77296d;
case 0x772980:goto L772980;
case 0x772982:c.instructions+=4;goto B772982;
case 0x772987:c.instructions+=3;goto B772987;
case 0x77298a:c.instructions+=2;goto B77298a;
case 0x77298b:c.instructions+=1;goto B77298b;
case 0x772990:goto L772990;
case 0x772993:c.instructions+=1;goto B772993;
case 0x772994:goto L772994;
case 0x772999:c.instructions+=1;goto B772999;
case 0x7729a0:goto L7729a0;
case 0x7729a2:c.instructions+=4;goto B7729a2;
case 0x7729a7:c.instructions+=3;goto B7729a7;
case 0x7729aa:c.instructions+=2;goto B7729aa;
case 0x7729ab:c.instructions+=1;goto B7729ab;
case 0x7729b0:goto L7729b0;
case 0x7729b3:c.instructions+=1;goto B7729b3;
case 0x7729b4:goto L7729b4;
case 0x7729b9:c.instructions+=1;goto B7729b9;
case 0x7729c0:goto L7729c0;
case 0x7729c2:c.instructions+=4;goto B7729c2;
case 0x7729c7:c.instructions+=3;goto B7729c7;
case 0x7729ca:c.instructions+=2;goto B7729ca;
case 0x7729cb:c.instructions+=1;goto B7729cb;
case 0x7729d0:goto L7729d0;
case 0x7729d3:c.instructions+=1;goto B7729d3;
case 0x7729d4:goto L7729d4;
case 0x7729d9:c.instructions+=1;goto B7729d9;
case 0x7729e0:goto L7729e0;
case 0x7729e3:c.instructions+=1;goto B7729e3;
case 0x7729e8:goto L7729e8;
case 0x7729eb:c.instructions+=2;goto B7729eb;
case 0x7729ee:c.instructions+=1;goto B7729ee;
case 0x7729f3:goto L7729f3;
case 0x7729f8:c.instructions+=1;goto B7729f8;
case 0x772a00:goto L772a00;
case 0x772a03:c.instructions+=2;goto B772a03;
case 0x772a06:c.instructions+=1;goto B772a06;
case 0x772a0b:goto L772a0b;
case 0x772a0e:c.instructions+=2;goto B772a0e;
case 0x772a14:c.instructions+=1;goto B772a14;
case 0x772a19:goto L772a19;
case 0x772a1c:c.instructions+=2;goto B772a1c;
case 0x772a22:c.instructions+=1;goto B772a22;
case 0x772a27:goto L772a27;
case 0x772a2a:c.instructions+=2;goto B772a2a;
case 0x772a30:c.instructions+=1;goto B772a30;
case 0x772a35:goto L772a35;
case 0x772a38:c.instructions+=2;goto B772a38;
case 0x772a3e:c.instructions+=1;goto B772a3e;
case 0x772a43:goto L772a43;
case 0x772a48:c.instructions+=1;goto B772a48;
case 0x772a50:goto L772a50;
case 0x772a52:c.instructions+=4;goto B772a52;
case 0x772a57:c.instructions+=3;goto B772a57;
case 0x772a5a:c.instructions+=2;goto B772a5a;
case 0x772a5b:c.instructions+=1;goto B772a5b;
case 0x772a60:goto L772a60;
case 0x772a63:c.instructions+=1;goto B772a63;
case 0x772a64:goto L772a64;
case 0x772a69:c.instructions+=1;goto B772a69;
case 0x772a70:goto L772a70;
case 0x772a72:c.instructions+=4;goto B772a72;
case 0x772a77:c.instructions+=3;goto B772a77;
case 0x772a7a:c.instructions+=2;goto B772a7a;
case 0x772a7b:c.instructions+=1;goto B772a7b;
case 0x772a80:goto L772a80;
case 0x772a83:c.instructions+=1;goto B772a83;
case 0x772a84:goto L772a84;
case 0x772a89:c.instructions+=1;goto B772a89;
case 0x772a90:goto L772a90;
case 0x772a92:c.instructions+=4;goto B772a92;
case 0x772a97:c.instructions+=3;goto B772a97;
case 0x772a9a:c.instructions+=2;goto B772a9a;
case 0x772a9b:c.instructions+=1;goto B772a9b;
case 0x772aa0:goto L772aa0;
case 0x772aa3:c.instructions+=1;goto B772aa3;
case 0x772aa4:goto L772aa4;
case 0x772aa9:c.instructions+=1;goto B772aa9;
case 0x772ab0:goto L772ab0;
case 0x772ab2:c.instructions+=4;goto B772ab2;
case 0x772ab7:c.instructions+=3;goto B772ab7;
case 0x772aba:c.instructions+=2;goto B772aba;
case 0x772abb:c.instructions+=1;goto B772abb;
case 0x772ac0:goto L772ac0;
case 0x772ac3:c.instructions+=1;goto B772ac3;
case 0x772ac4:goto L772ac4;
case 0x772ac9:c.instructions+=1;goto B772ac9;
case 0x772ad0:goto L772ad0;
case 0x772ad3:c.instructions+=1;goto B772ad3;
case 0x772ad8:goto L772ad8;
case 0x772adb:c.instructions+=2;goto B772adb;
case 0x772ade:c.instructions+=1;goto B772ade;
case 0x772ae3:goto L772ae3;
case 0x772ae8:c.instructions+=1;goto B772ae8;
case 0x772af0:goto L772af0;
case 0x772af2:c.instructions+=4;goto B772af2;
case 0x772af7:c.instructions+=3;goto B772af7;
case 0x772afa:c.instructions+=2;goto B772afa;
case 0x772afb:c.instructions+=1;goto B772afb;
case 0x772b00:goto L772b00;
case 0x772b03:c.instructions+=1;goto B772b03;
case 0x772b04:goto L772b04;
case 0x772b09:c.instructions+=1;goto B772b09;
case 0x772b10:goto L772b10;
case 0x772b13:c.instructions+=1;goto B772b13;
case 0x772b18:goto L772b18;
case 0x772b1d:c.instructions+=1;goto B772b1d;
case 0x772b30:goto L772b30;
case 0x772b32:c.instructions+=4;goto B772b32;
case 0x772b37:c.instructions+=3;goto B772b37;
case 0x772b3a:c.instructions+=2;goto B772b3a;
case 0x772b3b:c.instructions+=1;goto B772b3b;
case 0x772b40:goto L772b40;
case 0x772b43:c.instructions+=1;goto B772b43;
case 0x772b44:goto L772b44;
case 0x772b49:c.instructions+=1;goto B772b49;
case 0x772b50:goto L772b50;
case 0x772b52:c.instructions+=4;goto B772b52;
case 0x772b57:c.instructions+=3;goto B772b57;
case 0x772b5a:c.instructions+=2;goto B772b5a;
case 0x772b5b:c.instructions+=1;goto B772b5b;
case 0x772b60:goto L772b60;
case 0x772b63:c.instructions+=1;goto B772b63;
case 0x772b64:goto L772b64;
case 0x772b69:c.instructions+=1;goto B772b69;
case 0x772b70:goto L772b70;
case 0x772b72:c.instructions+=4;goto B772b72;
case 0x772b77:c.instructions+=3;goto B772b77;
case 0x772b7a:c.instructions+=2;goto B772b7a;
case 0x772b7b:c.instructions+=1;goto B772b7b;
case 0x772b80:goto L772b80;
case 0x772b83:c.instructions+=1;goto B772b83;
case 0x772b84:goto L772b84;
case 0x772b89:c.instructions+=1;goto B772b89;
case 0x772b90:goto L772b90;
case 0x772b92:c.instructions+=4;goto B772b92;
case 0x772b97:c.instructions+=3;goto B772b97;
case 0x772b9a:c.instructions+=2;goto B772b9a;
case 0x772b9b:c.instructions+=1;goto B772b9b;
case 0x772ba0:goto L772ba0;
case 0x772ba3:c.instructions+=1;goto B772ba3;
case 0x772ba4:goto L772ba4;
case 0x772ba9:c.instructions+=1;goto B772ba9;
case 0x772bb0:goto L772bb0;
case 0x772bb3:c.instructions+=2;goto B772bb3;
case 0x772bb6:c.instructions+=1;goto B772bb6;
case 0x772bbb:goto L772bbb;
case 0x772bc0:c.instructions+=1;goto B772bc0;
case 0x772bd0:goto L772bd0;
case 0x772bd2:c.instructions+=4;goto B772bd2;
case 0x772bd7:c.instructions+=3;goto B772bd7;
case 0x772bda:c.instructions+=2;goto B772bda;
case 0x772bdb:c.instructions+=1;goto B772bdb;
case 0x772be0:goto L772be0;
case 0x772be3:c.instructions+=1;goto B772be3;
case 0x772be4:goto L772be4;
case 0x772be9:c.instructions+=1;goto B772be9;
case 0x772bf0:goto L772bf0;
case 0x772bf2:c.instructions+=4;goto B772bf2;
case 0x772bf7:c.instructions+=3;goto B772bf7;
case 0x772bfa:c.instructions+=2;goto B772bfa;
case 0x772bfb:c.instructions+=1;goto B772bfb;
case 0x772c00:goto L772c00;
case 0x772c03:c.instructions+=1;goto B772c03;
case 0x772c04:goto L772c04;
case 0x772c06:c.instructions+=4;goto B772c06;
case 0x772c0b:c.instructions+=3;goto B772c0b;
case 0x772c0e:c.instructions+=2;goto B772c0e;
case 0x772c0f:c.instructions+=1;goto B772c0f;
case 0x772c14:goto L772c14;
case 0x772c17:c.instructions+=1;goto B772c17;
case 0x772c18:goto L772c18;
case 0x772c1a:c.instructions+=4;goto B772c1a;
case 0x772c1f:c.instructions+=3;goto B772c1f;
case 0x772c22:c.instructions+=2;goto B772c22;
case 0x772c23:c.instructions+=1;goto B772c23;
case 0x772c28:goto L772c28;
case 0x772c2b:c.instructions+=1;goto B772c2b;
case 0x772c2c:goto L772c2c;
case 0x772c2e:c.instructions+=4;goto B772c2e;
case 0x772c33:c.instructions+=3;goto B772c33;
case 0x772c36:c.instructions+=2;goto B772c36;
case 0x772c37:c.instructions+=1;goto B772c37;
case 0x772c3c:goto L772c3c;
case 0x772c3f:c.instructions+=1;goto B772c3f;
case 0x772c40:goto L772c40;
case 0x772c42:c.instructions+=4;goto B772c42;
case 0x772c47:c.instructions+=3;goto B772c47;
case 0x772c4a:c.instructions+=2;goto B772c4a;
case 0x772c4b:c.instructions+=1;goto B772c4b;
case 0x772c50:goto L772c50;
case 0x772c53:c.instructions+=1;goto B772c53;
case 0x772c54:goto L772c54;
case 0x772c56:c.instructions+=4;goto B772c56;
case 0x772c5b:c.instructions+=3;goto B772c5b;
case 0x772c5e:c.instructions+=2;goto B772c5e;
case 0x772c5f:c.instructions+=1;goto B772c5f;
case 0x772c64:goto L772c64;
case 0x772c67:c.instructions+=1;goto B772c67;
case 0x772c68:goto L772c68;
case 0x772c6a:c.instructions+=4;goto B772c6a;
case 0x772c6f:c.instructions+=3;goto B772c6f;
case 0x772c72:c.instructions+=2;goto B772c72;
case 0x772c73:c.instructions+=1;goto B772c73;
case 0x772c78:goto L772c78;
case 0x772c7b:c.instructions+=1;goto B772c7b;
case 0x772c7c:goto L772c7c;
case 0x772c81:c.instructions+=1;goto B772c81;
case 0x772c90:goto L772c90;
case 0x772c92:c.instructions+=4;goto B772c92;
case 0x772c97:c.instructions+=3;goto B772c97;
case 0x772c9a:c.instructions+=2;goto B772c9a;
case 0x772c9b:c.instructions+=1;goto B772c9b;
case 0x772ca0:goto L772ca0;
case 0x772ca3:c.instructions+=1;goto B772ca3;
case 0x772ca4:goto L772ca4;
case 0x772ca6:c.instructions+=4;goto B772ca6;
case 0x772cab:c.instructions+=3;goto B772cab;
case 0x772cae:c.instructions+=2;goto B772cae;
case 0x772caf:c.instructions+=1;goto B772caf;
case 0x772cb4:goto L772cb4;
case 0x772cb7:c.instructions+=1;goto B772cb7;
case 0x772cb8:goto L772cb8;
case 0x772cba:c.instructions+=4;goto B772cba;
case 0x772cbf:c.instructions+=3;goto B772cbf;
case 0x772cc2:c.instructions+=2;goto B772cc2;
case 0x772cc3:c.instructions+=1;goto B772cc3;
case 0x772cc8:goto L772cc8;
case 0x772ccb:c.instructions+=1;goto B772ccb;
case 0x772ccc:goto L772ccc;
case 0x772cce:c.instructions+=4;goto B772cce;
case 0x772cd3:c.instructions+=3;goto B772cd3;
case 0x772cd6:c.instructions+=2;goto B772cd6;
case 0x772cd7:c.instructions+=1;goto B772cd7;
case 0x772cdc:goto L772cdc;
case 0x772cdf:c.instructions+=1;goto B772cdf;
case 0x772ce0:goto L772ce0;
case 0x772ce5:c.instructions+=1;goto B772ce5;
case 0x772cf0:goto L772cf0;
case 0x772cf2:c.instructions+=4;goto B772cf2;
case 0x772cf7:c.instructions+=3;goto B772cf7;
case 0x772cfa:c.instructions+=2;goto B772cfa;
case 0x772cfb:c.instructions+=1;goto B772cfb;
case 0x772d00:goto L772d00;
case 0x772d03:c.instructions+=1;goto B772d03;
case 0x772d04:goto L772d04;
case 0x772d06:c.instructions+=4;goto B772d06;
case 0x772d0b:c.instructions+=3;goto B772d0b;
case 0x772d0e:c.instructions+=2;goto B772d0e;
case 0x772d0f:c.instructions+=1;goto B772d0f;
case 0x772d14:goto L772d14;
case 0x772d17:c.instructions+=1;goto B772d17;
case 0x772d18:goto L772d18;
case 0x772d1a:c.instructions+=4;goto B772d1a;
case 0x772d1f:c.instructions+=3;goto B772d1f;
case 0x772d22:c.instructions+=2;goto B772d22;
case 0x772d23:c.instructions+=1;goto B772d23;
case 0x772d28:goto L772d28;
case 0x772d2b:c.instructions+=1;goto B772d2b;
case 0x772d2c:goto L772d2c;
case 0x772d2e:c.instructions+=4;goto B772d2e;
case 0x772d33:c.instructions+=3;goto B772d33;
case 0x772d36:c.instructions+=2;goto B772d36;
case 0x772d37:c.instructions+=1;goto B772d37;
case 0x772d3c:goto L772d3c;
case 0x772d3f:c.instructions+=1;goto B772d3f;
case 0x772d40:goto L772d40;
case 0x772d42:c.instructions+=4;goto B772d42;
case 0x772d47:c.instructions+=3;goto B772d47;
case 0x772d4a:c.instructions+=2;goto B772d4a;
case 0x772d4b:c.instructions+=1;goto B772d4b;
case 0x772d50:goto L772d50;
case 0x772d53:c.instructions+=1;goto B772d53;
case 0x772d54:goto L772d54;
case 0x772d56:c.instructions+=4;goto B772d56;
case 0x772d5b:c.instructions+=3;goto B772d5b;
case 0x772d5e:c.instructions+=2;goto B772d5e;
case 0x772d5f:c.instructions+=1;goto B772d5f;
case 0x772d64:goto L772d64;
case 0x772d67:c.instructions+=1;goto B772d67;
case 0x772d68:goto L772d68;
case 0x772d6a:c.instructions+=4;goto B772d6a;
case 0x772d6f:c.instructions+=3;goto B772d6f;
case 0x772d72:c.instructions+=2;goto B772d72;
case 0x772d73:c.instructions+=1;goto B772d73;
case 0x772d78:goto L772d78;
case 0x772d7b:c.instructions+=1;goto B772d7b;
case 0x772d7c:goto L772d7c;
case 0x772d7e:c.instructions+=4;goto B772d7e;
case 0x772d83:c.instructions+=3;goto B772d83;
case 0x772d86:c.instructions+=2;goto B772d86;
case 0x772d87:c.instructions+=1;goto B772d87;
case 0x772d8c:goto L772d8c;
case 0x772d8f:c.instructions+=1;goto B772d8f;
case 0x772d90:goto L772d90;
case 0x772d95:c.instructions+=1;goto B772d95;
case 0x772da0:goto L772da0;
case 0x772da2:c.instructions+=4;goto B772da2;
case 0x772da7:c.instructions+=3;goto B772da7;
case 0x772daa:c.instructions+=2;goto B772daa;
case 0x772dab:c.instructions+=1;goto B772dab;
case 0x772db0:goto L772db0;
case 0x772db3:c.instructions+=1;goto B772db3;
case 0x772db4:goto L772db4;
case 0x772db6:c.instructions+=4;goto B772db6;
case 0x772dbb:c.instructions+=3;goto B772dbb;
case 0x772dbe:c.instructions+=2;goto B772dbe;
case 0x772dbf:c.instructions+=1;goto B772dbf;
case 0x772dc4:goto L772dc4;
case 0x772dc7:c.instructions+=1;goto B772dc7;
case 0x772dc8:goto L772dc8;
case 0x772dca:c.instructions+=4;goto B772dca;
case 0x772dcf:c.instructions+=3;goto B772dcf;
case 0x772dd2:c.instructions+=2;goto B772dd2;
case 0x772dd3:c.instructions+=1;goto B772dd3;
case 0x772dd8:goto L772dd8;
case 0x772ddb:c.instructions+=1;goto B772ddb;
case 0x772ddc:goto L772ddc;
case 0x772de1:c.instructions+=1;goto B772de1;
case 0x772df0:goto L772df0;
case 0x772df2:c.instructions+=4;goto B772df2;
case 0x772df7:c.instructions+=3;goto B772df7;
case 0x772dfa:c.instructions+=2;goto B772dfa;
case 0x772dfb:c.instructions+=1;goto B772dfb;
case 0x772e00:goto L772e00;
case 0x772e03:c.instructions+=1;goto B772e03;
case 0x772e04:goto L772e04;
case 0x772e09:c.instructions+=1;goto B772e09;
case 0x772e10:goto L772e10;
case 0x772e12:c.instructions+=4;goto B772e12;
case 0x772e17:c.instructions+=3;goto B772e17;
case 0x772e1a:c.instructions+=2;goto B772e1a;
case 0x772e1b:c.instructions+=1;goto B772e1b;
case 0x772e20:goto L772e20;
case 0x772e23:c.instructions+=1;goto B772e23;
case 0x772e24:goto L772e24;
case 0x772e29:c.instructions+=1;goto B772e29;
case 0x772e30:goto L772e30;
case 0x772e33:c.instructions+=1;goto B772e33;
case 0x772e38:goto L772e38;
case 0x772e3d:c.instructions+=1;goto B772e3d;
case 0x772e50:goto L772e50;
case 0x772e52:c.instructions+=4;goto B772e52;
case 0x772e57:c.instructions+=3;goto B772e57;
case 0x772e5a:c.instructions+=2;goto B772e5a;
case 0x772e5b:c.instructions+=1;goto B772e5b;
case 0x772e60:goto L772e60;
case 0x772e63:c.instructions+=1;goto B772e63;
case 0x772e64:goto L772e64;
case 0x772e69:c.instructions+=1;goto B772e69;
case 0x772e70:goto L772e70;
case 0x772e72:c.instructions+=4;goto B772e72;
case 0x772e77:c.instructions+=3;goto B772e77;
case 0x772e7a:c.instructions+=2;goto B772e7a;
case 0x772e7b:c.instructions+=1;goto B772e7b;
case 0x772e80:goto L772e80;
case 0x772e83:c.instructions+=1;goto B772e83;
case 0x772e84:goto L772e84;
case 0x772e89:c.instructions+=1;goto B772e89;
case 0x772e90:goto L772e90;
case 0x772e92:c.instructions+=4;goto B772e92;
case 0x772e97:c.instructions+=3;goto B772e97;
case 0x772e9a:c.instructions+=2;goto B772e9a;
case 0x772e9b:c.instructions+=1;goto B772e9b;
case 0x772ea0:goto L772ea0;
case 0x772ea3:c.instructions+=1;goto B772ea3;
case 0x772ea4:goto L772ea4;
case 0x772ea9:c.instructions+=1;goto B772ea9;
case 0x772eb0:goto L772eb0;
case 0x772eb2:c.instructions+=4;goto B772eb2;
case 0x772eb7:c.instructions+=3;goto B772eb7;
case 0x772eba:c.instructions+=2;goto B772eba;
case 0x772ebb:c.instructions+=1;goto B772ebb;
case 0x772ec0:goto L772ec0;
case 0x772ec3:c.instructions+=1;goto B772ec3;
case 0x772ec4:goto L772ec4;
case 0x772ec9:c.instructions+=1;goto B772ec9;
case 0x772ed0:goto L772ed0;
case 0x772ed2:c.instructions+=4;goto B772ed2;
case 0x772ed7:c.instructions+=3;goto B772ed7;
case 0x772eda:c.instructions+=2;goto B772eda;
case 0x772edb:c.instructions+=1;goto B772edb;
case 0x772ee0:goto L772ee0;
case 0x772ee3:c.instructions+=1;goto B772ee3;
case 0x772ee4:goto L772ee4;
case 0x772ee6:c.instructions+=4;goto B772ee6;
case 0x772eeb:c.instructions+=3;goto B772eeb;
case 0x772eee:c.instructions+=2;goto B772eee;
case 0x772eef:c.instructions+=1;goto B772eef;
case 0x772ef4:goto L772ef4;
case 0x772ef7:c.instructions+=1;goto B772ef7;
case 0x772ef8:goto L772ef8;
case 0x772efa:c.instructions+=4;goto B772efa;
case 0x772eff:c.instructions+=3;goto B772eff;
case 0x772f02:c.instructions+=2;goto B772f02;
case 0x772f03:c.instructions+=1;goto B772f03;
case 0x772f08:goto L772f08;
case 0x772f0b:c.instructions+=1;goto B772f0b;
case 0x772f0c:goto L772f0c;
case 0x772f0e:c.instructions+=4;goto B772f0e;
case 0x772f13:c.instructions+=3;goto B772f13;
case 0x772f16:c.instructions+=2;goto B772f16;
case 0x772f17:c.instructions+=1;goto B772f17;
case 0x772f1c:goto L772f1c;
case 0x772f1f:c.instructions+=1;goto B772f1f;
case 0x772f20:goto L772f20;
case 0x772f22:c.instructions+=4;goto B772f22;
case 0x772f27:c.instructions+=3;goto B772f27;
case 0x772f2a:c.instructions+=2;goto B772f2a;
case 0x772f2b:c.instructions+=1;goto B772f2b;
case 0x772f30:goto L772f30;
case 0x772f33:c.instructions+=1;goto B772f33;
case 0x772f34:goto L772f34;
case 0x772f36:c.instructions+=4;goto B772f36;
case 0x772f3b:c.instructions+=3;goto B772f3b;
case 0x772f3e:c.instructions+=2;goto B772f3e;
case 0x772f3f:c.instructions+=1;goto B772f3f;
case 0x772f44:goto L772f44;
case 0x772f47:c.instructions+=1;goto B772f47;
case 0x772f48:goto L772f48;
case 0x772f4a:c.instructions+=4;goto B772f4a;
case 0x772f4f:c.instructions+=3;goto B772f4f;
case 0x772f52:c.instructions+=2;goto B772f52;
case 0x772f53:c.instructions+=1;goto B772f53;
case 0x772f58:goto L772f58;
case 0x772f5b:c.instructions+=1;goto B772f5b;
case 0x772f5c:goto L772f5c;
case 0x772f5e:c.instructions+=4;goto B772f5e;
case 0x772f63:c.instructions+=3;goto B772f63;
case 0x772f66:c.instructions+=2;goto B772f66;
case 0x772f67:c.instructions+=1;goto B772f67;
case 0x772f6c:goto L772f6c;
case 0x772f6f:c.instructions+=1;goto B772f6f;
case 0x772f70:goto L772f70;
case 0x772f75:c.instructions+=1;goto B772f75;
case 0x772f80:goto L772f80;
case 0x772f82:c.instructions+=4;goto B772f82;
case 0x772f87:c.instructions+=3;goto B772f87;
case 0x772f8a:c.instructions+=2;goto B772f8a;
case 0x772f8b:c.instructions+=1;goto B772f8b;
case 0x772f90:goto L772f90;
case 0x772f93:c.instructions+=1;goto B772f93;
case 0x772f94:goto L772f94;
case 0x772f96:c.instructions+=4;goto B772f96;
case 0x772f9b:c.instructions+=3;goto B772f9b;
case 0x772f9e:c.instructions+=2;goto B772f9e;
case 0x772f9f:c.instructions+=1;goto B772f9f;
case 0x772fa4:goto L772fa4;
case 0x772fa7:c.instructions+=1;goto B772fa7;
case 0x772fa8:goto L772fa8;
case 0x772faa:c.instructions+=4;goto B772faa;
case 0x772faf:c.instructions+=3;goto B772faf;
case 0x772fb2:c.instructions+=2;goto B772fb2;
case 0x772fb3:c.instructions+=1;goto B772fb3;
case 0x772fb8:goto L772fb8;
case 0x772fbb:c.instructions+=1;goto B772fbb;
case 0x772fbc:goto L772fbc;
case 0x772fbe:c.instructions+=4;goto B772fbe;
case 0x772fc3:c.instructions+=3;goto B772fc3;
case 0x772fc6:c.instructions+=2;goto B772fc6;
case 0x772fc7:c.instructions+=1;goto B772fc7;
case 0x772fcc:goto L772fcc;
case 0x772fcf:c.instructions+=1;goto B772fcf;
case 0x772fd0:goto L772fd0;
case 0x772fd2:c.instructions+=4;goto B772fd2;
case 0x772fd7:c.instructions+=3;goto B772fd7;
case 0x772fda:c.instructions+=2;goto B772fda;
case 0x772fdb:c.instructions+=1;goto B772fdb;
case 0x772fe0:goto L772fe0;
case 0x772fe3:c.instructions+=1;goto B772fe3;
case 0x772fe4:goto L772fe4;
case 0x772fe6:c.instructions+=4;goto B772fe6;
case 0x772feb:c.instructions+=3;goto B772feb;
case 0x772fee:c.instructions+=2;goto B772fee;
case 0x772fef:c.instructions+=1;goto B772fef;
case 0x772ff4:goto L772ff4;
case 0x772ff7:c.instructions+=1;goto B772ff7;
case 0x772ff8:goto L772ff8;
case 0x772ffa:c.instructions+=2;goto B772ffa;
case 0x772fff:c.instructions+=1;goto B772fff;
default:missing_instruction(c.pc);}
B772000:L772000:{c.instructions+=2;NFSU2_TR(0x772000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772003:{NFSU2_TR(0x772003);
TAIL_STATIC(0x441860u,441);
}
B772008:L772008:{c.instructions+=2;NFSU2_TR(0x772008);
w4(R+0,u32(0x7de4e4ull));
}
B77200d:{NFSU2_TR(0x77200d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772020:L772020:{c.instructions+=5;NFSU2_TR(0x772020);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772022:{NFSU2_TR(0x772022);
u8 U[4];
w4(U+0,u32(0x787b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772027:{NFSU2_TR(0x772027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77202a:{NFSU2_TR(0x77202a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77202b:{NFSU2_TR(0x77202b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772030ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772030:L772030:{c.instructions+=2;NFSU2_TR(0x772030);
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
B772033:{NFSU2_TR(0x772033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772034:L772034:{c.instructions+=2;NFSU2_TR(0x772034);
w4(R+0,u32(0x7de508ull));
}
B772039:{NFSU2_TR(0x772039);
TAIL_STATIC(0x75bfd2u,75b);
}
B772040:L772040:{c.instructions+=5;NFSU2_TR(0x772040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772042:{NFSU2_TR(0x772042);
u8 U[4];
w4(U+0,u32(0x787b44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772047:{NFSU2_TR(0x772047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77204a:{NFSU2_TR(0x77204a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77204b:{NFSU2_TR(0x77204b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772050ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772050:L772050:{c.instructions+=2;NFSU2_TR(0x772050);
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
B772053:{NFSU2_TR(0x772053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772054:L772054:{c.instructions+=2;NFSU2_TR(0x772054);
w4(R+0,u32(0x7de52cull));
}
B772059:{NFSU2_TR(0x772059);
TAIL_STATIC(0x75bfd2u,75b);
}
B772060:L772060:{c.instructions+=2;NFSU2_TR(0x772060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772063:{NFSU2_TR(0x772063);
TAIL_STATIC(0x44cdb0u,44c);
}
B772068:L772068:{c.instructions+=2;NFSU2_TR(0x772068);
w4(R+0,u32(0x7de550ull));
}
B77206d:{NFSU2_TR(0x77206d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772080:L772080:{c.instructions+=2;NFSU2_TR(0x772080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772083:{NFSU2_TR(0x772083);
TAIL_STATIC(0x44cdb0u,44c);
}
B772088:L772088:{c.instructions+=3;NFSU2_TR(0x772088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77208b:{NFSU2_TR(0x77208b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x340ull))));
}
B772091:{NFSU2_TR(0x772091);
TAIL_STATIC(0x579740u,579);
}
B772096:L772096:{c.instructions+=3;NFSU2_TR(0x772096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772099:{NFSU2_TR(0x772099);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x370ull))));
}
B77209f:{NFSU2_TR(0x77209f);
TAIL_STATIC(0x579740u,579);
}
B7720a4:L7720a4:{c.instructions+=3;NFSU2_TR(0x7720a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7720a7:{NFSU2_TR(0x7720a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3a0ull))));
}
B7720ad:{NFSU2_TR(0x7720ad);
TAIL_STATIC(0x579740u,579);
}
B7720b2:L7720b2:{c.instructions+=3;NFSU2_TR(0x7720b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7720b5:{NFSU2_TR(0x7720b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3d0ull))));
}
B7720bb:{NFSU2_TR(0x7720bb);
TAIL_STATIC(0x579740u,579);
}
B7720c0:L7720c0:{c.instructions+=2;NFSU2_TR(0x7720c0);
w4(R+0,u32(0x7de594ull));
}
B7720c5:{NFSU2_TR(0x7720c5);
TAIL_STATIC(0x75bfd2u,75b);
}
B7720d0:L7720d0:{c.instructions+=2;NFSU2_TR(0x7720d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7720d3:{NFSU2_TR(0x7720d3);
TAIL_STATIC(0x44cdb0u,44c);
}
B7720d8:L7720d8:{c.instructions+=3;NFSU2_TR(0x7720d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7720db:{NFSU2_TR(0x7720db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x340ull))));
}
B7720e1:{NFSU2_TR(0x7720e1);
TAIL_STATIC(0x579740u,579);
}
B7720e6:L7720e6:{c.instructions+=3;NFSU2_TR(0x7720e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7720e9:{NFSU2_TR(0x7720e9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x370ull))));
}
B7720ef:{NFSU2_TR(0x7720ef);
TAIL_STATIC(0x579740u,579);
}
B7720f4:L7720f4:{c.instructions+=3;NFSU2_TR(0x7720f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7720f7:{NFSU2_TR(0x7720f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3a0ull))));
}
B7720fd:{NFSU2_TR(0x7720fd);
TAIL_STATIC(0x579740u,579);
}
B772102:L772102:{c.instructions+=2;NFSU2_TR(0x772102);
w4(R+0,u32(0x7de5d0ull));
}
B772107:{NFSU2_TR(0x772107);
TAIL_STATIC(0x75bfd2u,75b);
}
B772110:L772110:{c.instructions+=5;NFSU2_TR(0x772110);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772112:{NFSU2_TR(0x772112);
u8 U[4];
w4(U+0,u32(0x787b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772117:{NFSU2_TR(0x772117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77211a:{NFSU2_TR(0x77211a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77211b:{NFSU2_TR(0x77211b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772120ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772120:L772120:{c.instructions+=2;NFSU2_TR(0x772120);
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
B772123:{NFSU2_TR(0x772123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772124:L772124:{c.instructions+=2;NFSU2_TR(0x772124);
w4(R+0,u32(0x7de5f4ull));
}
B772129:{NFSU2_TR(0x772129);
TAIL_STATIC(0x75bfd2u,75b);
}
B772130:L772130:{c.instructions+=2;NFSU2_TR(0x772130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772136:{NFSU2_TR(0x772136);
TAIL_STATIC(0x44cdb0u,44c);
}
B77213b:L77213b:{c.instructions+=5;NFSU2_TR(0x77213b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77213d:{NFSU2_TR(0x77213d);
u8 U[4];
w4(U+0,u32(0x7880ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772142:{NFSU2_TR(0x772142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772148:{NFSU2_TR(0x772148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772149:{NFSU2_TR(0x772149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77214eull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77214e:L77214e:{c.instructions+=2;NFSU2_TR(0x77214e);
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
B772151:{NFSU2_TR(0x772151);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772152:L772152:{c.instructions+=2;NFSU2_TR(0x772152);
w4(R+0,u32(0x7de620ull));
}
B772157:{NFSU2_TR(0x772157);
TAIL_STATIC(0x75bfd2u,75b);
}
B772160:L772160:{c.instructions+=2;NFSU2_TR(0x772160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772166:{NFSU2_TR(0x772166);
TAIL_STATIC(0x44cdb0u,44c);
}
B77216b:L77216b:{c.instructions+=2;NFSU2_TR(0x77216b);
w4(R+0,u32(0x7de644ull));
}
B772170:{NFSU2_TR(0x772170);
TAIL_STATIC(0x75bfd2u,75b);
}
B772180:L772180:{c.instructions+=2;NFSU2_TR(0x772180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772186:{NFSU2_TR(0x772186);
TAIL_STATIC(0x44cdb0u,44c);
}
B77218b:L77218b:{c.instructions+=2;NFSU2_TR(0x77218b);
w4(R+0,u32(0x7de668ull));
}
B772190:{NFSU2_TR(0x772190);
TAIL_STATIC(0x75bfd2u,75b);
}
B7721a0:L7721a0:{c.instructions+=5;NFSU2_TR(0x7721a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721a2:{NFSU2_TR(0x7721a2);
u8 U[4];
w4(U+0,u32(0x788144ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721a7:{NFSU2_TR(0x7721a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7721aa:{NFSU2_TR(0x7721aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721ab:{NFSU2_TR(0x7721ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7721b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7721b0:L7721b0:{c.instructions+=2;NFSU2_TR(0x7721b0);
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
B7721b3:{NFSU2_TR(0x7721b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7721b4:L7721b4:{c.instructions+=5;NFSU2_TR(0x7721b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721b6:{NFSU2_TR(0x7721b6);
u8 U[4];
w4(U+0,u32(0x788134ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721bb:{NFSU2_TR(0x7721bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7721be:{NFSU2_TR(0x7721be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721bf:{NFSU2_TR(0x7721bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7721c4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7721c4:L7721c4:{c.instructions+=2;NFSU2_TR(0x7721c4);
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
B7721c7:{NFSU2_TR(0x7721c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7721c8:L7721c8:{c.instructions+=5;NFSU2_TR(0x7721c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721ca:{NFSU2_TR(0x7721ca);
u8 U[4];
w4(U+0,u32(0x788124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721cf:{NFSU2_TR(0x7721cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7721d2:{NFSU2_TR(0x7721d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721d3:{NFSU2_TR(0x7721d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7721d8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7721d8:L7721d8:{c.instructions+=2;NFSU2_TR(0x7721d8);
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
B7721db:{NFSU2_TR(0x7721db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7721dc:L7721dc:{c.instructions+=2;NFSU2_TR(0x7721dc);
w4(R+0,u32(0x7de69cull));
}
B7721e1:{NFSU2_TR(0x7721e1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7721f0:L7721f0:{c.instructions+=2;NFSU2_TR(0x7721f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7721f3:{NFSU2_TR(0x7721f3);
TAIL_STATIC(0x44cdb0u,44c);
}
B7721f8:L7721f8:{c.instructions+=5;NFSU2_TR(0x7721f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721fa:{NFSU2_TR(0x7721fa);
u8 U[4];
w4(U+0,u32(0x7880ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7721ff:{NFSU2_TR(0x7721ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772202:{NFSU2_TR(0x772202);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772203:{NFSU2_TR(0x772203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772208ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772208:L772208:{c.instructions+=2;NFSU2_TR(0x772208);
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
B77220b:{NFSU2_TR(0x77220b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77220c:L77220c:{c.instructions+=2;NFSU2_TR(0x77220c);
w4(R+0,u32(0x7de6c8ull));
}
B772211:{NFSU2_TR(0x772211);
TAIL_STATIC(0x75bfd2u,75b);
}
B772220:L772220:{c.instructions+=3;NFSU2_TR(0x772220);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772223:{NFSU2_TR(0x772223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772224:{NFSU2_TR(0x772224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772229ull));
TAIL_STATIC(0x575630u,575);
}
B772229:L772229:{c.instructions+=2;NFSU2_TR(0x772229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77222a:{NFSU2_TR(0x77222a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77222b:L77222b:{c.instructions+=2;NFSU2_TR(0x77222b);
w4(R+0,u32(0x7de6ecull));
}
B772230:{NFSU2_TR(0x772230);
TAIL_STATIC(0x75bfd2u,75b);
}
B772240:L772240:{c.instructions+=2;NFSU2_TR(0x772240);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B772246:{NFSU2_TR(0x772246);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B77224b:L77224b:{c.instructions+=2;NFSU2_TR(0x77224b);
w4(R+0,u32(0x7de4c0ull));
}
B772250:{NFSU2_TR(0x772250);
TAIL_STATIC(0x75bfd2u,75b);
}
B772260:L772260:{c.instructions+=2;NFSU2_TR(0x772260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772263:{NFSU2_TR(0x772263);
TAIL_STATIC(0x475240u,475);
}
B772268:L772268:{c.instructions+=2;NFSU2_TR(0x772268);
w4(R+0,u32(0x7de710ull));
}
B77226d:{NFSU2_TR(0x77226d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772280:L772280:{c.instructions+=3;NFSU2_TR(0x772280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772283:{NFSU2_TR(0x772283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772284:{NFSU2_TR(0x772284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772289ull));
TAIL_STATIC(0x458160u,458);
}
B772289:L772289:{c.instructions+=2;NFSU2_TR(0x772289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77228a:{NFSU2_TR(0x77228a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77228b:L77228b:{c.instructions+=2;NFSU2_TR(0x77228b);
w4(R+0,u32(0x7de758ull));
}
B772290:{NFSU2_TR(0x772290);
TAIL_STATIC(0x75bfd2u,75b);
}
B7722a0:L7722a0:{c.instructions+=3;NFSU2_TR(0x7722a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7722a3:{NFSU2_TR(0x7722a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7722a4:{NFSU2_TR(0x7722a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7722a9ull));
TAIL_STATIC(0x458160u,458);
}
B7722a9:L7722a9:{c.instructions+=2;NFSU2_TR(0x7722a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7722aa:{NFSU2_TR(0x7722aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7722ab:L7722ab:{c.instructions+=3;NFSU2_TR(0x7722ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7722ae:{NFSU2_TR(0x7722ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7722af:{NFSU2_TR(0x7722af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7722b4ull));
TAIL_STATIC(0x458160u,458);
}
B7722b4:L7722b4:{c.instructions+=2;NFSU2_TR(0x7722b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7722b5:{NFSU2_TR(0x7722b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7722b6:L7722b6:{c.instructions+=2;NFSU2_TR(0x7722b6);
w4(R+0,u32(0x7de7a8ull));
}
B7722bb:{NFSU2_TR(0x7722bb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7722c0:L7722c0:{c.instructions+=2;NFSU2_TR(0x7722c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7722c3:{NFSU2_TR(0x7722c3);
TAIL_STATIC(0x475240u,475);
}
B7722c8:L7722c8:{c.instructions+=3;NFSU2_TR(0x7722c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7722cb:{NFSU2_TR(0x7722cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7722ce:{NFSU2_TR(0x7722ce);
TAIL_STATIC(0x45b4b0u,45b);
}
B7722d3:L7722d3:{c.instructions+=3;NFSU2_TR(0x7722d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7722d6:{NFSU2_TR(0x7722d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B7722d9:{NFSU2_TR(0x7722d9);
TAIL_STATIC(0x45b4b0u,45b);
}
B7722de:L7722de:{c.instructions+=3;NFSU2_TR(0x7722de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7722e1:{NFSU2_TR(0x7722e1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x9cull))));
}
B7722e7:{NFSU2_TR(0x7722e7);
TAIL_STATIC(0x45b4b0u,45b);
}
B7722ec:L7722ec:{c.instructions+=3;NFSU2_TR(0x7722ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7722ef:{NFSU2_TR(0x7722ef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
}
B7722f5:{NFSU2_TR(0x7722f5);
TAIL_STATIC(0x45b4b0u,45b);
}
B7722fa:L7722fa:{c.instructions+=2;NFSU2_TR(0x7722fa);
w4(R+0,u32(0x7de7ecull));
}
B7722ff:{NFSU2_TR(0x7722ff);
TAIL_STATIC(0x75bfd2u,75b);
}
B772310:L772310:{c.instructions+=2;NFSU2_TR(0x772310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772313:{NFSU2_TR(0x772313);
TAIL_STATIC(0x475240u,475);
}
B772318:L772318:{c.instructions+=3;NFSU2_TR(0x772318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77231b:{NFSU2_TR(0x77231b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
}
B772321:{NFSU2_TR(0x772321);
TAIL_STATIC(0x5768e0u,576);
}
B772326:L772326:{c.instructions+=3;NFSU2_TR(0x772326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772329:{NFSU2_TR(0x772329);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccull))));
}
B77232f:{NFSU2_TR(0x77232f);
TAIL_STATIC(0x5768e0u,576);
}
B772334:L772334:{c.instructions+=3;NFSU2_TR(0x772334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772337:{NFSU2_TR(0x772337);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
}
B77233d:{NFSU2_TR(0x77233d);
TAIL_STATIC(0x5768e0u,576);
}
B772342:L772342:{c.instructions+=3;NFSU2_TR(0x772342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772345:{NFSU2_TR(0x772345);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11cull))));
}
B77234b:{NFSU2_TR(0x77234b);
TAIL_STATIC(0x5768e0u,576);
}
B772350:L772350:{c.instructions+=3;NFSU2_TR(0x772350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772353:{NFSU2_TR(0x772353);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x144ull))));
}
B772359:{NFSU2_TR(0x772359);
TAIL_STATIC(0x5768e0u,576);
}
B77235e:L77235e:{c.instructions+=2;NFSU2_TR(0x77235e);
w4(R+0,u32(0x7de838ull));
}
B772363:{NFSU2_TR(0x772363);
TAIL_STATIC(0x75bfd2u,75b);
}
B772370:L772370:{c.instructions+=2;NFSU2_TR(0x772370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772373:{NFSU2_TR(0x772373);
TAIL_STATIC(0x475240u,475);
}
B772378:L772378:{c.instructions+=3;NFSU2_TR(0x772378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77237b:{NFSU2_TR(0x77237b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B772381:{NFSU2_TR(0x772381);
TAIL_STATIC(0x5768e0u,576);
}
B772386:L772386:{c.instructions+=2;NFSU2_TR(0x772386);
w4(R+0,u32(0x7de864ull));
}
B77238b:{NFSU2_TR(0x77238b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772390:L772390:{c.instructions+=2;NFSU2_TR(0x772390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772393:{NFSU2_TR(0x772393);
TAIL_STATIC(0x475240u,475);
}
B772398:L772398:{c.instructions+=3;NFSU2_TR(0x772398);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77239b:{NFSU2_TR(0x77239b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
}
B7723a1:{NFSU2_TR(0x7723a1);
TAIL_STATIC(0x5768e0u,576);
}
B7723a6:L7723a6:{c.instructions+=2;NFSU2_TR(0x7723a6);
w4(R+0,u32(0x7de890ull));
}
B7723ab:{NFSU2_TR(0x7723ab);
TAIL_STATIC(0x75bfd2u,75b);
}
B7723b0:L7723b0:{c.instructions+=2;NFSU2_TR(0x7723b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7723b3:{NFSU2_TR(0x7723b3);
TAIL_STATIC(0x475240u,475);
}
B7723b8:L7723b8:{c.instructions+=3;NFSU2_TR(0x7723b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7723bb:{NFSU2_TR(0x7723bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x94ull))));
}
B7723c1:{NFSU2_TR(0x7723c1);
TAIL_STATIC(0x5768e0u,576);
}
B7723c6:L7723c6:{c.instructions+=2;NFSU2_TR(0x7723c6);
w4(R+0,u32(0x7de8bcull));
}
B7723cb:{NFSU2_TR(0x7723cb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7723d0:L7723d0:{c.instructions+=2;NFSU2_TR(0x7723d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7723d3:{NFSU2_TR(0x7723d3);
TAIL_STATIC(0x45d310u,45d);
}
B7723d8:L7723d8:{c.instructions+=2;NFSU2_TR(0x7723d8);
w4(R+0,u32(0x7de8e0ull));
}
B7723dd:{NFSU2_TR(0x7723dd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7723f0:L7723f0:{c.instructions+=2;NFSU2_TR(0x7723f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7723f3:{NFSU2_TR(0x7723f3);
TAIL_STATIC(0x45d310u,45d);
}
B7723f8:L7723f8:{c.instructions+=2;NFSU2_TR(0x7723f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7723fb:{NFSU2_TR(0x7723fb);
TAIL_STATIC(0x475240u,475);
}
B772400:L772400:{c.instructions+=2;NFSU2_TR(0x772400);
w4(R+0,u32(0x7de90cull));
}
B772405:{NFSU2_TR(0x772405);
TAIL_STATIC(0x75bfd2u,75b);
}
B772410:L772410:{c.instructions+=2;NFSU2_TR(0x772410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772413:{NFSU2_TR(0x772413);
TAIL_STATIC(0x475240u,475);
}
B772418:L772418:{c.instructions+=3;NFSU2_TR(0x772418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77241b:{NFSU2_TR(0x77241b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
}
B772421:{NFSU2_TR(0x772421);
TAIL_STATIC(0x5768e0u,576);
}
B772426:L772426:{c.instructions+=2;NFSU2_TR(0x772426);
w4(R+0,u32(0x7de938ull));
}
B77242b:{NFSU2_TR(0x77242b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772430:L772430:{c.instructions+=3;NFSU2_TR(0x772430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772433:{NFSU2_TR(0x772433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772434:{NFSU2_TR(0x772434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772439ull));
TAIL_STATIC(0x458160u,458);
}
B772439:L772439:{c.instructions+=2;NFSU2_TR(0x772439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77243a:{NFSU2_TR(0x77243a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77243b:L77243b:{c.instructions+=2;NFSU2_TR(0x77243b);
w4(R+0,u32(0x7de980ull));
}
B772440:{NFSU2_TR(0x772440);
TAIL_STATIC(0x75bfd2u,75b);
}
B772450:L772450:{c.instructions+=3;NFSU2_TR(0x772450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772453:{NFSU2_TR(0x772453);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772454:{NFSU2_TR(0x772454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772459ull));
TAIL_STATIC(0x458160u,458);
}
B772459:L772459:{c.instructions+=2;NFSU2_TR(0x772459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77245a:{NFSU2_TR(0x77245a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77245b:L77245b:{c.instructions+=3;NFSU2_TR(0x77245b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77245e:{NFSU2_TR(0x77245e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77245f:{NFSU2_TR(0x77245f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772464ull));
TAIL_STATIC(0x458160u,458);
}
B772464:L772464:{c.instructions+=2;NFSU2_TR(0x772464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B772465:{NFSU2_TR(0x772465);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772466:L772466:{c.instructions+=2;NFSU2_TR(0x772466);
w4(R+0,u32(0x7de9acull));
}
B77246b:{NFSU2_TR(0x77246b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772470:L772470:{c.instructions+=3;NFSU2_TR(0x772470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772473:{NFSU2_TR(0x772473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772474:{NFSU2_TR(0x772474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772479ull));
TAIL_STATIC(0x458160u,458);
}
B772479:L772479:{c.instructions+=2;NFSU2_TR(0x772479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77247a:{NFSU2_TR(0x77247a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77247b:L77247b:{c.instructions+=3;NFSU2_TR(0x77247b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77247e:{NFSU2_TR(0x77247e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77247f:{NFSU2_TR(0x77247f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772484ull));
TAIL_STATIC(0x458160u,458);
}
B772484:L772484:{c.instructions+=2;NFSU2_TR(0x772484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B772485:{NFSU2_TR(0x772485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772486:L772486:{c.instructions+=2;NFSU2_TR(0x772486);
w4(R+0,u32(0x7de9d8ull));
}
B77248b:{NFSU2_TR(0x77248b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772490:L772490:{c.instructions+=3;NFSU2_TR(0x772490);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772493:{NFSU2_TR(0x772493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772494:{NFSU2_TR(0x772494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772499ull));
TAIL_STATIC(0x458160u,458);
}
B772499:L772499:{c.instructions+=2;NFSU2_TR(0x772499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77249a:{NFSU2_TR(0x77249a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77249b:L77249b:{c.instructions+=3;NFSU2_TR(0x77249b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77249e:{NFSU2_TR(0x77249e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77249f:{NFSU2_TR(0x77249f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7724a4ull));
TAIL_STATIC(0x458160u,458);
}
B7724a4:L7724a4:{c.instructions+=2;NFSU2_TR(0x7724a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7724a5:{NFSU2_TR(0x7724a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7724a6:L7724a6:{c.instructions+=2;NFSU2_TR(0x7724a6);
w4(R+0,u32(0x7dea04ull));
}
B7724ab:{NFSU2_TR(0x7724ab);
TAIL_STATIC(0x75bfd2u,75b);
}
B7724b0:L7724b0:{c.instructions+=7;NFSU2_TR(0x7724b0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7724b5:{NFSU2_TR(0x7724b5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7724b7:{NFSU2_TR(0x7724b7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7724b9:{NFSU2_TR(0x7724b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7724bc:{NFSU2_TR(0x7724bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
}
B7724bf:{NFSU2_TR(0x7724bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7724c0:{NFSU2_TR(0x7724c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7724c5ull));
TAIL_STATIC(0x75c401u,75c);
}
B7724c5:L7724c5:{c.instructions+=1;NFSU2_TR(0x7724c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7724c6:L7724c6:{c.instructions+=2;NFSU2_TR(0x7724c6);
w4(R+0,u32(0x7dea28ull));
}
B7724cb:{NFSU2_TR(0x7724cb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7724d0:L7724d0:{c.instructions+=3;NFSU2_TR(0x7724d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7724d3:{NFSU2_TR(0x7724d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B7724d6:{NFSU2_TR(0x7724d6);
TAIL_STATIC(0x5768e0u,576);
}
B7724db:L7724db:{c.instructions+=2;NFSU2_TR(0x7724db);
w4(R+0,u32(0x7dea4cull));
}
B7724e0:{NFSU2_TR(0x7724e0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7724f0:L7724f0:{c.instructions+=2;NFSU2_TR(0x7724f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7724f3:{NFSU2_TR(0x7724f3);
TAIL_STATIC(0x475240u,475);
}
B7724f8:L7724f8:{c.instructions+=3;NFSU2_TR(0x7724f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7724fb:{NFSU2_TR(0x7724fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B772501:{NFSU2_TR(0x772501);
TAIL_STATIC(0x5768e0u,576);
}
B772506:L772506:{c.instructions+=2;NFSU2_TR(0x772506);
w4(R+0,u32(0x7dea78ull));
}
B77250b:{NFSU2_TR(0x77250b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772510:L772510:{c.instructions+=2;NFSU2_TR(0x772510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772513:{NFSU2_TR(0x772513);
TAIL_STATIC(0x475240u,475);
}
B772518:L772518:{c.instructions+=3;NFSU2_TR(0x772518);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77251b:{NFSU2_TR(0x77251b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x188ull))));
}
B772521:{NFSU2_TR(0x772521);
TAIL_STATIC(0x5768e0u,576);
}
B772526:L772526:{c.instructions+=2;NFSU2_TR(0x772526);
w4(R+0,u32(0x7deaa4ull));
}
B77252b:{NFSU2_TR(0x77252b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772530:L772530:{c.instructions+=3;NFSU2_TR(0x772530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772533:{NFSU2_TR(0x772533);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772534:{NFSU2_TR(0x772534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772539ull));
TAIL_STATIC(0x458160u,458);
}
B772539:L772539:{c.instructions+=2;NFSU2_TR(0x772539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77253a:{NFSU2_TR(0x77253a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77253b:L77253b:{c.instructions+=2;NFSU2_TR(0x77253b);
w4(R+0,u32(0x7de77cull));
}
B772540:{NFSU2_TR(0x772540);
TAIL_STATIC(0x75bfd2u,75b);
}
B772550:L772550:{c.instructions+=3;NFSU2_TR(0x772550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772553:{NFSU2_TR(0x772553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772554:{NFSU2_TR(0x772554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772559ull));
TAIL_STATIC(0x458160u,458);
}
B772559:L772559:{c.instructions+=2;NFSU2_TR(0x772559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77255a:{NFSU2_TR(0x77255a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77255b:L77255b:{c.instructions+=3;NFSU2_TR(0x77255b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77255e:{NFSU2_TR(0x77255e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77255f:{NFSU2_TR(0x77255f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772564ull));
TAIL_STATIC(0x458160u,458);
}
B772564:L772564:{c.instructions+=2;NFSU2_TR(0x772564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B772565:{NFSU2_TR(0x772565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772566:L772566:{c.instructions+=2;NFSU2_TR(0x772566);
w4(R+0,u32(0x7dead0ull));
}
B77256b:{NFSU2_TR(0x77256b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772570:L772570:{c.instructions+=2;NFSU2_TR(0x772570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772573:{NFSU2_TR(0x772573);
TAIL_STATIC(0x473c60u,473);
}
B772578:L772578:{c.instructions+=2;NFSU2_TR(0x772578);
w4(R+0,u32(0x7deaf4ull));
}
B77257d:{NFSU2_TR(0x77257d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772590:L772590:{c.instructions+=3;NFSU2_TR(0x772590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772593:{NFSU2_TR(0x772593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772594:{NFSU2_TR(0x772594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772599ull));
TAIL_STATIC(0x458160u,458);
}
B772599:L772599:{c.instructions+=2;NFSU2_TR(0x772599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77259a:{NFSU2_TR(0x77259a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77259b:L77259b:{c.instructions+=2;NFSU2_TR(0x77259b);
w4(R+0,u32(0x7de734ull));
}
B7725a0:{NFSU2_TR(0x7725a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7725b0:L7725b0:{c.instructions+=2;NFSU2_TR(0x7725b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7725b3:{NFSU2_TR(0x7725b3);
TAIL_STATIC(0x477060u,477);
}
B7725b8:L7725b8:{c.instructions+=2;NFSU2_TR(0x7725b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7725bb:{NFSU2_TR(0x7725bb);
TAIL_STATIC(0x475240u,475);
}
B7725c0:L7725c0:{c.instructions+=2;NFSU2_TR(0x7725c0);
w4(R+0,u32(0x7deb20ull));
}
B7725c5:{NFSU2_TR(0x7725c5);
TAIL_STATIC(0x75bfd2u,75b);
}
B7725d0:L7725d0:{c.instructions+=3;NFSU2_TR(0x7725d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7725d3:{NFSU2_TR(0x7725d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B7725d6:{NFSU2_TR(0x7725d6);
TAIL_STATIC(0x5768e0u,576);
}
B7725db:L7725db:{c.instructions+=2;NFSU2_TR(0x7725db);
w4(R+0,u32(0x7deb44ull));
}
B7725e0:{NFSU2_TR(0x7725e0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7725f0:L7725f0:{c.instructions+=2;NFSU2_TR(0x7725f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7725f3:{NFSU2_TR(0x7725f3);
TAIL_STATIC(0x479880u,479);
}
B7725f8:L7725f8:{c.instructions+=2;NFSU2_TR(0x7725f8);
w4(R+0,u32(0x7deb68ull));
}
B7725fd:{NFSU2_TR(0x7725fd);
TAIL_STATIC(0x75bfd2u,75b);
}
B772610:L772610:{c.instructions+=3;NFSU2_TR(0x772610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772613:{NFSU2_TR(0x772613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772614:{NFSU2_TR(0x772614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772619ull));
TAIL_STATIC(0x458160u,458);
}
B772619:L772619:{c.instructions+=2;NFSU2_TR(0x772619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77261a:{NFSU2_TR(0x77261a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77261b:L77261b:{c.instructions+=2;NFSU2_TR(0x77261b);
w4(R+0,u32(0x7deb8cull));
}
B772620:{NFSU2_TR(0x772620);
TAIL_STATIC(0x75bfd2u,75b);
}
B772630:L772630:{c.instructions+=3;NFSU2_TR(0x772630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772633:{NFSU2_TR(0x772633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772634:{NFSU2_TR(0x772634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772639ull));
TAIL_STATIC(0x458160u,458);
}
B772639:L772639:{c.instructions+=2;NFSU2_TR(0x772639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77263a:{NFSU2_TR(0x77263a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77263b:L77263b:{c.instructions+=2;NFSU2_TR(0x77263b);
w4(R+0,u32(0x7debb0ull));
}
B772640:{NFSU2_TR(0x772640);
TAIL_STATIC(0x75bfd2u,75b);
}
B772650:L772650:{c.instructions+=3;NFSU2_TR(0x772650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772653:{NFSU2_TR(0x772653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772654:{NFSU2_TR(0x772654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772659ull));
TAIL_STATIC(0x458160u,458);
}
B772659:L772659:{c.instructions+=2;NFSU2_TR(0x772659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77265a:{NFSU2_TR(0x77265a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77265b:L77265b:{c.instructions+=2;NFSU2_TR(0x77265b);
w4(R+0,u32(0x7de95cull));
}
B772660:{NFSU2_TR(0x772660);
TAIL_STATIC(0x75bfd2u,75b);
}
B772670:L772670:{c.instructions+=2;NFSU2_TR(0x772670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772673:{NFSU2_TR(0x772673);
TAIL_STATIC(0x479710u,479);
}
B772678:L772678:{c.instructions+=2;NFSU2_TR(0x772678);
w4(R+0,u32(0x7debd4ull));
}
B77267d:{NFSU2_TR(0x77267d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772690:L772690:{c.instructions+=2;NFSU2_TR(0x772690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772693:{NFSU2_TR(0x772693);
TAIL_STATIC(0x475240u,475);
}
B772698:L772698:{c.instructions+=3;NFSU2_TR(0x772698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77269b:{NFSU2_TR(0x77269b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B77269e:{NFSU2_TR(0x77269e);
TAIL_STATIC(0x4835c0u,483);
}
B7726a3:L7726a3:{c.instructions+=2;NFSU2_TR(0x7726a3);
w4(R+0,u32(0x7dec00ull));
}
B7726a8:{NFSU2_TR(0x7726a8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7726b0:L7726b0:{c.instructions+=2;NFSU2_TR(0x7726b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7726b3:{NFSU2_TR(0x7726b3);
TAIL_STATIC(0x4835c0u,483);
}
B7726b8:L7726b8:{c.instructions+=2;NFSU2_TR(0x7726b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7726bb:{NFSU2_TR(0x7726bb);
TAIL_STATIC(0x4835c0u,483);
}
B7726c0:L7726c0:{c.instructions+=2;NFSU2_TR(0x7726c0);
w4(R+0,u32(0x7dec2cull));
}
B7726c5:{NFSU2_TR(0x7726c5);
TAIL_STATIC(0x75bfd2u,75b);
}
B7726d0:L7726d0:{c.instructions+=5;NFSU2_TR(0x7726d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726d2:{NFSU2_TR(0x7726d2);
u8 U[4];
w4(U+0,u32(0x78c040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726d7:{NFSU2_TR(0x7726d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7726da:{NFSU2_TR(0x7726da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726db:{NFSU2_TR(0x7726db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7726e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7726e0:L7726e0:{c.instructions+=2;NFSU2_TR(0x7726e0);
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
B7726e3:{NFSU2_TR(0x7726e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7726e4:L7726e4:{c.instructions+=5;NFSU2_TR(0x7726e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726e6:{NFSU2_TR(0x7726e6);
u8 U[4];
w4(U+0,u32(0x78c024ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726eb:{NFSU2_TR(0x7726eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7726ee:{NFSU2_TR(0x7726ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726ef:{NFSU2_TR(0x7726ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7726f4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7726f4:L7726f4:{c.instructions+=2;NFSU2_TR(0x7726f4);
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
B7726f7:{NFSU2_TR(0x7726f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7726f8:L7726f8:{c.instructions+=5;NFSU2_TR(0x7726f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726fa:{NFSU2_TR(0x7726fa);
u8 U[4];
w4(U+0,u32(0x78c008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7726ff:{NFSU2_TR(0x7726ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772702:{NFSU2_TR(0x772702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772703:{NFSU2_TR(0x772703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772708ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772708:L772708:{c.instructions+=2;NFSU2_TR(0x772708);
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
B77270b:{NFSU2_TR(0x77270b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77270c:L77270c:{c.instructions+=5;NFSU2_TR(0x77270c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77270e:{NFSU2_TR(0x77270e);
u8 U[4];
w4(U+0,u32(0x78bff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772713:{NFSU2_TR(0x772713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772716:{NFSU2_TR(0x772716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772717:{NFSU2_TR(0x772717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77271cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77271c:L77271c:{c.instructions+=2;NFSU2_TR(0x77271c);
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
B77271f:{NFSU2_TR(0x77271f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772720:L772720:{c.instructions+=2;NFSU2_TR(0x772720);
w4(R+0,u32(0x7dec68ull));
}
B772725:{NFSU2_TR(0x772725);
TAIL_STATIC(0x75bfd2u,75b);
}
B772730:L772730:{c.instructions+=3;NFSU2_TR(0x772730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772733:{NFSU2_TR(0x772733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772734:{NFSU2_TR(0x772734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772739ull));
TAIL_STATIC(0x458160u,458);
}
B772739:L772739:{c.instructions+=2;NFSU2_TR(0x772739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77273a:{NFSU2_TR(0x77273a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77273b:L77273b:{c.instructions+=4;NFSU2_TR(0x77273b);
__builtin_memmove((R+0),gp(0x82cc04),4);
}
B772740:{NFSU2_TR(0x772740);
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
B772743:{NFSU2_TR(0x772743);
__builtin_memmove(gp(0x82cc04),(R+0),4);
}
B772748:{NFSU2_TR(0x772748);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772749:L772749:{c.instructions+=2;NFSU2_TR(0x772749);
w4(R+0,u32(0x7dec94ull));
}
B77274e:{NFSU2_TR(0x77274e);
TAIL_STATIC(0x75bfd2u,75b);
}
B772760:L772760:{c.instructions+=2;NFSU2_TR(0x772760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772763:{NFSU2_TR(0x772763);
TAIL_STATIC(0x485b50u,485);
}
B772768:L772768:{c.instructions+=2;NFSU2_TR(0x772768);
w4(R+0,u32(0x7decb8ull));
}
B77276d:{NFSU2_TR(0x77276d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772780:L772780:{c.instructions+=5;NFSU2_TR(0x772780);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772782:{NFSU2_TR(0x772782);
u8 U[4];
w4(U+0,u32(0x78c21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772787:{NFSU2_TR(0x772787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77278a:{NFSU2_TR(0x77278a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77278b:{NFSU2_TR(0x77278b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772790ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772790:L772790:{c.instructions+=2;NFSU2_TR(0x772790);
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
B772793:{NFSU2_TR(0x772793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772794:L772794:{c.instructions+=2;NFSU2_TR(0x772794);
w4(R+0,u32(0x7decdcull));
}
B772799:{NFSU2_TR(0x772799);
TAIL_STATIC(0x75bfd2u,75b);
}
B7727a0:L7727a0:{c.instructions+=2;NFSU2_TR(0x7727a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7727a6:{NFSU2_TR(0x7727a6);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B7727ab:L7727ab:{c.instructions+=2;NFSU2_TR(0x7727ab);
w4(R+0,u32(0x7ded00ull));
}
B7727b0:{NFSU2_TR(0x7727b0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7727c0:L7727c0:{c.instructions+=3;NFSU2_TR(0x7727c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7727c3:{NFSU2_TR(0x7727c3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B7727c6:{NFSU2_TR(0x7727c6);
TAIL_STATIC(0x4358e0u,435);
}
B7727cb:L7727cb:{c.instructions+=2;NFSU2_TR(0x7727cb);
w4(R+0,u32(0x7ded24ull));
}
B7727d0:{NFSU2_TR(0x7727d0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7727e0:L7727e0:{c.instructions+=3;NFSU2_TR(0x7727e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7727e6:{NFSU2_TR(0x7727e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7727e7:{NFSU2_TR(0x7727e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7727ecull));
TAIL_STATIC(0x486f30u,486);
}
B7727ec:L7727ec:{c.instructions+=2;NFSU2_TR(0x7727ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7727ed:{NFSU2_TR(0x7727ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7727ee:L7727ee:{c.instructions+=2;NFSU2_TR(0x7727ee);
w4(R+0,u32(0x7ded48ull));
}
B7727f3:{NFSU2_TR(0x7727f3);
TAIL_STATIC(0x75bfd2u,75b);
}
B772800:L772800:{c.instructions+=3;NFSU2_TR(0x772800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772803:{NFSU2_TR(0x772803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772804:{NFSU2_TR(0x772804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772809ull));
TAIL_STATIC(0x486f10u,486);
}
B772809:L772809:{c.instructions+=2;NFSU2_TR(0x772809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77280a:{NFSU2_TR(0x77280a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77280b:L77280b:{c.instructions+=2;NFSU2_TR(0x77280b);
w4(R+0,u32(0x7ded6cull));
}
B772810:{NFSU2_TR(0x772810);
TAIL_STATIC(0x75bfd2u,75b);
}
B772820:L772820:{c.instructions+=2;NFSU2_TR(0x772820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772823:{NFSU2_TR(0x772823);
TAIL_STATIC(0x491e10u,491);
}
B772828:L772828:{c.instructions+=2;NFSU2_TR(0x772828);
w4(R+0,u32(0x7ded90ull));
}
B77282d:{NFSU2_TR(0x77282d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772840:L772840:{c.instructions+=2;NFSU2_TR(0x772840);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B772843:{NFSU2_TR(0x772843);
TAIL_STATIC(0x4def30u,4de);
}
B772848:L772848:{c.instructions+=2;NFSU2_TR(0x772848);
w4(R+0,u32(0x7dedb4ull));
}
B77284d:{NFSU2_TR(0x77284d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772860:L772860:{c.instructions+=3;NFSU2_TR(0x772860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772863:{NFSU2_TR(0x772863);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B772869:{NFSU2_TR(0x772869);
TAIL_STATIC(0x4835c0u,483);
}
B77286e:L77286e:{c.instructions+=2;NFSU2_TR(0x77286e);
w4(R+0,u32(0x7dedd8ull));
}
B772873:{NFSU2_TR(0x772873);
TAIL_STATIC(0x75bfd2u,75b);
}
B772880:L772880:{c.instructions+=2;NFSU2_TR(0x772880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772883:{NFSU2_TR(0x772883);
TAIL_STATIC(0x52af90u,52a);
}
B772888:L772888:{c.instructions+=2;NFSU2_TR(0x772888);
w4(R+0,u32(0x7dedfcull));
}
B77288d:{NFSU2_TR(0x77288d);
TAIL_STATIC(0x75bfd2u,75b);
}
B7728a0:L7728a0:{c.instructions+=2;NFSU2_TR(0x7728a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7728a3:{NFSU2_TR(0x7728a3);
TAIL_STATIC(0x52af90u,52a);
}
B7728a8:L7728a8:{c.instructions+=3;NFSU2_TR(0x7728a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7728ab:{NFSU2_TR(0x7728ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B7728ae:{NFSU2_TR(0x7728ae);
TAIL_STATIC(0x50d390u,50d);
}
B7728b3:L7728b3:{c.instructions+=2;NFSU2_TR(0x7728b3);
w4(R+0,u32(0x7dee28ull));
}
B7728b8:{NFSU2_TR(0x7728b8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7728c0:L7728c0:{c.instructions+=3;NFSU2_TR(0x7728c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7728c3:{NFSU2_TR(0x7728c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7728c4:{NFSU2_TR(0x7728c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7728c9ull));
TAIL_STATIC(0x575630u,575);
}
B7728c9:L7728c9:{c.instructions+=2;NFSU2_TR(0x7728c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7728ca:{NFSU2_TR(0x7728ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7728cb:L7728cb:{c.instructions+=2;NFSU2_TR(0x7728cb);
w4(R+0,u32(0x7dee4cull));
}
B7728d0:{NFSU2_TR(0x7728d0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7728e0:L7728e0:{c.instructions+=3;NFSU2_TR(0x7728e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7728e3:{NFSU2_TR(0x7728e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7728e4:{NFSU2_TR(0x7728e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7728e9ull));
TAIL_STATIC(0x575630u,575);
}
B7728e9:L7728e9:{c.instructions+=2;NFSU2_TR(0x7728e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7728ea:{NFSU2_TR(0x7728ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7728eb:L7728eb:{c.instructions+=2;NFSU2_TR(0x7728eb);
w4(R+0,u32(0x7dee94ull));
}
B7728f0:{NFSU2_TR(0x7728f0);
TAIL_STATIC(0x75bfd2u,75b);
}
B772900:L772900:{c.instructions+=2;NFSU2_TR(0x772900);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772903:{NFSU2_TR(0x772903);
TAIL_STATIC(0x510d40u,510);
}
B772908:L772908:{c.instructions+=3;NFSU2_TR(0x772908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77290b:{NFSU2_TR(0x77290b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B77290e:{NFSU2_TR(0x77290e);
TAIL_STATIC(0x50db70u,50d);
}
B772913:L772913:{c.instructions+=2;NFSU2_TR(0x772913);
w4(R+0,u32(0x7deec0ull));
}
B772918:{NFSU2_TR(0x772918);
TAIL_STATIC(0x75bfd2u,75b);
}
B772920:L772920:{c.instructions+=2;NFSU2_TR(0x772920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772923:{NFSU2_TR(0x772923);
TAIL_STATIC(0x510d40u,510);
}
B772928:L772928:{c.instructions+=3;NFSU2_TR(0x772928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77292b:{NFSU2_TR(0x77292b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77292e:{NFSU2_TR(0x77292e);
TAIL_STATIC(0x49cca0u,49c);
}
B772933:L772933:{c.instructions+=2;NFSU2_TR(0x772933);
w4(R+0,u32(0x7deeecull));
}
B772938:{NFSU2_TR(0x772938);
TAIL_STATIC(0x75bfd2u,75b);
}
B772940:L772940:{c.instructions+=2;NFSU2_TR(0x772940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772943:{NFSU2_TR(0x772943);
TAIL_STATIC(0x4b1d80u,4b1);
}
B772948:L772948:{c.instructions+=3;NFSU2_TR(0x772948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77294b:{NFSU2_TR(0x77294b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
}
B772951:{NFSU2_TR(0x772951);
TAIL_STATIC(0x50db70u,50d);
}
B772956:L772956:{c.instructions+=2;NFSU2_TR(0x772956);
w4(R+0,u32(0x7def18ull));
}
B77295b:{NFSU2_TR(0x77295b);
TAIL_STATIC(0x75bfd2u,75b);
}
B772960:L772960:{c.instructions+=2;NFSU2_TR(0x772960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772963:{NFSU2_TR(0x772963);
TAIL_STATIC(0x4b1d80u,4b1);
}
B772968:L772968:{c.instructions+=2;NFSU2_TR(0x772968);
w4(R+0,u32(0x7def3cull));
}
B77296d:{NFSU2_TR(0x77296d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772980:L772980:{c.instructions+=5;NFSU2_TR(0x772980);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772982:{NFSU2_TR(0x772982);
u8 U[4];
w4(U+0,u32(0x78fc74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772987:{NFSU2_TR(0x772987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77298a:{NFSU2_TR(0x77298a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77298b:{NFSU2_TR(0x77298b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772990ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772990:L772990:{c.instructions+=2;NFSU2_TR(0x772990);
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
B772993:{NFSU2_TR(0x772993);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772994:L772994:{c.instructions+=2;NFSU2_TR(0x772994);
w4(R+0,u32(0x7def60ull));
}
B772999:{NFSU2_TR(0x772999);
TAIL_STATIC(0x75bfd2u,75b);
}
B7729a0:L7729a0:{c.instructions+=5;NFSU2_TR(0x7729a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7729a2:{NFSU2_TR(0x7729a2);
u8 U[4];
w4(U+0,u32(0x78fc84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7729a7:{NFSU2_TR(0x7729a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7729aa:{NFSU2_TR(0x7729aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7729ab:{NFSU2_TR(0x7729ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7729b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7729b0:L7729b0:{c.instructions+=2;NFSU2_TR(0x7729b0);
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
B7729b3:{NFSU2_TR(0x7729b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7729b4:L7729b4:{c.instructions+=2;NFSU2_TR(0x7729b4);
w4(R+0,u32(0x7def84ull));
}
B7729b9:{NFSU2_TR(0x7729b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7729c0:L7729c0:{c.instructions+=5;NFSU2_TR(0x7729c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7729c2:{NFSU2_TR(0x7729c2);
u8 U[4];
w4(U+0,u32(0x78fe28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7729c7:{NFSU2_TR(0x7729c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7729ca:{NFSU2_TR(0x7729ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7729cb:{NFSU2_TR(0x7729cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7729d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7729d0:L7729d0:{c.instructions+=2;NFSU2_TR(0x7729d0);
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
B7729d3:{NFSU2_TR(0x7729d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7729d4:L7729d4:{c.instructions+=2;NFSU2_TR(0x7729d4);
w4(R+0,u32(0x7defa8ull));
}
B7729d9:{NFSU2_TR(0x7729d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7729e0:L7729e0:{c.instructions+=2;NFSU2_TR(0x7729e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7729e3:{NFSU2_TR(0x7729e3);
TAIL_STATIC(0x510d40u,510);
}
B7729e8:L7729e8:{c.instructions+=3;NFSU2_TR(0x7729e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7729eb:{NFSU2_TR(0x7729eb);
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
B7729ee:{NFSU2_TR(0x7729ee);
TAIL_STATIC(0x4957a0u,495);
}
B7729f3:L7729f3:{c.instructions+=2;NFSU2_TR(0x7729f3);
w4(R+0,u32(0x7e13e4ull));
}
B7729f8:{NFSU2_TR(0x7729f8);
TAIL_STATIC(0x75bfd2u,75b);
}
B772a00:L772a00:{c.instructions+=3;NFSU2_TR(0x772a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772a03:{NFSU2_TR(0x772a03);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B772a06:{NFSU2_TR(0x772a06);
TAIL_STATIC(0x401800u,401);
}
B772a0b:L772a0b:{c.instructions+=3;NFSU2_TR(0x772a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772a0e:{NFSU2_TR(0x772a0e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x900ull))));
}
B772a14:{NFSU2_TR(0x772a14);
TAIL_STATIC(0x401800u,401);
}
B772a19:L772a19:{c.instructions+=3;NFSU2_TR(0x772a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772a1c:{NFSU2_TR(0x772a1c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11f0ull))));
}
B772a22:{NFSU2_TR(0x772a22);
TAIL_STATIC(0x401800u,401);
}
B772a27:L772a27:{c.instructions+=3;NFSU2_TR(0x772a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772a2a:{NFSU2_TR(0x772a2a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ae0ull))));
}
B772a30:{NFSU2_TR(0x772a30);
TAIL_STATIC(0x401800u,401);
}
B772a35:L772a35:{c.instructions+=3;NFSU2_TR(0x772a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772a38:{NFSU2_TR(0x772a38);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x23d0ull))));
}
B772a3e:{NFSU2_TR(0x772a3e);
TAIL_STATIC(0x401800u,401);
}
B772a43:L772a43:{c.instructions+=2;NFSU2_TR(0x772a43);
w4(R+0,u32(0x7df028ull));
}
B772a48:{NFSU2_TR(0x772a48);
TAIL_STATIC(0x75bfd2u,75b);
}
B772a50:L772a50:{c.instructions+=5;NFSU2_TR(0x772a50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a52:{NFSU2_TR(0x772a52);
u8 U[4];
w4(U+0,u32(0x790794ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a57:{NFSU2_TR(0x772a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772a5a:{NFSU2_TR(0x772a5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a5b:{NFSU2_TR(0x772a5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772a60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772a60:L772a60:{c.instructions+=2;NFSU2_TR(0x772a60);
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
B772a63:{NFSU2_TR(0x772a63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772a64:L772a64:{c.instructions+=2;NFSU2_TR(0x772a64);
w4(R+0,u32(0x7df04cull));
}
B772a69:{NFSU2_TR(0x772a69);
TAIL_STATIC(0x75bfd2u,75b);
}
B772a70:L772a70:{c.instructions+=5;NFSU2_TR(0x772a70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a72:{NFSU2_TR(0x772a72);
u8 U[4];
w4(U+0,u32(0x7907bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a77:{NFSU2_TR(0x772a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772a7a:{NFSU2_TR(0x772a7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a7b:{NFSU2_TR(0x772a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772a80ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772a80:L772a80:{c.instructions+=2;NFSU2_TR(0x772a80);
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
B772a83:{NFSU2_TR(0x772a83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772a84:L772a84:{c.instructions+=2;NFSU2_TR(0x772a84);
w4(R+0,u32(0x7df070ull));
}
B772a89:{NFSU2_TR(0x772a89);
TAIL_STATIC(0x75bfd2u,75b);
}
B772a90:L772a90:{c.instructions+=5;NFSU2_TR(0x772a90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a92:{NFSU2_TR(0x772a92);
u8 U[4];
w4(U+0,u32(0x79080cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a97:{NFSU2_TR(0x772a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772a9a:{NFSU2_TR(0x772a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772a9b:{NFSU2_TR(0x772a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772aa0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772aa0:L772aa0:{c.instructions+=2;NFSU2_TR(0x772aa0);
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
B772aa3:{NFSU2_TR(0x772aa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772aa4:L772aa4:{c.instructions+=2;NFSU2_TR(0x772aa4);
w4(R+0,u32(0x7df094ull));
}
B772aa9:{NFSU2_TR(0x772aa9);
TAIL_STATIC(0x75bfd2u,75b);
}
B772ab0:L772ab0:{c.instructions+=5;NFSU2_TR(0x772ab0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ab2:{NFSU2_TR(0x772ab2);
u8 U[4];
w4(U+0,u32(0x790834ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ab7:{NFSU2_TR(0x772ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772aba:{NFSU2_TR(0x772aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772abb:{NFSU2_TR(0x772abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ac0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ac0:L772ac0:{c.instructions+=2;NFSU2_TR(0x772ac0);
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
B772ac3:{NFSU2_TR(0x772ac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ac4:L772ac4:{c.instructions+=2;NFSU2_TR(0x772ac4);
w4(R+0,u32(0x7df0b8ull));
}
B772ac9:{NFSU2_TR(0x772ac9);
TAIL_STATIC(0x75bfd2u,75b);
}
B772ad0:L772ad0:{c.instructions+=2;NFSU2_TR(0x772ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772ad3:{NFSU2_TR(0x772ad3);
TAIL_STATIC(0x510d40u,510);
}
B772ad8:L772ad8:{c.instructions+=3;NFSU2_TR(0x772ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772adb:{NFSU2_TR(0x772adb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B772ade:{NFSU2_TR(0x772ade);
TAIL_STATIC(0x579dc0u,579);
}
B772ae3:L772ae3:{c.instructions+=2;NFSU2_TR(0x772ae3);
w4(R+0,u32(0x7df0e4ull));
}
B772ae8:{NFSU2_TR(0x772ae8);
TAIL_STATIC(0x75bfd2u,75b);
}
B772af0:L772af0:{c.instructions+=5;NFSU2_TR(0x772af0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772af2:{NFSU2_TR(0x772af2);
u8 U[4];
w4(U+0,u32(0x79085cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772af7:{NFSU2_TR(0x772af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772afa:{NFSU2_TR(0x772afa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772afb:{NFSU2_TR(0x772afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772b00ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772b00:L772b00:{c.instructions+=2;NFSU2_TR(0x772b00);
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
B772b03:{NFSU2_TR(0x772b03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772b04:L772b04:{c.instructions+=2;NFSU2_TR(0x772b04);
w4(R+0,u32(0x7df108ull));
}
B772b09:{NFSU2_TR(0x772b09);
TAIL_STATIC(0x75bfd2u,75b);
}
B772b10:L772b10:{c.instructions+=2;NFSU2_TR(0x772b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772b13:{NFSU2_TR(0x772b13);
TAIL_STATIC(0x510d40u,510);
}
B772b18:L772b18:{c.instructions+=2;NFSU2_TR(0x772b18);
w4(R+0,u32(0x7df12cull));
}
B772b1d:{NFSU2_TR(0x772b1d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772b30:L772b30:{c.instructions+=5;NFSU2_TR(0x772b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b32:{NFSU2_TR(0x772b32);
u8 U[4];
w4(U+0,u32(0x790884ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b37:{NFSU2_TR(0x772b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772b3a:{NFSU2_TR(0x772b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b3b:{NFSU2_TR(0x772b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772b40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772b40:L772b40:{c.instructions+=2;NFSU2_TR(0x772b40);
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
B772b43:{NFSU2_TR(0x772b43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772b44:L772b44:{c.instructions+=2;NFSU2_TR(0x772b44);
w4(R+0,u32(0x7df150ull));
}
B772b49:{NFSU2_TR(0x772b49);
TAIL_STATIC(0x75bfd2u,75b);
}
B772b50:L772b50:{c.instructions+=5;NFSU2_TR(0x772b50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b52:{NFSU2_TR(0x772b52);
u8 U[4];
w4(U+0,u32(0x7908a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b57:{NFSU2_TR(0x772b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772b5a:{NFSU2_TR(0x772b5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b5b:{NFSU2_TR(0x772b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772b60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772b60:L772b60:{c.instructions+=2;NFSU2_TR(0x772b60);
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
B772b63:{NFSU2_TR(0x772b63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772b64:L772b64:{c.instructions+=2;NFSU2_TR(0x772b64);
w4(R+0,u32(0x7df174ull));
}
B772b69:{NFSU2_TR(0x772b69);
TAIL_STATIC(0x75bfd2u,75b);
}
B772b70:L772b70:{c.instructions+=5;NFSU2_TR(0x772b70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b72:{NFSU2_TR(0x772b72);
u8 U[4];
w4(U+0,u32(0x7908c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b77:{NFSU2_TR(0x772b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772b7a:{NFSU2_TR(0x772b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b7b:{NFSU2_TR(0x772b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772b80ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772b80:L772b80:{c.instructions+=2;NFSU2_TR(0x772b80);
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
B772b83:{NFSU2_TR(0x772b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772b84:L772b84:{c.instructions+=2;NFSU2_TR(0x772b84);
w4(R+0,u32(0x7df198ull));
}
B772b89:{NFSU2_TR(0x772b89);
TAIL_STATIC(0x75bfd2u,75b);
}
B772b90:L772b90:{c.instructions+=5;NFSU2_TR(0x772b90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b92:{NFSU2_TR(0x772b92);
u8 U[4];
w4(U+0,u32(0x7908e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b97:{NFSU2_TR(0x772b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772b9a:{NFSU2_TR(0x772b9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772b9b:{NFSU2_TR(0x772b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ba0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ba0:L772ba0:{c.instructions+=2;NFSU2_TR(0x772ba0);
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
B772ba3:{NFSU2_TR(0x772ba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ba4:L772ba4:{c.instructions+=2;NFSU2_TR(0x772ba4);
w4(R+0,u32(0x7df1bcull));
}
B772ba9:{NFSU2_TR(0x772ba9);
TAIL_STATIC(0x75bfd2u,75b);
}
B772bb0:L772bb0:{c.instructions+=3;NFSU2_TR(0x772bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772bb3:{NFSU2_TR(0x772bb3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B772bb6:{NFSU2_TR(0x772bb6);
TAIL_STATIC(0x4ae7d0u,4ae);
}
B772bbb:L772bbb:{c.instructions+=2;NFSU2_TR(0x772bbb);
w4(R+0,u32(0x7df1e0ull));
}
B772bc0:{NFSU2_TR(0x772bc0);
TAIL_STATIC(0x75bfd2u,75b);
}
B772bd0:L772bd0:{c.instructions+=5;NFSU2_TR(0x772bd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772bd2:{NFSU2_TR(0x772bd2);
u8 U[4];
w4(U+0,u32(0x790c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772bd7:{NFSU2_TR(0x772bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772bda:{NFSU2_TR(0x772bda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772bdb:{NFSU2_TR(0x772bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772be0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772be0:L772be0:{c.instructions+=2;NFSU2_TR(0x772be0);
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
B772be3:{NFSU2_TR(0x772be3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772be4:L772be4:{c.instructions+=2;NFSU2_TR(0x772be4);
w4(R+0,u32(0x7df204ull));
}
B772be9:{NFSU2_TR(0x772be9);
TAIL_STATIC(0x75bfd2u,75b);
}
B772bf0:L772bf0:{c.instructions+=5;NFSU2_TR(0x772bf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772bf2:{NFSU2_TR(0x772bf2);
u8 U[4];
w4(U+0,u32(0x790cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772bf7:{NFSU2_TR(0x772bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772bfa:{NFSU2_TR(0x772bfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772bfb:{NFSU2_TR(0x772bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772c00ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772c00:L772c00:{c.instructions+=2;NFSU2_TR(0x772c00);
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
B772c03:{NFSU2_TR(0x772c03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772c04:L772c04:{c.instructions+=5;NFSU2_TR(0x772c04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c06:{NFSU2_TR(0x772c06);
u8 U[4];
w4(U+0,u32(0x790ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c0b:{NFSU2_TR(0x772c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772c0e:{NFSU2_TR(0x772c0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c0f:{NFSU2_TR(0x772c0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772c14ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772c14:L772c14:{c.instructions+=2;NFSU2_TR(0x772c14);
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
B772c17:{NFSU2_TR(0x772c17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772c18:L772c18:{c.instructions+=5;NFSU2_TR(0x772c18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c1a:{NFSU2_TR(0x772c1a);
u8 U[4];
w4(U+0,u32(0x790c94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c1f:{NFSU2_TR(0x772c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772c22:{NFSU2_TR(0x772c22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c23:{NFSU2_TR(0x772c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772c28ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772c28:L772c28:{c.instructions+=2;NFSU2_TR(0x772c28);
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
B772c2b:{NFSU2_TR(0x772c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772c2c:L772c2c:{c.instructions+=5;NFSU2_TR(0x772c2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c2e:{NFSU2_TR(0x772c2e);
u8 U[4];
w4(U+0,u32(0x790c8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c33:{NFSU2_TR(0x772c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772c36:{NFSU2_TR(0x772c36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c37:{NFSU2_TR(0x772c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772c3cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772c3c:L772c3c:{c.instructions+=2;NFSU2_TR(0x772c3c);
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
B772c3f:{NFSU2_TR(0x772c3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772c40:L772c40:{c.instructions+=5;NFSU2_TR(0x772c40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c42:{NFSU2_TR(0x772c42);
u8 U[4];
w4(U+0,u32(0x790c80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c47:{NFSU2_TR(0x772c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772c4a:{NFSU2_TR(0x772c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c4b:{NFSU2_TR(0x772c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772c50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772c50:L772c50:{c.instructions+=2;NFSU2_TR(0x772c50);
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
B772c53:{NFSU2_TR(0x772c53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772c54:L772c54:{c.instructions+=5;NFSU2_TR(0x772c54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c56:{NFSU2_TR(0x772c56);
u8 U[4];
w4(U+0,u32(0x790c74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c5b:{NFSU2_TR(0x772c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772c5e:{NFSU2_TR(0x772c5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c5f:{NFSU2_TR(0x772c5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772c64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772c64:L772c64:{c.instructions+=2;NFSU2_TR(0x772c64);
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
B772c67:{NFSU2_TR(0x772c67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772c68:L772c68:{c.instructions+=5;NFSU2_TR(0x772c68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c6a:{NFSU2_TR(0x772c6a);
u8 U[4];
w4(U+0,u32(0x790c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c6f:{NFSU2_TR(0x772c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772c72:{NFSU2_TR(0x772c72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c73:{NFSU2_TR(0x772c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772c78ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772c78:L772c78:{c.instructions+=2;NFSU2_TR(0x772c78);
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
B772c7b:{NFSU2_TR(0x772c7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772c7c:L772c7c:{c.instructions+=2;NFSU2_TR(0x772c7c);
w4(R+0,u32(0x7df258ull));
}
B772c81:{NFSU2_TR(0x772c81);
TAIL_STATIC(0x75bfd2u,75b);
}
B772c90:L772c90:{c.instructions+=5;NFSU2_TR(0x772c90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c92:{NFSU2_TR(0x772c92);
u8 U[4];
w4(U+0,u32(0x790ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c97:{NFSU2_TR(0x772c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772c9a:{NFSU2_TR(0x772c9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772c9b:{NFSU2_TR(0x772c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ca0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ca0:L772ca0:{c.instructions+=2;NFSU2_TR(0x772ca0);
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
B772ca3:{NFSU2_TR(0x772ca3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ca4:L772ca4:{c.instructions+=5;NFSU2_TR(0x772ca4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ca6:{NFSU2_TR(0x772ca6);
u8 U[4];
w4(U+0,u32(0x790ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cab:{NFSU2_TR(0x772cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772cae:{NFSU2_TR(0x772cae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772caf:{NFSU2_TR(0x772caf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772cb4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772cb4:L772cb4:{c.instructions+=2;NFSU2_TR(0x772cb4);
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
B772cb7:{NFSU2_TR(0x772cb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772cb8:L772cb8:{c.instructions+=5;NFSU2_TR(0x772cb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cba:{NFSU2_TR(0x772cba);
u8 U[4];
w4(U+0,u32(0x790cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cbf:{NFSU2_TR(0x772cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772cc2:{NFSU2_TR(0x772cc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cc3:{NFSU2_TR(0x772cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772cc8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772cc8:L772cc8:{c.instructions+=2;NFSU2_TR(0x772cc8);
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
B772ccb:{NFSU2_TR(0x772ccb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ccc:L772ccc:{c.instructions+=5;NFSU2_TR(0x772ccc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cce:{NFSU2_TR(0x772cce);
u8 U[4];
w4(U+0,u32(0x790cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cd3:{NFSU2_TR(0x772cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772cd6:{NFSU2_TR(0x772cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cd7:{NFSU2_TR(0x772cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772cdcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772cdc:L772cdc:{c.instructions+=2;NFSU2_TR(0x772cdc);
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
B772cdf:{NFSU2_TR(0x772cdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ce0:L772ce0:{c.instructions+=2;NFSU2_TR(0x772ce0);
w4(R+0,u32(0x7df294ull));
}
B772ce5:{NFSU2_TR(0x772ce5);
TAIL_STATIC(0x75bfd2u,75b);
}
B772cf0:L772cf0:{c.instructions+=5;NFSU2_TR(0x772cf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cf2:{NFSU2_TR(0x772cf2);
u8 U[4];
w4(U+0,u32(0x790df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cf7:{NFSU2_TR(0x772cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772cfa:{NFSU2_TR(0x772cfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772cfb:{NFSU2_TR(0x772cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d00ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d00:L772d00:{c.instructions+=2;NFSU2_TR(0x772d00);
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
B772d03:{NFSU2_TR(0x772d03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d04:L772d04:{c.instructions+=5;NFSU2_TR(0x772d04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d06:{NFSU2_TR(0x772d06);
u8 U[4];
w4(U+0,u32(0x790de8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d0b:{NFSU2_TR(0x772d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772d0e:{NFSU2_TR(0x772d0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d0f:{NFSU2_TR(0x772d0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d14ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d14:L772d14:{c.instructions+=2;NFSU2_TR(0x772d14);
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
B772d17:{NFSU2_TR(0x772d17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d18:L772d18:{c.instructions+=5;NFSU2_TR(0x772d18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d1a:{NFSU2_TR(0x772d1a);
u8 U[4];
w4(U+0,u32(0x790de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d1f:{NFSU2_TR(0x772d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772d22:{NFSU2_TR(0x772d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d23:{NFSU2_TR(0x772d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d28ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d28:L772d28:{c.instructions+=2;NFSU2_TR(0x772d28);
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
B772d2b:{NFSU2_TR(0x772d2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d2c:L772d2c:{c.instructions+=5;NFSU2_TR(0x772d2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d2e:{NFSU2_TR(0x772d2e);
u8 U[4];
w4(U+0,u32(0x790dd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d33:{NFSU2_TR(0x772d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772d36:{NFSU2_TR(0x772d36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d37:{NFSU2_TR(0x772d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d3cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d3c:L772d3c:{c.instructions+=2;NFSU2_TR(0x772d3c);
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
B772d3f:{NFSU2_TR(0x772d3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d40:L772d40:{c.instructions+=5;NFSU2_TR(0x772d40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d42:{NFSU2_TR(0x772d42);
u8 U[4];
w4(U+0,u32(0x790dc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d47:{NFSU2_TR(0x772d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772d4a:{NFSU2_TR(0x772d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d4b:{NFSU2_TR(0x772d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d50:L772d50:{c.instructions+=2;NFSU2_TR(0x772d50);
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
B772d53:{NFSU2_TR(0x772d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d54:L772d54:{c.instructions+=5;NFSU2_TR(0x772d54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d56:{NFSU2_TR(0x772d56);
u8 U[4];
w4(U+0,u32(0x790db4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d5b:{NFSU2_TR(0x772d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772d5e:{NFSU2_TR(0x772d5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d5f:{NFSU2_TR(0x772d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d64:L772d64:{c.instructions+=2;NFSU2_TR(0x772d64);
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
B772d67:{NFSU2_TR(0x772d67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d68:L772d68:{c.instructions+=5;NFSU2_TR(0x772d68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d6a:{NFSU2_TR(0x772d6a);
u8 U[4];
w4(U+0,u32(0x790da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d6f:{NFSU2_TR(0x772d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772d72:{NFSU2_TR(0x772d72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d73:{NFSU2_TR(0x772d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d78ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d78:L772d78:{c.instructions+=2;NFSU2_TR(0x772d78);
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
B772d7b:{NFSU2_TR(0x772d7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d7c:L772d7c:{c.instructions+=5;NFSU2_TR(0x772d7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d7e:{NFSU2_TR(0x772d7e);
u8 U[4];
w4(U+0,u32(0x790d94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d83:{NFSU2_TR(0x772d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772d86:{NFSU2_TR(0x772d86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772d87:{NFSU2_TR(0x772d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772d8cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772d8c:L772d8c:{c.instructions+=2;NFSU2_TR(0x772d8c);
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
B772d8f:{NFSU2_TR(0x772d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772d90:L772d90:{c.instructions+=2;NFSU2_TR(0x772d90);
w4(R+0,u32(0x7df2f8ull));
}
B772d95:{NFSU2_TR(0x772d95);
TAIL_STATIC(0x75bfd2u,75b);
}
B772da0:L772da0:{c.instructions+=5;NFSU2_TR(0x772da0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772da2:{NFSU2_TR(0x772da2);
u8 U[4];
w4(U+0,u32(0x790e5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772da7:{NFSU2_TR(0x772da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772daa:{NFSU2_TR(0x772daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772dab:{NFSU2_TR(0x772dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772db0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772db0:L772db0:{c.instructions+=2;NFSU2_TR(0x772db0);
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
B772db3:{NFSU2_TR(0x772db3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772db4:L772db4:{c.instructions+=5;NFSU2_TR(0x772db4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772db6:{NFSU2_TR(0x772db6);
u8 U[4];
w4(U+0,u32(0x790e50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772dbb:{NFSU2_TR(0x772dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772dbe:{NFSU2_TR(0x772dbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772dbf:{NFSU2_TR(0x772dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772dc4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772dc4:L772dc4:{c.instructions+=2;NFSU2_TR(0x772dc4);
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
B772dc7:{NFSU2_TR(0x772dc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772dc8:L772dc8:{c.instructions+=5;NFSU2_TR(0x772dc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772dca:{NFSU2_TR(0x772dca);
u8 U[4];
w4(U+0,u32(0x790e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772dcf:{NFSU2_TR(0x772dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772dd2:{NFSU2_TR(0x772dd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772dd3:{NFSU2_TR(0x772dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772dd8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772dd8:L772dd8:{c.instructions+=2;NFSU2_TR(0x772dd8);
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
B772ddb:{NFSU2_TR(0x772ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ddc:L772ddc:{c.instructions+=2;NFSU2_TR(0x772ddc);
w4(R+0,u32(0x7df32cull));
}
B772de1:{NFSU2_TR(0x772de1);
TAIL_STATIC(0x75bfd2u,75b);
}
B772df0:L772df0:{c.instructions+=5;NFSU2_TR(0x772df0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772df2:{NFSU2_TR(0x772df2);
u8 U[4];
w4(U+0,u32(0x790e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772df7:{NFSU2_TR(0x772df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772dfa:{NFSU2_TR(0x772dfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772dfb:{NFSU2_TR(0x772dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772e00ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772e00:L772e00:{c.instructions+=2;NFSU2_TR(0x772e00);
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
B772e03:{NFSU2_TR(0x772e03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772e04:L772e04:{c.instructions+=2;NFSU2_TR(0x772e04);
w4(R+0,u32(0x7df350ull));
}
B772e09:{NFSU2_TR(0x772e09);
TAIL_STATIC(0x75bfd2u,75b);
}
B772e10:L772e10:{c.instructions+=5;NFSU2_TR(0x772e10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e12:{NFSU2_TR(0x772e12);
u8 U[4];
w4(U+0,u32(0x790f08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e17:{NFSU2_TR(0x772e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772e1a:{NFSU2_TR(0x772e1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e1b:{NFSU2_TR(0x772e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772e20ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772e20:L772e20:{c.instructions+=2;NFSU2_TR(0x772e20);
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
B772e23:{NFSU2_TR(0x772e23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772e24:L772e24:{c.instructions+=2;NFSU2_TR(0x772e24);
w4(R+0,u32(0x7df374ull));
}
B772e29:{NFSU2_TR(0x772e29);
TAIL_STATIC(0x75bfd2u,75b);
}
B772e30:L772e30:{c.instructions+=2;NFSU2_TR(0x772e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B772e33:{NFSU2_TR(0x772e33);
TAIL_STATIC(0x4aea30u,4ae);
}
B772e38:L772e38:{c.instructions+=2;NFSU2_TR(0x772e38);
w4(R+0,u32(0x7df398ull));
}
B772e3d:{NFSU2_TR(0x772e3d);
TAIL_STATIC(0x75bfd2u,75b);
}
B772e50:L772e50:{c.instructions+=5;NFSU2_TR(0x772e50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e52:{NFSU2_TR(0x772e52);
u8 U[4];
w4(U+0,u32(0x790f3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e57:{NFSU2_TR(0x772e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772e5a:{NFSU2_TR(0x772e5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e5b:{NFSU2_TR(0x772e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772e60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772e60:L772e60:{c.instructions+=2;NFSU2_TR(0x772e60);
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
B772e63:{NFSU2_TR(0x772e63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772e64:L772e64:{c.instructions+=2;NFSU2_TR(0x772e64);
w4(R+0,u32(0x7df3bcull));
}
B772e69:{NFSU2_TR(0x772e69);
TAIL_STATIC(0x75bfd2u,75b);
}
B772e70:L772e70:{c.instructions+=5;NFSU2_TR(0x772e70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e72:{NFSU2_TR(0x772e72);
u8 U[4];
w4(U+0,u32(0x790f64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e77:{NFSU2_TR(0x772e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772e7a:{NFSU2_TR(0x772e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e7b:{NFSU2_TR(0x772e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772e80ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772e80:L772e80:{c.instructions+=2;NFSU2_TR(0x772e80);
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
B772e83:{NFSU2_TR(0x772e83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772e84:L772e84:{c.instructions+=2;NFSU2_TR(0x772e84);
w4(R+0,u32(0x7df3e0ull));
}
B772e89:{NFSU2_TR(0x772e89);
TAIL_STATIC(0x75bfd2u,75b);
}
B772e90:L772e90:{c.instructions+=5;NFSU2_TR(0x772e90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e92:{NFSU2_TR(0x772e92);
u8 U[4];
w4(U+0,u32(0x790f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e97:{NFSU2_TR(0x772e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772e9a:{NFSU2_TR(0x772e9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772e9b:{NFSU2_TR(0x772e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ea0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ea0:L772ea0:{c.instructions+=2;NFSU2_TR(0x772ea0);
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
B772ea3:{NFSU2_TR(0x772ea3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ea4:L772ea4:{c.instructions+=2;NFSU2_TR(0x772ea4);
w4(R+0,u32(0x7df404ull));
}
B772ea9:{NFSU2_TR(0x772ea9);
TAIL_STATIC(0x75bfd2u,75b);
}
B772eb0:L772eb0:{c.instructions+=5;NFSU2_TR(0x772eb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772eb2:{NFSU2_TR(0x772eb2);
u8 U[4];
w4(U+0,u32(0x790fb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772eb7:{NFSU2_TR(0x772eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772eba:{NFSU2_TR(0x772eba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ebb:{NFSU2_TR(0x772ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ec0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ec0:L772ec0:{c.instructions+=2;NFSU2_TR(0x772ec0);
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
B772ec3:{NFSU2_TR(0x772ec3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ec4:L772ec4:{c.instructions+=2;NFSU2_TR(0x772ec4);
w4(R+0,u32(0x7df428ull));
}
B772ec9:{NFSU2_TR(0x772ec9);
TAIL_STATIC(0x75bfd2u,75b);
}
B772ed0:L772ed0:{c.instructions+=5;NFSU2_TR(0x772ed0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ed2:{NFSU2_TR(0x772ed2);
u8 U[4];
w4(U+0,u32(0x791060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ed7:{NFSU2_TR(0x772ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772eda:{NFSU2_TR(0x772eda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772edb:{NFSU2_TR(0x772edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ee0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ee0:L772ee0:{c.instructions+=2;NFSU2_TR(0x772ee0);
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
B772ee3:{NFSU2_TR(0x772ee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ee4:L772ee4:{c.instructions+=5;NFSU2_TR(0x772ee4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ee6:{NFSU2_TR(0x772ee6);
u8 U[4];
w4(U+0,u32(0x791054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772eeb:{NFSU2_TR(0x772eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772eee:{NFSU2_TR(0x772eee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772eef:{NFSU2_TR(0x772eef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ef4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ef4:L772ef4:{c.instructions+=2;NFSU2_TR(0x772ef4);
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
B772ef7:{NFSU2_TR(0x772ef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ef8:L772ef8:{c.instructions+=5;NFSU2_TR(0x772ef8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772efa:{NFSU2_TR(0x772efa);
u8 U[4];
w4(U+0,u32(0x79104cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772eff:{NFSU2_TR(0x772eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f02:{NFSU2_TR(0x772f02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f03:{NFSU2_TR(0x772f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772f08ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772f08:L772f08:{c.instructions+=2;NFSU2_TR(0x772f08);
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
B772f0b:{NFSU2_TR(0x772f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772f0c:L772f0c:{c.instructions+=5;NFSU2_TR(0x772f0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f0e:{NFSU2_TR(0x772f0e);
u8 U[4];
w4(U+0,u32(0x791044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f13:{NFSU2_TR(0x772f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f16:{NFSU2_TR(0x772f16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f17:{NFSU2_TR(0x772f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772f1cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772f1c:L772f1c:{c.instructions+=2;NFSU2_TR(0x772f1c);
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
B772f1f:{NFSU2_TR(0x772f1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772f20:L772f20:{c.instructions+=5;NFSU2_TR(0x772f20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f22:{NFSU2_TR(0x772f22);
u8 U[4];
w4(U+0,u32(0x791034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f27:{NFSU2_TR(0x772f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f2a:{NFSU2_TR(0x772f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f2b:{NFSU2_TR(0x772f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772f30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772f30:L772f30:{c.instructions+=2;NFSU2_TR(0x772f30);
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
B772f33:{NFSU2_TR(0x772f33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772f34:L772f34:{c.instructions+=5;NFSU2_TR(0x772f34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f36:{NFSU2_TR(0x772f36);
u8 U[4];
w4(U+0,u32(0x79102cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f3b:{NFSU2_TR(0x772f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f3e:{NFSU2_TR(0x772f3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f3f:{NFSU2_TR(0x772f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772f44ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772f44:L772f44:{c.instructions+=2;NFSU2_TR(0x772f44);
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
B772f47:{NFSU2_TR(0x772f47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772f48:L772f48:{c.instructions+=5;NFSU2_TR(0x772f48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f4a:{NFSU2_TR(0x772f4a);
u8 U[4];
w4(U+0,u32(0x791020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f4f:{NFSU2_TR(0x772f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f52:{NFSU2_TR(0x772f52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f53:{NFSU2_TR(0x772f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772f58ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772f58:L772f58:{c.instructions+=2;NFSU2_TR(0x772f58);
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
B772f5b:{NFSU2_TR(0x772f5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772f5c:L772f5c:{c.instructions+=5;NFSU2_TR(0x772f5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f5e:{NFSU2_TR(0x772f5e);
u8 U[4];
w4(U+0,u32(0x791014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f63:{NFSU2_TR(0x772f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f66:{NFSU2_TR(0x772f66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f67:{NFSU2_TR(0x772f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772f6cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772f6c:L772f6c:{c.instructions+=2;NFSU2_TR(0x772f6c);
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
B772f6f:{NFSU2_TR(0x772f6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772f70:L772f70:{c.instructions+=2;NFSU2_TR(0x772f70);
w4(R+0,u32(0x7df484ull));
}
B772f75:{NFSU2_TR(0x772f75);
TAIL_STATIC(0x75bfd2u,75b);
}
B772f80:L772f80:{c.instructions+=5;NFSU2_TR(0x772f80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f82:{NFSU2_TR(0x772f82);
u8 U[4];
w4(U+0,u32(0x791744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f87:{NFSU2_TR(0x772f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f8a:{NFSU2_TR(0x772f8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f8b:{NFSU2_TR(0x772f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772f90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772f90:L772f90:{c.instructions+=2;NFSU2_TR(0x772f90);
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
B772f93:{NFSU2_TR(0x772f93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772f94:L772f94:{c.instructions+=5;NFSU2_TR(0x772f94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f96:{NFSU2_TR(0x772f96);
u8 U[4];
w4(U+0,u32(0x791730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f9b:{NFSU2_TR(0x772f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772f9e:{NFSU2_TR(0x772f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772f9f:{NFSU2_TR(0x772f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772fa4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772fa4:L772fa4:{c.instructions+=2;NFSU2_TR(0x772fa4);
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
B772fa7:{NFSU2_TR(0x772fa7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772fa8:L772fa8:{c.instructions+=5;NFSU2_TR(0x772fa8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772faa:{NFSU2_TR(0x772faa);
u8 U[4];
w4(U+0,u32(0x791718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772faf:{NFSU2_TR(0x772faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772fb2:{NFSU2_TR(0x772fb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fb3:{NFSU2_TR(0x772fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772fb8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772fb8:L772fb8:{c.instructions+=2;NFSU2_TR(0x772fb8);
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
B772fbb:{NFSU2_TR(0x772fbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772fbc:L772fbc:{c.instructions+=5;NFSU2_TR(0x772fbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fbe:{NFSU2_TR(0x772fbe);
u8 U[4];
w4(U+0,u32(0x791704ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fc3:{NFSU2_TR(0x772fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772fc6:{NFSU2_TR(0x772fc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fc7:{NFSU2_TR(0x772fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772fccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772fcc:L772fcc:{c.instructions+=2;NFSU2_TR(0x772fcc);
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
B772fcf:{NFSU2_TR(0x772fcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772fd0:L772fd0:{c.instructions+=5;NFSU2_TR(0x772fd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fd2:{NFSU2_TR(0x772fd2);
u8 U[4];
w4(U+0,u32(0x7916f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fd7:{NFSU2_TR(0x772fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772fda:{NFSU2_TR(0x772fda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fdb:{NFSU2_TR(0x772fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772fe0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772fe0:L772fe0:{c.instructions+=2;NFSU2_TR(0x772fe0);
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
B772fe3:{NFSU2_TR(0x772fe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772fe4:L772fe4:{c.instructions+=5;NFSU2_TR(0x772fe4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fe6:{NFSU2_TR(0x772fe6);
u8 U[4];
w4(U+0,u32(0x7916e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772feb:{NFSU2_TR(0x772feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B772fee:{NFSU2_TR(0x772fee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fef:{NFSU2_TR(0x772fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x772ff4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B772ff4:L772ff4:{c.instructions+=2;NFSU2_TR(0x772ff4);
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
B772ff7:{NFSU2_TR(0x772ff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B772ff8:L772ff8:{c.instructions+=3;NFSU2_TR(0x772ff8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772ffa:{NFSU2_TR(0x772ffa);
u8 U[4];
w4(U+0,u32(0x7916d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B772fff:{NFSU2_TR(0x772fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x773002u,773);
}
XIT:NFSU2_TR_EXIT(0x772,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
