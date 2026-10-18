#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_53e(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x53f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x53f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_53f(u8* __restrict R,Cpu& c);
u32 page_53f(Cpu& c){return body_53f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_53f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x53f000:goto L53f000;
case 0x53f001:c.instructions+=14;goto B53f001;
case 0x53f003:c.instructions+=13;goto B53f003;
case 0x53f006:c.instructions+=12;goto B53f006;
case 0x53f008:c.instructions+=11;goto B53f008;
case 0x53f00d:c.instructions+=10;goto B53f00d;
case 0x53f013:c.instructions+=9;goto B53f013;
case 0x53f014:c.instructions+=8;goto B53f014;
case 0x53f01b:c.instructions+=7;goto B53f01b;
case 0x53f021:c.instructions+=6;goto B53f021;
case 0x53f026:c.instructions+=5;goto B53f026;
case 0x53f028:c.instructions+=4;goto B53f028;
case 0x53f029:c.instructions+=3;goto B53f029;
case 0x53f02a:c.instructions+=2;goto B53f02a;
case 0x53f02b:c.instructions+=1;goto B53f02b;
case 0x53f031:goto L53f031;
case 0x53f034:c.instructions+=2;goto B53f034;
case 0x53f036:c.instructions+=1;goto B53f036;
case 0x53f03c:goto L53f03c;
case 0x53f040:c.instructions+=3;goto B53f040;
case 0x53f042:c.instructions+=2;goto B53f042;
case 0x53f043:c.instructions+=1;goto B53f043;
case 0x53f048:goto L53f048;
case 0x53f04b:c.instructions+=2;goto B53f04b;
case 0x53f04d:c.instructions+=1;goto B53f04d;
case 0x53f053:goto L53f053;
case 0x53f057:c.instructions+=5;goto B53f057;
case 0x53f05c:c.instructions+=4;goto B53f05c;
case 0x53f060:c.instructions+=3;goto B53f060;
case 0x53f065:c.instructions+=2;goto B53f065;
case 0x53f069:c.instructions+=1;goto B53f069;
case 0x53f070:goto L53f070;
case 0x53f075:c.instructions+=8;goto B53f075;
case 0x53f077:c.instructions+=7;goto B53f077;
case 0x53f079:c.instructions+=6;goto B53f079;
case 0x53f07b:c.instructions+=5;goto B53f07b;
case 0x53f07e:c.instructions+=4;goto B53f07e;
case 0x53f07f:c.instructions+=3;goto B53f07f;
case 0x53f080:c.instructions+=2;goto B53f080;
case 0x53f081:c.instructions+=1;goto B53f081;
case 0x53f086:goto L53f086;
case 0x53f089:c.instructions+=2;goto B53f089;
case 0x53f08b:c.instructions+=1;goto B53f08b;
case 0x53f090:goto L53f090;
case 0x53f092:c.instructions+=1;goto B53f092;
case 0x53f097:goto L53f097;
case 0x53f099:c.instructions+=3;goto B53f099;
case 0x53f09e:c.instructions+=2;goto B53f09e;
case 0x53f0a0:c.instructions+=1;goto B53f0a0;
case 0x53f0a5:goto L53f0a5;
case 0x53f0a6:c.instructions+=2;goto B53f0a6;
case 0x53f0a8:c.instructions+=1;goto B53f0a8;
case 0x53f0ad:goto L53f0ad;
case 0x53f0b2:c.instructions+=5;goto B53f0b2;
case 0x53f0b6:c.instructions+=4;goto B53f0b6;
case 0x53f0b8:c.instructions+=3;goto B53f0b8;
case 0x53f0b9:c.instructions+=2;goto B53f0b9;
case 0x53f0ba:c.instructions+=1;goto B53f0ba;
case 0x53f0bf:goto L53f0bf;
case 0x53f0c2:c.instructions+=8;goto B53f0c2;
case 0x53f0c4:c.instructions+=7;goto B53f0c4;
case 0x53f0c5:c.instructions+=6;goto B53f0c5;
case 0x53f0c6:c.instructions+=5;goto B53f0c6;
case 0x53f0c7:c.instructions+=4;goto B53f0c7;
case 0x53f0c9:c.instructions+=3;goto B53f0c9;
case 0x53f0ca:c.instructions+=2;goto B53f0ca;
case 0x53f0ce:c.instructions+=1;goto B53f0ce;
case 0x53f0d3:goto L53f0d3;
case 0x53f0d7:c.instructions+=4;goto B53f0d7;
case 0x53f0d8:c.instructions+=3;goto B53f0d8;
case 0x53f0dd:c.instructions+=2;goto B53f0dd;
case 0x53f0e8:c.instructions+=1;goto B53f0e8;
case 0x53f0ed:goto L53f0ed;
case 0x53f0f4:c.instructions+=2;goto B53f0f4;
case 0x53f0ff:c.instructions+=1;goto B53f0ff;
case 0x53f104:goto L53f104;
case 0x53f108:c.instructions+=8;goto B53f108;
case 0x53f10c:c.instructions+=7;goto B53f10c;
case 0x53f10f:c.instructions+=6;goto B53f10f;
case 0x53f110:c.instructions+=5;goto B53f110;
case 0x53f116:c.instructions+=4;goto B53f116;
case 0x53f117:c.instructions+=3;goto B53f117;
case 0x53f11b:c.instructions+=2;goto B53f11b;
case 0x53f11f:c.instructions+=1;goto B53f11f;
case 0x53f125:goto L53f125;
case 0x53f127:c.instructions+=1;goto B53f127;
case 0x53f12c:goto L53f12c;
case 0x53f12f:goto L53f12f;
case 0x53f136:c.instructions+=7;goto B53f136;
case 0x53f137:c.instructions+=6;goto B53f137;
case 0x53f138:c.instructions+=5;goto B53f138;
case 0x53f13f:c.instructions+=4;goto B53f13f;
case 0x53f140:c.instructions+=3;goto B53f140;
case 0x53f142:c.instructions+=2;goto B53f142;
case 0x53f143:c.instructions+=1;goto B53f143;
case 0x53f150:goto L53f150;
case 0x53f155:c.instructions+=2;goto B53f155;
case 0x53f158:c.instructions+=1;goto B53f158;
case 0x53f15a:goto L53f15a;
case 0x53f161:c.instructions+=1;goto B53f161;
case 0x53f163:goto L53f163;
case 0x53f166:c.instructions+=1;goto B53f166;
case 0x53f16e:goto L53f16e;
case 0x53f171:c.instructions+=2;goto B53f171;
case 0x53f177:c.instructions+=1;goto B53f177;
case 0x53f179:goto L53f179;
case 0x53f17c:c.instructions+=1;goto B53f17c;
case 0x53f17e:goto L53f17e;
case 0x53f185:c.instructions+=2;goto B53f185;
case 0x53f18b:c.instructions+=1;goto B53f18b;
case 0x53f18d:goto L53f18d;
case 0x53f190:c.instructions+=3;goto B53f190;
case 0x53f198:c.instructions+=2;goto B53f198;
case 0x53f19e:c.instructions+=1;goto B53f19e;
case 0x53f1a0:goto L53f1a0;
case 0x53f1aa:goto L53f1aa;
case 0x53f1ad:c.instructions+=2;goto B53f1ad;
case 0x53f1b7:c.instructions+=1;goto B53f1b7;
case 0x53f1b9:goto L53f1b9;
case 0x53f1c0:c.instructions+=1;goto B53f1c0;
case 0x53f1c2:goto L53f1c2;
case 0x53f1c5:c.instructions+=1;goto B53f1c5;
case 0x53f1cd:goto L53f1cd;
case 0x53f1d0:c.instructions+=2;goto B53f1d0;
case 0x53f1d6:c.instructions+=1;goto B53f1d6;
case 0x53f1d8:goto L53f1d8;
case 0x53f1df:c.instructions+=1;goto B53f1df;
case 0x53f1e1:goto L53f1e1;
case 0x53f1e4:c.instructions+=1;goto B53f1e4;
case 0x53f1ec:goto L53f1ec;
case 0x53f1ef:c.instructions+=2;goto B53f1ef;
case 0x53f1f5:c.instructions+=1;goto B53f1f5;
case 0x53f1f7:goto L53f1f7;
case 0x53f1fd:c.instructions+=1;goto B53f1fd;
case 0x53f1ff:goto L53f1ff;
case 0x53f202:c.instructions+=1;goto B53f202;
case 0x53f209:goto L53f209;
case 0x53f20c:c.instructions+=6;goto B53f20c;
case 0x53f212:c.instructions+=5;goto B53f212;
case 0x53f215:c.instructions+=4;goto B53f215;
case 0x53f21b:c.instructions+=3;goto B53f21b;
case 0x53f222:c.instructions+=2;goto B53f222;
case 0x53f229:c.instructions+=1;goto B53f229;
case 0x53f22b:goto L53f22b;
case 0x53f22d:c.instructions+=1;goto B53f22d;
case 0x53f22f:goto L53f22f;
case 0x53f235:c.instructions+=2;goto B53f235;
case 0x53f237:c.instructions+=1;goto B53f237;
case 0x53f239:goto L53f239;
case 0x53f243:c.instructions+=1;goto B53f243;
case 0x53f245:goto L53f245;
case 0x53f248:c.instructions+=1;goto B53f248;
case 0x53f24a:goto L53f24a;
case 0x53f250:c.instructions+=1;goto B53f250;
case 0x53f252:goto L53f252;
case 0x53f255:c.instructions+=1;goto B53f255;
case 0x53f257:goto L53f257;
case 0x53f25c:c.instructions+=1;goto B53f25c;
case 0x53f25e:goto L53f25e;
case 0x53f261:c.instructions+=2;goto B53f261;
case 0x53f268:c.instructions+=1;goto B53f268;
case 0x53f26a:goto L53f26a;
case 0x53f26f:goto L53f26f;
case 0x53f273:c.instructions+=9;goto B53f273;
case 0x53f279:c.instructions+=8;goto B53f279;
case 0x53f27c:c.instructions+=7;goto B53f27c;
case 0x53f27d:c.instructions+=6;goto B53f27d;
case 0x53f283:c.instructions+=5;goto B53f283;
case 0x53f286:c.instructions+=4;goto B53f286;
case 0x53f287:c.instructions+=3;goto B53f287;
case 0x53f288:c.instructions+=2;goto B53f288;
case 0x53f28e:c.instructions+=1;goto B53f28e;
case 0x53f293:goto L53f293;
case 0x53f29a:c.instructions+=7;goto B53f29a;
case 0x53f2a1:c.instructions+=6;goto B53f2a1;
case 0x53f2a7:c.instructions+=5;goto B53f2a7;
case 0x53f2a9:c.instructions+=4;goto B53f2a9;
case 0x53f2aa:c.instructions+=3;goto B53f2aa;
case 0x53f2af:c.instructions+=2;goto B53f2af;
case 0x53f2b5:c.instructions+=1;goto B53f2b5;
case 0x53f2ba:goto L53f2ba;
case 0x53f2bd:c.instructions+=3;goto B53f2bd;
case 0x53f2bf:c.instructions+=2;goto B53f2bf;
case 0x53f2c4:c.instructions+=1;goto B53f2c4;
case 0x53f2c9:goto L53f2c9;
case 0x53f2cb:c.instructions+=3;goto B53f2cb;
case 0x53f2d0:c.instructions+=2;goto B53f2d0;
case 0x53f2d2:c.instructions+=1;goto B53f2d2;
case 0x53f2d7:goto L53f2d7;
case 0x53f2d9:c.instructions+=2;goto B53f2d9;
case 0x53f2db:c.instructions+=1;goto B53f2db;
case 0x53f2dd:goto L53f2dd;
case 0x53f2e0:c.instructions+=1;goto B53f2e0;
case 0x53f2e5:goto L53f2e5;
case 0x53f2eb:c.instructions+=5;goto B53f2eb;
case 0x53f2ee:c.instructions+=4;goto B53f2ee;
case 0x53f2f1:c.instructions+=3;goto B53f2f1;
case 0x53f2f6:c.instructions+=2;goto B53f2f6;
case 0x53f2fd:c.instructions+=1;goto B53f2fd;
case 0x53f303:goto L53f303;
case 0x53f305:c.instructions+=1;goto B53f305;
case 0x53f307:goto L53f307;
case 0x53f30a:c.instructions+=1;goto B53f30a;
case 0x53f30f:goto L53f30f;
case 0x53f315:c.instructions+=5;goto B53f315;
case 0x53f318:c.instructions+=4;goto B53f318;
case 0x53f31b:c.instructions+=3;goto B53f31b;
case 0x53f321:c.instructions+=2;goto B53f321;
case 0x53f328:c.instructions+=1;goto B53f328;
case 0x53f32e:goto L53f32e;
case 0x53f334:c.instructions+=2;goto B53f334;
case 0x53f335:c.instructions+=1;goto B53f335;
case 0x53f33a:goto L53f33a;
case 0x53f33f:c.instructions+=5;goto B53f33f;
case 0x53f342:c.instructions+=4;goto B53f342;
case 0x53f344:c.instructions+=3;goto B53f344;
case 0x53f345:c.instructions+=2;goto B53f345;
case 0x53f346:c.instructions+=1;goto B53f346;
case 0x53f348:goto L53f348;
case 0x53f34a:c.instructions+=1;goto B53f34a;
case 0x53f34f:goto L53f34f;
case 0x53f352:c.instructions+=1;goto B53f352;
case 0x53f357:goto L53f357;
case 0x53f359:c.instructions+=1;goto B53f359;
case 0x53f35e:goto L53f35e;
case 0x53f361:c.instructions+=1;goto B53f361;
case 0x53f370:goto L53f370;
case 0x53f375:c.instructions+=2;goto B53f375;
case 0x53f378:c.instructions+=1;goto B53f378;
case 0x53f37a:goto L53f37a;
case 0x53f381:c.instructions+=1;goto B53f381;
case 0x53f383:goto L53f383;
case 0x53f386:c.instructions+=1;goto B53f386;
case 0x53f38e:goto L53f38e;
case 0x53f391:c.instructions+=2;goto B53f391;
case 0x53f397:c.instructions+=1;goto B53f397;
case 0x53f399:goto L53f399;
case 0x53f39c:c.instructions+=1;goto B53f39c;
case 0x53f39e:goto L53f39e;
case 0x53f3a5:c.instructions+=2;goto B53f3a5;
case 0x53f3ab:c.instructions+=1;goto B53f3ab;
case 0x53f3ad:goto L53f3ad;
case 0x53f3b0:c.instructions+=3;goto B53f3b0;
case 0x53f3b8:c.instructions+=2;goto B53f3b8;
case 0x53f3be:c.instructions+=1;goto B53f3be;
case 0x53f3c0:goto L53f3c0;
case 0x53f3ca:goto L53f3ca;
case 0x53f3cd:c.instructions+=2;goto B53f3cd;
case 0x53f3d7:c.instructions+=1;goto B53f3d7;
case 0x53f3d9:goto L53f3d9;
case 0x53f3e0:c.instructions+=1;goto B53f3e0;
case 0x53f3e2:goto L53f3e2;
case 0x53f3e5:c.instructions+=1;goto B53f3e5;
case 0x53f3ed:goto L53f3ed;
case 0x53f3f0:c.instructions+=2;goto B53f3f0;
case 0x53f3f6:c.instructions+=1;goto B53f3f6;
case 0x53f3f8:goto L53f3f8;
case 0x53f3ff:c.instructions+=1;goto B53f3ff;
case 0x53f401:goto L53f401;
case 0x53f404:c.instructions+=1;goto B53f404;
case 0x53f40c:goto L53f40c;
case 0x53f40f:c.instructions+=2;goto B53f40f;
case 0x53f415:c.instructions+=1;goto B53f415;
case 0x53f417:goto L53f417;
case 0x53f41d:c.instructions+=1;goto B53f41d;
case 0x53f41f:goto L53f41f;
case 0x53f422:c.instructions+=1;goto B53f422;
case 0x53f429:goto L53f429;
case 0x53f42c:c.instructions+=8;goto B53f42c;
case 0x53f432:c.instructions+=7;goto B53f432;
case 0x53f435:c.instructions+=6;goto B53f435;
case 0x53f43b:c.instructions+=5;goto B53f43b;
case 0x53f442:c.instructions+=4;goto B53f442;
case 0x53f449:c.instructions+=3;goto B53f449;
case 0x53f450:c.instructions+=2;goto B53f450;
case 0x53f457:c.instructions+=1;goto B53f457;
case 0x53f459:goto L53f459;
case 0x53f45b:c.instructions+=1;goto B53f45b;
case 0x53f45d:goto L53f45d;
case 0x53f463:c.instructions+=2;goto B53f463;
case 0x53f465:c.instructions+=1;goto B53f465;
case 0x53f467:goto L53f467;
case 0x53f471:c.instructions+=1;goto B53f471;
case 0x53f473:goto L53f473;
case 0x53f476:c.instructions+=1;goto B53f476;
case 0x53f478:goto L53f478;
case 0x53f47e:c.instructions+=1;goto B53f47e;
case 0x53f480:goto L53f480;
case 0x53f483:c.instructions+=1;goto B53f483;
case 0x53f485:goto L53f485;
case 0x53f48a:c.instructions+=1;goto B53f48a;
case 0x53f48c:goto L53f48c;
case 0x53f48f:c.instructions+=2;goto B53f48f;
case 0x53f496:c.instructions+=1;goto B53f496;
case 0x53f498:goto L53f498;
case 0x53f49d:goto L53f49d;
case 0x53f4a1:c.instructions+=9;goto B53f4a1;
case 0x53f4a7:c.instructions+=8;goto B53f4a7;
case 0x53f4aa:c.instructions+=7;goto B53f4aa;
case 0x53f4ab:c.instructions+=6;goto B53f4ab;
case 0x53f4b1:c.instructions+=5;goto B53f4b1;
case 0x53f4b4:c.instructions+=4;goto B53f4b4;
case 0x53f4b5:c.instructions+=3;goto B53f4b5;
case 0x53f4b6:c.instructions+=2;goto B53f4b6;
case 0x53f4bc:c.instructions+=1;goto B53f4bc;
case 0x53f4c1:goto L53f4c1;
case 0x53f4c8:c.instructions+=7;goto B53f4c8;
case 0x53f4cf:c.instructions+=6;goto B53f4cf;
case 0x53f4d5:c.instructions+=5;goto B53f4d5;
case 0x53f4d7:c.instructions+=4;goto B53f4d7;
case 0x53f4d8:c.instructions+=3;goto B53f4d8;
case 0x53f4dd:c.instructions+=2;goto B53f4dd;
case 0x53f4e3:c.instructions+=1;goto B53f4e3;
case 0x53f4e8:goto L53f4e8;
case 0x53f4eb:c.instructions+=3;goto B53f4eb;
case 0x53f4ed:c.instructions+=2;goto B53f4ed;
case 0x53f4f2:c.instructions+=1;goto B53f4f2;
case 0x53f4f7:goto L53f4f7;
case 0x53f4f9:c.instructions+=3;goto B53f4f9;
case 0x53f4fe:c.instructions+=2;goto B53f4fe;
case 0x53f500:c.instructions+=1;goto B53f500;
case 0x53f505:goto L53f505;
case 0x53f507:c.instructions+=2;goto B53f507;
case 0x53f509:c.instructions+=1;goto B53f509;
case 0x53f50b:goto L53f50b;
case 0x53f50e:c.instructions+=1;goto B53f50e;
case 0x53f513:goto L53f513;
case 0x53f519:c.instructions+=5;goto B53f519;
case 0x53f51c:c.instructions+=4;goto B53f51c;
case 0x53f51f:c.instructions+=3;goto B53f51f;
case 0x53f524:c.instructions+=2;goto B53f524;
case 0x53f52b:c.instructions+=1;goto B53f52b;
case 0x53f531:goto L53f531;
case 0x53f533:c.instructions+=1;goto B53f533;
case 0x53f535:goto L53f535;
case 0x53f538:c.instructions+=1;goto B53f538;
case 0x53f53d:goto L53f53d;
case 0x53f543:c.instructions+=5;goto B53f543;
case 0x53f546:c.instructions+=4;goto B53f546;
case 0x53f549:c.instructions+=3;goto B53f549;
case 0x53f54f:c.instructions+=2;goto B53f54f;
case 0x53f556:c.instructions+=1;goto B53f556;
case 0x53f55c:goto L53f55c;
case 0x53f562:c.instructions+=2;goto B53f562;
case 0x53f563:c.instructions+=1;goto B53f563;
case 0x53f568:goto L53f568;
case 0x53f56a:c.instructions+=1;goto B53f56a;
case 0x53f56f:goto L53f56f;
case 0x53f572:c.instructions+=3;goto B53f572;
case 0x53f573:c.instructions+=2;goto B53f573;
case 0x53f574:c.instructions+=1;goto B53f574;
case 0x53f580:goto L53f580;
case 0x53f585:c.instructions+=2;goto B53f585;
case 0x53f588:c.instructions+=1;goto B53f588;
case 0x53f58a:goto L53f58a;
case 0x53f58f:c.instructions+=1;goto B53f58f;
case 0x53f591:goto L53f591;
case 0x53f594:c.instructions+=1;goto B53f594;
case 0x53f59b:goto L53f59b;
case 0x53f59c:c.instructions+=16;goto B53f59c;
case 0x53f59d:c.instructions+=15;goto B53f59d;
case 0x53f5a0:c.instructions+=14;goto B53f5a0;
case 0x53f5a6:c.instructions+=13;goto B53f5a6;
case 0x53f5a9:c.instructions+=12;goto B53f5a9;
case 0x53f5ab:c.instructions+=11;goto B53f5ab;
case 0x53f5ad:c.instructions+=10;goto B53f5ad;
case 0x53f5b7:c.instructions+=9;goto B53f5b7;
case 0x53f5b9:c.instructions+=8;goto B53f5b9;
case 0x53f5bb:c.instructions+=7;goto B53f5bb;
case 0x53f5be:c.instructions+=6;goto B53f5be;
case 0x53f5c0:c.instructions+=5;goto B53f5c0;
case 0x53f5c3:c.instructions+=4;goto B53f5c3;
case 0x53f5c6:c.instructions+=3;goto B53f5c6;
case 0x53f5cc:c.instructions+=2;goto B53f5cc;
case 0x53f5d2:c.instructions+=1;goto B53f5d2;
case 0x53f5d4:goto L53f5d4;
case 0x53f5db:c.instructions+=1;goto B53f5db;
case 0x53f5dd:goto L53f5dd;
case 0x53f5e0:c.instructions+=1;goto B53f5e0;
case 0x53f5e8:goto L53f5e8;
case 0x53f5ee:c.instructions+=6;goto B53f5ee;
case 0x53f5f0:c.instructions+=5;goto B53f5f0;
case 0x53f5f3:c.instructions+=4;goto B53f5f3;
case 0x53f5f9:c.instructions+=3;goto B53f5f9;
case 0x53f603:c.instructions+=2;goto B53f603;
case 0x53f60d:c.instructions+=1;goto B53f60d;
case 0x53f60f:goto L53f60f;
case 0x53f616:c.instructions+=1;goto B53f616;
case 0x53f618:goto L53f618;
case 0x53f61b:c.instructions+=1;goto B53f61b;
case 0x53f623:goto L53f623;
case 0x53f628:c.instructions+=10;goto B53f628;
case 0x53f62f:c.instructions+=9;goto B53f62f;
case 0x53f630:c.instructions+=8;goto B53f630;
case 0x53f632:c.instructions+=7;goto B53f632;
case 0x53f639:c.instructions+=6;goto B53f639;
case 0x53f63f:c.instructions+=5;goto B53f63f;
case 0x53f645:c.instructions+=4;goto B53f645;
case 0x53f64b:c.instructions+=3;goto B53f64b;
case 0x53f651:c.instructions+=2;goto B53f651;
case 0x53f656:c.instructions+=1;goto B53f656;
case 0x53f65b:goto L53f65b;
case 0x53f65e:c.instructions+=4;goto B53f65e;
case 0x53f65f:c.instructions+=3;goto B53f65f;
case 0x53f661:c.instructions+=2;goto B53f661;
case 0x53f662:c.instructions+=1;goto B53f662;
case 0x53f664:goto L53f664;
case 0x53f66a:c.instructions+=2;goto B53f66a;
case 0x53f66b:c.instructions+=1;goto B53f66b;
case 0x53f670:goto L53f670;
case 0x53f673:goto L53f673;
case 0x53f675:c.instructions+=1;goto B53f675;
case 0x53f67a:goto L53f67a;
case 0x53f67d:c.instructions+=1;goto B53f67d;
case 0x53f690:goto L53f690;
case 0x53f695:c.instructions+=6;goto B53f695;
case 0x53f698:c.instructions+=5;goto B53f698;
case 0x53f699:c.instructions+=4;goto B53f699;
case 0x53f69e:c.instructions+=3;goto B53f69e;
case 0x53f6a8:c.instructions+=2;goto B53f6a8;
case 0x53f6ae:c.instructions+=1;goto B53f6ae;
case 0x53f6b0:goto L53f6b0;
case 0x53f6b7:c.instructions+=1;goto B53f6b7;
case 0x53f6b9:goto L53f6b9;
case 0x53f6bc:c.instructions+=1;goto B53f6bc;
case 0x53f6c4:goto L53f6c4;
case 0x53f6c6:c.instructions+=3;goto B53f6c6;
case 0x53f6c8:c.instructions+=2;goto B53f6c8;
case 0x53f6ce:c.instructions+=1;goto B53f6ce;
case 0x53f6d0:goto L53f6d0;
case 0x53f6d3:c.instructions+=1;goto B53f6d3;
case 0x53f6d5:goto L53f6d5;
case 0x53f6dc:c.instructions+=2;goto B53f6dc;
case 0x53f6e2:c.instructions+=1;goto B53f6e2;
case 0x53f6e4:goto L53f6e4;
case 0x53f6e7:c.instructions+=3;goto B53f6e7;
case 0x53f6ef:c.instructions+=2;goto B53f6ef;
case 0x53f6f5:c.instructions+=1;goto B53f6f5;
case 0x53f6f7:goto L53f6f7;
case 0x53f6fd:goto L53f6fd;
case 0x53f700:c.instructions+=1;goto B53f700;
case 0x53f702:goto L53f702;
case 0x53f709:c.instructions+=1;goto B53f709;
case 0x53f70b:goto L53f70b;
case 0x53f70e:c.instructions+=1;goto B53f70e;
case 0x53f716:goto L53f716;
case 0x53f719:c.instructions+=5;goto B53f719;
case 0x53f71f:c.instructions+=4;goto B53f71f;
case 0x53f725:c.instructions+=3;goto B53f725;
case 0x53f72f:c.instructions+=2;goto B53f72f;
case 0x53f739:c.instructions+=1;goto B53f739;
case 0x53f73b:goto L53f73b;
case 0x53f742:c.instructions+=1;goto B53f742;
case 0x53f744:goto L53f744;
case 0x53f747:c.instructions+=1;goto B53f747;
case 0x53f74f:goto L53f74f;
case 0x53f755:c.instructions+=3;goto B53f755;
case 0x53f757:c.instructions+=2;goto B53f757;
case 0x53f75d:c.instructions+=1;goto B53f75d;
case 0x53f75f:goto L53f75f;
case 0x53f760:c.instructions+=1;goto B53f760;
case 0x53f762:goto L53f762;
case 0x53f763:c.instructions+=1;goto B53f763;
case 0x53f765:goto L53f765;
case 0x53f76f:c.instructions+=1;goto B53f76f;
case 0x53f771:goto L53f771;
case 0x53f77b:c.instructions+=1;goto B53f77b;
case 0x53f77d:goto L53f77d;
case 0x53f783:c.instructions+=1;goto B53f783;
case 0x53f785:goto L53f785;
case 0x53f78b:goto L53f78b;
case 0x53f791:c.instructions+=2;goto B53f791;
case 0x53f794:c.instructions+=1;goto B53f794;
case 0x53f796:goto L53f796;
case 0x53f79c:c.instructions+=1;goto B53f79c;
case 0x53f79e:goto L53f79e;
case 0x53f7a1:c.instructions+=1;goto B53f7a1;
case 0x53f7a3:goto L53f7a3;
case 0x53f7a8:c.instructions+=1;goto B53f7a8;
case 0x53f7aa:goto L53f7aa;
case 0x53f7ad:c.instructions+=2;goto B53f7ad;
case 0x53f7b4:c.instructions+=1;goto B53f7b4;
case 0x53f7b6:goto L53f7b6;
case 0x53f7bb:goto L53f7bb;
case 0x53f7be:c.instructions+=5;goto B53f7be;
case 0x53f7c4:c.instructions+=4;goto B53f7c4;
case 0x53f7c7:c.instructions+=3;goto B53f7c7;
case 0x53f7c8:c.instructions+=2;goto B53f7c8;
case 0x53f7ce:c.instructions+=1;goto B53f7ce;
case 0x53f7d3:goto L53f7d3;
case 0x53f7da:c.instructions+=9;goto B53f7da;
case 0x53f7e1:c.instructions+=8;goto B53f7e1;
case 0x53f7e7:c.instructions+=7;goto B53f7e7;
case 0x53f7e8:c.instructions+=6;goto B53f7e8;
case 0x53f7e9:c.instructions+=5;goto B53f7e9;
case 0x53f7ee:c.instructions+=4;goto B53f7ee;
case 0x53f7f4:c.instructions+=3;goto B53f7f4;
case 0x53f7fa:c.instructions+=2;goto B53f7fa;
case 0x53f800:c.instructions+=1;goto B53f800;
case 0x53f805:goto L53f805;
case 0x53f80c:c.instructions+=4;goto B53f80c;
case 0x53f812:c.instructions+=3;goto B53f812;
case 0x53f813:c.instructions+=2;goto B53f813;
case 0x53f818:c.instructions+=1;goto B53f818;
case 0x53f81d:goto L53f81d;
case 0x53f81f:c.instructions+=1;goto B53f81f;
case 0x53f824:goto L53f824;
case 0x53f827:c.instructions+=2;goto B53f827;
case 0x53f828:c.instructions+=1;goto B53f828;
case 0x53f830:goto L53f830;
case 0x53f835:c.instructions+=7;goto B53f835;
case 0x53f838:c.instructions+=6;goto B53f838;
case 0x53f839:c.instructions+=5;goto B53f839;
case 0x53f83e:c.instructions+=4;goto B53f83e;
case 0x53f83f:c.instructions+=3;goto B53f83f;
case 0x53f845:c.instructions+=2;goto B53f845;
case 0x53f84b:c.instructions+=1;goto B53f84b;
case 0x53f84d:goto L53f84d;
case 0x53f854:c.instructions+=1;goto B53f854;
case 0x53f856:goto L53f856;
case 0x53f859:c.instructions+=1;goto B53f859;
case 0x53f861:goto L53f861;
case 0x53f867:c.instructions+=3;goto B53f867;
case 0x53f86d:c.instructions+=2;goto B53f86d;
case 0x53f870:c.instructions+=1;goto B53f870;
case 0x53f872:goto L53f872;
case 0x53f878:c.instructions+=1;goto B53f878;
case 0x53f87a:goto L53f87a;
case 0x53f87d:c.instructions+=1;goto B53f87d;
case 0x53f87f:goto L53f87f;
case 0x53f884:c.instructions+=1;goto B53f884;
case 0x53f886:goto L53f886;
case 0x53f889:c.instructions+=2;goto B53f889;
case 0x53f890:c.instructions+=1;goto B53f890;
case 0x53f892:goto L53f892;
case 0x53f897:goto L53f897;
case 0x53f89a:c.instructions+=2;goto B53f89a;
case 0x53f89b:c.instructions+=1;goto B53f89b;
case 0x53f8a0:goto L53f8a0;
case 0x53f8a6:c.instructions+=4;goto B53f8a6;
case 0x53f8ab:c.instructions+=3;goto B53f8ab;
case 0x53f8ae:c.instructions+=2;goto B53f8ae;
case 0x53f8b0:c.instructions+=1;goto B53f8b0;
case 0x53f8b2:goto L53f8b2;
case 0x53f8b8:c.instructions+=2;goto B53f8b8;
case 0x53f8c2:c.instructions+=1;goto B53f8c2;
case 0x53f8c4:goto L53f8c4;
case 0x53f8c8:c.instructions+=4;goto B53f8c8;
case 0x53f8ce:c.instructions+=3;goto B53f8ce;
case 0x53f8d4:c.instructions+=2;goto B53f8d4;
case 0x53f8d6:c.instructions+=1;goto B53f8d6;
case 0x53f8d8:goto L53f8d8;
case 0x53f8de:c.instructions+=2;goto B53f8de;
case 0x53f8e0:c.instructions+=1;goto B53f8e0;
case 0x53f8e2:goto L53f8e2;
case 0x53f8e5:c.instructions+=1;goto B53f8e5;
case 0x53f8e7:goto L53f8e7;
case 0x53f8ee:c.instructions+=1;goto B53f8ee;
case 0x53f8f0:goto L53f8f0;
case 0x53f8f3:c.instructions+=1;goto B53f8f3;
case 0x53f8fb:goto L53f8fb;
case 0x53f8fd:c.instructions+=1;goto B53f8fd;
case 0x53f8ff:goto L53f8ff;
case 0x53f902:c.instructions+=1;goto B53f902;
case 0x53f904:goto L53f904;
case 0x53f90b:c.instructions+=1;goto B53f90b;
case 0x53f90d:goto L53f90d;
case 0x53f910:c.instructions+=2;goto B53f910;
case 0x53f918:c.instructions+=1;goto B53f918;
case 0x53f91a:goto L53f91a;
case 0x53f91c:goto L53f91c;
case 0x53f922:goto L53f922;
case 0x53f925:c.instructions+=2;goto B53f925;
case 0x53f92c:c.instructions+=1;goto B53f92c;
case 0x53f92e:goto L53f92e;
case 0x53f934:c.instructions+=1;goto B53f934;
case 0x53f936:goto L53f936;
case 0x53f939:c.instructions+=1;goto B53f939;
case 0x53f940:goto L53f940;
case 0x53f943:c.instructions+=5;goto B53f943;
case 0x53f946:c.instructions+=4;goto B53f946;
case 0x53f94c:c.instructions+=3;goto B53f94c;
case 0x53f956:c.instructions+=2;goto B53f956;
case 0x53f960:c.instructions+=1;goto B53f960;
case 0x53f962:goto L53f962;
case 0x53f969:c.instructions+=1;goto B53f969;
case 0x53f96b:goto L53f96b;
case 0x53f96e:c.instructions+=1;goto B53f96e;
case 0x53f976:goto L53f976;
case 0x53f97b:c.instructions+=6;goto B53f97b;
case 0x53f985:c.instructions+=5;goto B53f985;
case 0x53f98c:c.instructions+=4;goto B53f98c;
case 0x53f98f:c.instructions+=3;goto B53f98f;
case 0x53f990:c.instructions+=2;goto B53f990;
case 0x53f995:c.instructions+=1;goto B53f995;
case 0x53f99a:goto L53f99a;
case 0x53f9a1:c.instructions+=9;goto B53f9a1;
case 0x53f9a4:c.instructions+=8;goto B53f9a4;
case 0x53f9a9:c.instructions+=7;goto B53f9a9;
case 0x53f9ac:c.instructions+=6;goto B53f9ac;
case 0x53f9b1:c.instructions+=5;goto B53f9b1;
case 0x53f9b6:c.instructions+=4;goto B53f9b6;
case 0x53f9b7:c.instructions+=3;goto B53f9b7;
case 0x53f9bd:c.instructions+=2;goto B53f9bd;
case 0x53f9be:c.instructions+=1;goto B53f9be;
case 0x53f9c0:goto L53f9c0;
case 0x53f9c5:c.instructions+=1;goto B53f9c5;
case 0x53f9c7:goto L53f9c7;
case 0x53f9cc:c.instructions+=2;goto B53f9cc;
case 0x53f9cf:c.instructions+=1;goto B53f9cf;
case 0x53f9d1:goto L53f9d1;
case 0x53f9d8:c.instructions+=1;goto B53f9d8;
case 0x53f9da:goto L53f9da;
case 0x53f9dd:c.instructions+=2;goto B53f9dd;
case 0x53f9e5:c.instructions+=1;goto B53f9e5;
case 0x53f9e7:goto L53f9e7;
case 0x53f9e9:goto L53f9e9;
case 0x53f9ef:c.instructions+=6;goto B53f9ef;
case 0x53f9f4:c.instructions+=5;goto B53f9f4;
case 0x53f9fb:c.instructions+=4;goto B53f9fb;
case 0x53f9fd:c.instructions+=3;goto B53f9fd;
case 0x53f9fe:c.instructions+=2;goto B53f9fe;
case 0x53fa03:c.instructions+=1;goto B53fa03;
case 0x53fa08:goto L53fa08;
case 0x53fa0d:c.instructions+=3;goto B53fa0d;
case 0x53fa10:c.instructions+=2;goto B53fa10;
case 0x53fa12:c.instructions+=1;goto B53fa12;
case 0x53fa14:goto L53fa14;
case 0x53fa1a:c.instructions+=2;goto B53fa1a;
case 0x53fa1b:c.instructions+=1;goto B53fa1b;
case 0x53fa20:goto L53fa20;
case 0x53fa23:goto L53fa23;
case 0x53fa25:c.instructions+=1;goto B53fa25;
case 0x53fa2a:goto L53fa2a;
case 0x53fa2d:c.instructions+=1;goto B53fa2d;
case 0x53fa40:goto L53fa40;
case 0x53fa45:c.instructions+=7;goto B53fa45;
case 0x53fa48:c.instructions+=6;goto B53fa48;
case 0x53fa49:c.instructions+=5;goto B53fa49;
case 0x53fa4a:c.instructions+=4;goto B53fa4a;
case 0x53fa4f:c.instructions+=3;goto B53fa4f;
case 0x53fa50:c.instructions+=2;goto B53fa50;
case 0x53fa56:c.instructions+=1;goto B53fa56;
case 0x53fa58:goto L53fa58;
case 0x53fa5f:c.instructions+=1;goto B53fa5f;
case 0x53fa61:goto L53fa61;
case 0x53fa64:c.instructions+=1;goto B53fa64;
case 0x53fa6c:goto L53fa6c;
case 0x53fa6e:c.instructions+=2;goto B53fa6e;
case 0x53fa74:c.instructions+=1;goto B53fa74;
case 0x53fa76:goto L53fa76;
case 0x53fa79:c.instructions+=1;goto B53fa79;
case 0x53fa7b:goto L53fa7b;
case 0x53fa82:c.instructions+=2;goto B53fa82;
case 0x53fa88:c.instructions+=1;goto B53fa88;
case 0x53fa8a:goto L53fa8a;
case 0x53fa8d:c.instructions+=3;goto B53fa8d;
case 0x53fa95:c.instructions+=2;goto B53fa95;
case 0x53fa9b:c.instructions+=1;goto B53fa9b;
case 0x53fa9d:goto L53fa9d;
case 0x53faa7:goto L53faa7;
case 0x53faaa:c.instructions+=2;goto B53faaa;
case 0x53fab0:c.instructions+=1;goto B53fab0;
case 0x53fab2:goto L53fab2;
case 0x53fab9:c.instructions+=1;goto B53fab9;
case 0x53fabb:goto L53fabb;
case 0x53fabe:c.instructions+=1;goto B53fabe;
case 0x53fac6:goto L53fac6;
case 0x53fac9:c.instructions+=2;goto B53fac9;
case 0x53facf:c.instructions+=1;goto B53facf;
case 0x53fad1:goto L53fad1;
case 0x53fad8:c.instructions+=1;goto B53fad8;
case 0x53fada:goto L53fada;
case 0x53fadd:c.instructions+=1;goto B53fadd;
case 0x53fae5:goto L53fae5;
case 0x53fae8:c.instructions+=2;goto B53fae8;
case 0x53faee:c.instructions+=1;goto B53faee;
case 0x53faf0:goto L53faf0;
case 0x53faf6:c.instructions+=1;goto B53faf6;
case 0x53faf8:goto L53faf8;
case 0x53fafb:c.instructions+=1;goto B53fafb;
case 0x53fb02:goto L53fb02;
case 0x53fb05:c.instructions+=6;goto B53fb05;
case 0x53fb0b:c.instructions+=5;goto B53fb0b;
case 0x53fb0e:c.instructions+=4;goto B53fb0e;
case 0x53fb14:c.instructions+=3;goto B53fb14;
case 0x53fb1a:c.instructions+=2;goto B53fb1a;
case 0x53fb20:c.instructions+=1;goto B53fb20;
case 0x53fb22:goto L53fb22;
case 0x53fb28:c.instructions+=1;goto B53fb28;
case 0x53fb2a:goto L53fb2a;
case 0x53fb2d:c.instructions+=1;goto B53fb2d;
case 0x53fb2f:goto L53fb2f;
case 0x53fb34:c.instructions+=1;goto B53fb34;
case 0x53fb36:goto L53fb36;
case 0x53fb39:c.instructions+=2;goto B53fb39;
case 0x53fb40:c.instructions+=1;goto B53fb40;
case 0x53fb42:goto L53fb42;
case 0x53fb47:goto L53fb47;
case 0x53fb4b:c.instructions+=7;goto B53fb4b;
case 0x53fb51:c.instructions+=6;goto B53fb51;
case 0x53fb54:c.instructions+=5;goto B53fb54;
case 0x53fb5a:c.instructions+=4;goto B53fb5a;
case 0x53fb5d:c.instructions+=3;goto B53fb5d;
case 0x53fb5e:c.instructions+=2;goto B53fb5e;
case 0x53fb64:c.instructions+=1;goto B53fb64;
case 0x53fb69:goto L53fb69;
case 0x53fb70:c.instructions+=7;goto B53fb70;
case 0x53fb77:c.instructions+=6;goto B53fb77;
case 0x53fb7d:c.instructions+=5;goto B53fb7d;
case 0x53fb7f:c.instructions+=4;goto B53fb7f;
case 0x53fb80:c.instructions+=3;goto B53fb80;
case 0x53fb85:c.instructions+=2;goto B53fb85;
case 0x53fb8b:c.instructions+=1;goto B53fb8b;
case 0x53fb90:goto L53fb90;
case 0x53fb93:c.instructions+=3;goto B53fb93;
case 0x53fb95:c.instructions+=2;goto B53fb95;
case 0x53fb9a:c.instructions+=1;goto B53fb9a;
case 0x53fb9f:goto L53fb9f;
case 0x53fba0:c.instructions+=3;goto B53fba0;
case 0x53fba5:c.instructions+=2;goto B53fba5;
case 0x53fba7:c.instructions+=1;goto B53fba7;
case 0x53fbac:goto L53fbac;
case 0x53fbae:c.instructions+=2;goto B53fbae;
case 0x53fbb0:c.instructions+=1;goto B53fbb0;
case 0x53fbb2:goto L53fbb2;
case 0x53fbb5:c.instructions+=1;goto B53fbb5;
case 0x53fbba:goto L53fbba;
case 0x53fbc0:c.instructions+=5;goto B53fbc0;
case 0x53fbc3:c.instructions+=4;goto B53fbc3;
case 0x53fbc6:c.instructions+=3;goto B53fbc6;
case 0x53fbcb:c.instructions+=2;goto B53fbcb;
case 0x53fbd2:c.instructions+=1;goto B53fbd2;
case 0x53fbd8:goto L53fbd8;
case 0x53fbda:c.instructions+=1;goto B53fbda;
case 0x53fbdc:goto L53fbdc;
case 0x53fbdf:c.instructions+=1;goto B53fbdf;
case 0x53fbe4:goto L53fbe4;
case 0x53fbea:c.instructions+=5;goto B53fbea;
case 0x53fbed:c.instructions+=4;goto B53fbed;
case 0x53fbf0:c.instructions+=3;goto B53fbf0;
case 0x53fbf6:c.instructions+=2;goto B53fbf6;
case 0x53fbfd:c.instructions+=1;goto B53fbfd;
case 0x53fc03:goto L53fc03;
case 0x53fc09:c.instructions+=2;goto B53fc09;
case 0x53fc0a:c.instructions+=1;goto B53fc0a;
case 0x53fc0f:goto L53fc0f;
case 0x53fc11:c.instructions+=1;goto B53fc11;
case 0x53fc16:goto L53fc16;
case 0x53fc19:c.instructions+=4;goto B53fc19;
case 0x53fc1a:c.instructions+=3;goto B53fc1a;
case 0x53fc1b:c.instructions+=2;goto B53fc1b;
case 0x53fc1c:c.instructions+=1;goto B53fc1c;
case 0x53fc20:goto L53fc20;
case 0x53fc23:c.instructions+=2;goto B53fc23;
case 0x53fc28:c.instructions+=1;goto B53fc28;
case 0x53fc2d:goto L53fc2d;
case 0x53fc32:c.instructions+=1;goto B53fc32;
case 0x53fc37:goto L53fc37;
case 0x53fc3c:c.instructions+=3;goto B53fc3c;
case 0x53fc3f:c.instructions+=2;goto B53fc3f;
case 0x53fc46:c.instructions+=1;goto B53fc46;
case 0x53fc48:goto L53fc48;
case 0x53fc4f:goto L53fc4f;
case 0x53fc54:goto L53fc54;
case 0x53fc56:goto L53fc56;
case 0x53fc5b:goto L53fc5b;
case 0x53fc5d:goto L53fc5d;
case 0x53fc62:goto L53fc62;
case 0x53fc64:goto L53fc64;
case 0x53fc69:goto L53fc69;
case 0x53fc6b:goto L53fc6b;
case 0x53fc70:goto L53fc70;
case 0x53fc72:goto L53fc72;
case 0x53fc77:goto L53fc77;
case 0x53fc79:goto L53fc79;
case 0x53fc7e:goto L53fc7e;
case 0x53fc80:goto L53fc80;
case 0x53fc82:c.instructions+=1;goto B53fc82;
case 0x53fc87:goto L53fc87;
case 0x53fc8a:goto L53fc8a;
case 0x53fc8f:c.instructions+=4;goto B53fc8f;
case 0x53fc90:c.instructions+=3;goto B53fc90;
case 0x53fc92:c.instructions+=2;goto B53fc92;
case 0x53fc94:c.instructions+=1;goto B53fc94;
case 0x53fc96:goto L53fc96;
case 0x53fc97:c.instructions+=2;goto B53fc97;
case 0x53fc9f:c.instructions+=1;goto B53fc9f;
case 0x53fca0:goto L53fca0;
case 0x53fca7:c.instructions+=4;goto B53fca7;
case 0x53fcab:c.instructions+=3;goto B53fcab;
case 0x53fcad:c.instructions+=2;goto B53fcad;
case 0x53fcae:c.instructions+=1;goto B53fcae;
case 0x53fcb3:goto L53fcb3;
case 0x53fcb6:c.instructions+=5;goto B53fcb6;
case 0x53fcb7:c.instructions+=4;goto B53fcb7;
case 0x53fcbb:c.instructions+=3;goto B53fcbb;
case 0x53fcbd:c.instructions+=2;goto B53fcbd;
case 0x53fcbe:c.instructions+=1;goto B53fcbe;
case 0x53fcc3:goto L53fcc3;
case 0x53fcc7:c.instructions+=3;goto B53fcc7;
case 0x53fcc8:c.instructions+=2;goto B53fcc8;
case 0x53fcc9:c.instructions+=1;goto B53fcc9;
case 0x53fcce:goto L53fcce;
case 0x53fcd2:c.instructions+=7;goto B53fcd2;
case 0x53fcd7:c.instructions+=6;goto B53fcd7;
case 0x53fcda:c.instructions+=5;goto B53fcda;
case 0x53fcdb:c.instructions+=4;goto B53fcdb;
case 0x53fcde:c.instructions+=3;goto B53fcde;
case 0x53fce0:c.instructions+=2;goto B53fce0;
case 0x53fce4:c.instructions+=1;goto B53fce4;
case 0x53fce6:goto L53fce6;
case 0x53fce7:c.instructions+=1;goto B53fce7;
case 0x53fce8:goto L53fce8;
case 0x53fced:c.instructions+=1;goto B53fced;
case 0x53fcf2:goto L53fcf2;
case 0x53fcf3:c.instructions+=2;goto B53fcf3;
case 0x53fcf6:c.instructions+=1;goto B53fcf6;
case 0x53fd30:goto L53fd30;
case 0x53fd33:c.instructions+=4;goto B53fd33;
case 0x53fd34:c.instructions+=3;goto B53fd34;
case 0x53fd35:c.instructions+=2;goto B53fd35;
case 0x53fd3a:c.instructions+=1;goto B53fd3a;
case 0x53fd3f:goto L53fd3f;
case 0x53fd44:c.instructions+=2;goto B53fd44;
case 0x53fd4b:c.instructions+=1;goto B53fd4b;
case 0x53fd50:goto L53fd50;
case 0x53fd55:c.instructions+=2;goto B53fd55;
case 0x53fd58:c.instructions+=1;goto B53fd58;
case 0x53fd5a:goto L53fd5a;
case 0x53fd5c:c.instructions+=3;goto B53fd5c;
case 0x53fd63:c.instructions+=2;goto B53fd63;
case 0x53fd69:c.instructions+=1;goto B53fd69;
case 0x53fd6b:goto L53fd6b;
case 0x53fd6e:c.instructions+=4;goto B53fd6e;
case 0x53fd76:c.instructions+=3;goto B53fd76;
case 0x53fd7b:c.instructions+=2;goto B53fd7b;
case 0x53fd7e:c.instructions+=1;goto B53fd7e;
case 0x53fd80:goto L53fd80;
case 0x53fd82:c.instructions+=2;goto B53fd82;
case 0x53fd88:c.instructions+=1;goto B53fd88;
case 0x53fd8a:goto L53fd8a;
case 0x53fd8d:c.instructions+=2;goto B53fd8d;
case 0x53fd8f:c.instructions+=1;goto B53fd8f;
case 0x53fd96:goto L53fd96;
case 0x53fd9b:c.instructions+=2;goto B53fd9b;
case 0x53fd9e:c.instructions+=1;goto B53fd9e;
case 0x53fda0:goto L53fda0;
case 0x53fda7:goto L53fda7;
case 0x53fdac:goto L53fdac;
case 0x53fdae:goto L53fdae;
case 0x53fdb3:goto L53fdb3;
case 0x53fdb5:goto L53fdb5;
case 0x53fdba:goto L53fdba;
case 0x53fdbc:goto L53fdbc;
case 0x53fdbd:c.instructions+=1;goto B53fdbd;
case 0x53fdc2:goto L53fdc2;
case 0x53fdc5:c.instructions+=1;goto B53fdc5;
case 0x53fdc7:goto L53fdc7;
case 0x53fdcc:goto L53fdcc;
case 0x53fdce:goto L53fdce;
case 0x53fdd3:goto L53fdd3;
case 0x53fdd8:c.instructions+=7;goto B53fdd8;
case 0x53fddf:c.instructions+=6;goto B53fddf;
case 0x53fde5:c.instructions+=5;goto B53fde5;
case 0x53fdea:c.instructions+=4;goto B53fdea;
case 0x53fdf0:c.instructions+=3;goto B53fdf0;
case 0x53fdf6:c.instructions+=2;goto B53fdf6;
case 0x53fdfc:c.instructions+=1;goto B53fdfc;
case 0x53fdfe:goto L53fdfe;
case 0x53fe07:goto L53fe07;
case 0x53fe0e:c.instructions+=6;goto B53fe0e;
case 0x53fe13:c.instructions+=5;goto B53fe13;
case 0x53fe15:c.instructions+=4;goto B53fe15;
case 0x53fe17:c.instructions+=3;goto B53fe17;
case 0x53fe1d:c.instructions+=2;goto B53fe1d;
case 0x53fe23:c.instructions+=1;goto B53fe23;
case 0x53fe25:goto L53fe25;
case 0x53fe2d:c.instructions+=2;goto B53fe2d;
case 0x53fe2e:c.instructions+=1;goto B53fe2e;
case 0x53fe30:goto L53fe30;
case 0x53fe37:c.instructions+=4;goto B53fe37;
case 0x53fe3b:c.instructions+=3;goto B53fe3b;
case 0x53fe3d:c.instructions+=2;goto B53fe3d;
case 0x53fe3e:c.instructions+=1;goto B53fe3e;
case 0x53fe43:goto L53fe43;
case 0x53fe46:c.instructions+=5;goto B53fe46;
case 0x53fe47:c.instructions+=4;goto B53fe47;
case 0x53fe4b:c.instructions+=3;goto B53fe4b;
case 0x53fe4d:c.instructions+=2;goto B53fe4d;
case 0x53fe4e:c.instructions+=1;goto B53fe4e;
case 0x53fe53:goto L53fe53;
case 0x53fe57:c.instructions+=3;goto B53fe57;
case 0x53fe58:c.instructions+=2;goto B53fe58;
case 0x53fe59:c.instructions+=1;goto B53fe59;
case 0x53fe5e:goto L53fe5e;
case 0x53fe62:c.instructions+=7;goto B53fe62;
case 0x53fe67:c.instructions+=6;goto B53fe67;
case 0x53fe6a:c.instructions+=5;goto B53fe6a;
case 0x53fe6b:c.instructions+=4;goto B53fe6b;
case 0x53fe6e:c.instructions+=3;goto B53fe6e;
case 0x53fe70:c.instructions+=2;goto B53fe70;
case 0x53fe74:c.instructions+=1;goto B53fe74;
case 0x53fe76:goto L53fe76;
case 0x53fe77:goto L53fe77;
case 0x53fe78:c.instructions+=3;goto B53fe78;
case 0x53fe79:c.instructions+=2;goto B53fe79;
case 0x53fe7c:c.instructions+=1;goto B53fe7c;
case 0x53feb0:goto L53feb0;
case 0x53feb1:c.instructions+=10;goto B53feb1;
case 0x53feb3:c.instructions+=9;goto B53feb3;
case 0x53feb6:c.instructions+=8;goto B53feb6;
case 0x53feb8:c.instructions+=7;goto B53feb8;
case 0x53febd:c.instructions+=6;goto B53febd;
case 0x53fec3:c.instructions+=5;goto B53fec3;
case 0x53fec4:c.instructions+=4;goto B53fec4;
case 0x53fecb:c.instructions+=3;goto B53fecb;
case 0x53fecc:c.instructions+=2;goto B53fecc;
case 0x53fed1:c.instructions+=1;goto B53fed1;
case 0x53fed6:goto L53fed6;
case 0x53fedb:c.instructions+=6;goto B53fedb;
case 0x53fedd:c.instructions+=5;goto B53fedd;
case 0x53fede:c.instructions+=4;goto B53fede;
case 0x53fedf:c.instructions+=3;goto B53fedf;
case 0x53fee5:c.instructions+=2;goto B53fee5;
case 0x53fee6:c.instructions+=1;goto B53fee6;
case 0x53feec:goto L53feec;
case 0x53feee:c.instructions+=4;goto B53feee;
case 0x53fef3:c.instructions+=3;goto B53fef3;
case 0x53fef8:c.instructions+=2;goto B53fef8;
case 0x53fefd:c.instructions+=1;goto B53fefd;
case 0x53ff02:goto L53ff02;
case 0x53ff04:goto L53ff04;
case 0x53ff09:c.instructions+=20;goto B53ff09;
case 0x53ff0f:c.instructions+=19;goto B53ff0f;
case 0x53ff15:c.instructions+=18;goto B53ff15;
case 0x53ff1b:c.instructions+=17;goto B53ff1b;
case 0x53ff21:c.instructions+=16;goto B53ff21;
case 0x53ff27:c.instructions+=15;goto B53ff27;
case 0x53ff2d:c.instructions+=14;goto B53ff2d;
case 0x53ff33:c.instructions+=13;goto B53ff33;
case 0x53ff39:c.instructions+=12;goto B53ff39;
case 0x53ff3f:c.instructions+=11;goto B53ff3f;
case 0x53ff45:c.instructions+=10;goto B53ff45;
case 0x53ff4b:c.instructions+=9;goto B53ff4b;
case 0x53ff55:c.instructions+=8;goto B53ff55;
case 0x53ff5b:c.instructions+=7;goto B53ff5b;
case 0x53ff61:c.instructions+=6;goto B53ff61;
case 0x53ff67:c.instructions+=5;goto B53ff67;
case 0x53ff6d:c.instructions+=4;goto B53ff6d;
case 0x53ff77:c.instructions+=3;goto B53ff77;
case 0x53ff7d:c.instructions+=2;goto B53ff7d;
case 0x53ff83:c.instructions+=1;goto B53ff83;
case 0x53ff85:goto L53ff85;
case 0x53ff8b:c.instructions+=1;goto B53ff8b;
case 0x53ff91:goto L53ff91;
case 0x53ff96:c.instructions+=3;goto B53ff96;
case 0x53ff98:c.instructions+=2;goto B53ff98;
case 0x53ff9a:c.instructions+=1;goto B53ff9a;
case 0x53ff9c:goto L53ff9c;
case 0x53ffa3:goto L53ffa3;
case 0x53ffa6:c.instructions+=1;goto B53ffa6;
case 0x53ffa8:goto L53ffa8;
case 0x53ffaa:c.instructions+=1;goto B53ffaa;
case 0x53ffac:goto L53ffac;
case 0x53ffb1:c.instructions+=1;goto B53ffb1;
case 0x53ffb3:goto L53ffb3;
case 0x53ffb6:c.instructions+=1;goto B53ffb6;
case 0x53ffb8:goto L53ffb8;
case 0x53ffbd:goto L53ffbd;
case 0x53ffbf:c.instructions+=1;goto B53ffbf;
case 0x53ffc1:goto L53ffc1;
case 0x53ffc6:goto L53ffc6;
case 0x53ffcc:c.instructions+=1;goto B53ffcc;
case 0x53ffce:goto L53ffce;
case 0x53ffd3:goto L53ffd3;
case 0x53ffd9:goto L53ffd9;
case 0x53ffdc:c.instructions+=10;goto B53ffdc;
case 0x53ffe1:c.instructions+=9;goto B53ffe1;
case 0x53ffe6:c.instructions+=8;goto B53ffe6;
case 0x53ffe8:c.instructions+=7;goto B53ffe8;
case 0x53ffeb:c.instructions+=6;goto B53ffeb;
case 0x53ffed:c.instructions+=5;goto B53ffed;
case 0x53fff0:c.instructions+=4;goto B53fff0;
case 0x53fff5:c.instructions+=3;goto B53fff5;
case 0x53fffa:c.instructions+=2;goto B53fffa;
case 0x53ffff:c.instructions+=1;goto B53ffff;
default:missing_instruction(c.pc);}
B53f000:L53f000:{c.instructions+=15;NFSU2_TR(0x53f000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f001:{NFSU2_TR(0x53f001);
__builtin_memmove((R+20),(R+16),4);
}
B53f003:{NFSU2_TR(0x53f003);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B53f006:{NFSU2_TR(0x53f006);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f008:{NFSU2_TR(0x53f008);
u8 U[4];
w4(U+0,u32(0x776f4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f00d:{NFSU2_TR(0x53f00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53f013:{NFSU2_TR(0x53f013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f014:{NFSU2_TR(0x53f014);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53f01b:{NFSU2_TR(0x53f01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x978ull))));
}
B53f021:{NFSU2_TR(0x53f021);
__builtin_memmove((R+0),gp(0x89e7e4),1);
}
B53f026:{NFSU2_TR(0x53f026);
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
B53f028:{NFSU2_TR(0x53f028);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f029:{NFSU2_TR(0x53f029);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f02a:{NFSU2_TR(0x53f02a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f02b:{NFSU2_TR(0x53f02b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f12f;}}
}
B53f031:L53f031:{c.instructions+=3;NFSU2_TR(0x53f031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53f034:{NFSU2_TR(0x53f034);
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
B53f036:{NFSU2_TR(0x53f036);
if(r1(R+518)){{goto L53f12f;}}
}
B53f03c:L53f03c:{c.instructions+=4;NFSU2_TR(0x53f03c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53f040:{NFSU2_TR(0x53f040);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f042:{NFSU2_TR(0x53f042);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f043:{NFSU2_TR(0x53f043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f048ull));
TAIL_STATIC(0x4fe970u,4fe);
}
B53f048:L53f048:{c.instructions+=3;NFSU2_TR(0x53f048);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53f04b:{NFSU2_TR(0x53f04b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f04d:{NFSU2_TR(0x53f04d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53f125;}}
}
B53f053:L53f053:{c.instructions+=6;NFSU2_TR(0x53f053);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53f057:{NFSU2_TR(0x53f057);
w4(R+28,u32(0x64ull));
}
B53f05c:{NFSU2_TR(0x53f05c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53f060:{NFSU2_TR(0x53f060);
w4(R+24,u32(0x85ef80ull));
}
B53f065:{NFSU2_TR(0x53f065);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53f069:{NFSU2_TR(0x53f069);
__builtin_memmove((R+16),(R+16),4);
}
B53f070:L53f070:{c.instructions+=9;NFSU2_TR(0x53f070);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f075:{NFSU2_TR(0x53f075);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f077:{NFSU2_TR(0x53f077);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f079:{NFSU2_TR(0x53f079);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f07b:{NFSU2_TR(0x53f07b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffff9eull))));
__builtin_memmove((R+12),(U+0),4);
}
B53f07e:{NFSU2_TR(0x53f07e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f07f:{NFSU2_TR(0x53f07f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f080:{NFSU2_TR(0x53f080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f081:{NFSU2_TR(0x53f081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f086ull));
TAIL_STATIC(0x4feaf0u,4fe);
}
B53f086:L53f086:{c.instructions+=3;NFSU2_TR(0x53f086);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B53f089:{NFSU2_TR(0x53f089);
__builtin_memmove((R+4),(R+24),4);
}
B53f08b:{NFSU2_TR(0x53f08b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f090ull));
TAIL_STATIC(0x637190u,637);
}
B53f090:L53f090:{c.instructions+=2;NFSU2_TR(0x53f090);
__builtin_memmove((R+4),(R+24),4);
}
B53f092:{NFSU2_TR(0x53f092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f097ull));
TAIL_STATIC(0x6371e0u,637);
}
B53f097:L53f097:{c.instructions+=4;NFSU2_TR(0x53f097);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f099:{NFSU2_TR(0x53f099);
u8 U[4];
w4(U+0,u32(0x9aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f09e:{NFSU2_TR(0x53f09e);
__builtin_memmove((R+4),(R+24),4);
}
B53f0a0:{NFSU2_TR(0x53f0a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f0a5ull));
TAIL_STATIC(0x6371a0u,637);
}
B53f0a5:L53f0a5:{c.instructions+=3;NFSU2_TR(0x53f0a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0a6:{NFSU2_TR(0x53f0a6);
__builtin_memmove((R+4),(R+24),4);
}
B53f0a8:{NFSU2_TR(0x53f0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f0adull));
TAIL_STATIC(0x61c280u,61c);
}
B53f0ad:L53f0ad:{c.instructions+=6;NFSU2_TR(0x53f0ad);
__builtin_memmove((R+0),gp(0x89e7f4),4);
}
B53f0b2:{NFSU2_TR(0x53f0b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53f0b6:{NFSU2_TR(0x53f0b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B53f0b8:{NFSU2_TR(0x53f0b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0b9:{NFSU2_TR(0x53f0b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0ba:{NFSU2_TR(0x53f0ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f0bfull));
TAIL_STATIC(0x4fed00u,4fe);
}
B53f0bf:L53f0bf:{c.instructions+=9;NFSU2_TR(0x53f0bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53f0c2:{NFSU2_TR(0x53f0c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0c4:{NFSU2_TR(0x53f0c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0c5:{NFSU2_TR(0x53f0c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0c6:{NFSU2_TR(0x53f0c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0c7:{NFSU2_TR(0x53f0c7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0c9:{NFSU2_TR(0x53f0c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0ca:{NFSU2_TR(0x53f0ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53f0ce:{NFSU2_TR(0x53f0ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f0d3ull));
TAIL_STATIC(0x6373e0u,637);
}
B53f0d3:L53f0d3:{c.instructions+=5;NFSU2_TR(0x53f0d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53f0d7:{NFSU2_TR(0x53f0d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f0d8:{NFSU2_TR(0x53f0d8);
w4(R+4,u32(0x89e7a0ull));
}
B53f0dd:{NFSU2_TR(0x53f0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x990ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53f0e8:{NFSU2_TR(0x53f0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f0edull));
TAIL_STATIC(0x601600u,601);
}
B53f0ed:L53f0ed:{c.instructions+=3;NFSU2_TR(0x53f0ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x3d4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53f0f4:{NFSU2_TR(0x53f0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x98cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53f0ff:{NFSU2_TR(0x53f0ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f104ull));
TAIL_STATIC(0x4022c0u,402);
}
B53f104:L53f104:{c.instructions+=9;NFSU2_TR(0x53f104);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53f108:{NFSU2_TR(0x53f108);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53f10c:{NFSU2_TR(0x53f10c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B53f10f:{NFSU2_TR(0x53f10f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53f110:{NFSU2_TR(0x53f110);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8f0ull))));
}
B53f116:{NFSU2_TR(0x53f116);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53f117:{NFSU2_TR(0x53f117);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53f11b:{NFSU2_TR(0x53f11b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53f11f:{NFSU2_TR(0x53f11f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f070u);}goto L53f070;}}
}
B53f125:L53f125:{c.instructions+=2;NFSU2_TR(0x53f125);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f127:{NFSU2_TR(0x53f127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f12cull));
TAIL_STATIC(0x532010u,532);
}
B53f12c:L53f12c:{c.instructions+=1;NFSU2_TR(0x53f12c);
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
B53f12f:L53f12f:{c.instructions+=8;NFSU2_TR(0x53f12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x984ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53f136:{NFSU2_TR(0x53f136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53f137:{NFSU2_TR(0x53f137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53f138:{NFSU2_TR(0x53f138);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53f13f:{NFSU2_TR(0x53f13f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53f140:{NFSU2_TR(0x53f140);
__builtin_memmove((R+16),(R+20),4);
}
B53f142:{NFSU2_TR(0x53f142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53f143:{NFSU2_TR(0x53f143);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53f150:L53f150:{c.instructions+=3;NFSU2_TR(0x53f150);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53f155:{NFSU2_TR(0x53f155);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f158:{NFSU2_TR(0x53f158);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f163;}}
}
B53f15a:L53f15a:{c.instructions+=2;NFSU2_TR(0x53f15a);
w4(R+4,u32(m1(0x83abb4)));
}
B53f161:{NFSU2_TR(0x53f161);
{goto L53f16e;}
}
B53f163:L53f163:{c.instructions+=2;NFSU2_TR(0x53f163);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f166:{NFSU2_TR(0x53f166);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f16e:L53f16e:{c.instructions+=3;NFSU2_TR(0x53f16e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f171:{NFSU2_TR(0x53f171);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B53f177:{NFSU2_TR(0x53f177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f1a0;}}
}
B53f179:L53f179:{c.instructions+=2;NFSU2_TR(0x53f179);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f17c:{NFSU2_TR(0x53f17c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f18d;}}
}
B53f17e:L53f17e:{c.instructions+=3;NFSU2_TR(0x53f17e);
w4(R+4,u32(m1(0x83abb5)));
}
B53f185:{NFSU2_TR(0x53f185);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f18b:{NFSU2_TR(0x53f18b);
{goto L53f1aa;}
}
B53f18d:L53f18d:{c.instructions+=4;NFSU2_TR(0x53f18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f190:{NFSU2_TR(0x53f190);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f198:{NFSU2_TR(0x53f198);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f19e:{NFSU2_TR(0x53f19e);
{goto L53f1aa;}
}
B53f1a0:L53f1a0:{c.instructions+=1;NFSU2_TR(0x53f1a0);
s4(0x89e7c4,u32(0x0ull));
}
B53f1aa:L53f1aa:{c.instructions+=3;NFSU2_TR(0x53f1aa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f1ad:{NFSU2_TR(0x53f1ad);
s4(0x89e7b0,u32(0x1ull));
}
B53f1b7:{NFSU2_TR(0x53f1b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f1c2;}}
}
B53f1b9:L53f1b9:{c.instructions+=2;NFSU2_TR(0x53f1b9);
w4(R+4,u32(m1(0x83abb8)));
}
B53f1c0:{NFSU2_TR(0x53f1c0);
{goto L53f1cd;}
}
B53f1c2:L53f1c2:{c.instructions+=2;NFSU2_TR(0x53f1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f1c5:{NFSU2_TR(0x53f1c5);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f1cd:L53f1cd:{c.instructions+=3;NFSU2_TR(0x53f1cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f1d0:{NFSU2_TR(0x53f1d0);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B53f1d6:{NFSU2_TR(0x53f1d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f1e1;}}
}
B53f1d8:L53f1d8:{c.instructions+=2;NFSU2_TR(0x53f1d8);
w4(R+4,u32(m1(0x83abb6)));
}
B53f1df:{NFSU2_TR(0x53f1df);
{goto L53f1ec;}
}
B53f1e1:L53f1e1:{c.instructions+=2;NFSU2_TR(0x53f1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f1e4:{NFSU2_TR(0x53f1e4);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f1ec:L53f1ec:{c.instructions+=3;NFSU2_TR(0x53f1ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f1ef:{NFSU2_TR(0x53f1ef);
__builtin_memmove(gp(0x89e7f4),(R+4),4);
}
B53f1f5:{NFSU2_TR(0x53f1f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f1ff;}}
}
B53f1f7:L53f1f7:{c.instructions+=2;NFSU2_TR(0x53f1f7);
__builtin_memmove((R+4),gp(0x83abcd),1);
}
B53f1fd:{NFSU2_TR(0x53f1fd);
{goto L53f209;}
}
B53f1ff:L53f1ff:{c.instructions+=2;NFSU2_TR(0x53f1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f202:{NFSU2_TR(0x53f202);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac9ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B53f209:L53f209:{c.instructions+=7;NFSU2_TR(0x53f209);
w4(R+8,u32(r1(R+4)));
}
B53f20c:{NFSU2_TR(0x53f20c);
__builtin_memmove((R+4),gp(0x850078),4);
}
B53f212:{NFSU2_TR(0x53f212);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f215:{NFSU2_TR(0x53f215);
__builtin_memmove(gp(0x89e7f8),(R+8),4);
}
B53f21b:{NFSU2_TR(0x53f21b);
s1(0x89e7d2,u8(0x1ull));
}
B53f222:{NFSU2_TR(0x53f222);
s1(0x89e7e0,u8(0x1ull));
}
B53f229:{NFSU2_TR(0x53f229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f245;}}
}
B53f22b:L53f22b:{c.instructions+=2;NFSU2_TR(0x53f22b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f22d:{NFSU2_TR(0x53f22d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f252;}}
}
B53f22f:L53f22f:{c.instructions+=3;NFSU2_TR(0x53f22f);
__builtin_memmove((R+4),gp(0x83aad4),1);
}
B53f235:{NFSU2_TR(0x53f235);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53f237:{NFSU2_TR(0x53f237);
if(r1(R+518)){{goto L53f252;}}
}
B53f239:L53f239:{c.instructions+=2;NFSU2_TR(0x53f239);
s4(0x89e7b0,u32(0x3ull));
}
B53f243:{NFSU2_TR(0x53f243);
{goto L53f252;}
}
B53f245:L53f245:{c.instructions+=2;NFSU2_TR(0x53f245);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f248:{NFSU2_TR(0x53f248);
if(r1(R+518)){{goto L53f26a;}}
}
B53f24a:L53f24a:{c.instructions+=2;NFSU2_TR(0x53f24a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f250:{NFSU2_TR(0x53f250);
if(r1(R+518)){{goto L53f26a;}}
}
B53f252:L53f252:{c.instructions+=2;NFSU2_TR(0x53f252);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f255:{NFSU2_TR(0x53f255);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f25e;}}
}
B53f257:L53f257:{c.instructions+=2;NFSU2_TR(0x53f257);
w4(R+0,u32(0x83abd0ull));
}
B53f25c:{NFSU2_TR(0x53f25c);
{goto L53f26f;}
}
B53f25e:L53f25e:{c.instructions+=3;NFSU2_TR(0x53f25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f261:{NFSU2_TR(0x53f261);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aaccull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f268:{NFSU2_TR(0x53f268);
{goto L53f26f;}
}
B53f26a:L53f26a:{c.instructions+=1;NFSU2_TR(0x53f26a);
w4(R+0,u32(0x8500b8ull));
}
B53f26f:L53f26f:{c.instructions+=10;NFSU2_TR(0x53f26f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B53f273:{NFSU2_TR(0x53f273);
__builtin_memmove(gp(0x89e7bc),(R+4),4);
}
B53f279:{NFSU2_TR(0x53f279);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B53f27c:{NFSU2_TR(0x53f27c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f27d:{NFSU2_TR(0x53f27d);
__builtin_memmove(gp(0x89e7a0),(R+4),4);
}
B53f283:{NFSU2_TR(0x53f283);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53f286:{NFSU2_TR(0x53f286);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f287:{NFSU2_TR(0x53f287);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f288:{NFSU2_TR(0x53f288);
__builtin_memmove(gp(0x89e7a4),(R+8),4);
}
B53f28e:{NFSU2_TR(0x53f28e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f293ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B53f293:L53f293:{c.instructions+=8;NFSU2_TR(0x53f293);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x85ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B53f29a:{NFSU2_TR(0x53f29a);
w4(R+4,u32(m1(0x83aa1b)));
}
B53f2a1:{NFSU2_TR(0x53f2a1);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B53f2a7:{NFSU2_TR(0x53f2a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f2a9:{NFSU2_TR(0x53f2a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f2aa:{NFSU2_TR(0x53f2aa);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B53f2af:{NFSU2_TR(0x53f2af);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B53f2b5:{NFSU2_TR(0x53f2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f2baull));
TAIL_STATIC(0x525ed0u,525);
}
B53f2ba:L53f2ba:{c.instructions+=4;NFSU2_TR(0x53f2ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53f2bd:{NFSU2_TR(0x53f2bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f2bf:{NFSU2_TR(0x53f2bf);
w4(R+4,u32(0x89e7a0ull));
}
B53f2c4:{NFSU2_TR(0x53f2c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f2c9ull));
TAIL_STATIC(0x5ed960u,5ed);
}
B53f2c9:L53f2c9:{c.instructions+=4;NFSU2_TR(0x53f2c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f2cb:{NFSU2_TR(0x53f2cb);
w4(R+4,u32(0x89e7a0ull));
}
B53f2d0:{NFSU2_TR(0x53f2d0);
__builtin_memmove((R+24),(R+0),4);
}
B53f2d2:{NFSU2_TR(0x53f2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f2d7ull));
TAIL_STATIC(0x5ed960u,5ed);
}
B53f2d7:L53f2d7:{c.instructions+=3;NFSU2_TR(0x53f2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f2d9:{NFSU2_TR(0x53f2d9);
__builtin_memmove((R+28),(R+0),4);
}
B53f2db:{NFSU2_TR(0x53f2db);
if(r1(R+518)){{goto L53f303;}}
}
B53f2dd:L53f2dd:{c.instructions+=2;NFSU2_TR(0x53f2dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53f2e0:{NFSU2_TR(0x53f2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f2e5ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B53f2e5:L53f2e5:{c.instructions+=6;NFSU2_TR(0x53f2e5);
__builtin_memmove((R+4),gp(0x89e7f4),4);
}
B53f2eb:{NFSU2_TR(0x53f2eb);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B53f2ee:{NFSU2_TR(0x53f2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f2f1:{NFSU2_TR(0x53f2f1);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B53f2f6:{NFSU2_TR(0x53f2f6);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53f2fd:{NFSU2_TR(0x53f2fd);
{u32 ea_=u32(u32(9037820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53f303:L53f303:{c.instructions+=2;NFSU2_TR(0x53f303);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f305:{NFSU2_TR(0x53f305);
if(r1(R+518)){{goto L53f32e;}}
}
B53f307:L53f307:{c.instructions+=2;NFSU2_TR(0x53f307);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53f30a:{NFSU2_TR(0x53f30a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f30full));
TAIL_STATIC(0x5b5330u,5b5);
}
B53f30f:L53f30f:{c.instructions+=6;NFSU2_TR(0x53f30f);
__builtin_memmove((R+8),gp(0x89e7f4),4);
}
B53f315:{NFSU2_TR(0x53f315);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B53f318:{NFSU2_TR(0x53f318);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f31b:{NFSU2_TR(0x53f31b);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B53f321:{NFSU2_TR(0x53f321);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53f328:{NFSU2_TR(0x53f328);
{u32 ea_=u32(u32(9037824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53f32e:L53f32e:{c.instructions+=3;NFSU2_TR(0x53f32e);
__builtin_memmove((R+8),gp(0x89e7c4),4);
}
B53f334:{NFSU2_TR(0x53f334);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f335:{NFSU2_TR(0x53f335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f33aull));
TAIL_STATIC(0x53ee90u,53e);
}
B53f33a:L53f33a:{c.instructions+=6;NFSU2_TR(0x53f33a);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B53f33f:{NFSU2_TR(0x53f33f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53f342:{NFSU2_TR(0x53f342);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53f344:{NFSU2_TR(0x53f344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53f345:{NFSU2_TR(0x53f345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53f346:{NFSU2_TR(0x53f346);
if(r1(R+518)){{goto L53f357;}}
}
B53f348:L53f348:{c.instructions+=2;NFSU2_TR(0x53f348);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f34a:{NFSU2_TR(0x53f34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f34full));
TAIL_STATIC(0x5264a0u,526);
}
B53f34f:L53f34f:{c.instructions+=2;NFSU2_TR(0x53f34f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53f352:{NFSU2_TR(0x53f352);
TAIL_STATIC(0x4fe9f0u,4fe);
}
B53f357:L53f357:{c.instructions+=2;NFSU2_TR(0x53f357);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f359:{NFSU2_TR(0x53f359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f35eull));
TAIL_STATIC(0x5264a0u,526);
}
B53f35e:L53f35e:{c.instructions+=2;NFSU2_TR(0x53f35e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53f361:{NFSU2_TR(0x53f361);
TAIL_STATIC(0x4fe9f0u,4fe);
}
B53f370:L53f370:{c.instructions+=3;NFSU2_TR(0x53f370);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53f375:{NFSU2_TR(0x53f375);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f378:{NFSU2_TR(0x53f378);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f383;}}
}
B53f37a:L53f37a:{c.instructions+=2;NFSU2_TR(0x53f37a);
w4(R+4,u32(m1(0x83abb4)));
}
B53f381:{NFSU2_TR(0x53f381);
{goto L53f38e;}
}
B53f383:L53f383:{c.instructions+=2;NFSU2_TR(0x53f383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f386:{NFSU2_TR(0x53f386);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f38e:L53f38e:{c.instructions+=3;NFSU2_TR(0x53f38e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f391:{NFSU2_TR(0x53f391);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B53f397:{NFSU2_TR(0x53f397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f3c0;}}
}
B53f399:L53f399:{c.instructions+=2;NFSU2_TR(0x53f399);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f39c:{NFSU2_TR(0x53f39c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f3ad;}}
}
B53f39e:L53f39e:{c.instructions+=3;NFSU2_TR(0x53f39e);
w4(R+4,u32(m1(0x83abb5)));
}
B53f3a5:{NFSU2_TR(0x53f3a5);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f3ab:{NFSU2_TR(0x53f3ab);
{goto L53f3ca;}
}
B53f3ad:L53f3ad:{c.instructions+=4;NFSU2_TR(0x53f3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f3b0:{NFSU2_TR(0x53f3b0);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f3b8:{NFSU2_TR(0x53f3b8);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f3be:{NFSU2_TR(0x53f3be);
{goto L53f3ca;}
}
B53f3c0:L53f3c0:{c.instructions+=1;NFSU2_TR(0x53f3c0);
s4(0x89e7c4,u32(0x0ull));
}
B53f3ca:L53f3ca:{c.instructions+=3;NFSU2_TR(0x53f3ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f3cd:{NFSU2_TR(0x53f3cd);
s4(0x89e7b0,u32(0x1ull));
}
B53f3d7:{NFSU2_TR(0x53f3d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f3e2;}}
}
B53f3d9:L53f3d9:{c.instructions+=2;NFSU2_TR(0x53f3d9);
w4(R+4,u32(m1(0x83abb8)));
}
B53f3e0:{NFSU2_TR(0x53f3e0);
{goto L53f3ed;}
}
B53f3e2:L53f3e2:{c.instructions+=2;NFSU2_TR(0x53f3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f3e5:{NFSU2_TR(0x53f3e5);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f3ed:L53f3ed:{c.instructions+=3;NFSU2_TR(0x53f3ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f3f0:{NFSU2_TR(0x53f3f0);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B53f3f6:{NFSU2_TR(0x53f3f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f401;}}
}
B53f3f8:L53f3f8:{c.instructions+=2;NFSU2_TR(0x53f3f8);
w4(R+4,u32(m1(0x83abb6)));
}
B53f3ff:{NFSU2_TR(0x53f3ff);
{goto L53f40c;}
}
B53f401:L53f401:{c.instructions+=2;NFSU2_TR(0x53f401);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f404:{NFSU2_TR(0x53f404);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f40c:L53f40c:{c.instructions+=3;NFSU2_TR(0x53f40c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f40f:{NFSU2_TR(0x53f40f);
__builtin_memmove(gp(0x89e7f4),(R+4),4);
}
B53f415:{NFSU2_TR(0x53f415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f41f;}}
}
B53f417:L53f417:{c.instructions+=2;NFSU2_TR(0x53f417);
__builtin_memmove((R+4),gp(0x83abcd),1);
}
B53f41d:{NFSU2_TR(0x53f41d);
{goto L53f429;}
}
B53f41f:L53f41f:{c.instructions+=2;NFSU2_TR(0x53f41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f422:{NFSU2_TR(0x53f422);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac9ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B53f429:L53f429:{c.instructions+=9;NFSU2_TR(0x53f429);
w4(R+8,u32(r1(R+4)));
}
B53f42c:{NFSU2_TR(0x53f42c);
__builtin_memmove((R+4),gp(0x850078),4);
}
B53f432:{NFSU2_TR(0x53f432);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f435:{NFSU2_TR(0x53f435);
__builtin_memmove(gp(0x89e7f8),(R+8),4);
}
B53f43b:{NFSU2_TR(0x53f43b);
s1(0x89e7d2,u8(0x1ull));
}
B53f442:{NFSU2_TR(0x53f442);
s1(0x89e7e3,u8(0x1ull));
}
B53f449:{NFSU2_TR(0x53f449);
s1(0x89e7e7,u8(0x0ull));
}
B53f450:{NFSU2_TR(0x53f450);
s1(0x89e7e0,u8(0x0ull));
}
B53f457:{NFSU2_TR(0x53f457);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f473;}}
}
B53f459:L53f459:{c.instructions+=2;NFSU2_TR(0x53f459);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f45b:{NFSU2_TR(0x53f45b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f480;}}
}
B53f45d:L53f45d:{c.instructions+=3;NFSU2_TR(0x53f45d);
__builtin_memmove((R+4),gp(0x83aad4),1);
}
B53f463:{NFSU2_TR(0x53f463);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53f465:{NFSU2_TR(0x53f465);
if(r1(R+518)){{goto L53f480;}}
}
B53f467:L53f467:{c.instructions+=2;NFSU2_TR(0x53f467);
s4(0x89e7b0,u32(0x3ull));
}
B53f471:{NFSU2_TR(0x53f471);
{goto L53f480;}
}
B53f473:L53f473:{c.instructions+=2;NFSU2_TR(0x53f473);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f476:{NFSU2_TR(0x53f476);
if(r1(R+518)){{goto L53f498;}}
}
B53f478:L53f478:{c.instructions+=2;NFSU2_TR(0x53f478);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f47e:{NFSU2_TR(0x53f47e);
if(r1(R+518)){{goto L53f498;}}
}
B53f480:L53f480:{c.instructions+=2;NFSU2_TR(0x53f480);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f483:{NFSU2_TR(0x53f483);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f48c;}}
}
B53f485:L53f485:{c.instructions+=2;NFSU2_TR(0x53f485);
w4(R+0,u32(0x83abd0ull));
}
B53f48a:{NFSU2_TR(0x53f48a);
{goto L53f49d;}
}
B53f48c:L53f48c:{c.instructions+=3;NFSU2_TR(0x53f48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f48f:{NFSU2_TR(0x53f48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aaccull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f496:{NFSU2_TR(0x53f496);
{goto L53f49d;}
}
B53f498:L53f498:{c.instructions+=1;NFSU2_TR(0x53f498);
w4(R+0,u32(0x8500b8ull));
}
B53f49d:L53f49d:{c.instructions+=10;NFSU2_TR(0x53f49d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B53f4a1:{NFSU2_TR(0x53f4a1);
__builtin_memmove(gp(0x89e7bc),(R+4),4);
}
B53f4a7:{NFSU2_TR(0x53f4a7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B53f4aa:{NFSU2_TR(0x53f4aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f4ab:{NFSU2_TR(0x53f4ab);
__builtin_memmove(gp(0x89e7a0),(R+4),4);
}
B53f4b1:{NFSU2_TR(0x53f4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53f4b4:{NFSU2_TR(0x53f4b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f4b5:{NFSU2_TR(0x53f4b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f4b6:{NFSU2_TR(0x53f4b6);
__builtin_memmove(gp(0x89e7a4),(R+8),4);
}
B53f4bc:{NFSU2_TR(0x53f4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f4c1ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B53f4c1:L53f4c1:{c.instructions+=8;NFSU2_TR(0x53f4c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x85ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B53f4c8:{NFSU2_TR(0x53f4c8);
w4(R+4,u32(m1(0x83aa1b)));
}
B53f4cf:{NFSU2_TR(0x53f4cf);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B53f4d5:{NFSU2_TR(0x53f4d5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f4d7:{NFSU2_TR(0x53f4d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f4d8:{NFSU2_TR(0x53f4d8);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B53f4dd:{NFSU2_TR(0x53f4dd);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B53f4e3:{NFSU2_TR(0x53f4e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f4e8ull));
TAIL_STATIC(0x525ed0u,525);
}
B53f4e8:L53f4e8:{c.instructions+=4;NFSU2_TR(0x53f4e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53f4eb:{NFSU2_TR(0x53f4eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f4ed:{NFSU2_TR(0x53f4ed);
w4(R+4,u32(0x89e7a0ull));
}
B53f4f2:{NFSU2_TR(0x53f4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f4f7ull));
TAIL_STATIC(0x5ed960u,5ed);
}
B53f4f7:L53f4f7:{c.instructions+=4;NFSU2_TR(0x53f4f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f4f9:{NFSU2_TR(0x53f4f9);
w4(R+4,u32(0x89e7a0ull));
}
B53f4fe:{NFSU2_TR(0x53f4fe);
__builtin_memmove((R+24),(R+0),4);
}
B53f500:{NFSU2_TR(0x53f500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f505ull));
TAIL_STATIC(0x5ed960u,5ed);
}
B53f505:L53f505:{c.instructions+=3;NFSU2_TR(0x53f505);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f507:{NFSU2_TR(0x53f507);
__builtin_memmove((R+28),(R+0),4);
}
B53f509:{NFSU2_TR(0x53f509);
if(r1(R+518)){{goto L53f531;}}
}
B53f50b:L53f50b:{c.instructions+=2;NFSU2_TR(0x53f50b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53f50e:{NFSU2_TR(0x53f50e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f513ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B53f513:L53f513:{c.instructions+=6;NFSU2_TR(0x53f513);
__builtin_memmove((R+4),gp(0x89e7f4),4);
}
B53f519:{NFSU2_TR(0x53f519);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B53f51c:{NFSU2_TR(0x53f51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f51f:{NFSU2_TR(0x53f51f);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B53f524:{NFSU2_TR(0x53f524);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53f52b:{NFSU2_TR(0x53f52b);
{u32 ea_=u32(u32(9037820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53f531:L53f531:{c.instructions+=2;NFSU2_TR(0x53f531);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f533:{NFSU2_TR(0x53f533);
if(r1(R+518)){{goto L53f55c;}}
}
B53f535:L53f535:{c.instructions+=2;NFSU2_TR(0x53f535);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53f538:{NFSU2_TR(0x53f538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f53dull));
TAIL_STATIC(0x5b5330u,5b5);
}
B53f53d:L53f53d:{c.instructions+=6;NFSU2_TR(0x53f53d);
__builtin_memmove((R+8),gp(0x89e7f4),4);
}
B53f543:{NFSU2_TR(0x53f543);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B53f546:{NFSU2_TR(0x53f546);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f549:{NFSU2_TR(0x53f549);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B53f54f:{NFSU2_TR(0x53f54f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53f556:{NFSU2_TR(0x53f556);
{u32 ea_=u32(u32(9037824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53f55c:L53f55c:{c.instructions+=3;NFSU2_TR(0x53f55c);
__builtin_memmove((R+8),gp(0x89e7c4),4);
}
B53f562:{NFSU2_TR(0x53f562);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f563:{NFSU2_TR(0x53f563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f568ull));
TAIL_STATIC(0x53ee90u,53e);
}
B53f568:L53f568:{c.instructions+=2;NFSU2_TR(0x53f568);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f56a:{NFSU2_TR(0x53f56a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f56full));
TAIL_STATIC(0x5264a0u,526);
}
B53f56f:L53f56f:{c.instructions+=4;NFSU2_TR(0x53f56f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53f572:{NFSU2_TR(0x53f572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53f573:{NFSU2_TR(0x53f573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53f574:{NFSU2_TR(0x53f574);
TAIL_STATIC(0x4fe9f0u,4fe);
}
B53f580:L53f580:{c.instructions+=3;NFSU2_TR(0x53f580);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53f585:{NFSU2_TR(0x53f585);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f588:{NFSU2_TR(0x53f588);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f591;}}
}
B53f58a:L53f58a:{c.instructions+=2;NFSU2_TR(0x53f58a);
w4(R+4,u32(0x83abd0ull));
}
B53f58f:{NFSU2_TR(0x53f58f);
{goto L53f59b;}
}
B53f591:L53f591:{c.instructions+=2;NFSU2_TR(0x53f591);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f594:{NFSU2_TR(0x53f594);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aaccull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f59b:L53f59b:{c.instructions+=17;NFSU2_TR(0x53f59b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f59c:{NFSU2_TR(0x53f59c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f59d:{NFSU2_TR(0x53f59d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B53f5a0:{NFSU2_TR(0x53f5a0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfa0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f5a6:{NFSU2_TR(0x53f5a6);
__builtin_memmove((R+12),(R+518),1);
}
B53f5a9:{NFSU2_TR(0x53f5a9);
__builtin_memmove((R+4),(R+12),1);
}
B53f5ab:{NFSU2_TR(0x53f5ab);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B53f5ad:{NFSU2_TR(0x53f5ad);
s4(0x89e7c0,u32(0x1ull));
}
B53f5b7:{NFSU2_TR(0x53f5b7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B53f5b9:{NFSU2_TR(0x53f5b9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53f5bb:{NFSU2_TR(0x53f5bb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B53f5be:{NFSU2_TR(0x53f5be);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53f5c0:{NFSU2_TR(0x53f5c0);
__builtin_memmove((R+8),(R+518),1);
}
B53f5c3:{NFSU2_TR(0x53f5c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f5c6:{NFSU2_TR(0x53f5c6);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f5cc:{NFSU2_TR(0x53f5cc);
__builtin_memmove(gp(0x89e7b0),(R+8),4);
}
B53f5d2:{NFSU2_TR(0x53f5d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f5dd;}}
}
B53f5d4:L53f5d4:{c.instructions+=2;NFSU2_TR(0x53f5d4);
w4(R+4,u32(m1(0x83abb8)));
}
B53f5db:{NFSU2_TR(0x53f5db);
{goto L53f5e8;}
}
B53f5dd:L53f5dd:{c.instructions+=2;NFSU2_TR(0x53f5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f5e0:{NFSU2_TR(0x53f5e0);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f5e8:L53f5e8:{c.instructions+=7;NFSU2_TR(0x53f5e8);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B53f5ee:{NFSU2_TR(0x53f5ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53f5f0:{NFSU2_TR(0x53f5f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f5f3:{NFSU2_TR(0x53f5f3);
__builtin_memmove(gp(0x89e7f8),(R+4),4);
}
B53f5f9:{NFSU2_TR(0x53f5f9);
s4(0x89e7fc,u32(0x3f800000ull));
}
B53f603:{NFSU2_TR(0x53f603);
s4(0x89e800,u32(0x3f800000ull));
}
B53f60d:{NFSU2_TR(0x53f60d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f618;}}
}
B53f60f:L53f60f:{c.instructions+=2;NFSU2_TR(0x53f60f);
w4(R+0,u32(m1(0x83abb6)));
}
B53f616:{NFSU2_TR(0x53f616);
{goto L53f623;}
}
B53f618:L53f618:{c.instructions+=2;NFSU2_TR(0x53f618);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f61b:{NFSU2_TR(0x53f61b);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B53f623:L53f623:{c.instructions+=11;NFSU2_TR(0x53f623);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B53f628:{NFSU2_TR(0x53f628);
w4(R+0,u32(m1(0x83aa1b)));
}
B53f62f:{NFSU2_TR(0x53f62f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f630:{NFSU2_TR(0x53f630);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f632:{NFSU2_TR(0x53f632);
s1(0x89e7d2,u8(0x1ull));
}
B53f639:{NFSU2_TR(0x53f639);
__builtin_memmove(gp(0x89e7bc),(R+4),4);
}
B53f63f:{NFSU2_TR(0x53f63f);
__builtin_memmove(gp(0x89e7a0),(R+24),4);
}
B53f645:{NFSU2_TR(0x53f645);
__builtin_memmove(gp(0x89e7a4),(R+4),4);
}
B53f64b:{NFSU2_TR(0x53f64b);
__builtin_memmove(gp(0x89e7b4),(R+4),4);
}
B53f651:{NFSU2_TR(0x53f651);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B53f656:{NFSU2_TR(0x53f656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f65bull));
TAIL_STATIC(0x525ed0u,525);
}
B53f65b:L53f65b:{c.instructions+=5;NFSU2_TR(0x53f65b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53f65e:{NFSU2_TR(0x53f65e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53f65f:{NFSU2_TR(0x53f65f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53f661:{NFSU2_TR(0x53f661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53f662:{NFSU2_TR(0x53f662);
if(r1(R+518)){{goto L53f673;}}
}
B53f664:L53f664:{c.instructions+=3;NFSU2_TR(0x53f664);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B53f66a:{NFSU2_TR(0x53f66a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f66b:{NFSU2_TR(0x53f66b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f670ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f000u);}goto L53f000;}
}
B53f670:L53f670:{c.instructions+=1;NFSU2_TR(0x53f670);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53f673:L53f673:{c.instructions+=2;NFSU2_TR(0x53f673);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f675:{NFSU2_TR(0x53f675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f67aull));
TAIL_STATIC(0x5264a0u,526);
}
B53f67a:L53f67a:{c.instructions+=2;NFSU2_TR(0x53f67a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53f67d:{NFSU2_TR(0x53f67d);
TAIL_STATIC(0x4fe9f0u,4fe);
}
B53f690:L53f690:{c.instructions+=7;NFSU2_TR(0x53f690);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53f695:{NFSU2_TR(0x53f695);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f698:{NFSU2_TR(0x53f698);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f699:{NFSU2_TR(0x53f699);
w4(R+12,u32(0x1ull));
}
B53f69e:{NFSU2_TR(0x53f69e);
s4(0x7fbeec,u32(0x3f000000ull));
}
B53f6a8:{NFSU2_TR(0x53f6a8);
__builtin_memmove(gp(0x89e7d8),(R+12),1);
}
B53f6ae:{NFSU2_TR(0x53f6ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f6b9;}}
}
B53f6b0:L53f6b0:{c.instructions+=2;NFSU2_TR(0x53f6b0);
w4(R+4,u32(m1(0x83abb4)));
}
B53f6b7:{NFSU2_TR(0x53f6b7);
{goto L53f6c4;}
}
B53f6b9:L53f6b9:{c.instructions+=2;NFSU2_TR(0x53f6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f6bc:{NFSU2_TR(0x53f6bc);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f6c4:L53f6c4:{c.instructions+=4;NFSU2_TR(0x53f6c4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53f6c6:{NFSU2_TR(0x53f6c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f6c8:{NFSU2_TR(0x53f6c8);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B53f6ce:{NFSU2_TR(0x53f6ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f6f7;}}
}
B53f6d0:L53f6d0:{c.instructions+=2;NFSU2_TR(0x53f6d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f6d3:{NFSU2_TR(0x53f6d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f6e4;}}
}
B53f6d5:L53f6d5:{c.instructions+=3;NFSU2_TR(0x53f6d5);
w4(R+4,u32(m1(0x83abb5)));
}
B53f6dc:{NFSU2_TR(0x53f6dc);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f6e2:{NFSU2_TR(0x53f6e2);
{goto L53f6fd;}
}
B53f6e4:L53f6e4:{c.instructions+=4;NFSU2_TR(0x53f6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f6e7:{NFSU2_TR(0x53f6e7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f6ef:{NFSU2_TR(0x53f6ef);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f6f5:{NFSU2_TR(0x53f6f5);
{goto L53f6fd;}
}
B53f6f7:L53f6f7:{c.instructions+=1;NFSU2_TR(0x53f6f7);
__builtin_memmove(gp(0x89e7c4),(R+8),4);
}
B53f6fd:L53f6fd:{c.instructions+=2;NFSU2_TR(0x53f6fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f700:{NFSU2_TR(0x53f700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f70b;}}
}
B53f702:L53f702:{c.instructions+=2;NFSU2_TR(0x53f702);
w4(R+4,u32(m1(0x83abb8)));
}
B53f709:{NFSU2_TR(0x53f709);
{goto L53f716;}
}
B53f70b:L53f70b:{c.instructions+=2;NFSU2_TR(0x53f70b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f70e:{NFSU2_TR(0x53f70e);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f716:L53f716:{c.instructions+=6;NFSU2_TR(0x53f716);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f719:{NFSU2_TR(0x53f719);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B53f71f:{NFSU2_TR(0x53f71f);
__builtin_memmove(gp(0x89e7f8),(R+8),4);
}
B53f725:{NFSU2_TR(0x53f725);
s4(0x89e7fc,u32(0x3f800000ull));
}
B53f72f:{NFSU2_TR(0x53f72f);
s4(0x89e800,u32(0x3f800000ull));
}
B53f739:{NFSU2_TR(0x53f739);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f744;}}
}
B53f73b:L53f73b:{c.instructions+=2;NFSU2_TR(0x53f73b);
w4(R+4,u32(m1(0x83abb6)));
}
B53f742:{NFSU2_TR(0x53f742);
{goto L53f74f;}
}
B53f744:L53f744:{c.instructions+=2;NFSU2_TR(0x53f744);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f747:{NFSU2_TR(0x53f747);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f74f:L53f74f:{c.instructions+=4;NFSU2_TR(0x53f74f);
__builtin_memmove(gp(0x89e7f4),(R+4),4);
}
B53f755:{NFSU2_TR(0x53f755);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B53f757:{NFSU2_TR(0x53f757);
__builtin_memmove(gp(0x89e7d2),(R+12),1);
}
B53f75d:{NFSU2_TR(0x53f75d);
if(r1(R+518)){{goto L53f785;}}
}
B53f75f:L53f75f:{c.instructions+=2;NFSU2_TR(0x53f75f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B53f760:{NFSU2_TR(0x53f760);
if(r1(R+518)){{goto L53f77d;}}
}
B53f762:L53f762:{c.instructions+=2;NFSU2_TR(0x53f762);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B53f763:{NFSU2_TR(0x53f763);
if(r1(R+518)){{goto L53f771;}}
}
B53f765:L53f765:{c.instructions+=2;NFSU2_TR(0x53f765);
s4(0x89e804,u32(0x3ull));
}
B53f76f:{NFSU2_TR(0x53f76f);
{goto L53f78b;}
}
B53f771:L53f771:{c.instructions+=2;NFSU2_TR(0x53f771);
s4(0x89e804,u32(0x2ull));
}
B53f77b:{NFSU2_TR(0x53f77b);
{goto L53f78b;}
}
B53f77d:L53f77d:{c.instructions+=2;NFSU2_TR(0x53f77d);
__builtin_memmove(gp(0x89e804),(R+12),4);
}
B53f783:{NFSU2_TR(0x53f783);
{goto L53f78b;}
}
B53f785:L53f785:{c.instructions+=1;NFSU2_TR(0x53f785);
__builtin_memmove(gp(0x89e804),(R+8),4);
}
B53f78b:L53f78b:{c.instructions+=3;NFSU2_TR(0x53f78b);
__builtin_memmove((R+4),gp(0x850078),4);
}
B53f791:{NFSU2_TR(0x53f791);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f794:{NFSU2_TR(0x53f794);
if(r1(R+518)){{goto L53f7b6;}}
}
B53f796:L53f796:{c.instructions+=2;NFSU2_TR(0x53f796);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f79c:{NFSU2_TR(0x53f79c);
if(r1(R+518)){{goto L53f7b6;}}
}
B53f79e:L53f79e:{c.instructions+=2;NFSU2_TR(0x53f79e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f7a1:{NFSU2_TR(0x53f7a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f7aa;}}
}
B53f7a3:L53f7a3:{c.instructions+=2;NFSU2_TR(0x53f7a3);
w4(R+0,u32(0x83abd0ull));
}
B53f7a8:{NFSU2_TR(0x53f7a8);
{goto L53f7bb;}
}
B53f7aa:L53f7aa:{c.instructions+=3;NFSU2_TR(0x53f7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f7ad:{NFSU2_TR(0x53f7ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aaccull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53f7b4:{NFSU2_TR(0x53f7b4);
{goto L53f7bb;}
}
B53f7b6:L53f7b6:{c.instructions+=1;NFSU2_TR(0x53f7b6);
w4(R+0,u32(0x8500b8ull));
}
B53f7bb:L53f7bb:{c.instructions+=6;NFSU2_TR(0x53f7bb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B53f7be:{NFSU2_TR(0x53f7be);
__builtin_memmove(gp(0x89e7a0),(R+4),4);
}
B53f7c4:{NFSU2_TR(0x53f7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53f7c7:{NFSU2_TR(0x53f7c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f7c8:{NFSU2_TR(0x53f7c8);
__builtin_memmove(gp(0x89e7a4),(R+8),4);
}
B53f7ce:{NFSU2_TR(0x53f7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f7d3ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B53f7d3:L53f7d3:{c.instructions+=10;NFSU2_TR(0x53f7d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x85ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B53f7da:{NFSU2_TR(0x53f7da);
w4(R+4,u32(m1(0x83aa1b)));
}
B53f7e1:{NFSU2_TR(0x53f7e1);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B53f7e7:{NFSU2_TR(0x53f7e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f7e8:{NFSU2_TR(0x53f7e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f7e9:{NFSU2_TR(0x53f7e9);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B53f7ee:{NFSU2_TR(0x53f7ee);
__builtin_memmove(gp(0x89e7b0),(R+12),4);
}
B53f7f4:{NFSU2_TR(0x53f7f4);
__builtin_memmove(gp(0x89e7bc),(R+12),4);
}
B53f7fa:{NFSU2_TR(0x53f7fa);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B53f800:{NFSU2_TR(0x53f800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f805ull));
TAIL_STATIC(0x525ed0u,525);
}
B53f805:L53f805:{c.instructions+=5;NFSU2_TR(0x53f805);
w4(R+0,u32(m1(0x83aa7b)));
}
B53f80c:{NFSU2_TR(0x53f80c);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B53f812:{NFSU2_TR(0x53f812);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f813:{NFSU2_TR(0x53f813);
__builtin_memmove(gp(0x8900a0),(R+0),4);
}
B53f818:{NFSU2_TR(0x53f818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f81dull));
TAIL_STATIC(0x53ee90u,53e);
}
B53f81d:L53f81d:{c.instructions+=2;NFSU2_TR(0x53f81d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f81f:{NFSU2_TR(0x53f81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f824ull));
TAIL_STATIC(0x5264a0u,526);
}
B53f824:L53f824:{c.instructions+=3;NFSU2_TR(0x53f824);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B53f827:{NFSU2_TR(0x53f827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53f828:{NFSU2_TR(0x53f828);
TAIL_STATIC(0x4fe9f0u,4fe);
}
B53f830:L53f830:{c.instructions+=8;NFSU2_TR(0x53f830);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53f835:{NFSU2_TR(0x53f835);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f838:{NFSU2_TR(0x53f838);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f839:{NFSU2_TR(0x53f839);
w4(R+12,u32(0x1ull));
}
B53f83e:{NFSU2_TR(0x53f83e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f83f:{NFSU2_TR(0x53f83f);
__builtin_memmove(gp(0x89e7b0),(R+12),4);
}
B53f845:{NFSU2_TR(0x53f845);
__builtin_memmove(gp(0x89e7d9),(R+12),1);
}
B53f84b:{NFSU2_TR(0x53f84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f856;}}
}
B53f84d:L53f84d:{c.instructions+=2;NFSU2_TR(0x53f84d);
w4(R+4,u32(m1(0x83abb4)));
}
B53f854:{NFSU2_TR(0x53f854);
{goto L53f861;}
}
B53f856:L53f856:{c.instructions+=2;NFSU2_TR(0x53f856);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f859:{NFSU2_TR(0x53f859);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f861:L53f861:{c.instructions+=4;NFSU2_TR(0x53f861);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B53f867:{NFSU2_TR(0x53f867);
__builtin_memmove((R+4),gp(0x850078),4);
}
B53f86d:{NFSU2_TR(0x53f86d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f870:{NFSU2_TR(0x53f870);
if(r1(R+518)){{goto L53f892;}}
}
B53f872:L53f872:{c.instructions+=2;NFSU2_TR(0x53f872);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f878:{NFSU2_TR(0x53f878);
if(r1(R+518)){{goto L53f892;}}
}
B53f87a:L53f87a:{c.instructions+=2;NFSU2_TR(0x53f87a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f87d:{NFSU2_TR(0x53f87d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f886;}}
}
B53f87f:L53f87f:{c.instructions+=2;NFSU2_TR(0x53f87f);
w4(R+24,u32(0x83abd0ull));
}
B53f884:{NFSU2_TR(0x53f884);
{goto L53f897;}
}
B53f886:L53f886:{c.instructions+=3;NFSU2_TR(0x53f886);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B53f889:{NFSU2_TR(0x53f889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aaccull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B53f890:{NFSU2_TR(0x53f890);
{goto L53f897;}
}
B53f892:L53f892:{c.instructions+=1;NFSU2_TR(0x53f892);
w4(R+24,u32(0x8500b8ull));
}
B53f897:L53f897:{c.instructions+=3;NFSU2_TR(0x53f897);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B53f89a:{NFSU2_TR(0x53f89a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f89b:{NFSU2_TR(0x53f89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f8a0ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B53f8a0:L53f8a0:{c.instructions+=5;NFSU2_TR(0x53f8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53f8a6:{NFSU2_TR(0x53f8a6);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53f8ab:{NFSU2_TR(0x53f8ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53f8ae:{NFSU2_TR(0x53f8ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f8b0:{NFSU2_TR(0x53f8b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f8c4;}}
}
B53f8b2:L53f8b2:{c.instructions+=3;NFSU2_TR(0x53f8b2);
__builtin_memmove(gp(0x89e7bc),(R+12),4);
}
B53f8b8:{NFSU2_TR(0x53f8b8);
s4(0x89e7c4,u32(0x0ull));
}
B53f8c2:{NFSU2_TR(0x53f8c2);
{goto L53f922;}
}
B53f8c4:L53f8c4:{c.instructions+=5;NFSU2_TR(0x53f8c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B53f8c8:{NFSU2_TR(0x53f8c8);
__builtin_memmove(gp(0x89e7bc),(R+4),4);
}
B53f8ce:{NFSU2_TR(0x53f8ce);
__builtin_memmove((R+4),gp(0x89e7e4),1);
}
B53f8d4:{NFSU2_TR(0x53f8d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53f8d6:{NFSU2_TR(0x53f8d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f91a;}}
}
B53f8d8:L53f8d8:{c.instructions+=3;NFSU2_TR(0x53f8d8);
__builtin_memmove((R+4),gp(0x802228),4);
}
B53f8de:{NFSU2_TR(0x53f8de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f8e0:{NFSU2_TR(0x53f8e0);
if(r1(R+518)){{goto L53f91a;}}
}
B53f8e2:L53f8e2:{c.instructions+=2;NFSU2_TR(0x53f8e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f8e5:{NFSU2_TR(0x53f8e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f8f0;}}
}
B53f8e7:L53f8e7:{c.instructions+=2;NFSU2_TR(0x53f8e7);
w4(R+4,u32(m1(0x83abb4)));
}
B53f8ee:{NFSU2_TR(0x53f8ee);
{goto L53f8fb;}
}
B53f8f0:L53f8f0:{c.instructions+=2;NFSU2_TR(0x53f8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f8f3:{NFSU2_TR(0x53f8f3);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f8fb:L53f8fb:{c.instructions+=2;NFSU2_TR(0x53f8fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f8fd:{NFSU2_TR(0x53f8fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f91a;}}
}
B53f8ff:L53f8ff:{c.instructions+=2;NFSU2_TR(0x53f8ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f902:{NFSU2_TR(0x53f902);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f90d;}}
}
B53f904:L53f904:{c.instructions+=2;NFSU2_TR(0x53f904);
w4(R+4,u32(m1(0x83abb5)));
}
B53f90b:{NFSU2_TR(0x53f90b);
{goto L53f91c;}
}
B53f90d:L53f90d:{c.instructions+=3;NFSU2_TR(0x53f90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53f910:{NFSU2_TR(0x53f910);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53f918:{NFSU2_TR(0x53f918);
{goto L53f91c;}
}
B53f91a:L53f91a:{c.instructions+=1;NFSU2_TR(0x53f91a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53f91c:L53f91c:{c.instructions+=1;NFSU2_TR(0x53f91c);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53f922:L53f922:{c.instructions+=3;NFSU2_TR(0x53f922);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f925:{NFSU2_TR(0x53f925);
s1(0x89e7e7,u8(0x0ull));
}
B53f92c:{NFSU2_TR(0x53f92c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f936;}}
}
B53f92e:L53f92e:{c.instructions+=2;NFSU2_TR(0x53f92e);
__builtin_memmove((R+4),gp(0x83abcd),1);
}
B53f934:{NFSU2_TR(0x53f934);
{goto L53f940;}
}
B53f936:L53f936:{c.instructions+=2;NFSU2_TR(0x53f936);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f939:{NFSU2_TR(0x53f939);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac9ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B53f940:L53f940:{c.instructions+=6;NFSU2_TR(0x53f940);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f943:{NFSU2_TR(0x53f943);
w4(R+4,u32(r1(R+4)));
}
B53f946:{NFSU2_TR(0x53f946);
__builtin_memmove(gp(0x89e7f8),(R+4),4);
}
B53f94c:{NFSU2_TR(0x53f94c);
s4(0x89e7fc,u32(0x3f800000ull));
}
B53f956:{NFSU2_TR(0x53f956);
s4(0x89e800,u32(0x3f800000ull));
}
B53f960:{NFSU2_TR(0x53f960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f96b;}}
}
B53f962:L53f962:{c.instructions+=2;NFSU2_TR(0x53f962);
w4(R+0,u32(m1(0x83abb6)));
}
B53f969:{NFSU2_TR(0x53f969);
{goto L53f976;}
}
B53f96b:L53f96b:{c.instructions+=2;NFSU2_TR(0x53f96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f96e:{NFSU2_TR(0x53f96e);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B53f976:L53f976:{c.instructions+=7;NFSU2_TR(0x53f976);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B53f97b:{NFSU2_TR(0x53f97b);
s4(0x89e7f0,u32(0x3f800000ull));
}
B53f985:{NFSU2_TR(0x53f985);
s1(0x89e7d2,u8(0x0ull));
}
B53f98c:{NFSU2_TR(0x53f98c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B53f98f:{NFSU2_TR(0x53f98f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f990:{NFSU2_TR(0x53f990);
__builtin_memmove(gp(0x89e7a0),(R+0),4);
}
B53f995:{NFSU2_TR(0x53f995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53f99aull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B53f99a:L53f99a:{c.instructions+=10;NFSU2_TR(0x53f99a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x85ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B53f9a1:{NFSU2_TR(0x53f9a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53f9a4:{NFSU2_TR(0x53f9a4);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B53f9a9:{NFSU2_TR(0x53f9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53f9ac:{NFSU2_TR(0x53f9ac);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B53f9b1:{NFSU2_TR(0x53f9b1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53f9b6:{NFSU2_TR(0x53f9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53f9b7:{NFSU2_TR(0x53f9b7);
__builtin_memmove(gp(0x89e7a4),(R+4),4);
}
B53f9bd:{NFSU2_TR(0x53f9bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53f9be:{NFSU2_TR(0x53f9be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53f9e7;}}
}
B53f9c0:L53f9c0:{c.instructions+=2;NFSU2_TR(0x53f9c0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53f9c5:{NFSU2_TR(0x53f9c5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53f9e7;}}
}
B53f9c7:L53f9c7:{c.instructions+=3;NFSU2_TR(0x53f9c7);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53f9cc:{NFSU2_TR(0x53f9cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53f9cf:{NFSU2_TR(0x53f9cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53f9da;}}
}
B53f9d1:L53f9d1:{c.instructions+=2;NFSU2_TR(0x53f9d1);
w4(R+0,u32(m1(0x83abb8)));
}
B53f9d8:{NFSU2_TR(0x53f9d8);
{goto L53f9e9;}
}
B53f9da:L53f9da:{c.instructions+=3;NFSU2_TR(0x53f9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53f9dd:{NFSU2_TR(0x53f9dd);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B53f9e5:{NFSU2_TR(0x53f9e5);
{goto L53f9e9;}
}
B53f9e7:L53f9e7:{c.instructions+=1;NFSU2_TR(0x53f9e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53f9e9:L53f9e9:{c.instructions+=7;NFSU2_TR(0x53f9e9);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B53f9ef:{NFSU2_TR(0x53f9ef);
__builtin_memmove(gp(0x89e7a8),(R+0),4);
}
B53f9f4:{NFSU2_TR(0x53f9f4);
w4(R+0,u32(m1(0x83aa1b)));
}
B53f9fb:{NFSU2_TR(0x53f9fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f9fd:{NFSU2_TR(0x53f9fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53f9fe:{NFSU2_TR(0x53f9fe);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B53fa03:{NFSU2_TR(0x53fa03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fa08ull));
TAIL_STATIC(0x525ed0u,525);
}
B53fa08:L53fa08:{c.instructions+=4;NFSU2_TR(0x53fa08);
__builtin_memmove((R+0),gp(0x802228),4);
}
B53fa0d:{NFSU2_TR(0x53fa0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53fa10:{NFSU2_TR(0x53fa10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53fa12:{NFSU2_TR(0x53fa12);
if(r1(R+518)){{goto L53fa23;}}
}
B53fa14:L53fa14:{c.instructions+=3;NFSU2_TR(0x53fa14);
__builtin_memmove((R+8),gp(0x89e7c4),4);
}
B53fa1a:{NFSU2_TR(0x53fa1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fa1b:{NFSU2_TR(0x53fa1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fa20ull));
TAIL_STATIC(0x53ee90u,53e);
}
B53fa20:L53fa20:{c.instructions+=1;NFSU2_TR(0x53fa20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53fa23:L53fa23:{c.instructions+=2;NFSU2_TR(0x53fa23);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fa25:{NFSU2_TR(0x53fa25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fa2aull));
TAIL_STATIC(0x5264a0u,526);
}
B53fa2a:L53fa2a:{c.instructions+=2;NFSU2_TR(0x53fa2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53fa2d:{NFSU2_TR(0x53fa2d);
TAIL_STATIC(0x4fe9f0u,4fe);
}
B53fa40:L53fa40:{c.instructions+=8;NFSU2_TR(0x53fa40);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53fa45:{NFSU2_TR(0x53fa45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fa48:{NFSU2_TR(0x53fa48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fa49:{NFSU2_TR(0x53fa49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fa4a:{NFSU2_TR(0x53fa4a);
w4(R+12,u32(0x1ull));
}
B53fa4f:{NFSU2_TR(0x53fa4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fa50:{NFSU2_TR(0x53fa50);
__builtin_memmove(gp(0x89e7e1),(R+12),1);
}
B53fa56:{NFSU2_TR(0x53fa56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fa61;}}
}
B53fa58:L53fa58:{c.instructions+=2;NFSU2_TR(0x53fa58);
w4(R+4,u32(m1(0x83abb4)));
}
B53fa5f:{NFSU2_TR(0x53fa5f);
{goto L53fa6c;}
}
B53fa61:L53fa61:{c.instructions+=2;NFSU2_TR(0x53fa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53fa64:{NFSU2_TR(0x53fa64);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53fa6c:L53fa6c:{c.instructions+=3;NFSU2_TR(0x53fa6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fa6e:{NFSU2_TR(0x53fa6e);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B53fa74:{NFSU2_TR(0x53fa74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fa9d;}}
}
B53fa76:L53fa76:{c.instructions+=2;NFSU2_TR(0x53fa76);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fa79:{NFSU2_TR(0x53fa79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fa8a;}}
}
B53fa7b:L53fa7b:{c.instructions+=3;NFSU2_TR(0x53fa7b);
w4(R+4,u32(m1(0x83abb5)));
}
B53fa82:{NFSU2_TR(0x53fa82);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53fa88:{NFSU2_TR(0x53fa88);
{goto L53faa7;}
}
B53fa8a:L53fa8a:{c.instructions+=4;NFSU2_TR(0x53fa8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53fa8d:{NFSU2_TR(0x53fa8d);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53fa95:{NFSU2_TR(0x53fa95);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B53fa9b:{NFSU2_TR(0x53fa9b);
{goto L53faa7;}
}
B53fa9d:L53fa9d:{c.instructions+=1;NFSU2_TR(0x53fa9d);
s4(0x89e7c4,u32(0x0ull));
}
B53faa7:L53faa7:{c.instructions+=3;NFSU2_TR(0x53faa7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53faaa:{NFSU2_TR(0x53faaa);
__builtin_memmove(gp(0x89e7b0),(R+12),4);
}
B53fab0:{NFSU2_TR(0x53fab0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fabb;}}
}
B53fab2:L53fab2:{c.instructions+=2;NFSU2_TR(0x53fab2);
w4(R+4,u32(m1(0x83abb8)));
}
B53fab9:{NFSU2_TR(0x53fab9);
{goto L53fac6;}
}
B53fabb:L53fabb:{c.instructions+=2;NFSU2_TR(0x53fabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53fabe:{NFSU2_TR(0x53fabe);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53fac6:L53fac6:{c.instructions+=3;NFSU2_TR(0x53fac6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fac9:{NFSU2_TR(0x53fac9);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B53facf:{NFSU2_TR(0x53facf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fada;}}
}
B53fad1:L53fad1:{c.instructions+=2;NFSU2_TR(0x53fad1);
w4(R+4,u32(m1(0x83abb6)));
}
B53fad8:{NFSU2_TR(0x53fad8);
{goto L53fae5;}
}
B53fada:L53fada:{c.instructions+=2;NFSU2_TR(0x53fada);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53fadd:{NFSU2_TR(0x53fadd);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B53fae5:L53fae5:{c.instructions+=3;NFSU2_TR(0x53fae5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fae8:{NFSU2_TR(0x53fae8);
__builtin_memmove(gp(0x89e7f4),(R+4),4);
}
B53faee:{NFSU2_TR(0x53faee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53faf8;}}
}
B53faf0:L53faf0:{c.instructions+=2;NFSU2_TR(0x53faf0);
__builtin_memmove((R+4),gp(0x83abcd),1);
}
B53faf6:{NFSU2_TR(0x53faf6);
{goto L53fb02;}
}
B53faf8:L53faf8:{c.instructions+=2;NFSU2_TR(0x53faf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53fafb:{NFSU2_TR(0x53fafb);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac9ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B53fb02:L53fb02:{c.instructions+=7;NFSU2_TR(0x53fb02);
w4(R+8,u32(r1(R+4)));
}
B53fb05:{NFSU2_TR(0x53fb05);
__builtin_memmove((R+4),gp(0x850078),4);
}
B53fb0b:{NFSU2_TR(0x53fb0b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fb0e:{NFSU2_TR(0x53fb0e);
__builtin_memmove(gp(0x89e7f8),(R+8),4);
}
B53fb14:{NFSU2_TR(0x53fb14);
__builtin_memmove(gp(0x89e7d2),(R+12),1);
}
B53fb1a:{NFSU2_TR(0x53fb1a);
__builtin_memmove(gp(0x89e7e1),(R+12),1);
}
B53fb20:{NFSU2_TR(0x53fb20);
if(r1(R+518)){{goto L53fb42;}}
}
B53fb22:L53fb22:{c.instructions+=2;NFSU2_TR(0x53fb22);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fb28:{NFSU2_TR(0x53fb28);
if(r1(R+518)){{goto L53fb42;}}
}
B53fb2a:L53fb2a:{c.instructions+=2;NFSU2_TR(0x53fb2a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fb2d:{NFSU2_TR(0x53fb2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fb36;}}
}
B53fb2f:L53fb2f:{c.instructions+=2;NFSU2_TR(0x53fb2f);
w4(R+0,u32(0x83abd0ull));
}
B53fb34:{NFSU2_TR(0x53fb34);
{goto L53fb47;}
}
B53fb36:L53fb36:{c.instructions+=3;NFSU2_TR(0x53fb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53fb39:{NFSU2_TR(0x53fb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aaccull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53fb40:{NFSU2_TR(0x53fb40);
{goto L53fb47;}
}
B53fb42:L53fb42:{c.instructions+=1;NFSU2_TR(0x53fb42);
w4(R+0,u32(0x8500b8ull));
}
B53fb47:L53fb47:{c.instructions+=8;NFSU2_TR(0x53fb47);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B53fb4b:{NFSU2_TR(0x53fb4b);
__builtin_memmove(gp(0x89e7bc),(R+4),4);
}
B53fb51:{NFSU2_TR(0x53fb51);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B53fb54:{NFSU2_TR(0x53fb54);
__builtin_memmove(gp(0x89e7a0),(R+4),4);
}
B53fb5a:{NFSU2_TR(0x53fb5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53fb5d:{NFSU2_TR(0x53fb5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fb5e:{NFSU2_TR(0x53fb5e);
__builtin_memmove(gp(0x89e7a4),(R+8),4);
}
B53fb64:{NFSU2_TR(0x53fb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fb69ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B53fb69:L53fb69:{c.instructions+=8;NFSU2_TR(0x53fb69);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x85ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B53fb70:{NFSU2_TR(0x53fb70);
w4(R+4,u32(m1(0x83aa1b)));
}
B53fb77:{NFSU2_TR(0x53fb77);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B53fb7d:{NFSU2_TR(0x53fb7d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fb7f:{NFSU2_TR(0x53fb7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fb80:{NFSU2_TR(0x53fb80);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B53fb85:{NFSU2_TR(0x53fb85);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B53fb8b:{NFSU2_TR(0x53fb8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fb90ull));
TAIL_STATIC(0x525ed0u,525);
}
B53fb90:L53fb90:{c.instructions+=4;NFSU2_TR(0x53fb90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53fb93:{NFSU2_TR(0x53fb93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fb95:{NFSU2_TR(0x53fb95);
w4(R+4,u32(0x89e7a0ull));
}
B53fb9a:{NFSU2_TR(0x53fb9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fb9full));
TAIL_STATIC(0x5ed960u,5ed);
}
B53fb9f:L53fb9f:{c.instructions+=4;NFSU2_TR(0x53fb9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fba0:{NFSU2_TR(0x53fba0);
w4(R+4,u32(0x89e7a0ull));
}
B53fba5:{NFSU2_TR(0x53fba5);
__builtin_memmove((R+24),(R+0),4);
}
B53fba7:{NFSU2_TR(0x53fba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fbacull));
TAIL_STATIC(0x5ed960u,5ed);
}
B53fbac:L53fbac:{c.instructions+=3;NFSU2_TR(0x53fbac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53fbae:{NFSU2_TR(0x53fbae);
__builtin_memmove((R+28),(R+0),4);
}
B53fbb0:{NFSU2_TR(0x53fbb0);
if(r1(R+518)){{goto L53fbd8;}}
}
B53fbb2:L53fbb2:{c.instructions+=2;NFSU2_TR(0x53fbb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53fbb5:{NFSU2_TR(0x53fbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fbbaull));
TAIL_STATIC(0x5b5330u,5b5);
}
B53fbba:L53fbba:{c.instructions+=6;NFSU2_TR(0x53fbba);
__builtin_memmove((R+4),gp(0x89e7f4),4);
}
B53fbc0:{NFSU2_TR(0x53fbc0);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B53fbc3:{NFSU2_TR(0x53fbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B53fbc6:{NFSU2_TR(0x53fbc6);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B53fbcb:{NFSU2_TR(0x53fbcb);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53fbd2:{NFSU2_TR(0x53fbd2);
{u32 ea_=u32(u32(9037820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53fbd8:L53fbd8:{c.instructions+=2;NFSU2_TR(0x53fbd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53fbda:{NFSU2_TR(0x53fbda);
if(r1(R+518)){{goto L53fc03;}}
}
B53fbdc:L53fbdc:{c.instructions+=2;NFSU2_TR(0x53fbdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53fbdf:{NFSU2_TR(0x53fbdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fbe4ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B53fbe4:L53fbe4:{c.instructions+=6;NFSU2_TR(0x53fbe4);
__builtin_memmove((R+8),gp(0x89e7f4),4);
}
B53fbea:{NFSU2_TR(0x53fbea);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B53fbed:{NFSU2_TR(0x53fbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53fbf0:{NFSU2_TR(0x53fbf0);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B53fbf6:{NFSU2_TR(0x53fbf6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(2380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53fbfd:{NFSU2_TR(0x53fbfd);
{u32 ea_=u32(u32(9037824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53fc03:L53fc03:{c.instructions+=3;NFSU2_TR(0x53fc03);
__builtin_memmove((R+8),gp(0x89e7c4),4);
}
B53fc09:{NFSU2_TR(0x53fc09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fc0a:{NFSU2_TR(0x53fc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc0full));
TAIL_STATIC(0x53ee90u,53e);
}
B53fc0f:L53fc0f:{c.instructions+=2;NFSU2_TR(0x53fc0f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fc11:{NFSU2_TR(0x53fc11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc16ull));
TAIL_STATIC(0x5264a0u,526);
}
B53fc16:L53fc16:{c.instructions+=5;NFSU2_TR(0x53fc16);
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
B53fc19:{NFSU2_TR(0x53fc19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53fc1a:{NFSU2_TR(0x53fc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53fc1b:{NFSU2_TR(0x53fc1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53fc1c:{NFSU2_TR(0x53fc1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53fc20:L53fc20:{c.instructions+=3;NFSU2_TR(0x53fc20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B53fc23:{NFSU2_TR(0x53fc23);
w4(R+4,u32(0x89e7a0ull));
}
B53fc28:{NFSU2_TR(0x53fc28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc2dull));
TAIL_STATIC(0x5ed5f0u,5ed);
}
B53fc2d:L53fc2d:{c.instructions+=2;NFSU2_TR(0x53fc2d);
w4(R+4,u32(0x85ad40ull));
}
B53fc32:{NFSU2_TR(0x53fc32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc37ull));
TAIL_STATIC(0x500f30u,500);
}
B53fc37:L53fc37:{c.instructions+=4;NFSU2_TR(0x53fc37);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53fc3c:{NFSU2_TR(0x53fc3c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53fc3f:{NFSU2_TR(0x53fc3f);
s1(0x89e7e4,u8(0x0ull));
}
B53fc46:{NFSU2_TR(0x53fc46);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53fc8a;}}
}
B53fc48:L53fc48:{c.instructions+=1;NFSU2_TR(0x53fc48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53fcf8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53fc4f:L53fc4f:{c.instructions+=1;NFSU2_TR(0x53fc4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f150u);}goto L53f150;}
}
B53fc54:L53fc54:{c.instructions+=1;NFSU2_TR(0x53fc54);
{goto L53fc8a;}
}
B53fc56:L53fc56:{c.instructions+=1;NFSU2_TR(0x53fc56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc5bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f690u);}goto L53f690;}
}
B53fc5b:L53fc5b:{c.instructions+=1;NFSU2_TR(0x53fc5b);
{goto L53fc8a;}
}
B53fc5d:L53fc5d:{c.instructions+=1;NFSU2_TR(0x53fc5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f830u);}goto L53f830;}
}
B53fc62:L53fc62:{c.instructions+=1;NFSU2_TR(0x53fc62);
{goto L53fc8a;}
}
B53fc64:L53fc64:{c.instructions+=1;NFSU2_TR(0x53fc64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc69ull));
TAIL_STATIC(0x526720u,526);
}
B53fc69:L53fc69:{c.instructions+=1;NFSU2_TR(0x53fc69);
{goto L53fc8a;}
}
B53fc6b:L53fc6b:{c.instructions+=1;NFSU2_TR(0x53fc6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc70ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f580u);}goto L53f580;}
}
B53fc70:L53fc70:{c.instructions+=1;NFSU2_TR(0x53fc70);
{goto L53fc8a;}
}
B53fc72:L53fc72:{c.instructions+=1;NFSU2_TR(0x53fc72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f370u);}goto L53f370;}
}
B53fc77:L53fc77:{c.instructions+=1;NFSU2_TR(0x53fc77);
{goto L53fc8a;}
}
B53fc79:L53fc79:{c.instructions+=1;NFSU2_TR(0x53fc79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc7eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53fa40u);}goto L53fa40;}
}
B53fc7e:L53fc7e:{c.instructions+=1;NFSU2_TR(0x53fc7e);
{goto L53fc8a;}
}
B53fc80:L53fc80:{c.instructions+=2;NFSU2_TR(0x53fc80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fc82:{NFSU2_TR(0x53fc82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fc87ull));
TAIL_STATIC(0x526830u,526);
}
B53fc87:L53fc87:{c.instructions+=1;NFSU2_TR(0x53fc87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53fc8a:L53fc8a:{c.instructions+=5;NFSU2_TR(0x53fc8a);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B53fc8f:{NFSU2_TR(0x53fc8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fc90:{NFSU2_TR(0x53fc90);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B53fc92:{NFSU2_TR(0x53fc92);
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
B53fc94:{NFSU2_TR(0x53fc94);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53fce8;}}
}
B53fc96:L53fc96:{c.instructions+=3;NFSU2_TR(0x53fc96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fc97:{NFSU2_TR(0x53fc97);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x83aa6cull));
s4(u32(r4(U+0)),r4(U+4));
}
B53fc9f:{NFSU2_TR(0x53fc9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fca0:L53fca0:{c.instructions+=5;NFSU2_TR(0x53fca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B53fca7:{NFSU2_TR(0x53fca7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53fcab:{NFSU2_TR(0x53fcab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B53fcad:{NFSU2_TR(0x53fcad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fcae:{NFSU2_TR(0x53fcae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fcb3ull));
TAIL_STATIC(0x571ac0u,571);
}
B53fcb3:L53fcb3:{c.instructions+=6;NFSU2_TR(0x53fcb3);
w4(R+0,u32(r1(R+0)));
}
B53fcb6:{NFSU2_TR(0x53fcb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fcb7:{NFSU2_TR(0x53fcb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53fcbb:{NFSU2_TR(0x53fcbb);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fcbd:{NFSU2_TR(0x53fcbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fcbe:{NFSU2_TR(0x53fcbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fcc3ull));
TAIL_STATIC(0x571fd0u,571);
}
B53fcc3:L53fcc3:{c.instructions+=4;NFSU2_TR(0x53fcc3);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B53fcc7:{NFSU2_TR(0x53fcc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fcc8:{NFSU2_TR(0x53fcc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fcc9:{NFSU2_TR(0x53fcc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fcceull));
TAIL_STATIC(0x571fb0u,571);
}
B53fcce:L53fcce:{c.instructions+=8;NFSU2_TR(0x53fcce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53fcd2:{NFSU2_TR(0x53fcd2);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B53fcd7:{NFSU2_TR(0x53fcd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B53fcda:{NFSU2_TR(0x53fcda);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B53fcdb:{NFSU2_TR(0x53fcdb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B53fcde:{NFSU2_TR(0x53fcde);
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
B53fce0:{NFSU2_TR(0x53fce0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53fce4:{NFSU2_TR(0x53fce4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53fca0u);}goto L53fca0;}}
}
B53fce6:L53fce6:{c.instructions+=2;NFSU2_TR(0x53fce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53fce7:{NFSU2_TR(0x53fce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53fce8:L53fce8:{c.instructions+=2;NFSU2_TR(0x53fce8);
w4(R+4,u32(0x865480ull));
}
B53fced:{NFSU2_TR(0x53fced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fcf2ull));
TAIL_STATIC(0x578320u,578);
}
B53fcf2:L53fcf2:{c.instructions+=3;NFSU2_TR(0x53fcf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53fcf3:{NFSU2_TR(0x53fcf3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53fcf6:{NFSU2_TR(0x53fcf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53fd30:L53fd30:{c.instructions+=5;NFSU2_TR(0x53fd30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B53fd33:{NFSU2_TR(0x53fd33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fd34:{NFSU2_TR(0x53fd34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fd35:{NFSU2_TR(0x53fd35);
w4(R+4,u32(0x89e7a0ull));
}
B53fd3a:{NFSU2_TR(0x53fd3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fd3full));
TAIL_STATIC(0x5ed5f0u,5ed);
}
B53fd3f:L53fd3f:{c.instructions+=3;NFSU2_TR(0x53fd3f);
w4(R+4,u32(0x85ad40ull));
}
B53fd44:{NFSU2_TR(0x53fd44);
s1(0x89e7e4,u8(0x1ull));
}
B53fd4b:{NFSU2_TR(0x53fd4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fd50ull));
TAIL_STATIC(0x500f30u,500);
}
B53fd50:L53fd50:{c.instructions+=3;NFSU2_TR(0x53fd50);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53fd55:{NFSU2_TR(0x53fd55);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fd58:{NFSU2_TR(0x53fd58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fd6b;}}
}
B53fd5a:L53fd5a:{c.instructions+=4;NFSU2_TR(0x53fd5a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53fd5c:{NFSU2_TR(0x53fd5c);
s1(0x83abb4,u8(0x1ull));
}
B53fd63:{NFSU2_TR(0x53fd63);
__builtin_memmove(gp(0x83abb5),(R+12),1);
}
B53fd69:{NFSU2_TR(0x53fd69);
{goto L53fd96;}
}
B53fd6b:L53fd6b:{c.instructions+=5;NFSU2_TR(0x53fd6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53fd6e:{NFSU2_TR(0x53fd6e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B53fd76:{NFSU2_TR(0x53fd76);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B53fd7b:{NFSU2_TR(0x53fd7b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fd7e:{NFSU2_TR(0x53fd7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53fd8a;}}
}
B53fd80:L53fd80:{c.instructions+=3;NFSU2_TR(0x53fd80);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53fd82:{NFSU2_TR(0x53fd82);
__builtin_memmove(gp(0x83abb5),(R+12),1);
}
B53fd88:{NFSU2_TR(0x53fd88);
{goto L53fd96;}
}
B53fd8a:L53fd8a:{c.instructions+=3;NFSU2_TR(0x53fd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53fd8d:{NFSU2_TR(0x53fd8d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53fd8f:{NFSU2_TR(0x53fd8f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B53fd96:L53fd96:{c.instructions+=3;NFSU2_TR(0x53fd96);
__builtin_memmove((R+0),gp(0x850088),4);
}
B53fd9b:{NFSU2_TR(0x53fd9b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53fd9e:{NFSU2_TR(0x53fd9e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53fdd3;}}
}
B53fda0:L53fda0:{c.instructions+=1;NFSU2_TR(0x53fda0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53fe80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53fda7:L53fda7:{c.instructions+=1;NFSU2_TR(0x53fda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fdacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f150u);}goto L53f150;}
}
B53fdac:L53fdac:{c.instructions+=1;NFSU2_TR(0x53fdac);
{goto L53fdd3;}
}
B53fdae:L53fdae:{c.instructions+=1;NFSU2_TR(0x53fdae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fdb3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f690u);}goto L53f690;}
}
B53fdb3:L53fdb3:{c.instructions+=1;NFSU2_TR(0x53fdb3);
{goto L53fdd3;}
}
B53fdb5:L53fdb5:{c.instructions+=1;NFSU2_TR(0x53fdb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fdbaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f830u);}goto L53f830;}
}
B53fdba:L53fdba:{c.instructions+=1;NFSU2_TR(0x53fdba);
{goto L53fdd3;}
}
B53fdbc:L53fdbc:{c.instructions+=2;NFSU2_TR(0x53fdbc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fdbd:{NFSU2_TR(0x53fdbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fdc2ull));
TAIL_STATIC(0x526830u,526);
}
B53fdc2:L53fdc2:{c.instructions+=2;NFSU2_TR(0x53fdc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53fdc5:{NFSU2_TR(0x53fdc5);
{goto L53fdd3;}
}
B53fdc7:L53fdc7:{c.instructions+=1;NFSU2_TR(0x53fdc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fdccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53f370u);}goto L53f370;}
}
B53fdcc:L53fdcc:{c.instructions+=1;NFSU2_TR(0x53fdcc);
{goto L53fdd3;}
}
B53fdce:L53fdce:{c.instructions+=1;NFSU2_TR(0x53fdce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fdd3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53fa40u);}goto L53fa40;}
}
B53fdd3:L53fdd3:{c.instructions+=8;NFSU2_TR(0x53fdd3);
__builtin_memmove((R+0),gp(0x8500bc),4);
}
B53fdd8:{NFSU2_TR(0x53fdd8);
w4(R+8,u32(m2(0x8500b8)));
}
B53fddf:{NFSU2_TR(0x53fddf);
__builtin_memmove((R+4),gp(0x850099),1);
}
B53fde5:{NFSU2_TR(0x53fde5);
__builtin_memmove(gp(0x89e7a4),(R+0),4);
}
B53fdea:{NFSU2_TR(0x53fdea);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53fdf0:{NFSU2_TR(0x53fdf0);
__builtin_memmove(gp(0x89e7a0),(R+8),4);
}
B53fdf6:{NFSU2_TR(0x53fdf6);
__builtin_memmove(gp(0x89e7e7),(R+4),1);
}
B53fdfc:{NFSU2_TR(0x53fdfc);
if(r1(R+518)){{goto L53fe07;}}
}
B53fdfe:L53fdfe:{c.instructions+=1;NFSU2_TR(0x53fdfe);
s2(0x8500ba,u16(0x1ull));
}
B53fe07:L53fe07:{c.instructions+=7;NFSU2_TR(0x53fe07);
w4(R+8,u32(m2(0x8500ba)));
}
B53fe0e:{NFSU2_TR(0x53fe0e);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B53fe13:{NFSU2_TR(0x53fe13);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B53fe15:{NFSU2_TR(0x53fe15);
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
B53fe17:{NFSU2_TR(0x53fe17);
__builtin_memmove(gp(0x89e7bc),(R+8),4);
}
B53fe1d:{NFSU2_TR(0x53fe1d);
__builtin_memmove(gp(0x89e7a8),(R+12),4);
}
B53fe23:{NFSU2_TR(0x53fe23);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53fe77;}}
}
B53fe25:L53fe25:{c.instructions+=3;NFSU2_TR(0x53fe25);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x83aa6cull));
s4(u32(r4(U+0)),r4(U+4));
}
B53fe2d:{NFSU2_TR(0x53fe2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fe2e:{NFSU2_TR(0x53fe2e);
__builtin_memmove((R+28),(R+28),4);
}
B53fe30:L53fe30:{c.instructions+=5;NFSU2_TR(0x53fe30);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B53fe37:{NFSU2_TR(0x53fe37);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53fe3b:{NFSU2_TR(0x53fe3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B53fe3d:{NFSU2_TR(0x53fe3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fe3e:{NFSU2_TR(0x53fe3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fe43ull));
TAIL_STATIC(0x571ac0u,571);
}
B53fe43:L53fe43:{c.instructions+=6;NFSU2_TR(0x53fe43);
w4(R+0,u32(r1(R+0)));
}
B53fe46:{NFSU2_TR(0x53fe46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fe47:{NFSU2_TR(0x53fe47);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53fe4b:{NFSU2_TR(0x53fe4b);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fe4d:{NFSU2_TR(0x53fe4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fe4e:{NFSU2_TR(0x53fe4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fe53ull));
TAIL_STATIC(0x571fd0u,571);
}
B53fe53:L53fe53:{c.instructions+=4;NFSU2_TR(0x53fe53);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B53fe57:{NFSU2_TR(0x53fe57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fe58:{NFSU2_TR(0x53fe58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fe59:{NFSU2_TR(0x53fe59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fe5eull));
TAIL_STATIC(0x571fb0u,571);
}
B53fe5e:L53fe5e:{c.instructions+=8;NFSU2_TR(0x53fe5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53fe62:{NFSU2_TR(0x53fe62);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B53fe67:{NFSU2_TR(0x53fe67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B53fe6a:{NFSU2_TR(0x53fe6a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B53fe6b:{NFSU2_TR(0x53fe6b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B53fe6e:{NFSU2_TR(0x53fe6e);
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
B53fe70:{NFSU2_TR(0x53fe70);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53fe74:{NFSU2_TR(0x53fe74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53fe30u);}goto L53fe30;}}
}
B53fe76:L53fe76:{c.instructions+=1;NFSU2_TR(0x53fe76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53fe77:L53fe77:{c.instructions+=4;NFSU2_TR(0x53fe77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53fe78:{NFSU2_TR(0x53fe78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53fe79:{NFSU2_TR(0x53fe79);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53fe7c:{NFSU2_TR(0x53fe7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53feb0:L53feb0:{c.instructions+=11;NFSU2_TR(0x53feb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53feb1:{NFSU2_TR(0x53feb1);
__builtin_memmove((R+20),(R+16),4);
}
B53feb3:{NFSU2_TR(0x53feb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B53feb6:{NFSU2_TR(0x53feb6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53feb8:{NFSU2_TR(0x53feb8);
u8 U[4];
w4(U+0,u32(0x777351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53febd:{NFSU2_TR(0x53febd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53fec3:{NFSU2_TR(0x53fec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fec4:{NFSU2_TR(0x53fec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53fecb:{NFSU2_TR(0x53fecb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fecc:{NFSU2_TR(0x53fecc);
w4(R+0,u32(0x1244ull));
}
B53fed1:{NFSU2_TR(0x53fed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53fed6ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B53fed6:L53fed6:{c.instructions+=7;NFSU2_TR(0x53fed6);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B53fedb:{NFSU2_TR(0x53fedb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53fedd:{NFSU2_TR(0x53fedd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fede:{NFSU2_TR(0x53fede);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fedf:{NFSU2_TR(0x53fedf);
__builtin_memmove((R+24),gp(0x7faa18),4);
}
B53fee5:{NFSU2_TR(0x53fee5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53fee6:{NFSU2_TR(0x53fee6);
if(r1(R+518)){{goto L53ff85;}}
}
B53feec:L53feec:{c.instructions+=5;NFSU2_TR(0x53feec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53feee:{NFSU2_TR(0x53feee);
w4(R+12,u32(0x1ull));
}
B53fef3:{NFSU2_TR(0x53fef3);
w4(R+4,u32(0xaull));
}
B53fef8:{NFSU2_TR(0x53fef8);
w4(R+0,u32(0x3ull));
}
B53fefd:{NFSU2_TR(0x53fefd);
w4(R+28,u32(0x865058ull));
}
B53ff02:L53ff02:{c.instructions+=1;NFSU2_TR(0x53ff02);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L53ff04;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53ff02u);}goto L53ff02;}
}
B53ff04:L53ff04:{c.instructions+=21;NFSU2_TR(0x53ff04);
w4(R+24,u32(0x3eaull));
}
B53ff09:{NFSU2_TR(0x53ff09);
__builtin_memmove(gp(0x7faa1c),(R+12),4);
}
B53ff0f:{NFSU2_TR(0x53ff0f);
__builtin_memmove(gp(0x864fb0),(R+12),4);
}
B53ff15:{NFSU2_TR(0x53ff15);
__builtin_memmove(gp(0x7faa20),(R+12),4);
}
B53ff1b:{NFSU2_TR(0x53ff1b);
__builtin_memmove(gp(0x864fb4),(R+8),4);
}
B53ff21:{NFSU2_TR(0x53ff21);
__builtin_memmove(gp(0x7faa28),(R+12),4);
}
B53ff27:{NFSU2_TR(0x53ff27);
__builtin_memmove(gp(0x864fc0),(R+8),4);
}
B53ff2d:{NFSU2_TR(0x53ff2d);
__builtin_memmove(gp(0x864fc4),(R+8),4);
}
B53ff33:{NFSU2_TR(0x53ff33);
__builtin_memmove(gp(0x864fcc),(R+8),4);
}
B53ff39:{NFSU2_TR(0x53ff39);
__builtin_memmove(gp(0x864fd0),(R+8),4);
}
B53ff3f:{NFSU2_TR(0x53ff3f);
__builtin_memmove(gp(0x864fd4),(R+8),4);
}
B53ff45:{NFSU2_TR(0x53ff45);
__builtin_memmove(gp(0x864fbc),(R+8),4);
}
B53ff4b:{NFSU2_TR(0x53ff4b);
s4(0x7faa30,u32(0x2ull));
}
B53ff55:{NFSU2_TR(0x53ff55);
__builtin_memmove(gp(0x7faa3c),(R+12),4);
}
B53ff5b:{NFSU2_TR(0x53ff5b);
__builtin_memmove(gp(0x7faa40),(R+12),4);
}
B53ff61:{NFSU2_TR(0x53ff61);
__builtin_memmove(gp(0x7faa44),(R+8),4);
}
B53ff67:{NFSU2_TR(0x53ff67);
__builtin_memmove(gp(0x864fe0),(R+8),4);
}
B53ff6d:{NFSU2_TR(0x53ff6d);
s4(0x7faa78,u32(0x13ull));
}
B53ff77:{NFSU2_TR(0x53ff77);
__builtin_memmove(gp(0x8650ac),(R+8),4);
}
B53ff7d:{NFSU2_TR(0x53ff7d);
__builtin_memmove(gp(0x865060),(R+8),4);
}
B53ff83:{NFSU2_TR(0x53ff83);
{goto L53ff91;}
}
B53ff85:L53ff85:{c.instructions+=2;NFSU2_TR(0x53ff85);
__builtin_memmove((R+12),gp(0x7faa28),4);
}
B53ff8b:{NFSU2_TR(0x53ff8b);
__builtin_memmove((R+8),gp(0x864fc0),4);
}
B53ff91:L53ff91:{c.instructions+=4;NFSU2_TR(0x53ff91);
__builtin_memmove((R+0),gp(0x865084),4);
}
B53ff96:{NFSU2_TR(0x53ff96);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53ff98:{NFSU2_TR(0x53ff98);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ff9a:{NFSU2_TR(0x53ff9a);
if(r1(R+518)){{goto L53ffa3;}}
}
B53ff9c:L53ff9c:{c.instructions+=1;NFSU2_TR(0x53ff9c);
s1(0x89e7e4,u8(0x1ull));
}
B53ffa3:L53ffa3:{c.instructions+=2;NFSU2_TR(0x53ffa3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffa6:{NFSU2_TR(0x53ffa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ffd3;}}
}
B53ffa8:L53ffa8:{c.instructions+=2;NFSU2_TR(0x53ffa8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffaa:{NFSU2_TR(0x53ffaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ffb3;}}
}
B53ffac:L53ffac:{c.instructions+=2;NFSU2_TR(0x53ffac);
w4(R+24,u32(0xfa0ull));
}
B53ffb1:{NFSU2_TR(0x53ffb1);
{goto L53ffbd;}
}
B53ffb3:L53ffb3:{c.instructions+=2;NFSU2_TR(0x53ffb3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffb6:{NFSU2_TR(0x53ffb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ffbd;}}
}
B53ffb8:L53ffb8:{c.instructions+=1;NFSU2_TR(0x53ffb8);
w4(R+24,u32(0xfb5ull));
}
B53ffbd:L53ffbd:{c.instructions+=2;NFSU2_TR(0x53ffbd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffbf:{NFSU2_TR(0x53ffbf);
if(r1(R+518)){{goto L53ffc6;}}
}
B53ffc1:L53ffc1:{c.instructions+=1;NFSU2_TR(0x53ffc1);
w4(R+24,u32(0x1069ull));
}
B53ffc6:L53ffc6:{c.instructions+=2;NFSU2_TR(0x53ffc6);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fc4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffcc:{NFSU2_TR(0x53ffcc);
if(r1(R+518)){{goto L53ffd9;}}
}
B53ffce:L53ffce:{c.instructions+=1;NFSU2_TR(0x53ffce);
w4(R+24,u32(0x10cdull));
}
B53ffd3:L53ffd3:{c.instructions+=1;NFSU2_TR(0x53ffd3);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fc4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffd9:L53ffd9:{c.instructions+=11;NFSU2_TR(0x53ffd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B53ffdc:{NFSU2_TR(0x53ffdc);
__builtin_memmove(gp(0x89e7d9),(R+0),1);
}
B53ffe1:{NFSU2_TR(0x53ffe1);
__builtin_memmove((R+0),gp(0x864fcc),4);
}
B53ffe6:{NFSU2_TR(0x53ffe6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffe8:{NFSU2_TR(0x53ffe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B53ffeb:{NFSU2_TR(0x53ffeb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ffed:{NFSU2_TR(0x53ffed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B53fff0:{NFSU2_TR(0x53fff0);
__builtin_memmove(gp(0x89e7e2),(R+0),1);
}
B53fff5:{NFSU2_TR(0x53fff5);
__builtin_memmove((R+0),gp(0x864fb4),4);
}
B53fffa:{NFSU2_TR(0x53fffa);
__builtin_memmove(gp(0x89e7a4),(R+0),4);
}
B53ffff:{NFSU2_TR(0x53ffff);
__builtin_memmove((R+0),gp(0x864fd4),4);
TAIL_STATIC(0x540004u,540);
}
XIT:NFSU2_TR_EXIT(0x53f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
