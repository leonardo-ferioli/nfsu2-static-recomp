#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_73a(u8* __restrict R,Cpu& c);
u32 body_73b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x739,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x739,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_739(u8* __restrict R,Cpu& c);
u32 page_739(Cpu& c){return body_739(c.regs.data(),c);}
__attribute__((noinline)) u32 body_739(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x739030:goto L739030;
case 0x739031:c.instructions+=3;goto B739031;
case 0x739036:c.instructions+=2;goto B739036;
case 0x739038:c.instructions+=1;goto B739038;
case 0x73903e:goto L73903e;
case 0x739043:c.instructions+=2;goto B739043;
case 0x739045:c.instructions+=1;goto B739045;
case 0x73904b:goto L73904b;
case 0x73904d:c.instructions+=1;goto B73904d;
case 0x739052:goto L739052;
case 0x739055:c.instructions+=2;goto B739055;
case 0x739057:c.instructions+=1;goto B739057;
case 0x73905d:goto L73905d;
case 0x739062:c.instructions+=1;goto B739062;
case 0x739064:goto L739064;
case 0x739068:c.instructions+=1;goto B739068;
case 0x73906d:goto L73906d;
case 0x73906e:c.instructions+=6;goto B73906e;
case 0x73906f:c.instructions+=5;goto B73906f;
case 0x739070:c.instructions+=4;goto B739070;
case 0x739071:c.instructions+=3;goto B739071;
case 0x739079:c.instructions+=2;goto B739079;
case 0x73907e:c.instructions+=1;goto B73907e;
case 0x739080:goto L739080;
case 0x739083:c.instructions+=2;goto B739083;
case 0x739085:c.instructions+=1;goto B739085;
case 0x739087:goto L739087;
case 0x739089:c.instructions+=3;goto B739089;
case 0x73908d:c.instructions+=2;goto B73908d;
case 0x739092:c.instructions+=1;goto B739092;
case 0x739094:goto L739094;
case 0x739099:c.instructions+=1;goto B739099;
case 0x73909b:goto L73909b;
case 0x7390a0:c.instructions+=2;goto B7390a0;
case 0x7390a1:c.instructions+=1;goto B7390a1;
case 0x7390a6:goto L7390a6;
case 0x7390a9:c.instructions+=2;goto B7390a9;
case 0x7390ab:c.instructions+=1;goto B7390ab;
case 0x7390ad:goto L7390ad;
case 0x7390af:c.instructions+=1;goto B7390af;
case 0x7390b4:goto L7390b4;
case 0x7390ba:c.instructions+=3;goto B7390ba;
case 0x7390bd:c.instructions+=2;goto B7390bd;
case 0x7390bf:c.instructions+=1;goto B7390bf;
case 0x7390c1:goto L7390c1;
case 0x7390c3:c.instructions+=5;goto B7390c3;
case 0x7390c8:c.instructions+=4;goto B7390c8;
case 0x7390ca:c.instructions+=3;goto B7390ca;
case 0x7390ce:c.instructions+=2;goto B7390ce;
case 0x7390d0:c.instructions+=1;goto B7390d0;
case 0x7390d2:goto L7390d2;
case 0x7390d7:c.instructions+=4;goto B7390d7;
case 0x7390da:c.instructions+=3;goto B7390da;
case 0x7390db:c.instructions+=2;goto B7390db;
case 0x7390dc:c.instructions+=1;goto B7390dc;
case 0x7390e1:goto L7390e1;
case 0x7390e5:c.instructions+=2;goto B7390e5;
case 0x7390e8:c.instructions+=1;goto B7390e8;
case 0x7390eb:goto L7390eb;
case 0x7390ee:c.instructions+=3;goto B7390ee;
case 0x7390ef:c.instructions+=2;goto B7390ef;
case 0x7390f5:c.instructions+=1;goto B7390f5;
case 0x7390f7:goto L7390f7;
case 0x7390fb:c.instructions+=5;goto B7390fb;
case 0x7390fc:c.instructions+=4;goto B7390fc;
case 0x739102:c.instructions+=3;goto B739102;
case 0x739108:c.instructions+=2;goto B739108;
case 0x73910c:c.instructions+=1;goto B73910c;
case 0x739112:goto L739112;
case 0x739113:c.instructions+=6;goto B739113;
case 0x739114:c.instructions+=5;goto B739114;
case 0x739116:c.instructions+=4;goto B739116;
case 0x739117:c.instructions+=3;goto B739117;
case 0x73911c:c.instructions+=2;goto B73911c;
case 0x739121:c.instructions+=1;goto B739121;
case 0x739122:goto L739122;
case 0x739123:c.instructions+=1;goto B739123;
case 0x739130:goto L739130;
case 0x739133:c.instructions+=6;goto B739133;
case 0x739138:c.instructions+=5;goto B739138;
case 0x73913a:c.instructions+=4;goto B73913a;
case 0x73913b:c.instructions+=3;goto B73913b;
case 0x73913c:c.instructions+=2;goto B73913c;
case 0x739144:c.instructions+=1;goto B739144;
case 0x73914a:goto L73914a;
case 0x73914f:c.instructions+=3;goto B73914f;
case 0x739151:c.instructions+=2;goto B739151;
case 0x739153:c.instructions+=1;goto B739153;
case 0x739159:goto L739159;
case 0x73915c:c.instructions+=2;goto B73915c;
case 0x73915d:c.instructions+=1;goto B73915d;
case 0x739162:goto L739162;
case 0x739165:c.instructions+=2;goto B739165;
case 0x739167:c.instructions+=1;goto B739167;
case 0x73916d:goto L73916d;
case 0x73916e:c.instructions+=16;goto B73916e;
case 0x739172:c.instructions+=15;goto B739172;
case 0x739173:c.instructions+=14;goto B739173;
case 0x739177:c.instructions+=13;goto B739177;
case 0x739178:c.instructions+=12;goto B739178;
case 0x73917a:c.instructions+=11;goto B73917a;
case 0x73917d:c.instructions+=10;goto B73917d;
case 0x739180:c.instructions+=9;goto B739180;
case 0x739183:c.instructions+=8;goto B739183;
case 0x739186:c.instructions+=7;goto B739186;
case 0x739189:c.instructions+=6;goto B739189;
case 0x73918c:c.instructions+=5;goto B73918c;
case 0x73918f:c.instructions+=4;goto B73918f;
case 0x739192:c.instructions+=3;goto B739192;
case 0x739195:c.instructions+=2;goto B739195;
case 0x739198:c.instructions+=1;goto B739198;
case 0x73919d:goto L73919d;
case 0x73919f:c.instructions+=3;goto B73919f;
case 0x7391a2:c.instructions+=2;goto B7391a2;
case 0x7391a4:c.instructions+=1;goto B7391a4;
case 0x7391aa:goto L7391aa;
case 0x7391b0:c.instructions+=2;goto B7391b0;
case 0x7391b1:c.instructions+=1;goto B7391b1;
case 0x7391b6:goto L7391b6;
case 0x7391b9:c.instructions+=2;goto B7391b9;
case 0x7391bb:c.instructions+=1;goto B7391bb;
case 0x7391c1:goto L7391c1;
case 0x7391c4:c.instructions+=7;goto B7391c4;
case 0x7391c5:c.instructions+=6;goto B7391c5;
case 0x7391c9:c.instructions+=5;goto B7391c9;
case 0x7391ca:c.instructions+=4;goto B7391ca;
case 0x7391ce:c.instructions+=3;goto B7391ce;
case 0x7391cf:c.instructions+=2;goto B7391cf;
case 0x7391d0:c.instructions+=1;goto B7391d0;
case 0x7391d5:goto L7391d5;
case 0x7391d8:c.instructions+=3;goto B7391d8;
case 0x7391da:c.instructions+=2;goto B7391da;
case 0x7391de:c.instructions+=1;goto B7391de;
case 0x7391e0:goto L7391e0;
case 0x7391e4:c.instructions+=11;goto B7391e4;
case 0x7391e8:c.instructions+=10;goto B7391e8;
case 0x7391ec:c.instructions+=9;goto B7391ec;
case 0x7391ef:c.instructions+=8;goto B7391ef;
case 0x7391f2:c.instructions+=7;goto B7391f2;
case 0x7391f5:c.instructions+=6;goto B7391f5;
case 0x7391f8:c.instructions+=5;goto B7391f8;
case 0x7391fa:c.instructions+=4;goto B7391fa;
case 0x7391fd:c.instructions+=3;goto B7391fd;
case 0x739200:c.instructions+=2;goto B739200;
case 0x739203:c.instructions+=1;goto B739203;
case 0x739205:goto L739205;
case 0x73920b:c.instructions+=2;goto B73920b;
case 0x73920f:c.instructions+=1;goto B73920f;
case 0x739212:goto L739212;
case 0x739216:c.instructions+=2;goto B739216;
case 0x739218:c.instructions+=1;goto B739218;
case 0x73921a:goto L73921a;
case 0x73921b:c.instructions+=3;goto B73921b;
case 0x73921e:c.instructions+=2;goto B73921e;
case 0x739220:c.instructions+=1;goto B739220;
case 0x739222:goto L739222;
case 0x739224:goto L739224;
case 0x739229:c.instructions+=2;goto B739229;
case 0x73922c:c.instructions+=1;goto B73922c;
case 0x73922e:goto L73922e;
case 0x739232:c.instructions+=5;goto B739232;
case 0x739233:c.instructions+=4;goto B739233;
case 0x739239:c.instructions+=3;goto B739239;
case 0x73923a:c.instructions+=2;goto B73923a;
case 0x73923f:c.instructions+=1;goto B73923f;
case 0x739244:goto L739244;
case 0x739247:goto L739247;
case 0x73924b:c.instructions+=8;goto B73924b;
case 0x73924c:c.instructions+=7;goto B73924c;
case 0x73924d:c.instructions+=6;goto B73924d;
case 0x73924e:c.instructions+=5;goto B73924e;
case 0x739254:c.instructions+=4;goto B739254;
case 0x73925a:c.instructions+=3;goto B73925a;
case 0x73925b:c.instructions+=2;goto B73925b;
case 0x73925e:c.instructions+=1;goto B73925e;
case 0x73925f:goto L73925f;
case 0x739263:c.instructions+=20;goto B739263;
case 0x739266:c.instructions+=19;goto B739266;
case 0x73926a:c.instructions+=18;goto B73926a;
case 0x73926c:c.instructions+=17;goto B73926c;
case 0x73926e:c.instructions+=16;goto B73926e;
case 0x739271:c.instructions+=15;goto B739271;
case 0x739274:c.instructions+=14;goto B739274;
case 0x739279:c.instructions+=13;goto B739279;
case 0x73927d:c.instructions+=12;goto B73927d;
case 0x739280:c.instructions+=11;goto B739280;
case 0x739282:c.instructions+=10;goto B739282;
case 0x739286:c.instructions+=9;goto B739286;
case 0x739289:c.instructions+=8;goto B739289;
case 0x73928d:c.instructions+=7;goto B73928d;
case 0x739290:c.instructions+=6;goto B739290;
case 0x739292:c.instructions+=5;goto B739292;
case 0x739295:c.instructions+=4;goto B739295;
case 0x739298:c.instructions+=3;goto B739298;
case 0x73929a:c.instructions+=2;goto B73929a;
case 0x73929e:c.instructions+=1;goto B73929e;
case 0x7392a0:goto L7392a0;
case 0x7392a2:c.instructions+=10;goto B7392a2;
case 0x7392a4:c.instructions+=9;goto B7392a4;
case 0x7392a6:c.instructions+=8;goto B7392a6;
case 0x7392a8:c.instructions+=7;goto B7392a8;
case 0x7392ab:c.instructions+=6;goto B7392ab;
case 0x7392ae:c.instructions+=5;goto B7392ae;
case 0x7392b0:c.instructions+=4;goto B7392b0;
case 0x7392b2:c.instructions+=3;goto B7392b2;
case 0x7392b5:c.instructions+=2;goto B7392b5;
case 0x7392b7:c.instructions+=1;goto B7392b7;
case 0x7392b9:goto L7392b9;
case 0x7392bc:c.instructions+=8;goto B7392bc;
case 0x7392be:c.instructions+=7;goto B7392be;
case 0x7392c0:c.instructions+=6;goto B7392c0;
case 0x7392c2:c.instructions+=5;goto B7392c2;
case 0x7392c4:c.instructions+=4;goto B7392c4;
case 0x7392c7:c.instructions+=3;goto B7392c7;
case 0x7392c9:c.instructions+=2;goto B7392c9;
case 0x7392cb:c.instructions+=1;goto B7392cb;
case 0x7392cf:goto L7392cf;
case 0x7392d1:c.instructions+=2;goto B7392d1;
case 0x7392d3:c.instructions+=1;goto B7392d3;
case 0x7392d5:goto L7392d5;
case 0x7392d9:c.instructions+=4;goto B7392d9;
case 0x7392db:c.instructions+=3;goto B7392db;
case 0x7392dd:c.instructions+=2;goto B7392dd;
case 0x7392e0:c.instructions+=1;goto B7392e0;
case 0x7392e2:goto L7392e2;
case 0x7392e5:goto L7392e5;
case 0x7392e9:c.instructions+=1;goto B7392e9;
case 0x7392eb:goto L7392eb;
case 0x7392ef:c.instructions+=5;goto B7392ef;
case 0x7392f1:c.instructions+=4;goto B7392f1;
case 0x7392f5:c.instructions+=3;goto B7392f5;
case 0x7392f7:c.instructions+=2;goto B7392f7;
case 0x7392fa:c.instructions+=1;goto B7392fa;
case 0x7392ff:goto L7392ff;
case 0x739302:c.instructions+=2;goto B739302;
case 0x739304:c.instructions+=1;goto B739304;
case 0x739309:goto L739309;
case 0x73930a:c.instructions+=4;goto B73930a;
case 0x73930f:c.instructions+=3;goto B73930f;
case 0x739310:c.instructions+=2;goto B739310;
case 0x739313:c.instructions+=1;goto B739313;
case 0x739320:goto L739320;
case 0x739325:c.instructions+=2;goto B739325;
case 0x739327:c.instructions+=1;goto B739327;
case 0x73932d:goto L73932d;
case 0x739332:c.instructions+=2;goto B739332;
case 0x739334:c.instructions+=1;goto B739334;
case 0x73933a:goto L73933a;
case 0x73933c:c.instructions+=1;goto B73933c;
case 0x739341:goto L739341;
case 0x739344:c.instructions+=2;goto B739344;
case 0x739346:c.instructions+=1;goto B739346;
case 0x73934c:goto L73934c;
case 0x73934d:c.instructions+=5;goto B73934d;
case 0x73934e:c.instructions+=4;goto B73934e;
case 0x73934f:c.instructions+=3;goto B73934f;
case 0x739350:c.instructions+=2;goto B739350;
case 0x739352:c.instructions+=1;goto B739352;
case 0x739357:goto L739357;
case 0x73935a:c.instructions+=2;goto B73935a;
case 0x73935c:c.instructions+=1;goto B73935c;
case 0x73935e:goto L73935e;
case 0x739361:c.instructions+=3;goto B739361;
case 0x739365:c.instructions+=2;goto B739365;
case 0x73936a:c.instructions+=1;goto B73936a;
case 0x73936c:goto L73936c;
case 0x739371:c.instructions+=1;goto B739371;
case 0x739373:goto L739373;
case 0x739374:c.instructions+=1;goto B739374;
case 0x739379:goto L739379;
case 0x73937c:c.instructions+=2;goto B73937c;
case 0x73937e:c.instructions+=1;goto B73937e;
case 0x739380:goto L739380;
case 0x739385:goto L739385;
case 0x73938a:c.instructions+=3;goto B73938a;
case 0x73938d:c.instructions+=2;goto B73938d;
case 0x73938f:c.instructions+=1;goto B73938f;
case 0x739391:goto L739391;
case 0x739394:c.instructions+=2;goto B739394;
case 0x739395:c.instructions+=1;goto B739395;
case 0x73939a:goto L73939a;
case 0x73939d:c.instructions+=1;goto B73939d;
case 0x7393a3:goto L7393a3;
case 0x7393a6:c.instructions+=2;goto B7393a6;
case 0x7393ac:c.instructions+=1;goto B7393ac;
case 0x7393ae:goto L7393ae;
case 0x7393b4:c.instructions+=3;goto B7393b4;
case 0x7393b5:c.instructions+=2;goto B7393b5;
case 0x7393bb:c.instructions+=1;goto B7393bb;
case 0x7393bd:goto L7393bd;
case 0x7393be:c.instructions+=6;goto B7393be;
case 0x7393bf:c.instructions+=5;goto B7393bf;
case 0x7393c1:c.instructions+=4;goto B7393c1;
case 0x7393c2:c.instructions+=3;goto B7393c2;
case 0x7393c7:c.instructions+=2;goto B7393c7;
case 0x7393cc:c.instructions+=1;goto B7393cc;
case 0x7393cd:goto L7393cd;
case 0x7393d0:goto L7393d0;
case 0x7393d1:c.instructions+=11;goto B7393d1;
case 0x7393d5:c.instructions+=10;goto B7393d5;
case 0x7393d6:c.instructions+=9;goto B7393d6;
case 0x7393da:c.instructions+=8;goto B7393da;
case 0x7393db:c.instructions+=7;goto B7393db;
case 0x7393dc:c.instructions+=6;goto B7393dc;
case 0x7393e1:c.instructions+=5;goto B7393e1;
case 0x7393e2:c.instructions+=4;goto B7393e2;
case 0x7393ea:c.instructions+=3;goto B7393ea;
case 0x7393ee:c.instructions+=2;goto B7393ee;
case 0x7393f0:c.instructions+=1;goto B7393f0;
case 0x7393f5:goto L7393f5;
case 0x7393fb:c.instructions+=2;goto B7393fb;
case 0x7393fd:c.instructions+=1;goto B7393fd;
case 0x7393ff:goto L7393ff;
case 0x739405:c.instructions+=4;goto B739405;
case 0x739407:c.instructions+=3;goto B739407;
case 0x739409:c.instructions+=2;goto B739409;
case 0x73940b:c.instructions+=1;goto B73940b;
case 0x73940d:goto L73940d;
case 0x73940f:c.instructions+=2;goto B73940f;
case 0x739412:c.instructions+=1;goto B739412;
case 0x739414:goto L739414;
case 0x73941c:c.instructions+=1;goto B73941c;
case 0x739421:goto L739421;
case 0x739424:c.instructions+=6;goto B739424;
case 0x739425:c.instructions+=5;goto B739425;
case 0x739428:c.instructions+=4;goto B739428;
case 0x73942a:c.instructions+=3;goto B73942a;
case 0x73942e:c.instructions+=2;goto B73942e;
case 0x739435:c.instructions+=1;goto B739435;
case 0x739437:goto L739437;
case 0x73943d:c.instructions+=3;goto B73943d;
case 0x739443:c.instructions+=2;goto B739443;
case 0x739449:c.instructions+=1;goto B739449;
case 0x73944b:goto L73944b;
case 0x73944f:c.instructions+=6;goto B73944f;
case 0x739450:c.instructions+=5;goto B739450;
case 0x739451:c.instructions+=4;goto B739451;
case 0x739452:c.instructions+=3;goto B739452;
case 0x739453:c.instructions+=2;goto B739453;
case 0x739454:c.instructions+=1;goto B739454;
case 0x739455:goto L739455;
case 0x739456:c.instructions+=6;goto B739456;
case 0x739457:c.instructions+=5;goto B739457;
case 0x739458:c.instructions+=4;goto B739458;
case 0x73945d:c.instructions+=3;goto B73945d;
case 0x73945e:c.instructions+=2;goto B73945e;
case 0x73945f:c.instructions+=1;goto B73945f;
case 0x739540:goto L739540;
case 0x739544:c.instructions+=15;goto B739544;
case 0x73954a:c.instructions+=14;goto B73954a;
case 0x73954c:c.instructions+=13;goto B73954c;
case 0x73954f:c.instructions+=12;goto B73954f;
case 0x739550:c.instructions+=11;goto B739550;
case 0x739551:c.instructions+=10;goto B739551;
case 0x739552:c.instructions+=9;goto B739552;
case 0x739553:c.instructions+=8;goto B739553;
case 0x739559:c.instructions+=7;goto B739559;
case 0x73955f:c.instructions+=6;goto B73955f;
case 0x739562:c.instructions+=5;goto B739562;
case 0x739563:c.instructions+=4;goto B739563;
case 0x739566:c.instructions+=3;goto B739566;
case 0x739568:c.instructions+=2;goto B739568;
case 0x73956e:c.instructions+=1;goto B73956e;
case 0x739573:goto L739573;
case 0x739576:c.instructions+=2;goto B739576;
case 0x739578:c.instructions+=1;goto B739578;
case 0x73957a:goto L73957a;
case 0x73957c:c.instructions+=1;goto B73957c;
case 0x73957e:goto L73957e;
case 0x739582:c.instructions+=3;goto B739582;
case 0x739585:c.instructions+=2;goto B739585;
case 0x739588:c.instructions+=1;goto B739588;
case 0x73958c:goto L73958c;
case 0x73958e:c.instructions+=2;goto B73958e;
case 0x739590:c.instructions+=1;goto B739590;
case 0x739592:goto L739592;
case 0x739594:c.instructions+=1;goto B739594;
case 0x739596:goto L739596;
case 0x739598:c.instructions+=4;goto B739598;
case 0x73959b:c.instructions+=3;goto B73959b;
case 0x73959e:c.instructions+=2;goto B73959e;
case 0x7395a1:c.instructions+=1;goto B7395a1;
case 0x7395a5:goto L7395a5;
case 0x7395a8:c.instructions+=2;goto B7395a8;
case 0x7395aa:c.instructions+=1;goto B7395aa;
case 0x7395ac:goto L7395ac;
case 0x7395ae:c.instructions+=1;goto B7395ae;
case 0x7395b0:goto L7395b0;
case 0x7395b4:c.instructions+=3;goto B7395b4;
case 0x7395b7:c.instructions+=2;goto B7395b7;
case 0x7395ba:c.instructions+=1;goto B7395ba;
case 0x7395be:goto L7395be;
case 0x7395c1:c.instructions+=2;goto B7395c1;
case 0x7395c3:c.instructions+=1;goto B7395c3;
case 0x7395c5:goto L7395c5;
case 0x7395c7:c.instructions+=1;goto B7395c7;
case 0x7395c9:goto L7395c9;
case 0x7395cb:c.instructions+=4;goto B7395cb;
case 0x7395ce:c.instructions+=3;goto B7395ce;
case 0x7395d1:c.instructions+=2;goto B7395d1;
case 0x7395d4:c.instructions+=1;goto B7395d4;
case 0x7395d8:goto L7395d8;
case 0x7395db:c.instructions+=2;goto B7395db;
case 0x7395dd:c.instructions+=1;goto B7395dd;
case 0x7395df:goto L7395df;
case 0x7395e1:c.instructions+=1;goto B7395e1;
case 0x7395e3:goto L7395e3;
case 0x7395e7:c.instructions+=3;goto B7395e7;
case 0x7395ea:c.instructions+=2;goto B7395ea;
case 0x7395ed:c.instructions+=1;goto B7395ed;
case 0x7395f1:goto L7395f1;
case 0x7395f4:c.instructions+=2;goto B7395f4;
case 0x7395f6:c.instructions+=1;goto B7395f6;
case 0x7395f8:goto L7395f8;
case 0x7395fa:c.instructions+=1;goto B7395fa;
case 0x7395fc:goto L7395fc;
case 0x7395fe:c.instructions+=4;goto B7395fe;
case 0x739601:c.instructions+=3;goto B739601;
case 0x739604:c.instructions+=2;goto B739604;
case 0x739607:c.instructions+=1;goto B739607;
case 0x73960b:goto L73960b;
case 0x73960e:c.instructions+=2;goto B73960e;
case 0x739610:c.instructions+=1;goto B739610;
case 0x739612:goto L739612;
case 0x739614:c.instructions+=1;goto B739614;
case 0x739616:goto L739616;
case 0x73961a:c.instructions+=3;goto B73961a;
case 0x73961d:c.instructions+=2;goto B73961d;
case 0x739620:c.instructions+=1;goto B739620;
case 0x739624:goto L739624;
case 0x739627:c.instructions+=2;goto B739627;
case 0x739629:c.instructions+=1;goto B739629;
case 0x73962b:goto L73962b;
case 0x73962d:c.instructions+=1;goto B73962d;
case 0x73962f:goto L73962f;
case 0x739631:c.instructions+=4;goto B739631;
case 0x739634:c.instructions+=3;goto B739634;
case 0x739637:c.instructions+=2;goto B739637;
case 0x73963a:c.instructions+=1;goto B73963a;
case 0x73963e:goto L73963e;
case 0x739641:c.instructions+=2;goto B739641;
case 0x739642:c.instructions+=1;goto B739642;
case 0x739648:goto L739648;
case 0x73964b:c.instructions+=2;goto B73964b;
case 0x73964d:c.instructions+=1;goto B73964d;
case 0x73964f:goto L73964f;
case 0x739651:c.instructions+=4;goto B739651;
case 0x739655:c.instructions+=3;goto B739655;
case 0x739657:c.instructions+=2;goto B739657;
case 0x73965a:c.instructions+=1;goto B73965a;
case 0x73965c:goto L73965c;
case 0x73965e:goto L73965e;
case 0x739660:c.instructions+=1;goto B739660;
case 0x739663:goto L739663;
case 0x739665:goto L739665;
case 0x739666:c.instructions+=4;goto B739666;
case 0x739667:c.instructions+=3;goto B739667;
case 0x739668:c.instructions+=2;goto B739668;
case 0x739669:c.instructions+=1;goto B739669;
case 0x73966a:goto L73966a;
case 0x739670:c.instructions+=2;goto B739670;
case 0x739673:c.instructions+=1;goto B739673;
case 0x739675:goto L739675;
case 0x739678:c.instructions+=1;goto B739678;
case 0x73967a:goto L73967a;
case 0x73967c:c.instructions+=4;goto B73967c;
case 0x73967d:c.instructions+=3;goto B73967d;
case 0x73967e:c.instructions+=2;goto B73967e;
case 0x739683:c.instructions+=1;goto B739683;
case 0x739688:goto L739688;
case 0x73968b:goto L73968b;
case 0x73968c:c.instructions+=5;goto B73968c;
case 0x73968d:c.instructions+=4;goto B73968d;
case 0x73968e:c.instructions+=3;goto B73968e;
case 0x739690:c.instructions+=2;goto B739690;
case 0x739691:c.instructions+=1;goto B739691;
case 0x7396a0:goto L7396a0;
case 0x7396a6:c.instructions+=16;goto B7396a6;
case 0x7396a7:c.instructions+=15;goto B7396a7;
case 0x7396ab:c.instructions+=14;goto B7396ab;
case 0x7396b2:c.instructions+=13;goto B7396b2;
case 0x7396b4:c.instructions+=12;goto B7396b4;
case 0x7396b7:c.instructions+=11;goto B7396b7;
case 0x7396b8:c.instructions+=10;goto B7396b8;
case 0x7396b9:c.instructions+=9;goto B7396b9;
case 0x7396bf:c.instructions+=8;goto B7396bf;
case 0x7396c2:c.instructions+=7;goto B7396c2;
case 0x7396c3:c.instructions+=6;goto B7396c3;
case 0x7396c6:c.instructions+=5;goto B7396c6;
case 0x7396c8:c.instructions+=4;goto B7396c8;
case 0x7396ce:c.instructions+=3;goto B7396ce;
case 0x7396d0:c.instructions+=2;goto B7396d0;
case 0x7396d4:c.instructions+=1;goto B7396d4;
case 0x7396d6:goto L7396d6;
case 0x7396d8:c.instructions+=1;goto B7396d8;
case 0x7396da:goto L7396da;
case 0x7396dc:c.instructions+=6;goto B7396dc;
case 0x7396de:c.instructions+=5;goto B7396de;
case 0x7396df:c.instructions+=4;goto B7396df;
case 0x7396e1:c.instructions+=3;goto B7396e1;
case 0x7396e4:c.instructions+=2;goto B7396e4;
case 0x7396e7:c.instructions+=1;goto B7396e7;
case 0x7396e9:goto L7396e9;
case 0x7396eb:goto L7396eb;
case 0x7396ed:c.instructions+=1;goto B7396ed;
case 0x7396f0:goto L7396f0;
case 0x7396f2:goto L7396f2;
case 0x7396f8:c.instructions+=2;goto B7396f8;
case 0x7396fd:c.instructions+=1;goto B7396fd;
case 0x739700:goto L739700;
case 0x739702:c.instructions+=2;goto B739702;
case 0x739704:c.instructions+=1;goto B739704;
case 0x739706:goto L739706;
case 0x73970c:c.instructions+=2;goto B73970c;
case 0x73970e:c.instructions+=1;goto B73970e;
case 0x739710:goto L739710;
case 0x739714:c.instructions+=1;goto B739714;
case 0x739716:goto L739716;
case 0x739719:c.instructions+=2;goto B739719;
case 0x73971a:c.instructions+=1;goto B73971a;
case 0x73971c:goto L73971c;
case 0x73971d:c.instructions+=1;goto B73971d;
case 0x73971f:goto L73971f;
case 0x739725:c.instructions+=2;goto B739725;
case 0x739727:c.instructions+=1;goto B739727;
case 0x739729:goto L739729;
case 0x73972d:c.instructions+=3;goto B73972d;
case 0x73972e:c.instructions+=2;goto B73972e;
case 0x73972f:c.instructions+=1;goto B73972f;
case 0x739731:goto L739731;
case 0x739737:c.instructions+=1;goto B739737;
case 0x73973a:goto L73973a;
case 0x739745:c.instructions+=3;goto B739745;
case 0x739746:c.instructions+=2;goto B739746;
case 0x739749:c.instructions+=1;goto B739749;
case 0x73974b:goto L73974b;
case 0x739750:c.instructions+=3;goto B739750;
case 0x739757:c.instructions+=2;goto B739757;
case 0x739759:c.instructions+=1;goto B739759;
case 0x739760:goto L739760;
case 0x739763:c.instructions+=4;goto B739763;
case 0x739765:c.instructions+=3;goto B739765;
case 0x739768:c.instructions+=2;goto B739768;
case 0x739769:c.instructions+=1;goto B739769;
case 0x73976b:goto L73976b;
case 0x739771:c.instructions+=6;goto B739771;
case 0x739772:c.instructions+=5;goto B739772;
case 0x739773:c.instructions+=4;goto B739773;
case 0x739774:c.instructions+=3;goto B739774;
case 0x73977a:c.instructions+=2;goto B73977a;
case 0x73977b:c.instructions+=1;goto B73977b;
case 0x7397f0:goto L7397f0;
case 0x7397f4:c.instructions+=9;goto B7397f4;
case 0x7397f7:c.instructions+=8;goto B7397f7;
case 0x7397fc:c.instructions+=7;goto B7397fc;
case 0x7397ff:c.instructions+=6;goto B7397ff;
case 0x739805:c.instructions+=5;goto B739805;
case 0x739809:c.instructions+=4;goto B739809;
case 0x73980c:c.instructions+=3;goto B73980c;
case 0x73980f:c.instructions+=2;goto B73980f;
case 0x739811:c.instructions+=1;goto B739811;
case 0x739813:goto L739813;
case 0x739817:c.instructions+=6;goto B739817;
case 0x73981a:c.instructions+=5;goto B73981a;
case 0x73981d:c.instructions+=4;goto B73981d;
case 0x73981f:c.instructions+=3;goto B73981f;
case 0x739825:c.instructions+=2;goto B739825;
case 0x739827:c.instructions+=1;goto B739827;
case 0x73982a:goto L73982a;
case 0x739830:goto L739830;
case 0x739835:c.instructions+=6;goto B739835;
case 0x739838:c.instructions+=5;goto B739838;
case 0x73983b:c.instructions+=4;goto B73983b;
case 0x73983c:c.instructions+=3;goto B73983c;
case 0x73983e:c.instructions+=2;goto B73983e;
case 0x739840:c.instructions+=1;goto B739840;
case 0x739842:goto L739842;
case 0x739845:goto L739845;
case 0x739848:c.instructions+=3;goto B739848;
case 0x73984b:c.instructions+=2;goto B73984b;
case 0x73984d:c.instructions+=1;goto B73984d;
case 0x73984f:goto L73984f;
case 0x739856:goto L739856;
case 0x73985a:c.instructions+=4;goto B73985a;
case 0x73985b:c.instructions+=3;goto B73985b;
case 0x73985e:c.instructions+=2;goto B73985e;
case 0x739860:c.instructions+=1;goto B739860;
case 0x739862:goto L739862;
case 0x739863:c.instructions+=1;goto B739863;
case 0x739870:goto L739870;
case 0x739874:c.instructions+=15;goto B739874;
case 0x73987a:c.instructions+=14;goto B73987a;
case 0x73987b:c.instructions+=13;goto B73987b;
case 0x73987c:c.instructions+=12;goto B73987c;
case 0x73987d:c.instructions+=11;goto B73987d;
case 0x739884:c.instructions+=10;goto B739884;
case 0x739887:c.instructions+=9;goto B739887;
case 0x739888:c.instructions+=8;goto B739888;
case 0x73988a:c.instructions+=7;goto B73988a;
case 0x73988d:c.instructions+=6;goto B73988d;
case 0x739890:c.instructions+=5;goto B739890;
case 0x739893:c.instructions+=4;goto B739893;
case 0x739896:c.instructions+=3;goto B739896;
case 0x739898:c.instructions+=2;goto B739898;
case 0x73989a:c.instructions+=1;goto B73989a;
case 0x73989c:goto L73989c;
case 0x7398a2:c.instructions+=4;goto B7398a2;
case 0x7398a4:c.instructions+=3;goto B7398a4;
case 0x7398a7:c.instructions+=2;goto B7398a7;
case 0x7398ab:c.instructions+=1;goto B7398ab;
case 0x7398b0:goto L7398b0;
case 0x7398b2:c.instructions+=2;goto B7398b2;
case 0x7398b4:c.instructions+=1;goto B7398b4;
case 0x7398b6:goto L7398b6;
case 0x7398b8:c.instructions+=1;goto B7398b8;
case 0x7398ba:goto L7398ba;
case 0x7398bc:c.instructions+=1;goto B7398bc;
case 0x7398be:goto L7398be;
case 0x7398c0:c.instructions+=1;goto B7398c0;
case 0x7398c2:goto L7398c2;
case 0x7398c9:goto L7398c9;
case 0x7398d0:c.instructions+=1;goto B7398d0;
case 0x7398d2:goto L7398d2;
case 0x7398d5:c.instructions+=3;goto B7398d5;
case 0x7398d6:c.instructions+=2;goto B7398d6;
case 0x7398d7:c.instructions+=1;goto B7398d7;
case 0x7398dc:goto L7398dc;
case 0x7398df:c.instructions+=2;goto B7398df;
case 0x7398e1:c.instructions+=1;goto B7398e1;
case 0x7398e3:goto L7398e3;
case 0x7398e9:goto L7398e9;
case 0x7398ec:c.instructions+=16;goto B7398ec;
case 0x7398ee:c.instructions+=15;goto B7398ee;
case 0x7398f4:c.instructions+=14;goto B7398f4;
case 0x7398fa:c.instructions+=13;goto B7398fa;
case 0x7398fc:c.instructions+=12;goto B7398fc;
case 0x739902:c.instructions+=11;goto B739902;
case 0x739904:c.instructions+=10;goto B739904;
case 0x739906:c.instructions+=9;goto B739906;
case 0x739909:c.instructions+=8;goto B739909;
case 0x73990c:c.instructions+=7;goto B73990c;
case 0x73990f:c.instructions+=6;goto B73990f;
case 0x739910:c.instructions+=5;goto B739910;
case 0x739911:c.instructions+=4;goto B739911;
case 0x739914:c.instructions+=3;goto B739914;
case 0x739917:c.instructions+=2;goto B739917;
case 0x739919:c.instructions+=1;goto B739919;
case 0x73991b:goto L73991b;
case 0x73991c:c.instructions+=5;goto B73991c;
case 0x73991d:c.instructions+=4;goto B73991d;
case 0x73991f:c.instructions+=3;goto B73991f;
case 0x739920:c.instructions+=2;goto B739920;
case 0x739921:c.instructions+=1;goto B739921;
case 0x739930:goto L739930;
case 0x739935:c.instructions+=7;goto B739935;
case 0x739936:c.instructions+=6;goto B739936;
case 0x739937:c.instructions+=5;goto B739937;
case 0x739938:c.instructions+=4;goto B739938;
case 0x739939:c.instructions+=3;goto B739939;
case 0x73993b:c.instructions+=2;goto B73993b;
case 0x73993d:c.instructions+=1;goto B73993d;
case 0x739942:goto L739942;
case 0x739948:c.instructions+=1;goto B739948;
case 0x73994a:goto L73994a;
case 0x739951:c.instructions+=1;goto B739951;
case 0x739953:goto L739953;
case 0x739956:c.instructions+=2;goto B739956;
case 0x739958:c.instructions+=1;goto B739958;
case 0x73995a:goto L73995a;
case 0x73995d:c.instructions+=7;goto B73995d;
case 0x73995f:c.instructions+=6;goto B73995f;
case 0x739962:c.instructions+=5;goto B739962;
case 0x739968:c.instructions+=4;goto B739968;
case 0x73996d:c.instructions+=3;goto B73996d;
case 0x73996f:c.instructions+=2;goto B73996f;
case 0x739971:c.instructions+=1;goto B739971;
case 0x739973:goto L739973;
case 0x739978:goto L739978;
case 0x73997b:c.instructions+=2;goto B73997b;
case 0x73997d:c.instructions+=1;goto B73997d;
case 0x73997f:goto L73997f;
case 0x739981:c.instructions+=3;goto B739981;
case 0x739983:c.instructions+=2;goto B739983;
case 0x739989:c.instructions+=1;goto B739989;
case 0x73998b:goto L73998b;
case 0x739990:c.instructions+=3;goto B739990;
case 0x739991:c.instructions+=2;goto B739991;
case 0x739992:c.instructions+=1;goto B739992;
case 0x739997:goto L739997;
case 0x73999a:c.instructions+=3;goto B73999a;
case 0x73999b:c.instructions+=2;goto B73999b;
case 0x73999e:c.instructions+=1;goto B73999e;
case 0x7399a0:goto L7399a0;
case 0x7399a2:c.instructions+=1;goto B7399a2;
case 0x7399a4:goto L7399a4;
case 0x7399a5:c.instructions+=2;goto B7399a5;
case 0x7399a6:c.instructions+=1;goto B7399a6;
case 0x7399ab:goto L7399ab;
case 0x7399ae:c.instructions+=3;goto B7399ae;
case 0x7399af:c.instructions+=2;goto B7399af;
case 0x7399b2:c.instructions+=1;goto B7399b2;
case 0x7399b4:goto L7399b4;
case 0x7399b5:c.instructions+=1;goto B7399b5;
case 0x7399ba:goto L7399ba;
case 0x7399bd:c.instructions+=1;goto B7399bd;
case 0x7399bf:goto L7399bf;
case 0x7399c4:goto L7399c4;
case 0x7399c5:c.instructions+=3;goto B7399c5;
case 0x7399c8:c.instructions+=2;goto B7399c8;
case 0x7399cb:c.instructions+=1;goto B7399cb;
case 0x7399d1:goto L7399d1;
case 0x7399d2:c.instructions+=5;goto B7399d2;
case 0x7399d3:c.instructions+=4;goto B7399d3;
case 0x7399d4:c.instructions+=3;goto B7399d4;
case 0x7399d6:c.instructions+=2;goto B7399d6;
case 0x7399d7:c.instructions+=1;goto B7399d7;
case 0x7399e0:goto L7399e0;
case 0x7399e3:c.instructions+=6;goto B7399e3;
case 0x7399e8:c.instructions+=5;goto B7399e8;
case 0x7399e9:c.instructions+=4;goto B7399e9;
case 0x7399eb:c.instructions+=3;goto B7399eb;
case 0x7399ed:c.instructions+=2;goto B7399ed;
case 0x7399f1:c.instructions+=1;goto B7399f1;
case 0x7399f7:goto L7399f7;
case 0x7399fd:c.instructions+=1;goto B7399fd;
case 0x739a03:goto L739a03;
case 0x739a05:c.instructions+=1;goto B739a05;
case 0x739a0a:goto L739a0a;
case 0x739a0d:c.instructions+=2;goto B739a0d;
case 0x739a0f:c.instructions+=1;goto B739a0f;
case 0x739a15:goto L739a15;
case 0x739a16:c.instructions+=12;goto B739a16;
case 0x739a1a:c.instructions+=11;goto B739a1a;
case 0x739a1c:c.instructions+=10;goto B739a1c;
case 0x739a1d:c.instructions+=9;goto B739a1d;
case 0x739a20:c.instructions+=8;goto B739a20;
case 0x739a21:c.instructions+=7;goto B739a21;
case 0x739a24:c.instructions+=6;goto B739a24;
case 0x739a29:c.instructions+=5;goto B739a29;
case 0x739a2b:c.instructions+=4;goto B739a2b;
case 0x739a31:c.instructions+=3;goto B739a31;
case 0x739a35:c.instructions+=2;goto B739a35;
case 0x739a37:c.instructions+=1;goto B739a37;
case 0x739a40:goto L739a40;
case 0x739a46:c.instructions+=2;goto B739a46;
case 0x739a48:c.instructions+=1;goto B739a48;
case 0x739a4a:goto L739a4a;
case 0x739a50:c.instructions+=2;goto B739a50;
case 0x739a52:c.instructions+=1;goto B739a52;
case 0x739a54:goto L739a54;
case 0x739a58:c.instructions+=2;goto B739a58;
case 0x739a5d:c.instructions+=1;goto B739a5d;
case 0x739a5f:goto L739a5f;
case 0x739a64:c.instructions+=1;goto B739a64;
case 0x739a66:goto L739a66;
case 0x739a6b:c.instructions+=2;goto B739a6b;
case 0x739a6c:c.instructions+=1;goto B739a6c;
case 0x739a71:goto L739a71;
case 0x739a74:c.instructions+=2;goto B739a74;
case 0x739a76:c.instructions+=1;goto B739a76;
case 0x739a78:goto L739a78;
case 0x739a7e:c.instructions+=5;goto B739a7e;
case 0x739a81:c.instructions+=4;goto B739a81;
case 0x739a85:c.instructions+=3;goto B739a85;
case 0x739a88:c.instructions+=2;goto B739a88;
case 0x739a8a:c.instructions+=1;goto B739a8a;
case 0x739a8c:goto L739a8c;
case 0x739a8f:c.instructions+=4;goto B739a8f;
case 0x739a93:c.instructions+=3;goto B739a93;
case 0x739a96:c.instructions+=2;goto B739a96;
case 0x739a9d:c.instructions+=1;goto B739a9d;
case 0x739a9f:goto L739a9f;
case 0x739aa0:c.instructions+=1;goto B739aa0;
case 0x739aa5:goto L739aa5;
case 0x739aab:c.instructions+=3;goto B739aab;
case 0x739aac:c.instructions+=2;goto B739aac;
case 0x739aad:c.instructions+=1;goto B739aad;
case 0x739ab2:goto L739ab2;
case 0x739ab5:c.instructions+=1;goto B739ab5;
case 0x739ab9:goto L739ab9;
case 0x739abd:c.instructions+=5;goto B739abd;
case 0x739abe:c.instructions+=4;goto B739abe;
case 0x739ac4:c.instructions+=3;goto B739ac4;
case 0x739aca:c.instructions+=2;goto B739aca;
case 0x739ace:c.instructions+=1;goto B739ace;
case 0x739ad4:goto L739ad4;
case 0x739ad8:c.instructions+=1;goto B739ad8;
case 0x739ada:goto L739ada;
case 0x739adf:goto L739adf;
case 0x739ae0:c.instructions+=8;goto B739ae0;
case 0x739ae1:c.instructions+=7;goto B739ae1;
case 0x739ae3:c.instructions+=6;goto B739ae3;
case 0x739ae4:c.instructions+=5;goto B739ae4;
case 0x739aea:c.instructions+=4;goto B739aea;
case 0x739af0:c.instructions+=3;goto B739af0;
case 0x739af1:c.instructions+=2;goto B739af1;
case 0x739af4:c.instructions+=1;goto B739af4;
case 0x739af5:goto L739af5;
case 0x739afa:c.instructions+=3;goto B739afa;
case 0x739afb:c.instructions+=2;goto B739afb;
case 0x739afe:c.instructions+=1;goto B739afe;
case 0x739de0:goto L739de0;
case 0x739de4:c.instructions+=6;goto B739de4;
case 0x739de5:c.instructions+=5;goto B739de5;
case 0x739de9:c.instructions+=4;goto B739de9;
case 0x739dec:c.instructions+=3;goto B739dec;
case 0x739dee:c.instructions+=2;goto B739dee;
case 0x739df1:c.instructions+=1;goto B739df1;
case 0x739df3:goto L739df3;
case 0x739df7:c.instructions+=12;goto B739df7;
case 0x739dfa:c.instructions+=11;goto B739dfa;
case 0x739dfd:c.instructions+=10;goto B739dfd;
case 0x739e02:c.instructions+=9;goto B739e02;
case 0x739e04:c.instructions+=8;goto B739e04;
case 0x739e07:c.instructions+=7;goto B739e07;
case 0x739e09:c.instructions+=6;goto B739e09;
case 0x739e0c:c.instructions+=5;goto B739e0c;
case 0x739e0e:c.instructions+=4;goto B739e0e;
case 0x739e0f:c.instructions+=3;goto B739e0f;
case 0x739e12:c.instructions+=2;goto B739e12;
case 0x739e13:c.instructions+=1;goto B739e13;
case 0x739e18:goto L739e18;
case 0x739e1b:goto L739e1b;
case 0x739e1c:c.instructions+=1;goto B739e1c;
case 0x739e80:goto L739e80;
case 0x739e85:c.instructions+=8;goto B739e85;
case 0x739e89:c.instructions+=7;goto B739e89;
case 0x739e8a:c.instructions+=6;goto B739e8a;
case 0x739e8e:c.instructions+=5;goto B739e8e;
case 0x739e91:c.instructions+=4;goto B739e91;
case 0x739e92:c.instructions+=3;goto B739e92;
case 0x739e95:c.instructions+=2;goto B739e95;
case 0x739e98:c.instructions+=1;goto B739e98;
case 0x739e9d:goto L739e9d;
case 0x739ea0:c.instructions+=6;goto B739ea0;
case 0x739ea4:c.instructions+=5;goto B739ea4;
case 0x739ea7:c.instructions+=4;goto B739ea7;
case 0x739eaa:c.instructions+=3;goto B739eaa;
case 0x739ead:c.instructions+=2;goto B739ead;
case 0x739eae:c.instructions+=1;goto B739eae;
case 0x739eb0:goto L739eb0;
case 0x739eb5:c.instructions+=8;goto B739eb5;
case 0x739eb9:c.instructions+=7;goto B739eb9;
case 0x739eba:c.instructions+=6;goto B739eba;
case 0x739ebe:c.instructions+=5;goto B739ebe;
case 0x739ec1:c.instructions+=4;goto B739ec1;
case 0x739ec2:c.instructions+=3;goto B739ec2;
case 0x739ec5:c.instructions+=2;goto B739ec5;
case 0x739ec8:c.instructions+=1;goto B739ec8;
case 0x739ecd:goto L739ecd;
case 0x739ed0:c.instructions+=5;goto B739ed0;
case 0x739ed4:c.instructions+=4;goto B739ed4;
case 0x739ed7:c.instructions+=3;goto B739ed7;
case 0x739eda:c.instructions+=2;goto B739eda;
case 0x739edb:c.instructions+=1;goto B739edb;
case 0x739ee0:goto L739ee0;
case 0x739ee5:c.instructions+=8;goto B739ee5;
case 0x739ee9:c.instructions+=7;goto B739ee9;
case 0x739eea:c.instructions+=6;goto B739eea;
case 0x739eee:c.instructions+=5;goto B739eee;
case 0x739ef1:c.instructions+=4;goto B739ef1;
case 0x739ef2:c.instructions+=3;goto B739ef2;
case 0x739ef5:c.instructions+=2;goto B739ef5;
case 0x739ef8:c.instructions+=1;goto B739ef8;
case 0x739efd:goto L739efd;
case 0x739f00:c.instructions+=5;goto B739f00;
case 0x739f04:c.instructions+=4;goto B739f04;
case 0x739f07:c.instructions+=3;goto B739f07;
case 0x739f0a:c.instructions+=2;goto B739f0a;
case 0x739f0b:c.instructions+=1;goto B739f0b;
case 0x739f10:goto L739f10;
case 0x739f13:c.instructions+=31;goto B739f13;
case 0x739f14:c.instructions+=30;goto B739f14;
case 0x739f15:c.instructions+=29;goto B739f15;
case 0x739f19:c.instructions+=28;goto B739f19;
case 0x739f1c:c.instructions+=27;goto B739f1c;
case 0x739f1f:c.instructions+=26;goto B739f1f;
case 0x739f22:c.instructions+=25;goto B739f22;
case 0x739f26:c.instructions+=24;goto B739f26;
case 0x739f2b:c.instructions+=23;goto B739f2b;
case 0x739f2e:c.instructions+=22;goto B739f2e;
case 0x739f32:c.instructions+=21;goto B739f32;
case 0x739f36:c.instructions+=20;goto B739f36;
case 0x739f39:c.instructions+=19;goto B739f39;
case 0x739f3d:c.instructions+=18;goto B739f3d;
case 0x739f40:c.instructions+=17;goto B739f40;
case 0x739f44:c.instructions+=16;goto B739f44;
case 0x739f45:c.instructions+=15;goto B739f45;
case 0x739f49:c.instructions+=14;goto B739f49;
case 0x739f4c:c.instructions+=13;goto B739f4c;
case 0x739f50:c.instructions+=12;goto B739f50;
case 0x739f56:c.instructions+=11;goto B739f56;
case 0x739f5a:c.instructions+=10;goto B739f5a;
case 0x739f5d:c.instructions+=9;goto B739f5d;
case 0x739f61:c.instructions+=8;goto B739f61;
case 0x739f63:c.instructions+=7;goto B739f63;
case 0x739f69:c.instructions+=6;goto B739f69;
case 0x739f6b:c.instructions+=5;goto B739f6b;
case 0x739f6d:c.instructions+=4;goto B739f6d;
case 0x739f73:c.instructions+=3;goto B739f73;
case 0x739f75:c.instructions+=2;goto B739f75;
case 0x739f78:c.instructions+=1;goto B739f78;
case 0x739f7a:goto L739f7a;
case 0x739f7c:c.instructions+=1;goto B739f7c;
case 0x739f7e:goto L739f7e;
case 0x739f83:goto L739f83;
case 0x739f86:c.instructions+=10;goto B739f86;
case 0x739f89:c.instructions+=9;goto B739f89;
case 0x739f8b:c.instructions+=8;goto B739f8b;
case 0x739f90:c.instructions+=7;goto B739f90;
case 0x739f92:c.instructions+=6;goto B739f92;
case 0x739f97:c.instructions+=5;goto B739f97;
case 0x739f99:c.instructions+=4;goto B739f99;
case 0x739f9b:c.instructions+=3;goto B739f9b;
case 0x739f9f:c.instructions+=2;goto B739f9f;
case 0x739fa3:c.instructions+=1;goto B739fa3;
case 0x739fa5:goto L739fa5;
case 0x739fab:goto L739fab;
case 0x739fad:c.instructions+=5;goto B739fad;
case 0x739fb0:c.instructions+=4;goto B739fb0;
case 0x739fb2:c.instructions+=3;goto B739fb2;
case 0x739fb6:c.instructions+=2;goto B739fb6;
case 0x739fba:c.instructions+=1;goto B739fba;
case 0x739fbc:goto L739fbc;
case 0x739fc2:goto L739fc2;
case 0x739fc4:c.instructions+=5;goto B739fc4;
case 0x739fc8:c.instructions+=4;goto B739fc8;
case 0x739fce:c.instructions+=3;goto B739fce;
case 0x739fd0:c.instructions+=2;goto B739fd0;
case 0x739fd3:c.instructions+=1;goto B739fd3;
case 0x739fd5:goto L739fd5;
case 0x739fd9:c.instructions+=6;goto B739fd9;
case 0x739fdb:c.instructions+=5;goto B739fdb;
case 0x739fde:c.instructions+=4;goto B739fde;
case 0x739fe0:c.instructions+=3;goto B739fe0;
case 0x739fe1:c.instructions+=2;goto B739fe1;
case 0x739fe2:c.instructions+=1;goto B739fe2;
case 0x739fe7:goto L739fe7;
case 0x739fea:c.instructions+=6;goto B739fea;
case 0x739fed:c.instructions+=5;goto B739fed;
case 0x739ff2:c.instructions+=4;goto B739ff2;
case 0x739ff5:c.instructions+=3;goto B739ff5;
case 0x739ff8:c.instructions+=2;goto B739ff8;
case 0x739ff9:c.instructions+=1;goto B739ff9;
default:missing_instruction(c.pc);}
B739030:L739030:{c.instructions+=4;NFSU2_TR(0x739030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739031:{NFSU2_TR(0x739031);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B739036:{NFSU2_TR(0x739036);
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
B739038:{NFSU2_TR(0x739038);
if(r1(R+518)){{goto L739122;}}
}
B73903e:L73903e:{c.instructions+=3;NFSU2_TR(0x73903e);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B739043:{NFSU2_TR(0x739043);
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
B739045:{NFSU2_TR(0x739045);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L739122;}}
}
B73904b:L73904b:{c.instructions+=2;NFSU2_TR(0x73904b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73904d:{NFSU2_TR(0x73904d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739052ull));
TAIL_STATIC(0x73b620u,73b);
}
B739052:L739052:{c.instructions+=3;NFSU2_TR(0x739052);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B739055:{NFSU2_TR(0x739055);
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
B739057:{NFSU2_TR(0x739057);
if(r1(R+518)){{goto L739122;}}
}
B73905d:L73905d:{c.instructions+=2;NFSU2_TR(0x73905d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B739062:{NFSU2_TR(0x739062);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73906d;}}
}
B739064:L739064:{c.instructions+=2;NFSU2_TR(0x739064);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B739068:{NFSU2_TR(0x739068);
__builtin_memmove(gp(0x8b7bbd),(R+0),1);
}
B73906d:L73906d:{c.instructions+=7;NFSU2_TR(0x73906d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73906e:{NFSU2_TR(0x73906e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73906f:{NFSU2_TR(0x73906f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739070:{NFSU2_TR(0x739070);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739071:{NFSU2_TR(0x739071);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B739079:{NFSU2_TR(0x739079);
w4(R+12,u32(0x8b5740ull));
}
B73907e:{NFSU2_TR(0x73907e);
__builtin_memmove((R+28),(R+28),4);
}
B739080:L739080:{c.instructions+=3;NFSU2_TR(0x739080);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739083:{NFSU2_TR(0x739083);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739085:{NFSU2_TR(0x739085);
if(r1(R+518)){{goto L7390f7;}}
}
B739087:L739087:{c.instructions+=4;NFSU2_TR(0x739087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B739089:{NFSU2_TR(0x739089);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B73908d:{NFSU2_TR(0x73908d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739092:{NFSU2_TR(0x739092);
if(r1(R+518)){{goto L7390f7;}}
}
B739094:L739094:{c.instructions+=2;NFSU2_TR(0x739094);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739099:{NFSU2_TR(0x739099);
if(r1(R+518)){{goto L7390f7;}}
}
B73909b:L73909b:{c.instructions+=3;NFSU2_TR(0x73909b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7390a0:{NFSU2_TR(0x7390a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7390a1:{NFSU2_TR(0x7390a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7390a6ull));
TAIL_STATIC(0x73b620u,73b);
}
B7390a6:L7390a6:{c.instructions+=3;NFSU2_TR(0x7390a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7390a9:{NFSU2_TR(0x7390a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7390ab:{NFSU2_TR(0x7390ab);
if(r1(R+518)){{goto L7390f7;}}
}
B7390ad:L7390ad:{c.instructions+=2;NFSU2_TR(0x7390ad);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7390af:{NFSU2_TR(0x7390af);
w4(R+28,u32(0x58ull));
}
B7390b4:L7390b4:{c.instructions+=4;NFSU2_TR(0x7390b4);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B7390ba:{NFSU2_TR(0x7390ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B7390bd:{NFSU2_TR(0x7390bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7390bf:{NFSU2_TR(0x7390bf);
if(r1(R+518)){{goto L7390eb;}}
}
B7390c1:L7390c1:{c.instructions+=6;NFSU2_TR(0x7390c1);
__builtin_memmove((R+4),(R+20),4);
}
B7390c3:{NFSU2_TR(0x7390c3);
w4(R+0,u32(0x1ull));
}
B7390c8:{NFSU2_TR(0x7390c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B7390ca:{NFSU2_TR(0x7390ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7390ce:{NFSU2_TR(0x7390ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7390d0:{NFSU2_TR(0x7390d0);
if(r1(R+518)){{goto L7390eb;}}
}
B7390d2:L7390d2:{c.instructions+=5;NFSU2_TR(0x7390d2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7390d7:{NFSU2_TR(0x7390d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7390da:{NFSU2_TR(0x7390da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7390db:{NFSU2_TR(0x7390db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7390dc:{NFSU2_TR(0x7390dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7390e1ull));
TAIL_STATIC(0x46c600u,46c);
}
B7390e1:L7390e1:{c.instructions+=3;NFSU2_TR(0x7390e1);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7390e5:{NFSU2_TR(0x7390e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7390e8:{NFSU2_TR(0x7390e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7390eb:L7390eb:{c.instructions+=4;NFSU2_TR(0x7390eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7390ee:{NFSU2_TR(0x7390ee);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B7390ef:{NFSU2_TR(0x7390ef);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xb8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7390f5:{NFSU2_TR(0x7390f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7390b4u);}goto L7390b4;}}
}
B7390f7:L7390f7:{c.instructions+=6;NFSU2_TR(0x7390f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7390fb:{NFSU2_TR(0x7390fb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7390fc:{NFSU2_TR(0x7390fc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x928ull))));
}
B739102:{NFSU2_TR(0x739102);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b7be0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b7be0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B739108:{NFSU2_TR(0x739108);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73910c:{NFSU2_TR(0x73910c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739080u);}goto L739080;}}
}
B739112:L739112:{c.instructions+=7;NFSU2_TR(0x739112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B739113:{NFSU2_TR(0x739113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739114:{NFSU2_TR(0x739114);
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
B739116:{NFSU2_TR(0x739116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B739117:{NFSU2_TR(0x739117);
__builtin_memmove(gp(0x8b7bc0),(R+0),4);
}
B73911c:{NFSU2_TR(0x73911c);
__builtin_memmove(gp(0x8b7bb0),(R+0),4);
}
B739121:{NFSU2_TR(0x739121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B739122:L739122:{c.instructions+=2;NFSU2_TR(0x739122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B739123:{NFSU2_TR(0x739123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739130:L739130:{c.instructions+=7;NFSU2_TR(0x739130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B739133:{NFSU2_TR(0x739133);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B739138:{NFSU2_TR(0x739138);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73913a:{NFSU2_TR(0x73913a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73913b:{NFSU2_TR(0x73913b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73913c:{NFSU2_TR(0x73913c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B739144:{NFSU2_TR(0x739144);
if(r1(R+518)){{goto L739309;}}
}
B73914a:L73914a:{c.instructions+=4;NFSU2_TR(0x73914a);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73914f:{NFSU2_TR(0x73914f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B739151:{NFSU2_TR(0x739151);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B739153:{NFSU2_TR(0x739153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L739309;}}
}
B739159:L739159:{c.instructions+=3;NFSU2_TR(0x739159);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B73915c:{NFSU2_TR(0x73915c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73915d:{NFSU2_TR(0x73915d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739162ull));
TAIL_STATIC(0x73b620u,73b);
}
B739162:L739162:{c.instructions+=3;NFSU2_TR(0x739162);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B739165:{NFSU2_TR(0x739165);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739167:{NFSU2_TR(0x739167);
if(r1(R+518)){{goto L739309;}}
}
B73916d:L73916d:{c.instructions+=17;NFSU2_TR(0x73916d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73916e:{NFSU2_TR(0x73916e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B739172:{NFSU2_TR(0x739172);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739173:{NFSU2_TR(0x739173);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739177:{NFSU2_TR(0x739177);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739178:{NFSU2_TR(0x739178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B73917a:{NFSU2_TR(0x73917a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73917d:{NFSU2_TR(0x73917d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739180:{NFSU2_TR(0x739180);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739183:{NFSU2_TR(0x739183);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739186:{NFSU2_TR(0x739186);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739189:{NFSU2_TR(0x739189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73918c:{NFSU2_TR(0x73918c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73918f:{NFSU2_TR(0x73918f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739192:{NFSU2_TR(0x739192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739195:{NFSU2_TR(0x739195);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739198:{NFSU2_TR(0x739198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73919dull));
TAIL_STATIC(0x73b300u,73b);
}
B73919d:L73919d:{c.instructions+=4;NFSU2_TR(0x73919d);
__builtin_memmove((R+28),(R+0),4);
}
B73919f:{NFSU2_TR(0x73919f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7391a2:{NFSU2_TR(0x7391a2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7391a4:{NFSU2_TR(0x7391a4);
if(r1(R+518)){{goto L739247;}}
}
B7391aa:L7391aa:{c.instructions+=3;NFSU2_TR(0x7391aa);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xff000000ull))));
}
B7391b0:{NFSU2_TR(0x7391b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7391b1:{NFSU2_TR(0x7391b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7391b6ull));
TAIL_STATIC(0x73b680u,73b);
}
B7391b6:L7391b6:{c.instructions+=3;NFSU2_TR(0x7391b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7391b9:{NFSU2_TR(0x7391b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7391bb:{NFSU2_TR(0x7391bb);
if(r1(R+518)){{goto L739247;}}
}
B7391c1:L7391c1:{c.instructions+=8;NFSU2_TR(0x7391c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7391c4:{NFSU2_TR(0x7391c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7391c5:{NFSU2_TR(0x7391c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7391c9:{NFSU2_TR(0x7391c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7391ca:{NFSU2_TR(0x7391ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7391ce:{NFSU2_TR(0x7391ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7391cf:{NFSU2_TR(0x7391cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7391d0:{NFSU2_TR(0x7391d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7391d5ull));
TAIL_STATIC(0x46c3e0u,46c);
}
B7391d5:L7391d5:{c.instructions+=4;NFSU2_TR(0x7391d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7391d8:{NFSU2_TR(0x7391d8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7391da:{NFSU2_TR(0x7391da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7391de:{NFSU2_TR(0x7391de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L739247;}}
}
B7391e0:L7391e0:{c.instructions+=12;NFSU2_TR(0x7391e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7391e4:{NFSU2_TR(0x7391e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7391e8:{NFSU2_TR(0x7391e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B7391ec:{NFSU2_TR(0x7391ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7391ef:{NFSU2_TR(0x7391ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7391f2:{NFSU2_TR(0x7391f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7391f5:{NFSU2_TR(0x7391f5);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7391f8:{NFSU2_TR(0x7391f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7391fa:{NFSU2_TR(0x7391fa);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7391fd:{NFSU2_TR(0x7391fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739200:{NFSU2_TR(0x739200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739203:{NFSU2_TR(0x739203);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L739224;}}
}
B739205:L739205:{c.instructions+=3;NFSU2_TR(0x739205);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73920b:{NFSU2_TR(0x73920b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73920f:{NFSU2_TR(0x73920f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B739212:L739212:{c.instructions+=3;NFSU2_TR(0x739212);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B739216:{NFSU2_TR(0x739216);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B739218:{NFSU2_TR(0x739218);
if(r1(R+518)){{goto L73925f;}}
}
B73921a:L73921a:{c.instructions+=4;NFSU2_TR(0x73921a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73921b:{NFSU2_TR(0x73921b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B73921e:{NFSU2_TR(0x73921e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B739220:{NFSU2_TR(0x739220);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739212u);}goto L739212;}}
}
B739222:L739222:{c.instructions+=1;NFSU2_TR(0x739222);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B739224:L739224:{c.instructions+=3;NFSU2_TR(0x739224);
__builtin_memmove((R+0),gp(0x819b0c),4);
}
B739229:{NFSU2_TR(0x739229);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73922c:{NFSU2_TR(0x73922c);
if(r1(R+518)){{goto L739247;}}
}
B73922e:L73922e:{c.instructions+=6;NFSU2_TR(0x73922e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739232:{NFSU2_TR(0x739232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739233:{NFSU2_TR(0x739233);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0xdcull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0xdcull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xdcull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B739239:{NFSU2_TR(0x739239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73923a:{NFSU2_TR(0x73923a);
u8 U[4];
w4(U+0,u32(0x7d1f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73923f:{NFSU2_TR(0x73923f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739244ull));
TAIL_STATIC(0x73b2c0u,73b);
}
B739244:L739244:{c.instructions+=1;NFSU2_TR(0x739244);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B739247:L739247:{c.instructions+=9;NFSU2_TR(0x739247);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73924b:{NFSU2_TR(0x73924b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73924c:{NFSU2_TR(0x73924c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73924d:{NFSU2_TR(0x73924d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73924e:{NFSU2_TR(0x73924e);
__builtin_memmove(gp(0x8b7bc0),(R+20),4);
}
B739254:{NFSU2_TR(0x739254);
__builtin_memmove(gp(0x8b7bb0),(R+20),4);
}
B73925a:{NFSU2_TR(0x73925a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73925b:{NFSU2_TR(0x73925b);
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
B73925e:{NFSU2_TR(0x73925e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73925f:L73925f:{c.instructions+=21;NFSU2_TR(0x73925f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B739263:{NFSU2_TR(0x739263);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B739266:{NFSU2_TR(0x739266);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B73926a:{NFSU2_TR(0x73926a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B73926c:{NFSU2_TR(0x73926c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73926e:{NFSU2_TR(0x73926e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739271:{NFSU2_TR(0x739271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739274:{NFSU2_TR(0x739274);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B739279:{NFSU2_TR(0x739279);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73927d:{NFSU2_TR(0x73927d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739280:{NFSU2_TR(0x739280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B739282:{NFSU2_TR(0x739282);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B739286:{NFSU2_TR(0x739286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739289:{NFSU2_TR(0x739289);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73928d:{NFSU2_TR(0x73928d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B739290:{NFSU2_TR(0x739290);
__builtin_memmove((R+4),(R+28),4);
}
B739292:{NFSU2_TR(0x739292);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B739295:{NFSU2_TR(0x739295);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B739298:{NFSU2_TR(0x739298);
__builtin_memmove((R+20),(R+12),4);
}
B73929a:{NFSU2_TR(0x73929a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73929e:{NFSU2_TR(0x73929e);
if(r1(R+518)){{goto L7392cf;}}
}
B7392a0:L7392a0:{c.instructions+=11;NFSU2_TR(0x7392a0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7392a2:{NFSU2_TR(0x7392a2);
__builtin_memmove((R+0),(R+12),4);
}
B7392a4:{NFSU2_TR(0x7392a4);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392a4);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392a4);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7392a6:{NFSU2_TR(0x7392a6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7392a8:{NFSU2_TR(0x7392a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B7392ab:{NFSU2_TR(0x7392ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7392ae:{NFSU2_TR(0x7392ae);
__builtin_memmove((R+0),(R+20),4);
}
B7392b0:{NFSU2_TR(0x7392b0);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392b0);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392b0);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7392b2:{NFSU2_TR(0x7392b2);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7392b5:{NFSU2_TR(0x7392b5);
__builtin_memmove((R+20),(R+0),4);
}
B7392b7:{NFSU2_TR(0x7392b7);
if(r1(R+518)){{goto L7392cf;}}
}
B7392b9:L7392b9:{c.instructions+=9;NFSU2_TR(0x7392b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B7392bc:{NFSU2_TR(0x7392bc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7392be:{NFSU2_TR(0x7392be);
__builtin_memmove((R+0),(R+12),4);
}
B7392c0:{NFSU2_TR(0x7392c0);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392c0);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392c0);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7392c2:{NFSU2_TR(0x7392c2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7392c4:{NFSU2_TR(0x7392c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7392c7:{NFSU2_TR(0x7392c7);
__builtin_memmove((R+0),(R+12),4);
}
B7392c9:{NFSU2_TR(0x7392c9);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392c9);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392c9);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7392cb:{NFSU2_TR(0x7392cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7392cf:L7392cf:{c.instructions+=3;NFSU2_TR(0x7392cf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7392d1:{NFSU2_TR(0x7392d1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7392d3:{NFSU2_TR(0x7392d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7392e2;}}
}
B7392d5:L7392d5:{c.instructions+=5;NFSU2_TR(0x7392d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7392d9:{NFSU2_TR(0x7392d9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7392db:{NFSU2_TR(0x7392db);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392db);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392db);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7392dd:{NFSU2_TR(0x7392dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7392e0:{NFSU2_TR(0x7392e0);
{goto L7392e5;}
}
B7392e2:L7392e2:{c.instructions+=1;NFSU2_TR(0x7392e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7392e5:L7392e5:{c.instructions+=2;NFSU2_TR(0x7392e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7392e9:{NFSU2_TR(0x7392e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7392ff;}}
}
B7392eb:L7392eb:{c.instructions+=6;NFSU2_TR(0x7392eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7392ef:{NFSU2_TR(0x7392ef);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7392f1:{NFSU2_TR(0x7392f1);
u8 U[64];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392f1);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7392f1);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B7392f5:{NFSU2_TR(0x7392f5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7392f7:{NFSU2_TR(0x7392f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7392fa:{NFSU2_TR(0x7392fa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739247u);}goto L739247;}
}
B7392ff:L7392ff:{c.instructions+=3;NFSU2_TR(0x7392ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739302:{NFSU2_TR(0x739302);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B739304:{NFSU2_TR(0x739304);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739247u);}goto L739247;}
}
B739309:L739309:{c.instructions+=5;NFSU2_TR(0x739309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73930a:{NFSU2_TR(0x73930a);
w4(R+0,u32(0xffffffeeull));
}
B73930f:{NFSU2_TR(0x73930f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B739310:{NFSU2_TR(0x739310);
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
B739313:{NFSU2_TR(0x739313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739320:L739320:{c.instructions+=3;NFSU2_TR(0x739320);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B739325:{NFSU2_TR(0x739325);
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
B739327:{NFSU2_TR(0x739327);
if(r1(R+518)){{goto L7393cd;}}
}
B73932d:L73932d:{c.instructions+=3;NFSU2_TR(0x73932d);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B739332:{NFSU2_TR(0x739332);
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
B739334:{NFSU2_TR(0x739334);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7393cd;}}
}
B73933a:L73933a:{c.instructions+=2;NFSU2_TR(0x73933a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73933c:{NFSU2_TR(0x73933c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739341ull));
TAIL_STATIC(0x73b620u,73b);
}
B739341:L739341:{c.instructions+=3;NFSU2_TR(0x739341);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B739344:{NFSU2_TR(0x739344);
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
B739346:{NFSU2_TR(0x739346);
if(r1(R+518)){{goto L7393cd;}}
}
B73934c:L73934c:{c.instructions+=6;NFSU2_TR(0x73934c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73934d:{NFSU2_TR(0x73934d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73934e:{NFSU2_TR(0x73934e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73934f:{NFSU2_TR(0x73934f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739350:{NFSU2_TR(0x739350);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B739352:{NFSU2_TR(0x739352);
w4(R+20,u32(0x8b5740ull));
}
B739357:L739357:{c.instructions+=3;NFSU2_TR(0x739357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73935a:{NFSU2_TR(0x73935a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73935c:{NFSU2_TR(0x73935c);
if(r1(R+518)){{goto L7393ae;}}
}
B73935e:L73935e:{c.instructions+=4;NFSU2_TR(0x73935e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B739361:{NFSU2_TR(0x739361);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B739365:{NFSU2_TR(0x739365);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73936a:{NFSU2_TR(0x73936a);
if(r1(R+518)){{goto L7393ae;}}
}
B73936c:L73936c:{c.instructions+=2;NFSU2_TR(0x73936c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739371:{NFSU2_TR(0x739371);
if(r1(R+518)){{goto L7393ae;}}
}
B739373:L739373:{c.instructions+=2;NFSU2_TR(0x739373);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739374:{NFSU2_TR(0x739374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739379ull));
TAIL_STATIC(0x73b620u,73b);
}
B739379:L739379:{c.instructions+=3;NFSU2_TR(0x739379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73937c:{NFSU2_TR(0x73937c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73937e:{NFSU2_TR(0x73937e);
if(r1(R+518)){{goto L7393ae;}}
}
B739380:L739380:{c.instructions+=1;NFSU2_TR(0x739380);
w4(R+28,u32(0x58ull));
}
B739385:L739385:{c.instructions+=4;NFSU2_TR(0x739385);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73938a:{NFSU2_TR(0x73938a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B73938d:{NFSU2_TR(0x73938d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73938f:{NFSU2_TR(0x73938f);
if(r1(R+518)){{goto L7393a3;}}
}
B739391:L739391:{c.instructions+=3;NFSU2_TR(0x739391);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B739394:{NFSU2_TR(0x739394);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739395:{NFSU2_TR(0x739395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73939aull));
TAIL_STATIC(0x46c690u,46c);
}
B73939a:L73939a:{c.instructions+=2;NFSU2_TR(0x73939a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73939d:{NFSU2_TR(0x73939d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B7393a3:L7393a3:{c.instructions+=3;NFSU2_TR(0x7393a3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7393a6:{NFSU2_TR(0x7393a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xb8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7393ac:{NFSU2_TR(0x7393ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739385u);}goto L739385;}}
}
B7393ae:L7393ae:{c.instructions+=4;NFSU2_TR(0x7393ae);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x928ull))));
}
B7393b4:{NFSU2_TR(0x7393b4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7393b5:{NFSU2_TR(0x7393b5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8b7be0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8b7be0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7393bb:{NFSU2_TR(0x7393bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739357u);}goto L739357;}}
}
B7393bd:L7393bd:{c.instructions+=7;NFSU2_TR(0x7393bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7393be:{NFSU2_TR(0x7393be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7393bf:{NFSU2_TR(0x7393bf);
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
B7393c1:{NFSU2_TR(0x7393c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7393c2:{NFSU2_TR(0x7393c2);
__builtin_memmove(gp(0x8b7bc0),(R+0),4);
}
B7393c7:{NFSU2_TR(0x7393c7);
__builtin_memmove(gp(0x8b7bb0),(R+0),4);
}
B7393cc:{NFSU2_TR(0x7393cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7393cd:L7393cd:{c.instructions+=1;NFSU2_TR(0x7393cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7393d0:L7393d0:{c.instructions+=12;NFSU2_TR(0x7393d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7393d1:{NFSU2_TR(0x7393d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7393d5:{NFSU2_TR(0x7393d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7393d6:{NFSU2_TR(0x7393d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7393da:{NFSU2_TR(0x7393da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7393db:{NFSU2_TR(0x7393db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7393dc:{NFSU2_TR(0x7393dc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B7393e1:{NFSU2_TR(0x7393e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7393e2:{NFSU2_TR(0x7393e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7393ea:{NFSU2_TR(0x7393ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7393ee:{NFSU2_TR(0x7393ee);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7393f0:{NFSU2_TR(0x7393f0);
w4(R+24,u32(0x8b602cull));
}
B7393f5:L7393f5:{c.instructions+=3;NFSU2_TR(0x7393f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffff718ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7393fb:{NFSU2_TR(0x7393fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7393fd:{NFSU2_TR(0x7393fd);
if(r1(R+518)){{goto L739437;}}
}
B7393ff:L7393ff:{c.instructions+=5;NFSU2_TR(0x7393ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffff714ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B739405:{NFSU2_TR(0x739405);
__builtin_memmove((R+4),(R+0),4);
}
B739407:{NFSU2_TR(0x739407);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B739409:{NFSU2_TR(0x739409);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73940b:{NFSU2_TR(0x73940b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L739437;}}
}
B73940d:L73940d:{c.instructions+=3;NFSU2_TR(0x73940d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B73940f:{NFSU2_TR(0x73940f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B739412:{NFSU2_TR(0x739412);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L739455;}}
}
B739414:L739414:{c.instructions+=2;NFSU2_TR(0x739414);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73941c:{NFSU2_TR(0x73941c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739421ull));
TAIL_STATIC(0x45a460u,45a);
}
B739421:L739421:{c.instructions+=7;NFSU2_TR(0x739421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B739424:{NFSU2_TR(0x739424);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B739425:{NFSU2_TR(0x739425);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739428:{NFSU2_TR(0x739428);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B73942a:{NFSU2_TR(0x73942a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73942e:{NFSU2_TR(0x73942e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b57ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B739435:{NFSU2_TR(0x739435);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B739437:L739437:{c.instructions+=4;NFSU2_TR(0x739437);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x928ull))));
}
B73943d:{NFSU2_TR(0x73943d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x24aull))));
}
B739443:{NFSU2_TR(0x739443);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b84ccull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b84ccull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b84ccull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B739449:{NFSU2_TR(0x739449);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7393f5u);}goto L7393f5;}}
}
B73944b:L73944b:{c.instructions+=7;NFSU2_TR(0x73944b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73944f:{NFSU2_TR(0x73944f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B739450:{NFSU2_TR(0x739450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739451:{NFSU2_TR(0x739451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B739452:{NFSU2_TR(0x739452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B739453:{NFSU2_TR(0x739453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B739454:{NFSU2_TR(0x739454);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739455:L739455:{c.instructions+=7;NFSU2_TR(0x739455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B739456:{NFSU2_TR(0x739456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739457:{NFSU2_TR(0x739457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B739458:{NFSU2_TR(0x739458);
w4(R+0,u32(0xfffffff3ull));
}
B73945d:{NFSU2_TR(0x73945d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73945e:{NFSU2_TR(0x73945e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73945f:{NFSU2_TR(0x73945f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739540:L739540:{c.instructions+=16;NFSU2_TR(0x739540);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739544:{NFSU2_TR(0x739544);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73954a:{NFSU2_TR(0x73954a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73954c:{NFSU2_TR(0x73954c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73954f:{NFSU2_TR(0x73954f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739550:{NFSU2_TR(0x739550);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739551:{NFSU2_TR(0x739551);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739552:{NFSU2_TR(0x739552);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739553:{NFSU2_TR(0x739553);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B739559:{NFSU2_TR(0x739559);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((R+12),(U+0),4);
}
B73955f:{NFSU2_TR(0x73955f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B739562:{NFSU2_TR(0x739562);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B739563:{NFSU2_TR(0x739563);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B739566:{NFSU2_TR(0x739566);
__builtin_memmove((R+24),(R+4),4);
}
B739568:{NFSU2_TR(0x739568);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73956e:{NFSU2_TR(0x73956e);
w4(R+20,u32(0x2ull));
}
B739573:L739573:{c.instructions+=3;NFSU2_TR(0x739573);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739576:{NFSU2_TR(0x739576);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B739578:{NFSU2_TR(0x739578);
if(r1(R+512)){{goto L73958c;}}
}
B73957a:L73957a:{c.instructions+=2;NFSU2_TR(0x73957a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B73957c:{NFSU2_TR(0x73957c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73958c;}}
}
B73957e:L73957e:{c.instructions+=4;NFSU2_TR(0x73957e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B739582:{NFSU2_TR(0x739582);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B739585:{NFSU2_TR(0x739585);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B739588:{NFSU2_TR(0x739588);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73958c:L73958c:{c.instructions+=3;NFSU2_TR(0x73958c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73958e:{NFSU2_TR(0x73958e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B739590:{NFSU2_TR(0x739590);
if(r1(R+512)){{goto L7395a5;}}
}
B739592:L739592:{c.instructions+=2;NFSU2_TR(0x739592);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B739594:{NFSU2_TR(0x739594);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7395a5;}}
}
B739596:L739596:{c.instructions+=5;NFSU2_TR(0x739596);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B739598:{NFSU2_TR(0x739598);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73959b:{NFSU2_TR(0x73959b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73959e:{NFSU2_TR(0x73959e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7395a1:{NFSU2_TR(0x7395a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7395a5:L7395a5:{c.instructions+=3;NFSU2_TR(0x7395a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7395a8:{NFSU2_TR(0x7395a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395aa:{NFSU2_TR(0x7395aa);
if(r1(R+512)){{goto L7395be;}}
}
B7395ac:L7395ac:{c.instructions+=2;NFSU2_TR(0x7395ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395ae:{NFSU2_TR(0x7395ae);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7395be;}}
}
B7395b0:L7395b0:{c.instructions+=4;NFSU2_TR(0x7395b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7395b4:{NFSU2_TR(0x7395b4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B7395b7:{NFSU2_TR(0x7395b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7395ba:{NFSU2_TR(0x7395ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7395be:L7395be:{c.instructions+=3;NFSU2_TR(0x7395be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7395c1:{NFSU2_TR(0x7395c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395c3:{NFSU2_TR(0x7395c3);
if(r1(R+512)){{goto L7395d8;}}
}
B7395c5:L7395c5:{c.instructions+=2;NFSU2_TR(0x7395c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395c7:{NFSU2_TR(0x7395c7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7395d8;}}
}
B7395c9:L7395c9:{c.instructions+=5;NFSU2_TR(0x7395c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7395cb:{NFSU2_TR(0x7395cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7395ce:{NFSU2_TR(0x7395ce);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B7395d1:{NFSU2_TR(0x7395d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7395d4:{NFSU2_TR(0x7395d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7395d8:L7395d8:{c.instructions+=3;NFSU2_TR(0x7395d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7395db:{NFSU2_TR(0x7395db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395dd:{NFSU2_TR(0x7395dd);
if(r1(R+512)){{goto L7395f1;}}
}
B7395df:L7395df:{c.instructions+=2;NFSU2_TR(0x7395df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395e1:{NFSU2_TR(0x7395e1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7395f1;}}
}
B7395e3:L7395e3:{c.instructions+=4;NFSU2_TR(0x7395e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7395e7:{NFSU2_TR(0x7395e7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B7395ea:{NFSU2_TR(0x7395ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7395ed:{NFSU2_TR(0x7395ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7395f1:L7395f1:{c.instructions+=3;NFSU2_TR(0x7395f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7395f4:{NFSU2_TR(0x7395f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395f6:{NFSU2_TR(0x7395f6);
if(r1(R+512)){{goto L73960b;}}
}
B7395f8:L7395f8:{c.instructions+=2;NFSU2_TR(0x7395f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B7395fa:{NFSU2_TR(0x7395fa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73960b;}}
}
B7395fc:L7395fc:{c.instructions+=5;NFSU2_TR(0x7395fc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7395fe:{NFSU2_TR(0x7395fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B739601:{NFSU2_TR(0x739601);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B739604:{NFSU2_TR(0x739604);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B739607:{NFSU2_TR(0x739607);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73960b:L73960b:{c.instructions+=3;NFSU2_TR(0x73960b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73960e:{NFSU2_TR(0x73960e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B739610:{NFSU2_TR(0x739610);
if(r1(R+512)){{goto L739624;}}
}
B739612:L739612:{c.instructions+=2;NFSU2_TR(0x739612);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B739614:{NFSU2_TR(0x739614);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L739624;}}
}
B739616:L739616:{c.instructions+=4;NFSU2_TR(0x739616);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B73961a:{NFSU2_TR(0x73961a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B73961d:{NFSU2_TR(0x73961d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B739620:{NFSU2_TR(0x739620);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B739624:L739624:{c.instructions+=3;NFSU2_TR(0x739624);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739627:{NFSU2_TR(0x739627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B739629:{NFSU2_TR(0x739629);
if(r1(R+512)){{goto L73963e;}}
}
B73962b:L73962b:{c.instructions+=2;NFSU2_TR(0x73962b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B73962d:{NFSU2_TR(0x73962d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73963e;}}
}
B73962f:L73962f:{c.instructions+=5;NFSU2_TR(0x73962f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B739631:{NFSU2_TR(0x739631);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B739634:{NFSU2_TR(0x739634);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B739637:{NFSU2_TR(0x739637);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73963a:{NFSU2_TR(0x73963a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73963e:L73963e:{c.instructions+=3;NFSU2_TR(0x73963e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B739641:{NFSU2_TR(0x739641);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B739642:{NFSU2_TR(0x739642);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739573u);}goto L739573;}}
}
B739648:L739648:{c.instructions+=3;NFSU2_TR(0x739648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B73964b:{NFSU2_TR(0x73964b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B73964d:{NFSU2_TR(0x73964d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73966a;}}
}
B73964f:L73964f:{c.instructions+=5;NFSU2_TR(0x73964f);
__builtin_memmove((R+4),(R+24),4);
}
B739651:{NFSU2_TR(0x739651);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739655:{NFSU2_TR(0x739655);
__builtin_memmove((R+8),(R+4),4);
}
B739657:{NFSU2_TR(0x739657);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73965a:{NFSU2_TR(0x73965a);
__builtin_memmove((R+28),(R+0),4);
}
B73965c:L73965c:{c.instructions+=1;NFSU2_TR(0x73965c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73965e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73965cu);}goto L73965c;}
}
B73965e:L73965e:{c.instructions+=2;NFSU2_TR(0x73965e);
__builtin_memmove((R+4),(R+8),4);
}
B739660:{NFSU2_TR(0x739660);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B739663:L739663:{c.instructions+=1;NFSU2_TR(0x739663);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L739665;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739663u);}goto L739663;}
}
B739665:L739665:{c.instructions+=5;NFSU2_TR(0x739665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B739666:{NFSU2_TR(0x739666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739667:{NFSU2_TR(0x739667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B739668:{NFSU2_TR(0x739668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B739669:{NFSU2_TR(0x739669);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73966a:L73966a:{c.instructions+=3;NFSU2_TR(0x73966a);
__builtin_memmove((R+8),gp(0x819b0c),4);
}
B739670:{NFSU2_TR(0x739670);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B739673:{NFSU2_TR(0x739673);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73967a;}}
}
B739675:L739675:{c.instructions+=2;NFSU2_TR(0x739675);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B739678:{NFSU2_TR(0x739678);
if(r1(R+518)){{goto L73968b;}}
}
B73967a:L73967a:{c.instructions+=5;NFSU2_TR(0x73967a);
u8 U[6];
w1(R+512,u8((r4(R+12))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+12),r4(R+0)));
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73967c:{NFSU2_TR(0x73967c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73967d:{NFSU2_TR(0x73967d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73967e:{NFSU2_TR(0x73967e);
u8 U[4];
w4(U+0,u32(0x7d1f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739683:{NFSU2_TR(0x739683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739688ull));
TAIL_STATIC(0x73b2c0u,73b);
}
B739688:L739688:{c.instructions+=1;NFSU2_TR(0x739688);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73968b:L73968b:{c.instructions+=6;NFSU2_TR(0x73968b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73968c:{NFSU2_TR(0x73968c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73968d:{NFSU2_TR(0x73968d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73968e:{NFSU2_TR(0x73968e);
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
B739690:{NFSU2_TR(0x739690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B739691:{NFSU2_TR(0x739691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7396a0:L7396a0:{c.instructions+=17;NFSU2_TR(0x7396a0);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B7396a6:{NFSU2_TR(0x7396a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7396a7:{NFSU2_TR(0x7396a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7396ab:{NFSU2_TR(0x7396ab);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7396b2:{NFSU2_TR(0x7396b2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7396b4:{NFSU2_TR(0x7396b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7396b7:{NFSU2_TR(0x7396b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7396b8:{NFSU2_TR(0x7396b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7396b9:{NFSU2_TR(0x7396b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((R+24),(U+0),4);
}
B7396bf:{NFSU2_TR(0x7396bf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B7396c2:{NFSU2_TR(0x7396c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7396c3:{NFSU2_TR(0x7396c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7396c6:{NFSU2_TR(0x7396c6);
__builtin_memmove((R+28),(R+4),4);
}
B7396c8:{NFSU2_TR(0x7396c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B7396ce:{NFSU2_TR(0x7396ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B7396d0:{NFSU2_TR(0x7396d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7396d4:{NFSU2_TR(0x7396d4);
if(r1(R+512)){{goto L73971f;}}
}
B7396d6:L7396d6:{c.instructions+=2;NFSU2_TR(0x7396d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B7396d8:{NFSU2_TR(0x7396d8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73971f;}}
}
B7396da:L7396da:{c.instructions+=7;NFSU2_TR(0x7396da);
__builtin_memmove((R+4),(R+24),4);
}
B7396dc:{NFSU2_TR(0x7396dc);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7396de:{NFSU2_TR(0x7396de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7396df:{NFSU2_TR(0x7396df);
__builtin_memmove((R+12),(R+4),4);
}
B7396e1:{NFSU2_TR(0x7396e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7396e4:{NFSU2_TR(0x7396e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7396e7:{NFSU2_TR(0x7396e7);
__builtin_memmove((R+28),(R+0),4);
}
B7396e9:L7396e9:{c.instructions+=1;NFSU2_TR(0x7396e9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7396eb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7396e9u);}goto L7396e9;}
}
B7396eb:L7396eb:{c.instructions+=2;NFSU2_TR(0x7396eb);
__builtin_memmove((R+4),(R+12),4);
}
B7396ed:{NFSU2_TR(0x7396ed);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7396f0:L7396f0:{c.instructions+=1;NFSU2_TR(0x7396f0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7396f2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7396f0u);}goto L7396f0;}
}
B7396f2:L7396f2:{c.instructions+=3;NFSU2_TR(0x7396f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B7396f8:{NFSU2_TR(0x7396f8);
w4(R+12,u32(0x11ull));
}
B7396fd:{NFSU2_TR(0x7396fd);
__builtin_memmove((R+4),(R+4),4);
}
B739700:L739700:{c.instructions+=3;NFSU2_TR(0x739700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B739702:{NFSU2_TR(0x739702);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B739704:{NFSU2_TR(0x739704);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L739716;}}
}
B739706:L739706:{c.instructions+=3;NFSU2_TR(0x739706);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((R+28),(U+0),4);
}
B73970c:{NFSU2_TR(0x73970c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B73970e:{NFSU2_TR(0x73970e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L739716;}}
}
B739710:L739710:{c.instructions+=2;NFSU2_TR(0x739710);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B739714:{NFSU2_TR(0x739714);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B739716:L739716:{c.instructions+=3;NFSU2_TR(0x739716);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B739719:{NFSU2_TR(0x739719);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B73971a:{NFSU2_TR(0x73971a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739700u);}goto L739700;}}
}
B73971c:L73971c:{c.instructions+=2;NFSU2_TR(0x73971c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73971d:{NFSU2_TR(0x73971d);
{goto L73973a;}
}
B73971f:L73971f:{c.instructions+=3;NFSU2_TR(0x73971f);
__builtin_memmove((R+4),gp(0x8b7bb8),4);
}
B739725:{NFSU2_TR(0x739725);
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
B739727:{NFSU2_TR(0x739727);
if(r1(R+518)){{goto L73973a;}}
}
B739729:L739729:{c.instructions+=4;NFSU2_TR(0x739729);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73972d:{NFSU2_TR(0x73972d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73972e:{NFSU2_TR(0x73972e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73972f:{NFSU2_TR(0x73972f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739731ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B739731:L739731:{c.instructions+=2;NFSU2_TR(0x739731);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B739737:{NFSU2_TR(0x739737);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73973a:L73973a:{c.instructions+=4;NFSU2_TR(0x73973a);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B739745:{NFSU2_TR(0x739745);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B739746:{NFSU2_TR(0x739746);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B739749:{NFSU2_TR(0x739749);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73976b;}}
}
B73974b:L73974b:{c.instructions+=4;NFSU2_TR(0x73974b);
w4(R+4,u32(0x10ull));
}
B739750:{NFSU2_TR(0x739750);
u8 U[12];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B739757:{NFSU2_TR(0x739757);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B739759:{NFSU2_TR(0x739759);
__builtin_memmove((R+16),(R+16),4);
}
B739760:L739760:{c.instructions+=5;NFSU2_TR(0x739760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739763:{NFSU2_TR(0x739763);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B739765:{NFSU2_TR(0x739765);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B739768:{NFSU2_TR(0x739768);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B739769:{NFSU2_TR(0x739769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739760u);}goto L739760;}}
}
B73976b:L73976b:{c.instructions+=7;NFSU2_TR(0x73976b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739771:{NFSU2_TR(0x739771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B739772:{NFSU2_TR(0x739772);
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
B739773:{NFSU2_TR(0x739773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739774:{NFSU2_TR(0x739774);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73977a:{NFSU2_TR(0x73977a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73977b:{NFSU2_TR(0x73977b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7397f0:L7397f0:{c.instructions+=10;NFSU2_TR(0x7397f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7397f4:{NFSU2_TR(0x7397f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7397f7:{NFSU2_TR(0x7397f7);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B7397fc:{NFSU2_TR(0x7397fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7397ff:{NFSU2_TR(0x7397ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B739805:{NFSU2_TR(0x739805);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B739809:{NFSU2_TR(0x739809);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73980c:{NFSU2_TR(0x73980c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73980f:{NFSU2_TR(0x73980f);
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
B739811:{NFSU2_TR(0x739811);
if(r1(R+518)){{goto L73982a;}}
}
B739813:L739813:{c.instructions+=7;NFSU2_TR(0x739813);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B739817:{NFSU2_TR(0x739817);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73981a:{NFSU2_TR(0x73981a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73981d:{NFSU2_TR(0x73981d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B73981f:{NFSU2_TR(0x73981f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x20000000ull))));
}
B739825:{NFSU2_TR(0x739825);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B739827:{NFSU2_TR(0x739827);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73982a:L73982a:{c.instructions+=1;NFSU2_TR(0x73982a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739830:L739830:{c.instructions+=7;NFSU2_TR(0x739830);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B739835:{NFSU2_TR(0x739835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B739838:{NFSU2_TR(0x739838);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73983b:{NFSU2_TR(0x73983b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73983c:{NFSU2_TR(0x73983c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73983e:{NFSU2_TR(0x73983e);
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
B739840:{NFSU2_TR(0x739840);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L739862;}}
}
B739842:L739842:{c.instructions+=1;NFSU2_TR(0x739842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739845:L739845:{c.instructions+=4;NFSU2_TR(0x739845);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B739848:{NFSU2_TR(0x739848);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73984b:{NFSU2_TR(0x73984b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73984d:{NFSU2_TR(0x73984d);
if(r1(R+518)){{goto L739856;}}
}
B73984f:L73984f:{c.instructions+=1;NFSU2_TR(0x73984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xdfffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B739856:L739856:{c.instructions+=5;NFSU2_TR(0x739856);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B73985a:{NFSU2_TR(0x73985a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73985b:{NFSU2_TR(0x73985b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B73985e:{NFSU2_TR(0x73985e);
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
B739860:{NFSU2_TR(0x739860);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739845u);}goto L739845;}}
}
B739862:L739862:{c.instructions+=2;NFSU2_TR(0x739862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739863:{NFSU2_TR(0x739863);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739870:L739870:{c.instructions+=16;NFSU2_TR(0x739870);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739874:{NFSU2_TR(0x739874);
__builtin_memmove((R+4),gp(0x8b7bb0),4);
}
B73987a:{NFSU2_TR(0x73987a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73987b:{NFSU2_TR(0x73987b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73987c:{NFSU2_TR(0x73987c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73987d:{NFSU2_TR(0x73987d);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B739884:{NFSU2_TR(0x739884);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739887:{NFSU2_TR(0x739887);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739888:{NFSU2_TR(0x739888);
__builtin_memmove((R+28),(R+0),4);
}
B73988a:{NFSU2_TR(0x73988a);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B73988d:{NFSU2_TR(0x73988d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B739890:{NFSU2_TR(0x739890);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x3full))));
}
B739893:{NFSU2_TR(0x739893);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B739896:{NFSU2_TR(0x739896);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B739898:{NFSU2_TR(0x739898);
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
B73989a:{NFSU2_TR(0x73989a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73991b;}}
}
B73989c:L73989c:{c.instructions+=5;NFSU2_TR(0x73989c);
__builtin_memmove((R+4),gp(0x8b7bc4),4);
}
B7398a2:{NFSU2_TR(0x7398a2);
__builtin_memmove((R+8),(R+28),4);
}
B7398a4:{NFSU2_TR(0x7398a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7398a7:{NFSU2_TR(0x7398a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B7398ab:{NFSU2_TR(0x7398ab);
{goto L7398b0;}
}
B7398b0:L7398b0:{c.instructions+=3;NFSU2_TR(0x7398b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7398b2:{NFSU2_TR(0x7398b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7398b4:{NFSU2_TR(0x7398b4);
if(r1(R+518)){{goto L7398c9;}}
}
B7398b6:L7398b6:{c.instructions+=2;NFSU2_TR(0x7398b6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B7398b8:{NFSU2_TR(0x7398b8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7398be;}}
}
B7398ba:L7398ba:{c.instructions+=2;NFSU2_TR(0x7398ba);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7398bc:{NFSU2_TR(0x7398bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7398be:L7398be:{c.instructions+=2;NFSU2_TR(0x7398be);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B7398c0:{NFSU2_TR(0x7398c0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7398c9;}}
}
B7398c2:L7398c2:{c.instructions+=1;NFSU2_TR(0x7398c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7398c9:L7398c9:{c.instructions+=2;NFSU2_TR(0x7398c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7398d0:{NFSU2_TR(0x7398d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7398e9;}}
}
B7398d2:L7398d2:{c.instructions+=4;NFSU2_TR(0x7398d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7398d5:{NFSU2_TR(0x7398d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7398d6:{NFSU2_TR(0x7398d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7398d7:{NFSU2_TR(0x7398d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7398dcull));
TAIL_STATIC(0x73bb60u,73b);
}
B7398dc:L7398dc:{c.instructions+=3;NFSU2_TR(0x7398dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7398df:{NFSU2_TR(0x7398df);
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
B7398e1:{NFSU2_TR(0x7398e1);
if(r1(R+518)){{goto L73991b;}}
}
B7398e3:L7398e3:{c.instructions+=1;NFSU2_TR(0x7398e3);
__builtin_memmove((R+4),gp(0x8b7bc4),4);
}
B7398e9:L7398e9:{c.instructions+=17;NFSU2_TR(0x7398e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7398ec:{NFSU2_TR(0x7398ec);
__builtin_memmove((R+8),(R+0),4);
}
B7398ee:{NFSU2_TR(0x7398ee);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffc00000ull))));
}
B7398f4:{NFSU2_TR(0x7398f4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x400000ull))));
}
B7398fa:{NFSU2_TR(0x7398fa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B7398fc:{NFSU2_TR(0x7398fc);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfc00000ull))));
}
B739902:{NFSU2_TR(0x739902);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B739904:{NFSU2_TR(0x739904);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B739906:{NFSU2_TR(0x739906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739909:{NFSU2_TR(0x739909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73990c:{NFSU2_TR(0x73990c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73990f:{NFSU2_TR(0x73990f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B739910:{NFSU2_TR(0x739910);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B739911:{NFSU2_TR(0x739911);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B739914:{NFSU2_TR(0x739914);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B739917:{NFSU2_TR(0x739917);
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
B739919:{NFSU2_TR(0x739919);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7398b0u);}goto L7398b0;}}
}
B73991b:L73991b:{c.instructions+=6;NFSU2_TR(0x73991b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73991c:{NFSU2_TR(0x73991c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73991d:{NFSU2_TR(0x73991d);
__builtin_memmove((R+0),(R+20),4);
}
B73991f:{NFSU2_TR(0x73991f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B739920:{NFSU2_TR(0x739920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B739921:{NFSU2_TR(0x739921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739930:L739930:{c.instructions+=8;NFSU2_TR(0x739930);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B739935:{NFSU2_TR(0x739935);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739936:{NFSU2_TR(0x739936);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739937:{NFSU2_TR(0x739937);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739938:{NFSU2_TR(0x739938);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739939:{NFSU2_TR(0x739939);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73993b:{NFSU2_TR(0x73993b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73993d:{NFSU2_TR(0x73993d);
w4(R+28,u32(0xdcull));
}
B739942:L739942:{c.instructions+=2;NFSU2_TR(0x739942);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B739948:{NFSU2_TR(0x739948);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L739953;}}
}
B73994a:L73994a:{c.instructions+=2;NFSU2_TR(0x73994a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B739951:{NFSU2_TR(0x739951);
{goto L7399c4;}
}
B739953:L739953:{c.instructions+=3;NFSU2_TR(0x739953);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B739956:{NFSU2_TR(0x739956);
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
B739958:{NFSU2_TR(0x739958);
if(r1(R+518)){{goto L7399d1;}}
}
B73995a:L73995a:{c.instructions+=8;NFSU2_TR(0x73995a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73995d:{NFSU2_TR(0x73995d);
__builtin_memmove((R+20),(R+0),4);
}
B73995f:{NFSU2_TR(0x73995f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+0))));
}
B739962:{NFSU2_TR(0x739962);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x3f0000ull))));
}
B739968:{NFSU2_TR(0x739968);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3f0000ull))));
}
B73996d:{NFSU2_TR(0x73996d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73996f:{NFSU2_TR(0x73996f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B739971:{NFSU2_TR(0x739971);
if(r1(R+512)){{goto L739978;}}
}
B739973:L739973:{c.instructions+=1;NFSU2_TR(0x739973);
w4(R+8,u32(0x3ull));
}
B739978:L739978:{c.instructions+=3;NFSU2_TR(0x739978);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73997b:{NFSU2_TR(0x73997b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73997d:{NFSU2_TR(0x73997d);
if(r1(R+518)){{goto L7399a0;}}
}
B73997f:L73997f:{c.instructions+=4;NFSU2_TR(0x73997f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B739981:{NFSU2_TR(0x739981);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B739983:{NFSU2_TR(0x739983);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b7bc4),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B739989:{NFSU2_TR(0x739989);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7399a0;}}
}
B73998b:L73998b:{c.instructions+=4;NFSU2_TR(0x73998b);
w4(R+8,u32(0x1ull));
}
B739990:{NFSU2_TR(0x739990);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739991:{NFSU2_TR(0x739991);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739992:{NFSU2_TR(0x739992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739997ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7396a0u);}goto L7396a0;}
}
B739997:L739997:{c.instructions+=4;NFSU2_TR(0x739997);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73999a:{NFSU2_TR(0x73999a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B73999b:{NFSU2_TR(0x73999b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B73999e:{NFSU2_TR(0x73999e);
{goto L7399bf;}
}
B7399a0:L7399a0:{c.instructions+=2;NFSU2_TR(0x7399a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7399a2:{NFSU2_TR(0x7399a2);
if(r1(R+518)){{goto L7399b4;}}
}
B7399a4:L7399a4:{c.instructions+=3;NFSU2_TR(0x7399a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7399a5:{NFSU2_TR(0x7399a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7399a6:{NFSU2_TR(0x7399a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7399abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7396a0u);}goto L7396a0;}
}
B7399ab:L7399ab:{c.instructions+=4;NFSU2_TR(0x7399ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7399ae:{NFSU2_TR(0x7399ae);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B7399af:{NFSU2_TR(0x7399af);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B7399b2:{NFSU2_TR(0x7399b2);
{goto L7399bf;}
}
B7399b4:L7399b4:{c.instructions+=2;NFSU2_TR(0x7399b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7399b5:{NFSU2_TR(0x7399b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7399baull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739870u);}goto L739870;}
}
B7399ba:L7399ba:{c.instructions+=2;NFSU2_TR(0x7399ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7399bd:{NFSU2_TR(0x7399bd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B7399bf:L7399bf:{c.instructions+=1;NFSU2_TR(0x7399bf);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B7399c4:L7399c4:{c.instructions+=4;NFSU2_TR(0x7399c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7399c5:{NFSU2_TR(0x7399c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7399c8:{NFSU2_TR(0x7399c8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7399cb:{NFSU2_TR(0x7399cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739942u);}goto L739942;}}
}
B7399d1:L7399d1:{c.instructions+=6;NFSU2_TR(0x7399d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7399d2:{NFSU2_TR(0x7399d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7399d3:{NFSU2_TR(0x7399d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7399d4:{NFSU2_TR(0x7399d4);
__builtin_memmove((R+0),(R+12),4);
}
B7399d6:{NFSU2_TR(0x7399d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7399d7:{NFSU2_TR(0x7399d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7399e0:L7399e0:{c.instructions+=7;NFSU2_TR(0x7399e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B7399e3:{NFSU2_TR(0x7399e3);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B7399e8:{NFSU2_TR(0x7399e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7399e9:{NFSU2_TR(0x7399e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7399eb:{NFSU2_TR(0x7399eb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7399ed:{NFSU2_TR(0x7399ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7399f1:{NFSU2_TR(0x7399f1);
if(r1(R+518)){{goto L739af5;}}
}
B7399f7:L7399f7:{c.instructions+=2;NFSU2_TR(0x7399f7);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b7bc0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7399fd:{NFSU2_TR(0x7399fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L739af5;}}
}
B739a03:L739a03:{c.instructions+=2;NFSU2_TR(0x739a03);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739a05:{NFSU2_TR(0x739a05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739a0aull));
TAIL_STATIC(0x73b620u,73b);
}
B739a0a:L739a0a:{c.instructions+=3;NFSU2_TR(0x739a0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B739a0d:{NFSU2_TR(0x739a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739a0f:{NFSU2_TR(0x739a0f);
if(r1(R+518)){{goto L739af5;}}
}
B739a15:L739a15:{c.instructions+=13;NFSU2_TR(0x739a15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739a16:{NFSU2_TR(0x739a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B739a1a:{NFSU2_TR(0x739a1a);
__builtin_memmove((R+4),(R+20),4);
}
B739a1c:{NFSU2_TR(0x739a1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739a1d:{NFSU2_TR(0x739a1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B739a20:{NFSU2_TR(0x739a20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739a21:{NFSU2_TR(0x739a21);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B739a24:{NFSU2_TR(0x739a24);
w4(R+28,u32(0x1000000ull));
}
B739a29:{NFSU2_TR(0x739a29);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B739a2b:{NFSU2_TR(0x739a2b);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffull))));
}
B739a31:{NFSU2_TR(0x739a31);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739a35:{NFSU2_TR(0x739a35);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B739a37:{NFSU2_TR(0x739a37);
{goto L739a40;}
}
B739a40:L739a40:{c.instructions+=3;NFSU2_TR(0x739a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5744ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739a46:{NFSU2_TR(0x739a46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739a48:{NFSU2_TR(0x739a48);
if(r1(R+518)){{goto L739ab9;}}
}
B739a4a:L739a4a:{c.instructions+=3;NFSU2_TR(0x739a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739a50:{NFSU2_TR(0x739a50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739a52:{NFSU2_TR(0x739a52);
if(r1(R+518)){{goto L739ab9;}}
}
B739a54:L739a54:{c.instructions+=3;NFSU2_TR(0x739a54);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B739a58:{NFSU2_TR(0x739a58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739a5d:{NFSU2_TR(0x739a5d);
if(r1(R+518)){{goto L739ab9;}}
}
B739a5f:L739a5f:{c.instructions+=2;NFSU2_TR(0x739a5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739a64:{NFSU2_TR(0x739a64);
if(r1(R+518)){{goto L739ab9;}}
}
B739a66:L739a66:{c.instructions+=3;NFSU2_TR(0x739a66);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B739a6b:{NFSU2_TR(0x739a6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739a6c:{NFSU2_TR(0x739a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739a71ull));
TAIL_STATIC(0x73b620u,73b);
}
B739a71:L739a71:{c.instructions+=3;NFSU2_TR(0x739a71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B739a74:{NFSU2_TR(0x739a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B739a76:{NFSU2_TR(0x739a76);
if(r1(R+518)){{goto L739ab9;}}
}
B739a78:L739a78:{c.instructions+=6;NFSU2_TR(0x739a78);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B739a7e:{NFSU2_TR(0x739a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739a81:{NFSU2_TR(0x739a81);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B739a85:{NFSU2_TR(0x739a85);
w4(R+4,u32(s32(s16(r2(R+20)))));
}
B739a88:{NFSU2_TR(0x739a88);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B739a8a:{NFSU2_TR(0x739a8a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L739ada;}}
}
B739a8c:L739a8c:{c.instructions+=5;NFSU2_TR(0x739a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739a8f:{NFSU2_TR(0x739a8f);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B739a93:{NFSU2_TR(0x739a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B739a96:{NFSU2_TR(0x739a96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B739a9d:{NFSU2_TR(0x739a9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L739ab9;}}
}
B739a9f:L739a9f:{c.instructions+=2;NFSU2_TR(0x739a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739aa0:{NFSU2_TR(0x739aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739aa5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739540u);}goto L739540;}
}
B739aa5:L739aa5:{c.instructions+=4;NFSU2_TR(0x739aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739aab:{NFSU2_TR(0x739aab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739aac:{NFSU2_TR(0x739aac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739aad:{NFSU2_TR(0x739aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739ab2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7393d0u);}goto L7393d0;}
}
B739ab2:L739ab2:{c.instructions+=2;NFSU2_TR(0x739ab2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B739ab5:{NFSU2_TR(0x739ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739ab9:L739ab9:{c.instructions+=6;NFSU2_TR(0x739ab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739abd:{NFSU2_TR(0x739abd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B739abe:{NFSU2_TR(0x739abe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x928ull))));
}
B739ac4:{NFSU2_TR(0x739ac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x24a0ull))));
}
B739aca:{NFSU2_TR(0x739aca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739ace:{NFSU2_TR(0x739ace);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x739a40u);}goto L739a40;}}
}
B739ad4:L739ad4:{c.instructions+=2;NFSU2_TR(0x739ad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739ad8:{NFSU2_TR(0x739ad8);
{goto L739adf;}
}
B739ada:L739ada:{c.instructions+=1;NFSU2_TR(0x739ada);
w4(R+0,u32(0xfffffff3ull));
}
B739adf:L739adf:{c.instructions+=9;NFSU2_TR(0x739adf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B739ae0:{NFSU2_TR(0x739ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739ae1:{NFSU2_TR(0x739ae1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B739ae3:{NFSU2_TR(0x739ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B739ae4:{NFSU2_TR(0x739ae4);
__builtin_memmove(gp(0x8b7bc0),(R+4),4);
}
B739aea:{NFSU2_TR(0x739aea);
__builtin_memmove(gp(0x8b7bb0),(R+4),4);
}
B739af0:{NFSU2_TR(0x739af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B739af1:{NFSU2_TR(0x739af1);
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
B739af4:{NFSU2_TR(0x739af4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739af5:L739af5:{c.instructions+=4;NFSU2_TR(0x739af5);
w4(R+0,u32(0xffffffeeull));
}
B739afa:{NFSU2_TR(0x739afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B739afb:{NFSU2_TR(0x739afb);
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
B739afe:{NFSU2_TR(0x739afe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739de0:L739de0:{c.instructions+=7;NFSU2_TR(0x739de0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B739de4:{NFSU2_TR(0x739de4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739de5:{NFSU2_TR(0x739de5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739de9:{NFSU2_TR(0x739de9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B739dec:{NFSU2_TR(0x739dec);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B739dee:{NFSU2_TR(0x739dee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739df1:{NFSU2_TR(0x739df1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L739e1b;}}
}
B739df3:L739df3:{c.instructions+=13;NFSU2_TR(0x739df3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B739df7:{NFSU2_TR(0x739df7);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B739dfa:{NFSU2_TR(0x739dfa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B739dfd:{NFSU2_TR(0x739dfd);
w4(R+0,u32(0x51eb851full));
}
B739e02:{NFSU2_TR(0x739e02);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B739e04:{NFSU2_TR(0x739e04);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B739e07:{NFSU2_TR(0x739e07);
__builtin_memmove((R+4),(R+8),4);
}
B739e09:{NFSU2_TR(0x739e09);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B739e0c:{NFSU2_TR(0x739e0c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B739e0e:{NFSU2_TR(0x739e0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739e0f:{NFSU2_TR(0x739e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739e12:{NFSU2_TR(0x739e12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739e13:{NFSU2_TR(0x739e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739e18ull));
TAIL_STATIC(0x47b820u,47b);
}
B739e18:L739e18:{c.instructions+=1;NFSU2_TR(0x739e18);
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
B739e1b:L739e1b:{c.instructions+=2;NFSU2_TR(0x739e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739e1c:{NFSU2_TR(0x739e1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739e80:L739e80:{c.instructions+=9;NFSU2_TR(0x739e80);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B739e85:{NFSU2_TR(0x739e85);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B739e89:{NFSU2_TR(0x739e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739e8a:{NFSU2_TR(0x739e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739e8e:{NFSU2_TR(0x739e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739e91:{NFSU2_TR(0x739e91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739e92:{NFSU2_TR(0x739e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739e95:{NFSU2_TR(0x739e95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739e98:{NFSU2_TR(0x739e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739e9dull));
TAIL_STATIC(0x46c430u,46c);
}
B739e9d:L739e9d:{c.instructions+=7;NFSU2_TR(0x739e9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739ea0:{NFSU2_TR(0x739ea0);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B739ea4:{NFSU2_TR(0x739ea4);
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
B739ea7:{NFSU2_TR(0x739ea7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739eaa:{NFSU2_TR(0x739eaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739ead:{NFSU2_TR(0x739ead);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739eae:{NFSU2_TR(0x739eae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739eb0:L739eb0:{c.instructions+=9;NFSU2_TR(0x739eb0);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B739eb5:{NFSU2_TR(0x739eb5);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B739eb9:{NFSU2_TR(0x739eb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739eba:{NFSU2_TR(0x739eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739ebe:{NFSU2_TR(0x739ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739ec1:{NFSU2_TR(0x739ec1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739ec2:{NFSU2_TR(0x739ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739ec5:{NFSU2_TR(0x739ec5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739ec8:{NFSU2_TR(0x739ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739ecdull));
TAIL_STATIC(0x45a4c0u,45a);
}
B739ecd:L739ecd:{c.instructions+=6;NFSU2_TR(0x739ecd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739ed0:{NFSU2_TR(0x739ed0);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B739ed4:{NFSU2_TR(0x739ed4);
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
B739ed7:{NFSU2_TR(0x739ed7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739eda:{NFSU2_TR(0x739eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739edb:{NFSU2_TR(0x739edb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739ee0:L739ee0:{c.instructions+=9;NFSU2_TR(0x739ee0);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B739ee5:{NFSU2_TR(0x739ee5);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B739ee9:{NFSU2_TR(0x739ee9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739eea:{NFSU2_TR(0x739eea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739eee:{NFSU2_TR(0x739eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739ef1:{NFSU2_TR(0x739ef1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739ef2:{NFSU2_TR(0x739ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739ef5:{NFSU2_TR(0x739ef5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739ef8:{NFSU2_TR(0x739ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739efdull));
TAIL_STATIC(0x45a4a0u,45a);
}
B739efd:L739efd:{c.instructions+=6;NFSU2_TR(0x739efd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739f00:{NFSU2_TR(0x739f00);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B739f04:{NFSU2_TR(0x739f04);
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
B739f07:{NFSU2_TR(0x739f07);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B739f0a:{NFSU2_TR(0x739f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B739f0b:{NFSU2_TR(0x739f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B739f10:L739f10:{c.instructions+=32;NFSU2_TR(0x739f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B739f13:{NFSU2_TR(0x739f13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739f14:{NFSU2_TR(0x739f14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739f15:{NFSU2_TR(0x739f15);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B739f19:{NFSU2_TR(0x739f19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B739f1c:{NFSU2_TR(0x739f1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B739f1f:{NFSU2_TR(0x739f1f);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B739f22:{NFSU2_TR(0x739f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739f26:{NFSU2_TR(0x739f26);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B739f2b:{NFSU2_TR(0x739f2b);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B739f2e:{NFSU2_TR(0x739f2e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B739f32:{NFSU2_TR(0x739f32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739f36:{NFSU2_TR(0x739f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B739f39:{NFSU2_TR(0x739f39);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B739f3d:{NFSU2_TR(0x739f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739f40:{NFSU2_TR(0x739f40);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B739f44:{NFSU2_TR(0x739f44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739f45:{NFSU2_TR(0x739f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B739f49:{NFSU2_TR(0x739f49);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B739f4c:{NFSU2_TR(0x739f4c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B739f50:{NFSU2_TR(0x739f50);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xff80ull))));
}
B739f56:{NFSU2_TR(0x739f56);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B739f5a:{NFSU2_TR(0x739f5a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B739f5d:{NFSU2_TR(0x739f5d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B739f61:{NFSU2_TR(0x739f61);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B739f63:{NFSU2_TR(0x739f63);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B739f69:{NFSU2_TR(0x739f69);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B739f6b:{NFSU2_TR(0x739f6b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B739f6d:{NFSU2_TR(0x739f6d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B739f73:{NFSU2_TR(0x739f73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B739f75:{NFSU2_TR(0x739f75);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B739f78:{NFSU2_TR(0x739f78);
if(r1(R+514)){{goto L739f7e;}}
}
B739f7a:L739f7a:{c.instructions+=2;NFSU2_TR(0x739f7a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B739f7c:{NFSU2_TR(0x739f7c);
{goto L739f83;}
}
B739f7e:L739f7e:{c.instructions+=1;NFSU2_TR(0x739f7e);
w4(R+0,u32(0x1ull));
}
B739f83:L739f83:{c.instructions+=11;NFSU2_TR(0x739f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B739f86:{NFSU2_TR(0x739f86);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B739f89:{NFSU2_TR(0x739f89);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B739f8b:{NFSU2_TR(0x739f8b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80ull))));
}
B739f90:{NFSU2_TR(0x739f90);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B739f92:{NFSU2_TR(0x739f92);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B739f97:{NFSU2_TR(0x739f97);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B739f99:{NFSU2_TR(0x739f99);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B739f9b:{NFSU2_TR(0x739f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739f9f:{NFSU2_TR(0x739f9f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B739fa3:{NFSU2_TR(0x739fa3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L739fab;}}
}
B739fa5:L739fa5:{c.instructions+=1;NFSU2_TR(0x739fa5);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B739fab:L739fab:{c.instructions+=6;NFSU2_TR(0x739fab);
__builtin_memmove((R+0),(R+4),4);
}
B739fad:{NFSU2_TR(0x739fad);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B739fb0:{NFSU2_TR(0x739fb0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B739fb2:{NFSU2_TR(0x739fb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739fb6:{NFSU2_TR(0x739fb6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B739fba:{NFSU2_TR(0x739fba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L739fc2;}}
}
B739fbc:L739fbc:{c.instructions+=1;NFSU2_TR(0x739fbc);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B739fc2:L739fc2:{c.instructions+=6;NFSU2_TR(0x739fc2);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B739fc4:{NFSU2_TR(0x739fc4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B739fc8:{NFSU2_TR(0x739fc8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B739fce:{NFSU2_TR(0x739fce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B739fd0:{NFSU2_TR(0x739fd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B739fd3:{NFSU2_TR(0x739fd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73a009u,73a);}
}
B739fd5:L739fd5:{c.instructions+=7;NFSU2_TR(0x739fd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B739fd9:{NFSU2_TR(0x739fd9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B739fdb:{NFSU2_TR(0x739fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B739fde:{NFSU2_TR(0x739fde);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B739fe0:{NFSU2_TR(0x739fe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739fe1:{NFSU2_TR(0x739fe1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B739fe2:{NFSU2_TR(0x739fe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x739fe7ull));
TAIL_STATIC(0x47b820u,47b);
}
B739fe7:L739fe7:{c.instructions+=7;NFSU2_TR(0x739fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B739fea:{NFSU2_TR(0x739fea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B739fed:{NFSU2_TR(0x739fed);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffull))));
}
B739ff2:{NFSU2_TR(0x739ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B739ff5:{NFSU2_TR(0x739ff5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B739ff8:{NFSU2_TR(0x739ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B739ff9:{NFSU2_TR(0x739ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x73a000u,73a);
}
XIT:NFSU2_TR_EXIT(0x739,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
