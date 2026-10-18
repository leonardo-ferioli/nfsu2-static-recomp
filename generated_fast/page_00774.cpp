#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4c9(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_775(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x774,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x774,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_774(u8* __restrict R,Cpu& c);
u32 page_774(Cpu& c){return body_774(c.regs.data(),c);}
__attribute__((noinline)) u32 body_774(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x774000:goto L774000;
case 0x774002:c.instructions+=4;goto B774002;
case 0x774007:c.instructions+=3;goto B774007;
case 0x77400a:c.instructions+=2;goto B77400a;
case 0x77400b:c.instructions+=1;goto B77400b;
case 0x774010:goto L774010;
case 0x774013:c.instructions+=1;goto B774013;
case 0x774014:goto L774014;
case 0x774019:c.instructions+=1;goto B774019;
case 0x774020:goto L774020;
case 0x774022:c.instructions+=4;goto B774022;
case 0x774027:c.instructions+=3;goto B774027;
case 0x77402a:c.instructions+=2;goto B77402a;
case 0x77402b:c.instructions+=1;goto B77402b;
case 0x774030:goto L774030;
case 0x774033:c.instructions+=1;goto B774033;
case 0x774034:goto L774034;
case 0x774036:c.instructions+=4;goto B774036;
case 0x77403b:c.instructions+=3;goto B77403b;
case 0x77403e:c.instructions+=2;goto B77403e;
case 0x77403f:c.instructions+=1;goto B77403f;
case 0x774044:goto L774044;
case 0x774047:c.instructions+=1;goto B774047;
case 0x774048:goto L774048;
case 0x77404a:c.instructions+=4;goto B77404a;
case 0x77404f:c.instructions+=3;goto B77404f;
case 0x774052:c.instructions+=2;goto B774052;
case 0x774053:c.instructions+=1;goto B774053;
case 0x774058:goto L774058;
case 0x77405b:c.instructions+=1;goto B77405b;
case 0x77405c:goto L77405c;
case 0x77405e:c.instructions+=4;goto B77405e;
case 0x774063:c.instructions+=3;goto B774063;
case 0x774066:c.instructions+=2;goto B774066;
case 0x774067:c.instructions+=1;goto B774067;
case 0x77406c:goto L77406c;
case 0x77406f:c.instructions+=1;goto B77406f;
case 0x774070:goto L774070;
case 0x774075:c.instructions+=1;goto B774075;
case 0x774080:goto L774080;
case 0x774082:c.instructions+=4;goto B774082;
case 0x774087:c.instructions+=3;goto B774087;
case 0x77408a:c.instructions+=2;goto B77408a;
case 0x77408b:c.instructions+=1;goto B77408b;
case 0x774090:goto L774090;
case 0x774093:c.instructions+=1;goto B774093;
case 0x774094:goto L774094;
case 0x774096:c.instructions+=4;goto B774096;
case 0x77409b:c.instructions+=3;goto B77409b;
case 0x77409e:c.instructions+=2;goto B77409e;
case 0x77409f:c.instructions+=1;goto B77409f;
case 0x7740a4:goto L7740a4;
case 0x7740a7:c.instructions+=1;goto B7740a7;
case 0x7740a8:goto L7740a8;
case 0x7740ad:c.instructions+=1;goto B7740ad;
case 0x7740c0:goto L7740c0;
case 0x7740c2:c.instructions+=4;goto B7740c2;
case 0x7740c7:c.instructions+=3;goto B7740c7;
case 0x7740ca:c.instructions+=2;goto B7740ca;
case 0x7740cb:c.instructions+=1;goto B7740cb;
case 0x7740d0:goto L7740d0;
case 0x7740d3:c.instructions+=1;goto B7740d3;
case 0x7740d4:goto L7740d4;
case 0x7740d9:c.instructions+=1;goto B7740d9;
case 0x7740e0:goto L7740e0;
case 0x7740e2:c.instructions+=4;goto B7740e2;
case 0x7740e7:c.instructions+=3;goto B7740e7;
case 0x7740ea:c.instructions+=2;goto B7740ea;
case 0x7740eb:c.instructions+=1;goto B7740eb;
case 0x7740f0:goto L7740f0;
case 0x7740f3:c.instructions+=1;goto B7740f3;
case 0x7740f4:goto L7740f4;
case 0x7740f9:c.instructions+=1;goto B7740f9;
case 0x774100:goto L774100;
case 0x774103:c.instructions+=1;goto B774103;
case 0x774108:goto L774108;
case 0x77410d:c.instructions+=1;goto B77410d;
case 0x774120:goto L774120;
case 0x774123:c.instructions+=2;goto B774123;
case 0x774124:c.instructions+=1;goto B774124;
case 0x774129:goto L774129;
case 0x77412a:c.instructions+=1;goto B77412a;
case 0x77412b:goto L77412b;
case 0x774130:c.instructions+=1;goto B774130;
case 0x774140:goto L774140;
case 0x774143:c.instructions+=2;goto B774143;
case 0x774146:c.instructions+=1;goto B774146;
case 0x77414b:goto L77414b;
case 0x774150:c.instructions+=1;goto B774150;
case 0x774160:goto L774160;
case 0x774163:c.instructions+=1;goto B774163;
case 0x774168:goto L774168;
case 0x77416b:c.instructions+=2;goto B77416b;
case 0x77416e:c.instructions+=1;goto B77416e;
case 0x774173:goto L774173;
case 0x774176:c.instructions+=2;goto B774176;
case 0x77417c:c.instructions+=1;goto B77417c;
case 0x774181:goto L774181;
case 0x774184:c.instructions+=2;goto B774184;
case 0x77418a:c.instructions+=1;goto B77418a;
case 0x77418f:goto L77418f;
case 0x774192:c.instructions+=2;goto B774192;
case 0x774198:c.instructions+=1;goto B774198;
case 0x77419d:goto L77419d;
case 0x7741a2:c.instructions+=1;goto B7741a2;
case 0x7741b0:goto L7741b0;
case 0x7741b6:c.instructions+=1;goto B7741b6;
case 0x7741bb:goto L7741bb;
case 0x7741c0:c.instructions+=1;goto B7741c0;
case 0x7741d0:goto L7741d0;
case 0x7741d3:c.instructions+=1;goto B7741d3;
case 0x7741d8:goto L7741d8;
case 0x7741db:c.instructions+=2;goto B7741db;
case 0x7741de:c.instructions+=1;goto B7741de;
case 0x7741e3:goto L7741e3;
case 0x7741e6:c.instructions+=2;goto B7741e6;
case 0x7741ec:c.instructions+=1;goto B7741ec;
case 0x7741f1:goto L7741f1;
case 0x7741f6:c.instructions+=1;goto B7741f6;
case 0x774200:goto L774200;
case 0x774202:c.instructions+=4;goto B774202;
case 0x774207:c.instructions+=3;goto B774207;
case 0x77420a:c.instructions+=2;goto B77420a;
case 0x77420b:c.instructions+=1;goto B77420b;
case 0x774210:goto L774210;
case 0x774213:c.instructions+=1;goto B774213;
case 0x774214:goto L774214;
case 0x774219:c.instructions+=1;goto B774219;
case 0x774220:goto L774220;
case 0x774222:c.instructions+=4;goto B774222;
case 0x774227:c.instructions+=3;goto B774227;
case 0x77422a:c.instructions+=2;goto B77422a;
case 0x77422b:c.instructions+=1;goto B77422b;
case 0x774230:goto L774230;
case 0x774233:c.instructions+=1;goto B774233;
case 0x774234:goto L774234;
case 0x774239:c.instructions+=1;goto B774239;
case 0x774240:goto L774240;
case 0x774242:c.instructions+=4;goto B774242;
case 0x774247:c.instructions+=3;goto B774247;
case 0x77424a:c.instructions+=2;goto B77424a;
case 0x77424b:c.instructions+=1;goto B77424b;
case 0x774250:goto L774250;
case 0x774253:c.instructions+=1;goto B774253;
case 0x774254:goto L774254;
case 0x774256:c.instructions+=4;goto B774256;
case 0x77425b:c.instructions+=3;goto B77425b;
case 0x77425e:c.instructions+=2;goto B77425e;
case 0x77425f:c.instructions+=1;goto B77425f;
case 0x774264:goto L774264;
case 0x774267:c.instructions+=1;goto B774267;
case 0x774268:goto L774268;
case 0x77426a:c.instructions+=4;goto B77426a;
case 0x77426f:c.instructions+=3;goto B77426f;
case 0x774272:c.instructions+=2;goto B774272;
case 0x774273:c.instructions+=1;goto B774273;
case 0x774278:goto L774278;
case 0x77427b:c.instructions+=1;goto B77427b;
case 0x77427c:goto L77427c;
case 0x77427e:c.instructions+=4;goto B77427e;
case 0x774283:c.instructions+=3;goto B774283;
case 0x774286:c.instructions+=2;goto B774286;
case 0x774287:c.instructions+=1;goto B774287;
case 0x77428c:goto L77428c;
case 0x77428f:c.instructions+=1;goto B77428f;
case 0x774290:goto L774290;
case 0x774292:c.instructions+=4;goto B774292;
case 0x774297:c.instructions+=3;goto B774297;
case 0x77429a:c.instructions+=2;goto B77429a;
case 0x77429b:c.instructions+=1;goto B77429b;
case 0x7742a0:goto L7742a0;
case 0x7742a3:c.instructions+=1;goto B7742a3;
case 0x7742a4:goto L7742a4;
case 0x7742a6:c.instructions+=4;goto B7742a6;
case 0x7742ab:c.instructions+=3;goto B7742ab;
case 0x7742ae:c.instructions+=2;goto B7742ae;
case 0x7742af:c.instructions+=1;goto B7742af;
case 0x7742b4:goto L7742b4;
case 0x7742b7:c.instructions+=1;goto B7742b7;
case 0x7742b8:goto L7742b8;
case 0x7742ba:c.instructions+=4;goto B7742ba;
case 0x7742bf:c.instructions+=3;goto B7742bf;
case 0x7742c2:c.instructions+=2;goto B7742c2;
case 0x7742c3:c.instructions+=1;goto B7742c3;
case 0x7742c8:goto L7742c8;
case 0x7742cb:c.instructions+=1;goto B7742cb;
case 0x7742cc:goto L7742cc;
case 0x7742ce:c.instructions+=4;goto B7742ce;
case 0x7742d3:c.instructions+=3;goto B7742d3;
case 0x7742d6:c.instructions+=2;goto B7742d6;
case 0x7742d7:c.instructions+=1;goto B7742d7;
case 0x7742dc:goto L7742dc;
case 0x7742df:c.instructions+=1;goto B7742df;
case 0x7742e0:goto L7742e0;
case 0x7742e5:c.instructions+=1;goto B7742e5;
case 0x7742f0:goto L7742f0;
case 0x7742f2:c.instructions+=4;goto B7742f2;
case 0x7742f7:c.instructions+=3;goto B7742f7;
case 0x7742fa:c.instructions+=2;goto B7742fa;
case 0x7742fb:c.instructions+=1;goto B7742fb;
case 0x774300:goto L774300;
case 0x774303:c.instructions+=1;goto B774303;
case 0x774304:goto L774304;
case 0x774306:c.instructions+=4;goto B774306;
case 0x77430b:c.instructions+=3;goto B77430b;
case 0x77430e:c.instructions+=2;goto B77430e;
case 0x77430f:c.instructions+=1;goto B77430f;
case 0x774314:goto L774314;
case 0x774317:c.instructions+=1;goto B774317;
case 0x774318:goto L774318;
case 0x77431a:c.instructions+=4;goto B77431a;
case 0x77431f:c.instructions+=3;goto B77431f;
case 0x774322:c.instructions+=2;goto B774322;
case 0x774323:c.instructions+=1;goto B774323;
case 0x774328:goto L774328;
case 0x77432b:c.instructions+=1;goto B77432b;
case 0x77432c:goto L77432c;
case 0x77432e:c.instructions+=4;goto B77432e;
case 0x774333:c.instructions+=3;goto B774333;
case 0x774336:c.instructions+=2;goto B774336;
case 0x774337:c.instructions+=1;goto B774337;
case 0x77433c:goto L77433c;
case 0x77433f:c.instructions+=1;goto B77433f;
case 0x774340:goto L774340;
case 0x774342:c.instructions+=4;goto B774342;
case 0x774347:c.instructions+=3;goto B774347;
case 0x77434a:c.instructions+=2;goto B77434a;
case 0x77434b:c.instructions+=1;goto B77434b;
case 0x774350:goto L774350;
case 0x774353:c.instructions+=1;goto B774353;
case 0x774354:goto L774354;
case 0x774359:c.instructions+=1;goto B774359;
case 0x774360:goto L774360;
case 0x774362:c.instructions+=4;goto B774362;
case 0x774367:c.instructions+=3;goto B774367;
case 0x77436a:c.instructions+=2;goto B77436a;
case 0x77436b:c.instructions+=1;goto B77436b;
case 0x774370:goto L774370;
case 0x774373:c.instructions+=1;goto B774373;
case 0x774374:goto L774374;
case 0x774376:c.instructions+=4;goto B774376;
case 0x77437b:c.instructions+=3;goto B77437b;
case 0x77437e:c.instructions+=2;goto B77437e;
case 0x77437f:c.instructions+=1;goto B77437f;
case 0x774384:goto L774384;
case 0x774387:c.instructions+=1;goto B774387;
case 0x774388:goto L774388;
case 0x77438a:c.instructions+=4;goto B77438a;
case 0x77438f:c.instructions+=3;goto B77438f;
case 0x774392:c.instructions+=2;goto B774392;
case 0x774393:c.instructions+=1;goto B774393;
case 0x774398:goto L774398;
case 0x77439b:c.instructions+=1;goto B77439b;
case 0x77439c:goto L77439c;
case 0x77439e:c.instructions+=4;goto B77439e;
case 0x7743a3:c.instructions+=3;goto B7743a3;
case 0x7743a6:c.instructions+=2;goto B7743a6;
case 0x7743a7:c.instructions+=1;goto B7743a7;
case 0x7743ac:goto L7743ac;
case 0x7743af:c.instructions+=1;goto B7743af;
case 0x7743b0:goto L7743b0;
case 0x7743b2:c.instructions+=4;goto B7743b2;
case 0x7743b7:c.instructions+=3;goto B7743b7;
case 0x7743ba:c.instructions+=2;goto B7743ba;
case 0x7743bb:c.instructions+=1;goto B7743bb;
case 0x7743c0:goto L7743c0;
case 0x7743c3:c.instructions+=1;goto B7743c3;
case 0x7743c4:goto L7743c4;
case 0x7743c9:c.instructions+=1;goto B7743c9;
case 0x7743d0:goto L7743d0;
case 0x7743d2:c.instructions+=4;goto B7743d2;
case 0x7743d7:c.instructions+=3;goto B7743d7;
case 0x7743da:c.instructions+=2;goto B7743da;
case 0x7743db:c.instructions+=1;goto B7743db;
case 0x7743e0:goto L7743e0;
case 0x7743e3:c.instructions+=1;goto B7743e3;
case 0x7743e4:goto L7743e4;
case 0x7743e6:c.instructions+=4;goto B7743e6;
case 0x7743eb:c.instructions+=3;goto B7743eb;
case 0x7743ee:c.instructions+=2;goto B7743ee;
case 0x7743ef:c.instructions+=1;goto B7743ef;
case 0x7743f4:goto L7743f4;
case 0x7743f7:c.instructions+=1;goto B7743f7;
case 0x7743f8:goto L7743f8;
case 0x7743fa:c.instructions+=4;goto B7743fa;
case 0x7743ff:c.instructions+=3;goto B7743ff;
case 0x774402:c.instructions+=2;goto B774402;
case 0x774403:c.instructions+=1;goto B774403;
case 0x774408:goto L774408;
case 0x77440b:c.instructions+=1;goto B77440b;
case 0x77440c:goto L77440c;
case 0x77440e:c.instructions+=4;goto B77440e;
case 0x774413:c.instructions+=3;goto B774413;
case 0x774416:c.instructions+=2;goto B774416;
case 0x774417:c.instructions+=1;goto B774417;
case 0x77441c:goto L77441c;
case 0x77441f:c.instructions+=1;goto B77441f;
case 0x774420:goto L774420;
case 0x774422:c.instructions+=4;goto B774422;
case 0x774427:c.instructions+=3;goto B774427;
case 0x77442a:c.instructions+=2;goto B77442a;
case 0x77442b:c.instructions+=1;goto B77442b;
case 0x774430:goto L774430;
case 0x774433:c.instructions+=1;goto B774433;
case 0x774434:goto L774434;
case 0x774439:c.instructions+=1;goto B774439;
case 0x774440:goto L774440;
case 0x774442:c.instructions+=4;goto B774442;
case 0x774447:c.instructions+=3;goto B774447;
case 0x77444a:c.instructions+=2;goto B77444a;
case 0x77444b:c.instructions+=1;goto B77444b;
case 0x774450:goto L774450;
case 0x774453:c.instructions+=1;goto B774453;
case 0x774454:goto L774454;
case 0x774456:c.instructions+=4;goto B774456;
case 0x77445b:c.instructions+=3;goto B77445b;
case 0x77445e:c.instructions+=2;goto B77445e;
case 0x77445f:c.instructions+=1;goto B77445f;
case 0x774464:goto L774464;
case 0x774467:c.instructions+=1;goto B774467;
case 0x774468:goto L774468;
case 0x77446d:c.instructions+=1;goto B77446d;
case 0x774480:goto L774480;
case 0x774482:c.instructions+=4;goto B774482;
case 0x774487:c.instructions+=3;goto B774487;
case 0x77448a:c.instructions+=2;goto B77448a;
case 0x77448b:c.instructions+=1;goto B77448b;
case 0x774490:goto L774490;
case 0x774493:c.instructions+=1;goto B774493;
case 0x774494:goto L774494;
case 0x774496:c.instructions+=4;goto B774496;
case 0x77449b:c.instructions+=3;goto B77449b;
case 0x77449e:c.instructions+=2;goto B77449e;
case 0x77449f:c.instructions+=1;goto B77449f;
case 0x7744a4:goto L7744a4;
case 0x7744a7:c.instructions+=1;goto B7744a7;
case 0x7744a8:goto L7744a8;
case 0x7744aa:c.instructions+=4;goto B7744aa;
case 0x7744af:c.instructions+=3;goto B7744af;
case 0x7744b2:c.instructions+=2;goto B7744b2;
case 0x7744b3:c.instructions+=1;goto B7744b3;
case 0x7744b8:goto L7744b8;
case 0x7744bb:c.instructions+=1;goto B7744bb;
case 0x7744bc:goto L7744bc;
case 0x7744be:c.instructions+=4;goto B7744be;
case 0x7744c3:c.instructions+=3;goto B7744c3;
case 0x7744c6:c.instructions+=2;goto B7744c6;
case 0x7744c7:c.instructions+=1;goto B7744c7;
case 0x7744cc:goto L7744cc;
case 0x7744cf:c.instructions+=1;goto B7744cf;
case 0x7744d0:goto L7744d0;
case 0x7744d5:c.instructions+=1;goto B7744d5;
case 0x7744e0:goto L7744e0;
case 0x7744e2:c.instructions+=4;goto B7744e2;
case 0x7744e7:c.instructions+=3;goto B7744e7;
case 0x7744ea:c.instructions+=2;goto B7744ea;
case 0x7744eb:c.instructions+=1;goto B7744eb;
case 0x7744f0:goto L7744f0;
case 0x7744f3:c.instructions+=1;goto B7744f3;
case 0x7744f4:goto L7744f4;
case 0x7744f9:c.instructions+=1;goto B7744f9;
case 0x774500:goto L774500;
case 0x774502:c.instructions+=4;goto B774502;
case 0x774507:c.instructions+=3;goto B774507;
case 0x77450a:c.instructions+=2;goto B77450a;
case 0x77450b:c.instructions+=1;goto B77450b;
case 0x774510:goto L774510;
case 0x774513:c.instructions+=1;goto B774513;
case 0x774514:goto L774514;
case 0x774519:c.instructions+=1;goto B774519;
case 0x774520:goto L774520;
case 0x774522:c.instructions+=4;goto B774522;
case 0x774527:c.instructions+=3;goto B774527;
case 0x77452a:c.instructions+=2;goto B77452a;
case 0x77452b:c.instructions+=1;goto B77452b;
case 0x774530:goto L774530;
case 0x774533:c.instructions+=1;goto B774533;
case 0x774534:goto L774534;
case 0x774539:c.instructions+=1;goto B774539;
case 0x774540:goto L774540;
case 0x774542:c.instructions+=4;goto B774542;
case 0x774547:c.instructions+=3;goto B774547;
case 0x77454a:c.instructions+=2;goto B77454a;
case 0x77454b:c.instructions+=1;goto B77454b;
case 0x774550:goto L774550;
case 0x774553:c.instructions+=1;goto B774553;
case 0x774554:goto L774554;
case 0x774559:c.instructions+=1;goto B774559;
case 0x774560:goto L774560;
case 0x774566:c.instructions+=1;goto B774566;
case 0x77456b:goto L77456b;
case 0x774570:c.instructions+=1;goto B774570;
case 0x774580:goto L774580;
case 0x774582:c.instructions+=4;goto B774582;
case 0x774587:c.instructions+=3;goto B774587;
case 0x77458a:c.instructions+=2;goto B77458a;
case 0x77458b:c.instructions+=1;goto B77458b;
case 0x774590:goto L774590;
case 0x774593:c.instructions+=1;goto B774593;
case 0x774594:goto L774594;
case 0x774599:c.instructions+=1;goto B774599;
case 0x7745a0:goto L7745a0;
case 0x7745a2:c.instructions+=4;goto B7745a2;
case 0x7745a7:c.instructions+=3;goto B7745a7;
case 0x7745aa:c.instructions+=2;goto B7745aa;
case 0x7745ab:c.instructions+=1;goto B7745ab;
case 0x7745b0:goto L7745b0;
case 0x7745b3:c.instructions+=1;goto B7745b3;
case 0x7745b4:goto L7745b4;
case 0x7745b9:c.instructions+=1;goto B7745b9;
case 0x7745c0:goto L7745c0;
case 0x7745c3:c.instructions+=1;goto B7745c3;
case 0x7745c8:goto L7745c8;
case 0x7745ca:c.instructions+=4;goto B7745ca;
case 0x7745cf:c.instructions+=3;goto B7745cf;
case 0x7745d2:c.instructions+=2;goto B7745d2;
case 0x7745d3:c.instructions+=1;goto B7745d3;
case 0x7745d8:goto L7745d8;
case 0x7745db:c.instructions+=1;goto B7745db;
case 0x7745dc:goto L7745dc;
case 0x7745e1:c.instructions+=1;goto B7745e1;
case 0x7745f0:goto L7745f0;
case 0x7745f3:c.instructions+=1;goto B7745f3;
case 0x7745f8:goto L7745f8;
case 0x7745fb:c.instructions+=2;goto B7745fb;
case 0x774601:c.instructions+=1;goto B774601;
case 0x774606:goto L774606;
case 0x77460b:c.instructions+=1;goto B77460b;
case 0x774610:goto L774610;
case 0x774613:c.instructions+=1;goto B774613;
case 0x774618:goto L774618;
case 0x77461b:c.instructions+=2;goto B77461b;
case 0x774621:c.instructions+=1;goto B774621;
case 0x774626:goto L774626;
case 0x77462b:c.instructions+=1;goto B77462b;
case 0x774630:goto L774630;
case 0x774633:c.instructions+=1;goto B774633;
case 0x774638:goto L774638;
case 0x77463b:c.instructions+=2;goto B77463b;
case 0x774641:c.instructions+=1;goto B774641;
case 0x774646:goto L774646;
case 0x774648:c.instructions+=4;goto B774648;
case 0x77464d:c.instructions+=3;goto B77464d;
case 0x774650:c.instructions+=2;goto B774650;
case 0x774651:c.instructions+=1;goto B774651;
case 0x774656:goto L774656;
case 0x774659:c.instructions+=1;goto B774659;
case 0x77465a:goto L77465a;
case 0x77465c:c.instructions+=4;goto B77465c;
case 0x774661:c.instructions+=3;goto B774661;
case 0x774664:c.instructions+=2;goto B774664;
case 0x774665:c.instructions+=1;goto B774665;
case 0x77466a:goto L77466a;
case 0x77466d:c.instructions+=1;goto B77466d;
case 0x77466e:goto L77466e;
case 0x774670:c.instructions+=4;goto B774670;
case 0x774675:c.instructions+=3;goto B774675;
case 0x774678:c.instructions+=2;goto B774678;
case 0x774679:c.instructions+=1;goto B774679;
case 0x77467e:goto L77467e;
case 0x774681:c.instructions+=1;goto B774681;
case 0x774682:goto L774682;
case 0x774684:c.instructions+=4;goto B774684;
case 0x774689:c.instructions+=3;goto B774689;
case 0x77468c:c.instructions+=2;goto B77468c;
case 0x77468d:c.instructions+=1;goto B77468d;
case 0x774692:goto L774692;
case 0x774695:c.instructions+=1;goto B774695;
case 0x774696:goto L774696;
case 0x774698:c.instructions+=4;goto B774698;
case 0x77469d:c.instructions+=3;goto B77469d;
case 0x7746a0:c.instructions+=2;goto B7746a0;
case 0x7746a1:c.instructions+=1;goto B7746a1;
case 0x7746a6:goto L7746a6;
case 0x7746a9:c.instructions+=1;goto B7746a9;
case 0x7746aa:goto L7746aa;
case 0x7746ac:c.instructions+=4;goto B7746ac;
case 0x7746b1:c.instructions+=3;goto B7746b1;
case 0x7746b4:c.instructions+=2;goto B7746b4;
case 0x7746b5:c.instructions+=1;goto B7746b5;
case 0x7746ba:goto L7746ba;
case 0x7746bd:c.instructions+=1;goto B7746bd;
case 0x7746be:goto L7746be;
case 0x7746c0:c.instructions+=4;goto B7746c0;
case 0x7746c5:c.instructions+=3;goto B7746c5;
case 0x7746c8:c.instructions+=2;goto B7746c8;
case 0x7746c9:c.instructions+=1;goto B7746c9;
case 0x7746ce:goto L7746ce;
case 0x7746d1:c.instructions+=1;goto B7746d1;
case 0x7746d2:goto L7746d2;
case 0x7746d4:c.instructions+=4;goto B7746d4;
case 0x7746d9:c.instructions+=3;goto B7746d9;
case 0x7746dc:c.instructions+=2;goto B7746dc;
case 0x7746dd:c.instructions+=1;goto B7746dd;
case 0x7746e2:goto L7746e2;
case 0x7746e5:c.instructions+=1;goto B7746e5;
case 0x7746e6:goto L7746e6;
case 0x7746e8:c.instructions+=4;goto B7746e8;
case 0x7746ed:c.instructions+=3;goto B7746ed;
case 0x7746f0:c.instructions+=2;goto B7746f0;
case 0x7746f1:c.instructions+=1;goto B7746f1;
case 0x7746f6:goto L7746f6;
case 0x7746f9:c.instructions+=1;goto B7746f9;
case 0x7746fa:goto L7746fa;
case 0x7746fc:c.instructions+=4;goto B7746fc;
case 0x774701:c.instructions+=3;goto B774701;
case 0x774704:c.instructions+=2;goto B774704;
case 0x774705:c.instructions+=1;goto B774705;
case 0x77470a:goto L77470a;
case 0x77470d:c.instructions+=1;goto B77470d;
case 0x77470e:goto L77470e;
case 0x774710:c.instructions+=4;goto B774710;
case 0x774715:c.instructions+=3;goto B774715;
case 0x774718:c.instructions+=2;goto B774718;
case 0x774719:c.instructions+=1;goto B774719;
case 0x77471e:goto L77471e;
case 0x774721:c.instructions+=1;goto B774721;
case 0x774722:goto L774722;
case 0x774724:c.instructions+=4;goto B774724;
case 0x774729:c.instructions+=3;goto B774729;
case 0x77472c:c.instructions+=2;goto B77472c;
case 0x77472d:c.instructions+=1;goto B77472d;
case 0x774732:goto L774732;
case 0x774735:c.instructions+=1;goto B774735;
case 0x774736:goto L774736;
case 0x77473b:c.instructions+=1;goto B77473b;
case 0x774740:goto L774740;
case 0x774743:c.instructions+=1;goto B774743;
case 0x774748:goto L774748;
case 0x77474b:c.instructions+=2;goto B77474b;
case 0x774751:c.instructions+=1;goto B774751;
case 0x774756:goto L774756;
case 0x77475b:c.instructions+=1;goto B77475b;
case 0x774760:goto L774760;
case 0x774763:c.instructions+=1;goto B774763;
case 0x774768:goto L774768;
case 0x77476b:c.instructions+=2;goto B77476b;
case 0x774771:c.instructions+=1;goto B774771;
case 0x774776:goto L774776;
case 0x77477b:c.instructions+=1;goto B77477b;
case 0x774780:goto L774780;
case 0x774783:c.instructions+=1;goto B774783;
case 0x774788:goto L774788;
case 0x77478b:c.instructions+=2;goto B77478b;
case 0x77478e:c.instructions+=1;goto B77478e;
case 0x774793:goto L774793;
case 0x774796:c.instructions+=2;goto B774796;
case 0x77479c:c.instructions+=1;goto B77479c;
case 0x7747a1:goto L7747a1;
case 0x7747a6:c.instructions+=1;goto B7747a6;
case 0x7747b0:goto L7747b0;
case 0x7747b3:c.instructions+=1;goto B7747b3;
case 0x7747b8:goto L7747b8;
case 0x7747ba:c.instructions+=4;goto B7747ba;
case 0x7747bf:c.instructions+=3;goto B7747bf;
case 0x7747c2:c.instructions+=2;goto B7747c2;
case 0x7747c3:c.instructions+=1;goto B7747c3;
case 0x7747c8:goto L7747c8;
case 0x7747cb:c.instructions+=1;goto B7747cb;
case 0x7747cc:goto L7747cc;
case 0x7747d1:c.instructions+=1;goto B7747d1;
case 0x7747e0:goto L7747e0;
case 0x7747e3:c.instructions+=1;goto B7747e3;
case 0x7747e8:goto L7747e8;
case 0x7747ed:c.instructions+=1;goto B7747ed;
case 0x774800:goto L774800;
case 0x774803:c.instructions+=1;goto B774803;
case 0x774808:goto L774808;
case 0x77480b:c.instructions+=2;goto B77480b;
case 0x77480e:c.instructions+=1;goto B77480e;
case 0x774813:goto L774813;
case 0x774816:c.instructions+=2;goto B774816;
case 0x774819:c.instructions+=1;goto B774819;
case 0x77481e:goto L77481e;
case 0x774823:c.instructions+=1;goto B774823;
case 0x774830:goto L774830;
case 0x774832:c.instructions+=4;goto B774832;
case 0x774837:c.instructions+=3;goto B774837;
case 0x77483a:c.instructions+=2;goto B77483a;
case 0x77483b:c.instructions+=1;goto B77483b;
case 0x774840:goto L774840;
case 0x774843:c.instructions+=1;goto B774843;
case 0x774844:goto L774844;
case 0x774846:c.instructions+=4;goto B774846;
case 0x77484b:c.instructions+=3;goto B77484b;
case 0x77484e:c.instructions+=2;goto B77484e;
case 0x77484f:c.instructions+=1;goto B77484f;
case 0x774854:goto L774854;
case 0x774857:c.instructions+=1;goto B774857;
case 0x774858:goto L774858;
case 0x77485a:c.instructions+=4;goto B77485a;
case 0x77485f:c.instructions+=3;goto B77485f;
case 0x774862:c.instructions+=2;goto B774862;
case 0x774863:c.instructions+=1;goto B774863;
case 0x774868:goto L774868;
case 0x77486b:c.instructions+=1;goto B77486b;
case 0x77486c:goto L77486c;
case 0x77486e:c.instructions+=4;goto B77486e;
case 0x774873:c.instructions+=3;goto B774873;
case 0x774876:c.instructions+=2;goto B774876;
case 0x774877:c.instructions+=1;goto B774877;
case 0x77487c:goto L77487c;
case 0x77487f:c.instructions+=1;goto B77487f;
case 0x774880:goto L774880;
case 0x774882:c.instructions+=4;goto B774882;
case 0x774887:c.instructions+=3;goto B774887;
case 0x77488a:c.instructions+=2;goto B77488a;
case 0x77488b:c.instructions+=1;goto B77488b;
case 0x774890:goto L774890;
case 0x774893:c.instructions+=1;goto B774893;
case 0x774894:goto L774894;
case 0x774899:c.instructions+=1;goto B774899;
case 0x7748a0:goto L7748a0;
case 0x7748a3:c.instructions+=1;goto B7748a3;
case 0x7748a8:goto L7748a8;
case 0x7748ab:c.instructions+=2;goto B7748ab;
case 0x7748ae:c.instructions+=1;goto B7748ae;
case 0x7748b3:goto L7748b3;
case 0x7748b8:c.instructions+=1;goto B7748b8;
case 0x7748c0:goto L7748c0;
case 0x7748c2:c.instructions+=4;goto B7748c2;
case 0x7748c7:c.instructions+=3;goto B7748c7;
case 0x7748ca:c.instructions+=2;goto B7748ca;
case 0x7748cb:c.instructions+=1;goto B7748cb;
case 0x7748d0:goto L7748d0;
case 0x7748d3:c.instructions+=1;goto B7748d3;
case 0x7748d4:goto L7748d4;
case 0x7748d9:c.instructions+=1;goto B7748d9;
case 0x7748e0:goto L7748e0;
case 0x7748e3:c.instructions+=1;goto B7748e3;
case 0x7748e8:goto L7748e8;
case 0x7748eb:c.instructions+=2;goto B7748eb;
case 0x7748ee:c.instructions+=1;goto B7748ee;
case 0x7748f3:goto L7748f3;
case 0x7748f6:c.instructions+=2;goto B7748f6;
case 0x7748fc:c.instructions+=1;goto B7748fc;
case 0x774901:goto L774901;
case 0x774904:c.instructions+=2;goto B774904;
case 0x77490a:c.instructions+=1;goto B77490a;
case 0x77490f:goto L77490f;
case 0x774914:c.instructions+=1;goto B774914;
case 0x774920:goto L774920;
case 0x774923:c.instructions+=1;goto B774923;
case 0x774928:goto L774928;
case 0x77492a:c.instructions+=4;goto B77492a;
case 0x77492f:c.instructions+=3;goto B77492f;
case 0x774932:c.instructions+=2;goto B774932;
case 0x774933:c.instructions+=1;goto B774933;
case 0x774938:goto L774938;
case 0x77493b:c.instructions+=1;goto B77493b;
case 0x77493c:goto L77493c;
case 0x77493e:c.instructions+=4;goto B77493e;
case 0x774943:c.instructions+=3;goto B774943;
case 0x774946:c.instructions+=2;goto B774946;
case 0x774947:c.instructions+=1;goto B774947;
case 0x77494c:goto L77494c;
case 0x77494f:c.instructions+=1;goto B77494f;
case 0x774950:goto L774950;
case 0x774952:c.instructions+=4;goto B774952;
case 0x774957:c.instructions+=3;goto B774957;
case 0x77495a:c.instructions+=2;goto B77495a;
case 0x77495b:c.instructions+=1;goto B77495b;
case 0x774960:goto L774960;
case 0x774963:c.instructions+=1;goto B774963;
case 0x774964:goto L774964;
case 0x774966:c.instructions+=4;goto B774966;
case 0x77496b:c.instructions+=3;goto B77496b;
case 0x77496e:c.instructions+=2;goto B77496e;
case 0x77496f:c.instructions+=1;goto B77496f;
case 0x774974:goto L774974;
case 0x774977:c.instructions+=1;goto B774977;
case 0x774978:goto L774978;
case 0x77497a:c.instructions+=4;goto B77497a;
case 0x77497f:c.instructions+=3;goto B77497f;
case 0x774982:c.instructions+=2;goto B774982;
case 0x774983:c.instructions+=1;goto B774983;
case 0x774988:goto L774988;
case 0x77498b:c.instructions+=1;goto B77498b;
case 0x77498c:goto L77498c;
case 0x774991:c.instructions+=1;goto B774991;
case 0x7749a0:goto L7749a0;
case 0x7749a2:c.instructions+=4;goto B7749a2;
case 0x7749a7:c.instructions+=3;goto B7749a7;
case 0x7749aa:c.instructions+=2;goto B7749aa;
case 0x7749ab:c.instructions+=1;goto B7749ab;
case 0x7749b0:goto L7749b0;
case 0x7749b3:c.instructions+=1;goto B7749b3;
case 0x7749b4:goto L7749b4;
case 0x7749b9:c.instructions+=1;goto B7749b9;
case 0x7749c0:goto L7749c0;
case 0x7749c3:c.instructions+=1;goto B7749c3;
case 0x7749c8:goto L7749c8;
case 0x7749cb:c.instructions+=2;goto B7749cb;
case 0x7749ce:c.instructions+=1;goto B7749ce;
case 0x7749d3:goto L7749d3;
case 0x7749d8:c.instructions+=1;goto B7749d8;
case 0x7749e0:goto L7749e0;
case 0x7749e3:c.instructions+=1;goto B7749e3;
case 0x7749e8:goto L7749e8;
case 0x7749eb:c.instructions+=2;goto B7749eb;
case 0x7749ee:c.instructions+=1;goto B7749ee;
case 0x7749f3:goto L7749f3;
case 0x7749f8:c.instructions+=1;goto B7749f8;
case 0x774a00:goto L774a00;
case 0x774a02:c.instructions+=4;goto B774a02;
case 0x774a07:c.instructions+=3;goto B774a07;
case 0x774a0a:c.instructions+=2;goto B774a0a;
case 0x774a0b:c.instructions+=1;goto B774a0b;
case 0x774a10:goto L774a10;
case 0x774a13:c.instructions+=1;goto B774a13;
case 0x774a14:goto L774a14;
case 0x774a19:c.instructions+=1;goto B774a19;
case 0x774a20:goto L774a20;
case 0x774a23:c.instructions+=1;goto B774a23;
case 0x774a28:goto L774a28;
case 0x774a2b:c.instructions+=2;goto B774a2b;
case 0x774a2e:c.instructions+=1;goto B774a2e;
case 0x774a33:goto L774a33;
case 0x774a36:c.instructions+=2;goto B774a36;
case 0x774a3c:c.instructions+=1;goto B774a3c;
case 0x774a41:goto L774a41;
case 0x774a46:c.instructions+=1;goto B774a46;
case 0x774a50:goto L774a50;
case 0x774a53:c.instructions+=1;goto B774a53;
case 0x774a58:goto L774a58;
case 0x774a5b:c.instructions+=2;goto B774a5b;
case 0x774a5e:c.instructions+=1;goto B774a5e;
case 0x774a63:goto L774a63;
case 0x774a66:c.instructions+=2;goto B774a66;
case 0x774a6c:c.instructions+=1;goto B774a6c;
case 0x774a71:goto L774a71;
case 0x774a76:c.instructions+=1;goto B774a76;
case 0x774a80:goto L774a80;
case 0x774a82:c.instructions+=4;goto B774a82;
case 0x774a87:c.instructions+=3;goto B774a87;
case 0x774a8a:c.instructions+=2;goto B774a8a;
case 0x774a8b:c.instructions+=1;goto B774a8b;
case 0x774a90:goto L774a90;
case 0x774a93:c.instructions+=1;goto B774a93;
case 0x774a94:goto L774a94;
case 0x774a99:c.instructions+=1;goto B774a99;
case 0x774aa0:goto L774aa0;
case 0x774aa3:c.instructions+=1;goto B774aa3;
case 0x774aa8:goto L774aa8;
case 0x774aab:c.instructions+=2;goto B774aab;
case 0x774aae:c.instructions+=1;goto B774aae;
case 0x774ab3:goto L774ab3;
case 0x774ab8:c.instructions+=1;goto B774ab8;
case 0x774ac0:goto L774ac0;
case 0x774ac2:c.instructions+=4;goto B774ac2;
case 0x774ac7:c.instructions+=3;goto B774ac7;
case 0x774aca:c.instructions+=2;goto B774aca;
case 0x774acb:c.instructions+=1;goto B774acb;
case 0x774ad0:goto L774ad0;
case 0x774ad3:c.instructions+=1;goto B774ad3;
case 0x774ad4:goto L774ad4;
case 0x774ad9:c.instructions+=1;goto B774ad9;
case 0x774ae0:goto L774ae0;
case 0x774ae2:c.instructions+=4;goto B774ae2;
case 0x774ae7:c.instructions+=3;goto B774ae7;
case 0x774aea:c.instructions+=2;goto B774aea;
case 0x774aeb:c.instructions+=1;goto B774aeb;
case 0x774af0:goto L774af0;
case 0x774af3:c.instructions+=1;goto B774af3;
case 0x774af4:goto L774af4;
case 0x774af9:c.instructions+=1;goto B774af9;
case 0x774b00:goto L774b00;
case 0x774b02:c.instructions+=4;goto B774b02;
case 0x774b07:c.instructions+=3;goto B774b07;
case 0x774b0a:c.instructions+=2;goto B774b0a;
case 0x774b0b:c.instructions+=1;goto B774b0b;
case 0x774b10:goto L774b10;
case 0x774b13:c.instructions+=1;goto B774b13;
case 0x774b14:goto L774b14;
case 0x774b19:c.instructions+=1;goto B774b19;
case 0x774b20:goto L774b20;
case 0x774b23:c.instructions+=1;goto B774b23;
case 0x774b28:goto L774b28;
case 0x774b2b:c.instructions+=2;goto B774b2b;
case 0x774b2e:c.instructions+=1;goto B774b2e;
case 0x774b33:goto L774b33;
case 0x774b36:c.instructions+=2;goto B774b36;
case 0x774b39:c.instructions+=1;goto B774b39;
case 0x774b3e:goto L774b3e;
case 0x774b43:c.instructions+=1;goto B774b43;
case 0x774b50:goto L774b50;
case 0x774b55:c.instructions+=3;goto B774b55;
case 0x774b58:c.instructions+=2;goto B774b58;
case 0x774b59:c.instructions+=1;goto B774b59;
case 0x774b5e:goto L774b5e;
case 0x774b61:c.instructions+=1;goto B774b61;
case 0x774b62:goto L774b62;
case 0x774b67:c.instructions+=1;goto B774b67;
case 0x774b70:goto L774b70;
case 0x774b73:c.instructions+=2;goto B774b73;
case 0x774b76:c.instructions+=1;goto B774b76;
case 0x774b7b:goto L774b7b;
case 0x774b80:c.instructions+=1;goto B774b80;
case 0x774b90:goto L774b90;
case 0x774b92:c.instructions+=4;goto B774b92;
case 0x774b97:c.instructions+=3;goto B774b97;
case 0x774b9a:c.instructions+=2;goto B774b9a;
case 0x774b9b:c.instructions+=1;goto B774b9b;
case 0x774ba0:goto L774ba0;
case 0x774ba3:c.instructions+=1;goto B774ba3;
case 0x774ba4:goto L774ba4;
case 0x774ba9:c.instructions+=1;goto B774ba9;
case 0x774bb0:goto L774bb0;
case 0x774bb2:c.instructions+=4;goto B774bb2;
case 0x774bb7:c.instructions+=3;goto B774bb7;
case 0x774bba:c.instructions+=2;goto B774bba;
case 0x774bbb:c.instructions+=1;goto B774bbb;
case 0x774bc0:goto L774bc0;
case 0x774bc3:c.instructions+=1;goto B774bc3;
case 0x774bc4:goto L774bc4;
case 0x774bc9:c.instructions+=1;goto B774bc9;
case 0x774bd0:goto L774bd0;
case 0x774bd2:c.instructions+=4;goto B774bd2;
case 0x774bd7:c.instructions+=3;goto B774bd7;
case 0x774bda:c.instructions+=2;goto B774bda;
case 0x774bdb:c.instructions+=1;goto B774bdb;
case 0x774be0:goto L774be0;
case 0x774be3:c.instructions+=1;goto B774be3;
case 0x774be4:goto L774be4;
case 0x774be6:c.instructions+=4;goto B774be6;
case 0x774beb:c.instructions+=3;goto B774beb;
case 0x774bee:c.instructions+=2;goto B774bee;
case 0x774bef:c.instructions+=1;goto B774bef;
case 0x774bf4:goto L774bf4;
case 0x774bf7:c.instructions+=1;goto B774bf7;
case 0x774bf8:goto L774bf8;
case 0x774bfd:c.instructions+=1;goto B774bfd;
case 0x774c10:goto L774c10;
case 0x774c12:c.instructions+=4;goto B774c12;
case 0x774c17:c.instructions+=3;goto B774c17;
case 0x774c1a:c.instructions+=2;goto B774c1a;
case 0x774c1b:c.instructions+=1;goto B774c1b;
case 0x774c20:goto L774c20;
case 0x774c23:c.instructions+=1;goto B774c23;
case 0x774c24:goto L774c24;
case 0x774c26:c.instructions+=4;goto B774c26;
case 0x774c2b:c.instructions+=3;goto B774c2b;
case 0x774c2e:c.instructions+=2;goto B774c2e;
case 0x774c2f:c.instructions+=1;goto B774c2f;
case 0x774c34:goto L774c34;
case 0x774c37:c.instructions+=1;goto B774c37;
case 0x774c38:goto L774c38;
case 0x774c3a:c.instructions+=4;goto B774c3a;
case 0x774c3f:c.instructions+=3;goto B774c3f;
case 0x774c42:c.instructions+=2;goto B774c42;
case 0x774c43:c.instructions+=1;goto B774c43;
case 0x774c48:goto L774c48;
case 0x774c4b:c.instructions+=1;goto B774c4b;
case 0x774c4c:goto L774c4c;
case 0x774c4e:c.instructions+=4;goto B774c4e;
case 0x774c53:c.instructions+=3;goto B774c53;
case 0x774c56:c.instructions+=2;goto B774c56;
case 0x774c57:c.instructions+=1;goto B774c57;
case 0x774c5c:goto L774c5c;
case 0x774c5f:c.instructions+=1;goto B774c5f;
case 0x774c60:goto L774c60;
case 0x774c62:c.instructions+=4;goto B774c62;
case 0x774c67:c.instructions+=3;goto B774c67;
case 0x774c6a:c.instructions+=2;goto B774c6a;
case 0x774c6b:c.instructions+=1;goto B774c6b;
case 0x774c70:goto L774c70;
case 0x774c73:c.instructions+=1;goto B774c73;
case 0x774c74:goto L774c74;
case 0x774c76:c.instructions+=4;goto B774c76;
case 0x774c7b:c.instructions+=3;goto B774c7b;
case 0x774c7e:c.instructions+=2;goto B774c7e;
case 0x774c7f:c.instructions+=1;goto B774c7f;
case 0x774c84:goto L774c84;
case 0x774c87:c.instructions+=1;goto B774c87;
case 0x774c88:goto L774c88;
case 0x774c8a:c.instructions+=4;goto B774c8a;
case 0x774c8f:c.instructions+=3;goto B774c8f;
case 0x774c92:c.instructions+=2;goto B774c92;
case 0x774c93:c.instructions+=1;goto B774c93;
case 0x774c98:goto L774c98;
case 0x774c9b:c.instructions+=1;goto B774c9b;
case 0x774c9c:goto L774c9c;
case 0x774c9e:c.instructions+=4;goto B774c9e;
case 0x774ca3:c.instructions+=3;goto B774ca3;
case 0x774ca6:c.instructions+=2;goto B774ca6;
case 0x774ca7:c.instructions+=1;goto B774ca7;
case 0x774cac:goto L774cac;
case 0x774caf:c.instructions+=1;goto B774caf;
case 0x774cb0:goto L774cb0;
case 0x774cb2:c.instructions+=4;goto B774cb2;
case 0x774cb7:c.instructions+=3;goto B774cb7;
case 0x774cba:c.instructions+=2;goto B774cba;
case 0x774cbb:c.instructions+=1;goto B774cbb;
case 0x774cc0:goto L774cc0;
case 0x774cc3:c.instructions+=1;goto B774cc3;
case 0x774cc4:goto L774cc4;
case 0x774cc6:c.instructions+=4;goto B774cc6;
case 0x774ccb:c.instructions+=3;goto B774ccb;
case 0x774cce:c.instructions+=2;goto B774cce;
case 0x774ccf:c.instructions+=1;goto B774ccf;
case 0x774cd4:goto L774cd4;
case 0x774cd7:c.instructions+=1;goto B774cd7;
case 0x774cd8:goto L774cd8;
case 0x774cda:c.instructions+=4;goto B774cda;
case 0x774cdf:c.instructions+=3;goto B774cdf;
case 0x774ce2:c.instructions+=2;goto B774ce2;
case 0x774ce3:c.instructions+=1;goto B774ce3;
case 0x774ce8:goto L774ce8;
case 0x774ceb:c.instructions+=1;goto B774ceb;
case 0x774cec:goto L774cec;
case 0x774cee:c.instructions+=4;goto B774cee;
case 0x774cf3:c.instructions+=3;goto B774cf3;
case 0x774cf6:c.instructions+=2;goto B774cf6;
case 0x774cf7:c.instructions+=1;goto B774cf7;
case 0x774cfc:goto L774cfc;
case 0x774cff:c.instructions+=1;goto B774cff;
case 0x774d00:goto L774d00;
case 0x774d02:c.instructions+=4;goto B774d02;
case 0x774d07:c.instructions+=3;goto B774d07;
case 0x774d0a:c.instructions+=2;goto B774d0a;
case 0x774d0b:c.instructions+=1;goto B774d0b;
case 0x774d10:goto L774d10;
case 0x774d13:c.instructions+=1;goto B774d13;
case 0x774d14:goto L774d14;
case 0x774d16:c.instructions+=4;goto B774d16;
case 0x774d1b:c.instructions+=3;goto B774d1b;
case 0x774d1e:c.instructions+=2;goto B774d1e;
case 0x774d1f:c.instructions+=1;goto B774d1f;
case 0x774d24:goto L774d24;
case 0x774d27:c.instructions+=1;goto B774d27;
case 0x774d28:goto L774d28;
case 0x774d2a:c.instructions+=4;goto B774d2a;
case 0x774d2f:c.instructions+=3;goto B774d2f;
case 0x774d32:c.instructions+=2;goto B774d32;
case 0x774d33:c.instructions+=1;goto B774d33;
case 0x774d38:goto L774d38;
case 0x774d3b:c.instructions+=1;goto B774d3b;
case 0x774d3c:goto L774d3c;
case 0x774d3e:c.instructions+=4;goto B774d3e;
case 0x774d43:c.instructions+=3;goto B774d43;
case 0x774d46:c.instructions+=2;goto B774d46;
case 0x774d47:c.instructions+=1;goto B774d47;
case 0x774d4c:goto L774d4c;
case 0x774d4f:c.instructions+=1;goto B774d4f;
case 0x774d50:goto L774d50;
case 0x774d52:c.instructions+=4;goto B774d52;
case 0x774d57:c.instructions+=3;goto B774d57;
case 0x774d5a:c.instructions+=2;goto B774d5a;
case 0x774d5b:c.instructions+=1;goto B774d5b;
case 0x774d60:goto L774d60;
case 0x774d63:c.instructions+=1;goto B774d63;
case 0x774d64:goto L774d64;
case 0x774d66:c.instructions+=4;goto B774d66;
case 0x774d6b:c.instructions+=3;goto B774d6b;
case 0x774d6e:c.instructions+=2;goto B774d6e;
case 0x774d6f:c.instructions+=1;goto B774d6f;
case 0x774d74:goto L774d74;
case 0x774d77:c.instructions+=1;goto B774d77;
case 0x774d78:goto L774d78;
case 0x774d7a:c.instructions+=4;goto B774d7a;
case 0x774d7f:c.instructions+=3;goto B774d7f;
case 0x774d82:c.instructions+=2;goto B774d82;
case 0x774d83:c.instructions+=1;goto B774d83;
case 0x774d88:goto L774d88;
case 0x774d8b:c.instructions+=1;goto B774d8b;
case 0x774d8c:goto L774d8c;
case 0x774d8e:c.instructions+=4;goto B774d8e;
case 0x774d93:c.instructions+=3;goto B774d93;
case 0x774d96:c.instructions+=2;goto B774d96;
case 0x774d97:c.instructions+=1;goto B774d97;
case 0x774d9c:goto L774d9c;
case 0x774d9f:c.instructions+=1;goto B774d9f;
case 0x774da0:goto L774da0;
case 0x774da2:c.instructions+=4;goto B774da2;
case 0x774da7:c.instructions+=3;goto B774da7;
case 0x774daa:c.instructions+=2;goto B774daa;
case 0x774dab:c.instructions+=1;goto B774dab;
case 0x774db0:goto L774db0;
case 0x774db3:c.instructions+=1;goto B774db3;
case 0x774db4:goto L774db4;
case 0x774db6:c.instructions+=4;goto B774db6;
case 0x774dbb:c.instructions+=3;goto B774dbb;
case 0x774dbe:c.instructions+=2;goto B774dbe;
case 0x774dbf:c.instructions+=1;goto B774dbf;
case 0x774dc4:goto L774dc4;
case 0x774dc7:c.instructions+=1;goto B774dc7;
case 0x774dc8:goto L774dc8;
case 0x774dca:c.instructions+=4;goto B774dca;
case 0x774dcf:c.instructions+=3;goto B774dcf;
case 0x774dd2:c.instructions+=2;goto B774dd2;
case 0x774dd3:c.instructions+=1;goto B774dd3;
case 0x774dd8:goto L774dd8;
case 0x774ddb:c.instructions+=1;goto B774ddb;
case 0x774ddc:goto L774ddc;
case 0x774dde:c.instructions+=4;goto B774dde;
case 0x774de3:c.instructions+=3;goto B774de3;
case 0x774de6:c.instructions+=2;goto B774de6;
case 0x774de7:c.instructions+=1;goto B774de7;
case 0x774dec:goto L774dec;
case 0x774def:c.instructions+=1;goto B774def;
case 0x774df0:goto L774df0;
case 0x774df2:c.instructions+=4;goto B774df2;
case 0x774df7:c.instructions+=3;goto B774df7;
case 0x774dfa:c.instructions+=2;goto B774dfa;
case 0x774dfb:c.instructions+=1;goto B774dfb;
case 0x774e00:goto L774e00;
case 0x774e03:c.instructions+=1;goto B774e03;
case 0x774e04:goto L774e04;
case 0x774e06:c.instructions+=4;goto B774e06;
case 0x774e0b:c.instructions+=3;goto B774e0b;
case 0x774e0e:c.instructions+=2;goto B774e0e;
case 0x774e0f:c.instructions+=1;goto B774e0f;
case 0x774e14:goto L774e14;
case 0x774e17:c.instructions+=1;goto B774e17;
case 0x774e18:goto L774e18;
case 0x774e1a:c.instructions+=4;goto B774e1a;
case 0x774e1f:c.instructions+=3;goto B774e1f;
case 0x774e22:c.instructions+=2;goto B774e22;
case 0x774e23:c.instructions+=1;goto B774e23;
case 0x774e28:goto L774e28;
case 0x774e2b:c.instructions+=1;goto B774e2b;
case 0x774e2c:goto L774e2c;
case 0x774e2e:c.instructions+=4;goto B774e2e;
case 0x774e33:c.instructions+=3;goto B774e33;
case 0x774e36:c.instructions+=2;goto B774e36;
case 0x774e37:c.instructions+=1;goto B774e37;
case 0x774e3c:goto L774e3c;
case 0x774e3f:c.instructions+=1;goto B774e3f;
case 0x774e40:goto L774e40;
case 0x774e42:c.instructions+=4;goto B774e42;
case 0x774e47:c.instructions+=3;goto B774e47;
case 0x774e4a:c.instructions+=2;goto B774e4a;
case 0x774e4b:c.instructions+=1;goto B774e4b;
case 0x774e50:goto L774e50;
case 0x774e53:c.instructions+=1;goto B774e53;
case 0x774e54:goto L774e54;
case 0x774e56:c.instructions+=4;goto B774e56;
case 0x774e5b:c.instructions+=3;goto B774e5b;
case 0x774e5e:c.instructions+=2;goto B774e5e;
case 0x774e5f:c.instructions+=1;goto B774e5f;
case 0x774e64:goto L774e64;
case 0x774e67:c.instructions+=1;goto B774e67;
case 0x774e68:goto L774e68;
case 0x774e6a:c.instructions+=4;goto B774e6a;
case 0x774e6f:c.instructions+=3;goto B774e6f;
case 0x774e72:c.instructions+=2;goto B774e72;
case 0x774e73:c.instructions+=1;goto B774e73;
case 0x774e78:goto L774e78;
case 0x774e7b:c.instructions+=1;goto B774e7b;
case 0x774e7c:goto L774e7c;
case 0x774e7e:c.instructions+=4;goto B774e7e;
case 0x774e83:c.instructions+=3;goto B774e83;
case 0x774e86:c.instructions+=2;goto B774e86;
case 0x774e87:c.instructions+=1;goto B774e87;
case 0x774e8c:goto L774e8c;
case 0x774e8f:c.instructions+=1;goto B774e8f;
case 0x774e90:goto L774e90;
case 0x774e92:c.instructions+=4;goto B774e92;
case 0x774e97:c.instructions+=3;goto B774e97;
case 0x774e9a:c.instructions+=2;goto B774e9a;
case 0x774e9b:c.instructions+=1;goto B774e9b;
case 0x774ea0:goto L774ea0;
case 0x774ea3:c.instructions+=1;goto B774ea3;
case 0x774ea4:goto L774ea4;
case 0x774ea6:c.instructions+=4;goto B774ea6;
case 0x774eab:c.instructions+=3;goto B774eab;
case 0x774eae:c.instructions+=2;goto B774eae;
case 0x774eaf:c.instructions+=1;goto B774eaf;
case 0x774eb4:goto L774eb4;
case 0x774eb7:c.instructions+=1;goto B774eb7;
case 0x774eb8:goto L774eb8;
case 0x774eba:c.instructions+=4;goto B774eba;
case 0x774ebf:c.instructions+=3;goto B774ebf;
case 0x774ec2:c.instructions+=2;goto B774ec2;
case 0x774ec3:c.instructions+=1;goto B774ec3;
case 0x774ec8:goto L774ec8;
case 0x774ecb:c.instructions+=1;goto B774ecb;
case 0x774ecc:goto L774ecc;
case 0x774ece:c.instructions+=4;goto B774ece;
case 0x774ed3:c.instructions+=3;goto B774ed3;
case 0x774ed6:c.instructions+=2;goto B774ed6;
case 0x774ed7:c.instructions+=1;goto B774ed7;
case 0x774edc:goto L774edc;
case 0x774edf:c.instructions+=1;goto B774edf;
case 0x774ee0:goto L774ee0;
case 0x774ee2:c.instructions+=4;goto B774ee2;
case 0x774ee7:c.instructions+=3;goto B774ee7;
case 0x774eea:c.instructions+=2;goto B774eea;
case 0x774eeb:c.instructions+=1;goto B774eeb;
case 0x774ef0:goto L774ef0;
case 0x774ef3:c.instructions+=1;goto B774ef3;
case 0x774ef4:goto L774ef4;
case 0x774ef6:c.instructions+=4;goto B774ef6;
case 0x774efb:c.instructions+=3;goto B774efb;
case 0x774efe:c.instructions+=2;goto B774efe;
case 0x774eff:c.instructions+=1;goto B774eff;
case 0x774f04:goto L774f04;
case 0x774f07:c.instructions+=1;goto B774f07;
case 0x774f08:goto L774f08;
case 0x774f0a:c.instructions+=4;goto B774f0a;
case 0x774f0f:c.instructions+=3;goto B774f0f;
case 0x774f12:c.instructions+=2;goto B774f12;
case 0x774f13:c.instructions+=1;goto B774f13;
case 0x774f18:goto L774f18;
case 0x774f1b:c.instructions+=1;goto B774f1b;
case 0x774f1c:goto L774f1c;
case 0x774f1e:c.instructions+=4;goto B774f1e;
case 0x774f23:c.instructions+=3;goto B774f23;
case 0x774f26:c.instructions+=2;goto B774f26;
case 0x774f27:c.instructions+=1;goto B774f27;
case 0x774f2c:goto L774f2c;
case 0x774f2f:c.instructions+=1;goto B774f2f;
case 0x774f30:goto L774f30;
case 0x774f32:c.instructions+=4;goto B774f32;
case 0x774f37:c.instructions+=3;goto B774f37;
case 0x774f3a:c.instructions+=2;goto B774f3a;
case 0x774f3b:c.instructions+=1;goto B774f3b;
case 0x774f40:goto L774f40;
case 0x774f43:c.instructions+=1;goto B774f43;
case 0x774f44:goto L774f44;
case 0x774f46:c.instructions+=4;goto B774f46;
case 0x774f4b:c.instructions+=3;goto B774f4b;
case 0x774f4e:c.instructions+=2;goto B774f4e;
case 0x774f4f:c.instructions+=1;goto B774f4f;
case 0x774f54:goto L774f54;
case 0x774f57:c.instructions+=1;goto B774f57;
case 0x774f58:goto L774f58;
case 0x774f5a:c.instructions+=4;goto B774f5a;
case 0x774f5f:c.instructions+=3;goto B774f5f;
case 0x774f62:c.instructions+=2;goto B774f62;
case 0x774f63:c.instructions+=1;goto B774f63;
case 0x774f68:goto L774f68;
case 0x774f6b:c.instructions+=1;goto B774f6b;
case 0x774f6c:goto L774f6c;
case 0x774f6e:c.instructions+=4;goto B774f6e;
case 0x774f73:c.instructions+=3;goto B774f73;
case 0x774f76:c.instructions+=2;goto B774f76;
case 0x774f77:c.instructions+=1;goto B774f77;
case 0x774f7c:goto L774f7c;
case 0x774f7f:c.instructions+=1;goto B774f7f;
case 0x774f80:goto L774f80;
case 0x774f82:c.instructions+=4;goto B774f82;
case 0x774f87:c.instructions+=3;goto B774f87;
case 0x774f8a:c.instructions+=2;goto B774f8a;
case 0x774f8b:c.instructions+=1;goto B774f8b;
case 0x774f90:goto L774f90;
case 0x774f93:c.instructions+=1;goto B774f93;
case 0x774f94:goto L774f94;
case 0x774f96:c.instructions+=4;goto B774f96;
case 0x774f9b:c.instructions+=3;goto B774f9b;
case 0x774f9e:c.instructions+=2;goto B774f9e;
case 0x774f9f:c.instructions+=1;goto B774f9f;
case 0x774fa4:goto L774fa4;
case 0x774fa7:c.instructions+=1;goto B774fa7;
case 0x774fa8:goto L774fa8;
case 0x774faa:c.instructions+=4;goto B774faa;
case 0x774faf:c.instructions+=3;goto B774faf;
case 0x774fb2:c.instructions+=2;goto B774fb2;
case 0x774fb3:c.instructions+=1;goto B774fb3;
case 0x774fb8:goto L774fb8;
case 0x774fbb:c.instructions+=1;goto B774fbb;
case 0x774fbc:goto L774fbc;
case 0x774fbe:c.instructions+=4;goto B774fbe;
case 0x774fc3:c.instructions+=3;goto B774fc3;
case 0x774fc6:c.instructions+=2;goto B774fc6;
case 0x774fc7:c.instructions+=1;goto B774fc7;
case 0x774fcc:goto L774fcc;
case 0x774fcf:c.instructions+=1;goto B774fcf;
case 0x774fd0:goto L774fd0;
case 0x774fd2:c.instructions+=4;goto B774fd2;
case 0x774fd7:c.instructions+=3;goto B774fd7;
case 0x774fda:c.instructions+=2;goto B774fda;
case 0x774fdb:c.instructions+=1;goto B774fdb;
case 0x774fe0:goto L774fe0;
case 0x774fe3:c.instructions+=1;goto B774fe3;
case 0x774fe4:goto L774fe4;
case 0x774fe6:c.instructions+=4;goto B774fe6;
case 0x774feb:c.instructions+=3;goto B774feb;
case 0x774fee:c.instructions+=2;goto B774fee;
case 0x774fef:c.instructions+=1;goto B774fef;
case 0x774ff4:goto L774ff4;
case 0x774ff7:c.instructions+=1;goto B774ff7;
case 0x774ff8:goto L774ff8;
case 0x774ffa:c.instructions+=2;goto B774ffa;
case 0x774fff:c.instructions+=1;goto B774fff;
default:missing_instruction(c.pc);}
B774000:L774000:{c.instructions+=5;NFSU2_TR(0x774000);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774002:{NFSU2_TR(0x774002);
u8 U[4];
w4(U+0,u32(0x795974ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774007:{NFSU2_TR(0x774007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77400a:{NFSU2_TR(0x77400a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77400b:{NFSU2_TR(0x77400b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774010ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774010:L774010:{c.instructions+=2;NFSU2_TR(0x774010);
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
B774013:{NFSU2_TR(0x774013);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774014:L774014:{c.instructions+=2;NFSU2_TR(0x774014);
w4(R+0,u32(0x7dff20ull));
}
B774019:{NFSU2_TR(0x774019);
TAIL_STATIC(0x75bfd2u,75b);
}
B774020:L774020:{c.instructions+=5;NFSU2_TR(0x774020);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774022:{NFSU2_TR(0x774022);
u8 U[4];
w4(U+0,u32(0x795a14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774027:{NFSU2_TR(0x774027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77402a:{NFSU2_TR(0x77402a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77402b:{NFSU2_TR(0x77402b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774030ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774030:L774030:{c.instructions+=2;NFSU2_TR(0x774030);
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
B774033:{NFSU2_TR(0x774033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774034:L774034:{c.instructions+=5;NFSU2_TR(0x774034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774036:{NFSU2_TR(0x774036);
u8 U[4];
w4(U+0,u32(0x795a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77403b:{NFSU2_TR(0x77403b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77403e:{NFSU2_TR(0x77403e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77403f:{NFSU2_TR(0x77403f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774044ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774044:L774044:{c.instructions+=2;NFSU2_TR(0x774044);
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
B774047:{NFSU2_TR(0x774047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774048:L774048:{c.instructions+=5;NFSU2_TR(0x774048);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77404a:{NFSU2_TR(0x77404a);
u8 U[4];
w4(U+0,u32(0x795a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77404f:{NFSU2_TR(0x77404f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774052:{NFSU2_TR(0x774052);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774053:{NFSU2_TR(0x774053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774058ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774058:L774058:{c.instructions+=2;NFSU2_TR(0x774058);
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
B77405b:{NFSU2_TR(0x77405b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77405c:L77405c:{c.instructions+=5;NFSU2_TR(0x77405c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77405e:{NFSU2_TR(0x77405e);
u8 U[4];
w4(U+0,u32(0x7959f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774063:{NFSU2_TR(0x774063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774066:{NFSU2_TR(0x774066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774067:{NFSU2_TR(0x774067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77406cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77406c:L77406c:{c.instructions+=2;NFSU2_TR(0x77406c);
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
B77406f:{NFSU2_TR(0x77406f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774070:L774070:{c.instructions+=2;NFSU2_TR(0x774070);
w4(R+0,u32(0x7dff64ull));
}
B774075:{NFSU2_TR(0x774075);
TAIL_STATIC(0x75bfd2u,75b);
}
B774080:L774080:{c.instructions+=5;NFSU2_TR(0x774080);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774082:{NFSU2_TR(0x774082);
u8 U[4];
w4(U+0,u32(0x795a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774087:{NFSU2_TR(0x774087);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77408a:{NFSU2_TR(0x77408a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77408b:{NFSU2_TR(0x77408b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774090ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774090:L774090:{c.instructions+=2;NFSU2_TR(0x774090);
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
B774093:{NFSU2_TR(0x774093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774094:L774094:{c.instructions+=5;NFSU2_TR(0x774094);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774096:{NFSU2_TR(0x774096);
u8 U[4];
w4(U+0,u32(0x7959f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77409b:{NFSU2_TR(0x77409b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77409e:{NFSU2_TR(0x77409e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77409f:{NFSU2_TR(0x77409f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7740a4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7740a4:L7740a4:{c.instructions+=2;NFSU2_TR(0x7740a4);
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
B7740a7:{NFSU2_TR(0x7740a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7740a8:L7740a8:{c.instructions+=2;NFSU2_TR(0x7740a8);
w4(R+0,u32(0x7dff90ull));
}
B7740ad:{NFSU2_TR(0x7740ad);
TAIL_STATIC(0x75bfd2u,75b);
}
B7740c0:L7740c0:{c.instructions+=5;NFSU2_TR(0x7740c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7740c2:{NFSU2_TR(0x7740c2);
u8 U[4];
w4(U+0,u32(0x795a34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7740c7:{NFSU2_TR(0x7740c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7740ca:{NFSU2_TR(0x7740ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7740cb:{NFSU2_TR(0x7740cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7740d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7740d0:L7740d0:{c.instructions+=2;NFSU2_TR(0x7740d0);
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
B7740d3:{NFSU2_TR(0x7740d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7740d4:L7740d4:{c.instructions+=2;NFSU2_TR(0x7740d4);
w4(R+0,u32(0x7dffb4ull));
}
B7740d9:{NFSU2_TR(0x7740d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7740e0:L7740e0:{c.instructions+=5;NFSU2_TR(0x7740e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7740e2:{NFSU2_TR(0x7740e2);
u8 U[4];
w4(U+0,u32(0x795a68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7740e7:{NFSU2_TR(0x7740e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7740ea:{NFSU2_TR(0x7740ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7740eb:{NFSU2_TR(0x7740eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7740f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7740f0:L7740f0:{c.instructions+=2;NFSU2_TR(0x7740f0);
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
B7740f3:{NFSU2_TR(0x7740f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7740f4:L7740f4:{c.instructions+=2;NFSU2_TR(0x7740f4);
w4(R+0,u32(0x7dffd8ull));
}
B7740f9:{NFSU2_TR(0x7740f9);
TAIL_STATIC(0x75bfd2u,75b);
}
B774100:L774100:{c.instructions+=2;NFSU2_TR(0x774100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774103:{NFSU2_TR(0x774103);
TAIL_STATIC(0x4c9880u,4c9);
}
B774108:L774108:{c.instructions+=2;NFSU2_TR(0x774108);
w4(R+0,u32(0x7dfffcull));
}
B77410d:{NFSU2_TR(0x77410d);
TAIL_STATIC(0x75bfd2u,75b);
}
B774120:L774120:{c.instructions+=3;NFSU2_TR(0x774120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774123:{NFSU2_TR(0x774123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774124:{NFSU2_TR(0x774124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774129ull));
TAIL_STATIC(0x4022c0u,402);
}
B774129:L774129:{c.instructions+=2;NFSU2_TR(0x774129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77412a:{NFSU2_TR(0x77412a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77412b:L77412b:{c.instructions+=2;NFSU2_TR(0x77412b);
w4(R+0,u32(0x7e0020ull));
}
B774130:{NFSU2_TR(0x774130);
TAIL_STATIC(0x75bfd2u,75b);
}
B774140:L774140:{c.instructions+=3;NFSU2_TR(0x774140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774143:{NFSU2_TR(0x774143);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B774146:{NFSU2_TR(0x774146);
TAIL_STATIC(0x4358e0u,435);
}
B77414b:L77414b:{c.instructions+=2;NFSU2_TR(0x77414b);
w4(R+0,u32(0x7e0044ull));
}
B774150:{NFSU2_TR(0x774150);
TAIL_STATIC(0x75bfd2u,75b);
}
B774160:L774160:{c.instructions+=2;NFSU2_TR(0x774160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774163:{NFSU2_TR(0x774163);
TAIL_STATIC(0x510d40u,510);
}
B774168:L774168:{c.instructions+=3;NFSU2_TR(0x774168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77416b:{NFSU2_TR(0x77416b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77416e:{NFSU2_TR(0x77416e);
TAIL_STATIC(0x479100u,479);
}
B774173:L774173:{c.instructions+=3;NFSU2_TR(0x774173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774176:{NFSU2_TR(0x774176);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xc8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xc8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77417c:{NFSU2_TR(0x77417c);
TAIL_STATIC(0x4957a0u,495);
}
B774181:L774181:{c.instructions+=3;NFSU2_TR(0x774181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774184:{NFSU2_TR(0x774184);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77418a:{NFSU2_TR(0x77418a);
TAIL_STATIC(0x4957a0u,495);
}
B77418f:L77418f:{c.instructions+=3;NFSU2_TR(0x77418f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774192:{NFSU2_TR(0x774192);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x150ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x150ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x150ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B774198:{NFSU2_TR(0x774198);
TAIL_STATIC(0x4957a0u,495);
}
B77419d:L77419d:{c.instructions+=2;NFSU2_TR(0x77419d);
w4(R+0,u32(0x7e20ecull));
}
B7741a2:{NFSU2_TR(0x7741a2);
TAIL_STATIC(0x75bfd2u,75b);
}
B7741b0:L7741b0:{c.instructions+=2;NFSU2_TR(0x7741b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7741b6:{NFSU2_TR(0x7741b6);
TAIL_STATIC(0x531610u,531);
}
B7741bb:L7741bb:{c.instructions+=2;NFSU2_TR(0x7741bb);
w4(R+0,u32(0x7e0068ull));
}
B7741c0:{NFSU2_TR(0x7741c0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7741d0:L7741d0:{c.instructions+=2;NFSU2_TR(0x7741d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7741d3:{NFSU2_TR(0x7741d3);
TAIL_STATIC(0x510d40u,510);
}
B7741d8:L7741d8:{c.instructions+=3;NFSU2_TR(0x7741d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7741db:{NFSU2_TR(0x7741db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B7741de:{NFSU2_TR(0x7741de);
TAIL_STATIC(0x4cbba0u,4cb);
}
B7741e3:L7741e3:{c.instructions+=3;NFSU2_TR(0x7741e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7741e6:{NFSU2_TR(0x7741e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfcull))));
}
B7741ec:{NFSU2_TR(0x7741ec);
TAIL_STATIC(0x4cbba0u,4cb);
}
B7741f1:L7741f1:{c.instructions+=2;NFSU2_TR(0x7741f1);
w4(R+0,u32(0x7e009cull));
}
B7741f6:{NFSU2_TR(0x7741f6);
TAIL_STATIC(0x75bfd2u,75b);
}
B774200:L774200:{c.instructions+=5;NFSU2_TR(0x774200);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774202:{NFSU2_TR(0x774202);
u8 U[4];
w4(U+0,u32(0x795d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774207:{NFSU2_TR(0x774207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77420a:{NFSU2_TR(0x77420a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77420b:{NFSU2_TR(0x77420b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774210ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774210:L774210:{c.instructions+=2;NFSU2_TR(0x774210);
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
B774213:{NFSU2_TR(0x774213);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774214:L774214:{c.instructions+=2;NFSU2_TR(0x774214);
w4(R+0,u32(0x7e00c0ull));
}
B774219:{NFSU2_TR(0x774219);
TAIL_STATIC(0x75bfd2u,75b);
}
B774220:L774220:{c.instructions+=5;NFSU2_TR(0x774220);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774222:{NFSU2_TR(0x774222);
u8 U[4];
w4(U+0,u32(0x795d70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774227:{NFSU2_TR(0x774227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77422a:{NFSU2_TR(0x77422a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77422b:{NFSU2_TR(0x77422b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774230ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774230:L774230:{c.instructions+=2;NFSU2_TR(0x774230);
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
B774233:{NFSU2_TR(0x774233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774234:L774234:{c.instructions+=2;NFSU2_TR(0x774234);
w4(R+0,u32(0x7e00e4ull));
}
B774239:{NFSU2_TR(0x774239);
TAIL_STATIC(0x75bfd2u,75b);
}
B774240:L774240:{c.instructions+=5;NFSU2_TR(0x774240);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774242:{NFSU2_TR(0x774242);
u8 U[4];
w4(U+0,u32(0x7916e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774247:{NFSU2_TR(0x774247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77424a:{NFSU2_TR(0x77424a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77424b:{NFSU2_TR(0x77424b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774250ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774250:L774250:{c.instructions+=2;NFSU2_TR(0x774250);
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
B774253:{NFSU2_TR(0x774253);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774254:L774254:{c.instructions+=5;NFSU2_TR(0x774254);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774256:{NFSU2_TR(0x774256);
u8 U[4];
w4(U+0,u32(0x795d84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77425b:{NFSU2_TR(0x77425b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77425e:{NFSU2_TR(0x77425e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77425f:{NFSU2_TR(0x77425f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774264ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774264:L774264:{c.instructions+=2;NFSU2_TR(0x774264);
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
B774267:{NFSU2_TR(0x774267);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774268:L774268:{c.instructions+=5;NFSU2_TR(0x774268);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77426a:{NFSU2_TR(0x77426a);
u8 U[4];
w4(U+0,u32(0x791784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77426f:{NFSU2_TR(0x77426f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774272:{NFSU2_TR(0x774272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774273:{NFSU2_TR(0x774273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774278ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774278:L774278:{c.instructions+=2;NFSU2_TR(0x774278);
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
B77427b:{NFSU2_TR(0x77427b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77427c:L77427c:{c.instructions+=5;NFSU2_TR(0x77427c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77427e:{NFSU2_TR(0x77427e);
u8 U[4];
w4(U+0,u32(0x791784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774283:{NFSU2_TR(0x774283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774286:{NFSU2_TR(0x774286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774287:{NFSU2_TR(0x774287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77428cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77428c:L77428c:{c.instructions+=2;NFSU2_TR(0x77428c);
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
B77428f:{NFSU2_TR(0x77428f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774290:L774290:{c.instructions+=5;NFSU2_TR(0x774290);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774292:{NFSU2_TR(0x774292);
u8 U[4];
w4(U+0,u32(0x791790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774297:{NFSU2_TR(0x774297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77429a:{NFSU2_TR(0x77429a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77429b:{NFSU2_TR(0x77429b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7742a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7742a0:L7742a0:{c.instructions+=2;NFSU2_TR(0x7742a0);
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
B7742a3:{NFSU2_TR(0x7742a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7742a4:L7742a4:{c.instructions+=5;NFSU2_TR(0x7742a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742a6:{NFSU2_TR(0x7742a6);
u8 U[4];
w4(U+0,u32(0x791770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742ab:{NFSU2_TR(0x7742ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7742ae:{NFSU2_TR(0x7742ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742af:{NFSU2_TR(0x7742af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7742b4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7742b4:L7742b4:{c.instructions+=2;NFSU2_TR(0x7742b4);
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
B7742b7:{NFSU2_TR(0x7742b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7742b8:L7742b8:{c.instructions+=5;NFSU2_TR(0x7742b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742ba:{NFSU2_TR(0x7742ba);
u8 U[4];
w4(U+0,u32(0x791764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742bf:{NFSU2_TR(0x7742bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7742c2:{NFSU2_TR(0x7742c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742c3:{NFSU2_TR(0x7742c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7742c8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7742c8:L7742c8:{c.instructions+=2;NFSU2_TR(0x7742c8);
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
B7742cb:{NFSU2_TR(0x7742cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7742cc:L7742cc:{c.instructions+=5;NFSU2_TR(0x7742cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742ce:{NFSU2_TR(0x7742ce);
u8 U[4];
w4(U+0,u32(0x791758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742d3:{NFSU2_TR(0x7742d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7742d6:{NFSU2_TR(0x7742d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742d7:{NFSU2_TR(0x7742d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7742dcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7742dc:L7742dc:{c.instructions+=2;NFSU2_TR(0x7742dc);
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
B7742df:{NFSU2_TR(0x7742df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7742e0:L7742e0:{c.instructions+=2;NFSU2_TR(0x7742e0);
w4(R+0,u32(0x7e0140ull));
}
B7742e5:{NFSU2_TR(0x7742e5);
TAIL_STATIC(0x75bfd2u,75b);
}
B7742f0:L7742f0:{c.instructions+=5;NFSU2_TR(0x7742f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742f2:{NFSU2_TR(0x7742f2);
u8 U[4];
w4(U+0,u32(0x7916e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742f7:{NFSU2_TR(0x7742f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7742fa:{NFSU2_TR(0x7742fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7742fb:{NFSU2_TR(0x7742fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774300ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774300:L774300:{c.instructions+=2;NFSU2_TR(0x774300);
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
B774303:{NFSU2_TR(0x774303);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774304:L774304:{c.instructions+=5;NFSU2_TR(0x774304);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774306:{NFSU2_TR(0x774306);
u8 U[4];
w4(U+0,u32(0x791790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77430b:{NFSU2_TR(0x77430b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77430e:{NFSU2_TR(0x77430e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77430f:{NFSU2_TR(0x77430f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774314ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774314:L774314:{c.instructions+=2;NFSU2_TR(0x774314);
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
B774317:{NFSU2_TR(0x774317);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774318:L774318:{c.instructions+=5;NFSU2_TR(0x774318);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77431a:{NFSU2_TR(0x77431a);
u8 U[4];
w4(U+0,u32(0x791770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77431f:{NFSU2_TR(0x77431f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774322:{NFSU2_TR(0x774322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774323:{NFSU2_TR(0x774323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774328ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774328:L774328:{c.instructions+=2;NFSU2_TR(0x774328);
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
B77432b:{NFSU2_TR(0x77432b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77432c:L77432c:{c.instructions+=5;NFSU2_TR(0x77432c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77432e:{NFSU2_TR(0x77432e);
u8 U[4];
w4(U+0,u32(0x791764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774333:{NFSU2_TR(0x774333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774336:{NFSU2_TR(0x774336);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774337:{NFSU2_TR(0x774337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77433cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77433c:L77433c:{c.instructions+=2;NFSU2_TR(0x77433c);
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
B77433f:{NFSU2_TR(0x77433f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774340:L774340:{c.instructions+=5;NFSU2_TR(0x774340);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774342:{NFSU2_TR(0x774342);
u8 U[4];
w4(U+0,u32(0x791758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774347:{NFSU2_TR(0x774347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77434a:{NFSU2_TR(0x77434a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77434b:{NFSU2_TR(0x77434b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774350ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774350:L774350:{c.instructions+=2;NFSU2_TR(0x774350);
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
B774353:{NFSU2_TR(0x774353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774354:L774354:{c.instructions+=2;NFSU2_TR(0x774354);
w4(R+0,u32(0x7e0184ull));
}
B774359:{NFSU2_TR(0x774359);
TAIL_STATIC(0x75bfd2u,75b);
}
B774360:L774360:{c.instructions+=5;NFSU2_TR(0x774360);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774362:{NFSU2_TR(0x774362);
u8 U[4];
w4(U+0,u32(0x7916e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774367:{NFSU2_TR(0x774367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77436a:{NFSU2_TR(0x77436a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77436b:{NFSU2_TR(0x77436b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774370ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774370:L774370:{c.instructions+=2;NFSU2_TR(0x774370);
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
B774373:{NFSU2_TR(0x774373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774374:L774374:{c.instructions+=5;NFSU2_TR(0x774374);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774376:{NFSU2_TR(0x774376);
u8 U[4];
w4(U+0,u32(0x791784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77437b:{NFSU2_TR(0x77437b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77437e:{NFSU2_TR(0x77437e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77437f:{NFSU2_TR(0x77437f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774384ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774384:L774384:{c.instructions+=2;NFSU2_TR(0x774384);
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
B774387:{NFSU2_TR(0x774387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774388:L774388:{c.instructions+=5;NFSU2_TR(0x774388);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77438a:{NFSU2_TR(0x77438a);
u8 U[4];
w4(U+0,u32(0x791770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77438f:{NFSU2_TR(0x77438f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774392:{NFSU2_TR(0x774392);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774393:{NFSU2_TR(0x774393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774398ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774398:L774398:{c.instructions+=2;NFSU2_TR(0x774398);
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
B77439b:{NFSU2_TR(0x77439b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77439c:L77439c:{c.instructions+=5;NFSU2_TR(0x77439c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77439e:{NFSU2_TR(0x77439e);
u8 U[4];
w4(U+0,u32(0x791764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743a3:{NFSU2_TR(0x7743a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7743a6:{NFSU2_TR(0x7743a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743a7:{NFSU2_TR(0x7743a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7743acull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7743ac:L7743ac:{c.instructions+=2;NFSU2_TR(0x7743ac);
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
B7743af:{NFSU2_TR(0x7743af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7743b0:L7743b0:{c.instructions+=5;NFSU2_TR(0x7743b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743b2:{NFSU2_TR(0x7743b2);
u8 U[4];
w4(U+0,u32(0x791790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743b7:{NFSU2_TR(0x7743b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7743ba:{NFSU2_TR(0x7743ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743bb:{NFSU2_TR(0x7743bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7743c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7743c0:L7743c0:{c.instructions+=2;NFSU2_TR(0x7743c0);
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
B7743c3:{NFSU2_TR(0x7743c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7743c4:L7743c4:{c.instructions+=2;NFSU2_TR(0x7743c4);
w4(R+0,u32(0x7e01c8ull));
}
B7743c9:{NFSU2_TR(0x7743c9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7743d0:L7743d0:{c.instructions+=5;NFSU2_TR(0x7743d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743d2:{NFSU2_TR(0x7743d2);
u8 U[4];
w4(U+0,u32(0x7916e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743d7:{NFSU2_TR(0x7743d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7743da:{NFSU2_TR(0x7743da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743db:{NFSU2_TR(0x7743db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7743e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7743e0:L7743e0:{c.instructions+=2;NFSU2_TR(0x7743e0);
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
B7743e3:{NFSU2_TR(0x7743e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7743e4:L7743e4:{c.instructions+=5;NFSU2_TR(0x7743e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743e6:{NFSU2_TR(0x7743e6);
u8 U[4];
w4(U+0,u32(0x791784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743eb:{NFSU2_TR(0x7743eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7743ee:{NFSU2_TR(0x7743ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743ef:{NFSU2_TR(0x7743ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7743f4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7743f4:L7743f4:{c.instructions+=2;NFSU2_TR(0x7743f4);
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
B7743f7:{NFSU2_TR(0x7743f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7743f8:L7743f8:{c.instructions+=5;NFSU2_TR(0x7743f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743fa:{NFSU2_TR(0x7743fa);
u8 U[4];
w4(U+0,u32(0x791770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7743ff:{NFSU2_TR(0x7743ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774402:{NFSU2_TR(0x774402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774403:{NFSU2_TR(0x774403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774408ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774408:L774408:{c.instructions+=2;NFSU2_TR(0x774408);
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
B77440b:{NFSU2_TR(0x77440b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77440c:L77440c:{c.instructions+=5;NFSU2_TR(0x77440c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77440e:{NFSU2_TR(0x77440e);
u8 U[4];
w4(U+0,u32(0x791764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774413:{NFSU2_TR(0x774413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774416:{NFSU2_TR(0x774416);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774417:{NFSU2_TR(0x774417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77441cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77441c:L77441c:{c.instructions+=2;NFSU2_TR(0x77441c);
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
B77441f:{NFSU2_TR(0x77441f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774420:L774420:{c.instructions+=5;NFSU2_TR(0x774420);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774422:{NFSU2_TR(0x774422);
u8 U[4];
w4(U+0,u32(0x791758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774427:{NFSU2_TR(0x774427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77442a:{NFSU2_TR(0x77442a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77442b:{NFSU2_TR(0x77442b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774430ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774430:L774430:{c.instructions+=2;NFSU2_TR(0x774430);
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
B774433:{NFSU2_TR(0x774433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774434:L774434:{c.instructions+=2;NFSU2_TR(0x774434);
w4(R+0,u32(0x7df570ull));
}
B774439:{NFSU2_TR(0x774439);
TAIL_STATIC(0x75bfd2u,75b);
}
B774440:L774440:{c.instructions+=5;NFSU2_TR(0x774440);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774442:{NFSU2_TR(0x774442);
u8 U[4];
w4(U+0,u32(0x795d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774447:{NFSU2_TR(0x774447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77444a:{NFSU2_TR(0x77444a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77444b:{NFSU2_TR(0x77444b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774450ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774450:L774450:{c.instructions+=2;NFSU2_TR(0x774450);
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
B774453:{NFSU2_TR(0x774453);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774454:L774454:{c.instructions+=5;NFSU2_TR(0x774454);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774456:{NFSU2_TR(0x774456);
u8 U[4];
w4(U+0,u32(0x795d8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77445b:{NFSU2_TR(0x77445b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77445e:{NFSU2_TR(0x77445e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77445f:{NFSU2_TR(0x77445f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774464ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774464:L774464:{c.instructions+=2;NFSU2_TR(0x774464);
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
B774467:{NFSU2_TR(0x774467);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774468:L774468:{c.instructions+=2;NFSU2_TR(0x774468);
w4(R+0,u32(0x7e01f4ull));
}
B77446d:{NFSU2_TR(0x77446d);
TAIL_STATIC(0x75bfd2u,75b);
}
B774480:L774480:{c.instructions+=5;NFSU2_TR(0x774480);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774482:{NFSU2_TR(0x774482);
u8 U[4];
w4(U+0,u32(0x7916e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774487:{NFSU2_TR(0x774487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77448a:{NFSU2_TR(0x77448a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77448b:{NFSU2_TR(0x77448b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774490ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774490:L774490:{c.instructions+=2;NFSU2_TR(0x774490);
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
B774493:{NFSU2_TR(0x774493);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774494:L774494:{c.instructions+=5;NFSU2_TR(0x774494);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774496:{NFSU2_TR(0x774496);
u8 U[4];
w4(U+0,u32(0x791770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77449b:{NFSU2_TR(0x77449b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77449e:{NFSU2_TR(0x77449e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77449f:{NFSU2_TR(0x77449f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7744a4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7744a4:L7744a4:{c.instructions+=2;NFSU2_TR(0x7744a4);
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
B7744a7:{NFSU2_TR(0x7744a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7744a8:L7744a8:{c.instructions+=5;NFSU2_TR(0x7744a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744aa:{NFSU2_TR(0x7744aa);
u8 U[4];
w4(U+0,u32(0x791764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744af:{NFSU2_TR(0x7744af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7744b2:{NFSU2_TR(0x7744b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744b3:{NFSU2_TR(0x7744b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7744b8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7744b8:L7744b8:{c.instructions+=2;NFSU2_TR(0x7744b8);
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
B7744bb:{NFSU2_TR(0x7744bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7744bc:L7744bc:{c.instructions+=5;NFSU2_TR(0x7744bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744be:{NFSU2_TR(0x7744be);
u8 U[4];
w4(U+0,u32(0x791758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744c3:{NFSU2_TR(0x7744c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7744c6:{NFSU2_TR(0x7744c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744c7:{NFSU2_TR(0x7744c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7744ccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7744cc:L7744cc:{c.instructions+=2;NFSU2_TR(0x7744cc);
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
B7744cf:{NFSU2_TR(0x7744cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7744d0:L7744d0:{c.instructions+=2;NFSU2_TR(0x7744d0);
w4(R+0,u32(0x7e0230ull));
}
B7744d5:{NFSU2_TR(0x7744d5);
TAIL_STATIC(0x75bfd2u,75b);
}
B7744e0:L7744e0:{c.instructions+=5;NFSU2_TR(0x7744e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744e2:{NFSU2_TR(0x7744e2);
u8 U[4];
w4(U+0,u32(0x795dc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744e7:{NFSU2_TR(0x7744e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7744ea:{NFSU2_TR(0x7744ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7744eb:{NFSU2_TR(0x7744eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7744f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7744f0:L7744f0:{c.instructions+=2;NFSU2_TR(0x7744f0);
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
B7744f3:{NFSU2_TR(0x7744f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7744f4:L7744f4:{c.instructions+=2;NFSU2_TR(0x7744f4);
w4(R+0,u32(0x7e0254ull));
}
B7744f9:{NFSU2_TR(0x7744f9);
TAIL_STATIC(0x75bfd2u,75b);
}
B774500:L774500:{c.instructions+=5;NFSU2_TR(0x774500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774502:{NFSU2_TR(0x774502);
u8 U[4];
w4(U+0,u32(0x795dd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774507:{NFSU2_TR(0x774507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77450a:{NFSU2_TR(0x77450a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77450b:{NFSU2_TR(0x77450b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774510ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774510:L774510:{c.instructions+=2;NFSU2_TR(0x774510);
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
B774513:{NFSU2_TR(0x774513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774514:L774514:{c.instructions+=2;NFSU2_TR(0x774514);
w4(R+0,u32(0x7e0278ull));
}
B774519:{NFSU2_TR(0x774519);
TAIL_STATIC(0x75bfd2u,75b);
}
B774520:L774520:{c.instructions+=5;NFSU2_TR(0x774520);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774522:{NFSU2_TR(0x774522);
u8 U[4];
w4(U+0,u32(0x795decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774527:{NFSU2_TR(0x774527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77452a:{NFSU2_TR(0x77452a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77452b:{NFSU2_TR(0x77452b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774530ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774530:L774530:{c.instructions+=2;NFSU2_TR(0x774530);
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
B774533:{NFSU2_TR(0x774533);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774534:L774534:{c.instructions+=2;NFSU2_TR(0x774534);
w4(R+0,u32(0x7e029cull));
}
B774539:{NFSU2_TR(0x774539);
TAIL_STATIC(0x75bfd2u,75b);
}
B774540:L774540:{c.instructions+=5;NFSU2_TR(0x774540);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774542:{NFSU2_TR(0x774542);
u8 U[4];
w4(U+0,u32(0x795e3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774547:{NFSU2_TR(0x774547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77454a:{NFSU2_TR(0x77454a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77454b:{NFSU2_TR(0x77454b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774550ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774550:L774550:{c.instructions+=2;NFSU2_TR(0x774550);
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
B774553:{NFSU2_TR(0x774553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774554:L774554:{c.instructions+=2;NFSU2_TR(0x774554);
w4(R+0,u32(0x7e02e4ull));
}
B774559:{NFSU2_TR(0x774559);
TAIL_STATIC(0x75bfd2u,75b);
}
B774560:L774560:{c.instructions+=2;NFSU2_TR(0x774560);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B774566:{NFSU2_TR(0x774566);
TAIL_STATIC(0x4cbaf0u,4cb);
}
B77456b:L77456b:{c.instructions+=2;NFSU2_TR(0x77456b);
w4(R+0,u32(0x7e0308ull));
}
B774570:{NFSU2_TR(0x774570);
TAIL_STATIC(0x75bfd2u,75b);
}
B774580:L774580:{c.instructions+=5;NFSU2_TR(0x774580);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774582:{NFSU2_TR(0x774582);
u8 U[4];
w4(U+0,u32(0x795e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774587:{NFSU2_TR(0x774587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77458a:{NFSU2_TR(0x77458a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77458b:{NFSU2_TR(0x77458b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774590ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774590:L774590:{c.instructions+=2;NFSU2_TR(0x774590);
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
B774593:{NFSU2_TR(0x774593);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774594:L774594:{c.instructions+=2;NFSU2_TR(0x774594);
w4(R+0,u32(0x7e032cull));
}
B774599:{NFSU2_TR(0x774599);
TAIL_STATIC(0x75bfd2u,75b);
}
B7745a0:L7745a0:{c.instructions+=5;NFSU2_TR(0x7745a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7745a2:{NFSU2_TR(0x7745a2);
u8 U[4];
w4(U+0,u32(0x795e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7745a7:{NFSU2_TR(0x7745a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7745aa:{NFSU2_TR(0x7745aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7745ab:{NFSU2_TR(0x7745ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7745b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7745b0:L7745b0:{c.instructions+=2;NFSU2_TR(0x7745b0);
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
B7745b3:{NFSU2_TR(0x7745b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7745b4:L7745b4:{c.instructions+=2;NFSU2_TR(0x7745b4);
w4(R+0,u32(0x7e0350ull));
}
B7745b9:{NFSU2_TR(0x7745b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7745c0:L7745c0:{c.instructions+=2;NFSU2_TR(0x7745c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7745c3:{NFSU2_TR(0x7745c3);
TAIL_STATIC(0x4cbc30u,4cb);
}
B7745c8:L7745c8:{c.instructions+=5;NFSU2_TR(0x7745c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7745ca:{NFSU2_TR(0x7745ca);
u8 U[4];
w4(U+0,u32(0x795e8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7745cf:{NFSU2_TR(0x7745cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7745d2:{NFSU2_TR(0x7745d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7745d3:{NFSU2_TR(0x7745d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7745d8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7745d8:L7745d8:{c.instructions+=2;NFSU2_TR(0x7745d8);
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
B7745db:{NFSU2_TR(0x7745db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7745dc:L7745dc:{c.instructions+=2;NFSU2_TR(0x7745dc);
w4(R+0,u32(0x7e037cull));
}
B7745e1:{NFSU2_TR(0x7745e1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7745f0:L7745f0:{c.instructions+=2;NFSU2_TR(0x7745f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7745f3:{NFSU2_TR(0x7745f3);
TAIL_STATIC(0x4cbc30u,4cb);
}
B7745f8:L7745f8:{c.instructions+=3;NFSU2_TR(0x7745f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7745fb:{NFSU2_TR(0x7745fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x154ull))));
}
B774601:{NFSU2_TR(0x774601);
TAIL_STATIC(0x49d870u,49d);
}
B774606:L774606:{c.instructions+=2;NFSU2_TR(0x774606);
w4(R+0,u32(0x7e03a8ull));
}
B77460b:{NFSU2_TR(0x77460b);
TAIL_STATIC(0x75bfd2u,75b);
}
B774610:L774610:{c.instructions+=2;NFSU2_TR(0x774610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774613:{NFSU2_TR(0x774613);
TAIL_STATIC(0x4cbc30u,4cb);
}
B774618:L774618:{c.instructions+=3;NFSU2_TR(0x774618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77461b:{NFSU2_TR(0x77461b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x150ull))));
}
B774621:{NFSU2_TR(0x774621);
TAIL_STATIC(0x49d870u,49d);
}
B774626:L774626:{c.instructions+=2;NFSU2_TR(0x774626);
w4(R+0,u32(0x7e03d4ull));
}
B77462b:{NFSU2_TR(0x77462b);
TAIL_STATIC(0x75bfd2u,75b);
}
B774630:L774630:{c.instructions+=2;NFSU2_TR(0x774630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774633:{NFSU2_TR(0x774633);
TAIL_STATIC(0x4cbc30u,4cb);
}
B774638:L774638:{c.instructions+=3;NFSU2_TR(0x774638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77463b:{NFSU2_TR(0x77463b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x188ull))));
}
B774641:{NFSU2_TR(0x774641);
TAIL_STATIC(0x49d870u,49d);
}
B774646:L774646:{c.instructions+=5;NFSU2_TR(0x774646);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774648:{NFSU2_TR(0x774648);
u8 U[4];
w4(U+0,u32(0x795f80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77464d:{NFSU2_TR(0x77464d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774650:{NFSU2_TR(0x774650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774651:{NFSU2_TR(0x774651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774656ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774656:L774656:{c.instructions+=2;NFSU2_TR(0x774656);
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
B774659:{NFSU2_TR(0x774659);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77465a:L77465a:{c.instructions+=5;NFSU2_TR(0x77465a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77465c:{NFSU2_TR(0x77465c);
u8 U[4];
w4(U+0,u32(0x795f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774661:{NFSU2_TR(0x774661);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774664:{NFSU2_TR(0x774664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774665:{NFSU2_TR(0x774665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77466aull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77466a:L77466a:{c.instructions+=2;NFSU2_TR(0x77466a);
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
B77466d:{NFSU2_TR(0x77466d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77466e:L77466e:{c.instructions+=5;NFSU2_TR(0x77466e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774670:{NFSU2_TR(0x774670);
u8 U[4];
w4(U+0,u32(0x795f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774675:{NFSU2_TR(0x774675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774678:{NFSU2_TR(0x774678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774679:{NFSU2_TR(0x774679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77467eull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77467e:L77467e:{c.instructions+=2;NFSU2_TR(0x77467e);
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
B774681:{NFSU2_TR(0x774681);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774682:L774682:{c.instructions+=5;NFSU2_TR(0x774682);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774684:{NFSU2_TR(0x774684);
u8 U[4];
w4(U+0,u32(0x795f40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774689:{NFSU2_TR(0x774689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77468c:{NFSU2_TR(0x77468c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77468d:{NFSU2_TR(0x77468d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774692ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774692:L774692:{c.instructions+=2;NFSU2_TR(0x774692);
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
B774695:{NFSU2_TR(0x774695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774696:L774696:{c.instructions+=5;NFSU2_TR(0x774696);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774698:{NFSU2_TR(0x774698);
u8 U[4];
w4(U+0,u32(0x795f2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77469d:{NFSU2_TR(0x77469d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7746a0:{NFSU2_TR(0x7746a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746a1:{NFSU2_TR(0x7746a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7746a6ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7746a6:L7746a6:{c.instructions+=2;NFSU2_TR(0x7746a6);
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
B7746a9:{NFSU2_TR(0x7746a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7746aa:L7746aa:{c.instructions+=5;NFSU2_TR(0x7746aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746ac:{NFSU2_TR(0x7746ac);
u8 U[4];
w4(U+0,u32(0x795f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746b1:{NFSU2_TR(0x7746b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7746b4:{NFSU2_TR(0x7746b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746b5:{NFSU2_TR(0x7746b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7746baull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7746ba:L7746ba:{c.instructions+=2;NFSU2_TR(0x7746ba);
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
B7746bd:{NFSU2_TR(0x7746bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7746be:L7746be:{c.instructions+=5;NFSU2_TR(0x7746be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746c0:{NFSU2_TR(0x7746c0);
u8 U[4];
w4(U+0,u32(0x793f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746c5:{NFSU2_TR(0x7746c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7746c8:{NFSU2_TR(0x7746c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746c9:{NFSU2_TR(0x7746c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7746ceull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7746ce:L7746ce:{c.instructions+=2;NFSU2_TR(0x7746ce);
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
B7746d1:{NFSU2_TR(0x7746d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7746d2:L7746d2:{c.instructions+=5;NFSU2_TR(0x7746d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746d4:{NFSU2_TR(0x7746d4);
u8 U[4];
w4(U+0,u32(0x793f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746d9:{NFSU2_TR(0x7746d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7746dc:{NFSU2_TR(0x7746dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746dd:{NFSU2_TR(0x7746dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7746e2ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7746e2:L7746e2:{c.instructions+=2;NFSU2_TR(0x7746e2);
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
B7746e5:{NFSU2_TR(0x7746e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7746e6:L7746e6:{c.instructions+=5;NFSU2_TR(0x7746e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746e8:{NFSU2_TR(0x7746e8);
u8 U[4];
w4(U+0,u32(0x795f0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746ed:{NFSU2_TR(0x7746ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7746f0:{NFSU2_TR(0x7746f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746f1:{NFSU2_TR(0x7746f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7746f6ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7746f6:L7746f6:{c.instructions+=2;NFSU2_TR(0x7746f6);
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
B7746f9:{NFSU2_TR(0x7746f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7746fa:L7746fa:{c.instructions+=5;NFSU2_TR(0x7746fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7746fc:{NFSU2_TR(0x7746fc);
u8 U[4];
w4(U+0,u32(0x793f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774701:{NFSU2_TR(0x774701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774704:{NFSU2_TR(0x774704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774705:{NFSU2_TR(0x774705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77470aull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77470a:L77470a:{c.instructions+=2;NFSU2_TR(0x77470a);
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
B77470d:{NFSU2_TR(0x77470d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77470e:L77470e:{c.instructions+=5;NFSU2_TR(0x77470e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774710:{NFSU2_TR(0x774710);
u8 U[4];
w4(U+0,u32(0x793f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774715:{NFSU2_TR(0x774715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774718:{NFSU2_TR(0x774718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774719:{NFSU2_TR(0x774719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77471eull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77471e:L77471e:{c.instructions+=2;NFSU2_TR(0x77471e);
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
B774721:{NFSU2_TR(0x774721);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774722:L774722:{c.instructions+=5;NFSU2_TR(0x774722);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774724:{NFSU2_TR(0x774724);
u8 U[4];
w4(U+0,u32(0x795efcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774729:{NFSU2_TR(0x774729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77472c:{NFSU2_TR(0x77472c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77472d:{NFSU2_TR(0x77472d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774732ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774732:L774732:{c.instructions+=2;NFSU2_TR(0x774732);
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
B774735:{NFSU2_TR(0x774735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774736:L774736:{c.instructions+=2;NFSU2_TR(0x774736);
w4(R+0,u32(0x7e0460ull));
}
B77473b:{NFSU2_TR(0x77473b);
TAIL_STATIC(0x75bfd2u,75b);
}
B774740:L774740:{c.instructions+=2;NFSU2_TR(0x774740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774743:{NFSU2_TR(0x774743);
TAIL_STATIC(0x4cbc30u,4cb);
}
B774748:L774748:{c.instructions+=3;NFSU2_TR(0x774748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77474b:{NFSU2_TR(0x77474b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x188ull))));
}
B774751:{NFSU2_TR(0x774751);
TAIL_STATIC(0x49d870u,49d);
}
B774756:L774756:{c.instructions+=2;NFSU2_TR(0x774756);
w4(R+0,u32(0x7e048cull));
}
B77475b:{NFSU2_TR(0x77475b);
TAIL_STATIC(0x75bfd2u,75b);
}
B774760:L774760:{c.instructions+=2;NFSU2_TR(0x774760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774763:{NFSU2_TR(0x774763);
TAIL_STATIC(0x4cbc30u,4cb);
}
B774768:L774768:{c.instructions+=3;NFSU2_TR(0x774768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77476b:{NFSU2_TR(0x77476b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x184ull))));
}
B774771:{NFSU2_TR(0x774771);
TAIL_STATIC(0x49d870u,49d);
}
B774776:L774776:{c.instructions+=2;NFSU2_TR(0x774776);
w4(R+0,u32(0x7e04b8ull));
}
B77477b:{NFSU2_TR(0x77477b);
TAIL_STATIC(0x75bfd2u,75b);
}
B774780:L774780:{c.instructions+=2;NFSU2_TR(0x774780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774783:{NFSU2_TR(0x774783);
TAIL_STATIC(0x510d40u,510);
}
B774788:L774788:{c.instructions+=3;NFSU2_TR(0x774788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77478b:{NFSU2_TR(0x77478b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77478e:{NFSU2_TR(0x77478e);
TAIL_STATIC(0x4cbba0u,4cb);
}
B774793:L774793:{c.instructions+=3;NFSU2_TR(0x774793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774796:{NFSU2_TR(0x774796);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x120ull))));
}
B77479c:{NFSU2_TR(0x77479c);
TAIL_STATIC(0x49d870u,49d);
}
B7747a1:L7747a1:{c.instructions+=2;NFSU2_TR(0x7747a1);
w4(R+0,u32(0x7e04ecull));
}
B7747a6:{NFSU2_TR(0x7747a6);
TAIL_STATIC(0x75bfd2u,75b);
}
B7747b0:L7747b0:{c.instructions+=2;NFSU2_TR(0x7747b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7747b3:{NFSU2_TR(0x7747b3);
TAIL_STATIC(0x4cbc30u,4cb);
}
B7747b8:L7747b8:{c.instructions+=5;NFSU2_TR(0x7747b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7747ba:{NFSU2_TR(0x7747ba);
u8 U[4];
w4(U+0,u32(0x795ff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7747bf:{NFSU2_TR(0x7747bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7747c2:{NFSU2_TR(0x7747c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7747c3:{NFSU2_TR(0x7747c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7747c8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7747c8:L7747c8:{c.instructions+=2;NFSU2_TR(0x7747c8);
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
B7747cb:{NFSU2_TR(0x7747cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7747cc:L7747cc:{c.instructions+=2;NFSU2_TR(0x7747cc);
w4(R+0,u32(0x7e0518ull));
}
B7747d1:{NFSU2_TR(0x7747d1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7747e0:L7747e0:{c.instructions+=2;NFSU2_TR(0x7747e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7747e3:{NFSU2_TR(0x7747e3);
TAIL_STATIC(0x531610u,531);
}
B7747e8:L7747e8:{c.instructions+=2;NFSU2_TR(0x7747e8);
w4(R+0,u32(0x7e053cull));
}
B7747ed:{NFSU2_TR(0x7747ed);
TAIL_STATIC(0x75bfd2u,75b);
}
B774800:L774800:{c.instructions+=2;NFSU2_TR(0x774800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774803:{NFSU2_TR(0x774803);
TAIL_STATIC(0x510d40u,510);
}
B774808:L774808:{c.instructions+=3;NFSU2_TR(0x774808);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77480b:{NFSU2_TR(0x77480b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77480e:{NFSU2_TR(0x77480e);
TAIL_STATIC(0x4cbba0u,4cb);
}
B774813:L774813:{c.instructions+=3;NFSU2_TR(0x774813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774816:{NFSU2_TR(0x774816);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B774819:{NFSU2_TR(0x774819);
TAIL_STATIC(0x4358e0u,435);
}
B77481e:L77481e:{c.instructions+=2;NFSU2_TR(0x77481e);
w4(R+0,u32(0x7e0570ull));
}
B774823:{NFSU2_TR(0x774823);
TAIL_STATIC(0x75bfd2u,75b);
}
B774830:L774830:{c.instructions+=5;NFSU2_TR(0x774830);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774832:{NFSU2_TR(0x774832);
u8 U[4];
w4(U+0,u32(0x79604cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774837:{NFSU2_TR(0x774837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77483a:{NFSU2_TR(0x77483a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77483b:{NFSU2_TR(0x77483b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774840ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774840:L774840:{c.instructions+=2;NFSU2_TR(0x774840);
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
B774843:{NFSU2_TR(0x774843);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774844:L774844:{c.instructions+=5;NFSU2_TR(0x774844);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774846:{NFSU2_TR(0x774846);
u8 U[4];
w4(U+0,u32(0x79604cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77484b:{NFSU2_TR(0x77484b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77484e:{NFSU2_TR(0x77484e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77484f:{NFSU2_TR(0x77484f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774854ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774854:L774854:{c.instructions+=2;NFSU2_TR(0x774854);
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
B774857:{NFSU2_TR(0x774857);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774858:L774858:{c.instructions+=5;NFSU2_TR(0x774858);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77485a:{NFSU2_TR(0x77485a);
u8 U[4];
w4(U+0,u32(0x79604cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77485f:{NFSU2_TR(0x77485f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774862:{NFSU2_TR(0x774862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774863:{NFSU2_TR(0x774863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774868ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774868:L774868:{c.instructions+=2;NFSU2_TR(0x774868);
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
B77486b:{NFSU2_TR(0x77486b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77486c:L77486c:{c.instructions+=5;NFSU2_TR(0x77486c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77486e:{NFSU2_TR(0x77486e);
u8 U[4];
w4(U+0,u32(0x79604cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774873:{NFSU2_TR(0x774873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774876:{NFSU2_TR(0x774876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774877:{NFSU2_TR(0x774877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77487cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77487c:L77487c:{c.instructions+=2;NFSU2_TR(0x77487c);
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
B77487f:{NFSU2_TR(0x77487f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774880:L774880:{c.instructions+=5;NFSU2_TR(0x774880);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774882:{NFSU2_TR(0x774882);
u8 U[4];
w4(U+0,u32(0x79604cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774887:{NFSU2_TR(0x774887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77488a:{NFSU2_TR(0x77488a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77488b:{NFSU2_TR(0x77488b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774890ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774890:L774890:{c.instructions+=2;NFSU2_TR(0x774890);
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
B774893:{NFSU2_TR(0x774893);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774894:L774894:{c.instructions+=2;NFSU2_TR(0x774894);
w4(R+0,u32(0x7e05b4ull));
}
B774899:{NFSU2_TR(0x774899);
TAIL_STATIC(0x75bfd2u,75b);
}
B7748a0:L7748a0:{c.instructions+=2;NFSU2_TR(0x7748a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7748a3:{NFSU2_TR(0x7748a3);
TAIL_STATIC(0x510d40u,510);
}
B7748a8:L7748a8:{c.instructions+=3;NFSU2_TR(0x7748a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7748ab:{NFSU2_TR(0x7748ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B7748ae:{NFSU2_TR(0x7748ae);
TAIL_STATIC(0x4cbba0u,4cb);
}
B7748b3:L7748b3:{c.instructions+=2;NFSU2_TR(0x7748b3);
w4(R+0,u32(0x7e137cull));
}
B7748b8:{NFSU2_TR(0x7748b8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7748c0:L7748c0:{c.instructions+=5;NFSU2_TR(0x7748c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7748c2:{NFSU2_TR(0x7748c2);
u8 U[4];
w4(U+0,u32(0x796110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7748c7:{NFSU2_TR(0x7748c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7748ca:{NFSU2_TR(0x7748ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7748cb:{NFSU2_TR(0x7748cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7748d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7748d0:L7748d0:{c.instructions+=2;NFSU2_TR(0x7748d0);
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
B7748d3:{NFSU2_TR(0x7748d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7748d4:L7748d4:{c.instructions+=2;NFSU2_TR(0x7748d4);
w4(R+0,u32(0x7e05d8ull));
}
B7748d9:{NFSU2_TR(0x7748d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7748e0:L7748e0:{c.instructions+=2;NFSU2_TR(0x7748e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7748e3:{NFSU2_TR(0x7748e3);
TAIL_STATIC(0x510d40u,510);
}
B7748e8:L7748e8:{c.instructions+=3;NFSU2_TR(0x7748e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7748eb:{NFSU2_TR(0x7748eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B7748ee:{NFSU2_TR(0x7748ee);
TAIL_STATIC(0x4cbaf0u,4cb);
}
B7748f3:L7748f3:{c.instructions+=3;NFSU2_TR(0x7748f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7748f6:{NFSU2_TR(0x7748f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1a4ull))));
}
B7748fc:{NFSU2_TR(0x7748fc);
TAIL_STATIC(0x4cbba0u,4cb);
}
B774901:L774901:{c.instructions+=3;NFSU2_TR(0x774901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774904:{NFSU2_TR(0x774904);
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
B77490a:{NFSU2_TR(0x77490a);
TAIL_STATIC(0x4957a0u,495);
}
B77490f:L77490f:{c.instructions+=2;NFSU2_TR(0x77490f);
w4(R+0,u32(0x7e0614ull));
}
B774914:{NFSU2_TR(0x774914);
TAIL_STATIC(0x75bfd2u,75b);
}
B774920:L774920:{c.instructions+=2;NFSU2_TR(0x774920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774923:{NFSU2_TR(0x774923);
TAIL_STATIC(0x4cbc30u,4cb);
}
B774928:L774928:{c.instructions+=5;NFSU2_TR(0x774928);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77492a:{NFSU2_TR(0x77492a);
u8 U[4];
w4(U+0,u32(0x7961dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77492f:{NFSU2_TR(0x77492f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774932:{NFSU2_TR(0x774932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774933:{NFSU2_TR(0x774933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774938ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774938:L774938:{c.instructions+=2;NFSU2_TR(0x774938);
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
B77493b:{NFSU2_TR(0x77493b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77493c:L77493c:{c.instructions+=5;NFSU2_TR(0x77493c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77493e:{NFSU2_TR(0x77493e);
u8 U[4];
w4(U+0,u32(0x791674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774943:{NFSU2_TR(0x774943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774946:{NFSU2_TR(0x774946);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774947:{NFSU2_TR(0x774947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77494cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77494c:L77494c:{c.instructions+=2;NFSU2_TR(0x77494c);
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
B77494f:{NFSU2_TR(0x77494f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774950:L774950:{c.instructions+=5;NFSU2_TR(0x774950);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774952:{NFSU2_TR(0x774952);
u8 U[4];
w4(U+0,u32(0x7916c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774957:{NFSU2_TR(0x774957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77495a:{NFSU2_TR(0x77495a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77495b:{NFSU2_TR(0x77495b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774960ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774960:L774960:{c.instructions+=2;NFSU2_TR(0x774960);
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
B774963:{NFSU2_TR(0x774963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774964:L774964:{c.instructions+=5;NFSU2_TR(0x774964);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774966:{NFSU2_TR(0x774966);
u8 U[4];
w4(U+0,u32(0x791660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77496b:{NFSU2_TR(0x77496b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77496e:{NFSU2_TR(0x77496e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77496f:{NFSU2_TR(0x77496f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774974ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774974:L774974:{c.instructions+=2;NFSU2_TR(0x774974);
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
B774977:{NFSU2_TR(0x774977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774978:L774978:{c.instructions+=5;NFSU2_TR(0x774978);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77497a:{NFSU2_TR(0x77497a);
u8 U[4];
w4(U+0,u32(0x791690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77497f:{NFSU2_TR(0x77497f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774982:{NFSU2_TR(0x774982);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774983:{NFSU2_TR(0x774983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774988ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774988:L774988:{c.instructions+=2;NFSU2_TR(0x774988);
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
B77498b:{NFSU2_TR(0x77498b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77498c:L77498c:{c.instructions+=2;NFSU2_TR(0x77498c);
w4(R+0,u32(0x7e0660ull));
}
B774991:{NFSU2_TR(0x774991);
TAIL_STATIC(0x75bfd2u,75b);
}
B7749a0:L7749a0:{c.instructions+=5;NFSU2_TR(0x7749a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7749a2:{NFSU2_TR(0x7749a2);
u8 U[4];
w4(U+0,u32(0x796298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7749a7:{NFSU2_TR(0x7749a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7749aa:{NFSU2_TR(0x7749aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7749ab:{NFSU2_TR(0x7749ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7749b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7749b0:L7749b0:{c.instructions+=2;NFSU2_TR(0x7749b0);
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
B7749b3:{NFSU2_TR(0x7749b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7749b4:L7749b4:{c.instructions+=2;NFSU2_TR(0x7749b4);
w4(R+0,u32(0x7e06b8ull));
}
B7749b9:{NFSU2_TR(0x7749b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7749c0:L7749c0:{c.instructions+=2;NFSU2_TR(0x7749c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7749c3:{NFSU2_TR(0x7749c3);
TAIL_STATIC(0x510d40u,510);
}
B7749c8:L7749c8:{c.instructions+=3;NFSU2_TR(0x7749c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7749cb:{NFSU2_TR(0x7749cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B7749ce:{NFSU2_TR(0x7749ce);
TAIL_STATIC(0x4cbba0u,4cb);
}
B7749d3:L7749d3:{c.instructions+=2;NFSU2_TR(0x7749d3);
w4(R+0,u32(0x7e1ba8ull));
}
B7749d8:{NFSU2_TR(0x7749d8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7749e0:L7749e0:{c.instructions+=2;NFSU2_TR(0x7749e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7749e3:{NFSU2_TR(0x7749e3);
TAIL_STATIC(0x510d40u,510);
}
B7749e8:L7749e8:{c.instructions+=3;NFSU2_TR(0x7749e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7749eb:{NFSU2_TR(0x7749eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B7749ee:{NFSU2_TR(0x7749ee);
TAIL_STATIC(0x4cbba0u,4cb);
}
B7749f3:L7749f3:{c.instructions+=2;NFSU2_TR(0x7749f3);
w4(R+0,u32(0x7e1484ull));
}
B7749f8:{NFSU2_TR(0x7749f8);
TAIL_STATIC(0x75bfd2u,75b);
}
B774a00:L774a00:{c.instructions+=5;NFSU2_TR(0x774a00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774a02:{NFSU2_TR(0x774a02);
u8 U[4];
w4(U+0,u32(0x7963ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774a07:{NFSU2_TR(0x774a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774a0a:{NFSU2_TR(0x774a0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774a0b:{NFSU2_TR(0x774a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774a10ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774a10:L774a10:{c.instructions+=2;NFSU2_TR(0x774a10);
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
B774a13:{NFSU2_TR(0x774a13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774a14:L774a14:{c.instructions+=2;NFSU2_TR(0x774a14);
w4(R+0,u32(0x7e06dcull));
}
B774a19:{NFSU2_TR(0x774a19);
TAIL_STATIC(0x75bfd2u,75b);
}
B774a20:L774a20:{c.instructions+=2;NFSU2_TR(0x774a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774a23:{NFSU2_TR(0x774a23);
TAIL_STATIC(0x510d40u,510);
}
B774a28:L774a28:{c.instructions+=3;NFSU2_TR(0x774a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774a2b:{NFSU2_TR(0x774a2b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x50ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B774a2e:{NFSU2_TR(0x774a2e);
TAIL_STATIC(0x4957a0u,495);
}
B774a33:L774a33:{c.instructions+=3;NFSU2_TR(0x774a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774a36:{NFSU2_TR(0x774a36);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x98ull))));
}
B774a3c:{NFSU2_TR(0x774a3c);
TAIL_STATIC(0x4cbaf0u,4cb);
}
B774a41:L774a41:{c.instructions+=2;NFSU2_TR(0x774a41);
w4(R+0,u32(0x7e0710ull));
}
B774a46:{NFSU2_TR(0x774a46);
TAIL_STATIC(0x75bfd2u,75b);
}
B774a50:L774a50:{c.instructions+=2;NFSU2_TR(0x774a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774a53:{NFSU2_TR(0x774a53);
TAIL_STATIC(0x510d40u,510);
}
B774a58:L774a58:{c.instructions+=3;NFSU2_TR(0x774a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774a5b:{NFSU2_TR(0x774a5b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B774a5e:{NFSU2_TR(0x774a5e);
TAIL_STATIC(0x4cbba0u,4cb);
}
B774a63:L774a63:{c.instructions+=3;NFSU2_TR(0x774a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774a66:{NFSU2_TR(0x774a66);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x908ull))));
}
B774a6c:{NFSU2_TR(0x774a6c);
TAIL_STATIC(0x4def30u,4de);
}
B774a71:L774a71:{c.instructions+=2;NFSU2_TR(0x774a71);
w4(R+0,u32(0x7e22d4ull));
}
B774a76:{NFSU2_TR(0x774a76);
TAIL_STATIC(0x75bfd2u,75b);
}
B774a80:L774a80:{c.instructions+=5;NFSU2_TR(0x774a80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774a82:{NFSU2_TR(0x774a82);
u8 U[4];
w4(U+0,u32(0x796430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774a87:{NFSU2_TR(0x774a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774a8a:{NFSU2_TR(0x774a8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774a8b:{NFSU2_TR(0x774a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774a90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774a90:L774a90:{c.instructions+=2;NFSU2_TR(0x774a90);
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
B774a93:{NFSU2_TR(0x774a93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774a94:L774a94:{c.instructions+=2;NFSU2_TR(0x774a94);
w4(R+0,u32(0x7e0734ull));
}
B774a99:{NFSU2_TR(0x774a99);
TAIL_STATIC(0x75bfd2u,75b);
}
B774aa0:L774aa0:{c.instructions+=2;NFSU2_TR(0x774aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774aa3:{NFSU2_TR(0x774aa3);
TAIL_STATIC(0x510d40u,510);
}
B774aa8:L774aa8:{c.instructions+=3;NFSU2_TR(0x774aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774aab:{NFSU2_TR(0x774aab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B774aae:{NFSU2_TR(0x774aae);
TAIL_STATIC(0x4cbba0u,4cb);
}
B774ab3:L774ab3:{c.instructions+=2;NFSU2_TR(0x774ab3);
w4(R+0,u32(0x7e0760ull));
}
B774ab8:{NFSU2_TR(0x774ab8);
TAIL_STATIC(0x75bfd2u,75b);
}
B774ac0:L774ac0:{c.instructions+=5;NFSU2_TR(0x774ac0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ac2:{NFSU2_TR(0x774ac2);
u8 U[4];
w4(U+0,u32(0x796490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ac7:{NFSU2_TR(0x774ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774aca:{NFSU2_TR(0x774aca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774acb:{NFSU2_TR(0x774acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774ad0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774ad0:L774ad0:{c.instructions+=2;NFSU2_TR(0x774ad0);
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
B774ad3:{NFSU2_TR(0x774ad3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ad4:L774ad4:{c.instructions+=2;NFSU2_TR(0x774ad4);
w4(R+0,u32(0x7e0784ull));
}
B774ad9:{NFSU2_TR(0x774ad9);
TAIL_STATIC(0x75bfd2u,75b);
}
B774ae0:L774ae0:{c.instructions+=5;NFSU2_TR(0x774ae0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ae2:{NFSU2_TR(0x774ae2);
u8 U[4];
w4(U+0,u32(0x7964b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ae7:{NFSU2_TR(0x774ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774aea:{NFSU2_TR(0x774aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774aeb:{NFSU2_TR(0x774aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774af0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774af0:L774af0:{c.instructions+=2;NFSU2_TR(0x774af0);
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
B774af3:{NFSU2_TR(0x774af3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774af4:L774af4:{c.instructions+=2;NFSU2_TR(0x774af4);
w4(R+0,u32(0x7e07a8ull));
}
B774af9:{NFSU2_TR(0x774af9);
TAIL_STATIC(0x75bfd2u,75b);
}
B774b00:L774b00:{c.instructions+=5;NFSU2_TR(0x774b00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b02:{NFSU2_TR(0x774b02);
u8 U[4];
w4(U+0,u32(0x7964d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b07:{NFSU2_TR(0x774b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774b0a:{NFSU2_TR(0x774b0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b0b:{NFSU2_TR(0x774b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774b10ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774b10:L774b10:{c.instructions+=2;NFSU2_TR(0x774b10);
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
B774b13:{NFSU2_TR(0x774b13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774b14:L774b14:{c.instructions+=2;NFSU2_TR(0x774b14);
w4(R+0,u32(0x7e07ccull));
}
B774b19:{NFSU2_TR(0x774b19);
TAIL_STATIC(0x75bfd2u,75b);
}
B774b20:L774b20:{c.instructions+=2;NFSU2_TR(0x774b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774b23:{NFSU2_TR(0x774b23);
TAIL_STATIC(0x510d40u,510);
}
B774b28:L774b28:{c.instructions+=3;NFSU2_TR(0x774b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774b2b:{NFSU2_TR(0x774b2b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B774b2e:{NFSU2_TR(0x774b2e);
TAIL_STATIC(0x479100u,479);
}
B774b33:L774b33:{c.instructions+=3;NFSU2_TR(0x774b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774b36:{NFSU2_TR(0x774b36);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B774b39:{NFSU2_TR(0x774b39);
TAIL_STATIC(0x52ea90u,52e);
}
B774b3e:L774b3e:{c.instructions+=2;NFSU2_TR(0x774b3e);
w4(R+0,u32(0x7e0800ull));
}
B774b43:{NFSU2_TR(0x774b43);
TAIL_STATIC(0x75bfd2u,75b);
}
B774b50:L774b50:{c.instructions+=4;NFSU2_TR(0x774b50);
u8 U[4];
w4(U+0,u32(0x796518ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b55:{NFSU2_TR(0x774b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774b58:{NFSU2_TR(0x774b58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b59:{NFSU2_TR(0x774b59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774b5eull));
TAIL_STATIC(0x4022c0u,402);
}
B774b5e:L774b5e:{c.instructions+=2;NFSU2_TR(0x774b5e);
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
B774b61:{NFSU2_TR(0x774b61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774b62:L774b62:{c.instructions+=2;NFSU2_TR(0x774b62);
w4(R+0,u32(0x7e0824ull));
}
B774b67:{NFSU2_TR(0x774b67);
TAIL_STATIC(0x75bfd2u,75b);
}
B774b70:L774b70:{c.instructions+=3;NFSU2_TR(0x774b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B774b73:{NFSU2_TR(0x774b73);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B774b76:{NFSU2_TR(0x774b76);
TAIL_STATIC(0x4358e0u,435);
}
B774b7b:L774b7b:{c.instructions+=2;NFSU2_TR(0x774b7b);
w4(R+0,u32(0x7e0848ull));
}
B774b80:{NFSU2_TR(0x774b80);
TAIL_STATIC(0x75bfd2u,75b);
}
B774b90:L774b90:{c.instructions+=5;NFSU2_TR(0x774b90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b92:{NFSU2_TR(0x774b92);
u8 U[4];
w4(U+0,u32(0x796528ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b97:{NFSU2_TR(0x774b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774b9a:{NFSU2_TR(0x774b9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774b9b:{NFSU2_TR(0x774b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774ba0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774ba0:L774ba0:{c.instructions+=2;NFSU2_TR(0x774ba0);
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
B774ba3:{NFSU2_TR(0x774ba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ba4:L774ba4:{c.instructions+=2;NFSU2_TR(0x774ba4);
w4(R+0,u32(0x7e086cull));
}
B774ba9:{NFSU2_TR(0x774ba9);
TAIL_STATIC(0x75bfd2u,75b);
}
B774bb0:L774bb0:{c.instructions+=5;NFSU2_TR(0x774bb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774bb2:{NFSU2_TR(0x774bb2);
u8 U[4];
w4(U+0,u32(0x796538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774bb7:{NFSU2_TR(0x774bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774bba:{NFSU2_TR(0x774bba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774bbb:{NFSU2_TR(0x774bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774bc0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774bc0:L774bc0:{c.instructions+=2;NFSU2_TR(0x774bc0);
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
B774bc3:{NFSU2_TR(0x774bc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774bc4:L774bc4:{c.instructions+=2;NFSU2_TR(0x774bc4);
w4(R+0,u32(0x7e0890ull));
}
B774bc9:{NFSU2_TR(0x774bc9);
TAIL_STATIC(0x75bfd2u,75b);
}
B774bd0:L774bd0:{c.instructions+=5;NFSU2_TR(0x774bd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774bd2:{NFSU2_TR(0x774bd2);
u8 U[4];
w4(U+0,u32(0x796590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774bd7:{NFSU2_TR(0x774bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774bda:{NFSU2_TR(0x774bda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774bdb:{NFSU2_TR(0x774bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774be0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774be0:L774be0:{c.instructions+=2;NFSU2_TR(0x774be0);
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
B774be3:{NFSU2_TR(0x774be3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774be4:L774be4:{c.instructions+=5;NFSU2_TR(0x774be4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774be6:{NFSU2_TR(0x774be6);
u8 U[4];
w4(U+0,u32(0x796590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774beb:{NFSU2_TR(0x774beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774bee:{NFSU2_TR(0x774bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774bef:{NFSU2_TR(0x774bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774bf4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774bf4:L774bf4:{c.instructions+=2;NFSU2_TR(0x774bf4);
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
B774bf7:{NFSU2_TR(0x774bf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774bf8:L774bf8:{c.instructions+=2;NFSU2_TR(0x774bf8);
w4(R+0,u32(0x7e08bcull));
}
B774bfd:{NFSU2_TR(0x774bfd);
TAIL_STATIC(0x75bfd2u,75b);
}
B774c10:L774c10:{c.instructions+=5;NFSU2_TR(0x774c10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c12:{NFSU2_TR(0x774c12);
u8 U[4];
w4(U+0,u32(0x796a20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c17:{NFSU2_TR(0x774c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774c1a:{NFSU2_TR(0x774c1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c1b:{NFSU2_TR(0x774c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774c20ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774c20:L774c20:{c.instructions+=2;NFSU2_TR(0x774c20);
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
B774c23:{NFSU2_TR(0x774c23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774c24:L774c24:{c.instructions+=5;NFSU2_TR(0x774c24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c26:{NFSU2_TR(0x774c26);
u8 U[4];
w4(U+0,u32(0x796a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c2b:{NFSU2_TR(0x774c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774c2e:{NFSU2_TR(0x774c2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c2f:{NFSU2_TR(0x774c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774c34ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774c34:L774c34:{c.instructions+=2;NFSU2_TR(0x774c34);
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
B774c37:{NFSU2_TR(0x774c37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774c38:L774c38:{c.instructions+=5;NFSU2_TR(0x774c38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c3a:{NFSU2_TR(0x774c3a);
u8 U[4];
w4(U+0,u32(0x7969f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c3f:{NFSU2_TR(0x774c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774c42:{NFSU2_TR(0x774c42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c43:{NFSU2_TR(0x774c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774c48ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774c48:L774c48:{c.instructions+=2;NFSU2_TR(0x774c48);
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
B774c4b:{NFSU2_TR(0x774c4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774c4c:L774c4c:{c.instructions+=5;NFSU2_TR(0x774c4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c4e:{NFSU2_TR(0x774c4e);
u8 U[4];
w4(U+0,u32(0x7969dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c53:{NFSU2_TR(0x774c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774c56:{NFSU2_TR(0x774c56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c57:{NFSU2_TR(0x774c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774c5cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774c5c:L774c5c:{c.instructions+=2;NFSU2_TR(0x774c5c);
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
B774c5f:{NFSU2_TR(0x774c5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774c60:L774c60:{c.instructions+=5;NFSU2_TR(0x774c60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c62:{NFSU2_TR(0x774c62);
u8 U[4];
w4(U+0,u32(0x7969c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c67:{NFSU2_TR(0x774c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774c6a:{NFSU2_TR(0x774c6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c6b:{NFSU2_TR(0x774c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774c70ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774c70:L774c70:{c.instructions+=2;NFSU2_TR(0x774c70);
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
B774c73:{NFSU2_TR(0x774c73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774c74:L774c74:{c.instructions+=5;NFSU2_TR(0x774c74);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c76:{NFSU2_TR(0x774c76);
u8 U[4];
w4(U+0,u32(0x7969b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c7b:{NFSU2_TR(0x774c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774c7e:{NFSU2_TR(0x774c7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c7f:{NFSU2_TR(0x774c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774c84ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774c84:L774c84:{c.instructions+=2;NFSU2_TR(0x774c84);
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
B774c87:{NFSU2_TR(0x774c87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774c88:L774c88:{c.instructions+=5;NFSU2_TR(0x774c88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c8a:{NFSU2_TR(0x774c8a);
u8 U[4];
w4(U+0,u32(0x796998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c8f:{NFSU2_TR(0x774c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774c92:{NFSU2_TR(0x774c92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c93:{NFSU2_TR(0x774c93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774c98ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774c98:L774c98:{c.instructions+=2;NFSU2_TR(0x774c98);
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
B774c9b:{NFSU2_TR(0x774c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774c9c:L774c9c:{c.instructions+=5;NFSU2_TR(0x774c9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774c9e:{NFSU2_TR(0x774c9e);
u8 U[4];
w4(U+0,u32(0x796984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ca3:{NFSU2_TR(0x774ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774ca6:{NFSU2_TR(0x774ca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ca7:{NFSU2_TR(0x774ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774cacull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774cac:L774cac:{c.instructions+=2;NFSU2_TR(0x774cac);
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
B774caf:{NFSU2_TR(0x774caf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774cb0:L774cb0:{c.instructions+=5;NFSU2_TR(0x774cb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cb2:{NFSU2_TR(0x774cb2);
u8 U[4];
w4(U+0,u32(0x796970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cb7:{NFSU2_TR(0x774cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774cba:{NFSU2_TR(0x774cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cbb:{NFSU2_TR(0x774cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774cc0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774cc0:L774cc0:{c.instructions+=2;NFSU2_TR(0x774cc0);
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
B774cc3:{NFSU2_TR(0x774cc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774cc4:L774cc4:{c.instructions+=5;NFSU2_TR(0x774cc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cc6:{NFSU2_TR(0x774cc6);
u8 U[4];
w4(U+0,u32(0x79695cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ccb:{NFSU2_TR(0x774ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774cce:{NFSU2_TR(0x774cce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ccf:{NFSU2_TR(0x774ccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774cd4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774cd4:L774cd4:{c.instructions+=2;NFSU2_TR(0x774cd4);
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
B774cd7:{NFSU2_TR(0x774cd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774cd8:L774cd8:{c.instructions+=5;NFSU2_TR(0x774cd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cda:{NFSU2_TR(0x774cda);
u8 U[4];
w4(U+0,u32(0x79694cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cdf:{NFSU2_TR(0x774cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774ce2:{NFSU2_TR(0x774ce2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ce3:{NFSU2_TR(0x774ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774ce8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774ce8:L774ce8:{c.instructions+=2;NFSU2_TR(0x774ce8);
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
B774ceb:{NFSU2_TR(0x774ceb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774cec:L774cec:{c.instructions+=5;NFSU2_TR(0x774cec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cee:{NFSU2_TR(0x774cee);
u8 U[4];
w4(U+0,u32(0x79693cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cf3:{NFSU2_TR(0x774cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774cf6:{NFSU2_TR(0x774cf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774cf7:{NFSU2_TR(0x774cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774cfcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774cfc:L774cfc:{c.instructions+=2;NFSU2_TR(0x774cfc);
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
B774cff:{NFSU2_TR(0x774cff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d00:L774d00:{c.instructions+=5;NFSU2_TR(0x774d00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d02:{NFSU2_TR(0x774d02);
u8 U[4];
w4(U+0,u32(0x796924ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d07:{NFSU2_TR(0x774d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d0a:{NFSU2_TR(0x774d0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d0b:{NFSU2_TR(0x774d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d10ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d10:L774d10:{c.instructions+=2;NFSU2_TR(0x774d10);
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
B774d13:{NFSU2_TR(0x774d13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d14:L774d14:{c.instructions+=5;NFSU2_TR(0x774d14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d16:{NFSU2_TR(0x774d16);
u8 U[4];
w4(U+0,u32(0x796910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d1b:{NFSU2_TR(0x774d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d1e:{NFSU2_TR(0x774d1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d1f:{NFSU2_TR(0x774d1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d24ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d24:L774d24:{c.instructions+=2;NFSU2_TR(0x774d24);
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
B774d27:{NFSU2_TR(0x774d27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d28:L774d28:{c.instructions+=5;NFSU2_TR(0x774d28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d2a:{NFSU2_TR(0x774d2a);
u8 U[4];
w4(U+0,u32(0x7968fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d2f:{NFSU2_TR(0x774d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d32:{NFSU2_TR(0x774d32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d33:{NFSU2_TR(0x774d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d38ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d38:L774d38:{c.instructions+=2;NFSU2_TR(0x774d38);
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
B774d3b:{NFSU2_TR(0x774d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d3c:L774d3c:{c.instructions+=5;NFSU2_TR(0x774d3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d3e:{NFSU2_TR(0x774d3e);
u8 U[4];
w4(U+0,u32(0x7968e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d43:{NFSU2_TR(0x774d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d46:{NFSU2_TR(0x774d46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d47:{NFSU2_TR(0x774d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d4cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d4c:L774d4c:{c.instructions+=2;NFSU2_TR(0x774d4c);
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
B774d4f:{NFSU2_TR(0x774d4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d50:L774d50:{c.instructions+=5;NFSU2_TR(0x774d50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d52:{NFSU2_TR(0x774d52);
u8 U[4];
w4(U+0,u32(0x7968ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d57:{NFSU2_TR(0x774d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d5a:{NFSU2_TR(0x774d5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d5b:{NFSU2_TR(0x774d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d60:L774d60:{c.instructions+=2;NFSU2_TR(0x774d60);
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
B774d63:{NFSU2_TR(0x774d63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d64:L774d64:{c.instructions+=5;NFSU2_TR(0x774d64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d66:{NFSU2_TR(0x774d66);
u8 U[4];
w4(U+0,u32(0x7968b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d6b:{NFSU2_TR(0x774d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d6e:{NFSU2_TR(0x774d6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d6f:{NFSU2_TR(0x774d6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d74ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d74:L774d74:{c.instructions+=2;NFSU2_TR(0x774d74);
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
B774d77:{NFSU2_TR(0x774d77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d78:L774d78:{c.instructions+=5;NFSU2_TR(0x774d78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d7a:{NFSU2_TR(0x774d7a);
u8 U[4];
w4(U+0,u32(0x7968a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d7f:{NFSU2_TR(0x774d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d82:{NFSU2_TR(0x774d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d83:{NFSU2_TR(0x774d83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d88ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d88:L774d88:{c.instructions+=2;NFSU2_TR(0x774d88);
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
B774d8b:{NFSU2_TR(0x774d8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774d8c:L774d8c:{c.instructions+=5;NFSU2_TR(0x774d8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d8e:{NFSU2_TR(0x774d8e);
u8 U[4];
w4(U+0,u32(0x796890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d93:{NFSU2_TR(0x774d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774d96:{NFSU2_TR(0x774d96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774d97:{NFSU2_TR(0x774d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774d9cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774d9c:L774d9c:{c.instructions+=2;NFSU2_TR(0x774d9c);
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
B774d9f:{NFSU2_TR(0x774d9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774da0:L774da0:{c.instructions+=5;NFSU2_TR(0x774da0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774da2:{NFSU2_TR(0x774da2);
u8 U[4];
w4(U+0,u32(0x796880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774da7:{NFSU2_TR(0x774da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774daa:{NFSU2_TR(0x774daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dab:{NFSU2_TR(0x774dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774db0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774db0:L774db0:{c.instructions+=2;NFSU2_TR(0x774db0);
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
B774db3:{NFSU2_TR(0x774db3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774db4:L774db4:{c.instructions+=5;NFSU2_TR(0x774db4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774db6:{NFSU2_TR(0x774db6);
u8 U[4];
w4(U+0,u32(0x79686cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dbb:{NFSU2_TR(0x774dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774dbe:{NFSU2_TR(0x774dbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dbf:{NFSU2_TR(0x774dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774dc4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774dc4:L774dc4:{c.instructions+=2;NFSU2_TR(0x774dc4);
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
B774dc7:{NFSU2_TR(0x774dc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774dc8:L774dc8:{c.instructions+=5;NFSU2_TR(0x774dc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dca:{NFSU2_TR(0x774dca);
u8 U[4];
w4(U+0,u32(0x79685cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dcf:{NFSU2_TR(0x774dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774dd2:{NFSU2_TR(0x774dd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dd3:{NFSU2_TR(0x774dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774dd8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774dd8:L774dd8:{c.instructions+=2;NFSU2_TR(0x774dd8);
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
B774ddb:{NFSU2_TR(0x774ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ddc:L774ddc:{c.instructions+=5;NFSU2_TR(0x774ddc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dde:{NFSU2_TR(0x774dde);
u8 U[4];
w4(U+0,u32(0x79684cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774de3:{NFSU2_TR(0x774de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774de6:{NFSU2_TR(0x774de6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774de7:{NFSU2_TR(0x774de7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774decull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774dec:L774dec:{c.instructions+=2;NFSU2_TR(0x774dec);
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
B774def:{NFSU2_TR(0x774def);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774df0:L774df0:{c.instructions+=5;NFSU2_TR(0x774df0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774df2:{NFSU2_TR(0x774df2);
u8 U[4];
w4(U+0,u32(0x796838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774df7:{NFSU2_TR(0x774df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774dfa:{NFSU2_TR(0x774dfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774dfb:{NFSU2_TR(0x774dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e00ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e00:L774e00:{c.instructions+=2;NFSU2_TR(0x774e00);
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
B774e03:{NFSU2_TR(0x774e03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e04:L774e04:{c.instructions+=5;NFSU2_TR(0x774e04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e06:{NFSU2_TR(0x774e06);
u8 U[4];
w4(U+0,u32(0x796824ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e0b:{NFSU2_TR(0x774e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e0e:{NFSU2_TR(0x774e0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e0f:{NFSU2_TR(0x774e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e14ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e14:L774e14:{c.instructions+=2;NFSU2_TR(0x774e14);
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
B774e17:{NFSU2_TR(0x774e17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e18:L774e18:{c.instructions+=5;NFSU2_TR(0x774e18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e1a:{NFSU2_TR(0x774e1a);
u8 U[4];
w4(U+0,u32(0x796814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e1f:{NFSU2_TR(0x774e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e22:{NFSU2_TR(0x774e22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e23:{NFSU2_TR(0x774e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e28ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e28:L774e28:{c.instructions+=2;NFSU2_TR(0x774e28);
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
B774e2b:{NFSU2_TR(0x774e2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e2c:L774e2c:{c.instructions+=5;NFSU2_TR(0x774e2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e2e:{NFSU2_TR(0x774e2e);
u8 U[4];
w4(U+0,u32(0x7967fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e33:{NFSU2_TR(0x774e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e36:{NFSU2_TR(0x774e36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e37:{NFSU2_TR(0x774e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e3cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e3c:L774e3c:{c.instructions+=2;NFSU2_TR(0x774e3c);
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
B774e3f:{NFSU2_TR(0x774e3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e40:L774e40:{c.instructions+=5;NFSU2_TR(0x774e40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e42:{NFSU2_TR(0x774e42);
u8 U[4];
w4(U+0,u32(0x7967e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e47:{NFSU2_TR(0x774e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e4a:{NFSU2_TR(0x774e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e4b:{NFSU2_TR(0x774e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e50:L774e50:{c.instructions+=2;NFSU2_TR(0x774e50);
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
B774e53:{NFSU2_TR(0x774e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e54:L774e54:{c.instructions+=5;NFSU2_TR(0x774e54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e56:{NFSU2_TR(0x774e56);
u8 U[4];
w4(U+0,u32(0x7967d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e5b:{NFSU2_TR(0x774e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e5e:{NFSU2_TR(0x774e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e5f:{NFSU2_TR(0x774e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e64:L774e64:{c.instructions+=2;NFSU2_TR(0x774e64);
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
B774e67:{NFSU2_TR(0x774e67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e68:L774e68:{c.instructions+=5;NFSU2_TR(0x774e68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e6a:{NFSU2_TR(0x774e6a);
u8 U[4];
w4(U+0,u32(0x7967c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e6f:{NFSU2_TR(0x774e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e72:{NFSU2_TR(0x774e72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e73:{NFSU2_TR(0x774e73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e78ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e78:L774e78:{c.instructions+=2;NFSU2_TR(0x774e78);
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
B774e7b:{NFSU2_TR(0x774e7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e7c:L774e7c:{c.instructions+=5;NFSU2_TR(0x774e7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e7e:{NFSU2_TR(0x774e7e);
u8 U[4];
w4(U+0,u32(0x7967acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e83:{NFSU2_TR(0x774e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e86:{NFSU2_TR(0x774e86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e87:{NFSU2_TR(0x774e87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774e8cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774e8c:L774e8c:{c.instructions+=2;NFSU2_TR(0x774e8c);
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
B774e8f:{NFSU2_TR(0x774e8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774e90:L774e90:{c.instructions+=5;NFSU2_TR(0x774e90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e92:{NFSU2_TR(0x774e92);
u8 U[4];
w4(U+0,u32(0x79679cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e97:{NFSU2_TR(0x774e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774e9a:{NFSU2_TR(0x774e9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774e9b:{NFSU2_TR(0x774e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774ea0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774ea0:L774ea0:{c.instructions+=2;NFSU2_TR(0x774ea0);
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
B774ea3:{NFSU2_TR(0x774ea3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ea4:L774ea4:{c.instructions+=5;NFSU2_TR(0x774ea4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ea6:{NFSU2_TR(0x774ea6);
u8 U[4];
w4(U+0,u32(0x796784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774eab:{NFSU2_TR(0x774eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774eae:{NFSU2_TR(0x774eae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774eaf:{NFSU2_TR(0x774eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774eb4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774eb4:L774eb4:{c.instructions+=2;NFSU2_TR(0x774eb4);
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
B774eb7:{NFSU2_TR(0x774eb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774eb8:L774eb8:{c.instructions+=5;NFSU2_TR(0x774eb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774eba:{NFSU2_TR(0x774eba);
u8 U[4];
w4(U+0,u32(0x796770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ebf:{NFSU2_TR(0x774ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774ec2:{NFSU2_TR(0x774ec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ec3:{NFSU2_TR(0x774ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774ec8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774ec8:L774ec8:{c.instructions+=2;NFSU2_TR(0x774ec8);
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
B774ecb:{NFSU2_TR(0x774ecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ecc:L774ecc:{c.instructions+=5;NFSU2_TR(0x774ecc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ece:{NFSU2_TR(0x774ece);
u8 U[4];
w4(U+0,u32(0x79675cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ed3:{NFSU2_TR(0x774ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774ed6:{NFSU2_TR(0x774ed6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ed7:{NFSU2_TR(0x774ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774edcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774edc:L774edc:{c.instructions+=2;NFSU2_TR(0x774edc);
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
B774edf:{NFSU2_TR(0x774edf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ee0:L774ee0:{c.instructions+=5;NFSU2_TR(0x774ee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ee2:{NFSU2_TR(0x774ee2);
u8 U[4];
w4(U+0,u32(0x796744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ee7:{NFSU2_TR(0x774ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774eea:{NFSU2_TR(0x774eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774eeb:{NFSU2_TR(0x774eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774ef0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774ef0:L774ef0:{c.instructions+=2;NFSU2_TR(0x774ef0);
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
B774ef3:{NFSU2_TR(0x774ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ef4:L774ef4:{c.instructions+=5;NFSU2_TR(0x774ef4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ef6:{NFSU2_TR(0x774ef6);
u8 U[4];
w4(U+0,u32(0x796730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774efb:{NFSU2_TR(0x774efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774efe:{NFSU2_TR(0x774efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774eff:{NFSU2_TR(0x774eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f04ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f04:L774f04:{c.instructions+=2;NFSU2_TR(0x774f04);
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
B774f07:{NFSU2_TR(0x774f07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f08:L774f08:{c.instructions+=5;NFSU2_TR(0x774f08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f0a:{NFSU2_TR(0x774f0a);
u8 U[4];
w4(U+0,u32(0x79671cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f0f:{NFSU2_TR(0x774f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f12:{NFSU2_TR(0x774f12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f13:{NFSU2_TR(0x774f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f18ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f18:L774f18:{c.instructions+=2;NFSU2_TR(0x774f18);
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
B774f1b:{NFSU2_TR(0x774f1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f1c:L774f1c:{c.instructions+=5;NFSU2_TR(0x774f1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f1e:{NFSU2_TR(0x774f1e);
u8 U[4];
w4(U+0,u32(0x796700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f23:{NFSU2_TR(0x774f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f26:{NFSU2_TR(0x774f26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f27:{NFSU2_TR(0x774f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f2cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f2c:L774f2c:{c.instructions+=2;NFSU2_TR(0x774f2c);
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
B774f2f:{NFSU2_TR(0x774f2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f30:L774f30:{c.instructions+=5;NFSU2_TR(0x774f30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f32:{NFSU2_TR(0x774f32);
u8 U[4];
w4(U+0,u32(0x7966e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f37:{NFSU2_TR(0x774f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f3a:{NFSU2_TR(0x774f3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f3b:{NFSU2_TR(0x774f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f40:L774f40:{c.instructions+=2;NFSU2_TR(0x774f40);
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
B774f43:{NFSU2_TR(0x774f43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f44:L774f44:{c.instructions+=5;NFSU2_TR(0x774f44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f46:{NFSU2_TR(0x774f46);
u8 U[4];
w4(U+0,u32(0x7966d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f4b:{NFSU2_TR(0x774f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f4e:{NFSU2_TR(0x774f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f4f:{NFSU2_TR(0x774f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f54ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f54:L774f54:{c.instructions+=2;NFSU2_TR(0x774f54);
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
B774f57:{NFSU2_TR(0x774f57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f58:L774f58:{c.instructions+=5;NFSU2_TR(0x774f58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f5a:{NFSU2_TR(0x774f5a);
u8 U[4];
w4(U+0,u32(0x7966bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f5f:{NFSU2_TR(0x774f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f62:{NFSU2_TR(0x774f62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f63:{NFSU2_TR(0x774f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f68ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f68:L774f68:{c.instructions+=2;NFSU2_TR(0x774f68);
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
B774f6b:{NFSU2_TR(0x774f6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f6c:L774f6c:{c.instructions+=5;NFSU2_TR(0x774f6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f6e:{NFSU2_TR(0x774f6e);
u8 U[4];
w4(U+0,u32(0x7966a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f73:{NFSU2_TR(0x774f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f76:{NFSU2_TR(0x774f76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f77:{NFSU2_TR(0x774f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f7cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f7c:L774f7c:{c.instructions+=2;NFSU2_TR(0x774f7c);
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
B774f7f:{NFSU2_TR(0x774f7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f80:L774f80:{c.instructions+=5;NFSU2_TR(0x774f80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f82:{NFSU2_TR(0x774f82);
u8 U[4];
w4(U+0,u32(0x796698ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f87:{NFSU2_TR(0x774f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f8a:{NFSU2_TR(0x774f8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f8b:{NFSU2_TR(0x774f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774f90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774f90:L774f90:{c.instructions+=2;NFSU2_TR(0x774f90);
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
B774f93:{NFSU2_TR(0x774f93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774f94:L774f94:{c.instructions+=5;NFSU2_TR(0x774f94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f96:{NFSU2_TR(0x774f96);
u8 U[4];
w4(U+0,u32(0x796674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f9b:{NFSU2_TR(0x774f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774f9e:{NFSU2_TR(0x774f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774f9f:{NFSU2_TR(0x774f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774fa4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774fa4:L774fa4:{c.instructions+=2;NFSU2_TR(0x774fa4);
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
B774fa7:{NFSU2_TR(0x774fa7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774fa8:L774fa8:{c.instructions+=5;NFSU2_TR(0x774fa8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774faa:{NFSU2_TR(0x774faa);
u8 U[4];
w4(U+0,u32(0x796654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774faf:{NFSU2_TR(0x774faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774fb2:{NFSU2_TR(0x774fb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fb3:{NFSU2_TR(0x774fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774fb8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774fb8:L774fb8:{c.instructions+=2;NFSU2_TR(0x774fb8);
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
B774fbb:{NFSU2_TR(0x774fbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774fbc:L774fbc:{c.instructions+=5;NFSU2_TR(0x774fbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fbe:{NFSU2_TR(0x774fbe);
u8 U[4];
w4(U+0,u32(0x796634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fc3:{NFSU2_TR(0x774fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774fc6:{NFSU2_TR(0x774fc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fc7:{NFSU2_TR(0x774fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774fccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774fcc:L774fcc:{c.instructions+=2;NFSU2_TR(0x774fcc);
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
B774fcf:{NFSU2_TR(0x774fcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774fd0:L774fd0:{c.instructions+=5;NFSU2_TR(0x774fd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fd2:{NFSU2_TR(0x774fd2);
u8 U[4];
w4(U+0,u32(0x796614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fd7:{NFSU2_TR(0x774fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774fda:{NFSU2_TR(0x774fda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fdb:{NFSU2_TR(0x774fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774fe0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774fe0:L774fe0:{c.instructions+=2;NFSU2_TR(0x774fe0);
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
B774fe3:{NFSU2_TR(0x774fe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774fe4:L774fe4:{c.instructions+=5;NFSU2_TR(0x774fe4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fe6:{NFSU2_TR(0x774fe6);
u8 U[4];
w4(U+0,u32(0x7965f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774feb:{NFSU2_TR(0x774feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B774fee:{NFSU2_TR(0x774fee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fef:{NFSU2_TR(0x774fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x774ff4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B774ff4:L774ff4:{c.instructions+=2;NFSU2_TR(0x774ff4);
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
B774ff7:{NFSU2_TR(0x774ff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B774ff8:L774ff8:{c.instructions+=3;NFSU2_TR(0x774ff8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774ffa:{NFSU2_TR(0x774ffa);
u8 U[4];
w4(U+0,u32(0x7965dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B774fff:{NFSU2_TR(0x774fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x775002u,775);
}
XIT:NFSU2_TR_EXIT(0x774,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
