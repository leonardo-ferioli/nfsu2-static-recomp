#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e7(u8* __restrict R,Cpu& c);
u32 body_6e9(u8* __restrict R,Cpu& c);
u32 body_6eb(u8* __restrict R,Cpu& c);
u32 body_6ec(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ea,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ea,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ea(u8* __restrict R,Cpu& c);
u32 page_6ea(Cpu& c){return body_6ea(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ea(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ea002:goto L6ea002;
case 0x6ea005:c.instructions+=10;goto B6ea005;
case 0x6ea006:c.instructions+=9;goto B6ea006;
case 0x6ea009:c.instructions+=8;goto B6ea009;
case 0x6ea00d:c.instructions+=7;goto B6ea00d;
case 0x6ea00f:c.instructions+=6;goto B6ea00f;
case 0x6ea013:c.instructions+=5;goto B6ea013;
case 0x6ea017:c.instructions+=4;goto B6ea017;
case 0x6ea01a:c.instructions+=3;goto B6ea01a;
case 0x6ea01b:c.instructions+=2;goto B6ea01b;
case 0x6ea01d:c.instructions+=1;goto B6ea01d;
case 0x6ea01f:goto L6ea01f;
case 0x6ea020:c.instructions+=6;goto B6ea020;
case 0x6ea021:c.instructions+=5;goto B6ea021;
case 0x6ea022:c.instructions+=4;goto B6ea022;
case 0x6ea024:c.instructions+=3;goto B6ea024;
case 0x6ea025:c.instructions+=2;goto B6ea025;
case 0x6ea028:c.instructions+=1;goto B6ea028;
case 0x6ea030:goto L6ea030;
case 0x6ea031:c.instructions+=44;goto B6ea031;
case 0x6ea035:c.instructions+=43;goto B6ea035;
case 0x6ea03b:c.instructions+=42;goto B6ea03b;
case 0x6ea03d:c.instructions+=41;goto B6ea03d;
case 0x6ea041:c.instructions+=40;goto B6ea041;
case 0x6ea045:c.instructions+=39;goto B6ea045;
case 0x6ea049:c.instructions+=38;goto B6ea049;
case 0x6ea04b:c.instructions+=37;goto B6ea04b;
case 0x6ea051:c.instructions+=36;goto B6ea051;
case 0x6ea054:c.instructions+=35;goto B6ea054;
case 0x6ea058:c.instructions+=34;goto B6ea058;
case 0x6ea05c:c.instructions+=33;goto B6ea05c;
case 0x6ea060:c.instructions+=32;goto B6ea060;
case 0x6ea062:c.instructions+=31;goto B6ea062;
case 0x6ea068:c.instructions+=30;goto B6ea068;
case 0x6ea06b:c.instructions+=29;goto B6ea06b;
case 0x6ea06f:c.instructions+=28;goto B6ea06f;
case 0x6ea073:c.instructions+=27;goto B6ea073;
case 0x6ea077:c.instructions+=26;goto B6ea077;
case 0x6ea079:c.instructions+=25;goto B6ea079;
case 0x6ea07c:c.instructions+=24;goto B6ea07c;
case 0x6ea080:c.instructions+=23;goto B6ea080;
case 0x6ea084:c.instructions+=22;goto B6ea084;
case 0x6ea088:c.instructions+=21;goto B6ea088;
case 0x6ea08a:c.instructions+=20;goto B6ea08a;
case 0x6ea08d:c.instructions+=19;goto B6ea08d;
case 0x6ea090:c.instructions+=18;goto B6ea090;
case 0x6ea093:c.instructions+=17;goto B6ea093;
case 0x6ea096:c.instructions+=16;goto B6ea096;
case 0x6ea098:c.instructions+=15;goto B6ea098;
case 0x6ea09c:c.instructions+=14;goto B6ea09c;
case 0x6ea0a0:c.instructions+=13;goto B6ea0a0;
case 0x6ea0a6:c.instructions+=12;goto B6ea0a6;
case 0x6ea0ac:c.instructions+=11;goto B6ea0ac;
case 0x6ea0b2:c.instructions+=10;goto B6ea0b2;
case 0x6ea0b4:c.instructions+=9;goto B6ea0b4;
case 0x6ea0b8:c.instructions+=8;goto B6ea0b8;
case 0x6ea0bc:c.instructions+=7;goto B6ea0bc;
case 0x6ea0c0:c.instructions+=6;goto B6ea0c0;
case 0x6ea0c6:c.instructions+=5;goto B6ea0c6;
case 0x6ea0cc:c.instructions+=4;goto B6ea0cc;
case 0x6ea0d2:c.instructions+=3;goto B6ea0d2;
case 0x6ea0d5:c.instructions+=2;goto B6ea0d5;
case 0x6ea0d6:c.instructions+=1;goto B6ea0d6;
case 0x6ea0e0:goto L6ea0e0;
case 0x6ea0e4:c.instructions+=8;goto B6ea0e4;
case 0x6ea0ea:c.instructions+=7;goto B6ea0ea;
case 0x6ea0ee:c.instructions+=6;goto B6ea0ee;
case 0x6ea0f0:c.instructions+=5;goto B6ea0f0;
case 0x6ea0f2:c.instructions+=4;goto B6ea0f2;
case 0x6ea0f9:c.instructions+=3;goto B6ea0f9;
case 0x6ea100:c.instructions+=2;goto B6ea100;
case 0x6ea106:c.instructions+=1;goto B6ea106;
case 0x6ea108:goto L6ea108;
case 0x6ea10b:c.instructions+=6;goto B6ea10b;
case 0x6ea10f:c.instructions+=5;goto B6ea10f;
case 0x6ea113:c.instructions+=4;goto B6ea113;
case 0x6ea115:c.instructions+=3;goto B6ea115;
case 0x6ea11b:c.instructions+=2;goto B6ea11b;
case 0x6ea11d:c.instructions+=1;goto B6ea11d;
case 0x6ea11f:goto L6ea11f;
case 0x6ea122:c.instructions+=2;goto B6ea122;
case 0x6ea125:c.instructions+=1;goto B6ea125;
case 0x6ea127:goto L6ea127;
case 0x6ea12b:c.instructions+=5;goto B6ea12b;
case 0x6ea12f:c.instructions+=4;goto B6ea12f;
case 0x6ea131:c.instructions+=3;goto B6ea131;
case 0x6ea137:c.instructions+=2;goto B6ea137;
case 0x6ea13a:c.instructions+=1;goto B6ea13a;
case 0x6ea13c:goto L6ea13c;
case 0x6ea140:c.instructions+=4;goto B6ea140;
case 0x6ea144:c.instructions+=3;goto B6ea144;
case 0x6ea146:c.instructions+=2;goto B6ea146;
case 0x6ea14c:c.instructions+=1;goto B6ea14c;
case 0x6ea14f:goto L6ea14f;
case 0x6ea153:c.instructions+=7;goto B6ea153;
case 0x6ea157:c.instructions+=6;goto B6ea157;
case 0x6ea15b:c.instructions+=5;goto B6ea15b;
case 0x6ea15d:c.instructions+=4;goto B6ea15d;
case 0x6ea163:c.instructions+=3;goto B6ea163;
case 0x6ea166:c.instructions+=2;goto B6ea166;
case 0x6ea168:c.instructions+=1;goto B6ea168;
case 0x6ea170:goto L6ea170;
case 0x6ea174:c.instructions+=9;goto B6ea174;
case 0x6ea178:c.instructions+=8;goto B6ea178;
case 0x6ea179:c.instructions+=7;goto B6ea179;
case 0x6ea17b:c.instructions+=6;goto B6ea17b;
case 0x6ea182:c.instructions+=5;goto B6ea182;
case 0x6ea189:c.instructions+=4;goto B6ea189;
case 0x6ea18f:c.instructions+=3;goto B6ea18f;
case 0x6ea192:c.instructions+=2;goto B6ea192;
case 0x6ea194:c.instructions+=1;goto B6ea194;
case 0x6ea196:goto L6ea196;
case 0x6ea198:c.instructions+=9;goto B6ea198;
case 0x6ea19b:c.instructions+=8;goto B6ea19b;
case 0x6ea19e:c.instructions+=7;goto B6ea19e;
case 0x6ea1a2:c.instructions+=6;goto B6ea1a2;
case 0x6ea1a6:c.instructions+=5;goto B6ea1a6;
case 0x6ea1a9:c.instructions+=4;goto B6ea1a9;
case 0x6ea1af:c.instructions+=3;goto B6ea1af;
case 0x6ea1b2:c.instructions+=2;goto B6ea1b2;
case 0x6ea1b4:c.instructions+=1;goto B6ea1b4;
case 0x6ea1b6:goto L6ea1b6;
case 0x6ea1b9:c.instructions+=2;goto B6ea1b9;
case 0x6ea1bb:c.instructions+=1;goto B6ea1bb;
case 0x6ea1bd:goto L6ea1bd;
case 0x6ea1c0:c.instructions+=8;goto B6ea1c0;
case 0x6ea1c3:c.instructions+=7;goto B6ea1c3;
case 0x6ea1c7:c.instructions+=6;goto B6ea1c7;
case 0x6ea1cb:c.instructions+=5;goto B6ea1cb;
case 0x6ea1ce:c.instructions+=4;goto B6ea1ce;
case 0x6ea1d4:c.instructions+=3;goto B6ea1d4;
case 0x6ea1d7:c.instructions+=2;goto B6ea1d7;
case 0x6ea1da:c.instructions+=1;goto B6ea1da;
case 0x6ea1dc:goto L6ea1dc;
case 0x6ea1df:c.instructions+=7;goto B6ea1df;
case 0x6ea1e2:c.instructions+=6;goto B6ea1e2;
case 0x6ea1e6:c.instructions+=5;goto B6ea1e6;
case 0x6ea1ea:c.instructions+=4;goto B6ea1ea;
case 0x6ea1ed:c.instructions+=3;goto B6ea1ed;
case 0x6ea1f3:c.instructions+=2;goto B6ea1f3;
case 0x6ea1f6:c.instructions+=1;goto B6ea1f6;
case 0x6ea1f9:goto L6ea1f9;
case 0x6ea1fb:c.instructions+=10;goto B6ea1fb;
case 0x6ea1fe:c.instructions+=9;goto B6ea1fe;
case 0x6ea201:c.instructions+=8;goto B6ea201;
case 0x6ea205:c.instructions+=7;goto B6ea205;
case 0x6ea206:c.instructions+=6;goto B6ea206;
case 0x6ea20a:c.instructions+=5;goto B6ea20a;
case 0x6ea20d:c.instructions+=4;goto B6ea20d;
case 0x6ea213:c.instructions+=3;goto B6ea213;
case 0x6ea216:c.instructions+=2;goto B6ea216;
case 0x6ea219:c.instructions+=1;goto B6ea219;
case 0x6ea220:goto L6ea220;
case 0x6ea221:c.instructions+=2;goto B6ea221;
case 0x6ea223:c.instructions+=1;goto B6ea223;
case 0x6ea228:goto L6ea228;
case 0x6ea22a:c.instructions+=14;goto B6ea22a;
case 0x6ea22d:c.instructions+=13;goto B6ea22d;
case 0x6ea230:c.instructions+=12;goto B6ea230;
case 0x6ea233:c.instructions+=11;goto B6ea233;
case 0x6ea236:c.instructions+=10;goto B6ea236;
case 0x6ea239:c.instructions+=9;goto B6ea239;
case 0x6ea23c:c.instructions+=8;goto B6ea23c;
case 0x6ea23f:c.instructions+=7;goto B6ea23f;
case 0x6ea245:c.instructions+=6;goto B6ea245;
case 0x6ea248:c.instructions+=5;goto B6ea248;
case 0x6ea24b:c.instructions+=4;goto B6ea24b;
case 0x6ea252:c.instructions+=3;goto B6ea252;
case 0x6ea254:c.instructions+=2;goto B6ea254;
case 0x6ea255:c.instructions+=1;goto B6ea255;
case 0x6ea260:goto L6ea260;
case 0x6ea263:c.instructions+=5;goto B6ea263;
case 0x6ea264:c.instructions+=4;goto B6ea264;
case 0x6ea266:c.instructions+=3;goto B6ea266;
case 0x6ea269:c.instructions+=2;goto B6ea269;
case 0x6ea26b:c.instructions+=1;goto B6ea26b;
case 0x6ea271:goto L6ea271;
case 0x6ea272:c.instructions+=23;goto B6ea272;
case 0x6ea273:c.instructions+=22;goto B6ea273;
case 0x6ea274:c.instructions+=21;goto B6ea274;
case 0x6ea277:c.instructions+=20;goto B6ea277;
case 0x6ea27b:c.instructions+=19;goto B6ea27b;
case 0x6ea27e:c.instructions+=18;goto B6ea27e;
case 0x6ea281:c.instructions+=17;goto B6ea281;
case 0x6ea283:c.instructions+=16;goto B6ea283;
case 0x6ea286:c.instructions+=15;goto B6ea286;
case 0x6ea289:c.instructions+=14;goto B6ea289;
case 0x6ea28d:c.instructions+=13;goto B6ea28d;
case 0x6ea292:c.instructions+=12;goto B6ea292;
case 0x6ea294:c.instructions+=11;goto B6ea294;
case 0x6ea295:c.instructions+=10;goto B6ea295;
case 0x6ea298:c.instructions+=9;goto B6ea298;
case 0x6ea299:c.instructions+=8;goto B6ea299;
case 0x6ea29c:c.instructions+=7;goto B6ea29c;
case 0x6ea29f:c.instructions+=6;goto B6ea29f;
case 0x6ea2a3:c.instructions+=5;goto B6ea2a3;
case 0x6ea2a9:c.instructions+=4;goto B6ea2a9;
case 0x6ea2ab:c.instructions+=3;goto B6ea2ab;
case 0x6ea2ae:c.instructions+=2;goto B6ea2ae;
case 0x6ea2af:c.instructions+=1;goto B6ea2af;
case 0x6ea2b2:goto L6ea2b2;
case 0x6ea2b5:c.instructions+=8;goto B6ea2b5;
case 0x6ea2b8:c.instructions+=7;goto B6ea2b8;
case 0x6ea2bb:c.instructions+=6;goto B6ea2bb;
case 0x6ea2bf:c.instructions+=5;goto B6ea2bf;
case 0x6ea2c5:c.instructions+=4;goto B6ea2c5;
case 0x6ea2c7:c.instructions+=3;goto B6ea2c7;
case 0x6ea2ca:c.instructions+=2;goto B6ea2ca;
case 0x6ea2cb:c.instructions+=1;goto B6ea2cb;
case 0x6ea2ce:goto L6ea2ce;
case 0x6ea2d1:c.instructions+=6;goto B6ea2d1;
case 0x6ea2d5:c.instructions+=5;goto B6ea2d5;
case 0x6ea2db:c.instructions+=4;goto B6ea2db;
case 0x6ea2dd:c.instructions+=3;goto B6ea2dd;
case 0x6ea2e0:c.instructions+=2;goto B6ea2e0;
case 0x6ea2e1:c.instructions+=1;goto B6ea2e1;
case 0x6ea2e4:goto L6ea2e4;
case 0x6ea2e7:c.instructions+=4;goto B6ea2e7;
case 0x6ea2ea:c.instructions+=3;goto B6ea2ea;
case 0x6ea2ec:c.instructions+=2;goto B6ea2ec;
case 0x6ea2ee:c.instructions+=1;goto B6ea2ee;
case 0x6ea2f4:goto L6ea2f4;
case 0x6ea2f6:c.instructions+=2;goto B6ea2f6;
case 0x6ea2fa:c.instructions+=1;goto B6ea2fa;
case 0x6ea300:goto L6ea300;
case 0x6ea304:c.instructions+=5;goto B6ea304;
case 0x6ea307:c.instructions+=4;goto B6ea307;
case 0x6ea30b:c.instructions+=3;goto B6ea30b;
case 0x6ea30c:c.instructions+=2;goto B6ea30c;
case 0x6ea30e:c.instructions+=1;goto B6ea30e;
case 0x6ea313:goto L6ea313;
case 0x6ea317:c.instructions+=2;goto B6ea317;
case 0x6ea319:c.instructions+=1;goto B6ea319;
case 0x6ea31b:goto L6ea31b;
case 0x6ea31e:c.instructions+=19;goto B6ea31e;
case 0x6ea320:c.instructions+=18;goto B6ea320;
case 0x6ea323:c.instructions+=17;goto B6ea323;
case 0x6ea326:c.instructions+=16;goto B6ea326;
case 0x6ea32a:c.instructions+=15;goto B6ea32a;
case 0x6ea32d:c.instructions+=14;goto B6ea32d;
case 0x6ea331:c.instructions+=13;goto B6ea331;
case 0x6ea334:c.instructions+=12;goto B6ea334;
case 0x6ea338:c.instructions+=11;goto B6ea338;
case 0x6ea340:c.instructions+=10;goto B6ea340;
case 0x6ea343:c.instructions+=9;goto B6ea343;
case 0x6ea347:c.instructions+=8;goto B6ea347;
case 0x6ea34b:c.instructions+=7;goto B6ea34b;
case 0x6ea34d:c.instructions+=6;goto B6ea34d;
case 0x6ea351:c.instructions+=5;goto B6ea351;
case 0x6ea352:c.instructions+=4;goto B6ea352;
case 0x6ea356:c.instructions+=3;goto B6ea356;
case 0x6ea357:c.instructions+=2;goto B6ea357;
case 0x6ea35b:c.instructions+=1;goto B6ea35b;
case 0x6ea360:goto L6ea360;
case 0x6ea363:c.instructions+=1;goto B6ea363;
case 0x6ea368:goto L6ea368;
case 0x6ea36a:c.instructions+=4;goto B6ea36a;
case 0x6ea36e:c.instructions+=3;goto B6ea36e;
case 0x6ea376:c.instructions+=2;goto B6ea376;
case 0x6ea37a:c.instructions+=1;goto B6ea37a;
case 0x6ea37c:goto L6ea37c;
case 0x6ea37f:c.instructions+=6;goto B6ea37f;
case 0x6ea381:c.instructions+=5;goto B6ea381;
case 0x6ea382:c.instructions+=4;goto B6ea382;
case 0x6ea386:c.instructions+=3;goto B6ea386;
case 0x6ea387:c.instructions+=2;goto B6ea387;
case 0x6ea38f:c.instructions+=1;goto B6ea38f;
case 0x6ea394:goto L6ea394;
case 0x6ea397:c.instructions+=9;goto B6ea397;
case 0x6ea39b:c.instructions+=8;goto B6ea39b;
case 0x6ea39d:c.instructions+=7;goto B6ea39d;
case 0x6ea39e:c.instructions+=6;goto B6ea39e;
case 0x6ea3a2:c.instructions+=5;goto B6ea3a2;
case 0x6ea3a3:c.instructions+=4;goto B6ea3a3;
case 0x6ea3ab:c.instructions+=3;goto B6ea3ab;
case 0x6ea3b3:c.instructions+=2;goto B6ea3b3;
case 0x6ea3b7:c.instructions+=1;goto B6ea3b7;
case 0x6ea3bc:goto L6ea3bc;
case 0x6ea3bf:c.instructions+=1;goto B6ea3bf;
case 0x6ea3c1:goto L6ea3c1;
case 0x6ea3c4:c.instructions+=7;goto B6ea3c4;
case 0x6ea3c8:c.instructions+=6;goto B6ea3c8;
case 0x6ea3ca:c.instructions+=5;goto B6ea3ca;
case 0x6ea3cb:c.instructions+=4;goto B6ea3cb;
case 0x6ea3cf:c.instructions+=3;goto B6ea3cf;
case 0x6ea3d0:c.instructions+=2;goto B6ea3d0;
case 0x6ea3d4:c.instructions+=1;goto B6ea3d4;
case 0x6ea3d9:goto L6ea3d9;
case 0x6ea3dc:c.instructions+=9;goto B6ea3dc;
case 0x6ea3df:c.instructions+=8;goto B6ea3df;
case 0x6ea3e1:c.instructions+=7;goto B6ea3e1;
case 0x6ea3e4:c.instructions+=6;goto B6ea3e4;
case 0x6ea3e7:c.instructions+=5;goto B6ea3e7;
case 0x6ea3eb:c.instructions+=4;goto B6ea3eb;
case 0x6ea3ee:c.instructions+=3;goto B6ea3ee;
case 0x6ea3f2:c.instructions+=2;goto B6ea3f2;
case 0x6ea3f5:c.instructions+=1;goto B6ea3f5;
case 0x6ea3fd:goto L6ea3fd;
case 0x6ea401:c.instructions+=7;goto B6ea401;
case 0x6ea405:c.instructions+=6;goto B6ea405;
case 0x6ea406:c.instructions+=5;goto B6ea406;
case 0x6ea409:c.instructions+=4;goto B6ea409;
case 0x6ea40c:c.instructions+=3;goto B6ea40c;
case 0x6ea40e:c.instructions+=2;goto B6ea40e;
case 0x6ea412:c.instructions+=1;goto B6ea412;
case 0x6ea418:goto L6ea418;
case 0x6ea419:c.instructions+=2;goto B6ea419;
case 0x6ea41a:c.instructions+=1;goto B6ea41a;
case 0x6ea41b:goto L6ea41b;
case 0x6ea41c:c.instructions+=2;goto B6ea41c;
case 0x6ea41f:c.instructions+=1;goto B6ea41f;
case 0x6ea420:goto L6ea420;
case 0x6ea421:c.instructions+=4;goto B6ea421;
case 0x6ea424:c.instructions+=3;goto B6ea424;
case 0x6ea427:c.instructions+=2;goto B6ea427;
case 0x6ea429:c.instructions+=1;goto B6ea429;
case 0x6ea42b:goto L6ea42b;
case 0x6ea42f:c.instructions+=7;goto B6ea42f;
case 0x6ea433:c.instructions+=6;goto B6ea433;
case 0x6ea437:c.instructions+=5;goto B6ea437;
case 0x6ea439:c.instructions+=4;goto B6ea439;
case 0x6ea43d:c.instructions+=3;goto B6ea43d;
case 0x6ea43f:c.instructions+=2;goto B6ea43f;
case 0x6ea440:c.instructions+=1;goto B6ea440;
case 0x6ea443:goto L6ea443;
case 0x6ea447:c.instructions+=9;goto B6ea447;
case 0x6ea44c:c.instructions+=8;goto B6ea44c;
case 0x6ea450:c.instructions+=7;goto B6ea450;
case 0x6ea451:c.instructions+=6;goto B6ea451;
case 0x6ea455:c.instructions+=5;goto B6ea455;
case 0x6ea457:c.instructions+=4;goto B6ea457;
case 0x6ea45b:c.instructions+=3;goto B6ea45b;
case 0x6ea45d:c.instructions+=2;goto B6ea45d;
case 0x6ea45e:c.instructions+=1;goto B6ea45e;
case 0x6ea470:goto L6ea470;
case 0x6ea473:c.instructions+=36;goto B6ea473;
case 0x6ea475:c.instructions+=35;goto B6ea475;
case 0x6ea478:c.instructions+=34;goto B6ea478;
case 0x6ea47b:c.instructions+=33;goto B6ea47b;
case 0x6ea47e:c.instructions+=32;goto B6ea47e;
case 0x6ea481:c.instructions+=31;goto B6ea481;
case 0x6ea483:c.instructions+=30;goto B6ea483;
case 0x6ea485:c.instructions+=29;goto B6ea485;
case 0x6ea489:c.instructions+=28;goto B6ea489;
case 0x6ea48c:c.instructions+=27;goto B6ea48c;
case 0x6ea48f:c.instructions+=26;goto B6ea48f;
case 0x6ea493:c.instructions+=25;goto B6ea493;
case 0x6ea495:c.instructions+=24;goto B6ea495;
case 0x6ea498:c.instructions+=23;goto B6ea498;
case 0x6ea49a:c.instructions+=22;goto B6ea49a;
case 0x6ea49d:c.instructions+=21;goto B6ea49d;
case 0x6ea49f:c.instructions+=20;goto B6ea49f;
case 0x6ea4a1:c.instructions+=19;goto B6ea4a1;
case 0x6ea4a4:c.instructions+=18;goto B6ea4a4;
case 0x6ea4a6:c.instructions+=17;goto B6ea4a6;
case 0x6ea4a9:c.instructions+=16;goto B6ea4a9;
case 0x6ea4ab:c.instructions+=15;goto B6ea4ab;
case 0x6ea4ae:c.instructions+=14;goto B6ea4ae;
case 0x6ea4b2:c.instructions+=13;goto B6ea4b2;
case 0x6ea4b5:c.instructions+=12;goto B6ea4b5;
case 0x6ea4b9:c.instructions+=11;goto B6ea4b9;
case 0x6ea4bc:c.instructions+=10;goto B6ea4bc;
case 0x6ea4be:c.instructions+=9;goto B6ea4be;
case 0x6ea4c1:c.instructions+=8;goto B6ea4c1;
case 0x6ea4c5:c.instructions+=7;goto B6ea4c5;
case 0x6ea4c8:c.instructions+=6;goto B6ea4c8;
case 0x6ea4cc:c.instructions+=5;goto B6ea4cc;
case 0x6ea4cf:c.instructions+=4;goto B6ea4cf;
case 0x6ea4d1:c.instructions+=3;goto B6ea4d1;
case 0x6ea4d4:c.instructions+=2;goto B6ea4d4;
case 0x6ea4d7:c.instructions+=1;goto B6ea4d7;
case 0x6ea4e0:goto L6ea4e0;
case 0x6ea4e1:c.instructions+=6;goto B6ea4e1;
case 0x6ea4e4:c.instructions+=5;goto B6ea4e4;
case 0x6ea4e5:c.instructions+=4;goto B6ea4e5;
case 0x6ea4e9:c.instructions+=3;goto B6ea4e9;
case 0x6ea4ea:c.instructions+=2;goto B6ea4ea;
case 0x6ea4ee:c.instructions+=1;goto B6ea4ee;
case 0x6ea4f0:goto L6ea4f0;
case 0x6ea4f1:c.instructions+=6;goto B6ea4f1;
case 0x6ea4f5:c.instructions+=5;goto B6ea4f5;
case 0x6ea4f6:c.instructions+=4;goto B6ea4f6;
case 0x6ea4fa:c.instructions+=3;goto B6ea4fa;
case 0x6ea4fb:c.instructions+=2;goto B6ea4fb;
case 0x6ea4ff:c.instructions+=1;goto B6ea4ff;
case 0x6ea501:goto L6ea501;
case 0x6ea505:goto L6ea505;
case 0x6ea508:c.instructions+=9;goto B6ea508;
case 0x6ea50c:c.instructions+=8;goto B6ea50c;
case 0x6ea50e:c.instructions+=7;goto B6ea50e;
case 0x6ea511:c.instructions+=6;goto B6ea511;
case 0x6ea516:c.instructions+=5;goto B6ea516;
case 0x6ea518:c.instructions+=4;goto B6ea518;
case 0x6ea51a:c.instructions+=3;goto B6ea51a;
case 0x6ea51d:c.instructions+=2;goto B6ea51d;
case 0x6ea520:c.instructions+=1;goto B6ea520;
case 0x6ea522:goto L6ea522;
case 0x6ea525:c.instructions+=1;goto B6ea525;
case 0x6ea527:goto L6ea527;
case 0x6ea52b:c.instructions+=2;goto B6ea52b;
case 0x6ea52d:c.instructions+=1;goto B6ea52d;
case 0x6ea52f:goto L6ea52f;
case 0x6ea533:c.instructions+=2;goto B6ea533;
case 0x6ea535:c.instructions+=1;goto B6ea535;
case 0x6ea537:goto L6ea537;
case 0x6ea539:goto L6ea539;
case 0x6ea53c:c.instructions+=1;goto B6ea53c;
case 0x6ea53e:goto L6ea53e;
case 0x6ea541:goto L6ea541;
case 0x6ea543:c.instructions+=6;goto B6ea543;
case 0x6ea544:c.instructions+=5;goto B6ea544;
case 0x6ea546:c.instructions+=4;goto B6ea546;
case 0x6ea548:c.instructions+=3;goto B6ea548;
case 0x6ea549:c.instructions+=2;goto B6ea549;
case 0x6ea54b:c.instructions+=1;goto B6ea54b;
case 0x6ea550:goto L6ea550;
case 0x6ea551:c.instructions+=1;goto B6ea551;
case 0x6ea553:goto L6ea553;
case 0x6ea554:c.instructions+=2;goto B6ea554;
case 0x6ea555:c.instructions+=1;goto B6ea555;
case 0x6ea556:goto L6ea556;
case 0x6ea558:c.instructions+=3;goto B6ea558;
case 0x6ea559:c.instructions+=2;goto B6ea559;
case 0x6ea55a:c.instructions+=1;goto B6ea55a;
case 0x6ea560:goto L6ea560;
case 0x6ea561:c.instructions+=5;goto B6ea561;
case 0x6ea563:c.instructions+=4;goto B6ea563;
case 0x6ea566:c.instructions+=3;goto B6ea566;
case 0x6ea568:c.instructions+=2;goto B6ea568;
case 0x6ea56e:c.instructions+=1;goto B6ea56e;
case 0x6ea570:goto L6ea570;
case 0x6ea576:c.instructions+=3;goto B6ea576;
case 0x6ea578:c.instructions+=2;goto B6ea578;
case 0x6ea579:c.instructions+=1;goto B6ea579;
case 0x6ea57c:goto L6ea57c;
case 0x6ea582:c.instructions+=4;goto B6ea582;
case 0x6ea585:c.instructions+=3;goto B6ea585;
case 0x6ea587:c.instructions+=2;goto B6ea587;
case 0x6ea588:c.instructions+=1;goto B6ea588;
case 0x6ea58b:goto L6ea58b;
case 0x6ea591:c.instructions+=4;goto B6ea591;
case 0x6ea594:c.instructions+=3;goto B6ea594;
case 0x6ea596:c.instructions+=2;goto B6ea596;
case 0x6ea597:c.instructions+=1;goto B6ea597;
case 0x6ea59a:goto L6ea59a;
case 0x6ea59c:c.instructions+=1;goto B6ea59c;
case 0x6ea5a1:goto L6ea5a1;
case 0x6ea5a6:c.instructions+=1;goto B6ea5a6;
case 0x6ea5a8:goto L6ea5a8;
case 0x6ea5aa:c.instructions+=2;goto B6ea5aa;
case 0x6ea5ab:c.instructions+=1;goto B6ea5ab;
case 0x6ea5b1:goto L6ea5b1;
case 0x6ea5b4:goto L6ea5b4;
case 0x6ea5b6:c.instructions+=2;goto B6ea5b6;
case 0x6ea5b7:c.instructions+=1;goto B6ea5b7;
case 0x6ea5c0:goto L6ea5c0;
case 0x6ea5c4:c.instructions+=7;goto B6ea5c4;
case 0x6ea5c7:c.instructions+=6;goto B6ea5c7;
case 0x6ea5c8:c.instructions+=5;goto B6ea5c8;
case 0x6ea5ca:c.instructions+=4;goto B6ea5ca;
case 0x6ea5cc:c.instructions+=3;goto B6ea5cc;
case 0x6ea5cd:c.instructions+=2;goto B6ea5cd;
case 0x6ea5cf:c.instructions+=1;goto B6ea5cf;
case 0x6ea5d1:goto L6ea5d1;
case 0x6ea5d5:c.instructions+=7;goto B6ea5d5;
case 0x6ea5d7:c.instructions+=6;goto B6ea5d7;
case 0x6ea5d8:c.instructions+=5;goto B6ea5d8;
case 0x6ea5d9:c.instructions+=4;goto B6ea5d9;
case 0x6ea5e0:c.instructions+=3;goto B6ea5e0;
case 0x6ea5e1:c.instructions+=2;goto B6ea5e1;
case 0x6ea5e3:c.instructions+=1;goto B6ea5e3;
case 0x6ea5e6:goto L6ea5e6;
case 0x6ea5e7:c.instructions+=3;goto B6ea5e7;
case 0x6ea5e8:c.instructions+=2;goto B6ea5e8;
case 0x6ea5eb:c.instructions+=1;goto B6ea5eb;
case 0x6ea5ee:goto L6ea5ee;
case 0x6ea5ef:c.instructions+=3;goto B6ea5ef;
case 0x6ea5f0:c.instructions+=2;goto B6ea5f0;
case 0x6ea5f2:c.instructions+=1;goto B6ea5f2;
case 0x6ea5f7:goto L6ea5f7;
case 0x6ea5fe:c.instructions+=4;goto B6ea5fe;
case 0x6ea601:c.instructions+=3;goto B6ea601;
case 0x6ea602:c.instructions+=2;goto B6ea602;
case 0x6ea606:c.instructions+=1;goto B6ea606;
case 0x6ea60b:goto L6ea60b;
case 0x6ea60e:c.instructions+=4;goto B6ea60e;
case 0x6ea611:c.instructions+=3;goto B6ea611;
case 0x6ea613:c.instructions+=2;goto B6ea613;
case 0x6ea617:c.instructions+=1;goto B6ea617;
case 0x6ea619:goto L6ea619;
case 0x6ea61b:c.instructions+=1;goto B6ea61b;
case 0x6ea61d:goto L6ea61d;
case 0x6ea624:c.instructions+=1;goto B6ea624;
case 0x6ea626:goto L6ea626;
case 0x6ea62a:c.instructions+=2;goto B6ea62a;
case 0x6ea62c:c.instructions+=1;goto B6ea62c;
case 0x6ea62e:goto L6ea62e;
case 0x6ea62f:c.instructions+=1;goto B6ea62f;
case 0x6ea631:goto L6ea631;
case 0x6ea638:c.instructions+=1;goto B6ea638;
case 0x6ea63a:goto L6ea63a;
case 0x6ea63d:c.instructions+=2;goto B6ea63d;
case 0x6ea63f:c.instructions+=1;goto B6ea63f;
case 0x6ea641:goto L6ea641;
case 0x6ea648:c.instructions+=1;goto B6ea648;
case 0x6ea64a:goto L6ea64a;
case 0x6ea64d:c.instructions+=2;goto B6ea64d;
case 0x6ea650:c.instructions+=1;goto B6ea650;
case 0x6ea652:goto L6ea652;
case 0x6ea654:c.instructions+=1;goto B6ea654;
case 0x6ea656:goto L6ea656;
case 0x6ea657:goto L6ea657;
case 0x6ea65b:c.instructions+=3;goto B6ea65b;
case 0x6ea65d:c.instructions+=2;goto B6ea65d;
case 0x6ea660:c.instructions+=1;goto B6ea660;
case 0x6ea662:goto L6ea662;
case 0x6ea666:c.instructions+=3;goto B6ea666;
case 0x6ea669:c.instructions+=2;goto B6ea669;
case 0x6ea66b:c.instructions+=1;goto B6ea66b;
case 0x6ea66d:goto L6ea66d;
case 0x6ea670:goto L6ea670;
case 0x6ea673:c.instructions+=2;goto B6ea673;
case 0x6ea675:c.instructions+=1;goto B6ea675;
case 0x6ea677:goto L6ea677;
case 0x6ea678:c.instructions+=3;goto B6ea678;
case 0x6ea67b:c.instructions+=2;goto B6ea67b;
case 0x6ea67d:c.instructions+=1;goto B6ea67d;
case 0x6ea67f:goto L6ea67f;
case 0x6ea681:goto L6ea681;
case 0x6ea683:c.instructions+=1;goto B6ea683;
case 0x6ea685:goto L6ea685;
case 0x6ea688:c.instructions+=2;goto B6ea688;
case 0x6ea68a:c.instructions+=1;goto B6ea68a;
case 0x6ea68c:goto L6ea68c;
case 0x6ea68d:c.instructions+=3;goto B6ea68d;
case 0x6ea690:c.instructions+=2;goto B6ea690;
case 0x6ea692:c.instructions+=1;goto B6ea692;
case 0x6ea694:goto L6ea694;
case 0x6ea695:goto L6ea695;
case 0x6ea69c:goto L6ea69c;
case 0x6ea6a3:goto L6ea6a3;
case 0x6ea6a7:c.instructions+=20;goto B6ea6a7;
case 0x6ea6aa:c.instructions+=19;goto B6ea6aa;
case 0x6ea6af:c.instructions+=18;goto B6ea6af;
case 0x6ea6b1:c.instructions+=17;goto B6ea6b1;
case 0x6ea6b6:c.instructions+=16;goto B6ea6b6;
case 0x6ea6b8:c.instructions+=15;goto B6ea6b8;
case 0x6ea6ba:c.instructions+=14;goto B6ea6ba;
case 0x6ea6bc:c.instructions+=13;goto B6ea6bc;
case 0x6ea6be:c.instructions+=12;goto B6ea6be;
case 0x6ea6c2:c.instructions+=11;goto B6ea6c2;
case 0x6ea6c5:c.instructions+=10;goto B6ea6c5;
case 0x6ea6c7:c.instructions+=9;goto B6ea6c7;
case 0x6ea6ca:c.instructions+=8;goto B6ea6ca;
case 0x6ea6ce:c.instructions+=7;goto B6ea6ce;
case 0x6ea6d1:c.instructions+=6;goto B6ea6d1;
case 0x6ea6d4:c.instructions+=5;goto B6ea6d4;
case 0x6ea6d6:c.instructions+=4;goto B6ea6d6;
case 0x6ea6d9:c.instructions+=3;goto B6ea6d9;
case 0x6ea6dd:c.instructions+=2;goto B6ea6dd;
case 0x6ea6e1:c.instructions+=1;goto B6ea6e1;
case 0x6ea6e3:goto L6ea6e3;
case 0x6ea6e7:c.instructions+=5;goto B6ea6e7;
case 0x6ea6e9:c.instructions+=4;goto B6ea6e9;
case 0x6ea6eb:c.instructions+=3;goto B6ea6eb;
case 0x6ea6ef:c.instructions+=2;goto B6ea6ef;
case 0x6ea6f6:c.instructions+=1;goto B6ea6f6;
case 0x6ea6f8:goto L6ea6f8;
case 0x6ea6fa:c.instructions+=1;goto B6ea6fa;
case 0x6ea6fc:goto L6ea6fc;
case 0x6ea6fe:c.instructions+=3;goto B6ea6fe;
case 0x6ea700:c.instructions+=2;goto B6ea700;
case 0x6ea704:c.instructions+=1;goto B6ea704;
case 0x6ea706:goto L6ea706;
case 0x6ea70a:c.instructions+=5;goto B6ea70a;
case 0x6ea70d:c.instructions+=4;goto B6ea70d;
case 0x6ea70f:c.instructions+=3;goto B6ea70f;
case 0x6ea711:c.instructions+=2;goto B6ea711;
case 0x6ea715:c.instructions+=1;goto B6ea715;
case 0x6ea717:goto L6ea717;
case 0x6ea71b:c.instructions+=2;goto B6ea71b;
case 0x6ea71d:c.instructions+=1;goto B6ea71d;
case 0x6ea721:goto L6ea721;
case 0x6ea724:c.instructions+=8;goto B6ea724;
case 0x6ea727:c.instructions+=7;goto B6ea727;
case 0x6ea72b:c.instructions+=6;goto B6ea72b;
case 0x6ea72d:c.instructions+=5;goto B6ea72d;
case 0x6ea72e:c.instructions+=4;goto B6ea72e;
case 0x6ea733:c.instructions+=3;goto B6ea733;
case 0x6ea737:c.instructions+=2;goto B6ea737;
case 0x6ea738:c.instructions+=1;goto B6ea738;
case 0x6ea73d:goto L6ea73d;
case 0x6ea741:c.instructions+=13;goto B6ea741;
case 0x6ea745:c.instructions+=12;goto B6ea745;
case 0x6ea749:c.instructions+=11;goto B6ea749;
case 0x6ea74c:c.instructions+=10;goto B6ea74c;
case 0x6ea74f:c.instructions+=9;goto B6ea74f;
case 0x6ea753:c.instructions+=8;goto B6ea753;
case 0x6ea757:c.instructions+=7;goto B6ea757;
case 0x6ea75b:c.instructions+=6;goto B6ea75b;
case 0x6ea75f:c.instructions+=5;goto B6ea75f;
case 0x6ea760:c.instructions+=4;goto B6ea760;
case 0x6ea763:c.instructions+=3;goto B6ea763;
case 0x6ea765:c.instructions+=2;goto B6ea765;
case 0x6ea769:c.instructions+=1;goto B6ea769;
case 0x6ea76b:goto L6ea76b;
case 0x6ea772:c.instructions+=1;goto B6ea772;
case 0x6ea774:goto L6ea774;
case 0x6ea776:goto L6ea776;
case 0x6ea77a:c.instructions+=1;goto B6ea77a;
case 0x6ea780:goto L6ea780;
case 0x6ea784:c.instructions+=7;goto B6ea784;
case 0x6ea788:c.instructions+=6;goto B6ea788;
case 0x6ea78b:c.instructions+=5;goto B6ea78b;
case 0x6ea78e:c.instructions+=4;goto B6ea78e;
case 0x6ea790:c.instructions+=3;goto B6ea790;
case 0x6ea792:c.instructions+=2;goto B6ea792;
case 0x6ea796:c.instructions+=1;goto B6ea796;
case 0x6ea7a0:goto L6ea7a0;
case 0x6ea7a2:c.instructions+=2;goto B6ea7a2;
case 0x6ea7aa:c.instructions+=1;goto B6ea7aa;
case 0x6ea7ac:goto L6ea7ac;
case 0x6ea7ae:c.instructions+=1;goto B6ea7ae;
case 0x6ea7b0:goto L6ea7b0;
case 0x6ea7b3:c.instructions+=4;goto B6ea7b3;
case 0x6ea7b7:c.instructions+=3;goto B6ea7b7;
case 0x6ea7b8:c.instructions+=2;goto B6ea7b8;
case 0x6ea7ba:c.instructions+=1;goto B6ea7ba;
case 0x6ea7bf:goto L6ea7bf;
case 0x6ea7c3:c.instructions+=5;goto B6ea7c3;
case 0x6ea7c4:c.instructions+=4;goto B6ea7c4;
case 0x6ea7c8:c.instructions+=3;goto B6ea7c8;
case 0x6ea7c9:c.instructions+=2;goto B6ea7c9;
case 0x6ea7cb:c.instructions+=1;goto B6ea7cb;
case 0x6ea7d0:goto L6ea7d0;
case 0x6ea7d4:c.instructions+=29;goto B6ea7d4;
case 0x6ea7d7:c.instructions+=28;goto B6ea7d7;
case 0x6ea7da:c.instructions+=27;goto B6ea7da;
case 0x6ea7dc:c.instructions+=26;goto B6ea7dc;
case 0x6ea7dd:c.instructions+=25;goto B6ea7dd;
case 0x6ea7e0:c.instructions+=24;goto B6ea7e0;
case 0x6ea7e2:c.instructions+=23;goto B6ea7e2;
case 0x6ea7e5:c.instructions+=22;goto B6ea7e5;
case 0x6ea7e9:c.instructions+=21;goto B6ea7e9;
case 0x6ea7ed:c.instructions+=20;goto B6ea7ed;
case 0x6ea7ef:c.instructions+=19;goto B6ea7ef;
case 0x6ea7f3:c.instructions+=18;goto B6ea7f3;
case 0x6ea7f4:c.instructions+=17;goto B6ea7f4;
case 0x6ea7f8:c.instructions+=16;goto B6ea7f8;
case 0x6ea7fa:c.instructions+=15;goto B6ea7fa;
case 0x6ea7fd:c.instructions+=14;goto B6ea7fd;
case 0x6ea801:c.instructions+=13;goto B6ea801;
case 0x6ea805:c.instructions+=12;goto B6ea805;
case 0x6ea807:c.instructions+=11;goto B6ea807;
case 0x6ea80b:c.instructions+=10;goto B6ea80b;
case 0x6ea80d:c.instructions+=9;goto B6ea80d;
case 0x6ea810:c.instructions+=8;goto B6ea810;
case 0x6ea814:c.instructions+=7;goto B6ea814;
case 0x6ea818:c.instructions+=6;goto B6ea818;
case 0x6ea81a:c.instructions+=5;goto B6ea81a;
case 0x6ea81d:c.instructions+=4;goto B6ea81d;
case 0x6ea81f:c.instructions+=3;goto B6ea81f;
case 0x6ea823:c.instructions+=2;goto B6ea823;
case 0x6ea825:c.instructions+=1;goto B6ea825;
case 0x6ea827:goto L6ea827;
case 0x6ea82b:goto L6ea82b;
case 0x6ea82f:c.instructions+=1;goto B6ea82f;
case 0x6ea835:goto L6ea835;
case 0x6ea83c:c.instructions+=1;goto B6ea83c;
case 0x6ea840:goto L6ea840;
case 0x6ea843:c.instructions+=4;goto B6ea843;
case 0x6ea846:c.instructions+=3;goto B6ea846;
case 0x6ea848:c.instructions+=2;goto B6ea848;
case 0x6ea84b:c.instructions+=1;goto B6ea84b;
case 0x6ea84d:goto L6ea84d;
case 0x6ea851:c.instructions+=5;goto B6ea851;
case 0x6ea858:c.instructions+=4;goto B6ea858;
case 0x6ea85a:c.instructions+=3;goto B6ea85a;
case 0x6ea85c:c.instructions+=2;goto B6ea85c;
case 0x6ea85f:c.instructions+=1;goto B6ea85f;
case 0x6ea865:goto L6ea865;
case 0x6ea86c:c.instructions+=2;goto B6ea86c;
case 0x6ea86e:c.instructions+=1;goto B6ea86e;
case 0x6ea873:goto L6ea873;
case 0x6ea875:c.instructions+=1;goto B6ea875;
case 0x6ea877:goto L6ea877;
case 0x6ea87e:c.instructions+=4;goto B6ea87e;
case 0x6ea884:c.instructions+=3;goto B6ea884;
case 0x6ea886:c.instructions+=2;goto B6ea886;
case 0x6ea889:c.instructions+=1;goto B6ea889;
case 0x6ea88f:goto L6ea88f;
case 0x6ea892:c.instructions+=5;goto B6ea892;
case 0x6ea899:c.instructions+=4;goto B6ea899;
case 0x6ea8a0:c.instructions+=3;goto B6ea8a0;
case 0x6ea8a7:c.instructions+=2;goto B6ea8a7;
case 0x6ea8ae:c.instructions+=1;goto B6ea8ae;
case 0x6ea8b0:goto L6ea8b0;
case 0x6ea8b5:c.instructions+=7;goto B6ea8b5;
case 0x6ea8bc:c.instructions+=6;goto B6ea8bc;
case 0x6ea8c3:c.instructions+=5;goto B6ea8c3;
case 0x6ea8ca:c.instructions+=4;goto B6ea8ca;
case 0x6ea8cc:c.instructions+=3;goto B6ea8cc;
case 0x6ea8ce:c.instructions+=2;goto B6ea8ce;
case 0x6ea8d1:c.instructions+=1;goto B6ea8d1;
case 0x6ea8d7:goto L6ea8d7;
case 0x6ea8db:c.instructions+=6;goto B6ea8db;
case 0x6ea8e2:c.instructions+=5;goto B6ea8e2;
case 0x6ea8e4:c.instructions+=4;goto B6ea8e4;
case 0x6ea8eb:c.instructions+=3;goto B6ea8eb;
case 0x6ea8f2:c.instructions+=2;goto B6ea8f2;
case 0x6ea8f4:c.instructions+=1;goto B6ea8f4;
case 0x6ea8f6:goto L6ea8f6;
case 0x6ea8fd:c.instructions+=1;goto B6ea8fd;
case 0x6ea8ff:goto L6ea8ff;
case 0x6ea903:c.instructions+=3;goto B6ea903;
case 0x6ea904:c.instructions+=2;goto B6ea904;
case 0x6ea906:c.instructions+=1;goto B6ea906;
case 0x6ea90c:goto L6ea90c;
case 0x6ea910:c.instructions+=8;goto B6ea910;
case 0x6ea913:c.instructions+=7;goto B6ea913;
case 0x6ea916:c.instructions+=6;goto B6ea916;
case 0x6ea918:c.instructions+=5;goto B6ea918;
case 0x6ea91c:c.instructions+=4;goto B6ea91c;
case 0x6ea91f:c.instructions+=3;goto B6ea91f;
case 0x6ea921:c.instructions+=2;goto B6ea921;
case 0x6ea923:c.instructions+=1;goto B6ea923;
case 0x6ea929:goto L6ea929;
case 0x6ea92d:c.instructions+=4;goto B6ea92d;
case 0x6ea930:c.instructions+=3;goto B6ea930;
case 0x6ea932:c.instructions+=2;goto B6ea932;
case 0x6ea934:c.instructions+=1;goto B6ea934;
case 0x6ea93a:goto L6ea93a;
case 0x6ea93c:c.instructions+=3;goto B6ea93c;
case 0x6ea940:c.instructions+=2;goto B6ea940;
case 0x6ea947:c.instructions+=1;goto B6ea947;
case 0x6ea950:goto L6ea950;
case 0x6ea953:c.instructions+=8;goto B6ea953;
case 0x6ea957:c.instructions+=7;goto B6ea957;
case 0x6ea95c:c.instructions+=6;goto B6ea95c;
case 0x6ea960:c.instructions+=5;goto B6ea960;
case 0x6ea961:c.instructions+=4;goto B6ea961;
case 0x6ea968:c.instructions+=3;goto B6ea968;
case 0x6ea969:c.instructions+=2;goto B6ea969;
case 0x6ea96d:c.instructions+=1;goto B6ea96d;
case 0x6ea972:goto L6ea972;
case 0x6ea979:c.instructions+=6;goto B6ea979;
case 0x6ea97c:c.instructions+=5;goto B6ea97c;
case 0x6ea97d:c.instructions+=4;goto B6ea97d;
case 0x6ea97f:c.instructions+=3;goto B6ea97f;
case 0x6ea983:c.instructions+=2;goto B6ea983;
case 0x6ea987:c.instructions+=1;goto B6ea987;
case 0x6ea98c:goto L6ea98c;
case 0x6ea990:c.instructions+=3;goto B6ea990;
case 0x6ea993:c.instructions+=2;goto B6ea993;
case 0x6ea996:c.instructions+=1;goto B6ea996;
case 0x6ea99c:goto L6ea99c;
case 0x6ea99d:c.instructions+=2;goto B6ea99d;
case 0x6ea9a1:c.instructions+=1;goto B6ea9a1;
case 0x6ea9a3:goto L6ea9a3;
case 0x6ea9aa:c.instructions+=28;goto B6ea9aa;
case 0x6ea9ae:c.instructions+=27;goto B6ea9ae;
case 0x6ea9b1:c.instructions+=26;goto B6ea9b1;
case 0x6ea9b4:c.instructions+=25;goto B6ea9b4;
case 0x6ea9b8:c.instructions+=24;goto B6ea9b8;
case 0x6ea9bb:c.instructions+=23;goto B6ea9bb;
case 0x6ea9be:c.instructions+=22;goto B6ea9be;
case 0x6ea9c0:c.instructions+=21;goto B6ea9c0;
case 0x6ea9c4:c.instructions+=20;goto B6ea9c4;
case 0x6ea9c7:c.instructions+=19;goto B6ea9c7;
case 0x6ea9c9:c.instructions+=18;goto B6ea9c9;
case 0x6ea9cb:c.instructions+=17;goto B6ea9cb;
case 0x6ea9cf:c.instructions+=16;goto B6ea9cf;
case 0x6ea9d1:c.instructions+=15;goto B6ea9d1;
case 0x6ea9d5:c.instructions+=14;goto B6ea9d5;
case 0x6ea9d8:c.instructions+=13;goto B6ea9d8;
case 0x6ea9da:c.instructions+=12;goto B6ea9da;
case 0x6ea9dd:c.instructions+=11;goto B6ea9dd;
case 0x6ea9e1:c.instructions+=10;goto B6ea9e1;
case 0x6ea9e4:c.instructions+=9;goto B6ea9e4;
case 0x6ea9e8:c.instructions+=8;goto B6ea9e8;
case 0x6ea9eb:c.instructions+=7;goto B6ea9eb;
case 0x6ea9ed:c.instructions+=6;goto B6ea9ed;
case 0x6ea9f0:c.instructions+=5;goto B6ea9f0;
case 0x6ea9f4:c.instructions+=4;goto B6ea9f4;
case 0x6ea9f7:c.instructions+=3;goto B6ea9f7;
case 0x6ea9fb:c.instructions+=2;goto B6ea9fb;
case 0x6ea9fe:c.instructions+=1;goto B6ea9fe;
case 0x6eaa03:goto L6eaa03;
case 0x6eaa06:c.instructions+=9;goto B6eaa06;
case 0x6eaa09:c.instructions+=8;goto B6eaa09;
case 0x6eaa10:c.instructions+=7;goto B6eaa10;
case 0x6eaa13:c.instructions+=6;goto B6eaa13;
case 0x6eaa17:c.instructions+=5;goto B6eaa17;
case 0x6eaa1a:c.instructions+=4;goto B6eaa1a;
case 0x6eaa1c:c.instructions+=3;goto B6eaa1c;
case 0x6eaa1e:c.instructions+=2;goto B6eaa1e;
case 0x6eaa22:c.instructions+=1;goto B6eaa22;
case 0x6eaa27:goto L6eaa27;
case 0x6eaa2b:c.instructions+=1;goto B6eaa2b;
case 0x6eaa2d:goto L6eaa2d;
case 0x6eaa31:c.instructions+=28;goto B6eaa31;
case 0x6eaa35:c.instructions+=27;goto B6eaa35;
case 0x6eaa3c:c.instructions+=26;goto B6eaa3c;
case 0x6eaa3f:c.instructions+=25;goto B6eaa3f;
case 0x6eaa42:c.instructions+=24;goto B6eaa42;
case 0x6eaa45:c.instructions+=23;goto B6eaa45;
case 0x6eaa47:c.instructions+=22;goto B6eaa47;
case 0x6eaa4b:c.instructions+=21;goto B6eaa4b;
case 0x6eaa4d:c.instructions+=20;goto B6eaa4d;
case 0x6eaa51:c.instructions+=19;goto B6eaa51;
case 0x6eaa54:c.instructions+=18;goto B6eaa54;
case 0x6eaa56:c.instructions+=17;goto B6eaa56;
case 0x6eaa58:c.instructions+=16;goto B6eaa58;
case 0x6eaa5c:c.instructions+=15;goto B6eaa5c;
case 0x6eaa5f:c.instructions+=14;goto B6eaa5f;
case 0x6eaa63:c.instructions+=13;goto B6eaa63;
case 0x6eaa66:c.instructions+=12;goto B6eaa66;
case 0x6eaa68:c.instructions+=11;goto B6eaa68;
case 0x6eaa6b:c.instructions+=10;goto B6eaa6b;
case 0x6eaa6f:c.instructions+=9;goto B6eaa6f;
case 0x6eaa72:c.instructions+=8;goto B6eaa72;
case 0x6eaa76:c.instructions+=7;goto B6eaa76;
case 0x6eaa79:c.instructions+=6;goto B6eaa79;
case 0x6eaa7b:c.instructions+=5;goto B6eaa7b;
case 0x6eaa7e:c.instructions+=4;goto B6eaa7e;
case 0x6eaa82:c.instructions+=3;goto B6eaa82;
case 0x6eaa85:c.instructions+=2;goto B6eaa85;
case 0x6eaa89:c.instructions+=1;goto B6eaa89;
case 0x6eaa8b:goto L6eaa8b;
case 0x6eaa8d:c.instructions+=1;goto B6eaa8d;
case 0x6eaa90:goto L6eaa90;
case 0x6eaa97:c.instructions+=11;goto B6eaa97;
case 0x6eaa9b:c.instructions+=10;goto B6eaa9b;
case 0x6eaa9e:c.instructions+=9;goto B6eaa9e;
case 0x6eaaa5:c.instructions+=8;goto B6eaaa5;
case 0x6eaaa9:c.instructions+=7;goto B6eaaa9;
case 0x6eaaad:c.instructions+=6;goto B6eaaad;
case 0x6eaaae:c.instructions+=5;goto B6eaaae;
case 0x6eaab1:c.instructions+=4;goto B6eaab1;
case 0x6eaab4:c.instructions+=3;goto B6eaab4;
case 0x6eaab6:c.instructions+=2;goto B6eaab6;
case 0x6eaaba:c.instructions+=1;goto B6eaaba;
case 0x6eaac0:goto L6eaac0;
case 0x6eaac1:c.instructions+=6;goto B6eaac1;
case 0x6eaac2:c.instructions+=5;goto B6eaac2;
case 0x6eaac3:c.instructions+=4;goto B6eaac3;
case 0x6eaac5:c.instructions+=3;goto B6eaac5;
case 0x6eaac6:c.instructions+=2;goto B6eaac6;
case 0x6eaac9:c.instructions+=1;goto B6eaac9;
case 0x6eaacc:goto L6eaacc;
case 0x6eaad0:c.instructions+=9;goto B6eaad0;
case 0x6eaad4:c.instructions+=8;goto B6eaad4;
case 0x6eaad7:c.instructions+=7;goto B6eaad7;
case 0x6eaada:c.instructions+=6;goto B6eaada;
case 0x6eaadc:c.instructions+=5;goto B6eaadc;
case 0x6eaade:c.instructions+=4;goto B6eaade;
case 0x6eaae0:c.instructions+=3;goto B6eaae0;
case 0x6eaae2:c.instructions+=2;goto B6eaae2;
case 0x6eaae9:c.instructions+=1;goto B6eaae9;
case 0x6eaaef:goto L6eaaef;
case 0x6eaaf3:goto L6eaaf3;
case 0x6eaaf6:c.instructions+=6;goto B6eaaf6;
case 0x6eaafa:c.instructions+=5;goto B6eaafa;
case 0x6eaafd:c.instructions+=4;goto B6eaafd;
case 0x6eab01:c.instructions+=3;goto B6eab01;
case 0x6eab02:c.instructions+=2;goto B6eab02;
case 0x6eab06:c.instructions+=1;goto B6eab06;
case 0x6eab0b:goto L6eab0b;
case 0x6eab0f:c.instructions+=5;goto B6eab0f;
case 0x6eab10:c.instructions+=4;goto B6eab10;
case 0x6eab14:c.instructions+=3;goto B6eab14;
case 0x6eab15:c.instructions+=2;goto B6eab15;
case 0x6eab1c:c.instructions+=1;goto B6eab1c;
case 0x6eab21:goto L6eab21;
case 0x6eab25:c.instructions+=18;goto B6eab25;
case 0x6eab28:c.instructions+=17;goto B6eab28;
case 0x6eab2b:c.instructions+=16;goto B6eab2b;
case 0x6eab32:c.instructions+=15;goto B6eab32;
case 0x6eab35:c.instructions+=14;goto B6eab35;
case 0x6eab36:c.instructions+=13;goto B6eab36;
case 0x6eab3a:c.instructions+=12;goto B6eab3a;
case 0x6eab3e:c.instructions+=11;goto B6eab3e;
case 0x6eab42:c.instructions+=10;goto B6eab42;
case 0x6eab46:c.instructions+=9;goto B6eab46;
case 0x6eab49:c.instructions+=8;goto B6eab49;
case 0x6eab4d:c.instructions+=7;goto B6eab4d;
case 0x6eab51:c.instructions+=6;goto B6eab51;
case 0x6eab54:c.instructions+=5;goto B6eab54;
case 0x6eab58:c.instructions+=4;goto B6eab58;
case 0x6eab5c:c.instructions+=3;goto B6eab5c;
case 0x6eab5f:c.instructions+=2;goto B6eab5f;
case 0x6eab63:c.instructions+=1;goto B6eab63;
case 0x6eab68:goto L6eab68;
case 0x6eab6c:c.instructions+=4;goto B6eab6c;
case 0x6eab70:c.instructions+=3;goto B6eab70;
case 0x6eab73:c.instructions+=2;goto B6eab73;
case 0x6eab76:c.instructions+=1;goto B6eab76;
case 0x6eab7c:goto L6eab7c;
case 0x6eab7d:c.instructions+=2;goto B6eab7d;
case 0x6eab81:c.instructions+=1;goto B6eab81;
case 0x6eab83:goto L6eab83;
case 0x6eab8a:c.instructions+=28;goto B6eab8a;
case 0x6eab8e:c.instructions+=27;goto B6eab8e;
case 0x6eab91:c.instructions+=26;goto B6eab91;
case 0x6eab94:c.instructions+=25;goto B6eab94;
case 0x6eab98:c.instructions+=24;goto B6eab98;
case 0x6eab9b:c.instructions+=23;goto B6eab9b;
case 0x6eab9e:c.instructions+=22;goto B6eab9e;
case 0x6eaba0:c.instructions+=21;goto B6eaba0;
case 0x6eaba4:c.instructions+=20;goto B6eaba4;
case 0x6eaba7:c.instructions+=19;goto B6eaba7;
case 0x6eaba9:c.instructions+=18;goto B6eaba9;
case 0x6eabab:c.instructions+=17;goto B6eabab;
case 0x6eabaf:c.instructions+=16;goto B6eabaf;
case 0x6eabb1:c.instructions+=15;goto B6eabb1;
case 0x6eabb5:c.instructions+=14;goto B6eabb5;
case 0x6eabb8:c.instructions+=13;goto B6eabb8;
case 0x6eabba:c.instructions+=12;goto B6eabba;
case 0x6eabbd:c.instructions+=11;goto B6eabbd;
case 0x6eabc1:c.instructions+=10;goto B6eabc1;
case 0x6eabc4:c.instructions+=9;goto B6eabc4;
case 0x6eabc8:c.instructions+=8;goto B6eabc8;
case 0x6eabcb:c.instructions+=7;goto B6eabcb;
case 0x6eabcd:c.instructions+=6;goto B6eabcd;
case 0x6eabd0:c.instructions+=5;goto B6eabd0;
case 0x6eabd4:c.instructions+=4;goto B6eabd4;
case 0x6eabd7:c.instructions+=3;goto B6eabd7;
case 0x6eabdb:c.instructions+=2;goto B6eabdb;
case 0x6eabde:c.instructions+=1;goto B6eabde;
case 0x6eabe3:goto L6eabe3;
case 0x6eabe6:c.instructions+=9;goto B6eabe6;
case 0x6eabe9:c.instructions+=8;goto B6eabe9;
case 0x6eabf0:c.instructions+=7;goto B6eabf0;
case 0x6eabf3:c.instructions+=6;goto B6eabf3;
case 0x6eabf7:c.instructions+=5;goto B6eabf7;
case 0x6eabfa:c.instructions+=4;goto B6eabfa;
case 0x6eabfc:c.instructions+=3;goto B6eabfc;
case 0x6eabfe:c.instructions+=2;goto B6eabfe;
case 0x6eac02:c.instructions+=1;goto B6eac02;
case 0x6eac07:goto L6eac07;
case 0x6eac0b:c.instructions+=1;goto B6eac0b;
case 0x6eac0d:goto L6eac0d;
case 0x6eac11:c.instructions+=28;goto B6eac11;
case 0x6eac15:c.instructions+=27;goto B6eac15;
case 0x6eac1c:c.instructions+=26;goto B6eac1c;
case 0x6eac1f:c.instructions+=25;goto B6eac1f;
case 0x6eac22:c.instructions+=24;goto B6eac22;
case 0x6eac25:c.instructions+=23;goto B6eac25;
case 0x6eac27:c.instructions+=22;goto B6eac27;
case 0x6eac2b:c.instructions+=21;goto B6eac2b;
case 0x6eac2d:c.instructions+=20;goto B6eac2d;
case 0x6eac31:c.instructions+=19;goto B6eac31;
case 0x6eac34:c.instructions+=18;goto B6eac34;
case 0x6eac36:c.instructions+=17;goto B6eac36;
case 0x6eac38:c.instructions+=16;goto B6eac38;
case 0x6eac3c:c.instructions+=15;goto B6eac3c;
case 0x6eac3f:c.instructions+=14;goto B6eac3f;
case 0x6eac43:c.instructions+=13;goto B6eac43;
case 0x6eac46:c.instructions+=12;goto B6eac46;
case 0x6eac48:c.instructions+=11;goto B6eac48;
case 0x6eac4b:c.instructions+=10;goto B6eac4b;
case 0x6eac4f:c.instructions+=9;goto B6eac4f;
case 0x6eac52:c.instructions+=8;goto B6eac52;
case 0x6eac56:c.instructions+=7;goto B6eac56;
case 0x6eac59:c.instructions+=6;goto B6eac59;
case 0x6eac5b:c.instructions+=5;goto B6eac5b;
case 0x6eac5e:c.instructions+=4;goto B6eac5e;
case 0x6eac62:c.instructions+=3;goto B6eac62;
case 0x6eac65:c.instructions+=2;goto B6eac65;
case 0x6eac69:c.instructions+=1;goto B6eac69;
case 0x6eac6b:goto L6eac6b;
case 0x6eac6d:c.instructions+=1;goto B6eac6d;
case 0x6eac70:goto L6eac70;
case 0x6eac77:c.instructions+=11;goto B6eac77;
case 0x6eac7b:c.instructions+=10;goto B6eac7b;
case 0x6eac7f:c.instructions+=9;goto B6eac7f;
case 0x6eac80:c.instructions+=8;goto B6eac80;
case 0x6eac87:c.instructions+=7;goto B6eac87;
case 0x6eac8b:c.instructions+=6;goto B6eac8b;
case 0x6eac8c:c.instructions+=5;goto B6eac8c;
case 0x6eac8f:c.instructions+=4;goto B6eac8f;
case 0x6eac92:c.instructions+=3;goto B6eac92;
case 0x6eac94:c.instructions+=2;goto B6eac94;
case 0x6eac98:c.instructions+=1;goto B6eac98;
case 0x6eac9e:goto L6eac9e;
case 0x6eac9f:c.instructions+=6;goto B6eac9f;
case 0x6eaca0:c.instructions+=5;goto B6eaca0;
case 0x6eaca1:c.instructions+=4;goto B6eaca1;
case 0x6eaca3:c.instructions+=3;goto B6eaca3;
case 0x6eaca4:c.instructions+=2;goto B6eaca4;
case 0x6eaca7:c.instructions+=1;goto B6eaca7;
case 0x6eacaa:goto L6eacaa;
case 0x6eacac:goto L6eacac;
case 0x6eacb0:c.instructions+=4;goto B6eacb0;
case 0x6eacb3:c.instructions+=3;goto B6eacb3;
case 0x6eacb5:c.instructions+=2;goto B6eacb5;
case 0x6eacb7:c.instructions+=1;goto B6eacb7;
case 0x6eacbd:goto L6eacbd;
case 0x6eacbf:c.instructions+=2;goto B6eacbf;
case 0x6eacc6:c.instructions+=1;goto B6eacc6;
case 0x6eacc8:goto L6eacc8;
case 0x6eaccc:c.instructions+=1;goto B6eaccc;
case 0x6eacd0:goto L6eacd0;
case 0x6eacd7:c.instructions+=5;goto B6eacd7;
case 0x6eacda:c.instructions+=4;goto B6eacda;
case 0x6eacdf:c.instructions+=3;goto B6eacdf;
case 0x6eace2:c.instructions+=2;goto B6eace2;
case 0x6eace9:c.instructions+=1;goto B6eace9;
case 0x6eacef:goto L6eacef;
case 0x6eacf0:c.instructions+=3;goto B6eacf0;
case 0x6eacf4:c.instructions+=2;goto B6eacf4;
case 0x6eacf7:c.instructions+=1;goto B6eacf7;
case 0x6eacf9:goto L6eacf9;
case 0x6eacfc:c.instructions+=28;goto B6eacfc;
case 0x6ead00:c.instructions+=27;goto B6ead00;
case 0x6ead03:c.instructions+=26;goto B6ead03;
case 0x6ead06:c.instructions+=25;goto B6ead06;
case 0x6ead09:c.instructions+=24;goto B6ead09;
case 0x6ead0b:c.instructions+=23;goto B6ead0b;
case 0x6ead0e:c.instructions+=22;goto B6ead0e;
case 0x6ead10:c.instructions+=21;goto B6ead10;
case 0x6ead13:c.instructions+=20;goto B6ead13;
case 0x6ead16:c.instructions+=19;goto B6ead16;
case 0x6ead18:c.instructions+=18;goto B6ead18;
case 0x6ead1a:c.instructions+=17;goto B6ead1a;
case 0x6ead1c:c.instructions+=16;goto B6ead1c;
case 0x6ead1f:c.instructions+=15;goto B6ead1f;
case 0x6ead22:c.instructions+=14;goto B6ead22;
case 0x6ead25:c.instructions+=13;goto B6ead25;
case 0x6ead27:c.instructions+=12;goto B6ead27;
case 0x6ead2a:c.instructions+=11;goto B6ead2a;
case 0x6ead2d:c.instructions+=10;goto B6ead2d;
case 0x6ead30:c.instructions+=9;goto B6ead30;
case 0x6ead33:c.instructions+=8;goto B6ead33;
case 0x6ead36:c.instructions+=7;goto B6ead36;
case 0x6ead38:c.instructions+=6;goto B6ead38;
case 0x6ead3b:c.instructions+=5;goto B6ead3b;
case 0x6ead3e:c.instructions+=4;goto B6ead3e;
case 0x6ead41:c.instructions+=3;goto B6ead41;
case 0x6ead44:c.instructions+=2;goto B6ead44;
case 0x6ead47:c.instructions+=1;goto B6ead47;
case 0x6ead4c:goto L6ead4c;
case 0x6ead4f:c.instructions+=42;goto B6ead4f;
case 0x6ead52:c.instructions+=41;goto B6ead52;
case 0x6ead56:c.instructions+=40;goto B6ead56;
case 0x6ead59:c.instructions+=39;goto B6ead59;
case 0x6ead5c:c.instructions+=38;goto B6ead5c;
case 0x6ead60:c.instructions+=37;goto B6ead60;
case 0x6ead63:c.instructions+=36;goto B6ead63;
case 0x6ead65:c.instructions+=35;goto B6ead65;
case 0x6ead69:c.instructions+=34;goto B6ead69;
case 0x6ead6b:c.instructions+=33;goto B6ead6b;
case 0x6ead6f:c.instructions+=32;goto B6ead6f;
case 0x6ead71:c.instructions+=31;goto B6ead71;
case 0x6ead74:c.instructions+=30;goto B6ead74;
case 0x6ead76:c.instructions+=29;goto B6ead76;
case 0x6ead78:c.instructions+=28;goto B6ead78;
case 0x6ead7c:c.instructions+=27;goto B6ead7c;
case 0x6ead7f:c.instructions+=26;goto B6ead7f;
case 0x6ead82:c.instructions+=25;goto B6ead82;
case 0x6ead86:c.instructions+=24;goto B6ead86;
case 0x6ead88:c.instructions+=23;goto B6ead88;
case 0x6ead8b:c.instructions+=22;goto B6ead8b;
case 0x6ead8d:c.instructions+=21;goto B6ead8d;
case 0x6ead90:c.instructions+=20;goto B6ead90;
case 0x6ead92:c.instructions+=19;goto B6ead92;
case 0x6ead94:c.instructions+=18;goto B6ead94;
case 0x6ead97:c.instructions+=17;goto B6ead97;
case 0x6ead99:c.instructions+=16;goto B6ead99;
case 0x6ead9c:c.instructions+=15;goto B6ead9c;
case 0x6ead9e:c.instructions+=14;goto B6ead9e;
case 0x6eada1:c.instructions+=13;goto B6eada1;
case 0x6eada5:c.instructions+=12;goto B6eada5;
case 0x6eada8:c.instructions+=11;goto B6eada8;
case 0x6eadac:c.instructions+=10;goto B6eadac;
case 0x6eadaf:c.instructions+=9;goto B6eadaf;
case 0x6eadb1:c.instructions+=8;goto B6eadb1;
case 0x6eadb4:c.instructions+=7;goto B6eadb4;
case 0x6eadb8:c.instructions+=6;goto B6eadb8;
case 0x6eadbb:c.instructions+=5;goto B6eadbb;
case 0x6eadbf:c.instructions+=4;goto B6eadbf;
case 0x6eadc2:c.instructions+=3;goto B6eadc2;
case 0x6eadc4:c.instructions+=2;goto B6eadc4;
case 0x6eadc7:c.instructions+=1;goto B6eadc7;
case 0x6eadc9:goto L6eadc9;
case 0x6eadcd:c.instructions+=29;goto B6eadcd;
case 0x6eadd0:c.instructions+=28;goto B6eadd0;
case 0x6eadd3:c.instructions+=27;goto B6eadd3;
case 0x6eadd7:c.instructions+=26;goto B6eadd7;
case 0x6eadda:c.instructions+=25;goto B6eadda;
case 0x6eaddd:c.instructions+=24;goto B6eaddd;
case 0x6eaddf:c.instructions+=23;goto B6eaddf;
case 0x6eade1:c.instructions+=22;goto B6eade1;
case 0x6eade3:c.instructions+=21;goto B6eade3;
case 0x6eade6:c.instructions+=20;goto B6eade6;
case 0x6eade9:c.instructions+=19;goto B6eade9;
case 0x6eadeb:c.instructions+=18;goto B6eadeb;
case 0x6eaded:c.instructions+=17;goto B6eaded;
case 0x6eadef:c.instructions+=16;goto B6eadef;
case 0x6eadf2:c.instructions+=15;goto B6eadf2;
case 0x6eadf5:c.instructions+=14;goto B6eadf5;
case 0x6eadf7:c.instructions+=13;goto B6eadf7;
case 0x6eadfa:c.instructions+=12;goto B6eadfa;
case 0x6eadfc:c.instructions+=11;goto B6eadfc;
case 0x6eadff:c.instructions+=10;goto B6eadff;
case 0x6eae02:c.instructions+=9;goto B6eae02;
case 0x6eae05:c.instructions+=8;goto B6eae05;
case 0x6eae07:c.instructions+=7;goto B6eae07;
case 0x6eae0a:c.instructions+=6;goto B6eae0a;
case 0x6eae0c:c.instructions+=5;goto B6eae0c;
case 0x6eae0f:c.instructions+=4;goto B6eae0f;
case 0x6eae12:c.instructions+=3;goto B6eae12;
case 0x6eae15:c.instructions+=2;goto B6eae15;
case 0x6eae17:c.instructions+=1;goto B6eae17;
case 0x6eae19:goto L6eae19;
case 0x6eae1b:c.instructions+=1;goto B6eae1b;
case 0x6eae1e:goto L6eae1e;
case 0x6eae22:c.instructions+=8;goto B6eae22;
case 0x6eae29:c.instructions+=7;goto B6eae29;
case 0x6eae2d:c.instructions+=6;goto B6eae2d;
case 0x6eae2e:c.instructions+=5;goto B6eae2e;
case 0x6eae31:c.instructions+=4;goto B6eae31;
case 0x6eae34:c.instructions+=3;goto B6eae34;
case 0x6eae36:c.instructions+=2;goto B6eae36;
case 0x6eae3d:c.instructions+=1;goto B6eae3d;
case 0x6eae43:goto L6eae43;
case 0x6eae44:c.instructions+=6;goto B6eae44;
case 0x6eae45:c.instructions+=5;goto B6eae45;
case 0x6eae46:c.instructions+=4;goto B6eae46;
case 0x6eae48:c.instructions+=3;goto B6eae48;
case 0x6eae49:c.instructions+=2;goto B6eae49;
case 0x6eae4c:c.instructions+=1;goto B6eae4c;
case 0x6eae50:goto L6eae50;
case 0x6eae53:c.instructions+=6;goto B6eae53;
case 0x6eae54:c.instructions+=5;goto B6eae54;
case 0x6eae55:c.instructions+=4;goto B6eae55;
case 0x6eae56:c.instructions+=3;goto B6eae56;
case 0x6eae57:c.instructions+=2;goto B6eae57;
case 0x6eae5b:c.instructions+=1;goto B6eae5b;
case 0x6eae60:goto L6eae60;
case 0x6eae67:c.instructions+=8;goto B6eae67;
case 0x6eae6d:c.instructions+=7;goto B6eae6d;
case 0x6eae71:c.instructions+=6;goto B6eae71;
case 0x6eae74:c.instructions+=5;goto B6eae74;
case 0x6eae7b:c.instructions+=4;goto B6eae7b;
case 0x6eae7f:c.instructions+=3;goto B6eae7f;
case 0x6eae81:c.instructions+=2;goto B6eae81;
case 0x6eae84:c.instructions+=1;goto B6eae84;
case 0x6eae86:goto L6eae86;
case 0x6eae8c:c.instructions+=4;goto B6eae8c;
case 0x6eae90:c.instructions+=3;goto B6eae90;
case 0x6eae94:c.instructions+=2;goto B6eae94;
case 0x6eae98:c.instructions+=1;goto B6eae98;
case 0x6eae9a:goto L6eae9a;
case 0x6eaea0:c.instructions+=3;goto B6eaea0;
case 0x6eaea4:c.instructions+=2;goto B6eaea4;
case 0x6eaea8:c.instructions+=1;goto B6eaea8;
case 0x6eaeac:goto L6eaeac;
case 0x6eaeaf:c.instructions+=4;goto B6eaeaf;
case 0x6eaeb1:c.instructions+=3;goto B6eaeb1;
case 0x6eaeb5:c.instructions+=2;goto B6eaeb5;
case 0x6eaeb9:c.instructions+=1;goto B6eaeb9;
case 0x6eaebb:goto L6eaebb;
case 0x6eaebd:c.instructions+=1;goto B6eaebd;
case 0x6eaebf:goto L6eaebf;
case 0x6eaec1:c.instructions+=1;goto B6eaec1;
case 0x6eaec3:goto L6eaec3;
case 0x6eaec7:c.instructions+=2;goto B6eaec7;
case 0x6eaec9:c.instructions+=1;goto B6eaec9;
case 0x6eaecb:goto L6eaecb;
case 0x6eaece:c.instructions+=1;goto B6eaece;
case 0x6eaed0:goto L6eaed0;
case 0x6eaed3:c.instructions+=2;goto B6eaed3;
case 0x6eaed5:c.instructions+=1;goto B6eaed5;
case 0x6eaed7:goto L6eaed7;
case 0x6eaed9:c.instructions+=1;goto B6eaed9;
case 0x6eaedb:goto L6eaedb;
case 0x6eaedf:c.instructions+=3;goto B6eaedf;
case 0x6eaee2:c.instructions+=2;goto B6eaee2;
case 0x6eaee5:c.instructions+=1;goto B6eaee5;
case 0x6eaee7:goto L6eaee7;
case 0x6eaee9:c.instructions+=1;goto B6eaee9;
case 0x6eaeeb:goto L6eaeeb;
case 0x6eaeec:goto L6eaeec;
case 0x6eaef0:c.instructions+=3;goto B6eaef0;
case 0x6eaef2:c.instructions+=2;goto B6eaef2;
case 0x6eaef5:c.instructions+=1;goto B6eaef5;
case 0x6eaef7:goto L6eaef7;
case 0x6eaefb:c.instructions+=3;goto B6eaefb;
case 0x6eaefe:c.instructions+=2;goto B6eaefe;
case 0x6eaf00:c.instructions+=1;goto B6eaf00;
case 0x6eaf02:goto L6eaf02;
case 0x6eaf05:goto L6eaf05;
case 0x6eaf08:c.instructions+=2;goto B6eaf08;
case 0x6eaf0a:c.instructions+=1;goto B6eaf0a;
case 0x6eaf0c:goto L6eaf0c;
case 0x6eaf0d:c.instructions+=3;goto B6eaf0d;
case 0x6eaf10:c.instructions+=2;goto B6eaf10;
case 0x6eaf12:c.instructions+=1;goto B6eaf12;
case 0x6eaf14:goto L6eaf14;
case 0x6eaf16:goto L6eaf16;
case 0x6eaf18:c.instructions+=1;goto B6eaf18;
case 0x6eaf1a:goto L6eaf1a;
case 0x6eaf20:goto L6eaf20;
case 0x6eaf23:c.instructions+=2;goto B6eaf23;
case 0x6eaf25:c.instructions+=1;goto B6eaf25;
case 0x6eaf27:goto L6eaf27;
case 0x6eaf28:c.instructions+=3;goto B6eaf28;
case 0x6eaf2b:c.instructions+=2;goto B6eaf2b;
case 0x6eaf2d:c.instructions+=1;goto B6eaf2d;
case 0x6eaf2f:goto L6eaf2f;
case 0x6eaf32:goto L6eaf32;
case 0x6eaf36:c.instructions+=23;goto B6eaf36;
case 0x6eaf3a:c.instructions+=22;goto B6eaf3a;
case 0x6eaf3d:c.instructions+=21;goto B6eaf3d;
case 0x6eaf42:c.instructions+=20;goto B6eaf42;
case 0x6eaf44:c.instructions+=19;goto B6eaf44;
case 0x6eaf49:c.instructions+=18;goto B6eaf49;
case 0x6eaf4b:c.instructions+=17;goto B6eaf4b;
case 0x6eaf4d:c.instructions+=16;goto B6eaf4d;
case 0x6eaf4f:c.instructions+=15;goto B6eaf4f;
case 0x6eaf51:c.instructions+=14;goto B6eaf51;
case 0x6eaf53:c.instructions+=13;goto B6eaf53;
case 0x6eaf55:c.instructions+=12;goto B6eaf55;
case 0x6eaf59:c.instructions+=11;goto B6eaf59;
case 0x6eaf5d:c.instructions+=10;goto B6eaf5d;
case 0x6eaf60:c.instructions+=9;goto B6eaf60;
case 0x6eaf63:c.instructions+=8;goto B6eaf63;
case 0x6eaf66:c.instructions+=7;goto B6eaf66;
case 0x6eaf6a:c.instructions+=6;goto B6eaf6a;
case 0x6eaf6d:c.instructions+=5;goto B6eaf6d;
case 0x6eaf70:c.instructions+=4;goto B6eaf70;
case 0x6eaf74:c.instructions+=3;goto B6eaf74;
case 0x6eaf78:c.instructions+=2;goto B6eaf78;
case 0x6eaf7c:c.instructions+=1;goto B6eaf7c;
case 0x6eaf7e:goto L6eaf7e;
case 0x6eaf80:c.instructions+=6;goto B6eaf80;
case 0x6eaf84:c.instructions+=5;goto B6eaf84;
case 0x6eaf86:c.instructions+=4;goto B6eaf86;
case 0x6eaf88:c.instructions+=3;goto B6eaf88;
case 0x6eaf8a:c.instructions+=2;goto B6eaf8a;
case 0x6eaf8c:c.instructions+=1;goto B6eaf8c;
case 0x6eaf8e:goto L6eaf8e;
case 0x6eaf90:c.instructions+=1;goto B6eaf90;
case 0x6eaf92:goto L6eaf92;
case 0x6eaf94:c.instructions+=2;goto B6eaf94;
case 0x6eaf96:c.instructions+=1;goto B6eaf96;
case 0x6eaf98:goto L6eaf98;
case 0x6eaf9c:c.instructions+=4;goto B6eaf9c;
case 0x6eaf9f:c.instructions+=3;goto B6eaf9f;
case 0x6eafa1:c.instructions+=2;goto B6eafa1;
case 0x6eafa3:c.instructions+=1;goto B6eafa3;
case 0x6eafa5:goto L6eafa5;
case 0x6eafa7:c.instructions+=13;goto B6eafa7;
case 0x6eafa9:c.instructions+=12;goto B6eafa9;
case 0x6eafad:c.instructions+=11;goto B6eafad;
case 0x6eafb0:c.instructions+=10;goto B6eafb0;
case 0x6eafb4:c.instructions+=9;goto B6eafb4;
case 0x6eafb8:c.instructions+=8;goto B6eafb8;
case 0x6eafba:c.instructions+=7;goto B6eafba;
case 0x6eafbd:c.instructions+=6;goto B6eafbd;
case 0x6eafc2:c.instructions+=5;goto B6eafc2;
case 0x6eafc4:c.instructions+=4;goto B6eafc4;
case 0x6eafcb:c.instructions+=3;goto B6eafcb;
case 0x6eafce:c.instructions+=2;goto B6eafce;
case 0x6eafd1:c.instructions+=1;goto B6eafd1;
case 0x6eafd3:goto L6eafd3;
case 0x6eafd7:c.instructions+=8;goto B6eafd7;
case 0x6eafda:c.instructions+=7;goto B6eafda;
case 0x6eafdd:c.instructions+=6;goto B6eafdd;
case 0x6eafe2:c.instructions+=5;goto B6eafe2;
case 0x6eafe4:c.instructions+=4;goto B6eafe4;
case 0x6eafe5:c.instructions+=3;goto B6eafe5;
case 0x6eafe6:c.instructions+=2;goto B6eafe6;
case 0x6eafea:c.instructions+=1;goto B6eafea;
case 0x6eafef:goto L6eafef;
case 0x6eaff4:c.instructions+=4;goto B6eaff4;
case 0x6eaff8:c.instructions+=3;goto B6eaff8;
case 0x6eaffc:c.instructions+=2;goto B6eaffc;
case 0x6eaffd:c.instructions+=1;goto B6eaffd;
default:missing_instruction(c.pc);}
B6ea002:L6ea002:{c.instructions+=11;NFSU2_TR(0x6ea002);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6ea005:{NFSU2_TR(0x6ea005);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ea006:{NFSU2_TR(0x6ea006);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ea009:{NFSU2_TR(0x6ea009);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ea00d:{NFSU2_TR(0x6ea00d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6ea00f:{NFSU2_TR(0x6ea00f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ea013:{NFSU2_TR(0x6ea013);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ea017:{NFSU2_TR(0x6ea017);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ea01a:{NFSU2_TR(0x6ea01a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ea01b:{NFSU2_TR(0x6ea01b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea01d:{NFSU2_TR(0x6ea01d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e9ff3u,6e9);}
}
B6ea01f:L6ea01f:{c.instructions+=7;NFSU2_TR(0x6ea01f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ea020:{NFSU2_TR(0x6ea020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ea021:{NFSU2_TR(0x6ea021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ea022:{NFSU2_TR(0x6ea022);
w1(R+0,u8(0x1ull));
}
B6ea024:{NFSU2_TR(0x6ea024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ea025:{NFSU2_TR(0x6ea025);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ea028:{NFSU2_TR(0x6ea028);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea030:L6ea030:{c.instructions+=45;NFSU2_TR(0x6ea030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea031:{NFSU2_TR(0x6ea031);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ea035:{NFSU2_TR(0x6ea035);
{u32 ea_=u32(u32(8134184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea03b:{NFSU2_TR(0x6ea03b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ea03d:{NFSU2_TR(0x6ea03d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ea041:{NFSU2_TR(0x6ea041);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea045:{NFSU2_TR(0x6ea045);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea049:{NFSU2_TR(0x6ea049);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea04b:{NFSU2_TR(0x6ea04b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ea051:{NFSU2_TR(0x6ea051);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea054:{NFSU2_TR(0x6ea054);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ea058:{NFSU2_TR(0x6ea058);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea05c:{NFSU2_TR(0x6ea05c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea060:{NFSU2_TR(0x6ea060);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea062:{NFSU2_TR(0x6ea062);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ea068:{NFSU2_TR(0x6ea068);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea06b:{NFSU2_TR(0x6ea06b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ea06f:{NFSU2_TR(0x6ea06f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea073:{NFSU2_TR(0x6ea073);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea077:{NFSU2_TR(0x6ea077);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea079:{NFSU2_TR(0x6ea079);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea07c:{NFSU2_TR(0x6ea07c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ea080:{NFSU2_TR(0x6ea080);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea084:{NFSU2_TR(0x6ea084);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea088:{NFSU2_TR(0x6ea088);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea08a:{NFSU2_TR(0x6ea08a);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea08d:{NFSU2_TR(0x6ea08d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6ea090:{NFSU2_TR(0x6ea090);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ea093:{NFSU2_TR(0x6ea093);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6ea096:{NFSU2_TR(0x6ea096);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ea098:{NFSU2_TR(0x6ea098);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea09c:{NFSU2_TR(0x6ea09c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea0a0:{NFSU2_TR(0x6ea0a0);
{u32 ea_=u32(u32(9090352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea0a6:{NFSU2_TR(0x6ea0a6);
{u32 ea_=u32(u32(8134184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea0ac:{NFSU2_TR(0x6ea0ac);
{u32 ea_=u32(u32(8134192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea0b2:{NFSU2_TR(0x6ea0b2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea0b4:{NFSU2_TR(0x6ea0b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ea0b8:{NFSU2_TR(0x6ea0b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea0bc:{NFSU2_TR(0x6ea0bc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea0c0:{NFSU2_TR(0x6ea0c0);
{u32 ea_=u32(u32(9090352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea0c6:{NFSU2_TR(0x6ea0c6);
{u32 ea_=u32(u32(8134184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea0cc:{NFSU2_TR(0x6ea0cc);
{u32 ea_=u32(u32(8134192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea0d2:{NFSU2_TR(0x6ea0d2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea0d5:{NFSU2_TR(0x6ea0d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea0d6:{NFSU2_TR(0x6ea0d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea0e0:L6ea0e0:{c.instructions+=9;NFSU2_TR(0x6ea0e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea0e4:{NFSU2_TR(0x6ea0e4);
{u32 ea_=u32(u32(8134176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea0ea:{NFSU2_TR(0x6ea0ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea0ee:{NFSU2_TR(0x6ea0ee);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ea0f0:{NFSU2_TR(0x6ea0f0);
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
B6ea0f2:{NFSU2_TR(0x6ea0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea0f9:{NFSU2_TR(0x6ea0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea100:{NFSU2_TR(0x6ea100);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ea106:{NFSU2_TR(0x6ea106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea11f;}}
}
B6ea108:L6ea108:{c.instructions+=7;NFSU2_TR(0x6ea108);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B6ea10b:{NFSU2_TR(0x6ea10b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea10f:{NFSU2_TR(0x6ea10f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea113:{NFSU2_TR(0x6ea113);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea115:{NFSU2_TR(0x6ea115);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ea11b:{NFSU2_TR(0x6ea11b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea11d:{NFSU2_TR(0x6ea11d);
{goto L6ea14f;}
}
B6ea11f:L6ea11f:{c.instructions+=3;NFSU2_TR(0x6ea11f);
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
B6ea122:{NFSU2_TR(0x6ea122);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B6ea125:{NFSU2_TR(0x6ea125);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea13c;}}
}
B6ea127:L6ea127:{c.instructions+=6;NFSU2_TR(0x6ea127);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea12b:{NFSU2_TR(0x6ea12b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea12f:{NFSU2_TR(0x6ea12f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea131:{NFSU2_TR(0x6ea131);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ea137:{NFSU2_TR(0x6ea137);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea13a:{NFSU2_TR(0x6ea13a);
{goto L6ea14f;}
}
B6ea13c:L6ea13c:{c.instructions+=5;NFSU2_TR(0x6ea13c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea140:{NFSU2_TR(0x6ea140);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea144:{NFSU2_TR(0x6ea144);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea146:{NFSU2_TR(0x6ea146);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ea14c:{NFSU2_TR(0x6ea14c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea14f:L6ea14f:{c.instructions+=8;NFSU2_TR(0x6ea14f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ea153:{NFSU2_TR(0x6ea153);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea157:{NFSU2_TR(0x6ea157);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea15b:{NFSU2_TR(0x6ea15b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ea15d:{NFSU2_TR(0x6ea15d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ea163:{NFSU2_TR(0x6ea163);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea166:{NFSU2_TR(0x6ea166);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ea168:{NFSU2_TR(0x6ea168);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea170:L6ea170:{c.instructions+=10;NFSU2_TR(0x6ea170);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea174:{NFSU2_TR(0x6ea174);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea178:{NFSU2_TR(0x6ea178);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea179:{NFSU2_TR(0x6ea179);
__builtin_memmove((R+24),(R+4),4);
}
B6ea17b:{NFSU2_TR(0x6ea17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea182:{NFSU2_TR(0x6ea182);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea189:{NFSU2_TR(0x6ea189);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6ea18f:{NFSU2_TR(0x6ea18f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ea192:{NFSU2_TR(0x6ea192);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ea194:{NFSU2_TR(0x6ea194);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea1b6;}}
}
B6ea196:L6ea196:{c.instructions+=10;NFSU2_TR(0x6ea196);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ea198:{NFSU2_TR(0x6ea198);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B6ea19b:{NFSU2_TR(0x6ea19b);
w4(R+4,u32(r1(R+4)));
}
B6ea19e:{NFSU2_TR(0x6ea19e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea1a2:{NFSU2_TR(0x6ea1a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea1a6:{NFSU2_TR(0x6ea1a6);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea1a9:{NFSU2_TR(0x6ea1a9);
{u32 ea_=u32(u32(8134188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea1af:{NFSU2_TR(0x6ea1af);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea1b2:{NFSU2_TR(0x6ea1b2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea1b4:{NFSU2_TR(0x6ea1b4);
{goto L6ea1f9;}
}
B6ea1b6:L6ea1b6:{c.instructions+=3;NFSU2_TR(0x6ea1b6);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ea1b9:{NFSU2_TR(0x6ea1b9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ea1bb:{NFSU2_TR(0x6ea1bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea1dc;}}
}
B6ea1bd:L6ea1bd:{c.instructions+=9;NFSU2_TR(0x6ea1bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B6ea1c0:{NFSU2_TR(0x6ea1c0);
w4(R+4,u32(r1(R+4)));
}
B6ea1c3:{NFSU2_TR(0x6ea1c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea1c7:{NFSU2_TR(0x6ea1c7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea1cb:{NFSU2_TR(0x6ea1cb);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea1ce:{NFSU2_TR(0x6ea1ce);
{u32 ea_=u32(u32(8134188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea1d4:{NFSU2_TR(0x6ea1d4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea1d7:{NFSU2_TR(0x6ea1d7);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea1da:{NFSU2_TR(0x6ea1da);
{goto L6ea1f9;}
}
B6ea1dc:L6ea1dc:{c.instructions+=8;NFSU2_TR(0x6ea1dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B6ea1df:{NFSU2_TR(0x6ea1df);
w4(R+4,u32(r1(R+4)));
}
B6ea1e2:{NFSU2_TR(0x6ea1e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea1e6:{NFSU2_TR(0x6ea1e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea1ea:{NFSU2_TR(0x6ea1ea);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea1ed:{NFSU2_TR(0x6ea1ed);
{u32 ea_=u32(u32(8134188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea1f3:{NFSU2_TR(0x6ea1f3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea1f6:{NFSU2_TR(0x6ea1f6);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea1f9:L6ea1f9:{c.instructions+=11;NFSU2_TR(0x6ea1f9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ea1fb:{NFSU2_TR(0x6ea1fb);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ea1fe:{NFSU2_TR(0x6ea1fe);
w4(R+4,u32(r1(R+4)));
}
B6ea201:{NFSU2_TR(0x6ea201);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea205:{NFSU2_TR(0x6ea205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ea206:{NFSU2_TR(0x6ea206);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea20a:{NFSU2_TR(0x6ea20a);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea20d:{NFSU2_TR(0x6ea20d);
{u32 ea_=u32(u32(8134188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea213:{NFSU2_TR(0x6ea213);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea216:{NFSU2_TR(0x6ea216);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea219:{NFSU2_TR(0x6ea219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea220:L6ea220:{c.instructions+=3;NFSU2_TR(0x6ea220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea221:{NFSU2_TR(0x6ea221);
__builtin_memmove((R+24),(R+4),4);
}
B6ea223:{NFSU2_TR(0x6ea223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea228ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6ea228:L6ea228:{c.instructions+=15;NFSU2_TR(0x6ea228);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ea22a:{NFSU2_TR(0x6ea22a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ea22d:{NFSU2_TR(0x6ea22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea230:{NFSU2_TR(0x6ea230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea233:{NFSU2_TR(0x6ea233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea236:{NFSU2_TR(0x6ea236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea239:{NFSU2_TR(0x6ea239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea23c:{NFSU2_TR(0x6ea23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea23f:{NFSU2_TR(0x6ea23f);
u8 U[4];
w4(U+0,u32(0x7c1e38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6ea245:{NFSU2_TR(0x6ea245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea248:{NFSU2_TR(0x6ea248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea24b:{NFSU2_TR(0x6ea24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea252:{NFSU2_TR(0x6ea252);
__builtin_memmove((R+0),(R+24),4);
}
B6ea254:{NFSU2_TR(0x6ea254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ea255:{NFSU2_TR(0x6ea255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea260:L6ea260:{c.instructions+=6;NFSU2_TR(0x6ea260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6ea263:{NFSU2_TR(0x6ea263);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea264:{NFSU2_TR(0x6ea264);
__builtin_memmove((R+24),(R+4),4);
}
B6ea266:{NFSU2_TR(0x6ea266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea269:{NFSU2_TR(0x6ea269);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ea26b:{NFSU2_TR(0x6ea26b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea41b;}}
}
B6ea271:L6ea271:{c.instructions+=24;NFSU2_TR(0x6ea271);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea272:{NFSU2_TR(0x6ea272);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea273:{NFSU2_TR(0x6ea273);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea274:{NFSU2_TR(0x6ea274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ea277:{NFSU2_TR(0x6ea277);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ea27b:{NFSU2_TR(0x6ea27b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ea27e:{NFSU2_TR(0x6ea27e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ea281:{NFSU2_TR(0x6ea281);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6ea283:{NFSU2_TR(0x6ea283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea286:{NFSU2_TR(0x6ea286);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ea289:{NFSU2_TR(0x6ea289);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ea28d:{NFSU2_TR(0x6ea28d);
w4(R+8,u32(0x1ull));
}
B6ea292:{NFSU2_TR(0x6ea292);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ea294:{NFSU2_TR(0x6ea294);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ea295:{NFSU2_TR(0x6ea295);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6ea298:{NFSU2_TR(0x6ea298);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ea299:{NFSU2_TR(0x6ea299);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ea29c:{NFSU2_TR(0x6ea29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea29f:{NFSU2_TR(0x6ea29f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ea2a3:{NFSU2_TR(0x6ea2a3);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ea2a9:{NFSU2_TR(0x6ea2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ea2ab:{NFSU2_TR(0x6ea2ab);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6ea2ae:{NFSU2_TR(0x6ea2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea2af:{NFSU2_TR(0x6ea2af);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea2b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ea2b2:L6ea2b2:{c.instructions+=9;NFSU2_TR(0x6ea2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea2b5:{NFSU2_TR(0x6ea2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea2b8:{NFSU2_TR(0x6ea2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea2bb:{NFSU2_TR(0x6ea2bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ea2bf:{NFSU2_TR(0x6ea2bf);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ea2c5:{NFSU2_TR(0x6ea2c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ea2c7:{NFSU2_TR(0x6ea2c7);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6ea2ca:{NFSU2_TR(0x6ea2ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea2cb:{NFSU2_TR(0x6ea2cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea2ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ea2ce:L6ea2ce:{c.instructions+=7;NFSU2_TR(0x6ea2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea2d1:{NFSU2_TR(0x6ea2d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ea2d5:{NFSU2_TR(0x6ea2d5);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ea2db:{NFSU2_TR(0x6ea2db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ea2dd:{NFSU2_TR(0x6ea2dd);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6ea2e0:{NFSU2_TR(0x6ea2e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea2e1:{NFSU2_TR(0x6ea2e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea2e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ea2e4:L6ea2e4:{c.instructions+=5;NFSU2_TR(0x6ea2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea2e7:{NFSU2_TR(0x6ea2e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ea2ea:{NFSU2_TR(0x6ea2ea);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ea2ec:{NFSU2_TR(0x6ea2ec);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ea2ee:{NFSU2_TR(0x6ea2ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ea418;}}
}
B6ea2f4:L6ea2f4:{c.instructions+=3;NFSU2_TR(0x6ea2f4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ea2f6:{NFSU2_TR(0x6ea2f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea2fa:{NFSU2_TR(0x6ea2fa);
__builtin_memmove((R+12),(R+12),4);
}
B6ea300:L6ea300:{c.instructions+=6;NFSU2_TR(0x6ea300);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea304:{NFSU2_TR(0x6ea304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea307:{NFSU2_TR(0x6ea307);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ea30b:{NFSU2_TR(0x6ea30b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea30c:{NFSU2_TR(0x6ea30c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ea30e:{NFSU2_TR(0x6ea30e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea313ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea030u);}goto L6ea030;}
}
B6ea313:L6ea313:{c.instructions+=3;NFSU2_TR(0x6ea313);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ea317:{NFSU2_TR(0x6ea317);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ea319:{NFSU2_TR(0x6ea319);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea368;}}
}
B6ea31b:L6ea31b:{c.instructions+=20;NFSU2_TR(0x6ea31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea31e:{NFSU2_TR(0x6ea31e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ea320:{NFSU2_TR(0x6ea320);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ea323:{NFSU2_TR(0x6ea323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea326:{NFSU2_TR(0x6ea326);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ea32a:{NFSU2_TR(0x6ea32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea32d:{NFSU2_TR(0x6ea32d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ea331:{NFSU2_TR(0x6ea331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea334:{NFSU2_TR(0x6ea334);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea338:{NFSU2_TR(0x6ea338);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3f800000ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6ea340:{NFSU2_TR(0x6ea340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea343:{NFSU2_TR(0x6ea343);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea347:{NFSU2_TR(0x6ea347);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea34b:{NFSU2_TR(0x6ea34b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6ea34d:{NFSU2_TR(0x6ea34d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea351:{NFSU2_TR(0x6ea351);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea352:{NFSU2_TR(0x6ea352);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ea356:{NFSU2_TR(0x6ea356);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea357:{NFSU2_TR(0x6ea357);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea35b:{NFSU2_TR(0x6ea35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea360ull));
TAIL_STATIC(0x6e7130u,6e7);
}
B6ea360:L6ea360:{c.instructions+=2;NFSU2_TR(0x6ea360);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6ea363:{NFSU2_TR(0x6ea363);
{goto L6ea3fd;}
}
B6ea368:L6ea368:{c.instructions+=5;NFSU2_TR(0x6ea368);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ea36a:{NFSU2_TR(0x6ea36a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea36e:{NFSU2_TR(0x6ea36e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea376:{NFSU2_TR(0x6ea376);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea37a:{NFSU2_TR(0x6ea37a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea3c1;}}
}
B6ea37c:L6ea37c:{c.instructions+=7;NFSU2_TR(0x6ea37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea37f:{NFSU2_TR(0x6ea37f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6ea381:{NFSU2_TR(0x6ea381);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea382:{NFSU2_TR(0x6ea382);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ea386:{NFSU2_TR(0x6ea386);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea387:{NFSU2_TR(0x6ea387);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea38f:{NFSU2_TR(0x6ea38f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea394ull));
TAIL_STATIC(0x6e7130u,6e7);
}
B6ea394:L6ea394:{c.instructions+=10;NFSU2_TR(0x6ea394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea397:{NFSU2_TR(0x6ea397);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea39b:{NFSU2_TR(0x6ea39b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6ea39d:{NFSU2_TR(0x6ea39d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea39e:{NFSU2_TR(0x6ea39e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ea3a2:{NFSU2_TR(0x6ea3a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea3a3:{NFSU2_TR(0x6ea3a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea3ab:{NFSU2_TR(0x6ea3ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea3b3:{NFSU2_TR(0x6ea3b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea3b7:{NFSU2_TR(0x6ea3b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea3bcull));
TAIL_STATIC(0x6e7130u,6e7);
}
B6ea3bc:L6ea3bc:{c.instructions+=2;NFSU2_TR(0x6ea3bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6ea3bf:{NFSU2_TR(0x6ea3bf);
{goto L6ea3fd;}
}
B6ea3c1:L6ea3c1:{c.instructions+=8;NFSU2_TR(0x6ea3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea3c4:{NFSU2_TR(0x6ea3c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea3c8:{NFSU2_TR(0x6ea3c8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6ea3ca:{NFSU2_TR(0x6ea3ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea3cb:{NFSU2_TR(0x6ea3cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea3cf:{NFSU2_TR(0x6ea3cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea3d0:{NFSU2_TR(0x6ea3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea3d4:{NFSU2_TR(0x6ea3d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea3d9ull));
TAIL_STATIC(0x6e7130u,6e7);
}
B6ea3d9:L6ea3d9:{c.instructions+=10;NFSU2_TR(0x6ea3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea3dc:{NFSU2_TR(0x6ea3dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6ea3df:{NFSU2_TR(0x6ea3df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ea3e1:{NFSU2_TR(0x6ea3e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ea3e4:{NFSU2_TR(0x6ea3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea3e7:{NFSU2_TR(0x6ea3e7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ea3eb:{NFSU2_TR(0x6ea3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea3ee:{NFSU2_TR(0x6ea3ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ea3f2:{NFSU2_TR(0x6ea3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea3f5:{NFSU2_TR(0x6ea3f5);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3f800000ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6ea3fd:L6ea3fd:{c.instructions+=8;NFSU2_TR(0x6ea3fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea401:{NFSU2_TR(0x6ea401);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ea405:{NFSU2_TR(0x6ea405);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ea406:{NFSU2_TR(0x6ea406);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xeull))));
}
B6ea409:{NFSU2_TR(0x6ea409);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6ea40c:{NFSU2_TR(0x6ea40c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea40e:{NFSU2_TR(0x6ea40e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea412:{NFSU2_TR(0x6ea412);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea300u);}goto L6ea300;}}
}
B6ea418:L6ea418:{c.instructions+=3;NFSU2_TR(0x6ea418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ea419:{NFSU2_TR(0x6ea419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ea41a:{NFSU2_TR(0x6ea41a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ea41b:L6ea41b:{c.instructions+=3;NFSU2_TR(0x6ea41b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ea41c:{NFSU2_TR(0x6ea41c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ea41f:{NFSU2_TR(0x6ea41f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea420:L6ea420:{c.instructions+=5;NFSU2_TR(0x6ea420);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea421:{NFSU2_TR(0x6ea421);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea424:{NFSU2_TR(0x6ea424);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea427:{NFSU2_TR(0x6ea427);
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
B6ea429:{NFSU2_TR(0x6ea429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea443;}}
}
B6ea42b:L6ea42b:{c.instructions+=8;NFSU2_TR(0x6ea42b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ea42f:{NFSU2_TR(0x6ea42f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea433:{NFSU2_TR(0x6ea433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ea437:{NFSU2_TR(0x6ea437);
w1(R+0,u8(0x1ull));
}
B6ea439:{NFSU2_TR(0x6ea439);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea43d:{NFSU2_TR(0x6ea43d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea43f:{NFSU2_TR(0x6ea43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea440:{NFSU2_TR(0x6ea440);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea443:L6ea443:{c.instructions+=10;NFSU2_TR(0x6ea443);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ea447:{NFSU2_TR(0x6ea447);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6ea44c:{NFSU2_TR(0x6ea44c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea450:{NFSU2_TR(0x6ea450);
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
B6ea451:{NFSU2_TR(0x6ea451);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ea455:{NFSU2_TR(0x6ea455);
w1(R+0,u8(0x1ull));
}
B6ea457:{NFSU2_TR(0x6ea457);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea45b:{NFSU2_TR(0x6ea45b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea45d:{NFSU2_TR(0x6ea45d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea45e:{NFSU2_TR(0x6ea45e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea470:L6ea470:{c.instructions+=37;NFSU2_TR(0x6ea470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6ea473:{NFSU2_TR(0x6ea473);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea475:{NFSU2_TR(0x6ea475);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea478:{NFSU2_TR(0x6ea478);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea47b:{NFSU2_TR(0x6ea47b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea47e:{NFSU2_TR(0x6ea47e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea481:{NFSU2_TR(0x6ea481);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea483:{NFSU2_TR(0x6ea483);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6ea485:{NFSU2_TR(0x6ea485);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea489:{NFSU2_TR(0x6ea489);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea48c:{NFSU2_TR(0x6ea48c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea48f:{NFSU2_TR(0x6ea48f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea493:{NFSU2_TR(0x6ea493);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ea495:{NFSU2_TR(0x6ea495);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea498:{NFSU2_TR(0x6ea498);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ea49a:{NFSU2_TR(0x6ea49a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea49d:{NFSU2_TR(0x6ea49d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6ea49f:{NFSU2_TR(0x6ea49f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea4a1:{NFSU2_TR(0x6ea4a1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea4a4:{NFSU2_TR(0x6ea4a4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ea4a6:{NFSU2_TR(0x6ea4a6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea4a9:{NFSU2_TR(0x6ea4a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ea4ab:{NFSU2_TR(0x6ea4ab);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea4ae:{NFSU2_TR(0x6ea4ae);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea4b2:{NFSU2_TR(0x6ea4b2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea4b5:{NFSU2_TR(0x6ea4b5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea4b9:{NFSU2_TR(0x6ea4b9);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea4bc:{NFSU2_TR(0x6ea4bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ea4be:{NFSU2_TR(0x6ea4be);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea4c1:{NFSU2_TR(0x6ea4c1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea4c5:{NFSU2_TR(0x6ea4c5);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea4c8:{NFSU2_TR(0x6ea4c8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea4cc:{NFSU2_TR(0x6ea4cc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea4cf:{NFSU2_TR(0x6ea4cf);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6ea4d1:{NFSU2_TR(0x6ea4d1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea4d4:{NFSU2_TR(0x6ea4d4);
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
B6ea4d7:{NFSU2_TR(0x6ea4d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea4e0:L6ea4e0:{c.instructions+=7;NFSU2_TR(0x6ea4e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea4e1:{NFSU2_TR(0x6ea4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea4e4:{NFSU2_TR(0x6ea4e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea4e5:{NFSU2_TR(0x6ea4e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6ea4e9:{NFSU2_TR(0x6ea4e9);
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
B6ea4ea:{NFSU2_TR(0x6ea4ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea4ee:{NFSU2_TR(0x6ea4ee);
if(r1(R+519)){{goto L6ea556;}}
}
B6ea4f0:L6ea4f0:{c.instructions+=7;NFSU2_TR(0x6ea4f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea4f1:{NFSU2_TR(0x6ea4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ea4f5:{NFSU2_TR(0x6ea4f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea4f6:{NFSU2_TR(0x6ea4f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ea4fa:{NFSU2_TR(0x6ea4fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea4fb:{NFSU2_TR(0x6ea4fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ea4ff:{NFSU2_TR(0x6ea4ff);
{goto L6ea505;}
}
B6ea501:L6ea501:{c.instructions+=1;NFSU2_TR(0x6ea501);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea505:L6ea505:{c.instructions+=10;NFSU2_TR(0x6ea505);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea508:{NFSU2_TR(0x6ea508);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ea50c:{NFSU2_TR(0x6ea50c);
__builtin_memmove((R+4),(R+0),4);
}
B6ea50e:{NFSU2_TR(0x6ea50e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ea511:{NFSU2_TR(0x6ea511);
w4(R+8,u32(0x1ull));
}
B6ea516:{NFSU2_TR(0x6ea516);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ea518:{NFSU2_TR(0x6ea518);
__builtin_memmove((R+4),(R+0),4);
}
B6ea51a:{NFSU2_TR(0x6ea51a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6ea51d:{NFSU2_TR(0x6ea51d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ea520:{NFSU2_TR(0x6ea520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea550;}}
}
B6ea522:L6ea522:{c.instructions+=2;NFSU2_TR(0x6ea522);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ea525:{NFSU2_TR(0x6ea525);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea52f;}}
}
B6ea527:L6ea527:{c.instructions+=3;NFSU2_TR(0x6ea527);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea52b:{NFSU2_TR(0x6ea52b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6ea52d:{NFSU2_TR(0x6ea52d);
{goto L6ea53e;}
}
B6ea52f:L6ea52f:{c.instructions+=3;NFSU2_TR(0x6ea52f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea533:{NFSU2_TR(0x6ea533);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6ea535:{NFSU2_TR(0x6ea535);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ea539;}}
}
B6ea537:L6ea537:{c.instructions+=1;NFSU2_TR(0x6ea537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ea539:L6ea539:{c.instructions+=2;NFSU2_TR(0x6ea539);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ea53c:{NFSU2_TR(0x6ea53c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ea541;}}
}
B6ea53e:L6ea53e:{c.instructions+=1;NFSU2_TR(0x6ea53e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6ea541:L6ea541:{c.instructions+=7;NFSU2_TR(0x6ea541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ea543:{NFSU2_TR(0x6ea543);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ea544:{NFSU2_TR(0x6ea544);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea546:{NFSU2_TR(0x6ea546);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6ea548:{NFSU2_TR(0x6ea548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea549:{NFSU2_TR(0x6ea549);
__builtin_memmove((R+4),(R+24),4);
}
B6ea54b:{NFSU2_TR(0x6ea54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea550ull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6ea550:L6ea550:{c.instructions+=2;NFSU2_TR(0x6ea550);
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
B6ea551:{NFSU2_TR(0x6ea551);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea501u);}goto L6ea501;}}
}
B6ea553:L6ea553:{c.instructions+=3;NFSU2_TR(0x6ea553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ea554:{NFSU2_TR(0x6ea554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ea555:{NFSU2_TR(0x6ea555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ea556:L6ea556:{c.instructions+=4;NFSU2_TR(0x6ea556);
w1(R+0,u8(0x1ull));
}
B6ea558:{NFSU2_TR(0x6ea558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ea559:{NFSU2_TR(0x6ea559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea55a:{NFSU2_TR(0x6ea55a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea560:L6ea560:{c.instructions+=6;NFSU2_TR(0x6ea560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea561:{NFSU2_TR(0x6ea561);
__builtin_memmove((R+24),(R+4),4);
}
B6ea563:{NFSU2_TR(0x6ea563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea566:{NFSU2_TR(0x6ea566);
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
B6ea568:{NFSU2_TR(0x6ea568);
u8 U[4];
w4(U+0,u32(0x7c1e38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6ea56e:{NFSU2_TR(0x6ea56e);
if(r1(R+518)){{goto L6ea59a;}}
}
B6ea570:L6ea570:{c.instructions+=4;NFSU2_TR(0x6ea570);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ea576:{NFSU2_TR(0x6ea576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ea578:{NFSU2_TR(0x6ea578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea579:{NFSU2_TR(0x6ea579);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea57cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ea57c:L6ea57c:{c.instructions+=5;NFSU2_TR(0x6ea57c);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ea582:{NFSU2_TR(0x6ea582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea585:{NFSU2_TR(0x6ea585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ea587:{NFSU2_TR(0x6ea587);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea588:{NFSU2_TR(0x6ea588);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea58bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ea58b:L6ea58b:{c.instructions+=5;NFSU2_TR(0x6ea58b);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ea591:{NFSU2_TR(0x6ea591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea594:{NFSU2_TR(0x6ea594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ea596:{NFSU2_TR(0x6ea596);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea597:{NFSU2_TR(0x6ea597);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea59aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ea59a:L6ea59a:{c.instructions+=2;NFSU2_TR(0x6ea59a);
__builtin_memmove((R+4),(R+24),4);
}
B6ea59c:{NFSU2_TR(0x6ea59c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea5a1ull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6ea5a1:L6ea5a1:{c.instructions+=2;NFSU2_TR(0x6ea5a1);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B6ea5a6:{NFSU2_TR(0x6ea5a6);
if(r1(R+518)){{goto L6ea5b4;}}
}
B6ea5a8:L6ea5a8:{c.instructions+=3;NFSU2_TR(0x6ea5a8);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5aa:{NFSU2_TR(0x6ea5aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5ab:{NFSU2_TR(0x6ea5ab);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea5b1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ea5b1:L6ea5b1:{c.instructions+=1;NFSU2_TR(0x6ea5b1);
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
B6ea5b4:L6ea5b4:{c.instructions+=3;NFSU2_TR(0x6ea5b4);
__builtin_memmove((R+0),(R+24),4);
}
B6ea5b6:{NFSU2_TR(0x6ea5b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ea5b7:{NFSU2_TR(0x6ea5b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea5c0:L6ea5c0:{c.instructions+=8;NFSU2_TR(0x6ea5c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea5c4:{NFSU2_TR(0x6ea5c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B6ea5c7:{NFSU2_TR(0x6ea5c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5c8:{NFSU2_TR(0x6ea5c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ea5ca:{NFSU2_TR(0x6ea5ca);
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
B6ea5cc:{NFSU2_TR(0x6ea5cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5cd:{NFSU2_TR(0x6ea5cd);
__builtin_memmove((R+28),(R+4),4);
}
B6ea5cf:{NFSU2_TR(0x6ea5cf);
if(r1(R+518)){{goto L6ea5ee;}}
}
B6ea5d1:L6ea5d1:{c.instructions+=8;NFSU2_TR(0x6ea5d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea5d5:{NFSU2_TR(0x6ea5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ea5d7:{NFSU2_TR(0x6ea5d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5d8:{NFSU2_TR(0x6ea5d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5d9:{NFSU2_TR(0x6ea5d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea5e0:{NFSU2_TR(0x6ea5e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5e1:{NFSU2_TR(0x6ea5e1);
__builtin_memmove((R+4),(R+28),4);
}
B6ea5e3:{NFSU2_TR(0x6ea5e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea5e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ea5e6:L6ea5e6:{c.instructions+=4;NFSU2_TR(0x6ea5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ea5e7:{NFSU2_TR(0x6ea5e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ea5e8:{NFSU2_TR(0x6ea5e8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ea5eb:{NFSU2_TR(0x6ea5eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ea5ee:L6ea5ee:{c.instructions+=4;NFSU2_TR(0x6ea5ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5ef:{NFSU2_TR(0x6ea5ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea5f0:{NFSU2_TR(0x6ea5f0);
__builtin_memmove((R+4),(R+28),4);
}
B6ea5f2:{NFSU2_TR(0x6ea5f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea5f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea260u);}goto L6ea260;}
}
B6ea5f7:L6ea5f7:{c.instructions+=5;NFSU2_TR(0x6ea5f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea5fe:{NFSU2_TR(0x6ea5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ea601:{NFSU2_TR(0x6ea601);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea602:{NFSU2_TR(0x6ea602);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea606:{NFSU2_TR(0x6ea606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea60bull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ea60b:L6ea60b:{c.instructions+=5;NFSU2_TR(0x6ea60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea60e:{NFSU2_TR(0x6ea60e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ea611:{NFSU2_TR(0x6ea611);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea613:{NFSU2_TR(0x6ea613);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea617:{NFSU2_TR(0x6ea617);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea63a;}}
}
B6ea619:L6ea619:{c.instructions+=2;NFSU2_TR(0x6ea619);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea61b:{NFSU2_TR(0x6ea61b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ea626;}}
}
B6ea61d:L6ea61d:{c.instructions+=2;NFSU2_TR(0x6ea61d);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea624:{NFSU2_TR(0x6ea624);
{goto L6ea6a3;}
}
B6ea626:L6ea626:{c.instructions+=3;NFSU2_TR(0x6ea626);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ea62a:{NFSU2_TR(0x6ea62a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea62c:{NFSU2_TR(0x6ea62c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ea631;}}
}
B6ea62e:L6ea62e:{c.instructions+=2;NFSU2_TR(0x6ea62e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ea62f:{NFSU2_TR(0x6ea62f);
{goto L6ea695;}
}
B6ea631:L6ea631:{c.instructions+=2;NFSU2_TR(0x6ea631);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea638:{NFSU2_TR(0x6ea638);
{goto L6ea69c;}
}
B6ea63a:L6ea63a:{c.instructions+=3;NFSU2_TR(0x6ea63a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6ea63d:{NFSU2_TR(0x6ea63d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea63f:{NFSU2_TR(0x6ea63f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ea64a;}}
}
B6ea641:L6ea641:{c.instructions+=2;NFSU2_TR(0x6ea641);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea648:{NFSU2_TR(0x6ea648);
{goto L6ea69c;}
}
B6ea64a:L6ea64a:{c.instructions+=3;NFSU2_TR(0x6ea64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea64d:{NFSU2_TR(0x6ea64d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea650:{NFSU2_TR(0x6ea650);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ea656;}}
}
B6ea652:L6ea652:{c.instructions+=2;NFSU2_TR(0x6ea652);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ea654:{NFSU2_TR(0x6ea654);
{goto L6ea657;}
}
B6ea656:L6ea656:{c.instructions+=1;NFSU2_TR(0x6ea656);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ea657:L6ea657:{c.instructions+=4;NFSU2_TR(0x6ea657);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6ea65b:{NFSU2_TR(0x6ea65b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea65d:{NFSU2_TR(0x6ea65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ea660:{NFSU2_TR(0x6ea660);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ea681;}}
}
B6ea662:L6ea662:{c.instructions+=4;NFSU2_TR(0x6ea662);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6ea666:{NFSU2_TR(0x6ea666);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
}
B6ea669:{NFSU2_TR(0x6ea669);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea66b:{NFSU2_TR(0x6ea66b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ea694;}}
}
B6ea66d:L6ea66d:{c.instructions+=1;NFSU2_TR(0x6ea66d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ea670:L6ea670:{c.instructions+=3;NFSU2_TR(0x6ea670);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6ea673:{NFSU2_TR(0x6ea673);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea675:{NFSU2_TR(0x6ea675);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ea694;}}
}
B6ea677:L6ea677:{c.instructions+=4;NFSU2_TR(0x6ea677);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ea678:{NFSU2_TR(0x6ea678);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ea67b:{NFSU2_TR(0x6ea67b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea67d:{NFSU2_TR(0x6ea67d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea670u);}goto L6ea670;}}
}
B6ea67f:L6ea67f:{c.instructions+=1;NFSU2_TR(0x6ea67f);
{goto L6ea694;}
}
B6ea681:L6ea681:{c.instructions+=2;NFSU2_TR(0x6ea681);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea683:{NFSU2_TR(0x6ea683);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ea694;}}
}
B6ea685:L6ea685:{c.instructions+=3;NFSU2_TR(0x6ea685);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6ea688:{NFSU2_TR(0x6ea688);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea68a:{NFSU2_TR(0x6ea68a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ea694;}}
}
B6ea68c:L6ea68c:{c.instructions+=4;NFSU2_TR(0x6ea68c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ea68d:{NFSU2_TR(0x6ea68d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6ea690:{NFSU2_TR(0x6ea690);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea692:{NFSU2_TR(0x6ea692);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea685u);}goto L6ea685;}}
}
B6ea694:L6ea694:{c.instructions+=1;NFSU2_TR(0x6ea694);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ea695:L6ea695:{c.instructions+=1;NFSU2_TR(0x6ea695);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea69c:L6ea69c:{c.instructions+=1;NFSU2_TR(0x6ea69c);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ea6a3:L6ea6a3:{c.instructions+=21;NFSU2_TR(0x6ea6a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6ea6a7:{NFSU2_TR(0x6ea6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ea6aa:{NFSU2_TR(0x6ea6aa);
w4(R+4,u32(0x1full));
}
B6ea6af:{NFSU2_TR(0x6ea6af);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B6ea6b1:{NFSU2_TR(0x6ea6b1);
w4(R+0,u32(0x7fffffffull));
}
B6ea6b6:{NFSU2_TR(0x6ea6b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B6ea6b8:{NFSU2_TR(0x6ea6b8);
__builtin_memmove((R+4),(R+20),4);
}
B6ea6ba:{NFSU2_TR(0x6ea6ba);
__builtin_memmove((R+8),(R+12),4);
}
B6ea6bc:{NFSU2_TR(0x6ea6bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B6ea6be:{NFSU2_TR(0x6ea6be);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea6c2:{NFSU2_TR(0x6ea6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ea6c5:{NFSU2_TR(0x6ea6c5);
__builtin_memmove((R+4),(R+0),4);
}
B6ea6c7:{NFSU2_TR(0x6ea6c7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6ea6ca:{NFSU2_TR(0x6ea6ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea6ce:{NFSU2_TR(0x6ea6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))+u32(r4(U+4))));
}
B6ea6d1:{NFSU2_TR(0x6ea6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea6d4:{NFSU2_TR(0x6ea6d4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B6ea6d6:{NFSU2_TR(0x6ea6d6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea6d9:{NFSU2_TR(0x6ea6d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea6dd:{NFSU2_TR(0x6ea6dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea6e1:{NFSU2_TR(0x6ea6e1);
if(r1(R+518)){{goto L6ea706;}}
}
B6ea6e3:L6ea6e3:{c.instructions+=6;NFSU2_TR(0x6ea6e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea6e7:{NFSU2_TR(0x6ea6e7);
__builtin_memmove((R+12),(R+8),4);
}
B6ea6e9:{NFSU2_TR(0x6ea6e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B6ea6eb:{NFSU2_TR(0x6ea6eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ea6ef:{NFSU2_TR(0x6ea6ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ea6f6:{NFSU2_TR(0x6ea6f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea706;}}
}
B6ea6f8:L6ea6f8:{c.instructions+=2;NFSU2_TR(0x6ea6f8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea6fa:{NFSU2_TR(0x6ea6fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ea706;}}
}
B6ea6fc:L6ea6fc:{c.instructions+=4;NFSU2_TR(0x6ea6fc);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B6ea6fe:{NFSU2_TR(0x6ea6fe);
__builtin_memmove((R+4),(R+8),4);
}
B6ea700:{NFSU2_TR(0x6ea700);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea704:{NFSU2_TR(0x6ea704);
{goto L6ea776;}
}
B6ea706:L6ea706:{c.instructions+=6;NFSU2_TR(0x6ea706);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea70a:{NFSU2_TR(0x6ea70a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ea70d:{NFSU2_TR(0x6ea70d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ea70f:{NFSU2_TR(0x6ea70f);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ea711:{NFSU2_TR(0x6ea711);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea715:{NFSU2_TR(0x6ea715);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ea774;}}
}
B6ea717:L6ea717:{c.instructions+=3;NFSU2_TR(0x6ea717);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea71b:{NFSU2_TR(0x6ea71b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ea71d:{NFSU2_TR(0x6ea71d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea721:L6ea721:{c.instructions+=9;NFSU2_TR(0x6ea721);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea724:{NFSU2_TR(0x6ea724);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea727:{NFSU2_TR(0x6ea727);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea72b:{NFSU2_TR(0x6ea72b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6ea72d:{NFSU2_TR(0x6ea72d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea72e:{NFSU2_TR(0x6ea72e);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B6ea733:{NFSU2_TR(0x6ea733);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea737:{NFSU2_TR(0x6ea737);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea738:{NFSU2_TR(0x6ea738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea73dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea0e0u);}goto L6ea0e0;}
}
B6ea73d:L6ea73d:{c.instructions+=14;NFSU2_TR(0x6ea73d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea741:{NFSU2_TR(0x6ea741);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea745:{NFSU2_TR(0x6ea745);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea749:{NFSU2_TR(0x6ea749);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xeull))));
}
B6ea74c:{NFSU2_TR(0x6ea74c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ea74f:{NFSU2_TR(0x6ea74f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea753:{NFSU2_TR(0x6ea753);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea757:{NFSU2_TR(0x6ea757);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea75b:{NFSU2_TR(0x6ea75b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ea75f:{NFSU2_TR(0x6ea75f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ea760:{NFSU2_TR(0x6ea760);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6ea763:{NFSU2_TR(0x6ea763);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea765:{NFSU2_TR(0x6ea765);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea769:{NFSU2_TR(0x6ea769);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea721u);}goto L6ea721;}}
}
B6ea76b:L6ea76b:{c.instructions+=2;NFSU2_TR(0x6ea76b);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ea772:{NFSU2_TR(0x6ea772);
__builtin_memmove((R+8),(R+4),4);
}
B6ea774:L6ea774:{c.instructions+=1;NFSU2_TR(0x6ea774);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ea776:L6ea776:{c.instructions+=2;NFSU2_TR(0x6ea776);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6ea77a:{NFSU2_TR(0x6ea77a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ea840;}}
}
B6ea780:L6ea780:{c.instructions+=8;NFSU2_TR(0x6ea780);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ea784:{NFSU2_TR(0x6ea784);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea788:{NFSU2_TR(0x6ea788);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ea78b:{NFSU2_TR(0x6ea78b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6ea78e:{NFSU2_TR(0x6ea78e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B6ea790:{NFSU2_TR(0x6ea790);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6ea792:{NFSU2_TR(0x6ea792);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea796:{NFSU2_TR(0x6ea796);
{goto L6ea7a0;}
}
B6ea7a0:L6ea7a0:{c.instructions+=3;NFSU2_TR(0x6ea7a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ea7a2:{NFSU2_TR(0x6ea7a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ea7aa:{NFSU2_TR(0x6ea7aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ea82b;}}
}
B6ea7ac:L6ea7ac:{c.instructions+=2;NFSU2_TR(0x6ea7ac);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ea7ae:{NFSU2_TR(0x6ea7ae);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ea7b0:L6ea7b0:{c.instructions+=5;NFSU2_TR(0x6ea7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea7b3:{NFSU2_TR(0x6ea7b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ea7b7:{NFSU2_TR(0x6ea7b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea7b8:{NFSU2_TR(0x6ea7b8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+20)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ea7ba:{NFSU2_TR(0x6ea7ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea7bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea030u);}goto L6ea030;}
}
B6ea7bf:L6ea7bf:{c.instructions+=6;NFSU2_TR(0x6ea7bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea7c3:{NFSU2_TR(0x6ea7c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea7c4:{NFSU2_TR(0x6ea7c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ea7c8:{NFSU2_TR(0x6ea7c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea7c9:{NFSU2_TR(0x6ea7c9);
__builtin_memmove((R+4),(R+12),4);
}
B6ea7cb:{NFSU2_TR(0x6ea7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea7d0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea170u);}goto L6ea170;}
}
B6ea7d0:L6ea7d0:{c.instructions+=30;NFSU2_TR(0x6ea7d0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea7d4:{NFSU2_TR(0x6ea7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea7d7:{NFSU2_TR(0x6ea7d7);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea7da:{NFSU2_TR(0x6ea7da);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6ea7dc:{NFSU2_TR(0x6ea7dc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ea7dd:{NFSU2_TR(0x6ea7dd);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xeull))));
}
B6ea7e0:{NFSU2_TR(0x6ea7e0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea7e2:{NFSU2_TR(0x6ea7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea7e5:{NFSU2_TR(0x6ea7e5);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea7e9:{NFSU2_TR(0x6ea7e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ea7ed:{NFSU2_TR(0x6ea7ed);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea7ef:{NFSU2_TR(0x6ea7ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea7f3:{NFSU2_TR(0x6ea7f3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ea7f4:{NFSU2_TR(0x6ea7f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea7f8:{NFSU2_TR(0x6ea7f8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea7fa:{NFSU2_TR(0x6ea7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea7fd:{NFSU2_TR(0x6ea7fd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea801:{NFSU2_TR(0x6ea801);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ea805:{NFSU2_TR(0x6ea805);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea807:{NFSU2_TR(0x6ea807);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea80b:{NFSU2_TR(0x6ea80b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea80d:{NFSU2_TR(0x6ea80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea810:{NFSU2_TR(0x6ea810);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea814:{NFSU2_TR(0x6ea814);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ea818:{NFSU2_TR(0x6ea818);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ea81a:{NFSU2_TR(0x6ea81a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6ea81d:{NFSU2_TR(0x6ea81d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea81f:{NFSU2_TR(0x6ea81f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ea823:{NFSU2_TR(0x6ea823);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea825:{NFSU2_TR(0x6ea825);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea7b0u);}goto L6ea7b0;}}
}
B6ea827:L6ea827:{c.instructions+=1;NFSU2_TR(0x6ea827);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ea82b:L6ea82b:{c.instructions+=2;NFSU2_TR(0x6ea82b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea82f:{NFSU2_TR(0x6ea82f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea7a0u);}goto L6ea7a0;}}
}
B6ea835:L6ea835:{c.instructions+=2;NFSU2_TR(0x6ea835);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ea83c:{NFSU2_TR(0x6ea83c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea840:L6ea840:{c.instructions+=5;NFSU2_TR(0x6ea840);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea843:{NFSU2_TR(0x6ea843);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea846:{NFSU2_TR(0x6ea846);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ea848:{NFSU2_TR(0x6ea848);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ea84b:{NFSU2_TR(0x6ea84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea873;}}
}
B6ea84d:L6ea84d:{c.instructions+=6;NFSU2_TR(0x6ea84d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea851:{NFSU2_TR(0x6ea851);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea858:{NFSU2_TR(0x6ea858);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ea85a:{NFSU2_TR(0x6ea85a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ea85c:{NFSU2_TR(0x6ea85c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ea85f:{NFSU2_TR(0x6ea85f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eacaa;}}
}
B6ea865:L6ea865:{c.instructions+=3;NFSU2_TR(0x6ea865);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea86c:{NFSU2_TR(0x6ea86c);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ea86e:{NFSU2_TR(0x6ea86e);
{goto L6ea8f6;}
}
B6ea873:L6ea873:{c.instructions+=2;NFSU2_TR(0x6ea873);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ea875:{NFSU2_TR(0x6ea875);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ea8b0;}}
}
B6ea877:L6ea877:{c.instructions+=5;NFSU2_TR(0x6ea877);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea87e:{NFSU2_TR(0x6ea87e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ea884:{NFSU2_TR(0x6ea884);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ea886:{NFSU2_TR(0x6ea886);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ea889:{NFSU2_TR(0x6ea889);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eacac;}}
}
B6ea88f:L6ea88f:{c.instructions+=6;NFSU2_TR(0x6ea88f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6ea892:{NFSU2_TR(0x6ea892);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea899:{NFSU2_TR(0x6ea899);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea8a0:{NFSU2_TR(0x6ea8a0);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ea8a7:{NFSU2_TR(0x6ea8a7);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea8ae:{NFSU2_TR(0x6ea8ae);
{goto L6ea8ff;}
}
B6ea8b0:L6ea8b0:{c.instructions+=8;NFSU2_TR(0x6ea8b0);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6ea8b5:{NFSU2_TR(0x6ea8b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea8bc:{NFSU2_TR(0x6ea8bc);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea8c3:{NFSU2_TR(0x6ea8c3);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea8ca:{NFSU2_TR(0x6ea8ca);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ea8cc:{NFSU2_TR(0x6ea8cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ea8ce:{NFSU2_TR(0x6ea8ce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ea8d1:{NFSU2_TR(0x6ea8d1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eacaa;}}
}
B6ea8d7:L6ea8d7:{c.instructions+=7;NFSU2_TR(0x6ea8d7);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6ea8db:{NFSU2_TR(0x6ea8db);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea8e2:{NFSU2_TR(0x6ea8e2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ea8e4:{NFSU2_TR(0x6ea8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea8eb:{NFSU2_TR(0x6ea8eb);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ea8f2:{NFSU2_TR(0x6ea8f2);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6ea8f4:{NFSU2_TR(0x6ea8f4);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6ea8f6:L6ea8f6:{c.instructions+=2;NFSU2_TR(0x6ea8f6);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea8fd:{NFSU2_TR(0x6ea8fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ea8ff:L6ea8ff:{c.instructions+=4;NFSU2_TR(0x6ea8ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ea903:{NFSU2_TR(0x6ea903);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ea904:{NFSU2_TR(0x6ea904);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ea906:{NFSU2_TR(0x6ea906);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eacac;}}
}
B6ea90c:L6ea90c:{c.instructions+=9;NFSU2_TR(0x6ea90c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea910:{NFSU2_TR(0x6ea910);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea913:{NFSU2_TR(0x6ea913);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ea916:{NFSU2_TR(0x6ea916);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r1(U+0))));
}
B6ea918:{NFSU2_TR(0x6ea918);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea91c:{NFSU2_TR(0x6ea91c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ea91f:{NFSU2_TR(0x6ea91f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6ea921:{NFSU2_TR(0x6ea921);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ea923:{NFSU2_TR(0x6ea923);
if(r1(R+518)){{goto L6eaacc;}}
}
B6ea929:L6ea929:{c.instructions+=5;NFSU2_TR(0x6ea929);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea92d:{NFSU2_TR(0x6ea92d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6ea930:{NFSU2_TR(0x6ea930);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ea932:{NFSU2_TR(0x6ea932);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ea934:{NFSU2_TR(0x6ea934);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6eae43;}}
}
B6ea93a:L6ea93a:{c.instructions+=4;NFSU2_TR(0x6ea93a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ea93c:{NFSU2_TR(0x6ea93c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea940:{NFSU2_TR(0x6ea940);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea947:{NFSU2_TR(0x6ea947);
{goto L6ea950;}
}
B6ea950:L6ea950:{c.instructions+=9;NFSU2_TR(0x6ea950);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea953:{NFSU2_TR(0x6ea953);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea957:{NFSU2_TR(0x6ea957);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6ea95c:{NFSU2_TR(0x6ea95c);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea960:{NFSU2_TR(0x6ea960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea961:{NFSU2_TR(0x6ea961);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea968:{NFSU2_TR(0x6ea968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea969:{NFSU2_TR(0x6ea969);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ea96d:{NFSU2_TR(0x6ea96d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea972ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea0e0u);}goto L6ea0e0;}
}
B6ea972:L6ea972:{c.instructions+=7;NFSU2_TR(0x6ea972);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ea979:{NFSU2_TR(0x6ea979);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea97c:{NFSU2_TR(0x6ea97c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ea97d:{NFSU2_TR(0x6ea97d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6ea97f:{NFSU2_TR(0x6ea97f);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ea983:{NFSU2_TR(0x6ea983);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ea987:{NFSU2_TR(0x6ea987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ea98cull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6ea98c:L6ea98c:{c.instructions+=4;NFSU2_TR(0x6ea98c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea990:{NFSU2_TR(0x6ea990);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ea993:{NFSU2_TR(0x6ea993);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6ea996:{NFSU2_TR(0x6ea996);
if(r1(R+518)){{goto L6eaa2d;}}
}
B6ea99c:L6ea99c:{c.instructions+=3;NFSU2_TR(0x6ea99c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6ea99d:{NFSU2_TR(0x6ea99d);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ea9a1:{NFSU2_TR(0x6ea9a1);
if(r1(R+518)){{goto L6eaa03;}}
}
B6ea9a3:L6ea9a3:{c.instructions+=29;NFSU2_TR(0x6ea9a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ea9aa:{NFSU2_TR(0x6ea9aa);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9ae:{NFSU2_TR(0x6ea9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ea9b1:{NFSU2_TR(0x6ea9b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ea9b4:{NFSU2_TR(0x6ea9b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ea9b8:{NFSU2_TR(0x6ea9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ea9bb:{NFSU2_TR(0x6ea9bb);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9be:{NFSU2_TR(0x6ea9be);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6ea9c0:{NFSU2_TR(0x6ea9c0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9c4:{NFSU2_TR(0x6ea9c4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9c7:{NFSU2_TR(0x6ea9c7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6ea9c9:{NFSU2_TR(0x6ea9c9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea9cb:{NFSU2_TR(0x6ea9cb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9cf:{NFSU2_TR(0x6ea9cf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9d1:{NFSU2_TR(0x6ea9d1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9d5:{NFSU2_TR(0x6ea9d5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9d8:{NFSU2_TR(0x6ea9d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ea9da:{NFSU2_TR(0x6ea9da);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea9dd:{NFSU2_TR(0x6ea9dd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9e1:{NFSU2_TR(0x6ea9e1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9e4:{NFSU2_TR(0x6ea9e4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9e8:{NFSU2_TR(0x6ea9e8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9eb:{NFSU2_TR(0x6ea9eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ea9ed:{NFSU2_TR(0x6ea9ed);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ea9f0:{NFSU2_TR(0x6ea9f0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9f4:{NFSU2_TR(0x6ea9f4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9f7:{NFSU2_TR(0x6ea9f7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ea9fb:{NFSU2_TR(0x6ea9fb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ea9fe:{NFSU2_TR(0x6ea9fe);
{goto L6eaa8b;}
}
B6eaa03:L6eaa03:{c.instructions+=10;NFSU2_TR(0x6eaa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eaa06:{NFSU2_TR(0x6eaa06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6eaa09:{NFSU2_TR(0x6eaa09);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaa10:{NFSU2_TR(0x6eaa10);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6eaa13:{NFSU2_TR(0x6eaa13);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eaa17:{NFSU2_TR(0x6eaa17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaa1a:{NFSU2_TR(0x6eaa1a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eaa1c:{NFSU2_TR(0x6eaa1c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6eaa1e:{NFSU2_TR(0x6eaa1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eaa22:{NFSU2_TR(0x6eaa22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eaa27ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea470u);}goto L6ea470;}
}
B6eaa27:L6eaa27:{c.instructions+=2;NFSU2_TR(0x6eaa27);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eaa2b:{NFSU2_TR(0x6eaa2b);
{goto L6eaa90;}
}
B6eaa2d:L6eaa2d:{c.instructions+=29;NFSU2_TR(0x6eaa2d);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eaa31:{NFSU2_TR(0x6eaa31);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa35:{NFSU2_TR(0x6eaa35);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eaa3c:{NFSU2_TR(0x6eaa3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eaa3f:{NFSU2_TR(0x6eaa3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaa42:{NFSU2_TR(0x6eaa42);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6eaa45:{NFSU2_TR(0x6eaa45);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eaa47:{NFSU2_TR(0x6eaa47);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eaa4b:{NFSU2_TR(0x6eaa4b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa4d:{NFSU2_TR(0x6eaa4d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa51:{NFSU2_TR(0x6eaa51);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa54:{NFSU2_TR(0x6eaa54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eaa56:{NFSU2_TR(0x6eaa56);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eaa58:{NFSU2_TR(0x6eaa58);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa5c:{NFSU2_TR(0x6eaa5c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa5f:{NFSU2_TR(0x6eaa5f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa63:{NFSU2_TR(0x6eaa63);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa66:{NFSU2_TR(0x6eaa66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eaa68:{NFSU2_TR(0x6eaa68);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eaa6b:{NFSU2_TR(0x6eaa6b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa6f:{NFSU2_TR(0x6eaa6f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa72:{NFSU2_TR(0x6eaa72);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa76:{NFSU2_TR(0x6eaa76);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa79:{NFSU2_TR(0x6eaa79);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eaa7b:{NFSU2_TR(0x6eaa7b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eaa7e:{NFSU2_TR(0x6eaa7e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa82:{NFSU2_TR(0x6eaa82);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa85:{NFSU2_TR(0x6eaa85);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaa89:{NFSU2_TR(0x6eaa89);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaa8b:L6eaa8b:{c.instructions+=2;NFSU2_TR(0x6eaa8b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eaa8d:{NFSU2_TR(0x6eaa8d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eaa90:L6eaa90:{c.instructions+=12;NFSU2_TR(0x6eaa90);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaa97:{NFSU2_TR(0x6eaa97);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eaa9b:{NFSU2_TR(0x6eaa9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6eaa9e:{NFSU2_TR(0x6eaa9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaaa5:{NFSU2_TR(0x6eaaa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaaa9:{NFSU2_TR(0x6eaaa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6eaaad:{NFSU2_TR(0x6eaaad);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6eaaae:{NFSU2_TR(0x6eaaae);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xeull))));
}
B6eaab1:{NFSU2_TR(0x6eaab1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6eaab4:{NFSU2_TR(0x6eaab4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eaab6:{NFSU2_TR(0x6eaab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaaba:{NFSU2_TR(0x6eaaba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea950u);}goto L6ea950;}}
}
B6eaac0:L6eaac0:{c.instructions+=7;NFSU2_TR(0x6eaac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eaac1:{NFSU2_TR(0x6eaac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eaac2:{NFSU2_TR(0x6eaac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eaac3:{NFSU2_TR(0x6eaac3);
w1(R+0,u8(0x1ull));
}
B6eaac5:{NFSU2_TR(0x6eaac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eaac6:{NFSU2_TR(0x6eaac6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eaac9:{NFSU2_TR(0x6eaac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eaacc:L6eaacc:{c.instructions+=10;NFSU2_TR(0x6eaacc);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6eaad0:{NFSU2_TR(0x6eaad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eaad4:{NFSU2_TR(0x6eaad4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6eaad7:{NFSU2_TR(0x6eaad7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6eaada:{NFSU2_TR(0x6eaada);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6eaadc:{NFSU2_TR(0x6eaadc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6eaade:{NFSU2_TR(0x6eaade);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6eaae0:{NFSU2_TR(0x6eaae0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6eaae2:{NFSU2_TR(0x6eaae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaae9:{NFSU2_TR(0x6eaae9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eae43;}}
}
B6eaaef:L6eaaef:{c.instructions+=1;NFSU2_TR(0x6eaaef);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaaf3:L6eaaf3:{c.instructions+=7;NFSU2_TR(0x6eaaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eaaf6:{NFSU2_TR(0x6eaaf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaafa:{NFSU2_TR(0x6eaafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eaafd:{NFSU2_TR(0x6eaafd);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eab01:{NFSU2_TR(0x6eab01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eab02:{NFSU2_TR(0x6eab02);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eab06:{NFSU2_TR(0x6eab06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eab0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea030u);}goto L6ea030;}
}
B6eab0b:L6eab0b:{c.instructions+=6;NFSU2_TR(0x6eab0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6eab0f:{NFSU2_TR(0x6eab0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eab10:{NFSU2_TR(0x6eab10);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eab14:{NFSU2_TR(0x6eab14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eab15:{NFSU2_TR(0x6eab15);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eab1c:{NFSU2_TR(0x6eab1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eab21ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea170u);}goto L6ea170;}
}
B6eab21:L6eab21:{c.instructions+=19;NFSU2_TR(0x6eab21);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eab25:{NFSU2_TR(0x6eab25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eab28:{NFSU2_TR(0x6eab28);
{u32 ea_=u32(r4(R+8)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eab2b:{NFSU2_TR(0x6eab2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eab32:{NFSU2_TR(0x6eab32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eab35:{NFSU2_TR(0x6eab35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eab36:{NFSU2_TR(0x6eab36);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eab3a:{NFSU2_TR(0x6eab3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eab3e:{NFSU2_TR(0x6eab3e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eab42:{NFSU2_TR(0x6eab42);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eab46:{NFSU2_TR(0x6eab46);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eab49:{NFSU2_TR(0x6eab49);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eab4d:{NFSU2_TR(0x6eab4d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eab51:{NFSU2_TR(0x6eab51);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eab54:{NFSU2_TR(0x6eab54);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eab58:{NFSU2_TR(0x6eab58);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eab5c:{NFSU2_TR(0x6eab5c);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eab5f:{NFSU2_TR(0x6eab5f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eab63:{NFSU2_TR(0x6eab63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eab68ull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6eab68:L6eab68:{c.instructions+=5;NFSU2_TR(0x6eab68);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eab6c:{NFSU2_TR(0x6eab6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6eab70:{NFSU2_TR(0x6eab70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6eab73:{NFSU2_TR(0x6eab73);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6eab76:{NFSU2_TR(0x6eab76);
if(r1(R+518)){{goto L6eac0d;}}
}
B6eab7c:L6eab7c:{c.instructions+=3;NFSU2_TR(0x6eab7c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6eab7d:{NFSU2_TR(0x6eab7d);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eab81:{NFSU2_TR(0x6eab81);
if(r1(R+518)){{goto L6eabe3;}}
}
B6eab83:L6eab83:{c.instructions+=29;NFSU2_TR(0x6eab83);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eab8a:{NFSU2_TR(0x6eab8a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eab8e:{NFSU2_TR(0x6eab8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eab91:{NFSU2_TR(0x6eab91);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eab94:{NFSU2_TR(0x6eab94);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eab98:{NFSU2_TR(0x6eab98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eab9b:{NFSU2_TR(0x6eab9b);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eab9e:{NFSU2_TR(0x6eab9e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eaba0:{NFSU2_TR(0x6eaba0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaba4:{NFSU2_TR(0x6eaba4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eaba7:{NFSU2_TR(0x6eaba7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eaba9:{NFSU2_TR(0x6eaba9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eabab:{NFSU2_TR(0x6eabab);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eabaf:{NFSU2_TR(0x6eabaf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eabb1:{NFSU2_TR(0x6eabb1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eabb5:{NFSU2_TR(0x6eabb5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eabb8:{NFSU2_TR(0x6eabb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eabba:{NFSU2_TR(0x6eabba);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eabbd:{NFSU2_TR(0x6eabbd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eabc1:{NFSU2_TR(0x6eabc1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eabc4:{NFSU2_TR(0x6eabc4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eabc8:{NFSU2_TR(0x6eabc8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eabcb:{NFSU2_TR(0x6eabcb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eabcd:{NFSU2_TR(0x6eabcd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eabd0:{NFSU2_TR(0x6eabd0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eabd4:{NFSU2_TR(0x6eabd4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eabd7:{NFSU2_TR(0x6eabd7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eabdb:{NFSU2_TR(0x6eabdb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eabde:{NFSU2_TR(0x6eabde);
{goto L6eac6b;}
}
B6eabe3:L6eabe3:{c.instructions+=10;NFSU2_TR(0x6eabe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eabe6:{NFSU2_TR(0x6eabe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6eabe9:{NFSU2_TR(0x6eabe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eabf0:{NFSU2_TR(0x6eabf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6eabf3:{NFSU2_TR(0x6eabf3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eabf7:{NFSU2_TR(0x6eabf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eabfa:{NFSU2_TR(0x6eabfa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eabfc:{NFSU2_TR(0x6eabfc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6eabfe:{NFSU2_TR(0x6eabfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eac02:{NFSU2_TR(0x6eac02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eac07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea470u);}goto L6ea470;}
}
B6eac07:L6eac07:{c.instructions+=2;NFSU2_TR(0x6eac07);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eac0b:{NFSU2_TR(0x6eac0b);
{goto L6eac70;}
}
B6eac0d:L6eac0d:{c.instructions+=29;NFSU2_TR(0x6eac0d);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eac11:{NFSU2_TR(0x6eac11);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac15:{NFSU2_TR(0x6eac15);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eac1c:{NFSU2_TR(0x6eac1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eac1f:{NFSU2_TR(0x6eac1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eac22:{NFSU2_TR(0x6eac22);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6eac25:{NFSU2_TR(0x6eac25);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eac27:{NFSU2_TR(0x6eac27);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eac2b:{NFSU2_TR(0x6eac2b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac2d:{NFSU2_TR(0x6eac2d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac31:{NFSU2_TR(0x6eac31);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac34:{NFSU2_TR(0x6eac34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eac36:{NFSU2_TR(0x6eac36);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eac38:{NFSU2_TR(0x6eac38);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac3c:{NFSU2_TR(0x6eac3c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac3f:{NFSU2_TR(0x6eac3f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac43:{NFSU2_TR(0x6eac43);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac46:{NFSU2_TR(0x6eac46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eac48:{NFSU2_TR(0x6eac48);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eac4b:{NFSU2_TR(0x6eac4b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac4f:{NFSU2_TR(0x6eac4f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac52:{NFSU2_TR(0x6eac52);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac56:{NFSU2_TR(0x6eac56);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac59:{NFSU2_TR(0x6eac59);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eac5b:{NFSU2_TR(0x6eac5b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eac5e:{NFSU2_TR(0x6eac5e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac62:{NFSU2_TR(0x6eac62);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac65:{NFSU2_TR(0x6eac65);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eac69:{NFSU2_TR(0x6eac69);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eac6b:L6eac6b:{c.instructions+=2;NFSU2_TR(0x6eac6b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eac6d:{NFSU2_TR(0x6eac6d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eac70:L6eac70:{c.instructions+=12;NFSU2_TR(0x6eac70);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eac77:{NFSU2_TR(0x6eac77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eac7b:{NFSU2_TR(0x6eac7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eac7f:{NFSU2_TR(0x6eac7f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6eac80:{NFSU2_TR(0x6eac80);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eac87:{NFSU2_TR(0x6eac87);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6eac8b:{NFSU2_TR(0x6eac8b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6eac8c:{NFSU2_TR(0x6eac8c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xeull))));
}
B6eac8f:{NFSU2_TR(0x6eac8f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6eac92:{NFSU2_TR(0x6eac92);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6eac94:{NFSU2_TR(0x6eac94);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eac98:{NFSU2_TR(0x6eac98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eaaf3u);}goto L6eaaf3;}}
}
B6eac9e:L6eac9e:{c.instructions+=7;NFSU2_TR(0x6eac9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eac9f:{NFSU2_TR(0x6eac9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eaca0:{NFSU2_TR(0x6eaca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eaca1:{NFSU2_TR(0x6eaca1);
w1(R+0,u8(0x1ull));
}
B6eaca3:{NFSU2_TR(0x6eaca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eaca4:{NFSU2_TR(0x6eaca4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eaca7:{NFSU2_TR(0x6eaca7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eacaa:L6eacaa:{c.instructions+=1;NFSU2_TR(0x6eacaa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6eacac:L6eacac:{c.instructions+=5;NFSU2_TR(0x6eacac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eacb0:{NFSU2_TR(0x6eacb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6eacb3:{NFSU2_TR(0x6eacb3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6eacb5:{NFSU2_TR(0x6eacb5);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eacb7:{NFSU2_TR(0x6eacb7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6eae43;}}
}
B6eacbd:L6eacbd:{c.instructions+=3;NFSU2_TR(0x6eacbd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6eacbf:{NFSU2_TR(0x6eacbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eacc6:{NFSU2_TR(0x6eacc6);
{goto L6eacd0;}
}
B6eacc8:L6eacc8:{c.instructions+=2;NFSU2_TR(0x6eacc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eaccc:{NFSU2_TR(0x6eaccc);
__builtin_memmove((R+16),(R+16),4);
}
B6eacd0:L6eacd0:{c.instructions+=6;NFSU2_TR(0x6eacd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eacd7:{NFSU2_TR(0x6eacd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eacda:{NFSU2_TR(0x6eacda);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6eacdf:{NFSU2_TR(0x6eacdf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6eace2:{NFSU2_TR(0x6eace2);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eace9:{NFSU2_TR(0x6eace9);
if(r1(R+518)){{goto L6eadc9;}}
}
B6eacef:L6eacef:{c.instructions+=4;NFSU2_TR(0x6eacef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6eacf0:{NFSU2_TR(0x6eacf0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eacf4:{NFSU2_TR(0x6eacf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eacf7:{NFSU2_TR(0x6eacf7);
if(r1(R+518)){{goto L6ead4c;}}
}
B6eacf9:L6eacf9:{c.instructions+=29;NFSU2_TR(0x6eacf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eacfc:{NFSU2_TR(0x6eacfc);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6ead00:{NFSU2_TR(0x6ead00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ead03:{NFSU2_TR(0x6ead03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ead06:{NFSU2_TR(0x6ead06);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead09:{NFSU2_TR(0x6ead09);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ead0b:{NFSU2_TR(0x6ead0b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead0e:{NFSU2_TR(0x6ead0e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6ead10:{NFSU2_TR(0x6ead10);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead13:{NFSU2_TR(0x6ead13);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead16:{NFSU2_TR(0x6ead16);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6ead18:{NFSU2_TR(0x6ead18);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ead1a:{NFSU2_TR(0x6ead1a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead1c:{NFSU2_TR(0x6ead1c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead1f:{NFSU2_TR(0x6ead1f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead22:{NFSU2_TR(0x6ead22);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead25:{NFSU2_TR(0x6ead25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ead27:{NFSU2_TR(0x6ead27);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ead2a:{NFSU2_TR(0x6ead2a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead2d:{NFSU2_TR(0x6ead2d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead30:{NFSU2_TR(0x6ead30);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead33:{NFSU2_TR(0x6ead33);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead36:{NFSU2_TR(0x6ead36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ead38:{NFSU2_TR(0x6ead38);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ead3b:{NFSU2_TR(0x6ead3b);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead3e:{NFSU2_TR(0x6ead3e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead41:{NFSU2_TR(0x6ead41);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead44:{NFSU2_TR(0x6ead44);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead47:{NFSU2_TR(0x6ead47);
{goto L6eae19;}
}
B6ead4c:L6ead4c:{c.instructions+=43;NFSU2_TR(0x6ead4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ead4f:{NFSU2_TR(0x6ead4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ead52:{NFSU2_TR(0x6ead52);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6ead56:{NFSU2_TR(0x6ead56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ead59:{NFSU2_TR(0x6ead59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ead5c:{NFSU2_TR(0x6ead5c);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead60:{NFSU2_TR(0x6ead60);
{u32 ea_=u32(r4(R+8)+r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead63:{NFSU2_TR(0x6ead63);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ead65:{NFSU2_TR(0x6ead65);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead69:{NFSU2_TR(0x6ead69);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6ead6b:{NFSU2_TR(0x6ead6b);
{u32 ea_=u32(r4(R+8)+r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead6f:{NFSU2_TR(0x6ead6f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6ead71:{NFSU2_TR(0x6ead71);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead74:{NFSU2_TR(0x6ead74);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead76:{NFSU2_TR(0x6ead76);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6ead78:{NFSU2_TR(0x6ead78);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ead7c:{NFSU2_TR(0x6ead7c);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ead7f:{NFSU2_TR(0x6ead7f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead82:{NFSU2_TR(0x6ead82);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ead86:{NFSU2_TR(0x6ead86);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ead88:{NFSU2_TR(0x6ead88);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead8b:{NFSU2_TR(0x6ead8b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ead8d:{NFSU2_TR(0x6ead8d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead90:{NFSU2_TR(0x6ead90);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6ead92:{NFSU2_TR(0x6ead92);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ead94:{NFSU2_TR(0x6ead94);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead97:{NFSU2_TR(0x6ead97);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ead99:{NFSU2_TR(0x6ead99);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ead9c:{NFSU2_TR(0x6ead9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ead9e:{NFSU2_TR(0x6ead9e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eada1:{NFSU2_TR(0x6eada1);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eada5:{NFSU2_TR(0x6eada5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eada8:{NFSU2_TR(0x6eada8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eadac:{NFSU2_TR(0x6eadac);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eadaf:{NFSU2_TR(0x6eadaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eadb1:{NFSU2_TR(0x6eadb1);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eadb4:{NFSU2_TR(0x6eadb4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eadb8:{NFSU2_TR(0x6eadb8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eadbb:{NFSU2_TR(0x6eadbb);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eadbf:{NFSU2_TR(0x6eadbf);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eadc2:{NFSU2_TR(0x6eadc2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eadc4:{NFSU2_TR(0x6eadc4);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eadc7:{NFSU2_TR(0x6eadc7);
{goto L6eae1e;}
}
B6eadc9:L6eadc9:{c.instructions+=30;NFSU2_TR(0x6eadc9);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eadcd:{NFSU2_TR(0x6eadcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eadd0:{NFSU2_TR(0x6eadd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eadd3:{NFSU2_TR(0x6eadd3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6eadd7:{NFSU2_TR(0x6eadd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eadda:{NFSU2_TR(0x6eadda);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eaddd:{NFSU2_TR(0x6eaddd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6eaddf:{NFSU2_TR(0x6eaddf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6eade1:{NFSU2_TR(0x6eade1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eade3:{NFSU2_TR(0x6eade3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eade6:{NFSU2_TR(0x6eade6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eade9:{NFSU2_TR(0x6eade9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eadeb:{NFSU2_TR(0x6eadeb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eaded:{NFSU2_TR(0x6eaded);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eadef:{NFSU2_TR(0x6eadef);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eadf2:{NFSU2_TR(0x6eadf2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eadf5:{NFSU2_TR(0x6eadf5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eadf7:{NFSU2_TR(0x6eadf7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eadfa:{NFSU2_TR(0x6eadfa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eadfc:{NFSU2_TR(0x6eadfc);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eadff:{NFSU2_TR(0x6eadff);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eae02:{NFSU2_TR(0x6eae02);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eae05:{NFSU2_TR(0x6eae05);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eae07:{NFSU2_TR(0x6eae07);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eae0a:{NFSU2_TR(0x6eae0a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eae0c:{NFSU2_TR(0x6eae0c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eae0f:{NFSU2_TR(0x6eae0f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eae12:{NFSU2_TR(0x6eae12);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eae15:{NFSU2_TR(0x6eae15);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eae17:{NFSU2_TR(0x6eae17);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eae19:L6eae19:{c.instructions+=2;NFSU2_TR(0x6eae19);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eae1b:{NFSU2_TR(0x6eae1b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eae1e:L6eae1e:{c.instructions+=9;NFSU2_TR(0x6eae1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eae22:{NFSU2_TR(0x6eae22);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eae29:{NFSU2_TR(0x6eae29);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6eae2d:{NFSU2_TR(0x6eae2d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6eae2e:{NFSU2_TR(0x6eae2e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xeull))));
}
B6eae31:{NFSU2_TR(0x6eae31);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6eae34:{NFSU2_TR(0x6eae34);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eae36:{NFSU2_TR(0x6eae36);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eae3d:{NFSU2_TR(0x6eae3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eacc8u);}goto L6eacc8;}}
}
B6eae43:L6eae43:{c.instructions+=7;NFSU2_TR(0x6eae43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eae44:{NFSU2_TR(0x6eae44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eae45:{NFSU2_TR(0x6eae45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eae46:{NFSU2_TR(0x6eae46);
w1(R+0,u8(0x1ull));
}
B6eae48:{NFSU2_TR(0x6eae48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eae49:{NFSU2_TR(0x6eae49);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eae4c:{NFSU2_TR(0x6eae4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eae50:L6eae50:{c.instructions+=7;NFSU2_TR(0x6eae50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x70ull))));
}
B6eae53:{NFSU2_TR(0x6eae53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eae54:{NFSU2_TR(0x6eae54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eae55:{NFSU2_TR(0x6eae55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eae56:{NFSU2_TR(0x6eae56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eae57:{NFSU2_TR(0x6eae57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eae5b:{NFSU2_TR(0x6eae5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eae60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea260u);}goto L6ea260;}
}
B6eae60:L6eae60:{c.instructions+=9;NFSU2_TR(0x6eae60);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eae67:{NFSU2_TR(0x6eae67);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6eae6d:{NFSU2_TR(0x6eae6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eae71:{NFSU2_TR(0x6eae71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eae74:{NFSU2_TR(0x6eae74);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eae7b:{NFSU2_TR(0x6eae7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eae7f:{NFSU2_TR(0x6eae7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eae81:{NFSU2_TR(0x6eae81);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eae84:{NFSU2_TR(0x6eae84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eae9a;}}
}
B6eae86:L6eae86:{c.instructions+=5;NFSU2_TR(0x6eae86);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eae8c:{NFSU2_TR(0x6eae8c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eae90:{NFSU2_TR(0x6eae90);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eae94:{NFSU2_TR(0x6eae94);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6eae98:{NFSU2_TR(0x6eae98);
{goto L6eaeac;}
}
B6eae9a:L6eae9a:{c.instructions+=4;NFSU2_TR(0x6eae9a);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eaea0:{NFSU2_TR(0x6eaea0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eaea4:{NFSU2_TR(0x6eaea4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eaea8:{NFSU2_TR(0x6eaea8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6eaeac:L6eaeac:{c.instructions+=5;NFSU2_TR(0x6eaeac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eaeaf:{NFSU2_TR(0x6eaeaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eaeb1:{NFSU2_TR(0x6eaeb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6eaeb5:{NFSU2_TR(0x6eaeb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaeb9:{NFSU2_TR(0x6eaeb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eaed0;}}
}
B6eaebb:L6eaebb:{c.instructions+=2;NFSU2_TR(0x6eaebb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6eaebd:{NFSU2_TR(0x6eaebd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eaec3;}}
}
B6eaebf:L6eaebf:{c.instructions+=2;NFSU2_TR(0x6eaebf);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6eaec1:{NFSU2_TR(0x6eaec1);
{goto L6eaf32;}
}
B6eaec3:L6eaec3:{c.instructions+=3;NFSU2_TR(0x6eaec3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6eaec7:{NFSU2_TR(0x6eaec7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eaec9:{NFSU2_TR(0x6eaec9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6eaf32;}}
}
B6eaecb:L6eaecb:{c.instructions+=2;NFSU2_TR(0x6eaecb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eaece:{NFSU2_TR(0x6eaece);
{goto L6eaf32;}
}
B6eaed0:L6eaed0:{c.instructions+=3;NFSU2_TR(0x6eaed0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6eaed3:{NFSU2_TR(0x6eaed3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eaed5:{NFSU2_TR(0x6eaed5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eaedb;}}
}
B6eaed7:L6eaed7:{c.instructions+=2;NFSU2_TR(0x6eaed7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6eaed9:{NFSU2_TR(0x6eaed9);
{goto L6eaf32;}
}
B6eaedb:L6eaedb:{c.instructions+=4;NFSU2_TR(0x6eaedb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaedf:{NFSU2_TR(0x6eaedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaee2:{NFSU2_TR(0x6eaee2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eaee5:{NFSU2_TR(0x6eaee5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eaeeb;}}
}
B6eaee7:L6eaee7:{c.instructions+=2;NFSU2_TR(0x6eaee7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6eaee9:{NFSU2_TR(0x6eaee9);
{goto L6eaeec;}
}
B6eaeeb:L6eaeeb:{c.instructions+=1;NFSU2_TR(0x6eaeeb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6eaeec:L6eaeec:{c.instructions+=4;NFSU2_TR(0x6eaeec);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6eaef0:{NFSU2_TR(0x6eaef0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eaef2:{NFSU2_TR(0x6eaef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eaef5:{NFSU2_TR(0x6eaef5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6eaf16;}}
}
B6eaef7:L6eaef7:{c.instructions+=4;NFSU2_TR(0x6eaef7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eaefb:{NFSU2_TR(0x6eaefb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
}
B6eaefe:{NFSU2_TR(0x6eaefe);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eaf00:{NFSU2_TR(0x6eaf00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eaf2f;}}
}
B6eaf02:L6eaf02:{c.instructions+=1;NFSU2_TR(0x6eaf02);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6eaf05:L6eaf05:{c.instructions+=3;NFSU2_TR(0x6eaf05);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6eaf08:{NFSU2_TR(0x6eaf08);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eaf0a:{NFSU2_TR(0x6eaf0a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6eaf2f;}}
}
B6eaf0c:L6eaf0c:{c.instructions+=4;NFSU2_TR(0x6eaf0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6eaf0d:{NFSU2_TR(0x6eaf0d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6eaf10:{NFSU2_TR(0x6eaf10);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eaf12:{NFSU2_TR(0x6eaf12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eaf05u);}goto L6eaf05;}}
}
B6eaf14:L6eaf14:{c.instructions+=1;NFSU2_TR(0x6eaf14);
{goto L6eaf2f;}
}
B6eaf16:L6eaf16:{c.instructions+=2;NFSU2_TR(0x6eaf16);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eaf18:{NFSU2_TR(0x6eaf18);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eaf2f;}}
}
B6eaf1a:L6eaf1a:{c.instructions+=1;NFSU2_TR(0x6eaf1a);
__builtin_memmove((R+12),(R+12),4);
}
B6eaf20:L6eaf20:{c.instructions+=3;NFSU2_TR(0x6eaf20);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6eaf23:{NFSU2_TR(0x6eaf23);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eaf25:{NFSU2_TR(0x6eaf25);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eaf2f;}}
}
B6eaf27:L6eaf27:{c.instructions+=4;NFSU2_TR(0x6eaf27);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6eaf28:{NFSU2_TR(0x6eaf28);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6eaf2b:{NFSU2_TR(0x6eaf2b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eaf2d:{NFSU2_TR(0x6eaf2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eaf20u);}goto L6eaf20;}}
}
B6eaf2f:L6eaf2f:{c.instructions+=1;NFSU2_TR(0x6eaf2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eaf32:L6eaf32:{c.instructions+=24;NFSU2_TR(0x6eaf32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eaf36:{NFSU2_TR(0x6eaf36);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6eaf3a:{NFSU2_TR(0x6eaf3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eaf3d:{NFSU2_TR(0x6eaf3d);
w4(R+4,u32(0x1full));
}
B6eaf42:{NFSU2_TR(0x6eaf42);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6eaf44:{NFSU2_TR(0x6eaf44);
w4(R+8,u32(0x7fffffffull));
}
B6eaf49:{NFSU2_TR(0x6eaf49);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B6eaf4b:{NFSU2_TR(0x6eaf4b);
__builtin_memmove((R+4),(R+12),4);
}
B6eaf4d:{NFSU2_TR(0x6eaf4d);
__builtin_memmove((R+0),(R+20),4);
}
B6eaf4f:{NFSU2_TR(0x6eaf4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6eaf51:{NFSU2_TR(0x6eaf51);
__builtin_memmove((R+4),(R+8),4);
}
B6eaf53:{NFSU2_TR(0x6eaf53);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+20))));
}
B6eaf55:{NFSU2_TR(0x6eaf55);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaf59:{NFSU2_TR(0x6eaf59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eaf5d:{NFSU2_TR(0x6eaf5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eaf60:{NFSU2_TR(0x6eaf60);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6eaf63:{NFSU2_TR(0x6eaf63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6eaf66:{NFSU2_TR(0x6eaf66);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaf6a:{NFSU2_TR(0x6eaf6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eaf6d:{NFSU2_TR(0x6eaf6d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eaf70:{NFSU2_TR(0x6eaf70);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaf74:{NFSU2_TR(0x6eaf74);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaf78:{NFSU2_TR(0x6eaf78);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaf7c:{NFSU2_TR(0x6eaf7c);
if(r1(R+518)){{goto L6eaf98;}}
}
B6eaf7e:L6eaf7e:{c.instructions+=7;NFSU2_TR(0x6eaf7e);
__builtin_memmove((R+4),(R+28),4);
}
B6eaf80:{NFSU2_TR(0x6eaf80);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eaf84:{NFSU2_TR(0x6eaf84);
__builtin_memmove((R+4),(R+12),4);
}
B6eaf86:{NFSU2_TR(0x6eaf86);
__builtin_memmove((R+12),(R+28),4);
}
B6eaf88:{NFSU2_TR(0x6eaf88);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B6eaf8a:{NFSU2_TR(0x6eaf8a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eaf8c:{NFSU2_TR(0x6eaf8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eaf98;}}
}
B6eaf8e:L6eaf8e:{c.instructions+=2;NFSU2_TR(0x6eaf8e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eaf90:{NFSU2_TR(0x6eaf90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6eaf98;}}
}
B6eaf92:L6eaf92:{c.instructions+=3;NFSU2_TR(0x6eaf92);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B6eaf94:{NFSU2_TR(0x6eaf94);
__builtin_memmove((R+4),(R+28),4);
}
B6eaf96:{NFSU2_TR(0x6eaf96);
TAIL_STATIC(0x6eb009u,6eb);
}
B6eaf98:L6eaf98:{c.instructions+=5;NFSU2_TR(0x6eaf98);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eaf9c:{NFSU2_TR(0x6eaf9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6eaf9f:{NFSU2_TR(0x6eaf9f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6eafa1:{NFSU2_TR(0x6eafa1);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eafa3:{NFSU2_TR(0x6eafa3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6eb007u,6eb);}
}
B6eafa5:L6eafa5:{c.instructions+=14;NFSU2_TR(0x6eafa5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6eafa7:{NFSU2_TR(0x6eafa7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6eafa9:{NFSU2_TR(0x6eafa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eafad:{NFSU2_TR(0x6eafad);
__builtin_memmove((R+4),(R+4),4);
}
B6eafb0:{NFSU2_TR(0x6eafb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eafb4:{NFSU2_TR(0x6eafb4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eafb8:{NFSU2_TR(0x6eafb8);
__builtin_memmove((R+4),(R+0),4);
}
B6eafba:{NFSU2_TR(0x6eafba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6eafbd:{NFSU2_TR(0x6eafbd);
w4(R+8,u32(0x1ull));
}
B6eafc2:{NFSU2_TR(0x6eafc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6eafc4:{NFSU2_TR(0x6eafc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eafcb:{NFSU2_TR(0x6eafcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6eafce:{NFSU2_TR(0x6eafce);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6eafd1:{NFSU2_TR(0x6eafd1);
if(r1(R+518)){{goto L6eafef;}}
}
B6eafd3:L6eafd3:{c.instructions+=9;NFSU2_TR(0x6eafd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eafd7:{NFSU2_TR(0x6eafd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eafda:{NFSU2_TR(0x6eafda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eafdd:{NFSU2_TR(0x6eafdd);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6eafe2:{NFSU2_TR(0x6eafe2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6eafe4:{NFSU2_TR(0x6eafe4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eafe5:{NFSU2_TR(0x6eafe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eafe6:{NFSU2_TR(0x6eafe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eafea:{NFSU2_TR(0x6eafea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eafefull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ea0e0u);}goto L6ea0e0;}
}
B6eafef:L6eafef:{c.instructions+=5;NFSU2_TR(0x6eafef);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6eaff4:{NFSU2_TR(0x6eaff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eaff8:{NFSU2_TR(0x6eaff8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6eaffc:{NFSU2_TR(0x6eaffc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6eaffd:{NFSU2_TR(0x6eaffd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
TAIL_STATIC(0x6eb000u,6eb);
}
XIT:NFSU2_TR_EXIT(0x6ea,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
