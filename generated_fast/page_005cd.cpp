#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c9(u8* __restrict R,Cpu& c);
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5cd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5cd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 page_5cd(Cpu& c){return body_5cd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5cd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5cd1a0:goto L5cd1a0;
case 0x5cd1a5:c.instructions+=7;goto B5cd1a5;
case 0x5cd1a6:c.instructions+=6;goto B5cd1a6;
case 0x5cd1a8:c.instructions+=5;goto B5cd1a8;
case 0x5cd1ab:c.instructions+=4;goto B5cd1ab;
case 0x5cd1ac:c.instructions+=3;goto B5cd1ac;
case 0x5cd1ae:c.instructions+=2;goto B5cd1ae;
case 0x5cd1b0:c.instructions+=1;goto B5cd1b0;
case 0x5cd1b2:goto L5cd1b2;
case 0x5cd1b3:c.instructions+=2;goto B5cd1b3;
case 0x5cd1b8:c.instructions+=1;goto B5cd1b8;
case 0x5cd1bd:goto L5cd1bd;
case 0x5cd1bf:c.instructions+=4;goto B5cd1bf;
case 0x5cd1c2:c.instructions+=3;goto B5cd1c2;
case 0x5cd1c5:c.instructions+=2;goto B5cd1c5;
case 0x5cd1c7:c.instructions+=1;goto B5cd1c7;
case 0x5cd1ca:goto L5cd1ca;
case 0x5cd1cf:c.instructions+=3;goto B5cd1cf;
case 0x5cd1d1:c.instructions+=2;goto B5cd1d1;
case 0x5cd1d7:c.instructions+=1;goto B5cd1d7;
case 0x5cd1d9:goto L5cd1d9;
case 0x5cd1da:c.instructions+=1;goto B5cd1da;
case 0x5cd1df:goto L5cd1df;
case 0x5cd1e2:goto L5cd1e2;
case 0x5cd1e8:c.instructions+=3;goto B5cd1e8;
case 0x5cd1e9:c.instructions+=2;goto B5cd1e9;
case 0x5cd1ea:c.instructions+=1;goto B5cd1ea;
case 0x5cd1f0:goto L5cd1f0;
case 0x5cd1f6:c.instructions+=13;goto B5cd1f6;
case 0x5cd1f7:c.instructions+=12;goto B5cd1f7;
case 0x5cd1fe:c.instructions+=11;goto B5cd1fe;
case 0x5cd1ff:c.instructions+=10;goto B5cd1ff;
case 0x5cd201:c.instructions+=9;goto B5cd201;
case 0x5cd202:c.instructions+=8;goto B5cd202;
case 0x5cd203:c.instructions+=7;goto B5cd203;
case 0x5cd207:c.instructions+=6;goto B5cd207;
case 0x5cd20f:c.instructions+=5;goto B5cd20f;
case 0x5cd217:c.instructions+=4;goto B5cd217;
case 0x5cd21b:c.instructions+=3;goto B5cd21b;
case 0x5cd21f:c.instructions+=2;goto B5cd21f;
case 0x5cd223:c.instructions+=1;goto B5cd223;
case 0x5cd228:goto L5cd228;
case 0x5cd22b:c.instructions+=2;goto B5cd22b;
case 0x5cd22d:c.instructions+=1;goto B5cd22d;
case 0x5cd22f:goto L5cd22f;
case 0x5cd233:c.instructions+=5;goto B5cd233;
case 0x5cd234:c.instructions+=4;goto B5cd234;
case 0x5cd23c:c.instructions+=3;goto B5cd23c;
case 0x5cd23e:c.instructions+=2;goto B5cd23e;
case 0x5cd23f:c.instructions+=1;goto B5cd23f;
case 0x5cd242:goto L5cd242;
case 0x5cd247:c.instructions+=3;goto B5cd247;
case 0x5cd24b:c.instructions+=2;goto B5cd24b;
case 0x5cd24e:c.instructions+=1;goto B5cd24e;
case 0x5cd250:goto L5cd250;
case 0x5cd252:goto L5cd252;
case 0x5cd258:goto L5cd258;
case 0x5cd25b:c.instructions+=2;goto B5cd25b;
case 0x5cd261:c.instructions+=1;goto B5cd261;
case 0x5cd263:goto L5cd263;
case 0x5cd265:goto L5cd265;
case 0x5cd26c:c.instructions+=2;goto B5cd26c;
case 0x5cd26e:c.instructions+=1;goto B5cd26e;
case 0x5cd270:goto L5cd270;
case 0x5cd271:c.instructions+=2;goto B5cd271;
case 0x5cd274:c.instructions+=1;goto B5cd274;
case 0x5cd276:goto L5cd276;
case 0x5cd277:c.instructions+=6;goto B5cd277;
case 0x5cd278:c.instructions+=5;goto B5cd278;
case 0x5cd279:c.instructions+=4;goto B5cd279;
case 0x5cd27e:c.instructions+=3;goto B5cd27e;
case 0x5cd27f:c.instructions+=2;goto B5cd27f;
case 0x5cd285:c.instructions+=1;goto B5cd285;
case 0x5cd288:goto L5cd288;
case 0x5cd28d:c.instructions+=8;goto B5cd28d;
case 0x5cd28f:c.instructions+=7;goto B5cd28f;
case 0x5cd291:c.instructions+=6;goto B5cd291;
case 0x5cd298:c.instructions+=5;goto B5cd298;
case 0x5cd299:c.instructions+=4;goto B5cd299;
case 0x5cd29c:c.instructions+=3;goto B5cd29c;
case 0x5cd29d:c.instructions+=2;goto B5cd29d;
case 0x5cd29e:c.instructions+=1;goto B5cd29e;
case 0x5cd2a1:goto L5cd2a1;
case 0x5cd2a3:c.instructions+=1;goto B5cd2a3;
case 0x5cd2a5:goto L5cd2a5;
case 0x5cd2ab:c.instructions+=25;goto B5cd2ab;
case 0x5cd2b1:c.instructions+=24;goto B5cd2b1;
case 0x5cd2b3:c.instructions+=23;goto B5cd2b3;
case 0x5cd2b6:c.instructions+=22;goto B5cd2b6;
case 0x5cd2bb:c.instructions+=21;goto B5cd2bb;
case 0x5cd2bd:c.instructions+=20;goto B5cd2bd;
case 0x5cd2c3:c.instructions+=19;goto B5cd2c3;
case 0x5cd2c6:c.instructions+=18;goto B5cd2c6;
case 0x5cd2cc:c.instructions+=17;goto B5cd2cc;
case 0x5cd2cf:c.instructions+=16;goto B5cd2cf;
case 0x5cd2d2:c.instructions+=15;goto B5cd2d2;
case 0x5cd2d6:c.instructions+=14;goto B5cd2d6;
case 0x5cd2dc:c.instructions+=13;goto B5cd2dc;
case 0x5cd2e4:c.instructions+=12;goto B5cd2e4;
case 0x5cd2e5:c.instructions+=11;goto B5cd2e5;
case 0x5cd2ec:c.instructions+=10;goto B5cd2ec;
case 0x5cd2f3:c.instructions+=9;goto B5cd2f3;
case 0x5cd2fa:c.instructions+=8;goto B5cd2fa;
case 0x5cd305:c.instructions+=7;goto B5cd305;
case 0x5cd30c:c.instructions+=6;goto B5cd30c;
case 0x5cd30d:c.instructions+=5;goto B5cd30d;
case 0x5cd30e:c.instructions+=4;goto B5cd30e;
case 0x5cd313:c.instructions+=3;goto B5cd313;
case 0x5cd314:c.instructions+=2;goto B5cd314;
case 0x5cd31a:c.instructions+=1;goto B5cd31a;
case 0x5cd31d:goto L5cd31d;
case 0x5cd31f:c.instructions+=4;goto B5cd31f;
case 0x5cd321:c.instructions+=3;goto B5cd321;
case 0x5cd326:c.instructions+=2;goto B5cd326;
case 0x5cd327:c.instructions+=1;goto B5cd327;
case 0x5cd32a:goto L5cd32a;
case 0x5cd32c:c.instructions+=1;goto B5cd32c;
case 0x5cd32e:goto L5cd32e;
case 0x5cd334:c.instructions+=6;goto B5cd334;
case 0x5cd336:c.instructions+=5;goto B5cd336;
case 0x5cd338:c.instructions+=4;goto B5cd338;
case 0x5cd33a:c.instructions+=3;goto B5cd33a;
case 0x5cd33b:c.instructions+=2;goto B5cd33b;
case 0x5cd33c:c.instructions+=1;goto B5cd33c;
case 0x5cd33f:goto L5cd33f;
case 0x5cd341:c.instructions+=1;goto B5cd341;
case 0x5cd343:goto L5cd343;
case 0x5cd345:c.instructions+=6;goto B5cd345;
case 0x5cd347:c.instructions+=5;goto B5cd347;
case 0x5cd349:c.instructions+=4;goto B5cd349;
case 0x5cd34a:c.instructions+=3;goto B5cd34a;
case 0x5cd34f:c.instructions+=2;goto B5cd34f;
case 0x5cd350:c.instructions+=1;goto B5cd350;
case 0x5cd353:goto L5cd353;
case 0x5cd355:c.instructions+=1;goto B5cd355;
case 0x5cd357:goto L5cd357;
case 0x5cd35b:c.instructions+=2;goto B5cd35b;
case 0x5cd35c:c.instructions+=1;goto B5cd35c;
case 0x5cd361:goto L5cd361;
case 0x5cd362:c.instructions+=6;goto B5cd362;
case 0x5cd363:c.instructions+=5;goto B5cd363;
case 0x5cd364:c.instructions+=4;goto B5cd364;
case 0x5cd369:c.instructions+=3;goto B5cd369;
case 0x5cd36a:c.instructions+=2;goto B5cd36a;
case 0x5cd370:c.instructions+=1;goto B5cd370;
case 0x5cd373:goto L5cd373;
case 0x5cd375:c.instructions+=13;goto B5cd375;
case 0x5cd378:c.instructions+=12;goto B5cd378;
case 0x5cd37b:c.instructions+=11;goto B5cd37b;
case 0x5cd37d:c.instructions+=10;goto B5cd37d;
case 0x5cd383:c.instructions+=9;goto B5cd383;
case 0x5cd385:c.instructions+=8;goto B5cd385;
case 0x5cd388:c.instructions+=7;goto B5cd388;
case 0x5cd38b:c.instructions+=6;goto B5cd38b;
case 0x5cd38e:c.instructions+=5;goto B5cd38e;
case 0x5cd391:c.instructions+=4;goto B5cd391;
case 0x5cd394:c.instructions+=3;goto B5cd394;
case 0x5cd395:c.instructions+=2;goto B5cd395;
case 0x5cd398:c.instructions+=1;goto B5cd398;
case 0x5cd39d:goto L5cd39d;
case 0x5cd3a0:c.instructions+=2;goto B5cd3a0;
case 0x5cd3a3:c.instructions+=1;goto B5cd3a3;
case 0x5cd3a5:goto L5cd3a5;
case 0x5cd3a6:c.instructions+=1;goto B5cd3a6;
case 0x5cd3a8:goto L5cd3a8;
case 0x5cd3a9:c.instructions+=1;goto B5cd3a9;
case 0x5cd3ab:goto L5cd3ab;
case 0x5cd3b2:c.instructions+=1;goto B5cd3b2;
case 0x5cd3b4:goto L5cd3b4;
case 0x5cd3bb:c.instructions+=1;goto B5cd3bb;
case 0x5cd3bd:goto L5cd3bd;
case 0x5cd3c4:goto L5cd3c4;
case 0x5cd3ca:c.instructions+=2;goto B5cd3ca;
case 0x5cd3cc:c.instructions+=1;goto B5cd3cc;
case 0x5cd3ce:goto L5cd3ce;
case 0x5cd3d0:c.instructions+=6;goto B5cd3d0;
case 0x5cd3d2:c.instructions+=5;goto B5cd3d2;
case 0x5cd3d6:c.instructions+=4;goto B5cd3d6;
case 0x5cd3d7:c.instructions+=3;goto B5cd3d7;
case 0x5cd3d9:c.instructions+=2;goto B5cd3d9;
case 0x5cd3da:c.instructions+=1;goto B5cd3da;
case 0x5cd3dd:goto L5cd3dd;
case 0x5cd3df:c.instructions+=1;goto B5cd3df;
case 0x5cd3e1:goto L5cd3e1;
case 0x5cd3e2:c.instructions+=2;goto B5cd3e2;
case 0x5cd3e7:c.instructions+=1;goto B5cd3e7;
case 0x5cd3ec:goto L5cd3ec;
case 0x5cd3ef:goto L5cd3ef;
case 0x5cd3f0:c.instructions+=6;goto B5cd3f0;
case 0x5cd3f1:c.instructions+=5;goto B5cd3f1;
case 0x5cd3f2:c.instructions+=4;goto B5cd3f2;
case 0x5cd3f7:c.instructions+=3;goto B5cd3f7;
case 0x5cd3f8:c.instructions+=2;goto B5cd3f8;
case 0x5cd3fe:c.instructions+=1;goto B5cd3fe;
case 0x5cd410:goto L5cd410;
case 0x5cd412:c.instructions+=10;goto B5cd412;
case 0x5cd417:c.instructions+=9;goto B5cd417;
case 0x5cd41d:c.instructions+=8;goto B5cd41d;
case 0x5cd41e:c.instructions+=7;goto B5cd41e;
case 0x5cd425:c.instructions+=6;goto B5cd425;
case 0x5cd426:c.instructions+=5;goto B5cd426;
case 0x5cd427:c.instructions+=4;goto B5cd427;
case 0x5cd429:c.instructions+=3;goto B5cd429;
case 0x5cd42d:c.instructions+=2;goto B5cd42d;
case 0x5cd435:c.instructions+=1;goto B5cd435;
case 0x5cd43a:goto L5cd43a;
case 0x5cd440:c.instructions+=2;goto B5cd440;
case 0x5cd445:c.instructions+=1;goto B5cd445;
case 0x5cd44a:goto L5cd44a;
case 0x5cd450:c.instructions+=2;goto B5cd450;
case 0x5cd455:c.instructions+=1;goto B5cd455;
case 0x5cd45a:goto L5cd45a;
case 0x5cd460:c.instructions+=2;goto B5cd460;
case 0x5cd465:c.instructions+=1;goto B5cd465;
case 0x5cd46a:goto L5cd46a;
case 0x5cd470:c.instructions+=2;goto B5cd470;
case 0x5cd475:c.instructions+=1;goto B5cd475;
case 0x5cd47a:goto L5cd47a;
case 0x5cd480:c.instructions+=2;goto B5cd480;
case 0x5cd485:c.instructions+=1;goto B5cd485;
case 0x5cd48a:goto L5cd48a;
case 0x5cd490:c.instructions+=2;goto B5cd490;
case 0x5cd498:c.instructions+=1;goto B5cd498;
case 0x5cd49d:goto L5cd49d;
case 0x5cd4a1:c.instructions+=4;goto B5cd4a1;
case 0x5cd4a2:c.instructions+=3;goto B5cd4a2;
case 0x5cd4a9:c.instructions+=2;goto B5cd4a9;
case 0x5cd4ac:c.instructions+=1;goto B5cd4ac;
case 0x5cd4b0:goto L5cd4b0;
case 0x5cd4b4:c.instructions+=4;goto B5cd4b4;
case 0x5cd4b7:c.instructions+=3;goto B5cd4b7;
case 0x5cd4b8:c.instructions+=2;goto B5cd4b8;
case 0x5cd4ba:c.instructions+=1;goto B5cd4ba;
case 0x5cd4c0:goto L5cd4c0;
case 0x5cd4c1:c.instructions+=3;goto B5cd4c1;
case 0x5cd4c2:c.instructions+=2;goto B5cd4c2;
case 0x5cd4c3:c.instructions+=1;goto B5cd4c3;
case 0x5cd4ca:goto L5cd4ca;
case 0x5cd4ce:c.instructions+=5;goto B5cd4ce;
case 0x5cd4d0:c.instructions+=4;goto B5cd4d0;
case 0x5cd4d6:c.instructions+=3;goto B5cd4d6;
case 0x5cd4d7:c.instructions+=2;goto B5cd4d7;
case 0x5cd4d9:c.instructions+=1;goto B5cd4d9;
case 0x5cd4de:goto L5cd4de;
case 0x5cd4e0:c.instructions+=1;goto B5cd4e0;
case 0x5cd4e6:goto L5cd4e6;
case 0x5cd4ed:c.instructions+=5;goto B5cd4ed;
case 0x5cd4ee:c.instructions+=4;goto B5cd4ee;
case 0x5cd4f0:c.instructions+=3;goto B5cd4f0;
case 0x5cd4f1:c.instructions+=2;goto B5cd4f1;
case 0x5cd4f3:c.instructions+=1;goto B5cd4f3;
case 0x5cd4f8:goto L5cd4f8;
case 0x5cd4f9:c.instructions+=4;goto B5cd4f9;
case 0x5cd4fa:c.instructions+=3;goto B5cd4fa;
case 0x5cd4fb:c.instructions+=2;goto B5cd4fb;
case 0x5cd4fc:c.instructions+=1;goto B5cd4fc;
case 0x5cd4ff:goto L5cd4ff;
case 0x5cd505:goto L5cd505;
case 0x5cd509:c.instructions+=4;goto B5cd509;
case 0x5cd50b:c.instructions+=3;goto B5cd50b;
case 0x5cd50c:c.instructions+=2;goto B5cd50c;
case 0x5cd50e:c.instructions+=1;goto B5cd50e;
case 0x5cd513:goto L5cd513;
case 0x5cd515:c.instructions+=1;goto B5cd515;
case 0x5cd51b:goto L5cd51b;
case 0x5cd522:c.instructions+=5;goto B5cd522;
case 0x5cd523:c.instructions+=4;goto B5cd523;
case 0x5cd525:c.instructions+=3;goto B5cd525;
case 0x5cd526:c.instructions+=2;goto B5cd526;
case 0x5cd528:c.instructions+=1;goto B5cd528;
case 0x5cd52d:goto L5cd52d;
case 0x5cd52e:c.instructions+=4;goto B5cd52e;
case 0x5cd52f:c.instructions+=3;goto B5cd52f;
case 0x5cd530:c.instructions+=2;goto B5cd530;
case 0x5cd531:c.instructions+=1;goto B5cd531;
case 0x5cd534:goto L5cd534;
case 0x5cd538:c.instructions+=6;goto B5cd538;
case 0x5cd53d:c.instructions+=5;goto B5cd53d;
case 0x5cd53e:c.instructions+=4;goto B5cd53e;
case 0x5cd544:c.instructions+=3;goto B5cd544;
case 0x5cd545:c.instructions+=2;goto B5cd545;
case 0x5cd547:c.instructions+=1;goto B5cd547;
case 0x5cd54c:goto L5cd54c;
case 0x5cd54e:c.instructions+=1;goto B5cd54e;
case 0x5cd554:goto L5cd554;
case 0x5cd55b:c.instructions+=5;goto B5cd55b;
case 0x5cd55c:c.instructions+=4;goto B5cd55c;
case 0x5cd55d:c.instructions+=3;goto B5cd55d;
case 0x5cd55e:c.instructions+=2;goto B5cd55e;
case 0x5cd560:c.instructions+=1;goto B5cd560;
case 0x5cd565:goto L5cd565;
case 0x5cd566:c.instructions+=4;goto B5cd566;
case 0x5cd567:c.instructions+=3;goto B5cd567;
case 0x5cd568:c.instructions+=2;goto B5cd568;
case 0x5cd569:c.instructions+=1;goto B5cd569;
case 0x5cd56c:goto L5cd56c;
case 0x5cd570:c.instructions+=6;goto B5cd570;
case 0x5cd575:c.instructions+=5;goto B5cd575;
case 0x5cd576:c.instructions+=4;goto B5cd576;
case 0x5cd57c:c.instructions+=3;goto B5cd57c;
case 0x5cd57d:c.instructions+=2;goto B5cd57d;
case 0x5cd57f:c.instructions+=1;goto B5cd57f;
case 0x5cd584:goto L5cd584;
case 0x5cd586:c.instructions+=1;goto B5cd586;
case 0x5cd58c:goto L5cd58c;
case 0x5cd593:c.instructions+=5;goto B5cd593;
case 0x5cd594:c.instructions+=4;goto B5cd594;
case 0x5cd595:c.instructions+=3;goto B5cd595;
case 0x5cd596:c.instructions+=2;goto B5cd596;
case 0x5cd598:c.instructions+=1;goto B5cd598;
case 0x5cd59d:goto L5cd59d;
case 0x5cd59e:c.instructions+=4;goto B5cd59e;
case 0x5cd59f:c.instructions+=3;goto B5cd59f;
case 0x5cd5a0:c.instructions+=2;goto B5cd5a0;
case 0x5cd5a1:c.instructions+=1;goto B5cd5a1;
case 0x5cd5a4:goto L5cd5a4;
case 0x5cd5aa:c.instructions+=1;goto B5cd5aa;
case 0x5cd5af:goto L5cd5af;
case 0x5cd5b3:c.instructions+=6;goto B5cd5b3;
case 0x5cd5b8:c.instructions+=5;goto B5cd5b8;
case 0x5cd5b9:c.instructions+=4;goto B5cd5b9;
case 0x5cd5bf:c.instructions+=3;goto B5cd5bf;
case 0x5cd5c0:c.instructions+=2;goto B5cd5c0;
case 0x5cd5c2:c.instructions+=1;goto B5cd5c2;
case 0x5cd5c7:goto L5cd5c7;
case 0x5cd5c9:c.instructions+=1;goto B5cd5c9;
case 0x5cd5cf:goto L5cd5cf;
case 0x5cd5d6:c.instructions+=5;goto B5cd5d6;
case 0x5cd5d7:c.instructions+=4;goto B5cd5d7;
case 0x5cd5d8:c.instructions+=3;goto B5cd5d8;
case 0x5cd5d9:c.instructions+=2;goto B5cd5d9;
case 0x5cd5db:c.instructions+=1;goto B5cd5db;
case 0x5cd5e0:goto L5cd5e0;
case 0x5cd5e1:c.instructions+=4;goto B5cd5e1;
case 0x5cd5e2:c.instructions+=3;goto B5cd5e2;
case 0x5cd5e3:c.instructions+=2;goto B5cd5e3;
case 0x5cd5e4:c.instructions+=1;goto B5cd5e4;
case 0x5cd5e7:goto L5cd5e7;
case 0x5cd5eb:c.instructions+=5;goto B5cd5eb;
case 0x5cd5ed:c.instructions+=4;goto B5cd5ed;
case 0x5cd5f3:c.instructions+=3;goto B5cd5f3;
case 0x5cd5f4:c.instructions+=2;goto B5cd5f4;
case 0x5cd5f6:c.instructions+=1;goto B5cd5f6;
case 0x5cd5fb:goto L5cd5fb;
case 0x5cd5fd:c.instructions+=1;goto B5cd5fd;
case 0x5cd603:goto L5cd603;
case 0x5cd60a:c.instructions+=5;goto B5cd60a;
case 0x5cd60b:c.instructions+=4;goto B5cd60b;
case 0x5cd60d:c.instructions+=3;goto B5cd60d;
case 0x5cd60e:c.instructions+=2;goto B5cd60e;
case 0x5cd610:c.instructions+=1;goto B5cd610;
case 0x5cd615:goto L5cd615;
case 0x5cd616:c.instructions+=4;goto B5cd616;
case 0x5cd617:c.instructions+=3;goto B5cd617;
case 0x5cd618:c.instructions+=2;goto B5cd618;
case 0x5cd619:c.instructions+=1;goto B5cd619;
case 0x5cd61c:goto L5cd61c;
case 0x5cd620:c.instructions+=5;goto B5cd620;
case 0x5cd622:c.instructions+=4;goto B5cd622;
case 0x5cd628:c.instructions+=3;goto B5cd628;
case 0x5cd629:c.instructions+=2;goto B5cd629;
case 0x5cd62b:c.instructions+=1;goto B5cd62b;
case 0x5cd630:goto L5cd630;
case 0x5cd632:c.instructions+=1;goto B5cd632;
case 0x5cd634:goto L5cd634;
case 0x5cd63b:c.instructions+=5;goto B5cd63b;
case 0x5cd63c:c.instructions+=4;goto B5cd63c;
case 0x5cd63e:c.instructions+=3;goto B5cd63e;
case 0x5cd63f:c.instructions+=2;goto B5cd63f;
case 0x5cd641:c.instructions+=1;goto B5cd641;
case 0x5cd646:goto L5cd646;
case 0x5cd64d:c.instructions+=3;goto B5cd64d;
case 0x5cd64f:c.instructions+=2;goto B5cd64f;
case 0x5cd654:c.instructions+=1;goto B5cd654;
case 0x5cd656:goto L5cd656;
case 0x5cd65d:c.instructions+=4;goto B5cd65d;
case 0x5cd65e:c.instructions+=3;goto B5cd65e;
case 0x5cd65f:c.instructions+=2;goto B5cd65f;
case 0x5cd661:c.instructions+=1;goto B5cd661;
case 0x5cd666:goto L5cd666;
case 0x5cd66d:c.instructions+=1;goto B5cd66d;
case 0x5cd675:goto L5cd675;
case 0x5cd67c:c.instructions+=3;goto B5cd67c;
case 0x5cd67e:c.instructions+=2;goto B5cd67e;
case 0x5cd685:c.instructions+=1;goto B5cd685;
case 0x5cd68b:goto L5cd68b;
case 0x5cd68e:c.instructions+=11;goto B5cd68e;
case 0x5cd695:c.instructions+=10;goto B5cd695;
case 0x5cd698:c.instructions+=9;goto B5cd698;
case 0x5cd699:c.instructions+=8;goto B5cd699;
case 0x5cd6a0:c.instructions+=7;goto B5cd6a0;
case 0x5cd6a3:c.instructions+=6;goto B5cd6a3;
case 0x5cd6a9:c.instructions+=5;goto B5cd6a9;
case 0x5cd6aa:c.instructions+=4;goto B5cd6aa;
case 0x5cd6ab:c.instructions+=3;goto B5cd6ab;
case 0x5cd6ac:c.instructions+=2;goto B5cd6ac;
case 0x5cd6ae:c.instructions+=1;goto B5cd6ae;
case 0x5cd6b3:goto L5cd6b3;
case 0x5cd6ba:c.instructions+=6;goto B5cd6ba;
case 0x5cd6bb:c.instructions+=5;goto B5cd6bb;
case 0x5cd6bf:c.instructions+=4;goto B5cd6bf;
case 0x5cd6c0:c.instructions+=3;goto B5cd6c0;
case 0x5cd6c1:c.instructions+=2;goto B5cd6c1;
case 0x5cd6c2:c.instructions+=1;goto B5cd6c2;
case 0x5cd6c5:goto L5cd6c5;
case 0x5cd6c9:c.instructions+=5;goto B5cd6c9;
case 0x5cd6cb:c.instructions+=4;goto B5cd6cb;
case 0x5cd6d1:c.instructions+=3;goto B5cd6d1;
case 0x5cd6d2:c.instructions+=2;goto B5cd6d2;
case 0x5cd6d4:c.instructions+=1;goto B5cd6d4;
case 0x5cd6d9:goto L5cd6d9;
case 0x5cd6db:c.instructions+=1;goto B5cd6db;
case 0x5cd6e1:goto L5cd6e1;
case 0x5cd6e8:c.instructions+=5;goto B5cd6e8;
case 0x5cd6e9:c.instructions+=4;goto B5cd6e9;
case 0x5cd6eb:c.instructions+=3;goto B5cd6eb;
case 0x5cd6ec:c.instructions+=2;goto B5cd6ec;
case 0x5cd6ee:c.instructions+=1;goto B5cd6ee;
case 0x5cd6f3:goto L5cd6f3;
case 0x5cd6f4:c.instructions+=4;goto B5cd6f4;
case 0x5cd6f5:c.instructions+=3;goto B5cd6f5;
case 0x5cd6f6:c.instructions+=2;goto B5cd6f6;
case 0x5cd6f7:c.instructions+=1;goto B5cd6f7;
case 0x5cd6fa:goto L5cd6fa;
case 0x5cd6fe:c.instructions+=4;goto B5cd6fe;
case 0x5cd705:c.instructions+=3;goto B5cd705;
case 0x5cd70a:c.instructions+=2;goto B5cd70a;
case 0x5cd70c:c.instructions+=1;goto B5cd70c;
case 0x5cd712:goto L5cd712;
case 0x5cd715:c.instructions+=6;goto B5cd715;
case 0x5cd718:c.instructions+=5;goto B5cd718;
case 0x5cd71e:c.instructions+=4;goto B5cd71e;
case 0x5cd726:c.instructions+=3;goto B5cd726;
case 0x5cd728:c.instructions+=2;goto B5cd728;
case 0x5cd72c:c.instructions+=1;goto B5cd72c;
case 0x5cd72e:goto L5cd72e;
case 0x5cd731:c.instructions+=11;goto B5cd731;
case 0x5cd738:c.instructions+=10;goto B5cd738;
case 0x5cd73b:c.instructions+=9;goto B5cd73b;
case 0x5cd73c:c.instructions+=8;goto B5cd73c;
case 0x5cd743:c.instructions+=7;goto B5cd743;
case 0x5cd746:c.instructions+=6;goto B5cd746;
case 0x5cd74c:c.instructions+=5;goto B5cd74c;
case 0x5cd74d:c.instructions+=4;goto B5cd74d;
case 0x5cd74e:c.instructions+=3;goto B5cd74e;
case 0x5cd74f:c.instructions+=2;goto B5cd74f;
case 0x5cd751:c.instructions+=1;goto B5cd751;
case 0x5cd756:goto L5cd756;
case 0x5cd75c:c.instructions+=1;goto B5cd75c;
case 0x5cd75e:goto L5cd75e;
case 0x5cd765:c.instructions+=6;goto B5cd765;
case 0x5cd76c:c.instructions+=5;goto B5cd76c;
case 0x5cd76d:c.instructions+=4;goto B5cd76d;
case 0x5cd76e:c.instructions+=3;goto B5cd76e;
case 0x5cd76f:c.instructions+=2;goto B5cd76f;
case 0x5cd771:c.instructions+=1;goto B5cd771;
case 0x5cd776:goto L5cd776;
case 0x5cd77c:c.instructions+=1;goto B5cd77c;
case 0x5cd77e:goto L5cd77e;
case 0x5cd785:c.instructions+=4;goto B5cd785;
case 0x5cd786:c.instructions+=3;goto B5cd786;
case 0x5cd787:c.instructions+=2;goto B5cd787;
case 0x5cd789:c.instructions+=1;goto B5cd789;
case 0x5cd78e:goto L5cd78e;
case 0x5cd794:c.instructions+=1;goto B5cd794;
case 0x5cd796:goto L5cd796;
case 0x5cd79d:c.instructions+=4;goto B5cd79d;
case 0x5cd79e:c.instructions+=3;goto B5cd79e;
case 0x5cd79f:c.instructions+=2;goto B5cd79f;
case 0x5cd7a1:c.instructions+=1;goto B5cd7a1;
case 0x5cd7a6:goto L5cd7a6;
case 0x5cd7ac:c.instructions+=1;goto B5cd7ac;
case 0x5cd7ae:goto L5cd7ae;
case 0x5cd7b5:c.instructions+=4;goto B5cd7b5;
case 0x5cd7b6:c.instructions+=3;goto B5cd7b6;
case 0x5cd7b7:c.instructions+=2;goto B5cd7b7;
case 0x5cd7b9:c.instructions+=1;goto B5cd7b9;
case 0x5cd7be:goto L5cd7be;
case 0x5cd7c4:c.instructions+=1;goto B5cd7c4;
case 0x5cd7c6:goto L5cd7c6;
case 0x5cd7cd:c.instructions+=4;goto B5cd7cd;
case 0x5cd7ce:c.instructions+=3;goto B5cd7ce;
case 0x5cd7cf:c.instructions+=2;goto B5cd7cf;
case 0x5cd7d1:c.instructions+=1;goto B5cd7d1;
case 0x5cd7d6:goto L5cd7d6;
case 0x5cd7dd:c.instructions+=2;goto B5cd7dd;
case 0x5cd7e0:c.instructions+=1;goto B5cd7e0;
case 0x5cd7e2:goto L5cd7e2;
case 0x5cd7e5:c.instructions+=11;goto B5cd7e5;
case 0x5cd7ec:c.instructions+=10;goto B5cd7ec;
case 0x5cd7ef:c.instructions+=9;goto B5cd7ef;
case 0x5cd7f5:c.instructions+=8;goto B5cd7f5;
case 0x5cd7f6:c.instructions+=7;goto B5cd7f6;
case 0x5cd7fd:c.instructions+=6;goto B5cd7fd;
case 0x5cd800:c.instructions+=5;goto B5cd800;
case 0x5cd801:c.instructions+=4;goto B5cd801;
case 0x5cd802:c.instructions+=3;goto B5cd802;
case 0x5cd803:c.instructions+=2;goto B5cd803;
case 0x5cd805:c.instructions+=1;goto B5cd805;
case 0x5cd80a:goto L5cd80a;
case 0x5cd80e:c.instructions+=4;goto B5cd80e;
case 0x5cd810:c.instructions+=3;goto B5cd810;
case 0x5cd812:c.instructions+=2;goto B5cd812;
case 0x5cd815:c.instructions+=1;goto B5cd815;
case 0x5cd819:goto L5cd819;
case 0x5cd81a:c.instructions+=2;goto B5cd81a;
case 0x5cd81b:c.instructions+=1;goto B5cd81b;
case 0x5cd81c:goto L5cd81c;
case 0x5cd81d:c.instructions+=1;goto B5cd81d;
case 0x5cd850:goto L5cd850;
case 0x5cd851:c.instructions+=4;goto B5cd851;
case 0x5cd855:c.instructions+=3;goto B5cd855;
case 0x5cd85c:c.instructions+=2;goto B5cd85c;
case 0x5cd85e:c.instructions+=1;goto B5cd85e;
case 0x5cd860:goto L5cd860;
case 0x5cd861:c.instructions+=5;goto B5cd861;
case 0x5cd867:c.instructions+=4;goto B5cd867;
case 0x5cd869:c.instructions+=3;goto B5cd869;
case 0x5cd86a:c.instructions+=2;goto B5cd86a;
case 0x5cd86c:c.instructions+=1;goto B5cd86c;
case 0x5cd871:goto L5cd871;
case 0x5cd873:c.instructions+=1;goto B5cd873;
case 0x5cd875:goto L5cd875;
case 0x5cd87c:c.instructions+=5;goto B5cd87c;
case 0x5cd87d:c.instructions+=4;goto B5cd87d;
case 0x5cd87f:c.instructions+=3;goto B5cd87f;
case 0x5cd880:c.instructions+=2;goto B5cd880;
case 0x5cd882:c.instructions+=1;goto B5cd882;
case 0x5cd887:goto L5cd887;
case 0x5cd888:goto L5cd888;
case 0x5cd889:c.instructions+=1;goto B5cd889;
case 0x5cd890:goto L5cd890;
case 0x5cd891:c.instructions+=4;goto B5cd891;
case 0x5cd895:c.instructions+=3;goto B5cd895;
case 0x5cd89c:c.instructions+=2;goto B5cd89c;
case 0x5cd89e:c.instructions+=1;goto B5cd89e;
case 0x5cd8a0:goto L5cd8a0;
case 0x5cd8a1:c.instructions+=5;goto B5cd8a1;
case 0x5cd8a7:c.instructions+=4;goto B5cd8a7;
case 0x5cd8a9:c.instructions+=3;goto B5cd8a9;
case 0x5cd8aa:c.instructions+=2;goto B5cd8aa;
case 0x5cd8ac:c.instructions+=1;goto B5cd8ac;
case 0x5cd8b1:goto L5cd8b1;
case 0x5cd8b3:c.instructions+=1;goto B5cd8b3;
case 0x5cd8b5:goto L5cd8b5;
case 0x5cd8bc:c.instructions+=5;goto B5cd8bc;
case 0x5cd8bd:c.instructions+=4;goto B5cd8bd;
case 0x5cd8bf:c.instructions+=3;goto B5cd8bf;
case 0x5cd8c0:c.instructions+=2;goto B5cd8c0;
case 0x5cd8c2:c.instructions+=1;goto B5cd8c2;
case 0x5cd8c7:goto L5cd8c7;
case 0x5cd8c8:goto L5cd8c8;
case 0x5cd8c9:c.instructions+=1;goto B5cd8c9;
case 0x5cd8d0:goto L5cd8d0;
case 0x5cd8d1:c.instructions+=4;goto B5cd8d1;
case 0x5cd8d5:c.instructions+=3;goto B5cd8d5;
case 0x5cd8dc:c.instructions+=2;goto B5cd8dc;
case 0x5cd8de:c.instructions+=1;goto B5cd8de;
case 0x5cd8e0:goto L5cd8e0;
case 0x5cd8e1:c.instructions+=5;goto B5cd8e1;
case 0x5cd8e7:c.instructions+=4;goto B5cd8e7;
case 0x5cd8e9:c.instructions+=3;goto B5cd8e9;
case 0x5cd8ea:c.instructions+=2;goto B5cd8ea;
case 0x5cd8ec:c.instructions+=1;goto B5cd8ec;
case 0x5cd8f1:goto L5cd8f1;
case 0x5cd8f3:c.instructions+=1;goto B5cd8f3;
case 0x5cd8f5:goto L5cd8f5;
case 0x5cd8fc:c.instructions+=5;goto B5cd8fc;
case 0x5cd8fd:c.instructions+=4;goto B5cd8fd;
case 0x5cd8ff:c.instructions+=3;goto B5cd8ff;
case 0x5cd900:c.instructions+=2;goto B5cd900;
case 0x5cd902:c.instructions+=1;goto B5cd902;
case 0x5cd907:goto L5cd907;
case 0x5cd908:goto L5cd908;
case 0x5cd909:c.instructions+=1;goto B5cd909;
case 0x5cd910:goto L5cd910;
case 0x5cd911:c.instructions+=6;goto B5cd911;
case 0x5cd915:c.instructions+=5;goto B5cd915;
case 0x5cd91c:c.instructions+=4;goto B5cd91c;
case 0x5cd91e:c.instructions+=3;goto B5cd91e;
case 0x5cd91f:c.instructions+=2;goto B5cd91f;
case 0x5cd921:c.instructions+=1;goto B5cd921;
case 0x5cd927:goto L5cd927;
case 0x5cd928:c.instructions+=6;goto B5cd928;
case 0x5cd929:c.instructions+=5;goto B5cd929;
case 0x5cd92b:c.instructions+=4;goto B5cd92b;
case 0x5cd931:c.instructions+=3;goto B5cd931;
case 0x5cd932:c.instructions+=2;goto B5cd932;
case 0x5cd934:c.instructions+=1;goto B5cd934;
case 0x5cd939:goto L5cd939;
case 0x5cd93b:c.instructions+=1;goto B5cd93b;
case 0x5cd93d:goto L5cd93d;
case 0x5cd944:c.instructions+=5;goto B5cd944;
case 0x5cd945:c.instructions+=4;goto B5cd945;
case 0x5cd947:c.instructions+=3;goto B5cd947;
case 0x5cd948:c.instructions+=2;goto B5cd948;
case 0x5cd94a:c.instructions+=1;goto B5cd94a;
case 0x5cd94f:goto L5cd94f;
case 0x5cd956:c.instructions+=3;goto B5cd956;
case 0x5cd958:c.instructions+=2;goto B5cd958;
case 0x5cd95a:c.instructions+=1;goto B5cd95a;
case 0x5cd95c:goto L5cd95c;
case 0x5cd963:c.instructions+=4;goto B5cd963;
case 0x5cd964:c.instructions+=3;goto B5cd964;
case 0x5cd965:c.instructions+=2;goto B5cd965;
case 0x5cd967:c.instructions+=1;goto B5cd967;
case 0x5cd96c:goto L5cd96c;
case 0x5cd973:c.instructions+=1;goto B5cd973;
case 0x5cd97b:goto L5cd97b;
case 0x5cd982:c.instructions+=3;goto B5cd982;
case 0x5cd984:c.instructions+=2;goto B5cd984;
case 0x5cd98b:c.instructions+=1;goto B5cd98b;
case 0x5cd98d:goto L5cd98d;
case 0x5cd990:c.instructions+=11;goto B5cd990;
case 0x5cd997:c.instructions+=10;goto B5cd997;
case 0x5cd99a:c.instructions+=9;goto B5cd99a;
case 0x5cd99b:c.instructions+=8;goto B5cd99b;
case 0x5cd9a2:c.instructions+=7;goto B5cd9a2;
case 0x5cd9a5:c.instructions+=6;goto B5cd9a5;
case 0x5cd9ab:c.instructions+=5;goto B5cd9ab;
case 0x5cd9ac:c.instructions+=4;goto B5cd9ac;
case 0x5cd9ad:c.instructions+=3;goto B5cd9ad;
case 0x5cd9ae:c.instructions+=2;goto B5cd9ae;
case 0x5cd9b0:c.instructions+=1;goto B5cd9b0;
case 0x5cd9b5:goto L5cd9b5;
case 0x5cd9bc:c.instructions+=1;goto B5cd9bc;
case 0x5cd9c0:goto L5cd9c0;
case 0x5cd9c1:c.instructions+=1;goto B5cd9c1;
case 0x5cd9c2:goto L5cd9c2;
case 0x5cd9c3:c.instructions+=2;goto B5cd9c3;
case 0x5cd9c4:c.instructions+=1;goto B5cd9c4;
case 0x5cd9d0:goto L5cd9d0;
case 0x5cd9d1:c.instructions+=4;goto B5cd9d1;
case 0x5cd9d5:c.instructions+=3;goto B5cd9d5;
case 0x5cd9dc:c.instructions+=2;goto B5cd9dc;
case 0x5cd9de:c.instructions+=1;goto B5cd9de;
case 0x5cd9e0:goto L5cd9e0;
case 0x5cd9e1:c.instructions+=5;goto B5cd9e1;
case 0x5cd9e7:c.instructions+=4;goto B5cd9e7;
case 0x5cd9e9:c.instructions+=3;goto B5cd9e9;
case 0x5cd9ea:c.instructions+=2;goto B5cd9ea;
case 0x5cd9ec:c.instructions+=1;goto B5cd9ec;
case 0x5cd9f1:goto L5cd9f1;
case 0x5cd9f3:c.instructions+=1;goto B5cd9f3;
case 0x5cd9f5:goto L5cd9f5;
case 0x5cd9fc:c.instructions+=5;goto B5cd9fc;
case 0x5cd9fd:c.instructions+=4;goto B5cd9fd;
case 0x5cd9ff:c.instructions+=3;goto B5cd9ff;
case 0x5cda00:c.instructions+=2;goto B5cda00;
case 0x5cda02:c.instructions+=1;goto B5cda02;
case 0x5cda07:goto L5cda07;
case 0x5cda08:goto L5cda08;
case 0x5cda09:c.instructions+=1;goto B5cda09;
case 0x5cda10:goto L5cda10;
case 0x5cda11:c.instructions+=8;goto B5cda11;
case 0x5cda12:c.instructions+=7;goto B5cda12;
case 0x5cda16:c.instructions+=6;goto B5cda16;
case 0x5cda1d:c.instructions+=5;goto B5cda1d;
case 0x5cda1f:c.instructions+=4;goto B5cda1f;
case 0x5cda26:c.instructions+=3;goto B5cda26;
case 0x5cda27:c.instructions+=2;goto B5cda27;
case 0x5cda29:c.instructions+=1;goto B5cda29;
case 0x5cda2f:goto L5cda2f;
case 0x5cda36:c.instructions+=2;goto B5cda36;
case 0x5cda38:c.instructions+=1;goto B5cda38;
case 0x5cda3e:goto L5cda3e;
case 0x5cda45:c.instructions+=2;goto B5cda45;
case 0x5cda47:c.instructions+=1;goto B5cda47;
case 0x5cda4d:goto L5cda4d;
case 0x5cda4e:c.instructions+=6;goto B5cda4e;
case 0x5cda50:c.instructions+=5;goto B5cda50;
case 0x5cda56:c.instructions+=4;goto B5cda56;
case 0x5cda57:c.instructions+=3;goto B5cda57;
case 0x5cda59:c.instructions+=2;goto B5cda59;
case 0x5cda61:c.instructions+=1;goto B5cda61;
case 0x5cda66:goto L5cda66;
case 0x5cda68:c.instructions+=1;goto B5cda68;
case 0x5cda6a:goto L5cda6a;
case 0x5cda71:c.instructions+=2;goto B5cda71;
case 0x5cda73:c.instructions+=1;goto B5cda73;
case 0x5cda75:goto L5cda75;
case 0x5cda77:c.instructions+=3;goto B5cda77;
case 0x5cda78:c.instructions+=2;goto B5cda78;
case 0x5cda7a:c.instructions+=1;goto B5cda7a;
case 0x5cda7f:goto L5cda7f;
case 0x5cda81:c.instructions+=1;goto B5cda81;
case 0x5cda83:goto L5cda83;
case 0x5cda84:c.instructions+=4;goto B5cda84;
case 0x5cda86:c.instructions+=3;goto B5cda86;
case 0x5cda87:c.instructions+=2;goto B5cda87;
case 0x5cda89:c.instructions+=1;goto B5cda89;
case 0x5cda8e:goto L5cda8e;
case 0x5cda90:goto L5cda90;
case 0x5cda93:c.instructions+=1;goto B5cda93;
case 0x5cda9b:goto L5cda9b;
case 0x5cda9d:c.instructions+=3;goto B5cda9d;
case 0x5cda9e:c.instructions+=2;goto B5cda9e;
case 0x5cdaa4:c.instructions+=1;goto B5cdaa4;
case 0x5cdaa9:goto L5cdaa9;
case 0x5cdaab:c.instructions+=1;goto B5cdaab;
case 0x5cdaad:goto L5cdaad;
case 0x5cdaae:c.instructions+=2;goto B5cdaae;
case 0x5cdab0:c.instructions+=1;goto B5cdab0;
case 0x5cdab5:goto L5cdab5;
case 0x5cdab8:c.instructions+=1;goto B5cdab8;
case 0x5cdac0:goto L5cdac0;
case 0x5cdac2:c.instructions+=3;goto B5cdac2;
case 0x5cdac3:c.instructions+=2;goto B5cdac3;
case 0x5cdac5:c.instructions+=1;goto B5cdac5;
case 0x5cdaca:goto L5cdaca;
case 0x5cdacc:c.instructions+=1;goto B5cdacc;
case 0x5cdace:goto L5cdace;
case 0x5cdad5:c.instructions+=2;goto B5cdad5;
case 0x5cdad7:c.instructions+=1;goto B5cdad7;
case 0x5cdad9:goto L5cdad9;
case 0x5cdadb:c.instructions+=3;goto B5cdadb;
case 0x5cdadc:c.instructions+=2;goto B5cdadc;
case 0x5cdade:c.instructions+=1;goto B5cdade;
case 0x5cdae3:goto L5cdae3;
case 0x5cdae5:c.instructions+=1;goto B5cdae5;
case 0x5cdae7:goto L5cdae7;
case 0x5cdae8:c.instructions+=4;goto B5cdae8;
case 0x5cdaea:c.instructions+=3;goto B5cdaea;
case 0x5cdaeb:c.instructions+=2;goto B5cdaeb;
case 0x5cdaed:c.instructions+=1;goto B5cdaed;
case 0x5cdaf2:goto L5cdaf2;
case 0x5cdaf5:c.instructions+=1;goto B5cdaf5;
case 0x5cdafd:goto L5cdafd;
case 0x5cdaff:c.instructions+=4;goto B5cdaff;
case 0x5cdb05:c.instructions+=3;goto B5cdb05;
case 0x5cdb06:c.instructions+=2;goto B5cdb06;
case 0x5cdb08:c.instructions+=1;goto B5cdb08;
case 0x5cdb0d:goto L5cdb0d;
case 0x5cdb0f:c.instructions+=1;goto B5cdb0f;
case 0x5cdb11:goto L5cdb11;
case 0x5cdb12:c.instructions+=2;goto B5cdb12;
case 0x5cdb14:c.instructions+=1;goto B5cdb14;
case 0x5cdb19:goto L5cdb19;
case 0x5cdb1c:c.instructions+=1;goto B5cdb1c;
case 0x5cdb24:goto L5cdb24;
case 0x5cdb26:c.instructions+=3;goto B5cdb26;
case 0x5cdb27:c.instructions+=2;goto B5cdb27;
case 0x5cdb29:c.instructions+=1;goto B5cdb29;
case 0x5cdb2e:goto L5cdb2e;
case 0x5cdb30:c.instructions+=1;goto B5cdb30;
case 0x5cdb32:goto L5cdb32;
case 0x5cdb33:c.instructions+=2;goto B5cdb33;
case 0x5cdb35:c.instructions+=1;goto B5cdb35;
case 0x5cdb3a:goto L5cdb3a;
case 0x5cdb3d:c.instructions+=1;goto B5cdb3d;
case 0x5cdb45:goto L5cdb45;
case 0x5cdb47:c.instructions+=3;goto B5cdb47;
case 0x5cdb48:c.instructions+=2;goto B5cdb48;
case 0x5cdb4a:c.instructions+=1;goto B5cdb4a;
case 0x5cdb4f:goto L5cdb4f;
case 0x5cdb51:c.instructions+=2;goto B5cdb51;
case 0x5cdb52:c.instructions+=1;goto B5cdb52;
case 0x5cdb54:goto L5cdb54;
case 0x5cdb55:c.instructions+=2;goto B5cdb55;
case 0x5cdb57:c.instructions+=1;goto B5cdb57;
case 0x5cdb5c:goto L5cdb5c;
case 0x5cdb5f:c.instructions+=1;goto B5cdb5f;
case 0x5cdb67:goto L5cdb67;
case 0x5cdb69:c.instructions+=3;goto B5cdb69;
case 0x5cdb6a:c.instructions+=2;goto B5cdb6a;
case 0x5cdb6c:c.instructions+=1;goto B5cdb6c;
case 0x5cdb71:goto L5cdb71;
case 0x5cdb73:c.instructions+=1;goto B5cdb73;
case 0x5cdb75:goto L5cdb75;
case 0x5cdb76:c.instructions+=2;goto B5cdb76;
case 0x5cdb78:c.instructions+=1;goto B5cdb78;
case 0x5cdb7d:goto L5cdb7d;
case 0x5cdb84:c.instructions+=5;goto B5cdb84;
case 0x5cdb88:c.instructions+=4;goto B5cdb88;
case 0x5cdb89:c.instructions+=3;goto B5cdb89;
case 0x5cdb8a:c.instructions+=2;goto B5cdb8a;
case 0x5cdb8b:c.instructions+=1;goto B5cdb8b;
case 0x5cdb8e:goto L5cdb8e;
case 0x5cdb93:c.instructions+=1;goto B5cdb93;
case 0x5cdb98:goto L5cdb98;
case 0x5cdb99:c.instructions+=2;goto B5cdb99;
case 0x5cdb9e:c.instructions+=1;goto B5cdb9e;
case 0x5cdba3:goto L5cdba3;
case 0x5cdba6:goto L5cdba6;
case 0x5cdba7:c.instructions+=3;goto B5cdba7;
case 0x5cdba8:c.instructions+=2;goto B5cdba8;
case 0x5cdba9:c.instructions+=1;goto B5cdba9;
case 0x5cdbb0:goto L5cdbb0;
case 0x5cdbb1:c.instructions+=6;goto B5cdbb1;
case 0x5cdbb5:c.instructions+=5;goto B5cdbb5;
case 0x5cdbbc:c.instructions+=4;goto B5cdbbc;
case 0x5cdbbe:c.instructions+=3;goto B5cdbbe;
case 0x5cdbbf:c.instructions+=2;goto B5cdbbf;
case 0x5cdbc1:c.instructions+=1;goto B5cdbc1;
case 0x5cdbc7:goto L5cdbc7;
case 0x5cdbcf:c.instructions+=1;goto B5cdbcf;
case 0x5cdbd5:goto L5cdbd5;
case 0x5cdbd6:c.instructions+=7;goto B5cdbd6;
case 0x5cdbd9:c.instructions+=6;goto B5cdbd9;
case 0x5cdbda:c.instructions+=5;goto B5cdbda;
case 0x5cdbdd:c.instructions+=4;goto B5cdbdd;
case 0x5cdbe3:c.instructions+=3;goto B5cdbe3;
case 0x5cdbeb:c.instructions+=2;goto B5cdbeb;
case 0x5cdbee:c.instructions+=1;goto B5cdbee;
case 0x5cdbf0:goto L5cdbf0;
case 0x5cdbf3:c.instructions+=11;goto B5cdbf3;
case 0x5cdbfa:c.instructions+=10;goto B5cdbfa;
case 0x5cdbfd:c.instructions+=9;goto B5cdbfd;
case 0x5cdc03:c.instructions+=8;goto B5cdc03;
case 0x5cdc04:c.instructions+=7;goto B5cdc04;
case 0x5cdc0b:c.instructions+=6;goto B5cdc0b;
case 0x5cdc0e:c.instructions+=5;goto B5cdc0e;
case 0x5cdc0f:c.instructions+=4;goto B5cdc0f;
case 0x5cdc10:c.instructions+=3;goto B5cdc10;
case 0x5cdc11:c.instructions+=2;goto B5cdc11;
case 0x5cdc13:c.instructions+=1;goto B5cdc13;
case 0x5cdc18:goto L5cdc18;
case 0x5cdc1f:c.instructions+=1;goto B5cdc1f;
case 0x5cdc21:goto L5cdc21;
case 0x5cdc28:c.instructions+=6;goto B5cdc28;
case 0x5cdc2f:c.instructions+=5;goto B5cdc2f;
case 0x5cdc30:c.instructions+=4;goto B5cdc30;
case 0x5cdc31:c.instructions+=3;goto B5cdc31;
case 0x5cdc32:c.instructions+=2;goto B5cdc32;
case 0x5cdc34:c.instructions+=1;goto B5cdc34;
case 0x5cdc39:goto L5cdc39;
case 0x5cdc40:c.instructions+=1;goto B5cdc40;
case 0x5cdc42:goto L5cdc42;
case 0x5cdc49:c.instructions+=4;goto B5cdc49;
case 0x5cdc4a:c.instructions+=3;goto B5cdc4a;
case 0x5cdc4b:c.instructions+=2;goto B5cdc4b;
case 0x5cdc4d:c.instructions+=1;goto B5cdc4d;
case 0x5cdc52:goto L5cdc52;
case 0x5cdc59:c.instructions+=1;goto B5cdc59;
case 0x5cdc5b:goto L5cdc5b;
case 0x5cdc62:c.instructions+=4;goto B5cdc62;
case 0x5cdc63:c.instructions+=3;goto B5cdc63;
case 0x5cdc64:c.instructions+=2;goto B5cdc64;
case 0x5cdc66:c.instructions+=1;goto B5cdc66;
case 0x5cdc6b:goto L5cdc6b;
case 0x5cdc72:c.instructions+=1;goto B5cdc72;
case 0x5cdc74:goto L5cdc74;
case 0x5cdc7b:c.instructions+=4;goto B5cdc7b;
case 0x5cdc7c:c.instructions+=3;goto B5cdc7c;
case 0x5cdc7d:c.instructions+=2;goto B5cdc7d;
case 0x5cdc7f:c.instructions+=1;goto B5cdc7f;
case 0x5cdc84:goto L5cdc84;
case 0x5cdc8b:c.instructions+=1;goto B5cdc8b;
case 0x5cdc8d:goto L5cdc8d;
case 0x5cdc94:c.instructions+=4;goto B5cdc94;
case 0x5cdc95:c.instructions+=3;goto B5cdc95;
case 0x5cdc96:c.instructions+=2;goto B5cdc96;
case 0x5cdc98:c.instructions+=1;goto B5cdc98;
case 0x5cdc9d:goto L5cdc9d;
case 0x5cdca4:c.instructions+=2;goto B5cdca4;
case 0x5cdca8:c.instructions+=1;goto B5cdca8;
case 0x5cdcaa:goto L5cdcaa;
case 0x5cdcad:c.instructions+=11;goto B5cdcad;
case 0x5cdcb4:c.instructions+=10;goto B5cdcb4;
case 0x5cdcb7:c.instructions+=9;goto B5cdcb7;
case 0x5cdcb8:c.instructions+=8;goto B5cdcb8;
case 0x5cdcbf:c.instructions+=7;goto B5cdcbf;
case 0x5cdcc2:c.instructions+=6;goto B5cdcc2;
case 0x5cdcc8:c.instructions+=5;goto B5cdcc8;
case 0x5cdcc9:c.instructions+=4;goto B5cdcc9;
case 0x5cdcca:c.instructions+=3;goto B5cdcca;
case 0x5cdccb:c.instructions+=2;goto B5cdccb;
case 0x5cdccd:c.instructions+=1;goto B5cdccd;
case 0x5cdcd2:goto L5cdcd2;
case 0x5cdcd4:c.instructions+=5;goto B5cdcd4;
case 0x5cdcd6:c.instructions+=4;goto B5cdcd6;
case 0x5cdcd9:c.instructions+=3;goto B5cdcd9;
case 0x5cdcda:c.instructions+=2;goto B5cdcda;
case 0x5cdcde:c.instructions+=1;goto B5cdcde;
case 0x5cdcdf:goto L5cdcdf;
case 0x5cdce0:c.instructions+=2;goto B5cdce0;
case 0x5cdce1:c.instructions+=1;goto B5cdce1;
case 0x5cdcf0:goto L5cdcf0;
case 0x5cdcf3:c.instructions+=16;goto B5cdcf3;
case 0x5cdcf4:c.instructions+=15;goto B5cdcf4;
case 0x5cdcf5:c.instructions+=14;goto B5cdcf5;
case 0x5cdcf6:c.instructions+=13;goto B5cdcf6;
case 0x5cdcf7:c.instructions+=12;goto B5cdcf7;
case 0x5cdcf9:c.instructions+=11;goto B5cdcf9;
case 0x5cdcfe:c.instructions+=10;goto B5cdcfe;
case 0x5cdcff:c.instructions+=9;goto B5cdcff;
case 0x5cdd00:c.instructions+=8;goto B5cdd00;
case 0x5cdd01:c.instructions+=7;goto B5cdd01;
case 0x5cdd02:c.instructions+=6;goto B5cdd02;
case 0x5cdd04:c.instructions+=5;goto B5cdd04;
case 0x5cdd08:c.instructions+=4;goto B5cdd08;
case 0x5cdd0c:c.instructions+=3;goto B5cdd0c;
case 0x5cdd0e:c.instructions+=2;goto B5cdd0e;
case 0x5cdd10:c.instructions+=1;goto B5cdd10;
case 0x5cdd16:goto L5cdd16;
case 0x5cdd1b:c.instructions+=8;goto B5cdd1b;
case 0x5cdd1d:c.instructions+=7;goto B5cdd1d;
case 0x5cdd21:c.instructions+=6;goto B5cdd21;
case 0x5cdd25:c.instructions+=5;goto B5cdd25;
case 0x5cdd29:c.instructions+=4;goto B5cdd29;
case 0x5cdd2d:c.instructions+=3;goto B5cdd2d;
case 0x5cdd31:c.instructions+=2;goto B5cdd31;
case 0x5cdd36:c.instructions+=1;goto B5cdd36;
case 0x5cdd38:goto L5cdd38;
case 0x5cdd3d:c.instructions+=1;goto B5cdd3d;
case 0x5cdd3f:goto L5cdd3f;
case 0x5cdd44:c.instructions+=1;goto B5cdd44;
case 0x5cdd46:goto L5cdd46;
case 0x5cdd50:c.instructions+=3;goto B5cdd50;
case 0x5cdd56:c.instructions+=2;goto B5cdd56;
case 0x5cdd5c:c.instructions+=1;goto B5cdd5c;
case 0x5cdd5e:goto L5cdd5e;
case 0x5cdd60:c.instructions+=1;goto B5cdd60;
case 0x5cdd65:goto L5cdd65;
case 0x5cdd68:c.instructions+=1;goto B5cdd68;
case 0x5cdd6d:goto L5cdd6d;
case 0x5cdd6f:goto L5cdd6f;
case 0x5cdd79:c.instructions+=3;goto B5cdd79;
case 0x5cdd7f:c.instructions+=2;goto B5cdd7f;
case 0x5cdd85:c.instructions+=1;goto B5cdd85;
case 0x5cdd87:goto L5cdd87;
case 0x5cdd89:c.instructions+=1;goto B5cdd89;
case 0x5cdd8e:goto L5cdd8e;
case 0x5cdd91:c.instructions+=1;goto B5cdd91;
case 0x5cdd96:goto L5cdd96;
case 0x5cdd9b:c.instructions+=3;goto B5cdd9b;
case 0x5cdda1:c.instructions+=2;goto B5cdda1;
case 0x5cdda4:c.instructions+=1;goto B5cdda4;
case 0x5cdda6:goto L5cdda6;
case 0x5cddad:goto L5cddad;
case 0x5cddaf:goto L5cddaf;
case 0x5cddb5:c.instructions+=4;goto B5cddb5;
case 0x5cddb6:c.instructions+=3;goto B5cddb6;
case 0x5cddb7:c.instructions+=2;goto B5cddb7;
case 0x5cddba:c.instructions+=1;goto B5cddba;
case 0x5cddbb:goto L5cddbb;
case 0x5cddbd:c.instructions+=5;goto B5cddbd;
case 0x5cddc3:c.instructions+=4;goto B5cddc3;
case 0x5cddc9:c.instructions+=3;goto B5cddc9;
case 0x5cddcb:c.instructions+=2;goto B5cddcb;
case 0x5cddce:c.instructions+=1;goto B5cddce;
case 0x5cddd0:goto L5cddd0;
case 0x5cddd2:c.instructions+=5;goto B5cddd2;
case 0x5cddd8:c.instructions+=4;goto B5cddd8;
case 0x5cddd9:c.instructions+=3;goto B5cddd9;
case 0x5cddda:c.instructions+=2;goto B5cddda;
case 0x5cdddd:c.instructions+=1;goto B5cdddd;
case 0x5cddde:goto L5cddde;
case 0x5cdde4:c.instructions+=5;goto B5cdde4;
case 0x5cddea:c.instructions+=4;goto B5cddea;
case 0x5cddeb:c.instructions+=3;goto B5cddeb;
case 0x5cddec:c.instructions+=2;goto B5cddec;
case 0x5cddef:c.instructions+=1;goto B5cddef;
case 0x5cddf0:goto L5cddf0;
case 0x5cddf2:c.instructions+=5;goto B5cddf2;
case 0x5cddf8:c.instructions+=4;goto B5cddf8;
case 0x5cddfe:c.instructions+=3;goto B5cddfe;
case 0x5cde00:c.instructions+=2;goto B5cde00;
case 0x5cde03:c.instructions+=1;goto B5cde03;
case 0x5cde05:goto L5cde05;
case 0x5cde0b:c.instructions+=5;goto B5cde0b;
case 0x5cde11:c.instructions+=4;goto B5cde11;
case 0x5cde12:c.instructions+=3;goto B5cde12;
case 0x5cde13:c.instructions+=2;goto B5cde13;
case 0x5cde16:c.instructions+=1;goto B5cde16;
case 0x5cde17:goto L5cde17;
case 0x5cde19:c.instructions+=1;goto B5cde19;
case 0x5cde1f:goto L5cde1f;
case 0x5cde20:c.instructions+=3;goto B5cde20;
case 0x5cde21:c.instructions+=2;goto B5cde21;
case 0x5cde24:c.instructions+=1;goto B5cde24;
case 0x5cde40:goto L5cde40;
case 0x5cde41:c.instructions+=6;goto B5cde41;
case 0x5cde45:c.instructions+=5;goto B5cde45;
case 0x5cde4b:c.instructions+=4;goto B5cde4b;
case 0x5cde51:c.instructions+=3;goto B5cde51;
case 0x5cde52:c.instructions+=2;goto B5cde52;
case 0x5cde53:c.instructions+=1;goto B5cde53;
case 0x5cde58:goto L5cde58;
case 0x5cde5c:c.instructions+=2;goto B5cde5c;
case 0x5cde5f:c.instructions+=1;goto B5cde5f;
case 0x5cde64:goto L5cde64;
case 0x5cde66:c.instructions+=4;goto B5cde66;
case 0x5cde6b:c.instructions+=3;goto B5cde6b;
case 0x5cde6d:c.instructions+=2;goto B5cde6d;
case 0x5cde73:c.instructions+=1;goto B5cde73;
case 0x5cde75:goto L5cde75;
case 0x5cde77:goto L5cde77;
case 0x5cde7d:c.instructions+=1;goto B5cde7d;
case 0x5cde7f:goto L5cde7f;
case 0x5cde85:c.instructions+=1;goto B5cde85;
case 0x5cde87:goto L5cde87;
case 0x5cde89:c.instructions+=1;goto B5cde89;
case 0x5cde8b:goto L5cde8b;
case 0x5cde8d:goto L5cde8d;
case 0x5cde93:c.instructions+=1;goto B5cde93;
case 0x5cde95:goto L5cde95;
case 0x5cde9b:c.instructions+=1;goto B5cde9b;
case 0x5cde9d:goto L5cde9d;
case 0x5cde9f:c.instructions+=1;goto B5cde9f;
case 0x5cdea1:goto L5cdea1;
case 0x5cdea3:goto L5cdea3;
case 0x5cdea9:c.instructions+=1;goto B5cdea9;
case 0x5cdeab:goto L5cdeab;
case 0x5cdeb1:c.instructions+=1;goto B5cdeb1;
case 0x5cdeb3:goto L5cdeb3;
case 0x5cdeb9:goto L5cdeb9;
case 0x5cdebf:c.instructions+=7;goto B5cdebf;
case 0x5cdec5:c.instructions+=6;goto B5cdec5;
case 0x5cdeca:c.instructions+=5;goto B5cdeca;
case 0x5cdece:c.instructions+=4;goto B5cdece;
case 0x5cded4:c.instructions+=3;goto B5cded4;
case 0x5cded6:c.instructions+=2;goto B5cded6;
case 0x5cdeda:c.instructions+=1;goto B5cdeda;
case 0x5cdedc:goto L5cdedc;
case 0x5cdee1:c.instructions+=1;goto B5cdee1;
case 0x5cdee3:goto L5cdee3;
case 0x5cdee8:c.instructions+=1;goto B5cdee8;
case 0x5cdeea:goto L5cdeea;
case 0x5cdef4:c.instructions+=1;goto B5cdef4;
case 0x5cdef6:goto L5cdef6;
case 0x5cdefc:c.instructions+=2;goto B5cdefc;
case 0x5cdefd:c.instructions+=1;goto B5cdefd;
case 0x5cdefe:goto L5cdefe;
case 0x5cdf02:c.instructions+=2;goto B5cdf02;
case 0x5cdf03:c.instructions+=1;goto B5cdf03;
case 0x5cdf10:goto L5cdf10;
case 0x5cdf11:c.instructions+=4;goto B5cdf11;
case 0x5cdf13:c.instructions+=3;goto B5cdf13;
case 0x5cdf15:c.instructions+=2;goto B5cdf15;
case 0x5cdf17:c.instructions+=1;goto B5cdf17;
case 0x5cdf19:goto L5cdf19;
case 0x5cdf20:goto L5cdf20;
case 0x5cdf22:c.instructions+=7;goto B5cdf22;
case 0x5cdf25:c.instructions+=6;goto B5cdf25;
case 0x5cdf27:c.instructions+=5;goto B5cdf27;
case 0x5cdf28:c.instructions+=4;goto B5cdf28;
case 0x5cdf2b:c.instructions+=3;goto B5cdf2b;
case 0x5cdf30:c.instructions+=2;goto B5cdf30;
case 0x5cdf31:c.instructions+=1;goto B5cdf31;
case 0x5cdf36:goto L5cdf36;
case 0x5cdf38:c.instructions+=3;goto B5cdf38;
case 0x5cdf3b:c.instructions+=2;goto B5cdf3b;
case 0x5cdf3d:c.instructions+=1;goto B5cdf3d;
case 0x5cdf3f:goto L5cdf3f;
case 0x5cdf40:c.instructions+=1;goto B5cdf40;
case 0x5cdf50:goto L5cdf50;
case 0x5cdf51:c.instructions+=19;goto B5cdf51;
case 0x5cdf53:c.instructions+=18;goto B5cdf53;
case 0x5cdf55:c.instructions+=17;goto B5cdf55;
case 0x5cdf5a:c.instructions+=16;goto B5cdf5a;
case 0x5cdf60:c.instructions+=15;goto B5cdf60;
case 0x5cdf61:c.instructions+=14;goto B5cdf61;
case 0x5cdf68:c.instructions+=13;goto B5cdf68;
case 0x5cdf6b:c.instructions+=12;goto B5cdf6b;
case 0x5cdf6e:c.instructions+=11;goto B5cdf6e;
case 0x5cdf6f:c.instructions+=10;goto B5cdf6f;
case 0x5cdf70:c.instructions+=9;goto B5cdf70;
case 0x5cdf72:c.instructions+=8;goto B5cdf72;
case 0x5cdf75:c.instructions+=7;goto B5cdf75;
case 0x5cdf78:c.instructions+=6;goto B5cdf78;
case 0x5cdf79:c.instructions+=5;goto B5cdf79;
case 0x5cdf7b:c.instructions+=4;goto B5cdf7b;
case 0x5cdf7e:c.instructions+=3;goto B5cdf7e;
case 0x5cdf81:c.instructions+=2;goto B5cdf81;
case 0x5cdf84:c.instructions+=1;goto B5cdf84;
case 0x5cdf86:goto L5cdf86;
case 0x5cdf89:c.instructions+=1;goto B5cdf89;
case 0x5cdf8b:goto L5cdf8b;
case 0x5cdf8e:c.instructions+=3;goto B5cdf8e;
case 0x5cdf8f:c.instructions+=2;goto B5cdf8f;
case 0x5cdf96:c.instructions+=1;goto B5cdf96;
case 0x5cdf9b:goto L5cdf9b;
case 0x5cdf9d:c.instructions+=3;goto B5cdf9d;
case 0x5cdfa0:c.instructions+=2;goto B5cdfa0;
case 0x5cdfa3:c.instructions+=1;goto B5cdfa3;
case 0x5cdfa5:goto L5cdfa5;
case 0x5cdfa8:c.instructions+=6;goto B5cdfa8;
case 0x5cdfab:c.instructions+=5;goto B5cdfab;
case 0x5cdfac:c.instructions+=4;goto B5cdfac;
case 0x5cdfaf:c.instructions+=3;goto B5cdfaf;
case 0x5cdfb0:c.instructions+=2;goto B5cdfb0;
case 0x5cdfb4:c.instructions+=1;goto B5cdfb4;
case 0x5cdfb9:goto L5cdfb9;
case 0x5cdfbc:c.instructions+=3;goto B5cdfbc;
case 0x5cdfbf:c.instructions+=2;goto B5cdfbf;
case 0x5cdfc4:c.instructions+=1;goto B5cdfc4;
case 0x5cdfc5:goto L5cdfc5;
case 0x5cdfc8:c.instructions+=2;goto B5cdfc8;
case 0x5cdfcb:c.instructions+=1;goto B5cdfcb;
case 0x5cdfce:goto L5cdfce;
case 0x5cdfd1:c.instructions+=2;goto B5cdfd1;
case 0x5cdfd3:c.instructions+=1;goto B5cdfd3;
case 0x5cdfd5:goto L5cdfd5;
case 0x5cdfd9:c.instructions+=1;goto B5cdfd9;
case 0x5cdfdb:goto L5cdfdb;
case 0x5cdfde:c.instructions+=1;goto B5cdfde;
case 0x5cdfe0:goto L5cdfe0;
case 0x5cdfe3:goto L5cdfe3;
case 0x5cdfe5:c.instructions+=2;goto B5cdfe5;
case 0x5cdfe8:c.instructions+=1;goto B5cdfe8;
case 0x5cdfea:goto L5cdfea;
case 0x5cdfec:goto L5cdfec;
case 0x5cdfee:c.instructions+=1;goto B5cdfee;
case 0x5cdff1:goto L5cdff1;
case 0x5cdff3:goto L5cdff3;
case 0x5cdff6:c.instructions+=1;goto B5cdff6;
case 0x5cdff9:goto L5cdff9;
case 0x5cdffd:c.instructions+=1;goto B5cdffd;
case 0x5cdfff:goto L5cdfff;
default:missing_instruction(c.pc);}
B5cd1a0:L5cd1a0:{c.instructions+=8;NFSU2_TR(0x5cd1a0);
__builtin_memmove((R+0),gp(0x8709e8),4);
}
B5cd1a5:{NFSU2_TR(0x5cd1a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd1a6:{NFSU2_TR(0x5cd1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cd1a8:{NFSU2_TR(0x5cd1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cd1ab:{NFSU2_TR(0x5cd1ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd1ac:{NFSU2_TR(0x5cd1ac);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5cd1ae:{NFSU2_TR(0x5cd1ae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cd1b0:{NFSU2_TR(0x5cd1b0);
if(r1(R+518)){{goto L5cd1ca;}}
}
B5cd1b2:L5cd1b2:{c.instructions+=3;NFSU2_TR(0x5cd1b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd1b3:{NFSU2_TR(0x5cd1b3);
w4(R+4,u32(0x8763b0ull));
}
B5cd1b8:{NFSU2_TR(0x5cd1b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd1bdull));
TAIL_STATIC(0x479130u,479);
}
B5cd1bd:L5cd1bd:{c.instructions+=5;NFSU2_TR(0x5cd1bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cd1bf:{NFSU2_TR(0x5cd1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd1c2:{NFSU2_TR(0x5cd1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cd1c5:{NFSU2_TR(0x5cd1c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5cd1c7:{NFSU2_TR(0x5cd1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd1ca:L5cd1ca:{c.instructions+=4;NFSU2_TR(0x5cd1ca);
__builtin_memmove((R+0),gp(0x8709e4),4);
}
B5cd1cf:{NFSU2_TR(0x5cd1cf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5cd1d1:{NFSU2_TR(0x5cd1d1);
__builtin_memmove(gp(0x8709e8),(R+28),4);
}
B5cd1d7:{NFSU2_TR(0x5cd1d7);
if(r1(R+518)){{goto L5cd1e2;}}
}
B5cd1d9:L5cd1d9:{c.instructions+=2;NFSU2_TR(0x5cd1d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd1da:{NFSU2_TR(0x5cd1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd1dfull));
TAIL_STATIC(0x6f4940u,6f4);
}
B5cd1df:L5cd1df:{c.instructions+=1;NFSU2_TR(0x5cd1df);
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
B5cd1e2:L5cd1e2:{c.instructions+=4;NFSU2_TR(0x5cd1e2);
__builtin_memmove(gp(0x8709e4),(R+28),4);
}
B5cd1e8:{NFSU2_TR(0x5cd1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd1e9:{NFSU2_TR(0x5cd1e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd1ea:{NFSU2_TR(0x5cd1ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd1f0:L5cd1f0:{c.instructions+=14;NFSU2_TR(0x5cd1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x25cull))));
}
B5cd1f6:{NFSU2_TR(0x5cd1f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd1f7:{NFSU2_TR(0x5cd1f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x264ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cd1fe:{NFSU2_TR(0x5cd1fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd1ff:{NFSU2_TR(0x5cd1ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cd201:{NFSU2_TR(0x5cd201);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd202:{NFSU2_TR(0x5cd202);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd203:{NFSU2_TR(0x5cd203);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd207:{NFSU2_TR(0x5cd207);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cd20f:{NFSU2_TR(0x5cd20f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cd217:{NFSU2_TR(0x5cd217);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd21b:{NFSU2_TR(0x5cd21b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd21f:{NFSU2_TR(0x5cd21f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd223:{NFSU2_TR(0x5cd223);
w4(R+20,u32(0x86ffb4ull));
}
B5cd228:L5cd228:{c.instructions+=3;NFSU2_TR(0x5cd228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cd22b:{NFSU2_TR(0x5cd22b);
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
B5cd22d:{NFSU2_TR(0x5cd22d);
if(r1(R+518)){{goto L5cd258;}}
}
B5cd22f:L5cd22f:{c.instructions+=6;NFSU2_TR(0x5cd22f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cd233:{NFSU2_TR(0x5cd233);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd234:{NFSU2_TR(0x5cd234);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x244ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cd23c:{NFSU2_TR(0x5cd23c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cd23e:{NFSU2_TR(0x5cd23e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd23f:{NFSU2_TR(0x5cd23f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd242ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cd242:L5cd242:{c.instructions+=4;NFSU2_TR(0x5cd242);
w4(R+4,u32(0x4ull));
}
B5cd247:{NFSU2_TR(0x5cd247);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd24b:{NFSU2_TR(0x5cd24b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd24e:{NFSU2_TR(0x5cd24e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cd250:L5cd250:{c.instructions+=1;NFSU2_TR(0x5cd250);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cd252;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd250u);}goto L5cd250;}}
}
B5cd252:L5cd252:{c.instructions+=1;NFSU2_TR(0x5cd252);
if(r1(R+518)){{goto L5cd3ef;}}
}
B5cd258:L5cd258:{c.instructions+=3;NFSU2_TR(0x5cd258);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5cd25b:{NFSU2_TR(0x5cd25b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x86ffbcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x86ffbcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5cd261:{NFSU2_TR(0x5cd261);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd228u);}goto L5cd228;}}
}
B5cd263:L5cd263:{c.instructions+=1;NFSU2_TR(0x5cd263);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cd265:L5cd265:{c.instructions+=3;NFSU2_TR(0x5cd265);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cd26c:{NFSU2_TR(0x5cd26c);
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
B5cd26e:{NFSU2_TR(0x5cd26e);
if(r1(R+518)){{goto L5cd288;}}
}
B5cd270:L5cd270:{c.instructions+=3;NFSU2_TR(0x5cd270);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5cd271:{NFSU2_TR(0x5cd271);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5cd274:{NFSU2_TR(0x5cd274);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd265u);}goto L5cd265;}}
}
B5cd276:L5cd276:{c.instructions+=7;NFSU2_TR(0x5cd276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd277:{NFSU2_TR(0x5cd277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd278:{NFSU2_TR(0x5cd278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd279:{NFSU2_TR(0x5cd279);
w4(R+0,u32(0x1ull));
}
B5cd27e:{NFSU2_TR(0x5cd27e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd27f:{NFSU2_TR(0x5cd27f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x25cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x25cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x25cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cd285:{NFSU2_TR(0x5cd285);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd288:L5cd288:{c.instructions+=9;NFSU2_TR(0x5cd288);
__builtin_memmove((R+0),gp(0x8709ec),4);
}
B5cd28d:{NFSU2_TR(0x5cd28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cd28f:{NFSU2_TR(0x5cd28f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd291:{NFSU2_TR(0x5cd291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5cd298:{NFSU2_TR(0x5cd298);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd299:{NFSU2_TR(0x5cd299);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5cd29c:{NFSU2_TR(0x5cd29c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd29d:{NFSU2_TR(0x5cd29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd29e:{NFSU2_TR(0x5cd29e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd2a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cd2a1:L5cd2a1:{c.instructions+=2;NFSU2_TR(0x5cd2a1);
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
B5cd2a3:{NFSU2_TR(0x5cd2a3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cd31d;}}
}
B5cd2a5:L5cd2a5:{c.instructions+=26;NFSU2_TR(0x5cd2a5);
__builtin_memmove((R+4),gp(0x7babc4),4);
}
B5cd2ab:{NFSU2_TR(0x5cd2ab);
__builtin_memmove((R+8),gp(0x7babc8),4);
}
B5cd2b1:{NFSU2_TR(0x5cd2b1);
__builtin_memmove((R+0),(R+24),4);
}
B5cd2b3:{NFSU2_TR(0x5cd2b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5cd2b6:{NFSU2_TR(0x5cd2b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x870728ull))));
}
B5cd2bb:{NFSU2_TR(0x5cd2bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cd2bd:{NFSU2_TR(0x5cd2bd);
__builtin_memmove((R+4),gp(0x7babcc),4);
}
B5cd2c3:{NFSU2_TR(0x5cd2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd2c6:{NFSU2_TR(0x5cd2c6);
__builtin_memmove((R+8),gp(0x7babd0),4);
}
B5cd2cc:{NFSU2_TR(0x5cd2cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd2cf:{NFSU2_TR(0x5cd2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd2d2:{NFSU2_TR(0x5cd2d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cd2d6:{NFSU2_TR(0x5cd2d6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5cd2dc:{NFSU2_TR(0x5cd2dc);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cd2e4:{NFSU2_TR(0x5cd2e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd2e5:{NFSU2_TR(0x5cd2e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86e5bcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd2ec:{NFSU2_TR(0x5cd2ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f8a8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd2f3:{NFSU2_TR(0x5cd2f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ff88ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd2fa:{NFSU2_TR(0x5cd2fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B5cd305:{NFSU2_TR(0x5cd305);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f86cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd30c:{NFSU2_TR(0x5cd30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd30d:{NFSU2_TR(0x5cd30d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd30e:{NFSU2_TR(0x5cd30e);
w4(R+0,u32(0x1ull));
}
B5cd313:{NFSU2_TR(0x5cd313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd314:{NFSU2_TR(0x5cd314);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x25cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x25cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x25cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cd31a:{NFSU2_TR(0x5cd31a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd31d:L5cd31d:{c.instructions+=5;NFSU2_TR(0x5cd31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cd31f:{NFSU2_TR(0x5cd31f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cd321:{NFSU2_TR(0x5cd321);
u8 U[4];
w4(U+0,u32(0x7bfde0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd326:{NFSU2_TR(0x5cd326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd327:{NFSU2_TR(0x5cd327);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd32aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cd32a:L5cd32a:{c.instructions+=2;NFSU2_TR(0x5cd32a);
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
B5cd32c:{NFSU2_TR(0x5cd32c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5cd357;}}
}
B5cd32e:L5cd32e:{c.instructions+=7;NFSU2_TR(0x5cd32e);
__builtin_memmove((R+4),gp(0x870990),4);
}
B5cd334:{NFSU2_TR(0x5cd334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cd336:{NFSU2_TR(0x5cd336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cd338:{NFSU2_TR(0x5cd338);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd33a:{NFSU2_TR(0x5cd33a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd33b:{NFSU2_TR(0x5cd33b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd33c:{NFSU2_TR(0x5cd33c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd33full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cd33f:L5cd33f:{c.instructions+=2;NFSU2_TR(0x5cd33f);
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
B5cd341:{NFSU2_TR(0x5cd341);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5cd357;}}
}
B5cd343:L5cd343:{c.instructions+=7;NFSU2_TR(0x5cd343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cd345:{NFSU2_TR(0x5cd345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cd347:{NFSU2_TR(0x5cd347);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd349:{NFSU2_TR(0x5cd349);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd34a:{NFSU2_TR(0x5cd34a);
u8 U[4];
w4(U+0,u32(0x5c8660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd34f:{NFSU2_TR(0x5cd34f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd350:{NFSU2_TR(0x5cd350);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd353ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cd353:L5cd353:{c.instructions+=2;NFSU2_TR(0x5cd353);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5cd355:{NFSU2_TR(0x5cd355);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cd373;}}
}
B5cd357:L5cd357:{c.instructions+=3;NFSU2_TR(0x5cd357);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cd35b:{NFSU2_TR(0x5cd35b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd35c:{NFSU2_TR(0x5cd35c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd361ull));
TAIL_STATIC(0x5bfa50u,5bf);
}
B5cd361:L5cd361:{c.instructions+=7;NFSU2_TR(0x5cd361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd362:{NFSU2_TR(0x5cd362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd363:{NFSU2_TR(0x5cd363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd364:{NFSU2_TR(0x5cd364);
w4(R+0,u32(0x1ull));
}
B5cd369:{NFSU2_TR(0x5cd369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd36a:{NFSU2_TR(0x5cd36a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x25cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x25cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x25cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cd370:{NFSU2_TR(0x5cd370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd373:L5cd373:{c.instructions+=14;NFSU2_TR(0x5cd373);
__builtin_memmove((R+4),(R+24),4);
}
B5cd375:{NFSU2_TR(0x5cd375);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5cd378:{NFSU2_TR(0x5cd378);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cd37b:{NFSU2_TR(0x5cd37b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cd37d:{NFSU2_TR(0x5cd37d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x870728ull))));
}
B5cd383:{NFSU2_TR(0x5cd383);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5cd385:{NFSU2_TR(0x5cd385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cd388:{NFSU2_TR(0x5cd388);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd38b:{NFSU2_TR(0x5cd38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cd38e:{NFSU2_TR(0x5cd38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd391:{NFSU2_TR(0x5cd391);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cd394:{NFSU2_TR(0x5cd394);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd395:{NFSU2_TR(0x5cd395);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd398:{NFSU2_TR(0x5cd398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd39dull));
TAIL_STATIC(0x5bfb60u,5bf);
}
B5cd39d:L5cd39d:{c.instructions+=3;NFSU2_TR(0x5cd39d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cd3a0:{NFSU2_TR(0x5cd3a0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cd3a3:{NFSU2_TR(0x5cd3a3);
if(r1(R+518)){{goto L5cd3bd;}}
}
B5cd3a5:L5cd3a5:{c.instructions+=2;NFSU2_TR(0x5cd3a5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cd3a6:{NFSU2_TR(0x5cd3a6);
if(r1(R+518)){{goto L5cd3b4;}}
}
B5cd3a8:L5cd3a8:{c.instructions+=2;NFSU2_TR(0x5cd3a8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cd3a9:{NFSU2_TR(0x5cd3a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd3c4;}}
}
B5cd3ab:L5cd3ab:{c.instructions+=2;NFSU2_TR(0x5cd3ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86e5bcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd3b2:{NFSU2_TR(0x5cd3b2);
{goto L5cd3c4;}
}
B5cd3b4:L5cd3b4:{c.instructions+=2;NFSU2_TR(0x5cd3b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f8a8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd3bb:{NFSU2_TR(0x5cd3bb);
{goto L5cd3c4;}
}
B5cd3bd:L5cd3bd:{c.instructions+=1;NFSU2_TR(0x5cd3bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ff88ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd3c4:L5cd3c4:{c.instructions+=3;NFSU2_TR(0x5cd3c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86e5bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cd3ca:{NFSU2_TR(0x5cd3ca);
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
B5cd3cc:{NFSU2_TR(0x5cd3cc);
if(r1(R+518)){{goto L5cd3ef;}}
}
B5cd3ce:L5cd3ce:{c.instructions+=7;NFSU2_TR(0x5cd3ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5cd3d0:{NFSU2_TR(0x5cd3d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cd3d2:{NFSU2_TR(0x5cd3d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cd3d6:{NFSU2_TR(0x5cd3d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd3d7:{NFSU2_TR(0x5cd3d7);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd3d9:{NFSU2_TR(0x5cd3d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd3da:{NFSU2_TR(0x5cd3da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd3ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cd3dd:L5cd3dd:{c.instructions+=2;NFSU2_TR(0x5cd3dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5cd3df:{NFSU2_TR(0x5cd3df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cd3ef;}}
}
B5cd3e1:L5cd3e1:{c.instructions+=3;NFSU2_TR(0x5cd3e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd3e2:{NFSU2_TR(0x5cd3e2);
u8 U[4];
w4(U+0,u32(0x7a4078ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd3e7:{NFSU2_TR(0x5cd3e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd3ecull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5cd3ec:L5cd3ec:{c.instructions+=1;NFSU2_TR(0x5cd3ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cd3ef:L5cd3ef:{c.instructions+=7;NFSU2_TR(0x5cd3ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd3f0:{NFSU2_TR(0x5cd3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd3f1:{NFSU2_TR(0x5cd3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd3f2:{NFSU2_TR(0x5cd3f2);
w4(R+0,u32(0x1ull));
}
B5cd3f7:{NFSU2_TR(0x5cd3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd3f8:{NFSU2_TR(0x5cd3f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x25cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x25cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x25cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cd3fe:{NFSU2_TR(0x5cd3fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd410:L5cd410:{c.instructions+=11;NFSU2_TR(0x5cd410);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd412:{NFSU2_TR(0x5cd412);
u8 U[4];
w4(U+0,u32(0x7791e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd417:{NFSU2_TR(0x5cd417);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cd41d:{NFSU2_TR(0x5cd41d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd41e:{NFSU2_TR(0x5cd41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd425:{NFSU2_TR(0x5cd425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd426:{NFSU2_TR(0x5cd426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd427:{NFSU2_TR(0x5cd427);
__builtin_memmove((R+24),(R+4),4);
}
B5cd429:{NFSU2_TR(0x5cd429);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd42d:{NFSU2_TR(0x5cd42d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cd435:{NFSU2_TR(0x5cd435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd43aull));
TAIL_STATIC(0x5ca3a0u,5ca);
}
B5cd43a:L5cd43a:{c.instructions+=3;NFSU2_TR(0x5cd43a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2588ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cd440:{NFSU2_TR(0x5cd440);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd445:{NFSU2_TR(0x5cd445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd44aull));
TAIL_STATIC(0x5c01c0u,5c0);
}
B5cd44a:L5cd44a:{c.instructions+=3;NFSU2_TR(0x5cd44a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2538ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cd450:{NFSU2_TR(0x5cd450);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd455:{NFSU2_TR(0x5cd455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd45aull));
TAIL_STATIC(0x5c01c0u,5c0);
}
B5cd45a:L5cd45a:{c.instructions+=3;NFSU2_TR(0x5cd45a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cd460:{NFSU2_TR(0x5cd460);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd465:{NFSU2_TR(0x5cd465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd46aull));
TAIL_STATIC(0x5c01c0u,5c0);
}
B5cd46a:L5cd46a:{c.instructions+=3;NFSU2_TR(0x5cd46a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2498ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cd470:{NFSU2_TR(0x5cd470);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd475:{NFSU2_TR(0x5cd475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd47aull));
TAIL_STATIC(0x5c01c0u,5c0);
}
B5cd47a:L5cd47a:{c.instructions+=3;NFSU2_TR(0x5cd47a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2448ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cd480:{NFSU2_TR(0x5cd480);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cd485:{NFSU2_TR(0x5cd485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd48aull));
TAIL_STATIC(0x5c01c0u,5c0);
}
B5cd48a:L5cd48a:{c.instructions+=3;NFSU2_TR(0x5cd48a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2224ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cd490:{NFSU2_TR(0x5cd490);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cd498:{NFSU2_TR(0x5cd498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd49dull));
TAIL_STATIC(0x5bfbb0u,5bf);
}
B5cd49d:L5cd49d:{c.instructions+=5;NFSU2_TR(0x5cd49d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cd4a1:{NFSU2_TR(0x5cd4a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd4a2:{NFSU2_TR(0x5cd4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd4a9:{NFSU2_TR(0x5cd4a9);
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
B5cd4ac:{NFSU2_TR(0x5cd4ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd4b0:L5cd4b0:{c.instructions+=5;NFSU2_TR(0x5cd4b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cd4b4:{NFSU2_TR(0x5cd4b4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cd4b7:{NFSU2_TR(0x5cd4b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4b8:{NFSU2_TR(0x5cd4b8);
__builtin_memmove((R+24),(R+4),4);
}
B5cd4ba:{NFSU2_TR(0x5cd4ba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5cd81c;}}
}
B5cd4c0:L5cd4c0:{c.instructions+=4;NFSU2_TR(0x5cd4c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4c1:{NFSU2_TR(0x5cd4c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4c2:{NFSU2_TR(0x5cd4c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4c3:{NFSU2_TR(0x5cd4c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5cd820ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cd4ca:L5cd4ca:{c.instructions+=6;NFSU2_TR(0x5cd4ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd4ce:{NFSU2_TR(0x5cd4ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4d0:{NFSU2_TR(0x5cd4d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2498ull))));
}
B5cd4d6:{NFSU2_TR(0x5cd4d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4d7:{NFSU2_TR(0x5cd4d7);
__builtin_memmove((R+4),(R+24),4);
}
B5cd4d9:{NFSU2_TR(0x5cd4d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd4deull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd4de:L5cd4de:{c.instructions+=2;NFSU2_TR(0x5cd4de);
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
B5cd4e0:{NFSU2_TR(0x5cd4e0);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd4e6:L5cd4e6:{c.instructions+=6;NFSU2_TR(0x5cd4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd4ed:{NFSU2_TR(0x5cd4ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4ee:{NFSU2_TR(0x5cd4ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4f0:{NFSU2_TR(0x5cd4f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd4f1:{NFSU2_TR(0x5cd4f1);
__builtin_memmove((R+4),(R+24),4);
}
B5cd4f3:{NFSU2_TR(0x5cd4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd4f8ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd4f8:L5cd4f8:{c.instructions+=5;NFSU2_TR(0x5cd4f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd4f9:{NFSU2_TR(0x5cd4f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd4fa:{NFSU2_TR(0x5cd4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd4fb:{NFSU2_TR(0x5cd4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd4fc:{NFSU2_TR(0x5cd4fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd4ff:L5cd4ff:{c.instructions+=1;NFSU2_TR(0x5cd4ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24e8ull))));
}
B5cd505:L5cd505:{c.instructions+=5;NFSU2_TR(0x5cd505);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd509:{NFSU2_TR(0x5cd509);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd50b:{NFSU2_TR(0x5cd50b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd50c:{NFSU2_TR(0x5cd50c);
__builtin_memmove((R+4),(R+24),4);
}
B5cd50e:{NFSU2_TR(0x5cd50e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd513ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd513:L5cd513:{c.instructions+=2;NFSU2_TR(0x5cd513);
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
B5cd515:{NFSU2_TR(0x5cd515);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd51b:L5cd51b:{c.instructions+=6;NFSU2_TR(0x5cd51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cd522:{NFSU2_TR(0x5cd522);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd523:{NFSU2_TR(0x5cd523);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd525:{NFSU2_TR(0x5cd525);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd526:{NFSU2_TR(0x5cd526);
__builtin_memmove((R+4),(R+24),4);
}
B5cd528:{NFSU2_TR(0x5cd528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd52dull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd52d:L5cd52d:{c.instructions+=5;NFSU2_TR(0x5cd52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd52e:{NFSU2_TR(0x5cd52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd52f:{NFSU2_TR(0x5cd52f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd530:{NFSU2_TR(0x5cd530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd531:{NFSU2_TR(0x5cd531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd534:L5cd534:{c.instructions+=7;NFSU2_TR(0x5cd534);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd538:{NFSU2_TR(0x5cd538);
w4(R+12,u32(0x1ull));
}
B5cd53d:{NFSU2_TR(0x5cd53d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd53e:{NFSU2_TR(0x5cd53e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2498ull))));
}
B5cd544:{NFSU2_TR(0x5cd544);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd545:{NFSU2_TR(0x5cd545);
__builtin_memmove((R+4),(R+24),4);
}
B5cd547:{NFSU2_TR(0x5cd547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd54cull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd54c:L5cd54c:{c.instructions+=2;NFSU2_TR(0x5cd54c);
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
B5cd54e:{NFSU2_TR(0x5cd54e);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd554:L5cd554:{c.instructions+=6;NFSU2_TR(0x5cd554);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5cd55b:{NFSU2_TR(0x5cd55b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd55c:{NFSU2_TR(0x5cd55c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd55d:{NFSU2_TR(0x5cd55d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd55e:{NFSU2_TR(0x5cd55e);
__builtin_memmove((R+4),(R+24),4);
}
B5cd560:{NFSU2_TR(0x5cd560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd565ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd565:L5cd565:{c.instructions+=5;NFSU2_TR(0x5cd565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd566:{NFSU2_TR(0x5cd566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd567:{NFSU2_TR(0x5cd567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd568:{NFSU2_TR(0x5cd568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd569:{NFSU2_TR(0x5cd569);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd56c:L5cd56c:{c.instructions+=7;NFSU2_TR(0x5cd56c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd570:{NFSU2_TR(0x5cd570);
w4(R+12,u32(0x1ull));
}
B5cd575:{NFSU2_TR(0x5cd575);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd576:{NFSU2_TR(0x5cd576);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24e8ull))));
}
B5cd57c:{NFSU2_TR(0x5cd57c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd57d:{NFSU2_TR(0x5cd57d);
__builtin_memmove((R+4),(R+24),4);
}
B5cd57f:{NFSU2_TR(0x5cd57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd584ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd584:L5cd584:{c.instructions+=2;NFSU2_TR(0x5cd584);
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
B5cd586:{NFSU2_TR(0x5cd586);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd58c:L5cd58c:{c.instructions+=6;NFSU2_TR(0x5cd58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd593:{NFSU2_TR(0x5cd593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd594:{NFSU2_TR(0x5cd594);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd595:{NFSU2_TR(0x5cd595);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd596:{NFSU2_TR(0x5cd596);
__builtin_memmove((R+4),(R+24),4);
}
B5cd598:{NFSU2_TR(0x5cd598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd59dull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd59d:L5cd59d:{c.instructions+=5;NFSU2_TR(0x5cd59d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd59e:{NFSU2_TR(0x5cd59e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd59f:{NFSU2_TR(0x5cd59f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd5a0:{NFSU2_TR(0x5cd5a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd5a1:{NFSU2_TR(0x5cd5a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd5a4:L5cd5a4:{c.instructions+=2;NFSU2_TR(0x5cd5a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2538ull))));
}
B5cd5aa:{NFSU2_TR(0x5cd5aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd505u);}goto L5cd505;}
}
B5cd5af:L5cd5af:{c.instructions+=7;NFSU2_TR(0x5cd5af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd5b3:{NFSU2_TR(0x5cd5b3);
w4(R+12,u32(0x1ull));
}
B5cd5b8:{NFSU2_TR(0x5cd5b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd5b9:{NFSU2_TR(0x5cd5b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2538ull))));
}
B5cd5bf:{NFSU2_TR(0x5cd5bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd5c0:{NFSU2_TR(0x5cd5c0);
__builtin_memmove((R+4),(R+24),4);
}
B5cd5c2:{NFSU2_TR(0x5cd5c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd5c7ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd5c7:L5cd5c7:{c.instructions+=2;NFSU2_TR(0x5cd5c7);
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
B5cd5c9:{NFSU2_TR(0x5cd5c9);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd5cf:L5cd5cf:{c.instructions+=6;NFSU2_TR(0x5cd5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5cd5d6:{NFSU2_TR(0x5cd5d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd5d7:{NFSU2_TR(0x5cd5d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd5d8:{NFSU2_TR(0x5cd5d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd5d9:{NFSU2_TR(0x5cd5d9);
__builtin_memmove((R+4),(R+24),4);
}
B5cd5db:{NFSU2_TR(0x5cd5db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd5e0ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd5e0:L5cd5e0:{c.instructions+=5;NFSU2_TR(0x5cd5e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd5e1:{NFSU2_TR(0x5cd5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd5e2:{NFSU2_TR(0x5cd5e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd5e3:{NFSU2_TR(0x5cd5e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd5e4:{NFSU2_TR(0x5cd5e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd5e7:L5cd5e7:{c.instructions+=6;NFSU2_TR(0x5cd5e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd5eb:{NFSU2_TR(0x5cd5eb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd5ed:{NFSU2_TR(0x5cd5ed);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2538ull))));
}
B5cd5f3:{NFSU2_TR(0x5cd5f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd5f4:{NFSU2_TR(0x5cd5f4);
__builtin_memmove((R+4),(R+24),4);
}
B5cd5f6:{NFSU2_TR(0x5cd5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd5fbull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd5fb:L5cd5fb:{c.instructions+=2;NFSU2_TR(0x5cd5fb);
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
B5cd5fd:{NFSU2_TR(0x5cd5fd);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd603:L5cd603:{c.instructions+=6;NFSU2_TR(0x5cd603);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd60a:{NFSU2_TR(0x5cd60a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd60b:{NFSU2_TR(0x5cd60b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd60d:{NFSU2_TR(0x5cd60d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd60e:{NFSU2_TR(0x5cd60e);
__builtin_memmove((R+4),(R+24),4);
}
B5cd610:{NFSU2_TR(0x5cd610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd615ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd615:L5cd615:{c.instructions+=5;NFSU2_TR(0x5cd615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd616:{NFSU2_TR(0x5cd616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd617:{NFSU2_TR(0x5cd617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd618:{NFSU2_TR(0x5cd618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd619:{NFSU2_TR(0x5cd619);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd61c:L5cd61c:{c.instructions+=6;NFSU2_TR(0x5cd61c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd620:{NFSU2_TR(0x5cd620);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd622:{NFSU2_TR(0x5cd622);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2498ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd628:{NFSU2_TR(0x5cd628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd629:{NFSU2_TR(0x5cd629);
__builtin_memmove((R+4),(R+12),4);
}
B5cd62b:{NFSU2_TR(0x5cd62b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd630ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd630:L5cd630:{c.instructions+=2;NFSU2_TR(0x5cd630);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cd632:{NFSU2_TR(0x5cd632);
if(r1(R+518)){{goto L5cd646;}}
}
B5cd634:L5cd634:{c.instructions+=6;NFSU2_TR(0x5cd634);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cd63b:{NFSU2_TR(0x5cd63b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd63c:{NFSU2_TR(0x5cd63c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd63e:{NFSU2_TR(0x5cd63e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd63f:{NFSU2_TR(0x5cd63f);
__builtin_memmove((R+4),(R+12),4);
}
B5cd641:{NFSU2_TR(0x5cd641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd646ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd646:L5cd646:{c.instructions+=4;NFSU2_TR(0x5cd646);
u8 U[13];
w4(U+0,u32(u32(u32(0x25d8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5cd64d:{NFSU2_TR(0x5cd64d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cd64f:{NFSU2_TR(0x5cd64f);
w4(R+12,u32(0x1ull));
}
B5cd654:{NFSU2_TR(0x5cd654);
if(r1(R+518)){{goto L5cd675;}}
}
B5cd656:L5cd656:{c.instructions+=5;NFSU2_TR(0x5cd656);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5cd65d:{NFSU2_TR(0x5cd65d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd65e:{NFSU2_TR(0x5cd65e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd65f:{NFSU2_TR(0x5cd65f);
__builtin_memmove((R+4),(R+24),4);
}
B5cd661:{NFSU2_TR(0x5cd661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd666ull));
TAIL_STATIC(0x5c9590u,5c9);
}
B5cd666:L5cd666:{c.instructions+=2;NFSU2_TR(0x5cd666);
u8 U[13];
w4(U+0,u32(u32(u32(0x2499ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5cd66d:{NFSU2_TR(0x5cd66d);
u8 U[13];
w4(U+0,u32(u32(u32(0x25d8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cd675:L5cd675:{c.instructions+=4;NFSU2_TR(0x5cd675);
u8 U[13];
w4(U+0,u32(u32(u32(0x25daull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5cd67c:{NFSU2_TR(0x5cd67c);
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
B5cd67e:{NFSU2_TR(0x5cd67e);
u8 U[12];
w4(U+0,u32(u32(u32(0x25daull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5cd685:{NFSU2_TR(0x5cd685);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd68b:L5cd68b:{c.instructions+=12;NFSU2_TR(0x5cd68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd68e:{NFSU2_TR(0x5cd68e);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ba8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cd695:{NFSU2_TR(0x5cd695);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd698:{NFSU2_TR(0x5cd698);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd699:{NFSU2_TR(0x5cd699);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5cd6a0:{NFSU2_TR(0x5cd6a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5cd6a3:{NFSU2_TR(0x5cd6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cd6a9:{NFSU2_TR(0x5cd6a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6aa:{NFSU2_TR(0x5cd6aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6ab:{NFSU2_TR(0x5cd6ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6ac:{NFSU2_TR(0x5cd6ac);
__builtin_memmove((R+4),(R+24),4);
}
B5cd6ae:{NFSU2_TR(0x5cd6ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd6b3ull));
TAIL_STATIC(0x5c9150u,5c9);
}
B5cd6b3:L5cd6b3:{c.instructions+=7;NFSU2_TR(0x5cd6b3);
u8 U[13];
w4(U+0,u32(u32(u32(0x2498ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5cd6ba:{NFSU2_TR(0x5cd6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd6bb:{NFSU2_TR(0x5cd6bb);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B5cd6bf:{NFSU2_TR(0x5cd6bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd6c0:{NFSU2_TR(0x5cd6c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd6c1:{NFSU2_TR(0x5cd6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd6c2:{NFSU2_TR(0x5cd6c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd6c5:L5cd6c5:{c.instructions+=6;NFSU2_TR(0x5cd6c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd6c9:{NFSU2_TR(0x5cd6c9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6cb:{NFSU2_TR(0x5cd6cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2538ull))));
}
B5cd6d1:{NFSU2_TR(0x5cd6d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6d2:{NFSU2_TR(0x5cd6d2);
__builtin_memmove((R+4),(R+24),4);
}
B5cd6d4:{NFSU2_TR(0x5cd6d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd6d9ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd6d9:L5cd6d9:{c.instructions+=2;NFSU2_TR(0x5cd6d9);
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
B5cd6db:{NFSU2_TR(0x5cd6db);
if(r1(R+518)){{goto L5cd819;}}
}
B5cd6e1:L5cd6e1:{c.instructions+=6;NFSU2_TR(0x5cd6e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd6e8:{NFSU2_TR(0x5cd6e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6e9:{NFSU2_TR(0x5cd6e9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6eb:{NFSU2_TR(0x5cd6eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd6ec:{NFSU2_TR(0x5cd6ec);
__builtin_memmove((R+4),(R+24),4);
}
B5cd6ee:{NFSU2_TR(0x5cd6ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd6f3ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd6f3:L5cd6f3:{c.instructions+=5;NFSU2_TR(0x5cd6f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd6f4:{NFSU2_TR(0x5cd6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd6f5:{NFSU2_TR(0x5cd6f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd6f6:{NFSU2_TR(0x5cd6f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd6f7:{NFSU2_TR(0x5cd6f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd6fa:L5cd6fa:{c.instructions+=5;NFSU2_TR(0x5cd6fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cd6fe:{NFSU2_TR(0x5cd6fe);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5cd705:{NFSU2_TR(0x5cd705);
w4(R+12,u32(0x1ull));
}
B5cd70a:{NFSU2_TR(0x5cd70a);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cd70c:{NFSU2_TR(0x5cd70c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd819;}}
}
B5cd712:L5cd712:{c.instructions+=7;NFSU2_TR(0x5cd712);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cd715:{NFSU2_TR(0x5cd715);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5cd718:{NFSU2_TR(0x5cd718);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25dcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cd71e:{NFSU2_TR(0x5cd71e);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cd726:{NFSU2_TR(0x5cd726);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5cd728:{NFSU2_TR(0x5cd728);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd72c:{NFSU2_TR(0x5cd72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd756;}}
}
B5cd72e:L5cd72e:{c.instructions+=12;NFSU2_TR(0x5cd72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5cd731:{NFSU2_TR(0x5cd731);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ba8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cd738:{NFSU2_TR(0x5cd738);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd73b:{NFSU2_TR(0x5cd73b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd73c:{NFSU2_TR(0x5cd73c);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5cd743:{NFSU2_TR(0x5cd743);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5cd746:{NFSU2_TR(0x5cd746);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cd74c:{NFSU2_TR(0x5cd74c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd74d:{NFSU2_TR(0x5cd74d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd74e:{NFSU2_TR(0x5cd74e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd74f:{NFSU2_TR(0x5cd74f);
__builtin_memmove((R+4),(R+24),4);
}
B5cd751:{NFSU2_TR(0x5cd751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd756ull));
TAIL_STATIC(0x5c9150u,5c9);
}
B5cd756:L5cd756:{c.instructions+=2;NFSU2_TR(0x5cd756);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25ddull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cd75c:{NFSU2_TR(0x5cd75c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd776;}}
}
B5cd75e:L5cd75e:{c.instructions+=7;NFSU2_TR(0x5cd75e);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bbcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5cd765:{NFSU2_TR(0x5cd765);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bb8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cd76c:{NFSU2_TR(0x5cd76c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd76d:{NFSU2_TR(0x5cd76d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd76e:{NFSU2_TR(0x5cd76e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd76f:{NFSU2_TR(0x5cd76f);
__builtin_memmove((R+4),(R+24),4);
}
B5cd771:{NFSU2_TR(0x5cd771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd776ull));
TAIL_STATIC(0x5c9550u,5c9);
}
B5cd776:L5cd776:{c.instructions+=2;NFSU2_TR(0x5cd776);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25deull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cd77c:{NFSU2_TR(0x5cd77c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd78e;}}
}
B5cd77e:L5cd77e:{c.instructions+=5;NFSU2_TR(0x5cd77e);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5cd785:{NFSU2_TR(0x5cd785);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd786:{NFSU2_TR(0x5cd786);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd787:{NFSU2_TR(0x5cd787);
__builtin_memmove((R+4),(R+24),4);
}
B5cd789:{NFSU2_TR(0x5cd789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd78eull));
TAIL_STATIC(0x5c9590u,5c9);
}
B5cd78e:L5cd78e:{c.instructions+=2;NFSU2_TR(0x5cd78e);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25e1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cd794:{NFSU2_TR(0x5cd794);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd7a6;}}
}
B5cd796:L5cd796:{c.instructions+=5;NFSU2_TR(0x5cd796);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5cd79d:{NFSU2_TR(0x5cd79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd79e:{NFSU2_TR(0x5cd79e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd79f:{NFSU2_TR(0x5cd79f);
__builtin_memmove((R+4),(R+24),4);
}
B5cd7a1:{NFSU2_TR(0x5cd7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd7a6ull));
TAIL_STATIC(0x5c99d0u,5c9);
}
B5cd7a6:L5cd7a6:{c.instructions+=2;NFSU2_TR(0x5cd7a6);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25e2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cd7ac:{NFSU2_TR(0x5cd7ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd7be;}}
}
B5cd7ae:L5cd7ae:{c.instructions+=5;NFSU2_TR(0x5cd7ae);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cd7b5:{NFSU2_TR(0x5cd7b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd7b6:{NFSU2_TR(0x5cd7b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd7b7:{NFSU2_TR(0x5cd7b7);
__builtin_memmove((R+4),(R+24),4);
}
B5cd7b9:{NFSU2_TR(0x5cd7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd7beull));
TAIL_STATIC(0x5c9bb0u,5c9);
}
B5cd7be:L5cd7be:{c.instructions+=2;NFSU2_TR(0x5cd7be);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25e3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cd7c4:{NFSU2_TR(0x5cd7c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd7d6;}}
}
B5cd7c6:L5cd7c6:{c.instructions+=5;NFSU2_TR(0x5cd7c6);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5cd7cd:{NFSU2_TR(0x5cd7cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd7ce:{NFSU2_TR(0x5cd7ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd7cf:{NFSU2_TR(0x5cd7cf);
__builtin_memmove((R+4),(R+24),4);
}
B5cd7d1:{NFSU2_TR(0x5cd7d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd7d6ull));
TAIL_STATIC(0x5c9d90u,5c9);
}
B5cd7d6:L5cd7d6:{c.instructions+=3;NFSU2_TR(0x5cd7d6);
u8 U[12];
w4(U+0,u32(u32(u32(0x12f2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5cd7dd:{NFSU2_TR(0x5cd7dd);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(r1(R+12))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B5cd7e0:{NFSU2_TR(0x5cd7e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cd80a;}}
}
B5cd7e2:L5cd7e2:{c.instructions+=12;NFSU2_TR(0x5cd7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cd7e5:{NFSU2_TR(0x5cd7e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c08ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5cd7ec:{NFSU2_TR(0x5cd7ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd7ef:{NFSU2_TR(0x5cd7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cd7f5:{NFSU2_TR(0x5cd7f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd7f6:{NFSU2_TR(0x5cd7f6);
u8 U[12];
w4(U+0,u32(u32(u32(0xb01ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5cd7fd:{NFSU2_TR(0x5cd7fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5cd800:{NFSU2_TR(0x5cd800);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd801:{NFSU2_TR(0x5cd801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd802:{NFSU2_TR(0x5cd802);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd803:{NFSU2_TR(0x5cd803);
__builtin_memmove((R+4),(R+24),4);
}
B5cd805:{NFSU2_TR(0x5cd805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd80aull));
TAIL_STATIC(0x5c9fd0u,5c9);
}
B5cd80a:L5cd80a:{c.instructions+=5;NFSU2_TR(0x5cd80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cd80e:{NFSU2_TR(0x5cd80e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cd810:{NFSU2_TR(0x5cd810);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cd812:{NFSU2_TR(0x5cd812);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cd815:{NFSU2_TR(0x5cd815);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5cd819:L5cd819:{c.instructions+=3;NFSU2_TR(0x5cd819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd81a:{NFSU2_TR(0x5cd81a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd81b:{NFSU2_TR(0x5cd81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd81c:L5cd81c:{c.instructions+=2;NFSU2_TR(0x5cd81c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd81d:{NFSU2_TR(0x5cd81d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd850:L5cd850:{c.instructions+=5;NFSU2_TR(0x5cd850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd851:{NFSU2_TR(0x5cd851);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cd855:{NFSU2_TR(0x5cd855);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cd85c:{NFSU2_TR(0x5cd85c);
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
B5cd85e:{NFSU2_TR(0x5cd85e);
if(r1(R+518)){{goto L5cd888;}}
}
B5cd860:L5cd860:{c.instructions+=6;NFSU2_TR(0x5cd860);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd861:{NFSU2_TR(0x5cd861);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24e8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd867:{NFSU2_TR(0x5cd867);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd869:{NFSU2_TR(0x5cd869);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd86a:{NFSU2_TR(0x5cd86a);
__builtin_memmove((R+4),(R+28),4);
}
B5cd86c:{NFSU2_TR(0x5cd86c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd871ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd871:L5cd871:{c.instructions+=2;NFSU2_TR(0x5cd871);
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
B5cd873:{NFSU2_TR(0x5cd873);
if(r1(R+518)){{goto L5cd887;}}
}
B5cd875:L5cd875:{c.instructions+=6;NFSU2_TR(0x5cd875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd87c:{NFSU2_TR(0x5cd87c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd87d:{NFSU2_TR(0x5cd87d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd87f:{NFSU2_TR(0x5cd87f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd880:{NFSU2_TR(0x5cd880);
__builtin_memmove((R+4),(R+28),4);
}
B5cd882:{NFSU2_TR(0x5cd882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd887ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd887:L5cd887:{c.instructions+=1;NFSU2_TR(0x5cd887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd888:L5cd888:{c.instructions+=2;NFSU2_TR(0x5cd888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd889:{NFSU2_TR(0x5cd889);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd890:L5cd890:{c.instructions+=5;NFSU2_TR(0x5cd890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd891:{NFSU2_TR(0x5cd891);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cd895:{NFSU2_TR(0x5cd895);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cd89c:{NFSU2_TR(0x5cd89c);
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
B5cd89e:{NFSU2_TR(0x5cd89e);
if(r1(R+518)){{goto L5cd8c8;}}
}
B5cd8a0:L5cd8a0:{c.instructions+=6;NFSU2_TR(0x5cd8a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8a1:{NFSU2_TR(0x5cd8a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2538ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd8a7:{NFSU2_TR(0x5cd8a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8a9:{NFSU2_TR(0x5cd8a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8aa:{NFSU2_TR(0x5cd8aa);
__builtin_memmove((R+4),(R+28),4);
}
B5cd8ac:{NFSU2_TR(0x5cd8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd8b1ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd8b1:L5cd8b1:{c.instructions+=2;NFSU2_TR(0x5cd8b1);
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
B5cd8b3:{NFSU2_TR(0x5cd8b3);
if(r1(R+518)){{goto L5cd8c7;}}
}
B5cd8b5:L5cd8b5:{c.instructions+=6;NFSU2_TR(0x5cd8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd8bc:{NFSU2_TR(0x5cd8bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8bd:{NFSU2_TR(0x5cd8bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8bf:{NFSU2_TR(0x5cd8bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8c0:{NFSU2_TR(0x5cd8c0);
__builtin_memmove((R+4),(R+28),4);
}
B5cd8c2:{NFSU2_TR(0x5cd8c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd8c7ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd8c7:L5cd8c7:{c.instructions+=1;NFSU2_TR(0x5cd8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd8c8:L5cd8c8:{c.instructions+=2;NFSU2_TR(0x5cd8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd8c9:{NFSU2_TR(0x5cd8c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd8d0:L5cd8d0:{c.instructions+=5;NFSU2_TR(0x5cd8d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8d1:{NFSU2_TR(0x5cd8d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cd8d5:{NFSU2_TR(0x5cd8d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cd8dc:{NFSU2_TR(0x5cd8dc);
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
B5cd8de:{NFSU2_TR(0x5cd8de);
if(r1(R+518)){{goto L5cd908;}}
}
B5cd8e0:L5cd8e0:{c.instructions+=6;NFSU2_TR(0x5cd8e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8e1:{NFSU2_TR(0x5cd8e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2538ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd8e7:{NFSU2_TR(0x5cd8e7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8e9:{NFSU2_TR(0x5cd8e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8ea:{NFSU2_TR(0x5cd8ea);
__builtin_memmove((R+4),(R+28),4);
}
B5cd8ec:{NFSU2_TR(0x5cd8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd8f1ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd8f1:L5cd8f1:{c.instructions+=2;NFSU2_TR(0x5cd8f1);
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
B5cd8f3:{NFSU2_TR(0x5cd8f3);
if(r1(R+518)){{goto L5cd907;}}
}
B5cd8f5:L5cd8f5:{c.instructions+=6;NFSU2_TR(0x5cd8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd8fc:{NFSU2_TR(0x5cd8fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8fd:{NFSU2_TR(0x5cd8fd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd8ff:{NFSU2_TR(0x5cd8ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd900:{NFSU2_TR(0x5cd900);
__builtin_memmove((R+4),(R+28),4);
}
B5cd902:{NFSU2_TR(0x5cd902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd907ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd907:L5cd907:{c.instructions+=1;NFSU2_TR(0x5cd907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd908:L5cd908:{c.instructions+=2;NFSU2_TR(0x5cd908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd909:{NFSU2_TR(0x5cd909);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd910:L5cd910:{c.instructions+=7;NFSU2_TR(0x5cd910);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd911:{NFSU2_TR(0x5cd911);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cd915:{NFSU2_TR(0x5cd915);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cd91c:{NFSU2_TR(0x5cd91c);
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
B5cd91e:{NFSU2_TR(0x5cd91e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd91f:{NFSU2_TR(0x5cd91f);
__builtin_memmove((R+28),(R+4),4);
}
B5cd921:{NFSU2_TR(0x5cd921);
if(r1(R+518)){{goto L5cd9c2;}}
}
B5cd927:L5cd927:{c.instructions+=7;NFSU2_TR(0x5cd927);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd928:{NFSU2_TR(0x5cd928);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd929:{NFSU2_TR(0x5cd929);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd92b:{NFSU2_TR(0x5cd92b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2498ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd931:{NFSU2_TR(0x5cd931);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd932:{NFSU2_TR(0x5cd932);
__builtin_memmove((R+4),(R+12),4);
}
B5cd934:{NFSU2_TR(0x5cd934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd939ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd939:L5cd939:{c.instructions+=2;NFSU2_TR(0x5cd939);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cd93b:{NFSU2_TR(0x5cd93b);
if(r1(R+518)){{goto L5cd94f;}}
}
B5cd93d:L5cd93d:{c.instructions+=6;NFSU2_TR(0x5cd93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd944:{NFSU2_TR(0x5cd944);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd945:{NFSU2_TR(0x5cd945);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd947:{NFSU2_TR(0x5cd947);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd948:{NFSU2_TR(0x5cd948);
__builtin_memmove((R+4),(R+12),4);
}
B5cd94a:{NFSU2_TR(0x5cd94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd94full));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cd94f:L5cd94f:{c.instructions+=4;NFSU2_TR(0x5cd94f);
u8 U[13];
w4(U+0,u32(u32(u32(0x25d8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5cd956:{NFSU2_TR(0x5cd956);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cd958:{NFSU2_TR(0x5cd958);
w1(R+12,u8(0x1ull));
}
B5cd95a:{NFSU2_TR(0x5cd95a);
if(r1(R+518)){{goto L5cd97b;}}
}
B5cd95c:L5cd95c:{c.instructions+=5;NFSU2_TR(0x5cd95c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cd963:{NFSU2_TR(0x5cd963);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd964:{NFSU2_TR(0x5cd964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd965:{NFSU2_TR(0x5cd965);
__builtin_memmove((R+4),(R+28),4);
}
B5cd967:{NFSU2_TR(0x5cd967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd96cull));
TAIL_STATIC(0x5c9590u,5c9);
}
B5cd96c:L5cd96c:{c.instructions+=2;NFSU2_TR(0x5cd96c);
u8 U[13];
w4(U+0,u32(u32(u32(0x2499ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5cd973:{NFSU2_TR(0x5cd973);
u8 U[13];
w4(U+0,u32(u32(u32(0x25d8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cd97b:L5cd97b:{c.instructions+=4;NFSU2_TR(0x5cd97b);
u8 U[13];
w4(U+0,u32(u32(u32(0x25daull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5cd982:{NFSU2_TR(0x5cd982);
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
B5cd984:{NFSU2_TR(0x5cd984);
u8 U[12];
w4(U+0,u32(u32(u32(0x25daull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5cd98b:{NFSU2_TR(0x5cd98b);
if(r1(R+518)){{goto L5cd9c0;}}
}
B5cd98d:L5cd98d:{c.instructions+=12;NFSU2_TR(0x5cd98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5cd990:{NFSU2_TR(0x5cd990);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ba8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cd997:{NFSU2_TR(0x5cd997);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd99a:{NFSU2_TR(0x5cd99a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd99b:{NFSU2_TR(0x5cd99b);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5cd9a2:{NFSU2_TR(0x5cd9a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5cd9a5:{NFSU2_TR(0x5cd9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cd9ab:{NFSU2_TR(0x5cd9ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9ac:{NFSU2_TR(0x5cd9ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9ad:{NFSU2_TR(0x5cd9ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9ae:{NFSU2_TR(0x5cd9ae);
__builtin_memmove((R+4),(R+28),4);
}
B5cd9b0:{NFSU2_TR(0x5cd9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd9b5ull));
TAIL_STATIC(0x5c9150u,5c9);
}
B5cd9b5:L5cd9b5:{c.instructions+=2;NFSU2_TR(0x5cd9b5);
u8 U[13];
w4(U+0,u32(u32(u32(0x2498ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5cd9bc:{NFSU2_TR(0x5cd9bc);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B5cd9c0:L5cd9c0:{c.instructions+=2;NFSU2_TR(0x5cd9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cd9c1:{NFSU2_TR(0x5cd9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cd9c2:L5cd9c2:{c.instructions+=3;NFSU2_TR(0x5cd9c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd9c3:{NFSU2_TR(0x5cd9c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cd9c4:{NFSU2_TR(0x5cd9c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cd9d0:L5cd9d0:{c.instructions+=5;NFSU2_TR(0x5cd9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9d1:{NFSU2_TR(0x5cd9d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cd9d5:{NFSU2_TR(0x5cd9d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cd9dc:{NFSU2_TR(0x5cd9dc);
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
B5cd9de:{NFSU2_TR(0x5cd9de);
if(r1(R+518)){{goto L5cda08;}}
}
B5cd9e0:L5cd9e0:{c.instructions+=6;NFSU2_TR(0x5cd9e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9e1:{NFSU2_TR(0x5cd9e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2538ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cd9e7:{NFSU2_TR(0x5cd9e7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9e9:{NFSU2_TR(0x5cd9e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9ea:{NFSU2_TR(0x5cd9ea);
__builtin_memmove((R+4),(R+28),4);
}
B5cd9ec:{NFSU2_TR(0x5cd9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cd9f1ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cd9f1:L5cd9f1:{c.instructions+=2;NFSU2_TR(0x5cd9f1);
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
B5cd9f3:{NFSU2_TR(0x5cd9f3);
if(r1(R+518)){{goto L5cda07;}}
}
B5cd9f5:L5cd9f5:{c.instructions+=6;NFSU2_TR(0x5cd9f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cd9fc:{NFSU2_TR(0x5cd9fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9fd:{NFSU2_TR(0x5cd9fd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cd9ff:{NFSU2_TR(0x5cd9ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda00:{NFSU2_TR(0x5cda00);
__builtin_memmove((R+4),(R+28),4);
}
B5cda02:{NFSU2_TR(0x5cda02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cda07ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cda07:L5cda07:{c.instructions+=1;NFSU2_TR(0x5cda07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cda08:L5cda08:{c.instructions+=2;NFSU2_TR(0x5cda08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cda09:{NFSU2_TR(0x5cda09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cda10:L5cda10:{c.instructions+=9;NFSU2_TR(0x5cda10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda11:{NFSU2_TR(0x5cda11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda12:{NFSU2_TR(0x5cda12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cda16:{NFSU2_TR(0x5cda16);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cda1d:{NFSU2_TR(0x5cda1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cda1f:{NFSU2_TR(0x5cda1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5cda26:{NFSU2_TR(0x5cda26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda27:{NFSU2_TR(0x5cda27);
__builtin_memmove((R+28),(R+4),4);
}
B5cda29:{NFSU2_TR(0x5cda29);
if(r1(R+518)){{goto L5cdb8e;}}
}
B5cda2f:L5cda2f:{c.instructions+=3;NFSU2_TR(0x5cda2f);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5cda36:{NFSU2_TR(0x5cda36);
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
B5cda38:{NFSU2_TR(0x5cda38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdba6;}}
}
B5cda3e:L5cda3e:{c.instructions+=3;NFSU2_TR(0x5cda3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cda45:{NFSU2_TR(0x5cda45);
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
B5cda47:{NFSU2_TR(0x5cda47);
if(r1(R+518)){{goto L5cdba6;}}
}
B5cda4d:L5cda4d:{c.instructions+=7;NFSU2_TR(0x5cda4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda4e:{NFSU2_TR(0x5cda4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda50:{NFSU2_TR(0x5cda50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2498ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cda56:{NFSU2_TR(0x5cda56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda57:{NFSU2_TR(0x5cda57);
__builtin_memmove((R+4),(R+20),4);
}
B5cda59:{NFSU2_TR(0x5cda59);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cda61:{NFSU2_TR(0x5cda61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cda66ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cda66:L5cda66:{c.instructions+=2;NFSU2_TR(0x5cda66);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cda68:{NFSU2_TR(0x5cda68);
if(r1(R+518)){{goto L5cda9b;}}
}
B5cda6a:L5cda6a:{c.instructions+=3;NFSU2_TR(0x5cda6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cda71:{NFSU2_TR(0x5cda71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cda73:{NFSU2_TR(0x5cda73);
if(r1(R+518)){{goto L5cda90;}}
}
B5cda75:L5cda75:{c.instructions+=4;NFSU2_TR(0x5cda75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda77:{NFSU2_TR(0x5cda77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda78:{NFSU2_TR(0x5cda78);
__builtin_memmove((R+4),(R+20),4);
}
B5cda7a:{NFSU2_TR(0x5cda7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cda7full));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cda7f:L5cda7f:{c.instructions+=2;NFSU2_TR(0x5cda7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cda81:{NFSU2_TR(0x5cda81);
if(r1(R+518)){{goto L5cda90;}}
}
B5cda83:L5cda83:{c.instructions+=5;NFSU2_TR(0x5cda83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda84:{NFSU2_TR(0x5cda84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda86:{NFSU2_TR(0x5cda86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda87:{NFSU2_TR(0x5cda87);
__builtin_memmove((R+4),(R+20),4);
}
B5cda89:{NFSU2_TR(0x5cda89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cda8eull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cda8e:L5cda8e:{c.instructions+=1;NFSU2_TR(0x5cda8e);
__builtin_memmove((R+28),(R+28),4);
}
B5cda90:L5cda90:{c.instructions+=2;NFSU2_TR(0x5cda90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cda93:{NFSU2_TR(0x5cda93);
u8 U[13];
w4(U+0,u32(u32(u32(0x25dcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cda9b:L5cda9b:{c.instructions+=4;NFSU2_TR(0x5cda9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda9d:{NFSU2_TR(0x5cda9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cda9e:{NFSU2_TR(0x5cda9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cdaa4:{NFSU2_TR(0x5cdaa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdaa9ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cdaa9:L5cdaa9:{c.instructions+=2;NFSU2_TR(0x5cdaa9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cdaab:{NFSU2_TR(0x5cdaab);
if(r1(R+518)){{goto L5cdac0;}}
}
B5cdaad:L5cdaad:{c.instructions+=3;NFSU2_TR(0x5cdaad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdaae:{NFSU2_TR(0x5cdaae);
__builtin_memmove((R+4),(R+28),4);
}
B5cdab0:{NFSU2_TR(0x5cdab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdab5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd850u);}goto L5cd850;}
}
B5cdab5:L5cdab5:{c.instructions+=2;NFSU2_TR(0x5cdab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cdab8:{NFSU2_TR(0x5cdab8);
u8 U[13];
w4(U+0,u32(u32(u32(0x25ddull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cdac0:L5cdac0:{c.instructions+=4;NFSU2_TR(0x5cdac0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdac2:{NFSU2_TR(0x5cdac2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdac3:{NFSU2_TR(0x5cdac3);
__builtin_memmove((R+4),(R+20),4);
}
B5cdac5:{NFSU2_TR(0x5cdac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdacaull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cdaca:L5cdaca:{c.instructions+=2;NFSU2_TR(0x5cdaca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cdacc:{NFSU2_TR(0x5cdacc);
if(r1(R+518)){{goto L5cdafd;}}
}
B5cdace:L5cdace:{c.instructions+=3;NFSU2_TR(0x5cdace);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cdad5:{NFSU2_TR(0x5cdad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cdad7:{NFSU2_TR(0x5cdad7);
if(r1(R+518)){{goto L5cdaf2;}}
}
B5cdad9:L5cdad9:{c.instructions+=4;NFSU2_TR(0x5cdad9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdadb:{NFSU2_TR(0x5cdadb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdadc:{NFSU2_TR(0x5cdadc);
__builtin_memmove((R+4),(R+20),4);
}
B5cdade:{NFSU2_TR(0x5cdade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdae3ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cdae3:L5cdae3:{c.instructions+=2;NFSU2_TR(0x5cdae3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cdae5:{NFSU2_TR(0x5cdae5);
if(r1(R+518)){{goto L5cdaf2;}}
}
B5cdae7:L5cdae7:{c.instructions+=5;NFSU2_TR(0x5cdae7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdae8:{NFSU2_TR(0x5cdae8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdaea:{NFSU2_TR(0x5cdaea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdaeb:{NFSU2_TR(0x5cdaeb);
__builtin_memmove((R+4),(R+20),4);
}
B5cdaed:{NFSU2_TR(0x5cdaed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdaf2ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cdaf2:L5cdaf2:{c.instructions+=2;NFSU2_TR(0x5cdaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5cdaf5:{NFSU2_TR(0x5cdaf5);
u8 U[13];
w4(U+0,u32(u32(u32(0x25deull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cdafd:L5cdafd:{c.instructions+=5;NFSU2_TR(0x5cdafd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdaff:{NFSU2_TR(0x5cdaff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2538ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cdb05:{NFSU2_TR(0x5cdb05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb06:{NFSU2_TR(0x5cdb06);
__builtin_memmove((R+4),(R+12),4);
}
B5cdb08:{NFSU2_TR(0x5cdb08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb0dull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cdb0d:L5cdb0d:{c.instructions+=2;NFSU2_TR(0x5cdb0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cdb0f:{NFSU2_TR(0x5cdb0f);
if(r1(R+518)){{goto L5cdb24;}}
}
B5cdb11:L5cdb11:{c.instructions+=3;NFSU2_TR(0x5cdb11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb12:{NFSU2_TR(0x5cdb12);
__builtin_memmove((R+4),(R+28),4);
}
B5cdb14:{NFSU2_TR(0x5cdb14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb19ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd890u);}goto L5cd890;}
}
B5cdb19:L5cdb19:{c.instructions+=2;NFSU2_TR(0x5cdb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cdb1c:{NFSU2_TR(0x5cdb1c);
u8 U[13];
w4(U+0,u32(u32(u32(0x25e1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cdb24:L5cdb24:{c.instructions+=4;NFSU2_TR(0x5cdb24);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb26:{NFSU2_TR(0x5cdb26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb27:{NFSU2_TR(0x5cdb27);
__builtin_memmove((R+4),(R+12),4);
}
B5cdb29:{NFSU2_TR(0x5cdb29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb2eull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cdb2e:L5cdb2e:{c.instructions+=2;NFSU2_TR(0x5cdb2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cdb30:{NFSU2_TR(0x5cdb30);
if(r1(R+518)){{goto L5cdb45;}}
}
B5cdb32:L5cdb32:{c.instructions+=3;NFSU2_TR(0x5cdb32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb33:{NFSU2_TR(0x5cdb33);
__builtin_memmove((R+4),(R+28),4);
}
B5cdb35:{NFSU2_TR(0x5cdb35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd8d0u);}goto L5cd8d0;}
}
B5cdb3a:L5cdb3a:{c.instructions+=2;NFSU2_TR(0x5cdb3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cdb3d:{NFSU2_TR(0x5cdb3d);
u8 U[13];
w4(U+0,u32(u32(u32(0x25e2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cdb45:L5cdb45:{c.instructions+=4;NFSU2_TR(0x5cdb45);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb47:{NFSU2_TR(0x5cdb47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb48:{NFSU2_TR(0x5cdb48);
__builtin_memmove((R+4),(R+20),4);
}
B5cdb4a:{NFSU2_TR(0x5cdb4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb4full));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cdb4f:L5cdb4f:{c.instructions+=3;NFSU2_TR(0x5cdb4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cdb51:{NFSU2_TR(0x5cdb51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cdb52:{NFSU2_TR(0x5cdb52);
if(r1(R+518)){{goto L5cdb67;}}
}
B5cdb54:L5cdb54:{c.instructions+=3;NFSU2_TR(0x5cdb54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb55:{NFSU2_TR(0x5cdb55);
__builtin_memmove((R+4),(R+28),4);
}
B5cdb57:{NFSU2_TR(0x5cdb57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd910u);}goto L5cd910;}
}
B5cdb5c:L5cdb5c:{c.instructions+=2;NFSU2_TR(0x5cdb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5cdb5f:{NFSU2_TR(0x5cdb5f);
u8 U[13];
w4(U+0,u32(u32(u32(0x25e3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cdb67:L5cdb67:{c.instructions+=4;NFSU2_TR(0x5cdb67);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb69:{NFSU2_TR(0x5cdb69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb6a:{NFSU2_TR(0x5cdb6a);
__builtin_memmove((R+4),(R+12),4);
}
B5cdb6c:{NFSU2_TR(0x5cdb6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb71ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cdb71:L5cdb71:{c.instructions+=2;NFSU2_TR(0x5cdb71);
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
B5cdb73:{NFSU2_TR(0x5cdb73);
if(r1(R+518)){{goto L5cdba6;}}
}
B5cdb75:L5cdb75:{c.instructions+=3;NFSU2_TR(0x5cdb75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb76:{NFSU2_TR(0x5cdb76);
__builtin_memmove((R+4),(R+28),4);
}
B5cdb78:{NFSU2_TR(0x5cdb78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cd9d0u);}goto L5cd9d0;}
}
B5cdb7d:L5cdb7d:{c.instructions+=6;NFSU2_TR(0x5cdb7d);
u8 U[12];
w4(U+0,u32(u32(u32(0x12f2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5cdb84:{NFSU2_TR(0x5cdb84);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5cdb88:{NFSU2_TR(0x5cdb88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cdb89:{NFSU2_TR(0x5cdb89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cdb8a:{NFSU2_TR(0x5cdb8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cdb8b:{NFSU2_TR(0x5cdb8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cdb8e:L5cdb8e:{c.instructions+=2;NFSU2_TR(0x5cdb8e);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb93:{NFSU2_TR(0x5cdb93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdb98ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5cdb98:L5cdb98:{c.instructions+=3;NFSU2_TR(0x5cdb98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb99:{NFSU2_TR(0x5cdb99);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdb9e:{NFSU2_TR(0x5cdb9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdba3ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5cdba3:L5cdba3:{c.instructions+=1;NFSU2_TR(0x5cdba3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cdba6:L5cdba6:{c.instructions+=4;NFSU2_TR(0x5cdba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cdba7:{NFSU2_TR(0x5cdba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cdba8:{NFSU2_TR(0x5cdba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cdba9:{NFSU2_TR(0x5cdba9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cdbb0:L5cdbb0:{c.instructions+=7;NFSU2_TR(0x5cdbb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdbb1:{NFSU2_TR(0x5cdbb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cdbb5:{NFSU2_TR(0x5cdbb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cdbbc:{NFSU2_TR(0x5cdbbc);
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
B5cdbbe:{NFSU2_TR(0x5cdbbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdbbf:{NFSU2_TR(0x5cdbbf);
__builtin_memmove((R+28),(R+4),4);
}
B5cdbc1:{NFSU2_TR(0x5cdbc1);
if(r1(R+518)){{goto L5cdcdf;}}
}
B5cdbc7:L5cdbc7:{c.instructions+=2;NFSU2_TR(0x5cdbc7);
u8 U[18];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+16),(U+12),1);
w1(R+512,u8((r1(U+16))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+16),u8(0x1ull)));
w1(U+17,u8(u32(r1(U+16))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+17))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+17))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+17))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B5cdbcf:{NFSU2_TR(0x5cdbcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdcdf;}}
}
B5cdbd5:L5cdbd5:{c.instructions+=8;NFSU2_TR(0x5cdbd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdbd6:{NFSU2_TR(0x5cdbd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cdbd9:{NFSU2_TR(0x5cdbd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdbda:{NFSU2_TR(0x5cdbda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5cdbdd:{NFSU2_TR(0x5cdbdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25dcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cdbe3:{NFSU2_TR(0x5cdbe3);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5cdbeb:{NFSU2_TR(0x5cdbeb);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5cdbee:{NFSU2_TR(0x5cdbee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdc18;}}
}
B5cdbf0:L5cdbf0:{c.instructions+=12;NFSU2_TR(0x5cdbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5cdbf3:{NFSU2_TR(0x5cdbf3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ba8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5cdbfa:{NFSU2_TR(0x5cdbfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cdbfd:{NFSU2_TR(0x5cdbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ba0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cdc03:{NFSU2_TR(0x5cdc03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc04:{NFSU2_TR(0x5cdc04);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5cdc0b:{NFSU2_TR(0x5cdc0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5cdc0e:{NFSU2_TR(0x5cdc0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc0f:{NFSU2_TR(0x5cdc0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc10:{NFSU2_TR(0x5cdc10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc11:{NFSU2_TR(0x5cdc11);
__builtin_memmove((R+4),(R+28),4);
}
B5cdc13:{NFSU2_TR(0x5cdc13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdc18ull));
TAIL_STATIC(0x5c9150u,5c9);
}
B5cdc18:L5cdc18:{c.instructions+=2;NFSU2_TR(0x5cdc18);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25ddull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cdc1f:{NFSU2_TR(0x5cdc1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdc39;}}
}
B5cdc21:L5cdc21:{c.instructions+=7;NFSU2_TR(0x5cdc21);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bbcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cdc28:{NFSU2_TR(0x5cdc28);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bb8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5cdc2f:{NFSU2_TR(0x5cdc2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc30:{NFSU2_TR(0x5cdc30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc31:{NFSU2_TR(0x5cdc31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc32:{NFSU2_TR(0x5cdc32);
__builtin_memmove((R+4),(R+28),4);
}
B5cdc34:{NFSU2_TR(0x5cdc34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdc39ull));
TAIL_STATIC(0x5c9550u,5c9);
}
B5cdc39:L5cdc39:{c.instructions+=2;NFSU2_TR(0x5cdc39);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25deull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cdc40:{NFSU2_TR(0x5cdc40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdc52;}}
}
B5cdc42:L5cdc42:{c.instructions+=5;NFSU2_TR(0x5cdc42);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bc8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5cdc49:{NFSU2_TR(0x5cdc49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc4a:{NFSU2_TR(0x5cdc4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc4b:{NFSU2_TR(0x5cdc4b);
__builtin_memmove((R+4),(R+28),4);
}
B5cdc4d:{NFSU2_TR(0x5cdc4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdc52ull));
TAIL_STATIC(0x5c9590u,5c9);
}
B5cdc52:L5cdc52:{c.instructions+=2;NFSU2_TR(0x5cdc52);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25e1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cdc59:{NFSU2_TR(0x5cdc59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdc6b;}}
}
B5cdc5b:L5cdc5b:{c.instructions+=5;NFSU2_TR(0x5cdc5b);
u8 U[16];
w4(U+0,u32(u32(u32(0x2be8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cdc62:{NFSU2_TR(0x5cdc62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc63:{NFSU2_TR(0x5cdc63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc64:{NFSU2_TR(0x5cdc64);
__builtin_memmove((R+4),(R+28),4);
}
B5cdc66:{NFSU2_TR(0x5cdc66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdc6bull));
TAIL_STATIC(0x5c99d0u,5c9);
}
B5cdc6b:L5cdc6b:{c.instructions+=2;NFSU2_TR(0x5cdc6b);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25e2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cdc72:{NFSU2_TR(0x5cdc72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdc84;}}
}
B5cdc74:L5cdc74:{c.instructions+=5;NFSU2_TR(0x5cdc74);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5cdc7b:{NFSU2_TR(0x5cdc7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc7c:{NFSU2_TR(0x5cdc7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc7d:{NFSU2_TR(0x5cdc7d);
__builtin_memmove((R+4),(R+28),4);
}
B5cdc7f:{NFSU2_TR(0x5cdc7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdc84ull));
TAIL_STATIC(0x5c9bb0u,5c9);
}
B5cdc84:L5cdc84:{c.instructions+=2;NFSU2_TR(0x5cdc84);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x25e3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5cdc8b:{NFSU2_TR(0x5cdc8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdc9d;}}
}
B5cdc8d:L5cdc8d:{c.instructions+=5;NFSU2_TR(0x5cdc8d);
u8 U[16];
w4(U+0,u32(u32(u32(0x2bf8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5cdc94:{NFSU2_TR(0x5cdc94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc95:{NFSU2_TR(0x5cdc95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdc96:{NFSU2_TR(0x5cdc96);
__builtin_memmove((R+4),(R+28),4);
}
B5cdc98:{NFSU2_TR(0x5cdc98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdc9dull));
TAIL_STATIC(0x5c9d90u,5c9);
}
B5cdc9d:L5cdc9d:{c.instructions+=3;NFSU2_TR(0x5cdc9d);
u8 U[12];
w4(U+0,u32(u32(u32(0x12f2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5cdca4:{NFSU2_TR(0x5cdca4);
u8 U[11];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B5cdca8:{NFSU2_TR(0x5cdca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdcd2;}}
}
B5cdcaa:L5cdcaa:{c.instructions+=12;NFSU2_TR(0x5cdcaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5cdcad:{NFSU2_TR(0x5cdcad);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c08ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5cdcb4:{NFSU2_TR(0x5cdcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cdcb7:{NFSU2_TR(0x5cdcb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdcb8:{NFSU2_TR(0x5cdcb8);
u8 U[12];
w4(U+0,u32(u32(u32(0xb01ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5cdcbf:{NFSU2_TR(0x5cdcbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5cdcc2:{NFSU2_TR(0x5cdcc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cdcc8:{NFSU2_TR(0x5cdcc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdcc9:{NFSU2_TR(0x5cdcc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdcca:{NFSU2_TR(0x5cdcca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdccb:{NFSU2_TR(0x5cdccb);
__builtin_memmove((R+4),(R+28),4);
}
B5cdccd:{NFSU2_TR(0x5cdccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdcd2ull));
TAIL_STATIC(0x5c9fd0u,5c9);
}
B5cdcd2:L5cdcd2:{c.instructions+=6;NFSU2_TR(0x5cdcd2);
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
B5cdcd4:{NFSU2_TR(0x5cdcd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5cdcd6:{NFSU2_TR(0x5cdcd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdcd9:{NFSU2_TR(0x5cdcd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cdcda:{NFSU2_TR(0x5cdcda);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5cdcde:{NFSU2_TR(0x5cdcde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cdcdf:L5cdcdf:{c.instructions+=3;NFSU2_TR(0x5cdcdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cdce0:{NFSU2_TR(0x5cdce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cdce1:{NFSU2_TR(0x5cdce1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cdcf0:L5cdcf0:{c.instructions+=17;NFSU2_TR(0x5cdcf0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cdcf3:{NFSU2_TR(0x5cdcf3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdcf4:{NFSU2_TR(0x5cdcf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdcf5:{NFSU2_TR(0x5cdcf5);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B5cdcf6:{NFSU2_TR(0x5cdcf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cdcf7:{NFSU2_TR(0x5cdcf7);
__builtin_memmove((R+12),(R+0),4);
}
B5cdcf9:{NFSU2_TR(0x5cdcf9);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B5cdcfe:{NFSU2_TR(0x5cdcfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdcff:{NFSU2_TR(0x5cdcff);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B5cdd00:{NFSU2_TR(0x5cdd00);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B5cdd01:{NFSU2_TR(0x5cdd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cdd02:{NFSU2_TR(0x5cdd02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B5cdd04:{NFSU2_TR(0x5cdd04);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdd08:{NFSU2_TR(0x5cdd08);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cdd0c:{NFSU2_TR(0x5cdd0c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cdd0e:{NFSU2_TR(0x5cdd0e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cdd10:{NFSU2_TR(0x5cdd10);
if(r1(R+518)){{goto L5cddaf;}}
}
B5cdd16:L5cdd16:{c.instructions+=9;NFSU2_TR(0x5cdd16);
w4(R+0,u32(0x0ull));
}
B5cdd1b:{NFSU2_TR(0x5cdd1b);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L5cdd1b_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L5cdd1b_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L5cdd1b_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L5cdd1b_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L5cdd1b_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L5cdd1b_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L5cdd1b_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L5cdd1b_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L5cdd1b_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L5cdd1b_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L5cdd1b_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L5cdd1b_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L5cdd1b_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L5cdd1b_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L5cdd1b_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L5cdd1b_65;}
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_35:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_37:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_39:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_41:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_43:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_45:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_47:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_49:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_51:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_53:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_55:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_57:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_59:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_61:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_63:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_65:;
{SPILL();c.pc=0x5cdd1bu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5cdd1b_67;
L5cdd1b_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B5cdd1d:{NFSU2_TR(0x5cdd1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdd21:{NFSU2_TR(0x5cdd21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdd25:{NFSU2_TR(0x5cdd25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdd29:{NFSU2_TR(0x5cdd29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdd2d:{NFSU2_TR(0x5cdd2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cdd31:{NFSU2_TR(0x5cdd31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x68747541ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cdd36:{NFSU2_TR(0x5cdd36);
if(r1(R+518)){{goto L5cdd87;}}
}
B5cdd38:L5cdd38:{c.instructions+=2;NFSU2_TR(0x5cdd38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x69727943ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cdd3d:{NFSU2_TR(0x5cdd3d);
if(r1(R+518)){{goto L5cdd6f;}}
}
B5cdd3f:L5cdd3f:{c.instructions+=2;NFSU2_TR(0x5cdd3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x756e6547ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cdd44:{NFSU2_TR(0x5cdd44);
if(r1(R+518)){{goto L5cdd5e;}}
}
B5cdd46:L5cdd46:{c.instructions+=4;NFSU2_TR(0x5cdd46);
s4(0x86ff20,u32(0x5ull));
}
B5cdd50:{NFSU2_TR(0x5cdd50);
__builtin_memmove(gp(0x86ff28),(R+24),4);
}
B5cdd56:{NFSU2_TR(0x5cdd56);
__builtin_memmove(gp(0x86ff2c),(R+24),4);
}
B5cdd5c:{NFSU2_TR(0x5cdd5c);
{goto L5cdd96;}
}
B5cdd5e:L5cdd5e:{c.instructions+=2;NFSU2_TR(0x5cdd5e);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdd60:{NFSU2_TR(0x5cdd60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdd65ull));
TAIL_STATIC(0x5c0ad0u,5c0);
}
B5cdd65:L5cdd65:{c.instructions+=2;NFSU2_TR(0x5cdd65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cdd68:{NFSU2_TR(0x5cdd68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdd6dull));
TAIL_STATIC(0x5ca4e0u,5ca);
}
B5cdd6d:L5cdd6d:{c.instructions+=1;NFSU2_TR(0x5cdd6d);
{goto L5cdd96;}
}
B5cdd6f:L5cdd6f:{c.instructions+=4;NFSU2_TR(0x5cdd6f);
s4(0x86ff20,u32(0x1ull));
}
B5cdd79:{NFSU2_TR(0x5cdd79);
__builtin_memmove(gp(0x86ff28),(R+24),4);
}
B5cdd7f:{NFSU2_TR(0x5cdd7f);
__builtin_memmove(gp(0x86ff2c),(R+24),4);
}
B5cdd85:{NFSU2_TR(0x5cdd85);
{goto L5cdd96;}
}
B5cdd87:L5cdd87:{c.instructions+=2;NFSU2_TR(0x5cdd87);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdd89:{NFSU2_TR(0x5cdd89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdd8eull));
TAIL_STATIC(0x5c0ad0u,5c0);
}
B5cdd8e:L5cdd8e:{c.instructions+=2;NFSU2_TR(0x5cdd8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cdd91:{NFSU2_TR(0x5cdd91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdd96ull));
TAIL_STATIC(0x5ca590u,5ca);
}
B5cdd96:L5cdd96:{c.instructions+=4;NFSU2_TR(0x5cdd96);
__builtin_memmove((R+0),gp(0x86ff20),4);
}
B5cdd9b:{NFSU2_TR(0x5cdd9b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cdda1:{NFSU2_TR(0x5cdda1);
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
B5cdda4:{NFSU2_TR(0x5cdda4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5cde1f;}}
}
B5cdda6:L5cdda6:{c.instructions+=1;NFSU2_TR(0x5cdda6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5cde28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cddad:L5cddad:{c.instructions+=1;NFSU2_TR(0x5cddad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cddaf:L5cddaf:{c.instructions+=5;NFSU2_TR(0x5cddaf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cddb5:{NFSU2_TR(0x5cddb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cddb6:{NFSU2_TR(0x5cddb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cddb7:{NFSU2_TR(0x5cddb7);
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
B5cddba:{NFSU2_TR(0x5cddba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cddbb:L5cddbb:{c.instructions+=6;NFSU2_TR(0x5cddbb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cddbd:{NFSU2_TR(0x5cddbd);
{u32 ea_=u32(u32(8847144u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5cddc3:{NFSU2_TR(0x5cddc3);
{u32 ea_=u32(u32(8011996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5cddc9:{NFSU2_TR(0x5cddc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cddcb:{NFSU2_TR(0x5cddcb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cddce:{NFSU2_TR(0x5cddce);
if(r1(R+514)){{goto L5cddde;}}
}
B5cddd0:L5cddd0:{c.instructions+=6;NFSU2_TR(0x5cddd0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cddd2:{NFSU2_TR(0x5cddd2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cddd8:{NFSU2_TR(0x5cddd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cddd9:{NFSU2_TR(0x5cddd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cddda:{NFSU2_TR(0x5cddda);
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
B5cdddd:{NFSU2_TR(0x5cdddd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cddde:L5cddde:{c.instructions+=6;NFSU2_TR(0x5cddde);
{u32 ea_=u32(u32(8011996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cdde4:{NFSU2_TR(0x5cdde4);
{u32 ea_=u32(u32(8011992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cddea:{NFSU2_TR(0x5cddea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cddeb:{NFSU2_TR(0x5cddeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cddec:{NFSU2_TR(0x5cddec);
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
B5cddef:{NFSU2_TR(0x5cddef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cddf0:L5cddf0:{c.instructions+=6;NFSU2_TR(0x5cddf0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cddf2:{NFSU2_TR(0x5cddf2);
{u32 ea_=u32(u32(8847144u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5cddf8:{NFSU2_TR(0x5cddf8);
{u32 ea_=u32(u32(8011996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5cddfe:{NFSU2_TR(0x5cddfe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cde00:{NFSU2_TR(0x5cde00);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cde03:{NFSU2_TR(0x5cde03);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cddd0u);}goto L5cddd0;}}
}
B5cde05:L5cde05:{c.instructions+=6;NFSU2_TR(0x5cde05);
{u32 ea_=u32(u32(8011996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cde0b:{NFSU2_TR(0x5cde0b);
{u32 ea_=u32(u32(8011988u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cde11:{NFSU2_TR(0x5cde11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cde12:{NFSU2_TR(0x5cde12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cde13:{NFSU2_TR(0x5cde13);
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
B5cde16:{NFSU2_TR(0x5cde16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cde17:L5cde17:{c.instructions+=2;NFSU2_TR(0x5cde17);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cde19:{NFSU2_TR(0x5cde19);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cde1f:L5cde1f:{c.instructions+=4;NFSU2_TR(0x5cde1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cde20:{NFSU2_TR(0x5cde20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cde21:{NFSU2_TR(0x5cde21);
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
B5cde24:{NFSU2_TR(0x5cde24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cde40:L5cde40:{c.instructions+=7;NFSU2_TR(0x5cde40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cde41:{NFSU2_TR(0x5cde41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cde45:{NFSU2_TR(0x5cde45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cde4b:{NFSU2_TR(0x5cde4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x428ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cde51:{NFSU2_TR(0x5cde51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cde52:{NFSU2_TR(0x5cde52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cde53:{NFSU2_TR(0x5cde53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cde58ull));
TAIL_STATIC(0x5c0cd0u,5c0);
}
B5cde58:L5cde58:{c.instructions+=3;NFSU2_TR(0x5cde58);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cde5c:{NFSU2_TR(0x5cde5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cde5f:{NFSU2_TR(0x5cde5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cde64ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cdcf0u);}goto L5cdcf0;}
}
B5cde64:L5cde64:{c.instructions+=5;NFSU2_TR(0x5cde64);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cde66:{NFSU2_TR(0x5cde66);
__builtin_memmove((R+0),gp(0x86ff2c),4);
}
B5cde6b:{NFSU2_TR(0x5cde6b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cde6d:{NFSU2_TR(0x5cde6d);
__builtin_memmove((R+4),gp(0x86ff28),4);
}
B5cde73:{NFSU2_TR(0x5cde73);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5cdeb3;}}
}
B5cde75:L5cde75:{c.instructions+=1;NFSU2_TR(0x5cde75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5cde7f;}}
}
B5cde77:L5cde77:{c.instructions+=2;NFSU2_TR(0x5cde77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x578ull))));
}
B5cde7d:{NFSU2_TR(0x5cde7d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cde87;}}
}
B5cde7f:L5cde7f:{c.instructions+=2;NFSU2_TR(0x5cde7f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cde85:{NFSU2_TR(0x5cde85);
{goto L5cdeb9;}
}
B5cde87:L5cde87:{c.instructions+=2;NFSU2_TR(0x5cde87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cde89:{NFSU2_TR(0x5cde89);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5cdeb3;}}
}
B5cde8b:L5cde8b:{c.instructions+=1;NFSU2_TR(0x5cde8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5cde95;}}
}
B5cde8d:L5cde8d:{c.instructions+=2;NFSU2_TR(0x5cde8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x708ull))));
}
B5cde93:{NFSU2_TR(0x5cde93);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cde9d;}}
}
B5cde95:L5cde95:{c.instructions+=2;NFSU2_TR(0x5cde95);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cde9b:{NFSU2_TR(0x5cde9b);
{goto L5cdeb9;}
}
B5cde9d:L5cde9d:{c.instructions+=2;NFSU2_TR(0x5cde9d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cde9f:{NFSU2_TR(0x5cde9f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5cdeb3;}}
}
B5cdea1:L5cdea1:{c.instructions+=1;NFSU2_TR(0x5cdea1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5cdeab;}}
}
B5cdea3:L5cdea3:{c.instructions+=2;NFSU2_TR(0x5cdea3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x960ull))));
}
B5cdea9:{NFSU2_TR(0x5cdea9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cdeb3;}}
}
B5cdeab:L5cdeab:{c.instructions+=2;NFSU2_TR(0x5cdeab);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cdeb1:{NFSU2_TR(0x5cdeb1);
{goto L5cdeb9;}
}
B5cdeb3:L5cdeb3:{c.instructions+=1;NFSU2_TR(0x5cdeb3);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cdeb9:L5cdeb9:{c.instructions+=8;NFSU2_TR(0x5cdeb9);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cdebf:{NFSU2_TR(0x5cdebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x428ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cdec5:{NFSU2_TR(0x5cdec5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x18caull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x18caull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x18caull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cdeca:{NFSU2_TR(0x5cdeca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cdece:{NFSU2_TR(0x5cdece);
{u32 ea_=u32(u32(8012000u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cded4:{NFSU2_TR(0x5cded4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cded6:{NFSU2_TR(0x5cded6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cdeda:{NFSU2_TR(0x5cdeda);
if(r1(R+518)){{goto L5cdef6;}}
}
B5cdedc:L5cdedc:{c.instructions+=2;NFSU2_TR(0x5cdedc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8086ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8086ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8086ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cdee1:{NFSU2_TR(0x5cdee1);
if(r1(R+518)){{goto L5cdef6;}}
}
B5cdee3:L5cdee3:{c.instructions+=2;NFSU2_TR(0x5cdee3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1002ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1002ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1002ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cdee8:{NFSU2_TR(0x5cdee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdefe;}}
}
B5cdeea:L5cdeea:{c.instructions+=2;NFSU2_TR(0x5cdeea);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5834ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5834ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5834ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cdef4:{NFSU2_TR(0x5cdef4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cdefe;}}
}
B5cdef6:L5cdef6:{c.instructions+=3;NFSU2_TR(0x5cdef6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cdefc:{NFSU2_TR(0x5cdefc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cdefd:{NFSU2_TR(0x5cdefd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cdefe:L5cdefe:{c.instructions+=3;NFSU2_TR(0x5cdefe);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cdf02:{NFSU2_TR(0x5cdf02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cdf03:{NFSU2_TR(0x5cdf03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cdf10:L5cdf10:{c.instructions+=5;NFSU2_TR(0x5cdf10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf11:{NFSU2_TR(0x5cdf11);
__builtin_memmove((R+24),(R+4),4);
}
B5cdf13:{NFSU2_TR(0x5cdf13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cdf15:{NFSU2_TR(0x5cdf15);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5cdf17:{NFSU2_TR(0x5cdf17);
if(r1(R+518)){{goto L5cdf3f;}}
}
B5cdf19:L5cdf19:{c.instructions+=1;NFSU2_TR(0x5cdf19);
__builtin_memmove((R+16),(R+16),4);
}
B5cdf20:L5cdf20:{c.instructions+=8;NFSU2_TR(0x5cdf20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cdf22:{NFSU2_TR(0x5cdf22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cdf25:{NFSU2_TR(0x5cdf25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5cdf27:{NFSU2_TR(0x5cdf27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf28:{NFSU2_TR(0x5cdf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdf2b:{NFSU2_TR(0x5cdf2b);
__builtin_memmove((R+0),gp(0x87091c),4);
}
B5cdf30:{NFSU2_TR(0x5cdf30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf31:{NFSU2_TR(0x5cdf31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdf36ull));
TAIL_STATIC(0x43f920u,43f);
}
B5cdf36:L5cdf36:{c.instructions+=4;NFSU2_TR(0x5cdf36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cdf38:{NFSU2_TR(0x5cdf38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cdf3b:{NFSU2_TR(0x5cdf3b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5cdf3d:{NFSU2_TR(0x5cdf3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cdf20u);}goto L5cdf20;}}
}
B5cdf3f:L5cdf3f:{c.instructions+=2;NFSU2_TR(0x5cdf3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cdf40:{NFSU2_TR(0x5cdf40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cdf50:L5cdf50:{c.instructions+=20;NFSU2_TR(0x5cdf50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf51:{NFSU2_TR(0x5cdf51);
__builtin_memmove((R+20),(R+16),4);
}
B5cdf53:{NFSU2_TR(0x5cdf53);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf55:{NFSU2_TR(0x5cdf55);
u8 U[4];
w4(U+0,u32(0x7791f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf5a:{NFSU2_TR(0x5cdf5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cdf60:{NFSU2_TR(0x5cdf60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf61:{NFSU2_TR(0x5cdf61);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdf68:{NFSU2_TR(0x5cdf68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5cdf6b:{NFSU2_TR(0x5cdf6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cdf6e:{NFSU2_TR(0x5cdf6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf6f:{NFSU2_TR(0x5cdf6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf70:{NFSU2_TR(0x5cdf70);
__builtin_memmove((R+24),(R+0),4);
}
B5cdf72:{NFSU2_TR(0x5cdf72);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfull))));
}
B5cdf75:{NFSU2_TR(0x5cdf75);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xfffffffeull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cdf78:{NFSU2_TR(0x5cdf78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf79:{NFSU2_TR(0x5cdf79);
__builtin_memmove((R+12),(R+4),4);
}
B5cdf7b:{NFSU2_TR(0x5cdf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdf7e:{NFSU2_TR(0x5cdf7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdf81:{NFSU2_TR(0x5cdf81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdf84:{NFSU2_TR(0x5cdf84);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cdf8b;}}
}
B5cdf86:L5cdf86:{c.instructions+=2;NFSU2_TR(0x5cdf86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdf89:{NFSU2_TR(0x5cdf89);
__builtin_memmove((R+24),(R+0),4);
}
B5cdf8b:L5cdf8b:{c.instructions+=4;NFSU2_TR(0x5cdf8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cdf8e:{NFSU2_TR(0x5cdf8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdf8f:{NFSU2_TR(0x5cdf8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cdf96:{NFSU2_TR(0x5cdf96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdf9bull));
TAIL_STATIC(0x575620u,575);
}
B5cdf9b:L5cdf9b:{c.instructions+=4;NFSU2_TR(0x5cdf9b);
__builtin_memmove((R+8),(R+0),4);
}
B5cdf9d:{NFSU2_TR(0x5cdf9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cdfa0:{NFSU2_TR(0x5cdfa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdfa3:{NFSU2_TR(0x5cdfa3);
{goto L5cdfce;}
}
B5cdfa5:L5cdfa5:{c.instructions+=7;NFSU2_TR(0x5cdfa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cdfa8:{NFSU2_TR(0x5cdfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdfab:{NFSU2_TR(0x5cdfab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5cdfac:{NFSU2_TR(0x5cdfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdfaf:{NFSU2_TR(0x5cdfaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cdfb0:{NFSU2_TR(0x5cdfb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cdfb4:{NFSU2_TR(0x5cdfb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cdfb9ull));
TAIL_STATIC(0x575620u,575);
}
B5cdfb9:L5cdfb9:{c.instructions+=4;NFSU2_TR(0x5cdfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cdfbc:{NFSU2_TR(0x5cdfbc);
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
B5cdfbf:{NFSU2_TR(0x5cdfbf);
w4(R+0,u32(0x5cdfc5ull));
}
B5cdfc4:{NFSU2_TR(0x5cdfc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cdfc5:L5cdfc5:{c.instructions+=3;NFSU2_TR(0x5cdfc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cdfc8:{NFSU2_TR(0x5cdfc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cdfcb:{NFSU2_TR(0x5cdfcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cdfce:L5cdfce:{c.instructions+=3;NFSU2_TR(0x5cdfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cdfd1:{NFSU2_TR(0x5cdfd1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cdfd3:{NFSU2_TR(0x5cdfd3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cdff9;}}
}
B5cdfd5:L5cdfd5:{c.instructions+=2;NFSU2_TR(0x5cdfd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B5cdfd9:{NFSU2_TR(0x5cdfd9);
if(r1(R+512)){{goto L5cdfe0;}}
}
B5cdfdb:L5cdfdb:{c.instructions+=2;NFSU2_TR(0x5cdfdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cdfde:{NFSU2_TR(0x5cdfde);
{goto L5cdfe3;}
}
B5cdfe0:L5cdfe0:{c.instructions+=1;NFSU2_TR(0x5cdfe0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cdfe3:L5cdfe3:{c.instructions+=3;NFSU2_TR(0x5cdfe3);
__builtin_memmove((R+0),(R+4),4);
}
B5cdfe5:{NFSU2_TR(0x5cdfe5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5cdfe8:{NFSU2_TR(0x5cdfe8);
__builtin_memmove((R+28),(R+8),4);
}
B5cdfea:L5cdfea:{c.instructions+=1;NFSU2_TR(0x5cdfea);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cdfec;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cdfeau);}goto L5cdfea;}
}
B5cdfec:L5cdfec:{c.instructions+=2;NFSU2_TR(0x5cdfec);
__builtin_memmove((R+4),(R+0),4);
}
B5cdfee:{NFSU2_TR(0x5cdfee);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5cdff1:L5cdff1:{c.instructions+=1;NFSU2_TR(0x5cdff1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5cdff3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cdff1u);}goto L5cdff1;}
}
B5cdff3:L5cdff3:{c.instructions+=2;NFSU2_TR(0x5cdff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cdff6:{NFSU2_TR(0x5cdff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cdff9:L5cdff9:{c.instructions+=2;NFSU2_TR(0x5cdff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B5cdffd:{NFSU2_TR(0x5cdffd);
if(r1(R+512)){TAIL_STATIC(0x5ce011u,5ce);}
}
B5cdfff:L5cdfff:{c.instructions+=1;NFSU2_TR(0x5cdfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x5ce002u,5ce);
}
XIT:NFSU2_TR_EXIT(0x5cd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
