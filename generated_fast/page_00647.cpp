#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_644(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_646(u8* __restrict R,Cpu& c);
u32 body_648(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x647,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x647,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_647(u8* __restrict R,Cpu& c);
u32 page_647(Cpu& c){return body_647(c.regs.data(),c);}
__attribute__((noinline)) u32 body_647(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x647001:goto L647001;
case 0x647006:c.instructions+=5;goto B647006;
case 0x64700c:c.instructions+=4;goto B64700c;
case 0x64700e:c.instructions+=3;goto B64700e;
case 0x647013:c.instructions+=2;goto B647013;
case 0x647015:c.instructions+=1;goto B647015;
case 0x647017:goto L647017;
case 0x64701d:c.instructions+=1;goto B64701d;
case 0x647022:goto L647022;
case 0x647024:c.instructions+=2;goto B647024;
case 0x647029:c.instructions+=1;goto B647029;
case 0x64702b:goto L64702b;
case 0x64702d:c.instructions+=2;goto B64702d;
case 0x647032:c.instructions+=1;goto B647032;
case 0x647034:goto L647034;
case 0x64703a:goto L64703a;
case 0x64703c:c.instructions+=1;goto B64703c;
case 0x647041:goto L647041;
case 0x647044:c.instructions+=3;goto B647044;
case 0x64704b:c.instructions+=2;goto B64704b;
case 0x64704d:c.instructions+=1;goto B64704d;
case 0x64704f:goto L64704f;
case 0x647051:c.instructions+=1;goto B647051;
case 0x647053:goto L647053;
case 0x647059:c.instructions+=1;goto B647059;
case 0x64705b:goto L64705b;
case 0x64705d:c.instructions+=3;goto B64705d;
case 0x647064:c.instructions+=2;goto B647064;
case 0x647066:c.instructions+=1;goto B647066;
case 0x647068:goto L647068;
case 0x64706f:c.instructions+=1;goto B64706f;
case 0x647071:goto L647071;
case 0x647078:goto L647078;
case 0x64707d:c.instructions+=1;goto B64707d;
case 0x647083:goto L647083;
case 0x647084:c.instructions+=5;goto B647084;
case 0x647085:c.instructions+=4;goto B647085;
case 0x64708a:c.instructions+=3;goto B64708a;
case 0x64708d:c.instructions+=2;goto B64708d;
case 0x647092:c.instructions+=1;goto B647092;
case 0x647097:goto L647097;
case 0x64709e:c.instructions+=1;goto B64709e;
case 0x6470a0:goto L6470a0;
case 0x6470a5:c.instructions+=2;goto B6470a5;
case 0x6470ab:c.instructions+=1;goto B6470ab;
case 0x6470b0:goto L6470b0;
case 0x6470b6:c.instructions+=3;goto B6470b6;
case 0x6470bb:c.instructions+=2;goto B6470bb;
case 0x6470bc:c.instructions+=1;goto B6470bc;
case 0x6470bd:goto L6470bd;
case 0x6470bf:c.instructions+=3;goto B6470bf;
case 0x6470c0:c.instructions+=2;goto B6470c0;
case 0x6470c6:c.instructions+=1;goto B6470c6;
case 0x6470cc:goto L6470cc;
case 0x6470d2:c.instructions+=2;goto B6470d2;
case 0x6470d8:c.instructions+=1;goto B6470d8;
case 0x6470dd:goto L6470dd;
case 0x6470e0:c.instructions+=3;goto B6470e0;
case 0x6470e8:c.instructions+=2;goto B6470e8;
case 0x6470ea:c.instructions+=1;goto B6470ea;
case 0x6470ec:goto L6470ec;
case 0x6470ee:c.instructions+=1;goto B6470ee;
case 0x6470f0:goto L6470f0;
case 0x6470f2:c.instructions+=1;goto B6470f2;
case 0x6470f4:goto L6470f4;
case 0x6470fc:c.instructions+=1;goto B6470fc;
case 0x6470fe:goto L6470fe;
case 0x647104:c.instructions+=1;goto B647104;
case 0x647106:goto L647106;
case 0x647107:c.instructions+=4;goto B647107;
case 0x647108:c.instructions+=3;goto B647108;
case 0x64710f:c.instructions+=2;goto B64710f;
case 0x647115:c.instructions+=1;goto B647115;
case 0x647117:goto L647117;
case 0x64711d:c.instructions+=1;goto B64711d;
case 0x64711f:goto L64711f;
case 0x647127:c.instructions+=5;goto B647127;
case 0x647128:c.instructions+=4;goto B647128;
case 0x647129:c.instructions+=3;goto B647129;
case 0x64712f:c.instructions+=2;goto B64712f;
case 0x647132:c.instructions+=1;goto B647132;
case 0x647137:goto L647137;
case 0x64713e:c.instructions+=4;goto B64713e;
case 0x647144:c.instructions+=3;goto B647144;
case 0x647146:c.instructions+=2;goto B647146;
case 0x64714b:c.instructions+=1;goto B64714b;
case 0x647150:goto L647150;
case 0x647152:c.instructions+=1;goto B647152;
case 0x647154:goto L647154;
case 0x647159:goto L647159;
case 0x64715e:c.instructions+=2;goto B64715e;
case 0x647164:c.instructions+=1;goto B647164;
case 0x647169:goto L647169;
case 0x64716a:c.instructions+=1;goto B64716a;
case 0x64716b:goto L64716b;
case 0x64716d:c.instructions+=1;goto B64716d;
case 0x64716e:goto L64716e;
case 0x64716f:c.instructions+=3;goto B64716f;
case 0x647170:c.instructions+=2;goto B647170;
case 0x647171:c.instructions+=1;goto B647171;
case 0x64722e:goto L64722e;
case 0x647230:c.instructions+=6;goto B647230;
case 0x647231:c.instructions+=5;goto B647231;
case 0x647233:c.instructions+=4;goto B647233;
case 0x647234:c.instructions+=3;goto B647234;
case 0x647236:c.instructions+=2;goto B647236;
case 0x647238:c.instructions+=1;goto B647238;
case 0x64723d:goto L64723d;
case 0x64723f:c.instructions+=2;goto B64723f;
case 0x647240:c.instructions+=1;goto B647240;
case 0x647242:goto L647242;
case 0x647244:c.instructions+=1;goto B647244;
case 0x647249:goto L647249;
case 0x64724b:goto L64724b;
case 0x64724d:goto L64724d;
case 0x64724f:c.instructions+=2;goto B64724f;
case 0x647255:c.instructions+=1;goto B647255;
case 0x647257:goto L647257;
case 0x64725c:c.instructions+=1;goto B64725c;
case 0x64725e:goto L64725e;
case 0x647261:c.instructions+=7;goto B647261;
case 0x647262:c.instructions+=6;goto B647262;
case 0x647263:c.instructions+=5;goto B647263;
case 0x647266:c.instructions+=4;goto B647266;
case 0x647268:c.instructions+=3;goto B647268;
case 0x64726b:c.instructions+=2;goto B64726b;
case 0x64726e:c.instructions+=1;goto B64726e;
case 0x647273:goto L647273;
case 0x647275:c.instructions+=1;goto B647275;
case 0x647277:goto L647277;
case 0x64727a:c.instructions+=2;goto B64727a;
case 0x64727c:c.instructions+=1;goto B64727c;
case 0x647281:goto L647281;
case 0x647283:c.instructions+=1;goto B647283;
case 0x647285:goto L647285;
case 0x64728b:c.instructions+=4;goto B64728b;
case 0x647291:c.instructions+=3;goto B647291;
case 0x647294:c.instructions+=2;goto B647294;
case 0x64729a:c.instructions+=1;goto B64729a;
case 0x64729c:goto L64729c;
case 0x64729d:c.instructions+=2;goto B64729d;
case 0x64729e:c.instructions+=1;goto B64729e;
case 0x6472a1:goto L6472a1;
case 0x6472a3:c.instructions+=9;goto B6472a3;
case 0x6472a4:c.instructions+=8;goto B6472a4;
case 0x6472a6:c.instructions+=7;goto B6472a6;
case 0x6472a7:c.instructions+=6;goto B6472a7;
case 0x6472a8:c.instructions+=5;goto B6472a8;
case 0x6472a9:c.instructions+=4;goto B6472a9;
case 0x6472aa:c.instructions+=3;goto B6472aa;
case 0x6472ab:c.instructions+=2;goto B6472ab;
case 0x6472ad:c.instructions+=1;goto B6472ad;
case 0x6472b2:goto L6472b2;
case 0x6472b5:c.instructions+=2;goto B6472b5;
case 0x6472b7:c.instructions+=1;goto B6472b7;
case 0x6472b9:goto L6472b9;
case 0x6472bd:c.instructions+=1;goto B6472bd;
case 0x6472c3:goto L6472c3;
case 0x6472c6:c.instructions+=2;goto B6472c6;
case 0x6472c8:c.instructions+=1;goto B6472c8;
case 0x6472ca:goto L6472ca;
case 0x6472cd:c.instructions+=4;goto B6472cd;
case 0x6472cf:c.instructions+=3;goto B6472cf;
case 0x6472d2:c.instructions+=2;goto B6472d2;
case 0x6472d3:c.instructions+=1;goto B6472d3;
case 0x6472d5:goto L6472d5;
case 0x6472d7:goto L6472d7;
case 0x6472da:c.instructions+=11;goto B6472da;
case 0x6472dd:c.instructions+=10;goto B6472dd;
case 0x6472e0:c.instructions+=9;goto B6472e0;
case 0x6472e4:c.instructions+=8;goto B6472e4;
case 0x6472ea:c.instructions+=7;goto B6472ea;
case 0x6472ed:c.instructions+=6;goto B6472ed;
case 0x6472f0:c.instructions+=5;goto B6472f0;
case 0x6472f6:c.instructions+=4;goto B6472f6;
case 0x6472f9:c.instructions+=3;goto B6472f9;
case 0x6472fc:c.instructions+=2;goto B6472fc;
case 0x647300:c.instructions+=1;goto B647300;
case 0x647302:goto L647302;
case 0x647305:c.instructions+=3;goto B647305;
case 0x64730b:c.instructions+=2;goto B64730b;
case 0x647311:c.instructions+=1;goto B647311;
case 0x647316:goto L647316;
case 0x647318:c.instructions+=1;goto B647318;
case 0x64731e:goto L64731e;
case 0x647321:goto L647321;
case 0x647323:c.instructions+=2;goto B647323;
case 0x647326:c.instructions+=1;goto B647326;
case 0x64732c:goto L64732c;
case 0x64732e:c.instructions+=4;goto B64732e;
case 0x647331:c.instructions+=3;goto B647331;
case 0x647336:c.instructions+=2;goto B647336;
case 0x647337:c.instructions+=1;goto B647337;
case 0x647339:goto L647339;
case 0x64733b:goto L64733b;
case 0x647341:goto L647341;
case 0x647343:c.instructions+=2;goto B647343;
case 0x647346:c.instructions+=1;goto B647346;
case 0x64734c:goto L64734c;
case 0x647352:c.instructions+=6;goto B647352;
case 0x647355:c.instructions+=5;goto B647355;
case 0x647358:c.instructions+=4;goto B647358;
case 0x64735b:c.instructions+=3;goto B64735b;
case 0x647362:c.instructions+=2;goto B647362;
case 0x647365:c.instructions+=1;goto B647365;
case 0x64736a:goto L64736a;
case 0x64736c:c.instructions+=3;goto B64736c;
case 0x64736d:c.instructions+=2;goto B64736d;
case 0x64736f:c.instructions+=1;goto B64736f;
case 0x647371:goto L647371;
case 0x647374:goto L647374;
case 0x647376:c.instructions+=3;goto B647376;
case 0x647379:c.instructions+=2;goto B647379;
case 0x64737c:c.instructions+=1;goto B64737c;
case 0x64737e:goto L64737e;
case 0x647381:c.instructions+=1;goto B647381;
case 0x647383:goto L647383;
case 0x647389:c.instructions+=4;goto B647389;
case 0x64738f:c.instructions+=3;goto B64738f;
case 0x647390:c.instructions+=2;goto B647390;
case 0x647396:c.instructions+=1;goto B647396;
case 0x64739b:goto L64739b;
case 0x64739d:c.instructions+=1;goto B64739d;
case 0x6473a3:goto L6473a3;
case 0x6473a5:c.instructions+=2;goto B6473a5;
case 0x6473a8:c.instructions+=1;goto B6473a8;
case 0x6473aa:goto L6473aa;
case 0x6473ad:c.instructions+=1;goto B6473ad;
case 0x6473af:goto L6473af;
case 0x6473b3:c.instructions+=1;goto B6473b3;
case 0x6473b5:goto L6473b5;
case 0x6473ba:c.instructions+=5;goto B6473ba;
case 0x6473bf:c.instructions+=4;goto B6473bf;
case 0x6473c2:c.instructions+=3;goto B6473c2;
case 0x6473c5:c.instructions+=2;goto B6473c5;
case 0x6473c6:c.instructions+=1;goto B6473c6;
case 0x6473cb:goto L6473cb;
case 0x6473ce:goto L6473ce;
case 0x6473d1:c.instructions+=1;goto B6473d1;
case 0x6473d3:goto L6473d3;
case 0x6473d6:goto L6473d6;
case 0x6473da:c.instructions+=1;goto B6473da;
case 0x6473dc:goto L6473dc;
case 0x6473e2:c.instructions+=1;goto B6473e2;
case 0x6473e7:goto L6473e7;
case 0x6473ed:c.instructions+=5;goto B6473ed;
case 0x6473f1:c.instructions+=4;goto B6473f1;
case 0x6473f7:c.instructions+=3;goto B6473f7;
case 0x6473f8:c.instructions+=2;goto B6473f8;
case 0x6473fe:c.instructions+=1;goto B6473fe;
case 0x647403:goto L647403;
case 0x647405:c.instructions+=1;goto B647405;
case 0x64740b:goto L64740b;
case 0x64740e:goto L64740e;
case 0x647414:c.instructions+=5;goto B647414;
case 0x64741a:c.instructions+=4;goto B64741a;
case 0x64741d:c.instructions+=3;goto B64741d;
case 0x64741f:c.instructions+=2;goto B64741f;
case 0x647422:c.instructions+=1;goto B647422;
case 0x647428:goto L647428;
case 0x64742b:c.instructions+=3;goto B64742b;
case 0x64742d:c.instructions+=2;goto B64742d;
case 0x647433:c.instructions+=1;goto B647433;
case 0x647434:goto L647434;
case 0x647436:goto L647436;
case 0x64743c:c.instructions+=2;goto B64743c;
case 0x647440:c.instructions+=1;goto B647440;
case 0x647442:goto L647442;
case 0x647445:c.instructions+=1;goto B647445;
case 0x64744b:goto L64744b;
case 0x64744e:c.instructions+=4;goto B64744e;
case 0x647450:c.instructions+=3;goto B647450;
case 0x647452:c.instructions+=2;goto B647452;
case 0x647457:c.instructions+=1;goto B647457;
case 0x64745c:goto L64745c;
case 0x64745e:c.instructions+=2;goto B64745e;
case 0x647461:c.instructions+=1;goto B647461;
case 0x647467:goto L647467;
case 0x64746a:c.instructions+=1;goto B64746a;
case 0x64746c:goto L64746c;
case 0x64746f:c.instructions+=6;goto B64746f;
case 0x647470:c.instructions+=5;goto B647470;
case 0x647473:c.instructions+=4;goto B647473;
case 0x647474:c.instructions+=3;goto B647474;
case 0x647477:c.instructions+=2;goto B647477;
case 0x647479:c.instructions+=1;goto B647479;
case 0x64747e:goto L64747e;
case 0x647480:c.instructions+=1;goto B647480;
case 0x647482:goto L647482;
case 0x647485:c.instructions+=4;goto B647485;
case 0x647487:c.instructions+=3;goto B647487;
case 0x64748a:c.instructions+=2;goto B64748a;
case 0x64748d:c.instructions+=1;goto B64748d;
case 0x647492:goto L647492;
case 0x647494:c.instructions+=1;goto B647494;
case 0x647496:goto L647496;
case 0x647499:goto L647499;
case 0x64749c:c.instructions+=1;goto B64749c;
case 0x64749e:goto L64749e;
case 0x6474a1:c.instructions+=4;goto B6474a1;
case 0x6474a3:c.instructions+=3;goto B6474a3;
case 0x6474a8:c.instructions+=2;goto B6474a8;
case 0x6474a9:c.instructions+=1;goto B6474a9;
case 0x6474ab:goto L6474ab;
case 0x6474ad:goto L6474ad;
case 0x6474af:goto L6474af;
case 0x6474b5:c.instructions+=5;goto B6474b5;
case 0x6474bb:c.instructions+=4;goto B6474bb;
case 0x6474be:c.instructions+=3;goto B6474be;
case 0x6474c0:c.instructions+=2;goto B6474c0;
case 0x6474c3:c.instructions+=1;goto B6474c3;
case 0x6474c5:goto L6474c5;
case 0x6474cc:c.instructions+=1;goto B6474cc;
case 0x6474ce:goto L6474ce;
case 0x6474d1:c.instructions+=4;goto B6474d1;
case 0x6474d3:c.instructions+=3;goto B6474d3;
case 0x6474d8:c.instructions+=2;goto B6474d8;
case 0x6474d9:c.instructions+=1;goto B6474d9;
case 0x6474db:goto L6474db;
case 0x6474dd:goto L6474dd;
case 0x6474df:goto L6474df;
case 0x6474e5:c.instructions+=3;goto B6474e5;
case 0x6474eb:c.instructions+=2;goto B6474eb;
case 0x6474ee:c.instructions+=1;goto B6474ee;
case 0x6474f1:goto L6474f1;
case 0x6474f3:c.instructions+=6;goto B6474f3;
case 0x6474f6:c.instructions+=5;goto B6474f6;
case 0x6474f9:c.instructions+=4;goto B6474f9;
case 0x6474fb:c.instructions+=3;goto B6474fb;
case 0x6474fe:c.instructions+=2;goto B6474fe;
case 0x647501:c.instructions+=1;goto B647501;
case 0x647507:goto L647507;
case 0x64750b:c.instructions+=1;goto B64750b;
case 0x647511:goto L647511;
case 0x647516:c.instructions+=1;goto B647516;
case 0x647518:goto L647518;
case 0x64751a:goto L64751a;
case 0x647520:c.instructions+=9;goto B647520;
case 0x647522:c.instructions+=8;goto B647522;
case 0x647525:c.instructions+=7;goto B647525;
case 0x647528:c.instructions+=6;goto B647528;
case 0x64752b:c.instructions+=5;goto B64752b;
case 0x64752d:c.instructions+=4;goto B64752d;
case 0x647530:c.instructions+=3;goto B647530;
case 0x647533:c.instructions+=2;goto B647533;
case 0x647539:c.instructions+=1;goto B647539;
case 0x64753e:goto L64753e;
case 0x647544:c.instructions+=2;goto B647544;
case 0x647548:c.instructions+=1;goto B647548;
case 0x64754a:goto L64754a;
case 0x64754f:c.instructions+=5;goto B64754f;
case 0x647554:c.instructions+=4;goto B647554;
case 0x647555:c.instructions+=3;goto B647555;
case 0x647558:c.instructions+=2;goto B647558;
case 0x647559:c.instructions+=1;goto B647559;
case 0x64755e:goto L64755e;
case 0x647561:goto L647561;
case 0x647567:c.instructions+=2;goto B647567;
case 0x64756b:c.instructions+=1;goto B64756b;
case 0x64756d:goto L64756d;
case 0x647570:c.instructions+=4;goto B647570;
case 0x647576:c.instructions+=3;goto B647576;
case 0x64757a:c.instructions+=2;goto B64757a;
case 0x64757c:c.instructions+=1;goto B64757c;
case 0x647581:goto L647581;
case 0x647587:c.instructions+=5;goto B647587;
case 0x64758d:c.instructions+=4;goto B64758d;
case 0x647590:c.instructions+=3;goto B647590;
case 0x647596:c.instructions+=2;goto B647596;
case 0x64759d:c.instructions+=1;goto B64759d;
case 0x64759f:goto L64759f;
case 0x6475a2:c.instructions+=2;goto B6475a2;
case 0x6475a4:c.instructions+=1;goto B6475a4;
case 0x6475a6:goto L6475a6;
case 0x6475a9:c.instructions+=1;goto B6475a9;
case 0x6475ab:goto L6475ab;
case 0x6475ae:c.instructions+=1;goto B6475ae;
case 0x6475b0:goto L6475b0;
case 0x6475b4:c.instructions+=1;goto B6475b4;
case 0x6475b6:goto L6475b6;
case 0x6475ba:c.instructions+=1;goto B6475ba;
case 0x6475bc:goto L6475bc;
case 0x6475bf:goto L6475bf;
case 0x6475c3:c.instructions+=1;goto B6475c3;
case 0x6475c5:goto L6475c5;
case 0x6475c8:c.instructions+=2;goto B6475c8;
case 0x6475cb:c.instructions+=1;goto B6475cb;
case 0x6475cd:goto L6475cd;
case 0x6475d0:goto L6475d0;
case 0x6475d3:c.instructions+=2;goto B6475d3;
case 0x6475d6:c.instructions+=1;goto B6475d6;
case 0x6475d8:goto L6475d8;
case 0x6475de:goto L6475de;
case 0x6475e0:goto L6475e0;
case 0x6475e1:c.instructions+=4;goto B6475e1;
case 0x6475e2:c.instructions+=3;goto B6475e2;
case 0x6475e3:c.instructions+=2;goto B6475e3;
case 0x6475e4:c.instructions+=1;goto B6475e4;
case 0x6475e7:goto L6475e7;
case 0x6475e9:c.instructions+=7;goto B6475e9;
case 0x6475ea:c.instructions+=6;goto B6475ea;
case 0x6475ec:c.instructions+=5;goto B6475ec;
case 0x6475ef:c.instructions+=4;goto B6475ef;
case 0x6475f0:c.instructions+=3;goto B6475f0;
case 0x6475f2:c.instructions+=2;goto B6475f2;
case 0x6475f6:c.instructions+=1;goto B6475f6;
case 0x6475f8:goto L6475f8;
case 0x6475fd:c.instructions+=1;goto B6475fd;
case 0x6475ff:goto L6475ff;
case 0x647603:c.instructions+=1;goto B647603;
case 0x647605:goto L647605;
case 0x647608:c.instructions+=3;goto B647608;
case 0x64760a:c.instructions+=2;goto B64760a;
case 0x64760b:c.instructions+=1;goto B64760b;
case 0x647610:goto L647610;
case 0x647612:c.instructions+=1;goto B647612;
case 0x647614:goto L647614;
case 0x647616:goto L647616;
case 0x647619:c.instructions+=5;goto B647619;
case 0x64761c:c.instructions+=4;goto B64761c;
case 0x64761f:c.instructions+=3;goto B64761f;
case 0x647623:c.instructions+=2;goto B647623;
case 0x647625:c.instructions+=1;goto B647625;
case 0x64762a:goto L64762a;
case 0x64762d:c.instructions+=2;goto B64762d;
case 0x64762f:c.instructions+=1;goto B64762f;
case 0x647631:goto L647631;
case 0x647633:c.instructions+=1;goto B647633;
case 0x647635:goto L647635;
case 0x647637:c.instructions+=1;goto B647637;
case 0x647638:goto L647638;
case 0x64763e:c.instructions+=1;goto B64763e;
case 0x647640:goto L647640;
case 0x647641:c.instructions+=2;goto B647641;
case 0x647642:c.instructions+=1;goto B647642;
case 0x647643:goto L647643;
case 0x647645:c.instructions+=7;goto B647645;
case 0x647646:c.instructions+=6;goto B647646;
case 0x647648:c.instructions+=5;goto B647648;
case 0x647649:c.instructions+=4;goto B647649;
case 0x64764b:c.instructions+=3;goto B64764b;
case 0x64764e:c.instructions+=2;goto B64764e;
case 0x647650:c.instructions+=1;goto B647650;
case 0x647655:goto L647655;
case 0x647657:c.instructions+=3;goto B647657;
case 0x647658:c.instructions+=2;goto B647658;
case 0x647659:c.instructions+=1;goto B647659;
case 0x64765c:goto L64765c;
case 0x64765e:c.instructions+=6;goto B64765e;
case 0x647662:c.instructions+=5;goto B647662;
case 0x647664:c.instructions+=4;goto B647664;
case 0x647667:c.instructions+=3;goto B647667;
case 0x64766a:c.instructions+=2;goto B64766a;
case 0x64766d:c.instructions+=1;goto B64766d;
case 0x64766e:goto L64766e;
case 0x647670:c.instructions+=5;goto B647670;
case 0x647671:c.instructions+=4;goto B647671;
case 0x647673:c.instructions+=3;goto B647673;
case 0x647674:c.instructions+=2;goto B647674;
case 0x647676:c.instructions+=1;goto B647676;
case 0x64767b:goto L64767b;
case 0x64767f:c.instructions+=1;goto B64767f;
case 0x647681:goto L647681;
case 0x647682:c.instructions+=1;goto B647682;
case 0x647687:goto L647687;
case 0x647688:goto L647688;
case 0x64768a:c.instructions+=3;goto B64768a;
case 0x64768b:c.instructions+=2;goto B64768b;
case 0x64768c:c.instructions+=1;goto B64768c;
case 0x64768f:goto L64768f;
case 0x647691:c.instructions+=4;goto B647691;
case 0x647692:c.instructions+=3;goto B647692;
case 0x647694:c.instructions+=2;goto B647694;
case 0x647698:c.instructions+=1;goto B647698;
case 0x64769a:goto L64769a;
case 0x64769b:goto L64769b;
case 0x64769e:c.instructions+=5;goto B64769e;
case 0x6476a1:c.instructions+=4;goto B6476a1;
case 0x6476a4:c.instructions+=3;goto B6476a4;
case 0x6476a8:c.instructions+=2;goto B6476a8;
case 0x6476aa:c.instructions+=1;goto B6476aa;
case 0x6476af:goto L6476af;
case 0x6476b0:c.instructions+=1;goto B6476b0;
case 0x6476b5:goto L6476b5;
case 0x6476b9:c.instructions+=2;goto B6476b9;
case 0x6476ba:c.instructions+=1;goto B6476ba;
case 0x6476bc:goto L6476bc;
case 0x6476bd:goto L6476bd;
case 0x6476be:c.instructions+=1;goto B6476be;
case 0x6476bf:goto L6476bf;
case 0x6476c1:c.instructions+=5;goto B6476c1;
case 0x6476c2:c.instructions+=4;goto B6476c2;
case 0x6476c4:c.instructions+=3;goto B6476c4;
case 0x6476c5:c.instructions+=2;goto B6476c5;
case 0x6476c7:c.instructions+=1;goto B6476c7;
case 0x6476cc:goto L6476cc;
case 0x6476d0:c.instructions+=1;goto B6476d0;
case 0x6476d2:goto L6476d2;
case 0x6476d3:c.instructions+=1;goto B6476d3;
case 0x6476d8:goto L6476d8;
case 0x6476d9:goto L6476d9;
case 0x6476db:c.instructions+=3;goto B6476db;
case 0x6476dc:c.instructions+=2;goto B6476dc;
case 0x6476dd:c.instructions+=1;goto B6476dd;
case 0x6476e0:goto L6476e0;
case 0x6476e2:c.instructions+=26;goto B6476e2;
case 0x6476e3:c.instructions+=25;goto B6476e3;
case 0x6476e5:c.instructions+=24;goto B6476e5;
case 0x6476e7:c.instructions+=23;goto B6476e7;
case 0x6476ea:c.instructions+=22;goto B6476ea;
case 0x6476ec:c.instructions+=21;goto B6476ec;
case 0x6476ef:c.instructions+=20;goto B6476ef;
case 0x6476f3:c.instructions+=19;goto B6476f3;
case 0x6476f6:c.instructions+=18;goto B6476f6;
case 0x6476f9:c.instructions+=17;goto B6476f9;
case 0x6476fc:c.instructions+=16;goto B6476fc;
case 0x6476ff:c.instructions+=15;goto B6476ff;
case 0x647702:c.instructions+=14;goto B647702;
case 0x647705:c.instructions+=13;goto B647705;
case 0x647708:c.instructions+=12;goto B647708;
case 0x64770b:c.instructions+=11;goto B64770b;
case 0x64770e:c.instructions+=10;goto B64770e;
case 0x647711:c.instructions+=9;goto B647711;
case 0x647714:c.instructions+=8;goto B647714;
case 0x647717:c.instructions+=7;goto B647717;
case 0x64771a:c.instructions+=6;goto B64771a;
case 0x64771d:c.instructions+=5;goto B64771d;
case 0x647720:c.instructions+=4;goto B647720;
case 0x647723:c.instructions+=3;goto B647723;
case 0x647726:c.instructions+=2;goto B647726;
case 0x647727:c.instructions+=1;goto B647727;
case 0x64772a:goto L64772a;
case 0x64772c:c.instructions+=4;goto B64772c;
case 0x64772d:c.instructions+=3;goto B64772d;
case 0x64772f:c.instructions+=2;goto B64772f;
case 0x647733:c.instructions+=1;goto B647733;
case 0x647735:goto L647735;
case 0x647736:goto L647736;
case 0x647739:c.instructions+=5;goto B647739;
case 0x64773c:c.instructions+=4;goto B64773c;
case 0x64773f:c.instructions+=3;goto B64773f;
case 0x647743:c.instructions+=2;goto B647743;
case 0x647745:c.instructions+=1;goto B647745;
case 0x64774a:goto L64774a;
case 0x64774b:c.instructions+=1;goto B64774b;
case 0x647750:goto L647750;
case 0x647754:c.instructions+=2;goto B647754;
case 0x647755:c.instructions+=1;goto B647755;
case 0x647757:goto L647757;
case 0x647758:goto L647758;
case 0x647759:c.instructions+=1;goto B647759;
case 0x64775a:goto L64775a;
case 0x64775c:c.instructions+=4;goto B64775c;
case 0x64775d:c.instructions+=3;goto B64775d;
case 0x64775f:c.instructions+=2;goto B64775f;
case 0x647763:c.instructions+=1;goto B647763;
case 0x647765:goto L647765;
case 0x647766:goto L647766;
case 0x647769:c.instructions+=5;goto B647769;
case 0x64776c:c.instructions+=4;goto B64776c;
case 0x64776f:c.instructions+=3;goto B64776f;
case 0x647773:c.instructions+=2;goto B647773;
case 0x647775:c.instructions+=1;goto B647775;
case 0x64777a:goto L64777a;
case 0x64777b:c.instructions+=1;goto B64777b;
case 0x647780:goto L647780;
case 0x647784:c.instructions+=2;goto B647784;
case 0x647785:c.instructions+=1;goto B647785;
case 0x647787:goto L647787;
case 0x647788:goto L647788;
case 0x647789:c.instructions+=1;goto B647789;
case 0x64778a:goto L64778a;
case 0x64778c:c.instructions+=5;goto B64778c;
case 0x64778d:c.instructions+=4;goto B64778d;
case 0x64778f:c.instructions+=3;goto B64778f;
case 0x647790:c.instructions+=2;goto B647790;
case 0x647792:c.instructions+=1;goto B647792;
case 0x647797:goto L647797;
case 0x64779b:c.instructions+=1;goto B64779b;
case 0x64779d:goto L64779d;
case 0x64779e:c.instructions+=1;goto B64779e;
case 0x6477a3:goto L6477a3;
case 0x6477a4:goto L6477a4;
case 0x6477a6:c.instructions+=3;goto B6477a6;
case 0x6477a7:c.instructions+=2;goto B6477a7;
case 0x6477a8:c.instructions+=1;goto B6477a8;
case 0x6477ab:goto L6477ab;
case 0x6477ad:c.instructions+=9;goto B6477ad;
case 0x6477af:c.instructions+=8;goto B6477af;
case 0x6477b2:c.instructions+=7;goto B6477b2;
case 0x6477b5:c.instructions+=6;goto B6477b5;
case 0x6477b8:c.instructions+=5;goto B6477b8;
case 0x6477bb:c.instructions+=4;goto B6477bb;
case 0x6477be:c.instructions+=3;goto B6477be;
case 0x6477c0:c.instructions+=2;goto B6477c0;
case 0x6477c3:c.instructions+=1;goto B6477c3;
case 0x6477c4:goto L6477c4;
case 0x6477c6:c.instructions+=5;goto B6477c6;
case 0x6477c7:c.instructions+=4;goto B6477c7;
case 0x6477c9:c.instructions+=3;goto B6477c9;
case 0x6477cc:c.instructions+=2;goto B6477cc;
case 0x6477ce:c.instructions+=1;goto B6477ce;
case 0x6477d0:goto L6477d0;
case 0x6477d1:c.instructions+=1;goto B6477d1;
case 0x6477d6:goto L6477d6;
case 0x6477da:c.instructions+=1;goto B6477da;
case 0x6477db:goto L6477db;
case 0x6477df:c.instructions+=1;goto B6477df;
case 0x6477e1:goto L6477e1;
case 0x6477e2:goto L6477e2;
case 0x6477e5:c.instructions+=5;goto B6477e5;
case 0x6477e8:c.instructions+=4;goto B6477e8;
case 0x6477eb:c.instructions+=3;goto B6477eb;
case 0x6477ef:c.instructions+=2;goto B6477ef;
case 0x6477f1:c.instructions+=1;goto B6477f1;
case 0x6477f6:goto L6477f6;
case 0x6477f7:c.instructions+=1;goto B6477f7;
case 0x6477fc:goto L6477fc;
case 0x647800:c.instructions+=2;goto B647800;
case 0x647801:c.instructions+=1;goto B647801;
case 0x647803:goto L647803;
case 0x647804:goto L647804;
case 0x647805:c.instructions+=1;goto B647805;
case 0x647806:goto L647806;
case 0x647808:c.instructions+=5;goto B647808;
case 0x647809:c.instructions+=4;goto B647809;
case 0x64780b:c.instructions+=3;goto B64780b;
case 0x64780c:c.instructions+=2;goto B64780c;
case 0x64780e:c.instructions+=1;goto B64780e;
case 0x647813:goto L647813;
case 0x647817:c.instructions+=1;goto B647817;
case 0x647819:goto L647819;
case 0x64781a:c.instructions+=1;goto B64781a;
case 0x64781f:goto L64781f;
case 0x647820:goto L647820;
case 0x647822:c.instructions+=3;goto B647822;
case 0x647823:c.instructions+=2;goto B647823;
case 0x647824:c.instructions+=1;goto B647824;
case 0x647827:goto L647827;
case 0x647829:c.instructions+=11;goto B647829;
case 0x64782a:c.instructions+=10;goto B64782a;
case 0x64782c:c.instructions+=9;goto B64782c;
case 0x64782d:c.instructions+=8;goto B64782d;
case 0x64782e:c.instructions+=7;goto B64782e;
case 0x647832:c.instructions+=6;goto B647832;
case 0x647833:c.instructions+=5;goto B647833;
case 0x647834:c.instructions+=4;goto B647834;
case 0x647836:c.instructions+=3;goto B647836;
case 0x647838:c.instructions+=2;goto B647838;
case 0x64783b:c.instructions+=1;goto B64783b;
case 0x647840:goto L647840;
case 0x647842:c.instructions+=2;goto B647842;
case 0x647843:c.instructions+=1;goto B647843;
case 0x647845:goto L647845;
case 0x647847:c.instructions+=1;goto B647847;
case 0x64784c:goto L64784c;
case 0x64784e:c.instructions+=1;goto B64784e;
case 0x647850:goto L647850;
case 0x647852:goto L647852;
case 0x647854:c.instructions+=1;goto B647854;
case 0x647856:goto L647856;
case 0x64785d:c.instructions+=1;goto B64785d;
case 0x64785f:goto L64785f;
case 0x647860:c.instructions+=3;goto B647860;
case 0x647863:c.instructions+=2;goto B647863;
case 0x647865:c.instructions+=1;goto B647865;
case 0x647867:goto L647867;
case 0x647869:c.instructions+=11;goto B647869;
case 0x64786c:c.instructions+=10;goto B64786c;
case 0x64786e:c.instructions+=9;goto B64786e;
case 0x647870:c.instructions+=8;goto B647870;
case 0x647872:c.instructions+=7;goto B647872;
case 0x647874:c.instructions+=6;goto B647874;
case 0x647877:c.instructions+=5;goto B647877;
case 0x647879:c.instructions+=4;goto B647879;
case 0x64787b:c.instructions+=3;goto B64787b;
case 0x64787e:c.instructions+=2;goto B64787e;
case 0x64787f:c.instructions+=1;goto B64787f;
case 0x647884:goto L647884;
case 0x647886:c.instructions+=3;goto B647886;
case 0x647887:c.instructions+=2;goto B647887;
case 0x64788a:c.instructions+=1;goto B64788a;
case 0x64788c:goto L64788c;
case 0x647893:c.instructions+=1;goto B647893;
case 0x647895:goto L647895;
case 0x647898:c.instructions+=4;goto B647898;
case 0x64789a:c.instructions+=3;goto B64789a;
case 0x64789c:c.instructions+=2;goto B64789c;
case 0x64789e:c.instructions+=1;goto B64789e;
case 0x6478a1:goto L6478a1;
case 0x6478a3:goto L6478a3;
case 0x6478a5:c.instructions+=1;goto B6478a5;
case 0x6478a8:goto L6478a8;
case 0x6478aa:goto L6478aa;
case 0x6478ad:goto L6478ad;
case 0x6478b0:c.instructions+=7;goto B6478b0;
case 0x6478b3:c.instructions+=6;goto B6478b3;
case 0x6478b6:c.instructions+=5;goto B6478b6;
case 0x6478b9:c.instructions+=4;goto B6478b9;
case 0x6478bc:c.instructions+=3;goto B6478bc;
case 0x6478be:c.instructions+=2;goto B6478be;
case 0x6478c1:c.instructions+=1;goto B6478c1;
case 0x6478c3:goto L6478c3;
case 0x6478c5:goto L6478c5;
case 0x6478c7:goto L6478c7;
case 0x6478c9:c.instructions+=2;goto B6478c9;
case 0x6478ca:c.instructions+=1;goto B6478ca;
case 0x6478cc:goto L6478cc;
case 0x6478ce:c.instructions+=2;goto B6478ce;
case 0x6478d0:c.instructions+=1;goto B6478d0;
case 0x6478d5:goto L6478d5;
case 0x6478d8:c.instructions+=4;goto B6478d8;
case 0x6478d9:c.instructions+=3;goto B6478d9;
case 0x6478da:c.instructions+=2;goto B6478da;
case 0x6478db:c.instructions+=1;goto B6478db;
case 0x6478de:goto L6478de;
case 0x6478e0:c.instructions+=10;goto B6478e0;
case 0x6478e1:c.instructions+=9;goto B6478e1;
case 0x6478e3:c.instructions+=8;goto B6478e3;
case 0x6478e4:c.instructions+=7;goto B6478e4;
case 0x6478e8:c.instructions+=6;goto B6478e8;
case 0x6478e9:c.instructions+=5;goto B6478e9;
case 0x6478ec:c.instructions+=4;goto B6478ec;
case 0x6478ee:c.instructions+=3;goto B6478ee;
case 0x6478ef:c.instructions+=2;goto B6478ef;
case 0x6478f1:c.instructions+=1;goto B6478f1;
case 0x6478f3:goto L6478f3;
case 0x6478f5:c.instructions+=1;goto B6478f5;
case 0x6478f8:goto L6478f8;
case 0x6478fa:c.instructions+=3;goto B6478fa;
case 0x6478fb:c.instructions+=2;goto B6478fb;
case 0x6478fd:c.instructions+=1;goto B6478fd;
case 0x6478ff:goto L6478ff;
case 0x647901:c.instructions+=2;goto B647901;
case 0x647902:c.instructions+=1;goto B647902;
case 0x647905:goto L647905;
case 0x647908:c.instructions+=5;goto B647908;
case 0x64790b:c.instructions+=4;goto B64790b;
case 0x64790d:c.instructions+=3;goto B64790d;
case 0x64790e:c.instructions+=2;goto B64790e;
case 0x647910:c.instructions+=1;goto B647910;
case 0x647915:goto L647915;
case 0x647917:c.instructions+=1;goto B647917;
case 0x647919:goto L647919;
case 0x64791b:c.instructions+=1;goto B64791b;
case 0x64791d:goto L64791d;
case 0x64791f:c.instructions+=4;goto B64791f;
case 0x647922:c.instructions+=3;goto B647922;
case 0x647924:c.instructions+=2;goto B647924;
case 0x647925:c.instructions+=1;goto B647925;
case 0x64792a:goto L64792a;
case 0x64792b:c.instructions+=3;goto B64792b;
case 0x64792c:c.instructions+=2;goto B64792c;
case 0x64792d:c.instructions+=1;goto B64792d;
case 0x647930:goto L647930;
case 0x647932:c.instructions+=9;goto B647932;
case 0x647933:c.instructions+=8;goto B647933;
case 0x647935:c.instructions+=7;goto B647935;
case 0x647936:c.instructions+=6;goto B647936;
case 0x64793a:c.instructions+=5;goto B64793a;
case 0x64793b:c.instructions+=4;goto B64793b;
case 0x64793c:c.instructions+=3;goto B64793c;
case 0x64793e:c.instructions+=2;goto B64793e;
case 0x647940:c.instructions+=1;goto B647940;
case 0x647945:goto L647945;
case 0x647947:c.instructions+=2;goto B647947;
case 0x647948:c.instructions+=1;goto B647948;
case 0x64794a:goto L64794a;
case 0x64794c:c.instructions+=1;goto B64794c;
case 0x647951:goto L647951;
case 0x647953:c.instructions+=1;goto B647953;
case 0x647955:goto L647955;
case 0x647957:goto L647957;
case 0x647959:c.instructions+=1;goto B647959;
case 0x64795b:goto L64795b;
case 0x647962:c.instructions+=1;goto B647962;
case 0x647964:goto L647964;
case 0x647966:c.instructions+=2;goto B647966;
case 0x64796c:c.instructions+=1;goto B64796c;
case 0x647971:goto L647971;
case 0x647973:c.instructions+=3;goto B647973;
case 0x647974:c.instructions+=2;goto B647974;
case 0x647977:c.instructions+=1;goto B647977;
case 0x647979:goto L647979;
case 0x647980:c.instructions+=1;goto B647980;
case 0x647982:goto L647982;
case 0x647985:c.instructions+=10;goto B647985;
case 0x647988:c.instructions+=9;goto B647988;
case 0x64798b:c.instructions+=8;goto B64798b;
case 0x64798e:c.instructions+=7;goto B64798e;
case 0x647991:c.instructions+=6;goto B647991;
case 0x647994:c.instructions+=5;goto B647994;
case 0x647997:c.instructions+=4;goto B647997;
case 0x64799a:c.instructions+=3;goto B64799a;
case 0x64799c:c.instructions+=2;goto B64799c;
case 0x64799f:c.instructions+=1;goto B64799f;
case 0x6479a1:goto L6479a1;
case 0x6479a3:goto L6479a3;
case 0x6479a5:goto L6479a5;
case 0x6479a7:c.instructions+=1;goto B6479a7;
case 0x6479a9:goto L6479a9;
case 0x6479ab:c.instructions+=2;goto B6479ab;
case 0x6479ad:c.instructions+=1;goto B6479ad;
case 0x6479b2:goto L6479b2;
case 0x6479b5:c.instructions+=4;goto B6479b5;
case 0x6479b6:c.instructions+=3;goto B6479b6;
case 0x6479b7:c.instructions+=2;goto B6479b7;
case 0x6479b8:c.instructions+=1;goto B6479b8;
case 0x6479bb:goto L6479bb;
case 0x6479bd:c.instructions+=12;goto B6479bd;
case 0x6479be:c.instructions+=11;goto B6479be;
case 0x6479c0:c.instructions+=10;goto B6479c0;
case 0x6479c3:c.instructions+=9;goto B6479c3;
case 0x6479c6:c.instructions+=8;goto B6479c6;
case 0x6479c9:c.instructions+=7;goto B6479c9;
case 0x6479cc:c.instructions+=6;goto B6479cc;
case 0x6479cf:c.instructions+=5;goto B6479cf;
case 0x6479d2:c.instructions+=4;goto B6479d2;
case 0x6479d5:c.instructions+=3;goto B6479d5;
case 0x6479d7:c.instructions+=2;goto B6479d7;
case 0x6479d8:c.instructions+=1;goto B6479d8;
case 0x6479db:goto L6479db;
case 0x6479dd:c.instructions+=5;goto B6479dd;
case 0x6479de:c.instructions+=4;goto B6479de;
case 0x6479e0:c.instructions+=3;goto B6479e0;
case 0x6479e2:c.instructions+=2;goto B6479e2;
case 0x6479e4:c.instructions+=1;goto B6479e4;
case 0x6479e6:goto L6479e6;
case 0x6479e7:c.instructions+=3;goto B6479e7;
case 0x6479ea:c.instructions+=2;goto B6479ea;
case 0x6479eb:c.instructions+=1;goto B6479eb;
case 0x6479ec:goto L6479ec;
case 0x6479ee:c.instructions+=1;goto B6479ee;
case 0x6479f0:goto L6479f0;
case 0x6479f2:c.instructions+=4;goto B6479f2;
case 0x6479f5:c.instructions+=3;goto B6479f5;
case 0x6479f7:c.instructions+=2;goto B6479f7;
case 0x6479fa:c.instructions+=1;goto B6479fa;
case 0x6479fc:goto L6479fc;
case 0x647a00:c.instructions+=1;goto B647a00;
case 0x647a02:goto L647a02;
case 0x647a05:c.instructions+=6;goto B647a05;
case 0x647a07:c.instructions+=5;goto B647a07;
case 0x647a0a:c.instructions+=4;goto B647a0a;
case 0x647a0d:c.instructions+=3;goto B647a0d;
case 0x647a10:c.instructions+=2;goto B647a10;
case 0x647a12:c.instructions+=1;goto B647a12;
case 0x647a14:goto L647a14;
case 0x647a17:c.instructions+=1;goto B647a17;
case 0x647a19:goto L647a19;
case 0x647a1c:goto L647a1c;
case 0x647a1e:c.instructions+=1;goto B647a1e;
case 0x647a21:goto L647a21;
case 0x647a23:goto L647a23;
case 0x647a25:c.instructions+=1;goto B647a25;
case 0x647a28:goto L647a28;
case 0x647a2a:goto L647a2a;
case 0x647a2d:c.instructions+=2;goto B647a2d;
case 0x647a2f:c.instructions+=1;goto B647a2f;
case 0x647a31:goto L647a31;
case 0x647a32:c.instructions+=2;goto B647a32;
case 0x647a33:c.instructions+=1;goto B647a33;
case 0x647a34:goto L647a34;
case 0x647a36:c.instructions+=2;goto B647a36;
case 0x647a37:c.instructions+=1;goto B647a37;
case 0x647a3a:goto L647a3a;
case 0x647a3c:c.instructions+=1;goto B647a3c;
case 0x647a3f:goto L647a3f;
case 0x647a41:c.instructions+=11;goto B647a41;
case 0x647a42:c.instructions+=10;goto B647a42;
case 0x647a44:c.instructions+=9;goto B647a44;
case 0x647a47:c.instructions+=8;goto B647a47;
case 0x647a48:c.instructions+=7;goto B647a48;
case 0x647a49:c.instructions+=6;goto B647a49;
case 0x647a4c:c.instructions+=5;goto B647a4c;
case 0x647a4e:c.instructions+=4;goto B647a4e;
case 0x647a50:c.instructions+=3;goto B647a50;
case 0x647a53:c.instructions+=2;goto B647a53;
case 0x647a56:c.instructions+=1;goto B647a56;
case 0x647a58:goto L647a58;
case 0x647a5f:c.instructions+=1;goto B647a5f;
case 0x647a64:goto L647a64;
case 0x647a67:c.instructions+=3;goto B647a67;
case 0x647a68:c.instructions+=2;goto B647a68;
case 0x647a69:c.instructions+=1;goto B647a69;
case 0x647a6f:goto L647a6f;
case 0x647a72:c.instructions+=1;goto B647a72;
case 0x647a78:goto L647a78;
case 0x647a79:c.instructions+=1;goto B647a79;
case 0x647a7b:goto L647a7b;
case 0x647a80:goto L647a80;
case 0x647a81:c.instructions+=4;goto B647a81;
case 0x647a84:c.instructions+=3;goto B647a84;
case 0x647a85:c.instructions+=2;goto B647a85;
case 0x647a86:c.instructions+=1;goto B647a86;
case 0x647a8b:goto L647a8b;
case 0x647a8e:goto L647a8e;
case 0x647a95:c.instructions+=1;goto B647a95;
case 0x647a9a:goto L647a9a;
case 0x647a9d:c.instructions+=6;goto B647a9d;
case 0x647a9f:c.instructions+=5;goto B647a9f;
case 0x647aa2:c.instructions+=4;goto B647aa2;
case 0x647aa4:c.instructions+=3;goto B647aa4;
case 0x647aa7:c.instructions+=2;goto B647aa7;
case 0x647aa9:c.instructions+=1;goto B647aa9;
case 0x647aab:goto L647aab;
case 0x647aac:c.instructions+=1;goto B647aac;
case 0x647aae:goto L647aae;
case 0x647aaf:c.instructions+=1;goto B647aaf;
case 0x647ab1:goto L647ab1;
case 0x647ab2:c.instructions+=1;goto B647ab2;
case 0x647ab4:goto L647ab4;
case 0x647ab9:c.instructions+=1;goto B647ab9;
case 0x647abb:goto L647abb;
case 0x647abe:c.instructions+=4;goto B647abe;
case 0x647ac1:c.instructions+=3;goto B647ac1;
case 0x647ac3:c.instructions+=2;goto B647ac3;
case 0x647ac6:c.instructions+=1;goto B647ac6;
case 0x647ac8:goto L647ac8;
case 0x647acb:c.instructions+=4;goto B647acb;
case 0x647ace:c.instructions+=3;goto B647ace;
case 0x647ad0:c.instructions+=2;goto B647ad0;
case 0x647ad3:c.instructions+=1;goto B647ad3;
case 0x647ad5:goto L647ad5;
case 0x647ad8:c.instructions+=3;goto B647ad8;
case 0x647ada:c.instructions+=2;goto B647ada;
case 0x647adb:c.instructions+=1;goto B647adb;
case 0x647add:goto L647add;
case 0x647ae0:c.instructions+=4;goto B647ae0;
case 0x647ae2:c.instructions+=3;goto B647ae2;
case 0x647ae5:c.instructions+=2;goto B647ae5;
case 0x647ae8:c.instructions+=1;goto B647ae8;
case 0x647aee:goto L647aee;
case 0x647af5:goto L647af5;
case 0x647af8:c.instructions+=2;goto B647af8;
case 0x647afe:c.instructions+=1;goto B647afe;
case 0x647b03:goto L647b03;
case 0x647b06:c.instructions+=2;goto B647b06;
case 0x647b0c:c.instructions+=1;goto B647b0c;
case 0x647b11:goto L647b11;
case 0x647b14:c.instructions+=2;goto B647b14;
case 0x647b1a:c.instructions+=1;goto B647b1a;
case 0x647b1f:goto L647b1f;
case 0x647b22:c.instructions+=6;goto B647b22;
case 0x647b24:c.instructions+=5;goto B647b24;
case 0x647b25:c.instructions+=4;goto B647b25;
case 0x647b27:c.instructions+=3;goto B647b27;
case 0x647b2a:c.instructions+=2;goto B647b2a;
case 0x647b2c:c.instructions+=1;goto B647b2c;
case 0x647b31:goto L647b31;
case 0x647b34:c.instructions+=2;goto B647b34;
case 0x647b3a:c.instructions+=1;goto B647b3a;
case 0x647b3f:goto L647b3f;
case 0x647b42:c.instructions+=2;goto B647b42;
case 0x647b48:c.instructions+=1;goto B647b48;
case 0x647b4d:goto L647b4d;
case 0x647b50:c.instructions+=2;goto B647b50;
case 0x647b56:c.instructions+=1;goto B647b56;
case 0x647b5b:goto L647b5b;
case 0x647b5e:c.instructions+=2;goto B647b5e;
case 0x647b64:c.instructions+=1;goto B647b64;
case 0x647b66:goto L647b66;
case 0x647b69:c.instructions+=2;goto B647b69;
case 0x647b6f:c.instructions+=1;goto B647b6f;
case 0x647b71:goto L647b71;
case 0x647b74:c.instructions+=2;goto B647b74;
case 0x647b7a:c.instructions+=1;goto B647b7a;
case 0x647b7c:goto L647b7c;
case 0x647b7f:c.instructions+=2;goto B647b7f;
case 0x647b85:c.instructions+=1;goto B647b85;
case 0x647b87:goto L647b87;
case 0x647b8a:c.instructions+=2;goto B647b8a;
case 0x647b90:c.instructions+=1;goto B647b90;
case 0x647b92:goto L647b92;
case 0x647b95:c.instructions+=2;goto B647b95;
case 0x647b9b:c.instructions+=1;goto B647b9b;
case 0x647b9d:goto L647b9d;
case 0x647ba0:c.instructions+=2;goto B647ba0;
case 0x647ba6:c.instructions+=1;goto B647ba6;
case 0x647ba8:goto L647ba8;
case 0x647bab:c.instructions+=1;goto B647bab;
case 0x647bb1:goto L647bb1;
case 0x647bb4:c.instructions+=2;goto B647bb4;
case 0x647bb6:c.instructions+=1;goto B647bb6;
case 0x647bb8:goto L647bb8;
case 0x647bbb:c.instructions+=2;goto B647bbb;
case 0x647bc1:c.instructions+=1;goto B647bc1;
case 0x647bc3:goto L647bc3;
case 0x647bc6:c.instructions+=2;goto B647bc6;
case 0x647bcc:c.instructions+=1;goto B647bcc;
case 0x647bce:goto L647bce;
case 0x647bd1:c.instructions+=2;goto B647bd1;
case 0x647bd7:c.instructions+=1;goto B647bd7;
case 0x647bd9:goto L647bd9;
case 0x647bdc:c.instructions+=1;goto B647bdc;
case 0x647be2:goto L647be2;
case 0x647be5:c.instructions+=1;goto B647be5;
case 0x647beb:goto L647beb;
case 0x647bed:c.instructions+=4;goto B647bed;
case 0x647bf0:c.instructions+=3;goto B647bf0;
case 0x647bf3:c.instructions+=2;goto B647bf3;
case 0x647bf5:c.instructions+=1;goto B647bf5;
case 0x647bfa:goto L647bfa;
case 0x647bff:c.instructions+=1;goto B647bff;
case 0x647c04:goto L647c04;
case 0x647c07:c.instructions+=3;goto B647c07;
case 0x647c09:c.instructions+=2;goto B647c09;
case 0x647c0c:c.instructions+=1;goto B647c0c;
case 0x647c12:goto L647c12;
case 0x647c15:c.instructions+=9;goto B647c15;
case 0x647c18:c.instructions+=8;goto B647c18;
case 0x647c19:c.instructions+=7;goto B647c19;
case 0x647c1c:c.instructions+=6;goto B647c1c;
case 0x647c1d:c.instructions+=5;goto B647c1d;
case 0x647c20:c.instructions+=4;goto B647c20;
case 0x647c23:c.instructions+=3;goto B647c23;
case 0x647c26:c.instructions+=2;goto B647c26;
case 0x647c27:c.instructions+=1;goto B647c27;
case 0x647c2c:goto L647c2c;
case 0x647c2e:c.instructions+=2;goto B647c2e;
case 0x647c31:c.instructions+=1;goto B647c31;
case 0x647c37:goto L647c37;
case 0x647c39:c.instructions+=1;goto B647c39;
case 0x647c3b:goto L647c3b;
case 0x647c41:goto L647c41;
case 0x647c44:c.instructions+=7;goto B647c44;
case 0x647c47:c.instructions+=6;goto B647c47;
case 0x647c4a:c.instructions+=5;goto B647c4a;
case 0x647c4c:c.instructions+=4;goto B647c4c;
case 0x647c4f:c.instructions+=3;goto B647c4f;
case 0x647c52:c.instructions+=2;goto B647c52;
case 0x647c54:c.instructions+=1;goto B647c54;
case 0x647c59:goto L647c59;
case 0x647c5c:c.instructions+=4;goto B647c5c;
case 0x647c5f:c.instructions+=3;goto B647c5f;
case 0x647c61:c.instructions+=2;goto B647c61;
case 0x647c63:c.instructions+=1;goto B647c63;
case 0x647c65:goto L647c65;
case 0x647c68:goto L647c68;
case 0x647c6c:c.instructions+=1;goto B647c6c;
case 0x647c72:goto L647c72;
case 0x647c75:c.instructions+=2;goto B647c75;
case 0x647c77:c.instructions+=1;goto B647c77;
case 0x647c7d:goto L647c7d;
case 0x647c81:c.instructions+=1;goto B647c81;
case 0x647c87:goto L647c87;
case 0x647c8b:c.instructions+=1;goto B647c8b;
case 0x647c91:goto L647c91;
case 0x647c94:c.instructions+=2;goto B647c94;
case 0x647c96:c.instructions+=1;goto B647c96;
case 0x647c9c:goto L647c9c;
case 0x647ca0:c.instructions+=1;goto B647ca0;
case 0x647ca6:goto L647ca6;
case 0x647ca9:c.instructions+=2;goto B647ca9;
case 0x647cab:c.instructions+=1;goto B647cab;
case 0x647cb1:goto L647cb1;
case 0x647cb4:c.instructions+=13;goto B647cb4;
case 0x647cb5:c.instructions+=12;goto B647cb5;
case 0x647cb8:c.instructions+=11;goto B647cb8;
case 0x647cb9:c.instructions+=10;goto B647cb9;
case 0x647cbc:c.instructions+=9;goto B647cbc;
case 0x647cbd:c.instructions+=8;goto B647cbd;
case 0x647cc0:c.instructions+=7;goto B647cc0;
case 0x647cc1:c.instructions+=6;goto B647cc1;
case 0x647cc4:c.instructions+=5;goto B647cc4;
case 0x647cc5:c.instructions+=4;goto B647cc5;
case 0x647cc8:c.instructions+=3;goto B647cc8;
case 0x647cc9:c.instructions+=2;goto B647cc9;
case 0x647cca:c.instructions+=1;goto B647cca;
case 0x647ccf:goto L647ccf;
case 0x647cd1:c.instructions+=2;goto B647cd1;
case 0x647cd4:c.instructions+=1;goto B647cd4;
case 0x647cd6:goto L647cd6;
case 0x647cd9:c.instructions+=6;goto B647cd9;
case 0x647cdc:c.instructions+=5;goto B647cdc;
case 0x647cde:c.instructions+=4;goto B647cde;
case 0x647ce1:c.instructions+=3;goto B647ce1;
case 0x647ce3:c.instructions+=2;goto B647ce3;
case 0x647ce5:c.instructions+=1;goto B647ce5;
case 0x647ceb:goto L647ceb;
case 0x647cee:c.instructions+=7;goto B647cee;
case 0x647cf0:c.instructions+=6;goto B647cf0;
case 0x647cf3:c.instructions+=5;goto B647cf3;
case 0x647cf5:c.instructions+=4;goto B647cf5;
case 0x647cf8:c.instructions+=3;goto B647cf8;
case 0x647cfa:c.instructions+=2;goto B647cfa;
case 0x647cfd:c.instructions+=1;goto B647cfd;
case 0x647cff:goto L647cff;
case 0x647d00:goto L647d00;
case 0x647d03:c.instructions+=4;goto B647d03;
case 0x647d04:c.instructions+=3;goto B647d04;
case 0x647d05:c.instructions+=2;goto B647d05;
case 0x647d06:c.instructions+=1;goto B647d06;
case 0x647d81:goto L647d81;
case 0x647d83:c.instructions+=14;goto B647d83;
case 0x647d84:c.instructions+=13;goto B647d84;
case 0x647d86:c.instructions+=12;goto B647d86;
case 0x647d87:c.instructions+=11;goto B647d87;
case 0x647d8a:c.instructions+=10;goto B647d8a;
case 0x647d8b:c.instructions+=9;goto B647d8b;
case 0x647d8c:c.instructions+=8;goto B647d8c;
case 0x647d8d:c.instructions+=7;goto B647d8d;
case 0x647d90:c.instructions+=6;goto B647d90;
case 0x647d92:c.instructions+=5;goto B647d92;
case 0x647d94:c.instructions+=4;goto B647d94;
case 0x647d97:c.instructions+=3;goto B647d97;
case 0x647d99:c.instructions+=2;goto B647d99;
case 0x647d9c:c.instructions+=1;goto B647d9c;
case 0x647d9e:goto L647d9e;
case 0x647d9f:goto L647d9f;
case 0x647da1:c.instructions+=1;goto B647da1;
case 0x647da7:goto L647da7;
case 0x647daa:c.instructions+=1;goto B647daa;
case 0x647dac:goto L647dac;
case 0x647daf:c.instructions+=1;goto B647daf;
case 0x647db1:goto L647db1;
case 0x647db4:c.instructions+=1;goto B647db4;
case 0x647dba:goto L647dba;
case 0x647dbd:c.instructions+=7;goto B647dbd;
case 0x647dc0:c.instructions+=6;goto B647dc0;
case 0x647dc4:c.instructions+=5;goto B647dc4;
case 0x647dc7:c.instructions+=4;goto B647dc7;
case 0x647dc9:c.instructions+=3;goto B647dc9;
case 0x647dcc:c.instructions+=2;goto B647dcc;
case 0x647dce:c.instructions+=1;goto B647dce;
case 0x647dd0:goto L647dd0;
case 0x647dd3:goto L647dd3;
case 0x647dd6:c.instructions+=4;goto B647dd6;
case 0x647dd7:c.instructions+=3;goto B647dd7;
case 0x647dd8:c.instructions+=2;goto B647dd8;
case 0x647ddb:c.instructions+=1;goto B647ddb;
case 0x647de0:goto L647de0;
case 0x647de3:c.instructions+=4;goto B647de3;
case 0x647de6:c.instructions+=3;goto B647de6;
case 0x647de8:c.instructions+=2;goto B647de8;
case 0x647deb:c.instructions+=1;goto B647deb;
case 0x647ded:goto L647ded;
case 0x647def:c.instructions+=3;goto B647def;
case 0x647df2:c.instructions+=2;goto B647df2;
case 0x647df4:c.instructions+=1;goto B647df4;
case 0x647df7:goto L647df7;
case 0x647dfa:c.instructions+=1;goto B647dfa;
case 0x647dfc:goto L647dfc;
case 0x647dfe:c.instructions+=2;goto B647dfe;
case 0x647e01:c.instructions+=1;goto B647e01;
case 0x647e03:goto L647e03;
case 0x647e06:c.instructions+=1;goto B647e06;
case 0x647e08:goto L647e08;
case 0x647e0d:c.instructions+=1;goto B647e0d;
case 0x647e0f:goto L647e0f;
case 0x647e11:c.instructions+=1;goto B647e11;
case 0x647e13:goto L647e13;
case 0x647e15:c.instructions+=1;goto B647e15;
case 0x647e16:goto L647e16;
case 0x647e19:c.instructions+=4;goto B647e19;
case 0x647e1b:c.instructions+=3;goto B647e1b;
case 0x647e1e:c.instructions+=2;goto B647e1e;
case 0x647e20:c.instructions+=1;goto B647e20;
case 0x647e22:goto L647e22;
case 0x647e25:c.instructions+=5;goto B647e25;
case 0x647e28:c.instructions+=4;goto B647e28;
case 0x647e2a:c.instructions+=3;goto B647e2a;
case 0x647e2b:c.instructions+=2;goto B647e2b;
case 0x647e2e:c.instructions+=1;goto B647e2e;
case 0x647e30:goto L647e30;
case 0x647e31:c.instructions+=1;goto B647e31;
case 0x647e33:goto L647e33;
case 0x647e34:c.instructions+=1;goto B647e34;
case 0x647e36:goto L647e36;
case 0x647e38:c.instructions+=2;goto B647e38;
case 0x647e3a:c.instructions+=1;goto B647e3a;
case 0x647e3c:goto L647e3c;
case 0x647e3e:c.instructions+=1;goto B647e3e;
case 0x647e3f:goto L647e3f;
case 0x647e42:c.instructions+=9;goto B647e42;
case 0x647e45:c.instructions+=8;goto B647e45;
case 0x647e48:c.instructions+=7;goto B647e48;
case 0x647e4b:c.instructions+=6;goto B647e4b;
case 0x647e4d:c.instructions+=5;goto B647e4d;
case 0x647e4f:c.instructions+=4;goto B647e4f;
case 0x647e52:c.instructions+=3;goto B647e52;
case 0x647e55:c.instructions+=2;goto B647e55;
case 0x647e57:c.instructions+=1;goto B647e57;
case 0x647e59:goto L647e59;
case 0x647e5b:goto L647e5b;
case 0x647e5c:c.instructions+=4;goto B647e5c;
case 0x647e5d:c.instructions+=3;goto B647e5d;
case 0x647e5e:c.instructions+=2;goto B647e5e;
case 0x647e5f:c.instructions+=1;goto B647e5f;
case 0x647e62:goto L647e62;
case 0x647e64:c.instructions+=7;goto B647e64;
case 0x647e65:c.instructions+=6;goto B647e65;
case 0x647e67:c.instructions+=5;goto B647e67;
case 0x647e6a:c.instructions+=4;goto B647e6a;
case 0x647e6d:c.instructions+=3;goto B647e6d;
case 0x647e70:c.instructions+=2;goto B647e70;
case 0x647e71:c.instructions+=1;goto B647e71;
case 0x647e74:goto L647e74;
case 0x647e76:c.instructions+=9;goto B647e76;
case 0x647e77:c.instructions+=8;goto B647e77;
case 0x647e79:c.instructions+=7;goto B647e79;
case 0x647e7a:c.instructions+=6;goto B647e7a;
case 0x647e7d:c.instructions+=5;goto B647e7d;
case 0x647e7e:c.instructions+=4;goto B647e7e;
case 0x647e80:c.instructions+=3;goto B647e80;
case 0x647e81:c.instructions+=2;goto B647e81;
case 0x647e86:c.instructions+=1;goto B647e86;
case 0x647e88:goto L647e88;
case 0x647e8a:goto L647e8a;
case 0x647e8c:goto L647e8c;
case 0x647e8f:c.instructions+=4;goto B647e8f;
case 0x647e91:c.instructions+=3;goto B647e91;
case 0x647e92:c.instructions+=2;goto B647e92;
case 0x647e97:c.instructions+=1;goto B647e97;
case 0x647e99:goto L647e99;
case 0x647e9b:goto L647e9b;
case 0x647e9d:goto L647e9d;
case 0x647ea0:c.instructions+=5;goto B647ea0;
case 0x647ea3:c.instructions+=4;goto B647ea3;
case 0x647ea5:c.instructions+=3;goto B647ea5;
case 0x647ea7:c.instructions+=2;goto B647ea7;
case 0x647ea8:c.instructions+=1;goto B647ea8;
case 0x647eab:goto L647eab;
case 0x647ead:c.instructions+=1;goto B647ead;
case 0x647eaf:goto L647eaf;
case 0x647eb4:goto L647eb4;
case 0x647eb5:c.instructions+=3;goto B647eb5;
case 0x647eb6:c.instructions+=2;goto B647eb6;
case 0x647eb7:c.instructions+=1;goto B647eb7;
case 0x647eba:goto L647eba;
case 0x647ebc:c.instructions+=12;goto B647ebc;
case 0x647ebd:c.instructions+=11;goto B647ebd;
case 0x647ebf:c.instructions+=10;goto B647ebf;
case 0x647ec0:c.instructions+=9;goto B647ec0;
case 0x647ec1:c.instructions+=8;goto B647ec1;
case 0x647ec2:c.instructions+=7;goto B647ec2;
case 0x647ec5:c.instructions+=6;goto B647ec5;
case 0x647ec8:c.instructions+=5;goto B647ec8;
case 0x647eca:c.instructions+=4;goto B647eca;
case 0x647ecb:c.instructions+=3;goto B647ecb;
case 0x647ecc:c.instructions+=2;goto B647ecc;
case 0x647ecf:c.instructions+=1;goto B647ecf;
case 0x647ed5:goto L647ed5;
case 0x647ed8:c.instructions+=1;goto B647ed8;
case 0x647ede:goto L647ede;
case 0x647edf:c.instructions+=1;goto B647edf;
case 0x647ee5:goto L647ee5;
case 0x647ee8:c.instructions+=2;goto B647ee8;
case 0x647eea:c.instructions+=1;goto B647eea;
case 0x647ef0:goto L647ef0;
case 0x647ef3:c.instructions+=1;goto B647ef3;
case 0x647ef5:goto L647ef5;
case 0x647ef8:c.instructions+=1;goto B647ef8;
case 0x647efe:goto L647efe;
case 0x647f01:c.instructions+=4;goto B647f01;
case 0x647f03:c.instructions+=3;goto B647f03;
case 0x647f04:c.instructions+=2;goto B647f04;
case 0x647f06:c.instructions+=1;goto B647f06;
case 0x647f08:goto L647f08;
case 0x647f0b:c.instructions+=3;goto B647f0b;
case 0x647f0e:c.instructions+=2;goto B647f0e;
case 0x647f10:c.instructions+=1;goto B647f10;
case 0x647f13:goto L647f13;
case 0x647f16:c.instructions+=6;goto B647f16;
case 0x647f18:c.instructions+=5;goto B647f18;
case 0x647f1a:c.instructions+=4;goto B647f1a;
case 0x647f1d:c.instructions+=3;goto B647f1d;
case 0x647f1f:c.instructions+=2;goto B647f1f;
case 0x647f22:c.instructions+=1;goto B647f22;
case 0x647f28:goto L647f28;
case 0x647f2b:goto L647f2b;
case 0x647f2d:c.instructions+=10;goto B647f2d;
case 0x647f30:c.instructions+=9;goto B647f30;
case 0x647f32:c.instructions+=8;goto B647f32;
case 0x647f35:c.instructions+=7;goto B647f35;
case 0x647f36:c.instructions+=6;goto B647f36;
case 0x647f37:c.instructions+=5;goto B647f37;
case 0x647f38:c.instructions+=4;goto B647f38;
case 0x647f39:c.instructions+=3;goto B647f39;
case 0x647f3c:c.instructions+=2;goto B647f3c;
case 0x647f3f:c.instructions+=1;goto B647f3f;
case 0x647f45:goto L647f45;
case 0x647f4c:c.instructions+=1;goto B647f4c;
case 0x647f53:goto L647f53;
case 0x647f55:c.instructions+=3;goto B647f55;
case 0x647f58:c.instructions+=2;goto B647f58;
case 0x647f5c:c.instructions+=1;goto B647f5c;
case 0x647f5e:goto L647f5e;
case 0x647f60:c.instructions+=3;goto B647f60;
case 0x647f63:c.instructions+=2;goto B647f63;
case 0x647f6a:c.instructions+=1;goto B647f6a;
case 0x647f6c:goto L647f6c;
case 0x647f6e:c.instructions+=3;goto B647f6e;
case 0x647f71:c.instructions+=2;goto B647f71;
case 0x647f78:c.instructions+=1;goto B647f78;
case 0x647f7a:goto L647f7a;
case 0x647f7c:c.instructions+=3;goto B647f7c;
case 0x647f7f:c.instructions+=2;goto B647f7f;
case 0x647f86:c.instructions+=1;goto B647f86;
case 0x647f88:goto L647f88;
case 0x647f8a:c.instructions+=3;goto B647f8a;
case 0x647f8d:c.instructions+=2;goto B647f8d;
case 0x647f94:c.instructions+=1;goto B647f94;
case 0x647f96:goto L647f96;
case 0x647f98:c.instructions+=2;goto B647f98;
case 0x647f9b:c.instructions+=1;goto B647f9b;
case 0x647fa2:goto L647fa2;
case 0x647fa4:c.instructions+=7;goto B647fa4;
case 0x647fa7:c.instructions+=6;goto B647fa7;
case 0x647faa:c.instructions+=5;goto B647faa;
case 0x647fac:c.instructions+=4;goto B647fac;
case 0x647fae:c.instructions+=3;goto B647fae;
case 0x647fb1:c.instructions+=2;goto B647fb1;
case 0x647fb4:c.instructions+=1;goto B647fb4;
case 0x647fba:goto L647fba;
case 0x647fbf:goto L647fbf;
case 0x647fc2:c.instructions+=4;goto B647fc2;
case 0x647fc5:c.instructions+=3;goto B647fc5;
case 0x647fc8:c.instructions+=2;goto B647fc8;
case 0x647fcb:c.instructions+=1;goto B647fcb;
case 0x647fcd:goto L647fcd;
case 0x647fce:c.instructions+=4;goto B647fce;
case 0x647fcf:c.instructions+=3;goto B647fcf;
case 0x647fd2:c.instructions+=2;goto B647fd2;
case 0x647fd5:c.instructions+=1;goto B647fd5;
case 0x647fda:goto L647fda;
case 0x647fdc:c.instructions+=2;goto B647fdc;
case 0x647fdf:c.instructions+=1;goto B647fdf;
case 0x647fe5:goto L647fe5;
case 0x647fe8:c.instructions+=3;goto B647fe8;
case 0x647feb:c.instructions+=2;goto B647feb;
case 0x647fee:c.instructions+=1;goto B647fee;
case 0x647ff0:goto L647ff0;
case 0x647ff3:c.instructions+=4;goto B647ff3;
case 0x647ff6:c.instructions+=3;goto B647ff6;
case 0x647ff9:c.instructions+=2;goto B647ff9;
case 0x647ffb:c.instructions+=1;goto B647ffb;
default:missing_instruction(c.pc);}
B647001:L647001:{c.instructions+=6;NFSU2_TR(0x647001);
__builtin_memmove((R+0),gp(0x8a50d4),4);
}
B647006:{NFSU2_TR(0x647006);
__builtin_memmove((R+4),gp(0x8a50d8),4);
}
B64700c:{NFSU2_TR(0x64700c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64700e:{NFSU2_TR(0x64700e);
__builtin_memmove((R+0),gp(0x8a50e0),4);
}
B647013:{NFSU2_TR(0x647013);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647015:{NFSU2_TR(0x647015);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L647034;}}
}
B647017:L647017:{c.instructions+=2;NFSU2_TR(0x647017);
__builtin_memmove((R+4),gp(0x8a5110),4);
}
B64701d:{NFSU2_TR(0x64701d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647022ull));
TAIL_STATIC(0x645f77u,645);
}
B647022:L647022:{c.instructions+=3;NFSU2_TR(0x647022);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647024:{NFSU2_TR(0x647024);
__builtin_memmove(gp(0x8a50e0),(R+0),4);
}
B647029:{NFSU2_TR(0x647029);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L647034;}}
}
B64702b:L64702b:{c.instructions+=3;NFSU2_TR(0x64702b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64702d:{NFSU2_TR(0x64702d);
__builtin_memmove(gp(0x8a50e0),(R+0),4);
}
B647032:{NFSU2_TR(0x647032);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647034:L647034:{c.instructions+=1;NFSU2_TR(0x647034);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x646d40u,646);}
}
B64703a:L64703a:{c.instructions+=2;NFSU2_TR(0x64703a);
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
B64703c:{NFSU2_TR(0x64703c);
{goto L64716e;}
}
B647041:L647041:{c.instructions+=4;NFSU2_TR(0x647041);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B647044:{NFSU2_TR(0x647044);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x804380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B64704b:{NFSU2_TR(0x64704b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64704d:{NFSU2_TR(0x64704d);
if(r1(R+518)){{goto L647071;}}
}
B64704f:L64704f:{c.instructions+=2;NFSU2_TR(0x64704f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B647051:{NFSU2_TR(0x647051);
if(r1(R+519)){{goto L647071;}}
}
B647053:L647053:{c.instructions+=2;NFSU2_TR(0x647053);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x171ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x171ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647059:{NFSU2_TR(0x647059);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L647071;}}
}
B64705b:L64705b:{c.instructions+=4;NFSU2_TR(0x64705b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B64705d:{NFSU2_TR(0x64705d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x804688ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B647064:{NFSU2_TR(0x647064);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647066:{NFSU2_TR(0x647066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647071;}}
}
B647068:L647068:{c.instructions+=2;NFSU2_TR(0x647068);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8043a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B64706f:{NFSU2_TR(0x64706f);
{goto L647078;}
}
B647071:L647071:{c.instructions+=1;NFSU2_TR(0x647071);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x804220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B647078:L647078:{c.instructions+=2;NFSU2_TR(0x647078);
w1(R+512,u8((r4(R+0))<(u32(0x8a50ceull))));
}
B64707d:{NFSU2_TR(0x64707d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L647159;}}
}
B647083:L647083:{c.instructions+=6;NFSU2_TR(0x647083);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B647084:{NFSU2_TR(0x647084);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B647085:{NFSU2_TR(0x647085);
__builtin_memmove(gp(0x8a50dc),(R+0),4);
}
B64708a:{NFSU2_TR(0x64708a);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B64708d:{NFSU2_TR(0x64708d);
__builtin_memmove((R+0),gp(0x8a50d4),4);
}
B647092:{NFSU2_TR(0x647092);
{goto L647137;}
}
B647097:L647097:{c.instructions+=2;NFSU2_TR(0x647097);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a50e4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64709e:{NFSU2_TR(0x64709e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6470bd;}}
}
B6470a0:L6470a0:{c.instructions+=3;NFSU2_TR(0x6470a0);
u8 U[4];
w4(U+0,u32(0x7ab74cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6470a5:{NFSU2_TR(0x6470a5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8a5110),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6470ab:{NFSU2_TR(0x6470ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6470b0ull));
TAIL_STATIC(0x6441f0u,644);
}
B6470b0:L6470b0:{c.instructions+=4;NFSU2_TR(0x6470b0);
s4(0x8a50e8,u32(u32(m4(0x8a50e8))+u32(u32(0x1ull))));
}
B6470b6:{NFSU2_TR(0x6470b6);
__builtin_memmove((R+0),gp(0x8a50e0),4);
}
B6470bb:{NFSU2_TR(0x6470bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6470bc:{NFSU2_TR(0x6470bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6470bd:L6470bd:{c.instructions+=4;NFSU2_TR(0x6470bd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6470bf:{NFSU2_TR(0x6470bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6470c0:{NFSU2_TR(0x6470c0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a50e4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6470c6:{NFSU2_TR(0x6470c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L647150;}}
}
B6470cc:L6470cc:{c.instructions+=3;NFSU2_TR(0x6470cc);
__builtin_memmove(gp(0x8a50e4),(R+4),4);
}
B6470d2:{NFSU2_TR(0x6470d2);
__builtin_memmove((R+4),gp(0x8a50dc),4);
}
B6470d8:{NFSU2_TR(0x6470d8);
w4(R+8,u32(0x100ull));
}
B6470dd:L6470dd:{c.instructions+=4;NFSU2_TR(0x6470dd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B6470e0:{NFSU2_TR(0x6470e0);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x804240ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B6470e8:{NFSU2_TR(0x6470e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6470ea:{NFSU2_TR(0x6470ea);
if(r1(R+518)){{goto L6470fe;}}
}
B6470ec:L6470ec:{c.instructions+=2;NFSU2_TR(0x6470ec);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B6470ee:{NFSU2_TR(0x6470ee);
if(r1(R+519)){{goto L6470fe;}}
}
B6470f0:L6470f0:{c.instructions+=2;NFSU2_TR(0x6470f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6470f2:{NFSU2_TR(0x6470f2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6470fe;}}
}
B6470f4:L6470f4:{c.instructions+=2;NFSU2_TR(0x6470f4);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x804688ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+8))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B6470fc:{NFSU2_TR(0x6470fc);
if(r1(R+518)){{goto L647117;}}
}
B6470fe:L6470fe:{c.instructions+=2;NFSU2_TR(0x6470fe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8a4ce8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8a4ce8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647104:{NFSU2_TR(0x647104);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64716b;}}
}
B647106:L647106:{c.instructions+=5;NFSU2_TR(0x647106);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B647107:{NFSU2_TR(0x647107);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B647108:{NFSU2_TR(0x647108);
s4(0x8a50d8,u32(u32(m4(0x8a50d8))-u32(u32(0x4ull))));
}
B64710f:{NFSU2_TR(0x64710f);
__builtin_memmove(gp(0x8a50dc),(R+4),4);
}
B647115:{NFSU2_TR(0x647115);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6470ddu);}goto L6470dd;}
}
B647117:L647117:{c.instructions+=2;NFSU2_TR(0x647117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8a50ceull))));
}
B64711d:{NFSU2_TR(0x64711d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L647159;}}
}
B64711f:L64711f:{c.instructions+=6;NFSU2_TR(0x64711f);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8043a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(s32(s16(r2(U+8)))));
}
B647127:{NFSU2_TR(0x647127);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B647128:{NFSU2_TR(0x647128);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B647129:{NFSU2_TR(0x647129);
__builtin_memmove(gp(0x8a50dc),(R+4),4);
}
B64712f:{NFSU2_TR(0x64712f);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B647132:{NFSU2_TR(0x647132);
__builtin_memmove((R+0),gp(0x8a50d0),4);
}
B647137:L647137:{c.instructions+=5;NFSU2_TR(0x647137);
s4(0x8a50d8,u32(u32(m4(0x8a50d8))+u32(u32(0x4ull))));
}
B64713e:{NFSU2_TR(0x64713e);
__builtin_memmove((R+4),gp(0x8a50d8),4);
}
B647144:{NFSU2_TR(0x647144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647146:{NFSU2_TR(0x647146);
__builtin_memmove((R+0),gp(0x8a50e0),4);
}
B64714b:{NFSU2_TR(0x64714b);
TAIL_STATIC(0x646d40u,646);
}
B647150:L647150:{c.instructions+=2;NFSU2_TR(0x647150);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647152:{NFSU2_TR(0x647152);
if(r1(R+518)){{goto L64716b;}}
}
B647154:L647154:{c.instructions+=1;NFSU2_TR(0x647154);
TAIL_STATIC(0x646d38u,646);
}
B647159:L647159:{c.instructions+=3;NFSU2_TR(0x647159);
u8 U[4];
w4(U+0,u32(0x7abb00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64715e:{NFSU2_TR(0x64715e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8a5110),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647164:{NFSU2_TR(0x647164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647169ull));
TAIL_STATIC(0x6441f0u,644);
}
B647169:L647169:{c.instructions+=2;NFSU2_TR(0x647169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64716a:{NFSU2_TR(0x64716a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64716b:L64716b:{c.instructions+=2;NFSU2_TR(0x64716b);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64716d:{NFSU2_TR(0x64716d);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64716e:L64716e:{c.instructions+=4;NFSU2_TR(0x64716e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64716f:{NFSU2_TR(0x64716f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647170:{NFSU2_TR(0x647170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B647171:{NFSU2_TR(0x647171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64722e:L64722e:{c.instructions+=7;NFSU2_TR(0x64722e);
__builtin_memmove((R+28),(R+28),4);
}
B647230:{NFSU2_TR(0x647230);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647231:{NFSU2_TR(0x647231);
__builtin_memmove((R+20),(R+16),4);
}
B647233:{NFSU2_TR(0x647233);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647234:{NFSU2_TR(0x647234);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647236:{NFSU2_TR(0x647236);
__builtin_memmove((R+24),(R+4),4);
}
B647238:{NFSU2_TR(0x647238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64723dull));
TAIL_STATIC(0x575620u,575);
}
B64723d:L64723d:{c.instructions+=3;NFSU2_TR(0x64723d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64723f:{NFSU2_TR(0x64723f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647240:{NFSU2_TR(0x647240);
if(r1(R+518)){{goto L64724b;}}
}
B647242:L647242:{c.instructions+=2;NFSU2_TR(0x647242);
__builtin_memmove((R+4),(R+0),4);
}
B647244:{NFSU2_TR(0x647244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647249ull));
TAIL_STATIC(0x643de4u,643);
}
B647249:L647249:{c.instructions+=1;NFSU2_TR(0x647249);
{goto L64724d;}
}
B64724b:L64724b:{c.instructions+=1;NFSU2_TR(0x64724b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64724d:L64724d:{c.instructions+=3;NFSU2_TR(0x64724d);
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
B64724f:{NFSU2_TR(0x64724f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647255:{NFSU2_TR(0x647255);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64725e;}}
}
B647257:L647257:{c.instructions+=2;NFSU2_TR(0x647257);
w4(R+0,u32(0x8007000eull));
}
B64725c:{NFSU2_TR(0x64725c);
{goto L64729c;}
}
B64725e:L64725e:{c.instructions+=8;NFSU2_TR(0x64725e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647261:{NFSU2_TR(0x647261);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647262:{NFSU2_TR(0x647262);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647263:{NFSU2_TR(0x647263);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647266:{NFSU2_TR(0x647266);
__builtin_memmove((R+4),(R+0),4);
}
B647268:{NFSU2_TR(0x647268);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64726b:{NFSU2_TR(0x64726b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64726e:{NFSU2_TR(0x64726e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647273ull));
TAIL_STATIC(0x644044u,644);
}
B647273:L647273:{c.instructions+=2;NFSU2_TR(0x647273);
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
B647275:{NFSU2_TR(0x647275);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64729c;}}
}
B647277:L647277:{c.instructions+=3;NFSU2_TR(0x647277);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64727a:{NFSU2_TR(0x64727a);
__builtin_memmove((R+4),(R+24),4);
}
B64727c:{NFSU2_TR(0x64727c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647281ull));
TAIL_STATIC(0x6466b1u,646);
}
B647281:L647281:{c.instructions+=2;NFSU2_TR(0x647281);
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
B647283:{NFSU2_TR(0x647283);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64729c;}}
}
B647285:L647285:{c.instructions+=5;NFSU2_TR(0x647285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64728b:{NFSU2_TR(0x64728b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647291:{NFSU2_TR(0x647291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647294:{NFSU2_TR(0x647294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64729a:{NFSU2_TR(0x64729a);
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
B64729c:L64729c:{c.instructions+=3;NFSU2_TR(0x64729c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64729d:{NFSU2_TR(0x64729d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64729e:{NFSU2_TR(0x64729e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6472a1:L6472a1:{c.instructions+=10;NFSU2_TR(0x6472a1);
__builtin_memmove((R+28),(R+28),4);
}
B6472a3:{NFSU2_TR(0x6472a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6472a4:{NFSU2_TR(0x6472a4);
__builtin_memmove((R+20),(R+16),4);
}
B6472a6:{NFSU2_TR(0x6472a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6472a7:{NFSU2_TR(0x6472a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6472a8:{NFSU2_TR(0x6472a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6472a9:{NFSU2_TR(0x6472a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6472aa:{NFSU2_TR(0x6472aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6472ab:{NFSU2_TR(0x6472ab);
__builtin_memmove((R+12),(R+4),4);
}
B6472ad:{NFSU2_TR(0x6472ad);
{goto L647507;}
}
B6472b2:L6472b2:{c.instructions+=3;NFSU2_TR(0x6472b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6472b5:{NFSU2_TR(0x6472b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6472b7:{NFSU2_TR(0x6472b7);
if(r1(R+518)){{goto L6472c3;}}
}
B6472b9:L6472b9:{c.instructions+=2;NFSU2_TR(0x6472b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6472bd:{NFSU2_TR(0x6472bd);
if(r1(R+518)){{goto L647518;}}
}
B6472c3:L6472c3:{c.instructions+=3;NFSU2_TR(0x6472c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6472c6:{NFSU2_TR(0x6472c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6472c8:{NFSU2_TR(0x6472c8);
if(r1(R+518)){{goto L647302;}}
}
B6472ca:L6472ca:{c.instructions+=5;NFSU2_TR(0x6472ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6472cd:{NFSU2_TR(0x6472cd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6472cf:{NFSU2_TR(0x6472cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6472d2:{NFSU2_TR(0x6472d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6472d3:{NFSU2_TR(0x6472d3);
__builtin_memmove((R+28),(R+0),4);
}
B6472d5:L6472d5:{c.instructions+=1;NFSU2_TR(0x6472d5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6472d7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6472d5u);}goto L6472d5;}
}
B6472d7:L6472d7:{c.instructions+=12;NFSU2_TR(0x6472d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6472da:{NFSU2_TR(0x6472da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6472dd:{NFSU2_TR(0x6472dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6472e0:{NFSU2_TR(0x6472e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6472e4:{NFSU2_TR(0x6472e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6472ea:{NFSU2_TR(0x6472ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6472ed:{NFSU2_TR(0x6472ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6472f0:{NFSU2_TR(0x6472f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6472f6:{NFSU2_TR(0x6472f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6472f9:{NFSU2_TR(0x6472f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6472fc:{NFSU2_TR(0x6472fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647300:{NFSU2_TR(0x647300);
{goto L647321;}
}
B647302:L647302:{c.instructions+=4;NFSU2_TR(0x647302);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647305:{NFSU2_TR(0x647305);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64730b:{NFSU2_TR(0x64730b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647311:{NFSU2_TR(0x647311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647316ull));
TAIL_STATIC(0x643afeu,643);
}
B647316:L647316:{c.instructions+=2;NFSU2_TR(0x647316);
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
B647318:{NFSU2_TR(0x647318);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6475e0;}}
}
B64731e:L64731e:{c.instructions+=1;NFSU2_TR(0x64731e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647321:L647321:{c.instructions+=3;NFSU2_TR(0x647321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B647323:{NFSU2_TR(0x647323);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647326:{NFSU2_TR(0x647326);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64745c;}}
}
B64732c:L64732c:{c.instructions+=5;NFSU2_TR(0x64732c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64732e:{NFSU2_TR(0x64732e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647331:{NFSU2_TR(0x647331);
w4(R+24,u32(0x7ab9d0ull));
}
B647336:{NFSU2_TR(0x647336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647337:{NFSU2_TR(0x647337);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647339:L647339:{c.instructions+=1;NFSU2_TR(0x647339);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64733b;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647339u);}goto L647339;}}
}
B64733b:L64733b:{c.instructions+=1;NFSU2_TR(0x64733b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64745c;}}
}
B647341:L647341:{c.instructions+=3;NFSU2_TR(0x647341);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B647343:{NFSU2_TR(0x647343);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B647346:{NFSU2_TR(0x647346);
if(r1(R+518)){{goto L64745c;}}
}
B64734c:L64734c:{c.instructions+=7;NFSU2_TR(0x64734c);
__builtin_memmove(gp(0x8a5110),(R+12),4);
}
B647352:{NFSU2_TR(0x647352);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647355:{NFSU2_TR(0x647355);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647358:{NFSU2_TR(0x647358);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64735b:{NFSU2_TR(0x64735b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647362:{NFSU2_TR(0x647362);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647365:{NFSU2_TR(0x647365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64736aull));
TAIL_STATIC(0x646d0au,646);
}
B64736a:L64736a:{c.instructions+=4;NFSU2_TR(0x64736a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64736c:{NFSU2_TR(0x64736c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64736d:{NFSU2_TR(0x64736d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64736f:{NFSU2_TR(0x64736f);
if(r1(R+518)){{goto L647374;}}
}
B647371:L647371:{c.instructions+=1;NFSU2_TR(0x647371);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647374:L647374:{c.instructions+=4;NFSU2_TR(0x647374);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B647376:{NFSU2_TR(0x647376);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B647379:{NFSU2_TR(0x647379);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64737c:{NFSU2_TR(0x64737c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6473d6;}}
}
B64737e:L64737e:{c.instructions+=2;NFSU2_TR(0x64737e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B647381:{NFSU2_TR(0x647381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6473d6;}}
}
B647383:L647383:{c.instructions+=5;NFSU2_TR(0x647383);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647389:{NFSU2_TR(0x647389);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64738f:{NFSU2_TR(0x64738f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647390:{NFSU2_TR(0x647390);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647396:{NFSU2_TR(0x647396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64739bull));
TAIL_STATIC(0x643afeu,643);
}
B64739b:L64739b:{c.instructions+=2;NFSU2_TR(0x64739b);
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
B64739d:{NFSU2_TR(0x64739d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6475e0;}}
}
B6473a3:L6473a3:{c.instructions+=3;NFSU2_TR(0x6473a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6473a5:{NFSU2_TR(0x6473a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6473a8:{NFSU2_TR(0x6473a8);
if(r1(R+518)){{goto L6473d3;}}
}
B6473aa:L6473aa:{c.instructions+=2;NFSU2_TR(0x6473aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6473ad:{NFSU2_TR(0x6473ad);
if(r1(R+518)){{goto L6473d3;}}
}
B6473af:L6473af:{c.instructions+=2;NFSU2_TR(0x6473af);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6473b3:{NFSU2_TR(0x6473b3);
if(r1(R+518)){{goto L6473ce;}}
}
B6473b5:L6473b5:{c.instructions+=6;NFSU2_TR(0x6473b5);
u8 U[4];
w4(U+0,u32(0x7abb38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6473ba:{NFSU2_TR(0x6473ba);
u8 U[4];
w4(U+0,u32(0x5ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6473bf:{NFSU2_TR(0x6473bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6473c2:{NFSU2_TR(0x6473c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6473c5:{NFSU2_TR(0x6473c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6473c6:{NFSU2_TR(0x6473c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6473cbull));
TAIL_STATIC(0x64307cu,643);
}
B6473cb:L6473cb:{c.instructions+=1;NFSU2_TR(0x6473cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6473ce:L6473ce:{c.instructions+=2;NFSU2_TR(0x6473ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6473d1:{NFSU2_TR(0x6473d1);
{goto L6473d6;}
}
B6473d3:L6473d3:{c.instructions+=1;NFSU2_TR(0x6473d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6473d6:L6473d6:{c.instructions+=2;NFSU2_TR(0x6473d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6473da:{NFSU2_TR(0x6473da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64740e;}}
}
B6473dc:L6473dc:{c.instructions+=2;NFSU2_TR(0x6473dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6473e2:{NFSU2_TR(0x6473e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6473e7ull));
TAIL_STATIC(0x642bc7u,642);
}
B6473e7:L6473e7:{c.instructions+=6;NFSU2_TR(0x6473e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6473ed:{NFSU2_TR(0x6473ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6473f1:{NFSU2_TR(0x6473f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6473f7:{NFSU2_TR(0x6473f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6473f8:{NFSU2_TR(0x6473f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6473fe:{NFSU2_TR(0x6473fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647403ull));
TAIL_STATIC(0x643afeu,643);
}
B647403:L647403:{c.instructions+=2;NFSU2_TR(0x647403);
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
B647405:{NFSU2_TR(0x647405);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6475e0;}}
}
B64740b:L64740b:{c.instructions+=1;NFSU2_TR(0x64740b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64740e:L64740e:{c.instructions+=6;NFSU2_TR(0x64740e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647414:{NFSU2_TR(0x647414);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64741a:{NFSU2_TR(0x64741a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64741d:{NFSU2_TR(0x64741d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64741f:{NFSU2_TR(0x64741f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647422:{NFSU2_TR(0x647422);
if(r1(R+518)){{goto L647507;}}
}
B647428:L647428:{c.instructions+=4;NFSU2_TR(0x647428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64742b:{NFSU2_TR(0x64742b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64742d:{NFSU2_TR(0x64742d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647433:{NFSU2_TR(0x647433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647434:L647434:{c.instructions+=1;NFSU2_TR(0x647434);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L647436;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647434u);}goto L647434;}
}
B647436:L647436:{c.instructions+=3;NFSU2_TR(0x647436);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64743c:{NFSU2_TR(0x64743c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B647440:{NFSU2_TR(0x647440);
if(r1(R+518)){{goto L64744b;}}
}
B647442:L647442:{c.instructions+=2;NFSU2_TR(0x647442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647445:{NFSU2_TR(0x647445);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B64744b:L64744b:{c.instructions+=5;NFSU2_TR(0x64744b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64744e:{NFSU2_TR(0x64744e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B647450:{NFSU2_TR(0x647450);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B647452:{NFSU2_TR(0x647452);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647457:{NFSU2_TR(0x647457);
{goto L6475e0;}
}
B64745c:L64745c:{c.instructions+=3;NFSU2_TR(0x64745c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64745e:{NFSU2_TR(0x64745e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647461:{NFSU2_TR(0x647461);
if(r1(R+518)){{goto L64753e;}}
}
B647467:L647467:{c.instructions+=2;NFSU2_TR(0x647467);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64746a:{NFSU2_TR(0x64746a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647499;}}
}
B64746c:L64746c:{c.instructions+=7;NFSU2_TR(0x64746c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B64746f:{NFSU2_TR(0x64746f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647470:{NFSU2_TR(0x647470);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647473:{NFSU2_TR(0x647473);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647474:{NFSU2_TR(0x647474);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647477:{NFSU2_TR(0x647477);
__builtin_memmove((R+4),(R+12),4);
}
B647479:{NFSU2_TR(0x647479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64747eull));
TAIL_STATIC(0x6452dbu,645);
}
B64747e:L64747e:{c.instructions+=2;NFSU2_TR(0x64747e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647480:{NFSU2_TR(0x647480);
if(r1(R+518)){{goto L647496;}}
}
B647482:L647482:{c.instructions+=5;NFSU2_TR(0x647482);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647485:{NFSU2_TR(0x647485);
__builtin_memmove((R+4),(R+12),4);
}
B647487:{NFSU2_TR(0x647487);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64748a:{NFSU2_TR(0x64748a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64748d:{NFSU2_TR(0x64748d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647492ull));
TAIL_STATIC(0x64570fu,645);
}
B647492:L647492:{c.instructions+=2;NFSU2_TR(0x647492);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647494:{NFSU2_TR(0x647494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647507;}}
}
B647496:L647496:{c.instructions+=1;NFSU2_TR(0x647496);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647499:L647499:{c.instructions+=2;NFSU2_TR(0x647499);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64749c:{NFSU2_TR(0x64749c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6474f1;}}
}
B64749e:L64749e:{c.instructions+=5;NFSU2_TR(0x64749e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6474a1:{NFSU2_TR(0x6474a1);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6474a3:{NFSU2_TR(0x6474a3);
w4(R+28,u32(0x7abb2cull));
}
B6474a8:{NFSU2_TR(0x6474a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6474a9:{NFSU2_TR(0x6474a9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6474ab:L6474ab:{c.instructions+=1;NFSU2_TR(0x6474ab);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6474ad;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6474abu);}goto L6474ab;}}
}
B6474ad:L6474ad:{c.instructions+=1;NFSU2_TR(0x6474ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6474ce;}}
}
B6474af:L6474af:{c.instructions+=6;NFSU2_TR(0x6474af);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+0)),r4(U+0));
}
B6474b5:{NFSU2_TR(0x6474b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6474bb:{NFSU2_TR(0x6474bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6474be:{NFSU2_TR(0x6474be);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6474c0:{NFSU2_TR(0x6474c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6474c3:{NFSU2_TR(0x6474c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6474f1;}}
}
B6474c5:L6474c5:{c.instructions+=2;NFSU2_TR(0x6474c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6474cc:{NFSU2_TR(0x6474cc);
{goto L6474f1;}
}
B6474ce:L6474ce:{c.instructions+=5;NFSU2_TR(0x6474ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6474d1:{NFSU2_TR(0x6474d1);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6474d3:{NFSU2_TR(0x6474d3);
w4(R+28,u32(0x7ab964ull));
}
B6474d8:{NFSU2_TR(0x6474d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6474d9:{NFSU2_TR(0x6474d9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6474db:L6474db:{c.instructions+=1;NFSU2_TR(0x6474db);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6474dd;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6474dbu);}goto L6474db;}}
}
B6474dd:L6474dd:{c.instructions+=1;NFSU2_TR(0x6474dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6474f1;}}
}
B6474df:L6474df:{c.instructions+=4;NFSU2_TR(0x6474df);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6474e5:{NFSU2_TR(0x6474e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6474eb:{NFSU2_TR(0x6474eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6474ee:{NFSU2_TR(0x6474ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6474f1:L6474f1:{c.instructions+=7;NFSU2_TR(0x6474f1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6474f3:{NFSU2_TR(0x6474f3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6474f6:{NFSU2_TR(0x6474f6);
__builtin_memmove((R+4),(R+518),1);
}
B6474f9:{NFSU2_TR(0x6474f9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6474fb:{NFSU2_TR(0x6474fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6474fe:{NFSU2_TR(0x6474fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647501:{NFSU2_TR(0x647501);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64759f;}}
}
B647507:L647507:{c.instructions+=2;NFSU2_TR(0x647507);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64750b:{NFSU2_TR(0x64750b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6472b2u);}goto L6472b2;}}
}
B647511:L647511:{c.instructions+=2;NFSU2_TR(0x647511);
w4(R+0,u32(0x80004005ull));
}
B647516:{NFSU2_TR(0x647516);
{goto L64751a;}
}
B647518:L647518:{c.instructions+=1;NFSU2_TR(0x647518);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64751a:L64751a:{c.instructions+=10;NFSU2_TR(0x64751a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x26cull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x26cull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x26cull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647520:{NFSU2_TR(0x647520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B647522:{NFSU2_TR(0x647522);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647525:{NFSU2_TR(0x647525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647528:{NFSU2_TR(0x647528);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64752b:{NFSU2_TR(0x64752b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64752d:{NFSU2_TR(0x64752d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647530:{NFSU2_TR(0x647530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647533:{NFSU2_TR(0x647533);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+4)),r4(U+0));
}
B647539:{NFSU2_TR(0x647539);
{goto L6475e0;}
}
B64753e:L64753e:{c.instructions+=3;NFSU2_TR(0x64753e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647544:{NFSU2_TR(0x647544);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B647548:{NFSU2_TR(0x647548);
if(r1(R+518)){{goto L647561;}}
}
B64754a:L64754a:{c.instructions+=6;NFSU2_TR(0x64754a);
u8 U[4];
w4(U+0,u32(0x7abb14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64754f:{NFSU2_TR(0x64754f);
u8 U[4];
w4(U+0,u32(0x5deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647554:{NFSU2_TR(0x647554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647555:{NFSU2_TR(0x647555);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B647558:{NFSU2_TR(0x647558);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647559:{NFSU2_TR(0x647559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64755eull));
TAIL_STATIC(0x64307cu,643);
}
B64755e:L64755e:{c.instructions+=1;NFSU2_TR(0x64755e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B647561:L647561:{c.instructions+=3;NFSU2_TR(0x647561);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647567:{NFSU2_TR(0x647567);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64756b:{NFSU2_TR(0x64756b);
if(r1(R+518)){{goto L6475de;}}
}
B64756d:L64756d:{c.instructions+=5;NFSU2_TR(0x64756d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647570:{NFSU2_TR(0x647570);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647576:{NFSU2_TR(0x647576);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64757a:{NFSU2_TR(0x64757a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64757c:{NFSU2_TR(0x64757c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647581ull));
TAIL_STATIC(0x643e72u,643);
}
B647581:L647581:{c.instructions+=6;NFSU2_TR(0x647581);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647587:{NFSU2_TR(0x647587);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64758d:{NFSU2_TR(0x64758d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647590:{NFSU2_TR(0x647590);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B647596:{NFSU2_TR(0x647596);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64759d:{NFSU2_TR(0x64759d);
{goto L6475de;}
}
B64759f:L64759f:{c.instructions+=3;NFSU2_TR(0x64759f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6475a2:{NFSU2_TR(0x6475a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6475a4:{NFSU2_TR(0x6475a4);
if(r1(R+518)){{goto L6475de;}}
}
B6475a6:L6475a6:{c.instructions+=2;NFSU2_TR(0x6475a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6475a9:{NFSU2_TR(0x6475a9);
if(r1(R+518)){{goto L6475de;}}
}
B6475ab:L6475ab:{c.instructions+=2;NFSU2_TR(0x6475ab);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6475ae:{NFSU2_TR(0x6475ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6475d0;}}
}
B6475b0:L6475b0:{c.instructions+=2;NFSU2_TR(0x6475b0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6475b4:{NFSU2_TR(0x6475b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6475d0;}}
}
B6475b6:L6475b6:{c.instructions+=2;NFSU2_TR(0x6475b6);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x7bull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6475ba:{NFSU2_TR(0x6475ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6475bf;}}
}
B6475bc:L6475bc:{c.instructions+=1;NFSU2_TR(0x6475bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6475bf:L6475bf:{c.instructions+=2;NFSU2_TR(0x6475bf);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x7dull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6475c3:{NFSU2_TR(0x6475c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6475d0;}}
}
B6475c5:L6475c5:{c.instructions+=3;NFSU2_TR(0x6475c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6475c8:{NFSU2_TR(0x6475c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6475cb:{NFSU2_TR(0x6475cb);
if(r1(R+518)){{goto L6475d0;}}
}
B6475cd:L6475cd:{c.instructions+=1;NFSU2_TR(0x6475cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6475d0:L6475d0:{c.instructions+=3;NFSU2_TR(0x6475d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6475d3:{NFSU2_TR(0x6475d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6475d6:{NFSU2_TR(0x6475d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6475de;}}
}
B6475d8:L6475d8:{c.instructions+=1;NFSU2_TR(0x6475d8);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+0)),r4(U+0));
}
B6475de:L6475de:{c.instructions+=1;NFSU2_TR(0x6475de);
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
B6475e0:L6475e0:{c.instructions+=5;NFSU2_TR(0x6475e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6475e1:{NFSU2_TR(0x6475e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6475e2:{NFSU2_TR(0x6475e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6475e3:{NFSU2_TR(0x6475e3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6475e4:{NFSU2_TR(0x6475e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6475e7:L6475e7:{c.instructions+=8;NFSU2_TR(0x6475e7);
__builtin_memmove((R+28),(R+28),4);
}
B6475e9:{NFSU2_TR(0x6475e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6475ea:{NFSU2_TR(0x6475ea);
__builtin_memmove((R+20),(R+16),4);
}
B6475ec:{NFSU2_TR(0x6475ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6475ef:{NFSU2_TR(0x6475ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6475f0:{NFSU2_TR(0x6475f0);
__builtin_memmove((R+24),(R+4),4);
}
B6475f2:{NFSU2_TR(0x6475f2);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6475f6:{NFSU2_TR(0x6475f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647605;}}
}
B6475f8:L6475f8:{c.instructions+=2;NFSU2_TR(0x6475f8);
w4(R+0,u32(0x8876086cull));
}
B6475fd:{NFSU2_TR(0x6475fd);
{goto L647640;}
}
B6475ff:L6475ff:{c.instructions+=2;NFSU2_TR(0x6475ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B647603:{NFSU2_TR(0x647603);
if(r1(R+518)){{goto L647616;}}
}
B647605:L647605:{c.instructions+=4;NFSU2_TR(0x647605);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B647608:{NFSU2_TR(0x647608);
__builtin_memmove((R+4),(R+24),4);
}
B64760a:{NFSU2_TR(0x64760a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64760b:{NFSU2_TR(0x64760b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647610ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6472a1u);}goto L6472a1;}
}
B647610:L647610:{c.instructions+=2;NFSU2_TR(0x647610);
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
B647612:{NFSU2_TR(0x647612);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6475ffu);}goto L6475ff;}}
}
B647614:L647614:{c.instructions+=1;NFSU2_TR(0x647614);
{goto L647640;}
}
B647616:L647616:{c.instructions+=6;NFSU2_TR(0x647616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647619:{NFSU2_TR(0x647619);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64761c:{NFSU2_TR(0x64761c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64761f:{NFSU2_TR(0x64761f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647623:{NFSU2_TR(0x647623);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647625:{NFSU2_TR(0x647625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64762aull));
TAIL_STATIC(0x6440e1u,644);
}
B64762a:L64762a:{c.instructions+=3;NFSU2_TR(0x64762a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64762d:{NFSU2_TR(0x64762d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64762f:{NFSU2_TR(0x64762f);
if(r1(R+518)){{goto L647635;}}
}
B647631:L647631:{c.instructions+=2;NFSU2_TR(0x647631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647633:{NFSU2_TR(0x647633);
{goto L647638;}
}
B647635:L647635:{c.instructions+=2;NFSU2_TR(0x647635);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B647637:{NFSU2_TR(0x647637);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B647638:L647638:{c.instructions+=2;NFSU2_TR(0x647638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64763e:{NFSU2_TR(0x64763e);
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
B647640:L647640:{c.instructions+=3;NFSU2_TR(0x647640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647641:{NFSU2_TR(0x647641);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B647642:{NFSU2_TR(0x647642);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647643:L647643:{c.instructions+=8;NFSU2_TR(0x647643);
__builtin_memmove((R+28),(R+28),4);
}
B647645:{NFSU2_TR(0x647645);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647646:{NFSU2_TR(0x647646);
__builtin_memmove((R+20),(R+16),4);
}
B647648:{NFSU2_TR(0x647648);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647649:{NFSU2_TR(0x647649);
__builtin_memmove((R+24),(R+4),4);
}
B64764b:{NFSU2_TR(0x64764b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64764e:{NFSU2_TR(0x64764e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B647650:{NFSU2_TR(0x647650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647655ull));
TAIL_STATIC(0x645458u,645);
}
B647655:L647655:{c.instructions+=4;NFSU2_TR(0x647655);
__builtin_memmove((R+0),(R+24),4);
}
B647657:{NFSU2_TR(0x647657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647658:{NFSU2_TR(0x647658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B647659:{NFSU2_TR(0x647659);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64765c:L64765c:{c.instructions+=7;NFSU2_TR(0x64765c);
__builtin_memmove((R+0),(R+4),4);
}
B64765e:{NFSU2_TR(0x64765e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647662:{NFSU2_TR(0x647662);
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
B647664:{NFSU2_TR(0x647664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647667:{NFSU2_TR(0x647667);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64766a:{NFSU2_TR(0x64766a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64766d:{NFSU2_TR(0x64766d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64766e:L64766e:{c.instructions+=6;NFSU2_TR(0x64766e);
__builtin_memmove((R+28),(R+28),4);
}
B647670:{NFSU2_TR(0x647670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647671:{NFSU2_TR(0x647671);
__builtin_memmove((R+20),(R+16),4);
}
B647673:{NFSU2_TR(0x647673);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647674:{NFSU2_TR(0x647674);
__builtin_memmove((R+24),(R+4),4);
}
B647676:{NFSU2_TR(0x647676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64767bull));
TAIL_STATIC(0x64b62bu,64b);
}
B64767b:L64767b:{c.instructions+=2;NFSU2_TR(0x64767b);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64767f:{NFSU2_TR(0x64767f);
if(r1(R+518)){{goto L647688;}}
}
B647681:L647681:{c.instructions+=2;NFSU2_TR(0x647681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647682:{NFSU2_TR(0x647682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647687ull));
TAIL_STATIC(0x575630u,575);
}
B647687:L647687:{c.instructions+=1;NFSU2_TR(0x647687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647688:L647688:{c.instructions+=4;NFSU2_TR(0x647688);
__builtin_memmove((R+0),(R+24),4);
}
B64768a:{NFSU2_TR(0x64768a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64768b:{NFSU2_TR(0x64768b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64768c:{NFSU2_TR(0x64768c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64768f:L64768f:{c.instructions+=5;NFSU2_TR(0x64768f);
__builtin_memmove((R+28),(R+28),4);
}
B647691:{NFSU2_TR(0x647691);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647692:{NFSU2_TR(0x647692);
__builtin_memmove((R+24),(R+4),4);
}
B647694:{NFSU2_TR(0x647694);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647698:{NFSU2_TR(0x647698);
if(r1(R+518)){{goto L6476bd;}}
}
B64769a:L64769a:{c.instructions+=1;NFSU2_TR(0x64769a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64769b:L64769b:{c.instructions+=6;NFSU2_TR(0x64769b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64769e:{NFSU2_TR(0x64769e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6476a1:{NFSU2_TR(0x6476a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6476a4:{NFSU2_TR(0x6476a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6476a8:{NFSU2_TR(0x6476a8);
__builtin_memmove((R+4),(R+28),4);
}
B6476aa:{NFSU2_TR(0x6476aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6476afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64768fu);}goto L64768f;}
}
B6476af:L6476af:{c.instructions+=2;NFSU2_TR(0x6476af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6476b0:{NFSU2_TR(0x6476b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6476b5ull));
TAIL_STATIC(0x575630u,575);
}
B6476b5:L6476b5:{c.instructions+=3;NFSU2_TR(0x6476b5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6476b9:{NFSU2_TR(0x6476b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6476ba:{NFSU2_TR(0x6476ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64769bu);}goto L64769b;}}
}
B6476bc:L6476bc:{c.instructions+=1;NFSU2_TR(0x6476bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6476bd:L6476bd:{c.instructions+=2;NFSU2_TR(0x6476bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6476be:{NFSU2_TR(0x6476be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6476bf:L6476bf:{c.instructions+=6;NFSU2_TR(0x6476bf);
__builtin_memmove((R+28),(R+28),4);
}
B6476c1:{NFSU2_TR(0x6476c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6476c2:{NFSU2_TR(0x6476c2);
__builtin_memmove((R+20),(R+16),4);
}
B6476c4:{NFSU2_TR(0x6476c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6476c5:{NFSU2_TR(0x6476c5);
__builtin_memmove((R+24),(R+4),4);
}
B6476c7:{NFSU2_TR(0x6476c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6476ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64768fu);}goto L64768f;}
}
B6476cc:L6476cc:{c.instructions+=2;NFSU2_TR(0x6476cc);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6476d0:{NFSU2_TR(0x6476d0);
if(r1(R+518)){{goto L6476d9;}}
}
B6476d2:L6476d2:{c.instructions+=2;NFSU2_TR(0x6476d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6476d3:{NFSU2_TR(0x6476d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6476d8ull));
TAIL_STATIC(0x575630u,575);
}
B6476d8:L6476d8:{c.instructions+=1;NFSU2_TR(0x6476d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6476d9:L6476d9:{c.instructions+=4;NFSU2_TR(0x6476d9);
__builtin_memmove((R+0),(R+24),4);
}
B6476db:{NFSU2_TR(0x6476db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6476dc:{NFSU2_TR(0x6476dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6476dd:{NFSU2_TR(0x6476dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6476e0:L6476e0:{c.instructions+=27;NFSU2_TR(0x6476e0);
__builtin_memmove((R+28),(R+28),4);
}
B6476e2:{NFSU2_TR(0x6476e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6476e3:{NFSU2_TR(0x6476e3);
__builtin_memmove((R+20),(R+16),4);
}
B6476e5:{NFSU2_TR(0x6476e5);
__builtin_memmove((R+0),(R+4),4);
}
B6476e7:{NFSU2_TR(0x6476e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6476ea:{NFSU2_TR(0x6476ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6476ec:{NFSU2_TR(0x6476ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6476ef:{NFSU2_TR(0x6476ef);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6476f3:{NFSU2_TR(0x6476f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6476f6:{NFSU2_TR(0x6476f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6476f9:{NFSU2_TR(0x6476f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6476fc:{NFSU2_TR(0x6476fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6476ff:{NFSU2_TR(0x6476ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647702:{NFSU2_TR(0x647702);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647705:{NFSU2_TR(0x647705);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647708:{NFSU2_TR(0x647708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64770b:{NFSU2_TR(0x64770b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64770e:{NFSU2_TR(0x64770e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647711:{NFSU2_TR(0x647711);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647714:{NFSU2_TR(0x647714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647717:{NFSU2_TR(0x647717);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64771a:{NFSU2_TR(0x64771a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64771d:{NFSU2_TR(0x64771d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647720:{NFSU2_TR(0x647720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647723:{NFSU2_TR(0x647723);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647726:{NFSU2_TR(0x647726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B647727:{NFSU2_TR(0x647727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64772a:L64772a:{c.instructions+=5;NFSU2_TR(0x64772a);
__builtin_memmove((R+28),(R+28),4);
}
B64772c:{NFSU2_TR(0x64772c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64772d:{NFSU2_TR(0x64772d);
__builtin_memmove((R+24),(R+4),4);
}
B64772f:{NFSU2_TR(0x64772f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647733:{NFSU2_TR(0x647733);
if(r1(R+518)){{goto L647758;}}
}
B647735:L647735:{c.instructions+=1;NFSU2_TR(0x647735);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647736:L647736:{c.instructions+=6;NFSU2_TR(0x647736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647739:{NFSU2_TR(0x647739);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64773c:{NFSU2_TR(0x64773c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64773f:{NFSU2_TR(0x64773f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647743:{NFSU2_TR(0x647743);
__builtin_memmove((R+4),(R+28),4);
}
B647745:{NFSU2_TR(0x647745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64774aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64772au);}goto L64772a;}
}
B64774a:L64774a:{c.instructions+=2;NFSU2_TR(0x64774a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64774b:{NFSU2_TR(0x64774b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647750ull));
TAIL_STATIC(0x575630u,575);
}
B647750:L647750:{c.instructions+=3;NFSU2_TR(0x647750);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647754:{NFSU2_TR(0x647754);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647755:{NFSU2_TR(0x647755);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647736u);}goto L647736;}}
}
B647757:L647757:{c.instructions+=1;NFSU2_TR(0x647757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647758:L647758:{c.instructions+=2;NFSU2_TR(0x647758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647759:{NFSU2_TR(0x647759);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64775a:L64775a:{c.instructions+=5;NFSU2_TR(0x64775a);
__builtin_memmove((R+28),(R+28),4);
}
B64775c:{NFSU2_TR(0x64775c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64775d:{NFSU2_TR(0x64775d);
__builtin_memmove((R+24),(R+4),4);
}
B64775f:{NFSU2_TR(0x64775f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647763:{NFSU2_TR(0x647763);
if(r1(R+518)){{goto L647788;}}
}
B647765:L647765:{c.instructions+=1;NFSU2_TR(0x647765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647766:L647766:{c.instructions+=6;NFSU2_TR(0x647766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647769:{NFSU2_TR(0x647769);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64776c:{NFSU2_TR(0x64776c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64776f:{NFSU2_TR(0x64776f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647773:{NFSU2_TR(0x647773);
__builtin_memmove((R+4),(R+28),4);
}
B647775:{NFSU2_TR(0x647775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64777aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64775au);}goto L64775a;}
}
B64777a:L64777a:{c.instructions+=2;NFSU2_TR(0x64777a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64777b:{NFSU2_TR(0x64777b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647780ull));
TAIL_STATIC(0x575630u,575);
}
B647780:L647780:{c.instructions+=3;NFSU2_TR(0x647780);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647784:{NFSU2_TR(0x647784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647785:{NFSU2_TR(0x647785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647766u);}goto L647766;}}
}
B647787:L647787:{c.instructions+=1;NFSU2_TR(0x647787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647788:L647788:{c.instructions+=2;NFSU2_TR(0x647788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647789:{NFSU2_TR(0x647789);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64778a:L64778a:{c.instructions+=6;NFSU2_TR(0x64778a);
__builtin_memmove((R+28),(R+28),4);
}
B64778c:{NFSU2_TR(0x64778c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64778d:{NFSU2_TR(0x64778d);
__builtin_memmove((R+20),(R+16),4);
}
B64778f:{NFSU2_TR(0x64778f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647790:{NFSU2_TR(0x647790);
__builtin_memmove((R+24),(R+4),4);
}
B647792:{NFSU2_TR(0x647792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647797ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64775au);}goto L64775a;}
}
B647797:L647797:{c.instructions+=2;NFSU2_TR(0x647797);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64779b:{NFSU2_TR(0x64779b);
if(r1(R+518)){{goto L6477a4;}}
}
B64779d:L64779d:{c.instructions+=2;NFSU2_TR(0x64779d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64779e:{NFSU2_TR(0x64779e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6477a3ull));
TAIL_STATIC(0x575630u,575);
}
B6477a3:L6477a3:{c.instructions+=1;NFSU2_TR(0x6477a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6477a4:L6477a4:{c.instructions+=4;NFSU2_TR(0x6477a4);
__builtin_memmove((R+0),(R+24),4);
}
B6477a6:{NFSU2_TR(0x6477a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6477a7:{NFSU2_TR(0x6477a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6477a8:{NFSU2_TR(0x6477a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6477ab:L6477ab:{c.instructions+=10;NFSU2_TR(0x6477ab);
__builtin_memmove((R+0),(R+4),4);
}
B6477ad:{NFSU2_TR(0x6477ad);
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
B6477af:{NFSU2_TR(0x6477af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6477b2:{NFSU2_TR(0x6477b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6477b5:{NFSU2_TR(0x6477b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6477b8:{NFSU2_TR(0x6477b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6477bb:{NFSU2_TR(0x6477bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6477be:{NFSU2_TR(0x6477be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6477c0:{NFSU2_TR(0x6477c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6477c3:{NFSU2_TR(0x6477c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6477c4:L6477c4:{c.instructions+=6;NFSU2_TR(0x6477c4);
__builtin_memmove((R+28),(R+28),4);
}
B6477c6:{NFSU2_TR(0x6477c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6477c7:{NFSU2_TR(0x6477c7);
__builtin_memmove((R+24),(R+4),4);
}
B6477c9:{NFSU2_TR(0x6477c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6477cc:{NFSU2_TR(0x6477cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6477ce:{NFSU2_TR(0x6477ce);
if(r1(R+518)){{goto L6477db;}}
}
B6477d0:L6477d0:{c.instructions+=2;NFSU2_TR(0x6477d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6477d1:{NFSU2_TR(0x6477d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6477d6ull));
TAIL_STATIC(0x575630u,575);
}
B6477d6:L6477d6:{c.instructions+=2;NFSU2_TR(0x6477d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6477da:{NFSU2_TR(0x6477da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6477db:L6477db:{c.instructions+=2;NFSU2_TR(0x6477db);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6477df:{NFSU2_TR(0x6477df);
if(r1(R+518)){{goto L647804;}}
}
B6477e1:L6477e1:{c.instructions+=1;NFSU2_TR(0x6477e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6477e2:L6477e2:{c.instructions+=6;NFSU2_TR(0x6477e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6477e5:{NFSU2_TR(0x6477e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6477e8:{NFSU2_TR(0x6477e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6477eb:{NFSU2_TR(0x6477eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6477ef:{NFSU2_TR(0x6477ef);
__builtin_memmove((R+4),(R+28),4);
}
B6477f1:{NFSU2_TR(0x6477f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6477f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6477c4u);}goto L6477c4;}
}
B6477f6:L6477f6:{c.instructions+=2;NFSU2_TR(0x6477f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6477f7:{NFSU2_TR(0x6477f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6477fcull));
TAIL_STATIC(0x575630u,575);
}
B6477fc:L6477fc:{c.instructions+=3;NFSU2_TR(0x6477fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647800:{NFSU2_TR(0x647800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647801:{NFSU2_TR(0x647801);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6477e2u);}goto L6477e2;}}
}
B647803:L647803:{c.instructions+=1;NFSU2_TR(0x647803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647804:L647804:{c.instructions+=2;NFSU2_TR(0x647804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647805:{NFSU2_TR(0x647805);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647806:L647806:{c.instructions+=6;NFSU2_TR(0x647806);
__builtin_memmove((R+28),(R+28),4);
}
B647808:{NFSU2_TR(0x647808);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647809:{NFSU2_TR(0x647809);
__builtin_memmove((R+20),(R+16),4);
}
B64780b:{NFSU2_TR(0x64780b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64780c:{NFSU2_TR(0x64780c);
__builtin_memmove((R+24),(R+4),4);
}
B64780e:{NFSU2_TR(0x64780e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647813ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6477c4u);}goto L6477c4;}
}
B647813:L647813:{c.instructions+=2;NFSU2_TR(0x647813);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B647817:{NFSU2_TR(0x647817);
if(r1(R+518)){{goto L647820;}}
}
B647819:L647819:{c.instructions+=2;NFSU2_TR(0x647819);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64781a:{NFSU2_TR(0x64781a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64781full));
TAIL_STATIC(0x575630u,575);
}
B64781f:L64781f:{c.instructions+=1;NFSU2_TR(0x64781f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647820:L647820:{c.instructions+=4;NFSU2_TR(0x647820);
__builtin_memmove((R+0),(R+24),4);
}
B647822:{NFSU2_TR(0x647822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647823:{NFSU2_TR(0x647823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B647824:{NFSU2_TR(0x647824);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647827:L647827:{c.instructions+=12;NFSU2_TR(0x647827);
__builtin_memmove((R+28),(R+28),4);
}
B647829:{NFSU2_TR(0x647829);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64782a:{NFSU2_TR(0x64782a);
__builtin_memmove((R+20),(R+16),4);
}
B64782c:{NFSU2_TR(0x64782c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64782d:{NFSU2_TR(0x64782d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64782e:{NFSU2_TR(0x64782e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647832:{NFSU2_TR(0x647832);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647833:{NFSU2_TR(0x647833);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647834:{NFSU2_TR(0x647834);
__builtin_memmove((R+24),(R+4),4);
}
B647836:{NFSU2_TR(0x647836);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647838:{NFSU2_TR(0x647838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64783b:{NFSU2_TR(0x64783b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647840ull));
TAIL_STATIC(0x575620u,575);
}
B647840:L647840:{c.instructions+=3;NFSU2_TR(0x647840);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647842:{NFSU2_TR(0x647842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647843:{NFSU2_TR(0x647843);
if(r1(R+518)){{goto L647850;}}
}
B647845:L647845:{c.instructions+=2;NFSU2_TR(0x647845);
__builtin_memmove((R+4),(R+0),4);
}
B647847:{NFSU2_TR(0x647847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64784cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6477abu);}goto L6477ab;}
}
B64784c:L64784c:{c.instructions+=2;NFSU2_TR(0x64784c);
__builtin_memmove((R+12),(R+0),4);
}
B64784e:{NFSU2_TR(0x64784e);
{goto L647852;}
}
B647850:L647850:{c.instructions+=1;NFSU2_TR(0x647850);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B647852:L647852:{c.instructions+=2;NFSU2_TR(0x647852);
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
B647854:{NFSU2_TR(0x647854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64785f;}}
}
B647856:L647856:{c.instructions+=2;NFSU2_TR(0x647856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B64785d:{NFSU2_TR(0x64785d);
{goto L6478d5;}
}
B64785f:L64785f:{c.instructions+=4;NFSU2_TR(0x64785f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647860:{NFSU2_TR(0x647860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647863:{NFSU2_TR(0x647863);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647865:{NFSU2_TR(0x647865);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6478ad;}}
}
B647867:L647867:{c.instructions+=12;NFSU2_TR(0x647867);
__builtin_memmove((R+0),(R+28),4);
}
B647869:{NFSU2_TR(0x647869);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B64786c:{NFSU2_TR(0x64786c);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B64786e:{NFSU2_TR(0x64786e);
__builtin_memmove((R+4),(R+28),4);
}
B647870:{NFSU2_TR(0x647870);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B647872:{NFSU2_TR(0x647872);
w4(R+0,u32(0-u32(r4(R+0))));
}
B647874:{NFSU2_TR(0x647874);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B647877:{NFSU2_TR(0x647877);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B647879:{NFSU2_TR(0x647879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B64787b:{NFSU2_TR(0x64787b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64787e:{NFSU2_TR(0x64787e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64787f:{NFSU2_TR(0x64787f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647884ull));
TAIL_STATIC(0x575620u,575);
}
B647884:L647884:{c.instructions+=4;NFSU2_TR(0x647884);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647886:{NFSU2_TR(0x647886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647887:{NFSU2_TR(0x647887);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64788a:{NFSU2_TR(0x64788a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647895;}}
}
B64788c:L64788c:{c.instructions+=2;NFSU2_TR(0x64788c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B647893:{NFSU2_TR(0x647893);
{goto L6478c7;}
}
B647895:L647895:{c.instructions+=5;NFSU2_TR(0x647895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647898:{NFSU2_TR(0x647898);
__builtin_memmove((R+4),(R+28),4);
}
B64789a:{NFSU2_TR(0x64789a);
__builtin_memmove((R+28),(R+0),4);
}
B64789c:{NFSU2_TR(0x64789c);
__builtin_memmove((R+0),(R+4),4);
}
B64789e:{NFSU2_TR(0x64789e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6478a1:L6478a1:{c.instructions+=1;NFSU2_TR(0x6478a1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6478a3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6478a1u);}goto L6478a1;}
}
B6478a3:L6478a3:{c.instructions+=2;NFSU2_TR(0x6478a3);
__builtin_memmove((R+4),(R+0),4);
}
B6478a5:{NFSU2_TR(0x6478a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6478a8:L6478a8:{c.instructions+=1;NFSU2_TR(0x6478a8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6478aa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6478a8u);}goto L6478a8;}
}
B6478aa:L6478aa:{c.instructions+=1;NFSU2_TR(0x6478aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6478ad:L6478ad:{c.instructions+=8;NFSU2_TR(0x6478ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6478b0:{NFSU2_TR(0x6478b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6478b3:{NFSU2_TR(0x6478b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6478b6:{NFSU2_TR(0x6478b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6478b9:{NFSU2_TR(0x6478b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6478bc:{NFSU2_TR(0x6478bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6478be:{NFSU2_TR(0x6478be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6478c1:{NFSU2_TR(0x6478c1);
if(r1(R+518)){{goto L6478c5;}}
}
B6478c3:L6478c3:{c.instructions+=1;NFSU2_TR(0x6478c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6478c5:L6478c5:{c.instructions+=1;NFSU2_TR(0x6478c5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6478c7:L6478c7:{c.instructions+=3;NFSU2_TR(0x6478c7);
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
B6478c9:{NFSU2_TR(0x6478c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6478ca:{NFSU2_TR(0x6478ca);
if(r1(R+518)){{goto L6478d5;}}
}
B6478cc:L6478cc:{c.instructions+=3;NFSU2_TR(0x6478cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6478ce:{NFSU2_TR(0x6478ce);
__builtin_memmove((R+4),(R+12),4);
}
B6478d0:{NFSU2_TR(0x6478d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6478d5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647806u);}goto L647806;}
}
B6478d5:L6478d5:{c.instructions+=5;NFSU2_TR(0x6478d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6478d8:{NFSU2_TR(0x6478d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6478d9:{NFSU2_TR(0x6478d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6478da:{NFSU2_TR(0x6478da);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6478db:{NFSU2_TR(0x6478db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6478de:L6478de:{c.instructions+=11;NFSU2_TR(0x6478de);
__builtin_memmove((R+28),(R+28),4);
}
B6478e0:{NFSU2_TR(0x6478e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6478e1:{NFSU2_TR(0x6478e1);
__builtin_memmove((R+20),(R+16),4);
}
B6478e3:{NFSU2_TR(0x6478e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6478e4:{NFSU2_TR(0x6478e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6478e8:{NFSU2_TR(0x6478e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6478e9:{NFSU2_TR(0x6478e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6478ec:{NFSU2_TR(0x6478ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6478ee:{NFSU2_TR(0x6478ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6478ef:{NFSU2_TR(0x6478ef);
__builtin_memmove((R+28),(R+4),4);
}
B6478f1:{NFSU2_TR(0x6478f1);
if(r1(R+518)){{goto L647905;}}
}
B6478f3:L6478f3:{c.instructions+=2;NFSU2_TR(0x6478f3);
__builtin_memmove((R+0),(R+24),4);
}
B6478f5:{NFSU2_TR(0x6478f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6478f8:L6478f8:{c.instructions+=4;NFSU2_TR(0x6478f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6478fa:{NFSU2_TR(0x6478fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6478fb:{NFSU2_TR(0x6478fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6478fd:{NFSU2_TR(0x6478fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6478f8u);}goto L6478f8;}}
}
B6478ff:L6478ff:{c.instructions+=3;NFSU2_TR(0x6478ff);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B647901:{NFSU2_TR(0x647901);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B647902:{NFSU2_TR(0x647902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647905:L647905:{c.instructions+=6;NFSU2_TR(0x647905);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647908:{NFSU2_TR(0x647908);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64790b:{NFSU2_TR(0x64790b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64790d:{NFSU2_TR(0x64790d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64790e:{NFSU2_TR(0x64790e);
__builtin_memmove((R+4),(R+28),4);
}
B647910:{NFSU2_TR(0x647910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647915ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647827u);}goto L647827;}
}
B647915:L647915:{c.instructions+=2;NFSU2_TR(0x647915);
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
B647917:{NFSU2_TR(0x647917);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64792a;}}
}
B647919:L647919:{c.instructions+=2;NFSU2_TR(0x647919);
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
B64791b:{NFSU2_TR(0x64791b);
if(r1(R+518)){{goto L64792a;}}
}
B64791d:L64791d:{c.instructions+=5;NFSU2_TR(0x64791d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64791f:{NFSU2_TR(0x64791f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647922:{NFSU2_TR(0x647922);
__builtin_memmove((R+4),(R+28),4);
}
B647924:{NFSU2_TR(0x647924);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647925:{NFSU2_TR(0x647925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64792aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647827u);}goto L647827;}
}
B64792a:L64792a:{c.instructions+=4;NFSU2_TR(0x64792a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64792b:{NFSU2_TR(0x64792b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64792c:{NFSU2_TR(0x64792c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64792d:{NFSU2_TR(0x64792d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647930:L647930:{c.instructions+=10;NFSU2_TR(0x647930);
__builtin_memmove((R+28),(R+28),4);
}
B647932:{NFSU2_TR(0x647932);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647933:{NFSU2_TR(0x647933);
__builtin_memmove((R+20),(R+16),4);
}
B647935:{NFSU2_TR(0x647935);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647936:{NFSU2_TR(0x647936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64793a:{NFSU2_TR(0x64793a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64793b:{NFSU2_TR(0x64793b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64793c:{NFSU2_TR(0x64793c);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64793e:{NFSU2_TR(0x64793e);
__builtin_memmove((R+28),(R+4),4);
}
B647940:{NFSU2_TR(0x647940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647945ull));
TAIL_STATIC(0x575620u,575);
}
B647945:L647945:{c.instructions+=3;NFSU2_TR(0x647945);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647947:{NFSU2_TR(0x647947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647948:{NFSU2_TR(0x647948);
if(r1(R+518)){{goto L647955;}}
}
B64794a:L64794a:{c.instructions+=2;NFSU2_TR(0x64794a);
__builtin_memmove((R+4),(R+0),4);
}
B64794c:{NFSU2_TR(0x64794c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647951ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6477abu);}goto L6477ab;}
}
B647951:L647951:{c.instructions+=2;NFSU2_TR(0x647951);
__builtin_memmove((R+24),(R+0),4);
}
B647953:{NFSU2_TR(0x647953);
{goto L647957;}
}
B647955:L647955:{c.instructions+=1;NFSU2_TR(0x647955);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B647957:L647957:{c.instructions+=2;NFSU2_TR(0x647957);
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
B647959:{NFSU2_TR(0x647959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647964;}}
}
B64795b:L64795b:{c.instructions+=2;NFSU2_TR(0x64795b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B647962:{NFSU2_TR(0x647962);
{goto L6479b2;}
}
B647964:L647964:{c.instructions+=3;NFSU2_TR(0x647964);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647966:{NFSU2_TR(0x647966);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B64796c:{NFSU2_TR(0x64796c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647971ull));
TAIL_STATIC(0x575620u,575);
}
B647971:L647971:{c.instructions+=4;NFSU2_TR(0x647971);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647973:{NFSU2_TR(0x647973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647974:{NFSU2_TR(0x647974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647977:{NFSU2_TR(0x647977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647982;}}
}
B647979:L647979:{c.instructions+=2;NFSU2_TR(0x647979);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B647980:{NFSU2_TR(0x647980);
{goto L6479a5;}
}
B647982:L647982:{c.instructions+=11;NFSU2_TR(0x647982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B647985:{NFSU2_TR(0x647985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647988:{NFSU2_TR(0x647988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64798b:{NFSU2_TR(0x64798b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64798e:{NFSU2_TR(0x64798e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647991:{NFSU2_TR(0x647991);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647994:{NFSU2_TR(0x647994);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647997:{NFSU2_TR(0x647997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64799a:{NFSU2_TR(0x64799a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64799c:{NFSU2_TR(0x64799c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64799f:{NFSU2_TR(0x64799f);
if(r1(R+518)){{goto L6479a3;}}
}
B6479a1:L6479a1:{c.instructions+=1;NFSU2_TR(0x6479a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6479a3:L6479a3:{c.instructions+=1;NFSU2_TR(0x6479a3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6479a5:L6479a5:{c.instructions+=2;NFSU2_TR(0x6479a5);
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
B6479a7:{NFSU2_TR(0x6479a7);
if(r1(R+518)){{goto L6479b2;}}
}
B6479a9:L6479a9:{c.instructions+=3;NFSU2_TR(0x6479a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6479ab:{NFSU2_TR(0x6479ab);
__builtin_memmove((R+4),(R+24),4);
}
B6479ad:{NFSU2_TR(0x6479ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6479b2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647806u);}goto L647806;}
}
B6479b2:L6479b2:{c.instructions+=5;NFSU2_TR(0x6479b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6479b5:{NFSU2_TR(0x6479b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6479b6:{NFSU2_TR(0x6479b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6479b7:{NFSU2_TR(0x6479b7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6479b8:{NFSU2_TR(0x6479b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6479bb:L6479bb:{c.instructions+=13;NFSU2_TR(0x6479bb);
__builtin_memmove((R+28),(R+28),4);
}
B6479bd:{NFSU2_TR(0x6479bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6479be:{NFSU2_TR(0x6479be);
__builtin_memmove((R+20),(R+16),4);
}
B6479c0:{NFSU2_TR(0x6479c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6479c3:{NFSU2_TR(0x6479c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6479c6:{NFSU2_TR(0x6479c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6479c9:{NFSU2_TR(0x6479c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6479cc:{NFSU2_TR(0x6479cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6479cf:{NFSU2_TR(0x6479cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6479d2:{NFSU2_TR(0x6479d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6479d5:{NFSU2_TR(0x6479d5);
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
B6479d7:{NFSU2_TR(0x6479d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6479d8:{NFSU2_TR(0x6479d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6479db:L6479db:{c.instructions+=6;NFSU2_TR(0x6479db);
__builtin_memmove((R+28),(R+28),4);
}
B6479dd:{NFSU2_TR(0x6479dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6479de:{NFSU2_TR(0x6479de);
__builtin_memmove((R+20),(R+16),4);
}
B6479e0:{NFSU2_TR(0x6479e0);
__builtin_memmove((R+0),(R+4),4);
}
B6479e2:{NFSU2_TR(0x6479e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6479e4:{NFSU2_TR(0x6479e4);
if(r1(R+518)){{goto L647a34;}}
}
B6479e6:L6479e6:{c.instructions+=4;NFSU2_TR(0x6479e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6479e7:{NFSU2_TR(0x6479e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6479ea:{NFSU2_TR(0x6479ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6479eb:{NFSU2_TR(0x6479eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6479ec:L6479ec:{c.instructions+=2;NFSU2_TR(0x6479ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6479ee:{NFSU2_TR(0x6479ee);
if(r1(R+518)){{goto L6479fc;}}
}
B6479f0:L6479f0:{c.instructions+=5;NFSU2_TR(0x6479f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6479f2:{NFSU2_TR(0x6479f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6479f5:{NFSU2_TR(0x6479f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6479f7:{NFSU2_TR(0x6479f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6479fa:{NFSU2_TR(0x6479fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+12)),r4(U+0));
}
B6479fc:L6479fc:{c.instructions+=2;NFSU2_TR(0x6479fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B647a00:{NFSU2_TR(0x647a00);
if(r1(R+518)){{goto L647a2a;}}
}
B647a02:L647a02:{c.instructions+=7;NFSU2_TR(0x647a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647a05:{NFSU2_TR(0x647a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B647a07:{NFSU2_TR(0x647a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647a0a:{NFSU2_TR(0x647a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B647a0d:{NFSU2_TR(0x647a0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B647a10:{NFSU2_TR(0x647a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647a12:{NFSU2_TR(0x647a12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647a19;}}
}
B647a14:L647a14:{c.instructions+=2;NFSU2_TR(0x647a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647a17:{NFSU2_TR(0x647a17);
{goto L647a1c;}
}
B647a19:L647a19:{c.instructions+=1;NFSU2_TR(0x647a19);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647a1c:L647a1c:{c.instructions+=2;NFSU2_TR(0x647a1c);
__builtin_memmove((R+8),(R+4),4);
}
B647a1e:{NFSU2_TR(0x647a1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B647a21:L647a21:{c.instructions+=1;NFSU2_TR(0x647a21);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L647a23;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a21u);}goto L647a21;}
}
B647a23:L647a23:{c.instructions+=2;NFSU2_TR(0x647a23);
__builtin_memmove((R+4),(R+8),4);
}
B647a25:{NFSU2_TR(0x647a25);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B647a28:L647a28:{c.instructions+=1;NFSU2_TR(0x647a28);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L647a2a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a28u);}goto L647a28;}
}
B647a2a:L647a2a:{c.instructions+=3;NFSU2_TR(0x647a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647a2d:{NFSU2_TR(0x647a2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647a2f:{NFSU2_TR(0x647a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6479ecu);}goto L6479ec;}}
}
B647a31:L647a31:{c.instructions+=3;NFSU2_TR(0x647a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647a32:{NFSU2_TR(0x647a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647a33:{NFSU2_TR(0x647a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B647a34:L647a34:{c.instructions+=3;NFSU2_TR(0x647a34);
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
B647a36:{NFSU2_TR(0x647a36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B647a37:{NFSU2_TR(0x647a37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647a3a:L647a3a:{c.instructions+=2;NFSU2_TR(0x647a3a);
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
B647a3c:{NFSU2_TR(0x647a3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647a3f:L647a3f:{c.instructions+=12;NFSU2_TR(0x647a3f);
__builtin_memmove((R+28),(R+28),4);
}
B647a41:{NFSU2_TR(0x647a41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a42:{NFSU2_TR(0x647a42);
__builtin_memmove((R+20),(R+16),4);
}
B647a44:{NFSU2_TR(0x647a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B647a47:{NFSU2_TR(0x647a47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a48:{NFSU2_TR(0x647a48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a49:{NFSU2_TR(0x647a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647a4c:{NFSU2_TR(0x647a4c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B647a4e:{NFSU2_TR(0x647a4e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647a50:{NFSU2_TR(0x647a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647a53:{NFSU2_TR(0x647a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647a56:{NFSU2_TR(0x647a56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647a64;}}
}
B647a58:L647a58:{c.instructions+=2;NFSU2_TR(0x647a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647a5f:{NFSU2_TR(0x647a5f);
{goto L647d00;}
}
B647a64:L647a64:{c.instructions+=4;NFSU2_TR(0x647a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647a67:{NFSU2_TR(0x647a67);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647a68:{NFSU2_TR(0x647a68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a69:{NFSU2_TR(0x647a69);
if(r1(R+518)){{goto L647c59;}}
}
B647a6f:L647a6f:{c.instructions+=2;NFSU2_TR(0x647a6f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647a72:{NFSU2_TR(0x647a72);
if(r1(R+518)){{goto L647c04;}}
}
B647a78:L647a78:{c.instructions+=2;NFSU2_TR(0x647a78);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647a79:{NFSU2_TR(0x647a79);
if(r1(R+518)){{goto L647a9a;}}
}
B647a7b:L647a7b:{c.instructions+=1;NFSU2_TR(0x647a7b);
u8 U[4];
w4(U+0,u32(0x7aec88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a80:L647a80:{c.instructions+=5;NFSU2_TR(0x647a80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a81:{NFSU2_TR(0x647a81);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B647a84:{NFSU2_TR(0x647a84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a85:{NFSU2_TR(0x647a85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647a86:{NFSU2_TR(0x647a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647a8bull));
TAIL_STATIC(0x64307cu,643);
}
B647a8b:L647a8b:{c.instructions+=1;NFSU2_TR(0x647a8b);
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
B647a8e:L647a8e:{c.instructions+=2;NFSU2_TR(0x647a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647a95:{NFSU2_TR(0x647a95);
{goto L647cff;}
}
B647a9a:L647a9a:{c.instructions+=7;NFSU2_TR(0x647a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647a9d:{NFSU2_TR(0x647a9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647a9f:{NFSU2_TR(0x647a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647aa2:{NFSU2_TR(0x647aa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647aa4:{NFSU2_TR(0x647aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647aa7:{NFSU2_TR(0x647aa7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647aa9:{NFSU2_TR(0x647aa9);
if(r1(R+518)){{goto L647ad5;}}
}
B647aab:L647aab:{c.instructions+=2;NFSU2_TR(0x647aab);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647aac:{NFSU2_TR(0x647aac);
if(r1(R+518)){{goto L647ac8;}}
}
B647aae:L647aae:{c.instructions+=2;NFSU2_TR(0x647aae);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647aaf:{NFSU2_TR(0x647aaf);
if(r1(R+518)){{goto L647abb;}}
}
B647ab1:L647ab1:{c.instructions+=2;NFSU2_TR(0x647ab1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B647ab2:{NFSU2_TR(0x647ab2);
if(r1(R+518)){{goto L647ad5;}}
}
B647ab4:L647ab4:{c.instructions+=2;NFSU2_TR(0x647ab4);
u8 U[4];
w4(U+0,u32(0x7aec58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647ab9:{NFSU2_TR(0x647ab9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a80u);}goto L647a80;}
}
B647abb:L647abb:{c.instructions+=5;NFSU2_TR(0x647abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647abe:{NFSU2_TR(0x647abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647ac1:{NFSU2_TR(0x647ac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647ac3:{NFSU2_TR(0x647ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647ac6:{NFSU2_TR(0x647ac6);
{goto L647add;}
}
B647ac8:L647ac8:{c.instructions+=5;NFSU2_TR(0x647ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647acb:{NFSU2_TR(0x647acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647ace:{NFSU2_TR(0x647ace);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647ad0:{NFSU2_TR(0x647ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647ad3:{NFSU2_TR(0x647ad3);
{goto L647add;}
}
B647ad5:L647ad5:{c.instructions+=4;NFSU2_TR(0x647ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647ad8:{NFSU2_TR(0x647ad8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B647ada:{NFSU2_TR(0x647ada);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B647adb:{NFSU2_TR(0x647adb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647add:L647add:{c.instructions+=5;NFSU2_TR(0x647add);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647ae0:{NFSU2_TR(0x647ae0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647ae2:{NFSU2_TR(0x647ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647ae5:{NFSU2_TR(0x647ae5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647ae8:{NFSU2_TR(0x647ae8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L647bfa;}}
}
B647aee:L647aee:{c.instructions+=1;NFSU2_TR(0x647aee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x647d09ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B647af5:L647af5:{c.instructions+=3;NFSU2_TR(0x647af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647af8:{NFSU2_TR(0x647af8);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647afe:{NFSU2_TR(0x647afe);
{goto L647be2;}
}
B647b03:L647b03:{c.instructions+=3;NFSU2_TR(0x647b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b06:{NFSU2_TR(0x647b06);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b0c:{NFSU2_TR(0x647b0c);
{goto L647be2;}
}
B647b11:L647b11:{c.instructions+=3;NFSU2_TR(0x647b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b14:{NFSU2_TR(0x647b14);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b1a:{NFSU2_TR(0x647b1a);
{goto L647be2;}
}
B647b1f:L647b1f:{c.instructions+=7;NFSU2_TR(0x647b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b22:{NFSU2_TR(0x647b22);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647b24:{NFSU2_TR(0x647b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B647b25:{NFSU2_TR(0x647b25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647b27:{NFSU2_TR(0x647b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b2a:{NFSU2_TR(0x647b2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647b2c:{NFSU2_TR(0x647b2c);
{goto L647beb;}
}
B647b31:L647b31:{c.instructions+=3;NFSU2_TR(0x647b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b34:{NFSU2_TR(0x647b34);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b3a:{NFSU2_TR(0x647b3a);
{goto L647be2;}
}
B647b3f:L647b3f:{c.instructions+=3;NFSU2_TR(0x647b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b42:{NFSU2_TR(0x647b42);
u8 U[4];
w4(U+0,u32(0x6ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b48:{NFSU2_TR(0x647b48);
{goto L647be2;}
}
B647b4d:L647b4d:{c.instructions+=3;NFSU2_TR(0x647b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b50:{NFSU2_TR(0x647b50);
u8 U[4];
w4(U+0,u32(0x7ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b56:{NFSU2_TR(0x647b56);
{goto L647be2;}
}
B647b5b:L647b5b:{c.instructions+=3;NFSU2_TR(0x647b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b5e:{NFSU2_TR(0x647b5e);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b64:{NFSU2_TR(0x647b64);
{goto L647be2;}
}
B647b66:L647b66:{c.instructions+=3;NFSU2_TR(0x647b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b69:{NFSU2_TR(0x647b69);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b6f:{NFSU2_TR(0x647b6f);
{goto L647be2;}
}
B647b71:L647b71:{c.instructions+=3;NFSU2_TR(0x647b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b74:{NFSU2_TR(0x647b74);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b7a:{NFSU2_TR(0x647b7a);
{goto L647bb1;}
}
B647b7c:L647b7c:{c.instructions+=3;NFSU2_TR(0x647b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b7f:{NFSU2_TR(0x647b7f);
u8 U[4];
w4(U+0,u32(0xbull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b85:{NFSU2_TR(0x647b85);
{goto L647bb1;}
}
B647b87:L647b87:{c.instructions+=3;NFSU2_TR(0x647b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b8a:{NFSU2_TR(0x647b8a);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b90:{NFSU2_TR(0x647b90);
{goto L647bb1;}
}
B647b92:L647b92:{c.instructions+=3;NFSU2_TR(0x647b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647b95:{NFSU2_TR(0x647b95);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+4)),r4(U+0));
}
B647b9b:{NFSU2_TR(0x647b9b);
{goto L647bb1;}
}
B647b9d:L647b9d:{c.instructions+=3;NFSU2_TR(0x647b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647ba0:{NFSU2_TR(0x647ba0);
u8 U[4];
w4(U+0,u32(0xeull));
s4(u32(r4(R+4)),r4(U+0));
}
B647ba6:{NFSU2_TR(0x647ba6);
{goto L647bb1;}
}
B647ba8:L647ba8:{c.instructions+=2;NFSU2_TR(0x647ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647bab:{NFSU2_TR(0x647bab);
u8 U[4];
w4(U+0,u32(0xf30000ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647bb1:L647bb1:{c.instructions+=3;NFSU2_TR(0x647bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647bb4:{NFSU2_TR(0x647bb4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647bb6:{NFSU2_TR(0x647bb6);
{goto L647beb;}
}
B647bb8:L647bb8:{c.instructions+=3;NFSU2_TR(0x647bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647bbb:{NFSU2_TR(0x647bbb);
u8 U[4];
w4(U+0,u32(0xfull));
s4(u32(r4(R+4)),r4(U+0));
}
B647bc1:{NFSU2_TR(0x647bc1);
{goto L647be2;}
}
B647bc3:L647bc3:{c.instructions+=3;NFSU2_TR(0x647bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647bc6:{NFSU2_TR(0x647bc6);
u8 U[4];
w4(U+0,u32(0x10ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647bcc:{NFSU2_TR(0x647bcc);
{goto L647be2;}
}
B647bce:L647bce:{c.instructions+=3;NFSU2_TR(0x647bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647bd1:{NFSU2_TR(0x647bd1);
u8 U[4];
w4(U+0,u32(0x11ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647bd7:{NFSU2_TR(0x647bd7);
{goto L647be2;}
}
B647bd9:L647bd9:{c.instructions+=2;NFSU2_TR(0x647bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647bdc:{NFSU2_TR(0x647bdc);
u8 U[4];
w4(U+0,u32(0x12ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647be2:L647be2:{c.instructions+=2;NFSU2_TR(0x647be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647be5:{NFSU2_TR(0x647be5);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B647beb:L647beb:{c.instructions+=5;NFSU2_TR(0x647beb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B647bed:{NFSU2_TR(0x647bed);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+8,u32(r8(U+20)));
}
B647bf0:{NFSU2_TR(0x647bf0);
u8 U[36];
w8(U+12,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w8(U+20,u64(s64(s32(r4(U+0)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+8,u32(r8(U+28)));
w8(U+4,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+4))!=(r8(U+28))));
__builtin_memmove((R+523),(R+512),1);
}
B647bf3:{NFSU2_TR(0x647bf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647bf5:{NFSU2_TR(0x647bf5);
{goto L647cff;}
}
B647bfa:L647bfa:{c.instructions+=2;NFSU2_TR(0x647bfa);
u8 U[4];
w4(U+0,u32(0x7aec28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647bff:{NFSU2_TR(0x647bff);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a80u);}goto L647a80;}
}
B647c04:L647c04:{c.instructions+=4;NFSU2_TR(0x647c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647c07:{NFSU2_TR(0x647c07);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B647c09:{NFSU2_TR(0x647c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647c0c:{NFSU2_TR(0x647c0c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647c12:L647c12:{c.instructions+=10;NFSU2_TR(0x647c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647c15:{NFSU2_TR(0x647c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647c18:{NFSU2_TR(0x647c18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647c19:{NFSU2_TR(0x647c19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647c1c:{NFSU2_TR(0x647c1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647c1d:{NFSU2_TR(0x647c1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647c20:{NFSU2_TR(0x647c20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647c23:{NFSU2_TR(0x647c23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647c26:{NFSU2_TR(0x647c26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647c27:{NFSU2_TR(0x647c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647c2cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a3fu);}goto L647a3f;}
}
B647c2c:L647c2c:{c.instructions+=3;NFSU2_TR(0x647c2c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B647c2e:{NFSU2_TR(0x647c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647c31:{NFSU2_TR(0x647c31);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L647cff;}}
}
B647c37:L647c37:{c.instructions+=2;NFSU2_TR(0x647c37);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B647c39:{NFSU2_TR(0x647c39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647c41;}}
}
B647c3b:L647c3b:{c.instructions+=1;NFSU2_TR(0x647c3b);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B647c41:L647c41:{c.instructions+=8;NFSU2_TR(0x647c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647c44:{NFSU2_TR(0x647c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647c47:{NFSU2_TR(0x647c47);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B647c4a:{NFSU2_TR(0x647c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647c4c:{NFSU2_TR(0x647c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647c4f:{NFSU2_TR(0x647c4f);
u8 U[36];
w8(U+12,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(U+20,u64(s64(s32(r4(U+0)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+0,u32(r8(U+28)));
w8(U+4,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+4))!=(r8(U+28))));
__builtin_memmove((R+523),(R+512),1);
}
B647c52:{NFSU2_TR(0x647c52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B647c54:{NFSU2_TR(0x647c54);
{goto L647cff;}
}
B647c59:L647c59:{c.instructions+=5;NFSU2_TR(0x647c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647c5c:{NFSU2_TR(0x647c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647c5f:{NFSU2_TR(0x647c5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647c61:{NFSU2_TR(0x647c61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647c63:{NFSU2_TR(0x647c63);
{goto L647c68;}
}
B647c65:L647c65:{c.instructions+=1;NFSU2_TR(0x647c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647c68:L647c68:{c.instructions+=2;NFSU2_TR(0x647c68);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647c6c:{NFSU2_TR(0x647c6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647c72:L647c72:{c.instructions+=3;NFSU2_TR(0x647c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647c75:{NFSU2_TR(0x647c75);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B647c77:{NFSU2_TR(0x647c77);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647c7d:L647c7d:{c.instructions+=2;NFSU2_TR(0x647c7d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647c81:{NFSU2_TR(0x647c81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647c87:L647c87:{c.instructions+=2;NFSU2_TR(0x647c87);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647c8b:{NFSU2_TR(0x647c8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647c91:L647c91:{c.instructions+=3;NFSU2_TR(0x647c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647c94:{NFSU2_TR(0x647c94);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B647c96:{NFSU2_TR(0x647c96);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647c9c:L647c9c:{c.instructions+=2;NFSU2_TR(0x647c9c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647ca0:{NFSU2_TR(0x647ca0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647ca6:L647ca6:{c.instructions+=3;NFSU2_TR(0x647ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647ca9:{NFSU2_TR(0x647ca9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B647cab:{NFSU2_TR(0x647cab);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a8eu);}goto L647a8e;}}
}
B647cb1:L647cb1:{c.instructions+=14;NFSU2_TR(0x647cb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B647cb4:{NFSU2_TR(0x647cb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647cb5:{NFSU2_TR(0x647cb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B647cb8:{NFSU2_TR(0x647cb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647cb9:{NFSU2_TR(0x647cb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B647cbc:{NFSU2_TR(0x647cbc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647cbd:{NFSU2_TR(0x647cbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B647cc0:{NFSU2_TR(0x647cc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647cc1:{NFSU2_TR(0x647cc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B647cc4:{NFSU2_TR(0x647cc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647cc5:{NFSU2_TR(0x647cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B647cc8:{NFSU2_TR(0x647cc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647cc9:{NFSU2_TR(0x647cc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647cca:{NFSU2_TR(0x647cca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647ccfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647a3fu);}goto L647a3f;}
}
B647ccf:L647ccf:{c.instructions+=3;NFSU2_TR(0x647ccf);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B647cd1:{NFSU2_TR(0x647cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647cd4:{NFSU2_TR(0x647cd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L647cff;}}
}
B647cd6:L647cd6:{c.instructions+=7;NFSU2_TR(0x647cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647cd9:{NFSU2_TR(0x647cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647cdc:{NFSU2_TR(0x647cdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B647cde:{NFSU2_TR(0x647cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647ce1:{NFSU2_TR(0x647ce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B647ce3:{NFSU2_TR(0x647ce3);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647ce5:{NFSU2_TR(0x647ce5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647c65u);}goto L647c65;}}
}
B647ceb:L647ceb:{c.instructions+=8;NFSU2_TR(0x647ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647cee:{NFSU2_TR(0x647cee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647cf0:{NFSU2_TR(0x647cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647cf3:{NFSU2_TR(0x647cf3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647cf5:{NFSU2_TR(0x647cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647cf8:{NFSU2_TR(0x647cf8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647cfa:{NFSU2_TR(0x647cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647cfd:{NFSU2_TR(0x647cfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B647cff:L647cff:{c.instructions+=1;NFSU2_TR(0x647cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647d00:L647d00:{c.instructions+=5;NFSU2_TR(0x647d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647d03:{NFSU2_TR(0x647d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647d04:{NFSU2_TR(0x647d04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B647d05:{NFSU2_TR(0x647d05);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B647d06:{NFSU2_TR(0x647d06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647d81:L647d81:{c.instructions+=15;NFSU2_TR(0x647d81);
__builtin_memmove((R+28),(R+28),4);
}
B647d83:{NFSU2_TR(0x647d83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647d84:{NFSU2_TR(0x647d84);
__builtin_memmove((R+20),(R+16),4);
}
B647d86:{NFSU2_TR(0x647d86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647d87:{NFSU2_TR(0x647d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647d8a:{NFSU2_TR(0x647d8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647d8b:{NFSU2_TR(0x647d8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647d8c:{NFSU2_TR(0x647d8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647d8d:{NFSU2_TR(0x647d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647d90:{NFSU2_TR(0x647d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B647d92:{NFSU2_TR(0x647d92);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B647d94:{NFSU2_TR(0x647d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B647d97:{NFSU2_TR(0x647d97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647d99:{NFSU2_TR(0x647d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647d9c:{NFSU2_TR(0x647d9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647d9f;}}
}
B647d9e:L647d9e:{c.instructions+=1;NFSU2_TR(0x647d9e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B647d9f:L647d9f:{c.instructions+=2;NFSU2_TR(0x647d9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B647da1:{NFSU2_TR(0x647da1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L647e59;}}
}
B647da7:L647da7:{c.instructions+=2;NFSU2_TR(0x647da7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647daa:{NFSU2_TR(0x647daa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L647e22;}}
}
B647dac:L647dac:{c.instructions+=2;NFSU2_TR(0x647dac);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647daf:{NFSU2_TR(0x647daf);
if(r1(R+518)){{goto L647dfc;}}
}
B647db1:L647db1:{c.instructions+=2;NFSU2_TR(0x647db1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647db4:{NFSU2_TR(0x647db4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647e59;}}
}
B647dba:L647dba:{c.instructions+=8;NFSU2_TR(0x647dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647dbd:{NFSU2_TR(0x647dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647dc0:{NFSU2_TR(0x647dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647dc4:{NFSU2_TR(0x647dc4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B647dc7:{NFSU2_TR(0x647dc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647dc9:{NFSU2_TR(0x647dc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B647dcc:{NFSU2_TR(0x647dcc);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647dce:{NFSU2_TR(0x647dce);
if(r1(R+518)){{goto L647ded;}}
}
B647dd0:L647dd0:{c.instructions+=1;NFSU2_TR(0x647dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647dd3:L647dd3:{c.instructions+=5;NFSU2_TR(0x647dd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B647dd6:{NFSU2_TR(0x647dd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647dd7:{NFSU2_TR(0x647dd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647dd8:{NFSU2_TR(0x647dd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647ddb:{NFSU2_TR(0x647ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647de0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647d81u);}goto L647d81;}
}
B647de0:L647de0:{c.instructions+=5;NFSU2_TR(0x647de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B647de3:{NFSU2_TR(0x647de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647de6:{NFSU2_TR(0x647de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B647de8:{NFSU2_TR(0x647de8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647deb:{NFSU2_TR(0x647deb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647dd3u);}goto L647dd3;}}
}
B647ded:L647ded:{c.instructions+=4;NFSU2_TR(0x647ded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647def:{NFSU2_TR(0x647def);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B647df2:{NFSU2_TR(0x647df2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B647df4:{NFSU2_TR(0x647df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647df7:L647df7:{c.instructions+=2;NFSU2_TR(0x647df7);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B647dfa:{NFSU2_TR(0x647dfa);
{goto L647e5b;}
}
B647dfc:L647dfc:{c.instructions+=3;NFSU2_TR(0x647dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647dfe:{NFSU2_TR(0x647dfe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B647e01:{NFSU2_TR(0x647e01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L647e13;}}
}
B647e03:L647e03:{c.instructions+=2;NFSU2_TR(0x647e03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647e06:{NFSU2_TR(0x647e06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L647e0f;}}
}
B647e08:L647e08:{c.instructions+=2;NFSU2_TR(0x647e08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xf30000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B647e0d:{NFSU2_TR(0x647e0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647e13;}}
}
B647e0f:L647e0f:{c.instructions+=2;NFSU2_TR(0x647e0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B647e11:{NFSU2_TR(0x647e11);
{goto L647e16;}
}
B647e13:L647e13:{c.instructions+=2;NFSU2_TR(0x647e13);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e15:{NFSU2_TR(0x647e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B647e16:L647e16:{c.instructions+=5;NFSU2_TR(0x647e16);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647e19:{NFSU2_TR(0x647e19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647e1b:{NFSU2_TR(0x647e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647e1e:{NFSU2_TR(0x647e1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647e20:{NFSU2_TR(0x647e20);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647df7u);}goto L647df7;}
}
B647e22:L647e22:{c.instructions+=6;NFSU2_TR(0x647e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647e25:{NFSU2_TR(0x647e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647e28:{NFSU2_TR(0x647e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647e2a:{NFSU2_TR(0x647e2a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B647e2b:{NFSU2_TR(0x647e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647e2e:{NFSU2_TR(0x647e2e);
if(r1(R+518)){{goto L647e3c;}}
}
B647e30:L647e30:{c.instructions+=2;NFSU2_TR(0x647e30);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B647e31:{NFSU2_TR(0x647e31);
if(r1(R+518)){{goto L647e3c;}}
}
B647e33:L647e33:{c.instructions+=2;NFSU2_TR(0x647e33);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B647e34:{NFSU2_TR(0x647e34);
if(r1(R+518)){{goto L647e3c;}}
}
B647e36:L647e36:{c.instructions+=3;NFSU2_TR(0x647e36);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B647e38:{NFSU2_TR(0x647e38);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B647e3a:{NFSU2_TR(0x647e3a);
{goto L647e3f;}
}
B647e3c:L647e3c:{c.instructions+=2;NFSU2_TR(0x647e3c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e3e:{NFSU2_TR(0x647e3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B647e3f:L647e3f:{c.instructions+=10;NFSU2_TR(0x647e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647e42:{NFSU2_TR(0x647e42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B647e45:{NFSU2_TR(0x647e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647e48:{NFSU2_TR(0x647e48);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647e4b:{NFSU2_TR(0x647e4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B647e4d:{NFSU2_TR(0x647e4d);
__builtin_memmove((R+4),(R+0),4);
}
B647e4f:{NFSU2_TR(0x647e4f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B647e52:{NFSU2_TR(0x647e52);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B647e55:{NFSU2_TR(0x647e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B647e57:{NFSU2_TR(0x647e57);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647df7u);}goto L647df7;}
}
B647e59:L647e59:{c.instructions+=1;NFSU2_TR(0x647e59);
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
B647e5b:L647e5b:{c.instructions+=5;NFSU2_TR(0x647e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647e5c:{NFSU2_TR(0x647e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647e5d:{NFSU2_TR(0x647e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B647e5e:{NFSU2_TR(0x647e5e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B647e5f:{NFSU2_TR(0x647e5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647e62:L647e62:{c.instructions+=8;NFSU2_TR(0x647e62);
__builtin_memmove((R+28),(R+28),4);
}
B647e64:{NFSU2_TR(0x647e64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e65:{NFSU2_TR(0x647e65);
__builtin_memmove((R+20),(R+16),4);
}
B647e67:{NFSU2_TR(0x647e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647e6a:{NFSU2_TR(0x647e6a);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647e6d:{NFSU2_TR(0x647e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647e70:{NFSU2_TR(0x647e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B647e71:{NFSU2_TR(0x647e71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647e74:L647e74:{c.instructions+=10;NFSU2_TR(0x647e74);
__builtin_memmove((R+28),(R+28),4);
}
B647e76:{NFSU2_TR(0x647e76);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e77:{NFSU2_TR(0x647e77);
__builtin_memmove((R+20),(R+16),4);
}
B647e79:{NFSU2_TR(0x647e79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e7a:{NFSU2_TR(0x647e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647e7d:{NFSU2_TR(0x647e7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e7e:{NFSU2_TR(0x647e7e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e80:{NFSU2_TR(0x647e80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647e81:{NFSU2_TR(0x647e81);
w4(R+28,u32(0x7b73f0ull));
}
B647e86:{NFSU2_TR(0x647e86);
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
B647e88:L647e88:{c.instructions+=1;NFSU2_TR(0x647e88);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L647e8a;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647e88u);}goto L647e88;}}
}
B647e8a:L647e8a:{c.instructions+=1;NFSU2_TR(0x647e8a);
if(r1(R+518)){{goto L647e9d;}}
}
B647e8c:L647e8c:{c.instructions+=5;NFSU2_TR(0x647e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647e8f:{NFSU2_TR(0x647e8f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647e91:{NFSU2_TR(0x647e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B647e92:{NFSU2_TR(0x647e92);
w4(R+28,u32(0x7d9904ull));
}
B647e97:{NFSU2_TR(0x647e97);
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
B647e99:L647e99:{c.instructions+=1;NFSU2_TR(0x647e99);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L647e9b;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647e99u);}goto L647e99;}}
}
B647e9b:L647e9b:{c.instructions+=1;NFSU2_TR(0x647e9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L647eaf;}}
}
B647e9d:L647e9d:{c.instructions+=6;NFSU2_TR(0x647e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647ea0:{NFSU2_TR(0x647ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647ea3:{NFSU2_TR(0x647ea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647ea5:{NFSU2_TR(0x647ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B647ea7:{NFSU2_TR(0x647ea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647ea8:{NFSU2_TR(0x647ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647eabull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B647eab:L647eab:{c.instructions+=2;NFSU2_TR(0x647eab);
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
B647ead:{NFSU2_TR(0x647ead);
{goto L647eb4;}
}
B647eaf:L647eaf:{c.instructions+=1;NFSU2_TR(0x647eaf);
w4(R+0,u32(0x80004002ull));
}
B647eb4:L647eb4:{c.instructions+=4;NFSU2_TR(0x647eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B647eb5:{NFSU2_TR(0x647eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B647eb6:{NFSU2_TR(0x647eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B647eb7:{NFSU2_TR(0x647eb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B647eba:L647eba:{c.instructions+=13;NFSU2_TR(0x647eba);
__builtin_memmove((R+28),(R+28),4);
}
B647ebc:{NFSU2_TR(0x647ebc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647ebd:{NFSU2_TR(0x647ebd);
__builtin_memmove((R+20),(R+16),4);
}
B647ebf:{NFSU2_TR(0x647ebf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647ec0:{NFSU2_TR(0x647ec0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647ec1:{NFSU2_TR(0x647ec1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647ec2:{NFSU2_TR(0x647ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B647ec5:{NFSU2_TR(0x647ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647ec8:{NFSU2_TR(0x647ec8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B647eca:{NFSU2_TR(0x647eca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B647ecb:{NFSU2_TR(0x647ecb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647ecc:{NFSU2_TR(0x647ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647ecf:{NFSU2_TR(0x647ecf);
if(r1(R+518)){TAIL_STATIC(0x648003u,648);}
}
B647ed5:L647ed5:{c.instructions+=2;NFSU2_TR(0x647ed5);
w1(R+512,u8((r4(R+0))<(u32(0x7ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B647ed8:{NFSU2_TR(0x647ed8);
if(r1(R+518)){{goto L647fbf;}}
}
B647ede:L647ede:{c.instructions+=2;NFSU2_TR(0x647ede);
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
B647edf:{NFSU2_TR(0x647edf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x648069u,648);}
}
B647ee5:L647ee5:{c.instructions+=3;NFSU2_TR(0x647ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647ee8:{NFSU2_TR(0x647ee8);
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
B647eea:{NFSU2_TR(0x647eea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648069u,648);}
}
B647ef0:L647ef0:{c.instructions+=2;NFSU2_TR(0x647ef0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B647ef3:{NFSU2_TR(0x647ef3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L647f08;}}
}
B647ef5:L647ef5:{c.instructions+=2;NFSU2_TR(0x647ef5);
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
B647ef8:{NFSU2_TR(0x647ef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x648069u,648);}
}
B647efe:L647efe:{c.instructions+=5;NFSU2_TR(0x647efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647f01:{NFSU2_TR(0x647f01);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B647f03:{NFSU2_TR(0x647f03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B647f04:{NFSU2_TR(0x647f04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B647f06:{NFSU2_TR(0x647f06);
{goto L647f13;}
}
B647f08:L647f08:{c.instructions+=4;NFSU2_TR(0x647f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f0b:{NFSU2_TR(0x647f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B647f0e:{NFSU2_TR(0x647f0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B647f10:{NFSU2_TR(0x647f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f13:L647f13:{c.instructions+=7;NFSU2_TR(0x647f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B647f16:{NFSU2_TR(0x647f16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B647f18:{NFSU2_TR(0x647f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647f1a:{NFSU2_TR(0x647f1a);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B647f1d:{NFSU2_TR(0x647f1d);
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
B647f1f:{NFSU2_TR(0x647f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647f22:{NFSU2_TR(0x647f22);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x648070u,648);}
}
B647f28:L647f28:{c.instructions+=1;NFSU2_TR(0x647f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B647f2b:L647f2b:{c.instructions+=11;NFSU2_TR(0x647f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B647f2d:{NFSU2_TR(0x647f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647f30:{NFSU2_TR(0x647f30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B647f32:{NFSU2_TR(0x647f32);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B647f35:{NFSU2_TR(0x647f35);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B647f36:{NFSU2_TR(0x647f36);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B647f37:{NFSU2_TR(0x647f37);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B647f38:{NFSU2_TR(0x647f38);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B647f39:{NFSU2_TR(0x647f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f3c:{NFSU2_TR(0x647f3c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B647f3f:{NFSU2_TR(0x647f3f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x648069u,648);}
}
B647f45:L647f45:{c.instructions+=2;NFSU2_TR(0x647f45);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x648092ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B647f4c:{NFSU2_TR(0x647f4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x64807aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B647f53:L647f53:{c.instructions+=4;NFSU2_TR(0x647f53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647f55:{NFSU2_TR(0x647f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f58:{NFSU2_TR(0x647f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647f5c:{NFSU2_TR(0x647f5c);
{goto L647fa2;}
}
B647f5e:L647f5e:{c.instructions+=4;NFSU2_TR(0x647f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647f60:{NFSU2_TR(0x647f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f63:{NFSU2_TR(0x647f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647f6a:{NFSU2_TR(0x647f6a);
{goto L647fa2;}
}
B647f6c:L647f6c:{c.instructions+=4;NFSU2_TR(0x647f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647f6e:{NFSU2_TR(0x647f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f71:{NFSU2_TR(0x647f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647f78:{NFSU2_TR(0x647f78);
{goto L647fa2;}
}
B647f7a:L647f7a:{c.instructions+=4;NFSU2_TR(0x647f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647f7c:{NFSU2_TR(0x647f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f7f:{NFSU2_TR(0x647f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647f86:{NFSU2_TR(0x647f86);
{goto L647fa2;}
}
B647f88:L647f88:{c.instructions+=4;NFSU2_TR(0x647f88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647f8a:{NFSU2_TR(0x647f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f8d:{NFSU2_TR(0x647f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647f94:{NFSU2_TR(0x647f94);
{goto L647fa2;}
}
B647f96:L647f96:{c.instructions+=3;NFSU2_TR(0x647f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647f98:{NFSU2_TR(0x647f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647f9b:{NFSU2_TR(0x647f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B647fa2:L647fa2:{c.instructions+=8;NFSU2_TR(0x647fa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647fa4:{NFSU2_TR(0x647fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647fa7:{NFSU2_TR(0x647fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647faa:{NFSU2_TR(0x647faa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B647fac:{NFSU2_TR(0x647fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B647fae:{NFSU2_TR(0x647fae);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B647fb1:{NFSU2_TR(0x647fb1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647fb4:{NFSU2_TR(0x647fb4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647f2bu);}goto L647f2b;}}
}
B647fba:L647fba:{c.instructions+=1;NFSU2_TR(0x647fba);
TAIL_STATIC(0x648070u,648);
}
B647fbf:L647fbf:{c.instructions+=5;NFSU2_TR(0x647fbf);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647fc2:{NFSU2_TR(0x647fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B647fc5:{NFSU2_TR(0x647fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B647fc8:{NFSU2_TR(0x647fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647fcb:{NFSU2_TR(0x647fcb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L647ff0;}}
}
B647fcd:L647fcd:{c.instructions+=5;NFSU2_TR(0x647fcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647fce:{NFSU2_TR(0x647fce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B647fcf:{NFSU2_TR(0x647fcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647fd2:{NFSU2_TR(0x647fd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B647fd5:{NFSU2_TR(0x647fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x647fdaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647ebau);}goto L647eba;}
}
B647fda:L647fda:{c.instructions+=3;NFSU2_TR(0x647fda);
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
B647fdc:{NFSU2_TR(0x647fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B647fdf:{NFSU2_TR(0x647fdf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x648070u,648);}
}
B647fe5:L647fe5:{c.instructions+=4;NFSU2_TR(0x647fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B647fe8:{NFSU2_TR(0x647fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647feb:{NFSU2_TR(0x647feb);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B647fee:{NFSU2_TR(0x647fee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x647fcdu);}goto L647fcd;}}
}
B647ff0:L647ff0:{c.instructions+=5;NFSU2_TR(0x647ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B647ff3:{NFSU2_TR(0x647ff3);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B647ff6:{NFSU2_TR(0x647ff6);
u8 U[36];
w8(U+12,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+20,u64(s64(s32(r4(U+0)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+0,u32(r8(U+28)));
w8(U+4,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+4))!=(r8(U+28))));
__builtin_memmove((R+523),(R+512),1);
}
B647ff9:{NFSU2_TR(0x647ff9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B647ffb:{NFSU2_TR(0x647ffb);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
TAIL_STATIC(0x648001u,648);
}
XIT:NFSU2_TR_EXIT(0x647,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
