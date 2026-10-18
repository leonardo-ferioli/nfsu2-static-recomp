#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_748(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x586,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x586,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_586(u8* __restrict R,Cpu& c);
u32 page_586(Cpu& c){return body_586(c.regs.data(),c);}
__attribute__((noinline)) u32 body_586(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x586000:goto L586000;
case 0x586001:c.instructions+=8;goto B586001;
case 0x586004:c.instructions+=7;goto B586004;
case 0x586005:c.instructions+=6;goto B586005;
case 0x586006:c.instructions+=5;goto B586006;
case 0x586007:c.instructions+=4;goto B586007;
case 0x586009:c.instructions+=3;goto B586009;
case 0x58600a:c.instructions+=2;goto B58600a;
case 0x58600d:c.instructions+=1;goto B58600d;
case 0x586010:goto L586010;
case 0x586017:c.instructions+=4;goto B586017;
case 0x586018:c.instructions+=3;goto B586018;
case 0x586019:c.instructions+=2;goto B586019;
case 0x58601e:c.instructions+=1;goto B58601e;
case 0x586020:goto L586020;
case 0x586025:goto L586025;
case 0x586028:goto L586028;
case 0x586029:c.instructions+=1;goto B586029;
case 0x58602e:goto L58602e;
case 0x586034:c.instructions+=3;goto B586034;
case 0x586037:c.instructions+=2;goto B586037;
case 0x586039:c.instructions+=1;goto B586039;
case 0x58603b:goto L58603b;
case 0x586040:goto L586040;
case 0x586043:c.instructions+=1;goto B586043;
case 0x586045:goto L586045;
case 0x586047:c.instructions+=1;goto B586047;
case 0x586049:goto L586049;
case 0x58604c:c.instructions+=2;goto B58604c;
case 0x586052:c.instructions+=1;goto B586052;
case 0x586054:goto L586054;
case 0x586055:c.instructions+=2;goto B586055;
case 0x586056:c.instructions+=1;goto B586056;
case 0x586060:goto L586060;
case 0x586061:c.instructions+=7;goto B586061;
case 0x586065:c.instructions+=6;goto B586065;
case 0x586066:c.instructions+=5;goto B586066;
case 0x586068:c.instructions+=4;goto B586068;
case 0x58606c:c.instructions+=3;goto B58606c;
case 0x58606d:c.instructions+=2;goto B58606d;
case 0x586075:c.instructions+=1;goto B586075;
case 0x58607a:goto L58607a;
case 0x586080:c.instructions+=8;goto B586080;
case 0x586084:c.instructions+=7;goto B586084;
case 0x586088:c.instructions+=6;goto B586088;
case 0x58608e:c.instructions+=5;goto B58608e;
case 0x586092:c.instructions+=4;goto B586092;
case 0x586098:c.instructions+=3;goto B586098;
case 0x58609e:c.instructions+=2;goto B58609e;
case 0x5860a4:c.instructions+=1;goto B5860a4;
case 0x5860a9:goto L5860a9;
case 0x5860ad:c.instructions+=3;goto B5860ad;
case 0x5860af:c.instructions+=2;goto B5860af;
case 0x5860b1:c.instructions+=1;goto B5860b1;
case 0x5860b6:goto L5860b6;
case 0x5860b9:c.instructions+=1;goto B5860b9;
case 0x5860bb:goto L5860bb;
case 0x5860be:c.instructions+=2;goto B5860be;
case 0x5860c3:c.instructions+=1;goto B5860c3;
case 0x5860c5:goto L5860c5;
case 0x5860c7:goto L5860c7;
case 0x5860c9:goto L5860c9;
case 0x5860cd:c.instructions+=4;goto B5860cd;
case 0x5860d0:c.instructions+=3;goto B5860d0;
case 0x5860d2:c.instructions+=2;goto B5860d2;
case 0x5860d5:c.instructions+=1;goto B5860d5;
case 0x5860d7:goto L5860d7;
case 0x5860db:c.instructions+=2;goto B5860db;
case 0x5860de:c.instructions+=1;goto B5860de;
case 0x5860e2:goto L5860e2;
case 0x5860e3:c.instructions+=2;goto B5860e3;
case 0x5860e4:c.instructions+=1;goto B5860e4;
case 0x5860f0:goto L5860f0;
case 0x5860f4:c.instructions+=2;goto B5860f4;
case 0x5860f9:c.instructions+=1;goto B5860f9;
case 0x586100:goto L586100;
case 0x586103:c.instructions+=1;goto B586103;
case 0x586105:goto L586105;
case 0x586108:c.instructions+=2;goto B586108;
case 0x58610d:c.instructions+=1;goto B58610d;
case 0x58610f:goto L58610f;
case 0x586110:goto L586110;
case 0x586112:c.instructions+=1;goto B586112;
case 0x586114:goto L586114;
case 0x58611a:c.instructions+=1;goto B58611a;
case 0x58611d:goto L58611d;
case 0x586120:goto L586120;
case 0x586121:c.instructions+=7;goto B586121;
case 0x586122:c.instructions+=6;goto B586122;
case 0x586126:c.instructions+=5;goto B586126;
case 0x58612c:c.instructions+=4;goto B58612c;
case 0x58612d:c.instructions+=3;goto B58612d;
case 0x586133:c.instructions+=2;goto B586133;
case 0x586137:c.instructions+=1;goto B586137;
case 0x58613c:goto L58613c;
case 0x586140:c.instructions+=5;goto B586140;
case 0x586144:c.instructions+=4;goto B586144;
case 0x586148:c.instructions+=3;goto B586148;
case 0x58614a:c.instructions+=2;goto B58614a;
case 0x58614d:c.instructions+=1;goto B58614d;
case 0x58614f:goto L58614f;
case 0x586155:goto L586155;
case 0x586159:c.instructions+=2;goto B586159;
case 0x58615a:c.instructions+=1;goto B58615a;
case 0x58615f:goto L58615f;
case 0x586160:c.instructions+=4;goto B586160;
case 0x586164:c.instructions+=3;goto B586164;
case 0x586165:c.instructions+=2;goto B586165;
case 0x586166:c.instructions+=1;goto B586166;
case 0x58616b:goto L58616b;
case 0x58616e:c.instructions+=2;goto B58616e;
case 0x586170:c.instructions+=1;goto B586170;
case 0x586172:goto L586172;
case 0x586178:c.instructions+=3;goto B586178;
case 0x58617e:c.instructions+=2;goto B58617e;
case 0x586182:c.instructions+=1;goto B586182;
case 0x586187:goto L586187;
case 0x58618b:c.instructions+=5;goto B58618b;
case 0x58618f:c.instructions+=4;goto B58618f;
case 0x586193:c.instructions+=3;goto B586193;
case 0x586195:c.instructions+=2;goto B586195;
case 0x586198:c.instructions+=1;goto B586198;
case 0x58619a:goto L58619a;
case 0x5861a0:goto L5861a0;
case 0x5861a1:c.instructions+=1;goto B5861a1;
case 0x5861a6:goto L5861a6;
case 0x5861aa:c.instructions+=3;goto B5861aa;
case 0x5861ab:c.instructions+=2;goto B5861ab;
case 0x5861ac:c.instructions+=1;goto B5861ac;
case 0x5861b1:goto L5861b1;
case 0x5861b4:goto L5861b4;
case 0x5861b5:c.instructions+=3;goto B5861b5;
case 0x5861b6:c.instructions+=2;goto B5861b6;
case 0x5861b7:c.instructions+=1;goto B5861b7;
case 0x5861c0:goto L5861c0;
case 0x5861c1:c.instructions+=4;goto B5861c1;
case 0x5861c2:c.instructions+=3;goto B5861c2;
case 0x5861c7:c.instructions+=2;goto B5861c7;
case 0x5861cc:c.instructions+=1;goto B5861cc;
case 0x5861d1:goto L5861d1;
case 0x5861d6:c.instructions+=2;goto B5861d6;
case 0x5861db:c.instructions+=1;goto B5861db;
case 0x5861e0:goto L5861e0;
case 0x5861e5:c.instructions+=2;goto B5861e5;
case 0x5861ea:c.instructions+=1;goto B5861ea;
case 0x5861ef:goto L5861ef;
case 0x5861f2:c.instructions+=3;goto B5861f2;
case 0x5861f4:c.instructions+=2;goto B5861f4;
case 0x5861f9:c.instructions+=1;goto B5861f9;
case 0x586200:goto L586200;
case 0x586201:c.instructions+=1;goto B586201;
case 0x586206:goto L586206;
case 0x586207:c.instructions+=2;goto B586207;
case 0x586208:c.instructions+=1;goto B586208;
case 0x58620d:goto L58620d;
case 0x586210:c.instructions+=4;goto B586210;
case 0x586216:c.instructions+=3;goto B586216;
case 0x586217:c.instructions+=2;goto B586217;
case 0x58621d:c.instructions+=1;goto B58621d;
case 0x58621f:goto L58621f;
case 0x586220:c.instructions+=2;goto B586220;
case 0x586221:c.instructions+=1;goto B586221;
case 0x586230:goto L586230;
case 0x586236:c.instructions+=48;goto B586236;
case 0x586238:c.instructions+=47;goto B586238;
case 0x58623b:c.instructions+=46;goto B58623b;
case 0x586241:c.instructions+=45;goto B586241;
case 0x586247:c.instructions+=44;goto B586247;
case 0x58624c:c.instructions+=43;goto B58624c;
case 0x586252:c.instructions+=42;goto B586252;
case 0x586258:c.instructions+=41;goto B586258;
case 0x58625d:c.instructions+=40;goto B58625d;
case 0x586262:c.instructions+=39;goto B586262;
case 0x58626c:c.instructions+=38;goto B58626c;
case 0x586272:c.instructions+=37;goto B586272;
case 0x586278:c.instructions+=36;goto B586278;
case 0x58627e:c.instructions+=35;goto B58627e;
case 0x586283:c.instructions+=34;goto B586283;
case 0x586289:c.instructions+=33;goto B586289;
case 0x58628f:c.instructions+=32;goto B58628f;
case 0x586294:c.instructions+=31;goto B586294;
case 0x586299:c.instructions+=30;goto B586299;
case 0x5862a3:c.instructions+=29;goto B5862a3;
case 0x5862a9:c.instructions+=28;goto B5862a9;
case 0x5862af:c.instructions+=27;goto B5862af;
case 0x5862b5:c.instructions+=26;goto B5862b5;
case 0x5862ba:c.instructions+=25;goto B5862ba;
case 0x5862c0:c.instructions+=24;goto B5862c0;
case 0x5862c6:c.instructions+=23;goto B5862c6;
case 0x5862cb:c.instructions+=22;goto B5862cb;
case 0x5862d0:c.instructions+=21;goto B5862d0;
case 0x5862da:c.instructions+=20;goto B5862da;
case 0x5862e0:c.instructions+=19;goto B5862e0;
case 0x5862e6:c.instructions+=18;goto B5862e6;
case 0x5862ec:c.instructions+=17;goto B5862ec;
case 0x5862f1:c.instructions+=16;goto B5862f1;
case 0x5862f7:c.instructions+=15;goto B5862f7;
case 0x5862fd:c.instructions+=14;goto B5862fd;
case 0x586302:c.instructions+=13;goto B586302;
case 0x586307:c.instructions+=12;goto B586307;
case 0x586311:c.instructions+=11;goto B586311;
case 0x586317:c.instructions+=10;goto B586317;
case 0x58631d:c.instructions+=9;goto B58631d;
case 0x586323:c.instructions+=8;goto B586323;
case 0x586328:c.instructions+=7;goto B586328;
case 0x58632e:c.instructions+=6;goto B58632e;
case 0x586334:c.instructions+=5;goto B586334;
case 0x586339:c.instructions+=4;goto B586339;
case 0x58633e:c.instructions+=3;goto B58633e;
case 0x586348:c.instructions+=2;goto B586348;
case 0x58634e:c.instructions+=1;goto B58634e;
case 0x586350:goto L586350;
case 0x586356:c.instructions+=49;goto B586356;
case 0x586358:c.instructions+=48;goto B586358;
case 0x58635b:c.instructions+=47;goto B58635b;
case 0x586361:c.instructions+=46;goto B586361;
case 0x586367:c.instructions+=45;goto B586367;
case 0x58636c:c.instructions+=44;goto B58636c;
case 0x586372:c.instructions+=43;goto B586372;
case 0x586378:c.instructions+=42;goto B586378;
case 0x58637d:c.instructions+=41;goto B58637d;
case 0x586382:c.instructions+=40;goto B586382;
case 0x58638c:c.instructions+=39;goto B58638c;
case 0x586392:c.instructions+=38;goto B586392;
case 0x586398:c.instructions+=37;goto B586398;
case 0x58639e:c.instructions+=36;goto B58639e;
case 0x5863a3:c.instructions+=35;goto B5863a3;
case 0x5863a9:c.instructions+=34;goto B5863a9;
case 0x5863af:c.instructions+=33;goto B5863af;
case 0x5863b4:c.instructions+=32;goto B5863b4;
case 0x5863b9:c.instructions+=31;goto B5863b9;
case 0x5863c3:c.instructions+=30;goto B5863c3;
case 0x5863c9:c.instructions+=29;goto B5863c9;
case 0x5863cf:c.instructions+=28;goto B5863cf;
case 0x5863d5:c.instructions+=27;goto B5863d5;
case 0x5863da:c.instructions+=26;goto B5863da;
case 0x5863e0:c.instructions+=25;goto B5863e0;
case 0x5863e6:c.instructions+=24;goto B5863e6;
case 0x5863eb:c.instructions+=23;goto B5863eb;
case 0x5863f0:c.instructions+=22;goto B5863f0;
case 0x5863fa:c.instructions+=21;goto B5863fa;
case 0x586400:c.instructions+=20;goto B586400;
case 0x586406:c.instructions+=19;goto B586406;
case 0x58640c:c.instructions+=18;goto B58640c;
case 0x586411:c.instructions+=17;goto B586411;
case 0x586417:c.instructions+=16;goto B586417;
case 0x58641d:c.instructions+=15;goto B58641d;
case 0x586422:c.instructions+=14;goto B586422;
case 0x586427:c.instructions+=13;goto B586427;
case 0x586431:c.instructions+=12;goto B586431;
case 0x586437:c.instructions+=11;goto B586437;
case 0x58643d:c.instructions+=10;goto B58643d;
case 0x586443:c.instructions+=9;goto B586443;
case 0x586448:c.instructions+=8;goto B586448;
case 0x58644e:c.instructions+=7;goto B58644e;
case 0x586454:c.instructions+=6;goto B586454;
case 0x586459:c.instructions+=5;goto B586459;
case 0x58645e:c.instructions+=4;goto B58645e;
case 0x586468:c.instructions+=3;goto B586468;
case 0x58646e:c.instructions+=2;goto B58646e;
case 0x586473:c.instructions+=1;goto B586473;
case 0x586480:goto L586480;
case 0x586481:c.instructions+=5;goto B586481;
case 0x586485:c.instructions+=4;goto B586485;
case 0x586487:c.instructions+=3;goto B586487;
case 0x586489:c.instructions+=2;goto B586489;
case 0x58648e:c.instructions+=1;goto B58648e;
case 0x586490:goto L586490;
case 0x586492:c.instructions+=1;goto B586492;
case 0x586494:goto L586494;
case 0x586497:c.instructions+=3;goto B586497;
case 0x586498:c.instructions+=2;goto B586498;
case 0x58649e:c.instructions+=1;goto B58649e;
case 0x5864a0:goto L5864a0;
case 0x5864a1:c.instructions+=1;goto B5864a1;
case 0x5864a2:goto L5864a2;
case 0x5864a8:c.instructions+=16;goto B5864a8;
case 0x5864ab:c.instructions+=15;goto B5864ab;
case 0x5864b0:c.instructions+=14;goto B5864b0;
case 0x5864b7:c.instructions+=13;goto B5864b7;
case 0x5864bd:c.instructions+=12;goto B5864bd;
case 0x5864c0:c.instructions+=11;goto B5864c0;
case 0x5864c4:c.instructions+=10;goto B5864c4;
case 0x5864c8:c.instructions+=9;goto B5864c8;
case 0x5864cb:c.instructions+=8;goto B5864cb;
case 0x5864ce:c.instructions+=7;goto B5864ce;
case 0x5864d5:c.instructions+=6;goto B5864d5;
case 0x5864d8:c.instructions+=5;goto B5864d8;
case 0x5864dd:c.instructions+=4;goto B5864dd;
case 0x5864de:c.instructions+=3;goto B5864de;
case 0x5864e3:c.instructions+=2;goto B5864e3;
case 0x5864e4:c.instructions+=1;goto B5864e4;
case 0x5864f0:goto L5864f0;
case 0x5864f1:c.instructions+=5;goto B5864f1;
case 0x5864f3:c.instructions+=4;goto B5864f3;
case 0x5864f6:c.instructions+=3;goto B5864f6;
case 0x5864f8:c.instructions+=2;goto B5864f8;
case 0x5864fe:c.instructions+=1;goto B5864fe;
case 0x586500:goto L586500;
case 0x586501:c.instructions+=1;goto B586501;
case 0x586506:goto L586506;
case 0x586509:c.instructions+=1;goto B586509;
case 0x586510:goto L586510;
case 0x586511:c.instructions+=1;goto B586511;
case 0x586520:goto L586520;
case 0x586521:c.instructions+=4;goto B586521;
case 0x586523:c.instructions+=3;goto B586523;
case 0x586526:c.instructions+=2;goto B586526;
case 0x586527:c.instructions+=1;goto B586527;
case 0x58652c:goto L58652c;
case 0x58652f:c.instructions+=3;goto B58652f;
case 0x586531:c.instructions+=2;goto B586531;
case 0x586534:c.instructions+=1;goto B586534;
case 0x586536:goto L586536;
case 0x586538:c.instructions+=2;goto B586538;
case 0x58653d:c.instructions+=1;goto B58653d;
case 0x58653f:goto L58653f;
case 0x586541:goto L586541;
case 0x586546:c.instructions+=1;goto B586546;
case 0x586548:goto L586548;
case 0x58654d:c.instructions+=1;goto B58654d;
case 0x58654f:goto L58654f;
case 0x586551:c.instructions+=2;goto B586551;
case 0x586552:c.instructions+=1;goto B586552;
case 0x586557:goto L586557;
case 0x586559:c.instructions+=2;goto B586559;
case 0x58655a:c.instructions+=1;goto B58655a;
case 0x58655f:goto L58655f;
case 0x586561:c.instructions+=2;goto B586561;
case 0x586562:c.instructions+=1;goto B586562;
case 0x586567:goto L586567;
case 0x58656c:c.instructions+=1;goto B58656c;
case 0x58656e:goto L58656e;
case 0x586573:c.instructions+=1;goto B586573;
case 0x586575:goto L586575;
case 0x586577:c.instructions+=2;goto B586577;
case 0x586578:c.instructions+=1;goto B586578;
case 0x58657d:goto L58657d;
case 0x58657f:c.instructions+=2;goto B58657f;
case 0x586580:c.instructions+=1;goto B586580;
case 0x586585:goto L586585;
case 0x586588:c.instructions+=2;goto B586588;
case 0x586589:c.instructions+=1;goto B586589;
case 0x58658e:goto L58658e;
case 0x586590:c.instructions+=4;goto B586590;
case 0x586593:c.instructions+=3;goto B586593;
case 0x586594:c.instructions+=2;goto B586594;
case 0x586596:c.instructions+=1;goto B586596;
case 0x586599:goto L586599;
case 0x58659a:c.instructions+=1;goto B58659a;
case 0x5865a0:goto L5865a0;
case 0x5865a1:c.instructions+=5;goto B5865a1;
case 0x5865a3:c.instructions+=4;goto B5865a3;
case 0x5865a6:c.instructions+=3;goto B5865a6;
case 0x5865a8:c.instructions+=2;goto B5865a8;
case 0x5865ad:c.instructions+=1;goto B5865ad;
case 0x5865af:goto L5865af;
case 0x5865b1:goto L5865b1;
case 0x5865b6:c.instructions+=1;goto B5865b6;
case 0x5865b8:goto L5865b8;
case 0x5865bd:c.instructions+=1;goto B5865bd;
case 0x5865bf:goto L5865bf;
case 0x5865c0:c.instructions+=1;goto B5865c0;
case 0x5865c5:goto L5865c5;
case 0x5865c7:c.instructions+=2;goto B5865c7;
case 0x5865c8:c.instructions+=1;goto B5865c8;
case 0x5865cd:goto L5865cd;
case 0x5865cf:c.instructions+=2;goto B5865cf;
case 0x5865d0:c.instructions+=1;goto B5865d0;
case 0x5865d5:goto L5865d5;
case 0x5865da:c.instructions+=1;goto B5865da;
case 0x5865dc:goto L5865dc;
case 0x5865e1:c.instructions+=1;goto B5865e1;
case 0x5865e3:goto L5865e3;
case 0x5865e5:c.instructions+=2;goto B5865e5;
case 0x5865e6:c.instructions+=1;goto B5865e6;
case 0x5865eb:goto L5865eb;
case 0x5865ed:c.instructions+=2;goto B5865ed;
case 0x5865ef:c.instructions+=1;goto B5865ef;
case 0x5865f2:goto L5865f2;
case 0x5865f5:c.instructions+=1;goto B5865f5;
case 0x5865f7:goto L5865f7;
case 0x5865f8:c.instructions+=3;goto B5865f8;
case 0x5865fb:c.instructions+=2;goto B5865fb;
case 0x5865fc:c.instructions+=1;goto B5865fc;
case 0x586601:goto L586601;
case 0x586603:c.instructions+=5;goto B586603;
case 0x586606:c.instructions+=4;goto B586606;
case 0x58660d:c.instructions+=3;goto B58660d;
case 0x58660f:c.instructions+=2;goto B58660f;
case 0x586610:c.instructions+=1;goto B586610;
case 0x586613:goto L586613;
case 0x586614:c.instructions+=1;goto B586614;
case 0x586620:goto L586620;
case 0x586621:c.instructions+=5;goto B586621;
case 0x586622:c.instructions+=4;goto B586622;
case 0x586624:c.instructions+=3;goto B586624;
case 0x586626:c.instructions+=2;goto B586626;
case 0x586628:c.instructions+=1;goto B586628;
case 0x58662a:goto L58662a;
case 0x586630:goto L586630;
case 0x586633:c.instructions+=5;goto B586633;
case 0x586635:c.instructions+=4;goto B586635;
case 0x586637:c.instructions+=3;goto B586637;
case 0x58663a:c.instructions+=2;goto B58663a;
case 0x58663c:c.instructions+=1;goto B58663c;
case 0x586641:goto L586641;
case 0x586642:c.instructions+=1;goto B586642;
case 0x586647:goto L586647;
case 0x586649:c.instructions+=3;goto B586649;
case 0x58664c:c.instructions+=2;goto B58664c;
case 0x58664e:c.instructions+=1;goto B58664e;
case 0x586650:goto L586650;
case 0x586651:c.instructions+=2;goto B586651;
case 0x586652:c.instructions+=1;goto B586652;
case 0x586660:goto L586660;
case 0x586664:c.instructions+=5;goto B586664;
case 0x586668:c.instructions+=4;goto B586668;
case 0x586669:c.instructions+=3;goto B586669;
case 0x58666a:c.instructions+=2;goto B58666a;
case 0x58666e:c.instructions+=1;goto B58666e;
case 0x586673:goto L586673;
case 0x586680:goto L586680;
case 0x586681:c.instructions+=10;goto B586681;
case 0x586682:c.instructions+=9;goto B586682;
case 0x586687:c.instructions+=8;goto B586687;
case 0x58668c:c.instructions+=7;goto B58668c;
case 0x58668e:c.instructions+=6;goto B58668e;
case 0x586690:c.instructions+=5;goto B586690;
case 0x586692:c.instructions+=4;goto B586692;
case 0x586695:c.instructions+=3;goto B586695;
case 0x586696:c.instructions+=2;goto B586696;
case 0x58669c:c.instructions+=1;goto B58669c;
case 0x5866a1:goto L5866a1;
case 0x5866a4:c.instructions+=19;goto B5866a4;
case 0x5866a6:c.instructions+=18;goto B5866a6;
case 0x5866a9:c.instructions+=17;goto B5866a9;
case 0x5866ac:c.instructions+=16;goto B5866ac;
case 0x5866ae:c.instructions+=15;goto B5866ae;
case 0x5866b1:c.instructions+=14;goto B5866b1;
case 0x5866b3:c.instructions+=13;goto B5866b3;
case 0x5866b6:c.instructions+=12;goto B5866b6;
case 0x5866b9:c.instructions+=11;goto B5866b9;
case 0x5866bc:c.instructions+=10;goto B5866bc;
case 0x5866c2:c.instructions+=9;goto B5866c2;
case 0x5866c8:c.instructions+=8;goto B5866c8;
case 0x5866ce:c.instructions+=7;goto B5866ce;
case 0x5866d4:c.instructions+=6;goto B5866d4;
case 0x5866da:c.instructions+=5;goto B5866da;
case 0x5866e0:c.instructions+=4;goto B5866e0;
case 0x5866e6:c.instructions+=3;goto B5866e6;
case 0x5866ec:c.instructions+=2;goto B5866ec;
case 0x5866ef:c.instructions+=1;goto B5866ef;
case 0x5866f4:goto L5866f4;
case 0x5866f6:goto L5866f6;
case 0x5866f7:c.instructions+=3;goto B5866f7;
case 0x5866f9:c.instructions+=2;goto B5866f9;
case 0x5866fa:c.instructions+=1;goto B5866fa;
case 0x586700:goto L586700;
case 0x586702:c.instructions+=13;goto B586702;
case 0x586707:c.instructions+=12;goto B586707;
case 0x58670d:c.instructions+=11;goto B58670d;
case 0x58670e:c.instructions+=10;goto B58670e;
case 0x586715:c.instructions+=9;goto B586715;
case 0x586716:c.instructions+=8;goto B586716;
case 0x586717:c.instructions+=7;goto B586717;
case 0x586719:c.instructions+=6;goto B586719;
case 0x58671d:c.instructions+=5;goto B58671d;
case 0x58671f:c.instructions+=4;goto B58671f;
case 0x586722:c.instructions+=3;goto B586722;
case 0x586725:c.instructions+=2;goto B586725;
case 0x58672d:c.instructions+=1;goto B58672d;
case 0x586732:goto L586732;
case 0x586736:c.instructions+=7;goto B586736;
case 0x58673d:c.instructions+=6;goto B58673d;
case 0x586747:c.instructions+=5;goto B586747;
case 0x586749:c.instructions+=4;goto B586749;
case 0x58674a:c.instructions+=3;goto B58674a;
case 0x586751:c.instructions+=2;goto B586751;
case 0x586754:c.instructions+=1;goto B586754;
case 0x586760:goto L586760;
case 0x586761:c.instructions+=4;goto B586761;
case 0x586763:c.instructions+=3;goto B586763;
case 0x586766:c.instructions+=2;goto B586766;
case 0x586768:c.instructions+=1;goto B586768;
case 0x58676e:goto L58676e;
case 0x58676f:c.instructions+=2;goto B58676f;
case 0x586770:c.instructions+=1;goto B586770;
case 0x586775:goto L586775;
case 0x586778:c.instructions+=2;goto B586778;
case 0x586779:c.instructions+=1;goto B586779;
case 0x58677e:goto L58677e;
case 0x586784:c.instructions+=2;goto B586784;
case 0x586785:c.instructions+=1;goto B586785;
case 0x58678a:goto L58678a;
case 0x58678d:c.instructions+=4;goto B58678d;
case 0x586790:c.instructions+=3;goto B586790;
case 0x586793:c.instructions+=2;goto B586793;
case 0x586795:c.instructions+=1;goto B586795;
case 0x586797:goto L586797;
case 0x586798:goto L586798;
case 0x58679b:c.instructions+=2;goto B58679b;
case 0x58679c:c.instructions+=1;goto B58679c;
case 0x58679f:goto L58679f;
case 0x5867a2:c.instructions+=2;goto B5867a2;
case 0x5867a4:c.instructions+=1;goto B5867a4;
case 0x5867a6:goto L5867a6;
case 0x5867a9:c.instructions+=5;goto B5867a9;
case 0x5867ab:c.instructions+=4;goto B5867ab;
case 0x5867ad:c.instructions+=3;goto B5867ad;
case 0x5867ae:c.instructions+=2;goto B5867ae;
case 0x5867b1:c.instructions+=1;goto B5867b1;
case 0x5867b6:goto L5867b6;
case 0x5867b9:c.instructions+=1;goto B5867b9;
case 0x5867bb:goto L5867bb;
case 0x5867bd:c.instructions+=2;goto B5867bd;
case 0x5867bf:c.instructions+=1;goto B5867bf;
case 0x5867c1:goto L5867c1;
case 0x5867c2:goto L5867c2;
case 0x5867c5:c.instructions+=4;goto B5867c5;
case 0x5867c7:c.instructions+=3;goto B5867c7;
case 0x5867c8:c.instructions+=2;goto B5867c8;
case 0x5867c9:c.instructions+=1;goto B5867c9;
case 0x5867cb:goto L5867cb;
case 0x5867ce:c.instructions+=3;goto B5867ce;
case 0x5867d1:c.instructions+=2;goto B5867d1;
case 0x5867d3:c.instructions+=1;goto B5867d3;
case 0x5867d5:goto L5867d5;
case 0x5867d7:c.instructions+=15;goto B5867d7;
case 0x5867da:c.instructions+=14;goto B5867da;
case 0x5867dc:c.instructions+=13;goto B5867dc;
case 0x5867df:c.instructions+=12;goto B5867df;
case 0x5867e2:c.instructions+=11;goto B5867e2;
case 0x5867e5:c.instructions+=10;goto B5867e5;
case 0x5867e8:c.instructions+=9;goto B5867e8;
case 0x5867e9:c.instructions+=8;goto B5867e9;
case 0x5867ec:c.instructions+=7;goto B5867ec;
case 0x5867ed:c.instructions+=6;goto B5867ed;
case 0x5867f0:c.instructions+=5;goto B5867f0;
case 0x5867f3:c.instructions+=4;goto B5867f3;
case 0x5867f4:c.instructions+=3;goto B5867f4;
case 0x5867f5:c.instructions+=2;goto B5867f5;
case 0x5867f6:c.instructions+=1;goto B5867f6;
case 0x5867fb:goto L5867fb;
case 0x5867fe:c.instructions+=6;goto B5867fe;
case 0x586801:c.instructions+=5;goto B586801;
case 0x586804:c.instructions+=4;goto B586804;
case 0x586807:c.instructions+=3;goto B586807;
case 0x58680a:c.instructions+=2;goto B58680a;
case 0x58680c:c.instructions+=1;goto B58680c;
case 0x58680e:goto L58680e;
case 0x586810:c.instructions+=2;goto B586810;
case 0x586812:c.instructions+=1;goto B586812;
case 0x586817:goto L586817;
case 0x58681c:goto L58681c;
case 0x586822:c.instructions+=2;goto B586822;
case 0x586824:c.instructions+=1;goto B586824;
case 0x586826:goto L586826;
case 0x586830:c.instructions+=3;goto B586830;
case 0x586836:c.instructions+=2;goto B586836;
case 0x586837:c.instructions+=1;goto B586837;
case 0x58683c:goto L58683c;
case 0x58683f:c.instructions+=1;goto B58683f;
case 0x586849:goto L586849;
case 0x58684a:c.instructions+=1;goto B58684a;
case 0x586850:goto L586850;
case 0x586853:c.instructions+=4;goto B586853;
case 0x586855:c.instructions+=3;goto B586855;
case 0x586859:c.instructions+=2;goto B586859;
case 0x58685a:c.instructions+=1;goto B58685a;
case 0x58685c:goto L58685c;
case 0x58685f:c.instructions+=1;goto B58685f;
case 0x586861:goto L586861;
case 0x586863:c.instructions+=2;goto B586863;
case 0x586865:c.instructions+=1;goto B586865;
case 0x58686a:goto L58686a;
case 0x58686b:c.instructions+=1;goto B58686b;
case 0x58686e:goto L58686e;
case 0x586871:c.instructions+=3;goto B586871;
case 0x586874:c.instructions+=2;goto B586874;
case 0x586876:c.instructions+=1;goto B586876;
case 0x586878:goto L586878;
case 0x58687b:c.instructions+=1;goto B58687b;
case 0x58687d:goto L58687d;
case 0x58687f:c.instructions+=2;goto B58687f;
case 0x586881:c.instructions+=1;goto B586881;
case 0x586883:goto L586883;
case 0x586884:c.instructions+=1;goto B586884;
case 0x586887:goto L586887;
case 0x58688a:c.instructions+=5;goto B58688a;
case 0x58688c:c.instructions+=4;goto B58688c;
case 0x58688e:c.instructions+=3;goto B58688e;
case 0x586891:c.instructions+=2;goto B586891;
case 0x586893:c.instructions+=1;goto B586893;
case 0x586898:goto L586898;
case 0x586899:c.instructions+=1;goto B586899;
case 0x58689e:goto L58689e;
case 0x5868a1:goto L5868a1;
case 0x5868a2:c.instructions+=1;goto B5868a2;
case 0x5868b0:goto L5868b0;
case 0x5868b1:c.instructions+=7;goto B5868b1;
case 0x5868b2:c.instructions+=6;goto B5868b2;
case 0x5868b3:c.instructions+=5;goto B5868b3;
case 0x5868b5:c.instructions+=4;goto B5868b5;
case 0x5868b8:c.instructions+=3;goto B5868b8;
case 0x5868ba:c.instructions+=2;goto B5868ba;
case 0x5868be:c.instructions+=1;goto B5868be;
case 0x5868c0:goto L5868c0;
case 0x5868c3:c.instructions+=1;goto B5868c3;
case 0x5868c5:goto L5868c5;
case 0x5868c8:c.instructions+=4;goto B5868c8;
case 0x5868ca:c.instructions+=3;goto B5868ca;
case 0x5868cc:c.instructions+=2;goto B5868cc;
case 0x5868ce:c.instructions+=1;goto B5868ce;
case 0x5868d3:goto L5868d3;
case 0x5868d5:goto L5868d5;
case 0x5868d8:c.instructions+=3;goto B5868d8;
case 0x5868db:c.instructions+=2;goto B5868db;
case 0x5868dd:c.instructions+=1;goto B5868dd;
case 0x5868df:goto L5868df;
case 0x5868e0:goto L5868e0;
case 0x5868e3:c.instructions+=1;goto B5868e3;
case 0x5868e5:goto L5868e5;
case 0x5868e7:c.instructions+=2;goto B5868e7;
case 0x5868e9:c.instructions+=1;goto B5868e9;
case 0x5868eb:goto L5868eb;
case 0x5868ec:c.instructions+=3;goto B5868ec;
case 0x5868ed:c.instructions+=2;goto B5868ed;
case 0x5868ee:c.instructions+=1;goto B5868ee;
case 0x5868f1:goto L5868f1;
case 0x5868f4:c.instructions+=6;goto B5868f4;
case 0x5868f6:c.instructions+=5;goto B5868f6;
case 0x5868f9:c.instructions+=4;goto B5868f9;
case 0x5868fb:c.instructions+=3;goto B5868fb;
case 0x5868fe:c.instructions+=2;goto B5868fe;
case 0x586900:c.instructions+=1;goto B586900;
case 0x586905:goto L586905;
case 0x586906:c.instructions+=1;goto B586906;
case 0x58690b:goto L58690b;
case 0x58690e:goto L58690e;
case 0x586910:c.instructions+=1;goto B586910;
case 0x586912:goto L586912;
case 0x586915:c.instructions+=4;goto B586915;
case 0x586916:c.instructions+=3;goto B586916;
case 0x586919:c.instructions+=2;goto B586919;
case 0x58691b:c.instructions+=1;goto B58691b;
case 0x58691d:goto L58691d;
case 0x586920:goto L586920;
case 0x586923:c.instructions+=1;goto B586923;
case 0x586925:goto L586925;
case 0x586928:c.instructions+=5;goto B586928;
case 0x58692a:c.instructions+=4;goto B58692a;
case 0x58692c:c.instructions+=3;goto B58692c;
case 0x58692e:c.instructions+=2;goto B58692e;
case 0x586931:c.instructions+=1;goto B586931;
case 0x586936:goto L586936;
case 0x586937:c.instructions+=1;goto B586937;
case 0x58693c:goto L58693c;
case 0x58693f:c.instructions+=1;goto B58693f;
case 0x586941:goto L586941;
case 0x586943:c.instructions+=2;goto B586943;
case 0x586945:c.instructions+=1;goto B586945;
case 0x586947:goto L586947;
case 0x586948:goto L586948;
case 0x586949:c.instructions+=3;goto B586949;
case 0x58694a:c.instructions+=2;goto B58694a;
case 0x58694b:c.instructions+=1;goto B58694b;
case 0x586950:goto L586950;
case 0x586951:c.instructions+=5;goto B586951;
case 0x586952:c.instructions+=4;goto B586952;
case 0x586954:c.instructions+=3;goto B586954;
case 0x586956:c.instructions+=2;goto B586956;
case 0x586958:c.instructions+=1;goto B586958;
case 0x58695d:goto L58695d;
case 0x586960:c.instructions+=4;goto B586960;
case 0x586963:c.instructions+=3;goto B586963;
case 0x586965:c.instructions+=2;goto B586965;
case 0x586967:c.instructions+=1;goto B586967;
case 0x586969:goto L586969;
case 0x586970:goto L586970;
case 0x586972:c.instructions+=5;goto B586972;
case 0x586974:c.instructions+=4;goto B586974;
case 0x586977:c.instructions+=3;goto B586977;
case 0x586979:c.instructions+=2;goto B586979;
case 0x58697c:c.instructions+=1;goto B58697c;
case 0x58697e:goto L58697e;
case 0x586980:c.instructions+=1;goto B586980;
case 0x586985:goto L586985;
case 0x586986:c.instructions+=1;goto B586986;
case 0x58698b:goto L58698b;
case 0x58698e:goto L58698e;
case 0x586990:c.instructions+=3;goto B586990;
case 0x586992:c.instructions+=2;goto B586992;
case 0x586994:c.instructions+=1;goto B586994;
case 0x586996:goto L586996;
case 0x586997:c.instructions+=2;goto B586997;
case 0x586998:c.instructions+=1;goto B586998;
case 0x5869a0:goto L5869a0;
case 0x5869a2:c.instructions+=10;goto B5869a2;
case 0x5869a7:c.instructions+=9;goto B5869a7;
case 0x5869ad:c.instructions+=8;goto B5869ad;
case 0x5869ae:c.instructions+=7;goto B5869ae;
case 0x5869b5:c.instructions+=6;goto B5869b5;
case 0x5869b6:c.instructions+=5;goto B5869b6;
case 0x5869b7:c.instructions+=4;goto B5869b7;
case 0x5869b9:c.instructions+=3;goto B5869b9;
case 0x5869bc:c.instructions+=2;goto B5869bc;
case 0x5869be:c.instructions+=1;goto B5869be;
case 0x5869c0:goto L5869c0;
case 0x5869c5:c.instructions+=5;goto B5869c5;
case 0x5869c6:c.instructions+=4;goto B5869c6;
case 0x5869ca:c.instructions+=3;goto B5869ca;
case 0x5869d1:c.instructions+=2;goto B5869d1;
case 0x5869d4:c.instructions+=1;goto B5869d4;
case 0x5869d7:goto L5869d7;
case 0x5869d9:c.instructions+=2;goto B5869d9;
case 0x5869db:c.instructions+=1;goto B5869db;
case 0x5869e0:goto L5869e0;
case 0x5869e3:c.instructions+=4;goto B5869e3;
case 0x5869e7:c.instructions+=3;goto B5869e7;
case 0x5869e9:c.instructions+=2;goto B5869e9;
case 0x5869f1:c.instructions+=1;goto B5869f1;
case 0x5869f3:goto L5869f3;
case 0x5869f7:c.instructions+=16;goto B5869f7;
case 0x5869fb:c.instructions+=15;goto B5869fb;
case 0x5869fc:c.instructions+=14;goto B5869fc;
case 0x586a00:c.instructions+=13;goto B586a00;
case 0x586a01:c.instructions+=12;goto B586a01;
case 0x586a05:c.instructions+=11;goto B586a05;
case 0x586a06:c.instructions+=10;goto B586a06;
case 0x586a08:c.instructions+=9;goto B586a08;
case 0x586a0e:c.instructions+=8;goto B586a0e;
case 0x586a0f:c.instructions+=7;goto B586a0f;
case 0x586a13:c.instructions+=6;goto B586a13;
case 0x586a14:c.instructions+=5;goto B586a14;
case 0x586a18:c.instructions+=4;goto B586a18;
case 0x586a19:c.instructions+=3;goto B586a19;
case 0x586a1a:c.instructions+=2;goto B586a1a;
case 0x586a1c:c.instructions+=1;goto B586a1c;
case 0x586a21:goto L586a21;
case 0x586a23:c.instructions+=1;goto B586a23;
case 0x586a25:goto L586a25;
case 0x586a2a:c.instructions+=5;goto B586a2a;
case 0x586a2b:c.instructions+=4;goto B586a2b;
case 0x586a2f:c.instructions+=3;goto B586a2f;
case 0x586a36:c.instructions+=2;goto B586a36;
case 0x586a39:c.instructions+=1;goto B586a39;
case 0x586a3c:goto L586a3c;
case 0x586a40:c.instructions+=3;goto B586a40;
case 0x586a42:c.instructions+=2;goto B586a42;
case 0x586a45:c.instructions+=1;goto B586a45;
case 0x586a47:goto L586a47;
case 0x586a4a:c.instructions+=5;goto B586a4a;
case 0x586a4c:c.instructions+=4;goto B586a4c;
case 0x586a4f:c.instructions+=3;goto B586a4f;
case 0x586a52:c.instructions+=2;goto B586a52;
case 0x586a54:c.instructions+=1;goto B586a54;
case 0x586a56:goto L586a56;
case 0x586a58:c.instructions+=4;goto B586a58;
case 0x586a5a:c.instructions+=3;goto B586a5a;
case 0x586a5d:c.instructions+=2;goto B586a5d;
case 0x586a60:c.instructions+=1;goto B586a60;
case 0x586a62:goto L586a62;
case 0x586a66:c.instructions+=5;goto B586a66;
case 0x586a69:c.instructions+=4;goto B586a69;
case 0x586a6a:c.instructions+=3;goto B586a6a;
case 0x586a71:c.instructions+=2;goto B586a71;
case 0x586a74:c.instructions+=1;goto B586a74;
case 0x586a80:goto L586a80;
case 0x586a81:c.instructions+=8;goto B586a81;
case 0x586a82:c.instructions+=7;goto B586a82;
case 0x586a84:c.instructions+=6;goto B586a84;
case 0x586a8a:c.instructions+=5;goto B586a8a;
case 0x586a8c:c.instructions+=4;goto B586a8c;
case 0x586a8e:c.instructions+=3;goto B586a8e;
case 0x586a8f:c.instructions+=2;goto B586a8f;
case 0x586a90:c.instructions+=1;goto B586a90;
case 0x586a92:goto L586a92;
case 0x586a93:c.instructions+=1;goto B586a93;
case 0x586a98:goto L586a98;
case 0x586a9b:c.instructions+=1;goto B586a9b;
case 0x586aa1:goto L586aa1;
case 0x586aa4:c.instructions+=2;goto B586aa4;
case 0x586aa9:c.instructions+=1;goto B586aa9;
case 0x586ab0:goto L586ab0;
case 0x586ab2:c.instructions+=2;goto B586ab2;
case 0x586ab4:c.instructions+=1;goto B586ab4;
case 0x586ab6:goto L586ab6;
case 0x586ab8:c.instructions+=6;goto B586ab8;
case 0x586aba:c.instructions+=5;goto B586aba;
case 0x586abc:c.instructions+=4;goto B586abc;
case 0x586abf:c.instructions+=3;goto B586abf;
case 0x586ac1:c.instructions+=2;goto B586ac1;
case 0x586ac4:c.instructions+=1;goto B586ac4;
case 0x586ac6:goto L586ac6;
case 0x586ac7:c.instructions+=1;goto B586ac7;
case 0x586acc:goto L586acc;
case 0x586acf:goto L586acf;
case 0x586ad1:c.instructions+=2;goto B586ad1;
case 0x586ad3:c.instructions+=1;goto B586ad3;
case 0x586ad5:goto L586ad5;
case 0x586ad8:c.instructions+=2;goto B586ad8;
case 0x586ad9:c.instructions+=1;goto B586ad9;
case 0x586adb:goto L586adb;
case 0x586ade:c.instructions+=4;goto B586ade;
case 0x586ae1:c.instructions+=3;goto B586ae1;
case 0x586ae3:c.instructions+=2;goto B586ae3;
case 0x586ae5:c.instructions+=1;goto B586ae5;
case 0x586ae7:goto L586ae7;
case 0x586ae9:c.instructions+=5;goto B586ae9;
case 0x586aeb:c.instructions+=4;goto B586aeb;
case 0x586aee:c.instructions+=3;goto B586aee;
case 0x586af0:c.instructions+=2;goto B586af0;
case 0x586af3:c.instructions+=1;goto B586af3;
case 0x586af5:goto L586af5;
case 0x586af6:c.instructions+=1;goto B586af6;
case 0x586afb:goto L586afb;
case 0x586afe:goto L586afe;
case 0x586b00:c.instructions+=3;goto B586b00;
case 0x586b02:c.instructions+=2;goto B586b02;
case 0x586b04:c.instructions+=1;goto B586b04;
case 0x586b06:goto L586b06;
case 0x586b09:c.instructions+=1;goto B586b09;
case 0x586b0b:goto L586b0b;
case 0x586b0d:c.instructions+=1;goto B586b0d;
case 0x586b12:goto L586b12;
case 0x586b14:goto L586b14;
case 0x586b17:c.instructions+=3;goto B586b17;
case 0x586b18:c.instructions+=2;goto B586b18;
case 0x586b19:c.instructions+=1;goto B586b19;
case 0x586b1e:goto L586b1e;
case 0x586b21:c.instructions+=3;goto B586b21;
case 0x586b22:c.instructions+=2;goto B586b22;
case 0x586b25:c.instructions+=1;goto B586b25;
case 0x586b27:goto L586b27;
case 0x586b2a:c.instructions+=3;goto B586b2a;
case 0x586b2b:c.instructions+=2;goto B586b2b;
case 0x586b2c:c.instructions+=1;goto B586b2c;
case 0x586b31:goto L586b31;
case 0x586b34:c.instructions+=2;goto B586b34;
case 0x586b35:c.instructions+=1;goto B586b35;
case 0x586b3a:goto L586b3a;
case 0x586b3d:c.instructions+=1;goto B586b3d;
case 0x586b40:goto L586b40;
case 0x586b43:c.instructions+=4;goto B586b43;
case 0x586b46:c.instructions+=3;goto B586b46;
case 0x586b49:c.instructions+=2;goto B586b49;
case 0x586b4e:c.instructions+=1;goto B586b4e;
case 0x586b50:goto L586b50;
case 0x586b52:goto L586b52;
case 0x586b53:c.instructions+=10;goto B586b53;
case 0x586b54:c.instructions+=9;goto B586b54;
case 0x586b5a:c.instructions+=8;goto B586b5a;
case 0x586b60:c.instructions+=7;goto B586b60;
case 0x586b66:c.instructions+=6;goto B586b66;
case 0x586b6c:c.instructions+=5;goto B586b6c;
case 0x586b72:c.instructions+=4;goto B586b72;
case 0x586b78:c.instructions+=3;goto B586b78;
case 0x586b79:c.instructions+=2;goto B586b79;
case 0x586b7a:c.instructions+=1;goto B586b7a;
case 0x586b80:goto L586b80;
case 0x586b83:c.instructions+=5;goto B586b83;
case 0x586b84:c.instructions+=4;goto B586b84;
case 0x586b88:c.instructions+=3;goto B586b88;
case 0x586b8b:c.instructions+=2;goto B586b8b;
case 0x586b8d:c.instructions+=1;goto B586b8d;
case 0x586b8f:goto L586b8f;
case 0x586b96:c.instructions+=1;goto B586b96;
case 0x586b98:goto L586b98;
case 0x586b99:c.instructions+=4;goto B586b99;
case 0x586b9d:c.instructions+=3;goto B586b9d;
case 0x586ba0:c.instructions+=2;goto B586ba0;
case 0x586ba2:c.instructions+=1;goto B586ba2;
case 0x586ba4:goto L586ba4;
case 0x586ba5:c.instructions+=4;goto B586ba5;
case 0x586ba7:c.instructions+=3;goto B586ba7;
case 0x586bac:c.instructions+=2;goto B586bac;
case 0x586bb1:c.instructions+=1;goto B586bb1;
case 0x586bb5:goto L586bb5;
case 0x586bb7:goto L586bb7;
case 0x586bb9:c.instructions+=7;goto B586bb9;
case 0x586bbe:c.instructions+=6;goto B586bbe;
case 0x586bbf:c.instructions+=5;goto B586bbf;
case 0x586bc3:c.instructions+=4;goto B586bc3;
case 0x586bc5:c.instructions+=3;goto B586bc5;
case 0x586bc6:c.instructions+=2;goto B586bc6;
case 0x586bca:c.instructions+=1;goto B586bca;
case 0x586bcf:goto L586bcf;
case 0x586bd2:c.instructions+=10;goto B586bd2;
case 0x586bd4:c.instructions+=9;goto B586bd4;
case 0x586bd6:c.instructions+=8;goto B586bd6;
case 0x586bd8:c.instructions+=7;goto B586bd8;
case 0x586bda:c.instructions+=6;goto B586bda;
case 0x586bdc:c.instructions+=5;goto B586bdc;
case 0x586be0:c.instructions+=4;goto B586be0;
case 0x586be1:c.instructions+=3;goto B586be1;
case 0x586be6:c.instructions+=2;goto B586be6;
case 0x586be8:c.instructions+=1;goto B586be8;
case 0x586bed:goto L586bed;
case 0x586bee:goto L586bee;
case 0x586bef:c.instructions+=2;goto B586bef;
case 0x586bf1:c.instructions+=1;goto B586bf1;
case 0x586bf6:goto L586bf6;
case 0x586bf7:goto L586bf7;
case 0x586bf8:c.instructions+=2;goto B586bf8;
case 0x586bfb:c.instructions+=1;goto B586bfb;
case 0x586c00:goto L586c00;
case 0x586c01:c.instructions+=3;goto B586c01;
case 0x586c05:c.instructions+=2;goto B586c05;
case 0x586c0c:c.instructions+=1;goto B586c0c;
case 0x586c0e:goto L586c0e;
case 0x586c0f:c.instructions+=3;goto B586c0f;
case 0x586c13:c.instructions+=2;goto B586c13;
case 0x586c15:c.instructions+=1;goto B586c15;
case 0x586c1a:goto L586c1a;
case 0x586c20:c.instructions+=3;goto B586c20;
case 0x586c22:c.instructions+=2;goto B586c22;
case 0x586c26:c.instructions+=1;goto B586c26;
case 0x586c28:goto L586c28;
case 0x586c2e:c.instructions+=4;goto B586c2e;
case 0x586c2f:c.instructions+=3;goto B586c2f;
case 0x586c30:c.instructions+=2;goto B586c30;
case 0x586c32:c.instructions+=1;goto B586c32;
case 0x586c34:goto L586c34;
case 0x586c37:goto L586c37;
case 0x586c38:goto L586c38;
case 0x586c39:c.instructions+=1;goto B586c39;
case 0x586c40:goto L586c40;
case 0x586c44:c.instructions+=9;goto B586c44;
case 0x586c45:c.instructions+=8;goto B586c45;
case 0x586c46:c.instructions+=7;goto B586c46;
case 0x586c4a:c.instructions+=6;goto B586c4a;
case 0x586c4b:c.instructions+=5;goto B586c4b;
case 0x586c4d:c.instructions+=4;goto B586c4d;
case 0x586c51:c.instructions+=3;goto B586c51;
case 0x586c52:c.instructions+=2;goto B586c52;
case 0x586c53:c.instructions+=1;goto B586c53;
case 0x586c58:goto L586c58;
case 0x586c5c:c.instructions+=3;goto B586c5c;
case 0x586c5f:c.instructions+=2;goto B586c5f;
case 0x586c60:c.instructions+=1;goto B586c60;
case 0x586c65:goto L586c65;
case 0x586c68:c.instructions+=3;goto B586c68;
case 0x586c6b:c.instructions+=2;goto B586c6b;
case 0x586c6d:c.instructions+=1;goto B586c6d;
case 0x586c6f:goto L586c6f;
case 0x586c71:c.instructions+=1;goto B586c71;
case 0x586c73:goto L586c73;
case 0x586c78:c.instructions+=1;goto B586c78;
case 0x586c7d:goto L586c7d;
case 0x586c7e:c.instructions+=3;goto B586c7e;
case 0x586c81:c.instructions+=2;goto B586c81;
case 0x586c82:c.instructions+=1;goto B586c82;
case 0x586c87:goto L586c87;
case 0x586c8a:c.instructions+=2;goto B586c8a;
case 0x586c8c:c.instructions+=1;goto B586c8c;
case 0x586c8e:goto L586c8e;
case 0x586c8f:c.instructions+=3;goto B586c8f;
case 0x586c91:c.instructions+=2;goto B586c91;
case 0x586c92:c.instructions+=1;goto B586c92;
case 0x586c95:goto L586c95;
case 0x586c96:c.instructions+=3;goto B586c96;
case 0x586c98:c.instructions+=2;goto B586c98;
case 0x586c99:c.instructions+=1;goto B586c99;
case 0x586ca0:goto L586ca0;
case 0x586ca4:c.instructions+=5;goto B586ca4;
case 0x586ca6:c.instructions+=4;goto B586ca6;
case 0x586caa:c.instructions+=3;goto B586caa;
case 0x586cab:c.instructions+=2;goto B586cab;
case 0x586cac:c.instructions+=1;goto B586cac;
case 0x586cb1:goto L586cb1;
case 0x586cb4:c.instructions+=4;goto B586cb4;
case 0x586cb7:c.instructions+=3;goto B586cb7;
case 0x586cba:c.instructions+=2;goto B586cba;
case 0x586cbc:c.instructions+=1;goto B586cbc;
case 0x586cbe:goto L586cbe;
case 0x586cc1:goto L586cc1;
case 0x586cc2:c.instructions+=1;goto B586cc2;
case 0x586cc7:goto L586cc7;
case 0x586cca:c.instructions+=1;goto B586cca;
case 0x586cd0:goto L586cd0;
case 0x586cd1:c.instructions+=5;goto B586cd1;
case 0x586cd2:c.instructions+=4;goto B586cd2;
case 0x586cd6:c.instructions+=3;goto B586cd6;
case 0x586cd8:c.instructions+=2;goto B586cd8;
case 0x586cda:c.instructions+=1;goto B586cda;
case 0x586cdc:goto L586cdc;
case 0x586ce0:c.instructions+=1;goto B586ce0;
case 0x586ce2:goto L586ce2;
case 0x586ce3:c.instructions+=5;goto B586ce3;
case 0x586ce6:c.instructions+=4;goto B586ce6;
case 0x586ce7:c.instructions+=3;goto B586ce7;
case 0x586cea:c.instructions+=2;goto B586cea;
case 0x586cec:c.instructions+=1;goto B586cec;
case 0x586cee:goto L586cee;
case 0x586cf0:goto L586cf0;
case 0x586cf4:c.instructions+=2;goto B586cf4;
case 0x586cf7:c.instructions+=1;goto B586cf7;
case 0x586cf9:goto L586cf9;
case 0x586cfc:c.instructions+=3;goto B586cfc;
case 0x586cfd:c.instructions+=2;goto B586cfd;
case 0x586cfe:c.instructions+=1;goto B586cfe;
case 0x586d03:goto L586d03;
case 0x586d06:c.instructions+=2;goto B586d06;
case 0x586d08:c.instructions+=1;goto B586d08;
case 0x586d0a:goto L586d0a;
case 0x586d0c:c.instructions+=2;goto B586d0c;
case 0x586d0e:c.instructions+=1;goto B586d0e;
case 0x586d10:goto L586d10;
case 0x586d11:c.instructions+=4;goto B586d11;
case 0x586d12:c.instructions+=3;goto B586d12;
case 0x586d13:c.instructions+=2;goto B586d13;
case 0x586d14:c.instructions+=1;goto B586d14;
case 0x586d17:goto L586d17;
case 0x586d1a:c.instructions+=5;goto B586d1a;
case 0x586d1c:c.instructions+=4;goto B586d1c;
case 0x586d1e:c.instructions+=3;goto B586d1e;
case 0x586d21:c.instructions+=2;goto B586d21;
case 0x586d23:c.instructions+=1;goto B586d23;
case 0x586d28:goto L586d28;
case 0x586d29:c.instructions+=1;goto B586d29;
case 0x586d2e:goto L586d2e;
case 0x586d31:c.instructions+=3;goto B586d31;
case 0x586d34:c.instructions+=2;goto B586d34;
case 0x586d36:c.instructions+=1;goto B586d36;
case 0x586d38:goto L586d38;
case 0x586d3b:c.instructions+=6;goto B586d3b;
case 0x586d3f:c.instructions+=5;goto B586d3f;
case 0x586d40:c.instructions+=4;goto B586d40;
case 0x586d42:c.instructions+=3;goto B586d42;
case 0x586d43:c.instructions+=2;goto B586d43;
case 0x586d44:c.instructions+=1;goto B586d44;
case 0x586d46:goto L586d46;
case 0x586d49:goto L586d49;
case 0x586d4a:c.instructions+=1;goto B586d4a;
case 0x586d4b:goto L586d4b;
case 0x586d4c:c.instructions+=2;goto B586d4c;
case 0x586d4d:c.instructions+=1;goto B586d4d;
case 0x586d50:goto L586d50;
case 0x586d51:c.instructions+=5;goto B586d51;
case 0x586d52:c.instructions+=4;goto B586d52;
case 0x586d54:c.instructions+=3;goto B586d54;
case 0x586d58:c.instructions+=2;goto B586d58;
case 0x586d5a:c.instructions+=1;goto B586d5a;
case 0x586d60:goto L586d60;
case 0x586d63:c.instructions+=1;goto B586d63;
case 0x586d69:goto L586d69;
case 0x586d6d:c.instructions+=3;goto B586d6d;
case 0x586d72:c.instructions+=2;goto B586d72;
case 0x586d7a:c.instructions+=1;goto B586d7a;
case 0x586d7c:goto L586d7c;
case 0x586d84:c.instructions+=1;goto B586d84;
case 0x586d86:goto L586d86;
case 0x586d8b:c.instructions+=1;goto B586d8b;
case 0x586d8d:goto L586d8d;
case 0x586d95:c.instructions+=1;goto B586d95;
case 0x586d97:goto L586d97;
case 0x586d9c:c.instructions+=1;goto B586d9c;
case 0x586d9e:goto L586d9e;
case 0x586da6:c.instructions+=1;goto B586da6;
case 0x586da8:goto L586da8;
case 0x586daa:c.instructions+=1;goto B586daa;
case 0x586dac:goto L586dac;
case 0x586db4:c.instructions+=1;goto B586db4;
case 0x586db6:goto L586db6;
case 0x586dbb:c.instructions+=1;goto B586dbb;
case 0x586dbd:goto L586dbd;
case 0x586dc5:goto L586dc5;
case 0x586dc6:c.instructions+=6;goto B586dc6;
case 0x586dc7:c.instructions+=5;goto B586dc7;
case 0x586dca:c.instructions+=4;goto B586dca;
case 0x586dcb:c.instructions+=3;goto B586dcb;
case 0x586dce:c.instructions+=2;goto B586dce;
case 0x586dd0:c.instructions+=1;goto B586dd0;
case 0x586dd2:goto L586dd2;
case 0x586dd6:goto L586dd6;
case 0x586dd9:c.instructions+=1;goto B586dd9;
case 0x586ddb:goto L586ddb;
case 0x586dde:c.instructions+=3;goto B586dde;
case 0x586ddf:c.instructions+=2;goto B586ddf;
case 0x586de0:c.instructions+=1;goto B586de0;
case 0x586de5:goto L586de5;
case 0x586de8:c.instructions+=2;goto B586de8;
case 0x586dea:c.instructions+=1;goto B586dea;
case 0x586dec:goto L586dec;
case 0x586df0:goto L586df0;
case 0x586df2:c.instructions+=2;goto B586df2;
case 0x586df4:c.instructions+=1;goto B586df4;
case 0x586df6:goto L586df6;
case 0x586df7:c.instructions+=5;goto B586df7;
case 0x586df8:c.instructions+=4;goto B586df8;
case 0x586df9:c.instructions+=3;goto B586df9;
case 0x586dfa:c.instructions+=2;goto B586dfa;
case 0x586dfb:c.instructions+=1;goto B586dfb;
case 0x586dfe:goto L586dfe;
case 0x586e01:c.instructions+=5;goto B586e01;
case 0x586e03:c.instructions+=4;goto B586e03;
case 0x586e05:c.instructions+=3;goto B586e05;
case 0x586e08:c.instructions+=2;goto B586e08;
case 0x586e0a:c.instructions+=1;goto B586e0a;
case 0x586e0f:goto L586e0f;
case 0x586e10:c.instructions+=1;goto B586e10;
case 0x586e15:goto L586e15;
case 0x586e18:c.instructions+=3;goto B586e18;
case 0x586e1b:c.instructions+=2;goto B586e1b;
case 0x586e1d:c.instructions+=1;goto B586e1d;
case 0x586e1f:goto L586e1f;
case 0x586e22:c.instructions+=7;goto B586e22;
case 0x586e26:c.instructions+=6;goto B586e26;
case 0x586e27:c.instructions+=5;goto B586e27;
case 0x586e2b:c.instructions+=4;goto B586e2b;
case 0x586e2c:c.instructions+=3;goto B586e2c;
case 0x586e2d:c.instructions+=2;goto B586e2d;
case 0x586e2e:c.instructions+=1;goto B586e2e;
case 0x586e30:goto L586e30;
case 0x586e33:goto L586e33;
case 0x586e34:c.instructions+=2;goto B586e34;
case 0x586e35:c.instructions+=1;goto B586e35;
case 0x586e36:goto L586e36;
case 0x586e37:c.instructions+=2;goto B586e37;
case 0x586e38:c.instructions+=1;goto B586e38;
case 0x586e40:goto L586e40;
case 0x586e41:c.instructions+=12;goto B586e41;
case 0x586e43:c.instructions+=11;goto B586e43;
case 0x586e46:c.instructions+=10;goto B586e46;
case 0x586e4c:c.instructions+=9;goto B586e4c;
case 0x586e4e:c.instructions+=8;goto B586e4e;
case 0x586e4f:c.instructions+=7;goto B586e4f;
case 0x586e53:c.instructions+=6;goto B586e53;
case 0x586e56:c.instructions+=5;goto B586e56;
case 0x586e58:c.instructions+=4;goto B586e58;
case 0x586e5a:c.instructions+=3;goto B586e5a;
case 0x586e5b:c.instructions+=2;goto B586e5b;
case 0x586e5c:c.instructions+=1;goto B586e5c;
case 0x586e62:goto L586e62;
case 0x586e65:c.instructions+=2;goto B586e65;
case 0x586e66:c.instructions+=1;goto B586e66;
case 0x586e6b:goto L586e6b;
case 0x586e6e:c.instructions+=2;goto B586e6e;
case 0x586e71:c.instructions+=1;goto B586e71;
case 0x586e77:goto L586e77;
case 0x586e78:c.instructions+=1;goto B586e78;
case 0x586e7d:goto L586e7d;
case 0x586e80:c.instructions+=2;goto B586e80;
case 0x586e83:c.instructions+=1;goto B586e83;
case 0x586e89:goto L586e89;
case 0x586e8c:c.instructions+=3;goto B586e8c;
case 0x586e8d:c.instructions+=2;goto B586e8d;
case 0x586e91:c.instructions+=1;goto B586e91;
case 0x586e96:goto L586e96;
case 0x586e99:c.instructions+=2;goto B586e99;
case 0x586e9c:c.instructions+=1;goto B586e9c;
case 0x586ea2:goto L586ea2;
case 0x586ea3:c.instructions+=1;goto B586ea3;
case 0x586ea8:goto L586ea8;
case 0x586eab:c.instructions+=2;goto B586eab;
case 0x586eae:c.instructions+=1;goto B586eae;
case 0x586eb4:goto L586eb4;
case 0x586eb7:c.instructions+=3;goto B586eb7;
case 0x586eb8:c.instructions+=2;goto B586eb8;
case 0x586ebc:c.instructions+=1;goto B586ebc;
case 0x586ec1:goto L586ec1;
case 0x586ec4:c.instructions+=2;goto B586ec4;
case 0x586ec7:c.instructions+=1;goto B586ec7;
case 0x586ecd:goto L586ecd;
case 0x586ece:c.instructions+=1;goto B586ece;
case 0x586ed3:goto L586ed3;
case 0x586ed6:c.instructions+=2;goto B586ed6;
case 0x586ed9:c.instructions+=1;goto B586ed9;
case 0x586edf:goto L586edf;
case 0x586ee2:c.instructions+=2;goto B586ee2;
case 0x586ee5:c.instructions+=1;goto B586ee5;
case 0x586eeb:goto L586eeb;
case 0x586eee:c.instructions+=1;goto B586eee;
case 0x586ef4:goto L586ef4;
case 0x586ef7:c.instructions+=2;goto B586ef7;
case 0x586efa:c.instructions+=1;goto B586efa;
case 0x586f00:goto L586f00;
case 0x586f03:c.instructions+=1;goto B586f03;
case 0x586f09:goto L586f09;
case 0x586f0c:c.instructions+=4;goto B586f0c;
case 0x586f0e:c.instructions+=3;goto B586f0e;
case 0x586f11:c.instructions+=2;goto B586f11;
case 0x586f15:c.instructions+=1;goto B586f15;
case 0x586f17:goto L586f17;
case 0x586f18:c.instructions+=1;goto B586f18;
case 0x586f1d:goto L586f1d;
case 0x586f20:c.instructions+=2;goto B586f20;
case 0x586f23:c.instructions+=1;goto B586f23;
case 0x586f29:goto L586f29;
case 0x586f2a:c.instructions+=1;goto B586f2a;
case 0x586f2f:goto L586f2f;
case 0x586f32:c.instructions+=2;goto B586f32;
case 0x586f35:c.instructions+=1;goto B586f35;
case 0x586f3b:goto L586f3b;
case 0x586f3e:c.instructions+=16;goto B586f3e;
case 0x586f41:c.instructions+=15;goto B586f41;
case 0x586f43:c.instructions+=14;goto B586f43;
case 0x586f47:c.instructions+=13;goto B586f47;
case 0x586f4b:c.instructions+=12;goto B586f4b;
case 0x586f4f:c.instructions+=11;goto B586f4f;
case 0x586f50:c.instructions+=10;goto B586f50;
case 0x586f55:c.instructions+=9;goto B586f55;
case 0x586f56:c.instructions+=8;goto B586f56;
case 0x586f5a:c.instructions+=7;goto B586f5a;
case 0x586f5d:c.instructions+=6;goto B586f5d;
case 0x586f5e:c.instructions+=5;goto B586f5e;
case 0x586f62:c.instructions+=4;goto B586f62;
case 0x586f67:c.instructions+=3;goto B586f67;
case 0x586f68:c.instructions+=2;goto B586f68;
case 0x586f6c:c.instructions+=1;goto B586f6c;
case 0x586f71:goto L586f71;
case 0x586f75:c.instructions+=12;goto B586f75;
case 0x586f78:c.instructions+=11;goto B586f78;
case 0x586f7a:c.instructions+=10;goto B586f7a;
case 0x586f7c:c.instructions+=9;goto B586f7c;
case 0x586f7e:c.instructions+=8;goto B586f7e;
case 0x586f81:c.instructions+=7;goto B586f81;
case 0x586f82:c.instructions+=6;goto B586f82;
case 0x586f86:c.instructions+=5;goto B586f86;
case 0x586f8b:c.instructions+=4;goto B586f8b;
case 0x586f8c:c.instructions+=3;goto B586f8c;
case 0x586f90:c.instructions+=2;goto B586f90;
case 0x586f94:c.instructions+=1;goto B586f94;
case 0x586f99:goto L586f99;
case 0x586f9c:c.instructions+=21;goto B586f9c;
case 0x586f9f:c.instructions+=20;goto B586f9f;
case 0x586fa1:c.instructions+=19;goto B586fa1;
case 0x586fa4:c.instructions+=18;goto B586fa4;
case 0x586fa6:c.instructions+=17;goto B586fa6;
case 0x586fa8:c.instructions+=16;goto B586fa8;
case 0x586faa:c.instructions+=15;goto B586faa;
case 0x586fad:c.instructions+=14;goto B586fad;
case 0x586fb0:c.instructions+=13;goto B586fb0;
case 0x586fb2:c.instructions+=12;goto B586fb2;
case 0x586fb5:c.instructions+=11;goto B586fb5;
case 0x586fb8:c.instructions+=10;goto B586fb8;
case 0x586fbb:c.instructions+=9;goto B586fbb;
case 0x586fbc:c.instructions+=8;goto B586fbc;
case 0x586fbf:c.instructions+=7;goto B586fbf;
case 0x586fc0:c.instructions+=6;goto B586fc0;
case 0x586fc4:c.instructions+=5;goto B586fc4;
case 0x586fc9:c.instructions+=4;goto B586fc9;
case 0x586fca:c.instructions+=3;goto B586fca;
case 0x586fce:c.instructions+=2;goto B586fce;
case 0x586fd3:c.instructions+=1;goto B586fd3;
case 0x586fd8:goto L586fd8;
case 0x586fdc:c.instructions+=3;goto B586fdc;
case 0x586fde:c.instructions+=2;goto B586fde;
case 0x586fe3:c.instructions+=1;goto B586fe3;
case 0x586fe7:goto L586fe7;
case 0x586fe9:goto L586fe9;
case 0x586fea:c.instructions+=7;goto B586fea;
case 0x586fef:c.instructions+=6;goto B586fef;
case 0x586ff1:c.instructions+=5;goto B586ff1;
case 0x586ff5:c.instructions+=4;goto B586ff5;
case 0x586ffa:c.instructions+=3;goto B586ffa;
case 0x586ffb:c.instructions+=2;goto B586ffb;
case 0x586ffc:c.instructions+=1;goto B586ffc;
default:missing_instruction(c.pc);}
B586000:L586000:{c.instructions+=9;NFSU2_TR(0x586000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586001:{NFSU2_TR(0x586001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586004:{NFSU2_TR(0x586004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586005:{NFSU2_TR(0x586005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B586006:{NFSU2_TR(0x586006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586007:{NFSU2_TR(0x586007);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B586009:{NFSU2_TR(0x586009);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58600a:{NFSU2_TR(0x58600a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58600d:{NFSU2_TR(0x58600d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586010:L586010:{c.instructions+=5;NFSU2_TR(0x586010);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586017:{NFSU2_TR(0x586017);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586018:{NFSU2_TR(0x586018);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586019:{NFSU2_TR(0x586019);
w4(R+28,u32(0x6ull));
}
B58601e:{NFSU2_TR(0x58601e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586025;}}
}
B586020:L586020:{c.instructions+=1;NFSU2_TR(0x586020);
w4(R+28,u32(0x4ull));
}
B586025:L586025:{c.instructions+=1;NFSU2_TR(0x586025);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B586028:L586028:{c.instructions+=2;NFSU2_TR(0x586028);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586029:{NFSU2_TR(0x586029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58602eull));
TAIL_STATIC(0x43c1c0u,43c);
}
B58602e:L58602e:{c.instructions+=4;NFSU2_TR(0x58602e);
__builtin_memmove((R+4),gp(0x7fbe80),4);
}
B586034:{NFSU2_TR(0x586034);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586037:{NFSU2_TR(0x586037);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586039:{NFSU2_TR(0x586039);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586028u);}goto L586028;}}
}
B58603b:L58603b:{c.instructions+=1;NFSU2_TR(0x58603b);
w4(R+4,u32(0x8693c8ull));
}
B586040:L586040:{c.instructions+=2;NFSU2_TR(0x586040);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B586043:{NFSU2_TR(0x586043);
if(r1(R+518)){{goto L586049;}}
}
B586045:L586045:{c.instructions+=2;NFSU2_TR(0x586045);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B586047:{NFSU2_TR(0x586047);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586028u);}goto L586028;}}
}
B586049:L586049:{c.instructions+=3;NFSU2_TR(0x586049);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B58604c:{NFSU2_TR(0x58604c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x869468ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x869468ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B586052:{NFSU2_TR(0x586052);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586040u);}goto L586040;}}
}
B586054:L586054:{c.instructions+=3;NFSU2_TR(0x586054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586055:{NFSU2_TR(0x586055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586056:{NFSU2_TR(0x586056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586060:L586060:{c.instructions+=8;NFSU2_TR(0x586060);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586061:{NFSU2_TR(0x586061);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586065:{NFSU2_TR(0x586065);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586066:{NFSU2_TR(0x586066);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586068:{NFSU2_TR(0x586068);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58606c:{NFSU2_TR(0x58606c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58606d:{NFSU2_TR(0x58606d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586075:{NFSU2_TR(0x586075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58607aull));
TAIL_STATIC(0x581d90u,581);
}
B58607a:L58607a:{c.instructions+=9;NFSU2_TR(0x58607a);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B586080:{NFSU2_TR(0x586080);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586084:{NFSU2_TR(0x586084);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586088:{NFSU2_TR(0x586088);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58608e:{NFSU2_TR(0x58608e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B586092:{NFSU2_TR(0x586092);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B586098:{NFSU2_TR(0x586098);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58609e:{NFSU2_TR(0x58609e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5860a4:{NFSU2_TR(0x5860a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5860a9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5860a9:L5860a9:{c.instructions+=4;NFSU2_TR(0x5860a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5860ad:{NFSU2_TR(0x5860ad);
__builtin_memmove((R+24),(R+0),4);
}
B5860af:{NFSU2_TR(0x5860af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5860b1:{NFSU2_TR(0x5860b1);
w4(R+0,u32(0x8693c8ull));
}
B5860b6:L5860b6:{c.instructions+=2;NFSU2_TR(0x5860b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5860b9:{NFSU2_TR(0x5860b9);
if(r1(R+518)){{goto L5860c7;}}
}
B5860bb:L5860bb:{c.instructions+=3;NFSU2_TR(0x5860bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5860be:{NFSU2_TR(0x5860be);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869468ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5860c3:{NFSU2_TR(0x5860c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5860b6u);}goto L5860b6;}}
}
B5860c5:L5860c5:{c.instructions+=1;NFSU2_TR(0x5860c5);
{goto L5860c9;}
}
B5860c7:L5860c7:{c.instructions+=1;NFSU2_TR(0x5860c7);
__builtin_memmove((R+4),(R+0),4);
}
B5860c9:L5860c9:{c.instructions+=5;NFSU2_TR(0x5860c9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5860cd:{NFSU2_TR(0x5860cd);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5860d0:{NFSU2_TR(0x5860d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5860d2:{NFSU2_TR(0x5860d2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5860d5:{NFSU2_TR(0x5860d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5860e2;}}
}
B5860d7:L5860d7:{c.instructions+=3;NFSU2_TR(0x5860d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5860db:{NFSU2_TR(0x5860db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5860de:{NFSU2_TR(0x5860de);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5860e2:L5860e2:{c.instructions+=3;NFSU2_TR(0x5860e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5860e3:{NFSU2_TR(0x5860e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5860e4:{NFSU2_TR(0x5860e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5860f0:L5860f0:{c.instructions+=3;NFSU2_TR(0x5860f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5860f4:{NFSU2_TR(0x5860f4);
w4(R+0,u32(0x8693c8ull));
}
B5860f9:{NFSU2_TR(0x5860f9);
__builtin_memmove((R+16),(R+16),4);
}
B586100:L586100:{c.instructions+=2;NFSU2_TR(0x586100);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B586103:{NFSU2_TR(0x586103);
if(r1(R+518)){{goto L586110;}}
}
B586105:L586105:{c.instructions+=3;NFSU2_TR(0x586105);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B586108:{NFSU2_TR(0x586108);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x869468ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869468ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58610d:{NFSU2_TR(0x58610d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586100u);}goto L586100;}}
}
B58610f:L58610f:{c.instructions+=1;NFSU2_TR(0x58610f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586110:L586110:{c.instructions+=2;NFSU2_TR(0x586110);
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
B586112:{NFSU2_TR(0x586112);
if(r1(R+518)){{goto L58611d;}}
}
B586114:L586114:{c.instructions+=2;NFSU2_TR(0x586114);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B58611a:{NFSU2_TR(0x58611a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58611d:L58611d:{c.instructions+=1;NFSU2_TR(0x58611d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586120:L586120:{c.instructions+=8;NFSU2_TR(0x586120);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586121:{NFSU2_TR(0x586121);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586122:{NFSU2_TR(0x586122);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586126:{NFSU2_TR(0x586126);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58612c:{NFSU2_TR(0x58612c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58612d:{NFSU2_TR(0x58612d);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B586133:{NFSU2_TR(0x586133);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B586137:{NFSU2_TR(0x586137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58613cull));
TAIL_STATIC(0x75bed4u,75b);
}
B58613c:L58613c:{c.instructions+=6;NFSU2_TR(0x58613c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586140:{NFSU2_TR(0x586140);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B586144:{NFSU2_TR(0x586144);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B586148:{NFSU2_TR(0x586148);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58614a:{NFSU2_TR(0x58614a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58614d:{NFSU2_TR(0x58614d);
if(r1(R+514)){{goto L586155;}}
}
B58614f:L58614f:{c.instructions+=1;NFSU2_TR(0x58614f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B586155:L586155:{c.instructions+=3;NFSU2_TR(0x586155);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B586159:{NFSU2_TR(0x586159);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58615a:{NFSU2_TR(0x58615a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58615full));
TAIL_STATIC(0x75bed4u,75b);
}
B58615f:L58615f:{c.instructions+=5;NFSU2_TR(0x58615f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586160:{NFSU2_TR(0x586160);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586164:{NFSU2_TR(0x586164);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586165:{NFSU2_TR(0x586165);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586166:{NFSU2_TR(0x586166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58616bull));
TAIL_STATIC(0x585810u,585);
}
B58616b:L58616b:{c.instructions+=3;NFSU2_TR(0x58616b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58616e:{NFSU2_TR(0x58616e);
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
B586170:{NFSU2_TR(0x586170);
if(r1(R+518)){{goto L5861b4;}}
}
B586172:L586172:{c.instructions+=4;NFSU2_TR(0x586172);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B586178:{NFSU2_TR(0x586178);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58617e:{NFSU2_TR(0x58617e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B586182:{NFSU2_TR(0x586182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586187ull));
TAIL_STATIC(0x75bed4u,75b);
}
B586187:L586187:{c.instructions+=6;NFSU2_TR(0x586187);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58618b:{NFSU2_TR(0x58618b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58618f:{NFSU2_TR(0x58618f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B586193:{NFSU2_TR(0x586193);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B586195:{NFSU2_TR(0x586195);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B586198:{NFSU2_TR(0x586198);
if(r1(R+514)){{goto L5861a0;}}
}
B58619a:L58619a:{c.instructions+=1;NFSU2_TR(0x58619a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5861a0:L5861a0:{c.instructions+=2;NFSU2_TR(0x5861a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861a1:{NFSU2_TR(0x5861a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5861a6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5861a6:L5861a6:{c.instructions+=4;NFSU2_TR(0x5861a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5861aa:{NFSU2_TR(0x5861aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861ab:{NFSU2_TR(0x5861ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861ac:{NFSU2_TR(0x5861ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5861b1ull));
TAIL_STATIC(0x5838c0u,583);
}
B5861b1:L5861b1:{c.instructions+=1;NFSU2_TR(0x5861b1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5861b4:L5861b4:{c.instructions+=4;NFSU2_TR(0x5861b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5861b5:{NFSU2_TR(0x5861b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5861b6:{NFSU2_TR(0x5861b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5861b7:{NFSU2_TR(0x5861b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5861c0:L5861c0:{c.instructions+=5;NFSU2_TR(0x5861c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861c1:{NFSU2_TR(0x5861c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861c2:{NFSU2_TR(0x5861c2);
u8 U[4];
w4(U+0,u32(0x7a1334ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861c7:{NFSU2_TR(0x5861c7);
u8 U[4];
w4(U+0,u32(0x869470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861cc:{NFSU2_TR(0x5861cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5861d1ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5861d1:L5861d1:{c.instructions+=3;NFSU2_TR(0x5861d1);
u8 U[4];
w4(U+0,u32(0x7a1328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861d6:{NFSU2_TR(0x5861d6);
u8 U[4];
w4(U+0,u32(0x869680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861db:{NFSU2_TR(0x5861db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5861e0ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5861e0:L5861e0:{c.instructions+=3;NFSU2_TR(0x5861e0);
u8 U[4];
w4(U+0,u32(0x7a131cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861e5:{NFSU2_TR(0x5861e5);
u8 U[4];
w4(U+0,u32(0x868e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5861ea:{NFSU2_TR(0x5861ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5861efull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5861ef:L5861ef:{c.instructions+=4;NFSU2_TR(0x5861ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5861f2:{NFSU2_TR(0x5861f2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5861f4:{NFSU2_TR(0x5861f4);
w4(R+24,u32(0x866a28ull));
}
B5861f9:{NFSU2_TR(0x5861f9);
__builtin_memmove((R+16),(R+16),4);
}
B586200:L586200:{c.instructions+=2;NFSU2_TR(0x586200);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586201:{NFSU2_TR(0x586201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586206ull));
TAIL_STATIC(0x5839a0u,583);
}
B586206:L586206:{c.instructions+=3;NFSU2_TR(0x586206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586207:{NFSU2_TR(0x586207);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586208:{NFSU2_TR(0x586208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58620dull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58620d:L58620d:{c.instructions+=5;NFSU2_TR(0x58620d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B586210:{NFSU2_TR(0x586210);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x204ull))));
}
B586216:{NFSU2_TR(0x586216);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B586217:{NFSU2_TR(0x586217);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x868e70ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x868e70ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x868e70ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58621d:{NFSU2_TR(0x58621d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586200u);}goto L586200;}}
}
B58621f:L58621f:{c.instructions+=3;NFSU2_TR(0x58621f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586220:{NFSU2_TR(0x586220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586221:{NFSU2_TR(0x586221);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586230:L586230:{c.instructions+=49;NFSU2_TR(0x586230);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B586236:{NFSU2_TR(0x586236);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B586238:{NFSU2_TR(0x586238);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58623b:{NFSU2_TR(0x58623b);
__builtin_memmove(gp(0x8693cc),(R+8),4);
}
B586241:{NFSU2_TR(0x586241);
__builtin_memmove(gp(0x8693c8),(R+8),4);
}
B586247:{NFSU2_TR(0x586247);
__builtin_memmove(gp(0x8693d0),(R+0),4);
}
B58624c:{NFSU2_TR(0x58624c);
__builtin_memmove(gp(0x8693d4),(R+0),2);
}
B586252:{NFSU2_TR(0x586252);
__builtin_memmove(gp(0x8693d6),(R+0),2);
}
B586258:{NFSU2_TR(0x586258);
__builtin_memmove(gp(0x8693d8),(R+0),4);
}
B58625d:{NFSU2_TR(0x58625d);
__builtin_memmove(gp(0x8693dc),(R+0),4);
}
B586262:{NFSU2_TR(0x586262);
s4(0x8693e0,u32(0xbf800000ull));
}
B58626c:{NFSU2_TR(0x58626c);
__builtin_memmove(gp(0x8693e4),(R+4),4);
}
B586272:{NFSU2_TR(0x586272);
__builtin_memmove(gp(0x8693ec),(R+8),4);
}
B586278:{NFSU2_TR(0x586278);
__builtin_memmove(gp(0x8693e8),(R+8),4);
}
B58627e:{NFSU2_TR(0x58627e);
__builtin_memmove(gp(0x8693f0),(R+0),4);
}
B586283:{NFSU2_TR(0x586283);
__builtin_memmove(gp(0x8693f4),(R+0),2);
}
B586289:{NFSU2_TR(0x586289);
__builtin_memmove(gp(0x8693f6),(R+0),2);
}
B58628f:{NFSU2_TR(0x58628f);
__builtin_memmove(gp(0x8693f8),(R+0),4);
}
B586294:{NFSU2_TR(0x586294);
__builtin_memmove(gp(0x8693fc),(R+0),4);
}
B586299:{NFSU2_TR(0x586299);
s4(0x869400,u32(0xbf800000ull));
}
B5862a3:{NFSU2_TR(0x5862a3);
__builtin_memmove(gp(0x869404),(R+4),4);
}
B5862a9:{NFSU2_TR(0x5862a9);
__builtin_memmove(gp(0x86940c),(R+8),4);
}
B5862af:{NFSU2_TR(0x5862af);
__builtin_memmove(gp(0x869408),(R+8),4);
}
B5862b5:{NFSU2_TR(0x5862b5);
__builtin_memmove(gp(0x869410),(R+0),4);
}
B5862ba:{NFSU2_TR(0x5862ba);
__builtin_memmove(gp(0x869414),(R+0),2);
}
B5862c0:{NFSU2_TR(0x5862c0);
__builtin_memmove(gp(0x869416),(R+0),2);
}
B5862c6:{NFSU2_TR(0x5862c6);
__builtin_memmove(gp(0x869418),(R+0),4);
}
B5862cb:{NFSU2_TR(0x5862cb);
__builtin_memmove(gp(0x86941c),(R+0),4);
}
B5862d0:{NFSU2_TR(0x5862d0);
s4(0x869420,u32(0xbf800000ull));
}
B5862da:{NFSU2_TR(0x5862da);
__builtin_memmove(gp(0x869424),(R+4),4);
}
B5862e0:{NFSU2_TR(0x5862e0);
__builtin_memmove(gp(0x86942c),(R+8),4);
}
B5862e6:{NFSU2_TR(0x5862e6);
__builtin_memmove(gp(0x869428),(R+8),4);
}
B5862ec:{NFSU2_TR(0x5862ec);
__builtin_memmove(gp(0x869430),(R+0),4);
}
B5862f1:{NFSU2_TR(0x5862f1);
__builtin_memmove(gp(0x869434),(R+0),2);
}
B5862f7:{NFSU2_TR(0x5862f7);
__builtin_memmove(gp(0x869436),(R+0),2);
}
B5862fd:{NFSU2_TR(0x5862fd);
__builtin_memmove(gp(0x869438),(R+0),4);
}
B586302:{NFSU2_TR(0x586302);
__builtin_memmove(gp(0x86943c),(R+0),4);
}
B586307:{NFSU2_TR(0x586307);
s4(0x869440,u32(0xbf800000ull));
}
B586311:{NFSU2_TR(0x586311);
__builtin_memmove(gp(0x869444),(R+4),4);
}
B586317:{NFSU2_TR(0x586317);
__builtin_memmove(gp(0x86944c),(R+8),4);
}
B58631d:{NFSU2_TR(0x58631d);
__builtin_memmove(gp(0x869448),(R+8),4);
}
B586323:{NFSU2_TR(0x586323);
__builtin_memmove(gp(0x869450),(R+0),4);
}
B586328:{NFSU2_TR(0x586328);
__builtin_memmove(gp(0x869454),(R+0),2);
}
B58632e:{NFSU2_TR(0x58632e);
__builtin_memmove(gp(0x869456),(R+0),2);
}
B586334:{NFSU2_TR(0x586334);
__builtin_memmove(gp(0x869458),(R+0),4);
}
B586339:{NFSU2_TR(0x586339);
__builtin_memmove(gp(0x86945c),(R+0),4);
}
B58633e:{NFSU2_TR(0x58633e);
s4(0x869460,u32(0xbf800000ull));
}
B586348:{NFSU2_TR(0x586348);
__builtin_memmove(gp(0x869464),(R+4),4);
}
B58634e:{NFSU2_TR(0x58634e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586350:L586350:{c.instructions+=50;NFSU2_TR(0x586350);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B586356:{NFSU2_TR(0x586356);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B586358:{NFSU2_TR(0x586358);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58635b:{NFSU2_TR(0x58635b);
__builtin_memmove(gp(0x8693cc),(R+8),4);
}
B586361:{NFSU2_TR(0x586361);
__builtin_memmove(gp(0x8693c8),(R+8),4);
}
B586367:{NFSU2_TR(0x586367);
__builtin_memmove(gp(0x8693d0),(R+0),4);
}
B58636c:{NFSU2_TR(0x58636c);
__builtin_memmove(gp(0x8693d4),(R+0),2);
}
B586372:{NFSU2_TR(0x586372);
__builtin_memmove(gp(0x8693d6),(R+0),2);
}
B586378:{NFSU2_TR(0x586378);
__builtin_memmove(gp(0x8693d8),(R+0),4);
}
B58637d:{NFSU2_TR(0x58637d);
__builtin_memmove(gp(0x8693dc),(R+0),4);
}
B586382:{NFSU2_TR(0x586382);
s4(0x8693e0,u32(0xbf800000ull));
}
B58638c:{NFSU2_TR(0x58638c);
__builtin_memmove(gp(0x8693e4),(R+4),4);
}
B586392:{NFSU2_TR(0x586392);
__builtin_memmove(gp(0x8693ec),(R+8),4);
}
B586398:{NFSU2_TR(0x586398);
__builtin_memmove(gp(0x8693e8),(R+8),4);
}
B58639e:{NFSU2_TR(0x58639e);
__builtin_memmove(gp(0x8693f0),(R+0),4);
}
B5863a3:{NFSU2_TR(0x5863a3);
__builtin_memmove(gp(0x8693f4),(R+0),2);
}
B5863a9:{NFSU2_TR(0x5863a9);
__builtin_memmove(gp(0x8693f6),(R+0),2);
}
B5863af:{NFSU2_TR(0x5863af);
__builtin_memmove(gp(0x8693f8),(R+0),4);
}
B5863b4:{NFSU2_TR(0x5863b4);
__builtin_memmove(gp(0x8693fc),(R+0),4);
}
B5863b9:{NFSU2_TR(0x5863b9);
s4(0x869400,u32(0xbf800000ull));
}
B5863c3:{NFSU2_TR(0x5863c3);
__builtin_memmove(gp(0x869404),(R+4),4);
}
B5863c9:{NFSU2_TR(0x5863c9);
__builtin_memmove(gp(0x86940c),(R+8),4);
}
B5863cf:{NFSU2_TR(0x5863cf);
__builtin_memmove(gp(0x869408),(R+8),4);
}
B5863d5:{NFSU2_TR(0x5863d5);
__builtin_memmove(gp(0x869410),(R+0),4);
}
B5863da:{NFSU2_TR(0x5863da);
__builtin_memmove(gp(0x869414),(R+0),2);
}
B5863e0:{NFSU2_TR(0x5863e0);
__builtin_memmove(gp(0x869416),(R+0),2);
}
B5863e6:{NFSU2_TR(0x5863e6);
__builtin_memmove(gp(0x869418),(R+0),4);
}
B5863eb:{NFSU2_TR(0x5863eb);
__builtin_memmove(gp(0x86941c),(R+0),4);
}
B5863f0:{NFSU2_TR(0x5863f0);
s4(0x869420,u32(0xbf800000ull));
}
B5863fa:{NFSU2_TR(0x5863fa);
__builtin_memmove(gp(0x869424),(R+4),4);
}
B586400:{NFSU2_TR(0x586400);
__builtin_memmove(gp(0x86942c),(R+8),4);
}
B586406:{NFSU2_TR(0x586406);
__builtin_memmove(gp(0x869428),(R+8),4);
}
B58640c:{NFSU2_TR(0x58640c);
__builtin_memmove(gp(0x869430),(R+0),4);
}
B586411:{NFSU2_TR(0x586411);
__builtin_memmove(gp(0x869434),(R+0),2);
}
B586417:{NFSU2_TR(0x586417);
__builtin_memmove(gp(0x869436),(R+0),2);
}
B58641d:{NFSU2_TR(0x58641d);
__builtin_memmove(gp(0x869438),(R+0),4);
}
B586422:{NFSU2_TR(0x586422);
__builtin_memmove(gp(0x86943c),(R+0),4);
}
B586427:{NFSU2_TR(0x586427);
s4(0x869440,u32(0xbf800000ull));
}
B586431:{NFSU2_TR(0x586431);
__builtin_memmove(gp(0x869444),(R+4),4);
}
B586437:{NFSU2_TR(0x586437);
__builtin_memmove(gp(0x86944c),(R+8),4);
}
B58643d:{NFSU2_TR(0x58643d);
__builtin_memmove(gp(0x869448),(R+8),4);
}
B586443:{NFSU2_TR(0x586443);
__builtin_memmove(gp(0x869450),(R+0),4);
}
B586448:{NFSU2_TR(0x586448);
__builtin_memmove(gp(0x869454),(R+0),2);
}
B58644e:{NFSU2_TR(0x58644e);
__builtin_memmove(gp(0x869456),(R+0),2);
}
B586454:{NFSU2_TR(0x586454);
__builtin_memmove(gp(0x869458),(R+0),4);
}
B586459:{NFSU2_TR(0x586459);
__builtin_memmove(gp(0x86945c),(R+0),4);
}
B58645e:{NFSU2_TR(0x58645e);
s4(0x869460,u32(0xbf800000ull));
}
B586468:{NFSU2_TR(0x586468);
__builtin_memmove(gp(0x869464),(R+4),4);
}
B58646e:{NFSU2_TR(0x58646e);
__builtin_memmove(gp(0x866a24),(R+0),4);
}
B586473:{NFSU2_TR(0x586473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586480:L586480:{c.instructions+=6;NFSU2_TR(0x586480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586481:{NFSU2_TR(0x586481);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586485:{NFSU2_TR(0x586485);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B586487:{NFSU2_TR(0x586487);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B586489:{NFSU2_TR(0x586489);
w4(R+4,u32(0x8693ccull));
}
B58648e:{NFSU2_TR(0x58648e);
__builtin_memmove((R+28),(R+28),4);
}
B586490:L586490:{c.instructions+=2;NFSU2_TR(0x586490);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B586492:{NFSU2_TR(0x586492);
if(r1(R+518)){{goto L5864a2;}}
}
B586494:L586494:{c.instructions+=4;NFSU2_TR(0x586494);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B586497:{NFSU2_TR(0x586497);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B586498:{NFSU2_TR(0x586498);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x86946cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86946cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86946cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58649e:{NFSU2_TR(0x58649e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586490u);}goto L586490;}}
}
B5864a0:L5864a0:{c.instructions+=2;NFSU2_TR(0x5864a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5864a1:{NFSU2_TR(0x5864a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5864a2:L5864a2:{c.instructions+=17;NFSU2_TR(0x5864a2);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5864a8:{NFSU2_TR(0x5864a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5864ab:{NFSU2_TR(0x5864ab);
w1(R+512,carry<u32>(r4(R+0),u32(0x8693c8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8693c8ull))));
}
B5864b0:{NFSU2_TR(0x5864b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5864b7:{NFSU2_TR(0x5864b7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B5864bd:{NFSU2_TR(0x5864bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5864c0:{NFSU2_TR(0x5864c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5864c4:{NFSU2_TR(0x5864c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5864c8:{NFSU2_TR(0x5864c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5864cb:{NFSU2_TR(0x5864cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5864ce:{NFSU2_TR(0x5864ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5864d5:{NFSU2_TR(0x5864d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5864d8:{NFSU2_TR(0x5864d8);
__builtin_memmove((R+0),gp(0x866a24),4);
}
B5864dd:{NFSU2_TR(0x5864dd);
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
B5864de:{NFSU2_TR(0x5864de);
__builtin_memmove(gp(0x866a24),(R+0),4);
}
B5864e3:{NFSU2_TR(0x5864e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5864e4:{NFSU2_TR(0x5864e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5864f0:L5864f0:{c.instructions+=6;NFSU2_TR(0x5864f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5864f1:{NFSU2_TR(0x5864f1);
__builtin_memmove((R+24),(R+4),4);
}
B5864f3:{NFSU2_TR(0x5864f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5864f6:{NFSU2_TR(0x5864f6);
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
B5864f8:{NFSU2_TR(0x5864f8);
u8 U[4];
w4(U+0,u32(0x7a12a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5864fe:{NFSU2_TR(0x5864fe);
if(r1(R+518)){{goto L586510;}}
}
B586500:L586500:{c.instructions+=2;NFSU2_TR(0x586500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586501:{NFSU2_TR(0x586501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586506ull));
TAIL_STATIC(0x748b60u,748);
}
B586506:L586506:{c.instructions+=2;NFSU2_TR(0x586506);
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
B586509:{NFSU2_TR(0x586509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586510:L586510:{c.instructions+=2;NFSU2_TR(0x586510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586511:{NFSU2_TR(0x586511);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586520:L586520:{c.instructions+=5;NFSU2_TR(0x586520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586521:{NFSU2_TR(0x586521);
__builtin_memmove((R+24),(R+4),4);
}
B586523:{NFSU2_TR(0x586523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586526:{NFSU2_TR(0x586526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586527:{NFSU2_TR(0x586527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58652cull));
TAIL_STATIC(0x748d00u,748);
}
B58652c:L58652c:{c.instructions+=4;NFSU2_TR(0x58652c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58652f:{NFSU2_TR(0x58652f);
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
B586531:{NFSU2_TR(0x586531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586534:{NFSU2_TR(0x586534);
if(r1(R+518)){{goto L586585;}}
}
B586536:L586536:{c.instructions+=3;NFSU2_TR(0x586536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586538:{NFSU2_TR(0x586538);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x68747470ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x68747470ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58653d:{NFSU2_TR(0x58653d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L586567;}}
}
B58653f:L58653f:{c.instructions+=1;NFSU2_TR(0x58653f);
if(r1(R+518)){{goto L58655f;}}
}
B586541:L586541:{c.instructions+=2;NFSU2_TR(0x586541);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x616c7274ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586546:{NFSU2_TR(0x586546);
if(r1(R+518)){{goto L586557;}}
}
B586548:L586548:{c.instructions+=2;NFSU2_TR(0x586548);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x63617264ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x63617264ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x63617264ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58654d:{NFSU2_TR(0x58654d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586599;}}
}
B58654f:L58654f:{c.instructions+=3;NFSU2_TR(0x58654f);
__builtin_memmove((R+4),(R+24),4);
}
B586551:{NFSU2_TR(0x586551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586552:{NFSU2_TR(0x586552);
TAIL_STATIC(0x583c90u,583);
}
B586557:L586557:{c.instructions+=3;NFSU2_TR(0x586557);
__builtin_memmove((R+4),(R+24),4);
}
B586559:{NFSU2_TR(0x586559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58655a:{NFSU2_TR(0x58655a);
TAIL_STATIC(0x583c10u,583);
}
B58655f:L58655f:{c.instructions+=3;NFSU2_TR(0x58655f);
__builtin_memmove((R+4),(R+24),4);
}
B586561:{NFSU2_TR(0x586561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586562:{NFSU2_TR(0x586562);
TAIL_STATIC(0x583cd0u,583);
}
B586567:L586567:{c.instructions+=2;NFSU2_TR(0x586567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e657773ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58656c:{NFSU2_TR(0x58656c);
if(r1(R+518)){{goto L58657d;}}
}
B58656e:L58656e:{c.instructions+=2;NFSU2_TR(0x58656e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x70726f6dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x70726f6dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x70726f6dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B586573:{NFSU2_TR(0x586573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586599;}}
}
B586575:L586575:{c.instructions+=3;NFSU2_TR(0x586575);
__builtin_memmove((R+4),(R+24),4);
}
B586577:{NFSU2_TR(0x586577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586578:{NFSU2_TR(0x586578);
TAIL_STATIC(0x583c50u,583);
}
B58657d:L58657d:{c.instructions+=3;NFSU2_TR(0x58657d);
__builtin_memmove((R+4),(R+24),4);
}
B58657f:{NFSU2_TR(0x58657f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586580:{NFSU2_TR(0x586580);
TAIL_STATIC(0x583d20u,583);
}
B586585:L586585:{c.instructions+=3;NFSU2_TR(0x586585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586588:{NFSU2_TR(0x586588);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586589:{NFSU2_TR(0x586589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58658eull));
TAIL_STATIC(0x748cf0u,748);
}
B58658e:L58658e:{c.instructions+=5;NFSU2_TR(0x58658e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B586590:{NFSU2_TR(0x586590);
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
B586593:{NFSU2_TR(0x586593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586594:{NFSU2_TR(0x586594);
__builtin_memmove((R+4),(R+24),4);
}
B586596:{NFSU2_TR(0x586596);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586599ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B586599:L586599:{c.instructions+=2;NFSU2_TR(0x586599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58659a:{NFSU2_TR(0x58659a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5865a0:L5865a0:{c.instructions+=6;NFSU2_TR(0x5865a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5865a1:{NFSU2_TR(0x5865a1);
__builtin_memmove((R+24),(R+4),4);
}
B5865a3:{NFSU2_TR(0x5865a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5865a6:{NFSU2_TR(0x5865a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5865a8:{NFSU2_TR(0x5865a8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x68747470ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x68747470ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x68747470ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5865ad:{NFSU2_TR(0x5865ad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5865d5;}}
}
B5865af:L5865af:{c.instructions+=1;NFSU2_TR(0x5865af);
if(r1(R+518)){{goto L5865cd;}}
}
B5865b1:L5865b1:{c.instructions+=2;NFSU2_TR(0x5865b1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x616c7274ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x616c7274ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x616c7274ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5865b6:{NFSU2_TR(0x5865b6);
if(r1(R+518)){{goto L5865c5;}}
}
B5865b8:L5865b8:{c.instructions+=2;NFSU2_TR(0x5865b8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x63617264ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x63617264ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x63617264ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5865bd:{NFSU2_TR(0x5865bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586613;}}
}
B5865bf:L5865bf:{c.instructions+=2;NFSU2_TR(0x5865bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5865c0:{NFSU2_TR(0x5865c0);
TAIL_STATIC(0x583e40u,583);
}
B5865c5:L5865c5:{c.instructions+=3;NFSU2_TR(0x5865c5);
__builtin_memmove((R+4),(R+24),4);
}
B5865c7:{NFSU2_TR(0x5865c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5865c8:{NFSU2_TR(0x5865c8);
TAIL_STATIC(0x583d60u,583);
}
B5865cd:L5865cd:{c.instructions+=3;NFSU2_TR(0x5865cd);
__builtin_memmove((R+4),(R+24),4);
}
B5865cf:{NFSU2_TR(0x5865cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5865d0:{NFSU2_TR(0x5865d0);
TAIL_STATIC(0x583ef0u,583);
}
B5865d5:L5865d5:{c.instructions+=2;NFSU2_TR(0x5865d5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6e657773ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6e657773ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6e657773ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5865da:{NFSU2_TR(0x5865da);
if(r1(R+518)){{goto L5865eb;}}
}
B5865dc:L5865dc:{c.instructions+=2;NFSU2_TR(0x5865dc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x70726f6dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x70726f6dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x70726f6dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5865e1:{NFSU2_TR(0x5865e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586613;}}
}
B5865e3:L5865e3:{c.instructions+=3;NFSU2_TR(0x5865e3);
__builtin_memmove((R+4),(R+24),4);
}
B5865e5:{NFSU2_TR(0x5865e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5865e6:{NFSU2_TR(0x5865e6);
TAIL_STATIC(0x583d90u,583);
}
B5865eb:L5865eb:{c.instructions+=3;NFSU2_TR(0x5865eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5865ed:{NFSU2_TR(0x5865ed);
__builtin_memmove((R+4),(R+24),4);
}
B5865ef:{NFSU2_TR(0x5865ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5865f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5865f2:L5865f2:{c.instructions+=2;NFSU2_TR(0x5865f2);
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
B5865f5:{NFSU2_TR(0x5865f5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L586613;}}
}
B5865f7:L5865f7:{c.instructions+=4;NFSU2_TR(0x5865f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5865f8:{NFSU2_TR(0x5865f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5865fb:{NFSU2_TR(0x5865fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5865fc:{NFSU2_TR(0x5865fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586601ull));
TAIL_STATIC(0x748e10u,748);
}
B586601:L586601:{c.instructions+=6;NFSU2_TR(0x586601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B586603:{NFSU2_TR(0x586603);
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
B586606:{NFSU2_TR(0x586606);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58660d:{NFSU2_TR(0x58660d);
__builtin_memmove((R+4),(R+24),4);
}
B58660f:{NFSU2_TR(0x58660f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586610:{NFSU2_TR(0x586610);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B586613:L586613:{c.instructions+=2;NFSU2_TR(0x586613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586614:{NFSU2_TR(0x586614);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586620:L586620:{c.instructions+=6;NFSU2_TR(0x586620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586621:{NFSU2_TR(0x586621);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586622:{NFSU2_TR(0x586622);
__builtin_memmove((R+28),(R+4),4);
}
B586624:{NFSU2_TR(0x586624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B586626:{NFSU2_TR(0x586626);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586628:{NFSU2_TR(0x586628);
if(r1(R+518)){{goto L586650;}}
}
B58662a:L58662a:{c.instructions+=1;NFSU2_TR(0x58662a);
__builtin_memmove((R+12),(R+12),4);
}
B586630:L586630:{c.instructions+=6;NFSU2_TR(0x586630);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586633:{NFSU2_TR(0x586633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586635:{NFSU2_TR(0x586635);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B586637:{NFSU2_TR(0x586637);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58663a:{NFSU2_TR(0x58663a);
__builtin_memmove((R+4),(R+24),4);
}
B58663c:{NFSU2_TR(0x58663c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586641ull));
TAIL_STATIC(0x584140u,584);
}
B586641:L586641:{c.instructions+=2;NFSU2_TR(0x586641);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586642:{NFSU2_TR(0x586642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586647ull));
TAIL_STATIC(0x575630u,575);
}
B586647:L586647:{c.instructions+=4;NFSU2_TR(0x586647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B586649:{NFSU2_TR(0x586649);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58664c:{NFSU2_TR(0x58664c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B58664e:{NFSU2_TR(0x58664e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586630u);}goto L586630;}}
}
B586650:L586650:{c.instructions+=3;NFSU2_TR(0x586650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586651:{NFSU2_TR(0x586651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586652:{NFSU2_TR(0x586652);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586660:L586660:{c.instructions+=6;NFSU2_TR(0x586660);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586664:{NFSU2_TR(0x586664);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586668:{NFSU2_TR(0x586668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586669:{NFSU2_TR(0x586669);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58666a:{NFSU2_TR(0x58666a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58666e:{NFSU2_TR(0x58666e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586673ull));
TAIL_STATIC(0x584f40u,584);
}
B586673:L586673:{c.instructions+=1;NFSU2_TR(0x586673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586680:L586680:{c.instructions+=11;NFSU2_TR(0x586680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586681:{NFSU2_TR(0x586681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586682:{NFSU2_TR(0x586682);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586687:{NFSU2_TR(0x586687);
u8 U[4];
w4(U+0,u32(0x598750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58668c:{NFSU2_TR(0x58668c);
__builtin_memmove((R+24),(R+4),4);
}
B58668e:{NFSU2_TR(0x58668e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586690:{NFSU2_TR(0x586690);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586692:{NFSU2_TR(0x586692);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B586695:{NFSU2_TR(0x586695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586696:{NFSU2_TR(0x586696);
u8 U[4];
w4(U+0,u32(0x7a1340ull));
s4(u32(r4(R+24)),r4(U+0));
}
B58669c:{NFSU2_TR(0x58669c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5866a1ull));
TAIL_STATIC(0x75c461u,75c);
}
B5866a1:L5866a1:{c.instructions+=20;NFSU2_TR(0x5866a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5866a4:{NFSU2_TR(0x5866a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5866a6:{NFSU2_TR(0x5866a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866a9:{NFSU2_TR(0x5866a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5866ac:{NFSU2_TR(0x5866ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5866ae:{NFSU2_TR(0x5866ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866b1:{NFSU2_TR(0x5866b1);
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
B5866b3:{NFSU2_TR(0x5866b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866b6:{NFSU2_TR(0x5866b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5866b9:{NFSU2_TR(0x5866b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866bc:{NFSU2_TR(0x5866bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866c2:{NFSU2_TR(0x5866c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866c8:{NFSU2_TR(0x5866c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866ce:{NFSU2_TR(0x5866ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5866d4:{NFSU2_TR(0x5866d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5866da:{NFSU2_TR(0x5866da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5866e0:{NFSU2_TR(0x5866e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5866e6:{NFSU2_TR(0x5866e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5866ec:{NFSU2_TR(0x5866ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5866ef:{NFSU2_TR(0x5866ef);
w4(R+4,u32(0x10ull));
}
B5866f4:L5866f4:{c.instructions+=1;NFSU2_TR(0x5866f4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5866f6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5866f4u);}goto L5866f4;}
}
B5866f6:L5866f6:{c.instructions+=4;NFSU2_TR(0x5866f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5866f7:{NFSU2_TR(0x5866f7);
__builtin_memmove((R+0),(R+24),4);
}
B5866f9:{NFSU2_TR(0x5866f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5866fa:{NFSU2_TR(0x5866fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586700:L586700:{c.instructions+=14;NFSU2_TR(0x586700);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586702:{NFSU2_TR(0x586702);
u8 U[4];
w4(U+0,u32(0x778af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586707:{NFSU2_TR(0x586707);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58670d:{NFSU2_TR(0x58670d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58670e:{NFSU2_TR(0x58670e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586715:{NFSU2_TR(0x586715);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586716:{NFSU2_TR(0x586716);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586717:{NFSU2_TR(0x586717);
__builtin_memmove((R+24),(R+4),4);
}
B586719:{NFSU2_TR(0x586719);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58671d:{NFSU2_TR(0x58671d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58671f:{NFSU2_TR(0x58671f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586722:{NFSU2_TR(0x586722);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B586725:{NFSU2_TR(0x586725);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58672d:{NFSU2_TR(0x58672d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586732ull));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B586732:L586732:{c.instructions+=8;NFSU2_TR(0x586732);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586736:{NFSU2_TR(0x586736);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58673d:{NFSU2_TR(0x58673d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586747:{NFSU2_TR(0x586747);
__builtin_memmove((R+0),(R+24),4);
}
B586749:{NFSU2_TR(0x586749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58674a:{NFSU2_TR(0x58674a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586751:{NFSU2_TR(0x586751);
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
B586754:{NFSU2_TR(0x586754);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586760:L586760:{c.instructions+=5;NFSU2_TR(0x586760);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586761:{NFSU2_TR(0x586761);
__builtin_memmove((R+28),(R+4),4);
}
B586763:{NFSU2_TR(0x586763);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586766:{NFSU2_TR(0x586766);
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
B586768:{NFSU2_TR(0x586768);
if(r1(R+518)){{goto L586849;}}
}
B58676e:L58676e:{c.instructions+=3;NFSU2_TR(0x58676e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58676f:{NFSU2_TR(0x58676f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586770:{NFSU2_TR(0x586770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586775ull));
TAIL_STATIC(0x742db0u,742);
}
B586775:L586775:{c.instructions+=3;NFSU2_TR(0x586775);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586778:{NFSU2_TR(0x586778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586779:{NFSU2_TR(0x586779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58677eull));
TAIL_STATIC(0x745540u,745);
}
B58677e:L58677e:{c.instructions+=3;NFSU2_TR(0x58677e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586784:{NFSU2_TR(0x586784);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586785:{NFSU2_TR(0x586785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58678aull));
TAIL_STATIC(0x74af10u,74a);
}
B58678a:L58678a:{c.instructions+=5;NFSU2_TR(0x58678a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58678d:{NFSU2_TR(0x58678d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+20),(U+0),4);
}
B586790:{NFSU2_TR(0x586790);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586793:{NFSU2_TR(0x586793);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B586795:{NFSU2_TR(0x586795);
if(r1(R+518)){{goto L5867c2;}}
}
B586797:L586797:{c.instructions+=1;NFSU2_TR(0x586797);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586798:L586798:{c.instructions+=3;NFSU2_TR(0x586798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58679b:{NFSU2_TR(0x58679b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58679c:{NFSU2_TR(0x58679c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58679full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58679f:L58679f:{c.instructions+=3;NFSU2_TR(0x58679f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5867a2:{NFSU2_TR(0x5867a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5867a4:{NFSU2_TR(0x5867a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5867bb;}}
}
B5867a6:L5867a6:{c.instructions+=6;NFSU2_TR(0x5867a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5867a9:{NFSU2_TR(0x5867a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5867ab:{NFSU2_TR(0x5867ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5867ad:{NFSU2_TR(0x5867ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5867ae:{NFSU2_TR(0x5867ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5867b1:{NFSU2_TR(0x5867b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5867b6ull));
TAIL_STATIC(0x575630u,575);
}
B5867b6:L5867b6:{c.instructions+=2;NFSU2_TR(0x5867b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5867b9:{NFSU2_TR(0x5867b9);
__builtin_memmove((R+24),(R+12),4);
}
B5867bb:L5867bb:{c.instructions+=3;NFSU2_TR(0x5867bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5867bd:{NFSU2_TR(0x5867bd);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5867bf:{NFSU2_TR(0x5867bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586798u);}goto L586798;}}
}
B5867c1:L5867c1:{c.instructions+=1;NFSU2_TR(0x5867c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5867c2:L5867c2:{c.instructions+=5;NFSU2_TR(0x5867c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5867c5:{NFSU2_TR(0x5867c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5867c7:{NFSU2_TR(0x5867c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5867c8:{NFSU2_TR(0x5867c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5867c9:{NFSU2_TR(0x5867c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586817;}}
}
B5867cb:L5867cb:{c.instructions+=4;NFSU2_TR(0x5867cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5867ce:{NFSU2_TR(0x5867ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5867d1:{NFSU2_TR(0x5867d1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5867d3:{NFSU2_TR(0x5867d3);
if(r1(R+518)){{goto L586817;}}
}
B5867d5:L5867d5:{c.instructions+=16;NFSU2_TR(0x5867d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5867d7:{NFSU2_TR(0x5867d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5867da:{NFSU2_TR(0x5867da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5867dc:{NFSU2_TR(0x5867dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5867df:{NFSU2_TR(0x5867df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5867e2:{NFSU2_TR(0x5867e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5867e5:{NFSU2_TR(0x5867e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5867e8:{NFSU2_TR(0x5867e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5867e9:{NFSU2_TR(0x5867e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5867ec:{NFSU2_TR(0x5867ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5867ed:{NFSU2_TR(0x5867ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5867f0:{NFSU2_TR(0x5867f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5867f3:{NFSU2_TR(0x5867f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5867f4:{NFSU2_TR(0x5867f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5867f5:{NFSU2_TR(0x5867f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5867f6:{NFSU2_TR(0x5867f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5867fbull));
TAIL_STATIC(0x7446c0u,744);
}
B5867fb:L5867fb:{c.instructions+=7;NFSU2_TR(0x5867fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5867fe:{NFSU2_TR(0x5867fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586801:{NFSU2_TR(0x586801);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586804:{NFSU2_TR(0x586804);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586807:{NFSU2_TR(0x586807);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B58680a:{NFSU2_TR(0x58680a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58680c:{NFSU2_TR(0x58680c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586817;}}
}
B58680e:L58680e:{c.instructions+=3;NFSU2_TR(0x58680e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586810:{NFSU2_TR(0x586810);
__builtin_memmove((R+4),(R+28),4);
}
B586812:{NFSU2_TR(0x586812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586817ull));
TAIL_STATIC(0x584350u,584);
}
B586817:L586817:{c.instructions+=1;NFSU2_TR(0x586817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58681cull));
TAIL_STATIC(0x582b60u,582);
}
B58681c:L58681c:{c.instructions+=3;NFSU2_TR(0x58681c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586822:{NFSU2_TR(0x586822);
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
B586824:{NFSU2_TR(0x586824);
if(r1(R+518)){{goto L586849;}}
}
B586826:L586826:{c.instructions+=4;NFSU2_TR(0x586826);
s4(0x7fbe54,u32(0x5832e0ull));
}
B586830:{NFSU2_TR(0x586830);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586836:{NFSU2_TR(0x586836);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586837:{NFSU2_TR(0x586837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58683cull));
TAIL_STATIC(0x740600u,740);
}
B58683c:L58683c:{c.instructions+=2;NFSU2_TR(0x58683c);
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
B58683f:{NFSU2_TR(0x58683f);
s4(0x7fbe54,u32(0x5832d0ull));
}
B586849:L586849:{c.instructions+=2;NFSU2_TR(0x586849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58684a:{NFSU2_TR(0x58684a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586850:L586850:{c.instructions+=5;NFSU2_TR(0x586850);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586853:{NFSU2_TR(0x586853);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586855:{NFSU2_TR(0x586855);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586859:{NFSU2_TR(0x586859);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58685a:{NFSU2_TR(0x58685a);
if(r1(R+518)){{goto L58686e;}}
}
B58685c:L58685c:{c.instructions+=2;NFSU2_TR(0x58685c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58685f:{NFSU2_TR(0x58685f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58686e;}}
}
B586861:L586861:{c.instructions+=3;NFSU2_TR(0x586861);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586863:{NFSU2_TR(0x586863);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586865:{NFSU2_TR(0x586865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58686aull));
TAIL_STATIC(0x584270u,584);
}
B58686a:L58686a:{c.instructions+=2;NFSU2_TR(0x58686a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58686b:{NFSU2_TR(0x58686b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58686e:L58686e:{c.instructions+=4;NFSU2_TR(0x58686e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586871:{NFSU2_TR(0x586871);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B586874:{NFSU2_TR(0x586874);
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
B586876:{NFSU2_TR(0x586876);
if(r1(R+518)){{goto L5868a1;}}
}
B586878:L586878:{c.instructions+=2;NFSU2_TR(0x586878);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58687b:{NFSU2_TR(0x58687b);
if(r1(R+518)){{goto L586887;}}
}
B58687d:L58687d:{c.instructions+=3;NFSU2_TR(0x58687d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58687f:{NFSU2_TR(0x58687f);
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
B586881:{NFSU2_TR(0x586881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586878u);}goto L586878;}}
}
B586883:L586883:{c.instructions+=2;NFSU2_TR(0x586883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586884:{NFSU2_TR(0x586884);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586887:L586887:{c.instructions+=6;NFSU2_TR(0x586887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58688a:{NFSU2_TR(0x58688a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58688c:{NFSU2_TR(0x58688c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58688e:{NFSU2_TR(0x58688e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586891:{NFSU2_TR(0x586891);
__builtin_memmove((R+4),(R+24),4);
}
B586893:{NFSU2_TR(0x586893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586898ull));
TAIL_STATIC(0x584140u,584);
}
B586898:L586898:{c.instructions+=2;NFSU2_TR(0x586898);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586899:{NFSU2_TR(0x586899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58689eull));
TAIL_STATIC(0x575630u,575);
}
B58689e:L58689e:{c.instructions+=1;NFSU2_TR(0x58689e);
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
B5868a1:L5868a1:{c.instructions+=2;NFSU2_TR(0x5868a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5868a2:{NFSU2_TR(0x5868a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5868b0:L5868b0:{c.instructions+=8;NFSU2_TR(0x5868b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5868b1:{NFSU2_TR(0x5868b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5868b2:{NFSU2_TR(0x5868b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5868b3:{NFSU2_TR(0x5868b3);
__builtin_memmove((R+28),(R+4),4);
}
B5868b5:{NFSU2_TR(0x5868b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5868b8:{NFSU2_TR(0x5868b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5868ba:{NFSU2_TR(0x5868ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5868be:{NFSU2_TR(0x5868be);
if(r1(R+518)){{goto L5868d5;}}
}
B5868c0:L5868c0:{c.instructions+=2;NFSU2_TR(0x5868c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5868c3:{NFSU2_TR(0x5868c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5868d5;}}
}
B5868c5:L5868c5:{c.instructions+=5;NFSU2_TR(0x5868c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5868c8:{NFSU2_TR(0x5868c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5868ca:{NFSU2_TR(0x5868ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5868cc:{NFSU2_TR(0x5868cc);
__builtin_memmove((R+4),(R+28),4);
}
B5868ce:{NFSU2_TR(0x5868ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5868d3ull));
TAIL_STATIC(0x584270u,584);
}
B5868d3:L5868d3:{c.instructions+=1;NFSU2_TR(0x5868d3);
{goto L58690e;}
}
B5868d5:L5868d5:{c.instructions+=4;NFSU2_TR(0x5868d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5868d8:{NFSU2_TR(0x5868d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5868db:{NFSU2_TR(0x5868db);
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
B5868dd:{NFSU2_TR(0x5868dd);
if(r1(R+518)){{goto L586948;}}
}
B5868df:L5868df:{c.instructions+=1;NFSU2_TR(0x5868df);
}
B5868e0:L5868e0:{c.instructions+=2;NFSU2_TR(0x5868e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5868e3:{NFSU2_TR(0x5868e3);
if(r1(R+518)){{goto L5868f1;}}
}
B5868e5:L5868e5:{c.instructions+=3;NFSU2_TR(0x5868e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5868e7:{NFSU2_TR(0x5868e7);
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
B5868e9:{NFSU2_TR(0x5868e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5868e0u);}goto L5868e0;}}
}
B5868eb:L5868eb:{c.instructions+=4;NFSU2_TR(0x5868eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5868ec:{NFSU2_TR(0x5868ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5868ed:{NFSU2_TR(0x5868ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5868ee:{NFSU2_TR(0x5868ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5868f1:L5868f1:{c.instructions+=7;NFSU2_TR(0x5868f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5868f4:{NFSU2_TR(0x5868f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5868f6:{NFSU2_TR(0x5868f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5868f9:{NFSU2_TR(0x5868f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5868fb:{NFSU2_TR(0x5868fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5868fe:{NFSU2_TR(0x5868fe);
__builtin_memmove((R+4),(R+24),4);
}
B586900:{NFSU2_TR(0x586900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586905ull));
TAIL_STATIC(0x584140u,584);
}
B586905:L586905:{c.instructions+=2;NFSU2_TR(0x586905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586906:{NFSU2_TR(0x586906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58690bull));
TAIL_STATIC(0x575630u,575);
}
B58690b:L58690b:{c.instructions+=1;NFSU2_TR(0x58690b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58690e:L58690e:{c.instructions+=2;NFSU2_TR(0x58690e);
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
B586910:{NFSU2_TR(0x586910);
if(r1(R+518)){{goto L586948;}}
}
B586912:L586912:{c.instructions+=5;NFSU2_TR(0x586912);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586915:{NFSU2_TR(0x586915);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586916:{NFSU2_TR(0x586916);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+12),(U+0),4);
}
B586919:{NFSU2_TR(0x586919);
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
B58691b:{NFSU2_TR(0x58691b);
if(r1(R+518)){{goto L586947;}}
}
B58691d:L58691d:{c.instructions+=1;NFSU2_TR(0x58691d);
__builtin_memmove((R+4),(R+4),4);
}
B586920:L586920:{c.instructions+=2;NFSU2_TR(0x586920);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B586923:{NFSU2_TR(0x586923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586941;}}
}
B586925:L586925:{c.instructions+=6;NFSU2_TR(0x586925);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B586928:{NFSU2_TR(0x586928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58692a:{NFSU2_TR(0x58692a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B58692c:{NFSU2_TR(0x58692c);
__builtin_memmove((R+4),(R+24),4);
}
B58692e:{NFSU2_TR(0x58692e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586931:{NFSU2_TR(0x586931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586936ull));
TAIL_STATIC(0x584140u,584);
}
B586936:L586936:{c.instructions+=2;NFSU2_TR(0x586936);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586937:{NFSU2_TR(0x586937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58693cull));
TAIL_STATIC(0x575630u,575);
}
B58693c:L58693c:{c.instructions+=2;NFSU2_TR(0x58693c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58693f:{NFSU2_TR(0x58693f);
__builtin_memmove((R+24),(R+28),4);
}
B586941:L586941:{c.instructions+=3;NFSU2_TR(0x586941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B586943:{NFSU2_TR(0x586943);
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
B586945:{NFSU2_TR(0x586945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586920u);}goto L586920;}}
}
B586947:L586947:{c.instructions+=1;NFSU2_TR(0x586947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586948:L586948:{c.instructions+=4;NFSU2_TR(0x586948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586949:{NFSU2_TR(0x586949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58694a:{NFSU2_TR(0x58694a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58694b:{NFSU2_TR(0x58694b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586950:L586950:{c.instructions+=6;NFSU2_TR(0x586950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586951:{NFSU2_TR(0x586951);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586952:{NFSU2_TR(0x586952);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586954:{NFSU2_TR(0x586954);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586956:{NFSU2_TR(0x586956);
__builtin_memmove((R+24),(R+4),4);
}
B586958:{NFSU2_TR(0x586958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58695dull));
TAIL_STATIC(0x584270u,584);
}
B58695d:L58695d:{c.instructions+=5;NFSU2_TR(0x58695d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586960:{NFSU2_TR(0x586960);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B586963:{NFSU2_TR(0x586963);
__builtin_memmove((R+24),(R+0),4);
}
B586965:{NFSU2_TR(0x586965);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586967:{NFSU2_TR(0x586967);
if(r1(R+518)){{goto L586996;}}
}
B586969:L586969:{c.instructions+=1;NFSU2_TR(0x586969);
__builtin_memmove((R+16),(R+16),4);
}
B586970:L586970:{c.instructions+=6;NFSU2_TR(0x586970);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586972:{NFSU2_TR(0x586972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B586974:{NFSU2_TR(0x586974);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586977:{NFSU2_TR(0x586977);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B586979:{NFSU2_TR(0x586979);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58697c:{NFSU2_TR(0x58697c);
if(r1(R+518)){{goto L58698e;}}
}
B58697e:L58697e:{c.instructions+=2;NFSU2_TR(0x58697e);
__builtin_memmove((R+4),(R+24),4);
}
B586980:{NFSU2_TR(0x586980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586985ull));
TAIL_STATIC(0x584140u,584);
}
B586985:L586985:{c.instructions+=2;NFSU2_TR(0x586985);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586986:{NFSU2_TR(0x586986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58698bull));
TAIL_STATIC(0x575630u,575);
}
B58698b:L58698b:{c.instructions+=1;NFSU2_TR(0x58698b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58698e:L58698e:{c.instructions+=4;NFSU2_TR(0x58698e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586990:{NFSU2_TR(0x586990);
__builtin_memmove((R+24),(R+0),4);
}
B586992:{NFSU2_TR(0x586992);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586994:{NFSU2_TR(0x586994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586970u);}goto L586970;}}
}
B586996:L586996:{c.instructions+=3;NFSU2_TR(0x586996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586997:{NFSU2_TR(0x586997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586998:{NFSU2_TR(0x586998);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5869a0:L5869a0:{c.instructions+=11;NFSU2_TR(0x5869a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869a2:{NFSU2_TR(0x5869a2);
u8 U[4];
w4(U+0,u32(0x778949ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869a7:{NFSU2_TR(0x5869a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5869ad:{NFSU2_TR(0x5869ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869ae:{NFSU2_TR(0x5869ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5869b5:{NFSU2_TR(0x5869b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869b6:{NFSU2_TR(0x5869b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869b7:{NFSU2_TR(0x5869b7);
__builtin_memmove((R+24),(R+4),4);
}
B5869b9:{NFSU2_TR(0x5869b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5869bc:{NFSU2_TR(0x5869bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5869be:{NFSU2_TR(0x5869be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5869d7;}}
}
B5869c0:L5869c0:{c.instructions+=6;NFSU2_TR(0x5869c0);
w4(R+0,u32(0xffffffffull));
}
B5869c5:{NFSU2_TR(0x5869c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5869c6:{NFSU2_TR(0x5869c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5869ca:{NFSU2_TR(0x5869ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5869d1:{NFSU2_TR(0x5869d1);
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
B5869d4:{NFSU2_TR(0x5869d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5869d7:L5869d7:{c.instructions+=3;NFSU2_TR(0x5869d7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869d9:{NFSU2_TR(0x5869d9);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869db:{NFSU2_TR(0x5869db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5869e0ull));
TAIL_STATIC(0x6d7110u,6d7);
}
B5869e0:L5869e0:{c.instructions+=5;NFSU2_TR(0x5869e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5869e3:{NFSU2_TR(0x5869e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5869e7:{NFSU2_TR(0x5869e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5869e9:{NFSU2_TR(0x5869e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5869f1:{NFSU2_TR(0x5869f1);
if(r1(R+518)){{goto L586a25;}}
}
B5869f3:L5869f3:{c.instructions+=17;NFSU2_TR(0x5869f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5869f7:{NFSU2_TR(0x5869f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5869fb:{NFSU2_TR(0x5869fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5869fc:{NFSU2_TR(0x5869fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586a00:{NFSU2_TR(0x586a00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a01:{NFSU2_TR(0x586a01);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586a05:{NFSU2_TR(0x586a05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a06:{NFSU2_TR(0x586a06);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B586a08:{NFSU2_TR(0x586a08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B586a0e:{NFSU2_TR(0x586a0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a0f:{NFSU2_TR(0x586a0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586a13:{NFSU2_TR(0x586a13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a14:{NFSU2_TR(0x586a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586a18:{NFSU2_TR(0x586a18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a19:{NFSU2_TR(0x586a19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a1a:{NFSU2_TR(0x586a1a);
__builtin_memmove((R+4),(R+0),4);
}
B586a1c:{NFSU2_TR(0x586a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586a21ull));
TAIL_STATIC(0x584680u,584);
}
B586a21:L586a21:{c.instructions+=2;NFSU2_TR(0x586a21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586a23:{NFSU2_TR(0x586a23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586a3c;}}
}
B586a25:L586a25:{c.instructions+=6;NFSU2_TR(0x586a25);
w4(R+0,u32(0xfffffffeull));
}
B586a2a:{NFSU2_TR(0x586a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586a2b:{NFSU2_TR(0x586a2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586a2f:{NFSU2_TR(0x586a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586a36:{NFSU2_TR(0x586a36);
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
B586a39:{NFSU2_TR(0x586a39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586a3c:L586a3c:{c.instructions+=4;NFSU2_TR(0x586a3c);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B586a40:{NFSU2_TR(0x586a40);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B586a42:{NFSU2_TR(0x586a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B586a45:{NFSU2_TR(0x586a45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586a56;}}
}
B586a47:L586a47:{c.instructions+=6;NFSU2_TR(0x586a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586a4a:{NFSU2_TR(0x586a4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B586a4c:{NFSU2_TR(0x586a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586a4f:{NFSU2_TR(0x586a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586a52:{NFSU2_TR(0x586a52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B586a54:{NFSU2_TR(0x586a54);
{goto L586a62;}
}
B586a56:L586a56:{c.instructions+=5;NFSU2_TR(0x586a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B586a58:{NFSU2_TR(0x586a58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B586a5a:{NFSU2_TR(0x586a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586a5d:{NFSU2_TR(0x586a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586a60:{NFSU2_TR(0x586a60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B586a62:L586a62:{c.instructions+=6;NFSU2_TR(0x586a62);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586a66:{NFSU2_TR(0x586a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586a69:{NFSU2_TR(0x586a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586a6a:{NFSU2_TR(0x586a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586a71:{NFSU2_TR(0x586a71);
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
B586a74:{NFSU2_TR(0x586a74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586a80:L586a80:{c.instructions+=9;NFSU2_TR(0x586a80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a81:{NFSU2_TR(0x586a81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a82:{NFSU2_TR(0x586a82);
__builtin_memmove((R+20),(R+4),4);
}
B586a84:{NFSU2_TR(0x586a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586a8a:{NFSU2_TR(0x586a8a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B586a8c:{NFSU2_TR(0x586a8c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586a8e:{NFSU2_TR(0x586a8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a8f:{NFSU2_TR(0x586a8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a90:{NFSU2_TR(0x586a90);
if(r1(R+518)){{goto L586aa1;}}
}
B586a92:L586a92:{c.instructions+=2;NFSU2_TR(0x586a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586a93:{NFSU2_TR(0x586a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586a98ull));
TAIL_STATIC(0x74aed0u,74a);
}
B586a98:L586a98:{c.instructions+=2;NFSU2_TR(0x586a98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586a9b:{NFSU2_TR(0x586a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586aa1:L586aa1:{c.instructions+=3;NFSU2_TR(0x586aa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586aa4:{NFSU2_TR(0x586aa4);
w4(R+28,u32(0x6ull));
}
B586aa9:{NFSU2_TR(0x586aa9);
__builtin_memmove((R+16),(R+16),4);
}
B586ab0:L586ab0:{c.instructions+=3;NFSU2_TR(0x586ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B586ab2:{NFSU2_TR(0x586ab2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586ab4:{NFSU2_TR(0x586ab4);
if(r1(R+518)){{goto L586ad5;}}
}
B586ab6:L586ab6:{c.instructions+=7;NFSU2_TR(0x586ab6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586ab8:{NFSU2_TR(0x586ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586aba:{NFSU2_TR(0x586aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B586abc:{NFSU2_TR(0x586abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586abf:{NFSU2_TR(0x586abf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B586ac1:{NFSU2_TR(0x586ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586ac4:{NFSU2_TR(0x586ac4);
if(r1(R+518)){{goto L586acf;}}
}
B586ac6:L586ac6:{c.instructions+=2;NFSU2_TR(0x586ac6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ac7:{NFSU2_TR(0x586ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586accull));
TAIL_STATIC(0x575630u,575);
}
B586acc:L586acc:{c.instructions+=1;NFSU2_TR(0x586acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586acf:L586acf:{c.instructions+=3;NFSU2_TR(0x586acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B586ad1:{NFSU2_TR(0x586ad1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586ad3:{NFSU2_TR(0x586ad3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586ab6u);}goto L586ab6;}}
}
B586ad5:L586ad5:{c.instructions+=3;NFSU2_TR(0x586ad5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B586ad8:{NFSU2_TR(0x586ad8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B586ad9:{NFSU2_TR(0x586ad9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586ab0u);}goto L586ab0;}}
}
B586adb:L586adb:{c.instructions+=5;NFSU2_TR(0x586adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586ade:{NFSU2_TR(0x586ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586ae1:{NFSU2_TR(0x586ae1);
__builtin_memmove((R+4),(R+0),4);
}
B586ae3:{NFSU2_TR(0x586ae3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586ae5:{NFSU2_TR(0x586ae5);
if(r1(R+518)){{goto L586b06;}}
}
B586ae7:L586ae7:{c.instructions+=6;NFSU2_TR(0x586ae7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586ae9:{NFSU2_TR(0x586ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B586aeb:{NFSU2_TR(0x586aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586aee:{NFSU2_TR(0x586aee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B586af0:{NFSU2_TR(0x586af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586af3:{NFSU2_TR(0x586af3);
if(r1(R+518)){{goto L586afe;}}
}
B586af5:L586af5:{c.instructions+=2;NFSU2_TR(0x586af5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586af6:{NFSU2_TR(0x586af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586afbull));
TAIL_STATIC(0x575630u,575);
}
B586afb:L586afb:{c.instructions+=1;NFSU2_TR(0x586afb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586afe:L586afe:{c.instructions+=4;NFSU2_TR(0x586afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586b00:{NFSU2_TR(0x586b00);
__builtin_memmove((R+4),(R+0),4);
}
B586b02:{NFSU2_TR(0x586b02);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586b04:{NFSU2_TR(0x586b04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586ae7u);}goto L586ae7;}}
}
B586b06:L586b06:{c.instructions+=2;NFSU2_TR(0x586b06);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B586b09:{NFSU2_TR(0x586b09);
if(r1(R+518)){{goto L586b40;}}
}
B586b0b:L586b0b:{c.instructions+=2;NFSU2_TR(0x586b0b);
__builtin_memmove((R+4),(R+20),4);
}
B586b0d:{NFSU2_TR(0x586b0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586b12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586950u);}goto L586950;}
}
B586b12:L586b12:{c.instructions+=1;NFSU2_TR(0x586b12);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B586b14:L586b14:{c.instructions+=4;NFSU2_TR(0x586b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586b17:{NFSU2_TR(0x586b17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586b18:{NFSU2_TR(0x586b18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586b19:{NFSU2_TR(0x586b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586b1eull));
TAIL_STATIC(0x744470u,744);
}
B586b1e:L586b1e:{c.instructions+=4;NFSU2_TR(0x586b1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586b21:{NFSU2_TR(0x586b21);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B586b22:{NFSU2_TR(0x586b22);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B586b25:{NFSU2_TR(0x586b25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586b14u);}goto L586b14;}}
}
B586b27:L586b27:{c.instructions+=4;NFSU2_TR(0x586b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586b2a:{NFSU2_TR(0x586b2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586b2b:{NFSU2_TR(0x586b2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586b2c:{NFSU2_TR(0x586b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586b31ull));
TAIL_STATIC(0x744310u,744);
}
B586b31:L586b31:{c.instructions+=3;NFSU2_TR(0x586b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586b34:{NFSU2_TR(0x586b34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586b35:{NFSU2_TR(0x586b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586b3aull));
TAIL_STATIC(0x745100u,745);
}
B586b3a:L586b3a:{c.instructions+=2;NFSU2_TR(0x586b3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B586b3d:{NFSU2_TR(0x586b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586b40:L586b40:{c.instructions+=5;NFSU2_TR(0x586b40);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586b43:{NFSU2_TR(0x586b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586b46:{NFSU2_TR(0x586b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586b49:{NFSU2_TR(0x586b49);
w4(R+4,u32(0x10ull));
}
B586b4e:{NFSU2_TR(0x586b4e);
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
B586b50:L586b50:{c.instructions+=1;NFSU2_TR(0x586b50);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L586b52;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586b50u);}goto L586b50;}
}
B586b52:L586b52:{c.instructions+=11;NFSU2_TR(0x586b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586b53:{NFSU2_TR(0x586b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586b54:{NFSU2_TR(0x586b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586b5a:{NFSU2_TR(0x586b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586b60:{NFSU2_TR(0x586b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586b66:{NFSU2_TR(0x586b66);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586b6c:{NFSU2_TR(0x586b6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586b72:{NFSU2_TR(0x586b72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586b78:{NFSU2_TR(0x586b78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B586b79:{NFSU2_TR(0x586b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586b7a:{NFSU2_TR(0x586b7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586b80:L586b80:{c.instructions+=6;NFSU2_TR(0x586b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B586b83:{NFSU2_TR(0x586b83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586b84:{NFSU2_TR(0x586b84);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586b88:{NFSU2_TR(0x586b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586b8b:{NFSU2_TR(0x586b8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586b8d:{NFSU2_TR(0x586b8d);
if(r1(R+518)){{goto L586bf7;}}
}
B586b8f:L586b8f:{c.instructions+=2;NFSU2_TR(0x586b8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x636f6e6eull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B586b96:{NFSU2_TR(0x586b96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586bf7;}}
}
B586b98:L586b98:{c.instructions+=5;NFSU2_TR(0x586b98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586b99:{NFSU2_TR(0x586b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B586b9d:{NFSU2_TR(0x586b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586ba0:{NFSU2_TR(0x586ba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586ba2:{NFSU2_TR(0x586ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586bee;}}
}
B586ba4:L586ba4:{c.instructions+=5;NFSU2_TR(0x586ba4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ba5:{NFSU2_TR(0x586ba5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B586ba7:{NFSU2_TR(0x586ba7);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B586bac:{NFSU2_TR(0x586bac);
w4(R+4,u32(0xfull));
}
B586bb1:{NFSU2_TR(0x586bb1);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B586bb5:L586bb5:{c.instructions+=1;NFSU2_TR(0x586bb5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L586bb7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586bb5u);}goto L586bb5;}
}
B586bb7:L586bb7:{c.instructions+=8;NFSU2_TR(0x586bb7);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B586bb9:{NFSU2_TR(0x586bb9);
u8 U[4];
w4(U+0,u32(0x7a1368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bbe:{NFSU2_TR(0x586bbe);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B586bbf:{NFSU2_TR(0x586bbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B586bc3:{NFSU2_TR(0x586bc3);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bc5:{NFSU2_TR(0x586bc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bc6:{NFSU2_TR(0x586bc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B586bca:{NFSU2_TR(0x586bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586bcfull));
TAIL_STATIC(0x741f20u,741);
}
B586bcf:L586bcf:{c.instructions+=11;NFSU2_TR(0x586bcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B586bd2:{NFSU2_TR(0x586bd2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bd4:{NFSU2_TR(0x586bd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bd6:{NFSU2_TR(0x586bd6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bd8:{NFSU2_TR(0x586bd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bda:{NFSU2_TR(0x586bda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bdc:{NFSU2_TR(0x586bdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B586be0:{NFSU2_TR(0x586be0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586be1:{NFSU2_TR(0x586be1);
u8 U[4];
w4(U+0,u32(0x73656c65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586be6:{NFSU2_TR(0x586be6);
__builtin_memmove((R+4),(R+24),4);
}
B586be8:{NFSU2_TR(0x586be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586bedull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5869a0u);}goto L5869a0;}
}
B586bed:L586bed:{c.instructions+=1;NFSU2_TR(0x586bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586bee:L586bee:{c.instructions+=3;NFSU2_TR(0x586bee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586bef:{NFSU2_TR(0x586bef);
__builtin_memmove((R+4),(R+24),4);
}
B586bf1:{NFSU2_TR(0x586bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586bf6ull));
TAIL_STATIC(0x584350u,584);
}
B586bf6:L586bf6:{c.instructions+=1;NFSU2_TR(0x586bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586bf7:L586bf7:{c.instructions+=3;NFSU2_TR(0x586bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586bf8:{NFSU2_TR(0x586bf8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B586bfb:{NFSU2_TR(0x586bfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586c00:L586c00:{c.instructions+=4;NFSU2_TR(0x586c00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c01:{NFSU2_TR(0x586c01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B586c05:{NFSU2_TR(0x586c05);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x64697363ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x64697363ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x64697363ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B586c0c:{NFSU2_TR(0x586c0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586c38;}}
}
B586c0e:L586c0e:{c.instructions+=4;NFSU2_TR(0x586c0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c0f:{NFSU2_TR(0x586c0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586c13:{NFSU2_TR(0x586c13);
__builtin_memmove((R+4),(R+24),4);
}
B586c15:{NFSU2_TR(0x586c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586c1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586950u);}goto L586950;}
}
B586c1a:L586c1a:{c.instructions+=4;NFSU2_TR(0x586c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586c20:{NFSU2_TR(0x586c20);
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
B586c22:{NFSU2_TR(0x586c22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B586c26:{NFSU2_TR(0x586c26);
if(r1(R+518)){{goto L586c37;}}
}
B586c28:L586c28:{c.instructions+=5;NFSU2_TR(0x586c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586c2e:{NFSU2_TR(0x586c2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c2f:{NFSU2_TR(0x586c2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c30:{NFSU2_TR(0x586c30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c32:{NFSU2_TR(0x586c32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586c34ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B586c34:L586c34:{c.instructions+=1;NFSU2_TR(0x586c34);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B586c37:L586c37:{c.instructions+=1;NFSU2_TR(0x586c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586c38:L586c38:{c.instructions+=2;NFSU2_TR(0x586c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586c39:{NFSU2_TR(0x586c39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586c40:L586c40:{c.instructions+=10;NFSU2_TR(0x586c40);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586c44:{NFSU2_TR(0x586c44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c45:{NFSU2_TR(0x586c45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c46:{NFSU2_TR(0x586c46);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B586c4a:{NFSU2_TR(0x586c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c4b:{NFSU2_TR(0x586c4b);
__builtin_memmove((R+8),(R+4),4);
}
B586c4d:{NFSU2_TR(0x586c4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586c51:{NFSU2_TR(0x586c51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c52:{NFSU2_TR(0x586c52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c53:{NFSU2_TR(0x586c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586c58ull));
TAIL_STATIC(0x5826e0u,582);
}
B586c58:L586c58:{c.instructions+=4;NFSU2_TR(0x586c58);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B586c5c:{NFSU2_TR(0x586c5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586c5f:{NFSU2_TR(0x586c5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c60:{NFSU2_TR(0x586c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586c65ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B586c65:L586c65:{c.instructions+=4;NFSU2_TR(0x586c65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586c68:{NFSU2_TR(0x586c68);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586c6b:{NFSU2_TR(0x586c6b);
__builtin_memmove((R+24),(R+0),4);
}
B586c6d:{NFSU2_TR(0x586c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586c95;}}
}
B586c6f:L586c6f:{c.instructions+=2;NFSU2_TR(0x586c6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586c71:{NFSU2_TR(0x586c71);
if(r1(R+518)){{goto L586c8e;}}
}
B586c73:L586c73:{c.instructions+=2;NFSU2_TR(0x586c73);
w4(R+4,u32(0x850080ull));
}
B586c78:{NFSU2_TR(0x586c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586c7dull));
TAIL_STATIC(0x5031f0u,503);
}
B586c7d:L586c7d:{c.instructions+=4;NFSU2_TR(0x586c7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c7e:{NFSU2_TR(0x586c7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B586c81:{NFSU2_TR(0x586c81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586c82:{NFSU2_TR(0x586c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586c87ull));
TAIL_STATIC(0x43dc30u,43d);
}
B586c87:L586c87:{c.instructions+=3;NFSU2_TR(0x586c87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586c8a:{NFSU2_TR(0x586c8a);
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
B586c8c:{NFSU2_TR(0x586c8c);
if(r1(R+518)){{goto L586c95;}}
}
B586c8e:L586c8e:{c.instructions+=4;NFSU2_TR(0x586c8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586c8f:{NFSU2_TR(0x586c8f);
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
B586c91:{NFSU2_TR(0x586c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586c92:{NFSU2_TR(0x586c92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586c95:L586c95:{c.instructions+=4;NFSU2_TR(0x586c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586c96:{NFSU2_TR(0x586c96);
__builtin_memmove((R+0),(R+24),4);
}
B586c98:{NFSU2_TR(0x586c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586c99:{NFSU2_TR(0x586c99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586ca0:L586ca0:{c.instructions+=6;NFSU2_TR(0x586ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586ca4:{NFSU2_TR(0x586ca4);
__builtin_memmove((R+8),(R+4),4);
}
B586ca6:{NFSU2_TR(0x586ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586caa:{NFSU2_TR(0x586caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586cab:{NFSU2_TR(0x586cab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586cac:{NFSU2_TR(0x586cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586cb1ull));
TAIL_STATIC(0x5826e0u,582);
}
B586cb1:L586cb1:{c.instructions+=5;NFSU2_TR(0x586cb1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
}
B586cb4:{NFSU2_TR(0x586cb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B586cb7:{NFSU2_TR(0x586cb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586cba:{NFSU2_TR(0x586cba);
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
B586cbc:{NFSU2_TR(0x586cbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586cc1;}}
}
B586cbe:L586cbe:{c.instructions+=1;NFSU2_TR(0x586cbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586cc1:L586cc1:{c.instructions+=2;NFSU2_TR(0x586cc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586cc2:{NFSU2_TR(0x586cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586cc7ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B586cc7:L586cc7:{c.instructions+=2;NFSU2_TR(0x586cc7);
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
B586cca:{NFSU2_TR(0x586cca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586cd0:L586cd0:{c.instructions+=6;NFSU2_TR(0x586cd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586cd1:{NFSU2_TR(0x586cd1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586cd2:{NFSU2_TR(0x586cd2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B586cd6:{NFSU2_TR(0x586cd6);
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
B586cd8:{NFSU2_TR(0x586cd8);
__builtin_memmove((R+12),(R+4),4);
}
B586cda:{NFSU2_TR(0x586cda);
if(r1(R+518)){{goto L586d4b;}}
}
B586cdc:L586cdc:{c.instructions+=2;NFSU2_TR(0x586cdc);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B586ce0:{NFSU2_TR(0x586ce0);
if(r1(R+518)){{goto L586d4b;}}
}
B586ce2:L586ce2:{c.instructions+=6;NFSU2_TR(0x586ce2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ce3:{NFSU2_TR(0x586ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586ce6:{NFSU2_TR(0x586ce6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ce7:{NFSU2_TR(0x586ce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586cea:{NFSU2_TR(0x586cea);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586cec:{NFSU2_TR(0x586cec);
if(r1(R+518)){{goto L586d49;}}
}
B586cee:L586cee:{c.instructions+=1;NFSU2_TR(0x586cee);
__builtin_memmove((R+28),(R+28),4);
}
B586cf0:L586cf0:{c.instructions+=3;NFSU2_TR(0x586cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586cf4:{NFSU2_TR(0x586cf4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B586cf7:{NFSU2_TR(0x586cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586d0a;}}
}
B586cf9:L586cf9:{c.instructions+=4;NFSU2_TR(0x586cf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B586cfc:{NFSU2_TR(0x586cfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586cfd:{NFSU2_TR(0x586cfd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586cfe:{NFSU2_TR(0x586cfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586d03ull));
TAIL_STATIC(0x43dc30u,43d);
}
B586d03:L586d03:{c.instructions+=3;NFSU2_TR(0x586d03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586d06:{NFSU2_TR(0x586d06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586d08:{NFSU2_TR(0x586d08);
if(r1(R+518)){{goto L586d17;}}
}
B586d0a:L586d0a:{c.instructions+=3;NFSU2_TR(0x586d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B586d0c:{NFSU2_TR(0x586d0c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586d0e:{NFSU2_TR(0x586d0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586cf0u);}goto L586cf0;}}
}
B586d10:L586d10:{c.instructions+=5;NFSU2_TR(0x586d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586d11:{NFSU2_TR(0x586d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586d12:{NFSU2_TR(0x586d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B586d13:{NFSU2_TR(0x586d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586d14:{NFSU2_TR(0x586d14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586d17:L586d17:{c.instructions+=6;NFSU2_TR(0x586d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586d1a:{NFSU2_TR(0x586d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586d1c:{NFSU2_TR(0x586d1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B586d1e:{NFSU2_TR(0x586d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586d21:{NFSU2_TR(0x586d21);
__builtin_memmove((R+4),(R+24),4);
}
B586d23:{NFSU2_TR(0x586d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586d28ull));
TAIL_STATIC(0x584b40u,584);
}
B586d28:L586d28:{c.instructions+=2;NFSU2_TR(0x586d28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586d29:{NFSU2_TR(0x586d29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586d2eull));
TAIL_STATIC(0x575630u,575);
}
B586d2e:L586d2e:{c.instructions+=4;NFSU2_TR(0x586d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586d31:{NFSU2_TR(0x586d31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586d34:{NFSU2_TR(0x586d34);
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
B586d36:{NFSU2_TR(0x586d36);
if(r1(R+518)){{goto L586d49;}}
}
B586d38:L586d38:{c.instructions+=7;NFSU2_TR(0x586d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586d3b:{NFSU2_TR(0x586d3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586d3f:{NFSU2_TR(0x586d3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586d40:{NFSU2_TR(0x586d40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586d42:{NFSU2_TR(0x586d42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586d43:{NFSU2_TR(0x586d43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586d44:{NFSU2_TR(0x586d44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586d46ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B586d46:L586d46:{c.instructions+=1;NFSU2_TR(0x586d46);
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
B586d49:L586d49:{c.instructions+=2;NFSU2_TR(0x586d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586d4a:{NFSU2_TR(0x586d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586d4b:L586d4b:{c.instructions+=3;NFSU2_TR(0x586d4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B586d4c:{NFSU2_TR(0x586d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586d4d:{NFSU2_TR(0x586d4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586d50:L586d50:{c.instructions+=6;NFSU2_TR(0x586d50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586d51:{NFSU2_TR(0x586d51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586d52:{NFSU2_TR(0x586d52);
__builtin_memmove((R+12),(R+4),4);
}
B586d54:{NFSU2_TR(0x586d54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586d58:{NFSU2_TR(0x586d58);
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
B586d5a:{NFSU2_TR(0x586d5a);
if(r1(R+518)){{goto L586e36;}}
}
B586d60:L586d60:{c.instructions+=2;NFSU2_TR(0x586d60);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B586d63:{NFSU2_TR(0x586d63);
if(r1(R+518)){{goto L586e36;}}
}
B586d69:L586d69:{c.instructions+=4;NFSU2_TR(0x586d69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586d6d:{NFSU2_TR(0x586d6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586d72:{NFSU2_TR(0x586d72);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B586d7a:{NFSU2_TR(0x586d7a);
if(r1(R+518)){{goto L586d86;}}
}
B586d7c:L586d7c:{c.instructions+=2;NFSU2_TR(0x586d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586d84:{NFSU2_TR(0x586d84);
{goto L586dc5;}
}
B586d86:L586d86:{c.instructions+=2;NFSU2_TR(0x586d86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586d8b:{NFSU2_TR(0x586d8b);
if(r1(R+518)){{goto L586d97;}}
}
B586d8d:L586d8d:{c.instructions+=2;NFSU2_TR(0x586d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586d95:{NFSU2_TR(0x586d95);
{goto L586dc5;}
}
B586d97:L586d97:{c.instructions+=2;NFSU2_TR(0x586d97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586d9c:{NFSU2_TR(0x586d9c);
if(r1(R+518)){{goto L586da8;}}
}
B586d9e:L586d9e:{c.instructions+=2;NFSU2_TR(0x586d9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586da6:{NFSU2_TR(0x586da6);
{goto L586dc5;}
}
B586da8:L586da8:{c.instructions+=2;NFSU2_TR(0x586da8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B586daa:{NFSU2_TR(0x586daa);
if(r1(R+518)){{goto L586db6;}}
}
B586dac:L586dac:{c.instructions+=2;NFSU2_TR(0x586dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586db4:{NFSU2_TR(0x586db4);
{goto L586dc5;}
}
B586db6:L586db6:{c.instructions+=2;NFSU2_TR(0x586db6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586dbb:{NFSU2_TR(0x586dbb);
if(r1(R+518)){{goto L586dc5;}}
}
B586dbd:L586dbd:{c.instructions+=1;NFSU2_TR(0x586dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B586dc5:L586dc5:{c.instructions+=7;NFSU2_TR(0x586dc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586dc6:{NFSU2_TR(0x586dc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586dc7:{NFSU2_TR(0x586dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586dca:{NFSU2_TR(0x586dca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586dcb:{NFSU2_TR(0x586dcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586dce:{NFSU2_TR(0x586dce);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586dd0:{NFSU2_TR(0x586dd0);
if(r1(R+518)){{goto L586e33;}}
}
B586dd2:L586dd2:{c.instructions+=1;NFSU2_TR(0x586dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B586dd6:L586dd6:{c.instructions+=2;NFSU2_TR(0x586dd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B586dd9:{NFSU2_TR(0x586dd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L586df0;}}
}
B586ddb:L586ddb:{c.instructions+=4;NFSU2_TR(0x586ddb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B586dde:{NFSU2_TR(0x586dde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ddf:{NFSU2_TR(0x586ddf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586de0:{NFSU2_TR(0x586de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586de5ull));
TAIL_STATIC(0x43dc30u,43d);
}
B586de5:L586de5:{c.instructions+=3;NFSU2_TR(0x586de5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B586de8:{NFSU2_TR(0x586de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B586dea:{NFSU2_TR(0x586dea);
if(r1(R+518)){{goto L586dfe;}}
}
B586dec:L586dec:{c.instructions+=1;NFSU2_TR(0x586dec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586df0:L586df0:{c.instructions+=3;NFSU2_TR(0x586df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B586df2:{NFSU2_TR(0x586df2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B586df4:{NFSU2_TR(0x586df4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586dd6u);}goto L586dd6;}}
}
B586df6:L586df6:{c.instructions+=6;NFSU2_TR(0x586df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586df7:{NFSU2_TR(0x586df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586df8:{NFSU2_TR(0x586df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B586df9:{NFSU2_TR(0x586df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586dfa:{NFSU2_TR(0x586dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B586dfb:{NFSU2_TR(0x586dfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586dfe:L586dfe:{c.instructions+=6;NFSU2_TR(0x586dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586e01:{NFSU2_TR(0x586e01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586e03:{NFSU2_TR(0x586e03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B586e05:{NFSU2_TR(0x586e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586e08:{NFSU2_TR(0x586e08);
__builtin_memmove((R+4),(R+24),4);
}
B586e0a:{NFSU2_TR(0x586e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586e0full));
TAIL_STATIC(0x584b40u,584);
}
B586e0f:L586e0f:{c.instructions+=2;NFSU2_TR(0x586e0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e10:{NFSU2_TR(0x586e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586e15ull));
TAIL_STATIC(0x575630u,575);
}
B586e15:L586e15:{c.instructions+=4;NFSU2_TR(0x586e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586e18:{NFSU2_TR(0x586e18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586e1b:{NFSU2_TR(0x586e1b);
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
B586e1d:{NFSU2_TR(0x586e1d);
if(r1(R+518)){{goto L586e33;}}
}
B586e1f:L586e1f:{c.instructions+=8;NFSU2_TR(0x586e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586e22:{NFSU2_TR(0x586e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586e26:{NFSU2_TR(0x586e26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e27:{NFSU2_TR(0x586e27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586e2b:{NFSU2_TR(0x586e2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e2c:{NFSU2_TR(0x586e2c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e2d:{NFSU2_TR(0x586e2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e2e:{NFSU2_TR(0x586e2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586e30ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B586e30:L586e30:{c.instructions+=1;NFSU2_TR(0x586e30);
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
B586e33:L586e33:{c.instructions+=3;NFSU2_TR(0x586e33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586e34:{NFSU2_TR(0x586e34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B586e35:{NFSU2_TR(0x586e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B586e36:L586e36:{c.instructions+=3;NFSU2_TR(0x586e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B586e37:{NFSU2_TR(0x586e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B586e38:{NFSU2_TR(0x586e38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B586e40:L586e40:{c.instructions+=13;NFSU2_TR(0x586e40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e41:{NFSU2_TR(0x586e41);
__builtin_memmove((R+20),(R+16),4);
}
B586e43:{NFSU2_TR(0x586e43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B586e46:{NFSU2_TR(0x586e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x32cull))));
}
B586e4c:{NFSU2_TR(0x586e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B586e4e:{NFSU2_TR(0x586e4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e4f:{NFSU2_TR(0x586e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586e53:{NFSU2_TR(0x586e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B586e56:{NFSU2_TR(0x586e56);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B586e58:{NFSU2_TR(0x586e58);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B586e5a:{NFSU2_TR(0x586e5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e5b:{NFSU2_TR(0x586e5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e5c:{NFSU2_TR(0x586e5c);
if(r1(R+518)){TAIL_STATIC(0x587139u,587);}
}
B586e62:L586e62:{c.instructions+=3;NFSU2_TR(0x586e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B586e65:{NFSU2_TR(0x586e65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e66:{NFSU2_TR(0x586e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586e6bull));
TAIL_STATIC(0x43dbb0u,43d);
}
B586e6b:L586e6b:{c.instructions+=3;NFSU2_TR(0x586e6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586e6e:{NFSU2_TR(0x586e6e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B586e71:{NFSU2_TR(0x586e71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x587139u,587);}
}
B586e77:L586e77:{c.instructions+=2;NFSU2_TR(0x586e77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e78:{NFSU2_TR(0x586e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586e7dull));
TAIL_STATIC(0x43dbb0u,43d);
}
B586e7d:L586e7d:{c.instructions+=3;NFSU2_TR(0x586e7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586e80:{NFSU2_TR(0x586e80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586e83:{NFSU2_TR(0x586e83);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x587139u,587);}
}
B586e89:L586e89:{c.instructions+=4;NFSU2_TR(0x586e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586e8c:{NFSU2_TR(0x586e8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586e8d:{NFSU2_TR(0x586e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586e91:{NFSU2_TR(0x586e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586e96ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B586e96:L586e96:{c.instructions+=3;NFSU2_TR(0x586e96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586e99:{NFSU2_TR(0x586e99);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B586e9c:{NFSU2_TR(0x586e9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x587139u,587);}
}
B586ea2:L586ea2:{c.instructions+=2;NFSU2_TR(0x586ea2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ea3:{NFSU2_TR(0x586ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586ea8ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B586ea8:L586ea8:{c.instructions+=3;NFSU2_TR(0x586ea8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586eab:{NFSU2_TR(0x586eab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586eae:{NFSU2_TR(0x586eae);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x587139u,587);}
}
B586eb4:L586eb4:{c.instructions+=4;NFSU2_TR(0x586eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B586eb7:{NFSU2_TR(0x586eb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586eb8:{NFSU2_TR(0x586eb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586ebc:{NFSU2_TR(0x586ebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586ec1ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B586ec1:L586ec1:{c.instructions+=3;NFSU2_TR(0x586ec1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586ec4:{NFSU2_TR(0x586ec4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B586ec7:{NFSU2_TR(0x586ec7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x587139u,587);}
}
B586ecd:L586ecd:{c.instructions+=2;NFSU2_TR(0x586ecd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ece:{NFSU2_TR(0x586ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586ed3ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B586ed3:L586ed3:{c.instructions+=3;NFSU2_TR(0x586ed3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586ed6:{NFSU2_TR(0x586ed6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586ed9:{NFSU2_TR(0x586ed9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x587139u,587);}
}
B586edf:L586edf:{c.instructions+=3;NFSU2_TR(0x586edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586ee2:{NFSU2_TR(0x586ee2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B586ee5:{NFSU2_TR(0x586ee5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x587139u,587);}
}
B586eeb:L586eeb:{c.instructions+=2;NFSU2_TR(0x586eeb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586eee:{NFSU2_TR(0x586eee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x587139u,587);}
}
B586ef4:L586ef4:{c.instructions+=3;NFSU2_TR(0x586ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586ef7:{NFSU2_TR(0x586ef7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B586efa:{NFSU2_TR(0x586efa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x587139u,587);}
}
B586f00:L586f00:{c.instructions+=2;NFSU2_TR(0x586f00);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586f03:{NFSU2_TR(0x586f03);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x587139u,587);}
}
B586f09:L586f09:{c.instructions+=5;NFSU2_TR(0x586f09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B586f0c:{NFSU2_TR(0x586f0c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B586f0e:{NFSU2_TR(0x586f0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((R+28),(U+0),4);
}
B586f11:{NFSU2_TR(0x586f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586f15:{NFSU2_TR(0x586f15);
if(r1(R+518)){{goto L586f3b;}}
}
B586f17:L586f17:{c.instructions+=2;NFSU2_TR(0x586f17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f18:{NFSU2_TR(0x586f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586f1dull));
TAIL_STATIC(0x43dbb0u,43d);
}
B586f1d:L586f1d:{c.instructions+=3;NFSU2_TR(0x586f1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586f20:{NFSU2_TR(0x586f20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B586f23:{NFSU2_TR(0x586f23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x587139u,587);}
}
B586f29:L586f29:{c.instructions+=2;NFSU2_TR(0x586f29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f2a:{NFSU2_TR(0x586f2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586f2full));
TAIL_STATIC(0x43dbb0u,43d);
}
B586f2f:L586f2f:{c.instructions+=3;NFSU2_TR(0x586f2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B586f32:{NFSU2_TR(0x586f32);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B586f35:{NFSU2_TR(0x586f35);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x587139u,587);}
}
B586f3b:L586f3b:{c.instructions+=17;NFSU2_TR(0x586f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B586f3e:{NFSU2_TR(0x586f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B586f41:{NFSU2_TR(0x586f41);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B586f43:{NFSU2_TR(0x586f43);
u8 U[8];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586f47:{NFSU2_TR(0x586f47);
u8 U[8];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586f4b:{NFSU2_TR(0x586f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B586f4f:{NFSU2_TR(0x586f4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f50:{NFSU2_TR(0x586f50);
u8 U[6];
w4(U+0,u32(u32(u32(0x35ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B586f55:{NFSU2_TR(0x586f55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f56:{NFSU2_TR(0x586f56);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586f5a:{NFSU2_TR(0x586f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B586f5d:{NFSU2_TR(0x586f5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f5e:{NFSU2_TR(0x586f5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B586f62:{NFSU2_TR(0x586f62);
u8 U[4];
w4(U+0,u32(0x7a13d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f67:{NFSU2_TR(0x586f67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f68:{NFSU2_TR(0x586f68);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586f6c:{NFSU2_TR(0x586f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586f71ull));
TAIL_STATIC(0x4400d0u,440);
}
B586f71:L586f71:{c.instructions+=13;NFSU2_TR(0x586f71);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B586f75:{NFSU2_TR(0x586f75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B586f78:{NFSU2_TR(0x586f78);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B586f7a:{NFSU2_TR(0x586f7a);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x7ull))));
}
B586f7c:{NFSU2_TR(0x586f7c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x46ull))));
}
B586f7e:{NFSU2_TR(0x586f7e);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B586f81:{NFSU2_TR(0x586f81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f82:{NFSU2_TR(0x586f82);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B586f86:{NFSU2_TR(0x586f86);
u8 U[4];
w4(U+0,u32(0x795abcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f8b:{NFSU2_TR(0x586f8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586f8c:{NFSU2_TR(0x586f8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586f90:{NFSU2_TR(0x586f90);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586f94:{NFSU2_TR(0x586f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586f99ull));
TAIL_STATIC(0x4400d0u,440);
}
B586f99:L586f99:{c.instructions+=22;NFSU2_TR(0x586f99);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B586f9c:{NFSU2_TR(0x586f9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B586f9f:{NFSU2_TR(0x586f9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B586fa1:{NFSU2_TR(0x586fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B586fa4:{NFSU2_TR(0x586fa4);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B586fa6:{NFSU2_TR(0x586fa6);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xbull))));
}
B586fa8:{NFSU2_TR(0x586fa8);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x4eull))));
}
B586faa:{NFSU2_TR(0x586faa);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B586fad:{NFSU2_TR(0x586fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B586fb0:{NFSU2_TR(0x586fb0);
w1(R+8,u8(u32(r1(R+8))-u32(u8(0x1ull))));
}
B586fb2:{NFSU2_TR(0x586fb2);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B586fb5:{NFSU2_TR(0x586fb5);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xbull))));
}
B586fb8:{NFSU2_TR(0x586fb8);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x4eull))));
}
B586fbb:{NFSU2_TR(0x586fbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586fbc:{NFSU2_TR(0x586fbc);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B586fbf:{NFSU2_TR(0x586fbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586fc0:{NFSU2_TR(0x586fc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B586fc4:{NFSU2_TR(0x586fc4);
u8 U[4];
w4(U+0,u32(0x7a13d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586fc9:{NFSU2_TR(0x586fc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586fca:{NFSU2_TR(0x586fca);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586fce:{NFSU2_TR(0x586fce);
u8 U[6];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B586fd3:{NFSU2_TR(0x586fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x586fd8ull));
TAIL_STATIC(0x4400d0u,440);
}
B586fd8:L586fd8:{c.instructions+=4;NFSU2_TR(0x586fd8);
u8 U[5];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B586fdc:{NFSU2_TR(0x586fdc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B586fde:{NFSU2_TR(0x586fde);
w4(R+4,u32(0xbfull));
}
B586fe3:{NFSU2_TR(0x586fe3);
u8 U[4];
w4(U+0,u32(u32(u32(0x69ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B586fe7:L586fe7:{c.instructions+=1;NFSU2_TR(0x586fe7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L586fe9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x586fe7u);}goto L586fe7;}
}
B586fe9:L586fe9:{c.instructions+=8;NFSU2_TR(0x586fe9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586fea:{NFSU2_TR(0x586fea);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586fef:{NFSU2_TR(0x586fef);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B586ff1:{NFSU2_TR(0x586ff1);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B586ff5:{NFSU2_TR(0x586ff5);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ffa:{NFSU2_TR(0x586ffa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B586ffb:{NFSU2_TR(0x586ffb);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B586ffc:{NFSU2_TR(0x586ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x587001ull));
TAIL_STATIC(0x741a50u,741);
}
XIT:NFSU2_TR_EXIT(0x586,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
