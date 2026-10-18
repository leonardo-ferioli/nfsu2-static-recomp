#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x502,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x502,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_502(u8* __restrict R,Cpu& c);
u32 page_502(Cpu& c){return body_502(c.regs.data(),c);}
__attribute__((noinline)) u32 body_502(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x502003:goto L502003;
case 0x502005:c.instructions+=1;goto B502005;
case 0x50200a:goto L50200a;
case 0x50200c:c.instructions+=9;goto B50200c;
case 0x50200f:c.instructions+=8;goto B50200f;
case 0x502011:c.instructions+=7;goto B502011;
case 0x502013:c.instructions+=6;goto B502013;
case 0x502016:c.instructions+=5;goto B502016;
case 0x502019:c.instructions+=4;goto B502019;
case 0x50201b:c.instructions+=3;goto B50201b;
case 0x50201c:c.instructions+=2;goto B50201c;
case 0x50201d:c.instructions+=1;goto B50201d;
case 0x5020c0:goto L5020c0;
case 0x5020c4:c.instructions+=3;goto B5020c4;
case 0x5020c7:c.instructions+=2;goto B5020c7;
case 0x5020ca:c.instructions+=1;goto B5020ca;
case 0x5020cc:goto L5020cc;
case 0x5020d3:goto L5020d3;
case 0x5020d8:c.instructions+=1;goto B5020d8;
case 0x5020d9:goto L5020d9;
case 0x5020de:c.instructions+=1;goto B5020de;
case 0x5020df:goto L5020df;
case 0x5020e4:c.instructions+=1;goto B5020e4;
case 0x5020e5:goto L5020e5;
case 0x5020ea:c.instructions+=1;goto B5020ea;
case 0x5020eb:goto L5020eb;
case 0x5020f0:c.instructions+=1;goto B5020f0;
case 0x5020f1:goto L5020f1;
case 0x5020f6:c.instructions+=1;goto B5020f6;
case 0x5020f7:goto L5020f7;
case 0x5020fc:c.instructions+=1;goto B5020fc;
case 0x5020fd:goto L5020fd;
case 0x502102:c.instructions+=1;goto B502102;
case 0x502103:goto L502103;
case 0x502108:c.instructions+=1;goto B502108;
case 0x502109:goto L502109;
case 0x50210e:c.instructions+=1;goto B50210e;
case 0x50210f:goto L50210f;
case 0x502114:c.instructions+=1;goto B502114;
case 0x502115:goto L502115;
case 0x50211a:c.instructions+=1;goto B50211a;
case 0x50211b:goto L50211b;
case 0x502120:c.instructions+=1;goto B502120;
case 0x502121:goto L502121;
case 0x502126:c.instructions+=1;goto B502126;
case 0x502127:goto L502127;
case 0x50212c:c.instructions+=1;goto B50212c;
case 0x50212d:goto L50212d;
case 0x502132:c.instructions+=1;goto B502132;
case 0x502133:goto L502133;
case 0x502138:c.instructions+=1;goto B502138;
case 0x502139:goto L502139;
case 0x50213e:c.instructions+=1;goto B50213e;
case 0x50213f:goto L50213f;
case 0x502144:c.instructions+=1;goto B502144;
case 0x502145:goto L502145;
case 0x502148:c.instructions+=1;goto B502148;
case 0x5021c0:goto L5021c0;
case 0x5021c4:c.instructions+=2;goto B5021c4;
case 0x5021c7:c.instructions+=1;goto B5021c7;
case 0x5021c9:goto L5021c9;
case 0x5021d0:goto L5021d0;
case 0x5021d5:c.instructions+=1;goto B5021d5;
case 0x5021d6:goto L5021d6;
case 0x5021db:c.instructions+=1;goto B5021db;
case 0x5021dc:goto L5021dc;
case 0x5021e1:c.instructions+=1;goto B5021e1;
case 0x5021e2:goto L5021e2;
case 0x5021e7:c.instructions+=1;goto B5021e7;
case 0x5021e8:goto L5021e8;
case 0x5021ed:c.instructions+=1;goto B5021ed;
case 0x5021ee:goto L5021ee;
case 0x5021f3:c.instructions+=1;goto B5021f3;
case 0x5021f4:goto L5021f4;
case 0x5021f9:c.instructions+=1;goto B5021f9;
case 0x5021fa:goto L5021fa;
case 0x5021ff:c.instructions+=1;goto B5021ff;
case 0x502200:goto L502200;
case 0x502205:c.instructions+=1;goto B502205;
case 0x502206:goto L502206;
case 0x50220b:c.instructions+=1;goto B50220b;
case 0x50220c:goto L50220c;
case 0x50220e:c.instructions+=1;goto B50220e;
case 0x502240:goto L502240;
case 0x502244:c.instructions+=3;goto B502244;
case 0x502245:c.instructions+=2;goto B502245;
case 0x502248:c.instructions+=1;goto B502248;
case 0x50224a:goto L50224a;
case 0x502251:goto L502251;
case 0x502253:c.instructions+=1;goto B502253;
case 0x502254:goto L502254;
case 0x502259:c.instructions+=1;goto B502259;
case 0x50225a:goto L50225a;
case 0x50225f:c.instructions+=1;goto B50225f;
case 0x502260:goto L502260;
case 0x502265:c.instructions+=1;goto B502265;
case 0x502266:goto L502266;
case 0x50226b:c.instructions+=1;goto B50226b;
case 0x50226c:goto L50226c;
case 0x502271:c.instructions+=1;goto B502271;
case 0x502272:goto L502272;
case 0x502277:c.instructions+=1;goto B502277;
case 0x502278:goto L502278;
case 0x50227d:c.instructions+=1;goto B50227d;
case 0x50227e:goto L50227e;
case 0x502283:c.instructions+=1;goto B502283;
case 0x502284:goto L502284;
case 0x502289:c.instructions+=1;goto B502289;
case 0x50228a:goto L50228a;
case 0x50228d:c.instructions+=1;goto B50228d;
case 0x5022c0:goto L5022c0;
case 0x5022c5:c.instructions+=2;goto B5022c5;
case 0x5022c7:c.instructions+=1;goto B5022c7;
case 0x5022c9:goto L5022c9;
case 0x5022ce:goto L5022ce;
case 0x5022d0:c.instructions+=2;goto B5022d0;
case 0x5022d4:c.instructions+=1;goto B5022d4;
case 0x5022d6:goto L5022d6;
case 0x5022db:c.instructions+=1;goto B5022db;
case 0x5022e0:goto L5022e0;
case 0x5022e2:c.instructions+=1;goto B5022e2;
case 0x5022e4:goto L5022e4;
case 0x5022e7:c.instructions+=2;goto B5022e7;
case 0x5022ec:c.instructions+=1;goto B5022ec;
case 0x5022ee:goto L5022ee;
case 0x5022f0:c.instructions+=1;goto B5022f0;
case 0x5022f1:goto L5022f1;
case 0x5022f6:goto L5022f6;
case 0x5022f8:c.instructions+=1;goto B5022f8;
case 0x5022fa:goto L5022fa;
case 0x5022fd:c.instructions+=2;goto B5022fd;
case 0x502302:c.instructions+=1;goto B502302;
case 0x502304:goto L502304;
case 0x502306:c.instructions+=1;goto B502306;
case 0x502307:goto L502307;
case 0x502309:c.instructions+=1;goto B502309;
case 0x502310:goto L502310;
case 0x502313:c.instructions+=8;goto B502313;
case 0x502318:c.instructions+=7;goto B502318;
case 0x50231a:c.instructions+=6;goto B50231a;
case 0x50231b:c.instructions+=5;goto B50231b;
case 0x50231c:c.instructions+=4;goto B50231c;
case 0x50231d:c.instructions+=3;goto B50231d;
case 0x50231e:c.instructions+=2;goto B50231e;
case 0x502326:c.instructions+=1;goto B502326;
case 0x502328:goto L502328;
case 0x50232e:c.instructions+=4;goto B50232e;
case 0x502332:c.instructions+=3;goto B502332;
case 0x502335:c.instructions+=2;goto B502335;
case 0x502339:c.instructions+=1;goto B502339;
case 0x502340:goto L502340;
case 0x502342:c.instructions+=3;goto B502342;
case 0x502344:c.instructions+=2;goto B502344;
case 0x502346:c.instructions+=1;goto B502346;
case 0x502348:goto L502348;
case 0x50234b:c.instructions+=1;goto B50234b;
case 0x502350:goto L502350;
case 0x502352:c.instructions+=3;goto B502352;
case 0x502354:c.instructions+=2;goto B502354;
case 0x502356:c.instructions+=1;goto B502356;
case 0x502358:goto L502358;
case 0x50235b:c.instructions+=1;goto B50235b;
case 0x502360:goto L502360;
case 0x502362:c.instructions+=1;goto B502362;
case 0x502364:goto L502364;
case 0x502365:c.instructions+=3;goto B502365;
case 0x502368:c.instructions+=2;goto B502368;
case 0x50236a:c.instructions+=1;goto B50236a;
case 0x50236c:goto L50236c;
case 0x50236d:c.instructions+=3;goto B50236d;
case 0x502370:c.instructions+=2;goto B502370;
case 0x502372:c.instructions+=1;goto B502372;
case 0x502374:goto L502374;
case 0x502378:goto L502378;
case 0x50237c:c.instructions+=7;goto B50237c;
case 0x502382:c.instructions+=6;goto B502382;
case 0x502383:c.instructions+=5;goto B502383;
case 0x502389:c.instructions+=4;goto B502389;
case 0x50238b:c.instructions+=3;goto B50238b;
case 0x50238f:c.instructions+=2;goto B50238f;
case 0x502393:c.instructions+=1;goto B502393;
case 0x502395:goto L502395;
case 0x502396:c.instructions+=6;goto B502396;
case 0x502397:c.instructions+=5;goto B502397;
case 0x502398:c.instructions+=4;goto B502398;
case 0x50239a:c.instructions+=3;goto B50239a;
case 0x50239b:c.instructions+=2;goto B50239b;
case 0x50239e:c.instructions+=1;goto B50239e;
case 0x50239f:goto L50239f;
case 0x5023a0:c.instructions+=6;goto B5023a0;
case 0x5023a1:c.instructions+=5;goto B5023a1;
case 0x5023a2:c.instructions+=4;goto B5023a2;
case 0x5023a4:c.instructions+=3;goto B5023a4;
case 0x5023a5:c.instructions+=2;goto B5023a5;
case 0x5023a8:c.instructions+=1;goto B5023a8;
case 0x5023b0:goto L5023b0;
case 0x5023b4:c.instructions+=3;goto B5023b4;
case 0x5023b5:c.instructions+=2;goto B5023b5;
case 0x5023b6:c.instructions+=1;goto B5023b6;
case 0x5023bb:goto L5023bb;
case 0x5023bd:c.instructions+=3;goto B5023bd;
case 0x5023c0:c.instructions+=2;goto B5023c0;
case 0x5023c2:c.instructions+=1;goto B5023c2;
case 0x5023c4:goto L5023c4;
case 0x5023c9:goto L5023c9;
case 0x5023cb:c.instructions+=1;goto B5023cb;
case 0x5023cd:goto L5023cd;
case 0x5023d0:c.instructions+=3;goto B5023d0;
case 0x5023d1:c.instructions+=2;goto B5023d1;
case 0x5023d5:c.instructions+=1;goto B5023d5;
case 0x5023da:goto L5023da;
case 0x5023dd:c.instructions+=3;goto B5023dd;
case 0x5023de:c.instructions+=2;goto B5023de;
case 0x5023e2:c.instructions+=1;goto B5023e2;
case 0x5023e7:goto L5023e7;
case 0x5023e9:c.instructions+=2;goto B5023e9;
case 0x5023ea:c.instructions+=1;goto B5023ea;
case 0x5023f0:goto L5023f0;
case 0x5023f1:c.instructions+=3;goto B5023f1;
case 0x5023f3:c.instructions+=2;goto B5023f3;
case 0x5023f8:c.instructions+=1;goto B5023f8;
case 0x5023fd:goto L5023fd;
case 0x5023ff:c.instructions+=1;goto B5023ff;
case 0x502401:goto L502401;
case 0x502406:c.instructions+=1;goto B502406;
case 0x50240b:goto L50240b;
case 0x50240d:c.instructions+=1;goto B50240d;
case 0x50240f:goto L50240f;
case 0x502412:c.instructions+=1;goto B502412;
case 0x502414:goto L502414;
case 0x50241a:goto L50241a;
case 0x50241b:c.instructions+=1;goto B50241b;
case 0x502420:goto L502420;
case 0x502422:c.instructions+=2;goto B502422;
case 0x502424:c.instructions+=1;goto B502424;
case 0x502426:goto L502426;
case 0x502429:c.instructions+=1;goto B502429;
case 0x50242b:goto L50242b;
case 0x50242d:c.instructions+=1;goto B50242d;
case 0x50242e:goto L50242e;
case 0x502430:c.instructions+=1;goto B502430;
case 0x502440:goto L502440;
case 0x502442:c.instructions+=2;goto B502442;
case 0x502444:c.instructions+=1;goto B502444;
case 0x502446:goto L502446;
case 0x502449:c.instructions+=1;goto B502449;
case 0x50244b:goto L50244b;
case 0x50244d:c.instructions+=4;goto B50244d;
case 0x502450:c.instructions+=3;goto B502450;
case 0x502453:c.instructions+=2;goto B502453;
case 0x502455:c.instructions+=1;goto B502455;
case 0x502456:goto L502456;
case 0x502458:c.instructions+=1;goto B502458;
case 0x502460:goto L502460;
case 0x502462:c.instructions+=2;goto B502462;
case 0x502464:c.instructions+=1;goto B502464;
case 0x502466:goto L502466;
case 0x502469:c.instructions+=1;goto B502469;
case 0x50246b:goto L50246b;
case 0x50246e:c.instructions+=1;goto B50246e;
case 0x502470:goto L502470;
case 0x502473:c.instructions+=2;goto B502473;
case 0x502475:c.instructions+=1;goto B502475;
case 0x502477:goto L502477;
case 0x502479:c.instructions+=4;goto B502479;
case 0x50247c:c.instructions+=3;goto B50247c;
case 0x50247f:c.instructions+=2;goto B50247f;
case 0x502481:c.instructions+=1;goto B502481;
case 0x502482:goto L502482;
case 0x502484:c.instructions+=1;goto B502484;
case 0x502490:goto L502490;
case 0x502492:c.instructions+=2;goto B502492;
case 0x502494:c.instructions+=1;goto B502494;
case 0x502496:goto L502496;
case 0x502499:c.instructions+=1;goto B502499;
case 0x50249b:goto L50249b;
case 0x50249d:c.instructions+=4;goto B50249d;
case 0x5024a0:c.instructions+=3;goto B5024a0;
case 0x5024a3:c.instructions+=2;goto B5024a3;
case 0x5024a5:c.instructions+=1;goto B5024a5;
case 0x5024a6:goto L5024a6;
case 0x5024a8:c.instructions+=1;goto B5024a8;
case 0x5024b0:goto L5024b0;
case 0x5024b2:c.instructions+=2;goto B5024b2;
case 0x5024b4:c.instructions+=1;goto B5024b4;
case 0x5024b6:goto L5024b6;
case 0x5024b9:c.instructions+=1;goto B5024b9;
case 0x5024bb:goto L5024bb;
case 0x5024bd:c.instructions+=4;goto B5024bd;
case 0x5024c0:c.instructions+=3;goto B5024c0;
case 0x5024c3:c.instructions+=2;goto B5024c3;
case 0x5024c5:c.instructions+=1;goto B5024c5;
case 0x5024c6:goto L5024c6;
case 0x5024c8:c.instructions+=1;goto B5024c8;
case 0x5024d0:goto L5024d0;
case 0x5024d2:c.instructions+=2;goto B5024d2;
case 0x5024d4:c.instructions+=1;goto B5024d4;
case 0x5024d6:goto L5024d6;
case 0x5024d9:c.instructions+=1;goto B5024d9;
case 0x5024db:goto L5024db;
case 0x5024de:c.instructions+=1;goto B5024de;
case 0x5024e0:goto L5024e0;
case 0x5024e5:c.instructions+=1;goto B5024e5;
case 0x5024e6:goto L5024e6;
case 0x5024e8:c.instructions+=1;goto B5024e8;
case 0x5024f0:goto L5024f0;
case 0x5024f4:c.instructions+=1;goto B5024f4;
case 0x502500:goto L502500;
case 0x502504:c.instructions+=2;goto B502504;
case 0x502507:c.instructions+=1;goto B502507;
case 0x502509:goto L502509;
case 0x502510:goto L502510;
case 0x502515:c.instructions+=1;goto B502515;
case 0x502516:goto L502516;
case 0x50251b:c.instructions+=1;goto B50251b;
case 0x50251c:goto L50251c;
case 0x502521:c.instructions+=1;goto B502521;
case 0x502522:goto L502522;
case 0x502527:c.instructions+=1;goto B502527;
case 0x502528:goto L502528;
case 0x50252a:c.instructions+=1;goto B50252a;
case 0x502540:goto L502540;
case 0x502543:c.instructions+=6;goto B502543;
case 0x502544:c.instructions+=5;goto B502544;
case 0x50254a:c.instructions+=4;goto B50254a;
case 0x50254c:c.instructions+=3;goto B50254c;
case 0x50254d:c.instructions+=2;goto B50254d;
case 0x502552:c.instructions+=1;goto B502552;
case 0x502554:goto L502554;
case 0x50255a:c.instructions+=2;goto B50255a;
case 0x50255c:c.instructions+=1;goto B50255c;
case 0x50255e:goto L50255e;
case 0x502564:c.instructions+=2;goto B502564;
case 0x50256a:c.instructions+=1;goto B50256a;
case 0x50256c:goto L50256c;
case 0x502572:c.instructions+=1;goto B502572;
case 0x502574:goto L502574;
case 0x502579:goto L502579;
case 0x50257d:c.instructions+=2;goto B50257d;
case 0x502580:c.instructions+=1;goto B502580;
case 0x502582:goto L502582;
case 0x502583:c.instructions+=2;goto B502583;
case 0x502585:c.instructions+=1;goto B502585;
case 0x502587:goto L502587;
case 0x502589:goto L502589;
case 0x50258a:c.instructions+=3;goto B50258a;
case 0x50258d:c.instructions+=2;goto B50258d;
case 0x50258e:c.instructions+=1;goto B50258e;
case 0x502591:goto L502591;
case 0x502594:c.instructions+=1;goto B502594;
case 0x502596:goto L502596;
case 0x502597:c.instructions+=1;goto B502597;
case 0x502599:goto L502599;
case 0x50259a:c.instructions+=3;goto B50259a;
case 0x50259d:c.instructions+=2;goto B50259d;
case 0x50259e:c.instructions+=1;goto B50259e;
case 0x5025b0:goto L5025b0;
case 0x5025b2:c.instructions+=76;goto B5025b2;
case 0x5025b4:c.instructions+=75;goto B5025b4;
case 0x5025bb:c.instructions+=74;goto B5025bb;
case 0x5025be:c.instructions+=73;goto B5025be;
case 0x5025c1:c.instructions+=72;goto B5025c1;
case 0x5025c4:c.instructions+=71;goto B5025c4;
case 0x5025cb:c.instructions+=70;goto B5025cb;
case 0x5025ce:c.instructions+=69;goto B5025ce;
case 0x5025d1:c.instructions+=68;goto B5025d1;
case 0x5025d4:c.instructions+=67;goto B5025d4;
case 0x5025d9:c.instructions+=66;goto B5025d9;
case 0x5025dc:c.instructions+=65;goto B5025dc;
case 0x5025df:c.instructions+=64;goto B5025df;
case 0x5025e0:c.instructions+=63;goto B5025e0;
case 0x5025e1:c.instructions+=62;goto B5025e1;
case 0x5025e6:c.instructions+=61;goto B5025e6;
case 0x5025e9:c.instructions+=60;goto B5025e9;
case 0x5025ec:c.instructions+=59;goto B5025ec;
case 0x5025ef:c.instructions+=58;goto B5025ef;
case 0x5025f2:c.instructions+=57;goto B5025f2;
case 0x5025f5:c.instructions+=56;goto B5025f5;
case 0x5025f8:c.instructions+=55;goto B5025f8;
case 0x5025fb:c.instructions+=54;goto B5025fb;
case 0x5025fe:c.instructions+=53;goto B5025fe;
case 0x502601:c.instructions+=52;goto B502601;
case 0x502604:c.instructions+=51;goto B502604;
case 0x502607:c.instructions+=50;goto B502607;
case 0x50260e:c.instructions+=49;goto B50260e;
case 0x502615:c.instructions+=48;goto B502615;
case 0x502617:c.instructions+=47;goto B502617;
case 0x50261a:c.instructions+=46;goto B50261a;
case 0x50261d:c.instructions+=45;goto B50261d;
case 0x502623:c.instructions+=44;goto B502623;
case 0x502626:c.instructions+=43;goto B502626;
case 0x502629:c.instructions+=42;goto B502629;
case 0x50262c:c.instructions+=41;goto B50262c;
case 0x502632:c.instructions+=40;goto B502632;
case 0x502635:c.instructions+=39;goto B502635;
case 0x502638:c.instructions+=38;goto B502638;
case 0x50263b:c.instructions+=37;goto B50263b;
case 0x50263e:c.instructions+=36;goto B50263e;
case 0x502641:c.instructions+=35;goto B502641;
case 0x502644:c.instructions+=34;goto B502644;
case 0x502647:c.instructions+=33;goto B502647;
case 0x50264a:c.instructions+=32;goto B50264a;
case 0x50264d:c.instructions+=31;goto B50264d;
case 0x502650:c.instructions+=30;goto B502650;
case 0x502653:c.instructions+=29;goto B502653;
case 0x502656:c.instructions+=28;goto B502656;
case 0x502659:c.instructions+=27;goto B502659;
case 0x50265c:c.instructions+=26;goto B50265c;
case 0x50265f:c.instructions+=25;goto B50265f;
case 0x502669:c.instructions+=24;goto B502669;
case 0x50266e:c.instructions+=23;goto B50266e;
case 0x502671:c.instructions+=22;goto B502671;
case 0x502677:c.instructions+=21;goto B502677;
case 0x50267d:c.instructions+=20;goto B50267d;
case 0x50267e:c.instructions+=19;goto B50267e;
case 0x502684:c.instructions+=18;goto B502684;
case 0x50268a:c.instructions+=17;goto B50268a;
case 0x502690:c.instructions+=16;goto B502690;
case 0x502696:c.instructions+=15;goto B502696;
case 0x50269c:c.instructions+=14;goto B50269c;
case 0x5026a2:c.instructions+=13;goto B5026a2;
case 0x5026a8:c.instructions+=12;goto B5026a8;
case 0x5026ae:c.instructions+=11;goto B5026ae;
case 0x5026b4:c.instructions+=10;goto B5026b4;
case 0x5026ba:c.instructions+=9;goto B5026ba;
case 0x5026c0:c.instructions+=8;goto B5026c0;
case 0x5026c6:c.instructions+=7;goto B5026c6;
case 0x5026cc:c.instructions+=6;goto B5026cc;
case 0x5026d2:c.instructions+=5;goto B5026d2;
case 0x5026d8:c.instructions+=4;goto B5026d8;
case 0x5026de:c.instructions+=3;goto B5026de;
case 0x5026e8:c.instructions+=2;goto B5026e8;
case 0x5026e9:c.instructions+=1;goto B5026e9;
case 0x5026f0:goto L5026f0;
case 0x5026f2:c.instructions+=2;goto B5026f2;
case 0x5026f5:c.instructions+=1;goto B5026f5;
case 0x5026f7:goto L5026f7;
case 0x5026fe:c.instructions+=1;goto B5026fe;
case 0x5026ff:goto L5026ff;
case 0x502702:c.instructions+=2;goto B502702;
case 0x502707:c.instructions+=1;goto B502707;
case 0x502710:goto L502710;
case 0x502712:c.instructions+=2;goto B502712;
case 0x502715:c.instructions+=1;goto B502715;
case 0x502717:goto L502717;
case 0x50271e:c.instructions+=1;goto B50271e;
case 0x50271f:goto L50271f;
case 0x502722:c.instructions+=2;goto B502722;
case 0x502727:c.instructions+=1;goto B502727;
case 0x502730:goto L502730;
case 0x502732:c.instructions+=2;goto B502732;
case 0x502735:c.instructions+=1;goto B502735;
case 0x502737:goto L502737;
case 0x50273e:c.instructions+=1;goto B50273e;
case 0x50273f:goto L50273f;
case 0x502742:c.instructions+=2;goto B502742;
case 0x502747:c.instructions+=1;goto B502747;
case 0x502750:goto L502750;
case 0x502752:c.instructions+=2;goto B502752;
case 0x502755:c.instructions+=1;goto B502755;
case 0x502757:goto L502757;
case 0x50275e:c.instructions+=1;goto B50275e;
case 0x50275f:goto L50275f;
case 0x502763:c.instructions+=2;goto B502763;
case 0x502767:c.instructions+=1;goto B502767;
case 0x502770:goto L502770;
case 0x502776:c.instructions+=1;goto B502776;
case 0x502780:goto L502780;
case 0x502786:c.instructions+=1;goto B502786;
case 0x502790:goto L502790;
case 0x502796:c.instructions+=2;goto B502796;
case 0x50279c:c.instructions+=1;goto B50279c;
case 0x5027a0:goto L5027a0;
case 0x5027a6:c.instructions+=2;goto B5027a6;
case 0x5027ac:c.instructions+=1;goto B5027ac;
case 0x5027b0:goto L5027b0;
case 0x5027b1:c.instructions+=3;goto B5027b1;
case 0x5027b7:c.instructions+=2;goto B5027b7;
case 0x5027ba:c.instructions+=1;goto B5027ba;
case 0x5027bc:goto L5027bc;
case 0x5027be:c.instructions+=2;goto B5027be;
case 0x5027bf:c.instructions+=1;goto B5027bf;
case 0x5027c0:goto L5027c0;
case 0x5027c1:c.instructions+=5;goto B5027c1;
case 0x5027c8:c.instructions+=4;goto B5027c8;
case 0x5027ca:c.instructions+=3;goto B5027ca;
case 0x5027cc:c.instructions+=2;goto B5027cc;
case 0x5027ce:c.instructions+=1;goto B5027ce;
case 0x5027d0:goto L5027d0;
case 0x5027d2:c.instructions+=1;goto B5027d2;
case 0x5027d4:goto L5027d4;
case 0x5027d6:goto L5027d6;
case 0x5027db:goto L5027db;
case 0x5027e2:c.instructions+=2;goto B5027e2;
case 0x5027e4:c.instructions+=1;goto B5027e4;
case 0x5027e6:goto L5027e6;
case 0x5027e8:c.instructions+=2;goto B5027e8;
case 0x5027ed:c.instructions+=1;goto B5027ed;
case 0x5027ef:goto L5027ef;
case 0x5027f1:goto L5027f1;
case 0x5027f2:goto L5027f2;
case 0x5027f9:c.instructions+=2;goto B5027f9;
case 0x5027fb:c.instructions+=1;goto B5027fb;
case 0x5027fd:goto L5027fd;
case 0x5027ff:c.instructions+=2;goto B5027ff;
case 0x502804:c.instructions+=1;goto B502804;
case 0x502806:goto L502806;
case 0x502808:goto L502808;
case 0x502809:goto L502809;
case 0x502810:c.instructions+=3;goto B502810;
case 0x502812:c.instructions+=2;goto B502812;
case 0x502813:c.instructions+=1;goto B502813;
case 0x502815:goto L502815;
case 0x502817:c.instructions+=2;goto B502817;
case 0x50281c:c.instructions+=1;goto B50281c;
case 0x50281e:goto L50281e;
case 0x502820:goto L502820;
case 0x502821:goto L502821;
case 0x502828:c.instructions+=2;goto B502828;
case 0x50282a:c.instructions+=1;goto B50282a;
case 0x50282c:goto L50282c;
case 0x50282f:c.instructions+=1;goto B50282f;
case 0x502831:goto L502831;
case 0x502833:c.instructions+=2;goto B502833;
case 0x502834:c.instructions+=1;goto B502834;
case 0x502835:goto L502835;
case 0x502837:c.instructions+=2;goto B502837;
case 0x502838:c.instructions+=1;goto B502838;
case 0x502840:goto L502840;
case 0x502841:c.instructions+=3;goto B502841;
case 0x502847:c.instructions+=2;goto B502847;
case 0x50284a:c.instructions+=1;goto B50284a;
case 0x50284c:goto L50284c;
case 0x50284e:c.instructions+=2;goto B50284e;
case 0x50284f:c.instructions+=1;goto B50284f;
case 0x502850:goto L502850;
case 0x502851:c.instructions+=5;goto B502851;
case 0x502858:c.instructions+=4;goto B502858;
case 0x50285a:c.instructions+=3;goto B50285a;
case 0x50285c:c.instructions+=2;goto B50285c;
case 0x50285e:c.instructions+=1;goto B50285e;
case 0x502860:goto L502860;
case 0x502862:c.instructions+=1;goto B502862;
case 0x502864:goto L502864;
case 0x502866:goto L502866;
case 0x50286b:goto L50286b;
case 0x502872:c.instructions+=2;goto B502872;
case 0x502874:c.instructions+=1;goto B502874;
case 0x502876:goto L502876;
case 0x502878:c.instructions+=2;goto B502878;
case 0x50287d:c.instructions+=1;goto B50287d;
case 0x50287f:goto L50287f;
case 0x502881:goto L502881;
case 0x502882:goto L502882;
case 0x502889:c.instructions+=2;goto B502889;
case 0x50288b:c.instructions+=1;goto B50288b;
case 0x50288d:goto L50288d;
case 0x50288f:c.instructions+=2;goto B50288f;
case 0x502894:c.instructions+=1;goto B502894;
case 0x502896:goto L502896;
case 0x502898:goto L502898;
case 0x502899:goto L502899;
case 0x5028a0:c.instructions+=3;goto B5028a0;
case 0x5028a2:c.instructions+=2;goto B5028a2;
case 0x5028a3:c.instructions+=1;goto B5028a3;
case 0x5028a5:goto L5028a5;
case 0x5028a7:c.instructions+=2;goto B5028a7;
case 0x5028ac:c.instructions+=1;goto B5028ac;
case 0x5028ae:goto L5028ae;
case 0x5028b0:goto L5028b0;
case 0x5028b1:goto L5028b1;
case 0x5028b8:c.instructions+=2;goto B5028b8;
case 0x5028ba:c.instructions+=1;goto B5028ba;
case 0x5028bc:goto L5028bc;
case 0x5028bf:c.instructions+=1;goto B5028bf;
case 0x5028c1:goto L5028c1;
case 0x5028c6:c.instructions+=2;goto B5028c6;
case 0x5028c7:c.instructions+=1;goto B5028c7;
case 0x5028c8:goto L5028c8;
case 0x5028ca:c.instructions+=2;goto B5028ca;
case 0x5028cb:c.instructions+=1;goto B5028cb;
case 0x5028d0:goto L5028d0;
case 0x5028da:c.instructions+=2;goto B5028da;
case 0x5028e1:c.instructions+=1;goto B5028e1;
case 0x5028f0:goto L5028f0;
case 0x5028f2:c.instructions+=2;goto B5028f2;
case 0x5028f5:c.instructions+=1;goto B5028f5;
case 0x5028f7:goto L5028f7;
case 0x5028fd:c.instructions+=1;goto B5028fd;
case 0x5028fe:goto L5028fe;
case 0x502901:c.instructions+=2;goto B502901;
case 0x502905:c.instructions+=1;goto B502905;
case 0x502910:goto L502910;
case 0x502912:c.instructions+=2;goto B502912;
case 0x502915:c.instructions+=1;goto B502915;
case 0x502917:goto L502917;
case 0x50291d:c.instructions+=1;goto B50291d;
case 0x50291e:goto L50291e;
case 0x502921:c.instructions+=2;goto B502921;
case 0x502925:c.instructions+=1;goto B502925;
case 0x502930:goto L502930;
case 0x502932:c.instructions+=2;goto B502932;
case 0x502935:c.instructions+=1;goto B502935;
case 0x502937:goto L502937;
case 0x50293b:c.instructions+=2;goto B50293b;
case 0x502941:c.instructions+=1;goto B502941;
case 0x502944:goto L502944;
case 0x502947:c.instructions+=3;goto B502947;
case 0x50294b:c.instructions+=2;goto B50294b;
case 0x50294f:c.instructions+=1;goto B50294f;
case 0x502960:goto L502960;
case 0x502962:c.instructions+=2;goto B502962;
case 0x502965:c.instructions+=1;goto B502965;
case 0x502967:goto L502967;
case 0x50296b:c.instructions+=2;goto B50296b;
case 0x502971:c.instructions+=1;goto B502971;
case 0x502974:goto L502974;
case 0x502977:c.instructions+=3;goto B502977;
case 0x50297b:c.instructions+=2;goto B50297b;
case 0x50297f:c.instructions+=1;goto B50297f;
case 0x502990:goto L502990;
case 0x502992:c.instructions+=2;goto B502992;
case 0x502995:c.instructions+=1;goto B502995;
case 0x502997:goto L502997;
case 0x50299b:c.instructions+=2;goto B50299b;
case 0x5029a1:c.instructions+=1;goto B5029a1;
case 0x5029a4:goto L5029a4;
case 0x5029a7:c.instructions+=3;goto B5029a7;
case 0x5029ab:c.instructions+=2;goto B5029ab;
case 0x5029af:c.instructions+=1;goto B5029af;
case 0x5029c0:goto L5029c0;
case 0x5029c2:c.instructions+=2;goto B5029c2;
case 0x5029c5:c.instructions+=1;goto B5029c5;
case 0x5029c7:goto L5029c7;
case 0x5029cb:c.instructions+=2;goto B5029cb;
case 0x5029d1:c.instructions+=1;goto B5029d1;
case 0x5029d4:goto L5029d4;
case 0x5029d8:c.instructions+=3;goto B5029d8;
case 0x5029dc:c.instructions+=2;goto B5029dc;
case 0x5029df:c.instructions+=1;goto B5029df;
case 0x5029f0:goto L5029f0;
case 0x5029f2:c.instructions+=2;goto B5029f2;
case 0x5029f5:c.instructions+=1;goto B5029f5;
case 0x5029f7:goto L5029f7;
case 0x5029fb:c.instructions+=2;goto B5029fb;
case 0x502a01:c.instructions+=1;goto B502a01;
case 0x502a04:goto L502a04;
case 0x502a07:c.instructions+=3;goto B502a07;
case 0x502a0b:c.instructions+=2;goto B502a0b;
case 0x502a0f:c.instructions+=1;goto B502a0f;
case 0x502a20:goto L502a20;
case 0x502a24:c.instructions+=2;goto B502a24;
case 0x502a2a:c.instructions+=1;goto B502a2a;
case 0x502a30:goto L502a30;
case 0x502a34:c.instructions+=2;goto B502a34;
case 0x502a3a:c.instructions+=1;goto B502a3a;
case 0x502a40:goto L502a40;
case 0x502a44:c.instructions+=3;goto B502a44;
case 0x502a48:c.instructions+=2;goto B502a48;
case 0x502a4c:c.instructions+=1;goto B502a4c;
case 0x502a50:goto L502a50;
case 0x502a51:c.instructions+=8;goto B502a51;
case 0x502a55:c.instructions+=7;goto B502a55;
case 0x502a56:c.instructions+=6;goto B502a56;
case 0x502a57:c.instructions+=5;goto B502a57;
case 0x502a5b:c.instructions+=4;goto B502a5b;
case 0x502a5c:c.instructions+=3;goto B502a5c;
case 0x502a60:c.instructions+=2;goto B502a60;
case 0x502a62:c.instructions+=1;goto B502a62;
case 0x502a65:goto L502a65;
case 0x502a69:c.instructions+=2;goto B502a69;
case 0x502a6b:c.instructions+=1;goto B502a6b;
case 0x502a6d:goto L502a6d;
case 0x502a71:c.instructions+=2;goto B502a71;
case 0x502a73:c.instructions+=1;goto B502a73;
case 0x502a75:goto L502a75;
case 0x502a78:c.instructions+=2;goto B502a78;
case 0x502a7a:c.instructions+=1;goto B502a7a;
case 0x502a7c:goto L502a7c;
case 0x502a7d:c.instructions+=3;goto B502a7d;
case 0x502a80:c.instructions+=2;goto B502a80;
case 0x502a86:c.instructions+=1;goto B502a86;
case 0x502a88:goto L502a88;
case 0x502a89:c.instructions+=5;goto B502a89;
case 0x502a8a:c.instructions+=4;goto B502a8a;
case 0x502a8b:c.instructions+=3;goto B502a8b;
case 0x502a8d:c.instructions+=2;goto B502a8d;
case 0x502a8e:c.instructions+=1;goto B502a8e;
case 0x502a91:goto L502a91;
case 0x502a92:c.instructions+=5;goto B502a92;
case 0x502a93:c.instructions+=4;goto B502a93;
case 0x502a94:c.instructions+=3;goto B502a94;
case 0x502a97:c.instructions+=2;goto B502a97;
case 0x502a98:c.instructions+=1;goto B502a98;
case 0x502aa0:goto L502aa0;
case 0x502aa1:c.instructions+=10;goto B502aa1;
case 0x502aa5:c.instructions+=9;goto B502aa5;
case 0x502aa6:c.instructions+=8;goto B502aa6;
case 0x502aa7:c.instructions+=7;goto B502aa7;
case 0x502aa8:c.instructions+=6;goto B502aa8;
case 0x502aac:c.instructions+=5;goto B502aac;
case 0x502aae:c.instructions+=4;goto B502aae;
case 0x502ab3:c.instructions+=3;goto B502ab3;
case 0x502ab6:c.instructions+=2;goto B502ab6;
case 0x502abb:c.instructions+=1;goto B502abb;
case 0x502ac0:goto L502ac0;
case 0x502ac4:c.instructions+=2;goto B502ac4;
case 0x502ac6:c.instructions+=1;goto B502ac6;
case 0x502ac8:goto L502ac8;
case 0x502acc:c.instructions+=2;goto B502acc;
case 0x502ace:c.instructions+=1;goto B502ace;
case 0x502ad0:goto L502ad0;
case 0x502ad2:c.instructions+=2;goto B502ad2;
case 0x502ad4:c.instructions+=1;goto B502ad4;
case 0x502ad6:goto L502ad6;
case 0x502ad8:c.instructions+=1;goto B502ad8;
case 0x502ada:goto L502ada;
case 0x502adc:c.instructions+=1;goto B502adc;
case 0x502ade:goto L502ade;
case 0x502ae2:c.instructions+=2;goto B502ae2;
case 0x502ae4:c.instructions+=1;goto B502ae4;
case 0x502ae6:goto L502ae6;
case 0x502aea:c.instructions+=2;goto B502aea;
case 0x502aec:c.instructions+=1;goto B502aec;
case 0x502aee:goto L502aee;
case 0x502af1:c.instructions+=2;goto B502af1;
case 0x502af3:c.instructions+=1;goto B502af3;
case 0x502af5:goto L502af5;
case 0x502af7:c.instructions+=1;goto B502af7;
case 0x502af9:goto L502af9;
case 0x502afb:c.instructions+=1;goto B502afb;
case 0x502afd:goto L502afd;
case 0x502b01:c.instructions+=2;goto B502b01;
case 0x502b03:c.instructions+=1;goto B502b03;
case 0x502b05:goto L502b05;
case 0x502b09:c.instructions+=2;goto B502b09;
case 0x502b0b:c.instructions+=1;goto B502b0b;
case 0x502b0d:goto L502b0d;
case 0x502b10:c.instructions+=2;goto B502b10;
case 0x502b12:c.instructions+=1;goto B502b12;
case 0x502b14:goto L502b14;
case 0x502b16:c.instructions+=1;goto B502b16;
case 0x502b18:goto L502b18;
case 0x502b1a:c.instructions+=1;goto B502b1a;
case 0x502b1c:goto L502b1c;
case 0x502b20:c.instructions+=2;goto B502b20;
case 0x502b22:c.instructions+=1;goto B502b22;
case 0x502b24:goto L502b24;
case 0x502b28:c.instructions+=2;goto B502b28;
case 0x502b2a:c.instructions+=1;goto B502b2a;
case 0x502b2c:goto L502b2c;
case 0x502b2f:c.instructions+=2;goto B502b2f;
case 0x502b31:c.instructions+=1;goto B502b31;
case 0x502b33:goto L502b33;
case 0x502b35:c.instructions+=1;goto B502b35;
case 0x502b37:goto L502b37;
case 0x502b39:c.instructions+=1;goto B502b39;
case 0x502b3b:goto L502b3b;
case 0x502b3f:c.instructions+=2;goto B502b3f;
case 0x502b41:c.instructions+=1;goto B502b41;
case 0x502b43:goto L502b43;
case 0x502b47:c.instructions+=2;goto B502b47;
case 0x502b49:c.instructions+=1;goto B502b49;
case 0x502b4b:goto L502b4b;
case 0x502b4e:c.instructions+=2;goto B502b4e;
case 0x502b50:c.instructions+=1;goto B502b50;
case 0x502b52:goto L502b52;
case 0x502b54:c.instructions+=1;goto B502b54;
case 0x502b56:goto L502b56;
case 0x502b58:c.instructions+=1;goto B502b58;
case 0x502b5a:goto L502b5a;
case 0x502b5e:c.instructions+=2;goto B502b5e;
case 0x502b60:c.instructions+=1;goto B502b60;
case 0x502b62:goto L502b62;
case 0x502b66:c.instructions+=2;goto B502b66;
case 0x502b68:c.instructions+=1;goto B502b68;
case 0x502b6a:goto L502b6a;
case 0x502b6d:c.instructions+=2;goto B502b6d;
case 0x502b6f:c.instructions+=1;goto B502b6f;
case 0x502b71:goto L502b71;
case 0x502b73:c.instructions+=1;goto B502b73;
case 0x502b75:goto L502b75;
case 0x502b77:c.instructions+=1;goto B502b77;
case 0x502b79:goto L502b79;
case 0x502b7d:c.instructions+=2;goto B502b7d;
case 0x502b7f:c.instructions+=1;goto B502b7f;
case 0x502b81:goto L502b81;
case 0x502b85:c.instructions+=2;goto B502b85;
case 0x502b87:c.instructions+=1;goto B502b87;
case 0x502b89:goto L502b89;
case 0x502b8c:c.instructions+=2;goto B502b8c;
case 0x502b8e:c.instructions+=1;goto B502b8e;
case 0x502b90:goto L502b90;
case 0x502b92:c.instructions+=1;goto B502b92;
case 0x502b94:goto L502b94;
case 0x502b96:c.instructions+=1;goto B502b96;
case 0x502b98:goto L502b98;
case 0x502b9c:c.instructions+=2;goto B502b9c;
case 0x502b9e:c.instructions+=1;goto B502b9e;
case 0x502ba0:goto L502ba0;
case 0x502ba4:c.instructions+=2;goto B502ba4;
case 0x502ba6:c.instructions+=1;goto B502ba6;
case 0x502ba8:goto L502ba8;
case 0x502bab:c.instructions+=2;goto B502bab;
case 0x502bad:c.instructions+=1;goto B502bad;
case 0x502baf:goto L502baf;
case 0x502bb1:c.instructions+=1;goto B502bb1;
case 0x502bb3:goto L502bb3;
case 0x502bb5:c.instructions+=1;goto B502bb5;
case 0x502bb7:goto L502bb7;
case 0x502bbb:c.instructions+=2;goto B502bbb;
case 0x502bbd:c.instructions+=1;goto B502bbd;
case 0x502bbf:goto L502bbf;
case 0x502bc3:c.instructions+=2;goto B502bc3;
case 0x502bc5:c.instructions+=1;goto B502bc5;
case 0x502bc7:goto L502bc7;
case 0x502bca:c.instructions+=2;goto B502bca;
case 0x502bcc:c.instructions+=1;goto B502bcc;
case 0x502bce:goto L502bce;
case 0x502bd0:c.instructions+=1;goto B502bd0;
case 0x502bd2:goto L502bd2;
case 0x502bd4:c.instructions+=1;goto B502bd4;
case 0x502bd6:goto L502bd6;
case 0x502bda:c.instructions+=2;goto B502bda;
case 0x502bdc:c.instructions+=1;goto B502bdc;
case 0x502bde:goto L502bde;
case 0x502be2:c.instructions+=2;goto B502be2;
case 0x502be4:c.instructions+=1;goto B502be4;
case 0x502be6:goto L502be6;
case 0x502be9:c.instructions+=2;goto B502be9;
case 0x502beb:c.instructions+=1;goto B502beb;
case 0x502bed:goto L502bed;
case 0x502bef:c.instructions+=1;goto B502bef;
case 0x502bf1:goto L502bf1;
case 0x502bf3:c.instructions+=1;goto B502bf3;
case 0x502bf5:goto L502bf5;
case 0x502bf8:c.instructions+=2;goto B502bf8;
case 0x502bf9:c.instructions+=1;goto B502bf9;
case 0x502bff:goto L502bff;
case 0x502c01:c.instructions+=1;goto B502c01;
case 0x502c03:goto L502c03;
case 0x502c04:c.instructions+=1;goto B502c04;
case 0x502c09:goto L502c09;
case 0x502c0c:c.instructions+=2;goto B502c0c;
case 0x502c0e:c.instructions+=1;goto B502c0e;
case 0x502c10:goto L502c10;
case 0x502c12:c.instructions+=1;goto B502c12;
case 0x502c14:goto L502c14;
case 0x502c1a:c.instructions+=1;goto B502c1a;
case 0x502c1c:goto L502c1c;
case 0x502c22:goto L502c22;
case 0x502c28:c.instructions+=3;goto B502c28;
case 0x502c2e:c.instructions+=2;goto B502c2e;
case 0x502c34:c.instructions+=1;goto B502c34;
case 0x502c39:goto L502c39;
case 0x502c3a:c.instructions+=4;goto B502c3a;
case 0x502c3b:c.instructions+=3;goto B502c3b;
case 0x502c3c:c.instructions+=2;goto B502c3c;
case 0x502c3d:c.instructions+=1;goto B502c3d;
case 0x502c40:goto L502c40;
case 0x502c41:c.instructions+=5;goto B502c41;
case 0x502c43:c.instructions+=4;goto B502c43;
case 0x502c44:c.instructions+=3;goto B502c44;
case 0x502c45:c.instructions+=2;goto B502c45;
case 0x502c46:c.instructions+=1;goto B502c46;
case 0x502c50:goto L502c50;
case 0x502c54:c.instructions+=7;goto B502c54;
case 0x502c55:c.instructions+=6;goto B502c55;
case 0x502c56:c.instructions+=5;goto B502c56;
case 0x502c57:c.instructions+=4;goto B502c57;
case 0x502c5b:c.instructions+=3;goto B502c5b;
case 0x502c5d:c.instructions+=2;goto B502c5d;
case 0x502c60:c.instructions+=1;goto B502c60;
case 0x502c65:goto L502c65;
case 0x502c69:c.instructions+=2;goto B502c69;
case 0x502c6b:c.instructions+=1;goto B502c6b;
case 0x502c6d:goto L502c6d;
case 0x502c71:c.instructions+=2;goto B502c71;
case 0x502c73:c.instructions+=1;goto B502c73;
case 0x502c75:goto L502c75;
case 0x502c77:c.instructions+=2;goto B502c77;
case 0x502c79:c.instructions+=1;goto B502c79;
case 0x502c7b:goto L502c7b;
case 0x502c7d:goto L502c7d;
case 0x502c81:c.instructions+=2;goto B502c81;
case 0x502c83:c.instructions+=1;goto B502c83;
case 0x502c85:goto L502c85;
case 0x502c89:c.instructions+=2;goto B502c89;
case 0x502c8b:c.instructions+=1;goto B502c8b;
case 0x502c8d:goto L502c8d;
case 0x502c90:c.instructions+=2;goto B502c90;
case 0x502c92:c.instructions+=1;goto B502c92;
case 0x502c94:goto L502c94;
case 0x502c96:goto L502c96;
case 0x502c9a:c.instructions+=2;goto B502c9a;
case 0x502c9c:c.instructions+=1;goto B502c9c;
case 0x502c9e:goto L502c9e;
case 0x502ca2:c.instructions+=2;goto B502ca2;
case 0x502ca4:c.instructions+=1;goto B502ca4;
case 0x502ca6:goto L502ca6;
case 0x502ca9:c.instructions+=2;goto B502ca9;
case 0x502cab:c.instructions+=1;goto B502cab;
case 0x502cad:goto L502cad;
case 0x502caf:goto L502caf;
case 0x502cb3:c.instructions+=2;goto B502cb3;
case 0x502cb5:c.instructions+=1;goto B502cb5;
case 0x502cb7:goto L502cb7;
case 0x502cbb:c.instructions+=2;goto B502cbb;
case 0x502cbd:c.instructions+=1;goto B502cbd;
case 0x502cbf:goto L502cbf;
case 0x502cc2:c.instructions+=2;goto B502cc2;
case 0x502cc4:c.instructions+=1;goto B502cc4;
case 0x502cc6:goto L502cc6;
case 0x502cc8:goto L502cc8;
case 0x502ccc:c.instructions+=2;goto B502ccc;
case 0x502cce:c.instructions+=1;goto B502cce;
case 0x502cd0:goto L502cd0;
case 0x502cd4:c.instructions+=2;goto B502cd4;
case 0x502cd6:c.instructions+=1;goto B502cd6;
case 0x502cd8:goto L502cd8;
case 0x502cdb:c.instructions+=2;goto B502cdb;
case 0x502cdd:c.instructions+=1;goto B502cdd;
case 0x502cdf:goto L502cdf;
case 0x502ce1:goto L502ce1;
case 0x502ce5:c.instructions+=2;goto B502ce5;
case 0x502ce7:c.instructions+=1;goto B502ce7;
case 0x502ce9:goto L502ce9;
case 0x502ced:c.instructions+=2;goto B502ced;
case 0x502cef:c.instructions+=1;goto B502cef;
case 0x502cf1:goto L502cf1;
case 0x502cf4:c.instructions+=2;goto B502cf4;
case 0x502cf6:c.instructions+=1;goto B502cf6;
case 0x502cf8:goto L502cf8;
case 0x502cfa:goto L502cfa;
case 0x502cfe:c.instructions+=2;goto B502cfe;
case 0x502d00:c.instructions+=1;goto B502d00;
case 0x502d02:goto L502d02;
case 0x502d06:c.instructions+=2;goto B502d06;
case 0x502d08:c.instructions+=1;goto B502d08;
case 0x502d0a:goto L502d0a;
case 0x502d0d:c.instructions+=2;goto B502d0d;
case 0x502d0f:c.instructions+=1;goto B502d0f;
case 0x502d11:goto L502d11;
case 0x502d13:goto L502d13;
case 0x502d17:c.instructions+=2;goto B502d17;
case 0x502d19:c.instructions+=1;goto B502d19;
case 0x502d1b:goto L502d1b;
case 0x502d1f:c.instructions+=2;goto B502d1f;
case 0x502d21:c.instructions+=1;goto B502d21;
case 0x502d23:goto L502d23;
case 0x502d26:c.instructions+=2;goto B502d26;
case 0x502d28:c.instructions+=1;goto B502d28;
case 0x502d2a:goto L502d2a;
case 0x502d2c:goto L502d2c;
case 0x502d30:c.instructions+=2;goto B502d30;
case 0x502d32:c.instructions+=1;goto B502d32;
case 0x502d34:goto L502d34;
case 0x502d38:c.instructions+=2;goto B502d38;
case 0x502d3a:c.instructions+=1;goto B502d3a;
case 0x502d3c:goto L502d3c;
case 0x502d3f:c.instructions+=2;goto B502d3f;
case 0x502d41:c.instructions+=1;goto B502d41;
case 0x502d43:goto L502d43;
case 0x502d45:goto L502d45;
case 0x502d49:c.instructions+=2;goto B502d49;
case 0x502d4b:c.instructions+=1;goto B502d4b;
case 0x502d4d:goto L502d4d;
case 0x502d51:c.instructions+=2;goto B502d51;
case 0x502d53:c.instructions+=1;goto B502d53;
case 0x502d55:goto L502d55;
case 0x502d58:c.instructions+=2;goto B502d58;
case 0x502d5a:c.instructions+=1;goto B502d5a;
case 0x502d5c:goto L502d5c;
case 0x502d5e:goto L502d5e;
case 0x502d61:c.instructions+=2;goto B502d61;
case 0x502d62:c.instructions+=1;goto B502d62;
case 0x502d68:goto L502d68;
case 0x502d6a:c.instructions+=1;goto B502d6a;
case 0x502d6c:goto L502d6c;
case 0x502d6d:c.instructions+=1;goto B502d6d;
case 0x502d72:goto L502d72;
case 0x502d75:c.instructions+=2;goto B502d75;
case 0x502d77:c.instructions+=1;goto B502d77;
case 0x502d79:goto L502d79;
case 0x502d7b:c.instructions+=1;goto B502d7b;
case 0x502d7d:goto L502d7d;
case 0x502d83:c.instructions+=4;goto B502d83;
case 0x502d84:c.instructions+=3;goto B502d84;
case 0x502d85:c.instructions+=2;goto B502d85;
case 0x502d86:c.instructions+=1;goto B502d86;
case 0x502d89:goto L502d89;
case 0x502d8f:c.instructions+=4;goto B502d8f;
case 0x502d90:c.instructions+=3;goto B502d90;
case 0x502d91:c.instructions+=2;goto B502d91;
case 0x502d92:c.instructions+=1;goto B502d92;
case 0x502d95:goto L502d95;
case 0x502d96:c.instructions+=4;goto B502d96;
case 0x502d98:c.instructions+=3;goto B502d98;
case 0x502d99:c.instructions+=2;goto B502d99;
case 0x502d9a:c.instructions+=1;goto B502d9a;
case 0x502da0:goto L502da0;
case 0x502da5:c.instructions+=2;goto B502da5;
case 0x502da9:c.instructions+=1;goto B502da9;
case 0x502dab:goto L502dab;
case 0x502daf:c.instructions+=5;goto B502daf;
case 0x502db2:c.instructions+=4;goto B502db2;
case 0x502db8:c.instructions+=3;goto B502db8;
case 0x502dba:c.instructions+=2;goto B502dba;
case 0x502dbd:c.instructions+=1;goto B502dbd;
case 0x502dbf:goto L502dbf;
case 0x502dc4:c.instructions+=1;goto B502dc4;
case 0x502dc7:goto L502dc7;
case 0x502dc9:c.instructions+=1;goto B502dc9;
case 0x502dcc:goto L502dcc;
case 0x502dcf:c.instructions+=2;goto B502dcf;
case 0x502dd1:c.instructions+=1;goto B502dd1;
case 0x502dd3:goto L502dd3;
case 0x502dd8:c.instructions+=1;goto B502dd8;
case 0x502dda:goto L502dda;
case 0x502ddc:c.instructions+=4;goto B502ddc;
case 0x502de0:c.instructions+=3;goto B502de0;
case 0x502de3:c.instructions+=2;goto B502de3;
case 0x502de6:c.instructions+=1;goto B502de6;
case 0x502de9:goto L502de9;
case 0x502deb:c.instructions+=1;goto B502deb;
case 0x502df0:goto L502df0;
case 0x502df4:c.instructions+=10;goto B502df4;
case 0x502df8:c.instructions+=9;goto B502df8;
case 0x502df9:c.instructions+=8;goto B502df9;
case 0x502dfd:c.instructions+=7;goto B502dfd;
case 0x502dfe:c.instructions+=6;goto B502dfe;
case 0x502dff:c.instructions+=5;goto B502dff;
case 0x502e00:c.instructions+=4;goto B502e00;
case 0x502e01:c.instructions+=3;goto B502e01;
case 0x502e02:c.instructions+=2;goto B502e02;
case 0x502e03:c.instructions+=1;goto B502e03;
case 0x502e08:goto L502e08;
case 0x502e0a:c.instructions+=3;goto B502e0a;
case 0x502e0c:c.instructions+=2;goto B502e0c;
case 0x502e11:c.instructions+=1;goto B502e11;
case 0x502e13:goto L502e13;
case 0x502e17:c.instructions+=5;goto B502e17;
case 0x502e1b:c.instructions+=4;goto B502e1b;
case 0x502e1c:c.instructions+=3;goto B502e1c;
case 0x502e1d:c.instructions+=2;goto B502e1d;
case 0x502e1e:c.instructions+=1;goto B502e1e;
case 0x502e23:goto L502e23;
case 0x502e25:c.instructions+=1;goto B502e25;
case 0x502e2b:goto L502e2b;
case 0x502e30:goto L502e30;
case 0x502e32:goto L502e32;
case 0x502e37:c.instructions+=1;goto B502e37;
case 0x502e39:goto L502e39;
case 0x502e3a:c.instructions+=2;goto B502e3a;
case 0x502e3f:c.instructions+=1;goto B502e3f;
case 0x502e41:goto L502e41;
case 0x502e45:c.instructions+=5;goto B502e45;
case 0x502e46:c.instructions+=4;goto B502e46;
case 0x502e47:c.instructions+=3;goto B502e47;
case 0x502e48:c.instructions+=2;goto B502e48;
case 0x502e49:c.instructions+=1;goto B502e49;
case 0x502e4c:goto L502e4c;
case 0x502e4f:c.instructions+=2;goto B502e4f;
case 0x502e51:c.instructions+=1;goto B502e51;
case 0x502e57:goto L502e57;
case 0x502e5b:c.instructions+=3;goto B502e5b;
case 0x502e5e:c.instructions+=2;goto B502e5e;
case 0x502e62:c.instructions+=1;goto B502e62;
case 0x502e64:goto L502e64;
case 0x502e67:c.instructions+=2;goto B502e67;
case 0x502e69:c.instructions+=1;goto B502e69;
case 0x502e6f:goto L502e6f;
case 0x502e74:c.instructions+=1;goto B502e74;
case 0x502e76:goto L502e76;
case 0x502e79:c.instructions+=5;goto B502e79;
case 0x502e7f:c.instructions+=4;goto B502e7f;
case 0x502e85:c.instructions+=3;goto B502e85;
case 0x502e87:c.instructions+=2;goto B502e87;
case 0x502e8a:c.instructions+=1;goto B502e8a;
case 0x502e8c:goto L502e8c;
case 0x502e90:c.instructions+=5;goto B502e90;
case 0x502e91:c.instructions+=4;goto B502e91;
case 0x502e92:c.instructions+=3;goto B502e92;
case 0x502e93:c.instructions+=2;goto B502e93;
case 0x502e94:c.instructions+=1;goto B502e94;
case 0x502e97:goto L502e97;
case 0x502e9d:c.instructions+=4;goto B502e9d;
case 0x502ea3:c.instructions+=3;goto B502ea3;
case 0x502ea5:c.instructions+=2;goto B502ea5;
case 0x502ea8:c.instructions+=1;goto B502ea8;
case 0x502eaa:goto L502eaa;
case 0x502eaf:c.instructions+=4;goto B502eaf;
case 0x502eb3:c.instructions+=3;goto B502eb3;
case 0x502eb6:c.instructions+=2;goto B502eb6;
case 0x502eb9:c.instructions+=1;goto B502eb9;
case 0x502ebc:goto L502ebc;
case 0x502ebf:c.instructions+=2;goto B502ebf;
case 0x502ec4:c.instructions+=1;goto B502ec4;
case 0x502ec6:goto L502ec6;
case 0x502ecc:c.instructions+=7;goto B502ecc;
case 0x502ed0:c.instructions+=6;goto B502ed0;
case 0x502ed1:c.instructions+=5;goto B502ed1;
case 0x502ed4:c.instructions+=4;goto B502ed4;
case 0x502ed5:c.instructions+=3;goto B502ed5;
case 0x502ed6:c.instructions+=2;goto B502ed6;
case 0x502ed7:c.instructions+=1;goto B502ed7;
case 0x502eda:goto L502eda;
case 0x502edd:c.instructions+=2;goto B502edd;
case 0x502edf:c.instructions+=1;goto B502edf;
case 0x502ee1:goto L502ee1;
case 0x502ee6:c.instructions+=1;goto B502ee6;
case 0x502ee8:goto L502ee8;
case 0x502eeb:goto L502eeb;
case 0x502eef:c.instructions+=5;goto B502eef;
case 0x502ef0:c.instructions+=4;goto B502ef0;
case 0x502ef1:c.instructions+=3;goto B502ef1;
case 0x502ef2:c.instructions+=2;goto B502ef2;
case 0x502ef3:c.instructions+=1;goto B502ef3;
case 0x502f00:goto L502f00;
case 0x502f03:c.instructions+=5;goto B502f03;
case 0x502f04:c.instructions+=4;goto B502f04;
case 0x502f05:c.instructions+=3;goto B502f05;
case 0x502f07:c.instructions+=2;goto B502f07;
case 0x502f09:c.instructions+=1;goto B502f09;
case 0x502f10:goto L502f10;
case 0x502f15:c.instructions+=1;goto B502f15;
case 0x502f17:goto L502f17;
case 0x502f1b:c.instructions+=6;goto B502f1b;
case 0x502f1d:c.instructions+=5;goto B502f1d;
case 0x502f21:c.instructions+=4;goto B502f21;
case 0x502f22:c.instructions+=3;goto B502f22;
case 0x502f26:c.instructions+=2;goto B502f26;
case 0x502f2a:c.instructions+=1;goto B502f2a;
case 0x502f2f:goto L502f2f;
case 0x502f30:c.instructions+=2;goto B502f30;
case 0x502f36:c.instructions+=1;goto B502f36;
case 0x502f38:goto L502f38;
case 0x502f39:c.instructions+=3;goto B502f39;
case 0x502f3a:c.instructions+=2;goto B502f3a;
case 0x502f3d:c.instructions+=1;goto B502f3d;
case 0x502f40:goto L502f40;
case 0x502f41:c.instructions+=8;goto B502f41;
case 0x502f42:c.instructions+=7;goto B502f42;
case 0x502f46:c.instructions+=6;goto B502f46;
case 0x502f47:c.instructions+=5;goto B502f47;
case 0x502f49:c.instructions+=4;goto B502f49;
case 0x502f4b:c.instructions+=3;goto B502f4b;
case 0x502f4c:c.instructions+=2;goto B502f4c;
case 0x502f4e:c.instructions+=1;goto B502f4e;
case 0x502f50:goto L502f50;
case 0x502f51:c.instructions+=1;goto B502f51;
case 0x502f56:goto L502f56;
case 0x502f59:c.instructions+=2;goto B502f59;
case 0x502f5b:c.instructions+=1;goto B502f5b;
case 0x502f5d:goto L502f5d;
case 0x502f5f:goto L502f5f;
case 0x502f61:c.instructions+=3;goto B502f61;
case 0x502f63:c.instructions+=2;goto B502f63;
case 0x502f68:c.instructions+=1;goto B502f68;
case 0x502f6a:goto L502f6a;
case 0x502f6c:goto L502f6c;
case 0x502f6e:goto L502f6e;
case 0x502f70:c.instructions+=3;goto B502f70;
case 0x502f71:c.instructions+=2;goto B502f71;
case 0x502f72:c.instructions+=1;goto B502f72;
case 0x502f77:goto L502f77;
case 0x502f7a:c.instructions+=6;goto B502f7a;
case 0x502f7b:c.instructions+=5;goto B502f7b;
case 0x502f7f:c.instructions+=4;goto B502f7f;
case 0x502f80:c.instructions+=3;goto B502f80;
case 0x502f81:c.instructions+=2;goto B502f81;
case 0x502f82:c.instructions+=1;goto B502f82;
case 0x502f85:goto L502f85;
case 0x502f89:c.instructions+=3;goto B502f89;
case 0x502f8b:c.instructions+=2;goto B502f8b;
case 0x502f90:c.instructions+=1;goto B502f90;
case 0x502f92:goto L502f92;
case 0x502f97:goto L502f97;
case 0x502f9c:goto L502f9c;
case 0x502f9e:c.instructions+=1;goto B502f9e;
case 0x502fa0:goto L502fa0;
case 0x502fa5:c.instructions+=1;goto B502fa5;
case 0x502faa:goto L502faa;
case 0x502fac:c.instructions+=5;goto B502fac;
case 0x502fad:c.instructions+=4;goto B502fad;
case 0x502faf:c.instructions+=3;goto B502faf;
case 0x502fb4:c.instructions+=2;goto B502fb4;
case 0x502fb6:c.instructions+=1;goto B502fb6;
case 0x502fb7:goto L502fb7;
case 0x502fb9:goto L502fb9;
case 0x502fbe:goto L502fbe;
case 0x502fc1:c.instructions+=6;goto B502fc1;
case 0x502fc2:c.instructions+=5;goto B502fc2;
case 0x502fc6:c.instructions+=4;goto B502fc6;
case 0x502fc7:c.instructions+=3;goto B502fc7;
case 0x502fc8:c.instructions+=2;goto B502fc8;
case 0x502fc9:c.instructions+=1;goto B502fc9;
case 0x502fd0:goto L502fd0;
case 0x502fd2:c.instructions+=1;goto B502fd2;
case 0x502fe0:goto L502fe0;
case 0x502fe3:c.instructions+=1;goto B502fe3;
case 0x502ff0:goto L502ff0;
case 0x502ff4:c.instructions+=3;goto B502ff4;
case 0x502ff6:c.instructions+=2;goto B502ff6;
case 0x502ffb:c.instructions+=1;goto B502ffb;
case 0x502ffd:goto L502ffd;
default:missing_instruction(c.pc);}
B502003:L502003:{c.instructions+=2;NFSU2_TR(0x502003);
__builtin_memmove((R+24),(R+0),4);
}
B502005:{NFSU2_TR(0x502005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50200aull));
TAIL_STATIC(0x43db50u,43d);
}
B50200a:L50200a:{c.instructions+=10;NFSU2_TR(0x50200a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B50200c:{NFSU2_TR(0x50200c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50200f:{NFSU2_TR(0x50200f);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B502011:{NFSU2_TR(0x502011);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B502013:{NFSU2_TR(0x502013);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffeull))));
}
B502016:{NFSU2_TR(0x502016);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x28ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502019:{NFSU2_TR(0x502019);
__builtin_memmove((R+0),(R+24),4);
}
B50201b:{NFSU2_TR(0x50201b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50201c:{NFSU2_TR(0x50201c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50201d:{NFSU2_TR(0x50201d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020c0:L5020c0:{c.instructions+=4;NFSU2_TR(0x5020c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5020c4:{NFSU2_TR(0x5020c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff5ull))));
}
B5020c7:{NFSU2_TR(0x5020c7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5020ca:{NFSU2_TR(0x5020ca);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L502145;}}
}
B5020cc:L5020cc:{c.instructions+=1;NFSU2_TR(0x5020cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50214cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5020d3:L5020d3:{c.instructions+=2;NFSU2_TR(0x5020d3);
w4(R+0,u32(0x1ull));
}
B5020d8:{NFSU2_TR(0x5020d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020d9:L5020d9:{c.instructions+=2;NFSU2_TR(0x5020d9);
w4(R+0,u32(0x2ull));
}
B5020de:{NFSU2_TR(0x5020de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020df:L5020df:{c.instructions+=2;NFSU2_TR(0x5020df);
w4(R+0,u32(0xbull));
}
B5020e4:{NFSU2_TR(0x5020e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020e5:L5020e5:{c.instructions+=2;NFSU2_TR(0x5020e5);
w4(R+0,u32(0x20ull));
}
B5020ea:{NFSU2_TR(0x5020ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020eb:L5020eb:{c.instructions+=2;NFSU2_TR(0x5020eb);
w4(R+0,u32(0x7ull));
}
B5020f0:{NFSU2_TR(0x5020f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020f1:L5020f1:{c.instructions+=2;NFSU2_TR(0x5020f1);
w4(R+0,u32(0x9ull));
}
B5020f6:{NFSU2_TR(0x5020f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020f7:L5020f7:{c.instructions+=2;NFSU2_TR(0x5020f7);
w4(R+0,u32(0xcull));
}
B5020fc:{NFSU2_TR(0x5020fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5020fd:L5020fd:{c.instructions+=2;NFSU2_TR(0x5020fd);
w4(R+0,u32(0xeull));
}
B502102:{NFSU2_TR(0x502102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502103:L502103:{c.instructions+=2;NFSU2_TR(0x502103);
w4(R+0,u32(0xfull));
}
B502108:{NFSU2_TR(0x502108);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502109:L502109:{c.instructions+=2;NFSU2_TR(0x502109);
w4(R+0,u32(0x10ull));
}
B50210e:{NFSU2_TR(0x50210e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50210f:L50210f:{c.instructions+=2;NFSU2_TR(0x50210f);
w4(R+0,u32(0x1full));
}
B502114:{NFSU2_TR(0x502114);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502115:L502115:{c.instructions+=2;NFSU2_TR(0x502115);
w4(R+0,u32(0x9aull));
}
B50211a:{NFSU2_TR(0x50211a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50211b:L50211b:{c.instructions+=2;NFSU2_TR(0x50211b);
w4(R+0,u32(0x1dull));
}
B502120:{NFSU2_TR(0x502120);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502121:L502121:{c.instructions+=2;NFSU2_TR(0x502121);
w4(R+0,u32(0x6ull));
}
B502126:{NFSU2_TR(0x502126);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502127:L502127:{c.instructions+=2;NFSU2_TR(0x502127);
w4(R+0,u32(0x22ull));
}
B50212c:{NFSU2_TR(0x50212c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50212d:L50212d:{c.instructions+=2;NFSU2_TR(0x50212d);
w4(R+0,u32(0x9cull));
}
B502132:{NFSU2_TR(0x502132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502133:L502133:{c.instructions+=2;NFSU2_TR(0x502133);
w4(R+0,u32(0x9full));
}
B502138:{NFSU2_TR(0x502138);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502139:L502139:{c.instructions+=2;NFSU2_TR(0x502139);
w4(R+0,u32(0xa1ull));
}
B50213e:{NFSU2_TR(0x50213e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50213f:L50213f:{c.instructions+=2;NFSU2_TR(0x50213f);
w4(R+0,u32(0xa0ull));
}
B502144:{NFSU2_TR(0x502144);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502145:L502145:{c.instructions+=2;NFSU2_TR(0x502145);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502148:{NFSU2_TR(0x502148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021c0:L5021c0:{c.instructions+=3;NFSU2_TR(0x5021c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5021c4:{NFSU2_TR(0x5021c4);
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
B5021c7:{NFSU2_TR(0x5021c7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50220c;}}
}
B5021c9:L5021c9:{c.instructions+=1;NFSU2_TR(0x5021c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x502210ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5021d0:L5021d0:{c.instructions+=2;NFSU2_TR(0x5021d0);
w4(R+0,u32(0x6ull));
}
B5021d5:{NFSU2_TR(0x5021d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021d6:L5021d6:{c.instructions+=2;NFSU2_TR(0x5021d6);
w4(R+0,u32(0x5ull));
}
B5021db:{NFSU2_TR(0x5021db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021dc:L5021dc:{c.instructions+=2;NFSU2_TR(0x5021dc);
w4(R+0,u32(0x4ull));
}
B5021e1:{NFSU2_TR(0x5021e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021e2:L5021e2:{c.instructions+=2;NFSU2_TR(0x5021e2);
w4(R+0,u32(0x1ull));
}
B5021e7:{NFSU2_TR(0x5021e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021e8:L5021e8:{c.instructions+=2;NFSU2_TR(0x5021e8);
w4(R+0,u32(0x9ull));
}
B5021ed:{NFSU2_TR(0x5021ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021ee:L5021ee:{c.instructions+=2;NFSU2_TR(0x5021ee);
w4(R+0,u32(0x3ull));
}
B5021f3:{NFSU2_TR(0x5021f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021f4:L5021f4:{c.instructions+=2;NFSU2_TR(0x5021f4);
w4(R+0,u32(0x8ull));
}
B5021f9:{NFSU2_TR(0x5021f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5021fa:L5021fa:{c.instructions+=2;NFSU2_TR(0x5021fa);
w4(R+0,u32(0x2ull));
}
B5021ff:{NFSU2_TR(0x5021ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502200:L502200:{c.instructions+=2;NFSU2_TR(0x502200);
w4(R+0,u32(0x7ull));
}
B502205:{NFSU2_TR(0x502205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502206:L502206:{c.instructions+=2;NFSU2_TR(0x502206);
w4(R+0,u32(0xaull));
}
B50220b:{NFSU2_TR(0x50220b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50220c:L50220c:{c.instructions+=2;NFSU2_TR(0x50220c);
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
B50220e:{NFSU2_TR(0x50220e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502240:L502240:{c.instructions+=4;NFSU2_TR(0x502240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502244:{NFSU2_TR(0x502244);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B502245:{NFSU2_TR(0x502245);
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
B502248:{NFSU2_TR(0x502248);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50228a;}}
}
B50224a:L50224a:{c.instructions+=1;NFSU2_TR(0x50224a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x502290ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B502251:L502251:{c.instructions+=2;NFSU2_TR(0x502251);
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
B502253:{NFSU2_TR(0x502253);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502254:L502254:{c.instructions+=2;NFSU2_TR(0x502254);
w4(R+0,u32(0x1ull));
}
B502259:{NFSU2_TR(0x502259);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50225a:L50225a:{c.instructions+=2;NFSU2_TR(0x50225a);
w4(R+0,u32(0x2ull));
}
B50225f:{NFSU2_TR(0x50225f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502260:L502260:{c.instructions+=2;NFSU2_TR(0x502260);
w4(R+0,u32(0x3ull));
}
B502265:{NFSU2_TR(0x502265);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502266:L502266:{c.instructions+=2;NFSU2_TR(0x502266);
w4(R+0,u32(0x4ull));
}
B50226b:{NFSU2_TR(0x50226b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50226c:L50226c:{c.instructions+=2;NFSU2_TR(0x50226c);
w4(R+0,u32(0x5ull));
}
B502271:{NFSU2_TR(0x502271);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502272:L502272:{c.instructions+=2;NFSU2_TR(0x502272);
w4(R+0,u32(0x6ull));
}
B502277:{NFSU2_TR(0x502277);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502278:L502278:{c.instructions+=2;NFSU2_TR(0x502278);
w4(R+0,u32(0x7ull));
}
B50227d:{NFSU2_TR(0x50227d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50227e:L50227e:{c.instructions+=2;NFSU2_TR(0x50227e);
w4(R+0,u32(0x8ull));
}
B502283:{NFSU2_TR(0x502283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502284:L502284:{c.instructions+=2;NFSU2_TR(0x502284);
w4(R+0,u32(0x9ull));
}
B502289:{NFSU2_TR(0x502289);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50228a:L50228a:{c.instructions+=2;NFSU2_TR(0x50228a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50228d:{NFSU2_TR(0x50228d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5022c0:L5022c0:{c.instructions+=3;NFSU2_TR(0x5022c0);
__builtin_memmove((R+0),gp(0x838464),1);
}
B5022c5:{NFSU2_TR(0x5022c5);
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
B5022c7:{NFSU2_TR(0x5022c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5022ee;}}
}
B5022c9:L5022c9:{c.instructions+=1;NFSU2_TR(0x5022c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5022ceull));
TAIL_STATIC(0x570a30u,570);
}
B5022ce:L5022ce:{c.instructions+=3;NFSU2_TR(0x5022ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5022d0:{NFSU2_TR(0x5022d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5022d4:{NFSU2_TR(0x5022d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5022f1;}}
}
B5022d6:L5022d6:{c.instructions+=2;NFSU2_TR(0x5022d6);
w4(R+0,u32(0x7f7c48ull));
}
B5022db:{NFSU2_TR(0x5022db);
{goto L5022e0;}
}
B5022e0:L5022e0:{c.instructions+=2;NFSU2_TR(0x5022e0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5022e2:{NFSU2_TR(0x5022e2);
if(r1(R+518)){{goto L502307;}}
}
B5022e4:L5022e4:{c.instructions+=3;NFSU2_TR(0x5022e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5022e7:{NFSU2_TR(0x5022e7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7f7c50ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f7c50ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7f7c50ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5022ec:{NFSU2_TR(0x5022ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5022e0u);}goto L5022e0;}}
}
B5022ee:L5022ee:{c.instructions+=2;NFSU2_TR(0x5022ee);
w1(R+0,u8(0x1ull));
}
B5022f0:{NFSU2_TR(0x5022f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5022f1:L5022f1:{c.instructions+=1;NFSU2_TR(0x5022f1);
w4(R+0,u32(0x7f7c50ull));
}
B5022f6:L5022f6:{c.instructions+=2;NFSU2_TR(0x5022f6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5022f8:{NFSU2_TR(0x5022f8);
if(r1(R+518)){{goto L502307;}}
}
B5022fa:L5022fa:{c.instructions+=3;NFSU2_TR(0x5022fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5022fd:{NFSU2_TR(0x5022fd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7f7c58ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f7c58ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7f7c58ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502302:{NFSU2_TR(0x502302);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5022f6u);}goto L5022f6;}}
}
B502304:L502304:{c.instructions+=2;NFSU2_TR(0x502304);
w1(R+0,u8(0x1ull));
}
B502306:{NFSU2_TR(0x502306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502307:L502307:{c.instructions+=2;NFSU2_TR(0x502307);
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
B502309:{NFSU2_TR(0x502309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502310:L502310:{c.instructions+=9;NFSU2_TR(0x502310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B502313:{NFSU2_TR(0x502313);
__builtin_memmove((R+0),gp(0x8383fc),4);
}
B502318:{NFSU2_TR(0x502318);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50231a:{NFSU2_TR(0x50231a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50231b:{NFSU2_TR(0x50231b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50231c:{NFSU2_TR(0x50231c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50231d:{NFSU2_TR(0x50231d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50231e:{NFSU2_TR(0x50231e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B502326:{NFSU2_TR(0x502326);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502395;}}
}
B502328:L502328:{c.instructions+=5;NFSU2_TR(0x502328);
__builtin_memmove((R+24),gp(0x8383f8),4);
}
B50232e:{NFSU2_TR(0x50232e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B502332:{NFSU2_TR(0x502332);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B502335:{NFSU2_TR(0x502335);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502339:{NFSU2_TR(0x502339);
__builtin_memmove((R+16),(R+16),4);
}
B502340:L502340:{c.instructions+=4;NFSU2_TR(0x502340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B502342:{NFSU2_TR(0x502342);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B502344:{NFSU2_TR(0x502344);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502346:{NFSU2_TR(0x502346);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L502378;}}
}
B502348:L502348:{c.instructions+=2;NFSU2_TR(0x502348);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B50234b:{NFSU2_TR(0x50234b);
{goto L502350;}
}
B502350:L502350:{c.instructions+=4;NFSU2_TR(0x502350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B502352:{NFSU2_TR(0x502352);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B502354:{NFSU2_TR(0x502354);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502356:{NFSU2_TR(0x502356);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L50236c;}}
}
B502358:L502358:{c.instructions+=2;NFSU2_TR(0x502358);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50235b:{NFSU2_TR(0x50235b);
{goto L502360;}
}
B502360:L502360:{c.instructions+=2;NFSU2_TR(0x502360);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+20))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B502362:{NFSU2_TR(0x502362);
if(r1(R+518)){{goto L50239f;}}
}
B502364:L502364:{c.instructions+=4;NFSU2_TR(0x502364);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B502365:{NFSU2_TR(0x502365);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B502368:{NFSU2_TR(0x502368);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50236a:{NFSU2_TR(0x50236a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502360u);}goto L502360;}}
}
B50236c:L50236c:{c.instructions+=4;NFSU2_TR(0x50236c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B50236d:{NFSU2_TR(0x50236d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B502370:{NFSU2_TR(0x502370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B502372:{NFSU2_TR(0x502372);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502350u);}goto L502350;}}
}
B502374:L502374:{c.instructions+=1;NFSU2_TR(0x502374);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B502378:L502378:{c.instructions+=8;NFSU2_TR(0x502378);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50237c:{NFSU2_TR(0x50237c);
__builtin_memmove((R+4),gp(0x8383fc),4);
}
B502382:{NFSU2_TR(0x502382);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B502383:{NFSU2_TR(0x502383);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x17cull))));
}
B502389:{NFSU2_TR(0x502389);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50238b:{NFSU2_TR(0x50238b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50238f:{NFSU2_TR(0x50238f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502393:{NFSU2_TR(0x502393);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502340u);}goto L502340;}}
}
B502395:L502395:{c.instructions+=7;NFSU2_TR(0x502395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502396:{NFSU2_TR(0x502396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502397:{NFSU2_TR(0x502397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502398:{NFSU2_TR(0x502398);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B50239a:{NFSU2_TR(0x50239a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50239b:{NFSU2_TR(0x50239b);
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
B50239e:{NFSU2_TR(0x50239e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50239f:L50239f:{c.instructions+=7;NFSU2_TR(0x50239f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5023a0:{NFSU2_TR(0x5023a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5023a1:{NFSU2_TR(0x5023a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5023a2:{NFSU2_TR(0x5023a2);
w1(R+0,u8(0x1ull));
}
B5023a4:{NFSU2_TR(0x5023a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5023a5:{NFSU2_TR(0x5023a5);
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
B5023a8:{NFSU2_TR(0x5023a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5023b0:L5023b0:{c.instructions+=4;NFSU2_TR(0x5023b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5023b4:{NFSU2_TR(0x5023b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5023b5:{NFSU2_TR(0x5023b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5023b6:{NFSU2_TR(0x5023b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5023bbull));
TAIL_STATIC(0x500250u,500);
}
B5023bb:L5023bb:{c.instructions+=4;NFSU2_TR(0x5023bb);
__builtin_memmove((R+24),(R+0),4);
}
B5023bd:{NFSU2_TR(0x5023bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5023c0:{NFSU2_TR(0x5023c0);
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
B5023c2:{NFSU2_TR(0x5023c2);
if(r1(R+518)){{goto L5023e7;}}
}
B5023c4:L5023c4:{c.instructions+=1;NFSU2_TR(0x5023c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5023c9ull));
TAIL_STATIC(0x570a30u,570);
}
B5023c9:L5023c9:{c.instructions+=2;NFSU2_TR(0x5023c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5023cb:{NFSU2_TR(0x5023cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5023da;}}
}
B5023cd:L5023cd:{c.instructions+=4;NFSU2_TR(0x5023cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5023d0:{NFSU2_TR(0x5023d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5023d1:{NFSU2_TR(0x5023d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5023d5:{NFSU2_TR(0x5023d5);
TAIL_STATIC(0x4ffc90u,4ff);
}
B5023da:L5023da:{c.instructions+=4;NFSU2_TR(0x5023da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5023dd:{NFSU2_TR(0x5023dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5023de:{NFSU2_TR(0x5023de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5023e2:{NFSU2_TR(0x5023e2);
TAIL_STATIC(0x4ffc90u,4ff);
}
B5023e7:L5023e7:{c.instructions+=3;NFSU2_TR(0x5023e7);
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
B5023e9:{NFSU2_TR(0x5023e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5023ea:{NFSU2_TR(0x5023ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5023f0:L5023f0:{c.instructions+=4;NFSU2_TR(0x5023f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5023f1:{NFSU2_TR(0x5023f1);
__builtin_memmove((R+24),(R+4),4);
}
B5023f3:{NFSU2_TR(0x5023f3);
w4(R+4,u32(0x827e88ull));
}
B5023f8:{NFSU2_TR(0x5023f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5023fdull));
TAIL_STATIC(0x430560u,430);
}
B5023fd:L5023fd:{c.instructions+=2;NFSU2_TR(0x5023fd);
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
B5023ff:{NFSU2_TR(0x5023ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50241a;}}
}
B502401:L502401:{c.instructions+=2;NFSU2_TR(0x502401);
w4(R+4,u32(0x827e88ull));
}
B502406:{NFSU2_TR(0x502406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50240bull));
TAIL_STATIC(0x430550u,430);
}
B50240b:L50240b:{c.instructions+=2;NFSU2_TR(0x50240b);
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
B50240d:{NFSU2_TR(0x50240d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50241a;}}
}
B50240f:L50240f:{c.instructions+=2;NFSU2_TR(0x50240f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B502412:{NFSU2_TR(0x502412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50241a;}}
}
B502414:L502414:{c.instructions+=1;NFSU2_TR(0x502414);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B50241a:L50241a:{c.instructions+=2;NFSU2_TR(0x50241a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50241b:{NFSU2_TR(0x50241b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502420:L502420:{c.instructions+=3;NFSU2_TR(0x502420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502422:{NFSU2_TR(0x502422);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502424:{NFSU2_TR(0x502424);
if(r1(R+518)){{goto L50242e;}}
}
B502426:L502426:{c.instructions+=2;NFSU2_TR(0x502426);
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
B502429:{NFSU2_TR(0x502429);
if(r1(R+518)){{goto L50242e;}}
}
B50242b:L50242b:{c.instructions+=2;NFSU2_TR(0x50242b);
w1(R+0,u8(0x1ull));
}
B50242d:{NFSU2_TR(0x50242d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50242e:L50242e:{c.instructions+=2;NFSU2_TR(0x50242e);
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
B502430:{NFSU2_TR(0x502430);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502440:L502440:{c.instructions+=3;NFSU2_TR(0x502440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502442:{NFSU2_TR(0x502442);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502444:{NFSU2_TR(0x502444);
if(r1(R+518)){{goto L502456;}}
}
B502446:L502446:{c.instructions+=2;NFSU2_TR(0x502446);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502449:{NFSU2_TR(0x502449);
if(r1(R+518)){{goto L502456;}}
}
B50244b:L50244b:{c.instructions+=5;NFSU2_TR(0x50244b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50244d:{NFSU2_TR(0x50244d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502450:{NFSU2_TR(0x502450);
__builtin_memmove((R+4),(R+518),1);
}
B502453:{NFSU2_TR(0x502453);
__builtin_memmove((R+0),(R+4),1);
}
B502455:{NFSU2_TR(0x502455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502456:L502456:{c.instructions+=2;NFSU2_TR(0x502456);
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
B502458:{NFSU2_TR(0x502458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502460:L502460:{c.instructions+=3;NFSU2_TR(0x502460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502462:{NFSU2_TR(0x502462);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502464:{NFSU2_TR(0x502464);
if(r1(R+518)){{goto L502482;}}
}
B502466:L502466:{c.instructions+=2;NFSU2_TR(0x502466);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502469:{NFSU2_TR(0x502469);
if(r1(R+518)){{goto L502482;}}
}
B50246b:L50246b:{c.instructions+=2;NFSU2_TR(0x50246b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50246e:{NFSU2_TR(0x50246e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502477;}}
}
B502470:L502470:{c.instructions+=3;NFSU2_TR(0x502470);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B502473:{NFSU2_TR(0x502473);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502475:{NFSU2_TR(0x502475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502482;}}
}
B502477:L502477:{c.instructions+=5;NFSU2_TR(0x502477);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B502479:{NFSU2_TR(0x502479);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50247c:{NFSU2_TR(0x50247c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B50247f:{NFSU2_TR(0x50247f);
__builtin_memmove((R+0),(R+4),1);
}
B502481:{NFSU2_TR(0x502481);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502482:L502482:{c.instructions+=2;NFSU2_TR(0x502482);
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
B502484:{NFSU2_TR(0x502484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502490:L502490:{c.instructions+=3;NFSU2_TR(0x502490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502492:{NFSU2_TR(0x502492);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502494:{NFSU2_TR(0x502494);
if(r1(R+518)){{goto L5024a6;}}
}
B502496:L502496:{c.instructions+=2;NFSU2_TR(0x502496);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502499:{NFSU2_TR(0x502499);
if(r1(R+518)){{goto L5024a6;}}
}
B50249b:L50249b:{c.instructions+=5;NFSU2_TR(0x50249b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50249d:{NFSU2_TR(0x50249d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5024a0:{NFSU2_TR(0x5024a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5024a3:{NFSU2_TR(0x5024a3);
__builtin_memmove((R+0),(R+4),1);
}
B5024a5:{NFSU2_TR(0x5024a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5024a6:L5024a6:{c.instructions+=2;NFSU2_TR(0x5024a6);
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
B5024a8:{NFSU2_TR(0x5024a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5024b0:L5024b0:{c.instructions+=3;NFSU2_TR(0x5024b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5024b2:{NFSU2_TR(0x5024b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5024b4:{NFSU2_TR(0x5024b4);
if(r1(R+518)){{goto L5024c6;}}
}
B5024b6:L5024b6:{c.instructions+=2;NFSU2_TR(0x5024b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5024b9:{NFSU2_TR(0x5024b9);
if(r1(R+518)){{goto L5024c6;}}
}
B5024bb:L5024bb:{c.instructions+=5;NFSU2_TR(0x5024bb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5024bd:{NFSU2_TR(0x5024bd);
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
B5024c0:{NFSU2_TR(0x5024c0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B5024c3:{NFSU2_TR(0x5024c3);
__builtin_memmove((R+0),(R+4),1);
}
B5024c5:{NFSU2_TR(0x5024c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5024c6:L5024c6:{c.instructions+=2;NFSU2_TR(0x5024c6);
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
B5024c8:{NFSU2_TR(0x5024c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5024d0:L5024d0:{c.instructions+=3;NFSU2_TR(0x5024d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5024d2:{NFSU2_TR(0x5024d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5024d4:{NFSU2_TR(0x5024d4);
if(r1(R+518)){{goto L5024e6;}}
}
B5024d6:L5024d6:{c.instructions+=2;NFSU2_TR(0x5024d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5024d9:{NFSU2_TR(0x5024d9);
if(r1(R+518)){{goto L5024e6;}}
}
B5024db:L5024db:{c.instructions+=2;NFSU2_TR(0x5024db);
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
B5024de:{NFSU2_TR(0x5024de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5024e6;}}
}
B5024e0:L5024e0:{c.instructions+=2;NFSU2_TR(0x5024e0);
w4(R+0,u32(0x1ull));
}
B5024e5:{NFSU2_TR(0x5024e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5024e6:L5024e6:{c.instructions+=2;NFSU2_TR(0x5024e6);
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
B5024e8:{NFSU2_TR(0x5024e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5024f0:L5024f0:{c.instructions+=2;NFSU2_TR(0x5024f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5024f4:{NFSU2_TR(0x5024f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502500:L502500:{c.instructions+=3;NFSU2_TR(0x502500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502504:{NFSU2_TR(0x502504);
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
B502507:{NFSU2_TR(0x502507);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L502528;}}
}
B502509:L502509:{c.instructions+=1;NFSU2_TR(0x502509);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50252cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B502510:L502510:{c.instructions+=2;NFSU2_TR(0x502510);
w4(R+0,u32(0x2ull));
}
B502515:{NFSU2_TR(0x502515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502516:L502516:{c.instructions+=2;NFSU2_TR(0x502516);
w4(R+0,u32(0x4ull));
}
B50251b:{NFSU2_TR(0x50251b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50251c:L50251c:{c.instructions+=2;NFSU2_TR(0x50251c);
w4(R+0,u32(0x1ull));
}
B502521:{NFSU2_TR(0x502521);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502522:L502522:{c.instructions+=2;NFSU2_TR(0x502522);
w4(R+0,u32(0x5ull));
}
B502527:{NFSU2_TR(0x502527);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502528:L502528:{c.instructions+=2;NFSU2_TR(0x502528);
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
B50252a:{NFSU2_TR(0x50252a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502540:L502540:{c.instructions+=7;NFSU2_TR(0x502540);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502543:{NFSU2_TR(0x502543);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502544:{NFSU2_TR(0x502544);
__builtin_memmove((R+12),gp(0x89e7d9),1);
}
B50254a:{NFSU2_TR(0x50254a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50254c:{NFSU2_TR(0x50254c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50254d:{NFSU2_TR(0x50254d);
w4(R+8,u32(0x3ull));
}
B502552:{NFSU2_TR(0x502552);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502574;}}
}
B502554:L502554:{c.instructions+=3;NFSU2_TR(0x502554);
__builtin_memmove((R+24),gp(0x890104),4);
}
B50255a:{NFSU2_TR(0x50255a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50255c:{NFSU2_TR(0x50255c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502574;}}
}
B50255e:L50255e:{c.instructions+=3;NFSU2_TR(0x50255e);
__builtin_memmove((R+24),gp(0x89e7a0),4);
}
B502564:{NFSU2_TR(0x502564);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x104eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50256a:{NFSU2_TR(0x50256a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502579;}}
}
B50256c:L50256c:{c.instructions+=2;NFSU2_TR(0x50256c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1053ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502572:{NFSU2_TR(0x502572);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L502579;}}
}
B502574:L502574:{c.instructions+=1;NFSU2_TR(0x502574);
w4(R+8,u32(0x4ull));
}
B502579:L502579:{c.instructions+=3;NFSU2_TR(0x502579);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50257d:{NFSU2_TR(0x50257d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502580:{NFSU2_TR(0x502580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502591;}}
}
B502582:L502582:{c.instructions+=3;NFSU2_TR(0x502582);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B502583:{NFSU2_TR(0x502583);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B502585:{NFSU2_TR(0x502585);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502589;}}
}
B502587:L502587:{c.instructions+=1;NFSU2_TR(0x502587);
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
B502589:L502589:{c.instructions+=4;NFSU2_TR(0x502589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50258a:{NFSU2_TR(0x50258a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50258d:{NFSU2_TR(0x50258d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50258e:{NFSU2_TR(0x50258e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502591:L502591:{c.instructions+=2;NFSU2_TR(0x502591);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502594:{NFSU2_TR(0x502594);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502589u);}goto L502589;}}
}
B502596:L502596:{c.instructions+=2;NFSU2_TR(0x502596);
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
B502597:{NFSU2_TR(0x502597);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502589u);}goto L502589;}}
}
B502599:L502599:{c.instructions+=4;NFSU2_TR(0x502599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50259a:{NFSU2_TR(0x50259a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50259d:{NFSU2_TR(0x50259d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50259e:{NFSU2_TR(0x50259e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5025b0:L5025b0:{c.instructions+=77;NFSU2_TR(0x5025b0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5025b2:{NFSU2_TR(0x5025b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5025b4:{NFSU2_TR(0x5025b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5025bb:{NFSU2_TR(0x5025bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025be:{NFSU2_TR(0x5025be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025c1:{NFSU2_TR(0x5025c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5025c4:{NFSU2_TR(0x5025c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x3f333333ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5025cb:{NFSU2_TR(0x5025cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025ce:{NFSU2_TR(0x5025ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025d1:{NFSU2_TR(0x5025d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025d4:{NFSU2_TR(0x5025d4);
w4(R+0,u32(0x1ull));
}
B5025d9:{NFSU2_TR(0x5025d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025dc:{NFSU2_TR(0x5025dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025df:{NFSU2_TR(0x5025df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5025e0:{NFSU2_TR(0x5025e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5025e1:{NFSU2_TR(0x5025e1);
w4(R+24,u32(0x3f800000ull));
}
B5025e6:{NFSU2_TR(0x5025e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025e9:{NFSU2_TR(0x5025e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025ec:{NFSU2_TR(0x5025ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025ef:{NFSU2_TR(0x5025ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025f2:{NFSU2_TR(0x5025f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025f5:{NFSU2_TR(0x5025f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025f8:{NFSU2_TR(0x5025f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025fb:{NFSU2_TR(0x5025fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5025fe:{NFSU2_TR(0x5025fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502601:{NFSU2_TR(0x502601);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502604:{NFSU2_TR(0x502604);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502607:{NFSU2_TR(0x502607);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x42ff0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50260e:{NFSU2_TR(0x50260e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x42ff0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B502615:{NFSU2_TR(0x502615);
w1(R+12,u8(0x2ull));
}
B502617:{NFSU2_TR(0x502617);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50261a:{NFSU2_TR(0x50261a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50261d:{NFSU2_TR(0x50261d);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f70d0),4);
w1(R+512,u8((r4(U+6))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+8)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502623:{NFSU2_TR(0x502623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B502626:{NFSU2_TR(0x502626);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502629:{NFSU2_TR(0x502629);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50262c:{NFSU2_TR(0x50262c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502632:{NFSU2_TR(0x502632);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502635:{NFSU2_TR(0x502635);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502638:{NFSU2_TR(0x502638);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50263b:{NFSU2_TR(0x50263b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x63ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50263e:{NFSU2_TR(0x50263e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x65ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502641:{NFSU2_TR(0x502641);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x66ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502644:{NFSU2_TR(0x502644);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502647:{NFSU2_TR(0x502647);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50264a:{NFSU2_TR(0x50264a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50264d:{NFSU2_TR(0x50264d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502650:{NFSU2_TR(0x502650);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x75ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502653:{NFSU2_TR(0x502653);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x76ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502656:{NFSU2_TR(0x502656);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x77ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502659:{NFSU2_TR(0x502659);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50265c:{NFSU2_TR(0x50265c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x79ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50265f:{NFSU2_TR(0x50265f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
w4(U+4,u32(0x41466666ull));
s4(u32(r4(U+0)),r4(U+4));
}
B502669:{NFSU2_TR(0x502669);
w4(R+12,u32(0x3ull));
}
B50266e:{NFSU2_TR(0x50266e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502671:{NFSU2_TR(0x502671);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502677:{NFSU2_TR(0x502677);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50267d:{NFSU2_TR(0x50267d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50267e:{NFSU2_TR(0x50267e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502684:{NFSU2_TR(0x502684);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50268a:{NFSU2_TR(0x50268a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x89ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502690:{NFSU2_TR(0x502690);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502696:{NFSU2_TR(0x502696);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50269c:{NFSU2_TR(0x50269c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026a2:{NFSU2_TR(0x5026a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026a8:{NFSU2_TR(0x5026a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026ae:{NFSU2_TR(0x5026ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5026b4:{NFSU2_TR(0x5026b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026ba:{NFSU2_TR(0x5026ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026c0:{NFSU2_TR(0x5026c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026c6:{NFSU2_TR(0x5026c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026cc:{NFSU2_TR(0x5026cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026d2:{NFSU2_TR(0x5026d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026d8:{NFSU2_TR(0x5026d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5026de:{NFSU2_TR(0x5026de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
w4(U+4,u32(0x41466666ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5026e8:{NFSU2_TR(0x5026e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5026e9:{NFSU2_TR(0x5026e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5026f0:L5026f0:{c.instructions+=3;NFSU2_TR(0x5026f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5026f2:{NFSU2_TR(0x5026f2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5026f5:{NFSU2_TR(0x5026f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5026ff;}}
}
B5026f7:L5026f7:{c.instructions+=2;NFSU2_TR(0x5026f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5026fe:{NFSU2_TR(0x5026fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5026ff:L5026ff:{c.instructions+=3;NFSU2_TR(0x5026ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B502702:{NFSU2_TR(0x502702);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B502707:{NFSU2_TR(0x502707);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502710:L502710:{c.instructions+=3;NFSU2_TR(0x502710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502712:{NFSU2_TR(0x502712);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502715:{NFSU2_TR(0x502715);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50271f;}}
}
B502717:L502717:{c.instructions+=2;NFSU2_TR(0x502717);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x101ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50271e:{NFSU2_TR(0x50271e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50271f:L50271f:{c.instructions+=3;NFSU2_TR(0x50271f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B502722:{NFSU2_TR(0x502722);
u8 U[13];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B502727:{NFSU2_TR(0x502727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502730:L502730:{c.instructions+=3;NFSU2_TR(0x502730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502732:{NFSU2_TR(0x502732);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502735:{NFSU2_TR(0x502735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50273f;}}
}
B502737:L502737:{c.instructions+=2;NFSU2_TR(0x502737);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x102ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50273e:{NFSU2_TR(0x50273e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50273f:L50273f:{c.instructions+=3;NFSU2_TR(0x50273f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B502742:{NFSU2_TR(0x502742);
u8 U[13];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B502747:{NFSU2_TR(0x502747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502750:L502750:{c.instructions+=3;NFSU2_TR(0x502750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502752:{NFSU2_TR(0x502752);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502755:{NFSU2_TR(0x502755);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50275f;}}
}
B502757:L502757:{c.instructions+=2;NFSU2_TR(0x502757);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50275e:{NFSU2_TR(0x50275e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50275f:L50275f:{c.instructions+=3;NFSU2_TR(0x50275f);
u8 U[12];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B502763:{NFSU2_TR(0x502763);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B502767:{NFSU2_TR(0x502767);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502770:L502770:{c.instructions+=2;NFSU2_TR(0x502770);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502776:{NFSU2_TR(0x502776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502780:L502780:{c.instructions+=2;NFSU2_TR(0x502780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502786:{NFSU2_TR(0x502786);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502790:L502790:{c.instructions+=3;NFSU2_TR(0x502790);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502796:{NFSU2_TR(0x502796);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7992ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50279c:{NFSU2_TR(0x50279c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5027a0:L5027a0:{c.instructions+=3;NFSU2_TR(0x5027a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5027a6:{NFSU2_TR(0x5027a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7992d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5027ac:{NFSU2_TR(0x5027ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5027b0:L5027b0:{c.instructions+=4;NFSU2_TR(0x5027b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5027b1:{NFSU2_TR(0x5027b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5027b7:{NFSU2_TR(0x5027b7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5027ba:{NFSU2_TR(0x5027ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5027c0;}}
}
B5027bc:L5027bc:{c.instructions+=3;NFSU2_TR(0x5027bc);
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
B5027be:{NFSU2_TR(0x5027be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5027bf:{NFSU2_TR(0x5027bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5027c0:L5027c0:{c.instructions+=6;NFSU2_TR(0x5027c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5027c1:{NFSU2_TR(0x5027c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5027c8:{NFSU2_TR(0x5027c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5027ca:{NFSU2_TR(0x5027ca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5027cc:{NFSU2_TR(0x5027cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5027ce:{NFSU2_TR(0x5027ce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5027d4;}}
}
B5027d0:L5027d0:{c.instructions+=2;NFSU2_TR(0x5027d0);
__builtin_memmove((R+0),(R+24),4);
}
B5027d2:{NFSU2_TR(0x5027d2);
{goto L5027d6;}
}
B5027d4:L5027d4:{c.instructions+=1;NFSU2_TR(0x5027d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5027db;}}
}
B5027d6:L5027d6:{c.instructions+=1;NFSU2_TR(0x5027d6);
w4(R+8,u32(0x1ull));
}
B5027db:L5027db:{c.instructions+=3;NFSU2_TR(0x5027db);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x115ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5027e2:{NFSU2_TR(0x5027e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5027e4:{NFSU2_TR(0x5027e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5027ef;}}
}
B5027e6:L5027e6:{c.instructions+=3;NFSU2_TR(0x5027e6);
__builtin_memmove((R+0),(R+24),4);
}
B5027e8:{NFSU2_TR(0x5027e8);
w4(R+8,u32(0x1ull));
}
B5027ed:{NFSU2_TR(0x5027ed);
{goto L5027f2;}
}
B5027ef:L5027ef:{c.instructions+=1;NFSU2_TR(0x5027ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5027f2;}}
}
B5027f1:L5027f1:{c.instructions+=1;NFSU2_TR(0x5027f1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5027f2:L5027f2:{c.instructions+=3;NFSU2_TR(0x5027f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5027f9:{NFSU2_TR(0x5027f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5027fb:{NFSU2_TR(0x5027fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502806;}}
}
B5027fd:L5027fd:{c.instructions+=3;NFSU2_TR(0x5027fd);
__builtin_memmove((R+0),(R+24),4);
}
B5027ff:{NFSU2_TR(0x5027ff);
w4(R+8,u32(0x1ull));
}
B502804:{NFSU2_TR(0x502804);
{goto L502809;}
}
B502806:L502806:{c.instructions+=1;NFSU2_TR(0x502806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502809;}}
}
B502808:L502808:{c.instructions+=1;NFSU2_TR(0x502808);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B502809:L502809:{c.instructions+=4;NFSU2_TR(0x502809);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x117ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B502810:{NFSU2_TR(0x502810);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502812:{NFSU2_TR(0x502812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502813:{NFSU2_TR(0x502813);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50281e;}}
}
B502815:L502815:{c.instructions+=3;NFSU2_TR(0x502815);
__builtin_memmove((R+0),(R+4),4);
}
B502817:{NFSU2_TR(0x502817);
w4(R+8,u32(0x1ull));
}
B50281c:{NFSU2_TR(0x50281c);
{goto L502821;}
}
B50281e:L50281e:{c.instructions+=1;NFSU2_TR(0x50281e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502821;}}
}
B502820:L502820:{c.instructions+=1;NFSU2_TR(0x502820);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B502821:L502821:{c.instructions+=3;NFSU2_TR(0x502821);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7992ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502828:{NFSU2_TR(0x502828);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50282a:{NFSU2_TR(0x50282a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502835;}}
}
B50282c:L50282c:{c.instructions+=2;NFSU2_TR(0x50282c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B50282f:{NFSU2_TR(0x50282f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502835;}}
}
B502831:L502831:{c.instructions+=3;NFSU2_TR(0x502831);
__builtin_memmove((R+0),(R+8),4);
}
B502833:{NFSU2_TR(0x502833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502834:{NFSU2_TR(0x502834);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502835:L502835:{c.instructions+=3;NFSU2_TR(0x502835);
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
B502837:{NFSU2_TR(0x502837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502838:{NFSU2_TR(0x502838);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502840:L502840:{c.instructions+=4;NFSU2_TR(0x502840);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502841:{NFSU2_TR(0x502841);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B502847:{NFSU2_TR(0x502847);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50284a:{NFSU2_TR(0x50284a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502850;}}
}
B50284c:L50284c:{c.instructions+=3;NFSU2_TR(0x50284c);
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
B50284e:{NFSU2_TR(0x50284e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50284f:{NFSU2_TR(0x50284f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502850:L502850:{c.instructions+=6;NFSU2_TR(0x502850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502851:{NFSU2_TR(0x502851);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B502858:{NFSU2_TR(0x502858);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50285a:{NFSU2_TR(0x50285a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50285c:{NFSU2_TR(0x50285c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50285e:{NFSU2_TR(0x50285e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502864;}}
}
B502860:L502860:{c.instructions+=2;NFSU2_TR(0x502860);
__builtin_memmove((R+0),(R+24),4);
}
B502862:{NFSU2_TR(0x502862);
{goto L502866;}
}
B502864:L502864:{c.instructions+=1;NFSU2_TR(0x502864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50286b;}}
}
B502866:L502866:{c.instructions+=1;NFSU2_TR(0x502866);
w4(R+8,u32(0x1ull));
}
B50286b:L50286b:{c.instructions+=3;NFSU2_TR(0x50286b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x115ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B502872:{NFSU2_TR(0x502872);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502874:{NFSU2_TR(0x502874);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50287f;}}
}
B502876:L502876:{c.instructions+=3;NFSU2_TR(0x502876);
__builtin_memmove((R+0),(R+24),4);
}
B502878:{NFSU2_TR(0x502878);
w4(R+8,u32(0x1ull));
}
B50287d:{NFSU2_TR(0x50287d);
{goto L502882;}
}
B50287f:L50287f:{c.instructions+=1;NFSU2_TR(0x50287f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502882;}}
}
B502881:L502881:{c.instructions+=1;NFSU2_TR(0x502881);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B502882:L502882:{c.instructions+=3;NFSU2_TR(0x502882);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B502889:{NFSU2_TR(0x502889);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50288b:{NFSU2_TR(0x50288b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502896;}}
}
B50288d:L50288d:{c.instructions+=3;NFSU2_TR(0x50288d);
__builtin_memmove((R+0),(R+24),4);
}
B50288f:{NFSU2_TR(0x50288f);
w4(R+8,u32(0x1ull));
}
B502894:{NFSU2_TR(0x502894);
{goto L502899;}
}
B502896:L502896:{c.instructions+=1;NFSU2_TR(0x502896);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502899;}}
}
B502898:L502898:{c.instructions+=1;NFSU2_TR(0x502898);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B502899:L502899:{c.instructions+=4;NFSU2_TR(0x502899);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x117ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5028a0:{NFSU2_TR(0x5028a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5028a2:{NFSU2_TR(0x5028a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5028a3:{NFSU2_TR(0x5028a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5028ae;}}
}
B5028a5:L5028a5:{c.instructions+=3;NFSU2_TR(0x5028a5);
__builtin_memmove((R+0),(R+4),4);
}
B5028a7:{NFSU2_TR(0x5028a7);
w4(R+8,u32(0x1ull));
}
B5028ac:{NFSU2_TR(0x5028ac);
{goto L5028b1;}
}
B5028ae:L5028ae:{c.instructions+=1;NFSU2_TR(0x5028ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5028b1;}}
}
B5028b0:L5028b0:{c.instructions+=1;NFSU2_TR(0x5028b0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5028b1:L5028b1:{c.instructions+=3;NFSU2_TR(0x5028b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7992ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5028b8:{NFSU2_TR(0x5028b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5028ba:{NFSU2_TR(0x5028ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5028c8;}}
}
B5028bc:L5028bc:{c.instructions+=2;NFSU2_TR(0x5028bc);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5028bf:{NFSU2_TR(0x5028bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5028c8;}}
}
B5028c1:L5028c1:{c.instructions+=3;NFSU2_TR(0x5028c1);
w4(R+0,u32(0x1ull));
}
B5028c6:{NFSU2_TR(0x5028c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5028c7:{NFSU2_TR(0x5028c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5028c8:L5028c8:{c.instructions+=3;NFSU2_TR(0x5028c8);
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
B5028ca:{NFSU2_TR(0x5028ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5028cb:{NFSU2_TR(0x5028cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5028d0:L5028d0:{c.instructions+=3;NFSU2_TR(0x5028d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5028da:{NFSU2_TR(0x5028da);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B5028e1:{NFSU2_TR(0x5028e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5028f0:L5028f0:{c.instructions+=3;NFSU2_TR(0x5028f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5028f2:{NFSU2_TR(0x5028f2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5028f5:{NFSU2_TR(0x5028f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5028fe;}}
}
B5028f7:L5028f7:{c.instructions+=2;NFSU2_TR(0x5028f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5028fd:{NFSU2_TR(0x5028fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5028fe:L5028fe:{c.instructions+=3;NFSU2_TR(0x5028fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B502901:{NFSU2_TR(0x502901);
u8 U[13];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B502905:{NFSU2_TR(0x502905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502910:L502910:{c.instructions+=3;NFSU2_TR(0x502910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502912:{NFSU2_TR(0x502912);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502915:{NFSU2_TR(0x502915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50291e;}}
}
B502917:L502917:{c.instructions+=2;NFSU2_TR(0x502917);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B50291d:{NFSU2_TR(0x50291d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50291e:L50291e:{c.instructions+=3;NFSU2_TR(0x50291e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B502921:{NFSU2_TR(0x502921);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B502925:{NFSU2_TR(0x502925);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502930:L502930:{c.instructions+=3;NFSU2_TR(0x502930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502932:{NFSU2_TR(0x502932);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502935:{NFSU2_TR(0x502935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502944;}}
}
B502937:L502937:{c.instructions+=3;NFSU2_TR(0x502937);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50293b:{NFSU2_TR(0x50293b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502941:{NFSU2_TR(0x502941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502944:L502944:{c.instructions+=4;NFSU2_TR(0x502944);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B502947:{NFSU2_TR(0x502947);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50294b:{NFSU2_TR(0x50294b);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B50294f:{NFSU2_TR(0x50294f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502960:L502960:{c.instructions+=3;NFSU2_TR(0x502960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502962:{NFSU2_TR(0x502962);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502965:{NFSU2_TR(0x502965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502974;}}
}
B502967:L502967:{c.instructions+=3;NFSU2_TR(0x502967);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50296b:{NFSU2_TR(0x50296b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x101ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502971:{NFSU2_TR(0x502971);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502974:L502974:{c.instructions+=4;NFSU2_TR(0x502974);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B502977:{NFSU2_TR(0x502977);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50297b:{NFSU2_TR(0x50297b);
u8 U[13];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B50297f:{NFSU2_TR(0x50297f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502990:L502990:{c.instructions+=3;NFSU2_TR(0x502990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B502992:{NFSU2_TR(0x502992);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502995:{NFSU2_TR(0x502995);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5029a4;}}
}
B502997:L502997:{c.instructions+=3;NFSU2_TR(0x502997);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50299b:{NFSU2_TR(0x50299b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x102ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5029a1:{NFSU2_TR(0x5029a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5029a4:L5029a4:{c.instructions+=4;NFSU2_TR(0x5029a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5029a7:{NFSU2_TR(0x5029a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5029ab:{NFSU2_TR(0x5029ab);
u8 U[13];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5029af:{NFSU2_TR(0x5029af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5029c0:L5029c0:{c.instructions+=3;NFSU2_TR(0x5029c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5029c2:{NFSU2_TR(0x5029c2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5029c5:{NFSU2_TR(0x5029c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5029d4;}}
}
B5029c7:L5029c7:{c.instructions+=3;NFSU2_TR(0x5029c7);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5029cb:{NFSU2_TR(0x5029cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5029d1:{NFSU2_TR(0x5029d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5029d4:L5029d4:{c.instructions+=4;NFSU2_TR(0x5029d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5029d8:{NFSU2_TR(0x5029d8);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5029dc:{NFSU2_TR(0x5029dc);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B5029df:{NFSU2_TR(0x5029df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5029f0:L5029f0:{c.instructions+=3;NFSU2_TR(0x5029f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5029f2:{NFSU2_TR(0x5029f2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5029f5:{NFSU2_TR(0x5029f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502a04;}}
}
B5029f7:L5029f7:{c.instructions+=3;NFSU2_TR(0x5029f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5029fb:{NFSU2_TR(0x5029fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502a01:{NFSU2_TR(0x502a01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502a04:L502a04:{c.instructions+=4;NFSU2_TR(0x502a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B502a07:{NFSU2_TR(0x502a07);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B502a0b:{NFSU2_TR(0x502a0b);
u8 U[13];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B502a0f:{NFSU2_TR(0x502a0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502a20:L502a20:{c.instructions+=3;NFSU2_TR(0x502a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502a24:{NFSU2_TR(0x502a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502a2a:{NFSU2_TR(0x502a2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502a30:L502a30:{c.instructions+=3;NFSU2_TR(0x502a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502a34:{NFSU2_TR(0x502a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502a3a:{NFSU2_TR(0x502a3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502a40:L502a40:{c.instructions+=4;NFSU2_TR(0x502a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502a44:{NFSU2_TR(0x502a44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B502a48:{NFSU2_TR(0x502a48);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B502a4c:{NFSU2_TR(0x502a4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502a50:L502a50:{c.instructions+=9;NFSU2_TR(0x502a50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502a51:{NFSU2_TR(0x502a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B502a55:{NFSU2_TR(0x502a55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502a56:{NFSU2_TR(0x502a56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502a57:{NFSU2_TR(0x502a57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B502a5b:{NFSU2_TR(0x502a5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502a5c:{NFSU2_TR(0x502a5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B502a60:{NFSU2_TR(0x502a60);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B502a62:{NFSU2_TR(0x502a62);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B502a65:L502a65:{c.instructions+=3;NFSU2_TR(0x502a65);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B502a69:{NFSU2_TR(0x502a69);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502a6b:{NFSU2_TR(0x502a6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502a7c;}}
}
B502a6d:L502a6d:{c.instructions+=3;NFSU2_TR(0x502a6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B502a71:{NFSU2_TR(0x502a71);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502a73:{NFSU2_TR(0x502a73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502a7c;}}
}
B502a75:L502a75:{c.instructions+=3;NFSU2_TR(0x502a75);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+20,u32(s32(s8(r1(U+0)))));
}
B502a78:{NFSU2_TR(0x502a78);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B502a7a:{NFSU2_TR(0x502a7a);
if(r1(R+518)){{goto L502a91;}}
}
B502a7c:L502a7c:{c.instructions+=4;NFSU2_TR(0x502a7c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B502a7d:{NFSU2_TR(0x502a7d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B502a80:{NFSU2_TR(0x502a80);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x140ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502a86:{NFSU2_TR(0x502a86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502a65u);}goto L502a65;}}
}
B502a88:L502a88:{c.instructions+=6;NFSU2_TR(0x502a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502a89:{NFSU2_TR(0x502a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502a8a:{NFSU2_TR(0x502a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502a8b:{NFSU2_TR(0x502a8b);
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
B502a8d:{NFSU2_TR(0x502a8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502a8e:{NFSU2_TR(0x502a8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502a91:L502a91:{c.instructions+=6;NFSU2_TR(0x502a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502a92:{NFSU2_TR(0x502a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502a93:{NFSU2_TR(0x502a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502a94:{NFSU2_TR(0x502a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B502a97:{NFSU2_TR(0x502a97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502a98:{NFSU2_TR(0x502a98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502aa0:L502aa0:{c.instructions+=11;NFSU2_TR(0x502aa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502aa1:{NFSU2_TR(0x502aa1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B502aa5:{NFSU2_TR(0x502aa5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502aa6:{NFSU2_TR(0x502aa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502aa7:{NFSU2_TR(0x502aa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502aa8:{NFSU2_TR(0x502aa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B502aac:{NFSU2_TR(0x502aac);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B502aae:{NFSU2_TR(0x502aae);
w4(R+24,u32(0x7fffffffull));
}
B502ab3:{NFSU2_TR(0x502ab3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B502ab6:{NFSU2_TR(0x502ab6);
w4(R+20,u32(0x20ull));
}
B502abb:{NFSU2_TR(0x502abb);
{goto L502ac0;}
}
B502ac0:L502ac0:{c.instructions+=3;NFSU2_TR(0x502ac0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502ac4:{NFSU2_TR(0x502ac4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502ac6:{NFSU2_TR(0x502ac6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502ade;}}
}
B502ac8:L502ac8:{c.instructions+=3;NFSU2_TR(0x502ac8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502acc:{NFSU2_TR(0x502acc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502ace:{NFSU2_TR(0x502ace);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502ade;}}
}
B502ad0:L502ad0:{c.instructions+=3;NFSU2_TR(0x502ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B502ad2:{NFSU2_TR(0x502ad2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502ad4:{NFSU2_TR(0x502ad4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502ada;}}
}
B502ad6:L502ad6:{c.instructions+=2;NFSU2_TR(0x502ad6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502ad8:{NFSU2_TR(0x502ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502ade;}}
}
B502ada:L502ada:{c.instructions+=2;NFSU2_TR(0x502ada);
__builtin_memmove((R+24),(R+4),4);
}
B502adc:{NFSU2_TR(0x502adc);
w1(R+8,u8(0x1ull));
}
B502ade:L502ade:{c.instructions+=3;NFSU2_TR(0x502ade);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502ae2:{NFSU2_TR(0x502ae2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502ae4:{NFSU2_TR(0x502ae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502afd;}}
}
B502ae6:L502ae6:{c.instructions+=3;NFSU2_TR(0x502ae6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502aea:{NFSU2_TR(0x502aea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502aec:{NFSU2_TR(0x502aec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502afd;}}
}
B502aee:L502aee:{c.instructions+=3;NFSU2_TR(0x502aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502af1:{NFSU2_TR(0x502af1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502af3:{NFSU2_TR(0x502af3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502af9;}}
}
B502af5:L502af5:{c.instructions+=2;NFSU2_TR(0x502af5);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502af7:{NFSU2_TR(0x502af7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502afd;}}
}
B502af9:L502af9:{c.instructions+=2;NFSU2_TR(0x502af9);
__builtin_memmove((R+24),(R+4),4);
}
B502afb:{NFSU2_TR(0x502afb);
w1(R+8,u8(0x1ull));
}
B502afd:L502afd:{c.instructions+=3;NFSU2_TR(0x502afd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502b01:{NFSU2_TR(0x502b01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b03:{NFSU2_TR(0x502b03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b1c;}}
}
B502b05:L502b05:{c.instructions+=3;NFSU2_TR(0x502b05);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502b09:{NFSU2_TR(0x502b09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b0b:{NFSU2_TR(0x502b0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b1c;}}
}
B502b0d:L502b0d:{c.instructions+=3;NFSU2_TR(0x502b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502b10:{NFSU2_TR(0x502b10);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502b12:{NFSU2_TR(0x502b12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502b18;}}
}
B502b14:L502b14:{c.instructions+=2;NFSU2_TR(0x502b14);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502b16:{NFSU2_TR(0x502b16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b1c;}}
}
B502b18:L502b18:{c.instructions+=2;NFSU2_TR(0x502b18);
__builtin_memmove((R+24),(R+4),4);
}
B502b1a:{NFSU2_TR(0x502b1a);
w1(R+8,u8(0x1ull));
}
B502b1c:L502b1c:{c.instructions+=3;NFSU2_TR(0x502b1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502b20:{NFSU2_TR(0x502b20);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b22:{NFSU2_TR(0x502b22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b3b;}}
}
B502b24:L502b24:{c.instructions+=3;NFSU2_TR(0x502b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502b28:{NFSU2_TR(0x502b28);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b2a:{NFSU2_TR(0x502b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b3b;}}
}
B502b2c:L502b2c:{c.instructions+=3;NFSU2_TR(0x502b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502b2f:{NFSU2_TR(0x502b2f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502b31:{NFSU2_TR(0x502b31);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502b37;}}
}
B502b33:L502b33:{c.instructions+=2;NFSU2_TR(0x502b33);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502b35:{NFSU2_TR(0x502b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b3b;}}
}
B502b37:L502b37:{c.instructions+=2;NFSU2_TR(0x502b37);
__builtin_memmove((R+24),(R+4),4);
}
B502b39:{NFSU2_TR(0x502b39);
w1(R+8,u8(0x1ull));
}
B502b3b:L502b3b:{c.instructions+=3;NFSU2_TR(0x502b3b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502b3f:{NFSU2_TR(0x502b3f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b41:{NFSU2_TR(0x502b41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b5a;}}
}
B502b43:L502b43:{c.instructions+=3;NFSU2_TR(0x502b43);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502b47:{NFSU2_TR(0x502b47);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b49:{NFSU2_TR(0x502b49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b5a;}}
}
B502b4b:L502b4b:{c.instructions+=3;NFSU2_TR(0x502b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502b4e:{NFSU2_TR(0x502b4e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502b50:{NFSU2_TR(0x502b50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502b56;}}
}
B502b52:L502b52:{c.instructions+=2;NFSU2_TR(0x502b52);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502b54:{NFSU2_TR(0x502b54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b5a;}}
}
B502b56:L502b56:{c.instructions+=2;NFSU2_TR(0x502b56);
__builtin_memmove((R+24),(R+4),4);
}
B502b58:{NFSU2_TR(0x502b58);
w1(R+8,u8(0x1ull));
}
B502b5a:L502b5a:{c.instructions+=3;NFSU2_TR(0x502b5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502b5e:{NFSU2_TR(0x502b5e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b60:{NFSU2_TR(0x502b60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b79;}}
}
B502b62:L502b62:{c.instructions+=3;NFSU2_TR(0x502b62);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502b66:{NFSU2_TR(0x502b66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b68:{NFSU2_TR(0x502b68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b79;}}
}
B502b6a:L502b6a:{c.instructions+=3;NFSU2_TR(0x502b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502b6d:{NFSU2_TR(0x502b6d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502b6f:{NFSU2_TR(0x502b6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502b75;}}
}
B502b71:L502b71:{c.instructions+=2;NFSU2_TR(0x502b71);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502b73:{NFSU2_TR(0x502b73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b79;}}
}
B502b75:L502b75:{c.instructions+=2;NFSU2_TR(0x502b75);
__builtin_memmove((R+24),(R+4),4);
}
B502b77:{NFSU2_TR(0x502b77);
w1(R+8,u8(0x1ull));
}
B502b79:L502b79:{c.instructions+=3;NFSU2_TR(0x502b79);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502b7d:{NFSU2_TR(0x502b7d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b7f:{NFSU2_TR(0x502b7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b98;}}
}
B502b81:L502b81:{c.instructions+=3;NFSU2_TR(0x502b81);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502b85:{NFSU2_TR(0x502b85);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b87:{NFSU2_TR(0x502b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b98;}}
}
B502b89:L502b89:{c.instructions+=3;NFSU2_TR(0x502b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502b8c:{NFSU2_TR(0x502b8c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502b8e:{NFSU2_TR(0x502b8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502b94;}}
}
B502b90:L502b90:{c.instructions+=2;NFSU2_TR(0x502b90);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502b92:{NFSU2_TR(0x502b92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502b98;}}
}
B502b94:L502b94:{c.instructions+=2;NFSU2_TR(0x502b94);
__builtin_memmove((R+24),(R+4),4);
}
B502b96:{NFSU2_TR(0x502b96);
w1(R+8,u8(0x1ull));
}
B502b98:L502b98:{c.instructions+=3;NFSU2_TR(0x502b98);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502b9c:{NFSU2_TR(0x502b9c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502b9e:{NFSU2_TR(0x502b9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bb7;}}
}
B502ba0:L502ba0:{c.instructions+=3;NFSU2_TR(0x502ba0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502ba4:{NFSU2_TR(0x502ba4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502ba6:{NFSU2_TR(0x502ba6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bb7;}}
}
B502ba8:L502ba8:{c.instructions+=3;NFSU2_TR(0x502ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502bab:{NFSU2_TR(0x502bab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502bad:{NFSU2_TR(0x502bad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502bb3;}}
}
B502baf:L502baf:{c.instructions+=2;NFSU2_TR(0x502baf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502bb1:{NFSU2_TR(0x502bb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bb7;}}
}
B502bb3:L502bb3:{c.instructions+=2;NFSU2_TR(0x502bb3);
__builtin_memmove((R+24),(R+4),4);
}
B502bb5:{NFSU2_TR(0x502bb5);
w1(R+8,u8(0x1ull));
}
B502bb7:L502bb7:{c.instructions+=3;NFSU2_TR(0x502bb7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502bbb:{NFSU2_TR(0x502bbb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502bbd:{NFSU2_TR(0x502bbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bd6;}}
}
B502bbf:L502bbf:{c.instructions+=3;NFSU2_TR(0x502bbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502bc3:{NFSU2_TR(0x502bc3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502bc5:{NFSU2_TR(0x502bc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bd6;}}
}
B502bc7:L502bc7:{c.instructions+=3;NFSU2_TR(0x502bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502bca:{NFSU2_TR(0x502bca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502bcc:{NFSU2_TR(0x502bcc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502bd2;}}
}
B502bce:L502bce:{c.instructions+=2;NFSU2_TR(0x502bce);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502bd0:{NFSU2_TR(0x502bd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bd6;}}
}
B502bd2:L502bd2:{c.instructions+=2;NFSU2_TR(0x502bd2);
__builtin_memmove((R+24),(R+4),4);
}
B502bd4:{NFSU2_TR(0x502bd4);
w1(R+8,u8(0x1ull));
}
B502bd6:L502bd6:{c.instructions+=3;NFSU2_TR(0x502bd6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502bda:{NFSU2_TR(0x502bda);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502bdc:{NFSU2_TR(0x502bdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bf5;}}
}
B502bde:L502bde:{c.instructions+=3;NFSU2_TR(0x502bde);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x47ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502be2:{NFSU2_TR(0x502be2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502be4:{NFSU2_TR(0x502be4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bf5;}}
}
B502be6:L502be6:{c.instructions+=3;NFSU2_TR(0x502be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502be9:{NFSU2_TR(0x502be9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502beb:{NFSU2_TR(0x502beb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L502bf1;}}
}
B502bed:L502bed:{c.instructions+=2;NFSU2_TR(0x502bed);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502bef:{NFSU2_TR(0x502bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502bf5;}}
}
B502bf1:L502bf1:{c.instructions+=2;NFSU2_TR(0x502bf1);
__builtin_memmove((R+24),(R+4),4);
}
B502bf3:{NFSU2_TR(0x502bf3);
w1(R+8,u8(0x1ull));
}
B502bf5:L502bf5:{c.instructions+=3;NFSU2_TR(0x502bf5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B502bf8:{NFSU2_TR(0x502bf8);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B502bf9:{NFSU2_TR(0x502bf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502ac0u);}goto L502ac0;}}
}
B502bff:L502bff:{c.instructions+=2;NFSU2_TR(0x502bff);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B502c01:{NFSU2_TR(0x502c01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502c40;}}
}
B502c03:L502c03:{c.instructions+=2;NFSU2_TR(0x502c03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502c04:{NFSU2_TR(0x502c04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502c09ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B502c09:L502c09:{c.instructions+=3;NFSU2_TR(0x502c09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B502c0c:{NFSU2_TR(0x502c0c);
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
B502c0e:{NFSU2_TR(0x502c0e);
if(r1(R+518)){{goto L502c40;}}
}
B502c10:L502c10:{c.instructions+=2;NFSU2_TR(0x502c10);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502c12:{NFSU2_TR(0x502c12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502c1c;}}
}
B502c14:L502c14:{c.instructions+=2;NFSU2_TR(0x502c14);
{u32 ea_=u32(r4(R+0)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B502c1a:{NFSU2_TR(0x502c1a);
{goto L502c22;}
}
B502c1c:L502c1c:{c.instructions+=1;NFSU2_TR(0x502c1c);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B502c22:L502c22:{c.instructions+=4;NFSU2_TR(0x502c22);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B502c28:{NFSU2_TR(0x502c28);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B502c2e:{NFSU2_TR(0x502c2e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B502c34:{NFSU2_TR(0x502c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502c39ull));
TAIL_STATIC(0x75bed4u,75b);
}
B502c39:L502c39:{c.instructions+=5;NFSU2_TR(0x502c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502c3a:{NFSU2_TR(0x502c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502c3b:{NFSU2_TR(0x502c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502c3c:{NFSU2_TR(0x502c3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502c3d:{NFSU2_TR(0x502c3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502c40:L502c40:{c.instructions+=6;NFSU2_TR(0x502c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502c41:{NFSU2_TR(0x502c41);
__builtin_memmove((R+0),(R+24),4);
}
B502c43:{NFSU2_TR(0x502c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502c44:{NFSU2_TR(0x502c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502c45:{NFSU2_TR(0x502c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502c46:{NFSU2_TR(0x502c46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502c50:L502c50:{c.instructions+=8;NFSU2_TR(0x502c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B502c54:{NFSU2_TR(0x502c54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502c55:{NFSU2_TR(0x502c55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502c56:{NFSU2_TR(0x502c56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502c57:{NFSU2_TR(0x502c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B502c5b:{NFSU2_TR(0x502c5b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B502c5d:{NFSU2_TR(0x502c5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B502c60:{NFSU2_TR(0x502c60);
w4(R+12,u32(0x20ull));
}
B502c65:L502c65:{c.instructions+=3;NFSU2_TR(0x502c65);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502c69:{NFSU2_TR(0x502c69);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502c6b:{NFSU2_TR(0x502c6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502c7d;}}
}
B502c6d:L502c6d:{c.instructions+=3;NFSU2_TR(0x502c6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502c71:{NFSU2_TR(0x502c71);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502c73:{NFSU2_TR(0x502c73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502c7d;}}
}
B502c75:L502c75:{c.instructions+=3;NFSU2_TR(0x502c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B502c77:{NFSU2_TR(0x502c77);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502c79:{NFSU2_TR(0x502c79);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502c7d;}}
}
B502c7b:L502c7b:{c.instructions+=1;NFSU2_TR(0x502c7b);
__builtin_memmove((R+24),(R+4),4);
}
B502c7d:L502c7d:{c.instructions+=3;NFSU2_TR(0x502c7d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502c81:{NFSU2_TR(0x502c81);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502c83:{NFSU2_TR(0x502c83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502c96;}}
}
B502c85:L502c85:{c.instructions+=3;NFSU2_TR(0x502c85);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502c89:{NFSU2_TR(0x502c89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502c8b:{NFSU2_TR(0x502c8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502c96;}}
}
B502c8d:L502c8d:{c.instructions+=3;NFSU2_TR(0x502c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502c90:{NFSU2_TR(0x502c90);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502c92:{NFSU2_TR(0x502c92);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502c96;}}
}
B502c94:L502c94:{c.instructions+=1;NFSU2_TR(0x502c94);
__builtin_memmove((R+24),(R+4),4);
}
B502c96:L502c96:{c.instructions+=3;NFSU2_TR(0x502c96);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502c9a:{NFSU2_TR(0x502c9a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502c9c:{NFSU2_TR(0x502c9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502caf;}}
}
B502c9e:L502c9e:{c.instructions+=3;NFSU2_TR(0x502c9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502ca2:{NFSU2_TR(0x502ca2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502ca4:{NFSU2_TR(0x502ca4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502caf;}}
}
B502ca6:L502ca6:{c.instructions+=3;NFSU2_TR(0x502ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502ca9:{NFSU2_TR(0x502ca9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cab:{NFSU2_TR(0x502cab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502caf;}}
}
B502cad:L502cad:{c.instructions+=1;NFSU2_TR(0x502cad);
__builtin_memmove((R+24),(R+4),4);
}
B502caf:L502caf:{c.instructions+=3;NFSU2_TR(0x502caf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502cb3:{NFSU2_TR(0x502cb3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cb5:{NFSU2_TR(0x502cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502cc8;}}
}
B502cb7:L502cb7:{c.instructions+=3;NFSU2_TR(0x502cb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502cbb:{NFSU2_TR(0x502cbb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cbd:{NFSU2_TR(0x502cbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502cc8;}}
}
B502cbf:L502cbf:{c.instructions+=3;NFSU2_TR(0x502cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502cc2:{NFSU2_TR(0x502cc2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cc4:{NFSU2_TR(0x502cc4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502cc8;}}
}
B502cc6:L502cc6:{c.instructions+=1;NFSU2_TR(0x502cc6);
__builtin_memmove((R+24),(R+4),4);
}
B502cc8:L502cc8:{c.instructions+=3;NFSU2_TR(0x502cc8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502ccc:{NFSU2_TR(0x502ccc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cce:{NFSU2_TR(0x502cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502ce1;}}
}
B502cd0:L502cd0:{c.instructions+=3;NFSU2_TR(0x502cd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502cd4:{NFSU2_TR(0x502cd4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cd6:{NFSU2_TR(0x502cd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502ce1;}}
}
B502cd8:L502cd8:{c.instructions+=3;NFSU2_TR(0x502cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502cdb:{NFSU2_TR(0x502cdb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cdd:{NFSU2_TR(0x502cdd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502ce1;}}
}
B502cdf:L502cdf:{c.instructions+=1;NFSU2_TR(0x502cdf);
__builtin_memmove((R+24),(R+4),4);
}
B502ce1:L502ce1:{c.instructions+=3;NFSU2_TR(0x502ce1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502ce5:{NFSU2_TR(0x502ce5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502ce7:{NFSU2_TR(0x502ce7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502cfa;}}
}
B502ce9:L502ce9:{c.instructions+=3;NFSU2_TR(0x502ce9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502ced:{NFSU2_TR(0x502ced);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cef:{NFSU2_TR(0x502cef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502cfa;}}
}
B502cf1:L502cf1:{c.instructions+=3;NFSU2_TR(0x502cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502cf4:{NFSU2_TR(0x502cf4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502cf6:{NFSU2_TR(0x502cf6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502cfa;}}
}
B502cf8:L502cf8:{c.instructions+=1;NFSU2_TR(0x502cf8);
__builtin_memmove((R+24),(R+4),4);
}
B502cfa:L502cfa:{c.instructions+=3;NFSU2_TR(0x502cfa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502cfe:{NFSU2_TR(0x502cfe);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d00:{NFSU2_TR(0x502d00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d13;}}
}
B502d02:L502d02:{c.instructions+=3;NFSU2_TR(0x502d02);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502d06:{NFSU2_TR(0x502d06);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d08:{NFSU2_TR(0x502d08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d13;}}
}
B502d0a:L502d0a:{c.instructions+=3;NFSU2_TR(0x502d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502d0d:{NFSU2_TR(0x502d0d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d0f:{NFSU2_TR(0x502d0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502d13;}}
}
B502d11:L502d11:{c.instructions+=1;NFSU2_TR(0x502d11);
__builtin_memmove((R+24),(R+4),4);
}
B502d13:L502d13:{c.instructions+=3;NFSU2_TR(0x502d13);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502d17:{NFSU2_TR(0x502d17);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d19:{NFSU2_TR(0x502d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d2c;}}
}
B502d1b:L502d1b:{c.instructions+=3;NFSU2_TR(0x502d1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502d1f:{NFSU2_TR(0x502d1f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d21:{NFSU2_TR(0x502d21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d2c;}}
}
B502d23:L502d23:{c.instructions+=3;NFSU2_TR(0x502d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502d26:{NFSU2_TR(0x502d26);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d28:{NFSU2_TR(0x502d28);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502d2c;}}
}
B502d2a:L502d2a:{c.instructions+=1;NFSU2_TR(0x502d2a);
__builtin_memmove((R+24),(R+4),4);
}
B502d2c:L502d2c:{c.instructions+=3;NFSU2_TR(0x502d2c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502d30:{NFSU2_TR(0x502d30);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d32:{NFSU2_TR(0x502d32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d45;}}
}
B502d34:L502d34:{c.instructions+=3;NFSU2_TR(0x502d34);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502d38:{NFSU2_TR(0x502d38);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d3a:{NFSU2_TR(0x502d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d45;}}
}
B502d3c:L502d3c:{c.instructions+=3;NFSU2_TR(0x502d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502d3f:{NFSU2_TR(0x502d3f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d41:{NFSU2_TR(0x502d41);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502d45;}}
}
B502d43:L502d43:{c.instructions+=1;NFSU2_TR(0x502d43);
__builtin_memmove((R+24),(R+4),4);
}
B502d45:L502d45:{c.instructions+=3;NFSU2_TR(0x502d45);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B502d49:{NFSU2_TR(0x502d49);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d4b:{NFSU2_TR(0x502d4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d5e;}}
}
B502d4d:L502d4d:{c.instructions+=3;NFSU2_TR(0x502d4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x47ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B502d51:{NFSU2_TR(0x502d51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d53:{NFSU2_TR(0x502d53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d5e;}}
}
B502d55:L502d55:{c.instructions+=3;NFSU2_TR(0x502d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502d58:{NFSU2_TR(0x502d58);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502d5a:{NFSU2_TR(0x502d5a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502d5e;}}
}
B502d5c:L502d5c:{c.instructions+=1;NFSU2_TR(0x502d5c);
__builtin_memmove((R+24),(R+4),4);
}
B502d5e:L502d5e:{c.instructions+=3;NFSU2_TR(0x502d5e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B502d61:{NFSU2_TR(0x502d61);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B502d62:{NFSU2_TR(0x502d62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502c65u);}goto L502c65;}}
}
B502d68:L502d68:{c.instructions+=2;NFSU2_TR(0x502d68);
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
B502d6a:{NFSU2_TR(0x502d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d95;}}
}
B502d6c:L502d6c:{c.instructions+=2;NFSU2_TR(0x502d6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502d6d:{NFSU2_TR(0x502d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502d72ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B502d72:L502d72:{c.instructions+=3;NFSU2_TR(0x502d72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B502d75:{NFSU2_TR(0x502d75);
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
B502d77:{NFSU2_TR(0x502d77);
if(r1(R+518)){{goto L502d95;}}
}
B502d79:L502d79:{c.instructions+=2;NFSU2_TR(0x502d79);
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
B502d7b:{NFSU2_TR(0x502d7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502d89;}}
}
B502d7d:L502d7d:{c.instructions+=5;NFSU2_TR(0x502d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502d83:{NFSU2_TR(0x502d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502d84:{NFSU2_TR(0x502d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502d85:{NFSU2_TR(0x502d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502d86:{NFSU2_TR(0x502d86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502d89:L502d89:{c.instructions+=5;NFSU2_TR(0x502d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502d8f:{NFSU2_TR(0x502d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502d90:{NFSU2_TR(0x502d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502d91:{NFSU2_TR(0x502d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502d92:{NFSU2_TR(0x502d92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502d95:L502d95:{c.instructions+=5;NFSU2_TR(0x502d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502d96:{NFSU2_TR(0x502d96);
__builtin_memmove((R+0),(R+24),4);
}
B502d98:{NFSU2_TR(0x502d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502d99:{NFSU2_TR(0x502d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502d9a:{NFSU2_TR(0x502d9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502da0:L502da0:{c.instructions+=3;NFSU2_TR(0x502da0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B502da5:{NFSU2_TR(0x502da5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B502da9:{NFSU2_TR(0x502da9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502dcc;}}
}
B502dab:L502dab:{c.instructions+=6;NFSU2_TR(0x502dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502daf:{NFSU2_TR(0x502daf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B502db2:{NFSU2_TR(0x502db2);
{u32 ea_=u32(r4(R+4)+u32(260u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B502db8:{NFSU2_TR(0x502db8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B502dba:{NFSU2_TR(0x502dba);
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
B502dbd:{NFSU2_TR(0x502dbd);
if(r1(R+514)){{goto L502dc7;}}
}
B502dbf:L502dbf:{c.instructions+=2;NFSU2_TR(0x502dbf);
w4(R+0,u32(0x1ull));
}
B502dc4:{NFSU2_TR(0x502dc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502dc7:L502dc7:{c.instructions+=2;NFSU2_TR(0x502dc7);
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
B502dc9:{NFSU2_TR(0x502dc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502dcc:L502dcc:{c.instructions+=3;NFSU2_TR(0x502dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502dcf:{NFSU2_TR(0x502dcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502dd1:{NFSU2_TR(0x502dd1);
if(r1(R+518)){{goto L502de9;}}
}
B502dd3:L502dd3:{c.instructions+=2;NFSU2_TR(0x502dd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502dd8:{NFSU2_TR(0x502dd8);
if(r1(R+518)){{goto L502de9;}}
}
B502dda:L502dda:{c.instructions+=5;NFSU2_TR(0x502dda);
__builtin_memmove((R+8),(R+0),4);
}
B502ddc:{NFSU2_TR(0x502ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502de0:{NFSU2_TR(0x502de0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B502de3:{NFSU2_TR(0x502de3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B502de6:{NFSU2_TR(0x502de6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502de9:L502de9:{c.instructions+=2;NFSU2_TR(0x502de9);
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
B502deb:{NFSU2_TR(0x502deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502df0:L502df0:{c.instructions+=11;NFSU2_TR(0x502df0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502df4:{NFSU2_TR(0x502df4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B502df8:{NFSU2_TR(0x502df8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502df9:{NFSU2_TR(0x502df9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B502dfd:{NFSU2_TR(0x502dfd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502dfe:{NFSU2_TR(0x502dfe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502dff:{NFSU2_TR(0x502dff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502e00:{NFSU2_TR(0x502e00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502e01:{NFSU2_TR(0x502e01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502e02:{NFSU2_TR(0x502e02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502e03:{NFSU2_TR(0x502e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502e08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502a50u);}goto L502a50;}
}
B502e08:L502e08:{c.instructions+=4;NFSU2_TR(0x502e08);
__builtin_memmove((R+24),(R+0),4);
}
B502e0a:{NFSU2_TR(0x502e0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502e0c:{NFSU2_TR(0x502e0c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B502e11:{NFSU2_TR(0x502e11);
if(r1(R+518)){{goto L502e30;}}
}
B502e13:L502e13:{c.instructions+=6;NFSU2_TR(0x502e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B502e17:{NFSU2_TR(0x502e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B502e1b:{NFSU2_TR(0x502e1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502e1c:{NFSU2_TR(0x502e1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502e1d:{NFSU2_TR(0x502e1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502e1e:{NFSU2_TR(0x502e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502e23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502da0u);}goto L502da0;}
}
B502e23:L502e23:{c.instructions+=2;NFSU2_TR(0x502e23);
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
B502e25:{NFSU2_TR(0x502e25);
if(r1(R+518)){{goto L502eeb;}}
}
B502e2b:L502e2b:{c.instructions+=1;NFSU2_TR(0x502e2b);
{goto L502ebc;}
}
B502e30:L502e30:{c.instructions+=1;NFSU2_TR(0x502e30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B502e32:L502e32:{c.instructions+=2;NFSU2_TR(0x502e32);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B502e37:{NFSU2_TR(0x502e37);
if(r1(R+518)){{goto L502e4c;}}
}
B502e39:L502e39:{c.instructions+=3;NFSU2_TR(0x502e39);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B502e3a:{NFSU2_TR(0x502e3a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x140ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x140ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502e3f:{NFSU2_TR(0x502e3f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502e32u);}goto L502e32;}}
}
B502e41:L502e41:{c.instructions+=6;NFSU2_TR(0x502e41);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B502e45:{NFSU2_TR(0x502e45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502e46:{NFSU2_TR(0x502e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502e47:{NFSU2_TR(0x502e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502e48:{NFSU2_TR(0x502e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502e49:{NFSU2_TR(0x502e49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502e4c:L502e4c:{c.instructions+=3;NFSU2_TR(0x502e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B502e4f:{NFSU2_TR(0x502e4f);
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
B502e51:{NFSU2_TR(0x502e51);
if(r1(R+518)){{goto L502eeb;}}
}
B502e57:L502e57:{c.instructions+=4;NFSU2_TR(0x502e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B502e5b:{NFSU2_TR(0x502e5b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B502e5e:{NFSU2_TR(0x502e5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B502e62:{NFSU2_TR(0x502e62);
if(r1(R+518)){{goto L502e97;}}
}
B502e64:L502e64:{c.instructions+=3;NFSU2_TR(0x502e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502e67:{NFSU2_TR(0x502e67);
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
B502e69:{NFSU2_TR(0x502e69);
if(r1(R+518)){{goto L502eeb;}}
}
B502e6f:L502e6f:{c.instructions+=2;NFSU2_TR(0x502e6f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502e74:{NFSU2_TR(0x502e74);
if(r1(R+518)){{goto L502eeb;}}
}
B502e76:L502e76:{c.instructions+=6;NFSU2_TR(0x502e76);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B502e79:{NFSU2_TR(0x502e79);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B502e7f:{NFSU2_TR(0x502e7f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B502e85:{NFSU2_TR(0x502e85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B502e87:{NFSU2_TR(0x502e87);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B502e8a:{NFSU2_TR(0x502e8a);
if(r1(R+514)){{goto L502eaa;}}
}
B502e8c:L502e8c:{c.instructions+=6;NFSU2_TR(0x502e8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B502e90:{NFSU2_TR(0x502e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502e91:{NFSU2_TR(0x502e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502e92:{NFSU2_TR(0x502e92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502e93:{NFSU2_TR(0x502e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502e94:{NFSU2_TR(0x502e94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502e97:L502e97:{c.instructions+=5;NFSU2_TR(0x502e97);
{u32 ea_=u32(r4(R+28)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B502e9d:{NFSU2_TR(0x502e9d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B502ea3:{NFSU2_TR(0x502ea3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B502ea5:{NFSU2_TR(0x502ea5);
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
B502ea8:{NFSU2_TR(0x502ea8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L502eeb;}}
}
B502eaa:L502eaa:{c.instructions+=5;NFSU2_TR(0x502eaa);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B502eaf:{NFSU2_TR(0x502eaf);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B502eb3:{NFSU2_TR(0x502eb3);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B502eb6:{NFSU2_TR(0x502eb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502eb9:{NFSU2_TR(0x502eb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B502ebc:L502ebc:{c.instructions+=3;NFSU2_TR(0x502ebc);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502ebf:{NFSU2_TR(0x502ebf);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B502ec4:{NFSU2_TR(0x502ec4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502eda;}}
}
B502ec6:L502ec6:{c.instructions+=8;NFSU2_TR(0x502ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B502ecc:{NFSU2_TR(0x502ecc);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B502ed0:{NFSU2_TR(0x502ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502ed1:{NFSU2_TR(0x502ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502ed4:{NFSU2_TR(0x502ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502ed5:{NFSU2_TR(0x502ed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502ed6:{NFSU2_TR(0x502ed6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502ed7:{NFSU2_TR(0x502ed7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502eda:L502eda:{c.instructions+=3;NFSU2_TR(0x502eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B502edd:{NFSU2_TR(0x502edd);
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
B502edf:{NFSU2_TR(0x502edf);
if(r1(R+518)){{goto L502eeb;}}
}
B502ee1:L502ee1:{c.instructions+=2;NFSU2_TR(0x502ee1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502ee6:{NFSU2_TR(0x502ee6);
if(r1(R+518)){{goto L502eeb;}}
}
B502ee8:L502ee8:{c.instructions+=1;NFSU2_TR(0x502ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502eeb:L502eeb:{c.instructions+=6;NFSU2_TR(0x502eeb);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B502eef:{NFSU2_TR(0x502eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502ef0:{NFSU2_TR(0x502ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502ef1:{NFSU2_TR(0x502ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502ef2:{NFSU2_TR(0x502ef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502ef3:{NFSU2_TR(0x502ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502f00:L502f00:{c.instructions+=6;NFSU2_TR(0x502f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B502f03:{NFSU2_TR(0x502f03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f04:{NFSU2_TR(0x502f04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f05:{NFSU2_TR(0x502f05);
__builtin_memmove((R+28),(R+4),4);
}
B502f07:{NFSU2_TR(0x502f07);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B502f09:{NFSU2_TR(0x502f09);
__builtin_memmove((R+16),(R+16),4);
}
B502f10:L502f10:{c.instructions+=2;NFSU2_TR(0x502f10);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B502f15:{NFSU2_TR(0x502f15);
if(r1(R+518)){{goto L502f2f;}}
}
B502f17:L502f17:{c.instructions+=7;NFSU2_TR(0x502f17);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B502f1b:{NFSU2_TR(0x502f1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f1d:{NFSU2_TR(0x502f1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B502f21:{NFSU2_TR(0x502f21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f22:{NFSU2_TR(0x502f22);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B502f26:{NFSU2_TR(0x502f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B502f2a:{NFSU2_TR(0x502f2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502f2full));
TAIL_STATIC(0x577240u,577);
}
B502f2f:L502f2f:{c.instructions+=3;NFSU2_TR(0x502f2f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B502f30:{NFSU2_TR(0x502f30);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x140ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B502f36:{NFSU2_TR(0x502f36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502f10u);}goto L502f10;}}
}
B502f38:L502f38:{c.instructions+=4;NFSU2_TR(0x502f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502f39:{NFSU2_TR(0x502f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502f3a:{NFSU2_TR(0x502f3a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502f3d:{NFSU2_TR(0x502f3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502f40:L502f40:{c.instructions+=9;NFSU2_TR(0x502f40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f41:{NFSU2_TR(0x502f41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f42:{NFSU2_TR(0x502f42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B502f46:{NFSU2_TR(0x502f46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f47:{NFSU2_TR(0x502f47);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B502f49:{NFSU2_TR(0x502f49);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502f4b:{NFSU2_TR(0x502f4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f4c:{NFSU2_TR(0x502f4c);
__builtin_memmove((R+24),(R+4),4);
}
B502f4e:{NFSU2_TR(0x502f4e);
if(r1(R+518)){{goto L502f5f;}}
}
B502f50:L502f50:{c.instructions+=2;NFSU2_TR(0x502f50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f51:{NFSU2_TR(0x502f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502f56ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B502f56:L502f56:{c.instructions+=3;NFSU2_TR(0x502f56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B502f59:{NFSU2_TR(0x502f59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502f5b:{NFSU2_TR(0x502f5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L502f5f;}}
}
B502f5d:L502f5d:{c.instructions+=1;NFSU2_TR(0x502f5d);
w1(R+12,u8(0x1ull));
}
B502f5f:L502f5f:{c.instructions+=4;NFSU2_TR(0x502f5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B502f61:{NFSU2_TR(0x502f61);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502f63:{NFSU2_TR(0x502f63);
w4(R+4,u32(0x8ull));
}
B502f68:{NFSU2_TR(0x502f68);
__builtin_memmove((R+28),(R+24),4);
}
B502f6a:L502f6a:{c.instructions+=1;NFSU2_TR(0x502f6a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L502f6c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502f6au);}goto L502f6a;}
}
B502f6c:L502f6c:{c.instructions+=1;NFSU2_TR(0x502f6c);
if(r1(R+518)){{goto L502f85;}}
}
B502f6e:L502f6e:{c.instructions+=4;NFSU2_TR(0x502f6e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f70:{NFSU2_TR(0x502f70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f71:{NFSU2_TR(0x502f71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502f72:{NFSU2_TR(0x502f72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502f77ull));
TAIL_STATIC(0x43dc00u,43d);
}
B502f77:L502f77:{c.instructions+=7;NFSU2_TR(0x502f77);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502f7a:{NFSU2_TR(0x502f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502f7b:{NFSU2_TR(0x502f7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B502f7f:{NFSU2_TR(0x502f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502f80:{NFSU2_TR(0x502f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502f81:{NFSU2_TR(0x502f81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502f82:{NFSU2_TR(0x502f82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502f85:L502f85:{c.instructions+=4;NFSU2_TR(0x502f85);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B502f89:{NFSU2_TR(0x502f89);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B502f8b:{NFSU2_TR(0x502f8b);
w4(R+8,u32(0xcf4f80c2ull));
}
B502f90:{NFSU2_TR(0x502f90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502f97;}}
}
B502f92:L502f92:{c.instructions+=1;NFSU2_TR(0x502f92);
w4(R+8,u32(0xd87133bdull));
}
B502f97:L502f97:{c.instructions+=1;NFSU2_TR(0x502f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502f9cull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B502f9c:L502f9c:{c.instructions+=2;NFSU2_TR(0x502f9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B502f9e:{NFSU2_TR(0x502f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L502faa;}}
}
B502fa0:L502fa0:{c.instructions+=2;NFSU2_TR(0x502fa0);
w4(R+8,u32(0xc01a6f63ull));
}
B502fa5:{NFSU2_TR(0x502fa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502faaull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B502faa:L502faa:{c.instructions+=6;NFSU2_TR(0x502faa);
__builtin_memmove((R+8),(R+0),4);
}
B502fac:{NFSU2_TR(0x502fac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502fad:{NFSU2_TR(0x502fad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B502faf:{NFSU2_TR(0x502faf);
w4(R+4,u32(0x8ull));
}
B502fb4:{NFSU2_TR(0x502fb4);
__builtin_memmove((R+28),(R+24),4);
}
B502fb6:{NFSU2_TR(0x502fb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B502fb7:L502fb7:{c.instructions+=1;NFSU2_TR(0x502fb7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L502fb9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x502fb7u);}goto L502fb7;}
}
B502fb9:L502fb9:{c.instructions+=1;NFSU2_TR(0x502fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x502fbeull));
TAIL_STATIC(0x43dbd0u,43d);
}
B502fbe:L502fbe:{c.instructions+=7;NFSU2_TR(0x502fbe);
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
B502fc1:{NFSU2_TR(0x502fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B502fc2:{NFSU2_TR(0x502fc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B502fc6:{NFSU2_TR(0x502fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B502fc7:{NFSU2_TR(0x502fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B502fc8:{NFSU2_TR(0x502fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B502fc9:{NFSU2_TR(0x502fc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502fd0:L502fd0:{c.instructions+=2;NFSU2_TR(0x502fd0);
__builtin_memmove((R+0),(R+4),4);
}
B502fd2:{NFSU2_TR(0x502fd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502fe0:L502fe0:{c.instructions+=2;NFSU2_TR(0x502fe0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B502fe3:{NFSU2_TR(0x502fe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B502ff0:L502ff0:{c.instructions+=4;NFSU2_TR(0x502ff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B502ff4:{NFSU2_TR(0x502ff4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B502ff6:{NFSU2_TR(0x502ff6);
w4(R+0,u32(0x78f530ull));
}
B502ffb:{NFSU2_TR(0x502ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x503034u,503);}
}
B502ffd:L502ffd:{c.instructions+=1;NFSU2_TR(0x502ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x503003u,503);
}
XIT:NFSU2_TR_EXIT(0x502,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
