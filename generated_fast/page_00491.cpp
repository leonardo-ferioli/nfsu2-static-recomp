#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_487(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_492(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x491,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x491,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_491(u8* __restrict R,Cpu& c);
u32 page_491(Cpu& c){return body_491(c.regs.data(),c);}
__attribute__((noinline)) u32 body_491(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x491005:goto L491005;
case 0x491007:c.instructions+=3;goto B491007;
case 0x491008:c.instructions+=2;goto B491008;
case 0x49100c:c.instructions+=1;goto B49100c;
case 0x491011:goto L491011;
case 0x491013:c.instructions+=13;goto B491013;
case 0x491016:c.instructions+=12;goto B491016;
case 0x491018:c.instructions+=11;goto B491018;
case 0x49101a:c.instructions+=10;goto B49101a;
case 0x49101d:c.instructions+=9;goto B49101d;
case 0x491020:c.instructions+=8;goto B491020;
case 0x491023:c.instructions+=7;goto B491023;
case 0x491026:c.instructions+=6;goto B491026;
case 0x491029:c.instructions+=5;goto B491029;
case 0x491030:c.instructions+=4;goto B491030;
case 0x491031:c.instructions+=3;goto B491031;
case 0x491035:c.instructions+=2;goto B491035;
case 0x491038:c.instructions+=1;goto B491038;
case 0x49103d:goto L49103d;
case 0x491041:c.instructions+=13;goto B491041;
case 0x491045:c.instructions+=12;goto B491045;
case 0x491048:c.instructions+=11;goto B491048;
case 0x49104a:c.instructions+=10;goto B49104a;
case 0x49104c:c.instructions+=9;goto B49104c;
case 0x491050:c.instructions+=8;goto B491050;
case 0x491053:c.instructions+=7;goto B491053;
case 0x491057:c.instructions+=6;goto B491057;
case 0x49105a:c.instructions+=5;goto B49105a;
case 0x49105d:c.instructions+=4;goto B49105d;
case 0x491064:c.instructions+=3;goto B491064;
case 0x491065:c.instructions+=2;goto B491065;
case 0x49106c:c.instructions+=1;goto B49106c;
case 0x491071:goto L491071;
case 0x491078:c.instructions+=13;goto B491078;
case 0x49107f:c.instructions+=12;goto B49107f;
case 0x491082:c.instructions+=11;goto B491082;
case 0x491084:c.instructions+=10;goto B491084;
case 0x491086:c.instructions+=9;goto B491086;
case 0x49108d:c.instructions+=8;goto B49108d;
case 0x491090:c.instructions+=7;goto B491090;
case 0x491097:c.instructions+=6;goto B491097;
case 0x49109a:c.instructions+=5;goto B49109a;
case 0x49109d:c.instructions+=4;goto B49109d;
case 0x4910a4:c.instructions+=3;goto B4910a4;
case 0x4910a5:c.instructions+=2;goto B4910a5;
case 0x4910a9:c.instructions+=1;goto B4910a9;
case 0x4910ae:goto L4910ae;
case 0x4910b6:c.instructions+=1;goto B4910b6;
case 0x4910b8:goto L4910b8;
case 0x4910bf:c.instructions+=15;goto B4910bf;
case 0x4910c3:c.instructions+=14;goto B4910c3;
case 0x4910c5:c.instructions+=13;goto B4910c5;
case 0x4910c8:c.instructions+=12;goto B4910c8;
case 0x4910cc:c.instructions+=11;goto B4910cc;
case 0x4910d0:c.instructions+=10;goto B4910d0;
case 0x4910d2:c.instructions+=9;goto B4910d2;
case 0x4910d4:c.instructions+=8;goto B4910d4;
case 0x4910d8:c.instructions+=7;goto B4910d8;
case 0x4910db:c.instructions+=6;goto B4910db;
case 0x4910df:c.instructions+=5;goto B4910df;
case 0x4910e2:c.instructions+=4;goto B4910e2;
case 0x4910e5:c.instructions+=3;goto B4910e5;
case 0x4910ec:c.instructions+=2;goto B4910ec;
case 0x4910ed:c.instructions+=1;goto B4910ed;
case 0x4910ef:goto L4910ef;
case 0x4910f6:c.instructions+=4;goto B4910f6;
case 0x4910fc:c.instructions+=3;goto B4910fc;
case 0x4910fe:c.instructions+=2;goto B4910fe;
case 0x491101:c.instructions+=1;goto B491101;
case 0x491103:goto L491103;
case 0x491107:c.instructions+=12;goto B491107;
case 0x49110a:c.instructions+=11;goto B49110a;
case 0x491112:c.instructions+=10;goto B491112;
case 0x491116:c.instructions+=9;goto B491116;
case 0x491118:c.instructions+=8;goto B491118;
case 0x49111a:c.instructions+=7;goto B49111a;
case 0x49111e:c.instructions+=6;goto B49111e;
case 0x491121:c.instructions+=5;goto B491121;
case 0x491125:c.instructions+=4;goto B491125;
case 0x491128:c.instructions+=3;goto B491128;
case 0x49112b:c.instructions+=2;goto B49112b;
case 0x491132:c.instructions+=1;goto B491132;
case 0x491133:goto L491133;
case 0x49113a:c.instructions+=1;goto B49113a;
case 0x49113f:goto L49113f;
case 0x491141:c.instructions+=20;goto B491141;
case 0x491144:c.instructions+=19;goto B491144;
case 0x491147:c.instructions+=18;goto B491147;
case 0x49114b:c.instructions+=17;goto B49114b;
case 0x49114e:c.instructions+=16;goto B49114e;
case 0x491152:c.instructions+=15;goto B491152;
case 0x491155:c.instructions+=14;goto B491155;
case 0x491159:c.instructions+=13;goto B491159;
case 0x49115c:c.instructions+=12;goto B49115c;
case 0x491160:c.instructions+=11;goto B491160;
case 0x491163:c.instructions+=10;goto B491163;
case 0x491167:c.instructions+=9;goto B491167;
case 0x49116e:c.instructions+=8;goto B49116e;
case 0x491171:c.instructions+=7;goto B491171;
case 0x491178:c.instructions+=6;goto B491178;
case 0x49117c:c.instructions+=5;goto B49117c;
case 0x49117f:c.instructions+=4;goto B49117f;
case 0x491180:c.instructions+=3;goto B491180;
case 0x491187:c.instructions+=2;goto B491187;
case 0x49118e:c.instructions+=1;goto B49118e;
case 0x491193:goto L491193;
case 0x491196:c.instructions+=15;goto B491196;
case 0x49119a:c.instructions+=14;goto B49119a;
case 0x49119e:c.instructions+=13;goto B49119e;
case 0x4911a1:c.instructions+=12;goto B4911a1;
case 0x4911a3:c.instructions+=11;goto B4911a3;
case 0x4911a5:c.instructions+=10;goto B4911a5;
case 0x4911ac:c.instructions+=9;goto B4911ac;
case 0x4911af:c.instructions+=8;goto B4911af;
case 0x4911b6:c.instructions+=7;goto B4911b6;
case 0x4911b9:c.instructions+=6;goto B4911b9;
case 0x4911bc:c.instructions+=5;goto B4911bc;
case 0x4911c3:c.instructions+=4;goto B4911c3;
case 0x4911ca:c.instructions+=3;goto B4911ca;
case 0x4911cb:c.instructions+=2;goto B4911cb;
case 0x4911d2:c.instructions+=1;goto B4911d2;
case 0x4911d7:goto L4911d7;
case 0x4911de:c.instructions+=3;goto B4911de;
case 0x4911df:c.instructions+=2;goto B4911df;
case 0x4911e6:c.instructions+=1;goto B4911e6;
case 0x4911eb:goto L4911eb;
case 0x4911ee:c.instructions+=19;goto B4911ee;
case 0x4911f2:c.instructions+=18;goto B4911f2;
case 0x4911f6:c.instructions+=17;goto B4911f6;
case 0x4911fa:c.instructions+=16;goto B4911fa;
case 0x4911fe:c.instructions+=15;goto B4911fe;
case 0x491205:c.instructions+=14;goto B491205;
case 0x491209:c.instructions+=13;goto B491209;
case 0x491210:c.instructions+=12;goto B491210;
case 0x491214:c.instructions+=11;goto B491214;
case 0x49121b:c.instructions+=10;goto B49121b;
case 0x49121f:c.instructions+=9;goto B49121f;
case 0x491226:c.instructions+=8;goto B491226;
case 0x49122a:c.instructions+=7;goto B49122a;
case 0x491231:c.instructions+=6;goto B491231;
case 0x491238:c.instructions+=5;goto B491238;
case 0x49123f:c.instructions+=4;goto B49123f;
case 0x491243:c.instructions+=3;goto B491243;
case 0x49124b:c.instructions+=2;goto B49124b;
case 0x49124f:c.instructions+=1;goto B49124f;
case 0x491250:goto L491250;
case 0x491254:c.instructions+=3;goto B491254;
case 0x491256:c.instructions+=2;goto B491256;
case 0x491258:c.instructions+=1;goto B491258;
case 0x49125e:goto L49125e;
case 0x491262:c.instructions+=1;goto B491262;
case 0x491264:goto L491264;
case 0x491266:c.instructions+=3;goto B491266;
case 0x491268:c.instructions+=2;goto B491268;
case 0x49126d:c.instructions+=1;goto B49126d;
case 0x491272:goto L491272;
case 0x491275:c.instructions+=2;goto B491275;
case 0x491277:c.instructions+=1;goto B491277;
case 0x491279:goto L491279;
case 0x49127c:c.instructions+=1;goto B49127c;
case 0x491283:goto L491283;
case 0x491285:c.instructions+=1;goto B491285;
case 0x49128b:goto L49128b;
case 0x49128e:c.instructions+=3;goto B49128e;
case 0x491293:c.instructions+=2;goto B491293;
case 0x49129b:c.instructions+=1;goto B49129b;
case 0x49129d:goto L49129d;
case 0x4912a4:c.instructions+=2;goto B4912a4;
case 0x4912a7:c.instructions+=1;goto B4912a7;
case 0x4912ac:goto L4912ac;
case 0x4912af:c.instructions+=5;goto B4912af;
case 0x4912b5:c.instructions+=4;goto B4912b5;
case 0x4912bb:c.instructions+=3;goto B4912bb;
case 0x4912bd:c.instructions+=2;goto B4912bd;
case 0x4912c0:c.instructions+=1;goto B4912c0;
case 0x4912c2:goto L4912c2;
case 0x4912cc:goto L4912cc;
case 0x4912cf:c.instructions+=8;goto B4912cf;
case 0x4912d1:c.instructions+=7;goto B4912d1;
case 0x4912d7:c.instructions+=6;goto B4912d7;
case 0x4912d9:c.instructions+=5;goto B4912d9;
case 0x4912e0:c.instructions+=4;goto B4912e0;
case 0x4912e6:c.instructions+=3;goto B4912e6;
case 0x4912e8:c.instructions+=2;goto B4912e8;
case 0x4912eb:c.instructions+=1;goto B4912eb;
case 0x4912f1:goto L4912f1;
case 0x4912f4:c.instructions+=8;goto B4912f4;
case 0x4912f5:c.instructions+=7;goto B4912f5;
case 0x4912fc:c.instructions+=6;goto B4912fc;
case 0x4912fd:c.instructions+=5;goto B4912fd;
case 0x491304:c.instructions+=4;goto B491304;
case 0x491305:c.instructions+=3;goto B491305;
case 0x491309:c.instructions+=2;goto B491309;
case 0x49130a:c.instructions+=1;goto B49130a;
case 0x49130f:goto L49130f;
case 0x491313:c.instructions+=5;goto B491313;
case 0x491316:c.instructions+=4;goto B491316;
case 0x491319:c.instructions+=3;goto B491319;
case 0x49131b:c.instructions+=2;goto B49131b;
case 0x49131e:c.instructions+=1;goto B49131e;
case 0x491320:goto L491320;
case 0x491323:c.instructions+=1;goto B491323;
case 0x491327:goto L491327;
case 0x49132b:c.instructions+=4;goto B49132b;
case 0x49132e:c.instructions+=3;goto B49132e;
case 0x491330:c.instructions+=2;goto B491330;
case 0x491333:c.instructions+=1;goto B491333;
case 0x491335:goto L491335;
case 0x491338:c.instructions+=1;goto B491338;
case 0x49133c:goto L49133c;
case 0x491343:c.instructions+=4;goto B491343;
case 0x49134a:c.instructions+=3;goto B49134a;
case 0x49134e:c.instructions+=2;goto B49134e;
case 0x491355:c.instructions+=1;goto B491355;
case 0x49135a:goto L49135a;
case 0x491360:c.instructions+=17;goto B491360;
case 0x491363:c.instructions+=16;goto B491363;
case 0x491367:c.instructions+=15;goto B491367;
case 0x49136d:c.instructions+=14;goto B49136d;
case 0x491370:c.instructions+=13;goto B491370;
case 0x491377:c.instructions+=12;goto B491377;
case 0x49137d:c.instructions+=11;goto B49137d;
case 0x491380:c.instructions+=10;goto B491380;
case 0x491387:c.instructions+=9;goto B491387;
case 0x49138d:c.instructions+=8;goto B49138d;
case 0x491390:c.instructions+=7;goto B491390;
case 0x491397:c.instructions+=6;goto B491397;
case 0x491399:c.instructions+=5;goto B491399;
case 0x4913a0:c.instructions+=4;goto B4913a0;
case 0x4913a6:c.instructions+=3;goto B4913a6;
case 0x4913a8:c.instructions+=2;goto B4913a8;
case 0x4913ab:c.instructions+=1;goto B4913ab;
case 0x4913ad:goto L4913ad;
case 0x4913b8:goto L4913b8;
case 0x4913bb:c.instructions+=2;goto B4913bb;
case 0x4913bd:c.instructions+=1;goto B4913bd;
case 0x4913c3:goto L4913c3;
case 0x4913ca:c.instructions+=4;goto B4913ca;
case 0x4913cb:c.instructions+=3;goto B4913cb;
case 0x4913d2:c.instructions+=2;goto B4913d2;
case 0x4913d3:c.instructions+=1;goto B4913d3;
case 0x4913d8:goto L4913d8;
case 0x4913db:c.instructions+=6;goto B4913db;
case 0x4913e2:c.instructions+=5;goto B4913e2;
case 0x4913e3:c.instructions+=4;goto B4913e3;
case 0x4913ea:c.instructions+=3;goto B4913ea;
case 0x4913eb:c.instructions+=2;goto B4913eb;
case 0x4913ed:c.instructions+=1;goto B4913ed;
case 0x4913f2:goto L4913f2;
case 0x4913f4:c.instructions+=1;goto B4913f4;
case 0x4913f9:goto L4913f9;
case 0x491400:c.instructions+=7;goto B491400;
case 0x491407:c.instructions+=6;goto B491407;
case 0x49140e:c.instructions+=5;goto B49140e;
case 0x491414:c.instructions+=4;goto B491414;
case 0x49141a:c.instructions+=3;goto B49141a;
case 0x491420:c.instructions+=2;goto B491420;
case 0x491421:c.instructions+=1;goto B491421;
case 0x491426:goto L491426;
case 0x49142d:c.instructions+=5;goto B49142d;
case 0x49142e:c.instructions+=4;goto B49142e;
case 0x491435:c.instructions+=3;goto B491435;
case 0x491436:c.instructions+=2;goto B491436;
case 0x491437:c.instructions+=1;goto B491437;
case 0x49143c:goto L49143c;
case 0x491443:c.instructions+=66;goto B491443;
case 0x491447:c.instructions+=65;goto B491447;
case 0x49144a:c.instructions+=64;goto B49144a;
case 0x491451:c.instructions+=63;goto B491451;
case 0x491455:c.instructions+=62;goto B491455;
case 0x491457:c.instructions+=61;goto B491457;
case 0x49145e:c.instructions+=60;goto B49145e;
case 0x491462:c.instructions+=59;goto B491462;
case 0x491464:c.instructions+=58;goto B491464;
case 0x49146b:c.instructions+=57;goto B49146b;
case 0x491472:c.instructions+=56;goto B491472;
case 0x491476:c.instructions+=55;goto B491476;
case 0x49147d:c.instructions+=54;goto B49147d;
case 0x491481:c.instructions+=53;goto B491481;
case 0x491483:c.instructions+=52;goto B491483;
case 0x49148a:c.instructions+=51;goto B49148a;
case 0x49148e:c.instructions+=50;goto B49148e;
case 0x491490:c.instructions+=49;goto B491490;
case 0x491497:c.instructions+=48;goto B491497;
case 0x49149e:c.instructions+=47;goto B49149e;
case 0x4914a2:c.instructions+=46;goto B4914a2;
case 0x4914a9:c.instructions+=45;goto B4914a9;
case 0x4914ad:c.instructions+=44;goto B4914ad;
case 0x4914af:c.instructions+=43;goto B4914af;
case 0x4914b6:c.instructions+=42;goto B4914b6;
case 0x4914ba:c.instructions+=41;goto B4914ba;
case 0x4914bc:c.instructions+=40;goto B4914bc;
case 0x4914c3:c.instructions+=39;goto B4914c3;
case 0x4914ca:c.instructions+=38;goto B4914ca;
case 0x4914d1:c.instructions+=37;goto B4914d1;
case 0x4914d3:c.instructions+=36;goto B4914d3;
case 0x4914d7:c.instructions+=35;goto B4914d7;
case 0x4914db:c.instructions+=34;goto B4914db;
case 0x4914df:c.instructions+=33;goto B4914df;
case 0x4914e6:c.instructions+=32;goto B4914e6;
case 0x4914ea:c.instructions+=31;goto B4914ea;
case 0x4914f1:c.instructions+=30;goto B4914f1;
case 0x4914f5:c.instructions+=29;goto B4914f5;
case 0x4914f7:c.instructions+=28;goto B4914f7;
case 0x4914fe:c.instructions+=27;goto B4914fe;
case 0x491502:c.instructions+=26;goto B491502;
case 0x491504:c.instructions+=25;goto B491504;
case 0x49150b:c.instructions+=24;goto B49150b;
case 0x491512:c.instructions+=23;goto B491512;
case 0x491516:c.instructions+=22;goto B491516;
case 0x49151d:c.instructions+=21;goto B49151d;
case 0x491521:c.instructions+=20;goto B491521;
case 0x491523:c.instructions+=19;goto B491523;
case 0x49152a:c.instructions+=18;goto B49152a;
case 0x49152e:c.instructions+=17;goto B49152e;
case 0x491530:c.instructions+=16;goto B491530;
case 0x491537:c.instructions+=15;goto B491537;
case 0x49153e:c.instructions+=14;goto B49153e;
case 0x491542:c.instructions+=13;goto B491542;
case 0x491549:c.instructions+=12;goto B491549;
case 0x49154d:c.instructions+=11;goto B49154d;
case 0x49154f:c.instructions+=10;goto B49154f;
case 0x491556:c.instructions+=9;goto B491556;
case 0x49155a:c.instructions+=8;goto B49155a;
case 0x49155c:c.instructions+=7;goto B49155c;
case 0x491563:c.instructions+=6;goto B491563;
case 0x49156a:c.instructions+=5;goto B49156a;
case 0x491571:c.instructions+=4;goto B491571;
case 0x491573:c.instructions+=3;goto B491573;
case 0x491577:c.instructions+=2;goto B491577;
case 0x49157b:c.instructions+=1;goto B49157b;
case 0x49157f:goto L49157f;
case 0x491586:c.instructions+=3;goto B491586;
case 0x491587:c.instructions+=2;goto B491587;
case 0x49158b:c.instructions+=1;goto B49158b;
case 0x491590:goto L491590;
case 0x491591:c.instructions+=2;goto B491591;
case 0x491595:c.instructions+=1;goto B491595;
case 0x49159a:goto L49159a;
case 0x49159e:c.instructions+=1;goto B49159e;
case 0x4915a0:goto L4915a0;
case 0x4915a3:c.instructions+=6;goto B4915a3;
case 0x4915a6:c.instructions+=5;goto B4915a6;
case 0x4915a9:c.instructions+=4;goto B4915a9;
case 0x4915af:c.instructions+=3;goto B4915af;
case 0x4915b1:c.instructions+=2;goto B4915b1;
case 0x4915b4:c.instructions+=1;goto B4915b4;
case 0x4915b6:goto L4915b6;
case 0x4915bc:c.instructions+=5;goto B4915bc;
case 0x4915bd:c.instructions+=4;goto B4915bd;
case 0x4915c3:c.instructions+=3;goto B4915c3;
case 0x4915c7:c.instructions+=2;goto B4915c7;
case 0x4915ca:c.instructions+=1;goto B4915ca;
case 0x4915cf:goto L4915cf;
case 0x4915d5:c.instructions+=1;goto B4915d5;
case 0x4915d7:goto L4915d7;
case 0x4915dd:c.instructions+=3;goto B4915dd;
case 0x4915de:c.instructions+=2;goto B4915de;
case 0x4915e2:c.instructions+=1;goto B4915e2;
case 0x4915e7:goto L4915e7;
case 0x4915ed:c.instructions+=1;goto B4915ed;
case 0x4915ef:goto L4915ef;
case 0x4915f6:goto L4915f6;
case 0x4915f9:c.instructions+=2;goto B4915f9;
case 0x4915fb:c.instructions+=1;goto B4915fb;
case 0x4915fd:goto L4915fd;
case 0x491602:goto L491602;
case 0x491604:c.instructions+=3;goto B491604;
case 0x491607:c.instructions+=2;goto B491607;
case 0x49160a:c.instructions+=1;goto B49160a;
case 0x49160c:goto L49160c;
case 0x491611:goto L491611;
case 0x491618:c.instructions+=3;goto B491618;
case 0x49161a:c.instructions+=2;goto B49161a;
case 0x49161d:c.instructions+=1;goto B49161d;
case 0x491622:goto L491622;
case 0x491629:c.instructions+=3;goto B491629;
case 0x49162b:c.instructions+=2;goto B49162b;
case 0x49162e:c.instructions+=1;goto B49162e;
case 0x491633:goto L491633;
case 0x491637:c.instructions+=3;goto B491637;
case 0x491639:c.instructions+=2;goto B491639;
case 0x49163c:c.instructions+=1;goto B49163c;
case 0x491641:goto L491641;
case 0x491645:c.instructions+=98;goto B491645;
case 0x491647:c.instructions+=97;goto B491647;
case 0x491649:c.instructions+=96;goto B491649;
case 0x491650:c.instructions+=95;goto B491650;
case 0x491657:c.instructions+=94;goto B491657;
case 0x49165e:c.instructions+=93;goto B49165e;
case 0x491662:c.instructions+=92;goto B491662;
case 0x491669:c.instructions+=91;goto B491669;
case 0x49166b:c.instructions+=90;goto B49166b;
case 0x491672:c.instructions+=89;goto B491672;
case 0x491674:c.instructions+=88;goto B491674;
case 0x491678:c.instructions+=87;goto B491678;
case 0x49167a:c.instructions+=86;goto B49167a;
case 0x49167e:c.instructions+=85;goto B49167e;
case 0x491685:c.instructions+=84;goto B491685;
case 0x491689:c.instructions+=83;goto B491689;
case 0x49168d:c.instructions+=82;goto B49168d;
case 0x49168f:c.instructions+=81;goto B49168f;
case 0x491693:c.instructions+=80;goto B491693;
case 0x491697:c.instructions+=79;goto B491697;
case 0x49169b:c.instructions+=78;goto B49169b;
case 0x49169f:c.instructions+=77;goto B49169f;
case 0x4916a3:c.instructions+=76;goto B4916a3;
case 0x4916a7:c.instructions+=75;goto B4916a7;
case 0x4916ab:c.instructions+=74;goto B4916ab;
case 0x4916ad:c.instructions+=73;goto B4916ad;
case 0x4916b1:c.instructions+=72;goto B4916b1;
case 0x4916b8:c.instructions+=71;goto B4916b8;
case 0x4916bf:c.instructions+=70;goto B4916bf;
case 0x4916c6:c.instructions+=69;goto B4916c6;
case 0x4916cd:c.instructions+=68;goto B4916cd;
case 0x4916d4:c.instructions+=67;goto B4916d4;
case 0x4916d8:c.instructions+=66;goto B4916d8;
case 0x4916dc:c.instructions+=65;goto B4916dc;
case 0x4916e0:c.instructions+=64;goto B4916e0;
case 0x4916e4:c.instructions+=63;goto B4916e4;
case 0x4916eb:c.instructions+=62;goto B4916eb;
case 0x4916ef:c.instructions+=61;goto B4916ef;
case 0x4916f3:c.instructions+=60;goto B4916f3;
case 0x4916fa:c.instructions+=59;goto B4916fa;
case 0x4916fe:c.instructions+=58;goto B4916fe;
case 0x491705:c.instructions+=57;goto B491705;
case 0x491709:c.instructions+=56;goto B491709;
case 0x491710:c.instructions+=55;goto B491710;
case 0x491714:c.instructions+=54;goto B491714;
case 0x49171b:c.instructions+=53;goto B49171b;
case 0x49171d:c.instructions+=52;goto B49171d;
case 0x491724:c.instructions+=51;goto B491724;
case 0x49172b:c.instructions+=50;goto B49172b;
case 0x491732:c.instructions+=49;goto B491732;
case 0x491739:c.instructions+=48;goto B491739;
case 0x49173d:c.instructions+=47;goto B49173d;
case 0x491741:c.instructions+=46;goto B491741;
case 0x491745:c.instructions+=45;goto B491745;
case 0x491749:c.instructions+=44;goto B491749;
case 0x491750:c.instructions+=43;goto B491750;
case 0x491754:c.instructions+=42;goto B491754;
case 0x491758:c.instructions+=41;goto B491758;
case 0x49175f:c.instructions+=40;goto B49175f;
case 0x491763:c.instructions+=39;goto B491763;
case 0x49176a:c.instructions+=38;goto B49176a;
case 0x49176e:c.instructions+=37;goto B49176e;
case 0x491775:c.instructions+=36;goto B491775;
case 0x491779:c.instructions+=35;goto B491779;
case 0x491780:c.instructions+=34;goto B491780;
case 0x491782:c.instructions+=33;goto B491782;
case 0x491789:c.instructions+=32;goto B491789;
case 0x491790:c.instructions+=31;goto B491790;
case 0x491792:c.instructions+=30;goto B491792;
case 0x491794:c.instructions+=29;goto B491794;
case 0x49179b:c.instructions+=28;goto B49179b;
case 0x4917a0:c.instructions+=27;goto B4917a0;
case 0x4917a2:c.instructions+=26;goto B4917a2;
case 0x4917a3:c.instructions+=25;goto B4917a3;
case 0x4917aa:c.instructions+=24;goto B4917aa;
case 0x4917b1:c.instructions+=23;goto B4917b1;
case 0x4917b8:c.instructions+=22;goto B4917b8;
case 0x4917bf:c.instructions+=21;goto B4917bf;
case 0x4917c6:c.instructions+=20;goto B4917c6;
case 0x4917c7:c.instructions+=19;goto B4917c7;
case 0x4917cb:c.instructions+=18;goto B4917cb;
case 0x4917cd:c.instructions+=17;goto B4917cd;
case 0x4917d4:c.instructions+=16;goto B4917d4;
case 0x4917d6:c.instructions+=15;goto B4917d6;
case 0x4917da:c.instructions+=14;goto B4917da;
case 0x4917e1:c.instructions+=13;goto B4917e1;
case 0x4917e5:c.instructions+=12;goto B4917e5;
case 0x4917ec:c.instructions+=11;goto B4917ec;
case 0x4917f0:c.instructions+=10;goto B4917f0;
case 0x4917f7:c.instructions+=9;goto B4917f7;
case 0x4917fb:c.instructions+=8;goto B4917fb;
case 0x4917fd:c.instructions+=7;goto B4917fd;
case 0x491801:c.instructions+=6;goto B491801;
case 0x491808:c.instructions+=5;goto B491808;
case 0x49180f:c.instructions+=4;goto B49180f;
case 0x491816:c.instructions+=3;goto B491816;
case 0x49181d:c.instructions+=2;goto B49181d;
case 0x491824:c.instructions+=1;goto B491824;
case 0x491829:goto L491829;
case 0x49182d:c.instructions+=6;goto B49182d;
case 0x491831:c.instructions+=5;goto B491831;
case 0x491834:c.instructions+=4;goto B491834;
case 0x491835:c.instructions+=3;goto B491835;
case 0x491839:c.instructions+=2;goto B491839;
case 0x49183d:c.instructions+=1;goto B49183d;
case 0x491843:goto L491843;
case 0x49184a:c.instructions+=8;goto B49184a;
case 0x49184b:c.instructions+=7;goto B49184b;
case 0x49184c:c.instructions+=6;goto B49184c;
case 0x491851:c.instructions+=5;goto B491851;
case 0x491858:c.instructions+=4;goto B491858;
case 0x491859:c.instructions+=3;goto B491859;
case 0x49185b:c.instructions+=2;goto B49185b;
case 0x49185c:c.instructions+=1;goto B49185c;
case 0x491860:goto L491860;
case 0x491861:c.instructions+=5;goto B491861;
case 0x491863:c.instructions+=4;goto B491863;
case 0x491866:c.instructions+=3;goto B491866;
case 0x49186b:c.instructions+=2;goto B49186b;
case 0x49186d:c.instructions+=1;goto B49186d;
case 0x491873:goto L491873;
case 0x49187a:c.instructions+=1;goto B49187a;
case 0x491880:goto L491880;
case 0x491881:c.instructions+=7;goto B491881;
case 0x491884:c.instructions+=6;goto B491884;
case 0x491887:c.instructions+=5;goto B491887;
case 0x491888:c.instructions+=4;goto B491888;
case 0x49188b:c.instructions+=3;goto B49188b;
case 0x49188c:c.instructions+=2;goto B49188c;
case 0x491891:c.instructions+=1;goto B491891;
case 0x491896:goto L491896;
case 0x491898:c.instructions+=3;goto B491898;
case 0x49189a:c.instructions+=2;goto B49189a;
case 0x49189d:c.instructions+=1;goto B49189d;
case 0x4918a3:goto L4918a3;
case 0x4918a6:c.instructions+=3;goto B4918a6;
case 0x4918a8:c.instructions+=2;goto B4918a8;
case 0x4918af:c.instructions+=1;goto B4918af;
case 0x4918b5:goto L4918b5;
case 0x4918b8:c.instructions+=3;goto B4918b8;
case 0x4918bb:c.instructions+=2;goto B4918bb;
case 0x4918bc:c.instructions+=1;goto B4918bc;
case 0x4918c0:goto L4918c0;
case 0x4918c3:c.instructions+=4;goto B4918c3;
case 0x4918c6:c.instructions+=3;goto B4918c6;
case 0x4918cd:c.instructions+=2;goto B4918cd;
case 0x4918cf:c.instructions+=1;goto B4918cf;
case 0x4918d1:goto L4918d1;
case 0x4918d4:c.instructions+=2;goto B4918d4;
case 0x4918d6:c.instructions+=1;goto B4918d6;
case 0x4918d8:goto L4918d8;
case 0x4918da:c.instructions+=6;goto B4918da;
case 0x4918dd:c.instructions+=5;goto B4918dd;
case 0x4918de:c.instructions+=4;goto B4918de;
case 0x4918e1:c.instructions+=3;goto B4918e1;
case 0x4918e2:c.instructions+=2;goto B4918e2;
case 0x4918e4:c.instructions+=1;goto B4918e4;
case 0x4918e9:goto L4918e9;
case 0x4918eb:c.instructions+=1;goto B4918eb;
case 0x4918ed:goto L4918ed;
case 0x4918f0:c.instructions+=3;goto B4918f0;
case 0x4918f2:c.instructions+=2;goto B4918f2;
case 0x4918f4:c.instructions+=1;goto B4918f4;
case 0x4918f6:goto L4918f6;
case 0x4918f9:c.instructions+=9;goto B4918f9;
case 0x4918fb:c.instructions+=8;goto B4918fb;
case 0x4918fd:c.instructions+=7;goto B4918fd;
case 0x4918fe:c.instructions+=6;goto B4918fe;
case 0x491900:c.instructions+=5;goto B491900;
case 0x491905:c.instructions+=4;goto B491905;
case 0x49190a:c.instructions+=3;goto B49190a;
case 0x49190b:c.instructions+=2;goto B49190b;
case 0x49190c:c.instructions+=1;goto B49190c;
case 0x491911:goto L491911;
case 0x491913:c.instructions+=3;goto B491913;
case 0x491916:c.instructions+=2;goto B491916;
case 0x491918:c.instructions+=1;goto B491918;
case 0x49191a:goto L49191a;
case 0x49191d:goto L49191d;
case 0x491920:c.instructions+=8;goto B491920;
case 0x491923:c.instructions+=7;goto B491923;
case 0x491926:c.instructions+=6;goto B491926;
case 0x491927:c.instructions+=5;goto B491927;
case 0x49192a:c.instructions+=4;goto B49192a;
case 0x49192c:c.instructions+=3;goto B49192c;
case 0x49192f:c.instructions+=2;goto B49192f;
case 0x491932:c.instructions+=1;goto B491932;
case 0x491934:goto L491934;
case 0x491935:goto L491935;
case 0x491936:c.instructions+=1;goto B491936;
case 0x491937:goto L491937;
case 0x491939:c.instructions+=2;goto B491939;
case 0x49193a:c.instructions+=1;goto B49193a;
case 0x491940:goto L491940;
case 0x491942:c.instructions+=15;goto B491942;
case 0x491947:c.instructions+=14;goto B491947;
case 0x49194d:c.instructions+=13;goto B49194d;
case 0x49194e:c.instructions+=12;goto B49194e;
case 0x491955:c.instructions+=11;goto B491955;
case 0x491956:c.instructions+=10;goto B491956;
case 0x491957:c.instructions+=9;goto B491957;
case 0x491959:c.instructions+=8;goto B491959;
case 0x49195c:c.instructions+=7;goto B49195c;
case 0x49195d:c.instructions+=6;goto B49195d;
case 0x491961:c.instructions+=5;goto B491961;
case 0x491963:c.instructions+=4;goto B491963;
case 0x491966:c.instructions+=3;goto B491966;
case 0x491968:c.instructions+=2;goto B491968;
case 0x49196d:c.instructions+=1;goto B49196d;
case 0x49196f:goto L49196f;
case 0x491971:goto L491971;
case 0x491973:c.instructions+=15;goto B491973;
case 0x491976:c.instructions+=14;goto B491976;
case 0x491978:c.instructions+=13;goto B491978;
case 0x49197e:c.instructions+=12;goto B49197e;
case 0x491983:c.instructions+=11;goto B491983;
case 0x491985:c.instructions+=10;goto B491985;
case 0x491987:c.instructions+=9;goto B491987;
case 0x49198a:c.instructions+=8;goto B49198a;
case 0x49198c:c.instructions+=7;goto B49198c;
case 0x49198f:c.instructions+=6;goto B49198f;
case 0x491991:c.instructions+=5;goto B491991;
case 0x491992:c.instructions+=4;goto B491992;
case 0x49199a:c.instructions+=3;goto B49199a;
case 0x4919a1:c.instructions+=2;goto B4919a1;
case 0x4919a4:c.instructions+=1;goto B4919a4;
case 0x4919a9:goto L4919a9;
case 0x4919ad:c.instructions+=10;goto B4919ad;
case 0x4919b0:c.instructions+=9;goto B4919b0;
case 0x4919b2:c.instructions+=8;goto B4919b2;
case 0x4919b9:c.instructions+=7;goto B4919b9;
case 0x4919c0:c.instructions+=6;goto B4919c0;
case 0x4919c1:c.instructions+=5;goto B4919c1;
case 0x4919c3:c.instructions+=4;goto B4919c3;
case 0x4919c4:c.instructions+=3;goto B4919c4;
case 0x4919cb:c.instructions+=2;goto B4919cb;
case 0x4919ce:c.instructions+=1;goto B4919ce;
case 0x4919d0:goto L4919d0;
case 0x4919d3:c.instructions+=1;goto B4919d3;
case 0x4919e0:goto L4919e0;
case 0x4919e4:c.instructions+=6;goto B4919e4;
case 0x4919e5:c.instructions+=5;goto B4919e5;
case 0x4919e7:c.instructions+=4;goto B4919e7;
case 0x4919e9:c.instructions+=3;goto B4919e9;
case 0x4919ea:c.instructions+=2;goto B4919ea;
case 0x4919ec:c.instructions+=1;goto B4919ec;
case 0x4919ee:goto L4919ee;
case 0x4919ef:c.instructions+=4;goto B4919ef;
case 0x4919f3:c.instructions+=3;goto B4919f3;
case 0x4919f4:c.instructions+=2;goto B4919f4;
case 0x4919f8:c.instructions+=1;goto B4919f8;
case 0x491a00:goto L491a00;
case 0x491a03:c.instructions+=7;goto B491a03;
case 0x491a06:c.instructions+=6;goto B491a06;
case 0x491a09:c.instructions+=5;goto B491a09;
case 0x491a0a:c.instructions+=4;goto B491a0a;
case 0x491a0b:c.instructions+=3;goto B491a0b;
case 0x491a0c:c.instructions+=2;goto B491a0c;
case 0x491a0e:c.instructions+=1;goto B491a0e;
case 0x491a13:goto L491a13;
case 0x491a17:c.instructions+=5;goto B491a17;
case 0x491a18:c.instructions+=4;goto B491a18;
case 0x491a1b:c.instructions+=3;goto B491a1b;
case 0x491a1e:c.instructions+=2;goto B491a1e;
case 0x491a20:c.instructions+=1;goto B491a20;
case 0x491a22:goto L491a22;
case 0x491a23:c.instructions+=1;goto B491a23;
case 0x491a24:goto L491a24;
case 0x491a25:c.instructions+=2;goto B491a25;
case 0x491a26:c.instructions+=1;goto B491a26;
case 0x491a30:goto L491a30;
case 0x491a34:c.instructions+=8;goto B491a34;
case 0x491a35:c.instructions+=7;goto B491a35;
case 0x491a36:c.instructions+=6;goto B491a36;
case 0x491a37:c.instructions+=5;goto B491a37;
case 0x491a39:c.instructions+=4;goto B491a39;
case 0x491a3b:c.instructions+=3;goto B491a3b;
case 0x491a3d:c.instructions+=2;goto B491a3d;
case 0x491a3f:c.instructions+=1;goto B491a3f;
case 0x491a41:goto L491a41;
case 0x491a42:c.instructions+=3;goto B491a42;
case 0x491a46:c.instructions+=2;goto B491a46;
case 0x491a49:c.instructions+=1;goto B491a49;
case 0x491a50:goto L491a50;
case 0x491a53:c.instructions+=4;goto B491a53;
case 0x491a56:c.instructions+=3;goto B491a56;
case 0x491a59:c.instructions+=2;goto B491a59;
case 0x491a5b:c.instructions+=1;goto B491a5b;
case 0x491a5d:goto L491a5d;
case 0x491a5f:c.instructions+=1;goto B491a5f;
case 0x491a61:goto L491a61;
case 0x491a63:c.instructions+=1;goto B491a63;
case 0x491a65:goto L491a65;
case 0x491a68:c.instructions+=7;goto B491a68;
case 0x491a6a:c.instructions+=6;goto B491a6a;
case 0x491a6b:c.instructions+=5;goto B491a6b;
case 0x491a6c:c.instructions+=4;goto B491a6c;
case 0x491a6d:c.instructions+=3;goto B491a6d;
case 0x491a6f:c.instructions+=2;goto B491a6f;
case 0x491a70:c.instructions+=1;goto B491a70;
case 0x491a75:goto L491a75;
case 0x491a78:c.instructions+=2;goto B491a78;
case 0x491a7a:c.instructions+=1;goto B491a7a;
case 0x491a7c:goto L491a7c;
case 0x491a7f:c.instructions+=7;goto B491a7f;
case 0x491a81:c.instructions+=6;goto B491a81;
case 0x491a87:c.instructions+=5;goto B491a87;
case 0x491a8c:c.instructions+=4;goto B491a8c;
case 0x491a8d:c.instructions+=3;goto B491a8d;
case 0x491a92:c.instructions+=2;goto B491a92;
case 0x491a98:c.instructions+=1;goto B491a98;
case 0x491a9a:goto L491a9a;
case 0x491a9f:c.instructions+=3;goto B491a9f;
case 0x491aa2:c.instructions+=2;goto B491aa2;
case 0x491aa4:c.instructions+=1;goto B491aa4;
case 0x491aa6:goto L491aa6;
case 0x491aac:goto L491aac;
case 0x491ab0:c.instructions+=4;goto B491ab0;
case 0x491ab1:c.instructions+=3;goto B491ab1;
case 0x491ab4:c.instructions+=2;goto B491ab4;
case 0x491ab6:c.instructions+=1;goto B491ab6;
case 0x491ab8:goto L491ab8;
case 0x491ab9:goto L491ab9;
case 0x491aba:c.instructions+=3;goto B491aba;
case 0x491abb:c.instructions+=2;goto B491abb;
case 0x491abc:c.instructions+=1;goto B491abc;
case 0x491ac0:goto L491ac0;
case 0x491ac1:c.instructions+=4;goto B491ac1;
case 0x491ac3:c.instructions+=3;goto B491ac3;
case 0x491ac5:c.instructions+=2;goto B491ac5;
case 0x491ac7:c.instructions+=1;goto B491ac7;
case 0x491ac9:goto L491ac9;
case 0x491ad0:goto L491ad0;
case 0x491ad2:c.instructions+=7;goto B491ad2;
case 0x491ad5:c.instructions+=6;goto B491ad5;
case 0x491ad7:c.instructions+=5;goto B491ad7;
case 0x491ad8:c.instructions+=4;goto B491ad8;
case 0x491adb:c.instructions+=3;goto B491adb;
case 0x491ae0:c.instructions+=2;goto B491ae0;
case 0x491ae1:c.instructions+=1;goto B491ae1;
case 0x491ae6:goto L491ae6;
case 0x491ae8:c.instructions+=3;goto B491ae8;
case 0x491aeb:c.instructions+=2;goto B491aeb;
case 0x491aed:c.instructions+=1;goto B491aed;
case 0x491aef:goto L491aef;
case 0x491af0:c.instructions+=1;goto B491af0;
case 0x491b00:goto L491b00;
case 0x491b01:c.instructions+=4;goto B491b01;
case 0x491b03:c.instructions+=3;goto B491b03;
case 0x491b05:c.instructions+=2;goto B491b05;
case 0x491b07:c.instructions+=1;goto B491b07;
case 0x491b09:goto L491b09;
case 0x491b10:goto L491b10;
case 0x491b12:c.instructions+=7;goto B491b12;
case 0x491b15:c.instructions+=6;goto B491b15;
case 0x491b17:c.instructions+=5;goto B491b17;
case 0x491b18:c.instructions+=4;goto B491b18;
case 0x491b1b:c.instructions+=3;goto B491b1b;
case 0x491b20:c.instructions+=2;goto B491b20;
case 0x491b21:c.instructions+=1;goto B491b21;
case 0x491b26:goto L491b26;
case 0x491b28:c.instructions+=3;goto B491b28;
case 0x491b2b:c.instructions+=2;goto B491b2b;
case 0x491b2d:c.instructions+=1;goto B491b2d;
case 0x491b2f:goto L491b2f;
case 0x491b30:c.instructions+=1;goto B491b30;
case 0x491b40:goto L491b40;
case 0x491b41:c.instructions+=4;goto B491b41;
case 0x491b43:c.instructions+=3;goto B491b43;
case 0x491b45:c.instructions+=2;goto B491b45;
case 0x491b47:c.instructions+=1;goto B491b47;
case 0x491b49:goto L491b49;
case 0x491b50:goto L491b50;
case 0x491b52:c.instructions+=6;goto B491b52;
case 0x491b55:c.instructions+=5;goto B491b55;
case 0x491b58:c.instructions+=4;goto B491b58;
case 0x491b5a:c.instructions+=3;goto B491b5a;
case 0x491b5c:c.instructions+=2;goto B491b5c;
case 0x491b5f:c.instructions+=1;goto B491b5f;
case 0x491b61:goto L491b61;
case 0x491b62:c.instructions+=1;goto B491b62;
case 0x491b67:goto L491b67;
case 0x491b6a:goto L491b6a;
case 0x491b6c:c.instructions+=2;goto B491b6c;
case 0x491b6e:c.instructions+=1;goto B491b6e;
case 0x491b70:goto L491b70;
case 0x491b71:c.instructions+=1;goto B491b71;
case 0x491b80:goto L491b80;
case 0x491b81:c.instructions+=5;goto B491b81;
case 0x491b82:c.instructions+=4;goto B491b82;
case 0x491b84:c.instructions+=3;goto B491b84;
case 0x491b86:c.instructions+=2;goto B491b86;
case 0x491b88:c.instructions+=1;goto B491b88;
case 0x491b8a:goto L491b8a;
case 0x491b90:goto L491b90;
case 0x491b93:c.instructions+=5;goto B491b93;
case 0x491b95:c.instructions+=4;goto B491b95;
case 0x491b97:c.instructions+=3;goto B491b97;
case 0x491b9a:c.instructions+=2;goto B491b9a;
case 0x491b9c:c.instructions+=1;goto B491b9c;
case 0x491ba1:goto L491ba1;
case 0x491ba6:c.instructions+=3;goto B491ba6;
case 0x491ba7:c.instructions+=2;goto B491ba7;
case 0x491ba8:c.instructions+=1;goto B491ba8;
case 0x491bad:goto L491bad;
case 0x491baf:c.instructions+=3;goto B491baf;
case 0x491bb2:c.instructions+=2;goto B491bb2;
case 0x491bb4:c.instructions+=1;goto B491bb4;
case 0x491bb6:goto L491bb6;
case 0x491bb7:c.instructions+=2;goto B491bb7;
case 0x491bb8:c.instructions+=1;goto B491bb8;
case 0x491bc0:goto L491bc0;
case 0x491bc1:c.instructions+=5;goto B491bc1;
case 0x491bc2:c.instructions+=4;goto B491bc2;
case 0x491bc4:c.instructions+=3;goto B491bc4;
case 0x491bc6:c.instructions+=2;goto B491bc6;
case 0x491bc8:c.instructions+=1;goto B491bc8;
case 0x491bca:goto L491bca;
case 0x491bd0:goto L491bd0;
case 0x491bd3:c.instructions+=5;goto B491bd3;
case 0x491bd5:c.instructions+=4;goto B491bd5;
case 0x491bd7:c.instructions+=3;goto B491bd7;
case 0x491bda:c.instructions+=2;goto B491bda;
case 0x491bdc:c.instructions+=1;goto B491bdc;
case 0x491be1:goto L491be1;
case 0x491be6:c.instructions+=3;goto B491be6;
case 0x491be7:c.instructions+=2;goto B491be7;
case 0x491be8:c.instructions+=1;goto B491be8;
case 0x491bed:goto L491bed;
case 0x491bef:c.instructions+=3;goto B491bef;
case 0x491bf2:c.instructions+=2;goto B491bf2;
case 0x491bf4:c.instructions+=1;goto B491bf4;
case 0x491bf6:goto L491bf6;
case 0x491bf7:c.instructions+=2;goto B491bf7;
case 0x491bf8:c.instructions+=1;goto B491bf8;
case 0x491c00:goto L491c00;
case 0x491c04:c.instructions+=13;goto B491c04;
case 0x491c05:c.instructions+=12;goto B491c05;
case 0x491c06:c.instructions+=11;goto B491c06;
case 0x491c0a:c.instructions+=10;goto B491c0a;
case 0x491c0f:c.instructions+=9;goto B491c0f;
case 0x491c14:c.instructions+=8;goto B491c14;
case 0x491c16:c.instructions+=7;goto B491c16;
case 0x491c18:c.instructions+=6;goto B491c18;
case 0x491c1a:c.instructions+=5;goto B491c1a;
case 0x491c1d:c.instructions+=4;goto B491c1d;
case 0x491c1e:c.instructions+=3;goto B491c1e;
case 0x491c21:c.instructions+=2;goto B491c21;
case 0x491c24:c.instructions+=1;goto B491c24;
case 0x491c29:goto L491c29;
case 0x491c2c:c.instructions+=9;goto B491c2c;
case 0x491c2f:c.instructions+=8;goto B491c2f;
case 0x491c32:c.instructions+=7;goto B491c32;
case 0x491c34:c.instructions+=6;goto B491c34;
case 0x491c37:c.instructions+=5;goto B491c37;
case 0x491c3a:c.instructions+=4;goto B491c3a;
case 0x491c3b:c.instructions+=3;goto B491c3b;
case 0x491c3d:c.instructions+=2;goto B491c3d;
case 0x491c3e:c.instructions+=1;goto B491c3e;
case 0x491c50:goto L491c50;
case 0x491c55:c.instructions+=8;goto B491c55;
case 0x491c57:c.instructions+=7;goto B491c57;
case 0x491c59:c.instructions+=6;goto B491c59;
case 0x491c5c:c.instructions+=5;goto B491c5c;
case 0x491c5f:c.instructions+=4;goto B491c5f;
case 0x491c61:c.instructions+=3;goto B491c61;
case 0x491c64:c.instructions+=2;goto B491c64;
case 0x491c65:c.instructions+=1;goto B491c65;
case 0x491c6a:goto L491c6a;
case 0x491c70:goto L491c70;
case 0x491c71:c.instructions+=5;goto B491c71;
case 0x491c73:c.instructions+=4;goto B491c73;
case 0x491c76:c.instructions+=3;goto B491c76;
case 0x491c78:c.instructions+=2;goto B491c78;
case 0x491c7d:c.instructions+=1;goto B491c7d;
case 0x491c7f:goto L491c7f;
case 0x491c84:c.instructions+=1;goto B491c84;
case 0x491c86:goto L491c86;
case 0x491c8b:c.instructions+=2;goto B491c8b;
case 0x491c8c:c.instructions+=1;goto B491c8c;
case 0x491c8d:goto L491c8d;
case 0x491c92:c.instructions+=3;goto B491c92;
case 0x491c93:c.instructions+=2;goto B491c93;
case 0x491c94:c.instructions+=1;goto B491c94;
case 0x491c96:goto L491c96;
case 0x491c99:c.instructions+=3;goto B491c99;
case 0x491c9c:c.instructions+=2;goto B491c9c;
case 0x491ca0:c.instructions+=1;goto B491ca0;
case 0x491ca2:goto L491ca2;
case 0x491ca5:c.instructions+=3;goto B491ca5;
case 0x491ca8:c.instructions+=2;goto B491ca8;
case 0x491caa:c.instructions+=1;goto B491caa;
case 0x491cac:goto L491cac;
case 0x491cae:c.instructions+=1;goto B491cae;
case 0x491cb0:goto L491cb0;
case 0x491cb5:c.instructions+=9;goto B491cb5;
case 0x491cb7:c.instructions+=8;goto B491cb7;
case 0x491cbd:c.instructions+=7;goto B491cbd;
case 0x491cbf:c.instructions+=6;goto B491cbf;
case 0x491cc2:c.instructions+=5;goto B491cc2;
case 0x491cc5:c.instructions+=4;goto B491cc5;
case 0x491cc7:c.instructions+=3;goto B491cc7;
case 0x491cc8:c.instructions+=2;goto B491cc8;
case 0x491cce:c.instructions+=1;goto B491cce;
case 0x491cd3:goto L491cd3;
case 0x491cd6:c.instructions+=4;goto B491cd6;
case 0x491cd9:c.instructions+=3;goto B491cd9;
case 0x491cdf:c.instructions+=2;goto B491cdf;
case 0x491ce0:c.instructions+=1;goto B491ce0;
case 0x491ce2:goto L491ce2;
case 0x491ce3:c.instructions+=4;goto B491ce3;
case 0x491ce8:c.instructions+=3;goto B491ce8;
case 0x491ce9:c.instructions+=2;goto B491ce9;
case 0x491cea:c.instructions+=1;goto B491cea;
case 0x491ceb:goto L491ceb;
case 0x491cf0:c.instructions+=1;goto B491cf0;
case 0x491cf2:goto L491cf2;
case 0x491cf5:c.instructions+=3;goto B491cf5;
case 0x491cf8:c.instructions+=2;goto B491cf8;
case 0x491cfc:c.instructions+=1;goto B491cfc;
case 0x491cfe:goto L491cfe;
case 0x491cff:c.instructions+=4;goto B491cff;
case 0x491d02:c.instructions+=3;goto B491d02;
case 0x491d04:c.instructions+=2;goto B491d04;
case 0x491d07:c.instructions+=1;goto B491d07;
case 0x491d09:goto L491d09;
case 0x491d10:goto L491d10;
case 0x491d13:c.instructions+=3;goto B491d13;
case 0x491d14:c.instructions+=2;goto B491d14;
case 0x491d16:c.instructions+=1;goto B491d16;
case 0x491d1b:goto L491d1b;
case 0x491d1c:c.instructions+=2;goto B491d1c;
case 0x491d21:c.instructions+=1;goto B491d21;
case 0x491d26:goto L491d26;
case 0x491d2c:c.instructions+=2;goto B491d2c;
case 0x491d2d:c.instructions+=1;goto B491d2d;
case 0x491d2f:goto L491d2f;
case 0x491d30:goto L491d30;
case 0x491d35:c.instructions+=5;goto B491d35;
case 0x491d38:c.instructions+=4;goto B491d38;
case 0x491d39:c.instructions+=3;goto B491d39;
case 0x491d3a:c.instructions+=2;goto B491d3a;
case 0x491d3b:c.instructions+=1;goto B491d3b;
case 0x491d3c:goto L491d3c;
case 0x491d3d:c.instructions+=4;goto B491d3d;
case 0x491d3f:c.instructions+=3;goto B491d3f;
case 0x491d40:c.instructions+=2;goto B491d40;
case 0x491d41:c.instructions+=1;goto B491d41;
case 0x491d50:goto L491d50;
case 0x491d51:c.instructions+=5;goto B491d51;
case 0x491d53:c.instructions+=4;goto B491d53;
case 0x491d56:c.instructions+=3;goto B491d56;
case 0x491d58:c.instructions+=2;goto B491d58;
case 0x491d5d:c.instructions+=1;goto B491d5d;
case 0x491d5f:goto L491d5f;
case 0x491d64:c.instructions+=1;goto B491d64;
case 0x491d66:goto L491d66;
case 0x491d6b:c.instructions+=2;goto B491d6b;
case 0x491d6c:c.instructions+=1;goto B491d6c;
case 0x491d6d:goto L491d6d;
case 0x491d72:c.instructions+=2;goto B491d72;
case 0x491d73:c.instructions+=1;goto B491d73;
case 0x491d75:goto L491d75;
case 0x491d78:c.instructions+=3;goto B491d78;
case 0x491d7b:c.instructions+=2;goto B491d7b;
case 0x491d7f:c.instructions+=1;goto B491d7f;
case 0x491d81:goto L491d81;
case 0x491d84:c.instructions+=3;goto B491d84;
case 0x491d87:c.instructions+=2;goto B491d87;
case 0x491d89:c.instructions+=1;goto B491d89;
case 0x491d8b:goto L491d8b;
case 0x491d8d:c.instructions+=1;goto B491d8d;
case 0x491d90:goto L491d90;
case 0x491d92:c.instructions+=6;goto B491d92;
case 0x491d95:c.instructions+=5;goto B491d95;
case 0x491d9a:c.instructions+=4;goto B491d9a;
case 0x491d9b:c.instructions+=3;goto B491d9b;
case 0x491d9d:c.instructions+=2;goto B491d9d;
case 0x491da0:c.instructions+=1;goto B491da0;
case 0x491da2:goto L491da2;
case 0x491da7:c.instructions+=3;goto B491da7;
case 0x491da8:c.instructions+=2;goto B491da8;
case 0x491da9:c.instructions+=1;goto B491da9;
case 0x491daa:goto L491daa;
case 0x491daf:c.instructions+=1;goto B491daf;
case 0x491db1:goto L491db1;
case 0x491db4:c.instructions+=3;goto B491db4;
case 0x491db7:c.instructions+=2;goto B491db7;
case 0x491dbb:c.instructions+=1;goto B491dbb;
case 0x491dbd:goto L491dbd;
case 0x491dc0:c.instructions+=3;goto B491dc0;
case 0x491dc3:c.instructions+=2;goto B491dc3;
case 0x491dc5:c.instructions+=1;goto B491dc5;
case 0x491dc7:goto L491dc7;
case 0x491dc8:c.instructions+=2;goto B491dc8;
case 0x491dca:c.instructions+=1;goto B491dca;
case 0x491dd0:goto L491dd0;
case 0x491dd3:c.instructions+=8;goto B491dd3;
case 0x491dd5:c.instructions+=7;goto B491dd5;
case 0x491dd7:c.instructions+=6;goto B491dd7;
case 0x491dda:c.instructions+=5;goto B491dda;
case 0x491de0:c.instructions+=4;goto B491de0;
case 0x491de1:c.instructions+=3;goto B491de1;
case 0x491de2:c.instructions+=2;goto B491de2;
case 0x491de8:c.instructions+=1;goto B491de8;
case 0x491ded:goto L491ded;
case 0x491df0:c.instructions+=3;goto B491df0;
case 0x491df6:c.instructions+=2;goto B491df6;
case 0x491df7:c.instructions+=1;goto B491df7;
case 0x491df9:goto L491df9;
case 0x491dfa:goto L491dfa;
case 0x491dff:c.instructions+=3;goto B491dff;
case 0x491e00:c.instructions+=2;goto B491e00;
case 0x491e01:c.instructions+=1;goto B491e01;
case 0x491e02:goto L491e02;
case 0x491e04:c.instructions+=3;goto B491e04;
case 0x491e05:c.instructions+=2;goto B491e05;
case 0x491e06:c.instructions+=1;goto B491e06;
case 0x491e10:goto L491e10;
case 0x491e11:c.instructions+=5;goto B491e11;
case 0x491e12:c.instructions+=4;goto B491e12;
case 0x491e14:c.instructions+=3;goto B491e14;
case 0x491e16:c.instructions+=2;goto B491e16;
case 0x491e18:c.instructions+=1;goto B491e18;
case 0x491e1a:goto L491e1a;
case 0x491e20:goto L491e20;
case 0x491e23:c.instructions+=5;goto B491e23;
case 0x491e25:c.instructions+=4;goto B491e25;
case 0x491e27:c.instructions+=3;goto B491e27;
case 0x491e2a:c.instructions+=2;goto B491e2a;
case 0x491e2c:c.instructions+=1;goto B491e2c;
case 0x491e31:goto L491e31;
case 0x491e36:c.instructions+=3;goto B491e36;
case 0x491e37:c.instructions+=2;goto B491e37;
case 0x491e38:c.instructions+=1;goto B491e38;
case 0x491e3d:goto L491e3d;
case 0x491e3f:c.instructions+=3;goto B491e3f;
case 0x491e42:c.instructions+=2;goto B491e42;
case 0x491e44:c.instructions+=1;goto B491e44;
case 0x491e46:goto L491e46;
case 0x491e47:c.instructions+=2;goto B491e47;
case 0x491e48:c.instructions+=1;goto B491e48;
case 0x491e50:goto L491e50;
case 0x491e51:c.instructions+=18;goto B491e51;
case 0x491e53:c.instructions+=17;goto B491e53;
case 0x491e56:c.instructions+=16;goto B491e56;
case 0x491e58:c.instructions+=15;goto B491e58;
case 0x491e5d:c.instructions+=14;goto B491e5d;
case 0x491e63:c.instructions+=13;goto B491e63;
case 0x491e64:c.instructions+=12;goto B491e64;
case 0x491e6b:c.instructions+=11;goto B491e6b;
case 0x491e71:c.instructions+=10;goto B491e71;
case 0x491e72:c.instructions+=9;goto B491e72;
case 0x491e75:c.instructions+=8;goto B491e75;
case 0x491e76:c.instructions+=7;goto B491e76;
case 0x491e79:c.instructions+=6;goto B491e79;
case 0x491e7a:c.instructions+=5;goto B491e7a;
case 0x491e7c:c.instructions+=4;goto B491e7c;
case 0x491e7e:c.instructions+=3;goto B491e7e;
case 0x491e82:c.instructions+=2;goto B491e82;
case 0x491e89:c.instructions+=1;goto B491e89;
case 0x491e8f:goto L491e8f;
case 0x491e95:c.instructions+=4;goto B491e95;
case 0x491e98:c.instructions+=3;goto B491e98;
case 0x491e9c:c.instructions+=2;goto B491e9c;
case 0x491ea0:c.instructions+=1;goto B491ea0;
case 0x491ea4:goto L491ea4;
case 0x491ea9:c.instructions+=1;goto B491ea9;
case 0x491eab:goto L491eab;
case 0x491eaf:c.instructions+=4;goto B491eaf;
case 0x491eb0:c.instructions+=3;goto B491eb0;
case 0x491eb3:c.instructions+=2;goto B491eb3;
case 0x491eb4:c.instructions+=1;goto B491eb4;
case 0x491eb9:goto L491eb9;
case 0x491ebd:c.instructions+=4;goto B491ebd;
case 0x491ec0:c.instructions+=3;goto B491ec0;
case 0x491ec2:c.instructions+=2;goto B491ec2;
case 0x491ec5:c.instructions+=1;goto B491ec5;
case 0x491ec7:goto L491ec7;
case 0x491ecc:goto L491ecc;
case 0x491ed0:c.instructions+=7;goto B491ed0;
case 0x491ed4:c.instructions+=6;goto B491ed4;
case 0x491ed5:c.instructions+=5;goto B491ed5;
case 0x491ed8:c.instructions+=4;goto B491ed8;
case 0x491eda:c.instructions+=3;goto B491eda;
case 0x491ede:c.instructions+=2;goto B491ede;
case 0x491ee2:c.instructions+=1;goto B491ee2;
case 0x491ee4:goto L491ee4;
case 0x491ee7:c.instructions+=2;goto B491ee7;
case 0x491ee9:c.instructions+=1;goto B491ee9;
case 0x491eeb:goto L491eeb;
case 0x491ef1:c.instructions+=15;goto B491ef1;
case 0x491ef3:c.instructions+=14;goto B491ef3;
case 0x491ef6:c.instructions+=13;goto B491ef6;
case 0x491ef8:c.instructions+=12;goto B491ef8;
case 0x491efa:c.instructions+=11;goto B491efa;
case 0x491efd:c.instructions+=10;goto B491efd;
case 0x491eff:c.instructions+=9;goto B491eff;
case 0x491f01:c.instructions+=8;goto B491f01;
case 0x491f04:c.instructions+=7;goto B491f04;
case 0x491f06:c.instructions+=6;goto B491f06;
case 0x491f0b:c.instructions+=5;goto B491f0b;
case 0x491f10:c.instructions+=4;goto B491f10;
case 0x491f12:c.instructions+=3;goto B491f12;
case 0x491f16:c.instructions+=2;goto B491f16;
case 0x491f1a:c.instructions+=1;goto B491f1a;
case 0x491f1c:goto L491f1c;
case 0x491f22:goto L491f22;
case 0x491f28:c.instructions+=2;goto B491f28;
case 0x491f2e:c.instructions+=1;goto B491f2e;
case 0x491f33:goto L491f33;
case 0x491f36:goto L491f36;
case 0x491f38:c.instructions+=2;goto B491f38;
case 0x491f3b:c.instructions+=1;goto B491f3b;
case 0x491f41:goto L491f41;
case 0x491f44:c.instructions+=1;goto B491f44;
case 0x491f46:goto L491f46;
case 0x491f49:c.instructions+=4;goto B491f49;
case 0x491f4f:c.instructions+=3;goto B491f4f;
case 0x491f51:c.instructions+=2;goto B491f51;
case 0x491f54:c.instructions+=1;goto B491f54;
case 0x491f5a:goto L491f5a;
case 0x491f5d:c.instructions+=8;goto B491f5d;
case 0x491f60:c.instructions+=7;goto B491f60;
case 0x491f66:c.instructions+=6;goto B491f66;
case 0x491f69:c.instructions+=5;goto B491f69;
case 0x491f6d:c.instructions+=4;goto B491f6d;
case 0x491f71:c.instructions+=3;goto B491f71;
case 0x491f73:c.instructions+=2;goto B491f73;
case 0x491f76:c.instructions+=1;goto B491f76;
case 0x491f78:goto L491f78;
case 0x491f7c:c.instructions+=4;goto B491f7c;
case 0x491f82:c.instructions+=3;goto B491f82;
case 0x491f84:c.instructions+=2;goto B491f84;
case 0x491f87:c.instructions+=1;goto B491f87;
case 0x491f89:goto L491f89;
case 0x491f8c:c.instructions+=4;goto B491f8c;
case 0x491f90:c.instructions+=3;goto B491f90;
case 0x491f92:c.instructions+=2;goto B491f92;
case 0x491f95:c.instructions+=1;goto B491f95;
case 0x491f97:goto L491f97;
case 0x491f9b:c.instructions+=2;goto B491f9b;
case 0x491f9f:c.instructions+=1;goto B491f9f;
case 0x491fa1:goto L491fa1;
case 0x491fa4:c.instructions+=2;goto B491fa4;
case 0x491fa6:c.instructions+=1;goto B491fa6;
case 0x491faa:goto L491faa;
case 0x491fad:c.instructions+=6;goto B491fad;
case 0x491fb1:c.instructions+=5;goto B491fb1;
case 0x491fb5:c.instructions+=4;goto B491fb5;
case 0x491fb7:c.instructions+=3;goto B491fb7;
case 0x491fb9:c.instructions+=2;goto B491fb9;
case 0x491fbc:c.instructions+=1;goto B491fbc;
case 0x491fc2:goto L491fc2;
case 0x491fc5:c.instructions+=3;goto B491fc5;
case 0x491fc7:c.instructions+=2;goto B491fc7;
case 0x491fcb:c.instructions+=1;goto B491fcb;
case 0x491fcd:goto L491fcd;
case 0x491fd0:c.instructions+=1;goto B491fd0;
case 0x491fd2:goto L491fd2;
case 0x491fd5:c.instructions+=2;goto B491fd5;
case 0x491fd8:c.instructions+=1;goto B491fd8;
case 0x491fda:goto L491fda;
case 0x491fdf:c.instructions+=3;goto B491fdf;
case 0x491fe1:c.instructions+=2;goto B491fe1;
case 0x491fe2:c.instructions+=1;goto B491fe2;
case 0x491fe7:goto L491fe7;
case 0x491fea:c.instructions+=2;goto B491fea;
case 0x491fec:c.instructions+=1;goto B491fec;
case 0x491fee:goto L491fee;
case 0x491ff4:c.instructions+=2;goto B491ff4;
case 0x491ff5:c.instructions+=1;goto B491ff5;
case 0x491ffa:goto L491ffa;
case 0x491ffd:c.instructions+=1;goto B491ffd;
default:missing_instruction(c.pc);}
B491005:L491005:{c.instructions+=4;NFSU2_TR(0x491005);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B491007:{NFSU2_TR(0x491007);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491008:{NFSU2_TR(0x491008);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49100c:{NFSU2_TR(0x49100c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491011ull));
TAIL_STATIC(0x4870b0u,487);
}
B491011:L491011:{c.instructions+=14;NFSU2_TR(0x491011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B491013:{NFSU2_TR(0x491013);
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
B491016:{NFSU2_TR(0x491016);
__builtin_memmove((R+8),(R+16),4);
}
B491018:{NFSU2_TR(0x491018);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B49101a:{NFSU2_TR(0x49101a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49101d:{NFSU2_TR(0x49101d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491020:{NFSU2_TR(0x491020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491023:{NFSU2_TR(0x491023);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491026:{NFSU2_TR(0x491026);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491029:{NFSU2_TR(0x491029);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B491030:{NFSU2_TR(0x491030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491031:{NFSU2_TR(0x491031);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B491035:{NFSU2_TR(0x491035);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491038:{NFSU2_TR(0x491038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49103dull));
TAIL_STATIC(0x487040u,487);
}
B49103d:L49103d:{c.instructions+=14;NFSU2_TR(0x49103d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491041:{NFSU2_TR(0x491041);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491045:{NFSU2_TR(0x491045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B491048:{NFSU2_TR(0x491048);
__builtin_memmove((R+8),(R+16),4);
}
B49104a:{NFSU2_TR(0x49104a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B49104c:{NFSU2_TR(0x49104c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491050:{NFSU2_TR(0x491050);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491053:{NFSU2_TR(0x491053);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491057:{NFSU2_TR(0x491057);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49105a:{NFSU2_TR(0x49105a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49105d:{NFSU2_TR(0x49105d);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B491064:{NFSU2_TR(0x491064);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491065:{NFSU2_TR(0x491065);
u8 U[4];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49106c:{NFSU2_TR(0x49106c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491071ull));
TAIL_STATIC(0x487190u,487);
}
B491071:L491071:{c.instructions+=14;NFSU2_TR(0x491071);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491078:{NFSU2_TR(0x491078);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49107f:{NFSU2_TR(0x49107f);
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
B491082:{NFSU2_TR(0x491082);
__builtin_memmove((R+0),(R+16),4);
}
B491084:{NFSU2_TR(0x491084);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B491086:{NFSU2_TR(0x491086);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49108d:{NFSU2_TR(0x49108d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491090:{NFSU2_TR(0x491090);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491097:{NFSU2_TR(0x491097);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49109a:{NFSU2_TR(0x49109a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49109d:{NFSU2_TR(0x49109d);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4910a4:{NFSU2_TR(0x4910a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4910a5:{NFSU2_TR(0x4910a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4910a9:{NFSU2_TR(0x4910a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4910aeull));
TAIL_STATIC(0x48b7b0u,48b);
}
B4910ae:L4910ae:{c.instructions+=2;NFSU2_TR(0x4910ae);
u8 U[6];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4910b6:{NFSU2_TR(0x4910b6);
if(r1(R+518)){{goto L4910ef;}}
}
B4910b8:L4910b8:{c.instructions+=16;NFSU2_TR(0x4910b8);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4910bf:{NFSU2_TR(0x4910bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4910c3:{NFSU2_TR(0x4910c3);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4910c5:{NFSU2_TR(0x4910c5);
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
B4910c8:{NFSU2_TR(0x4910c8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4910cc:{NFSU2_TR(0x4910cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4910d0:{NFSU2_TR(0x4910d0);
__builtin_memmove((R+4),(R+16),4);
}
B4910d2:{NFSU2_TR(0x4910d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4910d4:{NFSU2_TR(0x4910d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4910d8:{NFSU2_TR(0x4910d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4910db:{NFSU2_TR(0x4910db);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4910df:{NFSU2_TR(0x4910df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4910e2:{NFSU2_TR(0x4910e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4910e5:{NFSU2_TR(0x4910e5);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4910ec:{NFSU2_TR(0x4910ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4910ed:{NFSU2_TR(0x4910ed);
{goto L491133;}
}
B4910ef:L4910ef:{c.instructions+=5;NFSU2_TR(0x4910ef);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4910f6:{NFSU2_TR(0x4910f6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4910fc:{NFSU2_TR(0x4910fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4910fe:{NFSU2_TR(0x4910fe);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B491101:{NFSU2_TR(0x491101);
if(r1(R+514)){{goto L49113f;}}
}
B491103:L491103:{c.instructions+=13;NFSU2_TR(0x491103);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491107:{NFSU2_TR(0x491107);
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
B49110a:{NFSU2_TR(0x49110a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B491112:{NFSU2_TR(0x491112);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491116:{NFSU2_TR(0x491116);
__builtin_memmove((R+8),(R+16),4);
}
B491118:{NFSU2_TR(0x491118);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B49111a:{NFSU2_TR(0x49111a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49111e:{NFSU2_TR(0x49111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491121:{NFSU2_TR(0x491121);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491125:{NFSU2_TR(0x491125);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491128:{NFSU2_TR(0x491128);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49112b:{NFSU2_TR(0x49112b);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B491132:{NFSU2_TR(0x491132);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491133:L491133:{c.instructions+=2;NFSU2_TR(0x491133);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49113a:{NFSU2_TR(0x49113a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49113full));
TAIL_STATIC(0x487160u,487);
}
B49113f:L49113f:{c.instructions+=21;NFSU2_TR(0x49113f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491141:{NFSU2_TR(0x491141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491144:{NFSU2_TR(0x491144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491147:{NFSU2_TR(0x491147);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49114b:{NFSU2_TR(0x49114b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49114e:{NFSU2_TR(0x49114e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491152:{NFSU2_TR(0x491152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491155:{NFSU2_TR(0x491155);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491159:{NFSU2_TR(0x491159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49115c:{NFSU2_TR(0x49115c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491160:{NFSU2_TR(0x491160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491163:{NFSU2_TR(0x491163);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491167:{NFSU2_TR(0x491167);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49116e:{NFSU2_TR(0x49116e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491171:{NFSU2_TR(0x491171);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491178:{NFSU2_TR(0x491178);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49117c:{NFSU2_TR(0x49117c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49117f:{NFSU2_TR(0x49117f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491180:{NFSU2_TR(0x491180);
u8 U[4];
w4(U+0,u32(u32(u32(0x2bcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B491187:{NFSU2_TR(0x491187);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49118e:{NFSU2_TR(0x49118e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491193ull));
TAIL_STATIC(0x487270u,487);
}
B491193:L491193:{c.instructions+=16;NFSU2_TR(0x491193);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491196:{NFSU2_TR(0x491196);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49119a:{NFSU2_TR(0x49119a);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49119e:{NFSU2_TR(0x49119e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4911a1:{NFSU2_TR(0x4911a1);
__builtin_memmove((R+0),(R+16),4);
}
B4911a3:{NFSU2_TR(0x4911a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4911a5:{NFSU2_TR(0x4911a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4911ac:{NFSU2_TR(0x4911ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4911af:{NFSU2_TR(0x4911af);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4911b6:{NFSU2_TR(0x4911b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4911b9:{NFSU2_TR(0x4911b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4911bc:{NFSU2_TR(0x4911bc);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4911c3:{NFSU2_TR(0x4911c3);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4911ca:{NFSU2_TR(0x4911ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4911cb:{NFSU2_TR(0x4911cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ccull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4911d2:{NFSU2_TR(0x4911d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4911d7ull));
TAIL_STATIC(0x487210u,487);
}
B4911d7:L4911d7:{c.instructions+=4;NFSU2_TR(0x4911d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4911de:{NFSU2_TR(0x4911de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4911df:{NFSU2_TR(0x4911df);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4911e6:{NFSU2_TR(0x4911e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4911ebull));
TAIL_STATIC(0x48b7f0u,48b);
}
B4911eb:L4911eb:{c.instructions+=20;NFSU2_TR(0x4911eb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4911ee:{NFSU2_TR(0x4911ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4911f2:{NFSU2_TR(0x4911f2);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4911f6:{NFSU2_TR(0x4911f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4911fa:{NFSU2_TR(0x4911fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4911fe:{NFSU2_TR(0x4911fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491205:{NFSU2_TR(0x491205);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491209:{NFSU2_TR(0x491209);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491210:{NFSU2_TR(0x491210);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491214:{NFSU2_TR(0x491214);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49121b:{NFSU2_TR(0x49121b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49121f:{NFSU2_TR(0x49121f);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491226:{NFSU2_TR(0x491226);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49122a:{NFSU2_TR(0x49122a);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491231:{NFSU2_TR(0x491231);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f3cc8ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B491238:{NFSU2_TR(0x491238);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49123f:{NFSU2_TR(0x49123f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491243:{NFSU2_TR(0x491243);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49124b:{NFSU2_TR(0x49124b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49124f:{NFSU2_TR(0x49124f);
}
B491250:L491250:{c.instructions+=4;NFSU2_TR(0x491250);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491254:{NFSU2_TR(0x491254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491256:{NFSU2_TR(0x491256);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491258:{NFSU2_TR(0x491258);
if(r1(R+518)){{goto L491829;}}
}
B49125e:L49125e:{c.instructions+=2;NFSU2_TR(0x49125e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B491262:{NFSU2_TR(0x491262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491279;}}
}
B491264:L491264:{c.instructions+=4;NFSU2_TR(0x491264);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491266:{NFSU2_TR(0x491266);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491268:{NFSU2_TR(0x491268);
u8 U[4];
w4(U+0,u32(0x3394fe62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49126d:{NFSU2_TR(0x49126d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491272ull));
TAIL_STATIC(0x4901d0u,490);
}
B491272:L491272:{c.instructions+=3;NFSU2_TR(0x491272);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B491275:{NFSU2_TR(0x491275);
__builtin_memmove((R+12),(R+0),4);
}
B491277:{NFSU2_TR(0x491277);
{goto L491283;}
}
B491279:L491279:{c.instructions+=2;NFSU2_TR(0x491279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49127c:{NFSU2_TR(0x49127c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82cc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B491283:L491283:{c.instructions+=2;NFSU2_TR(0x491283);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491285:{NFSU2_TR(0x491285);
if(r1(R+518)){{goto L491829;}}
}
B49128b:L49128b:{c.instructions+=4;NFSU2_TR(0x49128b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49128e:{NFSU2_TR(0x49128e);
__builtin_memmove(gp(0x82d528),(R+0),4);
}
B491293:{NFSU2_TR(0x491293);
u8 U[6];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B49129b:{NFSU2_TR(0x49129b);
if(r1(R+518)){{goto L4912cc;}}
}
B49129d:L49129d:{c.instructions+=3;NFSU2_TR(0x49129d);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4912a4:{NFSU2_TR(0x4912a4);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4912a7:{NFSU2_TR(0x4912a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4912acull));
TAIL_STATIC(0x75c9b0u,75c);
}
B4912ac:L4912ac:{c.instructions+=6;NFSU2_TR(0x4912ac);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4912af:{NFSU2_TR(0x4912af);
{u32 ea_=u32(u32(8574248u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4912b5:{NFSU2_TR(0x4912b5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4912bb:{NFSU2_TR(0x4912bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4912bd:{NFSU2_TR(0x4912bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4912c0:{NFSU2_TR(0x4912c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4912cc;}}
}
B4912c2:L4912c2:{c.instructions+=1;NFSU2_TR(0x4912c2);
s4(0x82d528,u32(0x3f800000ull));
}
B4912cc:L4912cc:{c.instructions+=9;NFSU2_TR(0x4912cc);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4912cf:{NFSU2_TR(0x4912cf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4912d1:{NFSU2_TR(0x4912d1);
{u32 ea_=u32(u32(8574248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4912d7:{NFSU2_TR(0x4912d7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4912d9:{NFSU2_TR(0x4912d9);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4912e0:{NFSU2_TR(0x4912e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4912e6:{NFSU2_TR(0x4912e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4912e8:{NFSU2_TR(0x4912e8);
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
B4912eb:{NFSU2_TR(0x4912eb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L491829;}}
}
B4912f1:L4912f1:{c.instructions+=9;NFSU2_TR(0x4912f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4912f4:{NFSU2_TR(0x4912f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4912f5:{NFSU2_TR(0x4912f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4912fc:{NFSU2_TR(0x4912fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4912fd:{NFSU2_TR(0x4912fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B491304:{NFSU2_TR(0x491304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491305:{NFSU2_TR(0x491305);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B491309:{NFSU2_TR(0x491309);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49130a:{NFSU2_TR(0x49130a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49130full));
TAIL_STATIC(0x43d0c0u,43d);
}
B49130f:L49130f:{c.instructions+=6;NFSU2_TR(0x49130f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491313:{NFSU2_TR(0x491313);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B491316:{NFSU2_TR(0x491316);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B491319:{NFSU2_TR(0x491319);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49131b:{NFSU2_TR(0x49131b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49131e:{NFSU2_TR(0x49131e);
if(r1(R+514)){{goto L491327;}}
}
B491320:L491320:{c.instructions+=2;NFSU2_TR(0x491320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491323:{NFSU2_TR(0x491323);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491327:L491327:{c.instructions+=5;NFSU2_TR(0x491327);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49132b:{NFSU2_TR(0x49132b);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49132e:{NFSU2_TR(0x49132e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B491330:{NFSU2_TR(0x491330);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B491333:{NFSU2_TR(0x491333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49133c;}}
}
B491335:L491335:{c.instructions+=2;NFSU2_TR(0x491335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491338:{NFSU2_TR(0x491338);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49133c:L49133c:{c.instructions+=5;NFSU2_TR(0x49133c);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491343:{NFSU2_TR(0x491343);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49134a:{NFSU2_TR(0x49134a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49134e:{NFSU2_TR(0x49134e);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491355:{NFSU2_TR(0x491355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49135aull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B49135a:L49135a:{c.instructions+=18;NFSU2_TR(0x49135a);
{u32 ea_=u32(u32(8574248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491360:{NFSU2_TR(0x491360);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491363:{NFSU2_TR(0x491363);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491367:{NFSU2_TR(0x491367);
{u32 ea_=u32(u32(8574248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49136d:{NFSU2_TR(0x49136d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491370:{NFSU2_TR(0x491370);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491377:{NFSU2_TR(0x491377);
{u32 ea_=u32(u32(8574248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49137d:{NFSU2_TR(0x49137d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491380:{NFSU2_TR(0x491380);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491387:{NFSU2_TR(0x491387);
{u32 ea_=u32(u32(8574248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49138d:{NFSU2_TR(0x49138d);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491390:{NFSU2_TR(0x491390);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491397:{NFSU2_TR(0x491397);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B491399:{NFSU2_TR(0x491399);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4913a0:{NFSU2_TR(0x4913a0);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4913a6:{NFSU2_TR(0x4913a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4913a8:{NFSU2_TR(0x4913a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4913ab:{NFSU2_TR(0x4913ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4913b8;}}
}
B4913ad:L4913ad:{c.instructions+=1;NFSU2_TR(0x4913ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4913b8:L4913b8:{c.instructions+=3;NFSU2_TR(0x4913b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4913bb:{NFSU2_TR(0x4913bb);
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
B4913bd:{NFSU2_TR(0x4913bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49157f;}}
}
B4913c3:L4913c3:{c.instructions+=5;NFSU2_TR(0x4913c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4913ca:{NFSU2_TR(0x4913ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4913cb:{NFSU2_TR(0x4913cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4913d2:{NFSU2_TR(0x4913d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4913d3:{NFSU2_TR(0x4913d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4913d8ull));
TAIL_STATIC(0x43cf10u,43c);
}
B4913d8:L4913d8:{c.instructions+=7;NFSU2_TR(0x4913d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4913db:{NFSU2_TR(0x4913db);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4913e2:{NFSU2_TR(0x4913e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4913e3:{NFSU2_TR(0x4913e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4913ea:{NFSU2_TR(0x4913ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4913eb:{NFSU2_TR(0x4913eb);
__builtin_memmove((R+4),(R+28),4);
}
B4913ed:{NFSU2_TR(0x4913ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4913f2ull));
TAIL_STATIC(0x5bc4a0u,5bc);
}
B4913f2:L4913f2:{c.instructions+=2;NFSU2_TR(0x4913f2);
__builtin_memmove((R+4),(R+28),4);
}
B4913f4:{NFSU2_TR(0x4913f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4913f9ull));
TAIL_STATIC(0x5bc1f0u,5bc);
}
B4913f9:L4913f9:{c.instructions+=8;NFSU2_TR(0x4913f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491400:{NFSU2_TR(0x491400);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B491407:{NFSU2_TR(0x491407);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B49140e:{NFSU2_TR(0x49140e);
{u32 ea_=u32(u32(8338768u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491414:{NFSU2_TR(0x491414);
{u32 ea_=u32(u32(8575744u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49141a:{NFSU2_TR(0x49141a);
__builtin_memmove((R+8),gp(0x82db00),4);
}
B491420:{NFSU2_TR(0x491420);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491421:{NFSU2_TR(0x491421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491426ull));
TAIL_STATIC(0x401020u,401);
}
B491426:L491426:{c.instructions+=6;NFSU2_TR(0x491426);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49142d:{NFSU2_TR(0x49142d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49142e:{NFSU2_TR(0x49142e);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B491435:{NFSU2_TR(0x491435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491436:{NFSU2_TR(0x491436);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491437:{NFSU2_TR(0x491437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49143cull));
TAIL_STATIC(0x5ba8b0u,5ba);
}
B49143c:L49143c:{c.instructions+=67;NFSU2_TR(0x49143c);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491443:{NFSU2_TR(0x491443);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491447:{NFSU2_TR(0x491447);
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
B49144a:{NFSU2_TR(0x49144a);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491451:{NFSU2_TR(0x491451);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491455:{NFSU2_TR(0x491455);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B491457:{NFSU2_TR(0x491457);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49145e:{NFSU2_TR(0x49145e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491462:{NFSU2_TR(0x491462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B491464:{NFSU2_TR(0x491464);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49146b:{NFSU2_TR(0x49146b);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491472:{NFSU2_TR(0x491472);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491476:{NFSU2_TR(0x491476);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49147d:{NFSU2_TR(0x49147d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491481:{NFSU2_TR(0x491481);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B491483:{NFSU2_TR(0x491483);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49148a:{NFSU2_TR(0x49148a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49148e:{NFSU2_TR(0x49148e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B491490:{NFSU2_TR(0x491490);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491497:{NFSU2_TR(0x491497);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49149e:{NFSU2_TR(0x49149e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4914a2:{NFSU2_TR(0x4914a2);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4914a9:{NFSU2_TR(0x4914a9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4914ad:{NFSU2_TR(0x4914ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4914af:{NFSU2_TR(0x4914af);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4914b6:{NFSU2_TR(0x4914b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4914ba:{NFSU2_TR(0x4914ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4914bc:{NFSU2_TR(0x4914bc);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4914c3:{NFSU2_TR(0x4914c3);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4914ca:{NFSU2_TR(0x4914ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x268ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4914d1:{NFSU2_TR(0x4914d1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4914d3:{NFSU2_TR(0x4914d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4914d7:{NFSU2_TR(0x4914d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4914db:{NFSU2_TR(0x4914db);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4914df:{NFSU2_TR(0x4914df);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4914e6:{NFSU2_TR(0x4914e6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4914ea:{NFSU2_TR(0x4914ea);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4914f1:{NFSU2_TR(0x4914f1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4914f5:{NFSU2_TR(0x4914f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4914f7:{NFSU2_TR(0x4914f7);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4914fe:{NFSU2_TR(0x4914fe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491502:{NFSU2_TR(0x491502);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B491504:{NFSU2_TR(0x491504);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49150b:{NFSU2_TR(0x49150b);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491512:{NFSU2_TR(0x491512);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491516:{NFSU2_TR(0x491516);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49151d:{NFSU2_TR(0x49151d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491521:{NFSU2_TR(0x491521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B491523:{NFSU2_TR(0x491523);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49152a:{NFSU2_TR(0x49152a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49152e:{NFSU2_TR(0x49152e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B491530:{NFSU2_TR(0x491530);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491537:{NFSU2_TR(0x491537);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49153e:{NFSU2_TR(0x49153e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491542:{NFSU2_TR(0x491542);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491549:{NFSU2_TR(0x491549);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49154d:{NFSU2_TR(0x49154d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49154f:{NFSU2_TR(0x49154f);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491556:{NFSU2_TR(0x491556);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49155a:{NFSU2_TR(0x49155a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49155c:{NFSU2_TR(0x49155c);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491563:{NFSU2_TR(0x491563);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49156a:{NFSU2_TR(0x49156a);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491571:{NFSU2_TR(0x491571);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B491573:{NFSU2_TR(0x491573);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491577:{NFSU2_TR(0x491577);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49157b:{NFSU2_TR(0x49157b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49157f:L49157f:{c.instructions+=4;NFSU2_TR(0x49157f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B491586:{NFSU2_TR(0x491586);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491587:{NFSU2_TR(0x491587);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49158b:{NFSU2_TR(0x49158b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491590ull));
TAIL_STATIC(0x42faf0u,42f);
}
B491590:L491590:{c.instructions+=3;NFSU2_TR(0x491590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491591:{NFSU2_TR(0x491591);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B491595:{NFSU2_TR(0x491595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49159aull));
TAIL_STATIC(0x42faf0u,42f);
}
B49159a:L49159a:{c.instructions+=2;NFSU2_TR(0x49159a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B49159e:{NFSU2_TR(0x49159e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4915ef;}}
}
B4915a0:L4915a0:{c.instructions+=7;NFSU2_TR(0x4915a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4915a3:{NFSU2_TR(0x4915a3);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4915a6:{NFSU2_TR(0x4915a6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4915a9:{NFSU2_TR(0x4915a9);
{u32 ea_=u32(u32(7919536u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4915af:{NFSU2_TR(0x4915af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4915b1:{NFSU2_TR(0x4915b1);
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
B4915b4:{NFSU2_TR(0x4915b4);
if(r1(R+514)){{goto L4915d7;}}
}
B4915b6:L4915b6:{c.instructions+=6;NFSU2_TR(0x4915b6);
{u32 ea_=u32(u32(8337824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4915bc:{NFSU2_TR(0x4915bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4915bd:{NFSU2_TR(0x4915bd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4915c3:{NFSU2_TR(0x4915c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4915c7:{NFSU2_TR(0x4915c7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4915ca:{NFSU2_TR(0x4915ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4915cfull));
TAIL_STATIC(0x42faf0u,42f);
}
B4915cf:L4915cf:{c.instructions+=2;NFSU2_TR(0x4915cf);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4915d5:{NFSU2_TR(0x4915d5);
{goto L4915f6;}
}
B4915d7:L4915d7:{c.instructions+=4;NFSU2_TR(0x4915d7);
__builtin_memmove((R+4),gp(0x7f39a0),4);
}
B4915dd:{NFSU2_TR(0x4915dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4915de:{NFSU2_TR(0x4915de);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4915e2:{NFSU2_TR(0x4915e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4915e7ull));
TAIL_STATIC(0x42faf0u,42f);
}
B4915e7:L4915e7:{c.instructions+=2;NFSU2_TR(0x4915e7);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4915ed:{NFSU2_TR(0x4915ed);
{goto L4915f6;}
}
B4915ef:L4915ef:{c.instructions+=1;NFSU2_TR(0x4915ef);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4915f6:L4915f6:{c.instructions+=3;NFSU2_TR(0x4915f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4915f9:{NFSU2_TR(0x4915f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4915fb:{NFSU2_TR(0x4915fb);
if(r1(R+518)){{goto L49160c;}}
}
B4915fd:L4915fd:{c.instructions+=1;NFSU2_TR(0x4915fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491602ull));
TAIL_STATIC(0x75bed4u,75b);
}
B491602:L491602:{c.instructions+=4;NFSU2_TR(0x491602);
__builtin_memmove((R+24),(R+0),4);
}
B491604:{NFSU2_TR(0x491604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491607:{NFSU2_TR(0x491607);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B49160a:{NFSU2_TR(0x49160a);
{goto L491641;}
}
B49160c:L49160c:{c.instructions+=1;NFSU2_TR(0x49160c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491611ull));
TAIL_STATIC(0x75bed4u,75b);
}
B491611:L491611:{c.instructions+=4;NFSU2_TR(0x491611);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491618:{NFSU2_TR(0x491618);
__builtin_memmove((R+24),(R+0),4);
}
B49161a:{NFSU2_TR(0x49161a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B49161d:{NFSU2_TR(0x49161d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491622ull));
TAIL_STATIC(0x75bed4u,75b);
}
B491622:L491622:{c.instructions+=4;NFSU2_TR(0x491622);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491629:{NFSU2_TR(0x491629);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B49162b:{NFSU2_TR(0x49162b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B49162e:{NFSU2_TR(0x49162e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491633ull));
TAIL_STATIC(0x75bed4u,75b);
}
B491633:L491633:{c.instructions+=4;NFSU2_TR(0x491633);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491637:{NFSU2_TR(0x491637);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B491639:{NFSU2_TR(0x491639);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B49163c:{NFSU2_TR(0x49163c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491641ull));
TAIL_STATIC(0x75bed4u,75b);
}
B491641:L491641:{c.instructions+=99;NFSU2_TR(0x491641);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491645:{NFSU2_TR(0x491645);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B491647:{NFSU2_TR(0x491647);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B491649:{NFSU2_TR(0x491649);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491650:{NFSU2_TR(0x491650);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B491657:{NFSU2_TR(0x491657);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49165e:{NFSU2_TR(0x49165e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491662:{NFSU2_TR(0x491662);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491669:{NFSU2_TR(0x491669);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B49166b:{NFSU2_TR(0x49166b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491672:{NFSU2_TR(0x491672);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B491674:{NFSU2_TR(0x491674);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491678:{NFSU2_TR(0x491678);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B49167a:{NFSU2_TR(0x49167a);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B49167e:{NFSU2_TR(0x49167e);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491685:{NFSU2_TR(0x491685);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B491689:{NFSU2_TR(0x491689);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49168d:{NFSU2_TR(0x49168d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B49168f:{NFSU2_TR(0x49168f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B491693:{NFSU2_TR(0x491693);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491697:{NFSU2_TR(0x491697);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B49169b:{NFSU2_TR(0x49169b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49169f:{NFSU2_TR(0x49169f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4916a3:{NFSU2_TR(0x4916a3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4916a7:{NFSU2_TR(0x4916a7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4916ab:{NFSU2_TR(0x4916ab);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4916ad:{NFSU2_TR(0x4916ad);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4916b1:{NFSU2_TR(0x4916b1);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4916b8:{NFSU2_TR(0x4916b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4916bf:{NFSU2_TR(0x4916bf);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4916c6:{NFSU2_TR(0x4916c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4916cd:{NFSU2_TR(0x4916cd);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4916d4:{NFSU2_TR(0x4916d4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4916d8:{NFSU2_TR(0x4916d8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4916dc:{NFSU2_TR(0x4916dc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4916e0:{NFSU2_TR(0x4916e0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4916e4:{NFSU2_TR(0x4916e4);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4916eb:{NFSU2_TR(0x4916eb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4916ef:{NFSU2_TR(0x4916ef);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4916f3:{NFSU2_TR(0x4916f3);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4916fa:{NFSU2_TR(0x4916fa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4916fe:{NFSU2_TR(0x4916fe);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491705:{NFSU2_TR(0x491705);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491709:{NFSU2_TR(0x491709);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491710:{NFSU2_TR(0x491710);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491714:{NFSU2_TR(0x491714);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49171b:{NFSU2_TR(0x49171b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B49171d:{NFSU2_TR(0x49171d);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491724:{NFSU2_TR(0x491724);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49172b:{NFSU2_TR(0x49172b);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491732:{NFSU2_TR(0x491732);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491739:{NFSU2_TR(0x491739);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49173d:{NFSU2_TR(0x49173d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491741:{NFSU2_TR(0x491741);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491745:{NFSU2_TR(0x491745);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491749:{NFSU2_TR(0x491749);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491750:{NFSU2_TR(0x491750);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491754:{NFSU2_TR(0x491754);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491758:{NFSU2_TR(0x491758);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49175f:{NFSU2_TR(0x49175f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491763:{NFSU2_TR(0x491763);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49176a:{NFSU2_TR(0x49176a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49176e:{NFSU2_TR(0x49176e);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491775:{NFSU2_TR(0x491775);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491779:{NFSU2_TR(0x491779);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491780:{NFSU2_TR(0x491780);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B491782:{NFSU2_TR(0x491782);
u8 U[8];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491789:{NFSU2_TR(0x491789);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491790:{NFSU2_TR(0x491790);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491792:{NFSU2_TR(0x491792);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491794:{NFSU2_TR(0x491794);
{u32 ea_=u32(r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49179b:{NFSU2_TR(0x49179b);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4917a0:{NFSU2_TR(0x4917a0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4917a2:{NFSU2_TR(0x4917a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4917a3:{NFSU2_TR(0x4917a3);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4917aa:{NFSU2_TR(0x4917aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4917b1:{NFSU2_TR(0x4917b1);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4917b8:{NFSU2_TR(0x4917b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4917bf:{NFSU2_TR(0x4917bf);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4917c6:{NFSU2_TR(0x4917c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4917c7:{NFSU2_TR(0x4917c7);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4917cb:{NFSU2_TR(0x4917cb);
__builtin_memmove((R+4),(R+28),4);
}
B4917cd:{NFSU2_TR(0x4917cd);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4917d4:{NFSU2_TR(0x4917d4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4917d6:{NFSU2_TR(0x4917d6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4917da:{NFSU2_TR(0x4917da);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4917e1:{NFSU2_TR(0x4917e1);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4917e5:{NFSU2_TR(0x4917e5);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4917ec:{NFSU2_TR(0x4917ec);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4917f0:{NFSU2_TR(0x4917f0);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4917f7:{NFSU2_TR(0x4917f7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4917fb:{NFSU2_TR(0x4917fb);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4917fd:{NFSU2_TR(0x4917fd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491801:{NFSU2_TR(0x491801);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491808:{NFSU2_TR(0x491808);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49180f:{NFSU2_TR(0x49180f);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491816:{NFSU2_TR(0x491816);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49181d:{NFSU2_TR(0x49181d);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491824:{NFSU2_TR(0x491824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491829ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B491829:L491829:{c.instructions+=7;NFSU2_TR(0x491829);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49182d:{NFSU2_TR(0x49182d);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491831:{NFSU2_TR(0x491831);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B491834:{NFSU2_TR(0x491834);
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
B491835:{NFSU2_TR(0x491835);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491839:{NFSU2_TR(0x491839);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49183d:{NFSU2_TR(0x49183d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491250u);}goto L491250;}}
}
B491843:L491843:{c.instructions+=9;NFSU2_TR(0x491843);
u8 U[8];
w4(U+0,u32(u32(u32(0x614ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49184a:{NFSU2_TR(0x49184a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49184b:{NFSU2_TR(0x49184b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49184c:{NFSU2_TR(0x49184c);
w4(R+0,u32(0x1ull));
}
B491851:{NFSU2_TR(0x491851);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491858:{NFSU2_TR(0x491858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B491859:{NFSU2_TR(0x491859);
__builtin_memmove((R+16),(R+20),4);
}
B49185b:{NFSU2_TR(0x49185b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49185c:{NFSU2_TR(0x49185c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491860:L491860:{c.instructions+=6;NFSU2_TR(0x491860);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491861:{NFSU2_TR(0x491861);
__builtin_memmove((R+20),(R+16),4);
}
B491863:{NFSU2_TR(0x491863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B491866:{NFSU2_TR(0x491866);
__builtin_memmove((R+0),gp(0x7f3d40),4);
}
B49186b:{NFSU2_TR(0x49186b);
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
B49186d:{NFSU2_TR(0x49186d);
if(r1(R+518)){{goto L491937;}}
}
B491873:L491873:{c.instructions+=2;NFSU2_TR(0x491873);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B49187a:{NFSU2_TR(0x49187a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491937;}}
}
B491880:L491880:{c.instructions+=8;NFSU2_TR(0x491880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491881:{NFSU2_TR(0x491881);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B491884:{NFSU2_TR(0x491884);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491887:{NFSU2_TR(0x491887);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491888:{NFSU2_TR(0x491888);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B49188b:{NFSU2_TR(0x49188b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49188c:{NFSU2_TR(0x49188c);
w4(R+4,u32(0x883e70ull));
}
B491891:{NFSU2_TR(0x491891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491896ull));
TAIL_STATIC(0x5e00d0u,5e0);
}
B491896:L491896:{c.instructions+=4;NFSU2_TR(0x491896);
__builtin_memmove((R+28),(R+0),4);
}
B491898:{NFSU2_TR(0x491898);
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
B49189a:{NFSU2_TR(0x49189a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49189d:{NFSU2_TR(0x49189d);
if(r1(R+518)){{goto L491935;}}
}
B4918a3:L4918a3:{c.instructions+=4;NFSU2_TR(0x4918a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4918a6:{NFSU2_TR(0x4918a6);
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
B4918a8:{NFSU2_TR(0x4918a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4918af:{NFSU2_TR(0x4918af);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L491935;}}
}
B4918b5:L4918b5:{c.instructions+=4;NFSU2_TR(0x4918b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4918b8:{NFSU2_TR(0x4918b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4918bb:{NFSU2_TR(0x4918bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4918bc:{NFSU2_TR(0x4918bc);
__builtin_memmove((R+16),(R+16),4);
}
B4918c0:L4918c0:{c.instructions+=5;NFSU2_TR(0x4918c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4918c3:{NFSU2_TR(0x4918c3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B4918c6:{NFSU2_TR(0x4918c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4918cd:{NFSU2_TR(0x4918cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4918cf:{NFSU2_TR(0x4918cf);
if(r1(R+518)){{goto L49191d;}}
}
B4918d1:L4918d1:{c.instructions+=3;NFSU2_TR(0x4918d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4918d4:{NFSU2_TR(0x4918d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4918d6:{NFSU2_TR(0x4918d6);
if(r1(R+518)){{goto L49191d;}}
}
B4918d8:L4918d8:{c.instructions+=7;NFSU2_TR(0x4918d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4918da:{NFSU2_TR(0x4918da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4918dd:{NFSU2_TR(0x4918dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4918de:{NFSU2_TR(0x4918de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4918e1:{NFSU2_TR(0x4918e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4918e2:{NFSU2_TR(0x4918e2);
__builtin_memmove((R+4),(R+12),4);
}
B4918e4:{NFSU2_TR(0x4918e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4918e9ull));
TAIL_STATIC(0x5bc300u,5bc);
}
B4918e9:L4918e9:{c.instructions+=2;NFSU2_TR(0x4918e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4918eb:{NFSU2_TR(0x4918eb);
if(r1(R+518)){{goto L49191d;}}
}
B4918ed:L4918ed:{c.instructions+=4;NFSU2_TR(0x4918ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4918f0:{NFSU2_TR(0x4918f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4918f2:{NFSU2_TR(0x4918f2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4918f4:{NFSU2_TR(0x4918f4);
if(r1(R+518)){{goto L49191a;}}
}
B4918f6:L4918f6:{c.instructions+=10;NFSU2_TR(0x4918f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4918f9:{NFSU2_TR(0x4918f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4918fb:{NFSU2_TR(0x4918fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4918fd:{NFSU2_TR(0x4918fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4918fe:{NFSU2_TR(0x4918fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491900:{NFSU2_TR(0x491900);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491905:{NFSU2_TR(0x491905);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49190a:{NFSU2_TR(0x49190a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49190b:{NFSU2_TR(0x49190b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49190c:{NFSU2_TR(0x49190c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491911ull));
TAIL_STATIC(0x490920u,490);
}
B491911:L491911:{c.instructions+=4;NFSU2_TR(0x491911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491913:{NFSU2_TR(0x491913);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B491916:{NFSU2_TR(0x491916);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B491918:{NFSU2_TR(0x491918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4918f6u);}goto L4918f6;}}
}
B49191a:L49191a:{c.instructions+=1;NFSU2_TR(0x49191a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49191d:L49191d:{c.instructions+=9;NFSU2_TR(0x49191d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491920:{NFSU2_TR(0x491920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491923:{NFSU2_TR(0x491923);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491926:{NFSU2_TR(0x491926);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B491927:{NFSU2_TR(0x491927);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B49192a:{NFSU2_TR(0x49192a);
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
B49192c:{NFSU2_TR(0x49192c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49192f:{NFSU2_TR(0x49192f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491932:{NFSU2_TR(0x491932);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4918c0u);}goto L4918c0;}}
}
B491934:L491934:{c.instructions+=1;NFSU2_TR(0x491934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491935:L491935:{c.instructions+=2;NFSU2_TR(0x491935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491936:{NFSU2_TR(0x491936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B491937:L491937:{c.instructions+=3;NFSU2_TR(0x491937);
__builtin_memmove((R+16),(R+20),4);
}
B491939:{NFSU2_TR(0x491939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49193a:{NFSU2_TR(0x49193a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491940:L491940:{c.instructions+=16;NFSU2_TR(0x491940);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491942:{NFSU2_TR(0x491942);
u8 U[4];
w4(U+0,u32(0x7727cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491947:{NFSU2_TR(0x491947);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49194d:{NFSU2_TR(0x49194d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49194e:{NFSU2_TR(0x49194e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491955:{NFSU2_TR(0x491955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491956:{NFSU2_TR(0x491956);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491957:{NFSU2_TR(0x491957);
__builtin_memmove((R+24),(R+4),4);
}
B491959:{NFSU2_TR(0x491959);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B49195c:{NFSU2_TR(0x49195c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49195d:{NFSU2_TR(0x49195d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491961:{NFSU2_TR(0x491961);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B491963:{NFSU2_TR(0x491963);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491966:{NFSU2_TR(0x491966);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B491968:{NFSU2_TR(0x491968);
w4(R+4,u32(0x1cull));
}
B49196d:{NFSU2_TR(0x49196d);
__builtin_memmove((R+28),(R+24),4);
}
B49196f:L49196f:{c.instructions+=1;NFSU2_TR(0x49196f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L491971;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49196fu);}goto L49196f;}
}
B491971:L491971:{c.instructions+=16;NFSU2_TR(0x491971);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B491973:{NFSU2_TR(0x491973);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491976:{NFSU2_TR(0x491976);
__builtin_memmove((R+4),(R+24),4);
}
B491978:{NFSU2_TR(0x491978);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x832de0ull))));
}
B49197e:{NFSU2_TR(0x49197e);
w4(R+0,u32(0x92492493ull));
}
B491983:{NFSU2_TR(0x491983);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B491985:{NFSU2_TR(0x491985);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B491987:{NFSU2_TR(0x491987);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B49198a:{NFSU2_TR(0x49198a);
__builtin_memmove((R+0),(R+8),4);
}
B49198c:{NFSU2_TR(0x49198c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B49198f:{NFSU2_TR(0x49198f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B491991:{NFSU2_TR(0x491991);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491992:{NFSU2_TR(0x491992);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49199a:{NFSU2_TR(0x49199a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4919a1:{NFSU2_TR(0x4919a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4919a4:{NFSU2_TR(0x4919a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4919a9ull));
TAIL_STATIC(0x5bc5b0u,5bc);
}
B4919a9:L4919a9:{c.instructions+=11;NFSU2_TR(0x4919a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4919ad:{NFSU2_TR(0x4919ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4919b0:{NFSU2_TR(0x4919b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4919b2:{NFSU2_TR(0x4919b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4919b9:{NFSU2_TR(0x4919b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4919c0:{NFSU2_TR(0x4919c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4919c1:{NFSU2_TR(0x4919c1);
__builtin_memmove((R+0),(R+24),4);
}
B4919c3:{NFSU2_TR(0x4919c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4919c4:{NFSU2_TR(0x4919c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4919cb:{NFSU2_TR(0x4919cb);
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
B4919ce:{NFSU2_TR(0x4919ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4919d0:L4919d0:{c.instructions+=2;NFSU2_TR(0x4919d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B4919d3:{NFSU2_TR(0x4919d3);
TAIL_STATIC(0x4358e0u,435);
}
B4919e0:L4919e0:{c.instructions+=7;NFSU2_TR(0x4919e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4919e4:{NFSU2_TR(0x4919e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4919e5:{NFSU2_TR(0x4919e5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4919e7:{NFSU2_TR(0x4919e7);
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
B4919e9:{NFSU2_TR(0x4919e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4919ea:{NFSU2_TR(0x4919ea);
__builtin_memmove((R+28),(R+4),4);
}
B4919ec:{NFSU2_TR(0x4919ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L491a24;}}
}
B4919ee:L4919ee:{c.instructions+=5;NFSU2_TR(0x4919ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4919ef:{NFSU2_TR(0x4919ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4919f3:{NFSU2_TR(0x4919f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4919f4:{NFSU2_TR(0x4919f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4919f8:{NFSU2_TR(0x4919f8);
{goto L491a00;}
}
B491a00:L491a00:{c.instructions+=8;NFSU2_TR(0x491a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491a03:{NFSU2_TR(0x491a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491a06:{NFSU2_TR(0x491a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B491a09:{NFSU2_TR(0x491a09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a0a:{NFSU2_TR(0x491a0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a0b:{NFSU2_TR(0x491a0b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a0c:{NFSU2_TR(0x491a0c);
__builtin_memmove((R+4),(R+28),4);
}
B491a0e:{NFSU2_TR(0x491a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491a13ull));
TAIL_STATIC(0x48fd30u,48f);
}
B491a13:L491a13:{c.instructions+=6;NFSU2_TR(0x491a13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491a17:{NFSU2_TR(0x491a17);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B491a18:{NFSU2_TR(0x491a18);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B491a1b:{NFSU2_TR(0x491a1b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x7cull))));
}
B491a1e:{NFSU2_TR(0x491a1e);
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
B491a20:{NFSU2_TR(0x491a20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491a00u);}goto L491a00;}}
}
B491a22:L491a22:{c.instructions+=2;NFSU2_TR(0x491a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491a23:{NFSU2_TR(0x491a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B491a24:L491a24:{c.instructions+=3;NFSU2_TR(0x491a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491a25:{NFSU2_TR(0x491a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491a26:{NFSU2_TR(0x491a26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491a30:L491a30:{c.instructions+=9;NFSU2_TR(0x491a30);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491a34:{NFSU2_TR(0x491a34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a35:{NFSU2_TR(0x491a35);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a36:{NFSU2_TR(0x491a36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a37:{NFSU2_TR(0x491a37);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B491a39:{NFSU2_TR(0x491a39);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B491a3b:{NFSU2_TR(0x491a3b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B491a3d:{NFSU2_TR(0x491a3d);
__builtin_memmove((R+12),(R+4),4);
}
B491a3f:{NFSU2_TR(0x491a3f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L491ab9;}}
}
B491a41:L491a41:{c.instructions+=4;NFSU2_TR(0x491a41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a42:{NFSU2_TR(0x491a42);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B491a46:{NFSU2_TR(0x491a46);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B491a49:{NFSU2_TR(0x491a49);
__builtin_memmove((R+16),(R+16),4);
}
B491a50:L491a50:{c.instructions+=5;NFSU2_TR(0x491a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491a53:{NFSU2_TR(0x491a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491a56:{NFSU2_TR(0x491a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B491a59:{NFSU2_TR(0x491a59);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B491a5b:{NFSU2_TR(0x491a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491a7c;}}
}
B491a5d:L491a5d:{c.instructions+=2;NFSU2_TR(0x491a5d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B491a5f:{NFSU2_TR(0x491a5f);
if(r1(R+518)){{goto L491a9a;}}
}
B491a61:L491a61:{c.instructions+=2;NFSU2_TR(0x491a61);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B491a63:{NFSU2_TR(0x491a63);
if(r1(R+518)){{goto L491a9a;}}
}
B491a65:L491a65:{c.instructions+=8;NFSU2_TR(0x491a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491a68:{NFSU2_TR(0x491a68);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a6a:{NFSU2_TR(0x491a6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a6b:{NFSU2_TR(0x491a6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a6c:{NFSU2_TR(0x491a6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a6d:{NFSU2_TR(0x491a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B491a6f:{NFSU2_TR(0x491a6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491a70:{NFSU2_TR(0x491a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491a75ull));
TAIL_STATIC(0x488bc0u,488);
}
B491a75:L491a75:{c.instructions+=3;NFSU2_TR(0x491a75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B491a78:{NFSU2_TR(0x491a78);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B491a7a:{NFSU2_TR(0x491a7a);
if(r1(R+518)){{goto L491a9a;}}
}
B491a7c:L491a7c:{c.instructions+=8;NFSU2_TR(0x491a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491a7f:{NFSU2_TR(0x491a7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491a81:{NFSU2_TR(0x491a81);
__builtin_memmove((R+8),gp(0x833780),4);
}
B491a87:{NFSU2_TR(0x491a87);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B491a8c:{NFSU2_TR(0x491a8c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B491a8d:{NFSU2_TR(0x491a8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x833784ull))));
}
B491a92:{NFSU2_TR(0x491a92);
__builtin_memmove(gp(0x833780),(R+8),4);
}
B491a98:{NFSU2_TR(0x491a98);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))-u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B491a9a:L491a9a:{c.instructions+=4;NFSU2_TR(0x491a9a);
__builtin_memmove((R+0),gp(0x82db08),4);
}
B491a9f:{NFSU2_TR(0x491a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B491aa2:{NFSU2_TR(0x491aa2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B491aa4:{NFSU2_TR(0x491aa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491aac;}}
}
B491aa6:L491aa6:{c.instructions+=1;NFSU2_TR(0x491aa6);
__builtin_memmove(gp(0x82db08),(R+20),4);
}
B491aac:L491aac:{c.instructions+=5;NFSU2_TR(0x491aac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491ab0:{NFSU2_TR(0x491ab0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B491ab1:{NFSU2_TR(0x491ab1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7cull))));
}
B491ab4:{NFSU2_TR(0x491ab4);
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
B491ab6:{NFSU2_TR(0x491ab6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491a50u);}goto L491a50;}}
}
B491ab8:L491ab8:{c.instructions+=1;NFSU2_TR(0x491ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491ab9:L491ab9:{c.instructions+=4;NFSU2_TR(0x491ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491aba:{NFSU2_TR(0x491aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491abb:{NFSU2_TR(0x491abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B491abc:{NFSU2_TR(0x491abc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491ac0:L491ac0:{c.instructions+=5;NFSU2_TR(0x491ac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491ac1:{NFSU2_TR(0x491ac1);
__builtin_memmove((R+24),(R+4),4);
}
B491ac3:{NFSU2_TR(0x491ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491ac5:{NFSU2_TR(0x491ac5);
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
B491ac7:{NFSU2_TR(0x491ac7);
if(r1(R+518)){{goto L491aef;}}
}
B491ac9:L491ac9:{c.instructions+=1;NFSU2_TR(0x491ac9);
__builtin_memmove((R+16),(R+16),4);
}
B491ad0:L491ad0:{c.instructions+=8;NFSU2_TR(0x491ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B491ad2:{NFSU2_TR(0x491ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491ad5:{NFSU2_TR(0x491ad5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B491ad7:{NFSU2_TR(0x491ad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491ad8:{NFSU2_TR(0x491ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491adb:{NFSU2_TR(0x491adb);
__builtin_memmove((R+0),gp(0x82da38),4);
}
B491ae0:{NFSU2_TR(0x491ae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491ae1:{NFSU2_TR(0x491ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491ae6ull));
TAIL_STATIC(0x43f920u,43f);
}
B491ae6:L491ae6:{c.instructions+=4;NFSU2_TR(0x491ae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491ae8:{NFSU2_TR(0x491ae8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B491aeb:{NFSU2_TR(0x491aeb);
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
B491aed:{NFSU2_TR(0x491aed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491ad0u);}goto L491ad0;}}
}
B491aef:L491aef:{c.instructions+=2;NFSU2_TR(0x491aef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491af0:{NFSU2_TR(0x491af0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491b00:L491b00:{c.instructions+=5;NFSU2_TR(0x491b00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491b01:{NFSU2_TR(0x491b01);
__builtin_memmove((R+24),(R+4),4);
}
B491b03:{NFSU2_TR(0x491b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491b05:{NFSU2_TR(0x491b05);
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
B491b07:{NFSU2_TR(0x491b07);
if(r1(R+518)){{goto L491b2f;}}
}
B491b09:L491b09:{c.instructions+=1;NFSU2_TR(0x491b09);
__builtin_memmove((R+16),(R+16),4);
}
B491b10:L491b10:{c.instructions+=8;NFSU2_TR(0x491b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B491b12:{NFSU2_TR(0x491b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491b15:{NFSU2_TR(0x491b15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B491b17:{NFSU2_TR(0x491b17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491b18:{NFSU2_TR(0x491b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491b1b:{NFSU2_TR(0x491b1b);
__builtin_memmove((R+0),gp(0x82da84),4);
}
B491b20:{NFSU2_TR(0x491b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491b21:{NFSU2_TR(0x491b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491b26ull));
TAIL_STATIC(0x43f920u,43f);
}
B491b26:L491b26:{c.instructions+=4;NFSU2_TR(0x491b26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491b28:{NFSU2_TR(0x491b28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B491b2b:{NFSU2_TR(0x491b2b);
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
B491b2d:{NFSU2_TR(0x491b2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491b10u);}goto L491b10;}}
}
B491b2f:L491b2f:{c.instructions+=2;NFSU2_TR(0x491b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491b30:{NFSU2_TR(0x491b30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491b40:L491b40:{c.instructions+=5;NFSU2_TR(0x491b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491b41:{NFSU2_TR(0x491b41);
__builtin_memmove((R+24),(R+4),4);
}
B491b43:{NFSU2_TR(0x491b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491b45:{NFSU2_TR(0x491b45);
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
B491b47:{NFSU2_TR(0x491b47);
if(r1(R+518)){{goto L491b70;}}
}
B491b49:L491b49:{c.instructions+=1;NFSU2_TR(0x491b49);
__builtin_memmove((R+16),(R+16),4);
}
B491b50:L491b50:{c.instructions+=7;NFSU2_TR(0x491b50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B491b52:{NFSU2_TR(0x491b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491b55:{NFSU2_TR(0x491b55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B491b58:{NFSU2_TR(0x491b58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491b5a:{NFSU2_TR(0x491b5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B491b5c:{NFSU2_TR(0x491b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491b5f:{NFSU2_TR(0x491b5f);
if(r1(R+518)){{goto L491b6a;}}
}
B491b61:L491b61:{c.instructions+=2;NFSU2_TR(0x491b61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491b62:{NFSU2_TR(0x491b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491b67ull));
TAIL_STATIC(0x575630u,575);
}
B491b67:L491b67:{c.instructions+=1;NFSU2_TR(0x491b67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B491b6a:L491b6a:{c.instructions+=3;NFSU2_TR(0x491b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491b6c:{NFSU2_TR(0x491b6c);
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
B491b6e:{NFSU2_TR(0x491b6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491b50u);}goto L491b50;}}
}
B491b70:L491b70:{c.instructions+=2;NFSU2_TR(0x491b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491b71:{NFSU2_TR(0x491b71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491b80:L491b80:{c.instructions+=6;NFSU2_TR(0x491b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491b81:{NFSU2_TR(0x491b81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491b82:{NFSU2_TR(0x491b82);
__builtin_memmove((R+28),(R+4),4);
}
B491b84:{NFSU2_TR(0x491b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491b86:{NFSU2_TR(0x491b86);
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
B491b88:{NFSU2_TR(0x491b88);
if(r1(R+518)){{goto L491bb6;}}
}
B491b8a:L491b8a:{c.instructions+=1;NFSU2_TR(0x491b8a);
__builtin_memmove((R+12),(R+12),4);
}
B491b90:L491b90:{c.instructions+=6;NFSU2_TR(0x491b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491b93:{NFSU2_TR(0x491b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491b95:{NFSU2_TR(0x491b95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B491b97:{NFSU2_TR(0x491b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491b9a:{NFSU2_TR(0x491b9a);
__builtin_memmove((R+4),(R+24),4);
}
B491b9c:{NFSU2_TR(0x491b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491ba1ull));
TAIL_STATIC(0x48fd10u,48f);
}
B491ba1:L491ba1:{c.instructions+=4;NFSU2_TR(0x491ba1);
__builtin_memmove((R+0),gp(0x82db0c),4);
}
B491ba6:{NFSU2_TR(0x491ba6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491ba7:{NFSU2_TR(0x491ba7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491ba8:{NFSU2_TR(0x491ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491badull));
TAIL_STATIC(0x43f920u,43f);
}
B491bad:L491bad:{c.instructions+=4;NFSU2_TR(0x491bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491baf:{NFSU2_TR(0x491baf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B491bb2:{NFSU2_TR(0x491bb2);
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
B491bb4:{NFSU2_TR(0x491bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491b90u);}goto L491b90;}}
}
B491bb6:L491bb6:{c.instructions+=3;NFSU2_TR(0x491bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491bb7:{NFSU2_TR(0x491bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491bb8:{NFSU2_TR(0x491bb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491bc0:L491bc0:{c.instructions+=6;NFSU2_TR(0x491bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491bc1:{NFSU2_TR(0x491bc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491bc2:{NFSU2_TR(0x491bc2);
__builtin_memmove((R+28),(R+4),4);
}
B491bc4:{NFSU2_TR(0x491bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491bc6:{NFSU2_TR(0x491bc6);
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
B491bc8:{NFSU2_TR(0x491bc8);
if(r1(R+518)){{goto L491bf6;}}
}
B491bca:L491bca:{c.instructions+=1;NFSU2_TR(0x491bca);
__builtin_memmove((R+12),(R+12),4);
}
B491bd0:L491bd0:{c.instructions+=6;NFSU2_TR(0x491bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491bd3:{NFSU2_TR(0x491bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491bd5:{NFSU2_TR(0x491bd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B491bd7:{NFSU2_TR(0x491bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491bda:{NFSU2_TR(0x491bda);
__builtin_memmove((R+4),(R+24),4);
}
B491bdc:{NFSU2_TR(0x491bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491be1ull));
TAIL_STATIC(0x48fed0u,48f);
}
B491be1:L491be1:{c.instructions+=4;NFSU2_TR(0x491be1);
__builtin_memmove((R+0),gp(0x82db0c),4);
}
B491be6:{NFSU2_TR(0x491be6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491be7:{NFSU2_TR(0x491be7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491be8:{NFSU2_TR(0x491be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491bedull));
TAIL_STATIC(0x43f920u,43f);
}
B491bed:L491bed:{c.instructions+=4;NFSU2_TR(0x491bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491bef:{NFSU2_TR(0x491bef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B491bf2:{NFSU2_TR(0x491bf2);
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
B491bf4:{NFSU2_TR(0x491bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491bd0u);}goto L491bd0;}}
}
B491bf6:L491bf6:{c.instructions+=3;NFSU2_TR(0x491bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491bf7:{NFSU2_TR(0x491bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491bf8:{NFSU2_TR(0x491bf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491c00:L491c00:{c.instructions+=14;NFSU2_TR(0x491c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491c04:{NFSU2_TR(0x491c04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c05:{NFSU2_TR(0x491c05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c06:{NFSU2_TR(0x491c06);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B491c0a:{NFSU2_TR(0x491c0a);
u8 U[4];
w4(U+0,u32(0x491ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c0f:{NFSU2_TR(0x491c0f);
u8 U[4];
w4(U+0,u32(0x598750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c14:{NFSU2_TR(0x491c14);
__builtin_memmove((R+24),(R+4),4);
}
B491c16:{NFSU2_TR(0x491c16);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c18:{NFSU2_TR(0x491c18);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c1a:{NFSU2_TR(0x491c1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B491c1d:{NFSU2_TR(0x491c1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c1e:{NFSU2_TR(0x491c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c21:{NFSU2_TR(0x491c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c24:{NFSU2_TR(0x491c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491c29ull));
TAIL_STATIC(0x75c461u,75c);
}
B491c29:L491c29:{c.instructions+=10;NFSU2_TR(0x491c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491c2c:{NFSU2_TR(0x491c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c2f:{NFSU2_TR(0x491c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c32:{NFSU2_TR(0x491c32);
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
B491c34:{NFSU2_TR(0x491c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c37:{NFSU2_TR(0x491c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c3a:{NFSU2_TR(0x491c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491c3b:{NFSU2_TR(0x491c3b);
__builtin_memmove((R+0),(R+24),4);
}
B491c3d:{NFSU2_TR(0x491c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491c3e:{NFSU2_TR(0x491c3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491c50:L491c50:{c.instructions+=9;NFSU2_TR(0x491c50);
u8 U[4];
w4(U+0,u32(0x491ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c55:{NFSU2_TR(0x491c55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B491c57:{NFSU2_TR(0x491c57);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c59:{NFSU2_TR(0x491c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c5c:{NFSU2_TR(0x491c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491c5f:{NFSU2_TR(0x491c5f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c61:{NFSU2_TR(0x491c61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B491c64:{NFSU2_TR(0x491c64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c65:{NFSU2_TR(0x491c65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491c6aull));
TAIL_STATIC(0x75c401u,75c);
}
B491c6a:L491c6a:{c.instructions+=1;NFSU2_TR(0x491c6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491c70:L491c70:{c.instructions+=6;NFSU2_TR(0x491c70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c71:{NFSU2_TR(0x491c71);
__builtin_memmove((R+20),(R+16),4);
}
B491c73:{NFSU2_TR(0x491c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491c76:{NFSU2_TR(0x491c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491c78:{NFSU2_TR(0x491c78);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80035000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80035000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80035000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491c7d:{NFSU2_TR(0x491c7d);
if(r1(R+518)){{goto L491c86;}}
}
B491c7f:L491c7f:{c.instructions+=2;NFSU2_TR(0x491c7f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80035010ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80035010ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80035010ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491c84:{NFSU2_TR(0x491c84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491c8d;}}
}
B491c86:L491c86:{c.instructions+=3;NFSU2_TR(0x491c86);
w4(R+0,u32(0x1ull));
}
B491c8b:{NFSU2_TR(0x491c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491c8c:{NFSU2_TR(0x491c8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491c8d:L491c8d:{c.instructions+=4;NFSU2_TR(0x491c8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35021ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491c92:{NFSU2_TR(0x491c92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c93:{NFSU2_TR(0x491c93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491c94:{NFSU2_TR(0x491c94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491ceb;}}
}
B491c96:L491c96:{c.instructions+=4;NFSU2_TR(0x491c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B491c99:{NFSU2_TR(0x491c99);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B491c9c:{NFSU2_TR(0x491c9c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B491ca0:{NFSU2_TR(0x491ca0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491ce2;}}
}
B491ca2:L491ca2:{c.instructions+=4;NFSU2_TR(0x491ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491ca5:{NFSU2_TR(0x491ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491ca8:{NFSU2_TR(0x491ca8);
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
B491caa:{NFSU2_TR(0x491caa);
if(r1(R+518)){{goto L491ce2;}}
}
B491cac:L491cac:{c.instructions+=2;NFSU2_TR(0x491cac);
__builtin_memmove((R+28),(R+0),4);
}
B491cae:{NFSU2_TR(0x491cae);
__builtin_memmove((R+28),(R+28),4);
}
B491cb0:L491cb0:{c.instructions+=10;NFSU2_TR(0x491cb0);
__builtin_memmove((R+0),gp(0x830d0c),4);
}
B491cb5:{NFSU2_TR(0x491cb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B491cb7:{NFSU2_TR(0x491cb7);
__builtin_memmove(gp(0x830d0c),(R+24),4);
}
B491cbd:{NFSU2_TR(0x491cbd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491cbf:{NFSU2_TR(0x491cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491cc2:{NFSU2_TR(0x491cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491cc5:{NFSU2_TR(0x491cc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491cc7:{NFSU2_TR(0x491cc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491cc8:{NFSU2_TR(0x491cc8);
u8 U[4];
w4(U+0,u32(0x830d08ull));
s4(u32(r4(R+24)),r4(U+0));
}
B491cce:{NFSU2_TR(0x491cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491cd3ull));
TAIL_STATIC(0x4901d0u,490);
}
B491cd3:L491cd3:{c.instructions+=5;NFSU2_TR(0x491cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491cd6:{NFSU2_TR(0x491cd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B491cd9:{NFSU2_TR(0x491cd9);
w1(R+512,carry<u32>(r4(R+24),u32(0x220ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x220ull))));
}
B491cdf:{NFSU2_TR(0x491cdf);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491ce0:{NFSU2_TR(0x491ce0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491cb0u);}goto L491cb0;}}
}
B491ce2:L491ce2:{c.instructions+=5;NFSU2_TR(0x491ce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491ce3:{NFSU2_TR(0x491ce3);
w4(R+0,u32(0x1ull));
}
B491ce8:{NFSU2_TR(0x491ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491ce9:{NFSU2_TR(0x491ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491cea:{NFSU2_TR(0x491cea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491ceb:L491ceb:{c.instructions+=2;NFSU2_TR(0x491ceb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35020ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491cf0:{NFSU2_TR(0x491cf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491d3c;}}
}
B491cf2:L491cf2:{c.instructions+=4;NFSU2_TR(0x491cf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491cf5:{NFSU2_TR(0x491cf5);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B491cf8:{NFSU2_TR(0x491cf8);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B491cfc:{NFSU2_TR(0x491cfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491d30;}}
}
B491cfe:L491cfe:{c.instructions+=5;NFSU2_TR(0x491cfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491cff:{NFSU2_TR(0x491cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B491d02:{NFSU2_TR(0x491d02);
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
B491d04:{NFSU2_TR(0x491d04);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491d07:{NFSU2_TR(0x491d07);
if(r1(R+518)){{goto L491d2f;}}
}
B491d09:L491d09:{c.instructions+=1;NFSU2_TR(0x491d09);
__builtin_memmove((R+16),(R+16),4);
}
B491d10:L491d10:{c.instructions+=4;NFSU2_TR(0x491d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491d13:{NFSU2_TR(0x491d13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491d14:{NFSU2_TR(0x491d14);
__builtin_memmove((R+4),(R+24),4);
}
B491d16:{NFSU2_TR(0x491d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491d1bull));
TAIL_STATIC(0x48bc00u,48b);
}
B491d1b:L491d1b:{c.instructions+=3;NFSU2_TR(0x491d1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491d1c:{NFSU2_TR(0x491d1c);
w4(R+4,u32(0x8357e0ull));
}
B491d21:{NFSU2_TR(0x491d21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491d26ull));
TAIL_STATIC(0x48bc50u,48b);
}
B491d26:L491d26:{c.instructions+=3;NFSU2_TR(0x491d26);
w1(R+512,carry<u32>(r4(R+24),u32(0xd0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
}
B491d2c:{NFSU2_TR(0x491d2c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491d2d:{NFSU2_TR(0x491d2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491d10u);}goto L491d10;}}
}
B491d2f:L491d2f:{c.instructions+=1;NFSU2_TR(0x491d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B491d30:L491d30:{c.instructions+=6;NFSU2_TR(0x491d30);
w4(R+0,u32(0x1ull));
}
B491d35:{NFSU2_TR(0x491d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491d38:{NFSU2_TR(0x491d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491d39:{NFSU2_TR(0x491d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491d3a:{NFSU2_TR(0x491d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491d3b:{NFSU2_TR(0x491d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491d3c:L491d3c:{c.instructions+=5;NFSU2_TR(0x491d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491d3d:{NFSU2_TR(0x491d3d);
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
B491d3f:{NFSU2_TR(0x491d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491d40:{NFSU2_TR(0x491d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491d41:{NFSU2_TR(0x491d41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491d50:L491d50:{c.instructions+=6;NFSU2_TR(0x491d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491d51:{NFSU2_TR(0x491d51);
__builtin_memmove((R+20),(R+16),4);
}
B491d53:{NFSU2_TR(0x491d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491d56:{NFSU2_TR(0x491d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491d58:{NFSU2_TR(0x491d58);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80035000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80035000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80035000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491d5d:{NFSU2_TR(0x491d5d);
if(r1(R+518)){{goto L491d66;}}
}
B491d5f:L491d5f:{c.instructions+=2;NFSU2_TR(0x491d5f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80035010ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80035010ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80035010ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491d64:{NFSU2_TR(0x491d64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491d6d;}}
}
B491d66:L491d66:{c.instructions+=3;NFSU2_TR(0x491d66);
w4(R+0,u32(0x1ull));
}
B491d6b:{NFSU2_TR(0x491d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491d6c:{NFSU2_TR(0x491d6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491d6d:L491d6d:{c.instructions+=3;NFSU2_TR(0x491d6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35021ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491d72:{NFSU2_TR(0x491d72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491d73:{NFSU2_TR(0x491d73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491daa;}}
}
B491d75:L491d75:{c.instructions+=4;NFSU2_TR(0x491d75);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x17ull))));
}
B491d78:{NFSU2_TR(0x491d78);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B491d7b:{NFSU2_TR(0x491d7b);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B491d7f:{NFSU2_TR(0x491d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491da2;}}
}
B491d81:L491d81:{c.instructions+=4;NFSU2_TR(0x491d81);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B491d84:{NFSU2_TR(0x491d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491d87:{NFSU2_TR(0x491d87);
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
B491d89:{NFSU2_TR(0x491d89);
if(r1(R+518)){{goto L491da2;}}
}
B491d8b:L491d8b:{c.instructions+=2;NFSU2_TR(0x491d8b);
__builtin_memmove((R+24),(R+4),4);
}
B491d8d:{NFSU2_TR(0x491d8d);
__builtin_memmove((R+4),(R+4),4);
}
B491d90:L491d90:{c.instructions+=7;NFSU2_TR(0x491d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B491d92:{NFSU2_TR(0x491d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491d95:{NFSU2_TR(0x491d95);
w1(R+512,carry<u32>(r4(R+0),u32(0x220ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x220ull))));
}
B491d9a:{NFSU2_TR(0x491d9a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491d9b:{NFSU2_TR(0x491d9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B491d9d:{NFSU2_TR(0x491d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491da0:{NFSU2_TR(0x491da0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491d90u);}goto L491d90;}}
}
B491da2:L491da2:{c.instructions+=4;NFSU2_TR(0x491da2);
w4(R+0,u32(0x1ull));
}
B491da7:{NFSU2_TR(0x491da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491da8:{NFSU2_TR(0x491da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491da9:{NFSU2_TR(0x491da9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491daa:L491daa:{c.instructions+=2;NFSU2_TR(0x491daa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35020ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491daf:{NFSU2_TR(0x491daf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491e02;}}
}
B491db1:L491db1:{c.instructions+=4;NFSU2_TR(0x491db1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B491db4:{NFSU2_TR(0x491db4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B491db7:{NFSU2_TR(0x491db7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B491dbb:{NFSU2_TR(0x491dbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491dfa;}}
}
B491dbd:L491dbd:{c.instructions+=4;NFSU2_TR(0x491dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491dc0:{NFSU2_TR(0x491dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491dc3:{NFSU2_TR(0x491dc3);
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
B491dc5:{NFSU2_TR(0x491dc5);
if(r1(R+518)){{goto L491dfa;}}
}
B491dc7:L491dc7:{c.instructions+=3;NFSU2_TR(0x491dc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491dc8:{NFSU2_TR(0x491dc8);
__builtin_memmove((R+28),(R+0),4);
}
B491dca:{NFSU2_TR(0x491dca);
__builtin_memmove((R+12),(R+12),4);
}
B491dd0:L491dd0:{c.instructions+=9;NFSU2_TR(0x491dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491dd3:{NFSU2_TR(0x491dd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491dd5:{NFSU2_TR(0x491dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B491dd7:{NFSU2_TR(0x491dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491dda:{NFSU2_TR(0x491dda);
__builtin_memmove((R+4),gp(0x835830),4);
}
B491de0:{NFSU2_TR(0x491de0);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491de1:{NFSU2_TR(0x491de1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491de2:{NFSU2_TR(0x491de2);
__builtin_memmove(gp(0x835830),(R+4),4);
}
B491de8:{NFSU2_TR(0x491de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491dedull));
TAIL_STATIC(0x4903e0u,490);
}
B491ded:L491ded:{c.instructions+=4;NFSU2_TR(0x491ded);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B491df0:{NFSU2_TR(0x491df0);
w1(R+512,carry<u32>(r4(R+24),u32(0xd0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
}
B491df6:{NFSU2_TR(0x491df6);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B491df7:{NFSU2_TR(0x491df7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491dd0u);}goto L491dd0;}}
}
B491df9:L491df9:{c.instructions+=1;NFSU2_TR(0x491df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491dfa:L491dfa:{c.instructions+=4;NFSU2_TR(0x491dfa);
w4(R+0,u32(0x1ull));
}
B491dff:{NFSU2_TR(0x491dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491e00:{NFSU2_TR(0x491e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491e01:{NFSU2_TR(0x491e01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491e02:L491e02:{c.instructions+=4;NFSU2_TR(0x491e02);
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
B491e04:{NFSU2_TR(0x491e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491e05:{NFSU2_TR(0x491e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B491e06:{NFSU2_TR(0x491e06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491e10:L491e10:{c.instructions+=6;NFSU2_TR(0x491e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e11:{NFSU2_TR(0x491e11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e12:{NFSU2_TR(0x491e12);
__builtin_memmove((R+28),(R+4),4);
}
B491e14:{NFSU2_TR(0x491e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491e16:{NFSU2_TR(0x491e16);
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
B491e18:{NFSU2_TR(0x491e18);
if(r1(R+518)){{goto L491e46;}}
}
B491e1a:L491e1a:{c.instructions+=1;NFSU2_TR(0x491e1a);
__builtin_memmove((R+12),(R+12),4);
}
B491e20:L491e20:{c.instructions+=6;NFSU2_TR(0x491e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491e23:{NFSU2_TR(0x491e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B491e25:{NFSU2_TR(0x491e25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B491e27:{NFSU2_TR(0x491e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491e2a:{NFSU2_TR(0x491e2a);
__builtin_memmove((R+4),(R+24),4);
}
B491e2c:{NFSU2_TR(0x491e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491e31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491c50u);}goto L491c50;}
}
B491e31:L491e31:{c.instructions+=4;NFSU2_TR(0x491e31);
__builtin_memmove((R+0),gp(0x82da3c),4);
}
B491e36:{NFSU2_TR(0x491e36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e37:{NFSU2_TR(0x491e37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e38:{NFSU2_TR(0x491e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491e3dull));
TAIL_STATIC(0x43f920u,43f);
}
B491e3d:L491e3d:{c.instructions+=4;NFSU2_TR(0x491e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B491e3f:{NFSU2_TR(0x491e3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B491e42:{NFSU2_TR(0x491e42);
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
B491e44:{NFSU2_TR(0x491e44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491e20u);}goto L491e20;}}
}
B491e46:L491e46:{c.instructions+=3;NFSU2_TR(0x491e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B491e47:{NFSU2_TR(0x491e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B491e48:{NFSU2_TR(0x491e48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B491e50:L491e50:{c.instructions+=19;NFSU2_TR(0x491e50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e51:{NFSU2_TR(0x491e51);
__builtin_memmove((R+20),(R+16),4);
}
B491e53:{NFSU2_TR(0x491e53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B491e56:{NFSU2_TR(0x491e56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e58:{NFSU2_TR(0x491e58);
u8 U[4];
w4(U+0,u32(0x7727eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e5d:{NFSU2_TR(0x491e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491e63:{NFSU2_TR(0x491e63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e64:{NFSU2_TR(0x491e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491e6b:{NFSU2_TR(0x491e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x228ull))));
}
B491e71:{NFSU2_TR(0x491e71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e72:{NFSU2_TR(0x491e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B491e75:{NFSU2_TR(0x491e75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e76:{NFSU2_TR(0x491e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B491e79:{NFSU2_TR(0x491e79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491e7a:{NFSU2_TR(0x491e7a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B491e7c:{NFSU2_TR(0x491e7c);
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
B491e7e:{NFSU2_TR(0x491e7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491e82:{NFSU2_TR(0x491e82);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491e89:{NFSU2_TR(0x491e89);
if(r1(R+518)){TAIL_STATIC(0x492df7u,492);}
}
B491e8f:L491e8f:{c.instructions+=5;NFSU2_TR(0x491e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491e95:{NFSU2_TR(0x491e95);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B491e98:{NFSU2_TR(0x491e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491e9c:{NFSU2_TR(0x491e9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491ea0:{NFSU2_TR(0x491ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491ea4:L491ea4:{c.instructions+=2;NFSU2_TR(0x491ea4);
u8 U[22];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
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
B491ea9:{NFSU2_TR(0x491ea9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L491ee4;}}
}
B491eab:L491eab:{c.instructions+=5;NFSU2_TR(0x491eab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491eaf:{NFSU2_TR(0x491eaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491eb0:{NFSU2_TR(0x491eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B491eb3:{NFSU2_TR(0x491eb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491eb4:{NFSU2_TR(0x491eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491eb9ull));
TAIL_STATIC(0x43ce10u,43c);
}
B491eb9:L491eb9:{c.instructions+=5;NFSU2_TR(0x491eb9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B491ebd:{NFSU2_TR(0x491ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B491ec0:{NFSU2_TR(0x491ec0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B491ec2:{NFSU2_TR(0x491ec2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B491ec5:{NFSU2_TR(0x491ec5);
if(r1(R+514)){{goto L491ecc;}}
}
B491ec7:L491ec7:{c.instructions+=1;NFSU2_TR(0x491ec7);
w4(R+28,u32(0x1ull));
}
B491ecc:L491ecc:{c.instructions+=8;NFSU2_TR(0x491ecc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491ed0:{NFSU2_TR(0x491ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491ed4:{NFSU2_TR(0x491ed4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B491ed5:{NFSU2_TR(0x491ed5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B491ed8:{NFSU2_TR(0x491ed8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491eda:{NFSU2_TR(0x491eda);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491ede:{NFSU2_TR(0x491ede);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491ee2:{NFSU2_TR(0x491ee2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x491ea4u);}goto L491ea4;}}
}
B491ee4:L491ee4:{c.instructions+=3;NFSU2_TR(0x491ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491ee7:{NFSU2_TR(0x491ee7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491ee9:{NFSU2_TR(0x491ee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491f36;}}
}
B491eeb:L491eeb:{c.instructions+=16;NFSU2_TR(0x491eeb);
__builtin_memmove((R+4),gp(0x7f3940),4);
}
B491ef1:{NFSU2_TR(0x491ef1);
__builtin_memmove((R+0),(R+4),4);
}
B491ef3:{NFSU2_TR(0x491ef3);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B491ef6:{NFSU2_TR(0x491ef6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B491ef8:{NFSU2_TR(0x491ef8);
__builtin_memmove((R+8),(R+0),4);
}
B491efa:{NFSU2_TR(0x491efa);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B491efd:{NFSU2_TR(0x491efd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B491eff:{NFSU2_TR(0x491eff);
__builtin_memmove((R+4),(R+0),4);
}
B491f01:{NFSU2_TR(0x491f01);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B491f04:{NFSU2_TR(0x491f04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B491f06:{NFSU2_TR(0x491f06);
__builtin_memmove(gp(0x7f3940),(R+0),4);
}
B491f0b:{NFSU2_TR(0x491f0b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B491f10:{NFSU2_TR(0x491f10);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B491f12:{NFSU2_TR(0x491f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491f16:{NFSU2_TR(0x491f16);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B491f1a:{NFSU2_TR(0x491f1a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L491f22;}}
}
B491f1c:L491f1c:{c.instructions+=1;NFSU2_TR(0x491f1c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B491f22:L491f22:{c.instructions+=3;NFSU2_TR(0x491f22);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491f28:{NFSU2_TR(0x491f28);
{u32 ea_=u32(u32(7892356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B491f2e:{NFSU2_TR(0x491f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491f33ull));
TAIL_STATIC(0x75bed4u,75b);
}
B491f33:L491f33:{c.instructions+=1;NFSU2_TR(0x491f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491f36:L491f36:{c.instructions+=3;NFSU2_TR(0x491f36);
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
B491f38:{NFSU2_TR(0x491f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491f3b:{NFSU2_TR(0x491f3b);
if(r1(R+518)){TAIL_STATIC(0x492df7u,492);}
}
B491f41:L491f41:{c.instructions+=2;NFSU2_TR(0x491f41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B491f44:{NFSU2_TR(0x491f44);
if(r1(R+518)){{goto L491f5a;}}
}
B491f46:L491f46:{c.instructions+=5;NFSU2_TR(0x491f46);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491f49:{NFSU2_TR(0x491f49);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B491f4f:{NFSU2_TR(0x491f4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B491f51:{NFSU2_TR(0x491f51);
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
B491f54:{NFSU2_TR(0x491f54);
if(r1(R+514)){TAIL_STATIC(0x492df7u,492);}
}
B491f5a:L491f5a:{c.instructions+=9;NFSU2_TR(0x491f5a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491f5d:{NFSU2_TR(0x491f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B491f60:{NFSU2_TR(0x491f60);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B491f66:{NFSU2_TR(0x491f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491f69:{NFSU2_TR(0x491f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491f6d:{NFSU2_TR(0x491f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491f71:{NFSU2_TR(0x491f71);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B491f73:{NFSU2_TR(0x491f73);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B491f76:{NFSU2_TR(0x491f76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491fa1;}}
}
B491f78:L491f78:{c.instructions+=5;NFSU2_TR(0x491f78);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491f7c:{NFSU2_TR(0x491f7c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B491f82:{NFSU2_TR(0x491f82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B491f84:{NFSU2_TR(0x491f84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B491f87:{NFSU2_TR(0x491f87);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L491faa;}}
}
B491f89:L491f89:{c.instructions+=5;NFSU2_TR(0x491f89);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491f8c:{NFSU2_TR(0x491f8c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B491f90:{NFSU2_TR(0x491f90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B491f92:{NFSU2_TR(0x491f92);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B491f95:{NFSU2_TR(0x491f95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491faa;}}
}
B491f97:L491f97:{c.instructions+=3;NFSU2_TR(0x491f97);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B491f9b:{NFSU2_TR(0x491f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491f9f:{NFSU2_TR(0x491f9f);
{goto L491faa;}
}
B491fa1:L491fa1:{c.instructions+=3;NFSU2_TR(0x491fa1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491fa4:{NFSU2_TR(0x491fa4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B491fa6:{NFSU2_TR(0x491fa6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B491faa:L491faa:{c.instructions+=7;NFSU2_TR(0x491faa);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491fad:{NFSU2_TR(0x491fad);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B491fb1:{NFSU2_TR(0x491fb1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B491fb5:{NFSU2_TR(0x491fb5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B491fb7:{NFSU2_TR(0x491fb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B491fb9:{NFSU2_TR(0x491fb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B491fbc:{NFSU2_TR(0x491fbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x492dc0u,492);}
}
B491fc2:L491fc2:{c.instructions+=4;NFSU2_TR(0x491fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B491fc5:{NFSU2_TR(0x491fc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491fc7:{NFSU2_TR(0x491fc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B491fcb:{NFSU2_TR(0x491fcb);
if(r1(R+518)){{goto L491fda;}}
}
B491fcd:L491fcd:{c.instructions+=2;NFSU2_TR(0x491fcd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B491fd0:{NFSU2_TR(0x491fd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L491fda;}}
}
B491fd2:L491fd2:{c.instructions+=3;NFSU2_TR(0x491fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B491fd5:{NFSU2_TR(0x491fd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B491fd8:{NFSU2_TR(0x491fd8);
if(r1(R+518)){TAIL_STATIC(0x492046u,492);}
}
B491fda:L491fda:{c.instructions+=4;NFSU2_TR(0x491fda);
__builtin_memmove((R+0),gp(0x82da3c),4);
}
B491fdf:{NFSU2_TR(0x491fdf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B491fe1:{NFSU2_TR(0x491fe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491fe2:{NFSU2_TR(0x491fe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491fe7ull));
TAIL_STATIC(0x43cd10u,43c);
}
B491fe7:L491fe7:{c.instructions+=3;NFSU2_TR(0x491fe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B491fea:{NFSU2_TR(0x491fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B491fec:{NFSU2_TR(0x491fec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x492042u,492);}
}
B491fee:L491fee:{c.instructions+=3;NFSU2_TR(0x491fee);
__builtin_memmove((R+4),gp(0x82da3c),4);
}
B491ff4:{NFSU2_TR(0x491ff4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B491ff5:{NFSU2_TR(0x491ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x491ffaull));
TAIL_STATIC(0x43f8f0u,43f);
}
B491ffa:L491ffa:{c.instructions+=2;NFSU2_TR(0x491ffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B491ffd:{NFSU2_TR(0x491ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x492001u,492);
}
XIT:NFSU2_TR_EXIT(0x491,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
