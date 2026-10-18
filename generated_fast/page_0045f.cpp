#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_460(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x45f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x45f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_45f(u8* __restrict R,Cpu& c);
u32 page_45f(Cpu& c){return body_45f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_45f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x45f000:goto L45f000;
case 0x45f001:c.instructions+=2;goto B45f001;
case 0x45f002:c.instructions+=1;goto B45f002;
case 0x45f003:goto L45f003;
case 0x45f005:c.instructions+=3;goto B45f005;
case 0x45f007:c.instructions+=2;goto B45f007;
case 0x45f00f:c.instructions+=1;goto B45f00f;
case 0x45f011:goto L45f011;
case 0x45f015:c.instructions+=2;goto B45f015;
case 0x45f016:c.instructions+=1;goto B45f016;
case 0x45f01b:goto L45f01b;
case 0x45f020:c.instructions+=1;goto B45f020;
case 0x45f022:goto L45f022;
case 0x45f028:c.instructions+=4;goto B45f028;
case 0x45f02e:c.instructions+=3;goto B45f02e;
case 0x45f030:c.instructions+=2;goto B45f030;
case 0x45f033:c.instructions+=1;goto B45f033;
case 0x45f035:goto L45f035;
case 0x45f037:c.instructions+=3;goto B45f037;
case 0x45f038:c.instructions+=2;goto B45f038;
case 0x45f039:c.instructions+=1;goto B45f039;
case 0x45f03a:goto L45f03a;
case 0x45f03f:c.instructions+=3;goto B45f03f;
case 0x45f040:c.instructions+=2;goto B45f040;
case 0x45f041:c.instructions+=1;goto B45f041;
case 0x45f050:goto L45f050;
case 0x45f051:c.instructions+=6;goto B45f051;
case 0x45f052:c.instructions+=5;goto B45f052;
case 0x45f053:c.instructions+=4;goto B45f053;
case 0x45f055:c.instructions+=3;goto B45f055;
case 0x45f05b:c.instructions+=2;goto B45f05b;
case 0x45f05d:c.instructions+=1;goto B45f05d;
case 0x45f05f:goto L45f05f;
case 0x45f061:c.instructions+=2;goto B45f061;
case 0x45f063:c.instructions+=1;goto B45f063;
case 0x45f065:goto L45f065;
case 0x45f06a:goto L45f06a;
case 0x45f06e:c.instructions+=2;goto B45f06e;
case 0x45f06f:c.instructions+=1;goto B45f06f;
case 0x45f074:goto L45f074;
case 0x45f077:c.instructions+=1;goto B45f077;
case 0x45f07c:goto L45f07c;
case 0x45f080:c.instructions+=4;goto B45f080;
case 0x45f082:c.instructions+=3;goto B45f082;
case 0x45f084:c.instructions+=2;goto B45f084;
case 0x45f085:c.instructions+=1;goto B45f085;
case 0x45f088:goto L45f088;
case 0x45f08d:goto L45f08d;
case 0x45f097:goto L45f097;
case 0x45f098:c.instructions+=3;goto B45f098;
case 0x45f099:c.instructions+=2;goto B45f099;
case 0x45f09a:c.instructions+=1;goto B45f09a;
case 0x45f0a0:goto L45f0a0;
case 0x45f0a6:c.instructions+=10;goto B45f0a6;
case 0x45f0a8:c.instructions+=9;goto B45f0a8;
case 0x45f0ad:c.instructions+=8;goto B45f0ad;
case 0x45f0ae:c.instructions+=7;goto B45f0ae;
case 0x45f0b3:c.instructions+=6;goto B45f0b3;
case 0x45f0ba:c.instructions+=5;goto B45f0ba;
case 0x45f0bd:c.instructions+=4;goto B45f0bd;
case 0x45f0c0:c.instructions+=3;goto B45f0c0;
case 0x45f0c1:c.instructions+=2;goto B45f0c1;
case 0x45f0c3:c.instructions+=1;goto B45f0c3;
case 0x45f0c9:goto L45f0c9;
case 0x45f0cb:c.instructions+=6;goto B45f0cb;
case 0x45f0cc:c.instructions+=5;goto B45f0cc;
case 0x45f0cd:c.instructions+=4;goto B45f0cd;
case 0x45f0ce:c.instructions+=3;goto B45f0ce;
case 0x45f0d0:c.instructions+=2;goto B45f0d0;
case 0x45f0d1:c.instructions+=1;goto B45f0d1;
case 0x45f0d4:goto L45f0d4;
case 0x45f0d9:c.instructions+=6;goto B45f0d9;
case 0x45f0e3:c.instructions+=5;goto B45f0e3;
case 0x45f0e9:c.instructions+=4;goto B45f0e9;
case 0x45f0ec:c.instructions+=3;goto B45f0ec;
case 0x45f0ee:c.instructions+=2;goto B45f0ee;
case 0x45f0f0:c.instructions+=1;goto B45f0f0;
case 0x45f0f2:goto L45f0f2;
case 0x45f0f4:c.instructions+=2;goto B45f0f4;
case 0x45f0f6:c.instructions+=1;goto B45f0f6;
case 0x45f0f8:goto L45f0f8;
case 0x45f0fd:goto L45f0fd;
case 0x45f101:c.instructions+=2;goto B45f101;
case 0x45f102:c.instructions+=1;goto B45f102;
case 0x45f107:goto L45f107;
case 0x45f10a:c.instructions+=1;goto B45f10a;
case 0x45f10f:goto L45f10f;
case 0x45f113:c.instructions+=4;goto B45f113;
case 0x45f115:c.instructions+=3;goto B45f115;
case 0x45f116:c.instructions+=2;goto B45f116;
case 0x45f117:c.instructions+=1;goto B45f117;
case 0x45f11a:goto L45f11a;
case 0x45f11f:goto L45f11f;
case 0x45f123:c.instructions+=3;goto B45f123;
case 0x45f124:c.instructions+=2;goto B45f124;
case 0x45f12a:c.instructions+=1;goto B45f12a;
case 0x45f12f:goto L45f12f;
case 0x45f132:c.instructions+=1;goto B45f132;
case 0x45f137:goto L45f137;
case 0x45f13b:c.instructions+=8;goto B45f13b;
case 0x45f13f:c.instructions+=7;goto B45f13f;
case 0x45f140:c.instructions+=6;goto B45f140;
case 0x45f144:c.instructions+=5;goto B45f144;
case 0x45f148:c.instructions+=4;goto B45f148;
case 0x45f14c:c.instructions+=3;goto B45f14c;
case 0x45f14e:c.instructions+=2;goto B45f14e;
case 0x45f150:c.instructions+=1;goto B45f150;
case 0x45f152:goto L45f152;
case 0x45f154:c.instructions+=1;goto B45f154;
case 0x45f159:goto L45f159;
case 0x45f15d:c.instructions+=3;goto B45f15d;
case 0x45f15f:c.instructions+=2;goto B45f15f;
case 0x45f163:c.instructions+=1;goto B45f163;
case 0x45f165:goto L45f165;
case 0x45f16b:c.instructions+=2;goto B45f16b;
case 0x45f16e:c.instructions+=1;goto B45f16e;
case 0x45f173:goto L45f173;
case 0x45f177:c.instructions+=6;goto B45f177;
case 0x45f178:c.instructions+=5;goto B45f178;
case 0x45f17a:c.instructions+=4;goto B45f17a;
case 0x45f17b:c.instructions+=3;goto B45f17b;
case 0x45f17c:c.instructions+=2;goto B45f17c;
case 0x45f17e:c.instructions+=1;goto B45f17e;
case 0x45f181:goto L45f181;
case 0x45f185:c.instructions+=7;goto B45f185;
case 0x45f189:c.instructions+=6;goto B45f189;
case 0x45f18a:c.instructions+=5;goto B45f18a;
case 0x45f18b:c.instructions+=4;goto B45f18b;
case 0x45f18c:c.instructions+=3;goto B45f18c;
case 0x45f18d:c.instructions+=2;goto B45f18d;
case 0x45f18f:c.instructions+=1;goto B45f18f;
case 0x45f194:goto L45f194;
case 0x45f196:goto L45f196;
case 0x45f198:goto L45f198;
case 0x45f19e:c.instructions+=6;goto B45f19e;
case 0x45f1a3:c.instructions+=5;goto B45f1a3;
case 0x45f1a4:c.instructions+=4;goto B45f1a4;
case 0x45f1a5:c.instructions+=3;goto B45f1a5;
case 0x45f1a6:c.instructions+=2;goto B45f1a6;
case 0x45f1ab:c.instructions+=1;goto B45f1ab;
case 0x45f1ac:goto L45f1ac;
case 0x45f1b0:c.instructions+=5;goto B45f1b0;
case 0x45f1b2:c.instructions+=4;goto B45f1b2;
case 0x45f1b3:c.instructions+=3;goto B45f1b3;
case 0x45f1ba:c.instructions+=2;goto B45f1ba;
case 0x45f1bd:c.instructions+=1;goto B45f1bd;
case 0x45f1c0:goto L45f1c0;
case 0x45f1c5:c.instructions+=1;goto B45f1c5;
case 0x45f1d0:goto L45f1d0;
case 0x45f1d5:c.instructions+=1;goto B45f1d5;
case 0x45f1e0:goto L45f1e0;
case 0x45f1e4:c.instructions+=2;goto B45f1e4;
case 0x45f1e7:c.instructions+=1;goto B45f1e7;
case 0x45f1e9:goto L45f1e9;
case 0x45f1ea:c.instructions+=1;goto B45f1ea;
case 0x45f1ec:goto L45f1ec;
case 0x45f1ef:c.instructions+=1;goto B45f1ef;
case 0x45f1f2:goto L45f1f2;
case 0x45f1f7:c.instructions+=1;goto B45f1f7;
case 0x45f1fa:goto L45f1fa;
case 0x45f1ff:c.instructions+=1;goto B45f1ff;
case 0x45f210:goto L45f210;
case 0x45f211:c.instructions+=7;goto B45f211;
case 0x45f212:c.instructions+=6;goto B45f212;
case 0x45f214:c.instructions+=5;goto B45f214;
case 0x45f218:c.instructions+=4;goto B45f218;
case 0x45f21b:c.instructions+=3;goto B45f21b;
case 0x45f21d:c.instructions+=2;goto B45f21d;
case 0x45f220:c.instructions+=1;goto B45f220;
case 0x45f222:goto L45f222;
case 0x45f225:c.instructions+=1;goto B45f225;
case 0x45f227:goto L45f227;
case 0x45f22d:c.instructions+=1;goto B45f22d;
case 0x45f22f:goto L45f22f;
case 0x45f235:goto L45f235;
case 0x45f238:c.instructions+=4;goto B45f238;
case 0x45f23e:c.instructions+=3;goto B45f23e;
case 0x45f245:c.instructions+=2;goto B45f245;
case 0x45f247:c.instructions+=1;goto B45f247;
case 0x45f24a:goto L45f24a;
case 0x45f24c:c.instructions+=1;goto B45f24c;
case 0x45f24e:goto L45f24e;
case 0x45f250:c.instructions+=2;goto B45f250;
case 0x45f256:c.instructions+=1;goto B45f256;
case 0x45f25b:goto L45f25b;
case 0x45f261:goto L45f261;
case 0x45f267:c.instructions+=9;goto B45f267;
case 0x45f26d:c.instructions+=8;goto B45f26d;
case 0x45f273:c.instructions+=7;goto B45f273;
case 0x45f279:c.instructions+=6;goto B45f279;
case 0x45f27f:c.instructions+=5;goto B45f27f;
case 0x45f285:c.instructions+=4;goto B45f285;
case 0x45f28f:c.instructions+=3;goto B45f28f;
case 0x45f290:c.instructions+=2;goto B45f290;
case 0x45f291:c.instructions+=1;goto B45f291;
case 0x45f2a0:goto L45f2a0;
case 0x45f2a6:c.instructions+=3;goto B45f2a6;
case 0x45f2a8:c.instructions+=2;goto B45f2a8;
case 0x45f2af:c.instructions+=1;goto B45f2af;
case 0x45f2b1:goto L45f2b1;
case 0x45f2b8:c.instructions+=4;goto B45f2b8;
case 0x45f2be:c.instructions+=3;goto B45f2be;
case 0x45f2c0:c.instructions+=2;goto B45f2c0;
case 0x45f2c2:c.instructions+=1;goto B45f2c2;
case 0x45f2c4:goto L45f2c4;
case 0x45f2c7:c.instructions+=2;goto B45f2c7;
case 0x45f2c8:c.instructions+=1;goto B45f2c8;
case 0x45f2cd:goto L45f2cd;
case 0x45f2d0:goto L45f2d0;
case 0x45f2d6:c.instructions+=13;goto B45f2d6;
case 0x45f2d8:c.instructions+=12;goto B45f2d8;
case 0x45f2dd:c.instructions+=11;goto B45f2dd;
case 0x45f2de:c.instructions+=10;goto B45f2de;
case 0x45f2e5:c.instructions+=9;goto B45f2e5;
case 0x45f2e8:c.instructions+=8;goto B45f2e8;
case 0x45f2e9:c.instructions+=7;goto B45f2e9;
case 0x45f2ea:c.instructions+=6;goto B45f2ea;
case 0x45f2ec:c.instructions+=5;goto B45f2ec;
case 0x45f2ed:c.instructions+=4;goto B45f2ed;
case 0x45f2f3:c.instructions+=3;goto B45f2f3;
case 0x45f2f5:c.instructions+=2;goto B45f2f5;
case 0x45f2f7:c.instructions+=1;goto B45f2f7;
case 0x45f2f9:goto L45f2f9;
case 0x45f2fb:c.instructions+=2;goto B45f2fb;
case 0x45f2fd:c.instructions+=1;goto B45f2fd;
case 0x45f2ff:goto L45f2ff;
case 0x45f304:goto L45f304;
case 0x45f308:c.instructions+=2;goto B45f308;
case 0x45f309:c.instructions+=1;goto B45f309;
case 0x45f30e:goto L45f30e;
case 0x45f311:c.instructions+=1;goto B45f311;
case 0x45f316:goto L45f316;
case 0x45f31a:c.instructions+=4;goto B45f31a;
case 0x45f31c:c.instructions+=3;goto B45f31c;
case 0x45f31d:c.instructions+=2;goto B45f31d;
case 0x45f31e:c.instructions+=1;goto B45f31e;
case 0x45f321:goto L45f321;
case 0x45f326:goto L45f326;
case 0x45f32c:goto L45f32c;
case 0x45f330:c.instructions+=3;goto B45f330;
case 0x45f331:c.instructions+=2;goto B45f331;
case 0x45f33b:c.instructions+=1;goto B45f33b;
case 0x45f340:goto L45f340;
case 0x45f343:c.instructions+=1;goto B45f343;
case 0x45f348:goto L45f348;
case 0x45f34c:c.instructions+=8;goto B45f34c;
case 0x45f350:c.instructions+=7;goto B45f350;
case 0x45f351:c.instructions+=6;goto B45f351;
case 0x45f355:c.instructions+=5;goto B45f355;
case 0x45f359:c.instructions+=4;goto B45f359;
case 0x45f35d:c.instructions+=3;goto B45f35d;
case 0x45f35f:c.instructions+=2;goto B45f35f;
case 0x45f361:c.instructions+=1;goto B45f361;
case 0x45f363:goto L45f363;
case 0x45f365:c.instructions+=1;goto B45f365;
case 0x45f36a:goto L45f36a;
case 0x45f36e:c.instructions+=3;goto B45f36e;
case 0x45f370:c.instructions+=2;goto B45f370;
case 0x45f374:c.instructions+=1;goto B45f374;
case 0x45f376:goto L45f376;
case 0x45f377:c.instructions+=9;goto B45f377;
case 0x45f37a:c.instructions+=8;goto B45f37a;
case 0x45f37b:c.instructions+=7;goto B45f37b;
case 0x45f37c:c.instructions+=6;goto B45f37c;
case 0x45f381:c.instructions+=5;goto B45f381;
case 0x45f383:c.instructions+=4;goto B45f383;
case 0x45f386:c.instructions+=3;goto B45f386;
case 0x45f389:c.instructions+=2;goto B45f389;
case 0x45f38c:c.instructions+=1;goto B45f38c;
case 0x45f391:goto L45f391;
case 0x45f394:c.instructions+=2;goto B45f394;
case 0x45f396:c.instructions+=1;goto B45f396;
case 0x45f398:goto L45f398;
case 0x45f39d:c.instructions+=2;goto B45f39d;
case 0x45f3a2:c.instructions+=1;goto B45f3a2;
case 0x45f3a7:goto L45f3a7;
case 0x45f3a8:c.instructions+=3;goto B45f3a8;
case 0x45f3a9:c.instructions+=2;goto B45f3a9;
case 0x45f3ae:c.instructions+=1;goto B45f3ae;
case 0x45f3b3:goto L45f3b3;
case 0x45f3b6:goto L45f3b6;
case 0x45f3bc:c.instructions+=2;goto B45f3bc;
case 0x45f3bd:c.instructions+=1;goto B45f3bd;
case 0x45f3bf:goto L45f3bf;
case 0x45f3c5:goto L45f3c5;
case 0x45f3c9:c.instructions+=7;goto B45f3c9;
case 0x45f3ca:c.instructions+=6;goto B45f3ca;
case 0x45f3d1:c.instructions+=5;goto B45f3d1;
case 0x45f3d2:c.instructions+=4;goto B45f3d2;
case 0x45f3d3:c.instructions+=3;goto B45f3d3;
case 0x45f3da:c.instructions+=2;goto B45f3da;
case 0x45f3dd:c.instructions+=1;goto B45f3dd;
case 0x45f3e0:goto L45f3e0;
case 0x45f3e6:c.instructions+=3;goto B45f3e6;
case 0x45f3e8:c.instructions+=2;goto B45f3e8;
case 0x45f3ef:c.instructions+=1;goto B45f3ef;
case 0x45f3f1:goto L45f3f1;
case 0x45f3f8:c.instructions+=4;goto B45f3f8;
case 0x45f3fe:c.instructions+=3;goto B45f3fe;
case 0x45f400:c.instructions+=2;goto B45f400;
case 0x45f402:c.instructions+=1;goto B45f402;
case 0x45f404:goto L45f404;
case 0x45f407:c.instructions+=2;goto B45f407;
case 0x45f408:c.instructions+=1;goto B45f408;
case 0x45f40d:goto L45f40d;
case 0x45f410:goto L45f410;
case 0x45f411:c.instructions+=8;goto B45f411;
case 0x45f412:c.instructions+=7;goto B45f412;
case 0x45f413:c.instructions+=6;goto B45f413;
case 0x45f415:c.instructions+=5;goto B45f415;
case 0x45f416:c.instructions+=4;goto B45f416;
case 0x45f41c:c.instructions+=3;goto B45f41c;
case 0x45f41e:c.instructions+=2;goto B45f41e;
case 0x45f420:c.instructions+=1;goto B45f420;
case 0x45f422:goto L45f422;
case 0x45f424:c.instructions+=2;goto B45f424;
case 0x45f426:c.instructions+=1;goto B45f426;
case 0x45f428:goto L45f428;
case 0x45f42d:goto L45f42d;
case 0x45f431:c.instructions+=2;goto B45f431;
case 0x45f432:c.instructions+=1;goto B45f432;
case 0x45f437:goto L45f437;
case 0x45f43a:c.instructions+=1;goto B45f43a;
case 0x45f43f:goto L45f43f;
case 0x45f443:c.instructions+=4;goto B45f443;
case 0x45f445:c.instructions+=3;goto B45f445;
case 0x45f446:c.instructions+=2;goto B45f446;
case 0x45f447:c.instructions+=1;goto B45f447;
case 0x45f44a:goto L45f44a;
case 0x45f44f:goto L45f44f;
case 0x45f455:c.instructions+=3;goto B45f455;
case 0x45f457:c.instructions+=2;goto B45f457;
case 0x45f45d:c.instructions+=1;goto B45f45d;
case 0x45f45f:goto L45f45f;
case 0x45f461:c.instructions+=2;goto B45f461;
case 0x45f463:c.instructions+=1;goto B45f463;
case 0x45f465:goto L45f465;
case 0x45f46a:goto L45f46a;
case 0x45f46e:c.instructions+=2;goto B45f46e;
case 0x45f46f:c.instructions+=1;goto B45f46f;
case 0x45f474:goto L45f474;
case 0x45f477:c.instructions+=1;goto B45f477;
case 0x45f47c:goto L45f47c;
case 0x45f480:c.instructions+=4;goto B45f480;
case 0x45f482:c.instructions+=3;goto B45f482;
case 0x45f483:c.instructions+=2;goto B45f483;
case 0x45f484:c.instructions+=1;goto B45f484;
case 0x45f487:goto L45f487;
case 0x45f48c:goto L45f48c;
case 0x45f48d:c.instructions+=6;goto B45f48d;
case 0x45f493:c.instructions+=5;goto B45f493;
case 0x45f496:c.instructions+=4;goto B45f496;
case 0x45f497:c.instructions+=3;goto B45f497;
case 0x45f498:c.instructions+=2;goto B45f498;
case 0x45f499:c.instructions+=1;goto B45f499;
case 0x45f4a0:goto L45f4a0;
case 0x45f4a5:c.instructions+=3;goto B45f4a5;
case 0x45f4a8:c.instructions+=2;goto B45f4a8;
case 0x45f4aa:c.instructions+=1;goto B45f4aa;
case 0x45f4af:goto L45f4af;
case 0x45f4b0:goto L45f4b0;
case 0x45f4b1:c.instructions+=8;goto B45f4b1;
case 0x45f4b2:c.instructions+=7;goto B45f4b2;
case 0x45f4b3:c.instructions+=6;goto B45f4b3;
case 0x45f4b5:c.instructions+=5;goto B45f4b5;
case 0x45f4bb:c.instructions+=4;goto B45f4bb;
case 0x45f4bd:c.instructions+=3;goto B45f4bd;
case 0x45f4bf:c.instructions+=2;goto B45f4bf;
case 0x45f4c0:c.instructions+=1;goto B45f4c0;
case 0x45f4c6:goto L45f4c6;
case 0x45f4c8:c.instructions+=3;goto B45f4c8;
case 0x45f4ca:c.instructions+=2;goto B45f4ca;
case 0x45f4ce:c.instructions+=1;goto B45f4ce;
case 0x45f4d0:goto L45f4d0;
case 0x45f4d4:c.instructions+=3;goto B45f4d4;
case 0x45f4d5:c.instructions+=2;goto B45f4d5;
case 0x45f4d7:c.instructions+=1;goto B45f4d7;
case 0x45f4dc:goto L45f4dc;
case 0x45f4e1:c.instructions+=1;goto B45f4e1;
case 0x45f4e3:goto L45f4e3;
case 0x45f4e9:c.instructions+=2;goto B45f4e9;
case 0x45f4eb:c.instructions+=1;goto B45f4eb;
case 0x45f4ed:goto L45f4ed;
case 0x45f4ef:c.instructions+=2;goto B45f4ef;
case 0x45f4f1:c.instructions+=1;goto B45f4f1;
case 0x45f4f3:goto L45f4f3;
case 0x45f4f8:goto L45f4f8;
case 0x45f4fc:c.instructions+=2;goto B45f4fc;
case 0x45f4fd:c.instructions+=1;goto B45f4fd;
case 0x45f502:goto L45f502;
case 0x45f505:c.instructions+=1;goto B45f505;
case 0x45f50a:goto L45f50a;
case 0x45f50e:c.instructions+=4;goto B45f50e;
case 0x45f510:c.instructions+=3;goto B45f510;
case 0x45f511:c.instructions+=2;goto B45f511;
case 0x45f512:c.instructions+=1;goto B45f512;
case 0x45f515:goto L45f515;
case 0x45f51a:goto L45f51a;
case 0x45f520:c.instructions+=1;goto B45f520;
case 0x45f522:goto L45f522;
case 0x45f524:c.instructions+=3;goto B45f524;
case 0x45f525:c.instructions+=2;goto B45f525;
case 0x45f527:c.instructions+=1;goto B45f527;
case 0x45f52a:goto L45f52a;
case 0x45f52c:c.instructions+=2;goto B45f52c;
case 0x45f532:c.instructions+=1;goto B45f532;
case 0x45f534:goto L45f534;
case 0x45f536:c.instructions+=1;goto B45f536;
case 0x45f538:goto L45f538;
case 0x45f53d:c.instructions+=1;goto B45f53d;
case 0x45f53f:goto L45f53f;
case 0x45f544:goto L45f544;
case 0x45f547:c.instructions+=4;goto B45f547;
case 0x45f549:c.instructions+=3;goto B45f549;
case 0x45f54a:c.instructions+=2;goto B45f54a;
case 0x45f54c:c.instructions+=1;goto B45f54c;
case 0x45f54f:goto L45f54f;
case 0x45f551:c.instructions+=2;goto B45f551;
case 0x45f557:c.instructions+=1;goto B45f557;
case 0x45f559:goto L45f559;
case 0x45f55b:c.instructions+=1;goto B45f55b;
case 0x45f55d:goto L45f55d;
case 0x45f562:c.instructions+=1;goto B45f562;
case 0x45f564:goto L45f564;
case 0x45f569:goto L45f569;
case 0x45f56c:c.instructions+=4;goto B45f56c;
case 0x45f572:c.instructions+=3;goto B45f572;
case 0x45f574:c.instructions+=2;goto B45f574;
case 0x45f576:c.instructions+=1;goto B45f576;
case 0x45f578:goto L45f578;
case 0x45f57b:c.instructions+=2;goto B45f57b;
case 0x45f57c:c.instructions+=1;goto B45f57c;
case 0x45f581:goto L45f581;
case 0x45f587:c.instructions+=2;goto B45f587;
case 0x45f589:c.instructions+=1;goto B45f589;
case 0x45f58f:goto L45f58f;
case 0x45f591:c.instructions+=3;goto B45f591;
case 0x45f593:c.instructions+=2;goto B45f593;
case 0x45f597:c.instructions+=1;goto B45f597;
case 0x45f599:goto L45f599;
case 0x45f59d:c.instructions+=3;goto B45f59d;
case 0x45f59e:c.instructions+=2;goto B45f59e;
case 0x45f5a0:c.instructions+=1;goto B45f5a0;
case 0x45f5a5:goto L45f5a5;
case 0x45f5aa:c.instructions+=1;goto B45f5aa;
case 0x45f5ac:goto L45f5ac;
case 0x45f5b2:c.instructions+=2;goto B45f5b2;
case 0x45f5b4:c.instructions+=1;goto B45f5b4;
case 0x45f5b6:goto L45f5b6;
case 0x45f5b8:c.instructions+=2;goto B45f5b8;
case 0x45f5ba:c.instructions+=1;goto B45f5ba;
case 0x45f5bc:goto L45f5bc;
case 0x45f5c1:goto L45f5c1;
case 0x45f5c5:c.instructions+=2;goto B45f5c5;
case 0x45f5c6:c.instructions+=1;goto B45f5c6;
case 0x45f5cb:goto L45f5cb;
case 0x45f5ce:c.instructions+=1;goto B45f5ce;
case 0x45f5d3:goto L45f5d3;
case 0x45f5d7:c.instructions+=4;goto B45f5d7;
case 0x45f5d9:c.instructions+=3;goto B45f5d9;
case 0x45f5da:c.instructions+=2;goto B45f5da;
case 0x45f5db:c.instructions+=1;goto B45f5db;
case 0x45f5de:goto L45f5de;
case 0x45f5e3:goto L45f5e3;
case 0x45f5e4:c.instructions+=5;goto B45f5e4;
case 0x45f5ea:c.instructions+=4;goto B45f5ea;
case 0x45f5eb:c.instructions+=3;goto B45f5eb;
case 0x45f5ec:c.instructions+=2;goto B45f5ec;
case 0x45f5ed:c.instructions+=1;goto B45f5ed;
case 0x45f5ee:goto L45f5ee;
case 0x45f5f2:c.instructions+=4;goto B45f5f2;
case 0x45f5f3:c.instructions+=3;goto B45f5f3;
case 0x45f5f5:c.instructions+=2;goto B45f5f5;
case 0x45f5fd:c.instructions+=1;goto B45f5fd;
case 0x45f602:goto L45f602;
case 0x45f604:c.instructions+=3;goto B45f604;
case 0x45f606:c.instructions+=2;goto B45f606;
case 0x45f608:c.instructions+=1;goto B45f608;
case 0x45f60b:goto L45f60b;
case 0x45f60d:c.instructions+=2;goto B45f60d;
case 0x45f613:c.instructions+=1;goto B45f613;
case 0x45f615:goto L45f615;
case 0x45f617:c.instructions+=1;goto B45f617;
case 0x45f619:goto L45f619;
case 0x45f61e:c.instructions+=1;goto B45f61e;
case 0x45f620:goto L45f620;
case 0x45f625:goto L45f625;
case 0x45f628:c.instructions+=4;goto B45f628;
case 0x45f62a:c.instructions+=3;goto B45f62a;
case 0x45f62c:c.instructions+=2;goto B45f62c;
case 0x45f62e:c.instructions+=1;goto B45f62e;
case 0x45f631:goto L45f631;
case 0x45f633:c.instructions+=2;goto B45f633;
case 0x45f639:c.instructions+=1;goto B45f639;
case 0x45f63b:goto L45f63b;
case 0x45f63d:c.instructions+=1;goto B45f63d;
case 0x45f63f:goto L45f63f;
case 0x45f644:c.instructions+=1;goto B45f644;
case 0x45f646:goto L45f646;
case 0x45f64b:goto L45f64b;
case 0x45f64e:c.instructions+=4;goto B45f64e;
case 0x45f652:c.instructions+=3;goto B45f652;
case 0x45f654:c.instructions+=2;goto B45f654;
case 0x45f65a:c.instructions+=1;goto B45f65a;
case 0x45f65c:goto L45f65c;
case 0x45f65e:c.instructions+=1;goto B45f65e;
case 0x45f660:goto L45f660;
case 0x45f665:c.instructions+=1;goto B45f665;
case 0x45f667:goto L45f667;
case 0x45f66c:goto L45f66c;
case 0x45f66f:c.instructions+=4;goto B45f66f;
case 0x45f675:c.instructions+=3;goto B45f675;
case 0x45f677:c.instructions+=2;goto B45f677;
case 0x45f679:c.instructions+=1;goto B45f679;
case 0x45f67b:goto L45f67b;
case 0x45f67e:c.instructions+=2;goto B45f67e;
case 0x45f67f:c.instructions+=1;goto B45f67f;
case 0x45f684:goto L45f684;
case 0x45f685:c.instructions+=4;goto B45f685;
case 0x45f686:c.instructions+=3;goto B45f686;
case 0x45f687:c.instructions+=2;goto B45f687;
case 0x45f688:c.instructions+=1;goto B45f688;
case 0x45f690:goto L45f690;
case 0x45f695:c.instructions+=1;goto B45f695;
case 0x45f6a0:goto L45f6a0;
case 0x45f6a5:c.instructions+=1;goto B45f6a5;
case 0x45f6b0:goto L45f6b0;
case 0x45f6b4:c.instructions+=2;goto B45f6b4;
case 0x45f6b7:c.instructions+=1;goto B45f6b7;
case 0x45f6b9:goto L45f6b9;
case 0x45f6ba:c.instructions+=1;goto B45f6ba;
case 0x45f6bc:goto L45f6bc;
case 0x45f6bf:c.instructions+=1;goto B45f6bf;
case 0x45f6c2:goto L45f6c2;
case 0x45f6c7:c.instructions+=1;goto B45f6c7;
case 0x45f6ca:goto L45f6ca;
case 0x45f6cf:c.instructions+=1;goto B45f6cf;
case 0x45f6e0:goto L45f6e0;
case 0x45f6e4:c.instructions+=5;goto B45f6e4;
case 0x45f6e5:c.instructions+=4;goto B45f6e5;
case 0x45f6e7:c.instructions+=3;goto B45f6e7;
case 0x45f6ea:c.instructions+=2;goto B45f6ea;
case 0x45f6ed:c.instructions+=1;goto B45f6ed;
case 0x45f6ef:goto L45f6ef;
case 0x45f6f2:c.instructions+=1;goto B45f6f2;
case 0x45f6f4:goto L45f6f4;
case 0x45f6fe:c.instructions+=1;goto B45f6fe;
case 0x45f700:goto L45f700;
case 0x45f706:goto L45f706;
case 0x45f70c:c.instructions+=4;goto B45f70c;
case 0x45f70f:c.instructions+=3;goto B45f70f;
case 0x45f716:c.instructions+=2;goto B45f716;
case 0x45f718:c.instructions+=1;goto B45f718;
case 0x45f71b:goto L45f71b;
case 0x45f721:c.instructions+=4;goto B45f721;
case 0x45f727:c.instructions+=3;goto B45f727;
case 0x45f72a:c.instructions+=2;goto B45f72a;
case 0x45f72d:c.instructions+=1;goto B45f72d;
case 0x45f72f:goto L45f72f;
case 0x45f739:c.instructions+=2;goto B45f739;
case 0x45f73a:c.instructions+=1;goto B45f73a;
case 0x45f73d:goto L45f73d;
case 0x45f740:c.instructions+=4;goto B45f740;
case 0x45f747:c.instructions+=3;goto B45f747;
case 0x45f74d:c.instructions+=2;goto B45f74d;
case 0x45f74e:c.instructions+=1;goto B45f74e;
case 0x45f760:goto L45f760;
case 0x45f766:c.instructions+=2;goto B45f766;
case 0x45f768:c.instructions+=1;goto B45f768;
case 0x45f76a:goto L45f76a;
case 0x45f771:c.instructions+=2;goto B45f771;
case 0x45f774:c.instructions+=1;goto B45f774;
case 0x45f775:goto L45f775;
case 0x45f77c:c.instructions+=1;goto B45f77c;
case 0x45f780:goto L45f780;
case 0x45f786:c.instructions+=2;goto B45f786;
case 0x45f788:c.instructions+=1;goto B45f788;
case 0x45f78a:goto L45f78a;
case 0x45f78d:c.instructions+=2;goto B45f78d;
case 0x45f791:c.instructions+=1;goto B45f791;
case 0x45f793:goto L45f793;
case 0x45f799:c.instructions+=3;goto B45f799;
case 0x45f79f:c.instructions+=2;goto B45f79f;
case 0x45f7a1:c.instructions+=1;goto B45f7a1;
case 0x45f7a3:goto L45f7a3;
case 0x45f7a9:c.instructions+=2;goto B45f7a9;
case 0x45f7ab:c.instructions+=1;goto B45f7ab;
case 0x45f7ad:goto L45f7ad;
case 0x45f7ae:c.instructions+=3;goto B45f7ae;
case 0x45f7b1:c.instructions+=2;goto B45f7b1;
case 0x45f7b4:c.instructions+=1;goto B45f7b4;
case 0x45f7b6:goto L45f7b6;
case 0x45f7b9:c.instructions+=1;goto B45f7b9;
case 0x45f7bb:goto L45f7bb;
case 0x45f7bf:c.instructions+=1;goto B45f7bf;
case 0x45f7c1:goto L45f7c1;
case 0x45f7c8:c.instructions+=2;goto B45f7c8;
case 0x45f7ce:c.instructions+=1;goto B45f7ce;
case 0x45f7d3:goto L45f7d3;
case 0x45f7d4:c.instructions+=1;goto B45f7d4;
case 0x45f7d7:goto L45f7d7;
case 0x45f7de:c.instructions+=4;goto B45f7de;
case 0x45f7e4:c.instructions+=3;goto B45f7e4;
case 0x45f7eb:c.instructions+=2;goto B45f7eb;
case 0x45f7f1:c.instructions+=1;goto B45f7f1;
case 0x45f7f6:goto L45f7f6;
case 0x45f7f7:goto L45f7f7;
case 0x45f800:goto L45f800;
case 0x45f801:c.instructions+=4;goto B45f801;
case 0x45f803:c.instructions+=3;goto B45f803;
case 0x45f809:c.instructions+=2;goto B45f809;
case 0x45f80b:c.instructions+=1;goto B45f80b;
case 0x45f811:goto L45f811;
case 0x45f813:c.instructions+=3;goto B45f813;
case 0x45f814:c.instructions+=2;goto B45f814;
case 0x45f816:c.instructions+=1;goto B45f816;
case 0x45f819:goto L45f819;
case 0x45f81f:c.instructions+=7;goto B45f81f;
case 0x45f821:c.instructions+=6;goto B45f821;
case 0x45f823:c.instructions+=5;goto B45f823;
case 0x45f827:c.instructions+=4;goto B45f827;
case 0x45f829:c.instructions+=3;goto B45f829;
case 0x45f82b:c.instructions+=2;goto B45f82b;
case 0x45f82e:c.instructions+=1;goto B45f82e;
case 0x45f831:goto L45f831;
case 0x45f833:c.instructions+=2;goto B45f833;
case 0x45f839:c.instructions+=1;goto B45f839;
case 0x45f83b:goto L45f83b;
case 0x45f83d:c.instructions+=1;goto B45f83d;
case 0x45f83f:goto L45f83f;
case 0x45f844:c.instructions+=1;goto B45f844;
case 0x45f846:goto L45f846;
case 0x45f84b:goto L45f84b;
case 0x45f84e:c.instructions+=7;goto B45f84e;
case 0x45f854:c.instructions+=6;goto B45f854;
case 0x45f85b:c.instructions+=5;goto B45f85b;
case 0x45f861:c.instructions+=4;goto B45f861;
case 0x45f868:c.instructions+=3;goto B45f868;
case 0x45f86e:c.instructions+=2;goto B45f86e;
case 0x45f871:c.instructions+=1;goto B45f871;
case 0x45f876:goto L45f876;
case 0x45f878:c.instructions+=2;goto B45f878;
case 0x45f87e:c.instructions+=1;goto B45f87e;
case 0x45f880:goto L45f880;
case 0x45f882:c.instructions+=1;goto B45f882;
case 0x45f884:goto L45f884;
case 0x45f889:c.instructions+=1;goto B45f889;
case 0x45f88b:goto L45f88b;
case 0x45f890:goto L45f890;
case 0x45f893:c.instructions+=4;goto B45f893;
case 0x45f899:c.instructions+=3;goto B45f899;
case 0x45f89c:c.instructions+=2;goto B45f89c;
case 0x45f8a2:c.instructions+=1;goto B45f8a2;
case 0x45f8a7:goto L45f8a7;
case 0x45f8a9:c.instructions+=2;goto B45f8a9;
case 0x45f8af:c.instructions+=1;goto B45f8af;
case 0x45f8b1:goto L45f8b1;
case 0x45f8b3:c.instructions+=1;goto B45f8b3;
case 0x45f8b5:goto L45f8b5;
case 0x45f8ba:c.instructions+=1;goto B45f8ba;
case 0x45f8bc:goto L45f8bc;
case 0x45f8c1:goto L45f8c1;
case 0x45f8c3:c.instructions+=4;goto B45f8c3;
case 0x45f8c6:c.instructions+=3;goto B45f8c6;
case 0x45f8cc:c.instructions+=2;goto B45f8cc;
case 0x45f8ce:c.instructions+=1;goto B45f8ce;
case 0x45f8d0:goto L45f8d0;
case 0x45f8d2:c.instructions+=1;goto B45f8d2;
case 0x45f8d4:goto L45f8d4;
case 0x45f8da:c.instructions+=1;goto B45f8da;
case 0x45f8dc:goto L45f8dc;
case 0x45f8e1:goto L45f8e1;
case 0x45f8e4:c.instructions+=5;goto B45f8e4;
case 0x45f8ea:c.instructions+=4;goto B45f8ea;
case 0x45f8ed:c.instructions+=3;goto B45f8ed;
case 0x45f8f0:c.instructions+=2;goto B45f8f0;
case 0x45f8f1:c.instructions+=1;goto B45f8f1;
case 0x45f8f3:goto L45f8f3;
case 0x45f8f5:c.instructions+=1;goto B45f8f5;
case 0x45f8f7:goto L45f8f7;
case 0x45f8fc:goto L45f8fc;
case 0x45f902:c.instructions+=3;goto B45f902;
case 0x45f905:c.instructions+=2;goto B45f905;
case 0x45f907:c.instructions+=1;goto B45f907;
case 0x45f909:goto L45f909;
case 0x45f90b:c.instructions+=1;goto B45f90b;
case 0x45f90d:goto L45f90d;
case 0x45f910:c.instructions+=1;goto B45f910;
case 0x45f912:goto L45f912;
case 0x45f917:goto L45f917;
case 0x45f91a:c.instructions+=4;goto B45f91a;
case 0x45f920:c.instructions+=3;goto B45f920;
case 0x45f922:c.instructions+=2;goto B45f922;
case 0x45f924:c.instructions+=1;goto B45f924;
case 0x45f926:goto L45f926;
case 0x45f929:c.instructions+=2;goto B45f929;
case 0x45f92a:c.instructions+=1;goto B45f92a;
case 0x45f92f:goto L45f92f;
case 0x45f930:c.instructions+=1;goto B45f930;
case 0x45f940:goto L45f940;
case 0x45f944:c.instructions+=3;goto B45f944;
case 0x45f945:c.instructions+=2;goto B45f945;
case 0x45f948:c.instructions+=1;goto B45f948;
case 0x45f94a:goto L45f94a;
case 0x45f951:c.instructions+=1;goto B45f951;
case 0x45f958:goto L45f958;
case 0x45f95d:c.instructions+=1;goto B45f95d;
case 0x45f95e:goto L45f95e;
case 0x45f963:c.instructions+=1;goto B45f963;
case 0x45f964:goto L45f964;
case 0x45f969:c.instructions+=1;goto B45f969;
case 0x45f96a:goto L45f96a;
case 0x45f96f:c.instructions+=1;goto B45f96f;
case 0x45f970:goto L45f970;
case 0x45f975:c.instructions+=1;goto B45f975;
case 0x45f976:goto L45f976;
case 0x45f978:c.instructions+=1;goto B45f978;
case 0x45f979:goto L45f979;
case 0x45f97e:c.instructions+=1;goto B45f97e;
case 0x45f97f:goto L45f97f;
case 0x45f984:c.instructions+=1;goto B45f984;
case 0x45f985:goto L45f985;
case 0x45f988:c.instructions+=1;goto B45f988;
case 0x45f9d0:goto L45f9d0;
case 0x45f9d4:c.instructions+=3;goto B45f9d4;
case 0x45f9d5:c.instructions+=2;goto B45f9d5;
case 0x45f9d8:c.instructions+=1;goto B45f9d8;
case 0x45f9da:goto L45f9da;
case 0x45f9e1:c.instructions+=1;goto B45f9e1;
case 0x45f9e8:goto L45f9e8;
case 0x45f9ea:c.instructions+=1;goto B45f9ea;
case 0x45f9eb:goto L45f9eb;
case 0x45f9f0:c.instructions+=1;goto B45f9f0;
case 0x45f9f1:goto L45f9f1;
case 0x45f9f4:c.instructions+=1;goto B45f9f4;
case 0x45fa20:goto L45fa20;
case 0x45fa25:c.instructions+=1;goto B45fa25;
case 0x45fa30:goto L45fa30;
case 0x45fa35:c.instructions+=1;goto B45fa35;
case 0x45fa40:goto L45fa40;
case 0x45fa44:c.instructions+=5;goto B45fa44;
case 0x45fa46:c.instructions+=4;goto B45fa46;
case 0x45fa48:c.instructions+=3;goto B45fa48;
case 0x45fa4b:c.instructions+=2;goto B45fa4b;
case 0x45fa4f:c.instructions+=1;goto B45fa4f;
case 0x45fa60:goto L45fa60;
case 0x45fa61:c.instructions+=4;goto B45fa61;
case 0x45fa63:c.instructions+=3;goto B45fa63;
case 0x45fa65:c.instructions+=2;goto B45fa65;
case 0x45fa67:c.instructions+=1;goto B45fa67;
case 0x45fa69:goto L45fa69;
case 0x45fa6e:goto L45fa6e;
case 0x45fa73:c.instructions+=1;goto B45fa73;
case 0x45fa75:goto L45fa75;
case 0x45fa79:c.instructions+=2;goto B45fa79;
case 0x45fa7a:c.instructions+=1;goto B45fa7a;
case 0x45fa7f:goto L45fa7f;
case 0x45fa82:c.instructions+=1;goto B45fa82;
case 0x45fa87:goto L45fa87;
case 0x45fa8b:c.instructions+=4;goto B45fa8b;
case 0x45fa8d:c.instructions+=3;goto B45fa8d;
case 0x45fa8f:c.instructions+=2;goto B45fa8f;
case 0x45fa90:c.instructions+=1;goto B45fa90;
case 0x45fa93:goto L45fa93;
case 0x45fa98:goto L45fa98;
case 0x45fa9a:c.instructions+=2;goto B45fa9a;
case 0x45fa9b:c.instructions+=1;goto B45fa9b;
case 0x45faa0:goto L45faa0;
case 0x45faa6:c.instructions+=21;goto B45faa6;
case 0x45faac:c.instructions+=20;goto B45faac;
case 0x45faad:c.instructions+=19;goto B45faad;
case 0x45fab3:c.instructions+=18;goto B45fab3;
case 0x45fab4:c.instructions+=17;goto B45fab4;
case 0x45faba:c.instructions+=16;goto B45faba;
case 0x45fabb:c.instructions+=15;goto B45fabb;
case 0x45fac1:c.instructions+=14;goto B45fac1;
case 0x45fac3:c.instructions+=13;goto B45fac3;
case 0x45fac6:c.instructions+=12;goto B45fac6;
case 0x45fac8:c.instructions+=11;goto B45fac8;
case 0x45face:c.instructions+=10;goto B45face;
case 0x45facf:c.instructions+=9;goto B45facf;
case 0x45fad5:c.instructions+=8;goto B45fad5;
case 0x45fadb:c.instructions+=7;goto B45fadb;
case 0x45fade:c.instructions+=6;goto B45fade;
case 0x45fadf:c.instructions+=5;goto B45fadf;
case 0x45fae5:c.instructions+=4;goto B45fae5;
case 0x45faeb:c.instructions+=3;goto B45faeb;
case 0x45faf1:c.instructions+=2;goto B45faf1;
case 0x45faf2:c.instructions+=1;goto B45faf2;
case 0x45fb00:goto L45fb00;
case 0x45fb06:c.instructions+=13;goto B45fb06;
case 0x45fb08:c.instructions+=12;goto B45fb08;
case 0x45fb0d:c.instructions+=11;goto B45fb0d;
case 0x45fb0e:c.instructions+=10;goto B45fb0e;
case 0x45fb13:c.instructions+=9;goto B45fb13;
case 0x45fb1a:c.instructions+=8;goto B45fb1a;
case 0x45fb1b:c.instructions+=7;goto B45fb1b;
case 0x45fb1c:c.instructions+=6;goto B45fb1c;
case 0x45fb1e:c.instructions+=5;goto B45fb1e;
case 0x45fb20:c.instructions+=4;goto B45fb20;
case 0x45fb21:c.instructions+=3;goto B45fb21;
case 0x45fb22:c.instructions+=2;goto B45fb22;
case 0x45fb24:c.instructions+=1;goto B45fb24;
case 0x45fb2a:goto L45fb2a;
case 0x45fb30:c.instructions+=1;goto B45fb30;
case 0x45fb36:goto L45fb36;
case 0x45fb3a:c.instructions+=1;goto B45fb3a;
case 0x45fb40:goto L45fb40;
case 0x45fb4a:c.instructions+=3;goto B45fb4a;
case 0x45fb50:c.instructions+=2;goto B45fb50;
case 0x45fb52:c.instructions+=1;goto B45fb52;
case 0x45fb54:goto L45fb54;
case 0x45fb56:c.instructions+=1;goto B45fb56;
case 0x45fb5b:goto L45fb5b;
case 0x45fb5d:c.instructions+=1;goto B45fb5d;
case 0x45fb62:goto L45fb62;
case 0x45fb64:c.instructions+=5;goto B45fb64;
case 0x45fb67:c.instructions+=4;goto B45fb67;
case 0x45fb6b:c.instructions+=3;goto B45fb6b;
case 0x45fb6d:c.instructions+=2;goto B45fb6d;
case 0x45fb71:c.instructions+=1;goto B45fb71;
case 0x45fb73:goto L45fb73;
case 0x45fb77:c.instructions+=2;goto B45fb77;
case 0x45fb79:c.instructions+=1;goto B45fb79;
case 0x45fb7b:goto L45fb7b;
case 0x45fb7d:c.instructions+=1;goto B45fb7d;
case 0x45fb7f:goto L45fb7f;
case 0x45fb82:c.instructions+=1;goto B45fb82;
case 0x45fb84:goto L45fb84;
case 0x45fb89:goto L45fb89;
case 0x45fb8c:c.instructions+=11;goto B45fb8c;
case 0x45fb8d:c.instructions+=10;goto B45fb8d;
case 0x45fb8e:c.instructions+=9;goto B45fb8e;
case 0x45fb93:c.instructions+=8;goto B45fb93;
case 0x45fb95:c.instructions+=7;goto B45fb95;
case 0x45fb98:c.instructions+=6;goto B45fb98;
case 0x45fb9f:c.instructions+=5;goto B45fb9f;
case 0x45fba2:c.instructions+=4;goto B45fba2;
case 0x45fba5:c.instructions+=3;goto B45fba5;
case 0x45fba8:c.instructions+=2;goto B45fba8;
case 0x45fbab:c.instructions+=1;goto B45fbab;
case 0x45fbb0:goto L45fbb0;
case 0x45fbb3:c.instructions+=2;goto B45fbb3;
case 0x45fbb5:c.instructions+=1;goto B45fbb5;
case 0x45fbb7:goto L45fbb7;
case 0x45fbbc:c.instructions+=2;goto B45fbbc;
case 0x45fbc1:c.instructions+=1;goto B45fbc1;
case 0x45fbc6:goto L45fbc6;
case 0x45fbc7:c.instructions+=3;goto B45fbc7;
case 0x45fbc8:c.instructions+=2;goto B45fbc8;
case 0x45fbcd:c.instructions+=1;goto B45fbcd;
case 0x45fbd2:goto L45fbd2;
case 0x45fbd5:c.instructions+=2;goto B45fbd5;
case 0x45fbdb:c.instructions+=1;goto B45fbdb;
case 0x45fbe0:goto L45fbe0;
case 0x45fbe2:goto L45fbe2;
case 0x45fbe8:c.instructions+=1;goto B45fbe8;
case 0x45fbed:goto L45fbed;
case 0x45fbf7:c.instructions+=3;goto B45fbf7;
case 0x45fbfd:c.instructions+=2;goto B45fbfd;
case 0x45fbff:c.instructions+=1;goto B45fbff;
case 0x45fc01:goto L45fc01;
case 0x45fc03:c.instructions+=1;goto B45fc03;
case 0x45fc08:goto L45fc08;
case 0x45fc0a:c.instructions+=1;goto B45fc0a;
case 0x45fc0f:goto L45fc0f;
case 0x45fc11:c.instructions+=5;goto B45fc11;
case 0x45fc14:c.instructions+=4;goto B45fc14;
case 0x45fc18:c.instructions+=3;goto B45fc18;
case 0x45fc1a:c.instructions+=2;goto B45fc1a;
case 0x45fc22:c.instructions+=1;goto B45fc22;
case 0x45fc24:goto L45fc24;
case 0x45fc28:c.instructions+=2;goto B45fc28;
case 0x45fc2a:c.instructions+=1;goto B45fc2a;
case 0x45fc2c:goto L45fc2c;
case 0x45fc2e:c.instructions+=1;goto B45fc2e;
case 0x45fc30:goto L45fc30;
case 0x45fc33:c.instructions+=1;goto B45fc33;
case 0x45fc35:goto L45fc35;
case 0x45fc3a:goto L45fc3a;
case 0x45fc3d:c.instructions+=11;goto B45fc3d;
case 0x45fc3e:c.instructions+=10;goto B45fc3e;
case 0x45fc3f:c.instructions+=9;goto B45fc3f;
case 0x45fc44:c.instructions+=8;goto B45fc44;
case 0x45fc46:c.instructions+=7;goto B45fc46;
case 0x45fc49:c.instructions+=6;goto B45fc49;
case 0x45fc50:c.instructions+=5;goto B45fc50;
case 0x45fc53:c.instructions+=4;goto B45fc53;
case 0x45fc56:c.instructions+=3;goto B45fc56;
case 0x45fc59:c.instructions+=2;goto B45fc59;
case 0x45fc5c:c.instructions+=1;goto B45fc5c;
case 0x45fc61:goto L45fc61;
case 0x45fc64:c.instructions+=2;goto B45fc64;
case 0x45fc66:c.instructions+=1;goto B45fc66;
case 0x45fc68:goto L45fc68;
case 0x45fc6d:c.instructions+=2;goto B45fc6d;
case 0x45fc72:c.instructions+=1;goto B45fc72;
case 0x45fc77:goto L45fc77;
case 0x45fc78:c.instructions+=3;goto B45fc78;
case 0x45fc79:c.instructions+=2;goto B45fc79;
case 0x45fc7e:c.instructions+=1;goto B45fc7e;
case 0x45fc83:goto L45fc83;
case 0x45fc86:c.instructions+=1;goto B45fc86;
case 0x45fc88:goto L45fc88;
case 0x45fc8a:goto L45fc8a;
case 0x45fc90:goto L45fc90;
case 0x45fc94:c.instructions+=7;goto B45fc94;
case 0x45fc95:c.instructions+=6;goto B45fc95;
case 0x45fc96:c.instructions+=5;goto B45fc96;
case 0x45fc97:c.instructions+=4;goto B45fc97;
case 0x45fc9e:c.instructions+=3;goto B45fc9e;
case 0x45fc9f:c.instructions+=2;goto B45fc9f;
case 0x45fca2:c.instructions+=1;goto B45fca2;
case 0x45fcb0:goto L45fcb0;
case 0x45fcb1:c.instructions+=2;goto B45fcb1;
case 0x45fcb3:c.instructions+=1;goto B45fcb3;
case 0x45fcb8:goto L45fcb8;
case 0x45fcbe:c.instructions+=3;goto B45fcbe;
case 0x45fcc0:c.instructions+=2;goto B45fcc0;
case 0x45fcc1:c.instructions+=1;goto B45fcc1;
case 0x45fcd0:goto L45fcd0;
case 0x45fcd1:c.instructions+=2;goto B45fcd1;
case 0x45fcd3:c.instructions+=1;goto B45fcd3;
case 0x45fcd8:goto L45fcd8;
case 0x45fcde:c.instructions+=3;goto B45fcde;
case 0x45fce0:c.instructions+=2;goto B45fce0;
case 0x45fce1:c.instructions+=1;goto B45fce1;
case 0x45fcf0:goto L45fcf0;
case 0x45fcf5:c.instructions+=1;goto B45fcf5;
case 0x45fd00:goto L45fd00;
case 0x45fd05:c.instructions+=1;goto B45fd05;
case 0x45fd10:goto L45fd10;
case 0x45fd15:c.instructions+=2;goto B45fd15;
case 0x45fd16:c.instructions+=1;goto B45fd16;
case 0x45fd1b:goto L45fd1b;
case 0x45fd1e:c.instructions+=2;goto B45fd1e;
case 0x45fd23:c.instructions+=1;goto B45fd23;
case 0x45fd25:goto L45fd25;
case 0x45fd2b:c.instructions+=5;goto B45fd2b;
case 0x45fd2e:c.instructions+=4;goto B45fd2e;
case 0x45fd34:c.instructions+=3;goto B45fd34;
case 0x45fd35:c.instructions+=2;goto B45fd35;
case 0x45fd3a:c.instructions+=1;goto B45fd3a;
case 0x45fd3f:goto L45fd3f;
case 0x45fd42:c.instructions+=2;goto B45fd42;
case 0x45fd44:c.instructions+=1;goto B45fd44;
case 0x45fd46:goto L45fd46;
case 0x45fd48:c.instructions+=1;goto B45fd48;
case 0x45fd4d:goto L45fd4d;
case 0x45fd4f:c.instructions+=1;goto B45fd4f;
case 0x45fd50:goto L45fd50;
case 0x45fd55:c.instructions+=1;goto B45fd55;
case 0x45fd60:goto L45fd60;
case 0x45fd65:c.instructions+=1;goto B45fd65;
case 0x45fd70:goto L45fd70;
case 0x45fd75:c.instructions+=2;goto B45fd75;
case 0x45fd76:c.instructions+=1;goto B45fd76;
case 0x45fd7b:goto L45fd7b;
case 0x45fd7e:c.instructions+=2;goto B45fd7e;
case 0x45fd83:c.instructions+=1;goto B45fd83;
case 0x45fd85:goto L45fd85;
case 0x45fd8b:c.instructions+=5;goto B45fd8b;
case 0x45fd8e:c.instructions+=4;goto B45fd8e;
case 0x45fd94:c.instructions+=3;goto B45fd94;
case 0x45fd95:c.instructions+=2;goto B45fd95;
case 0x45fd9a:c.instructions+=1;goto B45fd9a;
case 0x45fd9f:goto L45fd9f;
case 0x45fda2:c.instructions+=2;goto B45fda2;
case 0x45fda4:c.instructions+=1;goto B45fda4;
case 0x45fda6:goto L45fda6;
case 0x45fda8:c.instructions+=1;goto B45fda8;
case 0x45fdad:goto L45fdad;
case 0x45fdaf:c.instructions+=1;goto B45fdaf;
case 0x45fdb0:goto L45fdb0;
case 0x45fdb5:c.instructions+=1;goto B45fdb5;
case 0x45fdc0:goto L45fdc0;
case 0x45fdc5:c.instructions+=1;goto B45fdc5;
case 0x45fdd0:goto L45fdd0;
case 0x45fdd4:c.instructions+=2;goto B45fdd4;
case 0x45fdd6:c.instructions+=1;goto B45fdd6;
case 0x45fdd8:goto L45fdd8;
case 0x45fddd:c.instructions+=1;goto B45fddd;
case 0x45fde0:goto L45fde0;
case 0x45fde1:c.instructions+=5;goto B45fde1;
case 0x45fde3:c.instructions+=4;goto B45fde3;
case 0x45fde5:c.instructions+=3;goto B45fde5;
case 0x45fde8:c.instructions+=2;goto B45fde8;
case 0x45fdeb:c.instructions+=1;goto B45fdeb;
case 0x45fdf0:goto L45fdf0;
case 0x45fdf1:c.instructions+=6;goto B45fdf1;
case 0x45fdf5:c.instructions+=5;goto B45fdf5;
case 0x45fdf7:c.instructions+=4;goto B45fdf7;
case 0x45fdf8:c.instructions+=3;goto B45fdf8;
case 0x45fdfa:c.instructions+=2;goto B45fdfa;
case 0x45fdfc:c.instructions+=1;goto B45fdfc;
case 0x45fdff:goto L45fdff;
case 0x45fe01:c.instructions+=4;goto B45fe01;
case 0x45fe04:c.instructions+=3;goto B45fe04;
case 0x45fe09:c.instructions+=2;goto B45fe09;
case 0x45fe0c:c.instructions+=1;goto B45fe0c;
case 0x45fe0e:goto L45fe0e;
case 0x45fe0f:c.instructions+=1;goto B45fe0f;
case 0x45fe11:goto L45fe11;
case 0x45fe17:c.instructions+=3;goto B45fe17;
case 0x45fe18:c.instructions+=2;goto B45fe18;
case 0x45fe19:c.instructions+=1;goto B45fe19;
case 0x45fe1c:goto L45fe1c;
case 0x45fe22:goto L45fe22;
case 0x45fe23:c.instructions+=2;goto B45fe23;
case 0x45fe24:c.instructions+=1;goto B45fe24;
case 0x45fe30:goto L45fe30;
case 0x45fe34:c.instructions+=3;goto B45fe34;
case 0x45fe37:c.instructions+=2;goto B45fe37;
case 0x45fe3a:c.instructions+=1;goto B45fe3a;
case 0x45fe3c:goto L45fe3c;
case 0x45fe3f:c.instructions+=1;goto B45fe3f;
case 0x45fe41:goto L45fe41;
case 0x45fe4b:c.instructions+=1;goto B45fe4b;
case 0x45fe4d:goto L45fe4d;
case 0x45fe53:goto L45fe53;
case 0x45fe56:c.instructions+=4;goto B45fe56;
case 0x45fe5d:c.instructions+=3;goto B45fe5d;
case 0x45fe67:c.instructions+=2;goto B45fe67;
case 0x45fe71:c.instructions+=1;goto B45fe71;
case 0x45fe80:goto L45fe80;
case 0x45fe86:c.instructions+=12;goto B45fe86;
case 0x45fe88:c.instructions+=11;goto B45fe88;
case 0x45fe8d:c.instructions+=10;goto B45fe8d;
case 0x45fe8e:c.instructions+=9;goto B45fe8e;
case 0x45fe93:c.instructions+=8;goto B45fe93;
case 0x45fe9a:c.instructions+=7;goto B45fe9a;
case 0x45fe9d:c.instructions+=6;goto B45fe9d;
case 0x45fe9e:c.instructions+=5;goto B45fe9e;
case 0x45fea0:c.instructions+=4;goto B45fea0;
case 0x45fea2:c.instructions+=3;goto B45fea2;
case 0x45fea3:c.instructions+=2;goto B45fea3;
case 0x45fea5:c.instructions+=1;goto B45fea5;
case 0x45feab:goto L45feab;
case 0x45feac:c.instructions+=2;goto B45feac;
case 0x45feb3:c.instructions+=1;goto B45feb3;
case 0x45feb8:goto L45feb8;
case 0x45febe:c.instructions+=4;goto B45febe;
case 0x45fec2:c.instructions+=3;goto B45fec2;
case 0x45fec3:c.instructions+=2;goto B45fec3;
case 0x45fec9:c.instructions+=1;goto B45fec9;
case 0x45fece:goto L45fece;
case 0x45fed1:c.instructions+=1;goto B45fed1;
case 0x45fed6:goto L45fed6;
case 0x45feda:c.instructions+=8;goto B45feda;
case 0x45fede:c.instructions+=7;goto B45fede;
case 0x45fedf:c.instructions+=6;goto B45fedf;
case 0x45fee3:c.instructions+=5;goto B45fee3;
case 0x45fee7:c.instructions+=4;goto B45fee7;
case 0x45feeb:c.instructions+=3;goto B45feeb;
case 0x45feed:c.instructions+=2;goto B45feed;
case 0x45feef:c.instructions+=1;goto B45feef;
case 0x45fef1:goto L45fef1;
case 0x45fef3:c.instructions+=1;goto B45fef3;
case 0x45fef8:goto L45fef8;
case 0x45fefc:c.instructions+=3;goto B45fefc;
case 0x45fefe:c.instructions+=2;goto B45fefe;
case 0x45ff02:c.instructions+=1;goto B45ff02;
case 0x45ff04:goto L45ff04;
case 0x45ff05:c.instructions+=12;goto B45ff05;
case 0x45ff08:c.instructions+=11;goto B45ff08;
case 0x45ff09:c.instructions+=10;goto B45ff09;
case 0x45ff0a:c.instructions+=9;goto B45ff0a;
case 0x45ff0f:c.instructions+=8;goto B45ff0f;
case 0x45ff12:c.instructions+=7;goto B45ff12;
case 0x45ff15:c.instructions+=6;goto B45ff15;
case 0x45ff1c:c.instructions+=5;goto B45ff1c;
case 0x45ff1f:c.instructions+=4;goto B45ff1f;
case 0x45ff22:c.instructions+=3;goto B45ff22;
case 0x45ff25:c.instructions+=2;goto B45ff25;
case 0x45ff28:c.instructions+=1;goto B45ff28;
case 0x45ff2d:goto L45ff2d;
case 0x45ff30:c.instructions+=2;goto B45ff30;
case 0x45ff32:c.instructions+=1;goto B45ff32;
case 0x45ff34:goto L45ff34;
case 0x45ff39:c.instructions+=2;goto B45ff39;
case 0x45ff3e:c.instructions+=1;goto B45ff3e;
case 0x45ff43:goto L45ff43;
case 0x45ff44:c.instructions+=3;goto B45ff44;
case 0x45ff45:c.instructions+=2;goto B45ff45;
case 0x45ff4a:c.instructions+=1;goto B45ff4a;
case 0x45ff4f:goto L45ff4f;
case 0x45ff52:goto L45ff52;
case 0x45ff53:c.instructions+=1;goto B45ff53;
case 0x45ff55:goto L45ff55;
case 0x45ff57:goto L45ff57;
case 0x45ff5d:c.instructions+=6;goto B45ff5d;
case 0x45ff63:c.instructions+=5;goto B45ff63;
case 0x45ff69:c.instructions+=4;goto B45ff69;
case 0x45ff6b:c.instructions+=3;goto B45ff6b;
case 0x45ff6c:c.instructions+=2;goto B45ff6c;
case 0x45ff74:c.instructions+=1;goto B45ff74;
case 0x45ff77:goto L45ff77;
case 0x45ff7d:c.instructions+=4;goto B45ff7d;
case 0x45ff7f:c.instructions+=3;goto B45ff7f;
case 0x45ff85:c.instructions+=2;goto B45ff85;
case 0x45ff86:c.instructions+=1;goto B45ff86;
case 0x45ff89:goto L45ff89;
case 0x45ff90:c.instructions+=1;goto B45ff90;
case 0x45ff91:goto L45ff91;
case 0x45ff95:c.instructions+=5;goto B45ff95;
case 0x45ff96:c.instructions+=4;goto B45ff96;
case 0x45ff97:c.instructions+=3;goto B45ff97;
case 0x45ff9e:c.instructions+=2;goto B45ff9e;
case 0x45ffa1:c.instructions+=1;goto B45ffa1;
case 0x45ffb0:goto L45ffb0;
case 0x45ffb1:c.instructions+=10;goto B45ffb1;
case 0x45ffb3:c.instructions+=9;goto B45ffb3;
case 0x45ffb6:c.instructions+=8;goto B45ffb6;
case 0x45ffb9:c.instructions+=7;goto B45ffb9;
case 0x45ffba:c.instructions+=6;goto B45ffba;
case 0x45ffbb:c.instructions+=5;goto B45ffbb;
case 0x45ffbd:c.instructions+=4;goto B45ffbd;
case 0x45ffc3:c.instructions+=3;goto B45ffc3;
case 0x45ffc5:c.instructions+=2;goto B45ffc5;
case 0x45ffc6:c.instructions+=1;goto B45ffc6;
case 0x45ffcc:goto L45ffcc;
case 0x45ffd1:goto L45ffd1;
case 0x45ffd2:c.instructions+=3;goto B45ffd2;
case 0x45ffd8:c.instructions+=2;goto B45ffd8;
case 0x45ffd9:c.instructions+=1;goto B45ffd9;
case 0x45ffde:goto L45ffde;
case 0x45ffe4:c.instructions+=1;goto B45ffe4;
case 0x45ffe9:goto L45ffe9;
case 0x45ffeb:c.instructions+=2;goto B45ffeb;
case 0x45fff1:c.instructions+=1;goto B45fff1;
case 0x45fff6:goto L45fff6;
case 0x45fff9:c.instructions+=3;goto B45fff9;
case 0x45fffc:c.instructions+=2;goto B45fffc;
case 0x45fffe:c.instructions+=1;goto B45fffe;
default:missing_instruction(c.pc);}
B45f000:L45f000:{c.instructions+=3;NFSU2_TR(0x45f000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f001:{NFSU2_TR(0x45f001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f002:{NFSU2_TR(0x45f002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f003:L45f003:{c.instructions+=4;NFSU2_TR(0x45f003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f005:{NFSU2_TR(0x45f005);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f007:{NFSU2_TR(0x45f007);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f00f:{NFSU2_TR(0x45f00f);
if(r1(R+518)){{goto L45f022;}}
}
B45f011:L45f011:{c.instructions+=3;NFSU2_TR(0x45f011);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f015:{NFSU2_TR(0x45f015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f016:{NFSU2_TR(0x45f016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f01bull));
TAIL_STATIC(0x735070u,735);
}
B45f01b:L45f01b:{c.instructions+=2;NFSU2_TR(0x45f01b);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B45f020:{NFSU2_TR(0x45f020);
if(r1(R+518)){{goto L45f03a;}}
}
B45f022:L45f022:{c.instructions+=5;NFSU2_TR(0x45f022);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45f028:{NFSU2_TR(0x45f028);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45f02e:{NFSU2_TR(0x45f02e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45f030:{NFSU2_TR(0x45f030);
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
B45f033:{NFSU2_TR(0x45f033);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45f03a;}}
}
B45f035:L45f035:{c.instructions+=4;NFSU2_TR(0x45f035);
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
B45f037:{NFSU2_TR(0x45f037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f038:{NFSU2_TR(0x45f038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f039:{NFSU2_TR(0x45f039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f03a:L45f03a:{c.instructions+=4;NFSU2_TR(0x45f03a);
w4(R+0,u32(0x1ull));
}
B45f03f:{NFSU2_TR(0x45f03f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f040:{NFSU2_TR(0x45f040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f041:{NFSU2_TR(0x45f041);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f050:L45f050:{c.instructions+=7;NFSU2_TR(0x45f050);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f051:{NFSU2_TR(0x45f051);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f052:{NFSU2_TR(0x45f052);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f053:{NFSU2_TR(0x45f053);
__builtin_memmove((R+28),(R+4),4);
}
B45f055:{NFSU2_TR(0x45f055);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45f05b:{NFSU2_TR(0x45f05b);
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
B45f05d:{NFSU2_TR(0x45f05d);
if(r1(R+518)){{goto L45f097;}}
}
B45f05f:L45f05f:{c.instructions+=3;NFSU2_TR(0x45f05f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f061:{NFSU2_TR(0x45f061);
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
B45f063:{NFSU2_TR(0x45f063);
if(r1(R+518)){{goto L45f06a;}}
}
B45f065:L45f065:{c.instructions+=1;NFSU2_TR(0x45f065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f06aull));
TAIL_STATIC(0x735550u,735);
}
B45f06a:L45f06a:{c.instructions+=3;NFSU2_TR(0x45f06a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f06e:{NFSU2_TR(0x45f06e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f06f:{NFSU2_TR(0x45f06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f074ull));
TAIL_STATIC(0x734df0u,734);
}
B45f074:L45f074:{c.instructions+=2;NFSU2_TR(0x45f074);
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
B45f077:{NFSU2_TR(0x45f077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f07cull));
TAIL_STATIC(0x734e40u,734);
}
B45f07c:L45f07c:{c.instructions+=5;NFSU2_TR(0x45f07c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f080:{NFSU2_TR(0x45f080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f082:{NFSU2_TR(0x45f082);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f084:{NFSU2_TR(0x45f084);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f085:{NFSU2_TR(0x45f085);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f088ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f088:L45f088:{c.instructions+=1;NFSU2_TR(0x45f088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f08dull));
TAIL_STATIC(0x734e60u,734);
}
B45f08d:L45f08d:{c.instructions+=1;NFSU2_TR(0x45f08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f097:L45f097:{c.instructions+=4;NFSU2_TR(0x45f097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f098:{NFSU2_TR(0x45f098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f099:{NFSU2_TR(0x45f099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f09a:{NFSU2_TR(0x45f09a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f0a0:L45f0a0:{c.instructions+=11;NFSU2_TR(0x45f0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f0a6:{NFSU2_TR(0x45f0a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0a8:{NFSU2_TR(0x45f0a8);
u8 U[4];
w4(U+0,u32(0x77243bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0ad:{NFSU2_TR(0x45f0ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0ae:{NFSU2_TR(0x45f0ae);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B45f0b3:{NFSU2_TR(0x45f0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f0ba:{NFSU2_TR(0x45f0ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B45f0bd:{NFSU2_TR(0x45f0bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f0c0:{NFSU2_TR(0x45f0c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0c1:{NFSU2_TR(0x45f0c1);
__builtin_memmove((R+24),(R+4),4);
}
B45f0c3:{NFSU2_TR(0x45f0c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45f1ac;}}
}
B45f0c9:L45f0c9:{c.instructions+=7;NFSU2_TR(0x45f0c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f0cb:{NFSU2_TR(0x45f0cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0cc:{NFSU2_TR(0x45f0cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0cd:{NFSU2_TR(0x45f0cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0ce:{NFSU2_TR(0x45f0ce);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f0d0:{NFSU2_TR(0x45f0d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f0d1:{NFSU2_TR(0x45f0d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f0d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f0d4:L45f0d4:{c.instructions+=7;NFSU2_TR(0x45f0d4);
u8 U[32];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B45f0d9:{NFSU2_TR(0x45f0d9);
s4(0x7ec844,u32(0x78a1a4ull));
}
B45f0e3:{NFSU2_TR(0x45f0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45f0e9:{NFSU2_TR(0x45f0e9);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B45f0ec:{NFSU2_TR(0x45f0ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f0ee:{NFSU2_TR(0x45f0ee);
__builtin_memmove((R+20),(R+0),4);
}
B45f0f0:{NFSU2_TR(0x45f0f0);
if(r1(R+518)){{goto L45f11f;}}
}
B45f0f2:L45f0f2:{c.instructions+=3;NFSU2_TR(0x45f0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f0f4:{NFSU2_TR(0x45f0f4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f0f6:{NFSU2_TR(0x45f0f6);
if(r1(R+518)){{goto L45f0fd;}}
}
B45f0f8:L45f0f8:{c.instructions+=1;NFSU2_TR(0x45f0f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f0fdull));
TAIL_STATIC(0x735550u,735);
}
B45f0fd:L45f0fd:{c.instructions+=3;NFSU2_TR(0x45f0fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45f101:{NFSU2_TR(0x45f101);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f102:{NFSU2_TR(0x45f102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f107ull));
TAIL_STATIC(0x734df0u,734);
}
B45f107:L45f107:{c.instructions+=2;NFSU2_TR(0x45f107);
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
B45f10a:{NFSU2_TR(0x45f10a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f10full));
TAIL_STATIC(0x734e40u,734);
}
B45f10f:L45f10f:{c.instructions+=5;NFSU2_TR(0x45f10f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f113:{NFSU2_TR(0x45f113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f115:{NFSU2_TR(0x45f115);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f116:{NFSU2_TR(0x45f116);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f117:{NFSU2_TR(0x45f117);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f11aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f11a:L45f11a:{c.instructions+=1;NFSU2_TR(0x45f11a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f11full));
TAIL_STATIC(0x734e60u,734);
}
B45f11f:L45f11f:{c.instructions+=4;NFSU2_TR(0x45f11f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f123:{NFSU2_TR(0x45f123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f124:{NFSU2_TR(0x45f124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f12a:{NFSU2_TR(0x45f12a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f12full));
TAIL_STATIC(0x734df0u,734);
}
B45f12f:L45f12f:{c.instructions+=2;NFSU2_TR(0x45f12f);
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
B45f132:{NFSU2_TR(0x45f132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f137ull));
TAIL_STATIC(0x734e40u,734);
}
B45f137:L45f137:{c.instructions+=9;NFSU2_TR(0x45f137);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f13b:{NFSU2_TR(0x45f13b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f13f:{NFSU2_TR(0x45f13f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f140:{NFSU2_TR(0x45f140);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f144:{NFSU2_TR(0x45f144);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f148:{NFSU2_TR(0x45f148);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f14c:{NFSU2_TR(0x45f14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f14e:{NFSU2_TR(0x45f14e);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f150:{NFSU2_TR(0x45f150);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f152ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45f152:L45f152:{c.instructions+=2;NFSU2_TR(0x45f152);
__builtin_memmove((R+28),(R+0),4);
}
B45f154:{NFSU2_TR(0x45f154);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f159ull));
TAIL_STATIC(0x734e60u,734);
}
B45f159:L45f159:{c.instructions+=4;NFSU2_TR(0x45f159);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f15d:{NFSU2_TR(0x45f15d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f15f:{NFSU2_TR(0x45f15f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f163:{NFSU2_TR(0x45f163);
if(r1(R+518)){{goto L45f196;}}
}
B45f165:L45f165:{c.instructions+=3;NFSU2_TR(0x45f165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f16b:{NFSU2_TR(0x45f16b);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45f16e:{NFSU2_TR(0x45f16e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f173ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45f173:L45f173:{c.instructions+=7;NFSU2_TR(0x45f173);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45f177:{NFSU2_TR(0x45f177);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f178:{NFSU2_TR(0x45f178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f17a:{NFSU2_TR(0x45f17a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f17b:{NFSU2_TR(0x45f17b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f17c:{NFSU2_TR(0x45f17c);
__builtin_memmove((R+4),(R+24),4);
}
B45f17e:{NFSU2_TR(0x45f17e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f181ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f181:L45f181:{c.instructions+=8;NFSU2_TR(0x45f181);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f185:{NFSU2_TR(0x45f185);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45f189:{NFSU2_TR(0x45f189);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f18a:{NFSU2_TR(0x45f18a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f18b:{NFSU2_TR(0x45f18b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f18c:{NFSU2_TR(0x45f18c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f18d:{NFSU2_TR(0x45f18d);
__builtin_memmove((R+4),(R+28),4);
}
B45f18f:{NFSU2_TR(0x45f18f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f194ull));
TAIL_STATIC(0x458260u,458);
}
B45f194:L45f194:{c.instructions+=1;NFSU2_TR(0x45f194);
{goto L45f198;}
}
B45f196:L45f196:{c.instructions+=1;NFSU2_TR(0x45f196);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f198:L45f198:{c.instructions+=7;NFSU2_TR(0x45f198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f19e:{NFSU2_TR(0x45f19e);
__builtin_memmove((R+0),gp(0x82bc1c),4);
}
B45f1a3:{NFSU2_TR(0x45f1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f1a4:{NFSU2_TR(0x45f1a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B45f1a5:{NFSU2_TR(0x45f1a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45f1a6:{NFSU2_TR(0x45f1a6);
__builtin_memmove(gp(0x82bc1c),(R+0),4);
}
B45f1ab:{NFSU2_TR(0x45f1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45f1ac:L45f1ac:{c.instructions+=6;NFSU2_TR(0x45f1ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f1b0:{NFSU2_TR(0x45f1b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f1b2:{NFSU2_TR(0x45f1b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f1b3:{NFSU2_TR(0x45f1b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f1ba:{NFSU2_TR(0x45f1ba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f1bd:{NFSU2_TR(0x45f1bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f1c0:L45f1c0:{c.instructions+=2;NFSU2_TR(0x45f1c0);
w4(R+0,u32(0x7ed3b8ull));
}
B45f1c5:{NFSU2_TR(0x45f1c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f1d0:L45f1d0:{c.instructions+=2;NFSU2_TR(0x45f1d0);
__builtin_memmove((R+0),gp(0x7ed3bc),4);
}
B45f1d5:{NFSU2_TR(0x45f1d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f1e0:L45f1e0:{c.instructions+=3;NFSU2_TR(0x45f1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f1e4:{NFSU2_TR(0x45f1e4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f1e7:{NFSU2_TR(0x45f1e7);
if(r1(R+518)){{goto L45f1fa;}}
}
B45f1e9:L45f1e9:{c.instructions+=2;NFSU2_TR(0x45f1e9);
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
B45f1ea:{NFSU2_TR(0x45f1ea);
if(r1(R+518)){{goto L45f1f2;}}
}
B45f1ec:L45f1ec:{c.instructions+=2;NFSU2_TR(0x45f1ec);
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
B45f1ef:{NFSU2_TR(0x45f1ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f1f2:L45f1f2:{c.instructions+=2;NFSU2_TR(0x45f1f2);
w4(R+0,u32(0x3ull));
}
B45f1f7:{NFSU2_TR(0x45f1f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f1fa:L45f1fa:{c.instructions+=2;NFSU2_TR(0x45f1fa);
w4(R+0,u32(0x8ull));
}
B45f1ff:{NFSU2_TR(0x45f1ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f210:L45f210:{c.instructions+=8;NFSU2_TR(0x45f210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f211:{NFSU2_TR(0x45f211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f212:{NFSU2_TR(0x45f212);
__builtin_memmove((R+24),(R+4),4);
}
B45f214:{NFSU2_TR(0x45f214);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f218:{NFSU2_TR(0x45f218);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f21b:{NFSU2_TR(0x45f21b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45f21d:{NFSU2_TR(0x45f21d);
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
B45f220:{NFSU2_TR(0x45f220);
if(r1(R+518)){{goto L45f22f;}}
}
B45f222:L45f222:{c.instructions+=2;NFSU2_TR(0x45f222);
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
B45f225:{NFSU2_TR(0x45f225);
if(r1(R+518)){{goto L45f22f;}}
}
B45f227:L45f227:{c.instructions+=2;NFSU2_TR(0x45f227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f22d:{NFSU2_TR(0x45f22d);
{goto L45f235;}
}
B45f22f:L45f22f:{c.instructions+=1;NFSU2_TR(0x45f22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f235:L45f235:{c.instructions+=5;NFSU2_TR(0x45f235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f238:{NFSU2_TR(0x45f238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f23e:{NFSU2_TR(0x45f23e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45f245:{NFSU2_TR(0x45f245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f247:{NFSU2_TR(0x45f247);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f24aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f24a:L45f24a:{c.instructions+=2;NFSU2_TR(0x45f24a);
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
B45f24c:{NFSU2_TR(0x45f24c);
if(r1(R+518)){{goto L45f261;}}
}
B45f24e:L45f24e:{c.instructions+=3;NFSU2_TR(0x45f24e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f250:{NFSU2_TR(0x45f250);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x300ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f256:{NFSU2_TR(0x45f256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f25bull));
TAIL_STATIC(0x5995e0u,599);
}
B45f25b:L45f25b:{c.instructions+=1;NFSU2_TR(0x45f25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f261:L45f261:{c.instructions+=10;NFSU2_TR(0x45f261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f267:{NFSU2_TR(0x45f267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f26d:{NFSU2_TR(0x45f26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f273:{NFSU2_TR(0x45f273);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45f279:{NFSU2_TR(0x45f279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f27f:{NFSU2_TR(0x45f27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f285:{NFSU2_TR(0x45f285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B45f28f:{NFSU2_TR(0x45f28f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f290:{NFSU2_TR(0x45f290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45f291:{NFSU2_TR(0x45f291);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f2a0:L45f2a0:{c.instructions+=4;NFSU2_TR(0x45f2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f2a6:{NFSU2_TR(0x45f2a6);
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
B45f2a8:{NFSU2_TR(0x45f2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f2af:{NFSU2_TR(0x45f2af);
if(r1(R+518)){{goto L45f2cd;}}
}
B45f2b1:L45f2b1:{c.instructions+=5;NFSU2_TR(0x45f2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f2b8:{NFSU2_TR(0x45f2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f2be:{NFSU2_TR(0x45f2be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f2c0:{NFSU2_TR(0x45f2c0);
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
B45f2c2:{NFSU2_TR(0x45f2c2);
if(r1(R+518)){{goto L45f2cd;}}
}
B45f2c4:L45f2c4:{c.instructions+=3;NFSU2_TR(0x45f2c4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f2c7:{NFSU2_TR(0x45f2c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f2c8:{NFSU2_TR(0x45f2c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f2cdull));
TAIL_STATIC(0x735580u,735);
}
B45f2cd:L45f2cd:{c.instructions+=1;NFSU2_TR(0x45f2cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f2d0:L45f2d0:{c.instructions+=14;NFSU2_TR(0x45f2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f2d6:{NFSU2_TR(0x45f2d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f2d8:{NFSU2_TR(0x45f2d8);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f2dd:{NFSU2_TR(0x45f2dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f2de:{NFSU2_TR(0x45f2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f2e5:{NFSU2_TR(0x45f2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B45f2e8:{NFSU2_TR(0x45f2e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f2e9:{NFSU2_TR(0x45f2e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f2ea:{NFSU2_TR(0x45f2ea);
__builtin_memmove((R+20),(R+4),4);
}
B45f2ec:{NFSU2_TR(0x45f2ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f2ed:{NFSU2_TR(0x45f2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45f2f3:{NFSU2_TR(0x45f2f3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45f2f5:{NFSU2_TR(0x45f2f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f2f7:{NFSU2_TR(0x45f2f7);
if(r1(R+518)){{goto L45f32c;}}
}
B45f2f9:L45f2f9:{c.instructions+=3;NFSU2_TR(0x45f2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f2fb:{NFSU2_TR(0x45f2fb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f2fd:{NFSU2_TR(0x45f2fd);
if(r1(R+518)){{goto L45f304;}}
}
B45f2ff:L45f2ff:{c.instructions+=1;NFSU2_TR(0x45f2ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f304ull));
TAIL_STATIC(0x735550u,735);
}
B45f304:L45f304:{c.instructions+=3;NFSU2_TR(0x45f304);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f308:{NFSU2_TR(0x45f308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f309:{NFSU2_TR(0x45f309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f30eull));
TAIL_STATIC(0x734df0u,734);
}
B45f30e:L45f30e:{c.instructions+=2;NFSU2_TR(0x45f30e);
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
B45f311:{NFSU2_TR(0x45f311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f316ull));
TAIL_STATIC(0x734e40u,734);
}
B45f316:L45f316:{c.instructions+=5;NFSU2_TR(0x45f316);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f31a:{NFSU2_TR(0x45f31a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f31c:{NFSU2_TR(0x45f31c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f31d:{NFSU2_TR(0x45f31d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f31e:{NFSU2_TR(0x45f31e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f321ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f321:L45f321:{c.instructions+=1;NFSU2_TR(0x45f321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f326ull));
TAIL_STATIC(0x734e60u,734);
}
B45f326:L45f326:{c.instructions+=1;NFSU2_TR(0x45f326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f32c:L45f32c:{c.instructions+=4;NFSU2_TR(0x45f32c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f330:{NFSU2_TR(0x45f330);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f331:{NFSU2_TR(0x45f331);
s4(0x7ec844,u32(0x78a1b4ull));
}
B45f33b:{NFSU2_TR(0x45f33b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f340ull));
TAIL_STATIC(0x734df0u,734);
}
B45f340:L45f340:{c.instructions+=2;NFSU2_TR(0x45f340);
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
B45f343:{NFSU2_TR(0x45f343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f348ull));
TAIL_STATIC(0x734e40u,734);
}
B45f348:L45f348:{c.instructions+=9;NFSU2_TR(0x45f348);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f34c:{NFSU2_TR(0x45f34c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f350:{NFSU2_TR(0x45f350);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f351:{NFSU2_TR(0x45f351);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f355:{NFSU2_TR(0x45f355);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f359:{NFSU2_TR(0x45f359);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f35d:{NFSU2_TR(0x45f35d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f35f:{NFSU2_TR(0x45f35f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f361:{NFSU2_TR(0x45f361);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f363ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45f363:L45f363:{c.instructions+=2;NFSU2_TR(0x45f363);
__builtin_memmove((R+24),(R+0),4);
}
B45f365:{NFSU2_TR(0x45f365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f36aull));
TAIL_STATIC(0x734e60u,734);
}
B45f36a:L45f36a:{c.instructions+=4;NFSU2_TR(0x45f36a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f36e:{NFSU2_TR(0x45f36e);
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
B45f370:{NFSU2_TR(0x45f370);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f374:{NFSU2_TR(0x45f374);
if(r1(R+518)){{goto L45f3bf;}}
}
B45f376:L45f376:{c.instructions+=10;NFSU2_TR(0x45f376);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f377:{NFSU2_TR(0x45f377);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f37a:{NFSU2_TR(0x45f37a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f37b:{NFSU2_TR(0x45f37b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f37c:{NFSU2_TR(0x45f37c);
u8 U[4];
w4(U+0,u32(0x82c5b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f381:{NFSU2_TR(0x45f381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45f383:{NFSU2_TR(0x45f383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f386:{NFSU2_TR(0x45f386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f389:{NFSU2_TR(0x45f389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f38c:{NFSU2_TR(0x45f38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f391ull));
TAIL_STATIC(0x7358c0u,735);
}
B45f391:L45f391:{c.instructions+=3;NFSU2_TR(0x45f391);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45f394:{NFSU2_TR(0x45f394);
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
B45f396:{NFSU2_TR(0x45f396);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f3b6;}}
}
B45f398:L45f398:{c.instructions+=3;NFSU2_TR(0x45f398);
u8 U[4];
w4(U+0,u32(0x7eddb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f39d:{NFSU2_TR(0x45f39d);
w4(R+4,u32(0x82c5b0ull));
}
B45f3a2:{NFSU2_TR(0x45f3a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f3a7ull));
TAIL_STATIC(0x735840u,735);
}
B45f3a7:L45f3a7:{c.instructions+=4;NFSU2_TR(0x45f3a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f3a8:{NFSU2_TR(0x45f3a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f3a9:{NFSU2_TR(0x45f3a9);
u8 U[4];
w4(U+0,u32(0x82c5b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f3ae:{NFSU2_TR(0x45f3ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f3b3ull));
TAIL_STATIC(0x7358c0u,735);
}
B45f3b3:L45f3b3:{c.instructions+=1;NFSU2_TR(0x45f3b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45f3b6:L45f3b6:{c.instructions+=3;NFSU2_TR(0x45f3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f3bc:{NFSU2_TR(0x45f3bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f3bd:{NFSU2_TR(0x45f3bd);
{goto L45f3c5;}
}
B45f3bf:L45f3bf:{c.instructions+=1;NFSU2_TR(0x45f3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f3c5:L45f3c5:{c.instructions+=8;NFSU2_TR(0x45f3c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f3c9:{NFSU2_TR(0x45f3c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f3ca:{NFSU2_TR(0x45f3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f3d1:{NFSU2_TR(0x45f3d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45f3d2:{NFSU2_TR(0x45f3d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45f3d3:{NFSU2_TR(0x45f3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f3da:{NFSU2_TR(0x45f3da);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f3dd:{NFSU2_TR(0x45f3dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f3e0:L45f3e0:{c.instructions+=4;NFSU2_TR(0x45f3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f3e6:{NFSU2_TR(0x45f3e6);
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
B45f3e8:{NFSU2_TR(0x45f3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f3ef:{NFSU2_TR(0x45f3ef);
if(r1(R+518)){{goto L45f40d;}}
}
B45f3f1:L45f3f1:{c.instructions+=5;NFSU2_TR(0x45f3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f3f8:{NFSU2_TR(0x45f3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f3fe:{NFSU2_TR(0x45f3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f400:{NFSU2_TR(0x45f400);
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
B45f402:{NFSU2_TR(0x45f402);
if(r1(R+518)){{goto L45f40d;}}
}
B45f404:L45f404:{c.instructions+=3;NFSU2_TR(0x45f404);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f407:{NFSU2_TR(0x45f407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f408:{NFSU2_TR(0x45f408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f40dull));
TAIL_STATIC(0x735580u,735);
}
B45f40d:L45f40d:{c.instructions+=1;NFSU2_TR(0x45f40d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f410:L45f410:{c.instructions+=9;NFSU2_TR(0x45f410);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f411:{NFSU2_TR(0x45f411);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f412:{NFSU2_TR(0x45f412);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f413:{NFSU2_TR(0x45f413);
__builtin_memmove((R+24),(R+4),4);
}
B45f415:{NFSU2_TR(0x45f415);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f416:{NFSU2_TR(0x45f416);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45f41c:{NFSU2_TR(0x45f41c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45f41e:{NFSU2_TR(0x45f41e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f420:{NFSU2_TR(0x45f420);
if(r1(R+518)){{goto L45f44f;}}
}
B45f422:L45f422:{c.instructions+=3;NFSU2_TR(0x45f422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f424:{NFSU2_TR(0x45f424);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f426:{NFSU2_TR(0x45f426);
if(r1(R+518)){{goto L45f42d;}}
}
B45f428:L45f428:{c.instructions+=1;NFSU2_TR(0x45f428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f42dull));
TAIL_STATIC(0x735550u,735);
}
B45f42d:L45f42d:{c.instructions+=3;NFSU2_TR(0x45f42d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f431:{NFSU2_TR(0x45f431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f432:{NFSU2_TR(0x45f432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f437ull));
TAIL_STATIC(0x734df0u,734);
}
B45f437:L45f437:{c.instructions+=2;NFSU2_TR(0x45f437);
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
B45f43a:{NFSU2_TR(0x45f43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f43full));
TAIL_STATIC(0x734e40u,734);
}
B45f43f:L45f43f:{c.instructions+=5;NFSU2_TR(0x45f43f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f443:{NFSU2_TR(0x45f443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f445:{NFSU2_TR(0x45f445);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f446:{NFSU2_TR(0x45f446);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f447:{NFSU2_TR(0x45f447);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f44aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f44a:L45f44a:{c.instructions+=1;NFSU2_TR(0x45f44a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f44full));
TAIL_STATIC(0x734e60u,734);
}
B45f44f:L45f44f:{c.instructions+=4;NFSU2_TR(0x45f44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45f455:{NFSU2_TR(0x45f455);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f457:{NFSU2_TR(0x45f457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f45d:{NFSU2_TR(0x45f45d);
if(r1(R+518)){{goto L45f48c;}}
}
B45f45f:L45f45f:{c.instructions+=3;NFSU2_TR(0x45f45f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f461:{NFSU2_TR(0x45f461);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f463:{NFSU2_TR(0x45f463);
if(r1(R+518)){{goto L45f46a;}}
}
B45f465:L45f465:{c.instructions+=1;NFSU2_TR(0x45f465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f46aull));
TAIL_STATIC(0x735550u,735);
}
B45f46a:L45f46a:{c.instructions+=3;NFSU2_TR(0x45f46a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45f46e:{NFSU2_TR(0x45f46e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f46f:{NFSU2_TR(0x45f46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f474ull));
TAIL_STATIC(0x734df0u,734);
}
B45f474:L45f474:{c.instructions+=2;NFSU2_TR(0x45f474);
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
B45f477:{NFSU2_TR(0x45f477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f47cull));
TAIL_STATIC(0x734e40u,734);
}
B45f47c:L45f47c:{c.instructions+=5;NFSU2_TR(0x45f47c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f480:{NFSU2_TR(0x45f480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f482:{NFSU2_TR(0x45f482);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f483:{NFSU2_TR(0x45f483);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f484:{NFSU2_TR(0x45f484);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f487ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f487:L45f487:{c.instructions+=1;NFSU2_TR(0x45f487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f48cull));
TAIL_STATIC(0x734e60u,734);
}
B45f48c:L45f48c:{c.instructions+=7;NFSU2_TR(0x45f48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f48d:{NFSU2_TR(0x45f48d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f493:{NFSU2_TR(0x45f493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f496:{NFSU2_TR(0x45f496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f497:{NFSU2_TR(0x45f497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45f498:{NFSU2_TR(0x45f498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f499:{NFSU2_TR(0x45f499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f4a0:L45f4a0:{c.instructions+=4;NFSU2_TR(0x45f4a0);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B45f4a5:{NFSU2_TR(0x45f4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f4a8:{NFSU2_TR(0x45f4a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f4aa:{NFSU2_TR(0x45f4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f4afull));
TAIL_STATIC(0x45ad40u,45a);
}
B45f4af:L45f4af:{c.instructions+=1;NFSU2_TR(0x45f4af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f4b0:L45f4b0:{c.instructions+=9;NFSU2_TR(0x45f4b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f4b1:{NFSU2_TR(0x45f4b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f4b2:{NFSU2_TR(0x45f4b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f4b3:{NFSU2_TR(0x45f4b3);
__builtin_memmove((R+24),(R+4),4);
}
B45f4b5:{NFSU2_TR(0x45f4b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f4bb:{NFSU2_TR(0x45f4bb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45f4bd:{NFSU2_TR(0x45f4bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f4bf:{NFSU2_TR(0x45f4bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f4c0:{NFSU2_TR(0x45f4c0);
if(r1(R+518)){{goto L45f581;}}
}
B45f4c6:L45f4c6:{c.instructions+=4;NFSU2_TR(0x45f4c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f4c8:{NFSU2_TR(0x45f4c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f4ca:{NFSU2_TR(0x45f4ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f4ce:{NFSU2_TR(0x45f4ce);
if(r1(R+518)){{goto L45f4e3;}}
}
B45f4d0:L45f4d0:{c.instructions+=4;NFSU2_TR(0x45f4d0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45f4d4:{NFSU2_TR(0x45f4d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f4d5:{NFSU2_TR(0x45f4d5);
__builtin_memmove((R+4),(R+0),4);
}
B45f4d7:{NFSU2_TR(0x45f4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f4dcull));
TAIL_STATIC(0x735070u,735);
}
B45f4dc:L45f4dc:{c.instructions+=2;NFSU2_TR(0x45f4dc);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B45f4e1:{NFSU2_TR(0x45f4e1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45f522;}}
}
B45f4e3:L45f4e3:{c.instructions+=3;NFSU2_TR(0x45f4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45f4e9:{NFSU2_TR(0x45f4e9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f4eb:{NFSU2_TR(0x45f4eb);
if(r1(R+518)){{goto L45f51a;}}
}
B45f4ed:L45f4ed:{c.instructions+=3;NFSU2_TR(0x45f4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f4ef:{NFSU2_TR(0x45f4ef);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f4f1:{NFSU2_TR(0x45f4f1);
if(r1(R+518)){{goto L45f4f8;}}
}
B45f4f3:L45f4f3:{c.instructions+=1;NFSU2_TR(0x45f4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f4f8ull));
TAIL_STATIC(0x735550u,735);
}
B45f4f8:L45f4f8:{c.instructions+=3;NFSU2_TR(0x45f4f8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45f4fc:{NFSU2_TR(0x45f4fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f4fd:{NFSU2_TR(0x45f4fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f502ull));
TAIL_STATIC(0x734df0u,734);
}
B45f502:L45f502:{c.instructions+=2;NFSU2_TR(0x45f502);
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
B45f505:{NFSU2_TR(0x45f505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f50aull));
TAIL_STATIC(0x734e40u,734);
}
B45f50a:L45f50a:{c.instructions+=5;NFSU2_TR(0x45f50a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f50e:{NFSU2_TR(0x45f50e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f510:{NFSU2_TR(0x45f510);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f511:{NFSU2_TR(0x45f511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f512:{NFSU2_TR(0x45f512);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f515ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f515:L45f515:{c.instructions+=1;NFSU2_TR(0x45f515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f51aull));
TAIL_STATIC(0x734e60u,734);
}
B45f51a:L45f51a:{c.instructions+=2;NFSU2_TR(0x45f51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f520:{NFSU2_TR(0x45f520);
{goto L45f581;}
}
B45f522:L45f522:{c.instructions+=4;NFSU2_TR(0x45f522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f524:{NFSU2_TR(0x45f524);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f525:{NFSU2_TR(0x45f525);
__builtin_memmove((R+4),(R+24),4);
}
B45f527:{NFSU2_TR(0x45f527);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f52aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f52a:L45f52a:{c.instructions+=3;NFSU2_TR(0x45f52a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45f52c:{NFSU2_TR(0x45f52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f532:{NFSU2_TR(0x45f532);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f538;}}
}
B45f534:L45f534:{c.instructions+=2;NFSU2_TR(0x45f534);
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
B45f536:{NFSU2_TR(0x45f536);
{goto L45f544;}
}
B45f538:L45f538:{c.instructions+=2;NFSU2_TR(0x45f538);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f53d:{NFSU2_TR(0x45f53d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f544;}}
}
B45f53f:L45f53f:{c.instructions+=1;NFSU2_TR(0x45f53f);
w4(R+0,u32(0x7fffull));
}
B45f544:L45f544:{c.instructions+=5;NFSU2_TR(0x45f544);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f547:{NFSU2_TR(0x45f547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f549:{NFSU2_TR(0x45f549);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f54a:{NFSU2_TR(0x45f54a);
__builtin_memmove((R+4),(R+24),4);
}
B45f54c:{NFSU2_TR(0x45f54c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f54full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f54f:L45f54f:{c.instructions+=3;NFSU2_TR(0x45f54f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45f551:{NFSU2_TR(0x45f551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f557:{NFSU2_TR(0x45f557);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f55d;}}
}
B45f559:L45f559:{c.instructions+=2;NFSU2_TR(0x45f559);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f55b:{NFSU2_TR(0x45f55b);
{goto L45f569;}
}
B45f55d:L45f55d:{c.instructions+=2;NFSU2_TR(0x45f55d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f562:{NFSU2_TR(0x45f562);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f569;}}
}
B45f564:L45f564:{c.instructions+=1;NFSU2_TR(0x45f564);
w4(R+0,u32(0xffffull));
}
B45f569:L45f569:{c.instructions+=5;NFSU2_TR(0x45f569);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f56c:{NFSU2_TR(0x45f56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f572:{NFSU2_TR(0x45f572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f574:{NFSU2_TR(0x45f574);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f576:{NFSU2_TR(0x45f576);
if(r1(R+518)){{goto L45f581;}}
}
B45f578:L45f578:{c.instructions+=3;NFSU2_TR(0x45f578);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f57b:{NFSU2_TR(0x45f57b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f57c:{NFSU2_TR(0x45f57c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f581ull));
TAIL_STATIC(0x735580u,735);
}
B45f581:L45f581:{c.instructions+=3;NFSU2_TR(0x45f581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f587:{NFSU2_TR(0x45f587);
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
B45f589:{NFSU2_TR(0x45f589);
if(r1(R+518)){{goto L45f684;}}
}
B45f58f:L45f58f:{c.instructions+=4;NFSU2_TR(0x45f58f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f591:{NFSU2_TR(0x45f591);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f593:{NFSU2_TR(0x45f593);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f597:{NFSU2_TR(0x45f597);
if(r1(R+518)){{goto L45f5ac;}}
}
B45f599:L45f599:{c.instructions+=4;NFSU2_TR(0x45f599);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45f59d:{NFSU2_TR(0x45f59d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f59e:{NFSU2_TR(0x45f59e);
__builtin_memmove((R+4),(R+0),4);
}
B45f5a0:{NFSU2_TR(0x45f5a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f5a5ull));
TAIL_STATIC(0x735070u,735);
}
B45f5a5:L45f5a5:{c.instructions+=2;NFSU2_TR(0x45f5a5);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45f5aa:{NFSU2_TR(0x45f5aa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45f5ee;}}
}
B45f5ac:L45f5ac:{c.instructions+=3;NFSU2_TR(0x45f5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45f5b2:{NFSU2_TR(0x45f5b2);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f5b4:{NFSU2_TR(0x45f5b4);
if(r1(R+518)){{goto L45f5e3;}}
}
B45f5b6:L45f5b6:{c.instructions+=3;NFSU2_TR(0x45f5b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f5b8:{NFSU2_TR(0x45f5b8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f5ba:{NFSU2_TR(0x45f5ba);
if(r1(R+518)){{goto L45f5c1;}}
}
B45f5bc:L45f5bc:{c.instructions+=1;NFSU2_TR(0x45f5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f5c1ull));
TAIL_STATIC(0x735550u,735);
}
B45f5c1:L45f5c1:{c.instructions+=3;NFSU2_TR(0x45f5c1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45f5c5:{NFSU2_TR(0x45f5c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f5c6:{NFSU2_TR(0x45f5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f5cbull));
TAIL_STATIC(0x734df0u,734);
}
B45f5cb:L45f5cb:{c.instructions+=2;NFSU2_TR(0x45f5cb);
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
B45f5ce:{NFSU2_TR(0x45f5ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f5d3ull));
TAIL_STATIC(0x734e40u,734);
}
B45f5d3:L45f5d3:{c.instructions+=5;NFSU2_TR(0x45f5d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f5d7:{NFSU2_TR(0x45f5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f5d9:{NFSU2_TR(0x45f5d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f5da:{NFSU2_TR(0x45f5da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f5db:{NFSU2_TR(0x45f5db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f5deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f5de:L45f5de:{c.instructions+=1;NFSU2_TR(0x45f5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f5e3ull));
TAIL_STATIC(0x734e60u,734);
}
B45f5e3:L45f5e3:{c.instructions+=6;NFSU2_TR(0x45f5e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f5e4:{NFSU2_TR(0x45f5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f5ea:{NFSU2_TR(0x45f5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f5eb:{NFSU2_TR(0x45f5eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45f5ec:{NFSU2_TR(0x45f5ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f5ed:{NFSU2_TR(0x45f5ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f5ee:L45f5ee:{c.instructions+=5;NFSU2_TR(0x45f5ee);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45f5f2:{NFSU2_TR(0x45f5f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f5f3:{NFSU2_TR(0x45f5f3);
__builtin_memmove((R+4),(R+24),4);
}
B45f5f5:{NFSU2_TR(0x45f5f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f5fd:{NFSU2_TR(0x45f5fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f602ull));
TAIL_STATIC(0x45e3d0u,45e);
}
B45f602:L45f602:{c.instructions+=4;NFSU2_TR(0x45f602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f604:{NFSU2_TR(0x45f604);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f606:{NFSU2_TR(0x45f606);
__builtin_memmove((R+4),(R+24),4);
}
B45f608:{NFSU2_TR(0x45f608);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f60bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f60b:L45f60b:{c.instructions+=3;NFSU2_TR(0x45f60b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45f60d:{NFSU2_TR(0x45f60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f613:{NFSU2_TR(0x45f613);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f619;}}
}
B45f615:L45f615:{c.instructions+=2;NFSU2_TR(0x45f615);
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
B45f617:{NFSU2_TR(0x45f617);
{goto L45f625;}
}
B45f619:L45f619:{c.instructions+=2;NFSU2_TR(0x45f619);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f61e:{NFSU2_TR(0x45f61e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f625;}}
}
B45f620:L45f620:{c.instructions+=1;NFSU2_TR(0x45f620);
w4(R+0,u32(0x7fffull));
}
B45f625:L45f625:{c.instructions+=5;NFSU2_TR(0x45f625);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f628:{NFSU2_TR(0x45f628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f62a:{NFSU2_TR(0x45f62a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f62c:{NFSU2_TR(0x45f62c);
__builtin_memmove((R+4),(R+24),4);
}
B45f62e:{NFSU2_TR(0x45f62e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f631ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f631:L45f631:{c.instructions+=3;NFSU2_TR(0x45f631);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45f633:{NFSU2_TR(0x45f633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f639:{NFSU2_TR(0x45f639);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f63f;}}
}
B45f63b:L45f63b:{c.instructions+=2;NFSU2_TR(0x45f63b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f63d:{NFSU2_TR(0x45f63d);
{goto L45f64b;}
}
B45f63f:L45f63f:{c.instructions+=2;NFSU2_TR(0x45f63f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f644:{NFSU2_TR(0x45f644);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f64b;}}
}
B45f646:L45f646:{c.instructions+=1;NFSU2_TR(0x45f646);
w4(R+0,u32(0xffffull));
}
B45f64b:L45f64b:{c.instructions+=5;NFSU2_TR(0x45f64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f64e:{NFSU2_TR(0x45f64e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f652:{NFSU2_TR(0x45f652);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45f654:{NFSU2_TR(0x45f654);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f65a:{NFSU2_TR(0x45f65a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f660;}}
}
B45f65c:L45f65c:{c.instructions+=2;NFSU2_TR(0x45f65c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f65e:{NFSU2_TR(0x45f65e);
{goto L45f66c;}
}
B45f660:L45f660:{c.instructions+=2;NFSU2_TR(0x45f660);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f665:{NFSU2_TR(0x45f665);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f66c;}}
}
B45f667:L45f667:{c.instructions+=1;NFSU2_TR(0x45f667);
w4(R+0,u32(0x3fffull));
}
B45f66c:L45f66c:{c.instructions+=5;NFSU2_TR(0x45f66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f66f:{NFSU2_TR(0x45f66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45f675:{NFSU2_TR(0x45f675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f677:{NFSU2_TR(0x45f677);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45f679:{NFSU2_TR(0x45f679);
if(r1(R+518)){{goto L45f684;}}
}
B45f67b:L45f67b:{c.instructions+=3;NFSU2_TR(0x45f67b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f67e:{NFSU2_TR(0x45f67e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f67f:{NFSU2_TR(0x45f67f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f684ull));
TAIL_STATIC(0x735580u,735);
}
B45f684:L45f684:{c.instructions+=5;NFSU2_TR(0x45f684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f685:{NFSU2_TR(0x45f685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f686:{NFSU2_TR(0x45f686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45f687:{NFSU2_TR(0x45f687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45f688:{NFSU2_TR(0x45f688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f690:L45f690:{c.instructions+=2;NFSU2_TR(0x45f690);
w4(R+0,u32(0x7ed3c8ull));
}
B45f695:{NFSU2_TR(0x45f695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f6a0:L45f6a0:{c.instructions+=2;NFSU2_TR(0x45f6a0);
__builtin_memmove((R+0),gp(0x7ed3cc),4);
}
B45f6a5:{NFSU2_TR(0x45f6a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f6b0:L45f6b0:{c.instructions+=3;NFSU2_TR(0x45f6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f6b4:{NFSU2_TR(0x45f6b4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f6b7:{NFSU2_TR(0x45f6b7);
if(r1(R+518)){{goto L45f6ca;}}
}
B45f6b9:L45f6b9:{c.instructions+=2;NFSU2_TR(0x45f6b9);
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
B45f6ba:{NFSU2_TR(0x45f6ba);
if(r1(R+518)){{goto L45f6c2;}}
}
B45f6bc:L45f6bc:{c.instructions+=2;NFSU2_TR(0x45f6bc);
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
B45f6bf:{NFSU2_TR(0x45f6bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f6c2:L45f6c2:{c.instructions+=2;NFSU2_TR(0x45f6c2);
w4(R+0,u32(0x8ull));
}
B45f6c7:{NFSU2_TR(0x45f6c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f6ca:L45f6ca:{c.instructions+=2;NFSU2_TR(0x45f6ca);
w4(R+0,u32(0x3ull));
}
B45f6cf:{NFSU2_TR(0x45f6cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f6e0:L45f6e0:{c.instructions+=6;NFSU2_TR(0x45f6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f6e4:{NFSU2_TR(0x45f6e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f6e5:{NFSU2_TR(0x45f6e5);
__builtin_memmove((R+24),(R+4),4);
}
B45f6e7:{NFSU2_TR(0x45f6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f6ea:{NFSU2_TR(0x45f6ea);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B45f6ed:{NFSU2_TR(0x45f6ed);
if(r1(R+518)){{goto L45f700;}}
}
B45f6ef:L45f6ef:{c.instructions+=2;NFSU2_TR(0x45f6ef);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B45f6f2:{NFSU2_TR(0x45f6f2);
if(r1(R+518)){{goto L45f700;}}
}
B45f6f4:L45f6f4:{c.instructions+=2;NFSU2_TR(0x45f6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f6fe:{NFSU2_TR(0x45f6fe);
{goto L45f706;}
}
B45f700:L45f700:{c.instructions+=1;NFSU2_TR(0x45f700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f706:L45f706:{c.instructions+=5;NFSU2_TR(0x45f706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f70c:{NFSU2_TR(0x45f70c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f70f:{NFSU2_TR(0x45f70f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45f716:{NFSU2_TR(0x45f716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f718:{NFSU2_TR(0x45f718);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f71bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f71b:L45f71b:{c.instructions+=5;NFSU2_TR(0x45f71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f721:{NFSU2_TR(0x45f721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f727:{NFSU2_TR(0x45f727);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f72a:{NFSU2_TR(0x45f72a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f72d:{NFSU2_TR(0x45f72d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f73d;}}
}
B45f72f:L45f72f:{c.instructions+=3;NFSU2_TR(0x45f72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x7f3040ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f739:{NFSU2_TR(0x45f739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f73a:{NFSU2_TR(0x45f73a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f73d:L45f73d:{c.instructions+=5;NFSU2_TR(0x45f73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45f740:{NFSU2_TR(0x45f740);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f3040ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45f747:{NFSU2_TR(0x45f747);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f74d:{NFSU2_TR(0x45f74d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f74e:{NFSU2_TR(0x45f74e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f760:L45f760:{c.instructions+=3;NFSU2_TR(0x45f760);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f766:{NFSU2_TR(0x45f766);
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
B45f768:{NFSU2_TR(0x45f768);
if(r1(R+518)){{goto L45f775;}}
}
B45f76a:L45f76a:{c.instructions+=3;NFSU2_TR(0x45f76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f771:{NFSU2_TR(0x45f771);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f774:{NFSU2_TR(0x45f774);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f775:L45f775:{c.instructions+=2;NFSU2_TR(0x45f775);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f77c:{NFSU2_TR(0x45f77c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f780:L45f780:{c.instructions+=3;NFSU2_TR(0x45f780);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45f786:{NFSU2_TR(0x45f786);
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
B45f788:{NFSU2_TR(0x45f788);
if(r1(R+518)){{goto L45f7f7;}}
}
B45f78a:L45f78a:{c.instructions+=3;NFSU2_TR(0x45f78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f78d:{NFSU2_TR(0x45f78d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B45f791:{NFSU2_TR(0x45f791);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45f7f7;}}
}
B45f793:L45f793:{c.instructions+=4;NFSU2_TR(0x45f793);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f799:{NFSU2_TR(0x45f799);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B45f79f:{NFSU2_TR(0x45f79f);
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
B45f7a1:{NFSU2_TR(0x45f7a1);
if(r1(R+518)){{goto L45f7f7;}}
}
B45f7a3:L45f7a3:{c.instructions+=3;NFSU2_TR(0x45f7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45f7a9:{NFSU2_TR(0x45f7a9);
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
B45f7ab:{NFSU2_TR(0x45f7ab);
if(r1(R+518)){{goto L45f7f7;}}
}
B45f7ad:L45f7ad:{c.instructions+=4;NFSU2_TR(0x45f7ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f7ae:{NFSU2_TR(0x45f7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45f7b1:{NFSU2_TR(0x45f7b1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f7b4:{NFSU2_TR(0x45f7b4);
if(r1(R+518)){{goto L45f7bb;}}
}
B45f7b6:L45f7b6:{c.instructions+=2;NFSU2_TR(0x45f7b6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B45f7b9:{NFSU2_TR(0x45f7b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45f7f6;}}
}
B45f7bb:L45f7bb:{c.instructions+=2;NFSU2_TR(0x45f7bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45f7bf:{NFSU2_TR(0x45f7bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45f7d7;}}
}
B45f7c1:L45f7c1:{c.instructions+=3;NFSU2_TR(0x45f7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f7c8:{NFSU2_TR(0x45f7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f7ce:{NFSU2_TR(0x45f7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f7d3ull));
TAIL_STATIC(0x458190u,458);
}
B45f7d3:L45f7d3:{c.instructions+=2;NFSU2_TR(0x45f7d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f7d4:{NFSU2_TR(0x45f7d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f7d7:L45f7d7:{c.instructions+=5;NFSU2_TR(0x45f7d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45f7de:{NFSU2_TR(0x45f7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f7e4:{NFSU2_TR(0x45f7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f7eb:{NFSU2_TR(0x45f7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f7f1:{NFSU2_TR(0x45f7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f7f6ull));
TAIL_STATIC(0x458190u,458);
}
B45f7f6:L45f7f6:{c.instructions+=1;NFSU2_TR(0x45f7f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f7f7:L45f7f7:{c.instructions+=1;NFSU2_TR(0x45f7f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f800:L45f800:{c.instructions+=5;NFSU2_TR(0x45f800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f801:{NFSU2_TR(0x45f801);
__builtin_memmove((R+24),(R+4),4);
}
B45f803:{NFSU2_TR(0x45f803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f809:{NFSU2_TR(0x45f809);
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
B45f80b:{NFSU2_TR(0x45f80b);
if(r1(R+518)){{goto L45f92f;}}
}
B45f811:L45f811:{c.instructions+=4;NFSU2_TR(0x45f811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45f813:{NFSU2_TR(0x45f813);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f814:{NFSU2_TR(0x45f814);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f816:{NFSU2_TR(0x45f816);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f819ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f819:L45f819:{c.instructions+=8;NFSU2_TR(0x45f819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f81f:{NFSU2_TR(0x45f81f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45f821:{NFSU2_TR(0x45f821);
__builtin_memmove((R+28),(R+0),4);
}
B45f823:{NFSU2_TR(0x45f823);
u8 U[40];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B45f827:{NFSU2_TR(0x45f827);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f829:{NFSU2_TR(0x45f829);
__builtin_memmove((R+4),(R+24),4);
}
B45f82b:{NFSU2_TR(0x45f82b);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B45f82e:{NFSU2_TR(0x45f82e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f831ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f831:L45f831:{c.instructions+=3;NFSU2_TR(0x45f831);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45f833:{NFSU2_TR(0x45f833);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f839:{NFSU2_TR(0x45f839);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f83f;}}
}
B45f83b:L45f83b:{c.instructions+=2;NFSU2_TR(0x45f83b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f83d:{NFSU2_TR(0x45f83d);
{goto L45f84b;}
}
B45f83f:L45f83f:{c.instructions+=2;NFSU2_TR(0x45f83f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f844:{NFSU2_TR(0x45f844);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f84b;}}
}
B45f846:L45f846:{c.instructions+=1;NFSU2_TR(0x45f846);
w4(R+0,u32(0x10000ull));
}
B45f84b:L45f84b:{c.instructions+=8;NFSU2_TR(0x45f84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f84e:{NFSU2_TR(0x45f84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f854:{NFSU2_TR(0x45f854);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f85b:{NFSU2_TR(0x45f85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f861:{NFSU2_TR(0x45f861);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45f868:{NFSU2_TR(0x45f868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f86e:{NFSU2_TR(0x45f86e);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45f871:{NFSU2_TR(0x45f871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f876ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45f876:L45f876:{c.instructions+=3;NFSU2_TR(0x45f876);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45f878:{NFSU2_TR(0x45f878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f87e:{NFSU2_TR(0x45f87e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f884;}}
}
B45f880:L45f880:{c.instructions+=2;NFSU2_TR(0x45f880);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f882:{NFSU2_TR(0x45f882);
{goto L45f890;}
}
B45f884:L45f884:{c.instructions+=2;NFSU2_TR(0x45f884);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f889:{NFSU2_TR(0x45f889);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f890;}}
}
B45f88b:L45f88b:{c.instructions+=1;NFSU2_TR(0x45f88b);
w4(R+0,u32(0x2710ull));
}
B45f890:L45f890:{c.instructions+=5;NFSU2_TR(0x45f890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f893:{NFSU2_TR(0x45f893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f899:{NFSU2_TR(0x45f899);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45f89c:{NFSU2_TR(0x45f89c);
{u32 ea_=u32(u32(7905736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45f8a2:{NFSU2_TR(0x45f8a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f8a7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45f8a7:L45f8a7:{c.instructions+=3;NFSU2_TR(0x45f8a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45f8a9:{NFSU2_TR(0x45f8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f8af:{NFSU2_TR(0x45f8af);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f8b5;}}
}
B45f8b1:L45f8b1:{c.instructions+=2;NFSU2_TR(0x45f8b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f8b3:{NFSU2_TR(0x45f8b3);
{goto L45f8c1;}
}
B45f8b5:L45f8b5:{c.instructions+=2;NFSU2_TR(0x45f8b5);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f8ba:{NFSU2_TR(0x45f8ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f8c1;}}
}
B45f8bc:L45f8bc:{c.instructions+=1;NFSU2_TR(0x45f8bc);
w4(R+0,u32(0x400ull));
}
B45f8c1:L45f8c1:{c.instructions+=5;NFSU2_TR(0x45f8c1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45f8c3:{NFSU2_TR(0x45f8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f8c6:{NFSU2_TR(0x45f8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f8cc:{NFSU2_TR(0x45f8cc);
__builtin_memmove((R+0),(R+28),4);
}
B45f8ce:{NFSU2_TR(0x45f8ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f8d4;}}
}
B45f8d0:L45f8d0:{c.instructions+=2;NFSU2_TR(0x45f8d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f8d2:{NFSU2_TR(0x45f8d2);
{goto L45f8e1;}
}
B45f8d4:L45f8d4:{c.instructions+=2;NFSU2_TR(0x45f8d4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8013ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8013ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f8da:{NFSU2_TR(0x45f8da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f8e1;}}
}
B45f8dc:L45f8dc:{c.instructions+=1;NFSU2_TR(0x45f8dc);
w4(R+0,u32(0x8013ull));
}
B45f8e1:L45f8e1:{c.instructions+=6;NFSU2_TR(0x45f8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f8e4:{NFSU2_TR(0x45f8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f8ea:{NFSU2_TR(0x45f8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f8ed:{NFSU2_TR(0x45f8ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f8f0:{NFSU2_TR(0x45f8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45f8f1:{NFSU2_TR(0x45f8f1);
if(r1(R+518)){{goto L45f8f7;}}
}
B45f8f3:L45f8f3:{c.instructions+=2;NFSU2_TR(0x45f8f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45f8f5:{NFSU2_TR(0x45f8f5);
if(r1(R+518)){{goto L45f8fc;}}
}
B45f8f7:L45f8f7:{c.instructions+=1;NFSU2_TR(0x45f8f7);
w4(R+0,u32(0x1ull));
}
B45f8fc:L45f8fc:{c.instructions+=4;NFSU2_TR(0x45f8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45f902:{NFSU2_TR(0x45f902);
w4(R+0,u32(r1(R+0)));
}
B45f905:{NFSU2_TR(0x45f905);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45f907:{NFSU2_TR(0x45f907);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45f90d;}}
}
B45f909:L45f909:{c.instructions+=2;NFSU2_TR(0x45f909);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45f90b:{NFSU2_TR(0x45f90b);
{goto L45f917;}
}
B45f90d:L45f90d:{c.instructions+=2;NFSU2_TR(0x45f90d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45f910:{NFSU2_TR(0x45f910);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45f917;}}
}
B45f912:L45f912:{c.instructions+=1;NFSU2_TR(0x45f912);
w4(R+0,u32(0x1ull));
}
B45f917:L45f917:{c.instructions+=5;NFSU2_TR(0x45f917);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45f91a:{NFSU2_TR(0x45f91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45f920:{NFSU2_TR(0x45f920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45f922:{NFSU2_TR(0x45f922);
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
B45f924:{NFSU2_TR(0x45f924);
if(r1(R+518)){{goto L45f92f;}}
}
B45f926:L45f926:{c.instructions+=3;NFSU2_TR(0x45f926);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f929:{NFSU2_TR(0x45f929);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45f92a:{NFSU2_TR(0x45f92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45f92full));
TAIL_STATIC(0x735580u,735);
}
B45f92f:L45f92f:{c.instructions+=2;NFSU2_TR(0x45f92f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45f930:{NFSU2_TR(0x45f930);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f940:L45f940:{c.instructions+=4;NFSU2_TR(0x45f940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f944:{NFSU2_TR(0x45f944);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B45f945:{NFSU2_TR(0x45f945);
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
B45f948:{NFSU2_TR(0x45f948);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L45f985;}}
}
B45f94a:L45f94a:{c.instructions+=2;NFSU2_TR(0x45f94a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45f9b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B45f951:{NFSU2_TR(0x45f951);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x45f98cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f958:L45f958:{c.instructions+=2;NFSU2_TR(0x45f958);
w4(R+0,u32(0x5ull));
}
B45f95d:{NFSU2_TR(0x45f95d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f95e:L45f95e:{c.instructions+=2;NFSU2_TR(0x45f95e);
w4(R+0,u32(0x1ull));
}
B45f963:{NFSU2_TR(0x45f963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f964:L45f964:{c.instructions+=2;NFSU2_TR(0x45f964);
w4(R+0,u32(0x2ull));
}
B45f969:{NFSU2_TR(0x45f969);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f96a:L45f96a:{c.instructions+=2;NFSU2_TR(0x45f96a);
w4(R+0,u32(0x3ull));
}
B45f96f:{NFSU2_TR(0x45f96f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f970:L45f970:{c.instructions+=2;NFSU2_TR(0x45f970);
w4(R+0,u32(0x4ull));
}
B45f975:{NFSU2_TR(0x45f975);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f976:L45f976:{c.instructions+=2;NFSU2_TR(0x45f976);
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
B45f978:{NFSU2_TR(0x45f978);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f979:L45f979:{c.instructions+=2;NFSU2_TR(0x45f979);
w4(R+0,u32(0x7ull));
}
B45f97e:{NFSU2_TR(0x45f97e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f97f:L45f97f:{c.instructions+=2;NFSU2_TR(0x45f97f);
w4(R+0,u32(0x6ull));
}
B45f984:{NFSU2_TR(0x45f984);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f985:L45f985:{c.instructions+=2;NFSU2_TR(0x45f985);
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
B45f988:{NFSU2_TR(0x45f988);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f9d0:L45f9d0:{c.instructions+=4;NFSU2_TR(0x45f9d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45f9d4:{NFSU2_TR(0x45f9d4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B45f9d5:{NFSU2_TR(0x45f9d5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45f9d8:{NFSU2_TR(0x45f9d8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L45f9f1;}}
}
B45f9da:L45f9da:{c.instructions+=2;NFSU2_TR(0x45f9da);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45fa08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B45f9e1:{NFSU2_TR(0x45f9e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x45f9f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45f9e8:L45f9e8:{c.instructions+=2;NFSU2_TR(0x45f9e8);
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
B45f9ea:{NFSU2_TR(0x45f9ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f9eb:L45f9eb:{c.instructions+=2;NFSU2_TR(0x45f9eb);
w4(R+0,u32(0x2ull));
}
B45f9f0:{NFSU2_TR(0x45f9f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45f9f1:L45f9f1:{c.instructions+=2;NFSU2_TR(0x45f9f1);
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
B45f9f4:{NFSU2_TR(0x45f9f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fa20:L45fa20:{c.instructions+=2;NFSU2_TR(0x45fa20);
w4(R+0,u32(0x7ed3dcull));
}
B45fa25:{NFSU2_TR(0x45fa25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fa30:L45fa30:{c.instructions+=2;NFSU2_TR(0x45fa30);
__builtin_memmove((R+0),gp(0x7ed3e0),4);
}
B45fa35:{NFSU2_TR(0x45fa35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fa40:L45fa40:{c.instructions+=6;NFSU2_TR(0x45fa40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45fa44:{NFSU2_TR(0x45fa44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45fa46:{NFSU2_TR(0x45fa46);
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
B45fa48:{NFSU2_TR(0x45fa48);
__builtin_memmove((R+0),(R+518),1);
}
B45fa4b:{NFSU2_TR(0x45fa4b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B45fa4f:{NFSU2_TR(0x45fa4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fa60:L45fa60:{c.instructions+=5;NFSU2_TR(0x45fa60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fa61:{NFSU2_TR(0x45fa61);
__builtin_memmove((R+24),(R+4),4);
}
B45fa63:{NFSU2_TR(0x45fa63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45fa65:{NFSU2_TR(0x45fa65);
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
B45fa67:{NFSU2_TR(0x45fa67);
if(r1(R+518)){{goto L45fa6e;}}
}
B45fa69:L45fa69:{c.instructions+=1;NFSU2_TR(0x45fa69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fa6eull));
TAIL_STATIC(0x735550u,735);
}
B45fa6e:L45fa6e:{c.instructions+=2;NFSU2_TR(0x45fa6e);
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
B45fa73:{NFSU2_TR(0x45fa73);
if(r1(R+518)){{goto L45fa98;}}
}
B45fa75:L45fa75:{c.instructions+=3;NFSU2_TR(0x45fa75);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45fa79:{NFSU2_TR(0x45fa79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fa7a:{NFSU2_TR(0x45fa7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fa7full));
TAIL_STATIC(0x734df0u,734);
}
B45fa7f:L45fa7f:{c.instructions+=2;NFSU2_TR(0x45fa7f);
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
B45fa82:{NFSU2_TR(0x45fa82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fa87ull));
TAIL_STATIC(0x734e40u,734);
}
B45fa87:L45fa87:{c.instructions+=5;NFSU2_TR(0x45fa87);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45fa8b:{NFSU2_TR(0x45fa8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45fa8d:{NFSU2_TR(0x45fa8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fa8f:{NFSU2_TR(0x45fa8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fa90:{NFSU2_TR(0x45fa90);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fa93ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45fa93:L45fa93:{c.instructions+=1;NFSU2_TR(0x45fa93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fa98ull));
TAIL_STATIC(0x734e60u,734);
}
B45fa98:L45fa98:{c.instructions+=3;NFSU2_TR(0x45fa98);
__builtin_memmove((R+0),(R+24),4);
}
B45fa9a:{NFSU2_TR(0x45fa9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45fa9b:{NFSU2_TR(0x45fa9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45faa0:L45faa0:{c.instructions+=22;NFSU2_TR(0x45faa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45faa6:{NFSU2_TR(0x45faa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45faac:{NFSU2_TR(0x45faac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45faad:{NFSU2_TR(0x45faad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B45fab3:{NFSU2_TR(0x45fab3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fab4:{NFSU2_TR(0x45fab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45faba:{NFSU2_TR(0x45faba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fabb:{NFSU2_TR(0x45fabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45fac1:{NFSU2_TR(0x45fac1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45fac3:{NFSU2_TR(0x45fac3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B45fac6:{NFSU2_TR(0x45fac6);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B45fac8:{NFSU2_TR(0x45fac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45face:{NFSU2_TR(0x45face);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45facf:{NFSU2_TR(0x45facf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45fad5:{NFSU2_TR(0x45fad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fadb:{NFSU2_TR(0x45fadb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B45fade:{NFSU2_TR(0x45fade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45fadf:{NFSU2_TR(0x45fadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fae5:{NFSU2_TR(0x45fae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45faeb:{NFSU2_TR(0x45faeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45faf1:{NFSU2_TR(0x45faf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45faf2:{NFSU2_TR(0x45faf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fb00:L45fb00:{c.instructions+=14;NFSU2_TR(0x45fb00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45fb06:{NFSU2_TR(0x45fb06);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb08:{NFSU2_TR(0x45fb08);
u8 U[4];
w4(U+0,u32(0x772466ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb0d:{NFSU2_TR(0x45fb0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb0e:{NFSU2_TR(0x45fb0e);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B45fb13:{NFSU2_TR(0x45fb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fb1a:{NFSU2_TR(0x45fb1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb1b:{NFSU2_TR(0x45fb1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb1c:{NFSU2_TR(0x45fb1c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45fb1e:{NFSU2_TR(0x45fb1e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45fb20:{NFSU2_TR(0x45fb20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb21:{NFSU2_TR(0x45fb21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb22:{NFSU2_TR(0x45fb22);
__builtin_memmove((R+20),(R+4),4);
}
B45fb24:{NFSU2_TR(0x45fb24);
if(r1(R+518)){{goto L45fc90;}}
}
B45fb2a:L45fb2a:{c.instructions+=2;NFSU2_TR(0x45fb2a);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45fb30:{NFSU2_TR(0x45fb30);
if(r1(R+518)){{goto L45fc90;}}
}
B45fb36:L45fb36:{c.instructions+=2;NFSU2_TR(0x45fb36);
u8 U[7];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45fb3a:{NFSU2_TR(0x45fb3a);
if(r1(R+518)){{goto L45fbed;}}
}
B45fb40:L45fb40:{c.instructions+=4;NFSU2_TR(0x45fb40);
s4(0x7ec844,u32(0x78a1e0ull));
}
B45fb4a:{NFSU2_TR(0x45fb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45fb50:{NFSU2_TR(0x45fb50);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45fb52:{NFSU2_TR(0x45fb52);
if(r1(R+518)){{goto L45fb5b;}}
}
B45fb54:L45fb54:{c.instructions+=2;NFSU2_TR(0x45fb54);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb56:{NFSU2_TR(0x45fb56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fb5bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45fa60u);}goto L45fa60;}
}
B45fb5b:L45fb5b:{c.instructions+=2;NFSU2_TR(0x45fb5b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb5d:{NFSU2_TR(0x45fb5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fb62ull));
TAIL_STATIC(0x457e20u,457);
}
B45fb62:L45fb62:{c.instructions+=6;NFSU2_TR(0x45fb62);
__builtin_memmove((R+24),(R+0),4);
}
B45fb64:{NFSU2_TR(0x45fb64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45fb67:{NFSU2_TR(0x45fb67);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fb6b:{NFSU2_TR(0x45fb6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45fb6d:{NFSU2_TR(0x45fb6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fb71:{NFSU2_TR(0x45fb71);
if(r1(R+518)){{goto L45fbe0;}}
}
B45fb73:L45fb73:{c.instructions+=3;NFSU2_TR(0x45fb73);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45fb77:{NFSU2_TR(0x45fb77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45fb79:{NFSU2_TR(0x45fb79);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45fb7f;}}
}
B45fb7b:L45fb7b:{c.instructions+=2;NFSU2_TR(0x45fb7b);
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
B45fb7d:{NFSU2_TR(0x45fb7d);
{goto L45fb89;}
}
B45fb7f:L45fb7f:{c.instructions+=2;NFSU2_TR(0x45fb7f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45fb82:{NFSU2_TR(0x45fb82);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45fb89;}}
}
B45fb84:L45fb84:{c.instructions+=1;NFSU2_TR(0x45fb84);
w4(R+0,u32(0xfull));
}
B45fb89:L45fb89:{c.instructions+=12;NFSU2_TR(0x45fb89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45fb8c:{NFSU2_TR(0x45fb8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb8d:{NFSU2_TR(0x45fb8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb8e:{NFSU2_TR(0x45fb8e);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fb93:{NFSU2_TR(0x45fb93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45fb95:{NFSU2_TR(0x45fb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fb98:{NFSU2_TR(0x45fb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45fb9f:{NFSU2_TR(0x45fb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fba2:{NFSU2_TR(0x45fba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fba5:{NFSU2_TR(0x45fba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fba8:{NFSU2_TR(0x45fba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fbab:{NFSU2_TR(0x45fbab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fbb0ull));
TAIL_STATIC(0x7358c0u,735);
}
B45fbb0:L45fbb0:{c.instructions+=3;NFSU2_TR(0x45fbb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45fbb3:{NFSU2_TR(0x45fbb3);
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
B45fbb5:{NFSU2_TR(0x45fbb5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45fbe2;}}
}
B45fbb7:L45fbb7:{c.instructions+=3;NFSU2_TR(0x45fbb7);
u8 U[4];
w4(U+0,u32(0x7edd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fbbc:{NFSU2_TR(0x45fbbc);
w4(R+4,u32(0x82c540ull));
}
B45fbc1:{NFSU2_TR(0x45fbc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fbc6ull));
TAIL_STATIC(0x735840u,735);
}
B45fbc6:L45fbc6:{c.instructions+=4;NFSU2_TR(0x45fbc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fbc7:{NFSU2_TR(0x45fbc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fbc8:{NFSU2_TR(0x45fbc8);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fbcd:{NFSU2_TR(0x45fbcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fbd2ull));
TAIL_STATIC(0x7358c0u,735);
}
B45fbd2:L45fbd2:{c.instructions+=3;NFSU2_TR(0x45fbd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45fbd5:{NFSU2_TR(0x45fbd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fbdb:{NFSU2_TR(0x45fbdb);
{goto L45fc90;}
}
B45fbe0:L45fbe0:{c.instructions+=1;NFSU2_TR(0x45fbe0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45fbe2:L45fbe2:{c.instructions+=2;NFSU2_TR(0x45fbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fbe8:{NFSU2_TR(0x45fbe8);
{goto L45fc90;}
}
B45fbed:L45fbed:{c.instructions+=4;NFSU2_TR(0x45fbed);
s4(0x7ec844,u32(0x78a1ccull));
}
B45fbf7:{NFSU2_TR(0x45fbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45fbfd:{NFSU2_TR(0x45fbfd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45fbff:{NFSU2_TR(0x45fbff);
if(r1(R+518)){{goto L45fc08;}}
}
B45fc01:L45fc01:{c.instructions+=2;NFSU2_TR(0x45fc01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc03:{NFSU2_TR(0x45fc03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fc08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45fa60u);}goto L45fa60;}
}
B45fc08:L45fc08:{c.instructions+=2;NFSU2_TR(0x45fc08);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc0a:{NFSU2_TR(0x45fc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fc0full));
TAIL_STATIC(0x457e20u,457);
}
B45fc0f:L45fc0f:{c.instructions+=6;NFSU2_TR(0x45fc0f);
__builtin_memmove((R+24),(R+0),4);
}
B45fc11:{NFSU2_TR(0x45fc11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45fc14:{NFSU2_TR(0x45fc14);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc18:{NFSU2_TR(0x45fc18);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45fc1a:{NFSU2_TR(0x45fc1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45fc22:{NFSU2_TR(0x45fc22);
if(r1(R+518)){{goto L45fc88;}}
}
B45fc24:L45fc24:{c.instructions+=3;NFSU2_TR(0x45fc24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45fc28:{NFSU2_TR(0x45fc28);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45fc2a:{NFSU2_TR(0x45fc2a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45fc30;}}
}
B45fc2c:L45fc2c:{c.instructions+=2;NFSU2_TR(0x45fc2c);
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
B45fc2e:{NFSU2_TR(0x45fc2e);
{goto L45fc3a;}
}
B45fc30:L45fc30:{c.instructions+=2;NFSU2_TR(0x45fc30);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45fc33:{NFSU2_TR(0x45fc33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45fc3a;}}
}
B45fc35:L45fc35:{c.instructions+=1;NFSU2_TR(0x45fc35);
w4(R+0,u32(0xfull));
}
B45fc3a:L45fc3a:{c.instructions+=12;NFSU2_TR(0x45fc3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45fc3d:{NFSU2_TR(0x45fc3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc3e:{NFSU2_TR(0x45fc3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc3f:{NFSU2_TR(0x45fc3f);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc44:{NFSU2_TR(0x45fc44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45fc46:{NFSU2_TR(0x45fc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc49:{NFSU2_TR(0x45fc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45fc50:{NFSU2_TR(0x45fc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc53:{NFSU2_TR(0x45fc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc56:{NFSU2_TR(0x45fc56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc59:{NFSU2_TR(0x45fc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc5c:{NFSU2_TR(0x45fc5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fc61ull));
TAIL_STATIC(0x7358c0u,735);
}
B45fc61:L45fc61:{c.instructions+=3;NFSU2_TR(0x45fc61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45fc64:{NFSU2_TR(0x45fc64);
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
B45fc66:{NFSU2_TR(0x45fc66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45fc8a;}}
}
B45fc68:L45fc68:{c.instructions+=3;NFSU2_TR(0x45fc68);
u8 U[4];
w4(U+0,u32(0x7edd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc6d:{NFSU2_TR(0x45fc6d);
w4(R+4,u32(0x82c540ull));
}
B45fc72:{NFSU2_TR(0x45fc72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fc77ull));
TAIL_STATIC(0x735840u,735);
}
B45fc77:L45fc77:{c.instructions+=4;NFSU2_TR(0x45fc77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc78:{NFSU2_TR(0x45fc78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc79:{NFSU2_TR(0x45fc79);
u8 U[4];
w4(U+0,u32(0x82c540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fc7e:{NFSU2_TR(0x45fc7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fc83ull));
TAIL_STATIC(0x7358c0u,735);
}
B45fc83:L45fc83:{c.instructions+=2;NFSU2_TR(0x45fc83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45fc86:{NFSU2_TR(0x45fc86);
{goto L45fc8a;}
}
B45fc88:L45fc88:{c.instructions+=1;NFSU2_TR(0x45fc88);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45fc8a:L45fc8a:{c.instructions+=1;NFSU2_TR(0x45fc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc90:L45fc90:{c.instructions+=8;NFSU2_TR(0x45fc90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45fc94:{NFSU2_TR(0x45fc94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45fc95:{NFSU2_TR(0x45fc95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45fc96:{NFSU2_TR(0x45fc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45fc97:{NFSU2_TR(0x45fc97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fc9e:{NFSU2_TR(0x45fc9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45fc9f:{NFSU2_TR(0x45fc9f);
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
B45fca2:{NFSU2_TR(0x45fca2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fcb0:L45fcb0:{c.instructions+=3;NFSU2_TR(0x45fcb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fcb1:{NFSU2_TR(0x45fcb1);
__builtin_memmove((R+24),(R+4),4);
}
B45fcb3:{NFSU2_TR(0x45fcb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fcb8ull));
TAIL_STATIC(0x45dd60u,45d);
}
B45fcb8:L45fcb8:{c.instructions+=4;NFSU2_TR(0x45fcb8);
u8 U[4];
w4(U+0,u32(0x78a1f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45fcbe:{NFSU2_TR(0x45fcbe);
__builtin_memmove((R+0),(R+24),4);
}
B45fcc0:{NFSU2_TR(0x45fcc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45fcc1:{NFSU2_TR(0x45fcc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fcd0:L45fcd0:{c.instructions+=3;NFSU2_TR(0x45fcd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fcd1:{NFSU2_TR(0x45fcd1);
__builtin_memmove((R+24),(R+4),4);
}
B45fcd3:{NFSU2_TR(0x45fcd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fcd8ull));
TAIL_STATIC(0x45dd60u,45d);
}
B45fcd8:L45fcd8:{c.instructions+=4;NFSU2_TR(0x45fcd8);
u8 U[4];
w4(U+0,u32(0x78a228ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45fcde:{NFSU2_TR(0x45fcde);
__builtin_memmove((R+0),(R+24),4);
}
B45fce0:{NFSU2_TR(0x45fce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45fce1:{NFSU2_TR(0x45fce1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fcf0:L45fcf0:{c.instructions+=2;NFSU2_TR(0x45fcf0);
w4(R+0,u32(0x7ed3f0ull));
}
B45fcf5:{NFSU2_TR(0x45fcf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fd00:L45fd00:{c.instructions+=2;NFSU2_TR(0x45fd00);
__builtin_memmove((R+0),gp(0x7ed3f4),4);
}
B45fd05:{NFSU2_TR(0x45fd05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fd10:L45fd10:{c.instructions+=3;NFSU2_TR(0x45fd10);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B45fd15:{NFSU2_TR(0x45fd15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fd16:{NFSU2_TR(0x45fd16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fd1bull));
TAIL_STATIC(0x43e910u,43e);
}
B45fd1b:L45fd1b:{c.instructions+=3;NFSU2_TR(0x45fd1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45fd1e:{NFSU2_TR(0x45fd1e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45fd23:{NFSU2_TR(0x45fd23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45fd4d;}}
}
B45fd25:L45fd25:{c.instructions+=6;NFSU2_TR(0x45fd25);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B45fd2b:{NFSU2_TR(0x45fd2b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B45fd2e:{NFSU2_TR(0x45fd2e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B45fd34:{NFSU2_TR(0x45fd34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fd35:{NFSU2_TR(0x45fd35);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fd3a:{NFSU2_TR(0x45fd3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fd3full));
TAIL_STATIC(0x440820u,440);
}
B45fd3f:L45fd3f:{c.instructions+=3;NFSU2_TR(0x45fd3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45fd42:{NFSU2_TR(0x45fd42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45fd44:{NFSU2_TR(0x45fd44);
if(r1(R+518)){{goto L45fd4d;}}
}
B45fd46:L45fd46:{c.instructions+=2;NFSU2_TR(0x45fd46);
__builtin_memmove((R+4),(R+0),4);
}
B45fd48:{NFSU2_TR(0x45fd48);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45fcd0u);}goto L45fcd0;}
}
B45fd4d:L45fd4d:{c.instructions+=2;NFSU2_TR(0x45fd4d);
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
B45fd4f:{NFSU2_TR(0x45fd4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fd50:L45fd50:{c.instructions+=2;NFSU2_TR(0x45fd50);
w4(R+0,u32(0x7ed400ull));
}
B45fd55:{NFSU2_TR(0x45fd55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fd60:L45fd60:{c.instructions+=2;NFSU2_TR(0x45fd60);
__builtin_memmove((R+0),gp(0x7ed404),4);
}
B45fd65:{NFSU2_TR(0x45fd65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fd70:L45fd70:{c.instructions+=3;NFSU2_TR(0x45fd70);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B45fd75:{NFSU2_TR(0x45fd75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fd76:{NFSU2_TR(0x45fd76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fd7bull));
TAIL_STATIC(0x43e910u,43e);
}
B45fd7b:L45fd7b:{c.instructions+=3;NFSU2_TR(0x45fd7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45fd7e:{NFSU2_TR(0x45fd7e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45fd83:{NFSU2_TR(0x45fd83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45fdad;}}
}
B45fd85:L45fd85:{c.instructions+=6;NFSU2_TR(0x45fd85);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B45fd8b:{NFSU2_TR(0x45fd8b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B45fd8e:{NFSU2_TR(0x45fd8e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B45fd94:{NFSU2_TR(0x45fd94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fd95:{NFSU2_TR(0x45fd95);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fd9a:{NFSU2_TR(0x45fd9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fd9full));
TAIL_STATIC(0x440820u,440);
}
B45fd9f:L45fd9f:{c.instructions+=3;NFSU2_TR(0x45fd9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45fda2:{NFSU2_TR(0x45fda2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45fda4:{NFSU2_TR(0x45fda4);
if(r1(R+518)){{goto L45fdad;}}
}
B45fda6:L45fda6:{c.instructions+=2;NFSU2_TR(0x45fda6);
__builtin_memmove((R+4),(R+0),4);
}
B45fda8:{NFSU2_TR(0x45fda8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45fcb0u);}goto L45fcb0;}
}
B45fdad:L45fdad:{c.instructions+=2;NFSU2_TR(0x45fdad);
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
B45fdaf:{NFSU2_TR(0x45fdaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fdb0:L45fdb0:{c.instructions+=2;NFSU2_TR(0x45fdb0);
w4(R+0,u32(0x7ed410ull));
}
B45fdb5:{NFSU2_TR(0x45fdb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fdc0:L45fdc0:{c.instructions+=2;NFSU2_TR(0x45fdc0);
__builtin_memmove((R+0),gp(0x7ed414),4);
}
B45fdc5:{NFSU2_TR(0x45fdc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fdd0:L45fdd0:{c.instructions+=3;NFSU2_TR(0x45fdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45fdd4:{NFSU2_TR(0x45fdd4);
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
B45fdd6:{NFSU2_TR(0x45fdd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45fde0;}}
}
B45fdd8:L45fdd8:{c.instructions+=2;NFSU2_TR(0x45fdd8);
w4(R+0,u32(0xeull));
}
B45fddd:{NFSU2_TR(0x45fddd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fde0:L45fde0:{c.instructions+=6;NFSU2_TR(0x45fde0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B45fde1:{NFSU2_TR(0x45fde1);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B45fde3:{NFSU2_TR(0x45fde3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B45fde5:{NFSU2_TR(0x45fde5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff2ull))));
}
B45fde8:{NFSU2_TR(0x45fde8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xdull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xdull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45fdeb:{NFSU2_TR(0x45fdeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fdf0:L45fdf0:{c.instructions+=7;NFSU2_TR(0x45fdf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fdf1:{NFSU2_TR(0x45fdf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45fdf5:{NFSU2_TR(0x45fdf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45fdf7:{NFSU2_TR(0x45fdf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fdf8:{NFSU2_TR(0x45fdf8);
__builtin_memmove((R+28),(R+4),4);
}
B45fdfa:{NFSU2_TR(0x45fdfa);
__builtin_memmove((R+4),(R+24),4);
}
B45fdfc:{NFSU2_TR(0x45fdfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fdffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45fdff:L45fdff:{c.instructions+=5;NFSU2_TR(0x45fdff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45fe01:{NFSU2_TR(0x45fe01);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B45fe04:{NFSU2_TR(0x45fe04);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B45fe09:{NFSU2_TR(0x45fe09);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45fe0c:{NFSU2_TR(0x45fe0c);
if(r1(R+518)){{goto L45fe1c;}}
}
B45fe0e:L45fe0e:{c.instructions+=2;NFSU2_TR(0x45fe0e);
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
B45fe0f:{NFSU2_TR(0x45fe0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45fe22;}}
}
B45fe11:L45fe11:{c.instructions+=4;NFSU2_TR(0x45fe11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fe17:{NFSU2_TR(0x45fe17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45fe18:{NFSU2_TR(0x45fe18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45fe19:{NFSU2_TR(0x45fe19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fe1c:L45fe1c:{c.instructions+=1;NFSU2_TR(0x45fe1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fe22:L45fe22:{c.instructions+=3;NFSU2_TR(0x45fe22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45fe23:{NFSU2_TR(0x45fe23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45fe24:{NFSU2_TR(0x45fe24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fe30:L45fe30:{c.instructions+=4;NFSU2_TR(0x45fe30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45fe34:{NFSU2_TR(0x45fe34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45fe37:{NFSU2_TR(0x45fe37);
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
B45fe3a:{NFSU2_TR(0x45fe3a);
if(r1(R+518)){{goto L45fe4d;}}
}
B45fe3c:L45fe3c:{c.instructions+=2;NFSU2_TR(0x45fe3c);
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
B45fe3f:{NFSU2_TR(0x45fe3f);
if(r1(R+518)){{goto L45fe4d;}}
}
B45fe41:L45fe41:{c.instructions+=2;NFSU2_TR(0x45fe41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45fe4b:{NFSU2_TR(0x45fe4b);
{goto L45fe53;}
}
B45fe4d:L45fe4d:{c.instructions+=1;NFSU2_TR(0x45fe4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fe53:L45fe53:{c.instructions+=5;NFSU2_TR(0x45fe53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fe56:{NFSU2_TR(0x45fe56);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45fe5d:{NFSU2_TR(0x45fe5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x198ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45fe67:{NFSU2_TR(0x45fe67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45fe71:{NFSU2_TR(0x45fe71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45fe80:L45fe80:{c.instructions+=13;NFSU2_TR(0x45fe80);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45fe86:{NFSU2_TR(0x45fe86);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fe88:{NFSU2_TR(0x45fe88);
u8 U[4];
w4(U+0,u32(0x77265bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fe8d:{NFSU2_TR(0x45fe8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fe8e:{NFSU2_TR(0x45fe8e);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B45fe93:{NFSU2_TR(0x45fe93);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fe9a:{NFSU2_TR(0x45fe9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B45fe9d:{NFSU2_TR(0x45fe9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fe9e:{NFSU2_TR(0x45fe9e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45fea0:{NFSU2_TR(0x45fea0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45fea2:{NFSU2_TR(0x45fea2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fea3:{NFSU2_TR(0x45fea3);
__builtin_memmove((R+28),(R+4),4);
}
B45fea5:{NFSU2_TR(0x45fea5);
if(r1(R+518)){{goto L45ff91;}}
}
B45feab:L45feab:{c.instructions+=3;NFSU2_TR(0x45feab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45feac:{NFSU2_TR(0x45feac);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45feb3:{NFSU2_TR(0x45feb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45feb8ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B45feb8:L45feb8:{c.instructions+=5;NFSU2_TR(0x45feb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45febe:{NFSU2_TR(0x45febe);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45fec2:{NFSU2_TR(0x45fec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fec3:{NFSU2_TR(0x45fec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45fec9:{NFSU2_TR(0x45fec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45feceull));
TAIL_STATIC(0x734df0u,734);
}
B45fece:L45fece:{c.instructions+=2;NFSU2_TR(0x45fece);
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
B45fed1:{NFSU2_TR(0x45fed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fed6ull));
TAIL_STATIC(0x734e40u,734);
}
B45fed6:L45fed6:{c.instructions+=9;NFSU2_TR(0x45fed6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45feda:{NFSU2_TR(0x45feda);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45fede:{NFSU2_TR(0x45fede);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45fedf:{NFSU2_TR(0x45fedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fee3:{NFSU2_TR(0x45fee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fee7:{NFSU2_TR(0x45fee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45feeb:{NFSU2_TR(0x45feeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45feed:{NFSU2_TR(0x45feed);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45feef:{NFSU2_TR(0x45feef);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fef1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45fef1:L45fef1:{c.instructions+=2;NFSU2_TR(0x45fef1);
__builtin_memmove((R+24),(R+0),4);
}
B45fef3:{NFSU2_TR(0x45fef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fef8ull));
TAIL_STATIC(0x734e60u,734);
}
B45fef8:L45fef8:{c.instructions+=4;NFSU2_TR(0x45fef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fefc:{NFSU2_TR(0x45fefc);
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
B45fefe:{NFSU2_TR(0x45fefe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff02:{NFSU2_TR(0x45ff02);
if(r1(R+518)){{goto L45ff55;}}
}
B45ff04:L45ff04:{c.instructions+=13;NFSU2_TR(0x45ff04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff05:{NFSU2_TR(0x45ff05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45ff08:{NFSU2_TR(0x45ff08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff09:{NFSU2_TR(0x45ff09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff0a:{NFSU2_TR(0x45ff0a);
u8 U[4];
w4(U+0,u32(0x82c530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff0f:{NFSU2_TR(0x45ff0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B45ff12:{NFSU2_TR(0x45ff12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff15:{NFSU2_TR(0x45ff15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ff1c:{NFSU2_TR(0x45ff1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff1f:{NFSU2_TR(0x45ff1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff22:{NFSU2_TR(0x45ff22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff25:{NFSU2_TR(0x45ff25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff28:{NFSU2_TR(0x45ff28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ff2dull));
TAIL_STATIC(0x7358c0u,735);
}
B45ff2d:L45ff2d:{c.instructions+=3;NFSU2_TR(0x45ff2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45ff30:{NFSU2_TR(0x45ff30);
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
B45ff32:{NFSU2_TR(0x45ff32);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45ff52;}}
}
B45ff34:L45ff34:{c.instructions+=3;NFSU2_TR(0x45ff34);
u8 U[4];
w4(U+0,u32(0x7edd70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff39:{NFSU2_TR(0x45ff39);
w4(R+4,u32(0x82c530ull));
}
B45ff3e:{NFSU2_TR(0x45ff3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ff43ull));
TAIL_STATIC(0x735840u,735);
}
B45ff43:L45ff43:{c.instructions+=4;NFSU2_TR(0x45ff43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff44:{NFSU2_TR(0x45ff44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff45:{NFSU2_TR(0x45ff45);
u8 U[4];
w4(U+0,u32(0x82c530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff4a:{NFSU2_TR(0x45ff4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ff4full));
TAIL_STATIC(0x7358c0u,735);
}
B45ff4f:L45ff4f:{c.instructions+=1;NFSU2_TR(0x45ff4f);
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
B45ff52:L45ff52:{c.instructions+=2;NFSU2_TR(0x45ff52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45ff53:{NFSU2_TR(0x45ff53);
{goto L45ff57;}
}
B45ff55:L45ff55:{c.instructions+=1;NFSU2_TR(0x45ff55);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45ff57:L45ff57:{c.instructions+=7;NFSU2_TR(0x45ff57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ff5d:{NFSU2_TR(0x45ff5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45ff63:{NFSU2_TR(0x45ff63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff69:{NFSU2_TR(0x45ff69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ff6b:{NFSU2_TR(0x45ff6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff6c:{NFSU2_TR(0x45ff6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ff74:{NFSU2_TR(0x45ff74);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ff77ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ff77:L45ff77:{c.instructions+=5;NFSU2_TR(0x45ff77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ff7d:{NFSU2_TR(0x45ff7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ff7f:{NFSU2_TR(0x45ff7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x130ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45ff85:{NFSU2_TR(0x45ff85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ff86:{NFSU2_TR(0x45ff86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ff89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ff89:L45ff89:{c.instructions+=2;NFSU2_TR(0x45ff89);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45ff90:{NFSU2_TR(0x45ff90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ff91:L45ff91:{c.instructions+=6;NFSU2_TR(0x45ff91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ff95:{NFSU2_TR(0x45ff95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ff96:{NFSU2_TR(0x45ff96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45ff97:{NFSU2_TR(0x45ff97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ff9e:{NFSU2_TR(0x45ff9e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45ffa1:{NFSU2_TR(0x45ffa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ffb0:L45ffb0:{c.instructions+=11;NFSU2_TR(0x45ffb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ffb1:{NFSU2_TR(0x45ffb1);
__builtin_memmove((R+20),(R+16),4);
}
B45ffb3:{NFSU2_TR(0x45ffb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B45ffb6:{NFSU2_TR(0x45ffb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B45ffb9:{NFSU2_TR(0x45ffb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ffba:{NFSU2_TR(0x45ffba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ffbb:{NFSU2_TR(0x45ffbb);
__builtin_memmove((R+24),(R+4),4);
}
B45ffbd:{NFSU2_TR(0x45ffbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45ffc3:{NFSU2_TR(0x45ffc3);
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
B45ffc5:{NFSU2_TR(0x45ffc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ffc6:{NFSU2_TR(0x45ffc6);
if(r1(R+518)){TAIL_STATIC(0x4604ceu,460);}
}
B45ffcc:L45ffcc:{c.instructions+=1;NFSU2_TR(0x45ffcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ffd1ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B45ffd1:L45ffd1:{c.instructions+=4;NFSU2_TR(0x45ffd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ffd2:{NFSU2_TR(0x45ffd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ffd8:{NFSU2_TR(0x45ffd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ffd9:{NFSU2_TR(0x45ffd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ffdeull));
TAIL_STATIC(0x43be20u,43b);
}
B45ffde:L45ffde:{c.instructions+=2;NFSU2_TR(0x45ffde);
{u32 ea_=u32(r4(R+24)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45ffe4:{NFSU2_TR(0x45ffe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ffe9ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B45ffe9:L45ffe9:{c.instructions+=3;NFSU2_TR(0x45ffe9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ffeb:{NFSU2_TR(0x45ffeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45fff1:{NFSU2_TR(0x45fff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45fff6ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B45fff6:L45fff6:{c.instructions+=4;NFSU2_TR(0x45fff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45fff9:{NFSU2_TR(0x45fff9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45fffc:{NFSU2_TR(0x45fffc);
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
B45fffe:{NFSU2_TR(0x45fffe);
if(r1(R+518)){TAIL_STATIC(0x4604ceu,460);}
TAIL_STATIC(0x460004u,460);
}
XIT:NFSU2_TR_EXIT(0x45f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
