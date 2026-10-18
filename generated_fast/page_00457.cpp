#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_449(u8* __restrict R,Cpu& c);
u32 body_450(u8* __restrict R,Cpu& c);
u32 body_455(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x457,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x457,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_457(u8* __restrict R,Cpu& c);
u32 page_457(Cpu& c){return body_457(c.regs.data(),c);}
__attribute__((noinline)) u32 body_457(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x457001:goto L457001;
case 0x457006:goto L457006;
case 0x457009:c.instructions+=2;goto B457009;
case 0x45700b:c.instructions+=1;goto B45700b;
case 0x45700d:goto L45700d;
case 0x457013:c.instructions+=8;goto B457013;
case 0x457016:c.instructions+=7;goto B457016;
case 0x457018:c.instructions+=6;goto B457018;
case 0x457020:c.instructions+=5;goto B457020;
case 0x457027:c.instructions+=4;goto B457027;
case 0x45702d:c.instructions+=3;goto B45702d;
case 0x457031:c.instructions+=2;goto B457031;
case 0x457039:c.instructions+=1;goto B457039;
case 0x45703d:goto L45703d;
case 0x457044:c.instructions+=4;goto B457044;
case 0x457048:c.instructions+=3;goto B457048;
case 0x45704c:c.instructions+=2;goto B45704c;
case 0x457050:c.instructions+=1;goto B457050;
case 0x457055:goto L457055;
case 0x45705b:c.instructions+=3;goto B45705b;
case 0x45705c:c.instructions+=2;goto B45705c;
case 0x457063:c.instructions+=1;goto B457063;
case 0x457068:goto L457068;
case 0x45706e:c.instructions+=6;goto B45706e;
case 0x457071:c.instructions+=5;goto B457071;
case 0x457075:c.instructions+=4;goto B457075;
case 0x457079:c.instructions+=3;goto B457079;
case 0x45707c:c.instructions+=2;goto B45707c;
case 0x45707d:c.instructions+=1;goto B45707d;
case 0x457082:goto L457082;
case 0x457085:c.instructions+=10;goto B457085;
case 0x45708c:c.instructions+=9;goto B45708c;
case 0x457090:c.instructions+=8;goto B457090;
case 0x457094:c.instructions+=7;goto B457094;
case 0x457098:c.instructions+=6;goto B457098;
case 0x45709b:c.instructions+=5;goto B45709b;
case 0x45709f:c.instructions+=4;goto B45709f;
case 0x4570a0:c.instructions+=3;goto B4570a0;
case 0x4570a4:c.instructions+=2;goto B4570a4;
case 0x4570a7:c.instructions+=1;goto B4570a7;
case 0x4570ac:goto L4570ac;
case 0x4570af:c.instructions+=1;goto B4570af;
case 0x4570b4:goto L4570b4;
case 0x4570ba:c.instructions+=12;goto B4570ba;
case 0x4570c0:c.instructions+=11;goto B4570c0;
case 0x4570c5:c.instructions+=10;goto B4570c5;
case 0x4570ca:c.instructions+=9;goto B4570ca;
case 0x4570cb:c.instructions+=8;goto B4570cb;
case 0x4570d1:c.instructions+=7;goto B4570d1;
case 0x4570d8:c.instructions+=6;goto B4570d8;
case 0x4570dd:c.instructions+=5;goto B4570dd;
case 0x4570de:c.instructions+=4;goto B4570de;
case 0x4570df:c.instructions+=3;goto B4570df;
case 0x4570e0:c.instructions+=2;goto B4570e0;
case 0x4570e2:c.instructions+=1;goto B4570e2;
case 0x4570e7:goto L4570e7;
case 0x4570ed:c.instructions+=21;goto B4570ed;
case 0x4570f3:c.instructions+=20;goto B4570f3;
case 0x4570f9:c.instructions+=19;goto B4570f9;
case 0x4570ff:c.instructions+=18;goto B4570ff;
case 0x457101:c.instructions+=17;goto B457101;
case 0x457103:c.instructions+=16;goto B457103;
case 0x457107:c.instructions+=15;goto B457107;
case 0x45710a:c.instructions+=14;goto B45710a;
case 0x457110:c.instructions+=13;goto B457110;
case 0x457116:c.instructions+=12;goto B457116;
case 0x457118:c.instructions+=11;goto B457118;
case 0x45711d:c.instructions+=10;goto B45711d;
case 0x457122:c.instructions+=9;goto B457122;
case 0x457123:c.instructions+=8;goto B457123;
case 0x457125:c.instructions+=7;goto B457125;
case 0x45712a:c.instructions+=6;goto B45712a;
case 0x457130:c.instructions+=5;goto B457130;
case 0x457131:c.instructions+=4;goto B457131;
case 0x457132:c.instructions+=3;goto B457132;
case 0x457133:c.instructions+=2;goto B457133;
case 0x457135:c.instructions+=1;goto B457135;
case 0x45713a:goto L45713a;
case 0x45713f:c.instructions+=9;goto B45713f;
case 0x457145:c.instructions+=8;goto B457145;
case 0x45714b:c.instructions+=7;goto B45714b;
case 0x457151:c.instructions+=6;goto B457151;
case 0x457152:c.instructions+=5;goto B457152;
case 0x457153:c.instructions+=4;goto B457153;
case 0x457154:c.instructions+=3;goto B457154;
case 0x45715a:c.instructions+=2;goto B45715a;
case 0x45715d:c.instructions+=1;goto B45715d;
case 0x457162:goto L457162;
case 0x457168:c.instructions+=13;goto B457168;
case 0x45716e:c.instructions+=12;goto B45716e;
case 0x457173:c.instructions+=11;goto B457173;
case 0x457179:c.instructions+=10;goto B457179;
case 0x45717c:c.instructions+=9;goto B45717c;
case 0x457181:c.instructions+=8;goto B457181;
case 0x457186:c.instructions+=7;goto B457186;
case 0x457187:c.instructions+=6;goto B457187;
case 0x45718d:c.instructions+=5;goto B45718d;
case 0x45718e:c.instructions+=4;goto B45718e;
case 0x45718f:c.instructions+=3;goto B45718f;
case 0x457190:c.instructions+=2;goto B457190;
case 0x457192:c.instructions+=1;goto B457192;
case 0x457197:goto L457197;
case 0x45719d:c.instructions+=13;goto B45719d;
case 0x4571a3:c.instructions+=12;goto B4571a3;
case 0x4571a9:c.instructions+=11;goto B4571a9;
case 0x4571af:c.instructions+=10;goto B4571af;
case 0x4571b2:c.instructions+=9;goto B4571b2;
case 0x4571b8:c.instructions+=8;goto B4571b8;
case 0x4571ba:c.instructions+=7;goto B4571ba;
case 0x4571bb:c.instructions+=6;goto B4571bb;
case 0x4571c2:c.instructions+=5;goto B4571c2;
case 0x4571c3:c.instructions+=4;goto B4571c3;
case 0x4571c4:c.instructions+=3;goto B4571c4;
case 0x4571c6:c.instructions+=2;goto B4571c6;
case 0x4571c9:c.instructions+=1;goto B4571c9;
case 0x4571ce:goto L4571ce;
case 0x4571d0:c.instructions+=13;goto B4571d0;
case 0x4571d6:c.instructions+=12;goto B4571d6;
case 0x4571dc:c.instructions+=11;goto B4571dc;
case 0x4571e0:c.instructions+=10;goto B4571e0;
case 0x4571e3:c.instructions+=9;goto B4571e3;
case 0x4571e6:c.instructions+=8;goto B4571e6;
case 0x4571e8:c.instructions+=7;goto B4571e8;
case 0x4571ef:c.instructions+=6;goto B4571ef;
case 0x4571f4:c.instructions+=5;goto B4571f4;
case 0x4571f6:c.instructions+=4;goto B4571f6;
case 0x4571f8:c.instructions+=3;goto B4571f8;
case 0x4571f9:c.instructions+=2;goto B4571f9;
case 0x4571fc:c.instructions+=1;goto B4571fc;
case 0x457201:goto L457201;
case 0x457206:c.instructions+=3;goto B457206;
case 0x457208:c.instructions+=2;goto B457208;
case 0x45720a:c.instructions+=1;goto B45720a;
case 0x45720f:goto L45720f;
case 0x457212:c.instructions+=2;goto B457212;
case 0x457214:c.instructions+=1;goto B457214;
case 0x45721a:goto L45721a;
case 0x457220:c.instructions+=11;goto B457220;
case 0x457226:c.instructions+=10;goto B457226;
case 0x45722b:c.instructions+=9;goto B45722b;
case 0x457230:c.instructions+=8;goto B457230;
case 0x457235:c.instructions+=7;goto B457235;
case 0x457236:c.instructions+=6;goto B457236;
case 0x45723c:c.instructions+=5;goto B45723c;
case 0x45723d:c.instructions+=4;goto B45723d;
case 0x45723e:c.instructions+=3;goto B45723e;
case 0x45723f:c.instructions+=2;goto B45723f;
case 0x457241:c.instructions+=1;goto B457241;
case 0x457246:goto L457246;
case 0x45724c:c.instructions+=4;goto B45724c;
case 0x457252:c.instructions+=3;goto B457252;
case 0x457254:c.instructions+=2;goto B457254;
case 0x457257:c.instructions+=1;goto B457257;
case 0x457259:goto L457259;
case 0x45725f:c.instructions+=6;goto B45725f;
case 0x457265:c.instructions+=5;goto B457265;
case 0x457267:c.instructions+=4;goto B457267;
case 0x45726e:c.instructions+=3;goto B45726e;
case 0x457270:c.instructions+=2;goto B457270;
case 0x457277:c.instructions+=1;goto B457277;
case 0x457279:goto L457279;
case 0x45727b:c.instructions+=3;goto B45727b;
case 0x45727d:c.instructions+=2;goto B45727d;
case 0x45727f:c.instructions+=1;goto B45727f;
case 0x457284:goto L457284;
case 0x45728a:c.instructions+=3;goto B45728a;
case 0x45728c:c.instructions+=2;goto B45728c;
case 0x45728f:c.instructions+=1;goto B45728f;
case 0x457295:goto L457295;
case 0x45729b:c.instructions+=6;goto B45729b;
case 0x4572a1:c.instructions+=5;goto B4572a1;
case 0x4572a3:c.instructions+=4;goto B4572a3;
case 0x4572aa:c.instructions+=3;goto B4572aa;
case 0x4572ac:c.instructions+=2;goto B4572ac;
case 0x4572ae:c.instructions+=1;goto B4572ae;
case 0x4572b0:goto L4572b0;
case 0x4572b2:c.instructions+=2;goto B4572b2;
case 0x4572b4:c.instructions+=1;goto B4572b4;
case 0x4572b6:goto L4572b6;
case 0x4572bc:c.instructions+=11;goto B4572bc;
case 0x4572c2:c.instructions+=10;goto B4572c2;
case 0x4572c7:c.instructions+=9;goto B4572c7;
case 0x4572cc:c.instructions+=8;goto B4572cc;
case 0x4572d1:c.instructions+=7;goto B4572d1;
case 0x4572d2:c.instructions+=6;goto B4572d2;
case 0x4572d8:c.instructions+=5;goto B4572d8;
case 0x4572d9:c.instructions+=4;goto B4572d9;
case 0x4572da:c.instructions+=3;goto B4572da;
case 0x4572db:c.instructions+=2;goto B4572db;
case 0x4572dd:c.instructions+=1;goto B4572dd;
case 0x4572e2:goto L4572e2;
case 0x4572e8:c.instructions+=13;goto B4572e8;
case 0x4572ee:c.instructions+=12;goto B4572ee;
case 0x4572f4:c.instructions+=11;goto B4572f4;
case 0x4572f9:c.instructions+=10;goto B4572f9;
case 0x4572fc:c.instructions+=9;goto B4572fc;
case 0x457302:c.instructions+=8;goto B457302;
case 0x457304:c.instructions+=7;goto B457304;
case 0x457305:c.instructions+=6;goto B457305;
case 0x45730c:c.instructions+=5;goto B45730c;
case 0x45730d:c.instructions+=4;goto B45730d;
case 0x45730e:c.instructions+=3;goto B45730e;
case 0x457310:c.instructions+=2;goto B457310;
case 0x457313:c.instructions+=1;goto B457313;
case 0x457318:goto L457318;
case 0x45731a:c.instructions+=1;goto B45731a;
case 0x45731d:goto L45731d;
case 0x45731f:c.instructions+=7;goto B45731f;
case 0x457326:c.instructions+=6;goto B457326;
case 0x45732a:c.instructions+=5;goto B45732a;
case 0x45732e:c.instructions+=4;goto B45732e;
case 0x45732f:c.instructions+=3;goto B45732f;
case 0x457330:c.instructions+=2;goto B457330;
case 0x457331:c.instructions+=1;goto B457331;
case 0x457336:goto L457336;
case 0x45733a:c.instructions+=16;goto B45733a;
case 0x45733e:c.instructions+=15;goto B45733e;
case 0x457342:c.instructions+=14;goto B457342;
case 0x457345:c.instructions+=13;goto B457345;
case 0x457347:c.instructions+=12;goto B457347;
case 0x457349:c.instructions+=11;goto B457349;
case 0x45734d:c.instructions+=10;goto B45734d;
case 0x457351:c.instructions+=9;goto B457351;
case 0x457353:c.instructions+=8;goto B457353;
case 0x457357:c.instructions+=7;goto B457357;
case 0x45735b:c.instructions+=6;goto B45735b;
case 0x45735f:c.instructions+=5;goto B45735f;
case 0x457363:c.instructions+=4;goto B457363;
case 0x457367:c.instructions+=3;goto B457367;
case 0x457369:c.instructions+=2;goto B457369;
case 0x45736d:c.instructions+=1;goto B45736d;
case 0x45736f:goto L45736f;
case 0x457375:c.instructions+=3;goto B457375;
case 0x45737b:c.instructions+=2;goto B45737b;
case 0x457382:c.instructions+=1;goto B457382;
case 0x457384:goto L457384;
case 0x45738a:c.instructions+=2;goto B45738a;
case 0x457390:c.instructions+=1;goto B457390;
case 0x457397:goto L457397;
case 0x45739a:c.instructions+=2;goto B45739a;
case 0x45739c:c.instructions+=1;goto B45739c;
case 0x45739e:goto L45739e;
case 0x4573a1:c.instructions+=1;goto B4573a1;
case 0x4573a7:goto L4573a7;
case 0x4573ad:c.instructions+=4;goto B4573ad;
case 0x4573af:c.instructions+=3;goto B4573af;
case 0x4573b0:c.instructions+=2;goto B4573b0;
case 0x4573b5:c.instructions+=1;goto B4573b5;
case 0x4573ba:goto L4573ba;
case 0x4573bd:c.instructions+=4;goto B4573bd;
case 0x4573be:c.instructions+=3;goto B4573be;
case 0x4573c2:c.instructions+=2;goto B4573c2;
case 0x4573c3:c.instructions+=1;goto B4573c3;
case 0x4573c8:goto L4573c8;
case 0x4573cc:c.instructions+=4;goto B4573cc;
case 0x4573d0:c.instructions+=3;goto B4573d0;
case 0x4573d4:c.instructions+=2;goto B4573d4;
case 0x4573d8:c.instructions+=1;goto B4573d8;
case 0x4573da:goto L4573da;
case 0x4573e0:c.instructions+=6;goto B4573e0;
case 0x4573e2:c.instructions+=5;goto B4573e2;
case 0x4573e7:c.instructions+=4;goto B4573e7;
case 0x4573e8:c.instructions+=3;goto B4573e8;
case 0x4573ec:c.instructions+=2;goto B4573ec;
case 0x4573ed:c.instructions+=1;goto B4573ed;
case 0x4573f2:goto L4573f2;
case 0x4573f6:c.instructions+=3;goto B4573f6;
case 0x4573fa:c.instructions+=2;goto B4573fa;
case 0x4573fe:c.instructions+=1;goto B4573fe;
case 0x457402:goto L457402;
case 0x457404:c.instructions+=16;goto B457404;
case 0x457407:c.instructions+=15;goto B457407;
case 0x45740b:c.instructions+=14;goto B45740b;
case 0x457411:c.instructions+=13;goto B457411;
case 0x457413:c.instructions+=12;goto B457413;
case 0x45741a:c.instructions+=11;goto B45741a;
case 0x45741e:c.instructions+=10;goto B45741e;
case 0x457422:c.instructions+=9;goto B457422;
case 0x457426:c.instructions+=8;goto B457426;
case 0x45742a:c.instructions+=7;goto B45742a;
case 0x45742c:c.instructions+=6;goto B45742c;
case 0x457430:c.instructions+=5;goto B457430;
case 0x457436:c.instructions+=4;goto B457436;
case 0x457438:c.instructions+=3;goto B457438;
case 0x45743f:c.instructions+=2;goto B45743f;
case 0x457441:c.instructions+=1;goto B457441;
case 0x457445:goto L457445;
case 0x45744b:c.instructions+=7;goto B45744b;
case 0x45744f:c.instructions+=6;goto B45744f;
case 0x457453:c.instructions+=5;goto B457453;
case 0x457459:c.instructions+=4;goto B457459;
case 0x45745b:c.instructions+=3;goto B45745b;
case 0x45745d:c.instructions+=2;goto B45745d;
case 0x457460:c.instructions+=1;goto B457460;
case 0x457462:goto L457462;
case 0x457465:c.instructions+=8;goto B457465;
case 0x45746c:c.instructions+=7;goto B45746c;
case 0x457473:c.instructions+=6;goto B457473;
case 0x457475:c.instructions+=5;goto B457475;
case 0x45747b:c.instructions+=4;goto B45747b;
case 0x457481:c.instructions+=3;goto B457481;
case 0x457483:c.instructions+=2;goto B457483;
case 0x45748a:c.instructions+=1;goto B45748a;
case 0x45748c:goto L45748c;
case 0x45748f:c.instructions+=7;goto B45748f;
case 0x457496:c.instructions+=6;goto B457496;
case 0x45749d:c.instructions+=5;goto B45749d;
case 0x45749f:c.instructions+=4;goto B45749f;
case 0x4574a5:c.instructions+=3;goto B4574a5;
case 0x4574ab:c.instructions+=2;goto B4574ab;
case 0x4574ad:c.instructions+=1;goto B4574ad;
case 0x4574b4:goto L4574b4;
case 0x4574b6:c.instructions+=5;goto B4574b6;
case 0x4574ba:c.instructions+=4;goto B4574ba;
case 0x4574bb:c.instructions+=3;goto B4574bb;
case 0x4574bd:c.instructions+=2;goto B4574bd;
case 0x4574bf:c.instructions+=1;goto B4574bf;
case 0x4574c4:goto L4574c4;
case 0x4574c9:goto L4574c9;
case 0x4574cf:c.instructions+=2;goto B4574cf;
case 0x4574d1:c.instructions+=1;goto B4574d1;
case 0x4574d3:goto L4574d3;
case 0x4574d4:c.instructions+=2;goto B4574d4;
case 0x4574da:c.instructions+=1;goto B4574da;
case 0x4574df:goto L4574df;
case 0x4574e5:c.instructions+=2;goto B4574e5;
case 0x4574e7:c.instructions+=1;goto B4574e7;
case 0x4574ed:goto L4574ed;
case 0x4574f0:c.instructions+=1;goto B4574f0;
case 0x4574f2:goto L4574f2;
case 0x4574f5:c.instructions+=1;goto B4574f5;
case 0x4574f7:goto L4574f7;
case 0x4574fa:c.instructions+=1;goto B4574fa;
case 0x4574fc:goto L4574fc;
case 0x4574fe:c.instructions+=1;goto B4574fe;
case 0x457500:goto L457500;
case 0x457505:goto L457505;
case 0x45750a:c.instructions+=4;goto B45750a;
case 0x45750c:c.instructions+=3;goto B45750c;
case 0x457510:c.instructions+=2;goto B457510;
case 0x457517:c.instructions+=1;goto B457517;
case 0x45751c:goto L45751c;
case 0x45751f:c.instructions+=2;goto B45751f;
case 0x457521:c.instructions+=1;goto B457521;
case 0x457527:goto L457527;
case 0x45752d:c.instructions+=21;goto B45752d;
case 0x457533:c.instructions+=20;goto B457533;
case 0x457535:c.instructions+=19;goto B457535;
case 0x457538:c.instructions+=18;goto B457538;
case 0x45753c:c.instructions+=17;goto B45753c;
case 0x45753d:c.instructions+=16;goto B45753d;
case 0x457541:c.instructions+=15;goto B457541;
case 0x457543:c.instructions+=14;goto B457543;
case 0x45754a:c.instructions+=13;goto B45754a;
case 0x45754e:c.instructions+=12;goto B45754e;
case 0x457550:c.instructions+=11;goto B457550;
case 0x457551:c.instructions+=10;goto B457551;
case 0x457554:c.instructions+=9;goto B457554;
case 0x457556:c.instructions+=8;goto B457556;
case 0x45755c:c.instructions+=7;goto B45755c;
case 0x457560:c.instructions+=6;goto B457560;
case 0x457566:c.instructions+=5;goto B457566;
case 0x457569:c.instructions+=4;goto B457569;
case 0x457570:c.instructions+=3;goto B457570;
case 0x457571:c.instructions+=2;goto B457571;
case 0x457575:c.instructions+=1;goto B457575;
case 0x45757a:goto L45757a;
case 0x45757e:c.instructions+=12;goto B45757e;
case 0x45757f:c.instructions+=11;goto B45757f;
case 0x457583:c.instructions+=10;goto B457583;
case 0x457587:c.instructions+=9;goto B457587;
case 0x457588:c.instructions+=8;goto B457588;
case 0x45758c:c.instructions+=7;goto B45758c;
case 0x457590:c.instructions+=6;goto B457590;
case 0x457591:c.instructions+=5;goto B457591;
case 0x457595:c.instructions+=4;goto B457595;
case 0x457596:c.instructions+=3;goto B457596;
case 0x457597:c.instructions+=2;goto B457597;
case 0x457598:c.instructions+=1;goto B457598;
case 0x45759d:goto L45759d;
case 0x4575a2:c.instructions+=1;goto B4575a2;
case 0x4575a7:goto L4575a7;
case 0x4575ad:c.instructions+=7;goto B4575ad;
case 0x4575b0:c.instructions+=6;goto B4575b0;
case 0x4575b5:c.instructions+=5;goto B4575b5;
case 0x4575b9:c.instructions+=4;goto B4575b9;
case 0x4575be:c.instructions+=3;goto B4575be;
case 0x4575bf:c.instructions+=2;goto B4575bf;
case 0x4575c2:c.instructions+=1;goto B4575c2;
case 0x4575c7:goto L4575c7;
case 0x4575cc:c.instructions+=2;goto B4575cc;
case 0x4575d0:c.instructions+=1;goto B4575d0;
case 0x4575d5:goto L4575d5;
case 0x4575db:c.instructions+=7;goto B4575db;
case 0x4575de:c.instructions+=6;goto B4575de;
case 0x4575e3:c.instructions+=5;goto B4575e3;
case 0x4575e7:c.instructions+=4;goto B4575e7;
case 0x4575ec:c.instructions+=3;goto B4575ec;
case 0x4575ed:c.instructions+=2;goto B4575ed;
case 0x4575f0:c.instructions+=1;goto B4575f0;
case 0x4575f5:goto L4575f5;
case 0x4575fb:c.instructions+=13;goto B4575fb;
case 0x4575ff:c.instructions+=12;goto B4575ff;
case 0x457605:c.instructions+=11;goto B457605;
case 0x45760a:c.instructions+=10;goto B45760a;
case 0x45760d:c.instructions+=9;goto B45760d;
case 0x457612:c.instructions+=8;goto B457612;
case 0x457617:c.instructions+=7;goto B457617;
case 0x457618:c.instructions+=6;goto B457618;
case 0x45761e:c.instructions+=5;goto B45761e;
case 0x45761f:c.instructions+=4;goto B45761f;
case 0x457620:c.instructions+=3;goto B457620;
case 0x457621:c.instructions+=2;goto B457621;
case 0x457623:c.instructions+=1;goto B457623;
case 0x457628:goto L457628;
case 0x45762e:c.instructions+=6;goto B45762e;
case 0x457633:c.instructions+=5;goto B457633;
case 0x457638:c.instructions+=4;goto B457638;
case 0x45763c:c.instructions+=3;goto B45763c;
case 0x45763d:c.instructions+=2;goto B45763d;
case 0x457640:c.instructions+=1;goto B457640;
case 0x457645:goto L457645;
case 0x457649:c.instructions+=11;goto B457649;
case 0x45764d:c.instructions+=10;goto B45764d;
case 0x457651:c.instructions+=9;goto B457651;
case 0x457655:c.instructions+=8;goto B457655;
case 0x457656:c.instructions+=7;goto B457656;
case 0x45765a:c.instructions+=6;goto B45765a;
case 0x45765b:c.instructions+=5;goto B45765b;
case 0x45765c:c.instructions+=4;goto B45765c;
case 0x45765d:c.instructions+=3;goto B45765d;
case 0x457661:c.instructions+=2;goto B457661;
case 0x457665:c.instructions+=1;goto B457665;
case 0x45766a:goto L45766a;
case 0x45766e:c.instructions+=10;goto B45766e;
case 0x457672:c.instructions+=9;goto B457672;
case 0x457676:c.instructions+=8;goto B457676;
case 0x457677:c.instructions+=7;goto B457677;
case 0x45767b:c.instructions+=6;goto B45767b;
case 0x45767c:c.instructions+=5;goto B45767c;
case 0x45767d:c.instructions+=4;goto B45767d;
case 0x45767e:c.instructions+=3;goto B45767e;
case 0x457682:c.instructions+=2;goto B457682;
case 0x457686:c.instructions+=1;goto B457686;
case 0x45768b:goto L45768b;
case 0x45768f:c.instructions+=3;goto B45768f;
case 0x457695:c.instructions+=2;goto B457695;
case 0x45769b:c.instructions+=1;goto B45769b;
case 0x4576a0:goto L4576a0;
case 0x4576a4:c.instructions+=8;goto B4576a4;
case 0x4576aa:c.instructions+=7;goto B4576aa;
case 0x4576b0:c.instructions+=6;goto B4576b0;
case 0x4576b4:c.instructions+=5;goto B4576b4;
case 0x4576ba:c.instructions+=4;goto B4576ba;
case 0x4576c0:c.instructions+=3;goto B4576c0;
case 0x4576c2:c.instructions+=2;goto B4576c2;
case 0x4576c9:c.instructions+=1;goto B4576c9;
case 0x4576ce:goto L4576ce;
case 0x4576d4:c.instructions+=8;goto B4576d4;
case 0x4576d8:c.instructions+=7;goto B4576d8;
case 0x4576dc:c.instructions+=6;goto B4576dc;
case 0x4576e2:c.instructions+=5;goto B4576e2;
case 0x4576e8:c.instructions+=4;goto B4576e8;
case 0x4576ee:c.instructions+=3;goto B4576ee;
case 0x4576f0:c.instructions+=2;goto B4576f0;
case 0x4576f3:c.instructions+=1;goto B4576f3;
case 0x4576f8:goto L4576f8;
case 0x4576fe:c.instructions+=5;goto B4576fe;
case 0x457704:c.instructions+=4;goto B457704;
case 0x457706:c.instructions+=3;goto B457706;
case 0x45770b:c.instructions+=2;goto B45770b;
case 0x457712:c.instructions+=1;goto B457712;
case 0x457717:goto L457717;
case 0x45771d:c.instructions+=17;goto B45771d;
case 0x457721:c.instructions+=16;goto B457721;
case 0x457727:c.instructions+=15;goto B457727;
case 0x457729:c.instructions+=14;goto B457729;
case 0x45772f:c.instructions+=13;goto B45772f;
case 0x457731:c.instructions+=12;goto B457731;
case 0x457739:c.instructions+=11;goto B457739;
case 0x457740:c.instructions+=10;goto B457740;
case 0x457744:c.instructions+=9;goto B457744;
case 0x457747:c.instructions+=8;goto B457747;
case 0x45774c:c.instructions+=7;goto B45774c;
case 0x457750:c.instructions+=6;goto B457750;
case 0x457752:c.instructions+=5;goto B457752;
case 0x457753:c.instructions+=4;goto B457753;
case 0x457759:c.instructions+=3;goto B457759;
case 0x45775b:c.instructions+=2;goto B45775b;
case 0x45775e:c.instructions+=1;goto B45775e;
case 0x457763:goto L457763;
case 0x457769:c.instructions+=2;goto B457769;
case 0x45776f:c.instructions+=1;goto B45776f;
case 0x457774:goto L457774;
case 0x457779:c.instructions+=2;goto B457779;
case 0x45777b:c.instructions+=1;goto B45777b;
case 0x457780:goto L457780;
case 0x457782:c.instructions+=16;goto B457782;
case 0x457788:c.instructions+=15;goto B457788;
case 0x45778b:c.instructions+=14;goto B45778b;
case 0x45778e:c.instructions+=13;goto B45778e;
case 0x457790:c.instructions+=12;goto B457790;
case 0x457798:c.instructions+=11;goto B457798;
case 0x45779e:c.instructions+=10;goto B45779e;
case 0x4577a5:c.instructions+=9;goto B4577a5;
case 0x4577a9:c.instructions+=8;goto B4577a9;
case 0x4577ae:c.instructions+=7;goto B4577ae;
case 0x4577b2:c.instructions+=6;goto B4577b2;
case 0x4577b4:c.instructions+=5;goto B4577b4;
case 0x4577b5:c.instructions+=4;goto B4577b5;
case 0x4577bb:c.instructions+=3;goto B4577bb;
case 0x4577bd:c.instructions+=2;goto B4577bd;
case 0x4577c0:c.instructions+=1;goto B4577c0;
case 0x4577c5:goto L4577c5;
case 0x4577cb:c.instructions+=3;goto B4577cb;
case 0x4577ce:c.instructions+=2;goto B4577ce;
case 0x4577d4:c.instructions+=1;goto B4577d4;
case 0x4577d9:goto L4577d9;
case 0x4577df:c.instructions+=12;goto B4577df;
case 0x4577e5:c.instructions+=11;goto B4577e5;
case 0x4577ea:c.instructions+=10;goto B4577ea;
case 0x4577ef:c.instructions+=9;goto B4577ef;
case 0x4577f1:c.instructions+=8;goto B4577f1;
case 0x4577f6:c.instructions+=7;goto B4577f6;
case 0x4577f7:c.instructions+=6;goto B4577f7;
case 0x4577fd:c.instructions+=5;goto B4577fd;
case 0x4577fe:c.instructions+=4;goto B4577fe;
case 0x4577ff:c.instructions+=3;goto B4577ff;
case 0x457800:c.instructions+=2;goto B457800;
case 0x457802:c.instructions+=1;goto B457802;
case 0x457807:goto L457807;
case 0x45780d:c.instructions+=5;goto B45780d;
case 0x457813:c.instructions+=4;goto B457813;
case 0x457819:c.instructions+=3;goto B457819;
case 0x45781b:c.instructions+=2;goto B45781b;
case 0x457822:c.instructions+=1;goto B457822;
case 0x457827:goto L457827;
case 0x45782c:c.instructions+=1;goto B45782c;
case 0x457831:goto L457831;
case 0x457837:c.instructions+=3;goto B457837;
case 0x45783c:c.instructions+=2;goto B45783c;
case 0x457840:c.instructions+=1;goto B457840;
case 0x457845:goto L457845;
case 0x45784b:c.instructions+=21;goto B45784b;
case 0x457851:c.instructions+=20;goto B457851;
case 0x457854:c.instructions+=19;goto B457854;
case 0x457856:c.instructions+=18;goto B457856;
case 0x457858:c.instructions+=17;goto B457858;
case 0x45785b:c.instructions+=16;goto B45785b;
case 0x45785d:c.instructions+=15;goto B45785d;
case 0x457860:c.instructions+=14;goto B457860;
case 0x457865:c.instructions+=13;goto B457865;
case 0x45786b:c.instructions+=12;goto B45786b;
case 0x45786d:c.instructions+=11;goto B45786d;
case 0x45786e:c.instructions+=10;goto B45786e;
case 0x457875:c.instructions+=9;goto B457875;
case 0x457879:c.instructions+=8;goto B457879;
case 0x45787b:c.instructions+=7;goto B45787b;
case 0x45787f:c.instructions+=6;goto B45787f;
case 0x457883:c.instructions+=5;goto B457883;
case 0x457887:c.instructions+=4;goto B457887;
case 0x45788d:c.instructions+=3;goto B45788d;
case 0x457894:c.instructions+=2;goto B457894;
case 0x457897:c.instructions+=1;goto B457897;
case 0x45789c:goto L45789c;
case 0x4578a3:c.instructions+=5;goto B4578a3;
case 0x4578a7:c.instructions+=4;goto B4578a7;
case 0x4578ac:c.instructions+=3;goto B4578ac;
case 0x4578ae:c.instructions+=2;goto B4578ae;
case 0x4578af:c.instructions+=1;goto B4578af;
case 0x4578b4:goto L4578b4;
case 0x4578ba:c.instructions+=16;goto B4578ba;
case 0x4578bf:c.instructions+=15;goto B4578bf;
case 0x4578c2:c.instructions+=14;goto B4578c2;
case 0x4578c8:c.instructions+=13;goto B4578c8;
case 0x4578cb:c.instructions+=12;goto B4578cb;
case 0x4578d0:c.instructions+=11;goto B4578d0;
case 0x4578d5:c.instructions+=10;goto B4578d5;
case 0x4578d6:c.instructions+=9;goto B4578d6;
case 0x4578d8:c.instructions+=8;goto B4578d8;
case 0x4578d9:c.instructions+=7;goto B4578d9;
case 0x4578db:c.instructions+=6;goto B4578db;
case 0x4578e2:c.instructions+=5;goto B4578e2;
case 0x4578e8:c.instructions+=4;goto B4578e8;
case 0x4578ee:c.instructions+=3;goto B4578ee;
case 0x4578ef:c.instructions+=2;goto B4578ef;
case 0x4578f0:c.instructions+=1;goto B4578f0;
case 0x4578f5:goto L4578f5;
case 0x4578fb:c.instructions+=4;goto B4578fb;
case 0x457901:c.instructions+=3;goto B457901;
case 0x457907:c.instructions+=2;goto B457907;
case 0x457909:c.instructions+=1;goto B457909;
case 0x457910:goto L457910;
case 0x457916:c.instructions+=1;goto B457916;
case 0x45791b:goto L45791b;
case 0x45791e:c.instructions+=3;goto B45791e;
case 0x457920:c.instructions+=2;goto B457920;
case 0x457922:c.instructions+=1;goto B457922;
case 0x457924:goto L457924;
case 0x457926:c.instructions+=1;goto B457926;
case 0x457928:goto L457928;
case 0x45792b:c.instructions+=1;goto B45792b;
case 0x45792d:goto L45792d;
case 0x457932:goto L457932;
case 0x457934:goto L457934;
case 0x45793b:c.instructions+=1;goto B45793b;
case 0x45793d:goto L45793d;
case 0x457943:c.instructions+=3;goto B457943;
case 0x457944:c.instructions+=2;goto B457944;
case 0x457946:c.instructions+=1;goto B457946;
case 0x45794b:goto L45794b;
case 0x457952:c.instructions+=7;goto B457952;
case 0x457953:c.instructions+=6;goto B457953;
case 0x457954:c.instructions+=5;goto B457954;
case 0x45795b:c.instructions+=4;goto B45795b;
case 0x45795c:c.instructions+=3;goto B45795c;
case 0x45795e:c.instructions+=2;goto B45795e;
case 0x45795f:c.instructions+=1;goto B45795f;
case 0x4579a0:goto L4579a0;
case 0x4579a1:c.instructions+=4;goto B4579a1;
case 0x4579a2:c.instructions+=3;goto B4579a2;
case 0x4579a4:c.instructions+=2;goto B4579a4;
case 0x4579a6:c.instructions+=1;goto B4579a6;
case 0x4579ab:goto L4579ab;
case 0x4579ae:c.instructions+=2;goto B4579ae;
case 0x4579b0:c.instructions+=1;goto B4579b0;
case 0x4579b2:goto L4579b2;
case 0x4579b5:c.instructions+=6;goto B4579b5;
case 0x4579b8:c.instructions+=5;goto B4579b8;
case 0x4579bd:c.instructions+=4;goto B4579bd;
case 0x4579be:c.instructions+=3;goto B4579be;
case 0x4579c0:c.instructions+=2;goto B4579c0;
case 0x4579c1:c.instructions+=1;goto B4579c1;
case 0x4579c6:goto L4579c6;
case 0x4579c7:c.instructions+=1;goto B4579c7;
case 0x4579cc:goto L4579cc;
case 0x4579cf:goto L4579cf;
case 0x4579d2:c.instructions+=2;goto B4579d2;
case 0x4579d4:c.instructions+=1;goto B4579d4;
case 0x4579d6:goto L4579d6;
case 0x4579d9:c.instructions+=6;goto B4579d9;
case 0x4579dc:c.instructions+=5;goto B4579dc;
case 0x4579e1:c.instructions+=4;goto B4579e1;
case 0x4579e2:c.instructions+=3;goto B4579e2;
case 0x4579e4:c.instructions+=2;goto B4579e4;
case 0x4579e5:c.instructions+=1;goto B4579e5;
case 0x4579ea:goto L4579ea;
case 0x4579eb:c.instructions+=1;goto B4579eb;
case 0x4579f0:goto L4579f0;
case 0x4579f3:goto L4579f3;
case 0x4579f6:c.instructions+=2;goto B4579f6;
case 0x4579f8:c.instructions+=1;goto B4579f8;
case 0x4579fa:goto L4579fa;
case 0x4579fd:c.instructions+=6;goto B4579fd;
case 0x457a02:c.instructions+=5;goto B457a02;
case 0x457a05:c.instructions+=4;goto B457a05;
case 0x457a06:c.instructions+=3;goto B457a06;
case 0x457a08:c.instructions+=2;goto B457a08;
case 0x457a09:c.instructions+=1;goto B457a09;
case 0x457a0e:goto L457a0e;
case 0x457a0f:c.instructions+=1;goto B457a0f;
case 0x457a14:goto L457a14;
case 0x457a17:goto L457a17;
case 0x457a18:c.instructions+=2;goto B457a18;
case 0x457a19:c.instructions+=1;goto B457a19;
case 0x457a20:goto L457a20;
case 0x457a26:c.instructions+=2;goto B457a26;
case 0x457a28:c.instructions+=1;goto B457a28;
case 0x457a2a:goto L457a2a;
case 0x457a2c:c.instructions+=1;goto B457a2c;
case 0x457a31:goto L457a31;
case 0x457a3b:goto L457a3b;
case 0x457a40:goto L457a40;
case 0x457a46:c.instructions+=2;goto B457a46;
case 0x457a48:c.instructions+=1;goto B457a48;
case 0x457a4a:goto L457a4a;
case 0x457a4c:c.instructions+=1;goto B457a4c;
case 0x457a51:goto L457a51;
case 0x457a5b:goto L457a5b;
case 0x457a60:goto L457a60;
case 0x457a65:c.instructions+=4;goto B457a65;
case 0x457a66:c.instructions+=3;goto B457a66;
case 0x457a67:c.instructions+=2;goto B457a67;
case 0x457a69:c.instructions+=1;goto B457a69;
case 0x457a6e:goto L457a6e;
case 0x457a72:c.instructions+=4;goto B457a72;
case 0x457a78:c.instructions+=3;goto B457a78;
case 0x457a7b:c.instructions+=2;goto B457a7b;
case 0x457a7d:c.instructions+=1;goto B457a7d;
case 0x457a7f:goto L457a7f;
case 0x457a84:c.instructions+=5;goto B457a84;
case 0x457a87:c.instructions+=4;goto B457a87;
case 0x457a8c:c.instructions+=3;goto B457a8c;
case 0x457a8d:c.instructions+=2;goto B457a8d;
case 0x457a8e:c.instructions+=1;goto B457a8e;
case 0x457a93:goto L457a93;
case 0x457a96:c.instructions+=2;goto B457a96;
case 0x457a97:c.instructions+=1;goto B457a97;
case 0x457a9a:goto L457a9a;
case 0x457a9c:c.instructions+=2;goto B457a9c;
case 0x457a9d:c.instructions+=1;goto B457a9d;
case 0x457aa0:goto L457aa0;
case 0x457aa5:c.instructions+=4;goto B457aa5;
case 0x457aa6:c.instructions+=3;goto B457aa6;
case 0x457aa7:c.instructions+=2;goto B457aa7;
case 0x457aa9:c.instructions+=1;goto B457aa9;
case 0x457aae:goto L457aae;
case 0x457ab2:c.instructions+=4;goto B457ab2;
case 0x457ab8:c.instructions+=3;goto B457ab8;
case 0x457abb:c.instructions+=2;goto B457abb;
case 0x457abd:c.instructions+=1;goto B457abd;
case 0x457abf:goto L457abf;
case 0x457ac4:c.instructions+=6;goto B457ac4;
case 0x457ac7:c.instructions+=5;goto B457ac7;
case 0x457acc:c.instructions+=4;goto B457acc;
case 0x457acd:c.instructions+=3;goto B457acd;
case 0x457ad1:c.instructions+=2;goto B457ad1;
case 0x457ad5:c.instructions+=1;goto B457ad5;
case 0x457ada:goto L457ada;
case 0x457adc:c.instructions+=2;goto B457adc;
case 0x457add:c.instructions+=1;goto B457add;
case 0x457ae0:goto L457ae0;
case 0x457ae5:c.instructions+=4;goto B457ae5;
case 0x457ae6:c.instructions+=3;goto B457ae6;
case 0x457ae8:c.instructions+=2;goto B457ae8;
case 0x457aee:c.instructions+=1;goto B457aee;
case 0x457af0:goto L457af0;
case 0x457af1:c.instructions+=1;goto B457af1;
case 0x457af6:goto L457af6;
case 0x457af9:goto L457af9;
case 0x457afb:c.instructions+=2;goto B457afb;
case 0x457afc:c.instructions+=1;goto B457afc;
case 0x457b00:goto L457b00;
case 0x457b06:c.instructions+=5;goto B457b06;
case 0x457b09:c.instructions+=4;goto B457b09;
case 0x457b0f:c.instructions+=3;goto B457b0f;
case 0x457b11:c.instructions+=2;goto B457b11;
case 0x457b14:c.instructions+=1;goto B457b14;
case 0x457b16:goto L457b16;
case 0x457b18:c.instructions+=1;goto B457b18;
case 0x457b1b:goto L457b1b;
case 0x457b1e:c.instructions+=3;goto B457b1e;
case 0x457b20:c.instructions+=2;goto B457b20;
case 0x457b23:c.instructions+=1;goto B457b23;
case 0x457b25:goto L457b25;
case 0x457b27:c.instructions+=1;goto B457b27;
case 0x457b2a:goto L457b2a;
case 0x457b2d:c.instructions+=3;goto B457b2d;
case 0x457b2f:c.instructions+=2;goto B457b2f;
case 0x457b32:c.instructions+=1;goto B457b32;
case 0x457b34:goto L457b34;
case 0x457b36:c.instructions+=1;goto B457b36;
case 0x457b39:goto L457b39;
case 0x457b3c:c.instructions+=3;goto B457b3c;
case 0x457b3e:c.instructions+=2;goto B457b3e;
case 0x457b41:c.instructions+=1;goto B457b41;
case 0x457b43:goto L457b43;
case 0x457b45:c.instructions+=1;goto B457b45;
case 0x457b48:goto L457b48;
case 0x457b4b:c.instructions+=3;goto B457b4b;
case 0x457b4d:c.instructions+=2;goto B457b4d;
case 0x457b50:c.instructions+=1;goto B457b50;
case 0x457b52:goto L457b52;
case 0x457b54:c.instructions+=1;goto B457b54;
case 0x457b57:goto L457b57;
case 0x457b5a:c.instructions+=3;goto B457b5a;
case 0x457b5c:c.instructions+=2;goto B457b5c;
case 0x457b5f:c.instructions+=1;goto B457b5f;
case 0x457b61:goto L457b61;
case 0x457b63:c.instructions+=1;goto B457b63;
case 0x457b66:goto L457b66;
case 0x457b69:c.instructions+=3;goto B457b69;
case 0x457b6b:c.instructions+=2;goto B457b6b;
case 0x457b6e:c.instructions+=1;goto B457b6e;
case 0x457b70:goto L457b70;
case 0x457b72:c.instructions+=1;goto B457b72;
case 0x457b75:goto L457b75;
case 0x457b78:c.instructions+=3;goto B457b78;
case 0x457b7a:c.instructions+=2;goto B457b7a;
case 0x457b7d:c.instructions+=1;goto B457b7d;
case 0x457b7f:goto L457b7f;
case 0x457b81:c.instructions+=1;goto B457b81;
case 0x457b84:goto L457b84;
case 0x457b87:c.instructions+=3;goto B457b87;
case 0x457b89:c.instructions+=2;goto B457b89;
case 0x457b8c:c.instructions+=1;goto B457b8c;
case 0x457b8e:goto L457b8e;
case 0x457b90:c.instructions+=1;goto B457b90;
case 0x457b93:goto L457b93;
case 0x457ba0:goto L457ba0;
case 0x457ba7:c.instructions+=1;goto B457ba7;
case 0x457ba9:goto L457ba9;
case 0x457bb0:c.instructions+=1;goto B457bb0;
case 0x457bb2:goto L457bb2;
case 0x457bb7:c.instructions+=1;goto B457bb7;
case 0x457bb8:goto L457bb8;
case 0x457bba:c.instructions+=1;goto B457bba;
case 0x457bc0:goto L457bc0;
case 0x457bc1:c.instructions+=3;goto B457bc1;
case 0x457bc6:c.instructions+=2;goto B457bc6;
case 0x457bcb:c.instructions+=1;goto B457bcb;
case 0x457bd0:goto L457bd0;
case 0x457bd5:c.instructions+=3;goto B457bd5;
case 0x457bda:c.instructions+=2;goto B457bda;
case 0x457bdc:c.instructions+=1;goto B457bdc;
case 0x457be1:goto L457be1;
case 0x457be6:c.instructions+=3;goto B457be6;
case 0x457beb:c.instructions+=2;goto B457beb;
case 0x457bed:c.instructions+=1;goto B457bed;
case 0x457bf2:goto L457bf2;
case 0x457bf7:c.instructions+=3;goto B457bf7;
case 0x457bfc:c.instructions+=2;goto B457bfc;
case 0x457bfe:c.instructions+=1;goto B457bfe;
case 0x457c03:goto L457c03;
case 0x457c05:c.instructions+=2;goto B457c05;
case 0x457c06:c.instructions+=1;goto B457c06;
case 0x457c10:goto L457c10;
case 0x457c14:c.instructions+=5;goto B457c14;
case 0x457c16:c.instructions+=4;goto B457c16;
case 0x457c17:c.instructions+=3;goto B457c17;
case 0x457c18:c.instructions+=2;goto B457c18;
case 0x457c1a:c.instructions+=1;goto B457c1a;
case 0x457c1c:goto L457c1c;
case 0x457c1e:c.instructions+=1;goto B457c1e;
case 0x457c20:goto L457c20;
case 0x457c23:c.instructions+=1;goto B457c23;
case 0x457c25:goto L457c25;
case 0x457c2a:goto L457c2a;
case 0x457c2d:c.instructions+=4;goto B457c2d;
case 0x457c2f:c.instructions+=3;goto B457c2f;
case 0x457c33:c.instructions+=2;goto B457c33;
case 0x457c35:c.instructions+=1;goto B457c35;
case 0x457c37:goto L457c37;
case 0x457c39:c.instructions+=1;goto B457c39;
case 0x457c3b:goto L457c3b;
case 0x457c40:c.instructions+=1;goto B457c40;
case 0x457c42:goto L457c42;
case 0x457c47:goto L457c47;
case 0x457c4a:c.instructions+=3;goto B457c4a;
case 0x457c4e:c.instructions+=2;goto B457c4e;
case 0x457c50:c.instructions+=1;goto B457c50;
case 0x457c52:goto L457c52;
case 0x457c54:c.instructions+=1;goto B457c54;
case 0x457c56:goto L457c56;
case 0x457c5b:c.instructions+=1;goto B457c5b;
case 0x457c5d:goto L457c5d;
case 0x457c62:goto L457c62;
case 0x457c65:c.instructions+=3;goto B457c65;
case 0x457c69:c.instructions+=2;goto B457c69;
case 0x457c6b:c.instructions+=1;goto B457c6b;
case 0x457c6d:goto L457c6d;
case 0x457c6f:c.instructions+=1;goto B457c6f;
case 0x457c71:goto L457c71;
case 0x457c76:c.instructions+=1;goto B457c76;
case 0x457c78:goto L457c78;
case 0x457c7d:goto L457c7d;
case 0x457c7e:c.instructions+=4;goto B457c7e;
case 0x457c7f:c.instructions+=3;goto B457c7f;
case 0x457c84:c.instructions+=2;goto B457c84;
case 0x457c87:c.instructions+=1;goto B457c87;
case 0x457c8c:goto L457c8c;
case 0x457c8f:c.instructions+=2;goto B457c8f;
case 0x457c91:c.instructions+=1;goto B457c91;
case 0x457c93:goto L457c93;
case 0x457c98:c.instructions+=2;goto B457c98;
case 0x457c9d:c.instructions+=1;goto B457c9d;
case 0x457ca2:goto L457ca2;
case 0x457ca3:c.instructions+=3;goto B457ca3;
case 0x457ca4:c.instructions+=2;goto B457ca4;
case 0x457ca9:c.instructions+=1;goto B457ca9;
case 0x457cae:goto L457cae;
case 0x457cb1:goto L457cb1;
case 0x457cb2:c.instructions+=3;goto B457cb2;
case 0x457cb4:c.instructions+=2;goto B457cb4;
case 0x457cb5:c.instructions+=1;goto B457cb5;
case 0x457cc0:goto L457cc0;
case 0x457cc4:c.instructions+=5;goto B457cc4;
case 0x457cc6:c.instructions+=4;goto B457cc6;
case 0x457cc7:c.instructions+=3;goto B457cc7;
case 0x457cc8:c.instructions+=2;goto B457cc8;
case 0x457cca:c.instructions+=1;goto B457cca;
case 0x457ccc:goto L457ccc;
case 0x457cce:c.instructions+=1;goto B457cce;
case 0x457cd0:goto L457cd0;
case 0x457cd3:c.instructions+=1;goto B457cd3;
case 0x457cd5:goto L457cd5;
case 0x457cda:goto L457cda;
case 0x457cdd:c.instructions+=4;goto B457cdd;
case 0x457cdf:c.instructions+=3;goto B457cdf;
case 0x457ce3:c.instructions+=2;goto B457ce3;
case 0x457ce5:c.instructions+=1;goto B457ce5;
case 0x457ce7:goto L457ce7;
case 0x457ce9:c.instructions+=1;goto B457ce9;
case 0x457ceb:goto L457ceb;
case 0x457cf0:c.instructions+=1;goto B457cf0;
case 0x457cf2:goto L457cf2;
case 0x457cf7:goto L457cf7;
case 0x457cfa:c.instructions+=3;goto B457cfa;
case 0x457cfe:c.instructions+=2;goto B457cfe;
case 0x457d00:c.instructions+=1;goto B457d00;
case 0x457d02:goto L457d02;
case 0x457d04:c.instructions+=1;goto B457d04;
case 0x457d06:goto L457d06;
case 0x457d0b:c.instructions+=1;goto B457d0b;
case 0x457d0d:goto L457d0d;
case 0x457d12:goto L457d12;
case 0x457d15:c.instructions+=3;goto B457d15;
case 0x457d19:c.instructions+=2;goto B457d19;
case 0x457d1b:c.instructions+=1;goto B457d1b;
case 0x457d1d:goto L457d1d;
case 0x457d1f:c.instructions+=1;goto B457d1f;
case 0x457d21:goto L457d21;
case 0x457d26:c.instructions+=1;goto B457d26;
case 0x457d28:goto L457d28;
case 0x457d2d:goto L457d2d;
case 0x457d2e:c.instructions+=4;goto B457d2e;
case 0x457d2f:c.instructions+=3;goto B457d2f;
case 0x457d34:c.instructions+=2;goto B457d34;
case 0x457d37:c.instructions+=1;goto B457d37;
case 0x457d3c:goto L457d3c;
case 0x457d3f:c.instructions+=2;goto B457d3f;
case 0x457d41:c.instructions+=1;goto B457d41;
case 0x457d43:goto L457d43;
case 0x457d48:c.instructions+=2;goto B457d48;
case 0x457d4d:c.instructions+=1;goto B457d4d;
case 0x457d52:goto L457d52;
case 0x457d53:c.instructions+=3;goto B457d53;
case 0x457d54:c.instructions+=2;goto B457d54;
case 0x457d59:c.instructions+=1;goto B457d59;
case 0x457d5e:goto L457d5e;
case 0x457d61:goto L457d61;
case 0x457d62:c.instructions+=3;goto B457d62;
case 0x457d64:c.instructions+=2;goto B457d64;
case 0x457d65:c.instructions+=1;goto B457d65;
case 0x457d70:goto L457d70;
case 0x457d71:c.instructions+=3;goto B457d71;
case 0x457d76:c.instructions+=2;goto B457d76;
case 0x457d7b:c.instructions+=1;goto B457d7b;
case 0x457d80:goto L457d80;
case 0x457d85:c.instructions+=3;goto B457d85;
case 0x457d8a:c.instructions+=2;goto B457d8a;
case 0x457d8c:c.instructions+=1;goto B457d8c;
case 0x457d91:goto L457d91;
case 0x457d96:c.instructions+=3;goto B457d96;
case 0x457d9b:c.instructions+=2;goto B457d9b;
case 0x457d9d:c.instructions+=1;goto B457d9d;
case 0x457da2:goto L457da2;
case 0x457da7:c.instructions+=3;goto B457da7;
case 0x457dac:c.instructions+=2;goto B457dac;
case 0x457dae:c.instructions+=1;goto B457dae;
case 0x457db3:goto L457db3;
case 0x457db8:c.instructions+=3;goto B457db8;
case 0x457dbd:c.instructions+=2;goto B457dbd;
case 0x457dbf:c.instructions+=1;goto B457dbf;
case 0x457dc4:goto L457dc4;
case 0x457dc9:c.instructions+=3;goto B457dc9;
case 0x457dce:c.instructions+=2;goto B457dce;
case 0x457dd0:c.instructions+=1;goto B457dd0;
case 0x457dd5:goto L457dd5;
case 0x457dda:c.instructions+=3;goto B457dda;
case 0x457ddf:c.instructions+=2;goto B457ddf;
case 0x457de1:c.instructions+=1;goto B457de1;
case 0x457de6:goto L457de6;
case 0x457deb:c.instructions+=3;goto B457deb;
case 0x457df0:c.instructions+=2;goto B457df0;
case 0x457df2:c.instructions+=1;goto B457df2;
case 0x457df7:goto L457df7;
case 0x457dfc:c.instructions+=3;goto B457dfc;
case 0x457e01:c.instructions+=2;goto B457e01;
case 0x457e03:c.instructions+=1;goto B457e03;
case 0x457e08:goto L457e08;
case 0x457e0d:c.instructions+=3;goto B457e0d;
case 0x457e12:c.instructions+=2;goto B457e12;
case 0x457e14:c.instructions+=1;goto B457e14;
case 0x457e19:goto L457e19;
case 0x457e1b:c.instructions+=2;goto B457e1b;
case 0x457e1c:c.instructions+=1;goto B457e1c;
case 0x457e20:goto L457e20;
case 0x457e23:c.instructions+=4;goto B457e23;
case 0x457e27:c.instructions+=3;goto B457e27;
case 0x457e28:c.instructions+=2;goto B457e28;
case 0x457e29:c.instructions+=1;goto B457e29;
case 0x457e2e:goto L457e2e;
case 0x457e31:c.instructions+=1;goto B457e31;
case 0x457e36:goto L457e36;
case 0x457e3a:c.instructions+=10;goto B457e3a;
case 0x457e3c:c.instructions+=9;goto B457e3c;
case 0x457e40:c.instructions+=8;goto B457e40;
case 0x457e44:c.instructions+=7;goto B457e44;
case 0x457e48:c.instructions+=6;goto B457e48;
case 0x457e4a:c.instructions+=5;goto B457e4a;
case 0x457e4e:c.instructions+=4;goto B457e4e;
case 0x457e4f:c.instructions+=3;goto B457e4f;
case 0x457e53:c.instructions+=2;goto B457e53;
case 0x457e54:c.instructions+=1;goto B457e54;
case 0x457e56:goto L457e56;
case 0x457e58:c.instructions+=1;goto B457e58;
case 0x457e5d:goto L457e5d;
case 0x457e5f:c.instructions+=3;goto B457e5f;
case 0x457e60:c.instructions+=2;goto B457e60;
case 0x457e63:c.instructions+=1;goto B457e63;
case 0x457e70:goto L457e70;
case 0x457e74:c.instructions+=5;goto B457e74;
case 0x457e76:c.instructions+=4;goto B457e76;
case 0x457e77:c.instructions+=3;goto B457e77;
case 0x457e78:c.instructions+=2;goto B457e78;
case 0x457e7a:c.instructions+=1;goto B457e7a;
case 0x457e7c:goto L457e7c;
case 0x457e7e:c.instructions+=1;goto B457e7e;
case 0x457e80:goto L457e80;
case 0x457e83:c.instructions+=1;goto B457e83;
case 0x457e85:goto L457e85;
case 0x457e8a:goto L457e8a;
case 0x457e8d:c.instructions+=4;goto B457e8d;
case 0x457e8f:c.instructions+=3;goto B457e8f;
case 0x457e93:c.instructions+=2;goto B457e93;
case 0x457e95:c.instructions+=1;goto B457e95;
case 0x457e97:goto L457e97;
case 0x457e99:c.instructions+=1;goto B457e99;
case 0x457e9b:goto L457e9b;
case 0x457ea0:c.instructions+=1;goto B457ea0;
case 0x457ea2:goto L457ea2;
case 0x457ea7:goto L457ea7;
case 0x457eaa:c.instructions+=3;goto B457eaa;
case 0x457eae:c.instructions+=2;goto B457eae;
case 0x457eb0:c.instructions+=1;goto B457eb0;
case 0x457eb2:goto L457eb2;
case 0x457eb4:c.instructions+=1;goto B457eb4;
case 0x457eb6:goto L457eb6;
case 0x457ebb:c.instructions+=1;goto B457ebb;
case 0x457ebd:goto L457ebd;
case 0x457ec2:goto L457ec2;
case 0x457ec5:c.instructions+=3;goto B457ec5;
case 0x457ec9:c.instructions+=2;goto B457ec9;
case 0x457ecb:c.instructions+=1;goto B457ecb;
case 0x457ecd:goto L457ecd;
case 0x457ecf:c.instructions+=1;goto B457ecf;
case 0x457ed1:goto L457ed1;
case 0x457ed4:c.instructions+=1;goto B457ed4;
case 0x457ed6:goto L457ed6;
case 0x457edb:goto L457edb;
case 0x457edc:c.instructions+=4;goto B457edc;
case 0x457edd:c.instructions+=3;goto B457edd;
case 0x457ee2:c.instructions+=2;goto B457ee2;
case 0x457ee5:c.instructions+=1;goto B457ee5;
case 0x457eea:goto L457eea;
case 0x457eed:c.instructions+=2;goto B457eed;
case 0x457eef:c.instructions+=1;goto B457eef;
case 0x457ef1:goto L457ef1;
case 0x457ef6:c.instructions+=2;goto B457ef6;
case 0x457efb:c.instructions+=1;goto B457efb;
case 0x457f00:goto L457f00;
case 0x457f01:c.instructions+=3;goto B457f01;
case 0x457f02:c.instructions+=2;goto B457f02;
case 0x457f07:c.instructions+=1;goto B457f07;
case 0x457f0c:goto L457f0c;
case 0x457f0f:goto L457f0f;
case 0x457f10:c.instructions+=3;goto B457f10;
case 0x457f12:c.instructions+=2;goto B457f12;
case 0x457f13:c.instructions+=1;goto B457f13;
case 0x457f20:goto L457f20;
case 0x457f24:c.instructions+=5;goto B457f24;
case 0x457f26:c.instructions+=4;goto B457f26;
case 0x457f27:c.instructions+=3;goto B457f27;
case 0x457f28:c.instructions+=2;goto B457f28;
case 0x457f2a:c.instructions+=1;goto B457f2a;
case 0x457f2c:goto L457f2c;
case 0x457f2e:c.instructions+=1;goto B457f2e;
case 0x457f30:goto L457f30;
case 0x457f35:c.instructions+=1;goto B457f35;
case 0x457f37:goto L457f37;
case 0x457f3c:goto L457f3c;
case 0x457f3f:c.instructions+=4;goto B457f3f;
case 0x457f41:c.instructions+=3;goto B457f41;
case 0x457f45:c.instructions+=2;goto B457f45;
case 0x457f4a:c.instructions+=1;goto B457f4a;
case 0x457f4c:goto L457f4c;
case 0x457f51:c.instructions+=1;goto B457f51;
case 0x457f53:goto L457f53;
case 0x457f58:c.instructions+=1;goto B457f58;
case 0x457f5a:goto L457f5a;
case 0x457f5f:goto L457f5f;
case 0x457f62:c.instructions+=3;goto B457f62;
case 0x457f66:c.instructions+=2;goto B457f66;
case 0x457f68:c.instructions+=1;goto B457f68;
case 0x457f6a:goto L457f6a;
case 0x457f6c:c.instructions+=1;goto B457f6c;
case 0x457f6e:goto L457f6e;
case 0x457f71:c.instructions+=1;goto B457f71;
case 0x457f73:goto L457f73;
case 0x457f78:goto L457f78;
case 0x457f7b:c.instructions+=3;goto B457f7b;
case 0x457f7f:c.instructions+=2;goto B457f7f;
case 0x457f82:c.instructions+=1;goto B457f82;
case 0x457f84:goto L457f84;
case 0x457f89:c.instructions+=1;goto B457f89;
case 0x457f8b:goto L457f8b;
case 0x457f8e:c.instructions+=1;goto B457f8e;
case 0x457f90:goto L457f90;
case 0x457f95:goto L457f95;
case 0x457f98:c.instructions+=3;goto B457f98;
case 0x457f9c:c.instructions+=2;goto B457f9c;
case 0x457f9e:c.instructions+=1;goto B457f9e;
case 0x457fa0:goto L457fa0;
case 0x457fa2:c.instructions+=1;goto B457fa2;
case 0x457fa4:goto L457fa4;
case 0x457fa9:c.instructions+=1;goto B457fa9;
case 0x457fab:goto L457fab;
case 0x457fb0:goto L457fb0;
case 0x457fb3:c.instructions+=3;goto B457fb3;
case 0x457fb7:c.instructions+=2;goto B457fb7;
case 0x457fb9:c.instructions+=1;goto B457fb9;
case 0x457fbb:goto L457fbb;
case 0x457fbd:c.instructions+=1;goto B457fbd;
case 0x457fbf:goto L457fbf;
case 0x457fc4:c.instructions+=1;goto B457fc4;
case 0x457fc6:goto L457fc6;
case 0x457fcb:goto L457fcb;
case 0x457fcc:c.instructions+=4;goto B457fcc;
case 0x457fcd:c.instructions+=3;goto B457fcd;
case 0x457fd2:c.instructions+=2;goto B457fd2;
case 0x457fd5:c.instructions+=1;goto B457fd5;
case 0x457fda:goto L457fda;
case 0x457fdd:c.instructions+=2;goto B457fdd;
case 0x457fdf:c.instructions+=1;goto B457fdf;
case 0x457fe1:goto L457fe1;
case 0x457fe6:c.instructions+=2;goto B457fe6;
case 0x457feb:c.instructions+=1;goto B457feb;
case 0x457ff0:goto L457ff0;
case 0x457ff1:c.instructions+=3;goto B457ff1;
case 0x457ff2:c.instructions+=2;goto B457ff2;
case 0x457ff7:c.instructions+=1;goto B457ff7;
case 0x457ffc:goto L457ffc;
case 0x457fff:goto L457fff;
default:missing_instruction(c.pc);}
B457001:L457001:{c.instructions+=1;NFSU2_TR(0x457001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457006ull));
TAIL_STATIC(0x571a00u,571);
}
B457006:L457006:{c.instructions+=3;NFSU2_TR(0x457006);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B457009:{NFSU2_TR(0x457009);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45700b:{NFSU2_TR(0x45700b);
if(r1(R+518)){{goto L45703d;}}
}
B45700d:L45700d:{c.instructions+=9;NFSU2_TR(0x45700d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457013:{NFSU2_TR(0x457013);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B457016:{NFSU2_TR(0x457016);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B457018:{NFSU2_TR(0x457018);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B457020:{NFSU2_TR(0x457020);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457027:{NFSU2_TR(0x457027);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45702d:{NFSU2_TR(0x45702d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457031:{NFSU2_TR(0x457031);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B457039:{NFSU2_TR(0x457039);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45703d:L45703d:{c.instructions+=5;NFSU2_TR(0x45703d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B457044:{NFSU2_TR(0x457044);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457048:{NFSU2_TR(0x457048);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45704c:{NFSU2_TR(0x45704c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B457050:{NFSU2_TR(0x457050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457055ull));
TAIL_STATIC(0x75bed4u,75b);
}
B457055:L457055:{c.instructions+=4;NFSU2_TR(0x457055);
__builtin_memmove((R+8),gp(0x787034),4);
}
B45705b:{NFSU2_TR(0x45705b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45705c:{NFSU2_TR(0x45705c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c84ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B457063:{NFSU2_TR(0x457063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457068ull));
TAIL_STATIC(0x401020u,401);
}
B457068:L457068:{c.instructions+=7;NFSU2_TR(0x457068);
__builtin_memmove((R+4),gp(0x787030),4);
}
B45706e:{NFSU2_TR(0x45706e);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B457071:{NFSU2_TR(0x457071);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457075:{NFSU2_TR(0x457075);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B457079:{NFSU2_TR(0x457079);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45707c:{NFSU2_TR(0x45707c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45707d:{NFSU2_TR(0x45707d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457082ull));
TAIL_STATIC(0x401020u,401);
}
B457082:L457082:{c.instructions+=11;NFSU2_TR(0x457082);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B457085:{NFSU2_TR(0x457085);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B45708c:{NFSU2_TR(0x45708c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457090:{NFSU2_TR(0x457090);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B457094:{NFSU2_TR(0x457094);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457098:{NFSU2_TR(0x457098);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45709b:{NFSU2_TR(0x45709b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45709f:{NFSU2_TR(0x45709f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4570a0:{NFSU2_TR(0x4570a0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4570a4:{NFSU2_TR(0x4570a4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4570a7:{NFSU2_TR(0x4570a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4570acull));
TAIL_STATIC(0x401090u,401);
}
B4570ac:L4570ac:{c.instructions+=2;NFSU2_TR(0x4570ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4570af:{NFSU2_TR(0x4570af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4570b4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4570b4:L4570b4:{c.instructions+=13;NFSU2_TR(0x4570b4);
__builtin_memmove((R+4),gp(0x78702c),4);
}
B4570ba:{NFSU2_TR(0x4570ba);
__builtin_memmove((R+8),gp(0x787028),4);
}
B4570c0:{NFSU2_TR(0x4570c0);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4570c5:{NFSU2_TR(0x4570c5);
u8 U[4];
w4(U+0,u32(0xefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4570ca:{NFSU2_TR(0x4570ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4570cb:{NFSU2_TR(0x4570cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ca0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4570d1:{NFSU2_TR(0x4570d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c86ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4570d8:{NFSU2_TR(0x4570d8);
__builtin_memmove((R+0),gp(0x787024),4);
}
B4570dd:{NFSU2_TR(0x4570dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4570de:{NFSU2_TR(0x4570de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4570df:{NFSU2_TR(0x4570df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4570e0:{NFSU2_TR(0x4570e0);
__builtin_memmove((R+4),(R+12),4);
}
B4570e2:{NFSU2_TR(0x4570e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4570e7ull));
TAIL_STATIC(0x443ac0u,443);
}
B4570e7:L4570e7:{c.instructions+=22;NFSU2_TR(0x4570e7);
{u32 ea_=u32(r4(R+12)+u32(7328u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4570ed:{NFSU2_TR(0x4570ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4570f3:{NFSU2_TR(0x4570f3);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4570f9:{NFSU2_TR(0x4570f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4570ff:{NFSU2_TR(0x4570ff);
__builtin_memmove((R+4),(R+12),4);
}
B457101:{NFSU2_TR(0x457101);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457103:{NFSU2_TR(0x457103);
u8 U[12];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B457107:{NFSU2_TR(0x457107);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45710a:{NFSU2_TR(0x45710a);
__builtin_memmove((R+8),gp(0x78702c),4);
}
B457110:{NFSU2_TR(0x457110);
__builtin_memmove((R+4),gp(0x787024),4);
}
B457116:{NFSU2_TR(0x457116);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B457118:{NFSU2_TR(0x457118);
u8 U[4];
w4(U+0,u32(0xedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45711d:{NFSU2_TR(0x45711d);
u8 U[4];
w4(U+0,u32(0xeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457122:{NFSU2_TR(0x457122);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457123:{NFSU2_TR(0x457123);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457125:{NFSU2_TR(0x457125);
__builtin_memmove((R+0),gp(0x787028),4);
}
B45712a:{NFSU2_TR(0x45712a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B457130:{NFSU2_TR(0x457130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457131:{NFSU2_TR(0x457131);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457132:{NFSU2_TR(0x457132);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457133:{NFSU2_TR(0x457133);
__builtin_memmove((R+4),(R+12),4);
}
B457135:{NFSU2_TR(0x457135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45713aull));
TAIL_STATIC(0x443ac0u,443);
}
B45713a:L45713a:{c.instructions+=10;NFSU2_TR(0x45713a);
__builtin_memmove((R+0),gp(0x787044),4);
}
B45713f:{NFSU2_TR(0x45713f);
__builtin_memmove((R+4),gp(0x787040),4);
}
B457145:{NFSU2_TR(0x457145);
{u32 ea_=u32(r4(R+12)+u32(7324u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45714b:{NFSU2_TR(0x45714b);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457151:{NFSU2_TR(0x457151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457152:{NFSU2_TR(0x457152);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457153:{NFSU2_TR(0x457153);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457154:{NFSU2_TR(0x457154);
{u32 ea_=u32(r4(R+12)+u32(7304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45715a:{NFSU2_TR(0x45715a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45715d:{NFSU2_TR(0x45715d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457162ull));
TAIL_STATIC(0x401090u,401);
}
B457162:L457162:{c.instructions+=14;NFSU2_TR(0x457162);
__builtin_memmove((R+8),gp(0x78700c),4);
}
B457168:{NFSU2_TR(0x457168);
{u32 ea_=u32(r4(R+12)+u32(7304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45716e:{NFSU2_TR(0x45716e);
__builtin_memmove((R+0),gp(0x787008),4);
}
B457173:{NFSU2_TR(0x457173);
__builtin_memmove((R+4),gp(0x787004),4);
}
B457179:{NFSU2_TR(0x457179);
u8 U[6];
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45717c:{NFSU2_TR(0x45717c);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457181:{NFSU2_TR(0x457181);
u8 U[4];
w4(U+0,u32(0xe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457186:{NFSU2_TR(0x457186);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457187:{NFSU2_TR(0x457187);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45718d:{NFSU2_TR(0x45718d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45718e:{NFSU2_TR(0x45718e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45718f:{NFSU2_TR(0x45718f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457190:{NFSU2_TR(0x457190);
__builtin_memmove((R+4),(R+12),4);
}
B457192:{NFSU2_TR(0x457192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457197ull));
TAIL_STATIC(0x443ac0u,443);
}
B457197:L457197:{c.instructions+=14;NFSU2_TR(0x457197);
{u32 ea_=u32(r4(R+12)+u32(7308u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45719d:{NFSU2_TR(0x45719d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4571a3:{NFSU2_TR(0x4571a3);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4571a9:{NFSU2_TR(0x4571a9);
__builtin_memmove((R+4),gp(0x787000),4);
}
B4571af:{NFSU2_TR(0x4571af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4571b2:{NFSU2_TR(0x4571b2);
__builtin_memmove((R+8),gp(0x786ffc),4);
}
B4571b8:{NFSU2_TR(0x4571b8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4571ba:{NFSU2_TR(0x4571ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4571bb:{NFSU2_TR(0x4571bb);
u8 U[12];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4571c2:{NFSU2_TR(0x4571c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4571c3:{NFSU2_TR(0x4571c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4571c4:{NFSU2_TR(0x4571c4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4571c6:{NFSU2_TR(0x4571c6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4571c9:{NFSU2_TR(0x4571c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4571ceull));
TAIL_STATIC(0x401090u,401);
}
B4571ce:L4571ce:{c.instructions+=14;NFSU2_TR(0x4571ce);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4571d0:{NFSU2_TR(0x4571d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4571d6:{NFSU2_TR(0x4571d6);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4571dc:{NFSU2_TR(0x4571dc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4571e0:{NFSU2_TR(0x4571e0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4571e3:{NFSU2_TR(0x4571e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4571e6:{NFSU2_TR(0x4571e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4571e8:{NFSU2_TR(0x4571e8);
u8 U[12];
w4(U+0,u32(u32(u32(0x204ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4571ef:{NFSU2_TR(0x4571ef);
u8 U[4];
w4(U+0,u32(0x47c35000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4571f4:{NFSU2_TR(0x4571f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4571f6:{NFSU2_TR(0x4571f6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4571f8:{NFSU2_TR(0x4571f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4571f9:{NFSU2_TR(0x4571f9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4571fc:{NFSU2_TR(0x4571fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457201ull));
TAIL_STATIC(0x401090u,401);
}
B457201:L457201:{c.instructions+=4;NFSU2_TR(0x457201);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457206:{NFSU2_TR(0x457206);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457208:{NFSU2_TR(0x457208);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45720a:{NFSU2_TR(0x45720a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45720full));
TAIL_STATIC(0x571a00u,571);
}
B45720f:L45720f:{c.instructions+=3;NFSU2_TR(0x45720f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B457212:{NFSU2_TR(0x457212);
u8 U[4];
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457214:{NFSU2_TR(0x457214);
if(r1(R+518)){{goto L4572b6;}}
}
B45721a:L45721a:{c.instructions+=12;NFSU2_TR(0x45721a);
__builtin_memmove((R+4),gp(0x787050),4);
}
B457220:{NFSU2_TR(0x457220);
__builtin_memmove((R+8),gp(0x78704c),4);
}
B457226:{NFSU2_TR(0x457226);
__builtin_memmove((R+0),gp(0x787048),4);
}
B45722b:{NFSU2_TR(0x45722b);
u8 U[4];
w4(U+0,u32(0xe9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457230:{NFSU2_TR(0x457230);
u8 U[4];
w4(U+0,u32(0xeaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457235:{NFSU2_TR(0x457235);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457236:{NFSU2_TR(0x457236);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ca4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45723c:{NFSU2_TR(0x45723c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45723d:{NFSU2_TR(0x45723d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45723e:{NFSU2_TR(0x45723e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45723f:{NFSU2_TR(0x45723f);
__builtin_memmove((R+4),(R+12),4);
}
B457241:{NFSU2_TR(0x457241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457246ull));
TAIL_STATIC(0x443ac0u,443);
}
B457246:L457246:{c.instructions+=5;NFSU2_TR(0x457246);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B45724c:{NFSU2_TR(0x45724c);
{u32 ea_=u32(r4(R+12)+u32(7332u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B457252:{NFSU2_TR(0x457252);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457254:{NFSU2_TR(0x457254);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B457257:{NFSU2_TR(0x457257);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L457284;}}
}
B457259:L457259:{c.instructions+=7;NFSU2_TR(0x457259);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45725f:{NFSU2_TR(0x45725f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B457265:{NFSU2_TR(0x457265);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B457267:{NFSU2_TR(0x457267);
u8 U[13];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B45726e:{NFSU2_TR(0x45726e);
w1(R+512,u8((r1(R+0))<(u8(0x25ull))));
}
B457270:{NFSU2_TR(0x457270);
u8 U[12];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B457277:{NFSU2_TR(0x457277);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L457284;}}
}
B457279:L457279:{c.instructions+=4;NFSU2_TR(0x457279);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B45727b:{NFSU2_TR(0x45727b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45727d:{NFSU2_TR(0x45727d);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B45727f:{NFSU2_TR(0x45727f);
{goto L45731d;}
}
B457284:L457284:{c.instructions+=4;NFSU2_TR(0x457284);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45728a:{NFSU2_TR(0x45728a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45728c:{NFSU2_TR(0x45728c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45728f:{NFSU2_TR(0x45728f);
if(r1(R+514)){{goto L45731d;}}
}
B457295:L457295:{c.instructions+=7;NFSU2_TR(0x457295);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45729b:{NFSU2_TR(0x45729b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4572a1:{NFSU2_TR(0x4572a1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4572a3:{NFSU2_TR(0x4572a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4572aa:{NFSU2_TR(0x4572aa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4572ac:{NFSU2_TR(0x4572ac);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4572ae:{NFSU2_TR(0x4572ae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L45731d;}}
}
B4572b0:L4572b0:{c.instructions+=3;NFSU2_TR(0x4572b0);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4572b2:{NFSU2_TR(0x4572b2);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B4572b4:{NFSU2_TR(0x4572b4);
{goto L45731d;}
}
B4572b6:L4572b6:{c.instructions+=12;NFSU2_TR(0x4572b6);
__builtin_memmove((R+4),gp(0x787020),4);
}
B4572bc:{NFSU2_TR(0x4572bc);
__builtin_memmove((R+8),gp(0x78701c),4);
}
B4572c2:{NFSU2_TR(0x4572c2);
__builtin_memmove((R+0),gp(0x787018),4);
}
B4572c7:{NFSU2_TR(0x4572c7);
u8 U[4];
w4(U+0,u32(0xe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4572cc:{NFSU2_TR(0x4572cc);
u8 U[4];
w4(U+0,u32(0xe6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4572d1:{NFSU2_TR(0x4572d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4572d2:{NFSU2_TR(0x4572d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4572d8:{NFSU2_TR(0x4572d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4572d9:{NFSU2_TR(0x4572d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4572da:{NFSU2_TR(0x4572da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4572db:{NFSU2_TR(0x4572db);
__builtin_memmove((R+4),(R+12),4);
}
B4572dd:{NFSU2_TR(0x4572dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4572e2ull));
TAIL_STATIC(0x443ac0u,443);
}
B4572e2:L4572e2:{c.instructions+=14;NFSU2_TR(0x4572e2);
{u32 ea_=u32(r4(R+12)+u32(7312u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4572e8:{NFSU2_TR(0x4572e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4572ee:{NFSU2_TR(0x4572ee);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4572f4:{NFSU2_TR(0x4572f4);
__builtin_memmove((R+0),gp(0x787014),4);
}
B4572f9:{NFSU2_TR(0x4572f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4572fc:{NFSU2_TR(0x4572fc);
__builtin_memmove((R+4),gp(0x787010),4);
}
B457302:{NFSU2_TR(0x457302);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B457304:{NFSU2_TR(0x457304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457305:{NFSU2_TR(0x457305);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B45730c:{NFSU2_TR(0x45730c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45730d:{NFSU2_TR(0x45730d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45730e:{NFSU2_TR(0x45730e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B457310:{NFSU2_TR(0x457310);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457313:{NFSU2_TR(0x457313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457318ull));
TAIL_STATIC(0x401090u,401);
}
B457318:L457318:{c.instructions+=2;NFSU2_TR(0x457318);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45731a:{NFSU2_TR(0x45731a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45731d:L45731d:{c.instructions+=8;NFSU2_TR(0x45731d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45731f:{NFSU2_TR(0x45731f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B457326:{NFSU2_TR(0x457326);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45732a:{NFSU2_TR(0x45732a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45732e:{NFSU2_TR(0x45732e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45732f:{NFSU2_TR(0x45732f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457330:{NFSU2_TR(0x457330);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457331:{NFSU2_TR(0x457331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457336ull));
TAIL_STATIC(0x43c390u,43c);
}
B457336:L457336:{c.instructions+=17;NFSU2_TR(0x457336);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45733a:{NFSU2_TR(0x45733a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45733e:{NFSU2_TR(0x45733e);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B457342:{NFSU2_TR(0x457342);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B457345:{NFSU2_TR(0x457345);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B457347:{NFSU2_TR(0x457347);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B457349:{NFSU2_TR(0x457349);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45734d:{NFSU2_TR(0x45734d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457351:{NFSU2_TR(0x457351);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B457353:{NFSU2_TR(0x457353);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457357:{NFSU2_TR(0x457357);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45735b:{NFSU2_TR(0x45735b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45735f:{NFSU2_TR(0x45735f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457363:{NFSU2_TR(0x457363);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457367:{NFSU2_TR(0x457367);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B457369:{NFSU2_TR(0x457369);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45736d:{NFSU2_TR(0x45736d);
if(r1(R+518)){{goto L457384;}}
}
B45736f:L45736f:{c.instructions+=4;NFSU2_TR(0x45736f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B457375:{NFSU2_TR(0x457375);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B45737b:{NFSU2_TR(0x45737b);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B457382:{NFSU2_TR(0x457382);
{goto L457397;}
}
B457384:L457384:{c.instructions+=3;NFSU2_TR(0x457384);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45738a:{NFSU2_TR(0x45738a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B457390:{NFSU2_TR(0x457390);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B457397:L457397:{c.instructions+=3;NFSU2_TR(0x457397);
w4(R+0,u32(r1(R+0)));
}
B45739a:{NFSU2_TR(0x45739a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45739c:{NFSU2_TR(0x45739c);
if(r1(R+518)){{goto L4573da;}}
}
B45739e:L45739e:{c.instructions+=2;NFSU2_TR(0x45739e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4573a1:{NFSU2_TR(0x4573a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L457445;}}
}
B4573a7:L4573a7:{c.instructions+=5;NFSU2_TR(0x4573a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4573ad:{NFSU2_TR(0x4573ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4573af:{NFSU2_TR(0x4573af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4573b0:{NFSU2_TR(0x4573b0);
w4(R+4,u32(0x827b88ull));
}
B4573b5:{NFSU2_TR(0x4573b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4573baull));
TAIL_STATIC(0x432490u,432);
}
B4573ba:L4573ba:{c.instructions+=5;NFSU2_TR(0x4573ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4573bd:{NFSU2_TR(0x4573bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4573be:{NFSU2_TR(0x4573be);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4573c2:{NFSU2_TR(0x4573c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4573c3:{NFSU2_TR(0x4573c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4573c8ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B4573c8:L4573c8:{c.instructions+=5;NFSU2_TR(0x4573c8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4573cc:{NFSU2_TR(0x4573cc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4573d0:{NFSU2_TR(0x4573d0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4573d4:{NFSU2_TR(0x4573d4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4573d8:{NFSU2_TR(0x4573d8);
{goto L457402;}
}
B4573da:L4573da:{c.instructions+=7;NFSU2_TR(0x4573da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4573e0:{NFSU2_TR(0x4573e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4573e2:{NFSU2_TR(0x4573e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B4573e7:{NFSU2_TR(0x4573e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4573e8:{NFSU2_TR(0x4573e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4573ec:{NFSU2_TR(0x4573ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4573ed:{NFSU2_TR(0x4573ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4573f2ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B4573f2:L4573f2:{c.instructions+=4;NFSU2_TR(0x4573f2);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4573f6:{NFSU2_TR(0x4573f6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4573fa:{NFSU2_TR(0x4573fa);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4573fe:{NFSU2_TR(0x4573fe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457402:L457402:{c.instructions+=17;NFSU2_TR(0x457402);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B457404:{NFSU2_TR(0x457404);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B457407:{NFSU2_TR(0x457407);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45740b:{NFSU2_TR(0x45740b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457411:{NFSU2_TR(0x457411);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B457413:{NFSU2_TR(0x457413);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45741a:{NFSU2_TR(0x45741a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45741e:{NFSU2_TR(0x45741e);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457422:{NFSU2_TR(0x457422);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457426:{NFSU2_TR(0x457426);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45742a:{NFSU2_TR(0x45742a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45742c:{NFSU2_TR(0x45742c);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457430:{NFSU2_TR(0x457430);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457436:{NFSU2_TR(0x457436);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B457438:{NFSU2_TR(0x457438);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45743f:{NFSU2_TR(0x45743f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B457441:{NFSU2_TR(0x457441);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457445:L457445:{c.instructions+=8;NFSU2_TR(0x457445);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45744b:{NFSU2_TR(0x45744b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45744f:{NFSU2_TR(0x45744f);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B457453:{NFSU2_TR(0x457453);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B457459:{NFSU2_TR(0x457459);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B45745b:{NFSU2_TR(0x45745b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45745d:{NFSU2_TR(0x45745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B457460:{NFSU2_TR(0x457460);
if(r1(R+518)){{goto L45748c;}}
}
B457462:L457462:{c.instructions+=9;NFSU2_TR(0x457462);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B457465:{NFSU2_TR(0x457465);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(436u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45746c:{NFSU2_TR(0x45746c);
u8 U[12];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B457473:{NFSU2_TR(0x457473);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457475:{NFSU2_TR(0x457475);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45747b:{NFSU2_TR(0x45747b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B457481:{NFSU2_TR(0x457481);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B457483:{NFSU2_TR(0x457483);
u8 U[12];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B45748a:{NFSU2_TR(0x45748a);
{goto L4574b4;}
}
B45748c:L45748c:{c.instructions+=8;NFSU2_TR(0x45748c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B45748f:{NFSU2_TR(0x45748f);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(460u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B457496:{NFSU2_TR(0x457496);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B45749d:{NFSU2_TR(0x45749d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45749f:{NFSU2_TR(0x45749f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4574a5:{NFSU2_TR(0x4574a5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4574ab:{NFSU2_TR(0x4574ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B4574ad:{NFSU2_TR(0x4574ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4574b4:L4574b4:{c.instructions+=6;NFSU2_TR(0x4574b4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4574b6:{NFSU2_TR(0x4574b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4574ba:{NFSU2_TR(0x4574ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4574bb:{NFSU2_TR(0x4574bb);
__builtin_memmove((R+4),(R+12),4);
}
B4574bd:{NFSU2_TR(0x4574bd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4574bf:{NFSU2_TR(0x4574bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4574c4ull));
TAIL_STATIC(0x449520u,449);
}
B4574c4:L4574c4:{c.instructions+=1;NFSU2_TR(0x4574c4);
{goto L457934;}
}
B4574c9:L4574c9:{c.instructions+=3;NFSU2_TR(0x4574c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4574cf:{NFSU2_TR(0x4574cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4574d1:{NFSU2_TR(0x4574d1);
if(r1(R+518)){{goto L4574df;}}
}
B4574d3:L4574d3:{c.instructions+=3;NFSU2_TR(0x4574d3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4574d4:{NFSU2_TR(0x4574d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4574da:{NFSU2_TR(0x4574da);
{goto L457934;}
}
B4574df:L4574df:{c.instructions+=3;NFSU2_TR(0x4574df);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4574e5:{NFSU2_TR(0x4574e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4574e7:{NFSU2_TR(0x4574e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L457934;}}
}
B4574ed:L4574ed:{c.instructions+=2;NFSU2_TR(0x4574ed);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4574f0:{NFSU2_TR(0x4574f0);
if(r1(R+518)){{goto L457500;}}
}
B4574f2:L4574f2:{c.instructions+=2;NFSU2_TR(0x4574f2);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4574f5:{NFSU2_TR(0x4574f5);
if(r1(R+518)){{goto L457500;}}
}
B4574f7:L4574f7:{c.instructions+=2;NFSU2_TR(0x4574f7);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4574fa:{NFSU2_TR(0x4574fa);
if(r1(R+518)){{goto L457500;}}
}
B4574fc:L4574fc:{c.instructions+=2;NFSU2_TR(0x4574fc);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4574fe:{NFSU2_TR(0x4574fe);
{goto L457505;}
}
B457500:L457500:{c.instructions+=1;NFSU2_TR(0x457500);
w4(R+28,u32(0x1ull));
}
B457505:L457505:{c.instructions+=5;NFSU2_TR(0x457505);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45750a:{NFSU2_TR(0x45750a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45750c:{NFSU2_TR(0x45750c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457510:{NFSU2_TR(0x457510);
s1(0x828648,u8(0x0ull));
}
B457517:{NFSU2_TR(0x457517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45751cull));
TAIL_STATIC(0x571a00u,571);
}
B45751c:L45751c:{c.instructions+=3;NFSU2_TR(0x45751c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45751f:{NFSU2_TR(0x45751f);
u8 U[4];
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457521:{NFSU2_TR(0x457521);
if(r1(R+518)){{goto L457827;}}
}
B457527:L457527:{c.instructions+=22;NFSU2_TR(0x457527);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45752d:{NFSU2_TR(0x45752d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B457533:{NFSU2_TR(0x457533);
__builtin_memmove((R+4),(R+28),4);
}
B457535:{NFSU2_TR(0x457535);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B457538:{NFSU2_TR(0x457538);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B45753c:{NFSU2_TR(0x45753c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45753d:{NFSU2_TR(0x45753d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457541:{NFSU2_TR(0x457541);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B457543:{NFSU2_TR(0x457543);
u8 U[12];
w4(U+0,u32(u32(u32(0x213ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B45754a:{NFSU2_TR(0x45754a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B45754e:{NFSU2_TR(0x45754e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B457550:{NFSU2_TR(0x457550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457551:{NFSU2_TR(0x457551);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B457554:{NFSU2_TR(0x457554);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457556:{NFSU2_TR(0x457556);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x212ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45755c:{NFSU2_TR(0x45755c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457560:{NFSU2_TR(0x457560);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B457566:{NFSU2_TR(0x457566);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B457569:{NFSU2_TR(0x457569);
s1(0x828648,u8(0x1ull));
}
B457570:{NFSU2_TR(0x457570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457571:{NFSU2_TR(0x457571);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B457575:{NFSU2_TR(0x457575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45757aull));
TAIL_STATIC(0x442120u,442);
}
B45757a:L45757a:{c.instructions+=13;NFSU2_TR(0x45757a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45757e:{NFSU2_TR(0x45757e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45757f:{NFSU2_TR(0x45757f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457583:{NFSU2_TR(0x457583);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B457587:{NFSU2_TR(0x457587);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457588:{NFSU2_TR(0x457588);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45758c:{NFSU2_TR(0x45758c);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B457590:{NFSU2_TR(0x457590);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457591:{NFSU2_TR(0x457591);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457595:{NFSU2_TR(0x457595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457596:{NFSU2_TR(0x457596);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457597:{NFSU2_TR(0x457597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457598:{NFSU2_TR(0x457598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45759dull));
TAIL_STATIC(0x442280u,442);
}
B45759d:L45759d:{c.instructions+=2;NFSU2_TR(0x45759d);
u8 U[4];
w4(U+0,u32(0xf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575a2:{NFSU2_TR(0x4575a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4575a7ull));
TAIL_STATIC(0x450f80u,450);
}
B4575a7:L4575a7:{c.instructions+=8;NFSU2_TR(0x4575a7);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4575ad:{NFSU2_TR(0x4575ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4575b0:{NFSU2_TR(0x4575b0);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575b5:{NFSU2_TR(0x4575b5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4575b9:{NFSU2_TR(0x4575b9);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575be:{NFSU2_TR(0x4575be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575bf:{NFSU2_TR(0x4575bf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4575c2:{NFSU2_TR(0x4575c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4575c7ull));
TAIL_STATIC(0x401090u,401);
}
B4575c7:L4575c7:{c.instructions+=3;NFSU2_TR(0x4575c7);
u8 U[4];
w4(U+0,u32(0xf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575cc:{NFSU2_TR(0x4575cc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4575d0:{NFSU2_TR(0x4575d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4575d5ull));
TAIL_STATIC(0x450f80u,450);
}
B4575d5:L4575d5:{c.instructions+=8;NFSU2_TR(0x4575d5);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4575db:{NFSU2_TR(0x4575db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4575de:{NFSU2_TR(0x4575de);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575e3:{NFSU2_TR(0x4575e3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4575e7:{NFSU2_TR(0x4575e7);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575ec:{NFSU2_TR(0x4575ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4575ed:{NFSU2_TR(0x4575ed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4575f0:{NFSU2_TR(0x4575f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4575f5ull));
TAIL_STATIC(0x401090u,401);
}
B4575f5:L4575f5:{c.instructions+=14;NFSU2_TR(0x4575f5);
__builtin_memmove((R+4),gp(0x78700c),4);
}
B4575fb:{NFSU2_TR(0x4575fb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4575ff:{NFSU2_TR(0x4575ff);
__builtin_memmove((R+8),gp(0x787008),4);
}
B457605:{NFSU2_TR(0x457605);
__builtin_memmove((R+0),gp(0x787004),4);
}
B45760a:{NFSU2_TR(0x45760a);
u8 U[6];
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45760d:{NFSU2_TR(0x45760d);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457612:{NFSU2_TR(0x457612);
u8 U[4];
w4(U+0,u32(0xe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457617:{NFSU2_TR(0x457617);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457618:{NFSU2_TR(0x457618);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45761e:{NFSU2_TR(0x45761e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45761f:{NFSU2_TR(0x45761f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457620:{NFSU2_TR(0x457620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457621:{NFSU2_TR(0x457621);
__builtin_memmove((R+4),(R+12),4);
}
B457623:{NFSU2_TR(0x457623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457628ull));
TAIL_STATIC(0x443ac0u,443);
}
B457628:L457628:{c.instructions+=7;NFSU2_TR(0x457628);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45762e:{NFSU2_TR(0x45762e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457633:{NFSU2_TR(0x457633);
u8 U[4];
w4(U+0,u32(0x3dcccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457638:{NFSU2_TR(0x457638);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45763c:{NFSU2_TR(0x45763c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45763d:{NFSU2_TR(0x45763d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457640:{NFSU2_TR(0x457640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457645ull));
TAIL_STATIC(0x401090u,401);
}
B457645:L457645:{c.instructions+=12;NFSU2_TR(0x457645);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457649:{NFSU2_TR(0x457649);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45764d:{NFSU2_TR(0x45764d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457651:{NFSU2_TR(0x457651);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B457655:{NFSU2_TR(0x457655);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457656:{NFSU2_TR(0x457656);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45765a:{NFSU2_TR(0x45765a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45765b:{NFSU2_TR(0x45765b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45765c:{NFSU2_TR(0x45765c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45765d:{NFSU2_TR(0x45765d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B457661:{NFSU2_TR(0x457661);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B457665:{NFSU2_TR(0x457665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45766aull));
TAIL_STATIC(0x4422d0u,442);
}
B45766a:L45766a:{c.instructions+=11;NFSU2_TR(0x45766a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45766e:{NFSU2_TR(0x45766e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B457672:{NFSU2_TR(0x457672);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B457676:{NFSU2_TR(0x457676);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457677:{NFSU2_TR(0x457677);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45767b:{NFSU2_TR(0x45767b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45767c:{NFSU2_TR(0x45767c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45767d:{NFSU2_TR(0x45767d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45767e:{NFSU2_TR(0x45767e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B457682:{NFSU2_TR(0x457682);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B457686:{NFSU2_TR(0x457686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45768bull));
TAIL_STATIC(0x442180u,442);
}
B45768b:L45768b:{c.instructions+=4;NFSU2_TR(0x45768b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45768f:{NFSU2_TR(0x45768f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457695:{NFSU2_TR(0x457695);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45769b:{NFSU2_TR(0x45769b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4576a0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4576a0:L4576a0:{c.instructions+=9;NFSU2_TR(0x4576a0);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4576a4:{NFSU2_TR(0x4576a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4576aa:{NFSU2_TR(0x4576aa);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4576b0:{NFSU2_TR(0x4576b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4576b4:{NFSU2_TR(0x4576b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4576ba:{NFSU2_TR(0x4576ba);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4576c0:{NFSU2_TR(0x4576c0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B4576c2:{NFSU2_TR(0x4576c2);
u8 U[13];
w4(U+0,u32(u32(u32(0x212ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4576c9:{NFSU2_TR(0x4576c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4576ceull));
TAIL_STATIC(0x75bed4u,75b);
}
B4576ce:L4576ce:{c.instructions+=9;NFSU2_TR(0x4576ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4576d4:{NFSU2_TR(0x4576d4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4576d8:{NFSU2_TR(0x4576d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4576dc:{NFSU2_TR(0x4576dc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4576e2:{NFSU2_TR(0x4576e2);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4576e8:{NFSU2_TR(0x4576e8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4576ee:{NFSU2_TR(0x4576ee);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B4576f0:{NFSU2_TR(0x4576f0);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4576f3:{NFSU2_TR(0x4576f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4576f8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4576f8:L4576f8:{c.instructions+=6;NFSU2_TR(0x4576f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4576fe:{NFSU2_TR(0x4576fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B457704:{NFSU2_TR(0x457704);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457706:{NFSU2_TR(0x457706);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45770b:{NFSU2_TR(0x45770b);
u8 U[13];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B457712:{NFSU2_TR(0x457712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457717ull));
TAIL_STATIC(0x450f80u,450);
}
B457717:L457717:{c.instructions+=18;NFSU2_TR(0x457717);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45771d:{NFSU2_TR(0x45771d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B457721:{NFSU2_TR(0x457721);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B457727:{NFSU2_TR(0x457727);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B457729:{NFSU2_TR(0x457729);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45772f:{NFSU2_TR(0x45772f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B457731:{NFSU2_TR(0x457731);
u8 U[13];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B457739:{NFSU2_TR(0x457739);
u8 U[12];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B457740:{NFSU2_TR(0x457740);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457744:{NFSU2_TR(0x457744);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B457747:{NFSU2_TR(0x457747);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45774c:{NFSU2_TR(0x45774c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B457750:{NFSU2_TR(0x457750);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457752:{NFSU2_TR(0x457752);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457753:{NFSU2_TR(0x457753);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457759:{NFSU2_TR(0x457759);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45775b:{NFSU2_TR(0x45775b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45775e:{NFSU2_TR(0x45775e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457763ull));
TAIL_STATIC(0x401090u,401);
}
B457763:L457763:{c.instructions+=3;NFSU2_TR(0x457763);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457769:{NFSU2_TR(0x457769);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45776f:{NFSU2_TR(0x45776f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457774ull));
TAIL_STATIC(0x75bed4u,75b);
}
B457774:L457774:{c.instructions+=3;NFSU2_TR(0x457774);
u8 U[4];
w4(U+0,u32(0xf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457779:{NFSU2_TR(0x457779);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B45777b:{NFSU2_TR(0x45777b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457780ull));
TAIL_STATIC(0x450f80u,450);
}
B457780:L457780:{c.instructions+=17;NFSU2_TR(0x457780);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B457782:{NFSU2_TR(0x457782);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457788:{NFSU2_TR(0x457788);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45778b:{NFSU2_TR(0x45778b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B45778e:{NFSU2_TR(0x45778e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B457790:{NFSU2_TR(0x457790);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B457798:{NFSU2_TR(0x457798);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45779e:{NFSU2_TR(0x45779e);
u8 U[12];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4577a5:{NFSU2_TR(0x4577a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4577a9:{NFSU2_TR(0x4577a9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577ae:{NFSU2_TR(0x4577ae);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4577b2:{NFSU2_TR(0x4577b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577b4:{NFSU2_TR(0x4577b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577b5:{NFSU2_TR(0x4577b5);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4577bb:{NFSU2_TR(0x4577bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4577bd:{NFSU2_TR(0x4577bd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4577c0:{NFSU2_TR(0x4577c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4577c5ull));
TAIL_STATIC(0x401090u,401);
}
B4577c5:L4577c5:{c.instructions+=4;NFSU2_TR(0x4577c5);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4577cb:{NFSU2_TR(0x4577cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4577ce:{NFSU2_TR(0x4577ce);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4577d4:{NFSU2_TR(0x4577d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4577d9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4577d9:L4577d9:{c.instructions+=13;NFSU2_TR(0x4577d9);
__builtin_memmove((R+4),gp(0x787058),4);
}
B4577df:{NFSU2_TR(0x4577df);
__builtin_memmove((R+8),gp(0x787054),4);
}
B4577e5:{NFSU2_TR(0x4577e5);
u8 U[4];
w4(U+0,u32(0xedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577ea:{NFSU2_TR(0x4577ea);
u8 U[4];
w4(U+0,u32(0xeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577ef:{NFSU2_TR(0x4577ef);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B4577f1:{NFSU2_TR(0x4577f1);
__builtin_memmove((R+0),gp(0x78705c),4);
}
B4577f6:{NFSU2_TR(0x4577f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577f7:{NFSU2_TR(0x4577f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4577fd:{NFSU2_TR(0x4577fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577fe:{NFSU2_TR(0x4577fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4577ff:{NFSU2_TR(0x4577ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457800:{NFSU2_TR(0x457800);
__builtin_memmove((R+4),(R+12),4);
}
B457802:{NFSU2_TR(0x457802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457807ull));
TAIL_STATIC(0x443ac0u,443);
}
B457807:L457807:{c.instructions+=6;NFSU2_TR(0x457807);
{u32 ea_=u32(r4(R+12)+u32(7340u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45780d:{NFSU2_TR(0x45780d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457813:{NFSU2_TR(0x457813);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B457819:{NFSU2_TR(0x457819);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B45781b:{NFSU2_TR(0x45781b);
u8 U[12];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B457822:{NFSU2_TR(0x457822);
{goto L457910;}
}
B457827:L457827:{c.instructions+=2;NFSU2_TR(0x457827);
u8 U[4];
w4(U+0,u32(0xf5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45782c:{NFSU2_TR(0x45782c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457831ull));
TAIL_STATIC(0x450f80u,450);
}
B457831:L457831:{c.instructions+=4;NFSU2_TR(0x457831);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457837:{NFSU2_TR(0x457837);
u8 U[4];
w4(U+0,u32(0xf6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45783c:{NFSU2_TR(0x45783c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457840:{NFSU2_TR(0x457840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457845ull));
TAIL_STATIC(0x450f80u,450);
}
B457845:L457845:{c.instructions+=22;NFSU2_TR(0x457845);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45784b:{NFSU2_TR(0x45784b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457851:{NFSU2_TR(0x457851);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B457854:{NFSU2_TR(0x457854);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B457856:{NFSU2_TR(0x457856);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B457858:{NFSU2_TR(0x457858);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B45785b:{NFSU2_TR(0x45785b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B45785d:{NFSU2_TR(0x45785d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B457860:{NFSU2_TR(0x457860);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457865:{NFSU2_TR(0x457865);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45786b:{NFSU2_TR(0x45786b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45786d:{NFSU2_TR(0x45786d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45786e:{NFSU2_TR(0x45786e);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12)+u32(508u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B457875:{NFSU2_TR(0x457875);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457879:{NFSU2_TR(0x457879);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45787b:{NFSU2_TR(0x45787b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45787f:{NFSU2_TR(0x45787f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457883:{NFSU2_TR(0x457883);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457887:{NFSU2_TR(0x457887);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45788d:{NFSU2_TR(0x45788d);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12)+u32(500u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B457894:{NFSU2_TR(0x457894);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B457897:{NFSU2_TR(0x457897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45789cull));
TAIL_STATIC(0x401090u,401);
}
B45789c:L45789c:{c.instructions+=6;NFSU2_TR(0x45789c);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4578a3:{NFSU2_TR(0x4578a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4578a7:{NFSU2_TR(0x4578a7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578ac:{NFSU2_TR(0x4578ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578ae:{NFSU2_TR(0x4578ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578af:{NFSU2_TR(0x4578af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4578b4ull));
TAIL_STATIC(0x401090u,401);
}
B4578b4:L4578b4:{c.instructions+=17;NFSU2_TR(0x4578b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4578ba:{NFSU2_TR(0x4578ba);
__builtin_memmove((R+0),gp(0x78705c),4);
}
B4578bf:{NFSU2_TR(0x4578bf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4578c2:{NFSU2_TR(0x4578c2);
__builtin_memmove((R+4),gp(0x787058),4);
}
B4578c8:{NFSU2_TR(0x4578c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4578cb:{NFSU2_TR(0x4578cb);
u8 U[4];
w4(U+0,u32(0xebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578d0:{NFSU2_TR(0x4578d0);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578d5:{NFSU2_TR(0x4578d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578d6:{NFSU2_TR(0x4578d6);
u8 U[6];
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4578d8:{NFSU2_TR(0x4578d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578d9:{NFSU2_TR(0x4578d9);
__builtin_memmove((R+4),(R+12),4);
}
B4578db:{NFSU2_TR(0x4578db);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4578e2:{NFSU2_TR(0x4578e2);
__builtin_memmove((R+8),gp(0x787054),4);
}
B4578e8:{NFSU2_TR(0x4578e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ca8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4578ee:{NFSU2_TR(0x4578ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578ef:{NFSU2_TR(0x4578ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4578f0:{NFSU2_TR(0x4578f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4578f5ull));
TAIL_STATIC(0x443ac0u,443);
}
B4578f5:L4578f5:{c.instructions+=5;NFSU2_TR(0x4578f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4578fb:{NFSU2_TR(0x4578fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B457901:{NFSU2_TR(0x457901);
{u32 ea_=u32(r4(R+12)+u32(7336u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B457907:{NFSU2_TR(0x457907);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B457909:{NFSU2_TR(0x457909);
u8 U[12];
w4(U+0,u32(u32(u32(0x20eull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B457910:L457910:{c.instructions+=2;NFSU2_TR(0x457910);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B457916:{NFSU2_TR(0x457916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45791bull));
TAIL_STATIC(0x75bed4u,75b);
}
B45791b:L45791b:{c.instructions+=4;NFSU2_TR(0x45791b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B45791e:{NFSU2_TR(0x45791e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B457920:{NFSU2_TR(0x457920);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457922:{NFSU2_TR(0x457922);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L457928;}}
}
B457924:L457924:{c.instructions+=2;NFSU2_TR(0x457924);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457926:{NFSU2_TR(0x457926);
{goto L457932;}
}
B457928:L457928:{c.instructions+=2;NFSU2_TR(0x457928);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45792b:{NFSU2_TR(0x45792b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457932;}}
}
B45792d:L45792d:{c.instructions+=1;NFSU2_TR(0x45792d);
w4(R+0,u32(0x64ull));
}
B457932:L457932:{c.instructions+=1;NFSU2_TR(0x457932);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B457934:L457934:{c.instructions+=2;NFSU2_TR(0x457934);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c34ull))));
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
B45793b:{NFSU2_TR(0x45793b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45794b;}}
}
B45793d:L45793d:{c.instructions+=4;NFSU2_TR(0x45793d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457943:{NFSU2_TR(0x457943);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457944:{NFSU2_TR(0x457944);
__builtin_memmove((R+4),(R+12),4);
}
B457946:{NFSU2_TR(0x457946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45794bull));
TAIL_STATIC(0x443270u,443);
}
B45794b:L45794b:{c.instructions+=8;NFSU2_TR(0x45794b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457952:{NFSU2_TR(0x457952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457953:{NFSU2_TR(0x457953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457954:{NFSU2_TR(0x457954);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45795b:{NFSU2_TR(0x45795b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45795c:{NFSU2_TR(0x45795c);
__builtin_memmove((R+16),(R+20),4);
}
B45795e:{NFSU2_TR(0x45795e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45795f:{NFSU2_TR(0x45795f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4579a0:L4579a0:{c.instructions+=5;NFSU2_TR(0x4579a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579a1:{NFSU2_TR(0x4579a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579a2:{NFSU2_TR(0x4579a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579a4:{NFSU2_TR(0x4579a4);
__builtin_memmove((R+24),(R+4),4);
}
B4579a6:{NFSU2_TR(0x4579a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4579abull));
TAIL_STATIC(0x455c80u,455);
}
B4579ab:L4579ab:{c.instructions+=3;NFSU2_TR(0x4579ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4579ae:{NFSU2_TR(0x4579ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4579b0:{NFSU2_TR(0x4579b0);
if(r1(R+518)){{goto L4579cf;}}
}
B4579b2:L4579b2:{c.instructions+=7;NFSU2_TR(0x4579b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4579b5:{NFSU2_TR(0x4579b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4579b8:{NFSU2_TR(0x4579b8);
u8 U[4];
w4(U+0,u32(0x452bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579bd:{NFSU2_TR(0x4579bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579be:{NFSU2_TR(0x4579be);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579c0:{NFSU2_TR(0x4579c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579c1:{NFSU2_TR(0x4579c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4579c6ull));
TAIL_STATIC(0x75c401u,75c);
}
B4579c6:L4579c6:{c.instructions+=2;NFSU2_TR(0x4579c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579c7:{NFSU2_TR(0x4579c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4579ccull));
TAIL_STATIC(0x575630u,575);
}
B4579cc:L4579cc:{c.instructions+=1;NFSU2_TR(0x4579cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4579cf:L4579cf:{c.instructions+=3;NFSU2_TR(0x4579cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4579d2:{NFSU2_TR(0x4579d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4579d4:{NFSU2_TR(0x4579d4);
if(r1(R+518)){{goto L4579f3;}}
}
B4579d6:L4579d6:{c.instructions+=7;NFSU2_TR(0x4579d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4579d9:{NFSU2_TR(0x4579d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4579dc:{NFSU2_TR(0x4579dc);
u8 U[4];
w4(U+0,u32(0x452bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579e1:{NFSU2_TR(0x4579e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579e2:{NFSU2_TR(0x4579e2);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579e4:{NFSU2_TR(0x4579e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579e5:{NFSU2_TR(0x4579e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4579eaull));
TAIL_STATIC(0x75c401u,75c);
}
B4579ea:L4579ea:{c.instructions+=2;NFSU2_TR(0x4579ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4579eb:{NFSU2_TR(0x4579eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4579f0ull));
TAIL_STATIC(0x575630u,575);
}
B4579f0:L4579f0:{c.instructions+=1;NFSU2_TR(0x4579f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4579f3:L4579f3:{c.instructions+=3;NFSU2_TR(0x4579f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4579f6:{NFSU2_TR(0x4579f6);
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
B4579f8:{NFSU2_TR(0x4579f8);
if(r1(R+518)){{goto L457a17;}}
}
B4579fa:L4579fa:{c.instructions+=7;NFSU2_TR(0x4579fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4579fd:{NFSU2_TR(0x4579fd);
u8 U[4];
w4(U+0,u32(0x452bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a02:{NFSU2_TR(0x457a02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B457a05:{NFSU2_TR(0x457a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a06:{NFSU2_TR(0x457a06);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a08:{NFSU2_TR(0x457a08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a09:{NFSU2_TR(0x457a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457a0eull));
TAIL_STATIC(0x75c401u,75c);
}
B457a0e:L457a0e:{c.instructions+=2;NFSU2_TR(0x457a0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a0f:{NFSU2_TR(0x457a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457a14ull));
TAIL_STATIC(0x575630u,575);
}
B457a14:L457a14:{c.instructions+=1;NFSU2_TR(0x457a14);
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
B457a17:L457a17:{c.instructions+=3;NFSU2_TR(0x457a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457a18:{NFSU2_TR(0x457a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457a19:{NFSU2_TR(0x457a19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457a20:L457a20:{c.instructions+=3;NFSU2_TR(0x457a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457a26:{NFSU2_TR(0x457a26);
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
B457a28:{NFSU2_TR(0x457a28);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L457a3b;}}
}
B457a2a:L457a2a:{c.instructions+=2;NFSU2_TR(0x457a2a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a2c:{NFSU2_TR(0x457a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457a31ull));
TAIL_STATIC(0x455c80u,455);
}
B457a31:L457a31:{c.instructions+=1;NFSU2_TR(0x457a31);
s4(0x828644,u32(0x1ull));
}
B457a3b:L457a3b:{c.instructions+=1;NFSU2_TR(0x457a3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457a40:L457a40:{c.instructions+=3;NFSU2_TR(0x457a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457a46:{NFSU2_TR(0x457a46);
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
B457a48:{NFSU2_TR(0x457a48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457a5b;}}
}
B457a4a:L457a4a:{c.instructions+=2;NFSU2_TR(0x457a4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a4c:{NFSU2_TR(0x457a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457a51ull));
TAIL_STATIC(0x455c80u,455);
}
B457a51:L457a51:{c.instructions+=1;NFSU2_TR(0x457a51);
s4(0x828644,u32(0x0ull));
}
B457a5b:L457a5b:{c.instructions+=1;NFSU2_TR(0x457a5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457a60:L457a60:{c.instructions+=5;NFSU2_TR(0x457a60);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B457a65:{NFSU2_TR(0x457a65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a66:{NFSU2_TR(0x457a66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a67:{NFSU2_TR(0x457a67);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B457a69:{NFSU2_TR(0x457a69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457a6eull));
TAIL_STATIC(0x43e910u,43e);
}
B457a6e:L457a6e:{c.instructions+=5;NFSU2_TR(0x457a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457a72:{NFSU2_TR(0x457a72);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B457a78:{NFSU2_TR(0x457a78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B457a7b:{NFSU2_TR(0x457a7b);
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
B457a7d:{NFSU2_TR(0x457a7d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L457a9a;}}
}
B457a7f:L457a7f:{c.instructions+=6;NFSU2_TR(0x457a7f);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B457a84:{NFSU2_TR(0x457a84);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B457a87:{NFSU2_TR(0x457a87);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B457a8c:{NFSU2_TR(0x457a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a8d:{NFSU2_TR(0x457a8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457a8e:{NFSU2_TR(0x457a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457a93ull));
TAIL_STATIC(0x440820u,440);
}
B457a93:L457a93:{c.instructions+=3;NFSU2_TR(0x457a93);
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
B457a96:{NFSU2_TR(0x457a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457a97:{NFSU2_TR(0x457a97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457a9a:L457a9a:{c.instructions+=3;NFSU2_TR(0x457a9a);
__builtin_memmove((R+0),(R+24),4);
}
B457a9c:{NFSU2_TR(0x457a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457a9d:{NFSU2_TR(0x457a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457aa0:L457aa0:{c.instructions+=5;NFSU2_TR(0x457aa0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B457aa5:{NFSU2_TR(0x457aa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457aa6:{NFSU2_TR(0x457aa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457aa7:{NFSU2_TR(0x457aa7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B457aa9:{NFSU2_TR(0x457aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457aaeull));
TAIL_STATIC(0x43e910u,43e);
}
B457aae:L457aae:{c.instructions+=5;NFSU2_TR(0x457aae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457ab2:{NFSU2_TR(0x457ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B457ab8:{NFSU2_TR(0x457ab8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B457abb:{NFSU2_TR(0x457abb);
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
B457abd:{NFSU2_TR(0x457abd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L457ada;}}
}
B457abf:L457abf:{c.instructions+=7;NFSU2_TR(0x457abf);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B457ac4:{NFSU2_TR(0x457ac4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B457ac7:{NFSU2_TR(0x457ac7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B457acc:{NFSU2_TR(0x457acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457acd:{NFSU2_TR(0x457acd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457ad1:{NFSU2_TR(0x457ad1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457ad5:{NFSU2_TR(0x457ad5);
TAIL_STATIC(0x440820u,440);
}
B457ada:L457ada:{c.instructions+=3;NFSU2_TR(0x457ada);
__builtin_memmove((R+0),(R+24),4);
}
B457adc:{NFSU2_TR(0x457adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457add:{NFSU2_TR(0x457add);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457ae0:L457ae0:{c.instructions+=5;NFSU2_TR(0x457ae0);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B457ae5:{NFSU2_TR(0x457ae5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ae6:{NFSU2_TR(0x457ae6);
__builtin_memmove((R+24),(R+4),4);
}
B457ae8:{NFSU2_TR(0x457ae8);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B457aee:{NFSU2_TR(0x457aee);
if(r1(R+518)){{goto L457af9;}}
}
B457af0:L457af0:{c.instructions+=2;NFSU2_TR(0x457af0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457af1:{NFSU2_TR(0x457af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457af6ull));
TAIL_STATIC(0x440540u,440);
}
B457af6:L457af6:{c.instructions+=1;NFSU2_TR(0x457af6);
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
B457af9:L457af9:{c.instructions+=3;NFSU2_TR(0x457af9);
__builtin_memmove((R+0),(R+24),4);
}
B457afb:{NFSU2_TR(0x457afb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457afc:{NFSU2_TR(0x457afc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457b00:L457b00:{c.instructions+=6;NFSU2_TR(0x457b00);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b06:{NFSU2_TR(0x457b06);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b09:{NFSU2_TR(0x457b09);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B457b0f:{NFSU2_TR(0x457b0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b11:{NFSU2_TR(0x457b11);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B457b14:{NFSU2_TR(0x457b14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L457b1b;}}
}
B457b16:L457b16:{c.instructions+=2;NFSU2_TR(0x457b16);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b18:{NFSU2_TR(0x457b18);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b1b:L457b1b:{c.instructions+=4;NFSU2_TR(0x457b1b);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b1e:{NFSU2_TR(0x457b1e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b20:{NFSU2_TR(0x457b20);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457b23:{NFSU2_TR(0x457b23);
if(r1(R+514)){{goto L457b2a;}}
}
B457b25:L457b25:{c.instructions+=2;NFSU2_TR(0x457b25);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b27:{NFSU2_TR(0x457b27);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b2a:L457b2a:{c.instructions+=4;NFSU2_TR(0x457b2a);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b2d:{NFSU2_TR(0x457b2d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b2f:{NFSU2_TR(0x457b2f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457b32:{NFSU2_TR(0x457b32);
if(r1(R+514)){{goto L457b39;}}
}
B457b34:L457b34:{c.instructions+=2;NFSU2_TR(0x457b34);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b36:{NFSU2_TR(0x457b36);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b39:L457b39:{c.instructions+=4;NFSU2_TR(0x457b39);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b3c:{NFSU2_TR(0x457b3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b3e:{NFSU2_TR(0x457b3e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457b41:{NFSU2_TR(0x457b41);
if(r1(R+514)){{goto L457b48;}}
}
B457b43:L457b43:{c.instructions+=2;NFSU2_TR(0x457b43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b45:{NFSU2_TR(0x457b45);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b48:L457b48:{c.instructions+=4;NFSU2_TR(0x457b48);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b4b:{NFSU2_TR(0x457b4b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b4d:{NFSU2_TR(0x457b4d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457b50:{NFSU2_TR(0x457b50);
if(r1(R+514)){{goto L457b57;}}
}
B457b52:L457b52:{c.instructions+=2;NFSU2_TR(0x457b52);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b54:{NFSU2_TR(0x457b54);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b57:L457b57:{c.instructions+=4;NFSU2_TR(0x457b57);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b5a:{NFSU2_TR(0x457b5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b5c:{NFSU2_TR(0x457b5c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457b5f:{NFSU2_TR(0x457b5f);
if(r1(R+514)){{goto L457b66;}}
}
B457b61:L457b61:{c.instructions+=2;NFSU2_TR(0x457b61);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b63:{NFSU2_TR(0x457b63);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b66:L457b66:{c.instructions+=4;NFSU2_TR(0x457b66);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b69:{NFSU2_TR(0x457b69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b6b:{NFSU2_TR(0x457b6b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457b6e:{NFSU2_TR(0x457b6e);
if(r1(R+514)){{goto L457b75;}}
}
B457b70:L457b70:{c.instructions+=2;NFSU2_TR(0x457b70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b72:{NFSU2_TR(0x457b72);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b75:L457b75:{c.instructions+=4;NFSU2_TR(0x457b75);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b78:{NFSU2_TR(0x457b78);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b7a:{NFSU2_TR(0x457b7a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B457b7d:{NFSU2_TR(0x457b7d);
if(r1(R+514)){{goto L457b84;}}
}
B457b7f:L457b7f:{c.instructions+=2;NFSU2_TR(0x457b7f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b81:{NFSU2_TR(0x457b81);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b84:L457b84:{c.instructions+=4;NFSU2_TR(0x457b84);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B457b87:{NFSU2_TR(0x457b87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B457b89:{NFSU2_TR(0x457b89);
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
B457b8c:{NFSU2_TR(0x457b8c);
if(r1(R+514)){{goto L457b93;}}
}
B457b8e:L457b8e:{c.instructions+=2;NFSU2_TR(0x457b8e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B457b90:{NFSU2_TR(0x457b90);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B457b93:L457b93:{c.instructions+=1;NFSU2_TR(0x457b93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457ba0:L457ba0:{c.instructions+=2;NFSU2_TR(0x457ba0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B457ba7:{NFSU2_TR(0x457ba7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L457bb8;}}
}
B457ba9:L457ba9:{c.instructions+=2;NFSU2_TR(0x457ba9);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B457bb0:{NFSU2_TR(0x457bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L457bb8;}}
}
B457bb2:L457bb2:{c.instructions+=2;NFSU2_TR(0x457bb2);
w4(R+0,u32(0x1ull));
}
B457bb7:{NFSU2_TR(0x457bb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457bb8:L457bb8:{c.instructions+=2;NFSU2_TR(0x457bb8);
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
B457bba:{NFSU2_TR(0x457bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457bc0:L457bc0:{c.instructions+=4;NFSU2_TR(0x457bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457bc1:{NFSU2_TR(0x457bc1);
u8 U[4];
w4(U+0,u32(0x7edd88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457bc6:{NFSU2_TR(0x457bc6);
w4(R+4,u32(0x82c5a8ull));
}
B457bcb:{NFSU2_TR(0x457bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457bd0ull));
TAIL_STATIC(0x735840u,735);
}
B457bd0:L457bd0:{c.instructions+=4;NFSU2_TR(0x457bd0);
u8 U[4];
w4(U+0,u32(0x7edd90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457bd5:{NFSU2_TR(0x457bd5);
w4(R+4,u32(0x82c660ull));
}
B457bda:{NFSU2_TR(0x457bda);
__builtin_memmove((R+24),(R+0),4);
}
B457bdc:{NFSU2_TR(0x457bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457be1ull));
TAIL_STATIC(0x735840u,735);
}
B457be1:L457be1:{c.instructions+=4;NFSU2_TR(0x457be1);
u8 U[4];
w4(U+0,u32(0x7edd98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457be6:{NFSU2_TR(0x457be6);
w4(R+4,u32(0x82c590ull));
}
B457beb:{NFSU2_TR(0x457beb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457bed:{NFSU2_TR(0x457bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457bf2ull));
TAIL_STATIC(0x735840u,735);
}
B457bf2:L457bf2:{c.instructions+=4;NFSU2_TR(0x457bf2);
u8 U[4];
w4(U+0,u32(0x7edda0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457bf7:{NFSU2_TR(0x457bf7);
w4(R+4,u32(0x82c520ull));
}
B457bfc:{NFSU2_TR(0x457bfc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457bfe:{NFSU2_TR(0x457bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457c03ull));
TAIL_STATIC(0x735840u,735);
}
B457c03:L457c03:{c.instructions+=3;NFSU2_TR(0x457c03);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457c05:{NFSU2_TR(0x457c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457c06:{NFSU2_TR(0x457c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457c10:L457c10:{c.instructions+=6;NFSU2_TR(0x457c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457c14:{NFSU2_TR(0x457c14);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457c16:{NFSU2_TR(0x457c16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457c17:{NFSU2_TR(0x457c17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457c18:{NFSU2_TR(0x457c18);
__builtin_memmove((R+24),(R+4),4);
}
B457c1a:{NFSU2_TR(0x457c1a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457c20;}}
}
B457c1c:L457c1c:{c.instructions+=2;NFSU2_TR(0x457c1c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457c1e:{NFSU2_TR(0x457c1e);
{goto L457c2a;}
}
B457c20:L457c20:{c.instructions+=2;NFSU2_TR(0x457c20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B457c23:{NFSU2_TR(0x457c23);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457c2a;}}
}
B457c25:L457c25:{c.instructions+=1;NFSU2_TR(0x457c25);
w4(R+0,u32(0x4bull));
}
B457c2a:L457c2a:{c.instructions+=5;NFSU2_TR(0x457c2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457c2d:{NFSU2_TR(0x457c2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B457c2f:{NFSU2_TR(0x457c2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457c33:{NFSU2_TR(0x457c33);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457c35:{NFSU2_TR(0x457c35);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457c3b;}}
}
B457c37:L457c37:{c.instructions+=2;NFSU2_TR(0x457c37);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457c39:{NFSU2_TR(0x457c39);
{goto L457c47;}
}
B457c3b:L457c3b:{c.instructions+=2;NFSU2_TR(0x457c3b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457c40:{NFSU2_TR(0x457c40);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457c47;}}
}
B457c42:L457c42:{c.instructions+=1;NFSU2_TR(0x457c42);
w4(R+0,u32(0x7fffull));
}
B457c47:L457c47:{c.instructions+=4;NFSU2_TR(0x457c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457c4a:{NFSU2_TR(0x457c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457c4e:{NFSU2_TR(0x457c4e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457c50:{NFSU2_TR(0x457c50);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457c56;}}
}
B457c52:L457c52:{c.instructions+=2;NFSU2_TR(0x457c52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457c54:{NFSU2_TR(0x457c54);
{goto L457c62;}
}
B457c56:L457c56:{c.instructions+=2;NFSU2_TR(0x457c56);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457c5b:{NFSU2_TR(0x457c5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457c62;}}
}
B457c5d:L457c5d:{c.instructions+=1;NFSU2_TR(0x457c5d);
w4(R+0,u32(0x1fffull));
}
B457c62:L457c62:{c.instructions+=4;NFSU2_TR(0x457c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457c65:{NFSU2_TR(0x457c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457c69:{NFSU2_TR(0x457c69);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457c6b:{NFSU2_TR(0x457c6b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457c71;}}
}
B457c6d:L457c6d:{c.instructions+=2;NFSU2_TR(0x457c6d);
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
B457c6f:{NFSU2_TR(0x457c6f);
{goto L457c7d;}
}
B457c71:L457c71:{c.instructions+=2;NFSU2_TR(0x457c71);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457c76:{NFSU2_TR(0x457c76);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457c7d;}}
}
B457c78:L457c78:{c.instructions+=1;NFSU2_TR(0x457c78);
w4(R+0,u32(0xffffull));
}
B457c7d:L457c7d:{c.instructions+=5;NFSU2_TR(0x457c7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457c7e:{NFSU2_TR(0x457c7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457c7f:{NFSU2_TR(0x457c7f);
u8 U[4];
w4(U+0,u32(0x82c5a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457c84:{NFSU2_TR(0x457c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457c87:{NFSU2_TR(0x457c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457c8cull));
TAIL_STATIC(0x7358c0u,735);
}
B457c8c:L457c8c:{c.instructions+=3;NFSU2_TR(0x457c8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B457c8f:{NFSU2_TR(0x457c8f);
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
B457c91:{NFSU2_TR(0x457c91);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457cb1;}}
}
B457c93:L457c93:{c.instructions+=3;NFSU2_TR(0x457c93);
u8 U[4];
w4(U+0,u32(0x7edd88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457c98:{NFSU2_TR(0x457c98);
w4(R+4,u32(0x82c5a8ull));
}
B457c9d:{NFSU2_TR(0x457c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457ca2ull));
TAIL_STATIC(0x735840u,735);
}
B457ca2:L457ca2:{c.instructions+=4;NFSU2_TR(0x457ca2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ca3:{NFSU2_TR(0x457ca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ca4:{NFSU2_TR(0x457ca4);
u8 U[4];
w4(U+0,u32(0x82c5a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ca9:{NFSU2_TR(0x457ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457caeull));
TAIL_STATIC(0x7358c0u,735);
}
B457cae:L457cae:{c.instructions+=1;NFSU2_TR(0x457cae);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457cb1:L457cb1:{c.instructions+=4;NFSU2_TR(0x457cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457cb2:{NFSU2_TR(0x457cb2);
__builtin_memmove((R+0),(R+24),4);
}
B457cb4:{NFSU2_TR(0x457cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457cb5:{NFSU2_TR(0x457cb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457cc0:L457cc0:{c.instructions+=6;NFSU2_TR(0x457cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457cc4:{NFSU2_TR(0x457cc4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457cc6:{NFSU2_TR(0x457cc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457cc7:{NFSU2_TR(0x457cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457cc8:{NFSU2_TR(0x457cc8);
__builtin_memmove((R+24),(R+4),4);
}
B457cca:{NFSU2_TR(0x457cca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457cd0;}}
}
B457ccc:L457ccc:{c.instructions+=2;NFSU2_TR(0x457ccc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457cce:{NFSU2_TR(0x457cce);
{goto L457cda;}
}
B457cd0:L457cd0:{c.instructions+=2;NFSU2_TR(0x457cd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B457cd3:{NFSU2_TR(0x457cd3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457cda;}}
}
B457cd5:L457cd5:{c.instructions+=1;NFSU2_TR(0x457cd5);
w4(R+0,u32(0x4bull));
}
B457cda:L457cda:{c.instructions+=5;NFSU2_TR(0x457cda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457cdd:{NFSU2_TR(0x457cdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B457cdf:{NFSU2_TR(0x457cdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457ce3:{NFSU2_TR(0x457ce3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457ce5:{NFSU2_TR(0x457ce5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457ceb;}}
}
B457ce7:L457ce7:{c.instructions+=2;NFSU2_TR(0x457ce7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457ce9:{NFSU2_TR(0x457ce9);
{goto L457cf7;}
}
B457ceb:L457ceb:{c.instructions+=2;NFSU2_TR(0x457ceb);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457cf0:{NFSU2_TR(0x457cf0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457cf7;}}
}
B457cf2:L457cf2:{c.instructions+=1;NFSU2_TR(0x457cf2);
w4(R+0,u32(0x7fffull));
}
B457cf7:L457cf7:{c.instructions+=4;NFSU2_TR(0x457cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457cfa:{NFSU2_TR(0x457cfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457cfe:{NFSU2_TR(0x457cfe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457d00:{NFSU2_TR(0x457d00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457d06;}}
}
B457d02:L457d02:{c.instructions+=2;NFSU2_TR(0x457d02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457d04:{NFSU2_TR(0x457d04);
{goto L457d12;}
}
B457d06:L457d06:{c.instructions+=2;NFSU2_TR(0x457d06);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457d0b:{NFSU2_TR(0x457d0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457d12;}}
}
B457d0d:L457d0d:{c.instructions+=1;NFSU2_TR(0x457d0d);
w4(R+0,u32(0x1fffull));
}
B457d12:L457d12:{c.instructions+=4;NFSU2_TR(0x457d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457d15:{NFSU2_TR(0x457d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457d19:{NFSU2_TR(0x457d19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457d1b:{NFSU2_TR(0x457d1b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457d21;}}
}
B457d1d:L457d1d:{c.instructions+=2;NFSU2_TR(0x457d1d);
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
B457d1f:{NFSU2_TR(0x457d1f);
{goto L457d2d;}
}
B457d21:L457d21:{c.instructions+=2;NFSU2_TR(0x457d21);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457d26:{NFSU2_TR(0x457d26);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457d2d;}}
}
B457d28:L457d28:{c.instructions+=1;NFSU2_TR(0x457d28);
w4(R+0,u32(0xffffull));
}
B457d2d:L457d2d:{c.instructions+=5;NFSU2_TR(0x457d2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d2e:{NFSU2_TR(0x457d2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d2f:{NFSU2_TR(0x457d2f);
u8 U[4];
w4(U+0,u32(0x82c660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d34:{NFSU2_TR(0x457d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457d37:{NFSU2_TR(0x457d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457d3cull));
TAIL_STATIC(0x7358c0u,735);
}
B457d3c:L457d3c:{c.instructions+=3;NFSU2_TR(0x457d3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B457d3f:{NFSU2_TR(0x457d3f);
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
B457d41:{NFSU2_TR(0x457d41);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457d61;}}
}
B457d43:L457d43:{c.instructions+=3;NFSU2_TR(0x457d43);
u8 U[4];
w4(U+0,u32(0x7edd90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d48:{NFSU2_TR(0x457d48);
w4(R+4,u32(0x82c660ull));
}
B457d4d:{NFSU2_TR(0x457d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457d52ull));
TAIL_STATIC(0x735840u,735);
}
B457d52:L457d52:{c.instructions+=4;NFSU2_TR(0x457d52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d53:{NFSU2_TR(0x457d53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d54:{NFSU2_TR(0x457d54);
u8 U[4];
w4(U+0,u32(0x82c660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d59:{NFSU2_TR(0x457d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457d5eull));
TAIL_STATIC(0x7358c0u,735);
}
B457d5e:L457d5e:{c.instructions+=1;NFSU2_TR(0x457d5e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457d61:L457d61:{c.instructions+=4;NFSU2_TR(0x457d61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457d62:{NFSU2_TR(0x457d62);
__builtin_memmove((R+0),(R+24),4);
}
B457d64:{NFSU2_TR(0x457d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457d65:{NFSU2_TR(0x457d65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457d70:L457d70:{c.instructions+=4;NFSU2_TR(0x457d70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d71:{NFSU2_TR(0x457d71);
u8 U[4];
w4(U+0,u32(0x7edda8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d76:{NFSU2_TR(0x457d76);
w4(R+4,u32(0x82c6bcull));
}
B457d7b:{NFSU2_TR(0x457d7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457d80ull));
TAIL_STATIC(0x735840u,735);
}
B457d80:L457d80:{c.instructions+=4;NFSU2_TR(0x457d80);
u8 U[4];
w4(U+0,u32(0x7eddb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d85:{NFSU2_TR(0x457d85);
w4(R+4,u32(0x82c5b0ull));
}
B457d8a:{NFSU2_TR(0x457d8a);
__builtin_memmove((R+24),(R+0),4);
}
B457d8c:{NFSU2_TR(0x457d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457d91ull));
TAIL_STATIC(0x735840u,735);
}
B457d91:L457d91:{c.instructions+=4;NFSU2_TR(0x457d91);
u8 U[4];
w4(U+0,u32(0x7eddb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457d96:{NFSU2_TR(0x457d96);
w4(R+4,u32(0x82c5a0ull));
}
B457d9b:{NFSU2_TR(0x457d9b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457d9d:{NFSU2_TR(0x457d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457da2ull));
TAIL_STATIC(0x735840u,735);
}
B457da2:L457da2:{c.instructions+=4;NFSU2_TR(0x457da2);
u8 U[4];
w4(U+0,u32(0x7eddc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457da7:{NFSU2_TR(0x457da7);
w4(R+4,u32(0x82c5c8ull));
}
B457dac:{NFSU2_TR(0x457dac);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457dae:{NFSU2_TR(0x457dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457db3ull));
TAIL_STATIC(0x735840u,735);
}
B457db3:L457db3:{c.instructions+=4;NFSU2_TR(0x457db3);
u8 U[4];
w4(U+0,u32(0x7eddc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457db8:{NFSU2_TR(0x457db8);
w4(R+4,u32(0x82c500ull));
}
B457dbd:{NFSU2_TR(0x457dbd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457dbf:{NFSU2_TR(0x457dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457dc4ull));
TAIL_STATIC(0x735840u,735);
}
B457dc4:L457dc4:{c.instructions+=4;NFSU2_TR(0x457dc4);
u8 U[4];
w4(U+0,u32(0x7eddd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457dc9:{NFSU2_TR(0x457dc9);
w4(R+4,u32(0x82c558ull));
}
B457dce:{NFSU2_TR(0x457dce);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457dd0:{NFSU2_TR(0x457dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457dd5ull));
TAIL_STATIC(0x735840u,735);
}
B457dd5:L457dd5:{c.instructions+=4;NFSU2_TR(0x457dd5);
u8 U[4];
w4(U+0,u32(0x7eddd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457dda:{NFSU2_TR(0x457dda);
w4(R+4,u32(0x82c550ull));
}
B457ddf:{NFSU2_TR(0x457ddf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457de1:{NFSU2_TR(0x457de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457de6ull));
TAIL_STATIC(0x735840u,735);
}
B457de6:L457de6:{c.instructions+=4;NFSU2_TR(0x457de6);
u8 U[4];
w4(U+0,u32(0x7edde0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457deb:{NFSU2_TR(0x457deb);
w4(R+4,u32(0x82c508ull));
}
B457df0:{NFSU2_TR(0x457df0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457df2:{NFSU2_TR(0x457df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457df7ull));
TAIL_STATIC(0x735840u,735);
}
B457df7:L457df7:{c.instructions+=4;NFSU2_TR(0x457df7);
u8 U[4];
w4(U+0,u32(0x7edde8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457dfc:{NFSU2_TR(0x457dfc);
w4(R+4,u32(0x82c72cull));
}
B457e01:{NFSU2_TR(0x457e01);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457e03:{NFSU2_TR(0x457e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457e08ull));
TAIL_STATIC(0x735840u,735);
}
B457e08:L457e08:{c.instructions+=4;NFSU2_TR(0x457e08);
u8 U[4];
w4(U+0,u32(0x7eddf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457e0d:{NFSU2_TR(0x457e0d);
w4(R+4,u32(0x82c5d8ull));
}
B457e12:{NFSU2_TR(0x457e12);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457e14:{NFSU2_TR(0x457e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457e19ull));
TAIL_STATIC(0x735840u,735);
}
B457e19:L457e19:{c.instructions+=3;NFSU2_TR(0x457e19);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457e1b:{NFSU2_TR(0x457e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457e1c:{NFSU2_TR(0x457e1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457e20:L457e20:{c.instructions+=5;NFSU2_TR(0x457e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B457e23:{NFSU2_TR(0x457e23);
__builtin_memmove((R+0),(R+16),4);
}
B457e27:{NFSU2_TR(0x457e27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457e28:{NFSU2_TR(0x457e28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457e29:{NFSU2_TR(0x457e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457e2eull));
TAIL_STATIC(0x734df0u,734);
}
B457e2e:L457e2e:{c.instructions+=2;NFSU2_TR(0x457e2e);
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
B457e31:{NFSU2_TR(0x457e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457e36ull));
TAIL_STATIC(0x734e40u,734);
}
B457e36:L457e36:{c.instructions+=11;NFSU2_TR(0x457e36);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B457e3a:{NFSU2_TR(0x457e3a);
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
B457e3c:{NFSU2_TR(0x457e3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457e40:{NFSU2_TR(0x457e40);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457e44:{NFSU2_TR(0x457e44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457e48:{NFSU2_TR(0x457e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B457e4a:{NFSU2_TR(0x457e4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B457e4e:{NFSU2_TR(0x457e4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457e4f:{NFSU2_TR(0x457e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457e53:{NFSU2_TR(0x457e53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457e54:{NFSU2_TR(0x457e54);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457e56ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B457e56:L457e56:{c.instructions+=2;NFSU2_TR(0x457e56);
__builtin_memmove((R+24),(R+0),4);
}
B457e58:{NFSU2_TR(0x457e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457e5dull));
TAIL_STATIC(0x734e60u,734);
}
B457e5d:L457e5d:{c.instructions+=4;NFSU2_TR(0x457e5d);
__builtin_memmove((R+0),(R+24),4);
}
B457e5f:{NFSU2_TR(0x457e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457e60:{NFSU2_TR(0x457e60);
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
B457e63:{NFSU2_TR(0x457e63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457e70:L457e70:{c.instructions+=6;NFSU2_TR(0x457e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457e74:{NFSU2_TR(0x457e74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457e76:{NFSU2_TR(0x457e76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457e77:{NFSU2_TR(0x457e77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457e78:{NFSU2_TR(0x457e78);
__builtin_memmove((R+24),(R+4),4);
}
B457e7a:{NFSU2_TR(0x457e7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457e80;}}
}
B457e7c:L457e7c:{c.instructions+=2;NFSU2_TR(0x457e7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457e7e:{NFSU2_TR(0x457e7e);
{goto L457e8a;}
}
B457e80:L457e80:{c.instructions+=2;NFSU2_TR(0x457e80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B457e83:{NFSU2_TR(0x457e83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457e8a;}}
}
B457e85:L457e85:{c.instructions+=1;NFSU2_TR(0x457e85);
w4(R+0,u32(0x2ull));
}
B457e8a:L457e8a:{c.instructions+=5;NFSU2_TR(0x457e8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457e8d:{NFSU2_TR(0x457e8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B457e8f:{NFSU2_TR(0x457e8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457e93:{NFSU2_TR(0x457e93);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457e95:{NFSU2_TR(0x457e95);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457e9b;}}
}
B457e97:L457e97:{c.instructions+=2;NFSU2_TR(0x457e97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457e99:{NFSU2_TR(0x457e99);
{goto L457ea7;}
}
B457e9b:L457e9b:{c.instructions+=2;NFSU2_TR(0x457e9b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457ea0:{NFSU2_TR(0x457ea0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457ea7;}}
}
B457ea2:L457ea2:{c.instructions+=1;NFSU2_TR(0x457ea2);
w4(R+0,u32(0x7fffull));
}
B457ea7:L457ea7:{c.instructions+=4;NFSU2_TR(0x457ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457eaa:{NFSU2_TR(0x457eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457eae:{NFSU2_TR(0x457eae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457eb0:{NFSU2_TR(0x457eb0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457eb6;}}
}
B457eb2:L457eb2:{c.instructions+=2;NFSU2_TR(0x457eb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457eb4:{NFSU2_TR(0x457eb4);
{goto L457ec2;}
}
B457eb6:L457eb6:{c.instructions+=2;NFSU2_TR(0x457eb6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457ebb:{NFSU2_TR(0x457ebb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457ec2;}}
}
B457ebd:L457ebd:{c.instructions+=1;NFSU2_TR(0x457ebd);
w4(R+0,u32(0xffffull));
}
B457ec2:L457ec2:{c.instructions+=4;NFSU2_TR(0x457ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457ec5:{NFSU2_TR(0x457ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457ec9:{NFSU2_TR(0x457ec9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457ecb:{NFSU2_TR(0x457ecb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457ed1;}}
}
B457ecd:L457ecd:{c.instructions+=2;NFSU2_TR(0x457ecd);
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
B457ecf:{NFSU2_TR(0x457ecf);
{goto L457edb;}
}
B457ed1:L457ed1:{c.instructions+=2;NFSU2_TR(0x457ed1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B457ed4:{NFSU2_TR(0x457ed4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457edb;}}
}
B457ed6:L457ed6:{c.instructions+=1;NFSU2_TR(0x457ed6);
w4(R+0,u32(0x1ull));
}
B457edb:L457edb:{c.instructions+=5;NFSU2_TR(0x457edb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457edc:{NFSU2_TR(0x457edc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457edd:{NFSU2_TR(0x457edd);
u8 U[4];
w4(U+0,u32(0x82c6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ee2:{NFSU2_TR(0x457ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457ee5:{NFSU2_TR(0x457ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457eeaull));
TAIL_STATIC(0x7358c0u,735);
}
B457eea:L457eea:{c.instructions+=3;NFSU2_TR(0x457eea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B457eed:{NFSU2_TR(0x457eed);
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
B457eef:{NFSU2_TR(0x457eef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457f0f;}}
}
B457ef1:L457ef1:{c.instructions+=3;NFSU2_TR(0x457ef1);
u8 U[4];
w4(U+0,u32(0x7edda8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ef6:{NFSU2_TR(0x457ef6);
w4(R+4,u32(0x82c6bcull));
}
B457efb:{NFSU2_TR(0x457efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457f00ull));
TAIL_STATIC(0x735840u,735);
}
B457f00:L457f00:{c.instructions+=4;NFSU2_TR(0x457f00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457f01:{NFSU2_TR(0x457f01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457f02:{NFSU2_TR(0x457f02);
u8 U[4];
w4(U+0,u32(0x82c6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457f07:{NFSU2_TR(0x457f07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457f0cull));
TAIL_STATIC(0x7358c0u,735);
}
B457f0c:L457f0c:{c.instructions+=1;NFSU2_TR(0x457f0c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457f0f:L457f0f:{c.instructions+=4;NFSU2_TR(0x457f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457f10:{NFSU2_TR(0x457f10);
__builtin_memmove((R+0),(R+24),4);
}
B457f12:{NFSU2_TR(0x457f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B457f13:{NFSU2_TR(0x457f13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B457f20:L457f20:{c.instructions+=6;NFSU2_TR(0x457f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457f24:{NFSU2_TR(0x457f24);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457f26:{NFSU2_TR(0x457f26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457f27:{NFSU2_TR(0x457f27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457f28:{NFSU2_TR(0x457f28);
__builtin_memmove((R+24),(R+4),4);
}
B457f2a:{NFSU2_TR(0x457f2a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457f30;}}
}
B457f2c:L457f2c:{c.instructions+=2;NFSU2_TR(0x457f2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457f2e:{NFSU2_TR(0x457f2e);
{goto L457f3c;}
}
B457f30:L457f30:{c.instructions+=2;NFSU2_TR(0x457f30);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457f35:{NFSU2_TR(0x457f35);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457f3c;}}
}
B457f37:L457f37:{c.instructions+=1;NFSU2_TR(0x457f37);
w4(R+0,u32(0x7fffull));
}
B457f3c:L457f3c:{c.instructions+=5;NFSU2_TR(0x457f3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B457f3f:{NFSU2_TR(0x457f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B457f41:{NFSU2_TR(0x457f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457f45:{NFSU2_TR(0x457f45);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffe000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffe000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457f4a:{NFSU2_TR(0x457f4a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457f53;}}
}
B457f4c:L457f4c:{c.instructions+=2;NFSU2_TR(0x457f4c);
w4(R+0,u32(0xffffe000ull));
}
B457f51:{NFSU2_TR(0x457f51);
{goto L457f5f;}
}
B457f53:L457f53:{c.instructions+=2;NFSU2_TR(0x457f53);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457f58:{NFSU2_TR(0x457f58);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457f5f;}}
}
B457f5a:L457f5a:{c.instructions+=1;NFSU2_TR(0x457f5a);
w4(R+0,u32(0x2000ull));
}
B457f5f:L457f5f:{c.instructions+=4;NFSU2_TR(0x457f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457f62:{NFSU2_TR(0x457f62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457f66:{NFSU2_TR(0x457f66);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457f68:{NFSU2_TR(0x457f68);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457f6e;}}
}
B457f6a:L457f6a:{c.instructions+=2;NFSU2_TR(0x457f6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457f6c:{NFSU2_TR(0x457f6c);
{goto L457f78;}
}
B457f6e:L457f6e:{c.instructions+=2;NFSU2_TR(0x457f6e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B457f71:{NFSU2_TR(0x457f71);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457f78;}}
}
B457f73:L457f73:{c.instructions+=1;NFSU2_TR(0x457f73);
w4(R+0,u32(0x1ull));
}
B457f78:L457f78:{c.instructions+=4;NFSU2_TR(0x457f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457f7b:{NFSU2_TR(0x457f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457f7f:{NFSU2_TR(0x457f7f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B457f82:{NFSU2_TR(0x457f82);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457f8b;}}
}
B457f84:L457f84:{c.instructions+=2;NFSU2_TR(0x457f84);
w4(R+0,u32(0x1ull));
}
B457f89:{NFSU2_TR(0x457f89);
{goto L457f95;}
}
B457f8b:L457f8b:{c.instructions+=2;NFSU2_TR(0x457f8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B457f8e:{NFSU2_TR(0x457f8e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457f95;}}
}
B457f90:L457f90:{c.instructions+=1;NFSU2_TR(0x457f90);
w4(R+0,u32(0x2ull));
}
B457f95:L457f95:{c.instructions+=4;NFSU2_TR(0x457f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457f98:{NFSU2_TR(0x457f98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457f9c:{NFSU2_TR(0x457f9c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457f9e:{NFSU2_TR(0x457f9e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457fa4;}}
}
B457fa0:L457fa0:{c.instructions+=2;NFSU2_TR(0x457fa0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B457fa2:{NFSU2_TR(0x457fa2);
{goto L457fb0;}
}
B457fa4:L457fa4:{c.instructions+=2;NFSU2_TR(0x457fa4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B457fa9:{NFSU2_TR(0x457fa9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457fb0;}}
}
B457fab:L457fab:{c.instructions+=1;NFSU2_TR(0x457fab);
w4(R+0,u32(0x7fffull));
}
B457fb0:L457fb0:{c.instructions+=4;NFSU2_TR(0x457fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457fb3:{NFSU2_TR(0x457fb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B457fb7:{NFSU2_TR(0x457fb7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B457fb9:{NFSU2_TR(0x457fb9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457fbf;}}
}
B457fbb:L457fbb:{c.instructions+=2;NFSU2_TR(0x457fbb);
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
B457fbd:{NFSU2_TR(0x457fbd);
{goto L457fcb;}
}
B457fbf:L457fbf:{c.instructions+=2;NFSU2_TR(0x457fbf);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457fc4:{NFSU2_TR(0x457fc4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L457fcb;}}
}
B457fc6:L457fc6:{c.instructions+=1;NFSU2_TR(0x457fc6);
w4(R+0,u32(0xffffull));
}
B457fcb:L457fcb:{c.instructions+=5;NFSU2_TR(0x457fcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457fcc:{NFSU2_TR(0x457fcc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457fcd:{NFSU2_TR(0x457fcd);
u8 U[4];
w4(U+0,u32(0x82c558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457fd2:{NFSU2_TR(0x457fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B457fd5:{NFSU2_TR(0x457fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457fdaull));
TAIL_STATIC(0x7358c0u,735);
}
B457fda:L457fda:{c.instructions+=3;NFSU2_TR(0x457fda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B457fdd:{NFSU2_TR(0x457fdd);
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
B457fdf:{NFSU2_TR(0x457fdf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L457fff;}}
}
B457fe1:L457fe1:{c.instructions+=3;NFSU2_TR(0x457fe1);
u8 U[4];
w4(U+0,u32(0x7eddd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457fe6:{NFSU2_TR(0x457fe6);
w4(R+4,u32(0x82c558ull));
}
B457feb:{NFSU2_TR(0x457feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457ff0ull));
TAIL_STATIC(0x735840u,735);
}
B457ff0:L457ff0:{c.instructions+=4;NFSU2_TR(0x457ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ff1:{NFSU2_TR(0x457ff1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ff2:{NFSU2_TR(0x457ff2);
u8 U[4];
w4(U+0,u32(0x82c558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B457ff7:{NFSU2_TR(0x457ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x457ffcull));
TAIL_STATIC(0x7358c0u,735);
}
B457ffc:L457ffc:{c.instructions+=1;NFSU2_TR(0x457ffc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B457fff:L457fff:{c.instructions+=1;NFSU2_TR(0x457fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
TAIL_STATIC(0x458000u,458);
}
XIT:NFSU2_TR_EXIT(0x457,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
