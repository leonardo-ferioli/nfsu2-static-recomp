#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x671,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x671,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_671(u8* __restrict R,Cpu& c);
u32 page_671(Cpu& c){return body_671(c.regs.data(),c);}
__attribute__((noinline)) u32 body_671(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x671000:goto L671000;
case 0x671007:c.instructions+=42;goto B671007;
case 0x67100e:c.instructions+=41;goto B67100e;
case 0x671015:c.instructions+=40;goto B671015;
case 0x67101c:c.instructions+=39;goto B67101c;
case 0x671023:c.instructions+=38;goto B671023;
case 0x67102a:c.instructions+=37;goto B67102a;
case 0x671031:c.instructions+=36;goto B671031;
case 0x671038:c.instructions+=35;goto B671038;
case 0x67103f:c.instructions+=34;goto B67103f;
case 0x671046:c.instructions+=33;goto B671046;
case 0x67104d:c.instructions+=32;goto B67104d;
case 0x671054:c.instructions+=31;goto B671054;
case 0x67105b:c.instructions+=30;goto B67105b;
case 0x671062:c.instructions+=29;goto B671062;
case 0x671069:c.instructions+=28;goto B671069;
case 0x671070:c.instructions+=27;goto B671070;
case 0x671077:c.instructions+=26;goto B671077;
case 0x671081:c.instructions+=25;goto B671081;
case 0x67108b:c.instructions+=24;goto B67108b;
case 0x671095:c.instructions+=23;goto B671095;
case 0x67109f:c.instructions+=22;goto B67109f;
case 0x6710a9:c.instructions+=21;goto B6710a9;
case 0x6710b3:c.instructions+=20;goto B6710b3;
case 0x6710ba:c.instructions+=19;goto B6710ba;
case 0x6710c4:c.instructions+=18;goto B6710c4;
case 0x6710ce:c.instructions+=17;goto B6710ce;
case 0x6710d5:c.instructions+=16;goto B6710d5;
case 0x6710dc:c.instructions+=15;goto B6710dc;
case 0x6710e3:c.instructions+=14;goto B6710e3;
case 0x6710ea:c.instructions+=13;goto B6710ea;
case 0x6710f4:c.instructions+=12;goto B6710f4;
case 0x6710fe:c.instructions+=11;goto B6710fe;
case 0x671108:c.instructions+=10;goto B671108;
case 0x671112:c.instructions+=9;goto B671112;
case 0x67111c:c.instructions+=8;goto B67111c;
case 0x671126:c.instructions+=7;goto B671126;
case 0x671130:c.instructions+=6;goto B671130;
case 0x671136:c.instructions+=5;goto B671136;
case 0x67113c:c.instructions+=4;goto B67113c;
case 0x671146:c.instructions+=3;goto B671146;
case 0x671150:c.instructions+=2;goto B671150;
case 0x671151:c.instructions+=1;goto B671151;
case 0x671152:goto L671152;
case 0x671154:c.instructions+=50;goto B671154;
case 0x671155:c.instructions+=49;goto B671155;
case 0x671157:c.instructions+=48;goto B671157;
case 0x67115a:c.instructions+=47;goto B67115a;
case 0x67115f:c.instructions+=46;goto B67115f;
case 0x671162:c.instructions+=45;goto B671162;
case 0x671168:c.instructions+=44;goto B671168;
case 0x67116d:c.instructions+=43;goto B67116d;
case 0x671173:c.instructions+=42;goto B671173;
case 0x67117a:c.instructions+=41;goto B67117a;
case 0x671181:c.instructions+=40;goto B671181;
case 0x671188:c.instructions+=39;goto B671188;
case 0x67118f:c.instructions+=38;goto B67118f;
case 0x671196:c.instructions+=37;goto B671196;
case 0x67119d:c.instructions+=36;goto B67119d;
case 0x6711a4:c.instructions+=35;goto B6711a4;
case 0x6711ab:c.instructions+=34;goto B6711ab;
case 0x6711b2:c.instructions+=33;goto B6711b2;
case 0x6711b9:c.instructions+=32;goto B6711b9;
case 0x6711c0:c.instructions+=31;goto B6711c0;
case 0x6711c7:c.instructions+=30;goto B6711c7;
case 0x6711ce:c.instructions+=29;goto B6711ce;
case 0x6711d5:c.instructions+=28;goto B6711d5;
case 0x6711dc:c.instructions+=27;goto B6711dc;
case 0x6711e3:c.instructions+=26;goto B6711e3;
case 0x6711ea:c.instructions+=25;goto B6711ea;
case 0x6711f4:c.instructions+=24;goto B6711f4;
case 0x6711fe:c.instructions+=23;goto B6711fe;
case 0x671208:c.instructions+=22;goto B671208;
case 0x671212:c.instructions+=21;goto B671212;
case 0x67121c:c.instructions+=20;goto B67121c;
case 0x671226:c.instructions+=19;goto B671226;
case 0x67122d:c.instructions+=18;goto B67122d;
case 0x671237:c.instructions+=17;goto B671237;
case 0x671241:c.instructions+=16;goto B671241;
case 0x671248:c.instructions+=15;goto B671248;
case 0x67124f:c.instructions+=14;goto B67124f;
case 0x671256:c.instructions+=13;goto B671256;
case 0x67125d:c.instructions+=12;goto B67125d;
case 0x671267:c.instructions+=11;goto B671267;
case 0x671271:c.instructions+=10;goto B671271;
case 0x67127b:c.instructions+=9;goto B67127b;
case 0x671285:c.instructions+=8;goto B671285;
case 0x67128f:c.instructions+=7;goto B67128f;
case 0x671299:c.instructions+=6;goto B671299;
case 0x6712a3:c.instructions+=5;goto B6712a3;
case 0x6712a9:c.instructions+=4;goto B6712a9;
case 0x6712af:c.instructions+=3;goto B6712af;
case 0x6712b9:c.instructions+=2;goto B6712b9;
case 0x6712ba:c.instructions+=1;goto B6712ba;
case 0x6712bb:goto L6712bb;
case 0x6712bd:c.instructions+=31;goto B6712bd;
case 0x6712be:c.instructions+=30;goto B6712be;
case 0x6712c0:c.instructions+=29;goto B6712c0;
case 0x6712c3:c.instructions+=28;goto B6712c3;
case 0x6712c4:c.instructions+=27;goto B6712c4;
case 0x6712c5:c.instructions+=26;goto B6712c5;
case 0x6712c6:c.instructions+=25;goto B6712c6;
case 0x6712cb:c.instructions+=24;goto B6712cb;
case 0x6712ce:c.instructions+=23;goto B6712ce;
case 0x6712cf:c.instructions+=22;goto B6712cf;
case 0x6712d0:c.instructions+=21;goto B6712d0;
case 0x6712d1:c.instructions+=20;goto B6712d1;
case 0x6712d2:c.instructions+=19;goto B6712d2;
case 0x6712d7:c.instructions+=18;goto B6712d7;
case 0x6712da:c.instructions+=17;goto B6712da;
case 0x6712db:c.instructions+=16;goto B6712db;
case 0x6712dc:c.instructions+=15;goto B6712dc;
case 0x6712dd:c.instructions+=14;goto B6712dd;
case 0x6712de:c.instructions+=13;goto B6712de;
case 0x6712e0:c.instructions+=12;goto B6712e0;
case 0x6712e2:c.instructions+=11;goto B6712e2;
case 0x6712e4:c.instructions+=10;goto B6712e4;
case 0x6712e6:c.instructions+=9;goto B6712e6;
case 0x6712e8:c.instructions+=8;goto B6712e8;
case 0x6712ef:c.instructions+=7;goto B6712ef;
case 0x6712f1:c.instructions+=6;goto B6712f1;
case 0x6712f3:c.instructions+=5;goto B6712f3;
case 0x6712f6:c.instructions+=4;goto B6712f6;
case 0x6712f9:c.instructions+=3;goto B6712f9;
case 0x6712fc:c.instructions+=2;goto B6712fc;
case 0x6712fe:c.instructions+=1;goto B6712fe;
case 0x671304:goto L671304;
case 0x671308:c.instructions+=19;goto B671308;
case 0x67130d:c.instructions+=18;goto B67130d;
case 0x67130f:c.instructions+=17;goto B67130f;
case 0x671312:c.instructions+=16;goto B671312;
case 0x671317:c.instructions+=15;goto B671317;
case 0x671319:c.instructions+=14;goto B671319;
case 0x67131b:c.instructions+=13;goto B67131b;
case 0x67131d:c.instructions+=12;goto B67131d;
case 0x671320:c.instructions+=11;goto B671320;
case 0x671323:c.instructions+=10;goto B671323;
case 0x671328:c.instructions+=9;goto B671328;
case 0x67132a:c.instructions+=8;goto B67132a;
case 0x67132c:c.instructions+=7;goto B67132c;
case 0x67132e:c.instructions+=6;goto B67132e;
case 0x671331:c.instructions+=5;goto B671331;
case 0x671334:c.instructions+=4;goto B671334;
case 0x671339:c.instructions+=3;goto B671339;
case 0x67133b:c.instructions+=2;goto B67133b;
case 0x671340:c.instructions+=1;goto B671340;
case 0x671342:goto L671342;
case 0x671346:c.instructions+=12;goto B671346;
case 0x67134b:c.instructions+=11;goto B67134b;
case 0x67134d:c.instructions+=10;goto B67134d;
case 0x671352:c.instructions+=9;goto B671352;
case 0x671354:c.instructions+=8;goto B671354;
case 0x671356:c.instructions+=7;goto B671356;
case 0x671358:c.instructions+=6;goto B671358;
case 0x67135e:c.instructions+=5;goto B67135e;
case 0x671361:c.instructions+=4;goto B671361;
case 0x671364:c.instructions+=3;goto B671364;
case 0x671367:c.instructions+=2;goto B671367;
case 0x67136c:c.instructions+=1;goto B67136c;
case 0x67136d:goto L67136d;
case 0x67136f:goto L67136f;
case 0x671374:c.instructions+=12;goto B671374;
case 0x671376:c.instructions+=11;goto B671376;
case 0x671378:c.instructions+=10;goto B671378;
case 0x67137a:c.instructions+=9;goto B67137a;
case 0x671380:c.instructions+=8;goto B671380;
case 0x671383:c.instructions+=7;goto B671383;
case 0x671388:c.instructions+=6;goto B671388;
case 0x67138a:c.instructions+=5;goto B67138a;
case 0x67138c:c.instructions+=4;goto B67138c;
case 0x67138e:c.instructions+=3;goto B67138e;
case 0x671394:c.instructions+=2;goto B671394;
case 0x671397:c.instructions+=1;goto B671397;
case 0x671399:goto L671399;
case 0x67139c:c.instructions+=5;goto B67139c;
case 0x67139d:c.instructions+=4;goto B67139d;
case 0x67139e:c.instructions+=3;goto B67139e;
case 0x67139f:c.instructions+=2;goto B67139f;
case 0x6713a0:c.instructions+=1;goto B6713a0;
case 0x6713a1:goto L6713a1;
case 0x6713a3:c.instructions+=3;goto B6713a3;
case 0x6713a4:c.instructions+=2;goto B6713a4;
case 0x6713a6:c.instructions+=1;goto B6713a6;
case 0x6713ab:goto L6713ab;
case 0x6713ad:c.instructions+=2;goto B6713ad;
case 0x6713b0:c.instructions+=1;goto B6713b0;
case 0x6713b6:goto L6713b6;
case 0x6713b8:c.instructions+=1;goto B6713b8;
case 0x6713be:goto L6713be;
case 0x6713c1:c.instructions+=60;goto B6713c1;
case 0x6713c7:c.instructions+=59;goto B6713c7;
case 0x6713ce:c.instructions+=58;goto B6713ce;
case 0x6713d5:c.instructions+=57;goto B6713d5;
case 0x6713dc:c.instructions+=56;goto B6713dc;
case 0x6713e3:c.instructions+=55;goto B6713e3;
case 0x6713ea:c.instructions+=54;goto B6713ea;
case 0x6713f1:c.instructions+=53;goto B6713f1;
case 0x6713f8:c.instructions+=52;goto B6713f8;
case 0x6713ff:c.instructions+=51;goto B6713ff;
case 0x671406:c.instructions+=50;goto B671406;
case 0x67140d:c.instructions+=49;goto B67140d;
case 0x671414:c.instructions+=48;goto B671414;
case 0x67141b:c.instructions+=47;goto B67141b;
case 0x671422:c.instructions+=46;goto B671422;
case 0x671429:c.instructions+=45;goto B671429;
case 0x671430:c.instructions+=44;goto B671430;
case 0x671437:c.instructions+=43;goto B671437;
case 0x67143e:c.instructions+=42;goto B67143e;
case 0x671445:c.instructions+=41;goto B671445;
case 0x67144c:c.instructions+=40;goto B67144c;
case 0x671453:c.instructions+=39;goto B671453;
case 0x67145a:c.instructions+=38;goto B67145a;
case 0x671461:c.instructions+=37;goto B671461;
case 0x671468:c.instructions+=36;goto B671468;
case 0x67146f:c.instructions+=35;goto B67146f;
case 0x671476:c.instructions+=34;goto B671476;
case 0x67147d:c.instructions+=33;goto B67147d;
case 0x671484:c.instructions+=32;goto B671484;
case 0x67148b:c.instructions+=31;goto B67148b;
case 0x671492:c.instructions+=30;goto B671492;
case 0x67149c:c.instructions+=29;goto B67149c;
case 0x6714a6:c.instructions+=28;goto B6714a6;
case 0x6714b0:c.instructions+=27;goto B6714b0;
case 0x6714ba:c.instructions+=26;goto B6714ba;
case 0x6714c4:c.instructions+=25;goto B6714c4;
case 0x6714ce:c.instructions+=24;goto B6714ce;
case 0x6714d8:c.instructions+=23;goto B6714d8;
case 0x6714e2:c.instructions+=22;goto B6714e2;
case 0x6714ec:c.instructions+=21;goto B6714ec;
case 0x6714f6:c.instructions+=20;goto B6714f6;
case 0x671500:c.instructions+=19;goto B671500;
case 0x67150a:c.instructions+=18;goto B67150a;
case 0x671514:c.instructions+=17;goto B671514;
case 0x67151e:c.instructions+=16;goto B67151e;
case 0x671528:c.instructions+=15;goto B671528;
case 0x671532:c.instructions+=14;goto B671532;
case 0x67153c:c.instructions+=13;goto B67153c;
case 0x671546:c.instructions+=12;goto B671546;
case 0x671550:c.instructions+=11;goto B671550;
case 0x67155a:c.instructions+=10;goto B67155a;
case 0x671564:c.instructions+=9;goto B671564;
case 0x67156e:c.instructions+=8;goto B67156e;
case 0x671578:c.instructions+=7;goto B671578;
case 0x671582:c.instructions+=6;goto B671582;
case 0x67158c:c.instructions+=5;goto B67158c;
case 0x671593:c.instructions+=4;goto B671593;
case 0x67159d:c.instructions+=3;goto B67159d;
case 0x6715a7:c.instructions+=2;goto B6715a7;
case 0x6715b1:c.instructions+=1;goto B6715b1;
case 0x6715b3:goto L6715b3;
case 0x6715b6:c.instructions+=1;goto B6715b6;
case 0x6715b8:goto L6715b8;
case 0x6715bf:c.instructions+=4;goto B6715bf;
case 0x6715c6:c.instructions+=3;goto B6715c6;
case 0x6715d0:c.instructions+=2;goto B6715d0;
case 0x6715da:c.instructions+=1;goto B6715da;
case 0x6715e1:goto L6715e1;
case 0x6715e3:c.instructions+=1;goto B6715e3;
case 0x6715e5:goto L6715e5;
case 0x6715ef:c.instructions+=7;goto B6715ef;
case 0x6715f9:c.instructions+=6;goto B6715f9;
case 0x671603:c.instructions+=5;goto B671603;
case 0x67160d:c.instructions+=4;goto B67160d;
case 0x671617:c.instructions+=3;goto B671617;
case 0x671621:c.instructions+=2;goto B671621;
case 0x67162b:c.instructions+=1;goto B67162b;
case 0x671635:goto L671635;
case 0x671636:c.instructions+=1;goto B671636;
case 0x671637:goto L671637;
case 0x671639:c.instructions+=42;goto B671639;
case 0x67163a:c.instructions+=41;goto B67163a;
case 0x67163c:c.instructions+=40;goto B67163c;
case 0x67163f:c.instructions+=39;goto B67163f;
case 0x671642:c.instructions+=38;goto B671642;
case 0x671645:c.instructions+=37;goto B671645;
case 0x671647:c.instructions+=36;goto B671647;
case 0x671649:c.instructions+=35;goto B671649;
case 0x67164b:c.instructions+=34;goto B67164b;
case 0x67164e:c.instructions+=33;goto B67164e;
case 0x671650:c.instructions+=32;goto B671650;
case 0x671653:c.instructions+=31;goto B671653;
case 0x671655:c.instructions+=30;goto B671655;
case 0x671658:c.instructions+=29;goto B671658;
case 0x67165a:c.instructions+=28;goto B67165a;
case 0x67165d:c.instructions+=27;goto B67165d;
case 0x671660:c.instructions+=26;goto B671660;
case 0x671663:c.instructions+=25;goto B671663;
case 0x671666:c.instructions+=24;goto B671666;
case 0x671669:c.instructions+=23;goto B671669;
case 0x67166c:c.instructions+=22;goto B67166c;
case 0x67166f:c.instructions+=21;goto B67166f;
case 0x671672:c.instructions+=20;goto B671672;
case 0x671674:c.instructions+=19;goto B671674;
case 0x671676:c.instructions+=18;goto B671676;
case 0x671678:c.instructions+=17;goto B671678;
case 0x67167a:c.instructions+=16;goto B67167a;
case 0x67167c:c.instructions+=15;goto B67167c;
case 0x67167f:c.instructions+=14;goto B67167f;
case 0x671681:c.instructions+=13;goto B671681;
case 0x671684:c.instructions+=12;goto B671684;
case 0x671686:c.instructions+=11;goto B671686;
case 0x671689:c.instructions+=10;goto B671689;
case 0x67168b:c.instructions+=9;goto B67168b;
case 0x67168e:c.instructions+=8;goto B67168e;
case 0x671690:c.instructions+=7;goto B671690;
case 0x671692:c.instructions+=6;goto B671692;
case 0x671695:c.instructions+=5;goto B671695;
case 0x671698:c.instructions+=4;goto B671698;
case 0x67169b:c.instructions+=3;goto B67169b;
case 0x67169e:c.instructions+=2;goto B67169e;
case 0x67169f:c.instructions+=1;goto B67169f;
case 0x6716a2:goto L6716a2;
case 0x6716a4:c.instructions+=22;goto B6716a4;
case 0x6716a5:c.instructions+=21;goto B6716a5;
case 0x6716a7:c.instructions+=20;goto B6716a7;
case 0x6716aa:c.instructions+=19;goto B6716aa;
case 0x6716ad:c.instructions+=18;goto B6716ad;
case 0x6716b0:c.instructions+=17;goto B6716b0;
case 0x6716b2:c.instructions+=16;goto B6716b2;
case 0x6716b4:c.instructions+=15;goto B6716b4;
case 0x6716b6:c.instructions+=14;goto B6716b6;
case 0x6716b9:c.instructions+=13;goto B6716b9;
case 0x6716bb:c.instructions+=12;goto B6716bb;
case 0x6716be:c.instructions+=11;goto B6716be;
case 0x6716c1:c.instructions+=10;goto B6716c1;
case 0x6716c4:c.instructions+=9;goto B6716c4;
case 0x6716c7:c.instructions+=8;goto B6716c7;
case 0x6716c9:c.instructions+=7;goto B6716c9;
case 0x6716cb:c.instructions+=6;goto B6716cb;
case 0x6716cd:c.instructions+=5;goto B6716cd;
case 0x6716cf:c.instructions+=4;goto B6716cf;
case 0x6716d2:c.instructions+=3;goto B6716d2;
case 0x6716d5:c.instructions+=2;goto B6716d5;
case 0x6716d6:c.instructions+=1;goto B6716d6;
case 0x6716d9:goto L6716d9;
case 0x6716db:c.instructions+=55;goto B6716db;
case 0x6716dc:c.instructions+=54;goto B6716dc;
case 0x6716de:c.instructions+=53;goto B6716de;
case 0x6716e1:c.instructions+=52;goto B6716e1;
case 0x6716e4:c.instructions+=51;goto B6716e4;
case 0x6716e7:c.instructions+=50;goto B6716e7;
case 0x6716e9:c.instructions+=49;goto B6716e9;
case 0x6716eb:c.instructions+=48;goto B6716eb;
case 0x6716ed:c.instructions+=47;goto B6716ed;
case 0x6716f0:c.instructions+=46;goto B6716f0;
case 0x6716f2:c.instructions+=45;goto B6716f2;
case 0x6716f5:c.instructions+=44;goto B6716f5;
case 0x6716f7:c.instructions+=43;goto B6716f7;
case 0x6716fa:c.instructions+=42;goto B6716fa;
case 0x6716fc:c.instructions+=41;goto B6716fc;
case 0x6716ff:c.instructions+=40;goto B6716ff;
case 0x671702:c.instructions+=39;goto B671702;
case 0x671705:c.instructions+=38;goto B671705;
case 0x671708:c.instructions+=37;goto B671708;
case 0x67170b:c.instructions+=36;goto B67170b;
case 0x67170e:c.instructions+=35;goto B67170e;
case 0x671711:c.instructions+=34;goto B671711;
case 0x671714:c.instructions+=33;goto B671714;
case 0x671716:c.instructions+=32;goto B671716;
case 0x671718:c.instructions+=31;goto B671718;
case 0x67171a:c.instructions+=30;goto B67171a;
case 0x67171c:c.instructions+=29;goto B67171c;
case 0x67171e:c.instructions+=28;goto B67171e;
case 0x671721:c.instructions+=27;goto B671721;
case 0x671724:c.instructions+=26;goto B671724;
case 0x671727:c.instructions+=25;goto B671727;
case 0x67172a:c.instructions+=24;goto B67172a;
case 0x67172d:c.instructions+=23;goto B67172d;
case 0x671730:c.instructions+=22;goto B671730;
case 0x671733:c.instructions+=21;goto B671733;
case 0x671736:c.instructions+=20;goto B671736;
case 0x671738:c.instructions+=19;goto B671738;
case 0x67173a:c.instructions+=18;goto B67173a;
case 0x67173c:c.instructions+=17;goto B67173c;
case 0x67173e:c.instructions+=16;goto B67173e;
case 0x671740:c.instructions+=15;goto B671740;
case 0x671743:c.instructions+=14;goto B671743;
case 0x671745:c.instructions+=13;goto B671745;
case 0x671748:c.instructions+=12;goto B671748;
case 0x67174a:c.instructions+=11;goto B67174a;
case 0x67174d:c.instructions+=10;goto B67174d;
case 0x67174f:c.instructions+=9;goto B67174f;
case 0x671752:c.instructions+=8;goto B671752;
case 0x671754:c.instructions+=7;goto B671754;
case 0x671756:c.instructions+=6;goto B671756;
case 0x671759:c.instructions+=5;goto B671759;
case 0x67175c:c.instructions+=4;goto B67175c;
case 0x67175f:c.instructions+=3;goto B67175f;
case 0x671762:c.instructions+=2;goto B671762;
case 0x671763:c.instructions+=1;goto B671763;
case 0x671766:goto L671766;
case 0x671768:c.instructions+=38;goto B671768;
case 0x671769:c.instructions+=37;goto B671769;
case 0x67176b:c.instructions+=36;goto B67176b;
case 0x67176e:c.instructions+=35;goto B67176e;
case 0x671771:c.instructions+=34;goto B671771;
case 0x671774:c.instructions+=33;goto B671774;
case 0x671776:c.instructions+=32;goto B671776;
case 0x671778:c.instructions+=31;goto B671778;
case 0x67177a:c.instructions+=30;goto B67177a;
case 0x67177d:c.instructions+=29;goto B67177d;
case 0x67177f:c.instructions+=28;goto B67177f;
case 0x671782:c.instructions+=27;goto B671782;
case 0x671784:c.instructions+=26;goto B671784;
case 0x671787:c.instructions+=25;goto B671787;
case 0x67178a:c.instructions+=24;goto B67178a;
case 0x67178d:c.instructions+=23;goto B67178d;
case 0x671790:c.instructions+=22;goto B671790;
case 0x671793:c.instructions+=21;goto B671793;
case 0x671796:c.instructions+=20;goto B671796;
case 0x671798:c.instructions+=19;goto B671798;
case 0x67179a:c.instructions+=18;goto B67179a;
case 0x67179c:c.instructions+=17;goto B67179c;
case 0x67179e:c.instructions+=16;goto B67179e;
case 0x6717a1:c.instructions+=15;goto B6717a1;
case 0x6717a4:c.instructions+=14;goto B6717a4;
case 0x6717a7:c.instructions+=13;goto B6717a7;
case 0x6717aa:c.instructions+=12;goto B6717aa;
case 0x6717ad:c.instructions+=11;goto B6717ad;
case 0x6717b0:c.instructions+=10;goto B6717b0;
case 0x6717b2:c.instructions+=9;goto B6717b2;
case 0x6717b4:c.instructions+=8;goto B6717b4;
case 0x6717b6:c.instructions+=7;goto B6717b6;
case 0x6717b8:c.instructions+=6;goto B6717b8;
case 0x6717ba:c.instructions+=5;goto B6717ba;
case 0x6717bd:c.instructions+=4;goto B6717bd;
case 0x6717c0:c.instructions+=3;goto B6717c0;
case 0x6717c3:c.instructions+=2;goto B6717c3;
case 0x6717c4:c.instructions+=1;goto B6717c4;
case 0x6717c7:goto L6717c7;
case 0x6717c9:c.instructions+=60;goto B6717c9;
case 0x6717ca:c.instructions+=59;goto B6717ca;
case 0x6717cc:c.instructions+=58;goto B6717cc;
case 0x6717cf:c.instructions+=57;goto B6717cf;
case 0x6717d2:c.instructions+=56;goto B6717d2;
case 0x6717d5:c.instructions+=55;goto B6717d5;
case 0x6717d7:c.instructions+=54;goto B6717d7;
case 0x6717d9:c.instructions+=53;goto B6717d9;
case 0x6717db:c.instructions+=52;goto B6717db;
case 0x6717de:c.instructions+=51;goto B6717de;
case 0x6717e0:c.instructions+=50;goto B6717e0;
case 0x6717e3:c.instructions+=49;goto B6717e3;
case 0x6717e5:c.instructions+=48;goto B6717e5;
case 0x6717e8:c.instructions+=47;goto B6717e8;
case 0x6717ea:c.instructions+=46;goto B6717ea;
case 0x6717ed:c.instructions+=45;goto B6717ed;
case 0x6717f0:c.instructions+=44;goto B6717f0;
case 0x6717f3:c.instructions+=43;goto B6717f3;
case 0x6717f6:c.instructions+=42;goto B6717f6;
case 0x6717f9:c.instructions+=41;goto B6717f9;
case 0x6717fc:c.instructions+=40;goto B6717fc;
case 0x6717ff:c.instructions+=39;goto B6717ff;
case 0x671802:c.instructions+=38;goto B671802;
case 0x671804:c.instructions+=37;goto B671804;
case 0x671806:c.instructions+=36;goto B671806;
case 0x671808:c.instructions+=35;goto B671808;
case 0x67180a:c.instructions+=34;goto B67180a;
case 0x67180c:c.instructions+=33;goto B67180c;
case 0x67180f:c.instructions+=32;goto B67180f;
case 0x671812:c.instructions+=31;goto B671812;
case 0x671815:c.instructions+=30;goto B671815;
case 0x671818:c.instructions+=29;goto B671818;
case 0x67181b:c.instructions+=28;goto B67181b;
case 0x67181e:c.instructions+=27;goto B67181e;
case 0x671821:c.instructions+=26;goto B671821;
case 0x671824:c.instructions+=25;goto B671824;
case 0x671826:c.instructions+=24;goto B671826;
case 0x671828:c.instructions+=23;goto B671828;
case 0x67182a:c.instructions+=22;goto B67182a;
case 0x67182c:c.instructions+=21;goto B67182c;
case 0x67182e:c.instructions+=20;goto B67182e;
case 0x671831:c.instructions+=19;goto B671831;
case 0x671834:c.instructions+=18;goto B671834;
case 0x671837:c.instructions+=17;goto B671837;
case 0x67183a:c.instructions+=16;goto B67183a;
case 0x67183d:c.instructions+=15;goto B67183d;
case 0x671840:c.instructions+=14;goto B671840;
case 0x671843:c.instructions+=13;goto B671843;
case 0x671846:c.instructions+=12;goto B671846;
case 0x671848:c.instructions+=11;goto B671848;
case 0x67184a:c.instructions+=10;goto B67184a;
case 0x67184c:c.instructions+=9;goto B67184c;
case 0x67184e:c.instructions+=8;goto B67184e;
case 0x671850:c.instructions+=7;goto B671850;
case 0x671852:c.instructions+=6;goto B671852;
case 0x671855:c.instructions+=5;goto B671855;
case 0x671858:c.instructions+=4;goto B671858;
case 0x67185b:c.instructions+=3;goto B67185b;
case 0x67185e:c.instructions+=2;goto B67185e;
case 0x67185f:c.instructions+=1;goto B67185f;
case 0x671862:goto L671862;
case 0x671864:c.instructions+=20;goto B671864;
case 0x671865:c.instructions+=19;goto B671865;
case 0x671867:c.instructions+=18;goto B671867;
case 0x671868:c.instructions+=17;goto B671868;
case 0x671869:c.instructions+=16;goto B671869;
case 0x67186a:c.instructions+=15;goto B67186a;
case 0x67186d:c.instructions+=14;goto B67186d;
case 0x671870:c.instructions+=13;goto B671870;
case 0x671872:c.instructions+=12;goto B671872;
case 0x671874:c.instructions+=11;goto B671874;
case 0x671877:c.instructions+=10;goto B671877;
case 0x67187a:c.instructions+=9;goto B67187a;
case 0x67187d:c.instructions+=8;goto B67187d;
case 0x671880:c.instructions+=7;goto B671880;
case 0x671882:c.instructions+=6;goto B671882;
case 0x671884:c.instructions+=5;goto B671884;
case 0x671886:c.instructions+=4;goto B671886;
case 0x671889:c.instructions+=3;goto B671889;
case 0x67188c:c.instructions+=2;goto B67188c;
case 0x67188e:c.instructions+=1;goto B67188e;
case 0x671890:goto L671890;
case 0x671892:c.instructions+=4;goto B671892;
case 0x671894:c.instructions+=3;goto B671894;
case 0x671897:c.instructions+=2;goto B671897;
case 0x67189a:c.instructions+=1;goto B67189a;
case 0x67189f:goto L67189f;
case 0x6718a1:c.instructions+=6;goto B6718a1;
case 0x6718a3:c.instructions+=5;goto B6718a3;
case 0x6718a6:c.instructions+=4;goto B6718a6;
case 0x6718a9:c.instructions+=3;goto B6718a9;
case 0x6718ae:c.instructions+=2;goto B6718ae;
case 0x6718b3:c.instructions+=1;goto B6718b3;
case 0x6718b5:goto L6718b5;
case 0x6718b7:c.instructions+=1;goto B6718b7;
case 0x6718b9:goto L6718b9;
case 0x6718bb:c.instructions+=6;goto B6718bb;
case 0x6718bd:c.instructions+=5;goto B6718bd;
case 0x6718c0:c.instructions+=4;goto B6718c0;
case 0x6718c3:c.instructions+=3;goto B6718c3;
case 0x6718c6:c.instructions+=2;goto B6718c6;
case 0x6718c9:c.instructions+=1;goto B6718c9;
case 0x6718cb:goto L6718cb;
case 0x6718ce:c.instructions+=27;goto B6718ce;
case 0x6718d0:c.instructions+=26;goto B6718d0;
case 0x6718d3:c.instructions+=25;goto B6718d3;
case 0x6718d8:c.instructions+=24;goto B6718d8;
case 0x6718de:c.instructions+=23;goto B6718de;
case 0x6718e3:c.instructions+=22;goto B6718e3;
case 0x6718e6:c.instructions+=21;goto B6718e6;
case 0x6718e9:c.instructions+=20;goto B6718e9;
case 0x6718ef:c.instructions+=19;goto B6718ef;
case 0x6718f4:c.instructions+=18;goto B6718f4;
case 0x6718f7:c.instructions+=17;goto B6718f7;
case 0x6718fd:c.instructions+=16;goto B6718fd;
case 0x6718ff:c.instructions+=15;goto B6718ff;
case 0x671904:c.instructions+=14;goto B671904;
case 0x671907:c.instructions+=13;goto B671907;
case 0x67190a:c.instructions+=12;goto B67190a;
case 0x67190c:c.instructions+=11;goto B67190c;
case 0x67190e:c.instructions+=10;goto B67190e;
case 0x671911:c.instructions+=9;goto B671911;
case 0x671913:c.instructions+=8;goto B671913;
case 0x671916:c.instructions+=7;goto B671916;
case 0x671918:c.instructions+=6;goto B671918;
case 0x67191a:c.instructions+=5;goto B67191a;
case 0x67191c:c.instructions+=4;goto B67191c;
case 0x67191f:c.instructions+=3;goto B67191f;
case 0x671922:c.instructions+=2;goto B671922;
case 0x671924:c.instructions+=1;goto B671924;
case 0x671926:goto L671926;
case 0x671929:c.instructions+=3;goto B671929;
case 0x67192a:c.instructions+=2;goto B67192a;
case 0x67192b:c.instructions+=1;goto B67192b;
case 0x67192e:goto L67192e;
case 0x671930:c.instructions+=10;goto B671930;
case 0x671931:c.instructions+=9;goto B671931;
case 0x671933:c.instructions+=8;goto B671933;
case 0x671936:c.instructions+=7;goto B671936;
case 0x671939:c.instructions+=6;goto B671939;
case 0x67193a:c.instructions+=5;goto B67193a;
case 0x67193b:c.instructions+=4;goto B67193b;
case 0x67193e:c.instructions+=3;goto B67193e;
case 0x671940:c.instructions+=2;goto B671940;
case 0x671941:c.instructions+=1;goto B671941;
case 0x671943:goto L671943;
case 0x671946:c.instructions+=1;goto B671946;
case 0x671948:goto L671948;
case 0x67194b:c.instructions+=3;goto B67194b;
case 0x67194e:c.instructions+=2;goto B67194e;
case 0x671951:c.instructions+=1;goto B671951;
case 0x671956:goto L671956;
case 0x67195b:c.instructions+=4;goto B67195b;
case 0x67195f:c.instructions+=3;goto B67195f;
case 0x671963:c.instructions+=2;goto B671963;
case 0x671967:c.instructions+=1;goto B671967;
case 0x67196b:goto L67196b;
case 0x67196d:c.instructions+=15;goto B67196d;
case 0x671971:c.instructions+=14;goto B671971;
case 0x671973:c.instructions+=13;goto B671973;
case 0x671977:c.instructions+=12;goto B671977;
case 0x671979:c.instructions+=11;goto B671979;
case 0x67197d:c.instructions+=10;goto B67197d;
case 0x67197f:c.instructions+=9;goto B67197f;
case 0x671983:c.instructions+=8;goto B671983;
case 0x671985:c.instructions+=7;goto B671985;
case 0x671987:c.instructions+=6;goto B671987;
case 0x671989:c.instructions+=5;goto B671989;
case 0x67198b:c.instructions+=4;goto B67198b;
case 0x67198d:c.instructions+=3;goto B67198d;
case 0x671991:c.instructions+=2;goto B671991;
case 0x671994:c.instructions+=1;goto B671994;
case 0x671996:goto L671996;
case 0x671998:c.instructions+=6;goto B671998;
case 0x67199a:c.instructions+=5;goto B67199a;
case 0x67199c:c.instructions+=4;goto B67199c;
case 0x67199e:c.instructions+=3;goto B67199e;
case 0x6719a1:c.instructions+=2;goto B6719a1;
case 0x6719a2:c.instructions+=1;goto B6719a2;
case 0x6719a4:goto L6719a4;
case 0x6719a6:goto L6719a6;
case 0x6719a8:c.instructions+=2;goto B6719a8;
case 0x6719a9:c.instructions+=1;goto B6719a9;
case 0x6719ac:goto L6719ac;
case 0x6719ae:goto L6719ae;
case 0x6719b1:c.instructions+=1;goto B6719b1;
case 0x6719b4:goto L6719b4;
case 0x6719b7:c.instructions+=3;goto B6719b7;
case 0x6719ba:c.instructions+=2;goto B6719ba;
case 0x6719bd:c.instructions+=1;goto B6719bd;
case 0x6719c2:goto L6719c2;
case 0x6719c7:c.instructions+=4;goto B6719c7;
case 0x6719c9:c.instructions+=3;goto B6719c9;
case 0x6719cc:c.instructions+=2;goto B6719cc;
case 0x6719cf:c.instructions+=1;goto B6719cf;
case 0x6719d2:goto L6719d2;
case 0x6719d4:c.instructions+=15;goto B6719d4;
case 0x6719d8:c.instructions+=14;goto B6719d8;
case 0x6719da:c.instructions+=13;goto B6719da;
case 0x6719de:c.instructions+=12;goto B6719de;
case 0x6719e0:c.instructions+=11;goto B6719e0;
case 0x6719e4:c.instructions+=10;goto B6719e4;
case 0x6719e6:c.instructions+=9;goto B6719e6;
case 0x6719ea:c.instructions+=8;goto B6719ea;
case 0x6719ec:c.instructions+=7;goto B6719ec;
case 0x6719ee:c.instructions+=6;goto B6719ee;
case 0x6719f0:c.instructions+=5;goto B6719f0;
case 0x6719f2:c.instructions+=4;goto B6719f2;
case 0x6719f4:c.instructions+=3;goto B6719f4;
case 0x6719f8:c.instructions+=2;goto B6719f8;
case 0x6719f9:c.instructions+=1;goto B6719f9;
case 0x6719fb:goto L6719fb;
case 0x6719fd:c.instructions+=7;goto B6719fd;
case 0x6719ff:c.instructions+=6;goto B6719ff;
case 0x671a01:c.instructions+=5;goto B671a01;
case 0x671a03:c.instructions+=4;goto B671a03;
case 0x671a06:c.instructions+=3;goto B671a06;
case 0x671a09:c.instructions+=2;goto B671a09;
case 0x671a0a:c.instructions+=1;goto B671a0a;
case 0x671a0c:goto L671a0c;
case 0x671a0d:c.instructions+=4;goto B671a0d;
case 0x671a0e:c.instructions+=3;goto B671a0e;
case 0x671a0f:c.instructions+=2;goto B671a0f;
case 0x671a10:c.instructions+=1;goto B671a10;
case 0x671a13:goto L671a13;
case 0x671a15:c.instructions+=6;goto B671a15;
case 0x671a16:c.instructions+=5;goto B671a16;
case 0x671a18:c.instructions+=4;goto B671a18;
case 0x671a1b:c.instructions+=3;goto B671a1b;
case 0x671a1e:c.instructions+=2;goto B671a1e;
case 0x671a21:c.instructions+=1;goto B671a21;
case 0x671a23:goto L671a23;
case 0x671a26:c.instructions+=1;goto B671a26;
case 0x671a28:goto L671a28;
case 0x671a2b:goto L671a2b;
case 0x671a2c:c.instructions+=7;goto B671a2c;
case 0x671a2d:c.instructions+=6;goto B671a2d;
case 0x671a30:c.instructions+=5;goto B671a30;
case 0x671a31:c.instructions+=4;goto B671a31;
case 0x671a34:c.instructions+=3;goto B671a34;
case 0x671a37:c.instructions+=2;goto B671a37;
case 0x671a3a:c.instructions+=1;goto B671a3a;
case 0x671a3f:goto L671a3f;
case 0x671a44:c.instructions+=5;goto B671a44;
case 0x671a48:c.instructions+=4;goto B671a48;
case 0x671a4a:c.instructions+=3;goto B671a4a;
case 0x671a4d:c.instructions+=2;goto B671a4d;
case 0x671a50:c.instructions+=1;goto B671a50;
case 0x671a53:goto L671a53;
case 0x671a55:c.instructions+=16;goto B671a55;
case 0x671a59:c.instructions+=15;goto B671a59;
case 0x671a5b:c.instructions+=14;goto B671a5b;
case 0x671a5f:c.instructions+=13;goto B671a5f;
case 0x671a61:c.instructions+=12;goto B671a61;
case 0x671a65:c.instructions+=11;goto B671a65;
case 0x671a67:c.instructions+=10;goto B671a67;
case 0x671a6b:c.instructions+=9;goto B671a6b;
case 0x671a6d:c.instructions+=8;goto B671a6d;
case 0x671a6f:c.instructions+=7;goto B671a6f;
case 0x671a71:c.instructions+=6;goto B671a71;
case 0x671a73:c.instructions+=5;goto B671a73;
case 0x671a75:c.instructions+=4;goto B671a75;
case 0x671a77:c.instructions+=3;goto B671a77;
case 0x671a7a:c.instructions+=2;goto B671a7a;
case 0x671a7b:c.instructions+=1;goto B671a7b;
case 0x671a7d:goto L671a7d;
case 0x671a7f:c.instructions+=6;goto B671a7f;
case 0x671a81:c.instructions+=5;goto B671a81;
case 0x671a83:c.instructions+=4;goto B671a83;
case 0x671a85:c.instructions+=3;goto B671a85;
case 0x671a88:c.instructions+=2;goto B671a88;
case 0x671a89:c.instructions+=1;goto B671a89;
case 0x671a8b:goto L671a8b;
case 0x671a8e:c.instructions+=3;goto B671a8e;
case 0x671a91:c.instructions+=2;goto B671a91;
case 0x671a93:c.instructions+=1;goto B671a93;
case 0x671a95:goto L671a95;
case 0x671a97:c.instructions+=2;goto B671a97;
case 0x671a98:c.instructions+=1;goto B671a98;
case 0x671a9a:goto L671a9a;
case 0x671a9c:goto L671a9c;
case 0x671a9d:c.instructions+=4;goto B671a9d;
case 0x671a9e:c.instructions+=3;goto B671a9e;
case 0x671a9f:c.instructions+=2;goto B671a9f;
case 0x671aa0:c.instructions+=1;goto B671aa0;
case 0x671aa3:goto L671aa3;
case 0x671aa5:c.instructions+=15;goto B671aa5;
case 0x671aa6:c.instructions+=14;goto B671aa6;
case 0x671aa8:c.instructions+=13;goto B671aa8;
case 0x671aab:c.instructions+=12;goto B671aab;
case 0x671ab0:c.instructions+=11;goto B671ab0;
case 0x671ab6:c.instructions+=10;goto B671ab6;
case 0x671abd:c.instructions+=9;goto B671abd;
case 0x671ac0:c.instructions+=8;goto B671ac0;
case 0x671ac7:c.instructions+=7;goto B671ac7;
case 0x671ace:c.instructions+=6;goto B671ace;
case 0x671ad5:c.instructions+=5;goto B671ad5;
case 0x671adc:c.instructions+=4;goto B671adc;
case 0x671ae3:c.instructions+=3;goto B671ae3;
case 0x671ae9:c.instructions+=2;goto B671ae9;
case 0x671aea:c.instructions+=1;goto B671aea;
case 0x671aed:goto L671aed;
case 0x671aef:c.instructions+=4;goto B671aef;
case 0x671af0:c.instructions+=3;goto B671af0;
case 0x671af2:c.instructions+=2;goto B671af2;
case 0x671af9:c.instructions+=1;goto B671af9;
case 0x671afb:goto L671afb;
case 0x671b02:c.instructions+=1;goto B671b02;
case 0x671b04:goto L671b04;
case 0x671b05:c.instructions+=5;goto B671b05;
case 0x671b06:c.instructions+=4;goto B671b06;
case 0x671b07:c.instructions+=3;goto B671b07;
case 0x671b0c:c.instructions+=2;goto B671b0c;
case 0x671b0d:c.instructions+=1;goto B671b0d;
case 0x671b13:goto L671b13;
case 0x671b15:c.instructions+=3;goto B671b15;
case 0x671b1b:c.instructions+=2;goto B671b1b;
case 0x671b21:c.instructions+=1;goto B671b21;
case 0x671b23:goto L671b23;
case 0x671b24:c.instructions+=1;goto B671b24;
case 0x671b26:goto L671b26;
case 0x671b28:c.instructions+=1;goto B671b28;
case 0x671b2a:goto L671b2a;
case 0x671b2f:c.instructions+=2;goto B671b2f;
case 0x671b30:c.instructions+=1;goto B671b30;
case 0x671b32:goto L671b32;
case 0x671b37:goto L671b37;
case 0x671b3c:c.instructions+=2;goto B671b3c;
case 0x671b3d:c.instructions+=1;goto B671b3d;
case 0x671b43:goto L671b43;
case 0x671b45:c.instructions+=1;goto B671b45;
case 0x671b47:goto L671b47;
case 0x671b48:c.instructions+=1;goto B671b48;
case 0x671b4a:goto L671b4a;
case 0x671b4c:c.instructions+=1;goto B671b4c;
case 0x671b4e:goto L671b4e;
case 0x671b53:c.instructions+=2;goto B671b53;
case 0x671b54:c.instructions+=1;goto B671b54;
case 0x671b56:goto L671b56;
case 0x671b5b:goto L671b5b;
case 0x671b5c:c.instructions+=2;goto B671b5c;
case 0x671b5d:c.instructions+=1;goto B671b5d;
case 0x671b5e:goto L671b5e;
case 0x671b65:c.instructions+=1;goto B671b65;
case 0x671b67:goto L671b67;
case 0x671b69:c.instructions+=4;goto B671b69;
case 0x671b6e:c.instructions+=3;goto B671b6e;
case 0x671b73:c.instructions+=2;goto B671b73;
case 0x671b75:c.instructions+=1;goto B671b75;
case 0x671b7a:goto L671b7a;
case 0x671b7c:c.instructions+=1;goto B671b7c;
case 0x671b7e:goto L671b7e;
case 0x671b84:goto L671b84;
case 0x671b8b:c.instructions+=1;goto B671b8b;
case 0x671b8d:goto L671b8d;
case 0x671b97:goto L671b97;
case 0x671b9e:c.instructions+=1;goto B671b9e;
case 0x671ba0:goto L671ba0;
case 0x671ba5:c.instructions+=2;goto B671ba5;
case 0x671ba7:c.instructions+=1;goto B671ba7;
case 0x671ba9:goto L671ba9;
case 0x671bac:c.instructions+=1;goto B671bac;
case 0x671bae:goto L671bae;
case 0x671baf:goto L671baf;
case 0x671bb4:c.instructions+=2;goto B671bb4;
case 0x671bb6:c.instructions+=1;goto B671bb6;
case 0x671bb8:goto L671bb8;
case 0x671bbb:c.instructions+=1;goto B671bbb;
case 0x671bbd:goto L671bbd;
case 0x671bbe:goto L671bbe;
case 0x671bbf:c.instructions+=1;goto B671bbf;
case 0x671bc2:goto L671bc2;
case 0x671bc4:c.instructions+=7;goto B671bc4;
case 0x671bc5:c.instructions+=6;goto B671bc5;
case 0x671bc7:c.instructions+=5;goto B671bc7;
case 0x671bc8:c.instructions+=4;goto B671bc8;
case 0x671bc9:c.instructions+=3;goto B671bc9;
case 0x671bcb:c.instructions+=2;goto B671bcb;
case 0x671bd1:c.instructions+=1;goto B671bd1;
case 0x671bd3:goto L671bd3;
case 0x671bd4:c.instructions+=7;goto B671bd4;
case 0x671bd6:c.instructions+=6;goto B671bd6;
case 0x671bd7:c.instructions+=5;goto B671bd7;
case 0x671bd8:c.instructions+=4;goto B671bd8;
case 0x671bd9:c.instructions+=3;goto B671bd9;
case 0x671bdf:c.instructions+=2;goto B671bdf;
case 0x671be2:c.instructions+=1;goto B671be2;
case 0x671be7:goto L671be7;
case 0x671be8:c.instructions+=2;goto B671be8;
case 0x671bea:c.instructions+=1;goto B671bea;
case 0x671bef:goto L671bef;
case 0x671bf1:c.instructions+=4;goto B671bf1;
case 0x671bf2:c.instructions+=3;goto B671bf2;
case 0x671bf3:c.instructions+=2;goto B671bf3;
case 0x671bf5:c.instructions+=1;goto B671bf5;
case 0x671bf7:goto L671bf7;
case 0x671bf9:c.instructions+=1;goto B671bf9;
case 0x671bfb:goto L671bfb;
case 0x671bfd:c.instructions+=1;goto B671bfd;
case 0x671bff:goto L671bff;
case 0x671c02:goto L671c02;
case 0x671c04:c.instructions+=1;goto B671c04;
case 0x671c06:goto L671c06;
case 0x671c07:c.instructions+=1;goto B671c07;
case 0x671c0c:goto L671c0c;
case 0x671c0d:goto L671c0d;
case 0x671c0f:c.instructions+=1;goto B671c0f;
case 0x671c11:goto L671c11;
case 0x671c13:c.instructions+=1;goto B671c13;
case 0x671c15:goto L671c15;
case 0x671c16:c.instructions+=1;goto B671c16;
case 0x671c1b:goto L671c1b;
case 0x671c1c:goto L671c1c;
case 0x671c1e:c.instructions+=1;goto B671c1e;
case 0x671c23:goto L671c23;
case 0x671c27:c.instructions+=2;goto B671c27;
case 0x671c28:c.instructions+=1;goto B671c28;
case 0x671c2a:goto L671c2a;
case 0x671c30:c.instructions+=2;goto B671c30;
case 0x671c35:c.instructions+=1;goto B671c35;
case 0x671c37:goto L671c37;
case 0x671c3c:c.instructions+=1;goto B671c3c;
case 0x671c3e:goto L671c3e;
case 0x671c43:c.instructions+=1;goto B671c43;
case 0x671c45:goto L671c45;
case 0x671c4a:c.instructions+=1;goto B671c4a;
case 0x671c4c:goto L671c4c;
case 0x671c4d:c.instructions+=1;goto B671c4d;
case 0x671c4e:goto L671c4e;
case 0x671c4f:c.instructions+=2;goto B671c4f;
case 0x671c50:c.instructions+=1;goto B671c50;
case 0x671c51:goto L671c51;
case 0x671c53:c.instructions+=9;goto B671c53;
case 0x671c54:c.instructions+=8;goto B671c54;
case 0x671c56:c.instructions+=7;goto B671c56;
case 0x671c59:c.instructions+=6;goto B671c59;
case 0x671c5a:c.instructions+=5;goto B671c5a;
case 0x671c5d:c.instructions+=4;goto B671c5d;
case 0x671c5f:c.instructions+=3;goto B671c5f;
case 0x671c62:c.instructions+=2;goto B671c62;
case 0x671c63:c.instructions+=1;goto B671c63;
case 0x671c69:goto L671c69;
case 0x671c6c:c.instructions+=13;goto B671c6c;
case 0x671c6f:c.instructions+=12;goto B671c6f;
case 0x671c73:c.instructions+=11;goto B671c73;
case 0x671c77:c.instructions+=10;goto B671c77;
case 0x671c7b:c.instructions+=9;goto B671c7b;
case 0x671c7e:c.instructions+=8;goto B671c7e;
case 0x671c82:c.instructions+=7;goto B671c82;
case 0x671c83:c.instructions+=6;goto B671c83;
case 0x671c85:c.instructions+=5;goto B671c85;
case 0x671c87:c.instructions+=4;goto B671c87;
case 0x671c8a:c.instructions+=3;goto B671c8a;
case 0x671c8c:c.instructions+=2;goto B671c8c;
case 0x671c8f:c.instructions+=1;goto B671c8f;
case 0x671c91:goto L671c91;
case 0x671c96:goto L671c96;
case 0x671c9a:c.instructions+=8;goto B671c9a;
case 0x671c9b:c.instructions+=7;goto B671c9b;
case 0x671c9d:c.instructions+=6;goto B671c9d;
case 0x671c9f:c.instructions+=5;goto B671c9f;
case 0x671ca2:c.instructions+=4;goto B671ca2;
case 0x671ca4:c.instructions+=3;goto B671ca4;
case 0x671ca5:c.instructions+=2;goto B671ca5;
case 0x671ca6:c.instructions+=1;goto B671ca6;
case 0x671ca9:goto L671ca9;
case 0x671cab:c.instructions+=3;goto B671cab;
case 0x671cac:c.instructions+=2;goto B671cac;
case 0x671cae:c.instructions+=1;goto B671cae;
case 0x671cb0:goto L671cb0;
case 0x671cb2:c.instructions+=6;goto B671cb2;
case 0x671cb4:c.instructions+=5;goto B671cb4;
case 0x671cb9:c.instructions+=4;goto B671cb9;
case 0x671cbb:c.instructions+=3;goto B671cbb;
case 0x671cbc:c.instructions+=2;goto B671cbc;
case 0x671cbe:c.instructions+=1;goto B671cbe;
case 0x671cc4:goto L671cc4;
case 0x671cc7:c.instructions+=1;goto B671cc7;
case 0x671cc9:goto L671cc9;
case 0x671cca:c.instructions+=1;goto B671cca;
case 0x671ccb:goto L671ccb;
case 0x671ccd:c.instructions+=16;goto B671ccd;
case 0x671cce:c.instructions+=15;goto B671cce;
case 0x671cd0:c.instructions+=14;goto B671cd0;
case 0x671cd1:c.instructions+=13;goto B671cd1;
case 0x671cd4:c.instructions+=12;goto B671cd4;
case 0x671cd5:c.instructions+=11;goto B671cd5;
case 0x671cd6:c.instructions+=10;goto B671cd6;
case 0x671cd8:c.instructions+=9;goto B671cd8;
case 0x671cdb:c.instructions+=8;goto B671cdb;
case 0x671cdc:c.instructions+=7;goto B671cdc;
case 0x671cdf:c.instructions+=6;goto B671cdf;
case 0x671ce1:c.instructions+=5;goto B671ce1;
case 0x671ce5:c.instructions+=4;goto B671ce5;
case 0x671ce7:c.instructions+=3;goto B671ce7;
case 0x671cea:c.instructions+=2;goto B671cea;
case 0x671ced:c.instructions+=1;goto B671ced;
case 0x671cf3:goto L671cf3;
case 0x671cf6:c.instructions+=6;goto B671cf6;
case 0x671cf9:c.instructions+=5;goto B671cf9;
case 0x671cfb:c.instructions+=4;goto B671cfb;
case 0x671cfe:c.instructions+=3;goto B671cfe;
case 0x671d01:c.instructions+=2;goto B671d01;
case 0x671d03:c.instructions+=1;goto B671d03;
case 0x671d05:goto L671d05;
case 0x671d08:c.instructions+=4;goto B671d08;
case 0x671d0a:c.instructions+=3;goto B671d0a;
case 0x671d0c:c.instructions+=2;goto B671d0c;
case 0x671d0f:c.instructions+=1;goto B671d0f;
case 0x671d11:goto L671d11;
case 0x671d13:c.instructions+=4;goto B671d13;
case 0x671d18:c.instructions+=3;goto B671d18;
case 0x671d1b:c.instructions+=2;goto B671d1b;
case 0x671d1d:c.instructions+=1;goto B671d1d;
case 0x671d23:goto L671d23;
case 0x671d25:c.instructions+=2;goto B671d25;
case 0x671d28:c.instructions+=1;goto B671d28;
case 0x671d2e:goto L671d2e;
case 0x671d31:c.instructions+=9;goto B671d31;
case 0x671d35:c.instructions+=8;goto B671d35;
case 0x671d36:c.instructions+=7;goto B671d36;
case 0x671d38:c.instructions+=6;goto B671d38;
case 0x671d3a:c.instructions+=5;goto B671d3a;
case 0x671d3f:c.instructions+=4;goto B671d3f;
case 0x671d41:c.instructions+=3;goto B671d41;
case 0x671d42:c.instructions+=2;goto B671d42;
case 0x671d45:c.instructions+=1;goto B671d45;
case 0x671d4b:goto L671d4b;
case 0x671d4d:c.instructions+=1;goto B671d4d;
case 0x671d4f:goto L671d4f;
case 0x671d54:c.instructions+=3;goto B671d54;
case 0x671d55:c.instructions+=2;goto B671d55;
case 0x671d58:c.instructions+=1;goto B671d58;
case 0x671d5e:goto L671d5e;
case 0x671d60:goto L671d60;
case 0x671d63:c.instructions+=5;goto B671d63;
case 0x671d65:c.instructions+=4;goto B671d65;
case 0x671d67:c.instructions+=3;goto B671d67;
case 0x671d69:c.instructions+=2;goto B671d69;
case 0x671d6c:c.instructions+=1;goto B671d6c;
case 0x671d6f:goto L671d6f;
case 0x671d72:goto L671d72;
case 0x671d74:c.instructions+=3;goto B671d74;
case 0x671d77:c.instructions+=2;goto B671d77;
case 0x671d7a:c.instructions+=1;goto B671d7a;
case 0x671d7c:goto L671d7c;
case 0x671d7d:c.instructions+=4;goto B671d7d;
case 0x671d7e:c.instructions+=3;goto B671d7e;
case 0x671d7f:c.instructions+=2;goto B671d7f;
case 0x671d80:c.instructions+=1;goto B671d80;
case 0x671d83:goto L671d83;
case 0x671d86:c.instructions+=2;goto B671d86;
case 0x671d88:c.instructions+=1;goto B671d88;
case 0x671d8a:goto L671d8a;
case 0x671d8d:c.instructions+=13;goto B671d8d;
case 0x671d91:c.instructions+=12;goto B671d91;
case 0x671d92:c.instructions+=11;goto B671d92;
case 0x671d94:c.instructions+=10;goto B671d94;
case 0x671d96:c.instructions+=9;goto B671d96;
case 0x671d98:c.instructions+=8;goto B671d98;
case 0x671d9d:c.instructions+=7;goto B671d9d;
case 0x671d9f:c.instructions+=6;goto B671d9f;
case 0x671da1:c.instructions+=5;goto B671da1;
case 0x671da2:c.instructions+=4;goto B671da2;
case 0x671da4:c.instructions+=3;goto B671da4;
case 0x671da6:c.instructions+=2;goto B671da6;
case 0x671da7:c.instructions+=1;goto B671da7;
case 0x671dad:goto L671dad;
case 0x671daf:c.instructions+=1;goto B671daf;
case 0x671db1:goto L671db1;
case 0x671db3:c.instructions+=1;goto B671db3;
case 0x671db5:goto L671db5;
case 0x671db7:c.instructions+=5;goto B671db7;
case 0x671db8:c.instructions+=4;goto B671db8;
case 0x671dba:c.instructions+=3;goto B671dba;
case 0x671dbd:c.instructions+=2;goto B671dbd;
case 0x671dbf:c.instructions+=1;goto B671dbf;
case 0x671dc1:goto L671dc1;
case 0x671dc4:goto L671dc4;
case 0x671dc5:c.instructions+=3;goto B671dc5;
case 0x671dc8:c.instructions+=2;goto B671dc8;
case 0x671dca:c.instructions+=1;goto B671dca;
case 0x671dcc:goto L671dcc;
case 0x671dcf:goto L671dcf;
case 0x671dd2:c.instructions+=2;goto B671dd2;
case 0x671dd4:c.instructions+=1;goto B671dd4;
case 0x671dd6:goto L671dd6;
case 0x671ddb:c.instructions+=1;goto B671ddb;
case 0x671de0:goto L671de0;
case 0x671de1:c.instructions+=6;goto B671de1;
case 0x671de3:c.instructions+=5;goto B671de3;
case 0x671de5:c.instructions+=4;goto B671de5;
case 0x671dea:c.instructions+=3;goto B671dea;
case 0x671dec:c.instructions+=2;goto B671dec;
case 0x671df1:c.instructions+=1;goto B671df1;
case 0x671df3:goto L671df3;
case 0x671df8:c.instructions+=1;goto B671df8;
case 0x671dfa:goto L671dfa;
case 0x671dff:c.instructions+=1;goto B671dff;
case 0x671e01:goto L671e01;
case 0x671e06:c.instructions+=1;goto B671e06;
case 0x671e08:goto L671e08;
case 0x671e0d:c.instructions+=1;goto B671e0d;
case 0x671e0f:goto L671e0f;
case 0x671e11:c.instructions+=1;goto B671e11;
case 0x671e13:goto L671e13;
case 0x671e18:c.instructions+=1;goto B671e18;
case 0x671e1a:goto L671e1a;
case 0x671e1d:c.instructions+=2;goto B671e1d;
case 0x671e22:c.instructions+=1;goto B671e22;
case 0x671e23:goto L671e23;
case 0x671e25:c.instructions+=2;goto B671e25;
case 0x671e27:c.instructions+=1;goto B671e27;
case 0x671e29:goto L671e29;
case 0x671e2b:c.instructions+=3;goto B671e2b;
case 0x671e2d:c.instructions+=2;goto B671e2d;
case 0x671e2f:c.instructions+=1;goto B671e2f;
case 0x671e31:goto L671e31;
case 0x671e37:c.instructions+=1;goto B671e37;
case 0x671e39:goto L671e39;
case 0x671e3c:c.instructions+=3;goto B671e3c;
case 0x671e41:c.instructions+=2;goto B671e41;
case 0x671e44:c.instructions+=1;goto B671e44;
case 0x671e46:goto L671e46;
case 0x671e49:c.instructions+=2;goto B671e49;
case 0x671e4c:c.instructions+=1;goto B671e4c;
case 0x671e4e:goto L671e4e;
case 0x671e51:c.instructions+=2;goto B671e51;
case 0x671e53:c.instructions+=1;goto B671e53;
case 0x671e55:goto L671e55;
case 0x671e58:c.instructions+=1;goto B671e58;
case 0x671e5a:goto L671e5a;
case 0x671e5c:c.instructions+=1;goto B671e5c;
case 0x671e5e:goto L671e5e;
case 0x671e65:c.instructions+=1;goto B671e65;
case 0x671e67:goto L671e67;
case 0x671e69:goto L671e69;
case 0x671e6a:goto L671e6a;
case 0x671e6b:goto L671e6b;
case 0x671e6c:c.instructions+=2;goto B671e6c;
case 0x671e6d:c.instructions+=1;goto B671e6d;
case 0x671e70:goto L671e70;
case 0x671e72:c.instructions+=3;goto B671e72;
case 0x671e74:c.instructions+=2;goto B671e74;
case 0x671e7a:c.instructions+=1;goto B671e7a;
case 0x671e7c:goto L671e7c;
case 0x671e7f:c.instructions+=1;goto B671e7f;
case 0x671e82:goto L671e82;
case 0x671e85:c.instructions+=1;goto B671e85;
case 0x671e87:goto L671e87;
case 0x671e8a:c.instructions+=1;goto B671e8a;
case 0x671e8c:goto L671e8c;
case 0x671e8f:goto L671e8f;
case 0x671e92:c.instructions+=2;goto B671e92;
case 0x671e95:c.instructions+=1;goto B671e95;
case 0x671e97:goto L671e97;
case 0x671e99:c.instructions+=2;goto B671e99;
case 0x671e9a:c.instructions+=1;goto B671e9a;
case 0x671e9c:goto L671e9c;
case 0x671e9e:c.instructions+=8;goto B671e9e;
case 0x671e9f:c.instructions+=7;goto B671e9f;
case 0x671ea1:c.instructions+=6;goto B671ea1;
case 0x671ea4:c.instructions+=5;goto B671ea4;
case 0x671ea7:c.instructions+=4;goto B671ea7;
case 0x671ea9:c.instructions+=3;goto B671ea9;
case 0x671eaa:c.instructions+=2;goto B671eaa;
case 0x671eab:c.instructions+=1;goto B671eab;
case 0x671ead:goto L671ead;
case 0x671eb2:c.instructions+=1;goto B671eb2;
case 0x671eb7:goto L671eb7;
case 0x671eba:c.instructions+=3;goto B671eba;
case 0x671ebe:c.instructions+=2;goto B671ebe;
case 0x671ec0:c.instructions+=1;goto B671ec0;
case 0x671ec2:goto L671ec2;
case 0x671ec5:goto L671ec5;
case 0x671ec6:c.instructions+=7;goto B671ec6;
case 0x671ec8:c.instructions+=6;goto B671ec8;
case 0x671eca:c.instructions+=5;goto B671eca;
case 0x671ecf:c.instructions+=4;goto B671ecf;
case 0x671ed1:c.instructions+=3;goto B671ed1;
case 0x671ed6:c.instructions+=2;goto B671ed6;
case 0x671ed9:c.instructions+=1;goto B671ed9;
case 0x671edf:goto L671edf;
case 0x671ee4:c.instructions+=1;goto B671ee4;
case 0x671eea:goto L671eea;
case 0x671eec:c.instructions+=1;goto B671eec;
case 0x671eee:goto L671eee;
case 0x671ef3:c.instructions+=1;goto B671ef3;
case 0x671ef8:goto L671ef8;
case 0x671efb:c.instructions+=2;goto B671efb;
case 0x671efd:c.instructions+=1;goto B671efd;
case 0x671f03:goto L671f03;
case 0x671f06:c.instructions+=3;goto B671f06;
case 0x671f09:c.instructions+=2;goto B671f09;
case 0x671f0e:c.instructions+=1;goto B671f0e;
case 0x671f13:goto L671f13;
case 0x671f15:c.instructions+=3;goto B671f15;
case 0x671f17:c.instructions+=2;goto B671f17;
case 0x671f1a:c.instructions+=1;goto B671f1a;
case 0x671f1c:goto L671f1c;
case 0x671f1f:c.instructions+=7;goto B671f1f;
case 0x671f21:c.instructions+=6;goto B671f21;
case 0x671f24:c.instructions+=5;goto B671f24;
case 0x671f2a:c.instructions+=4;goto B671f2a;
case 0x671f30:c.instructions+=3;goto B671f30;
case 0x671f32:c.instructions+=2;goto B671f32;
case 0x671f38:c.instructions+=1;goto B671f38;
case 0x671f3a:goto L671f3a;
case 0x671f3c:c.instructions+=1;goto B671f3c;
case 0x671f3e:goto L671f3e;
case 0x671f41:c.instructions+=8;goto B671f41;
case 0x671f44:c.instructions+=7;goto B671f44;
case 0x671f46:c.instructions+=6;goto B671f46;
case 0x671f49:c.instructions+=5;goto B671f49;
case 0x671f4c:c.instructions+=4;goto B671f4c;
case 0x671f4e:c.instructions+=3;goto B671f4e;
case 0x671f52:c.instructions+=2;goto B671f52;
case 0x671f54:c.instructions+=1;goto B671f54;
case 0x671f58:goto L671f58;
case 0x671f5b:goto L671f5b;
case 0x671f5d:c.instructions+=4;goto B671f5d;
case 0x671f5f:c.instructions+=3;goto B671f5f;
case 0x671f61:c.instructions+=2;goto B671f61;
case 0x671f63:c.instructions+=1;goto B671f63;
case 0x671f69:goto L671f69;
case 0x671f6f:c.instructions+=1;goto B671f6f;
case 0x671f71:goto L671f71;
case 0x671f74:c.instructions+=2;goto B671f74;
case 0x671f76:c.instructions+=1;goto B671f76;
case 0x671f78:goto L671f78;
case 0x671f7b:c.instructions+=1;goto B671f7b;
case 0x671f7e:goto L671f7e;
case 0x671f81:c.instructions+=2;goto B671f81;
case 0x671f84:c.instructions+=1;goto B671f84;
case 0x671f86:goto L671f86;
case 0x671f88:c.instructions+=1;goto B671f88;
case 0x671f8e:goto L671f8e;
case 0x671f91:c.instructions+=8;goto B671f91;
case 0x671f93:c.instructions+=7;goto B671f93;
case 0x671f96:c.instructions+=6;goto B671f96;
case 0x671f9b:c.instructions+=5;goto B671f9b;
case 0x671f9c:c.instructions+=4;goto B671f9c;
case 0x671f9e:c.instructions+=3;goto B671f9e;
case 0x671fa0:c.instructions+=2;goto B671fa0;
case 0x671fa3:c.instructions+=1;goto B671fa3;
case 0x671fa5:goto L671fa5;
case 0x671fa8:c.instructions+=5;goto B671fa8;
case 0x671faa:c.instructions+=4;goto B671faa;
case 0x671fb0:c.instructions+=3;goto B671fb0;
case 0x671fb5:c.instructions+=2;goto B671fb5;
case 0x671fb7:c.instructions+=1;goto B671fb7;
case 0x671fb9:goto L671fb9;
case 0x671fbe:c.instructions+=1;goto B671fbe;
case 0x671fc0:goto L671fc0;
case 0x671fc3:c.instructions+=4;goto B671fc3;
case 0x671fc6:c.instructions+=3;goto B671fc6;
case 0x671fcd:c.instructions+=2;goto B671fcd;
case 0x671fd1:c.instructions+=1;goto B671fd1;
case 0x671fd3:goto L671fd3;
case 0x671fd8:c.instructions+=1;goto B671fd8;
case 0x671fda:goto L671fda;
case 0x671fdd:c.instructions+=1;goto B671fdd;
case 0x671fdf:goto L671fdf;
case 0x671fe2:c.instructions+=4;goto B671fe2;
case 0x671fe5:c.instructions+=3;goto B671fe5;
case 0x671fea:c.instructions+=2;goto B671fea;
case 0x671fed:c.instructions+=1;goto B671fed;
case 0x671fef:goto L671fef;
case 0x671ff4:c.instructions+=1;goto B671ff4;
case 0x671ff6:goto L671ff6;
case 0x671ffb:c.instructions+=1;goto B671ffb;
case 0x671ffd:goto L671ffd;
default:missing_instruction(c.pc);}
B671000:L671000:{c.instructions+=43;NFSU2_TR(0x671000);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x68b0d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671007:{NFSU2_TR(0x671007);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x68ce7cull));
s4(u32(r4(U+0)),r4(U+4));
}
B67100e:{NFSU2_TR(0x67100e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x689fc7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671015:{NFSU2_TR(0x671015);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x689bacull));
s4(u32(r4(U+0)),r4(U+4));
}
B67101c:{NFSU2_TR(0x67101c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x68d465ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671023:{NFSU2_TR(0x671023);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x689b53ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67102a:{NFSU2_TR(0x67102a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x68d531ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671031:{NFSU2_TR(0x671031);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x689be5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671038:{NFSU2_TR(0x671038);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0x68a1d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67103f:{NFSU2_TR(0x67103f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x689c79ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671046:{NFSU2_TR(0x671046);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w4(U+4,u32(0x68a10full));
s4(u32(r4(U+0)),r4(U+4));
}
B67104d:{NFSU2_TR(0x67104d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x689808ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671054:{NFSU2_TR(0x671054);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x68978dull));
s4(u32(r4(U+0)),r4(U+4));
}
B67105b:{NFSU2_TR(0x67105b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
w4(U+4,u32(0x6899e7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671062:{NFSU2_TR(0x671062);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
w4(U+4,u32(0x689928ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671069:{NFSU2_TR(0x671069);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w4(U+4,u32(0x68a71cull));
s4(u32(r4(U+0)),r4(U+4));
}
B671070:{NFSU2_TR(0x671070);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w4(U+4,u32(0x689d1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B671077:{NFSU2_TR(0x671077);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
w4(U+4,u32(0x68a44eull));
s4(u32(r4(U+0)),r4(U+4));
}
B671081:{NFSU2_TR(0x671081);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
w4(U+4,u32(0x68a26cull));
s4(u32(r4(U+0)),r4(U+4));
}
B67108b:{NFSU2_TR(0x67108b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w4(U+4,u32(0x68a627ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671095:{NFSU2_TR(0x671095);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
w4(U+4,u32(0x68a503ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67109f:{NFSU2_TR(0x67109f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
w4(U+4,u32(0x68a3a7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710a9:{NFSU2_TR(0x6710a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
w4(U+4,u32(0x68a683ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710b3:{NFSU2_TR(0x6710b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x68a59full));
s4(u32(r4(U+0)),r4(U+4));
}
B6710ba:{NFSU2_TR(0x6710ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
w4(U+4,u32(0x68a320ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710c4:{NFSU2_TR(0x6710c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w4(U+4,u32(0x68a6cbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710ce:{NFSU2_TR(0x6710ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x68a7ccull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710d5:{NFSU2_TR(0x6710d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
w4(U+4,u32(0x68a990ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710dc:{NFSU2_TR(0x6710dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(0x68a8a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710e3:{NFSU2_TR(0x6710e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
w4(U+4,u32(0x68aa88ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710ea:{NFSU2_TR(0x6710ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
w4(U+4,u32(0x68bfa7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710f4:{NFSU2_TR(0x6710f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
w4(U+4,u32(0x68b4d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6710fe:{NFSU2_TR(0x6710fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
w4(U+4,u32(0x68b658ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671108:{NFSU2_TR(0x671108);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
w4(U+4,u32(0x68b7b4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671112:{NFSU2_TR(0x671112);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
w4(U+4,u32(0x68b305ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67111c:{NFSU2_TR(0x67111c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w4(U+4,u32(0x68bc79ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671126:{NFSU2_TR(0x671126);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
w4(U+4,u32(0x68bac5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671130:{NFSU2_TR(0x671130);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671136:{NFSU2_TR(0x671136);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67113c:{NFSU2_TR(0x67113c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
w4(U+4,u32(0x68ab60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671146:{NFSU2_TR(0x671146);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
w4(U+4,u32(0x6898a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671150:{NFSU2_TR(0x671150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B671151:{NFSU2_TR(0x671151);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671152:L671152:{c.instructions+=51;NFSU2_TR(0x671152);
__builtin_memmove((R+28),(R+28),4);
}
B671154:{NFSU2_TR(0x671154);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671155:{NFSU2_TR(0x671155);
__builtin_memmove((R+20),(R+16),4);
}
B671157:{NFSU2_TR(0x671157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67115a:{NFSU2_TR(0x67115a);
w4(R+4,u32(0x68cdbcull));
}
B67115f:{NFSU2_TR(0x67115f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671162:{NFSU2_TR(0x671162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671168:{NFSU2_TR(0x671168);
w4(R+4,u32(0x68c63dull));
}
B67116d:{NFSU2_TR(0x67116d);
u8 U[4];
w4(U+0,u32(0x689b13ull));
s4(u32(r4(R+0)),r4(U+0));
}
B671173:{NFSU2_TR(0x671173);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x68b0d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67117a:{NFSU2_TR(0x67117a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x68ce7cull));
s4(u32(r4(U+0)),r4(U+4));
}
B671181:{NFSU2_TR(0x671181);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x689fc7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671188:{NFSU2_TR(0x671188);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x689bacull));
s4(u32(r4(U+0)),r4(U+4));
}
B67118f:{NFSU2_TR(0x67118f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x68d465ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671196:{NFSU2_TR(0x671196);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x689b53ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67119d:{NFSU2_TR(0x67119d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x68d531ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711a4:{NFSU2_TR(0x6711a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x68cfb2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711ab:{NFSU2_TR(0x6711ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0x68a1d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711b2:{NFSU2_TR(0x6711b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x68d046ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711b9:{NFSU2_TR(0x6711b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w4(U+4,u32(0x68d0e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711c0:{NFSU2_TR(0x6711c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x689808ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711c7:{NFSU2_TR(0x6711c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x68978dull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711ce:{NFSU2_TR(0x6711ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
w4(U+4,u32(0x68d6e4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711d5:{NFSU2_TR(0x6711d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
w4(U+4,u32(0x68d625ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711dc:{NFSU2_TR(0x6711dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w4(U+4,u32(0x68a71cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711e3:{NFSU2_TR(0x6711e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w4(U+4,u32(0x689d1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711ea:{NFSU2_TR(0x6711ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
w4(U+4,u32(0x68a44eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711f4:{NFSU2_TR(0x6711f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
w4(U+4,u32(0x68a26cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6711fe:{NFSU2_TR(0x6711fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w4(U+4,u32(0x68a627ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671208:{NFSU2_TR(0x671208);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
w4(U+4,u32(0x68a503ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671212:{NFSU2_TR(0x671212);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
w4(U+4,u32(0x68a3a7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67121c:{NFSU2_TR(0x67121c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
w4(U+4,u32(0x68a683ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671226:{NFSU2_TR(0x671226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x68a59full));
s4(u32(r4(U+0)),r4(U+4));
}
B67122d:{NFSU2_TR(0x67122d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
w4(U+4,u32(0x68a320ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671237:{NFSU2_TR(0x671237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w4(U+4,u32(0x68a6cbull));
s4(u32(r4(U+0)),r4(U+4));
}
B671241:{NFSU2_TR(0x671241);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x68a7ccull));
s4(u32(r4(U+0)),r4(U+4));
}
B671248:{NFSU2_TR(0x671248);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
w4(U+4,u32(0x68d295ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67124f:{NFSU2_TR(0x67124f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(0x68d1a9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671256:{NFSU2_TR(0x671256);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
w4(U+4,u32(0x68d38dull));
s4(u32(r4(U+0)),r4(U+4));
}
B67125d:{NFSU2_TR(0x67125d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
w4(U+4,u32(0x68cce8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671267:{NFSU2_TR(0x671267);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
w4(U+4,u32(0x68c250ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671271:{NFSU2_TR(0x671271);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
w4(U+4,u32(0x68c3d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67127b:{NFSU2_TR(0x67127b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
w4(U+4,u32(0x68c52cull));
s4(u32(r4(U+0)),r4(U+4));
}
B671285:{NFSU2_TR(0x671285);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
w4(U+4,u32(0x68c07dull));
s4(u32(r4(U+0)),r4(U+4));
}
B67128f:{NFSU2_TR(0x67128f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w4(U+4,u32(0x68c9f1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671299:{NFSU2_TR(0x671299);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
w4(U+4,u32(0x68c83dull));
s4(u32(r4(U+0)),r4(U+4));
}
B6712a3:{NFSU2_TR(0x6712a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6712a9:{NFSU2_TR(0x6712a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6712af:{NFSU2_TR(0x6712af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
w4(U+4,u32(0x68ab60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6712b9:{NFSU2_TR(0x6712b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6712ba:{NFSU2_TR(0x6712ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6712bb:L6712bb:{c.instructions+=32;NFSU2_TR(0x6712bb);
__builtin_memmove((R+28),(R+28),4);
}
B6712bd:{NFSU2_TR(0x6712bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6712be:{NFSU2_TR(0x6712be);
__builtin_memmove((R+20),(R+16),4);
}
B6712c0:{NFSU2_TR(0x6712c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B6712c3:{NFSU2_TR(0x6712c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6712c4:{NFSU2_TR(0x6712c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6712c5:{NFSU2_TR(0x6712c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6712c6:{NFSU2_TR(0x6712c6);
w4(R+24,u32(0x7b7268ull));
}
B6712cb:{NFSU2_TR(0x6712cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6712ce:{NFSU2_TR(0x6712ce);
u8 U[40];
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
}
B6712cf:{NFSU2_TR(0x6712cf);
u8 U[40];
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
}
B6712d0:{NFSU2_TR(0x6712d0);
u8 U[40];
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
}
B6712d1:{NFSU2_TR(0x6712d1);
u8 U[34];
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
}
B6712d2:{NFSU2_TR(0x6712d2);
w4(R+24,u32(0x7b7258ull));
}
B6712d7:{NFSU2_TR(0x6712d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6712da:{NFSU2_TR(0x6712da);
u8 U[40];
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
}
B6712db:{NFSU2_TR(0x6712db);
u8 U[40];
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
}
B6712dc:{NFSU2_TR(0x6712dc);
u8 U[40];
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
}
B6712dd:{NFSU2_TR(0x6712dd);
u8 U[34];
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
}
B6712de:{NFSU2_TR(0x6712de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6712e0:{NFSU2_TR(0x6712e0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6712e2:{NFSU2_TR(0x6712e2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6712e4:{NFSU2_TR(0x6712e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6712e6:{NFSU2_TR(0x6712e6);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6712e6_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6712e6_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6712e6_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6712e6_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6712e6_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6712e6_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6712e6_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6712e6_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6712e6_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6712e6_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6712e6_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6712e6_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6712e6_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6712e6_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6712e6_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6712e6_65;}
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_35:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_37:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_39:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_41:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_43:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_45:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_47:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_49:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_51:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_53:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_55:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_57:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_59:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_61:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_63:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_65:;
{SPILL();c.pc=0x6712e6u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712e6_67;
L6712e6_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6712e8:{NFSU2_TR(0x6712e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6712ef:{NFSU2_TR(0x6712ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6712f1:{NFSU2_TR(0x6712f1);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6712f1_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6712f1_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6712f1_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6712f1_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6712f1_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6712f1_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6712f1_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6712f1_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6712f1_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6712f1_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6712f1_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6712f1_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6712f1_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6712f1_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6712f1_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6712f1_65;}
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_35:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_37:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_39:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_41:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_43:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_45:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_47:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_49:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_51:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_53:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_55:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_57:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_59:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_61:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_63:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_65:;
{SPILL();c.pc=0x6712f1u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6712f1_67;
L6712f1_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6712f3:{NFSU2_TR(0x6712f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6712f6:{NFSU2_TR(0x6712f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6712f9:{NFSU2_TR(0x6712f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6712fc:{NFSU2_TR(0x6712fc);
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
B6712fe:{NFSU2_TR(0x6712fe);
if(r1(R+518)){{goto L671399;}}
}
B671304:L671304:{c.instructions+=20;NFSU2_TR(0x671304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B671308:{NFSU2_TR(0x671308);
w4(R+0,u32(0x1ull));
}
B67130d:{NFSU2_TR(0x67130d);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L67130d_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L67130d_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L67130d_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L67130d_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L67130d_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L67130d_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L67130d_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L67130d_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L67130d_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L67130d_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L67130d_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L67130d_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L67130d_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L67130d_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L67130d_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L67130d_65;}
{SPILL();c.pc=0x67130du;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_35:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_37:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_39:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_41:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_43:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_45:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_47:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_49:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_51:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_53:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_55:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_57:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_59:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_61:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_63:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_65:;
{SPILL();c.pc=0x67130du;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67130d_67;
L67130d_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B67130f:{NFSU2_TR(0x67130f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671312:{NFSU2_TR(0x671312);
w4(R+4,u32(0x800000ull));
}
B671317:{NFSU2_TR(0x671317);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B671319:{NFSU2_TR(0x671319);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B67131b:{NFSU2_TR(0x67131b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67131d:{NFSU2_TR(0x67131d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x20ull))));
}
B671320:{NFSU2_TR(0x671320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B671323:{NFSU2_TR(0x671323);
w4(R+4,u32(0x2000000ull));
}
B671328:{NFSU2_TR(0x671328);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B67132a:{NFSU2_TR(0x67132a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B67132c:{NFSU2_TR(0x67132c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67132e:{NFSU2_TR(0x67132e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x40ull))));
}
B671331:{NFSU2_TR(0x671331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B671334:{NFSU2_TR(0x671334);
w4(R+0,u32(0x80000000ull));
}
B671339:{NFSU2_TR(0x671339);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L671339_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L671339_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L671339_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L671339_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L671339_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L671339_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L671339_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L671339_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L671339_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L671339_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L671339_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L671339_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L671339_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L671339_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L671339_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L671339_65;}
{SPILL();c.pc=0x671339u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_35:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_37:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_39:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_41:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_43:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_45:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_47:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_49:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_51:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_53:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_55:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_57:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_59:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_61:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_63:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_65:;
{SPILL();c.pc=0x671339u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L671339_67;
L671339_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B67133b:{NFSU2_TR(0x67133b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671340:{NFSU2_TR(0x671340);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L671399;}}
}
B671342:L671342:{c.instructions+=13;NFSU2_TR(0x671342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B671346:{NFSU2_TR(0x671346);
w4(R+0,u32(0x80000001ull));
}
B67134b:{NFSU2_TR(0x67134b);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L67134b_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L67134b_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L67134b_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L67134b_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L67134b_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L67134b_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L67134b_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L67134b_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L67134b_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L67134b_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L67134b_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L67134b_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L67134b_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L67134b_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L67134b_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L67134b_65;}
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_35:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_37:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_39:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_41:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_43:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_45:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_47:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_49:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_51:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_53:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_55:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_57:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_59:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_61:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_63:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_65:;
{SPILL();c.pc=0x67134bu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L67134b_67;
L67134b_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B67134d:{NFSU2_TR(0x67134d);
w4(R+4,u32(0x80000000ull));
}
B671352:{NFSU2_TR(0x671352);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B671354:{NFSU2_TR(0x671354);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B671356:{NFSU2_TR(0x671356);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B671358:{NFSU2_TR(0x671358);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80ull))));
}
B67135e:{NFSU2_TR(0x67135e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671361:{NFSU2_TR(0x671361);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671364:{NFSU2_TR(0x671364);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671367:{NFSU2_TR(0x671367);
w4(R+4,u32(0xcull));
}
B67136c:{NFSU2_TR(0x67136c);
w1(R+522,u8(0x0ull));
}
B67136d:L67136d:{c.instructions+=1;NFSU2_TR(0x67136d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67136f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67136du);}goto L67136d;}}
}
B67136f:L67136f:{c.instructions+=13;NFSU2_TR(0x67136f);
w4(R+4,u32(0x40000000ull));
}
B671374:{NFSU2_TR(0x671374);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B671376:{NFSU2_TR(0x671376);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B671378:{NFSU2_TR(0x671378);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67137a:{NFSU2_TR(0x67137a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x100ull))));
}
B671380:{NFSU2_TR(0x671380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B671383:{NFSU2_TR(0x671383);
w4(R+4,u32(0x400000ull));
}
B671388:{NFSU2_TR(0x671388);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B67138a:{NFSU2_TR(0x67138a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B67138c:{NFSU2_TR(0x67138c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B67138e:{NFSU2_TR(0x67138e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x200ull))));
}
B671394:{NFSU2_TR(0x671394);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+4))));
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
B671397:{NFSU2_TR(0x671397);
{goto L671399;}
}
B671399:L671399:{c.instructions+=6;NFSU2_TR(0x671399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67139c:{NFSU2_TR(0x67139c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67139d:{NFSU2_TR(0x67139d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67139e:{NFSU2_TR(0x67139e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B67139f:{NFSU2_TR(0x67139f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6713a0:{NFSU2_TR(0x6713a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6713a1:L6713a1:{c.instructions+=4;NFSU2_TR(0x6713a1);
__builtin_memmove((R+28),(R+28),4);
}
B6713a3:{NFSU2_TR(0x6713a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6713a4:{NFSU2_TR(0x6713a4);
__builtin_memmove((R+20),(R+16),4);
}
B6713a6:{NFSU2_TR(0x6713a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6713abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6712bbu);}goto L6712bb;}
}
B6713ab:L6713ab:{c.instructions+=3;NFSU2_TR(0x6713ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6713ad:{NFSU2_TR(0x6713ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6713b0:{NFSU2_TR(0x6713b0);
if(r1(R+518)){{goto L6715e1;}}
}
B6713b6:L6713b6:{c.instructions+=2;NFSU2_TR(0x6713b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6713b8:{NFSU2_TR(0x6713b8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6715e1;}}
}
B6713be:L6713be:{c.instructions+=61;NFSU2_TR(0x6713be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6713c1:{NFSU2_TR(0x6713c1);
u8 U[4];
w4(U+0,u32(0x69477bull));
s4(u32(r4(R+4)),r4(U+0));
}
B6713c7:{NFSU2_TR(0x6713c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x6939a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713ce:{NFSU2_TR(0x6713ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x694a42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713d5:{NFSU2_TR(0x6713d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x68fb59ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713dc:{NFSU2_TR(0x6713dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x6947d2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713e3:{NFSU2_TR(0x6713e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x693a17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713ea:{NFSU2_TR(0x6713ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x693a80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713f1:{NFSU2_TR(0x6713f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x694ac6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713f8:{NFSU2_TR(0x6713f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x69480dull));
s4(u32(r4(U+0)),r4(U+4));
}
B6713ff:{NFSU2_TR(0x6713ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x693f64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671406:{NFSU2_TR(0x671406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x68fd8bull));
s4(u32(r4(U+0)),r4(U+4));
}
B67140d:{NFSU2_TR(0x67140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0x694e70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671414:{NFSU2_TR(0x671414);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x694eb3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67141b:{NFSU2_TR(0x67141b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
w4(U+4,u32(0x693f6full));
s4(u32(r4(U+0)),r4(U+4));
}
B671422:{NFSU2_TR(0x671422);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w4(U+4,u32(0x6940fbull));
s4(u32(r4(U+0)),r4(U+4));
}
B671429:{NFSU2_TR(0x671429);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
w4(U+4,u32(0x694b25ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671430:{NFSU2_TR(0x671430);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
w4(U+4,u32(0x694873ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671437:{NFSU2_TR(0x671437);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w4(U+4,u32(0x693986ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67143e:{NFSU2_TR(0x67143e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
w4(U+4,u32(0x68e67cull));
s4(u32(r4(U+0)),r4(U+4));
}
B671445:{NFSU2_TR(0x671445);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w4(U+4,u32(0x68e715ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67144c:{NFSU2_TR(0x67144c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x695055ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671453:{NFSU2_TR(0x671453);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x694f97ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67145a:{NFSU2_TR(0x67145a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w4(U+4,u32(0x68e772ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671461:{NFSU2_TR(0x671461);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
w4(U+4,u32(0x68e7b6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671468:{NFSU2_TR(0x671468);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0x68ebe7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67146f:{NFSU2_TR(0x67146f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w4(U+4,u32(0x68fe5aull));
s4(u32(r4(U+0)),r4(U+4));
}
B671476:{NFSU2_TR(0x671476);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
w4(U+4,u32(0x68feaaull));
s4(u32(r4(U+0)),r4(U+4));
}
B67147d:{NFSU2_TR(0x67147d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
w4(U+4,u32(0x68ff95ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671484:{NFSU2_TR(0x671484);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x68ecacull));
s4(u32(r4(U+0)),r4(U+4));
}
B67148b:{NFSU2_TR(0x67148b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x690071ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671492:{NFSU2_TR(0x671492);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
w4(U+4,u32(0x6900d6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67149c:{NFSU2_TR(0x67149c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
w4(U+4,u32(0x690136ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714a6:{NFSU2_TR(0x6714a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
w4(U+4,u32(0x690191ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714b0:{NFSU2_TR(0x6714b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x6950b9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714ba:{NFSU2_TR(0x6714ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w4(U+4,u32(0x68ed18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714c4:{NFSU2_TR(0x6714c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
w4(U+4,u32(0x68ee4full));
s4(u32(r4(U+0)),r4(U+4));
}
B6714ce:{NFSU2_TR(0x6714ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
w4(U+4,u32(0x6901d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714d8:{NFSU2_TR(0x6714d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
w4(U+4,u32(0x690247ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714e2:{NFSU2_TR(0x6714e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w4(U+4,u32(0x6903ceull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714ec:{NFSU2_TR(0x6714ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
w4(U+4,u32(0x6915caull));
s4(u32(r4(U+0)),r4(U+4));
}
B6714f6:{NFSU2_TR(0x6714f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
w4(U+4,u32(0x69176full));
s4(u32(r4(U+0)),r4(U+4));
}
B671500:{NFSU2_TR(0x671500);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
w4(U+4,u32(0x691ca3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67150a:{NFSU2_TR(0x67150a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
w4(U+4,u32(0x68eedcull));
s4(u32(r4(U+0)),r4(U+4));
}
B671514:{NFSU2_TR(0x671514);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
w4(U+4,u32(0x68ef6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B67151e:{NFSU2_TR(0x67151e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
w4(U+4,u32(0x694c59ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671528:{NFSU2_TR(0x671528);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
w4(U+4,u32(0x693adfull));
s4(u32(r4(U+0)),r4(U+4));
}
B671532:{NFSU2_TR(0x671532);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
w4(U+4,u32(0x69490bull));
s4(u32(r4(U+0)),r4(U+4));
}
B67153c:{NFSU2_TR(0x67153c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
w4(U+4,u32(0x694954ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671546:{NFSU2_TR(0x671546);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
w4(U+4,u32(0x694ccaull));
s4(u32(r4(U+0)),r4(U+4));
}
B671550:{NFSU2_TR(0x671550);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w4(U+4,u32(0x693b50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67155a:{NFSU2_TR(0x67155a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
w4(U+4,u32(0x68efd2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671564:{NFSU2_TR(0x671564);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
w4(U+4,u32(0x68f079ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67156e:{NFSU2_TR(0x67156e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
w4(U+4,u32(0x694d92ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671578:{NFSU2_TR(0x671578);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
w4(U+4,u32(0x694997ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671582:{NFSU2_TR(0x671582);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
w4(U+4,u32(0x693c24ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67158c:{NFSU2_TR(0x67158c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x693258ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671593:{NFSU2_TR(0x671593);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
w4(U+4,u32(0x68f11eull));
s4(u32(r4(U+0)),r4(U+4));
}
B67159d:{NFSU2_TR(0x67159d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
w4(U+4,u32(0x6944c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715a7:{NFSU2_TR(0x6715a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
w4(U+4,u32(0x694600ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715b1:{NFSU2_TR(0x6715b1);
if(r1(R+518)){{goto L6715e1;}}
}
B6715b3:L6715b3:{c.instructions+=2;NFSU2_TR(0x6715b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6715b6:{NFSU2_TR(0x6715b6);
if(r1(R+518)){{goto L6715e1;}}
}
B6715b8:L6715b8:{c.instructions+=5;NFSU2_TR(0x6715b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w4(U+4,u32(0x694318ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715bf:{NFSU2_TR(0x6715bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w4(U+4,u32(0x692f76ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715c6:{NFSU2_TR(0x6715c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
w4(U+4,u32(0x690319ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715d0:{NFSU2_TR(0x6715d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w4(U+4,u32(0x691dbeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715da:{NFSU2_TR(0x6715da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
w4(U+4,u32(0x68e9d2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715e1:L6715e1:{c.instructions+=2;NFSU2_TR(0x6715e1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6715e3:{NFSU2_TR(0x6715e3);
if(r1(R+518)){{goto L671635;}}
}
B6715e5:L6715e5:{c.instructions+=8;NFSU2_TR(0x6715e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
w4(U+4,u32(0x68e040ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715ef:{NFSU2_TR(0x6715ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
w4(U+4,u32(0x68e0e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6715f9:{NFSU2_TR(0x6715f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
w4(U+4,u32(0x68e400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671603:{NFSU2_TR(0x671603);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
w4(U+4,u32(0x68d9c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67160d:{NFSU2_TR(0x67160d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
w4(U+4,u32(0x68dc20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671617:{NFSU2_TR(0x671617);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
w4(U+4,u32(0x68de80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671621:{NFSU2_TR(0x671621);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
w4(U+4,u32(0x68d900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B67162b:{NFSU2_TR(0x67162b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
w4(U+4,u32(0x68d840ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671635:L671635:{c.instructions+=2;NFSU2_TR(0x671635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B671636:{NFSU2_TR(0x671636);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671637:L671637:{c.instructions+=43;NFSU2_TR(0x671637);
__builtin_memmove((R+28),(R+28),4);
}
B671639:{NFSU2_TR(0x671639);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67163a:{NFSU2_TR(0x67163a);
__builtin_memmove((R+20),(R+16),4);
}
B67163c:{NFSU2_TR(0x67163c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67163f:{NFSU2_TR(0x67163f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671642:{NFSU2_TR(0x671642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B671645:{NFSU2_TR(0x671645);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671647:{NFSU2_TR(0x671647);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671649:{NFSU2_TR(0x671649);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67164b:{NFSU2_TR(0x67164b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67164e:{NFSU2_TR(0x67164e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671650:{NFSU2_TR(0x671650);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671653:{NFSU2_TR(0x671653);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671655:{NFSU2_TR(0x671655);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671658:{NFSU2_TR(0x671658);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B67165a:{NFSU2_TR(0x67165a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67165d:{NFSU2_TR(0x67165d);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671660:{NFSU2_TR(0x671660);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671663:{NFSU2_TR(0x671663);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671666:{NFSU2_TR(0x671666);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671669:{NFSU2_TR(0x671669);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67166c:{NFSU2_TR(0x67166c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67166f:{NFSU2_TR(0x67166f);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671672:{NFSU2_TR(0x671672);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671674:{NFSU2_TR(0x671674);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671676:{NFSU2_TR(0x671676);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671678:{NFSU2_TR(0x671678);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67167a:{NFSU2_TR(0x67167a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67167c:{NFSU2_TR(0x67167c);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67167f:{NFSU2_TR(0x67167f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671681:{NFSU2_TR(0x671681);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671684:{NFSU2_TR(0x671684);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B671686:{NFSU2_TR(0x671686);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671689:{NFSU2_TR(0x671689);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B67168b:{NFSU2_TR(0x67168b);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67168e:{NFSU2_TR(0x67168e);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671690:{NFSU2_TR(0x671690);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671692:{NFSU2_TR(0x671692);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671695:{NFSU2_TR(0x671695);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671698:{NFSU2_TR(0x671698);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B67169b:{NFSU2_TR(0x67169b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67169e:{NFSU2_TR(0x67169e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67169f:{NFSU2_TR(0x67169f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6716a2:L6716a2:{c.instructions+=23;NFSU2_TR(0x6716a2);
__builtin_memmove((R+28),(R+28),4);
}
B6716a4:{NFSU2_TR(0x6716a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6716a5:{NFSU2_TR(0x6716a5);
__builtin_memmove((R+20),(R+16),4);
}
B6716a7:{NFSU2_TR(0x6716a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6716aa:{NFSU2_TR(0x6716aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6716ad:{NFSU2_TR(0x6716ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6716b0:{NFSU2_TR(0x6716b0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716b2:{NFSU2_TR(0x6716b2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716b4:{NFSU2_TR(0x6716b4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716b6:{NFSU2_TR(0x6716b6);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716b9:{NFSU2_TR(0x6716b9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6716bb:{NFSU2_TR(0x6716bb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716be:{NFSU2_TR(0x6716be);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716c1:{NFSU2_TR(0x6716c1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716c4:{NFSU2_TR(0x6716c4);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716c7:{NFSU2_TR(0x6716c7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6716c9:{NFSU2_TR(0x6716c9);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B6716cb:{NFSU2_TR(0x6716cb);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B6716cd:{NFSU2_TR(0x6716cd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6716cf:{NFSU2_TR(0x6716cf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6716d2:{NFSU2_TR(0x6716d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6716d5:{NFSU2_TR(0x6716d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6716d6:{NFSU2_TR(0x6716d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6716d9:L6716d9:{c.instructions+=56;NFSU2_TR(0x6716d9);
__builtin_memmove((R+28),(R+28),4);
}
B6716db:{NFSU2_TR(0x6716db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6716dc:{NFSU2_TR(0x6716dc);
__builtin_memmove((R+20),(R+16),4);
}
B6716de:{NFSU2_TR(0x6716de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6716e1:{NFSU2_TR(0x6716e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6716e4:{NFSU2_TR(0x6716e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6716e7:{NFSU2_TR(0x6716e7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716e9:{NFSU2_TR(0x6716e9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716eb:{NFSU2_TR(0x6716eb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716ed:{NFSU2_TR(0x6716ed);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716f0:{NFSU2_TR(0x6716f0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716f2:{NFSU2_TR(0x6716f2);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716f5:{NFSU2_TR(0x6716f5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716f7:{NFSU2_TR(0x6716f7);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6716fa:{NFSU2_TR(0x6716fa);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B6716fc:{NFSU2_TR(0x6716fc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6716ff:{NFSU2_TR(0x6716ff);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671702:{NFSU2_TR(0x671702);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671705:{NFSU2_TR(0x671705);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671708:{NFSU2_TR(0x671708);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67170b:{NFSU2_TR(0x67170b);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67170e:{NFSU2_TR(0x67170e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671711:{NFSU2_TR(0x671711);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671714:{NFSU2_TR(0x671714);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671716:{NFSU2_TR(0x671716);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671718:{NFSU2_TR(0x671718);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67171a:{NFSU2_TR(0x67171a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67171c:{NFSU2_TR(0x67171c);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67171e:{NFSU2_TR(0x67171e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671721:{NFSU2_TR(0x671721);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671724:{NFSU2_TR(0x671724);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671727:{NFSU2_TR(0x671727);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67172a:{NFSU2_TR(0x67172a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67172d:{NFSU2_TR(0x67172d);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671730:{NFSU2_TR(0x671730);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671733:{NFSU2_TR(0x671733);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671736:{NFSU2_TR(0x671736);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671738:{NFSU2_TR(0x671738);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67173a:{NFSU2_TR(0x67173a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67173c:{NFSU2_TR(0x67173c);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67173e:{NFSU2_TR(0x67173e);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671740:{NFSU2_TR(0x671740);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671743:{NFSU2_TR(0x671743);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671745:{NFSU2_TR(0x671745);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671748:{NFSU2_TR(0x671748);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B67174a:{NFSU2_TR(0x67174a);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67174d:{NFSU2_TR(0x67174d);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B67174f:{NFSU2_TR(0x67174f);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671752:{NFSU2_TR(0x671752);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671754:{NFSU2_TR(0x671754);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671756:{NFSU2_TR(0x671756);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671759:{NFSU2_TR(0x671759);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B67175c:{NFSU2_TR(0x67175c);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B67175f:{NFSU2_TR(0x67175f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671762:{NFSU2_TR(0x671762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B671763:{NFSU2_TR(0x671763);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671766:L671766:{c.instructions+=39;NFSU2_TR(0x671766);
__builtin_memmove((R+28),(R+28),4);
}
B671768:{NFSU2_TR(0x671768);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671769:{NFSU2_TR(0x671769);
__builtin_memmove((R+20),(R+16),4);
}
B67176b:{NFSU2_TR(0x67176b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67176e:{NFSU2_TR(0x67176e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671771:{NFSU2_TR(0x671771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B671774:{NFSU2_TR(0x671774);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671776:{NFSU2_TR(0x671776);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671778:{NFSU2_TR(0x671778);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67177a:{NFSU2_TR(0x67177a);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67177d:{NFSU2_TR(0x67177d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67177f:{NFSU2_TR(0x67177f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671782:{NFSU2_TR(0x671782);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B671784:{NFSU2_TR(0x671784);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671787:{NFSU2_TR(0x671787);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67178a:{NFSU2_TR(0x67178a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67178d:{NFSU2_TR(0x67178d);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671790:{NFSU2_TR(0x671790);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671793:{NFSU2_TR(0x671793);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671796:{NFSU2_TR(0x671796);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B671798:{NFSU2_TR(0x671798);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B67179a:{NFSU2_TR(0x67179a);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B67179c:{NFSU2_TR(0x67179c);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B67179e:{NFSU2_TR(0x67179e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717a1:{NFSU2_TR(0x6717a1);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717a4:{NFSU2_TR(0x6717a4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717a7:{NFSU2_TR(0x6717a7);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717aa:{NFSU2_TR(0x6717aa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717ad:{NFSU2_TR(0x6717ad);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717b0:{NFSU2_TR(0x6717b0);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6717b2:{NFSU2_TR(0x6717b2);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B6717b4:{NFSU2_TR(0x6717b4);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B6717b6:{NFSU2_TR(0x6717b6);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B6717b8:{NFSU2_TR(0x6717b8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6717ba:{NFSU2_TR(0x6717ba);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6717bd:{NFSU2_TR(0x6717bd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6717c0:{NFSU2_TR(0x6717c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6717c3:{NFSU2_TR(0x6717c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6717c4:{NFSU2_TR(0x6717c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6717c7:L6717c7:{c.instructions+=61;NFSU2_TR(0x6717c7);
__builtin_memmove((R+28),(R+28),4);
}
B6717c9:{NFSU2_TR(0x6717c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6717ca:{NFSU2_TR(0x6717ca);
__builtin_memmove((R+20),(R+16),4);
}
B6717cc:{NFSU2_TR(0x6717cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6717cf:{NFSU2_TR(0x6717cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6717d2:{NFSU2_TR(0x6717d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6717d5:{NFSU2_TR(0x6717d5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717d7:{NFSU2_TR(0x6717d7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717d9:{NFSU2_TR(0x6717d9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717db:{NFSU2_TR(0x6717db);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717de:{NFSU2_TR(0x6717de);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717e0:{NFSU2_TR(0x6717e0);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717e3:{NFSU2_TR(0x6717e3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717e5:{NFSU2_TR(0x6717e5);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717e8:{NFSU2_TR(0x6717e8);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B6717ea:{NFSU2_TR(0x6717ea);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717ed:{NFSU2_TR(0x6717ed);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717f0:{NFSU2_TR(0x6717f0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717f3:{NFSU2_TR(0x6717f3);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717f6:{NFSU2_TR(0x6717f6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717f9:{NFSU2_TR(0x6717f9);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6717fc:{NFSU2_TR(0x6717fc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6717ff:{NFSU2_TR(0x6717ff);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671802:{NFSU2_TR(0x671802);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671804:{NFSU2_TR(0x671804);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671806:{NFSU2_TR(0x671806);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671808:{NFSU2_TR(0x671808);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67180a:{NFSU2_TR(0x67180a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67180c:{NFSU2_TR(0x67180c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67180f:{NFSU2_TR(0x67180f);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671812:{NFSU2_TR(0x671812);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671815:{NFSU2_TR(0x671815);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671818:{NFSU2_TR(0x671818);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67181b:{NFSU2_TR(0x67181b);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67181e:{NFSU2_TR(0x67181e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671821:{NFSU2_TR(0x671821);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671824:{NFSU2_TR(0x671824);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671826:{NFSU2_TR(0x671826);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671828:{NFSU2_TR(0x671828);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67182a:{NFSU2_TR(0x67182a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67182c:{NFSU2_TR(0x67182c);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67182e:{NFSU2_TR(0x67182e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671831:{NFSU2_TR(0x671831);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671834:{NFSU2_TR(0x671834);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671837:{NFSU2_TR(0x671837);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67183a:{NFSU2_TR(0x67183a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67183d:{NFSU2_TR(0x67183d);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671840:{NFSU2_TR(0x671840);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671843:{NFSU2_TR(0x671843);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671846:{NFSU2_TR(0x671846);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671848:{NFSU2_TR(0x671848);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67184a:{NFSU2_TR(0x67184a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67184c:{NFSU2_TR(0x67184c);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B67184e:{NFSU2_TR(0x67184e);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B671850:{NFSU2_TR(0x671850);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671852:{NFSU2_TR(0x671852);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671855:{NFSU2_TR(0x671855);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671858:{NFSU2_TR(0x671858);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B67185b:{NFSU2_TR(0x67185b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67185e:{NFSU2_TR(0x67185e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B67185f:{NFSU2_TR(0x67185f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671862:L671862:{c.instructions+=21;NFSU2_TR(0x671862);
__builtin_memmove((R+28),(R+28),4);
}
B671864:{NFSU2_TR(0x671864);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671865:{NFSU2_TR(0x671865);
__builtin_memmove((R+20),(R+16),4);
}
B671867:{NFSU2_TR(0x671867);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671868:{NFSU2_TR(0x671868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671869:{NFSU2_TR(0x671869);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67186a:{NFSU2_TR(0x67186a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67186d:{NFSU2_TR(0x67186d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671870:{NFSU2_TR(0x671870);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671872:{NFSU2_TR(0x671872);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671874:{NFSU2_TR(0x671874);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671877:{NFSU2_TR(0x671877);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67187a:{NFSU2_TR(0x67187a);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67187d:{NFSU2_TR(0x67187d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671880:{NFSU2_TR(0x671880);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B671882:{NFSU2_TR(0x671882);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671884:{NFSU2_TR(0x671884);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671886:{NFSU2_TR(0x671886);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B671889:{NFSU2_TR(0x671889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67188c:{NFSU2_TR(0x67188c);
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
B67188e:{NFSU2_TR(0x67188e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67189f;}}
}
B671890:L671890:{c.instructions+=5;NFSU2_TR(0x671890);
__asm__ volatile(".byte 0xdd,0xc0":::"memory");
}
B671892:{NFSU2_TR(0x671892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B671894:{NFSU2_TR(0x671894);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671897:{NFSU2_TR(0x671897);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67189a:{NFSU2_TR(0x67189a);
{goto L671926;}
}
B67189f:L67189f:{c.instructions+=7;NFSU2_TR(0x67189f);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6718a1:{NFSU2_TR(0x6718a1);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6718a3:{NFSU2_TR(0x6718a3);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6718a6:{NFSU2_TR(0x6718a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6718a9:{NFSU2_TR(0x6718a9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B6718ae:{NFSU2_TR(0x6718ae);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3727c5acull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3727c5acull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6718b3:{NFSU2_TR(0x6718b3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6718cb;}}
}
B6718b5:L6718b5:{c.instructions+=2;NFSU2_TR(0x6718b5);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6718b7:{NFSU2_TR(0x6718b7);
if(r1(R+518)){{goto L671926;}}
}
B6718b9:L6718b9:{c.instructions+=7;NFSU2_TR(0x6718b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6718bb:{NFSU2_TR(0x6718bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6718bd:{NFSU2_TR(0x6718bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6718c0:{NFSU2_TR(0x6718c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6718c3:{NFSU2_TR(0x6718c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6718c6:{NFSU2_TR(0x6718c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6718c9:{NFSU2_TR(0x6718c9);
{goto L671926;}
}
B6718cb:L6718cb:{c.instructions+=28;NFSU2_TR(0x6718cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6718ce:{NFSU2_TR(0x6718ce);
__builtin_memmove((R+28),(R+0),4);
}
B6718d0:{NFSU2_TR(0x6718d0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6718d3:{NFSU2_TR(0x6718d3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B6718d8:{NFSU2_TR(0x6718d8);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xff8ull))));
}
B6718de:{NFSU2_TR(0x6718de);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x3f000000ull))));
}
B6718e3:{NFSU2_TR(0x6718e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6718e6:{NFSU2_TR(0x6718e6);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6718e9:{NFSU2_TR(0x6718e9);
{u32 ea_=u32(r4(R+28)+u32(8425832u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6718ef:{NFSU2_TR(0x6718ef);
w4(R+0,u32(0xbeffffffull));
}
B6718f4:{NFSU2_TR(0x6718f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6718f7:{NFSU2_TR(0x6718f7);
{u32 ea_=u32(r4(R+28)+u32(8425836u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6718fd:{NFSU2_TR(0x6718fd);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6718ff:{NFSU2_TR(0x6718ff);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff800000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671904:{NFSU2_TR(0x671904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671907:{NFSU2_TR(0x671907);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67190a:{NFSU2_TR(0x67190a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67190c:{NFSU2_TR(0x67190c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B67190e:{NFSU2_TR(0x67190e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671911:{NFSU2_TR(0x671911);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B671913:{NFSU2_TR(0x671913);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671916:{NFSU2_TR(0x671916);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B671918:{NFSU2_TR(0x671918);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B67191a:{NFSU2_TR(0x67191a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B67191c:{NFSU2_TR(0x67191c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B67191f:{NFSU2_TR(0x67191f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671922:{NFSU2_TR(0x671922);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B671924:{NFSU2_TR(0x671924);
{goto L671926;}
}
B671926:L671926:{c.instructions+=4;NFSU2_TR(0x671926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671929:{NFSU2_TR(0x671929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67192a:{NFSU2_TR(0x67192a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B67192b:{NFSU2_TR(0x67192b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67192e:L67192e:{c.instructions+=11;NFSU2_TR(0x67192e);
__builtin_memmove((R+28),(R+28),4);
}
B671930:{NFSU2_TR(0x671930);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671931:{NFSU2_TR(0x671931);
__builtin_memmove((R+20),(R+16),4);
}
B671933:{NFSU2_TR(0x671933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B671936:{NFSU2_TR(0x671936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671939:{NFSU2_TR(0x671939);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67193a:{NFSU2_TR(0x67193a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67193b:{NFSU2_TR(0x67193b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67193e:{NFSU2_TR(0x67193e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671940:{NFSU2_TR(0x671940);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671941:{NFSU2_TR(0x671941);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6719b4;}}
}
B671943:L671943:{c.instructions+=2;NFSU2_TR(0x671943);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B671946:{NFSU2_TR(0x671946);
if(r1(R+518)){{goto L6719a6;}}
}
B671948:L671948:{c.instructions+=4;NFSU2_TR(0x671948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B67194b:{NFSU2_TR(0x67194b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67194e:{NFSU2_TR(0x67194e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671951:{NFSU2_TR(0x671951);
w4(R+28,u32(0xfffffffcull));
}
B671956:L671956:{c.instructions+=5;NFSU2_TR(0x671956);
w4(R+24,u32(0xfffffff0ull));
}
B67195b:{NFSU2_TR(0x67195b);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67195f:{NFSU2_TR(0x67195f);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671963:{NFSU2_TR(0x671963);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671967:{NFSU2_TR(0x671967);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B67196b:L67196b:{c.instructions+=16;NFSU2_TR(0x67196b);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B67196d:{NFSU2_TR(0x67196d);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671971:{NFSU2_TR(0x671971);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B671973:{NFSU2_TR(0x671973);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671977:{NFSU2_TR(0x671977);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B671979:{NFSU2_TR(0x671979);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B67197d:{NFSU2_TR(0x67197d);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B67197f:{NFSU2_TR(0x67197f);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671983:{NFSU2_TR(0x671983);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671985:{NFSU2_TR(0x671985);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671987:{NFSU2_TR(0x671987);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B671989:{NFSU2_TR(0x671989);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B67198b:{NFSU2_TR(0x67198b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B67198d:{NFSU2_TR(0x67198d);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671991:{NFSU2_TR(0x671991);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B671994:{NFSU2_TR(0x671994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67196bu);}goto L67196b;}}
}
B671996:L671996:{c.instructions+=7;NFSU2_TR(0x671996);
__asm__ volatile(".byte 0xdd,0xc3":::"memory");
}
B671998:{NFSU2_TR(0x671998);
__asm__ volatile(".byte 0xdd,0xc2":::"memory");
}
B67199a:{NFSU2_TR(0x67199a);
__asm__ volatile(".byte 0xdd,0xc1":::"memory");
}
B67199c:{NFSU2_TR(0x67199c);
__asm__ volatile(".byte 0xdd,0xc0":::"memory");
}
B67199e:{NFSU2_TR(0x67199e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6719a1:{NFSU2_TR(0x6719a1);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6719a2:{NFSU2_TR(0x6719a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671956u);}goto L671956;}}
}
B6719a4:L6719a4:{c.instructions+=1;NFSU2_TR(0x6719a4);
{goto L671a0c;}
}
B6719a6:L6719a6:{c.instructions+=3;NFSU2_TR(0x6719a6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6719a8:{NFSU2_TR(0x6719a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6719a9:{NFSU2_TR(0x6719a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6719ac:L6719ac:{c.instructions+=1;NFSU2_TR(0x6719ac);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6719ae;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6719acu);}goto L6719ac;}
}
B6719ae:L6719ae:{c.instructions+=2;NFSU2_TR(0x6719ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6719b1:{NFSU2_TR(0x6719b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6719b4:L6719b4:{c.instructions+=4;NFSU2_TR(0x6719b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6719b7:{NFSU2_TR(0x6719b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6719ba:{NFSU2_TR(0x6719ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6719bd:{NFSU2_TR(0x6719bd);
w4(R+28,u32(0xfffffffcull));
}
B6719c2:L6719c2:{c.instructions+=5;NFSU2_TR(0x6719c2);
w4(R+24,u32(0xfffffffcull));
}
B6719c7:{NFSU2_TR(0x6719c7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6719c9:{NFSU2_TR(0x6719c9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6719cc:{NFSU2_TR(0x6719cc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6719cf:{NFSU2_TR(0x6719cf);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6719d2:L6719d2:{c.instructions+=16;NFSU2_TR(0x6719d2);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6719d4:{NFSU2_TR(0x6719d4);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6719d8:{NFSU2_TR(0x6719d8);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6719da:{NFSU2_TR(0x6719da);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6719de:{NFSU2_TR(0x6719de);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6719e0:{NFSU2_TR(0x6719e0);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6719e4:{NFSU2_TR(0x6719e4);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6719e6:{NFSU2_TR(0x6719e6);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6719ea:{NFSU2_TR(0x6719ea);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B6719ec:{NFSU2_TR(0x6719ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6719ee:{NFSU2_TR(0x6719ee);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6719f0:{NFSU2_TR(0x6719f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6719f2:{NFSU2_TR(0x6719f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6719f4:{NFSU2_TR(0x6719f4);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6719f8:{NFSU2_TR(0x6719f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6719f9:{NFSU2_TR(0x6719f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6719d2u);}goto L6719d2;}}
}
B6719fb:L6719fb:{c.instructions+=8;NFSU2_TR(0x6719fb);
__asm__ volatile(".byte 0xdd,0xc3":::"memory");
}
B6719fd:{NFSU2_TR(0x6719fd);
__asm__ volatile(".byte 0xdd,0xc2":::"memory");
}
B6719ff:{NFSU2_TR(0x6719ff);
__asm__ volatile(".byte 0xdd,0xc1":::"memory");
}
B671a01:{NFSU2_TR(0x671a01);
__asm__ volatile(".byte 0xdd,0xc0":::"memory");
}
B671a03:{NFSU2_TR(0x671a03);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671a06:{NFSU2_TR(0x671a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671a09:{NFSU2_TR(0x671a09);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671a0a:{NFSU2_TR(0x671a0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6719c2u);}goto L6719c2;}}
}
B671a0c:L671a0c:{c.instructions+=5;NFSU2_TR(0x671a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671a0d:{NFSU2_TR(0x671a0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671a0e:{NFSU2_TR(0x671a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671a0f:{NFSU2_TR(0x671a0f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B671a10:{NFSU2_TR(0x671a10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671a13:L671a13:{c.instructions+=7;NFSU2_TR(0x671a13);
__builtin_memmove((R+28),(R+28),4);
}
B671a15:{NFSU2_TR(0x671a15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671a16:{NFSU2_TR(0x671a16);
__builtin_memmove((R+20),(R+16),4);
}
B671a18:{NFSU2_TR(0x671a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B671a1b:{NFSU2_TR(0x671a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671a1e:{NFSU2_TR(0x671a1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B671a21:{NFSU2_TR(0x671a21);
if(r1(R+518)){{goto L671a28;}}
}
B671a23:L671a23:{c.instructions+=2;NFSU2_TR(0x671a23);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B671a26:{NFSU2_TR(0x671a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671a2b;}}
}
B671a28:L671a28:{c.instructions+=1;NFSU2_TR(0x671a28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B671a2b:L671a2b:{c.instructions+=8;NFSU2_TR(0x671a2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671a2c:{NFSU2_TR(0x671a2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671a2d:{NFSU2_TR(0x671a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671a30:{NFSU2_TR(0x671a30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671a31:{NFSU2_TR(0x671a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671a34:{NFSU2_TR(0x671a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B671a37:{NFSU2_TR(0x671a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671a3a:{NFSU2_TR(0x671a3a);
w4(R+28,u32(0xfffffffcull));
}
B671a3f:L671a3f:{c.instructions+=6;NFSU2_TR(0x671a3f);
w4(R+24,u32(0xfffffffcull));
}
B671a44:{NFSU2_TR(0x671a44);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B671a48:{NFSU2_TR(0x671a48);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671a4a:{NFSU2_TR(0x671a4a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671a4d:{NFSU2_TR(0x671a4d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671a50:{NFSU2_TR(0x671a50);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B671a53:L671a53:{c.instructions+=17;NFSU2_TR(0x671a53);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B671a55:{NFSU2_TR(0x671a55);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671a59:{NFSU2_TR(0x671a59);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B671a5b:{NFSU2_TR(0x671a5b);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671a5f:{NFSU2_TR(0x671a5f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B671a61:{NFSU2_TR(0x671a61);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671a65:{NFSU2_TR(0x671a65);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B671a67:{NFSU2_TR(0x671a67);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B671a6b:{NFSU2_TR(0x671a6b);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B671a6d:{NFSU2_TR(0x671a6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671a6f:{NFSU2_TR(0x671a6f);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B671a71:{NFSU2_TR(0x671a71);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671a73:{NFSU2_TR(0x671a73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B671a75:{NFSU2_TR(0x671a75);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B671a77:{NFSU2_TR(0x671a77);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671a7a:{NFSU2_TR(0x671a7a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B671a7b:{NFSU2_TR(0x671a7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671a53u);}goto L671a53;}}
}
B671a7d:L671a7d:{c.instructions+=7;NFSU2_TR(0x671a7d);
__asm__ volatile(".byte 0xdd,0xc3":::"memory");
}
B671a7f:{NFSU2_TR(0x671a7f);
__asm__ volatile(".byte 0xdd,0xc2":::"memory");
}
B671a81:{NFSU2_TR(0x671a81);
__asm__ volatile(".byte 0xdd,0xc1":::"memory");
}
B671a83:{NFSU2_TR(0x671a83);
__asm__ volatile(".byte 0xdd,0xc0":::"memory");
}
B671a85:{NFSU2_TR(0x671a85);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671a88:{NFSU2_TR(0x671a88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B671a89:{NFSU2_TR(0x671a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671a3fu);}goto L671a3f;}}
}
B671a8b:L671a8b:{c.instructions+=4;NFSU2_TR(0x671a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B671a8e:{NFSU2_TR(0x671a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671a91:{NFSU2_TR(0x671a91);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B671a93:{NFSU2_TR(0x671a93);
if(r1(R+518)){{goto L671a9c;}}
}
B671a95:L671a95:{c.instructions+=3;NFSU2_TR(0x671a95);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671a97:{NFSU2_TR(0x671a97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671a98:{NFSU2_TR(0x671a98);
__builtin_memmove((R+28),(R+0),4);
}
B671a9a:L671a9a:{c.instructions+=1;NFSU2_TR(0x671a9a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L671a9c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671a9au);}goto L671a9a;}
}
B671a9c:L671a9c:{c.instructions+=5;NFSU2_TR(0x671a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671a9d:{NFSU2_TR(0x671a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671a9e:{NFSU2_TR(0x671a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671a9f:{NFSU2_TR(0x671a9f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B671aa0:{NFSU2_TR(0x671aa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671aa3:L671aa3:{c.instructions+=16;NFSU2_TR(0x671aa3);
__builtin_memmove((R+28),(R+28),4);
}
B671aa5:{NFSU2_TR(0x671aa5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671aa6:{NFSU2_TR(0x671aa6);
__builtin_memmove((R+20),(R+16),4);
}
B671aa8:{NFSU2_TR(0x671aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671aab:{NFSU2_TR(0x671aab);
w4(R+4,u32(0x6717c7ull));
}
B671ab0:{NFSU2_TR(0x671ab0);
u8 U[4];
w4(U+0,u32(0x671637ull));
s4(u32(r4(R+0)),r4(U+0));
}
B671ab6:{NFSU2_TR(0x671ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x6716d9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671abd:{NFSU2_TR(0x671abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671ac0:{NFSU2_TR(0x671ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x67192eull));
s4(u32(r4(U+0)),r4(U+4));
}
B671ac7:{NFSU2_TR(0x671ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x671a13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671ace:{NFSU2_TR(0x671ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x6716a2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671ad5:{NFSU2_TR(0x671ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x671766ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671adc:{NFSU2_TR(0x671adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x671862ull));
s4(u32(r4(U+0)),r4(U+4));
}
B671ae3:{NFSU2_TR(0x671ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671ae9:{NFSU2_TR(0x671ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B671aea:{NFSU2_TR(0x671aea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671aed:L671aed:{c.instructions+=5;NFSU2_TR(0x671aed);
__builtin_memmove((R+28),(R+28),4);
}
B671aef:{NFSU2_TR(0x671aef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671af0:{NFSU2_TR(0x671af0);
__builtin_memmove((R+20),(R+16),4);
}
B671af2:{NFSU2_TR(0x671af2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a5cf8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671af9:{NFSU2_TR(0x671af9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671b5e;}}
}
B671afb:L671afb:{c.instructions+=2;NFSU2_TR(0x671afb);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a5cf4),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671b02:{NFSU2_TR(0x671b02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671b5e;}}
}
B671b04:L671b04:{c.instructions+=6;NFSU2_TR(0x671b04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b05:{NFSU2_TR(0x671b05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b06:{NFSU2_TR(0x671b06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b07:{NFSU2_TR(0x671b07);
w4(R+24,u32(0x7b72a4ull));
}
B671b0c:{NFSU2_TR(0x671b0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b0d:{NFSU2_TR(0x671b0d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671b13ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671b13:L671b13:{c.instructions+=4;NFSU2_TR(0x671b13);
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
B671b15:{NFSU2_TR(0x671b15);
__builtin_memmove((R+12),gp(0x783194),4);
}
B671b1b:{NFSU2_TR(0x671b1b);
__builtin_memmove((R+28),gp(0x783198),4);
}
B671b21:{NFSU2_TR(0x671b21);
if(r1(R+518)){{goto L671b37;}}
}
B671b23:L671b23:{c.instructions+=2;NFSU2_TR(0x671b23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b24:{NFSU2_TR(0x671b24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671b26ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671b26:L671b26:{c.instructions+=2;NFSU2_TR(0x671b26);
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
B671b28:{NFSU2_TR(0x671b28);
if(r1(R+518)){{goto L671b37;}}
}
B671b2a:L671b2a:{c.instructions+=3;NFSU2_TR(0x671b2a);
u8 U[4];
w4(U+0,u32(0x7b7294ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b2f:{NFSU2_TR(0x671b2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b30:{NFSU2_TR(0x671b30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671b32ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671b32:L671b32:{c.instructions+=1;NFSU2_TR(0x671b32);
__builtin_memmove(gp(0x8a5cf8),(R+0),4);
}
B671b37:L671b37:{c.instructions+=3;NFSU2_TR(0x671b37);
w4(R+24,u32(0x7b7288ull));
}
B671b3c:{NFSU2_TR(0x671b3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b3d:{NFSU2_TR(0x671b3d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671b43ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671b43:L671b43:{c.instructions+=2;NFSU2_TR(0x671b43);
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
B671b45:{NFSU2_TR(0x671b45);
if(r1(R+518)){{goto L671b5b;}}
}
B671b47:L671b47:{c.instructions+=2;NFSU2_TR(0x671b47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b48:{NFSU2_TR(0x671b48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671b4aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671b4a:L671b4a:{c.instructions+=2;NFSU2_TR(0x671b4a);
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
B671b4c:{NFSU2_TR(0x671b4c);
if(r1(R+518)){{goto L671b5b;}}
}
B671b4e:L671b4e:{c.instructions+=3;NFSU2_TR(0x671b4e);
u8 U[4];
w4(U+0,u32(0x7b7294ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b53:{NFSU2_TR(0x671b53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b54:{NFSU2_TR(0x671b54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671b56ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671b56:L671b56:{c.instructions+=1;NFSU2_TR(0x671b56);
__builtin_memmove(gp(0x8a5cf4),(R+0),4);
}
B671b5b:L671b5b:{c.instructions+=3;NFSU2_TR(0x671b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671b5c:{NFSU2_TR(0x671b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671b5d:{NFSU2_TR(0x671b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671b5e:L671b5e:{c.instructions+=2;NFSU2_TR(0x671b5e);
u8 U[8];
__builtin_memmove((U+0),gp(0x80a170),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671b65:{NFSU2_TR(0x671b65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671b97;}}
}
B671b67:L671b67:{c.instructions+=5;NFSU2_TR(0x671b67);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b69:{NFSU2_TR(0x671b69);
u8 U[4];
w4(U+0,u32(0x80a170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b6e:{NFSU2_TR(0x671b6e);
u8 U[4];
w4(U+0,u32(0x7b7278ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b73:{NFSU2_TR(0x671b73);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671b75:{NFSU2_TR(0x671b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671b7aull));
TAIL_STATIC(0x641539u,641);
}
B671b7a:L671b7a:{c.instructions+=2;NFSU2_TR(0x671b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671b7c:{NFSU2_TR(0x671b7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671b84;}}
}
B671b7e:L671b7e:{c.instructions+=1;NFSU2_TR(0x671b7e);
s4(0x80a170,u32(u32(m4(0x80a170))&u32(r4(R+0))));
}
B671b84:L671b84:{c.instructions+=2;NFSU2_TR(0x671b84);
u8 U[8];
__builtin_memmove((U+0),gp(0x80a170),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671b8b:{NFSU2_TR(0x671b8b);
if(r1(R+518)){{goto L671ba0;}}
}
B671b8d:L671b8d:{c.instructions+=1;NFSU2_TR(0x671b8d);
s4(0x80a170,u32(0x1ull));
}
B671b97:L671b97:{c.instructions+=2;NFSU2_TR(0x671b97);
u8 U[14];
__builtin_memmove((U+6),gp(0x80a170),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671b9e:{NFSU2_TR(0x671b9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671bbe;}}
}
B671ba0:L671ba0:{c.instructions+=3;NFSU2_TR(0x671ba0);
__builtin_memmove((R+0),gp(0x8a5cf8),4);
}
B671ba5:{NFSU2_TR(0x671ba5);
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
B671ba7:{NFSU2_TR(0x671ba7);
if(r1(R+518)){{goto L671baf;}}
}
B671ba9:L671ba9:{c.instructions+=2;NFSU2_TR(0x671ba9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B671bac:{NFSU2_TR(0x671bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671baeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671bae:L671bae:{c.instructions+=1;NFSU2_TR(0x671bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671baf:L671baf:{c.instructions+=3;NFSU2_TR(0x671baf);
__builtin_memmove((R+0),gp(0x8a5cf4),4);
}
B671bb4:{NFSU2_TR(0x671bb4);
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
B671bb6:{NFSU2_TR(0x671bb6);
if(r1(R+518)){{goto L671bbe;}}
}
B671bb8:L671bb8:{c.instructions+=2;NFSU2_TR(0x671bb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B671bbb:{NFSU2_TR(0x671bbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671bbdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671bbd:L671bbd:{c.instructions+=1;NFSU2_TR(0x671bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671bbe:L671bbe:{c.instructions+=2;NFSU2_TR(0x671bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B671bbf:{NFSU2_TR(0x671bbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671bc2:L671bc2:{c.instructions+=8;NFSU2_TR(0x671bc2);
__builtin_memmove((R+28),(R+28),4);
}
B671bc4:{NFSU2_TR(0x671bc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671bc5:{NFSU2_TR(0x671bc5);
__builtin_memmove((R+20),(R+16),4);
}
B671bc7:{NFSU2_TR(0x671bc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671bc8:{NFSU2_TR(0x671bc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671bc9:{NFSU2_TR(0x671bc9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B671bcb:{NFSU2_TR(0x671bcb);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a5cfc),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671bd1:{NFSU2_TR(0x671bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671c4e;}}
}
B671bd3:L671bd3:{c.instructions+=8;NFSU2_TR(0x671bd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671bd4:{NFSU2_TR(0x671bd4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B671bd6:{NFSU2_TR(0x671bd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671bd7:{NFSU2_TR(0x671bd7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B671bd8:{NFSU2_TR(0x671bd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671bd9:{NFSU2_TR(0x671bd9);
__builtin_memmove(gp(0x8a5cfc),(R+24),4);
}
B671bdf:{NFSU2_TR(0x671bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671be2:{NFSU2_TR(0x671be2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671be7ull));
TAIL_STATIC(0x575620u,575);
}
B671be7:L671be7:{c.instructions+=3;NFSU2_TR(0x671be7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671be8:{NFSU2_TR(0x671be8);
__builtin_memmove((R+28),(R+0),4);
}
B671bea:{NFSU2_TR(0x671bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671befull));
TAIL_STATIC(0x575620u,575);
}
B671bef:L671bef:{c.instructions+=5;NFSU2_TR(0x671bef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671bf1:{NFSU2_TR(0x671bf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671bf2:{NFSU2_TR(0x671bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671bf3:{NFSU2_TR(0x671bf3);
__builtin_memmove((R+12),(R+0),4);
}
B671bf5:{NFSU2_TR(0x671bf5);
if(r1(R+518)){{goto L671bff;}}
}
B671bf7:L671bf7:{c.instructions+=2;NFSU2_TR(0x671bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671bf9:{NFSU2_TR(0x671bf9);
if(r1(R+518)){{goto L671bff;}}
}
B671bfb:L671bfb:{c.instructions+=2;NFSU2_TR(0x671bfb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671bfd:{NFSU2_TR(0x671bfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671c02;}}
}
B671bff:L671bff:{c.instructions+=1;NFSU2_TR(0x671bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671c02:L671c02:{c.instructions+=2;NFSU2_TR(0x671c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671c04:{NFSU2_TR(0x671c04);
if(r1(R+518)){{goto L671c0d;}}
}
B671c06:L671c06:{c.instructions+=2;NFSU2_TR(0x671c06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c07:{NFSU2_TR(0x671c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c0cull));
TAIL_STATIC(0x575630u,575);
}
B671c0c:L671c0c:{c.instructions+=1;NFSU2_TR(0x671c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671c0d:L671c0d:{c.instructions+=2;NFSU2_TR(0x671c0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671c0f:{NFSU2_TR(0x671c0f);
if(r1(R+518)){{goto L671c1c;}}
}
B671c11:L671c11:{c.instructions+=2;NFSU2_TR(0x671c11);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671c13:{NFSU2_TR(0x671c13);
if(r1(R+518)){{goto L671c1c;}}
}
B671c15:L671c15:{c.instructions+=2;NFSU2_TR(0x671c15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c16:{NFSU2_TR(0x671c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c1bull));
TAIL_STATIC(0x575630u,575);
}
B671c1b:L671c1b:{c.instructions+=1;NFSU2_TR(0x671c1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671c1c:L671c1c:{c.instructions+=2;NFSU2_TR(0x671c1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c1e:{NFSU2_TR(0x671c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c23ull));
TAIL_STATIC(0x575630u,575);
}
B671c23:L671c23:{c.instructions+=3;NFSU2_TR(0x671c23);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B671c27:{NFSU2_TR(0x671c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671c28:{NFSU2_TR(0x671c28);
if(r1(R+518)){{goto L671c4c;}}
}
B671c2a:L671c2a:{c.instructions+=3;NFSU2_TR(0x671c2a);
__builtin_memmove((R+24),gp(0x78316c),4);
}
B671c30:{NFSU2_TR(0x671c30);
u8 U[4];
w4(U+0,u32(0x7b7398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c35:{NFSU2_TR(0x671c35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c37ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671c37:L671c37:{c.instructions+=2;NFSU2_TR(0x671c37);
u8 U[4];
w4(U+0,u32(0x7b7338ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c3c:{NFSU2_TR(0x671c3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c3eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671c3e:L671c3e:{c.instructions+=2;NFSU2_TR(0x671c3e);
u8 U[4];
w4(U+0,u32(0x7b72e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c43:{NFSU2_TR(0x671c43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c45ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671c45:L671c45:{c.instructions+=2;NFSU2_TR(0x671c45);
u8 U[4];
w4(U+0,u32(0x7b72b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c4a:{NFSU2_TR(0x671c4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c4cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671c4c:L671c4c:{c.instructions+=2;NFSU2_TR(0x671c4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671c4d:{NFSU2_TR(0x671c4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671c4e:L671c4e:{c.instructions+=3;NFSU2_TR(0x671c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671c4f:{NFSU2_TR(0x671c4f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B671c50:{NFSU2_TR(0x671c50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671c51:L671c51:{c.instructions+=10;NFSU2_TR(0x671c51);
__builtin_memmove((R+28),(R+28),4);
}
B671c53:{NFSU2_TR(0x671c53);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c54:{NFSU2_TR(0x671c54);
__builtin_memmove((R+20),(R+16),4);
}
B671c56:{NFSU2_TR(0x671c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B671c59:{NFSU2_TR(0x671c59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c5a:{NFSU2_TR(0x671c5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B671c5d:{NFSU2_TR(0x671c5d);
__builtin_memmove((R+24),(R+4),4);
}
B671c5f:{NFSU2_TR(0x671c5f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B671c62:{NFSU2_TR(0x671c62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671c63:{NFSU2_TR(0x671c63);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671c69ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671c69:L671c69:{c.instructions+=14;NFSU2_TR(0x671c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B671c6c:{NFSU2_TR(0x671c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671c6f:{NFSU2_TR(0x671c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B671c73:{NFSU2_TR(0x671c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B671c77:{NFSU2_TR(0x671c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B671c7b:{NFSU2_TR(0x671c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671c7e:{NFSU2_TR(0x671c7e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B671c82:{NFSU2_TR(0x671c82);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B671c83:{NFSU2_TR(0x671c83);
w4(R+4,u32(~u32(r4(R+4))));
}
B671c85:{NFSU2_TR(0x671c85);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B671c87:{NFSU2_TR(0x671c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B671c8a:{NFSU2_TR(0x671c8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671c8c:{NFSU2_TR(0x671c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671c8f:{NFSU2_TR(0x671c8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671c96;}}
}
B671c91:L671c91:{c.instructions+=1;NFSU2_TR(0x671c91);
w4(R+4,u32(0x100000ull));
}
B671c96:L671c96:{c.instructions+=9;NFSU2_TR(0x671c96);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B671c9a:{NFSU2_TR(0x671c9a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B671c9b:{NFSU2_TR(0x671c9b);
w4(R+0,u32(~u32(r4(R+0))));
}
B671c9d:{NFSU2_TR(0x671c9d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671c9f:{NFSU2_TR(0x671c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671ca2:{NFSU2_TR(0x671ca2);
__builtin_memmove((R+0),(R+24),4);
}
B671ca4:{NFSU2_TR(0x671ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671ca5:{NFSU2_TR(0x671ca5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B671ca6:{NFSU2_TR(0x671ca6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671ca9:L671ca9:{c.instructions+=4;NFSU2_TR(0x671ca9);
__builtin_memmove((R+28),(R+28),4);
}
B671cab:{NFSU2_TR(0x671cab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cac:{NFSU2_TR(0x671cac);
__builtin_memmove((R+24),(R+4),4);
}
B671cae:{NFSU2_TR(0x671cae);
{goto L671cc4;}
}
B671cb0:L671cb0:{c.instructions+=7;NFSU2_TR(0x671cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B671cb2:{NFSU2_TR(0x671cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B671cb4:{NFSU2_TR(0x671cb4);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cb9:{NFSU2_TR(0x671cb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cbb:{NFSU2_TR(0x671cbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cbc:{NFSU2_TR(0x671cbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B671cbe:{NFSU2_TR(0x671cbe);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671cc4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671cc4:L671cc4:{c.instructions+=2;NFSU2_TR(0x671cc4);
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
B671cc7:{NFSU2_TR(0x671cc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671cb0u);}goto L671cb0;}}
}
B671cc9:L671cc9:{c.instructions+=2;NFSU2_TR(0x671cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671cca:{NFSU2_TR(0x671cca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671ccb:L671ccb:{c.instructions+=17;NFSU2_TR(0x671ccb);
__builtin_memmove((R+28),(R+28),4);
}
B671ccd:{NFSU2_TR(0x671ccd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cce:{NFSU2_TR(0x671cce);
__builtin_memmove((R+20),(R+16),4);
}
B671cd0:{NFSU2_TR(0x671cd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cd1:{NFSU2_TR(0x671cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671cd4:{NFSU2_TR(0x671cd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cd5:{NFSU2_TR(0x671cd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cd6:{NFSU2_TR(0x671cd6);
__builtin_memmove((R+24),(R+4),4);
}
B671cd8:{NFSU2_TR(0x671cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671cdb:{NFSU2_TR(0x671cdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671cdc:{NFSU2_TR(0x671cdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B671cdf:{NFSU2_TR(0x671cdf);
w4(R+4,u32(~u32(r4(R+4))));
}
B671ce1:{NFSU2_TR(0x671ce1);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B671ce5:{NFSU2_TR(0x671ce5);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B671ce7:{NFSU2_TR(0x671ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B671cea:{NFSU2_TR(0x671cea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B671ced:{NFSU2_TR(0x671ced);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L671d83;}}
}
B671cf3:L671cf3:{c.instructions+=7;NFSU2_TR(0x671cf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671cf6:{NFSU2_TR(0x671cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671cf9:{NFSU2_TR(0x671cf9);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B671cfb:{NFSU2_TR(0x671cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B671cfe:{NFSU2_TR(0x671cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671d01:{NFSU2_TR(0x671d01);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671d03:{NFSU2_TR(0x671d03);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L671d11;}}
}
B671d05:L671d05:{c.instructions+=5;NFSU2_TR(0x671d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671d08:{NFSU2_TR(0x671d08);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B671d0a:{NFSU2_TR(0x671d0a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671d0c:{NFSU2_TR(0x671d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671d0f:{NFSU2_TR(0x671d0f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671d05u);}goto L671d05;}}
}
B671d11:L671d11:{c.instructions+=5;NFSU2_TR(0x671d11);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d13:{NFSU2_TR(0x671d13);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d18:{NFSU2_TR(0x671d18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B671d1b:{NFSU2_TR(0x671d1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d1d:{NFSU2_TR(0x671d1d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671d23ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671d23:L671d23:{c.instructions+=3;NFSU2_TR(0x671d23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671d25:{NFSU2_TR(0x671d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671d28:{NFSU2_TR(0x671d28);
if(r1(R+518)){{goto L671db1;}}
}
B671d2e:L671d2e:{c.instructions+=10;NFSU2_TR(0x671d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671d31:{NFSU2_TR(0x671d31);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B671d35:{NFSU2_TR(0x671d35);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B671d36:{NFSU2_TR(0x671d36);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d38:{NFSU2_TR(0x671d38);
w4(R+0,u32(~u32(r4(R+0))));
}
B671d3a:{NFSU2_TR(0x671d3a);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d3f:{NFSU2_TR(0x671d3f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671d41:{NFSU2_TR(0x671d41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d42:{NFSU2_TR(0x671d42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B671d45:{NFSU2_TR(0x671d45);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671d4bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671d4b:L671d4b:{c.instructions+=2;NFSU2_TR(0x671d4b);
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
B671d4d:{NFSU2_TR(0x671d4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671d60;}}
}
B671d4f:L671d4f:{c.instructions+=4;NFSU2_TR(0x671d4f);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d54:{NFSU2_TR(0x671d54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d55:{NFSU2_TR(0x671d55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B671d58:{NFSU2_TR(0x671d58);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671d5eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671d5e:L671d5e:{c.instructions+=1;NFSU2_TR(0x671d5e);
{goto L671db1;}
}
B671d60:L671d60:{c.instructions+=6;NFSU2_TR(0x671d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671d63:{NFSU2_TR(0x671d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B671d65:{NFSU2_TR(0x671d65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B671d67:{NFSU2_TR(0x671d67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B671d69:{NFSU2_TR(0x671d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671d6c:{NFSU2_TR(0x671d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671d6f:L671d6f:{c.instructions+=1;NFSU2_TR(0x671d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671d72:L671d72:{c.instructions+=4;NFSU2_TR(0x671d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B671d74:{NFSU2_TR(0x671d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B671d77:{NFSU2_TR(0x671d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671d7a:{NFSU2_TR(0x671d7a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671d7c:L671d7c:{c.instructions+=5;NFSU2_TR(0x671d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671d7d:{NFSU2_TR(0x671d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671d7e:{NFSU2_TR(0x671d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671d7f:{NFSU2_TR(0x671d7f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B671d80:{NFSU2_TR(0x671d80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671d83:L671d83:{c.instructions+=3;NFSU2_TR(0x671d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B671d86:{NFSU2_TR(0x671d86);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671d88:{NFSU2_TR(0x671d88);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671d72u);}goto L671d72;}}
}
B671d8a:L671d8a:{c.instructions+=14;NFSU2_TR(0x671d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671d8d:{NFSU2_TR(0x671d8d);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B671d91:{NFSU2_TR(0x671d91);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B671d92:{NFSU2_TR(0x671d92);
w4(R+0,u32(~u32(r4(R+0))));
}
B671d94:{NFSU2_TR(0x671d94);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B671d96:{NFSU2_TR(0x671d96);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d98:{NFSU2_TR(0x671d98);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671d9d:{NFSU2_TR(0x671d9d);
__builtin_memmove((R+0),(R+12),4);
}
B671d9f:{NFSU2_TR(0x671d9f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B671da1:{NFSU2_TR(0x671da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671da2:{NFSU2_TR(0x671da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B671da4:{NFSU2_TR(0x671da4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671da6:{NFSU2_TR(0x671da6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671da7:{NFSU2_TR(0x671da7);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x671dadull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B671dad:L671dad:{c.instructions+=2;NFSU2_TR(0x671dad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671daf:{NFSU2_TR(0x671daf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671d6fu);}goto L671d6f;}}
}
B671db1:L671db1:{c.instructions+=2;NFSU2_TR(0x671db1);
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
B671db3:{NFSU2_TR(0x671db3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671d7cu);}goto L671d7c;}
}
B671db5:L671db5:{c.instructions+=6;NFSU2_TR(0x671db5);
__builtin_memmove((R+28),(R+28),4);
}
B671db7:{NFSU2_TR(0x671db7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671db8:{NFSU2_TR(0x671db8);
__builtin_memmove((R+20),(R+16),4);
}
B671dba:{NFSU2_TR(0x671dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671dbd:{NFSU2_TR(0x671dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671dbf:{NFSU2_TR(0x671dbf);
if(r1(R+518)){{goto L671dc4;}}
}
B671dc1:L671dc1:{c.instructions+=1;NFSU2_TR(0x671dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B671dc4:L671dc4:{c.instructions+=4;NFSU2_TR(0x671dc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671dc5:{NFSU2_TR(0x671dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B671dc8:{NFSU2_TR(0x671dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671dca:{NFSU2_TR(0x671dca);
if(r1(R+518)){{goto L671dcf;}}
}
B671dcc:L671dcc:{c.instructions+=1;NFSU2_TR(0x671dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B671dcf:L671dcf:{c.instructions+=3;NFSU2_TR(0x671dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671dd2:{NFSU2_TR(0x671dd2);
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
B671dd4:{NFSU2_TR(0x671dd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671de0;}}
}
B671dd6:L671dd6:{c.instructions+=2;NFSU2_TR(0x671dd6);
w4(R+0,u32(0x8876086cull));
}
B671ddb:{NFSU2_TR(0x671ddb);
{goto L671e6b;}
}
B671de0:L671de0:{c.instructions+=7;NFSU2_TR(0x671de0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671de1:{NFSU2_TR(0x671de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B671de3:{NFSU2_TR(0x671de3);
__builtin_memmove((R+0),(R+28),4);
}
B671de5:{NFSU2_TR(0x671de5);
w4(R+4,u32(0xffff0000ull));
}
B671dea:{NFSU2_TR(0x671dea);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B671dec:{NFSU2_TR(0x671dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x46580000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671df1:{NFSU2_TR(0x671df1);
if(r1(R+518)){{goto L671e1a;}}
}
B671df3:L671df3:{c.instructions+=2;NFSU2_TR(0x671df3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x54580000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671df8:{NFSU2_TR(0x671df8);
if(r1(R+518)){{goto L671e1a;}}
}
B671dfa:L671dfa:{c.instructions+=2;NFSU2_TR(0x671dfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671dff:{NFSU2_TR(0x671dff);
if(r1(R+518)){{goto L671e1a;}}
}
B671e01:L671e01:{c.instructions+=2;NFSU2_TR(0x671e01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671e06:{NFSU2_TR(0x671e06);
if(r1(R+518)){{goto L671e1a;}}
}
B671e08:L671e08:{c.instructions+=2;NFSU2_TR(0x671e08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671e0d:{NFSU2_TR(0x671e0d);
if(r1(R+518)){{goto L671e1a;}}
}
B671e0f:L671e0f:{c.instructions+=2;NFSU2_TR(0x671e0f);
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
B671e11:{NFSU2_TR(0x671e11);
if(r1(R+518)){{goto L671e1a;}}
}
B671e13:L671e13:{c.instructions+=2;NFSU2_TR(0x671e13);
w4(R+0,u32(0x88760b59ull));
}
B671e18:{NFSU2_TR(0x671e18);
{goto L671e6a;}
}
B671e1a:L671e1a:{c.instructions+=3;NFSU2_TR(0x671e1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B671e1d:{NFSU2_TR(0x671e1d);
w4(R+8,u32(0xffffull));
}
B671e22:{NFSU2_TR(0x671e22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671e23:L671e23:{c.instructions+=3;NFSU2_TR(0x671e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B671e25:{NFSU2_TR(0x671e25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B671e27:{NFSU2_TR(0x671e27);
if(r1(R+519)){{goto L671e8f;}}
}
B671e29:L671e29:{c.instructions+=4;NFSU2_TR(0x671e29);
__builtin_memmove((R+24),(R+0),4);
}
B671e2b:{NFSU2_TR(0x671e2b);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B671e2d:{NFSU2_TR(0x671e2d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671e2f:{NFSU2_TR(0x671e2f);
if(r1(R+518)){{goto L671e97;}}
}
B671e31:L671e31:{c.instructions+=2;NFSU2_TR(0x671e31);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671e37:{NFSU2_TR(0x671e37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671e70;}}
}
B671e39:L671e39:{c.instructions+=4;NFSU2_TR(0x671e39);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B671e3c:{NFSU2_TR(0x671e3c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B671e41:{NFSU2_TR(0x671e41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671e44:{NFSU2_TR(0x671e44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L671e82;}}
}
B671e46:L671e46:{c.instructions+=3;NFSU2_TR(0x671e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B671e49:{NFSU2_TR(0x671e49);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B671e4c:{NFSU2_TR(0x671e4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671e82;}}
}
B671e4e:L671e4e:{c.instructions+=3;NFSU2_TR(0x671e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671e51:{NFSU2_TR(0x671e51);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671e53:{NFSU2_TR(0x671e53);
if(r1(R+518)){{goto L671e5a;}}
}
B671e55:L671e55:{c.instructions+=2;NFSU2_TR(0x671e55);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B671e58:{NFSU2_TR(0x671e58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B671e5a:L671e5a:{c.instructions+=2;NFSU2_TR(0x671e5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671e5c:{NFSU2_TR(0x671e5c);
if(r1(R+518)){{goto L671e67;}}
}
B671e5e:L671e5e:{c.instructions+=2;NFSU2_TR(0x671e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B671e65:{NFSU2_TR(0x671e65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B671e67:L671e67:{c.instructions+=1;NFSU2_TR(0x671e67);
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
B671e69:L671e69:{c.instructions+=1;NFSU2_TR(0x671e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671e6a:L671e6a:{c.instructions+=1;NFSU2_TR(0x671e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B671e6b:L671e6b:{c.instructions+=3;NFSU2_TR(0x671e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671e6c:{NFSU2_TR(0x671e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B671e6d:{NFSU2_TR(0x671e6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B671e70:L671e70:{c.instructions+=4;NFSU2_TR(0x671e70);
__builtin_memmove((R+12),(R+28),4);
}
B671e72:{NFSU2_TR(0x671e72);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+8))));
}
B671e74:{NFSU2_TR(0x671e74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x200ull))));
}
B671e7a:{NFSU2_TR(0x671e7a);
if(r1(R+512)){{goto L671e87;}}
}
B671e7c:L671e7c:{c.instructions+=2;NFSU2_TR(0x671e7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B671e7f:{NFSU2_TR(0x671e7f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B671e82:L671e82:{c.instructions+=2;NFSU2_TR(0x671e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B671e85:{NFSU2_TR(0x671e85);
{goto L671e8f;}
}
B671e87:L671e87:{c.instructions+=2;NFSU2_TR(0x671e87);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671e8a:{NFSU2_TR(0x671e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671e8f;}}
}
B671e8c:L671e8c:{c.instructions+=1;NFSU2_TR(0x671e8c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B671e8f:L671e8f:{c.instructions+=3;NFSU2_TR(0x671e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B671e92:{NFSU2_TR(0x671e92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B671e95:{NFSU2_TR(0x671e95);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671e23u);}goto L671e23;}
}
B671e97:L671e97:{c.instructions+=3;NFSU2_TR(0x671e97);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B671e99:{NFSU2_TR(0x671e99);
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
B671e9a:{NFSU2_TR(0x671e9a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671e69u);}goto L671e69;}
}
B671e9c:L671e9c:{c.instructions+=9;NFSU2_TR(0x671e9c);
__builtin_memmove((R+28),(R+28),4);
}
B671e9e:{NFSU2_TR(0x671e9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671e9f:{NFSU2_TR(0x671e9f);
__builtin_memmove((R+20),(R+16),4);
}
B671ea1:{NFSU2_TR(0x671ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B671ea4:{NFSU2_TR(0x671ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B671ea7:{NFSU2_TR(0x671ea7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671ea9:{NFSU2_TR(0x671ea9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671eaa:{NFSU2_TR(0x671eaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671eab:{NFSU2_TR(0x671eab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671eb7;}}
}
B671ead:L671ead:{c.instructions+=2;NFSU2_TR(0x671ead);
w4(R+0,u32(0x8876086cull));
}
B671eb2:{NFSU2_TR(0x671eb2);
TAIL_STATIC(0x6721a9u,672);
}
B671eb7:L671eb7:{c.instructions+=4;NFSU2_TR(0x671eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671eba:{NFSU2_TR(0x671eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B671ebe:{NFSU2_TR(0x671ebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671ec0:{NFSU2_TR(0x671ec0);
if(r1(R+518)){{goto L671ec5;}}
}
B671ec2:L671ec2:{c.instructions+=1;NFSU2_TR(0x671ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B671ec5:L671ec5:{c.instructions+=8;NFSU2_TR(0x671ec5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671ec6:{NFSU2_TR(0x671ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B671ec8:{NFSU2_TR(0x671ec8);
__builtin_memmove((R+0),(R+24),4);
}
B671eca:{NFSU2_TR(0x671eca);
w4(R+8,u32(0xffff0000ull));
}
B671ecf:{NFSU2_TR(0x671ecf);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B671ed1:{NFSU2_TR(0x671ed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x46580000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671ed6:{NFSU2_TR(0x671ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B671ed9:{NFSU2_TR(0x671ed9);
if(r1(R+518)){TAIL_STATIC(0x6721a6u,672);}
}
B671edf:L671edf:{c.instructions+=2;NFSU2_TR(0x671edf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671ee4:{NFSU2_TR(0x671ee4);
if(r1(R+518)){TAIL_STATIC(0x6721afu,672);}
}
B671eea:L671eea:{c.instructions+=2;NFSU2_TR(0x671eea);
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
B671eec:{NFSU2_TR(0x671eec);
if(r1(R+518)){{goto L671ef8;}}
}
B671eee:L671eee:{c.instructions+=2;NFSU2_TR(0x671eee);
w4(R+0,u32(0x88760b59ull));
}
B671ef3:{NFSU2_TR(0x671ef3);
TAIL_STATIC(0x6721a8u,672);
}
B671ef8:L671ef8:{c.instructions+=3;NFSU2_TR(0x671ef8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B671efb:{NFSU2_TR(0x671efb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B671efd:{NFSU2_TR(0x671efd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671f86;}}
}
B671f03:L671f03:{c.instructions+=4;NFSU2_TR(0x671f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B671f06:{NFSU2_TR(0x671f06);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B671f09:{NFSU2_TR(0x671f09);
w4(R+4,u32(0xffffull));
}
B671f0e:{NFSU2_TR(0x671f0e);
w4(R+12,u32(0x7fffull));
}
B671f13:L671f13:{c.instructions+=4;NFSU2_TR(0x671f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B671f15:{NFSU2_TR(0x671f15);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B671f17:{NFSU2_TR(0x671f17);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671f1a:{NFSU2_TR(0x671f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671f5b;}}
}
B671f1c:L671f1c:{c.instructions+=8;NFSU2_TR(0x671f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671f1f:{NFSU2_TR(0x671f1f);
__builtin_memmove((R+28),(R+8),4);
}
B671f21:{NFSU2_TR(0x671f21);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B671f24:{NFSU2_TR(0x671f24);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x700ull))));
}
B671f2a:{NFSU2_TR(0x671f2a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1800ull))));
}
B671f30:{NFSU2_TR(0x671f30);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B671f32:{NFSU2_TR(0x671f32);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671f38:{NFSU2_TR(0x671f38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671f5b;}}
}
B671f3a:L671f3a:{c.instructions+=2;NFSU2_TR(0x671f3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671f3c:{NFSU2_TR(0x671f3c);
if(r1(R+518)){{goto L671f58;}}
}
B671f3e:L671f3e:{c.instructions+=9;NFSU2_TR(0x671f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B671f41:{NFSU2_TR(0x671f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B671f44:{NFSU2_TR(0x671f44);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B671f46:{NFSU2_TR(0x671f46);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B671f49:{NFSU2_TR(0x671f49);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B671f4c:{NFSU2_TR(0x671f4c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B671f4e:{NFSU2_TR(0x671f4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B671f52:{NFSU2_TR(0x671f52);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+12))));
}
B671f54:{NFSU2_TR(0x671f54);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B671f58:L671f58:{c.instructions+=1;NFSU2_TR(0x671f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B671f5b:L671f5b:{c.instructions+=5;NFSU2_TR(0x671f5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B671f5d:{NFSU2_TR(0x671f5d);
__builtin_memmove((R+28),(R+8),4);
}
B671f5f:{NFSU2_TR(0x671f5f);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B671f61:{NFSU2_TR(0x671f61);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671f63:{NFSU2_TR(0x671f63);
if(r1(R+518)){TAIL_STATIC(0x67219au,672);}
}
B671f69:L671f69:{c.instructions+=2;NFSU2_TR(0x671f69);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671f6f:{NFSU2_TR(0x671f6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671f78;}}
}
B671f71:L671f71:{c.instructions+=3;NFSU2_TR(0x671f71);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B671f74:{NFSU2_TR(0x671f74);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B671f76:{NFSU2_TR(0x671f76);
{goto L671f7e;}
}
B671f78:L671f78:{c.instructions+=2;NFSU2_TR(0x671f78);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B671f7b:{NFSU2_TR(0x671f7b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B671f7e:L671f7e:{c.instructions+=3;NFSU2_TR(0x671f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B671f81:{NFSU2_TR(0x671f81);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B671f84:{NFSU2_TR(0x671f84);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x671f13u);}goto L671f13;}
}
B671f86:L671f86:{c.instructions+=2;NFSU2_TR(0x671f86);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B671f88:{NFSU2_TR(0x671f88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67203bu,672);}
}
B671f8e:L671f8e:{c.instructions+=9;NFSU2_TR(0x671f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B671f91:{NFSU2_TR(0x671f91);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B671f93:{NFSU2_TR(0x671f93);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B671f96:{NFSU2_TR(0x671f96);
w4(R+4,u32(0xffffull));
}
B671f9b:{NFSU2_TR(0x671f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B671f9c:{NFSU2_TR(0x671f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B671f9e:{NFSU2_TR(0x671f9e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B671fa0:{NFSU2_TR(0x671fa0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B671fa3:{NFSU2_TR(0x671fa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x672000u,672);}
}
B671fa5:L671fa5:{c.instructions+=6;NFSU2_TR(0x671fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671fa8:{NFSU2_TR(0x671fa8);
__builtin_memmove((R+8),(R+0),4);
}
B671faa:{NFSU2_TR(0x671faa);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B671fb0:{NFSU2_TR(0x671fb0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0001800ull))));
}
B671fb5:{NFSU2_TR(0x671fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671fb7:{NFSU2_TR(0x671fb7);
if(r1(R+518)){{goto L671ff6;}}
}
B671fb9:L671fb9:{c.instructions+=2;NFSU2_TR(0x671fb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671fbe:{NFSU2_TR(0x671fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671fd3;}}
}
B671fc0:L671fc0:{c.instructions+=5;NFSU2_TR(0x671fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671fc3:{NFSU2_TR(0x671fc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B671fc6:{NFSU2_TR(0x671fc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x5ull));
s4(u32(r4(U+4)),r4(U+8));
}
B671fcd:{NFSU2_TR(0x671fcd);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B671fd1:{NFSU2_TR(0x671fd1);
{goto L671ffd;}
}
B671fd3:L671fd3:{c.instructions+=2;NFSU2_TR(0x671fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x90000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671fd8:{NFSU2_TR(0x671fd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L671fef;}}
}
B671fda:L671fda:{c.instructions+=2;NFSU2_TR(0x671fda);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B671fdd:{NFSU2_TR(0x671fdd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x672031u,672);}
}
B671fdf:L671fdf:{c.instructions+=5;NFSU2_TR(0x671fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B671fe2:{NFSU2_TR(0x671fe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B671fe5:{NFSU2_TR(0x671fe5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B671fea:{NFSU2_TR(0x671fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B671fed:{NFSU2_TR(0x671fed);
{goto L671ffd;}
}
B671fef:L671fef:{c.instructions+=2;NFSU2_TR(0x671fef);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xa0000800ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa0000800ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xa0000800ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B671ff4:{NFSU2_TR(0x671ff4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x672031u,672);}
}
B671ff6:L671ff6:{c.instructions+=2;NFSU2_TR(0x671ff6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa0000800ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B671ffb:{NFSU2_TR(0x671ffb);
if(r1(R+518)){TAIL_STATIC(0x672000u,672);}
}
B671ffd:L671ffd:{c.instructions+=1;NFSU2_TR(0x671ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x672000u,672);
}
XIT:NFSU2_TR_EXIT(0x671,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
