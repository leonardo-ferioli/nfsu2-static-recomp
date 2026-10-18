#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ad,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ad,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 page_5ad(Cpu& c){return body_5ad(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ad(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ad000:goto L5ad000;
case 0x5ad002:goto L5ad002;
case 0x5ad004:c.instructions+=1;goto B5ad004;
case 0x5ad008:goto L5ad008;
case 0x5ad00b:c.instructions+=2;goto B5ad00b;
case 0x5ad013:c.instructions+=1;goto B5ad013;
case 0x5ad015:goto L5ad015;
case 0x5ad019:c.instructions+=2;goto B5ad019;
case 0x5ad01d:c.instructions+=1;goto B5ad01d;
case 0x5ad01f:goto L5ad01f;
case 0x5ad021:goto L5ad021;
case 0x5ad027:c.instructions+=1;goto B5ad027;
case 0x5ad029:goto L5ad029;
case 0x5ad02c:c.instructions+=1;goto B5ad02c;
case 0x5ad02e:goto L5ad02e;
case 0x5ad034:goto L5ad034;
case 0x5ad038:goto L5ad038;
case 0x5ad03c:c.instructions+=6;goto B5ad03c;
case 0x5ad040:c.instructions+=5;goto B5ad040;
case 0x5ad042:c.instructions+=4;goto B5ad042;
case 0x5ad046:c.instructions+=3;goto B5ad046;
case 0x5ad048:c.instructions+=2;goto B5ad048;
case 0x5ad04b:c.instructions+=1;goto B5ad04b;
case 0x5ad04d:goto L5ad04d;
case 0x5ad04f:c.instructions+=1;goto B5ad04f;
case 0x5ad053:goto L5ad053;
case 0x5ad056:c.instructions+=2;goto B5ad056;
case 0x5ad05e:c.instructions+=1;goto B5ad05e;
case 0x5ad060:goto L5ad060;
case 0x5ad064:c.instructions+=2;goto B5ad064;
case 0x5ad068:c.instructions+=1;goto B5ad068;
case 0x5ad06a:goto L5ad06a;
case 0x5ad06c:goto L5ad06c;
case 0x5ad072:c.instructions+=1;goto B5ad072;
case 0x5ad074:goto L5ad074;
case 0x5ad077:c.instructions+=1;goto B5ad077;
case 0x5ad079:goto L5ad079;
case 0x5ad07f:goto L5ad07f;
case 0x5ad083:goto L5ad083;
case 0x5ad087:c.instructions+=6;goto B5ad087;
case 0x5ad08b:c.instructions+=5;goto B5ad08b;
case 0x5ad08d:c.instructions+=4;goto B5ad08d;
case 0x5ad091:c.instructions+=3;goto B5ad091;
case 0x5ad093:c.instructions+=2;goto B5ad093;
case 0x5ad096:c.instructions+=1;goto B5ad096;
case 0x5ad098:goto L5ad098;
case 0x5ad09a:c.instructions+=1;goto B5ad09a;
case 0x5ad09e:goto L5ad09e;
case 0x5ad0a1:c.instructions+=2;goto B5ad0a1;
case 0x5ad0a9:c.instructions+=1;goto B5ad0a9;
case 0x5ad0ab:goto L5ad0ab;
case 0x5ad0af:c.instructions+=2;goto B5ad0af;
case 0x5ad0b3:c.instructions+=1;goto B5ad0b3;
case 0x5ad0b5:goto L5ad0b5;
case 0x5ad0b7:goto L5ad0b7;
case 0x5ad0bd:c.instructions+=1;goto B5ad0bd;
case 0x5ad0bf:goto L5ad0bf;
case 0x5ad0c2:c.instructions+=1;goto B5ad0c2;
case 0x5ad0c4:goto L5ad0c4;
case 0x5ad0ca:goto L5ad0ca;
case 0x5ad0ce:goto L5ad0ce;
case 0x5ad0d2:c.instructions+=6;goto B5ad0d2;
case 0x5ad0d6:c.instructions+=5;goto B5ad0d6;
case 0x5ad0d8:c.instructions+=4;goto B5ad0d8;
case 0x5ad0dc:c.instructions+=3;goto B5ad0dc;
case 0x5ad0de:c.instructions+=2;goto B5ad0de;
case 0x5ad0e1:c.instructions+=1;goto B5ad0e1;
case 0x5ad0e3:goto L5ad0e3;
case 0x5ad0e5:c.instructions+=1;goto B5ad0e5;
case 0x5ad0e9:goto L5ad0e9;
case 0x5ad0ec:c.instructions+=2;goto B5ad0ec;
case 0x5ad0f4:c.instructions+=1;goto B5ad0f4;
case 0x5ad0f6:goto L5ad0f6;
case 0x5ad0fa:c.instructions+=2;goto B5ad0fa;
case 0x5ad0fe:c.instructions+=1;goto B5ad0fe;
case 0x5ad100:goto L5ad100;
case 0x5ad102:goto L5ad102;
case 0x5ad108:c.instructions+=2;goto B5ad108;
case 0x5ad10c:c.instructions+=1;goto B5ad10c;
case 0x5ad10e:goto L5ad10e;
case 0x5ad111:c.instructions+=1;goto B5ad111;
case 0x5ad113:goto L5ad113;
case 0x5ad119:c.instructions+=1;goto B5ad119;
case 0x5ad11d:goto L5ad11d;
case 0x5ad121:c.instructions+=6;goto B5ad121;
case 0x5ad125:c.instructions+=5;goto B5ad125;
case 0x5ad127:c.instructions+=4;goto B5ad127;
case 0x5ad12b:c.instructions+=3;goto B5ad12b;
case 0x5ad12d:c.instructions+=2;goto B5ad12d;
case 0x5ad130:c.instructions+=1;goto B5ad130;
case 0x5ad132:goto L5ad132;
case 0x5ad134:c.instructions+=1;goto B5ad134;
case 0x5ad138:goto L5ad138;
case 0x5ad139:c.instructions+=7;goto B5ad139;
case 0x5ad13d:c.instructions+=6;goto B5ad13d;
case 0x5ad13f:c.instructions+=5;goto B5ad13f;
case 0x5ad143:c.instructions+=4;goto B5ad143;
case 0x5ad147:c.instructions+=3;goto B5ad147;
case 0x5ad149:c.instructions+=2;goto B5ad149;
case 0x5ad14c:c.instructions+=1;goto B5ad14c;
case 0x5ad14e:goto L5ad14e;
case 0x5ad150:c.instructions+=1;goto B5ad150;
case 0x5ad154:goto L5ad154;
case 0x5ad155:c.instructions+=12;goto B5ad155;
case 0x5ad157:c.instructions+=11;goto B5ad157;
case 0x5ad15a:c.instructions+=10;goto B5ad15a;
case 0x5ad160:c.instructions+=9;goto B5ad160;
case 0x5ad166:c.instructions+=8;goto B5ad166;
case 0x5ad16c:c.instructions+=7;goto B5ad16c;
case 0x5ad16e:c.instructions+=6;goto B5ad16e;
case 0x5ad16f:c.instructions+=5;goto B5ad16f;
case 0x5ad170:c.instructions+=4;goto B5ad170;
case 0x5ad174:c.instructions+=3;goto B5ad174;
case 0x5ad176:c.instructions+=2;goto B5ad176;
case 0x5ad177:c.instructions+=1;goto B5ad177;
case 0x5ad17c:goto L5ad17c;
case 0x5ad17f:c.instructions+=14;goto B5ad17f;
case 0x5ad181:c.instructions+=13;goto B5ad181;
case 0x5ad184:c.instructions+=12;goto B5ad184;
case 0x5ad188:c.instructions+=11;goto B5ad188;
case 0x5ad18e:c.instructions+=10;goto B5ad18e;
case 0x5ad190:c.instructions+=9;goto B5ad190;
case 0x5ad192:c.instructions+=8;goto B5ad192;
case 0x5ad193:c.instructions+=7;goto B5ad193;
case 0x5ad199:c.instructions+=6;goto B5ad199;
case 0x5ad19b:c.instructions+=5;goto B5ad19b;
case 0x5ad1a1:c.instructions+=4;goto B5ad1a1;
case 0x5ad1a3:c.instructions+=3;goto B5ad1a3;
case 0x5ad1a5:c.instructions+=2;goto B5ad1a5;
case 0x5ad1a8:c.instructions+=1;goto B5ad1a8;
case 0x5ad1aa:goto L5ad1aa;
case 0x5ad1ac:c.instructions+=11;goto B5ad1ac;
case 0x5ad1ae:c.instructions+=10;goto B5ad1ae;
case 0x5ad1b0:c.instructions+=9;goto B5ad1b0;
case 0x5ad1b6:c.instructions+=8;goto B5ad1b6;
case 0x5ad1b8:c.instructions+=7;goto B5ad1b8;
case 0x5ad1ba:c.instructions+=6;goto B5ad1ba;
case 0x5ad1bc:c.instructions+=5;goto B5ad1bc;
case 0x5ad1c2:c.instructions+=4;goto B5ad1c2;
case 0x5ad1c4:c.instructions+=3;goto B5ad1c4;
case 0x5ad1c6:c.instructions+=2;goto B5ad1c6;
case 0x5ad1c9:c.instructions+=1;goto B5ad1c9;
case 0x5ad1cb:goto L5ad1cb;
case 0x5ad1cd:c.instructions+=1;goto B5ad1cd;
case 0x5ad1d3:goto L5ad1d3;
case 0x5ad1d5:c.instructions+=1;goto B5ad1d5;
case 0x5ad1d7:goto L5ad1d7;
case 0x5ad1d9:c.instructions+=2;goto B5ad1d9;
case 0x5ad1db:c.instructions+=1;goto B5ad1db;
case 0x5ad1dd:goto L5ad1dd;
case 0x5ad1e1:c.instructions+=6;goto B5ad1e1;
case 0x5ad1e3:c.instructions+=5;goto B5ad1e3;
case 0x5ad1e9:c.instructions+=4;goto B5ad1e9;
case 0x5ad1eb:c.instructions+=3;goto B5ad1eb;
case 0x5ad1ed:c.instructions+=2;goto B5ad1ed;
case 0x5ad1f0:c.instructions+=1;goto B5ad1f0;
case 0x5ad1f2:goto L5ad1f2;
case 0x5ad1f4:c.instructions+=1;goto B5ad1f4;
case 0x5ad1fa:goto L5ad1fa;
case 0x5ad1fc:c.instructions+=6;goto B5ad1fc;
case 0x5ad1fe:c.instructions+=5;goto B5ad1fe;
case 0x5ad204:c.instructions+=4;goto B5ad204;
case 0x5ad206:c.instructions+=3;goto B5ad206;
case 0x5ad208:c.instructions+=2;goto B5ad208;
case 0x5ad20b:c.instructions+=1;goto B5ad20b;
case 0x5ad20d:goto L5ad20d;
case 0x5ad213:c.instructions+=4;goto B5ad213;
case 0x5ad215:c.instructions+=3;goto B5ad215;
case 0x5ad216:c.instructions+=2;goto B5ad216;
case 0x5ad219:c.instructions+=1;goto B5ad219;
case 0x5ad21c:goto L5ad21c;
case 0x5ad21e:c.instructions+=3;goto B5ad21e;
case 0x5ad21f:c.instructions+=2;goto B5ad21f;
case 0x5ad222:c.instructions+=1;goto B5ad222;
case 0x5ad230:goto L5ad230;
case 0x5ad231:c.instructions+=2;goto B5ad231;
case 0x5ad233:c.instructions+=1;goto B5ad233;
case 0x5ad238:goto L5ad238;
case 0x5ad23d:c.instructions+=1;goto B5ad23d;
case 0x5ad23f:goto L5ad23f;
case 0x5ad244:c.instructions+=3;goto B5ad244;
case 0x5ad245:c.instructions+=2;goto B5ad245;
case 0x5ad246:c.instructions+=1;goto B5ad246;
case 0x5ad24b:goto L5ad24b;
case 0x5ad24e:goto L5ad24e;
case 0x5ad250:c.instructions+=2;goto B5ad250;
case 0x5ad251:c.instructions+=1;goto B5ad251;
case 0x5ad260:goto L5ad260;
case 0x5ad261:c.instructions+=2;goto B5ad261;
case 0x5ad263:c.instructions+=1;goto B5ad263;
case 0x5ad268:goto L5ad268;
case 0x5ad26d:c.instructions+=1;goto B5ad26d;
case 0x5ad26f:goto L5ad26f;
case 0x5ad274:c.instructions+=3;goto B5ad274;
case 0x5ad275:c.instructions+=2;goto B5ad275;
case 0x5ad276:c.instructions+=1;goto B5ad276;
case 0x5ad27b:goto L5ad27b;
case 0x5ad27e:goto L5ad27e;
case 0x5ad280:c.instructions+=2;goto B5ad280;
case 0x5ad281:c.instructions+=1;goto B5ad281;
case 0x5ad290:goto L5ad290;
case 0x5ad292:c.instructions+=11;goto B5ad292;
case 0x5ad297:c.instructions+=10;goto B5ad297;
case 0x5ad29d:c.instructions+=9;goto B5ad29d;
case 0x5ad29e:c.instructions+=8;goto B5ad29e;
case 0x5ad2a5:c.instructions+=7;goto B5ad2a5;
case 0x5ad2a6:c.instructions+=6;goto B5ad2a6;
case 0x5ad2a7:c.instructions+=5;goto B5ad2a7;
case 0x5ad2a9:c.instructions+=4;goto B5ad2a9;
case 0x5ad2ad:c.instructions+=3;goto B5ad2ad;
case 0x5ad2b3:c.instructions+=2;goto B5ad2b3;
case 0x5ad2bb:c.instructions+=1;goto B5ad2bb;
case 0x5ad2c0:goto L5ad2c0;
case 0x5ad2c4:c.instructions+=5;goto B5ad2c4;
case 0x5ad2ca:c.instructions+=4;goto B5ad2ca;
case 0x5ad2cb:c.instructions+=3;goto B5ad2cb;
case 0x5ad2d2:c.instructions+=2;goto B5ad2d2;
case 0x5ad2d5:c.instructions+=1;goto B5ad2d5;
case 0x5ad2e0:goto L5ad2e0;
case 0x5ad2e1:c.instructions+=2;goto B5ad2e1;
case 0x5ad2e3:c.instructions+=1;goto B5ad2e3;
case 0x5ad2e8:goto L5ad2e8;
case 0x5ad2ed:c.instructions+=1;goto B5ad2ed;
case 0x5ad2ef:goto L5ad2ef;
case 0x5ad2f4:c.instructions+=3;goto B5ad2f4;
case 0x5ad2f5:c.instructions+=2;goto B5ad2f5;
case 0x5ad2f6:c.instructions+=1;goto B5ad2f6;
case 0x5ad2fb:goto L5ad2fb;
case 0x5ad2fe:goto L5ad2fe;
case 0x5ad300:c.instructions+=2;goto B5ad300;
case 0x5ad301:c.instructions+=1;goto B5ad301;
case 0x5ad310:goto L5ad310;
case 0x5ad311:c.instructions+=20;goto B5ad311;
case 0x5ad313:c.instructions+=19;goto B5ad313;
case 0x5ad316:c.instructions+=18;goto B5ad316;
case 0x5ad318:c.instructions+=17;goto B5ad318;
case 0x5ad31d:c.instructions+=16;goto B5ad31d;
case 0x5ad323:c.instructions+=15;goto B5ad323;
case 0x5ad324:c.instructions+=14;goto B5ad324;
case 0x5ad32b:c.instructions+=13;goto B5ad32b;
case 0x5ad32e:c.instructions+=12;goto B5ad32e;
case 0x5ad32f:c.instructions+=11;goto B5ad32f;
case 0x5ad330:c.instructions+=10;goto B5ad330;
case 0x5ad331:c.instructions+=9;goto B5ad331;
case 0x5ad335:c.instructions+=8;goto B5ad335;
case 0x5ad339:c.instructions+=7;goto B5ad339;
case 0x5ad33d:c.instructions+=6;goto B5ad33d;
case 0x5ad341:c.instructions+=5;goto B5ad341;
case 0x5ad346:c.instructions+=4;goto B5ad346;
case 0x5ad348:c.instructions+=3;goto B5ad348;
case 0x5ad34a:c.instructions+=2;goto B5ad34a;
case 0x5ad34e:c.instructions+=1;goto B5ad34e;
case 0x5ad350:goto L5ad350;
case 0x5ad353:goto L5ad353;
case 0x5ad358:c.instructions+=1;goto B5ad358;
case 0x5ad35d:goto L5ad35d;
case 0x5ad35f:c.instructions+=1;goto B5ad35f;
case 0x5ad365:goto L5ad365;
case 0x5ad368:c.instructions+=3;goto B5ad368;
case 0x5ad36a:c.instructions+=2;goto B5ad36a;
case 0x5ad36d:c.instructions+=1;goto B5ad36d;
case 0x5ad36f:goto L5ad36f;
case 0x5ad372:c.instructions+=1;goto B5ad372;
case 0x5ad374:goto L5ad374;
case 0x5ad376:goto L5ad376;
case 0x5ad379:c.instructions+=2;goto B5ad379;
case 0x5ad37c:c.instructions+=1;goto B5ad37c;
case 0x5ad37e:goto L5ad37e;
case 0x5ad381:c.instructions+=1;goto B5ad381;
case 0x5ad383:goto L5ad383;
case 0x5ad385:c.instructions+=10;goto B5ad385;
case 0x5ad388:c.instructions+=9;goto B5ad388;
case 0x5ad38a:c.instructions+=8;goto B5ad38a;
case 0x5ad38d:c.instructions+=7;goto B5ad38d;
case 0x5ad391:c.instructions+=6;goto B5ad391;
case 0x5ad393:c.instructions+=5;goto B5ad393;
case 0x5ad397:c.instructions+=4;goto B5ad397;
case 0x5ad39a:c.instructions+=3;goto B5ad39a;
case 0x5ad39e:c.instructions+=2;goto B5ad39e;
case 0x5ad3a0:c.instructions+=1;goto B5ad3a0;
case 0x5ad3a4:goto L5ad3a4;
case 0x5ad3a6:c.instructions+=2;goto B5ad3a6;
case 0x5ad3a8:c.instructions+=1;goto B5ad3a8;
case 0x5ad3aa:goto L5ad3aa;
case 0x5ad3ae:c.instructions+=2;goto B5ad3ae;
case 0x5ad3b0:c.instructions+=1;goto B5ad3b0;
case 0x5ad3b2:goto L5ad3b2;
case 0x5ad3b5:c.instructions+=7;goto B5ad3b5;
case 0x5ad3b7:c.instructions+=6;goto B5ad3b7;
case 0x5ad3b9:c.instructions+=5;goto B5ad3b9;
case 0x5ad3bb:c.instructions+=4;goto B5ad3bb;
case 0x5ad3be:c.instructions+=3;goto B5ad3be;
case 0x5ad3c1:c.instructions+=2;goto B5ad3c1;
case 0x5ad3c3:c.instructions+=1;goto B5ad3c3;
case 0x5ad3c5:goto L5ad3c5;
case 0x5ad3c8:c.instructions+=1;goto B5ad3c8;
case 0x5ad3ca:goto L5ad3ca;
case 0x5ad3cc:goto L5ad3cc;
case 0x5ad3ce:c.instructions+=6;goto B5ad3ce;
case 0x5ad3d4:c.instructions+=5;goto B5ad3d4;
case 0x5ad3d9:c.instructions+=4;goto B5ad3d9;
case 0x5ad3dc:c.instructions+=3;goto B5ad3dc;
case 0x5ad3e3:c.instructions+=2;goto B5ad3e3;
case 0x5ad3e5:c.instructions+=1;goto B5ad3e5;
case 0x5ad3e7:goto L5ad3e7;
case 0x5ad3e9:c.instructions+=2;goto B5ad3e9;
case 0x5ad3eb:c.instructions+=1;goto B5ad3eb;
case 0x5ad3ed:goto L5ad3ed;
case 0x5ad3f1:c.instructions+=3;goto B5ad3f1;
case 0x5ad3f5:c.instructions+=2;goto B5ad3f5;
case 0x5ad3f7:c.instructions+=1;goto B5ad3f7;
case 0x5ad3f9:goto L5ad3f9;
case 0x5ad3fd:c.instructions+=2;goto B5ad3fd;
case 0x5ad405:c.instructions+=1;goto B5ad405;
case 0x5ad40a:goto L5ad40a;
case 0x5ad40e:c.instructions+=7;goto B5ad40e;
case 0x5ad40f:c.instructions+=6;goto B5ad40f;
case 0x5ad410:c.instructions+=5;goto B5ad410;
case 0x5ad417:c.instructions+=4;goto B5ad417;
case 0x5ad418:c.instructions+=3;goto B5ad418;
case 0x5ad41a:c.instructions+=2;goto B5ad41a;
case 0x5ad41b:c.instructions+=1;goto B5ad41b;
case 0x5ad420:goto L5ad420;
case 0x5ad421:c.instructions+=14;goto B5ad421;
case 0x5ad423:c.instructions+=13;goto B5ad423;
case 0x5ad426:c.instructions+=12;goto B5ad426;
case 0x5ad428:c.instructions+=11;goto B5ad428;
case 0x5ad42d:c.instructions+=10;goto B5ad42d;
case 0x5ad433:c.instructions+=9;goto B5ad433;
case 0x5ad434:c.instructions+=8;goto B5ad434;
case 0x5ad43b:c.instructions+=7;goto B5ad43b;
case 0x5ad43e:c.instructions+=6;goto B5ad43e;
case 0x5ad443:c.instructions+=5;goto B5ad443;
case 0x5ad445:c.instructions+=4;goto B5ad445;
case 0x5ad446:c.instructions+=3;goto B5ad446;
case 0x5ad447:c.instructions+=2;goto B5ad447;
case 0x5ad448:c.instructions+=1;goto B5ad448;
case 0x5ad44e:goto L5ad44e;
case 0x5ad452:c.instructions+=7;goto B5ad452;
case 0x5ad456:c.instructions+=6;goto B5ad456;
case 0x5ad45a:c.instructions+=5;goto B5ad45a;
case 0x5ad45e:c.instructions+=4;goto B5ad45e;
case 0x5ad461:c.instructions+=3;goto B5ad461;
case 0x5ad463:c.instructions+=2;goto B5ad463;
case 0x5ad46b:c.instructions+=1;goto B5ad46b;
case 0x5ad471:goto L5ad471;
case 0x5ad476:c.instructions+=3;goto B5ad476;
case 0x5ad478:c.instructions+=2;goto B5ad478;
case 0x5ad47e:c.instructions+=1;goto B5ad47e;
case 0x5ad484:goto L5ad484;
case 0x5ad486:c.instructions+=1;goto B5ad486;
case 0x5ad488:goto L5ad488;
case 0x5ad48b:c.instructions+=1;goto B5ad48b;
case 0x5ad48d:goto L5ad48d;
case 0x5ad48f:goto L5ad48f;
case 0x5ad494:c.instructions+=1;goto B5ad494;
case 0x5ad499:goto L5ad499;
case 0x5ad49b:c.instructions+=2;goto B5ad49b;
case 0x5ad49f:c.instructions+=1;goto B5ad49f;
case 0x5ad4a5:goto L5ad4a5;
case 0x5ad4a8:c.instructions+=3;goto B5ad4a8;
case 0x5ad4aa:c.instructions+=2;goto B5ad4aa;
case 0x5ad4ad:c.instructions+=1;goto B5ad4ad;
case 0x5ad4af:goto L5ad4af;
case 0x5ad4b2:c.instructions+=2;goto B5ad4b2;
case 0x5ad4b6:c.instructions+=1;goto B5ad4b6;
case 0x5ad4b8:goto L5ad4b8;
case 0x5ad4c0:goto L5ad4c0;
case 0x5ad4c4:c.instructions+=1;goto B5ad4c4;
case 0x5ad4ca:goto L5ad4ca;
case 0x5ad4cd:c.instructions+=2;goto B5ad4cd;
case 0x5ad4cf:c.instructions+=1;goto B5ad4cf;
case 0x5ad4d5:goto L5ad4d5;
case 0x5ad4db:c.instructions+=3;goto B5ad4db;
case 0x5ad4e1:c.instructions+=2;goto B5ad4e1;
case 0x5ad4e3:c.instructions+=1;goto B5ad4e3;
case 0x5ad4e9:goto L5ad4e9;
case 0x5ad4eb:c.instructions+=2;goto B5ad4eb;
case 0x5ad4ed:c.instructions+=1;goto B5ad4ed;
case 0x5ad4f0:goto L5ad4f0;
case 0x5ad4f3:c.instructions+=5;goto B5ad4f3;
case 0x5ad4f5:c.instructions+=4;goto B5ad4f5;
case 0x5ad4f7:c.instructions+=3;goto B5ad4f7;
case 0x5ad4f8:c.instructions+=2;goto B5ad4f8;
case 0x5ad4fc:c.instructions+=1;goto B5ad4fc;
case 0x5ad501:goto L5ad501;
case 0x5ad505:c.instructions+=3;goto B5ad505;
case 0x5ad508:c.instructions+=2;goto B5ad508;
case 0x5ad50a:c.instructions+=1;goto B5ad50a;
case 0x5ad50c:goto L5ad50c;
case 0x5ad50e:c.instructions+=10;goto B5ad50e;
case 0x5ad511:c.instructions+=9;goto B5ad511;
case 0x5ad513:c.instructions+=8;goto B5ad513;
case 0x5ad516:c.instructions+=7;goto B5ad516;
case 0x5ad51a:c.instructions+=6;goto B5ad51a;
case 0x5ad51c:c.instructions+=5;goto B5ad51c;
case 0x5ad520:c.instructions+=4;goto B5ad520;
case 0x5ad524:c.instructions+=3;goto B5ad524;
case 0x5ad527:c.instructions+=2;goto B5ad527;
case 0x5ad529:c.instructions+=1;goto B5ad529;
case 0x5ad52b:goto L5ad52b;
case 0x5ad52e:c.instructions+=5;goto B5ad52e;
case 0x5ad530:c.instructions+=4;goto B5ad530;
case 0x5ad532:c.instructions+=3;goto B5ad532;
case 0x5ad534:c.instructions+=2;goto B5ad534;
case 0x5ad535:c.instructions+=1;goto B5ad535;
case 0x5ad53a:goto L5ad53a;
case 0x5ad53e:c.instructions+=3;goto B5ad53e;
case 0x5ad540:c.instructions+=2;goto B5ad540;
case 0x5ad542:c.instructions+=1;goto B5ad542;
case 0x5ad545:goto L5ad545;
case 0x5ad548:c.instructions+=4;goto B5ad548;
case 0x5ad54c:c.instructions+=3;goto B5ad54c;
case 0x5ad54e:c.instructions+=2;goto B5ad54e;
case 0x5ad551:c.instructions+=1;goto B5ad551;
case 0x5ad553:goto L5ad553;
case 0x5ad555:c.instructions+=9;goto B5ad555;
case 0x5ad558:c.instructions+=8;goto B5ad558;
case 0x5ad55a:c.instructions+=7;goto B5ad55a;
case 0x5ad55d:c.instructions+=6;goto B5ad55d;
case 0x5ad561:c.instructions+=5;goto B5ad561;
case 0x5ad563:c.instructions+=4;goto B5ad563;
case 0x5ad567:c.instructions+=3;goto B5ad567;
case 0x5ad56a:c.instructions+=2;goto B5ad56a;
case 0x5ad56e:c.instructions+=1;goto B5ad56e;
case 0x5ad570:goto L5ad570;
case 0x5ad574:c.instructions+=2;goto B5ad574;
case 0x5ad578:c.instructions+=1;goto B5ad578;
case 0x5ad57e:goto L5ad57e;
case 0x5ad583:goto L5ad583;
case 0x5ad585:c.instructions+=1;goto B5ad585;
case 0x5ad587:goto L5ad587;
case 0x5ad58a:c.instructions+=1;goto B5ad58a;
case 0x5ad58c:goto L5ad58c;
case 0x5ad58e:goto L5ad58e;
case 0x5ad593:c.instructions+=1;goto B5ad593;
case 0x5ad598:goto L5ad598;
case 0x5ad59a:c.instructions+=2;goto B5ad59a;
case 0x5ad59e:c.instructions+=1;goto B5ad59e;
case 0x5ad5a4:goto L5ad5a4;
case 0x5ad5a7:c.instructions+=3;goto B5ad5a7;
case 0x5ad5a9:c.instructions+=2;goto B5ad5a9;
case 0x5ad5ac:c.instructions+=1;goto B5ad5ac;
case 0x5ad5ae:goto L5ad5ae;
case 0x5ad5b1:c.instructions+=1;goto B5ad5b1;
case 0x5ad5b3:goto L5ad5b3;
case 0x5ad5b5:goto L5ad5b5;
case 0x5ad5b9:c.instructions+=1;goto B5ad5b9;
case 0x5ad5bf:goto L5ad5bf;
case 0x5ad5c1:c.instructions+=2;goto B5ad5c1;
case 0x5ad5c3:c.instructions+=1;goto B5ad5c3;
case 0x5ad5c6:goto L5ad5c6;
case 0x5ad5c9:c.instructions+=18;goto B5ad5c9;
case 0x5ad5cc:c.instructions+=17;goto B5ad5cc;
case 0x5ad5ce:c.instructions+=16;goto B5ad5ce;
case 0x5ad5d0:c.instructions+=15;goto B5ad5d0;
case 0x5ad5d2:c.instructions+=14;goto B5ad5d2;
case 0x5ad5d4:c.instructions+=13;goto B5ad5d4;
case 0x5ad5d6:c.instructions+=12;goto B5ad5d6;
case 0x5ad5d8:c.instructions+=11;goto B5ad5d8;
case 0x5ad5da:c.instructions+=10;goto B5ad5da;
case 0x5ad5dc:c.instructions+=9;goto B5ad5dc;
case 0x5ad5de:c.instructions+=8;goto B5ad5de;
case 0x5ad5e0:c.instructions+=7;goto B5ad5e0;
case 0x5ad5e2:c.instructions+=6;goto B5ad5e2;
case 0x5ad5e4:c.instructions+=5;goto B5ad5e4;
case 0x5ad5e6:c.instructions+=4;goto B5ad5e6;
case 0x5ad5ec:c.instructions+=3;goto B5ad5ec;
case 0x5ad5ee:c.instructions+=2;goto B5ad5ee;
case 0x5ad5f1:c.instructions+=1;goto B5ad5f1;
case 0x5ad5f3:goto L5ad5f3;
case 0x5ad5f9:c.instructions+=3;goto B5ad5f9;
case 0x5ad5ff:c.instructions+=2;goto B5ad5ff;
case 0x5ad601:c.instructions+=1;goto B5ad601;
case 0x5ad603:goto L5ad603;
case 0x5ad605:c.instructions+=9;goto B5ad605;
case 0x5ad608:c.instructions+=8;goto B5ad608;
case 0x5ad60a:c.instructions+=7;goto B5ad60a;
case 0x5ad60d:c.instructions+=6;goto B5ad60d;
case 0x5ad611:c.instructions+=5;goto B5ad611;
case 0x5ad613:c.instructions+=4;goto B5ad613;
case 0x5ad617:c.instructions+=3;goto B5ad617;
case 0x5ad61a:c.instructions+=2;goto B5ad61a;
case 0x5ad61e:c.instructions+=1;goto B5ad61e;
case 0x5ad620:goto L5ad620;
case 0x5ad622:c.instructions+=2;goto B5ad622;
case 0x5ad624:c.instructions+=1;goto B5ad624;
case 0x5ad627:goto L5ad627;
case 0x5ad629:c.instructions+=5;goto B5ad629;
case 0x5ad62b:c.instructions+=4;goto B5ad62b;
case 0x5ad631:c.instructions+=3;goto B5ad631;
case 0x5ad633:c.instructions+=2;goto B5ad633;
case 0x5ad636:c.instructions+=1;goto B5ad636;
case 0x5ad638:goto L5ad638;
case 0x5ad63a:c.instructions+=9;goto B5ad63a;
case 0x5ad63d:c.instructions+=8;goto B5ad63d;
case 0x5ad63f:c.instructions+=7;goto B5ad63f;
case 0x5ad642:c.instructions+=6;goto B5ad642;
case 0x5ad646:c.instructions+=5;goto B5ad646;
case 0x5ad648:c.instructions+=4;goto B5ad648;
case 0x5ad64c:c.instructions+=3;goto B5ad64c;
case 0x5ad64f:c.instructions+=2;goto B5ad64f;
case 0x5ad653:c.instructions+=1;goto B5ad653;
case 0x5ad655:goto L5ad655;
case 0x5ad659:c.instructions+=2;goto B5ad659;
case 0x5ad65b:c.instructions+=1;goto B5ad65b;
case 0x5ad661:goto L5ad661;
case 0x5ad667:c.instructions+=2;goto B5ad667;
case 0x5ad668:c.instructions+=1;goto B5ad668;
case 0x5ad66d:goto L5ad66d;
case 0x5ad670:c.instructions+=3;goto B5ad670;
case 0x5ad673:c.instructions+=2;goto B5ad673;
case 0x5ad67b:c.instructions+=1;goto B5ad67b;
case 0x5ad67d:goto L5ad67d;
case 0x5ad685:goto L5ad685;
case 0x5ad688:c.instructions+=1;goto B5ad688;
case 0x5ad68e:goto L5ad68e;
case 0x5ad694:c.instructions+=2;goto B5ad694;
case 0x5ad696:c.instructions+=1;goto B5ad696;
case 0x5ad698:goto L5ad698;
case 0x5ad69b:c.instructions+=1;goto B5ad69b;
case 0x5ad69d:goto L5ad69d;
case 0x5ad69f:goto L5ad69f;
case 0x5ad6a4:c.instructions+=1;goto B5ad6a4;
case 0x5ad6a9:goto L5ad6a9;
case 0x5ad6ab:c.instructions+=2;goto B5ad6ab;
case 0x5ad6af:c.instructions+=1;goto B5ad6af;
case 0x5ad6b5:goto L5ad6b5;
case 0x5ad6b8:c.instructions+=3;goto B5ad6b8;
case 0x5ad6ba:c.instructions+=2;goto B5ad6ba;
case 0x5ad6bd:c.instructions+=1;goto B5ad6bd;
case 0x5ad6bf:goto L5ad6bf;
case 0x5ad6c2:c.instructions+=1;goto B5ad6c2;
case 0x5ad6c4:goto L5ad6c4;
case 0x5ad6c6:goto L5ad6c6;
case 0x5ad6ca:c.instructions+=1;goto B5ad6ca;
case 0x5ad6d0:goto L5ad6d0;
case 0x5ad6d2:c.instructions+=2;goto B5ad6d2;
case 0x5ad6d4:c.instructions+=1;goto B5ad6d4;
case 0x5ad6d7:goto L5ad6d7;
case 0x5ad6dd:c.instructions+=2;goto B5ad6dd;
case 0x5ad6de:c.instructions+=1;goto B5ad6de;
case 0x5ad6e3:goto L5ad6e3;
case 0x5ad6e7:c.instructions+=3;goto B5ad6e7;
case 0x5ad6eb:c.instructions+=2;goto B5ad6eb;
case 0x5ad6ed:c.instructions+=1;goto B5ad6ed;
case 0x5ad6ef:goto L5ad6ef;
case 0x5ad6f5:c.instructions+=1;goto B5ad6f5;
case 0x5ad6f7:goto L5ad6f7;
case 0x5ad6fd:goto L5ad6fd;
case 0x5ad703:c.instructions+=2;goto B5ad703;
case 0x5ad705:c.instructions+=1;goto B5ad705;
case 0x5ad70b:goto L5ad70b;
case 0x5ad70f:c.instructions+=5;goto B5ad70f;
case 0x5ad711:c.instructions+=4;goto B5ad711;
case 0x5ad713:c.instructions+=3;goto B5ad713;
case 0x5ad715:c.instructions+=2;goto B5ad715;
case 0x5ad718:c.instructions+=1;goto B5ad718;
case 0x5ad71a:goto L5ad71a;
case 0x5ad720:c.instructions+=2;goto B5ad720;
case 0x5ad722:c.instructions+=1;goto B5ad722;
case 0x5ad724:goto L5ad724;
case 0x5ad729:c.instructions+=1;goto B5ad729;
case 0x5ad72b:goto L5ad72b;
case 0x5ad730:c.instructions+=8;goto B5ad730;
case 0x5ad736:c.instructions+=7;goto B5ad736;
case 0x5ad73a:c.instructions+=6;goto B5ad73a;
case 0x5ad73e:c.instructions+=5;goto B5ad73e;
case 0x5ad744:c.instructions+=4;goto B5ad744;
case 0x5ad74a:c.instructions+=3;goto B5ad74a;
case 0x5ad74c:c.instructions+=2;goto B5ad74c;
case 0x5ad74f:c.instructions+=1;goto B5ad74f;
case 0x5ad751:goto L5ad751;
case 0x5ad755:c.instructions+=4;goto B5ad755;
case 0x5ad75b:c.instructions+=3;goto B5ad75b;
case 0x5ad75d:c.instructions+=2;goto B5ad75d;
case 0x5ad760:c.instructions+=1;goto B5ad760;
case 0x5ad762:goto L5ad762;
case 0x5ad768:c.instructions+=3;goto B5ad768;
case 0x5ad76e:c.instructions+=2;goto B5ad76e;
case 0x5ad770:c.instructions+=1;goto B5ad770;
case 0x5ad772:goto L5ad772;
case 0x5ad774:c.instructions+=10;goto B5ad774;
case 0x5ad777:c.instructions+=9;goto B5ad777;
case 0x5ad779:c.instructions+=8;goto B5ad779;
case 0x5ad77c:c.instructions+=7;goto B5ad77c;
case 0x5ad780:c.instructions+=6;goto B5ad780;
case 0x5ad782:c.instructions+=5;goto B5ad782;
case 0x5ad786:c.instructions+=4;goto B5ad786;
case 0x5ad78a:c.instructions+=3;goto B5ad78a;
case 0x5ad78d:c.instructions+=2;goto B5ad78d;
case 0x5ad78f:c.instructions+=1;goto B5ad78f;
case 0x5ad791:goto L5ad791;
case 0x5ad793:goto L5ad793;
case 0x5ad797:c.instructions+=2;goto B5ad797;
case 0x5ad799:c.instructions+=1;goto B5ad799;
case 0x5ad79f:goto L5ad79f;
case 0x5ad7a3:c.instructions+=3;goto B5ad7a3;
case 0x5ad7a7:c.instructions+=2;goto B5ad7a7;
case 0x5ad7a9:c.instructions+=1;goto B5ad7a9;
case 0x5ad7ab:goto L5ad7ab;
case 0x5ad7b0:goto L5ad7b0;
case 0x5ad7b2:c.instructions+=7;goto B5ad7b2;
case 0x5ad7b4:c.instructions+=6;goto B5ad7b4;
case 0x5ad7b7:c.instructions+=5;goto B5ad7b7;
case 0x5ad7b9:c.instructions+=4;goto B5ad7b9;
case 0x5ad7bc:c.instructions+=3;goto B5ad7bc;
case 0x5ad7bf:c.instructions+=2;goto B5ad7bf;
case 0x5ad7c1:c.instructions+=1;goto B5ad7c1;
case 0x5ad7c3:goto L5ad7c3;
case 0x5ad7c6:c.instructions+=1;goto B5ad7c6;
case 0x5ad7c8:goto L5ad7c8;
case 0x5ad7ca:goto L5ad7ca;
case 0x5ad7cc:c.instructions+=6;goto B5ad7cc;
case 0x5ad7d2:c.instructions+=5;goto B5ad7d2;
case 0x5ad7d7:c.instructions+=4;goto B5ad7d7;
case 0x5ad7da:c.instructions+=3;goto B5ad7da;
case 0x5ad7dd:c.instructions+=2;goto B5ad7dd;
case 0x5ad7df:c.instructions+=1;goto B5ad7df;
case 0x5ad7e1:goto L5ad7e1;
case 0x5ad7e3:c.instructions+=2;goto B5ad7e3;
case 0x5ad7e5:c.instructions+=1;goto B5ad7e5;
case 0x5ad7e7:goto L5ad7e7;
case 0x5ad7eb:c.instructions+=3;goto B5ad7eb;
case 0x5ad7ef:c.instructions+=2;goto B5ad7ef;
case 0x5ad7f1:c.instructions+=1;goto B5ad7f1;
case 0x5ad7f3:goto L5ad7f3;
case 0x5ad7f7:c.instructions+=2;goto B5ad7f7;
case 0x5ad7ff:c.instructions+=1;goto B5ad7ff;
case 0x5ad804:goto L5ad804;
case 0x5ad808:c.instructions+=7;goto B5ad808;
case 0x5ad809:c.instructions+=6;goto B5ad809;
case 0x5ad80a:c.instructions+=5;goto B5ad80a;
case 0x5ad811:c.instructions+=4;goto B5ad811;
case 0x5ad812:c.instructions+=3;goto B5ad812;
case 0x5ad814:c.instructions+=2;goto B5ad814;
case 0x5ad815:c.instructions+=1;goto B5ad815;
case 0x5ad820:goto L5ad820;
case 0x5ad821:c.instructions+=5;goto B5ad821;
case 0x5ad822:c.instructions+=4;goto B5ad822;
case 0x5ad828:c.instructions+=3;goto B5ad828;
case 0x5ad829:c.instructions+=2;goto B5ad829;
case 0x5ad82e:c.instructions+=1;goto B5ad82e;
case 0x5ad833:goto L5ad833;
case 0x5ad835:c.instructions+=2;goto B5ad835;
case 0x5ad837:c.instructions+=1;goto B5ad837;
case 0x5ad839:goto L5ad839;
case 0x5ad83a:c.instructions+=1;goto B5ad83a;
case 0x5ad840:goto L5ad840;
case 0x5ad842:c.instructions+=2;goto B5ad842;
case 0x5ad846:c.instructions+=1;goto B5ad846;
case 0x5ad848:goto L5ad848;
case 0x5ad84b:c.instructions+=1;goto B5ad84b;
case 0x5ad850:goto L5ad850;
case 0x5ad852:c.instructions+=2;goto B5ad852;
case 0x5ad854:c.instructions+=1;goto B5ad854;
case 0x5ad856:goto L5ad856;
case 0x5ad858:c.instructions+=2;goto B5ad858;
case 0x5ad85a:c.instructions+=1;goto B5ad85a;
case 0x5ad85c:goto L5ad85c;
case 0x5ad860:c.instructions+=4;goto B5ad860;
case 0x5ad861:c.instructions+=3;goto B5ad861;
case 0x5ad864:c.instructions+=2;goto B5ad864;
case 0x5ad866:c.instructions+=1;goto B5ad866;
case 0x5ad868:goto L5ad868;
case 0x5ad86a:c.instructions+=2;goto B5ad86a;
case 0x5ad86c:c.instructions+=1;goto B5ad86c;
case 0x5ad86e:goto L5ad86e;
case 0x5ad86f:goto L5ad86f;
case 0x5ad876:c.instructions+=1;goto B5ad876;
case 0x5ad87b:goto L5ad87b;
case 0x5ad880:c.instructions+=3;goto B5ad880;
case 0x5ad882:c.instructions+=2;goto B5ad882;
case 0x5ad884:c.instructions+=1;goto B5ad884;
case 0x5ad886:goto L5ad886;
case 0x5ad887:c.instructions+=1;goto B5ad887;
case 0x5ad88c:goto L5ad88c;
case 0x5ad88f:c.instructions+=1;goto B5ad88f;
case 0x5ad895:goto L5ad895;
case 0x5ad89a:c.instructions+=2;goto B5ad89a;
case 0x5ad89c:c.instructions+=1;goto B5ad89c;
case 0x5ad89e:goto L5ad89e;
case 0x5ad89f:c.instructions+=1;goto B5ad89f;
case 0x5ad8a4:goto L5ad8a4;
case 0x5ad8a7:c.instructions+=1;goto B5ad8a7;
case 0x5ad8ad:goto L5ad8ad;
case 0x5ad8b3:c.instructions+=2;goto B5ad8b3;
case 0x5ad8b8:c.instructions+=1;goto B5ad8b8;
case 0x5ad8bd:goto L5ad8bd;
case 0x5ad8bf:c.instructions+=2;goto B5ad8bf;
case 0x5ad8c1:c.instructions+=1;goto B5ad8c1;
case 0x5ad8c3:goto L5ad8c3;
case 0x5ad8c9:c.instructions+=2;goto B5ad8c9;
case 0x5ad8ca:c.instructions+=1;goto B5ad8ca;
case 0x5ad8cf:goto L5ad8cf;
case 0x5ad8d5:c.instructions+=2;goto B5ad8d5;
case 0x5ad8d6:c.instructions+=1;goto B5ad8d6;
case 0x5ad8db:goto L5ad8db;
case 0x5ad8dd:c.instructions+=3;goto B5ad8dd;
case 0x5ad8e0:c.instructions+=2;goto B5ad8e0;
case 0x5ad8e2:c.instructions+=1;goto B5ad8e2;
case 0x5ad8e4:goto L5ad8e4;
case 0x5ad8e5:c.instructions+=3;goto B5ad8e5;
case 0x5ad8e6:c.instructions+=2;goto B5ad8e6;
case 0x5ad8e7:c.instructions+=1;goto B5ad8e7;
case 0x5ad8f0:goto L5ad8f0;
case 0x5ad8f1:c.instructions+=19;goto B5ad8f1;
case 0x5ad8f3:c.instructions+=18;goto B5ad8f3;
case 0x5ad8f6:c.instructions+=17;goto B5ad8f6;
case 0x5ad8f8:c.instructions+=16;goto B5ad8f8;
case 0x5ad8fd:c.instructions+=15;goto B5ad8fd;
case 0x5ad903:c.instructions+=14;goto B5ad903;
case 0x5ad904:c.instructions+=13;goto B5ad904;
case 0x5ad90b:c.instructions+=12;goto B5ad90b;
case 0x5ad90e:c.instructions+=11;goto B5ad90e;
case 0x5ad90f:c.instructions+=10;goto B5ad90f;
case 0x5ad912:c.instructions+=9;goto B5ad912;
case 0x5ad913:c.instructions+=8;goto B5ad913;
case 0x5ad914:c.instructions+=7;goto B5ad914;
case 0x5ad917:c.instructions+=6;goto B5ad917;
case 0x5ad919:c.instructions+=5;goto B5ad919;
case 0x5ad91b:c.instructions+=4;goto B5ad91b;
case 0x5ad91d:c.instructions+=3;goto B5ad91d;
case 0x5ad91e:c.instructions+=2;goto B5ad91e;
case 0x5ad922:c.instructions+=1;goto B5ad922;
case 0x5ad927:goto L5ad927;
case 0x5ad92d:c.instructions+=6;goto B5ad92d;
case 0x5ad932:c.instructions+=5;goto B5ad932;
case 0x5ad938:c.instructions+=4;goto B5ad938;
case 0x5ad939:c.instructions+=3;goto B5ad939;
case 0x5ad93b:c.instructions+=2;goto B5ad93b;
case 0x5ad940:c.instructions+=1;goto B5ad940;
case 0x5ad942:goto L5ad942;
case 0x5ad947:goto L5ad947;
case 0x5ad94b:c.instructions+=8;goto B5ad94b;
case 0x5ad951:c.instructions+=7;goto B5ad951;
case 0x5ad956:c.instructions+=6;goto B5ad956;
case 0x5ad95c:c.instructions+=5;goto B5ad95c;
case 0x5ad95d:c.instructions+=4;goto B5ad95d;
case 0x5ad95f:c.instructions+=3;goto B5ad95f;
case 0x5ad96a:c.instructions+=2;goto B5ad96a;
case 0x5ad96f:c.instructions+=1;goto B5ad96f;
case 0x5ad971:goto L5ad971;
case 0x5ad976:goto L5ad976;
case 0x5ad979:c.instructions+=4;goto B5ad979;
case 0x5ad97c:c.instructions+=3;goto B5ad97c;
case 0x5ad982:c.instructions+=2;goto B5ad982;
case 0x5ad987:c.instructions+=1;goto B5ad987;
case 0x5ad98c:goto L5ad98c;
case 0x5ad98e:c.instructions+=1;goto B5ad98e;
case 0x5ad990:goto L5ad990;
case 0x5ad992:goto L5ad992;
case 0x5ad998:c.instructions+=1;goto B5ad998;
case 0x5ad99a:goto L5ad99a;
case 0x5ad99c:c.instructions+=2;goto B5ad99c;
case 0x5ad99e:c.instructions+=1;goto B5ad99e;
case 0x5ad9a0:goto L5ad9a0;
case 0x5ad9a2:goto L5ad9a2;
case 0x5ad9a5:c.instructions+=5;goto B5ad9a5;
case 0x5ad9a8:c.instructions+=4;goto B5ad9a8;
case 0x5ad9ab:c.instructions+=3;goto B5ad9ab;
case 0x5ad9af:c.instructions+=2;goto B5ad9af;
case 0x5ad9b0:c.instructions+=1;goto B5ad9b0;
case 0x5ad9b5:goto L5ad9b5;
case 0x5ad9b8:c.instructions+=2;goto B5ad9b8;
case 0x5ad9ba:c.instructions+=1;goto B5ad9ba;
case 0x5ad9bc:goto L5ad9bc;
case 0x5ad9c0:c.instructions+=2;goto B5ad9c0;
case 0x5ad9c2:c.instructions+=1;goto B5ad9c2;
case 0x5ad9c7:goto L5ad9c7;
case 0x5ad9ca:c.instructions+=6;goto B5ad9ca;
case 0x5ad9cd:c.instructions+=5;goto B5ad9cd;
case 0x5ad9ce:c.instructions+=4;goto B5ad9ce;
case 0x5ad9d2:c.instructions+=3;goto B5ad9d2;
case 0x5ad9d7:c.instructions+=2;goto B5ad9d7;
case 0x5ad9d8:c.instructions+=1;goto B5ad9d8;
case 0x5ad9dd:goto L5ad9dd;
case 0x5ad9df:c.instructions+=5;goto B5ad9df;
case 0x5ad9e3:c.instructions+=4;goto B5ad9e3;
case 0x5ad9e4:c.instructions+=3;goto B5ad9e4;
case 0x5ad9e7:c.instructions+=2;goto B5ad9e7;
case 0x5ad9e8:c.instructions+=1;goto B5ad9e8;
case 0x5ad9ed:goto L5ad9ed;
case 0x5ad9f0:c.instructions+=11;goto B5ad9f0;
case 0x5ad9f3:c.instructions+=10;goto B5ad9f3;
case 0x5ad9f6:c.instructions+=9;goto B5ad9f6;
case 0x5ad9f7:c.instructions+=8;goto B5ad9f7;
case 0x5ad9fa:c.instructions+=7;goto B5ad9fa;
case 0x5ad9fb:c.instructions+=6;goto B5ad9fb;
case 0x5ad9fd:c.instructions+=5;goto B5ad9fd;
case 0x5ada01:c.instructions+=4;goto B5ada01;
case 0x5ada08:c.instructions+=3;goto B5ada08;
case 0x5ada0c:c.instructions+=2;goto B5ada0c;
case 0x5ada10:c.instructions+=1;goto B5ada10;
case 0x5ada15:goto L5ada15;
case 0x5ada18:c.instructions+=23;goto B5ada18;
case 0x5ada1b:c.instructions+=22;goto B5ada1b;
case 0x5ada1f:c.instructions+=21;goto B5ada1f;
case 0x5ada22:c.instructions+=20;goto B5ada22;
case 0x5ada23:c.instructions+=19;goto B5ada23;
case 0x5ada26:c.instructions+=18;goto B5ada26;
case 0x5ada29:c.instructions+=17;goto B5ada29;
case 0x5ada2c:c.instructions+=16;goto B5ada2c;
case 0x5ada2f:c.instructions+=15;goto B5ada2f;
case 0x5ada31:c.instructions+=14;goto B5ada31;
case 0x5ada33:c.instructions+=13;goto B5ada33;
case 0x5ada35:c.instructions+=12;goto B5ada35;
case 0x5ada37:c.instructions+=11;goto B5ada37;
case 0x5ada39:c.instructions+=10;goto B5ada39;
case 0x5ada3b:c.instructions+=9;goto B5ada3b;
case 0x5ada3d:c.instructions+=8;goto B5ada3d;
case 0x5ada3f:c.instructions+=7;goto B5ada3f;
case 0x5ada41:c.instructions+=6;goto B5ada41;
case 0x5ada43:c.instructions+=5;goto B5ada43;
case 0x5ada45:c.instructions+=4;goto B5ada45;
case 0x5ada47:c.instructions+=3;goto B5ada47;
case 0x5ada4d:c.instructions+=2;goto B5ada4d;
case 0x5ada50:c.instructions+=1;goto B5ada50;
case 0x5ada55:goto L5ada55;
case 0x5ada5c:c.instructions+=9;goto B5ada5c;
case 0x5ada5f:c.instructions+=8;goto B5ada5f;
case 0x5ada60:c.instructions+=7;goto B5ada60;
case 0x5ada62:c.instructions+=6;goto B5ada62;
case 0x5ada63:c.instructions+=5;goto B5ada63;
case 0x5ada6a:c.instructions+=4;goto B5ada6a;
case 0x5ada6b:c.instructions+=3;goto B5ada6b;
case 0x5ada6d:c.instructions+=2;goto B5ada6d;
case 0x5ada6e:c.instructions+=1;goto B5ada6e;
case 0x5ada80:goto L5ada80;
case 0x5ada83:c.instructions+=2;goto B5ada83;
case 0x5ada89:c.instructions+=1;goto B5ada89;
case 0x5ada90:goto L5ada90;
case 0x5ada92:c.instructions+=14;goto B5ada92;
case 0x5ada97:c.instructions+=13;goto B5ada97;
case 0x5ada9d:c.instructions+=12;goto B5ada9d;
case 0x5ada9e:c.instructions+=11;goto B5ada9e;
case 0x5adaa5:c.instructions+=10;goto B5adaa5;
case 0x5adaa6:c.instructions+=9;goto B5adaa6;
case 0x5adaa7:c.instructions+=8;goto B5adaa7;
case 0x5adaa9:c.instructions+=7;goto B5adaa9;
case 0x5adaad:c.instructions+=6;goto B5adaad;
case 0x5adab3:c.instructions+=5;goto B5adab3;
case 0x5adab6:c.instructions+=4;goto B5adab6;
case 0x5adaba:c.instructions+=3;goto B5adaba;
case 0x5adabb:c.instructions+=2;goto B5adabb;
case 0x5adac3:c.instructions+=1;goto B5adac3;
case 0x5adac8:goto L5adac8;
case 0x5adacb:c.instructions+=2;goto B5adacb;
case 0x5adacd:c.instructions+=1;goto B5adacd;
case 0x5adacf:goto L5adacf;
case 0x5adad3:c.instructions+=2;goto B5adad3;
case 0x5adad5:c.instructions+=1;goto B5adad5;
case 0x5adada:goto L5adada;
case 0x5adadd:c.instructions+=9;goto B5adadd;
case 0x5adae4:c.instructions+=8;goto B5adae4;
case 0x5adaea:c.instructions+=7;goto B5adaea;
case 0x5adaf0:c.instructions+=6;goto B5adaf0;
case 0x5adaf5:c.instructions+=5;goto B5adaf5;
case 0x5adaf6:c.instructions+=4;goto B5adaf6;
case 0x5adaf8:c.instructions+=3;goto B5adaf8;
case 0x5adb00:c.instructions+=2;goto B5adb00;
case 0x5adb05:c.instructions+=1;goto B5adb05;
case 0x5adb0a:goto L5adb0a;
case 0x5adb0e:c.instructions+=4;goto B5adb0e;
case 0x5adb0f:c.instructions+=3;goto B5adb0f;
case 0x5adb16:c.instructions+=2;goto B5adb16;
case 0x5adb19:c.instructions+=1;goto B5adb19;
case 0x5adb20:goto L5adb20;
case 0x5adb21:c.instructions+=18;goto B5adb21;
case 0x5adb23:c.instructions+=17;goto B5adb23;
case 0x5adb26:c.instructions+=16;goto B5adb26;
case 0x5adb2c:c.instructions+=15;goto B5adb2c;
case 0x5adb2d:c.instructions+=14;goto B5adb2d;
case 0x5adb30:c.instructions+=13;goto B5adb30;
case 0x5adb33:c.instructions+=12;goto B5adb33;
case 0x5adb36:c.instructions+=11;goto B5adb36;
case 0x5adb37:c.instructions+=10;goto B5adb37;
case 0x5adb38:c.instructions+=9;goto B5adb38;
case 0x5adb3a:c.instructions+=8;goto B5adb3a;
case 0x5adb3e:c.instructions+=7;goto B5adb3e;
case 0x5adb41:c.instructions+=6;goto B5adb41;
case 0x5adb45:c.instructions+=5;goto B5adb45;
case 0x5adb46:c.instructions+=4;goto B5adb46;
case 0x5adb4a:c.instructions+=3;goto B5adb4a;
case 0x5adb4b:c.instructions+=2;goto B5adb4b;
case 0x5adb4f:c.instructions+=1;goto B5adb4f;
case 0x5adb54:goto L5adb54;
case 0x5adb57:c.instructions+=11;goto B5adb57;
case 0x5adb59:c.instructions+=10;goto B5adb59;
case 0x5adb5c:c.instructions+=9;goto B5adb5c;
case 0x5adb5e:c.instructions+=8;goto B5adb5e;
case 0x5adb69:c.instructions+=7;goto B5adb69;
case 0x5adb74:c.instructions+=6;goto B5adb74;
case 0x5adb7f:c.instructions+=5;goto B5adb7f;
case 0x5adb8a:c.instructions+=4;goto B5adb8a;
case 0x5adb92:c.instructions+=3;goto B5adb92;
case 0x5adb9a:c.instructions+=2;goto B5adb9a;
case 0x5adba2:c.instructions+=1;goto B5adba2;
case 0x5adba4:goto L5adba4;
case 0x5adba7:c.instructions+=5;goto B5adba7;
case 0x5adba9:c.instructions+=4;goto B5adba9;
case 0x5adbad:c.instructions+=3;goto B5adbad;
case 0x5adbb0:c.instructions+=2;goto B5adbb0;
case 0x5adbb4:c.instructions+=1;goto B5adbb4;
case 0x5adbb8:goto L5adbb8;
case 0x5adbbb:c.instructions+=5;goto B5adbbb;
case 0x5adbbd:c.instructions+=4;goto B5adbbd;
case 0x5adbc5:c.instructions+=3;goto B5adbc5;
case 0x5adbcd:c.instructions+=2;goto B5adbcd;
case 0x5adbd5:c.instructions+=1;goto B5adbd5;
case 0x5adbd7:goto L5adbd7;
case 0x5adbda:c.instructions+=5;goto B5adbda;
case 0x5adbdc:c.instructions+=4;goto B5adbdc;
case 0x5adbe0:c.instructions+=3;goto B5adbe0;
case 0x5adbe3:c.instructions+=2;goto B5adbe3;
case 0x5adbe7:c.instructions+=1;goto B5adbe7;
case 0x5adbeb:goto L5adbeb;
case 0x5adbee:c.instructions+=7;goto B5adbee;
case 0x5adbf4:c.instructions+=6;goto B5adbf4;
case 0x5adbf5:c.instructions+=5;goto B5adbf5;
case 0x5adbf9:c.instructions+=4;goto B5adbf9;
case 0x5adbfa:c.instructions+=3;goto B5adbfa;
case 0x5adbfe:c.instructions+=2;goto B5adbfe;
case 0x5adbff:c.instructions+=1;goto B5adbff;
case 0x5adc04:goto L5adc04;
case 0x5adc08:c.instructions+=23;goto B5adc08;
case 0x5adc0c:c.instructions+=22;goto B5adc0c;
case 0x5adc0f:c.instructions+=21;goto B5adc0f;
case 0x5adc13:c.instructions+=20;goto B5adc13;
case 0x5adc14:c.instructions+=19;goto B5adc14;
case 0x5adc18:c.instructions+=18;goto B5adc18;
case 0x5adc1c:c.instructions+=17;goto B5adc1c;
case 0x5adc20:c.instructions+=16;goto B5adc20;
case 0x5adc21:c.instructions+=15;goto B5adc21;
case 0x5adc25:c.instructions+=14;goto B5adc25;
case 0x5adc29:c.instructions+=13;goto B5adc29;
case 0x5adc2a:c.instructions+=12;goto B5adc2a;
case 0x5adc2d:c.instructions+=11;goto B5adc2d;
case 0x5adc34:c.instructions+=10;goto B5adc34;
case 0x5adc3b:c.instructions+=9;goto B5adc3b;
case 0x5adc3d:c.instructions+=8;goto B5adc3d;
case 0x5adc41:c.instructions+=7;goto B5adc41;
case 0x5adc45:c.instructions+=6;goto B5adc45;
case 0x5adc49:c.instructions+=5;goto B5adc49;
case 0x5adc4a:c.instructions+=4;goto B5adc4a;
case 0x5adc4e:c.instructions+=3;goto B5adc4e;
case 0x5adc52:c.instructions+=2;goto B5adc52;
case 0x5adc53:c.instructions+=1;goto B5adc53;
case 0x5adc58:goto L5adc58;
case 0x5adc5f:c.instructions+=3;goto B5adc5f;
case 0x5adc60:c.instructions+=2;goto B5adc60;
case 0x5adc61:c.instructions+=1;goto B5adc61;
case 0x5adc66:goto L5adc66;
case 0x5adc6d:c.instructions+=7;goto B5adc6d;
case 0x5adc73:c.instructions+=6;goto B5adc73;
case 0x5adc76:c.instructions+=5;goto B5adc76;
case 0x5adc7d:c.instructions+=4;goto B5adc7d;
case 0x5adc7e:c.instructions+=3;goto B5adc7e;
case 0x5adc84:c.instructions+=2;goto B5adc84;
case 0x5adc8b:c.instructions+=1;goto B5adc8b;
case 0x5adc90:goto L5adc90;
case 0x5adc94:c.instructions+=10;goto B5adc94;
case 0x5adc98:c.instructions+=9;goto B5adc98;
case 0x5adc9c:c.instructions+=8;goto B5adc9c;
case 0x5adca2:c.instructions+=7;goto B5adca2;
case 0x5adca6:c.instructions+=6;goto B5adca6;
case 0x5adcac:c.instructions+=5;goto B5adcac;
case 0x5adcad:c.instructions+=4;goto B5adcad;
case 0x5adcb0:c.instructions+=3;goto B5adcb0;
case 0x5adcb1:c.instructions+=2;goto B5adcb1;
case 0x5adcb7:c.instructions+=1;goto B5adcb7;
case 0x5adcbc:goto L5adcbc;
case 0x5adcc2:c.instructions+=7;goto B5adcc2;
case 0x5adcc8:c.instructions+=6;goto B5adcc8;
case 0x5adcce:c.instructions+=5;goto B5adcce;
case 0x5adcd4:c.instructions+=4;goto B5adcd4;
case 0x5adcda:c.instructions+=3;goto B5adcda;
case 0x5adcdd:c.instructions+=2;goto B5adcdd;
case 0x5adce4:c.instructions+=1;goto B5adce4;
case 0x5adce7:goto L5adce7;
case 0x5adce9:c.instructions+=1;goto B5adce9;
case 0x5adcee:goto L5adcee;
case 0x5adcf4:c.instructions+=3;goto B5adcf4;
case 0x5adcfa:c.instructions+=2;goto B5adcfa;
case 0x5adcfc:c.instructions+=1;goto B5adcfc;
case 0x5adcfe:goto L5adcfe;
case 0x5add00:goto L5add00;
case 0x5add03:c.instructions+=4;goto B5add03;
case 0x5add06:c.instructions+=3;goto B5add06;
case 0x5add07:c.instructions+=2;goto B5add07;
case 0x5add08:c.instructions+=1;goto B5add08;
case 0x5add0d:goto L5add0d;
case 0x5add0f:c.instructions+=4;goto B5add0f;
case 0x5add15:c.instructions+=3;goto B5add15;
case 0x5add18:c.instructions+=2;goto B5add18;
case 0x5add1a:c.instructions+=1;goto B5add1a;
case 0x5add1c:goto L5add1c;
case 0x5add22:c.instructions+=3;goto B5add22;
case 0x5add24:c.instructions+=2;goto B5add24;
case 0x5add26:c.instructions+=1;goto B5add26;
case 0x5add28:goto L5add28;
case 0x5add2b:c.instructions+=4;goto B5add2b;
case 0x5add2e:c.instructions+=3;goto B5add2e;
case 0x5add2f:c.instructions+=2;goto B5add2f;
case 0x5add30:c.instructions+=1;goto B5add30;
case 0x5add35:goto L5add35;
case 0x5add37:c.instructions+=3;goto B5add37;
case 0x5add3a:c.instructions+=2;goto B5add3a;
case 0x5add3c:c.instructions+=1;goto B5add3c;
case 0x5add3e:goto L5add3e;
case 0x5add3f:c.instructions+=5;goto B5add3f;
case 0x5add40:c.instructions+=4;goto B5add40;
case 0x5add41:c.instructions+=3;goto B5add41;
case 0x5add43:c.instructions+=2;goto B5add43;
case 0x5add44:c.instructions+=1;goto B5add44;
case 0x5add50:goto L5add50;
case 0x5add55:c.instructions+=5;goto B5add55;
case 0x5add58:c.instructions+=4;goto B5add58;
case 0x5add5a:c.instructions+=3;goto B5add5a;
case 0x5add5b:c.instructions+=2;goto B5add5b;
case 0x5add5d:c.instructions+=1;goto B5add5d;
case 0x5add63:goto L5add63;
case 0x5add66:c.instructions+=3;goto B5add66;
case 0x5add68:c.instructions+=2;goto B5add68;
case 0x5add6c:c.instructions+=1;goto B5add6c;
case 0x5add6f:goto L5add6f;
case 0x5add72:c.instructions+=20;goto B5add72;
case 0x5add75:c.instructions+=19;goto B5add75;
case 0x5add77:c.instructions+=18;goto B5add77;
case 0x5add79:c.instructions+=17;goto B5add79;
case 0x5add7b:c.instructions+=16;goto B5add7b;
case 0x5add7d:c.instructions+=15;goto B5add7d;
case 0x5add7f:c.instructions+=14;goto B5add7f;
case 0x5add81:c.instructions+=13;goto B5add81;
case 0x5add83:c.instructions+=12;goto B5add83;
case 0x5add85:c.instructions+=11;goto B5add85;
case 0x5add87:c.instructions+=10;goto B5add87;
case 0x5add89:c.instructions+=9;goto B5add89;
case 0x5add8b:c.instructions+=8;goto B5add8b;
case 0x5add8d:c.instructions+=7;goto B5add8d;
case 0x5add8f:c.instructions+=6;goto B5add8f;
case 0x5add95:c.instructions+=5;goto B5add95;
case 0x5add99:c.instructions+=4;goto B5add99;
case 0x5add9f:c.instructions+=3;goto B5add9f;
case 0x5adda1:c.instructions+=2;goto B5adda1;
case 0x5adda4:c.instructions+=1;goto B5adda4;
case 0x5adda6:goto L5adda6;
case 0x5addae:goto L5addae;
case 0x5addb0:c.instructions+=3;goto B5addb0;
case 0x5addb1:c.instructions+=2;goto B5addb1;
case 0x5addb3:c.instructions+=1;goto B5addb3;
case 0x5addb6:goto L5addb6;
case 0x5addb8:c.instructions+=3;goto B5addb8;
case 0x5addba:c.instructions+=2;goto B5addba;
case 0x5addbc:c.instructions+=1;goto B5addbc;
case 0x5addbf:goto L5addbf;
case 0x5addc3:c.instructions+=7;goto B5addc3;
case 0x5addc7:c.instructions+=6;goto B5addc7;
case 0x5addc8:c.instructions+=5;goto B5addc8;
case 0x5addc9:c.instructions+=4;goto B5addc9;
case 0x5addcf:c.instructions+=3;goto B5addcf;
case 0x5addd2:c.instructions+=2;goto B5addd2;
case 0x5addd3:c.instructions+=1;goto B5addd3;
case 0x5addd8:goto L5addd8;
case 0x5addd9:c.instructions+=4;goto B5addd9;
case 0x5adddb:c.instructions+=3;goto B5adddb;
case 0x5adddc:c.instructions+=2;goto B5adddc;
case 0x5adddf:c.instructions+=1;goto B5adddf;
case 0x5adde4:goto L5adde4;
case 0x5adde6:c.instructions+=2;goto B5adde6;
case 0x5adde8:c.instructions+=1;goto B5adde8;
case 0x5addeb:goto L5addeb;
case 0x5addec:c.instructions+=2;goto B5addec;
case 0x5addf2:c.instructions+=1;goto B5addf2;
case 0x5addf7:goto L5addf7;
case 0x5addf9:c.instructions+=3;goto B5addf9;
case 0x5addfa:c.instructions+=2;goto B5addfa;
case 0x5addfd:c.instructions+=1;goto B5addfd;
case 0x5ade10:goto L5ade10;
case 0x5ade12:c.instructions+=12;goto B5ade12;
case 0x5ade17:c.instructions+=11;goto B5ade17;
case 0x5ade1d:c.instructions+=10;goto B5ade1d;
case 0x5ade1e:c.instructions+=9;goto B5ade1e;
case 0x5ade25:c.instructions+=8;goto B5ade25;
case 0x5ade26:c.instructions+=7;goto B5ade26;
case 0x5ade2c:c.instructions+=6;goto B5ade2c;
case 0x5ade2d:c.instructions+=5;goto B5ade2d;
case 0x5ade2f:c.instructions+=4;goto B5ade2f;
case 0x5ade35:c.instructions+=3;goto B5ade35;
case 0x5ade37:c.instructions+=2;goto B5ade37;
case 0x5ade38:c.instructions+=1;goto B5ade38;
case 0x5ade3e:goto L5ade3e;
case 0x5ade44:c.instructions+=2;goto B5ade44;
case 0x5ade46:c.instructions+=1;goto B5ade46;
case 0x5ade48:goto L5ade48;
case 0x5ade4d:c.instructions+=1;goto B5ade4d;
case 0x5ade53:goto L5ade53;
case 0x5ade56:c.instructions+=2;goto B5ade56;
case 0x5ade58:c.instructions+=1;goto B5ade58;
case 0x5ade5e:goto L5ade5e;
case 0x5ade64:c.instructions+=9;goto B5ade64;
case 0x5ade66:c.instructions+=8;goto B5ade66;
case 0x5ade68:c.instructions+=7;goto B5ade68;
case 0x5ade6c:c.instructions+=6;goto B5ade6c;
case 0x5ade70:c.instructions+=5;goto B5ade70;
case 0x5ade76:c.instructions+=4;goto B5ade76;
case 0x5ade7c:c.instructions+=3;goto B5ade7c;
case 0x5ade7e:c.instructions+=2;goto B5ade7e;
case 0x5ade81:c.instructions+=1;goto B5ade81;
case 0x5ade83:goto L5ade83;
case 0x5ade85:c.instructions+=11;goto B5ade85;
case 0x5ade88:c.instructions+=10;goto B5ade88;
case 0x5ade8e:c.instructions+=9;goto B5ade8e;
case 0x5ade91:c.instructions+=8;goto B5ade91;
case 0x5ade93:c.instructions+=7;goto B5ade93;
case 0x5ade95:c.instructions+=6;goto B5ade95;
case 0x5ade98:c.instructions+=5;goto B5ade98;
case 0x5ade9a:c.instructions+=4;goto B5ade9a;
case 0x5ade9c:c.instructions+=3;goto B5ade9c;
case 0x5adea2:c.instructions+=2;goto B5adea2;
case 0x5adea3:c.instructions+=1;goto B5adea3;
case 0x5adea8:goto L5adea8;
case 0x5adeaa:c.instructions+=3;goto B5adeaa;
case 0x5adead:c.instructions+=2;goto B5adead;
case 0x5adeaf:c.instructions+=1;goto B5adeaf;
case 0x5adeb1:goto L5adeb1;
case 0x5adeb6:c.instructions+=2;goto B5adeb6;
case 0x5adeb7:c.instructions+=1;goto B5adeb7;
case 0x5adebc:goto L5adebc;
case 0x5adebf:c.instructions+=4;goto B5adebf;
case 0x5adec3:c.instructions+=3;goto B5adec3;
case 0x5adec5:c.instructions+=2;goto B5adec5;
case 0x5adecd:c.instructions+=1;goto B5adecd;
case 0x5adecf:goto L5adecf;
case 0x5aded5:c.instructions+=4;goto B5aded5;
case 0x5aded6:c.instructions+=3;goto B5aded6;
case 0x5aded7:c.instructions+=2;goto B5aded7;
case 0x5aded9:c.instructions+=1;goto B5aded9;
case 0x5adede:goto L5adede;
case 0x5adee6:goto L5adee6;
case 0x5adee8:c.instructions+=3;goto B5adee8;
case 0x5adeea:c.instructions+=2;goto B5adeea;
case 0x5adeec:c.instructions+=1;goto B5adeec;
case 0x5adeee:goto L5adeee;
case 0x5adeef:c.instructions+=6;goto B5adeef;
case 0x5adef1:c.instructions+=5;goto B5adef1;
case 0x5adef2:c.instructions+=4;goto B5adef2;
case 0x5adef6:c.instructions+=3;goto B5adef6;
case 0x5adefd:c.instructions+=2;goto B5adefd;
case 0x5adf00:c.instructions+=1;goto B5adf00;
case 0x5adf01:goto L5adf01;
case 0x5adf07:c.instructions+=2;goto B5adf07;
case 0x5adf09:c.instructions+=1;goto B5adf09;
case 0x5adf0b:goto L5adf0b;
case 0x5adf10:c.instructions+=1;goto B5adf10;
case 0x5adf12:goto L5adf12;
case 0x5adf18:c.instructions+=5;goto B5adf18;
case 0x5adf1e:c.instructions+=4;goto B5adf1e;
case 0x5adf24:c.instructions+=3;goto B5adf24;
case 0x5adf26:c.instructions+=2;goto B5adf26;
case 0x5adf29:c.instructions+=1;goto B5adf29;
case 0x5adf2b:goto L5adf2b;
case 0x5adf31:c.instructions+=7;goto B5adf31;
case 0x5adf35:c.instructions+=6;goto B5adf35;
case 0x5adf39:c.instructions+=5;goto B5adf39;
case 0x5adf3f:c.instructions+=4;goto B5adf3f;
case 0x5adf45:c.instructions+=3;goto B5adf45;
case 0x5adf47:c.instructions+=2;goto B5adf47;
case 0x5adf4a:c.instructions+=1;goto B5adf4a;
case 0x5adf4c:goto L5adf4c;
case 0x5adf4e:c.instructions+=2;goto B5adf4e;
case 0x5adf50:c.instructions+=1;goto B5adf50;
case 0x5adf56:goto L5adf56;
case 0x5adf58:c.instructions+=3;goto B5adf58;
case 0x5adf5a:c.instructions+=2;goto B5adf5a;
case 0x5adf5c:c.instructions+=1;goto B5adf5c;
case 0x5adf5e:goto L5adf5e;
case 0x5adf5f:c.instructions+=6;goto B5adf5f;
case 0x5adf61:c.instructions+=5;goto B5adf61;
case 0x5adf62:c.instructions+=4;goto B5adf62;
case 0x5adf66:c.instructions+=3;goto B5adf66;
case 0x5adf6d:c.instructions+=2;goto B5adf6d;
case 0x5adf70:c.instructions+=1;goto B5adf70;
case 0x5adf71:goto L5adf71;
case 0x5adf75:c.instructions+=6;goto B5adf75;
case 0x5adf76:c.instructions+=5;goto B5adf76;
case 0x5adf78:c.instructions+=4;goto B5adf78;
case 0x5adf79:c.instructions+=3;goto B5adf79;
case 0x5adf80:c.instructions+=2;goto B5adf80;
case 0x5adf83:c.instructions+=1;goto B5adf83;
case 0x5adf90:goto L5adf90;
case 0x5adf91:c.instructions+=6;goto B5adf91;
case 0x5adf93:c.instructions+=5;goto B5adf93;
case 0x5adf9a:c.instructions+=4;goto B5adf9a;
case 0x5adf9e:c.instructions+=3;goto B5adf9e;
case 0x5adfa4:c.instructions+=2;goto B5adfa4;
case 0x5adfa6:c.instructions+=1;goto B5adfa6;
case 0x5adfab:goto L5adfab;
case 0x5adfb1:c.instructions+=2;goto B5adfb1;
case 0x5adfb3:c.instructions+=1;goto B5adfb3;
case 0x5adfb5:goto L5adfb5;
case 0x5adfb6:c.instructions+=5;goto B5adfb6;
case 0x5adfbc:c.instructions+=4;goto B5adfbc;
case 0x5adfbd:c.instructions+=3;goto B5adfbd;
case 0x5adfbf:c.instructions+=2;goto B5adfbf;
case 0x5adfc1:c.instructions+=1;goto B5adfc1;
case 0x5adfc3:goto L5adfc3;
case 0x5adfc6:c.instructions+=3;goto B5adfc6;
case 0x5adfc7:c.instructions+=2;goto B5adfc7;
case 0x5adfcc:c.instructions+=1;goto B5adfcc;
case 0x5adfd1:goto L5adfd1;
case 0x5adfd3:c.instructions+=2;goto B5adfd3;
case 0x5adfd5:c.instructions+=1;goto B5adfd5;
case 0x5adfd7:goto L5adfd7;
case 0x5adfd8:c.instructions+=2;goto B5adfd8;
case 0x5adfdf:c.instructions+=1;goto B5adfdf;
case 0x5adfe0:goto L5adfe0;
case 0x5adfe6:c.instructions+=2;goto B5adfe6;
case 0x5adfe8:c.instructions+=1;goto B5adfe8;
case 0x5adfea:goto L5adfea;
case 0x5adfef:c.instructions+=1;goto B5adfef;
case 0x5adff1:goto L5adff1;
case 0x5adff7:c.instructions+=1;goto B5adff7;
case 0x5adffd:goto L5adffd;
case 0x5adffe:c.instructions+=1;goto B5adffe;
default:missing_instruction(c.pc);}
B5ad000:L5ad000:{c.instructions+=1;NFSU2_TR(0x5ad000);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad008;}}
}
B5ad002:L5ad002:{c.instructions+=2;NFSU2_TR(0x5ad002);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad004:{NFSU2_TR(0x5ad004);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad008:L5ad008:{c.instructions+=3;NFSU2_TR(0x5ad008);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad00b:{NFSU2_TR(0x5ad00b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad013:{NFSU2_TR(0x5ad013);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ad01f;}}
}
B5ad015:L5ad015:{c.instructions+=3;NFSU2_TR(0x5ad015);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad019:{NFSU2_TR(0x5ad019);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad01d:{NFSU2_TR(0x5ad01d);
{goto L5ad038;}
}
B5ad01f:L5ad01f:{c.instructions+=1;NFSU2_TR(0x5ad01f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad029;}}
}
B5ad021:L5ad021:{c.instructions+=2;NFSU2_TR(0x5ad021);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad027:{NFSU2_TR(0x5ad027);
{goto L5ad034;}
}
B5ad029:L5ad029:{c.instructions+=2;NFSU2_TR(0x5ad029);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad02c:{NFSU2_TR(0x5ad02c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad038;}}
}
B5ad02e:L5ad02e:{c.instructions+=1;NFSU2_TR(0x5ad02e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad034:L5ad034:{c.instructions+=1;NFSU2_TR(0x5ad034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ad038:L5ad038:{c.instructions+=7;NFSU2_TR(0x5ad038);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad03c:{NFSU2_TR(0x5ad03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad040:{NFSU2_TR(0x5ad040);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad042:{NFSU2_TR(0x5ad042);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad046:{NFSU2_TR(0x5ad046);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad048:{NFSU2_TR(0x5ad048);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad04b:{NFSU2_TR(0x5ad04b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad053;}}
}
B5ad04d:L5ad04d:{c.instructions+=2;NFSU2_TR(0x5ad04d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad04f:{NFSU2_TR(0x5ad04f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad053:L5ad053:{c.instructions+=3;NFSU2_TR(0x5ad053);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad056:{NFSU2_TR(0x5ad056);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad05e:{NFSU2_TR(0x5ad05e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ad06a;}}
}
B5ad060:L5ad060:{c.instructions+=3;NFSU2_TR(0x5ad060);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad064:{NFSU2_TR(0x5ad064);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad068:{NFSU2_TR(0x5ad068);
{goto L5ad083;}
}
B5ad06a:L5ad06a:{c.instructions+=1;NFSU2_TR(0x5ad06a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad074;}}
}
B5ad06c:L5ad06c:{c.instructions+=2;NFSU2_TR(0x5ad06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad072:{NFSU2_TR(0x5ad072);
{goto L5ad07f;}
}
B5ad074:L5ad074:{c.instructions+=2;NFSU2_TR(0x5ad074);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad077:{NFSU2_TR(0x5ad077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad083;}}
}
B5ad079:L5ad079:{c.instructions+=1;NFSU2_TR(0x5ad079);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad07f:L5ad07f:{c.instructions+=1;NFSU2_TR(0x5ad07f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ad083:L5ad083:{c.instructions+=7;NFSU2_TR(0x5ad083);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad087:{NFSU2_TR(0x5ad087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad08b:{NFSU2_TR(0x5ad08b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad08d:{NFSU2_TR(0x5ad08d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad091:{NFSU2_TR(0x5ad091);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad093:{NFSU2_TR(0x5ad093);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad096:{NFSU2_TR(0x5ad096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad09e;}}
}
B5ad098:L5ad098:{c.instructions+=2;NFSU2_TR(0x5ad098);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad09a:{NFSU2_TR(0x5ad09a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad09e:L5ad09e:{c.instructions+=3;NFSU2_TR(0x5ad09e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad0a1:{NFSU2_TR(0x5ad0a1);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad0a9:{NFSU2_TR(0x5ad0a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ad0b5;}}
}
B5ad0ab:L5ad0ab:{c.instructions+=3;NFSU2_TR(0x5ad0ab);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad0af:{NFSU2_TR(0x5ad0af);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad0b3:{NFSU2_TR(0x5ad0b3);
{goto L5ad0ce;}
}
B5ad0b5:L5ad0b5:{c.instructions+=1;NFSU2_TR(0x5ad0b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad0bf;}}
}
B5ad0b7:L5ad0b7:{c.instructions+=2;NFSU2_TR(0x5ad0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad0bd:{NFSU2_TR(0x5ad0bd);
{goto L5ad0ca;}
}
B5ad0bf:L5ad0bf:{c.instructions+=2;NFSU2_TR(0x5ad0bf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad0c2:{NFSU2_TR(0x5ad0c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad0ce;}}
}
B5ad0c4:L5ad0c4:{c.instructions+=1;NFSU2_TR(0x5ad0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad0ca:L5ad0ca:{c.instructions+=1;NFSU2_TR(0x5ad0ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ad0ce:L5ad0ce:{c.instructions+=7;NFSU2_TR(0x5ad0ce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad0d2:{NFSU2_TR(0x5ad0d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad0d6:{NFSU2_TR(0x5ad0d6);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad0d8:{NFSU2_TR(0x5ad0d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad0dc:{NFSU2_TR(0x5ad0dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad0de:{NFSU2_TR(0x5ad0de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad0e1:{NFSU2_TR(0x5ad0e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad0e9;}}
}
B5ad0e3:L5ad0e3:{c.instructions+=2;NFSU2_TR(0x5ad0e3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad0e5:{NFSU2_TR(0x5ad0e5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad0e9:L5ad0e9:{c.instructions+=3;NFSU2_TR(0x5ad0e9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad0ec:{NFSU2_TR(0x5ad0ec);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad0f4:{NFSU2_TR(0x5ad0f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ad100;}}
}
B5ad0f6:L5ad0f6:{c.instructions+=3;NFSU2_TR(0x5ad0f6);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad0fa:{NFSU2_TR(0x5ad0fa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad0fe:{NFSU2_TR(0x5ad0fe);
{goto L5ad11d;}
}
B5ad100:L5ad100:{c.instructions+=1;NFSU2_TR(0x5ad100);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad10e;}}
}
B5ad102:L5ad102:{c.instructions+=3;NFSU2_TR(0x5ad102);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ad108:{NFSU2_TR(0x5ad108);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ad10c:{NFSU2_TR(0x5ad10c);
{goto L5ad11d;}
}
B5ad10e:L5ad10e:{c.instructions+=2;NFSU2_TR(0x5ad10e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad111:{NFSU2_TR(0x5ad111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad11d;}}
}
B5ad113:L5ad113:{c.instructions+=2;NFSU2_TR(0x5ad113);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad119:{NFSU2_TR(0x5ad119);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ad11d:L5ad11d:{c.instructions+=7;NFSU2_TR(0x5ad11d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad121:{NFSU2_TR(0x5ad121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad125:{NFSU2_TR(0x5ad125);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad127:{NFSU2_TR(0x5ad127);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad12b:{NFSU2_TR(0x5ad12b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad12d:{NFSU2_TR(0x5ad12d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad130:{NFSU2_TR(0x5ad130);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad138;}}
}
B5ad132:L5ad132:{c.instructions+=2;NFSU2_TR(0x5ad132);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad134:{NFSU2_TR(0x5ad134);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad138:L5ad138:{c.instructions+=8;NFSU2_TR(0x5ad138);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad139:{NFSU2_TR(0x5ad139);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ad13d:{NFSU2_TR(0x5ad13d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad13f:{NFSU2_TR(0x5ad13f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad143:{NFSU2_TR(0x5ad143);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ad147:{NFSU2_TR(0x5ad147);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad149:{NFSU2_TR(0x5ad149);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ad14c:{NFSU2_TR(0x5ad14c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ad154;}}
}
B5ad14e:L5ad14e:{c.instructions+=2;NFSU2_TR(0x5ad14e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad150:{NFSU2_TR(0x5ad150);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad154:L5ad154:{c.instructions+=13;NFSU2_TR(0x5ad154);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad155:{NFSU2_TR(0x5ad155);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad157:{NFSU2_TR(0x5ad157);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ad15a:{NFSU2_TR(0x5ad15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad160:{NFSU2_TR(0x5ad160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ad166:{NFSU2_TR(0x5ad166);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
}
B5ad16c:{NFSU2_TR(0x5ad16c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad16e:{NFSU2_TR(0x5ad16e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad16f:{NFSU2_TR(0x5ad16f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad170:{NFSU2_TR(0x5ad170);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad174:{NFSU2_TR(0x5ad174);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad176:{NFSU2_TR(0x5ad176);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad177:{NFSU2_TR(0x5ad177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad17cull));
TAIL_STATIC(0x5ac980u,5ac);
}
B5ad17c:L5ad17c:{c.instructions+=15;NFSU2_TR(0x5ad17c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad17f:{NFSU2_TR(0x5ad17f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ad181:{NFSU2_TR(0x5ad181);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5ad184:{NFSU2_TR(0x5ad184);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B5ad188:{NFSU2_TR(0x5ad188);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ad18e:{NFSU2_TR(0x5ad18e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ad190:{NFSU2_TR(0x5ad190);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad192:{NFSU2_TR(0x5ad192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad193:{NFSU2_TR(0x5ad193);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ad199:{NFSU2_TR(0x5ad199);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ad19b:{NFSU2_TR(0x5ad19b);
{u32 ea_=u32(u32(7978744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ad1a1:{NFSU2_TR(0x5ad1a1);
__asm__ volatile(".byte 0xd8,0xd2":::"memory");
}
B5ad1a3:{NFSU2_TR(0x5ad1a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad1a5:{NFSU2_TR(0x5ad1a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad1a8:{NFSU2_TR(0x5ad1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad1d7;}}
}
B5ad1aa:L5ad1aa:{c.instructions+=12;NFSU2_TR(0x5ad1aa);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ad1ac:{NFSU2_TR(0x5ad1ac);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5ad1ae:{NFSU2_TR(0x5ad1ae);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ad1b0:{NFSU2_TR(0x5ad1b0);
{u32 ea_=u32(u32(8004484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ad1b6:{NFSU2_TR(0x5ad1b6);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5ad1b8:{NFSU2_TR(0x5ad1b8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ad1ba:{NFSU2_TR(0x5ad1ba);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5ad1bc:{NFSU2_TR(0x5ad1bc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad1c2:{NFSU2_TR(0x5ad1c2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad1c4:{NFSU2_TR(0x5ad1c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad1c6:{NFSU2_TR(0x5ad1c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad1c9:{NFSU2_TR(0x5ad1c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad1d3;}}
}
B5ad1cb:L5ad1cb:{c.instructions+=2;NFSU2_TR(0x5ad1cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad1cd:{NFSU2_TR(0x5ad1cd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad1d3:L5ad1d3:{c.instructions+=2;NFSU2_TR(0x5ad1d3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad1d5:{NFSU2_TR(0x5ad1d5);
{goto L5ad1dd;}
}
B5ad1d7:L5ad1d7:{c.instructions+=3;NFSU2_TR(0x5ad1d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad1d9:{NFSU2_TR(0x5ad1d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad1db:{NFSU2_TR(0x5ad1db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad1dd:L5ad1dd:{c.instructions+=7;NFSU2_TR(0x5ad1dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad1e1:{NFSU2_TR(0x5ad1e1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad1e3:{NFSU2_TR(0x5ad1e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad1e9:{NFSU2_TR(0x5ad1e9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad1eb:{NFSU2_TR(0x5ad1eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad1ed:{NFSU2_TR(0x5ad1ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad1f0:{NFSU2_TR(0x5ad1f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad1fa;}}
}
B5ad1f2:L5ad1f2:{c.instructions+=2;NFSU2_TR(0x5ad1f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad1f4:{NFSU2_TR(0x5ad1f4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad1fa:L5ad1fa:{c.instructions+=7;NFSU2_TR(0x5ad1fa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad1fc:{NFSU2_TR(0x5ad1fc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad1fe:{NFSU2_TR(0x5ad1fe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad204:{NFSU2_TR(0x5ad204);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad206:{NFSU2_TR(0x5ad206);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad208:{NFSU2_TR(0x5ad208);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad20b:{NFSU2_TR(0x5ad20b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad21c;}}
}
B5ad20d:L5ad20d:{c.instructions+=5;NFSU2_TR(0x5ad20d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5ad213:{NFSU2_TR(0x5ad213);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad215:{NFSU2_TR(0x5ad215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ad216:{NFSU2_TR(0x5ad216);
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
B5ad219:{NFSU2_TR(0x5ad219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad21c:L5ad21c:{c.instructions+=4;NFSU2_TR(0x5ad21c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad21e:{NFSU2_TR(0x5ad21e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ad21f:{NFSU2_TR(0x5ad21f);
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
B5ad222:{NFSU2_TR(0x5ad222);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad230:L5ad230:{c.instructions+=3;NFSU2_TR(0x5ad230);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad231:{NFSU2_TR(0x5ad231);
__builtin_memmove((R+24),(R+4),4);
}
B5ad233:{NFSU2_TR(0x5ad233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad238ull));
TAIL_STATIC(0x5a0d10u,5a0);
}
B5ad238:L5ad238:{c.instructions+=2;NFSU2_TR(0x5ad238);
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
B5ad23d:{NFSU2_TR(0x5ad23d);
if(r1(R+518)){{goto L5ad24e;}}
}
B5ad23f:L5ad23f:{c.instructions+=4;NFSU2_TR(0x5ad23f);
__builtin_memmove((R+0),gp(0x86b2e0),4);
}
B5ad244:{NFSU2_TR(0x5ad244);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad245:{NFSU2_TR(0x5ad245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad246:{NFSU2_TR(0x5ad246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad24bull));
TAIL_STATIC(0x43f920u,43f);
}
B5ad24b:L5ad24b:{c.instructions+=1;NFSU2_TR(0x5ad24b);
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
B5ad24e:L5ad24e:{c.instructions+=3;NFSU2_TR(0x5ad24e);
__builtin_memmove((R+0),(R+24),4);
}
B5ad250:{NFSU2_TR(0x5ad250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad251:{NFSU2_TR(0x5ad251);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad260:L5ad260:{c.instructions+=3;NFSU2_TR(0x5ad260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad261:{NFSU2_TR(0x5ad261);
__builtin_memmove((R+24),(R+4),4);
}
B5ad263:{NFSU2_TR(0x5ad263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad268ull));
{goto L5ad290;}
}
B5ad268:L5ad268:{c.instructions+=2;NFSU2_TR(0x5ad268);
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
B5ad26d:{NFSU2_TR(0x5ad26d);
if(r1(R+518)){{goto L5ad27e;}}
}
B5ad26f:L5ad26f:{c.instructions+=4;NFSU2_TR(0x5ad26f);
__builtin_memmove((R+0),gp(0x86b2e8),4);
}
B5ad274:{NFSU2_TR(0x5ad274);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad275:{NFSU2_TR(0x5ad275);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad276:{NFSU2_TR(0x5ad276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad27bull));
TAIL_STATIC(0x43f920u,43f);
}
B5ad27b:L5ad27b:{c.instructions+=1;NFSU2_TR(0x5ad27b);
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
B5ad27e:L5ad27e:{c.instructions+=3;NFSU2_TR(0x5ad27e);
__builtin_memmove((R+0),(R+24),4);
}
B5ad280:{NFSU2_TR(0x5ad280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad281:{NFSU2_TR(0x5ad281);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad290:L5ad290:{c.instructions+=12;NFSU2_TR(0x5ad290);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad292:{NFSU2_TR(0x5ad292);
u8 U[4];
w4(U+0,u32(0x778e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad297:{NFSU2_TR(0x5ad297);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad29d:{NFSU2_TR(0x5ad29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad29e:{NFSU2_TR(0x5ad29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad2a5:{NFSU2_TR(0x5ad2a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad2a6:{NFSU2_TR(0x5ad2a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad2a7:{NFSU2_TR(0x5ad2a7);
__builtin_memmove((R+24),(R+4),4);
}
B5ad2a9:{NFSU2_TR(0x5ad2a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad2ad:{NFSU2_TR(0x5ad2ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad2b3:{NFSU2_TR(0x5ad2b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad2bb:{NFSU2_TR(0x5ad2bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad2c0ull));
TAIL_STATIC(0x5d3230u,5d3);
}
B5ad2c0:L5ad2c0:{c.instructions+=6;NFSU2_TR(0x5ad2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad2c4:{NFSU2_TR(0x5ad2c4);
u8 U[4];
w4(U+0,u32(0x7a1ef4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ad2ca:{NFSU2_TR(0x5ad2ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad2cb:{NFSU2_TR(0x5ad2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad2d2:{NFSU2_TR(0x5ad2d2);
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
B5ad2d5:{NFSU2_TR(0x5ad2d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad2e0:L5ad2e0:{c.instructions+=3;NFSU2_TR(0x5ad2e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad2e1:{NFSU2_TR(0x5ad2e1);
__builtin_memmove((R+24),(R+4),4);
}
B5ad2e3:{NFSU2_TR(0x5ad2e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad2e8ull));
TAIL_STATIC(0x5a0d10u,5a0);
}
B5ad2e8:L5ad2e8:{c.instructions+=2;NFSU2_TR(0x5ad2e8);
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
B5ad2ed:{NFSU2_TR(0x5ad2ed);
if(r1(R+518)){{goto L5ad2fe;}}
}
B5ad2ef:L5ad2ef:{c.instructions+=4;NFSU2_TR(0x5ad2ef);
__builtin_memmove((R+0),gp(0x86b2f8),4);
}
B5ad2f4:{NFSU2_TR(0x5ad2f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad2f5:{NFSU2_TR(0x5ad2f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad2f6:{NFSU2_TR(0x5ad2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad2fbull));
TAIL_STATIC(0x43f920u,43f);
}
B5ad2fb:L5ad2fb:{c.instructions+=1;NFSU2_TR(0x5ad2fb);
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
B5ad2fe:L5ad2fe:{c.instructions+=3;NFSU2_TR(0x5ad2fe);
__builtin_memmove((R+0),(R+24),4);
}
B5ad300:{NFSU2_TR(0x5ad300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad301:{NFSU2_TR(0x5ad301);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad310:L5ad310:{c.instructions+=21;NFSU2_TR(0x5ad310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad311:{NFSU2_TR(0x5ad311);
__builtin_memmove((R+20),(R+16),4);
}
B5ad313:{NFSU2_TR(0x5ad313);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5ad316:{NFSU2_TR(0x5ad316);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad318:{NFSU2_TR(0x5ad318);
u8 U[4];
w4(U+0,u32(0x778ca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad31d:{NFSU2_TR(0x5ad31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad323:{NFSU2_TR(0x5ad323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad324:{NFSU2_TR(0x5ad324);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad32b:{NFSU2_TR(0x5ad32b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5ad32e:{NFSU2_TR(0x5ad32e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad32f:{NFSU2_TR(0x5ad32f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad330:{NFSU2_TR(0x5ad330);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad331:{NFSU2_TR(0x5ad331);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5ad335:{NFSU2_TR(0x5ad335);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad339:{NFSU2_TR(0x5ad339);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad33d:{NFSU2_TR(0x5ad33d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad341:{NFSU2_TR(0x5ad341);
__builtin_memmove((R+0),gp(0x86b4c8),4);
}
B5ad346:{NFSU2_TR(0x5ad346);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ad348:{NFSU2_TR(0x5ad348);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad34a:{NFSU2_TR(0x5ad34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad34e:{NFSU2_TR(0x5ad34e);
if(r1(R+518)){{goto L5ad353;}}
}
B5ad350:L5ad350:{c.instructions+=1;NFSU2_TR(0x5ad350);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad353:L5ad353:{c.instructions+=2;NFSU2_TR(0x5ad353);
w4(R+4,u32(0x86b4c8ull));
}
B5ad358:{NFSU2_TR(0x5ad358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad35dull));
TAIL_STATIC(0x431780u,431);
}
B5ad35d:L5ad35d:{c.instructions+=2;NFSU2_TR(0x5ad35d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad35f:{NFSU2_TR(0x5ad35f);
if(r1(R+518)){{goto L5ad3f9;}}
}
B5ad365:L5ad365:{c.instructions+=4;NFSU2_TR(0x5ad365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ad368:{NFSU2_TR(0x5ad368);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad36a:{NFSU2_TR(0x5ad36a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad36d:{NFSU2_TR(0x5ad36d);
if(r1(R+518)){{goto L5ad374;}}
}
B5ad36f:L5ad36f:{c.instructions+=2;NFSU2_TR(0x5ad36f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ad372:{NFSU2_TR(0x5ad372);
{goto L5ad376;}
}
B5ad374:L5ad374:{c.instructions+=1;NFSU2_TR(0x5ad374);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ad376:L5ad376:{c.instructions+=3;NFSU2_TR(0x5ad376);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5ad379:{NFSU2_TR(0x5ad379);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ad37c:{NFSU2_TR(0x5ad37c);
if(r1(R+518)){{goto L5ad383;}}
}
B5ad37e:L5ad37e:{c.instructions+=2;NFSU2_TR(0x5ad37e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ad381:{NFSU2_TR(0x5ad381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad3a4;}}
}
B5ad383:L5ad383:{c.instructions+=11;NFSU2_TR(0x5ad383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad385:{NFSU2_TR(0x5ad385);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ad388:{NFSU2_TR(0x5ad388);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ad38a:{NFSU2_TR(0x5ad38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad38d:{NFSU2_TR(0x5ad38d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ad391:{NFSU2_TR(0x5ad391);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ad393:{NFSU2_TR(0x5ad393);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad397:{NFSU2_TR(0x5ad397);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad39a:{NFSU2_TR(0x5ad39a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ad39e:{NFSU2_TR(0x5ad39e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ad3a0:{NFSU2_TR(0x5ad3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ad3a4:L5ad3a4:{c.instructions+=3;NFSU2_TR(0x5ad3a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad3a6:{NFSU2_TR(0x5ad3a6);
__builtin_memmove((R+24),(R+12),4);
}
B5ad3a8:{NFSU2_TR(0x5ad3a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad365u);}goto L5ad365;}}
}
B5ad3aa:L5ad3aa:{c.instructions+=3;NFSU2_TR(0x5ad3aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad3ae:{NFSU2_TR(0x5ad3ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad3b0:{NFSU2_TR(0x5ad3b0);
if(r1(R+518)){{goto L5ad3f9;}}
}
B5ad3b2:L5ad3b2:{c.instructions+=8;NFSU2_TR(0x5ad3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad3b5:{NFSU2_TR(0x5ad3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad3b7:{NFSU2_TR(0x5ad3b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ad3b9:{NFSU2_TR(0x5ad3b9);
__builtin_memmove((R+8),(R+28),4);
}
B5ad3bb:{NFSU2_TR(0x5ad3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad3be:{NFSU2_TR(0x5ad3be);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad3c1:{NFSU2_TR(0x5ad3c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad3c3:{NFSU2_TR(0x5ad3c3);
if(r1(R+518)){{goto L5ad3ca;}}
}
B5ad3c5:L5ad3c5:{c.instructions+=2;NFSU2_TR(0x5ad3c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad3c8:{NFSU2_TR(0x5ad3c8);
{goto L5ad3cc;}
}
B5ad3ca:L5ad3ca:{c.instructions+=1;NFSU2_TR(0x5ad3ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ad3cc:L5ad3cc:{c.instructions+=7;NFSU2_TR(0x5ad3cc);
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
B5ad3ce:{NFSU2_TR(0x5ad3ce);
__builtin_memmove((R+8),gp(0x86b4c8),4);
}
B5ad3d4:{NFSU2_TR(0x5ad3d4);
__builtin_memmove(gp(0x86b4c8),(R+0),4);
}
B5ad3d9:{NFSU2_TR(0x5ad3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad3dc:{NFSU2_TR(0x5ad3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x86b4c8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad3e3:{NFSU2_TR(0x5ad3e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad3e5:{NFSU2_TR(0x5ad3e5);
if(r1(R+518)){{goto L5ad3ed;}}
}
B5ad3e7:L5ad3e7:{c.instructions+=3;NFSU2_TR(0x5ad3e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad3e9:{NFSU2_TR(0x5ad3e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad3eb:{NFSU2_TR(0x5ad3eb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad3edull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ad3ed:L5ad3ed:{c.instructions+=4;NFSU2_TR(0x5ad3ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ad3f1:{NFSU2_TR(0x5ad3f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad3f5:{NFSU2_TR(0x5ad3f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad3f7:{NFSU2_TR(0x5ad3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad3b2u);}goto L5ad3b2;}}
}
B5ad3f9:L5ad3f9:{c.instructions+=3;NFSU2_TR(0x5ad3f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad3fd:{NFSU2_TR(0x5ad3fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad405:{NFSU2_TR(0x5ad405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad40aull));
TAIL_STATIC(0x4358e0u,435);
}
B5ad40a:L5ad40a:{c.instructions+=8;NFSU2_TR(0x5ad40a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad40e:{NFSU2_TR(0x5ad40e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ad40f:{NFSU2_TR(0x5ad40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad410:{NFSU2_TR(0x5ad410);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad417:{NFSU2_TR(0x5ad417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ad418:{NFSU2_TR(0x5ad418);
__builtin_memmove((R+16),(R+20),4);
}
B5ad41a:{NFSU2_TR(0x5ad41a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ad41b:{NFSU2_TR(0x5ad41b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad420:L5ad420:{c.instructions+=15;NFSU2_TR(0x5ad420);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad421:{NFSU2_TR(0x5ad421);
__builtin_memmove((R+20),(R+16),4);
}
B5ad423:{NFSU2_TR(0x5ad423);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5ad426:{NFSU2_TR(0x5ad426);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad428:{NFSU2_TR(0x5ad428);
u8 U[4];
w4(U+0,u32(0x778ca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad42d:{NFSU2_TR(0x5ad42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad433:{NFSU2_TR(0x5ad433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad434:{NFSU2_TR(0x5ad434);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad43b:{NFSU2_TR(0x5ad43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5ad43e:{NFSU2_TR(0x5ad43e);
__builtin_memmove((R+0),gp(0x86b374),4);
}
B5ad443:{NFSU2_TR(0x5ad443);
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
B5ad445:{NFSU2_TR(0x5ad445);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad446:{NFSU2_TR(0x5ad446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad447:{NFSU2_TR(0x5ad447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad448:{NFSU2_TR(0x5ad448);
if(r1(R+518)){{goto L5ad804;}}
}
B5ad44e:L5ad44e:{c.instructions+=8;NFSU2_TR(0x5ad44e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad452:{NFSU2_TR(0x5ad452);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad456:{NFSU2_TR(0x5ad456);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad45a:{NFSU2_TR(0x5ad45a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad45e:{NFSU2_TR(0x5ad45e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ad461:{NFSU2_TR(0x5ad461);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad463:{NFSU2_TR(0x5ad463);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad46b:{NFSU2_TR(0x5ad46b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad661;}}
}
B5ad471:L5ad471:{c.instructions+=4;NFSU2_TR(0x5ad471);
__builtin_memmove((R+0),gp(0x7fc854),4);
}
B5ad476:{NFSU2_TR(0x5ad476);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad478:{NFSU2_TR(0x5ad478);
__builtin_memmove((R+28),gp(0x86b4c8),4);
}
B5ad47e:{NFSU2_TR(0x5ad47e);
if(r1(R+518)){{goto L5ad583;}}
}
B5ad484:L5ad484:{c.instructions+=2;NFSU2_TR(0x5ad484);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad486:{NFSU2_TR(0x5ad486);
if(r1(R+518)){{goto L5ad48d;}}
}
B5ad488:L5ad488:{c.instructions+=2;NFSU2_TR(0x5ad488);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B5ad48b:{NFSU2_TR(0x5ad48b);
{goto L5ad48f;}
}
B5ad48d:L5ad48d:{c.instructions+=1;NFSU2_TR(0x5ad48d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ad48f:L5ad48f:{c.instructions+=2;NFSU2_TR(0x5ad48f);
w4(R+4,u32(0x86b4c8ull));
}
B5ad494:{NFSU2_TR(0x5ad494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad499ull));
TAIL_STATIC(0x431780u,431);
}
B5ad499:L5ad499:{c.instructions+=3;NFSU2_TR(0x5ad499);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad49b:{NFSU2_TR(0x5ad49b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad49f:{NFSU2_TR(0x5ad49f);
if(r1(R+518)){{goto L5ad661;}}
}
B5ad4a5:L5ad4a5:{c.instructions+=4;NFSU2_TR(0x5ad4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad4a8:{NFSU2_TR(0x5ad4a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad4aa:{NFSU2_TR(0x5ad4aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad4ad:{NFSU2_TR(0x5ad4ad);
if(r1(R+518)){{goto L5ad4b8;}}
}
B5ad4af:L5ad4af:{c.instructions+=3;NFSU2_TR(0x5ad4af);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5ad4b2:{NFSU2_TR(0x5ad4b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad4b6:{NFSU2_TR(0x5ad4b6);
{goto L5ad4c0;}
}
B5ad4b8:L5ad4b8:{c.instructions+=1;NFSU2_TR(0x5ad4b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad4c0:L5ad4c0:{c.instructions+=2;NFSU2_TR(0x5ad4c0);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5ad4c4:{NFSU2_TR(0x5ad4c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad570;}}
}
B5ad4ca:L5ad4ca:{c.instructions+=3;NFSU2_TR(0x5ad4ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ad4cd:{NFSU2_TR(0x5ad4cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad4cf:{NFSU2_TR(0x5ad4cf);
if(r1(R+518)){{goto L5ad570;}}
}
B5ad4d5:L5ad4d5:{c.instructions+=4;NFSU2_TR(0x5ad4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad4db:{NFSU2_TR(0x5ad4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad4e1:{NFSU2_TR(0x5ad4e1);
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
B5ad4e3:{NFSU2_TR(0x5ad4e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad570;}}
}
B5ad4e9:L5ad4e9:{c.instructions+=3;NFSU2_TR(0x5ad4e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad4eb:{NFSU2_TR(0x5ad4eb);
__builtin_memmove((R+4),(R+28),4);
}
B5ad4ed:{NFSU2_TR(0x5ad4ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad4f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ad4f0:L5ad4f0:{c.instructions+=6;NFSU2_TR(0x5ad4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad4f3:{NFSU2_TR(0x5ad4f3);
__builtin_memmove((R+12),(R+0),4);
}
B5ad4f5:{NFSU2_TR(0x5ad4f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad4f7:{NFSU2_TR(0x5ad4f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad4f8:{NFSU2_TR(0x5ad4f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad4fc:{NFSU2_TR(0x5ad4fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad501ull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B5ad501:L5ad501:{c.instructions+=4;NFSU2_TR(0x5ad501);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad505:{NFSU2_TR(0x5ad505);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad508:{NFSU2_TR(0x5ad508);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad50a:{NFSU2_TR(0x5ad50a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad52b;}}
}
B5ad50c:L5ad50c:{c.instructions+=11;NFSU2_TR(0x5ad50c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad50e:{NFSU2_TR(0x5ad50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad511:{NFSU2_TR(0x5ad511);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ad513:{NFSU2_TR(0x5ad513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad516:{NFSU2_TR(0x5ad516);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad51a:{NFSU2_TR(0x5ad51a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad51c:{NFSU2_TR(0x5ad51c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad520:{NFSU2_TR(0x5ad520);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad524:{NFSU2_TR(0x5ad524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad527:{NFSU2_TR(0x5ad527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ad529:{NFSU2_TR(0x5ad529);
{goto L5ad570;}
}
B5ad52b:L5ad52b:{c.instructions+=6;NFSU2_TR(0x5ad52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad52e:{NFSU2_TR(0x5ad52e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad530:{NFSU2_TR(0x5ad530);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad532:{NFSU2_TR(0x5ad532);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad534:{NFSU2_TR(0x5ad534);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad535:{NFSU2_TR(0x5ad535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad53aull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5ad53a:L5ad53a:{c.instructions+=4;NFSU2_TR(0x5ad53a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad53e:{NFSU2_TR(0x5ad53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad540:{NFSU2_TR(0x5ad540);
__builtin_memmove((R+4),(R+28),4);
}
B5ad542:{NFSU2_TR(0x5ad542);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad545ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ad545:L5ad545:{c.instructions+=5;NFSU2_TR(0x5ad545);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ad548:{NFSU2_TR(0x5ad548);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ad54c:{NFSU2_TR(0x5ad54c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad54e:{NFSU2_TR(0x5ad54e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ad551:{NFSU2_TR(0x5ad551);
if(r1(R+514)){{goto L5ad570;}}
}
B5ad553:L5ad553:{c.instructions+=10;NFSU2_TR(0x5ad553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad555:{NFSU2_TR(0x5ad555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad558:{NFSU2_TR(0x5ad558);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ad55a:{NFSU2_TR(0x5ad55a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad55d:{NFSU2_TR(0x5ad55d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad561:{NFSU2_TR(0x5ad561);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad563:{NFSU2_TR(0x5ad563);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad567:{NFSU2_TR(0x5ad567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad56a:{NFSU2_TR(0x5ad56a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad56e:{NFSU2_TR(0x5ad56e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ad570:L5ad570:{c.instructions+=3;NFSU2_TR(0x5ad570);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ad574:{NFSU2_TR(0x5ad574);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ad578:{NFSU2_TR(0x5ad578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad4a5u);}goto L5ad4a5;}}
}
B5ad57e:L5ad57e:{c.instructions+=1;NFSU2_TR(0x5ad57e);
{goto L5ad661;}
}
B5ad583:L5ad583:{c.instructions+=2;NFSU2_TR(0x5ad583);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad585:{NFSU2_TR(0x5ad585);
if(r1(R+518)){{goto L5ad58c;}}
}
B5ad587:L5ad587:{c.instructions+=2;NFSU2_TR(0x5ad587);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B5ad58a:{NFSU2_TR(0x5ad58a);
{goto L5ad58e;}
}
B5ad58c:L5ad58c:{c.instructions+=1;NFSU2_TR(0x5ad58c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ad58e:L5ad58e:{c.instructions+=2;NFSU2_TR(0x5ad58e);
w4(R+4,u32(0x86b4c8ull));
}
B5ad593:{NFSU2_TR(0x5ad593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad598ull));
TAIL_STATIC(0x431780u,431);
}
B5ad598:L5ad598:{c.instructions+=3;NFSU2_TR(0x5ad598);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad59a:{NFSU2_TR(0x5ad59a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad59e:{NFSU2_TR(0x5ad59e);
if(r1(R+518)){{goto L5ad661;}}
}
B5ad5a4:L5ad5a4:{c.instructions+=4;NFSU2_TR(0x5ad5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad5a7:{NFSU2_TR(0x5ad5a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad5a9:{NFSU2_TR(0x5ad5a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad5ac:{NFSU2_TR(0x5ad5ac);
if(r1(R+518)){{goto L5ad5b3;}}
}
B5ad5ae:L5ad5ae:{c.instructions+=2;NFSU2_TR(0x5ad5ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ad5b1:{NFSU2_TR(0x5ad5b1);
{goto L5ad5b5;}
}
B5ad5b3:L5ad5b3:{c.instructions+=1;NFSU2_TR(0x5ad5b3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ad5b5:L5ad5b5:{c.instructions+=2;NFSU2_TR(0x5ad5b5);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5ad5b9:{NFSU2_TR(0x5ad5b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad655;}}
}
B5ad5bf:L5ad5bf:{c.instructions+=3;NFSU2_TR(0x5ad5bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad5c1:{NFSU2_TR(0x5ad5c1);
__builtin_memmove((R+4),(R+28),4);
}
B5ad5c3:{NFSU2_TR(0x5ad5c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad5c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ad5c6:L5ad5c6:{c.instructions+=19;NFSU2_TR(0x5ad5c6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad5c9:{NFSU2_TR(0x5ad5c9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad5cc:{NFSU2_TR(0x5ad5cc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad5ce:{NFSU2_TR(0x5ad5ce);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ad5d0:{NFSU2_TR(0x5ad5d0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ad5d2:{NFSU2_TR(0x5ad5d2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5ad5d4:{NFSU2_TR(0x5ad5d4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ad5d6:{NFSU2_TR(0x5ad5d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ad5d8:{NFSU2_TR(0x5ad5d8);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5ad5da:{NFSU2_TR(0x5ad5da);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5ad5dc:{NFSU2_TR(0x5ad5dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ad5de:{NFSU2_TR(0x5ad5de);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5ad5e0:{NFSU2_TR(0x5ad5e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad5e2:{NFSU2_TR(0x5ad5e2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad5e4:{NFSU2_TR(0x5ad5e4);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ad5e6:{NFSU2_TR(0x5ad5e6);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ad5ec:{NFSU2_TR(0x5ad5ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad5ee:{NFSU2_TR(0x5ad5ee);
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
B5ad5f1:{NFSU2_TR(0x5ad5f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad620;}}
}
B5ad5f3:L5ad5f3:{c.instructions+=4;NFSU2_TR(0x5ad5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad5f9:{NFSU2_TR(0x5ad5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad5ff:{NFSU2_TR(0x5ad5ff);
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
B5ad601:{NFSU2_TR(0x5ad601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad620;}}
}
B5ad603:L5ad603:{c.instructions+=10;NFSU2_TR(0x5ad603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad605:{NFSU2_TR(0x5ad605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad608:{NFSU2_TR(0x5ad608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ad60a:{NFSU2_TR(0x5ad60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad60d:{NFSU2_TR(0x5ad60d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad611:{NFSU2_TR(0x5ad611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad613:{NFSU2_TR(0x5ad613);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad617:{NFSU2_TR(0x5ad617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad61a:{NFSU2_TR(0x5ad61a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad61e:{NFSU2_TR(0x5ad61e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ad620:L5ad620:{c.instructions+=3;NFSU2_TR(0x5ad620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad622:{NFSU2_TR(0x5ad622);
__builtin_memmove((R+4),(R+28),4);
}
B5ad624:{NFSU2_TR(0x5ad624);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad627ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ad627:L5ad627:{c.instructions+=6;NFSU2_TR(0x5ad627);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad629:{NFSU2_TR(0x5ad629);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ad62b:{NFSU2_TR(0x5ad62b);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ad631:{NFSU2_TR(0x5ad631);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad633:{NFSU2_TR(0x5ad633);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad636:{NFSU2_TR(0x5ad636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad655;}}
}
B5ad638:L5ad638:{c.instructions+=10;NFSU2_TR(0x5ad638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad63a:{NFSU2_TR(0x5ad63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad63d:{NFSU2_TR(0x5ad63d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ad63f:{NFSU2_TR(0x5ad63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad642:{NFSU2_TR(0x5ad642);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad646:{NFSU2_TR(0x5ad646);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad648:{NFSU2_TR(0x5ad648);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad64c:{NFSU2_TR(0x5ad64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad64f:{NFSU2_TR(0x5ad64f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad653:{NFSU2_TR(0x5ad653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ad655:L5ad655:{c.instructions+=3;NFSU2_TR(0x5ad655);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ad659:{NFSU2_TR(0x5ad659);
__builtin_memmove((R+28),(R+12),4);
}
B5ad65b:{NFSU2_TR(0x5ad65b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad5a4u);}goto L5ad5a4;}}
}
B5ad661:L5ad661:{c.instructions+=3;NFSU2_TR(0x5ad661);
__builtin_memmove((R+4),gp(0x86b374),4);
}
B5ad667:{NFSU2_TR(0x5ad667);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad668:{NFSU2_TR(0x5ad668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad66dull));
TAIL_STATIC(0x43cd20u,43c);
}
B5ad66d:L5ad66d:{c.instructions+=4;NFSU2_TR(0x5ad66d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ad670:{NFSU2_TR(0x5ad670);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ad673:{NFSU2_TR(0x5ad673);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad67b:{NFSU2_TR(0x5ad67b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ad685;}}
}
B5ad67d:L5ad67d:{c.instructions+=1;NFSU2_TR(0x5ad67d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad685:L5ad685:{c.instructions+=2;NFSU2_TR(0x5ad685);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ad688:{NFSU2_TR(0x5ad688);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ad79f;}}
}
B5ad68e:L5ad68e:{c.instructions+=3;NFSU2_TR(0x5ad68e);
__builtin_memmove((R+28),gp(0x86b4c8),4);
}
B5ad694:{NFSU2_TR(0x5ad694);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad696:{NFSU2_TR(0x5ad696);
if(r1(R+518)){{goto L5ad69d;}}
}
B5ad698:L5ad698:{c.instructions+=2;NFSU2_TR(0x5ad698);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B5ad69b:{NFSU2_TR(0x5ad69b);
{goto L5ad69f;}
}
B5ad69d:L5ad69d:{c.instructions+=1;NFSU2_TR(0x5ad69d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ad69f:L5ad69f:{c.instructions+=2;NFSU2_TR(0x5ad69f);
w4(R+4,u32(0x86b4c8ull));
}
B5ad6a4:{NFSU2_TR(0x5ad6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad6a9ull));
TAIL_STATIC(0x431780u,431);
}
B5ad6a9:L5ad6a9:{c.instructions+=3;NFSU2_TR(0x5ad6a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad6ab:{NFSU2_TR(0x5ad6ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad6af:{NFSU2_TR(0x5ad6af);
if(r1(R+518)){{goto L5ad79f;}}
}
B5ad6b5:L5ad6b5:{c.instructions+=4;NFSU2_TR(0x5ad6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad6b8:{NFSU2_TR(0x5ad6b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad6ba:{NFSU2_TR(0x5ad6ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad6bd:{NFSU2_TR(0x5ad6bd);
if(r1(R+518)){{goto L5ad6c4;}}
}
B5ad6bf:L5ad6bf:{c.instructions+=2;NFSU2_TR(0x5ad6bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ad6c2:{NFSU2_TR(0x5ad6c2);
{goto L5ad6c6;}
}
B5ad6c4:L5ad6c4:{c.instructions+=1;NFSU2_TR(0x5ad6c4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ad6c6:L5ad6c6:{c.instructions+=2;NFSU2_TR(0x5ad6c6);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5ad6ca:{NFSU2_TR(0x5ad6ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad793;}}
}
B5ad6d0:L5ad6d0:{c.instructions+=3;NFSU2_TR(0x5ad6d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ad6d2:{NFSU2_TR(0x5ad6d2);
__builtin_memmove((R+4),(R+28),4);
}
B5ad6d4:{NFSU2_TR(0x5ad6d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad6d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ad6d7:L5ad6d7:{c.instructions+=3;NFSU2_TR(0x5ad6d7);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5ad6dd:{NFSU2_TR(0x5ad6dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad6de:{NFSU2_TR(0x5ad6de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad6e3ull));
TAIL_STATIC(0x5f1160u,5f1);
}
B5ad6e3:L5ad6e3:{c.instructions+=4;NFSU2_TR(0x5ad6e3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ad6e7:{NFSU2_TR(0x5ad6e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad6eb:{NFSU2_TR(0x5ad6eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad6ed:{NFSU2_TR(0x5ad6ed);
if(r1(R+518)){{goto L5ad6f7;}}
}
B5ad6ef:L5ad6ef:{c.instructions+=2;NFSU2_TR(0x5ad6ef);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad6f5:{NFSU2_TR(0x5ad6f5);
{goto L5ad6fd;}
}
B5ad6f7:L5ad6f7:{c.instructions+=1;NFSU2_TR(0x5ad6f7);
{u32 ea_=u32(u32(7885480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad6fd:L5ad6fd:{c.instructions+=3;NFSU2_TR(0x5ad6fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x506ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ad703:{NFSU2_TR(0x5ad703);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad705:{NFSU2_TR(0x5ad705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad791;}}
}
B5ad70b:L5ad70b:{c.instructions+=6;NFSU2_TR(0x5ad70b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad70f:{NFSU2_TR(0x5ad70f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ad711:{NFSU2_TR(0x5ad711);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad713:{NFSU2_TR(0x5ad713);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad715:{NFSU2_TR(0x5ad715);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad718:{NFSU2_TR(0x5ad718);
if(r1(R+518)){{goto L5ad762;}}
}
B5ad71a:L5ad71a:{c.instructions+=3;NFSU2_TR(0x5ad71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad720:{NFSU2_TR(0x5ad720);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad722:{NFSU2_TR(0x5ad722);
if(r1(R+518)){{goto L5ad793;}}
}
B5ad724:L5ad724:{c.instructions+=2;NFSU2_TR(0x5ad724);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad729:{NFSU2_TR(0x5ad729);
if(r1(R+518)){{goto L5ad793;}}
}
B5ad72b:L5ad72b:{c.instructions+=9;NFSU2_TR(0x5ad72b);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5ad730:{NFSU2_TR(0x5ad730);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5ad736:{NFSU2_TR(0x5ad736);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad73a:{NFSU2_TR(0x5ad73a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ad73e:{NFSU2_TR(0x5ad73e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ad744:{NFSU2_TR(0x5ad744);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ad74a:{NFSU2_TR(0x5ad74a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad74c:{NFSU2_TR(0x5ad74c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad74f:{NFSU2_TR(0x5ad74f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad793;}}
}
B5ad751:L5ad751:{c.instructions+=5;NFSU2_TR(0x5ad751);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ad755:{NFSU2_TR(0x5ad755);
{u32 ea_=u32(u32(7909248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ad75b:{NFSU2_TR(0x5ad75b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ad75d:{NFSU2_TR(0x5ad75d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ad760:{NFSU2_TR(0x5ad760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad793;}}
}
B5ad762:L5ad762:{c.instructions+=4;NFSU2_TR(0x5ad762);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ad768:{NFSU2_TR(0x5ad768);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad76e:{NFSU2_TR(0x5ad76e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad770:{NFSU2_TR(0x5ad770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ad793;}}
}
B5ad772:L5ad772:{c.instructions+=11;NFSU2_TR(0x5ad772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad774:{NFSU2_TR(0x5ad774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad777:{NFSU2_TR(0x5ad777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ad779:{NFSU2_TR(0x5ad779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad77c:{NFSU2_TR(0x5ad77c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad780:{NFSU2_TR(0x5ad780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad782:{NFSU2_TR(0x5ad782);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad786:{NFSU2_TR(0x5ad786);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad78a:{NFSU2_TR(0x5ad78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad78d:{NFSU2_TR(0x5ad78d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ad78f:{NFSU2_TR(0x5ad78f);
{goto L5ad793;}
}
B5ad791:L5ad791:{c.instructions+=1;NFSU2_TR(0x5ad791);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ad793:L5ad793:{c.instructions+=3;NFSU2_TR(0x5ad793);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ad797:{NFSU2_TR(0x5ad797);
__builtin_memmove((R+28),(R+12),4);
}
B5ad799:{NFSU2_TR(0x5ad799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad6b5u);}goto L5ad6b5;}}
}
B5ad79f:L5ad79f:{c.instructions+=4;NFSU2_TR(0x5ad79f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad7a3:{NFSU2_TR(0x5ad7a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ad7a7:{NFSU2_TR(0x5ad7a7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad7a9:{NFSU2_TR(0x5ad7a9);
if(r1(R+518)){{goto L5ad7f3;}}
}
B5ad7ab:L5ad7ab:{c.instructions+=1;NFSU2_TR(0x5ad7ab);
w4(R+24,u32(0x86b4c8ull));
}
B5ad7b0:L5ad7b0:{c.instructions+=8;NFSU2_TR(0x5ad7b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ad7b2:{NFSU2_TR(0x5ad7b2);
__builtin_memmove((R+8),(R+0),4);
}
B5ad7b4:{NFSU2_TR(0x5ad7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad7b7:{NFSU2_TR(0x5ad7b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad7b9:{NFSU2_TR(0x5ad7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad7bc:{NFSU2_TR(0x5ad7bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad7bf:{NFSU2_TR(0x5ad7bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad7c1:{NFSU2_TR(0x5ad7c1);
if(r1(R+518)){{goto L5ad7c8;}}
}
B5ad7c3:L5ad7c3:{c.instructions+=2;NFSU2_TR(0x5ad7c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad7c6:{NFSU2_TR(0x5ad7c6);
{goto L5ad7ca;}
}
B5ad7c8:L5ad7c8:{c.instructions+=1;NFSU2_TR(0x5ad7c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ad7ca:L5ad7ca:{c.instructions+=7;NFSU2_TR(0x5ad7ca);
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
B5ad7cc:{NFSU2_TR(0x5ad7cc);
__builtin_memmove((R+8),gp(0x86b4c8),4);
}
B5ad7d2:{NFSU2_TR(0x5ad7d2);
__builtin_memmove(gp(0x86b4c8),(R+0),4);
}
B5ad7d7:{NFSU2_TR(0x5ad7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad7da:{NFSU2_TR(0x5ad7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad7dd:{NFSU2_TR(0x5ad7dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ad7df:{NFSU2_TR(0x5ad7df);
if(r1(R+518)){{goto L5ad7e7;}}
}
B5ad7e1:L5ad7e1:{c.instructions+=3;NFSU2_TR(0x5ad7e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad7e3:{NFSU2_TR(0x5ad7e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad7e5:{NFSU2_TR(0x5ad7e5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad7e7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ad7e7:L5ad7e7:{c.instructions+=4;NFSU2_TR(0x5ad7e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad7eb:{NFSU2_TR(0x5ad7eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad7ef:{NFSU2_TR(0x5ad7ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad7f1:{NFSU2_TR(0x5ad7f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad7b0u);}goto L5ad7b0;}}
}
B5ad7f3:L5ad7f3:{c.instructions+=3;NFSU2_TR(0x5ad7f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad7f7:{NFSU2_TR(0x5ad7f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad7ff:{NFSU2_TR(0x5ad7ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad804ull));
TAIL_STATIC(0x4358e0u,435);
}
B5ad804:L5ad804:{c.instructions+=8;NFSU2_TR(0x5ad804);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad808:{NFSU2_TR(0x5ad808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ad809:{NFSU2_TR(0x5ad809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad80a:{NFSU2_TR(0x5ad80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad811:{NFSU2_TR(0x5ad811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ad812:{NFSU2_TR(0x5ad812);
__builtin_memmove((R+16),(R+20),4);
}
B5ad814:{NFSU2_TR(0x5ad814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ad815:{NFSU2_TR(0x5ad815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad820:L5ad820:{c.instructions+=6;NFSU2_TR(0x5ad820);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad821:{NFSU2_TR(0x5ad821);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad822:{NFSU2_TR(0x5ad822);
__builtin_memmove((R+24),gp(0x86b4c0),4);
}
B5ad828:{NFSU2_TR(0x5ad828);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad829:{NFSU2_TR(0x5ad829);
w4(R+4,u32(0x86b4c0ull));
}
B5ad82e:{NFSU2_TR(0x5ad82e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad833ull));
TAIL_STATIC(0x502fd0u,502);
}
B5ad833:L5ad833:{c.instructions+=3;NFSU2_TR(0x5ad833);
__builtin_memmove((R+12),(R+0),4);
}
B5ad835:{NFSU2_TR(0x5ad835);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad837:{NFSU2_TR(0x5ad837);
if(r1(R+518)){{goto L5ad86f;}}
}
B5ad839:L5ad839:{c.instructions+=2;NFSU2_TR(0x5ad839);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad83a:{NFSU2_TR(0x5ad83a);
__builtin_memmove((R+12),(R+12),4);
}
B5ad840:L5ad840:{c.instructions+=3;NFSU2_TR(0x5ad840);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ad842:{NFSU2_TR(0x5ad842);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+20)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+20))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5ad846:{NFSU2_TR(0x5ad846);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ad868;}}
}
B5ad848:L5ad848:{c.instructions+=2;NFSU2_TR(0x5ad848);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ad84b:{NFSU2_TR(0x5ad84b);
{goto L5ad850;}
}
B5ad850:L5ad850:{c.instructions+=3;NFSU2_TR(0x5ad850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ad852:{NFSU2_TR(0x5ad852);
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
B5ad854:{NFSU2_TR(0x5ad854);
if(r1(R+518)){{goto L5ad85c;}}
}
B5ad856:L5ad856:{c.instructions+=3;NFSU2_TR(0x5ad856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ad858:{NFSU2_TR(0x5ad858);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad85a:{NFSU2_TR(0x5ad85a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad85cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ad85c:L5ad85c:{c.instructions+=5;NFSU2_TR(0x5ad85c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5ad860:{NFSU2_TR(0x5ad860);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ad861:{NFSU2_TR(0x5ad861);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B5ad864:{NFSU2_TR(0x5ad864);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ad866:{NFSU2_TR(0x5ad866);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad850u);}goto L5ad850;}}
}
B5ad868:L5ad868:{c.instructions+=3;NFSU2_TR(0x5ad868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ad86a:{NFSU2_TR(0x5ad86a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad86c:{NFSU2_TR(0x5ad86c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad840u);}goto L5ad840;}}
}
B5ad86e:L5ad86e:{c.instructions+=1;NFSU2_TR(0x5ad86e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ad86f:L5ad86f:{c.instructions+=2;NFSU2_TR(0x5ad86f);
s1(0x86b380,u8(0x0ull));
}
B5ad876:{NFSU2_TR(0x5ad876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad87bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad310u);}goto L5ad310;}
}
B5ad87b:L5ad87b:{c.instructions+=4;NFSU2_TR(0x5ad87b);
__builtin_memmove((R+0),gp(0x86b370),4);
}
B5ad880:{NFSU2_TR(0x5ad880);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ad882:{NFSU2_TR(0x5ad882);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad884:{NFSU2_TR(0x5ad884);
if(r1(R+518)){{goto L5ad895;}}
}
B5ad886:L5ad886:{c.instructions+=2;NFSU2_TR(0x5ad886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad887:{NFSU2_TR(0x5ad887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad88cull));
TAIL_STATIC(0x440e40u,440);
}
B5ad88c:L5ad88c:{c.instructions+=2;NFSU2_TR(0x5ad88c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ad88f:{NFSU2_TR(0x5ad88f);
__builtin_memmove(gp(0x86b370),(R+24),4);
}
B5ad895:L5ad895:{c.instructions+=3;NFSU2_TR(0x5ad895);
__builtin_memmove((R+0),gp(0x86b374),4);
}
B5ad89a:{NFSU2_TR(0x5ad89a);
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
B5ad89c:{NFSU2_TR(0x5ad89c);
if(r1(R+518)){{goto L5ad8ad;}}
}
B5ad89e:L5ad89e:{c.instructions+=2;NFSU2_TR(0x5ad89e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad89f:{NFSU2_TR(0x5ad89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad8a4ull));
TAIL_STATIC(0x440e40u,440);
}
B5ad8a4:L5ad8a4:{c.instructions+=2;NFSU2_TR(0x5ad8a4);
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
B5ad8a7:{NFSU2_TR(0x5ad8a7);
__builtin_memmove(gp(0x86b374),(R+24),4);
}
B5ad8ad:L5ad8ad:{c.instructions+=3;NFSU2_TR(0x5ad8ad);
__builtin_memmove((R+24),gp(0x86b5a8),4);
}
B5ad8b3:{NFSU2_TR(0x5ad8b3);
w4(R+4,u32(0x86b5a8ull));
}
B5ad8b8:{NFSU2_TR(0x5ad8b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad8bdull));
TAIL_STATIC(0x502fd0u,502);
}
B5ad8bd:L5ad8bd:{c.instructions+=3;NFSU2_TR(0x5ad8bd);
__builtin_memmove((R+28),(R+0),4);
}
B5ad8bf:{NFSU2_TR(0x5ad8bf);
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
B5ad8c1:{NFSU2_TR(0x5ad8c1);
if(r1(R+518)){{goto L5ad8e4;}}
}
B5ad8c3:L5ad8c3:{c.instructions+=3;NFSU2_TR(0x5ad8c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ad8c9:{NFSU2_TR(0x5ad8c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad8ca:{NFSU2_TR(0x5ad8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad8cfull));
TAIL_STATIC(0x494610u,494);
}
B5ad8cf:L5ad8cf:{c.instructions+=3;NFSU2_TR(0x5ad8cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad8d5:{NFSU2_TR(0x5ad8d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad8d6:{NFSU2_TR(0x5ad8d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad8dbull));
TAIL_STATIC(0x494610u,494);
}
B5ad8db:L5ad8db:{c.instructions+=4;NFSU2_TR(0x5ad8db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ad8dd:{NFSU2_TR(0x5ad8dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ad8e0:{NFSU2_TR(0x5ad8e0);
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
B5ad8e2:{NFSU2_TR(0x5ad8e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad8c3u);}goto L5ad8c3;}}
}
B5ad8e4:L5ad8e4:{c.instructions+=4;NFSU2_TR(0x5ad8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ad8e5:{NFSU2_TR(0x5ad8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ad8e6:{NFSU2_TR(0x5ad8e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ad8e7:{NFSU2_TR(0x5ad8e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ad8f0:L5ad8f0:{c.instructions+=20;NFSU2_TR(0x5ad8f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad8f1:{NFSU2_TR(0x5ad8f1);
__builtin_memmove((R+20),(R+16),4);
}
B5ad8f3:{NFSU2_TR(0x5ad8f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ad8f6:{NFSU2_TR(0x5ad8f6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad8f8:{NFSU2_TR(0x5ad8f8);
u8 U[4];
w4(U+0,u32(0x778ccbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad8fd:{NFSU2_TR(0x5ad8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad903:{NFSU2_TR(0x5ad903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad904:{NFSU2_TR(0x5ad904);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad90b:{NFSU2_TR(0x5ad90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B5ad90e:{NFSU2_TR(0x5ad90e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad90f:{NFSU2_TR(0x5ad90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ad912:{NFSU2_TR(0x5ad912);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad913:{NFSU2_TR(0x5ad913);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad914:{NFSU2_TR(0x5ad914);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5ad917:{NFSU2_TR(0x5ad917);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad919:{NFSU2_TR(0x5ad919);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B5ad91b:{NFSU2_TR(0x5ad91b);
__builtin_memmove((R+24),(R+4),4);
}
B5ad91d:{NFSU2_TR(0x5ad91d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad91e:{NFSU2_TR(0x5ad91e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad922:{NFSU2_TR(0x5ad922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad927ull));
TAIL_STATIC(0x5a04f0u,5a0);
}
B5ad927:L5ad927:{c.instructions+=7;NFSU2_TR(0x5ad927);
u8 U[4];
w4(U+0,u32(0x7a2208ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ad92d:{NFSU2_TR(0x5ad92d);
__builtin_memmove((R+0),gp(0x86b254),4);
}
B5ad932:{NFSU2_TR(0x5ad932);
__builtin_memmove((R+4),gp(0x86b27c),4);
}
B5ad938:{NFSU2_TR(0x5ad938);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ad939:{NFSU2_TR(0x5ad939);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad93b:{NFSU2_TR(0x5ad93b);
__builtin_memmove(gp(0x86b254),(R+0),4);
}
B5ad940:{NFSU2_TR(0x5ad940);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ad947;}}
}
B5ad942:L5ad942:{c.instructions+=1;NFSU2_TR(0x5ad942);
__builtin_memmove(gp(0x86b27c),(R+0),4);
}
B5ad947:L5ad947:{c.instructions+=9;NFSU2_TR(0x5ad947);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ad94b:{NFSU2_TR(0x5ad94b);
u8 U[4];
w4(U+0,u32(0x7a23a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ad951:{NFSU2_TR(0x5ad951);
__builtin_memmove((R+0),gp(0x86b268),4);
}
B5ad956:{NFSU2_TR(0x5ad956);
__builtin_memmove((R+4),gp(0x86b290),4);
}
B5ad95c:{NFSU2_TR(0x5ad95c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ad95d:{NFSU2_TR(0x5ad95d);
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
B5ad95f:{NFSU2_TR(0x5ad95f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ad96a:{NFSU2_TR(0x5ad96a);
__builtin_memmove(gp(0x86b268),(R+0),4);
}
B5ad96f:{NFSU2_TR(0x5ad96f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ad976;}}
}
B5ad971:L5ad971:{c.instructions+=1;NFSU2_TR(0x5ad971);
__builtin_memmove(gp(0x86b290),(R+0),4);
}
B5ad976:L5ad976:{c.instructions+=5;NFSU2_TR(0x5ad976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ad979:{NFSU2_TR(0x5ad979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad97c:{NFSU2_TR(0x5ad97c);
__builtin_memmove((R+28),gp(0x86b5a8),4);
}
B5ad982:{NFSU2_TR(0x5ad982);
w4(R+4,u32(0x86b5a8ull));
}
B5ad987:{NFSU2_TR(0x5ad987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad98cull));
TAIL_STATIC(0x502fd0u,502);
}
B5ad98c:L5ad98c:{c.instructions+=2;NFSU2_TR(0x5ad98c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad98e:{NFSU2_TR(0x5ad98e);
if(r1(R+518)){{goto L5ad9a0;}}
}
B5ad990:L5ad990:{c.instructions+=1;NFSU2_TR(0x5ad990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ad992:L5ad992:{c.instructions+=2;NFSU2_TR(0x5ad992);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ad998:{NFSU2_TR(0x5ad998);
if(r1(R+518)){{goto L5ad9a2;}}
}
B5ad99a:L5ad99a:{c.instructions+=3;NFSU2_TR(0x5ad99a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ad99c:{NFSU2_TR(0x5ad99c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ad99e:{NFSU2_TR(0x5ad99e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad992u);}goto L5ad992;}}
}
B5ad9a0:L5ad9a0:{c.instructions+=1;NFSU2_TR(0x5ad9a0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ad9a2:L5ad9a2:{c.instructions+=6;NFSU2_TR(0x5ad9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad9a5:{NFSU2_TR(0x5ad9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ad9a8:{NFSU2_TR(0x5ad9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ad9ab:{NFSU2_TR(0x5ad9ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5ad9af:{NFSU2_TR(0x5ad9af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9b0:{NFSU2_TR(0x5ad9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad9b5ull));
TAIL_STATIC(0x5d6430u,5d6);
}
B5ad9b5:L5ad9b5:{c.instructions+=3;NFSU2_TR(0x5ad9b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ad9b8:{NFSU2_TR(0x5ad9b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ad9ba:{NFSU2_TR(0x5ad9ba);
if(r1(R+518)){{goto L5ad9c7;}}
}
B5ad9bc:L5ad9bc:{c.instructions+=3;NFSU2_TR(0x5ad9bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xefull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5ad9c0:{NFSU2_TR(0x5ad9c0);
__builtin_memmove((R+4),(R+0),4);
}
B5ad9c2:{NFSU2_TR(0x5ad9c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad9c7ull));
TAIL_STATIC(0x5db0e0u,5db);
}
B5ad9c7:L5ad9c7:{c.instructions+=7;NFSU2_TR(0x5ad9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad9ca:{NFSU2_TR(0x5ad9ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5ad9cd:{NFSU2_TR(0x5ad9cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9ce:{NFSU2_TR(0x5ad9ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad9d2:{NFSU2_TR(0x5ad9d2);
u8 U[4];
w4(U+0,u32(0x7a2388ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9d7:{NFSU2_TR(0x5ad9d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9d8:{NFSU2_TR(0x5ad9d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad9ddull));
TAIL_STATIC(0x4400d0u,440);
}
B5ad9dd:L5ad9dd:{c.instructions+=6;NFSU2_TR(0x5ad9dd);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9df:{NFSU2_TR(0x5ad9df);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ad9e3:{NFSU2_TR(0x5ad9e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9e4:{NFSU2_TR(0x5ad9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ad9e7:{NFSU2_TR(0x5ad9e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9e8:{NFSU2_TR(0x5ad9e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ad9edull));
TAIL_STATIC(0x43dc00u,43d);
}
B5ad9ed:L5ad9ed:{c.instructions+=12;NFSU2_TR(0x5ad9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ad9f0:{NFSU2_TR(0x5ad9f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ad9f3:{NFSU2_TR(0x5ad9f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5ad9f6:{NFSU2_TR(0x5ad9f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9f7:{NFSU2_TR(0x5ad9f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5ad9fa:{NFSU2_TR(0x5ad9fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ad9fb:{NFSU2_TR(0x5ad9fb);
__builtin_memmove((R+4),(R+24),4);
}
B5ad9fd:{NFSU2_TR(0x5ad9fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x57ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ada01:{NFSU2_TR(0x5ada01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ada08:{NFSU2_TR(0x5ada08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ada0c:{NFSU2_TR(0x5ada0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ada10:{NFSU2_TR(0x5ada10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ada15ull));
TAIL_STATIC(0x5a0680u,5a0);
}
B5ada15:L5ada15:{c.instructions+=24;NFSU2_TR(0x5ada15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ada18:{NFSU2_TR(0x5ada18);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ada1b:{NFSU2_TR(0x5ada1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ada1f:{NFSU2_TR(0x5ada1f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ada22:{NFSU2_TR(0x5ada22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ada23:{NFSU2_TR(0x5ada23);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ada26:{NFSU2_TR(0x5ada26);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ada29:{NFSU2_TR(0x5ada29);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ada2c:{NFSU2_TR(0x5ada2c);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ada2f:{NFSU2_TR(0x5ada2f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ada31:{NFSU2_TR(0x5ada31);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ada33:{NFSU2_TR(0x5ada33);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5ada35:{NFSU2_TR(0x5ada35);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ada37:{NFSU2_TR(0x5ada37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ada39:{NFSU2_TR(0x5ada39);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5ada3b:{NFSU2_TR(0x5ada3b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5ada3d:{NFSU2_TR(0x5ada3d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ada3f:{NFSU2_TR(0x5ada3f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ada41:{NFSU2_TR(0x5ada41);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5ada43:{NFSU2_TR(0x5ada43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ada45:{NFSU2_TR(0x5ada45);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ada47:{NFSU2_TR(0x5ada47);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ada4d:{NFSU2_TR(0x5ada4d);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ada50:{NFSU2_TR(0x5ada50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ada55ull));
TAIL_STATIC(0x43c780u,43c);
}
B5ada55:L5ada55:{c.instructions+=10;NFSU2_TR(0x5ada55);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ada5c:{NFSU2_TR(0x5ada5c);
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
B5ada5f:{NFSU2_TR(0x5ada5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ada60:{NFSU2_TR(0x5ada60);
__builtin_memmove((R+0),(R+24),4);
}
B5ada62:{NFSU2_TR(0x5ada62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ada63:{NFSU2_TR(0x5ada63);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ada6a:{NFSU2_TR(0x5ada6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ada6b:{NFSU2_TR(0x5ada6b);
__builtin_memmove((R+16),(R+20),4);
}
B5ada6d:{NFSU2_TR(0x5ada6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ada6e:{NFSU2_TR(0x5ada6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ada80:L5ada80:{c.instructions+=3;NFSU2_TR(0x5ada80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ada83:{NFSU2_TR(0x5ada83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ada89:{NFSU2_TR(0x5ada89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ada90:L5ada90:{c.instructions+=15;NFSU2_TR(0x5ada90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ada92:{NFSU2_TR(0x5ada92);
u8 U[4];
w4(U+0,u32(0x778ce8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ada97:{NFSU2_TR(0x5ada97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ada9d:{NFSU2_TR(0x5ada9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ada9e:{NFSU2_TR(0x5ada9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adaa5:{NFSU2_TR(0x5adaa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adaa6:{NFSU2_TR(0x5adaa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adaa7:{NFSU2_TR(0x5adaa7);
__builtin_memmove((R+24),(R+4),4);
}
B5adaa9:{NFSU2_TR(0x5adaa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adaad:{NFSU2_TR(0x5adaad);
u8 U[4];
w4(U+0,u32(0x7a23a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5adab3:{NFSU2_TR(0x5adab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adab6:{NFSU2_TR(0x5adab6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5adaba:{NFSU2_TR(0x5adaba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adabb:{NFSU2_TR(0x5adabb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adac3:{NFSU2_TR(0x5adac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adac8ull));
TAIL_STATIC(0x5d6430u,5d6);
}
B5adac8:L5adac8:{c.instructions+=3;NFSU2_TR(0x5adac8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5adacb:{NFSU2_TR(0x5adacb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5adacd:{NFSU2_TR(0x5adacd);
if(r1(R+518)){{goto L5adada;}}
}
B5adacf:L5adacf:{c.instructions+=3;NFSU2_TR(0x5adacf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5adad3:{NFSU2_TR(0x5adad3);
__builtin_memmove((R+4),(R+0),4);
}
B5adad5:{NFSU2_TR(0x5adad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adadaull));
TAIL_STATIC(0x5db0e0u,5db);
}
B5adada:L5adada:{c.instructions+=10;NFSU2_TR(0x5adada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5adadd:{NFSU2_TR(0x5adadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adae4:{NFSU2_TR(0x5adae4);
s4(0x86b268,u32(u32(m4(0x86b268))-u32(u32(0x1ull))));
}
B5adaea:{NFSU2_TR(0x5adaea);
u8 U[4];
w4(U+0,u32(0x7a2208ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5adaf0:{NFSU2_TR(0x5adaf0);
__builtin_memmove((R+0),gp(0x86b254),4);
}
B5adaf5:{NFSU2_TR(0x5adaf5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5adaf6:{NFSU2_TR(0x5adaf6);
__builtin_memmove((R+4),(R+24),4);
}
B5adaf8:{NFSU2_TR(0x5adaf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adb00:{NFSU2_TR(0x5adb00);
__builtin_memmove(gp(0x86b254),(R+0),4);
}
B5adb05:{NFSU2_TR(0x5adb05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adb0aull));
TAIL_STATIC(0x5a9c00u,5a9);
}
B5adb0a:L5adb0a:{c.instructions+=5;NFSU2_TR(0x5adb0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5adb0e:{NFSU2_TR(0x5adb0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5adb0f:{NFSU2_TR(0x5adb0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adb16:{NFSU2_TR(0x5adb16);
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
B5adb19:{NFSU2_TR(0x5adb19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5adb20:L5adb20:{c.instructions+=19;NFSU2_TR(0x5adb20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adb21:{NFSU2_TR(0x5adb21);
__builtin_memmove((R+20),(R+16),4);
}
B5adb23:{NFSU2_TR(0x5adb23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5adb26:{NFSU2_TR(0x5adb26);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xd4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xd4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5adb2c:{NFSU2_TR(0x5adb2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adb2d:{NFSU2_TR(0x5adb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5adb30:{NFSU2_TR(0x5adb30);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adb33:{NFSU2_TR(0x5adb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adb36:{NFSU2_TR(0x5adb36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adb37:{NFSU2_TR(0x5adb37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adb38:{NFSU2_TR(0x5adb38);
__builtin_memmove((R+24),(R+4),4);
}
B5adb3a:{NFSU2_TR(0x5adb3a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adb3e:{NFSU2_TR(0x5adb3e);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adb41:{NFSU2_TR(0x5adb41);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5adb45:{NFSU2_TR(0x5adb45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adb46:{NFSU2_TR(0x5adb46);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adb4a:{NFSU2_TR(0x5adb4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adb4b:{NFSU2_TR(0x5adb4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adb4f:{NFSU2_TR(0x5adb4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adb54ull));
TAIL_STATIC(0x4012b0u,401);
}
B5adb54:L5adb54:{c.instructions+=12;NFSU2_TR(0x5adb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adb57:{NFSU2_TR(0x5adb57);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5adb59:{NFSU2_TR(0x5adb59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5adb5c:{NFSU2_TR(0x5adb5c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5adb5e:{NFSU2_TR(0x5adb5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adb69:{NFSU2_TR(0x5adb69);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adb74:{NFSU2_TR(0x5adb74);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adb7f:{NFSU2_TR(0x5adb7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adb8a:{NFSU2_TR(0x5adb8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adb92:{NFSU2_TR(0x5adb92);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adb9a:{NFSU2_TR(0x5adb9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adba2:{NFSU2_TR(0x5adba2);
if(r1(R+518)){{goto L5adbb8;}}
}
B5adba4:L5adba4:{c.instructions+=6;NFSU2_TR(0x5adba4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adba7:{NFSU2_TR(0x5adba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5adba9:{NFSU2_TR(0x5adba9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adbad:{NFSU2_TR(0x5adbad);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adbb0:{NFSU2_TR(0x5adbb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adbb4:{NFSU2_TR(0x5adbb4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adbb8:L5adbb8:{c.instructions+=6;NFSU2_TR(0x5adbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adbbb:{NFSU2_TR(0x5adbbb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5adbbd:{NFSU2_TR(0x5adbbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adbc5:{NFSU2_TR(0x5adbc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adbcd:{NFSU2_TR(0x5adbcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adbd5:{NFSU2_TR(0x5adbd5);
if(r1(R+518)){{goto L5adbeb;}}
}
B5adbd7:L5adbd7:{c.instructions+=6;NFSU2_TR(0x5adbd7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adbda:{NFSU2_TR(0x5adbda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5adbdc:{NFSU2_TR(0x5adbdc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adbe0:{NFSU2_TR(0x5adbe0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adbe3:{NFSU2_TR(0x5adbe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adbe7:{NFSU2_TR(0x5adbe7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adbeb:L5adbeb:{c.instructions+=8;NFSU2_TR(0x5adbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5adbee:{NFSU2_TR(0x5adbee);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f0ull))));
}
B5adbf4:{NFSU2_TR(0x5adbf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adbf5:{NFSU2_TR(0x5adbf5);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5adbf9:{NFSU2_TR(0x5adbf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adbfa:{NFSU2_TR(0x5adbfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5adbfe:{NFSU2_TR(0x5adbfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adbff:{NFSU2_TR(0x5adbff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adc04ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5adc04:L5adc04:{c.instructions+=24;NFSU2_TR(0x5adc04);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adc08:{NFSU2_TR(0x5adc08);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5adc0c:{NFSU2_TR(0x5adc0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5adc0f:{NFSU2_TR(0x5adc0f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adc13:{NFSU2_TR(0x5adc13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc14:{NFSU2_TR(0x5adc14);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5adc18:{NFSU2_TR(0x5adc18);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5adc1c:{NFSU2_TR(0x5adc1c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adc20:{NFSU2_TR(0x5adc20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc21:{NFSU2_TR(0x5adc21);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5adc25:{NFSU2_TR(0x5adc25);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5adc29:{NFSU2_TR(0x5adc29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc2a:{NFSU2_TR(0x5adc2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5adc2d:{NFSU2_TR(0x5adc2d);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adc34:{NFSU2_TR(0x5adc34);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5adc3b:{NFSU2_TR(0x5adc3b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5adc3d:{NFSU2_TR(0x5adc3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adc41:{NFSU2_TR(0x5adc41);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adc45:{NFSU2_TR(0x5adc45);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5adc49:{NFSU2_TR(0x5adc49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc4a:{NFSU2_TR(0x5adc4a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adc4e:{NFSU2_TR(0x5adc4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5adc52:{NFSU2_TR(0x5adc52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc53:{NFSU2_TR(0x5adc53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adc58ull));
TAIL_STATIC(0x59b9b0u,59b);
}
B5adc58:L5adc58:{c.instructions+=4;NFSU2_TR(0x5adc58);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5adc5f:{NFSU2_TR(0x5adc5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc60:{NFSU2_TR(0x5adc60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc61:{NFSU2_TR(0x5adc61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adc66ull));
TAIL_STATIC(0x4012b0u,401);
}
B5adc66:L5adc66:{c.instructions+=8;NFSU2_TR(0x5adc66);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adc6d:{NFSU2_TR(0x5adc6d);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5adc73:{NFSU2_TR(0x5adc73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5adc76:{NFSU2_TR(0x5adc76);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5adc7d:{NFSU2_TR(0x5adc7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adc7e:{NFSU2_TR(0x5adc7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5adc84:{NFSU2_TR(0x5adc84);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5adc8b:{NFSU2_TR(0x5adc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adc90ull));
TAIL_STATIC(0x40f010u,40f);
}
B5adc90:L5adc90:{c.instructions+=11;NFSU2_TR(0x5adc90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adc94:{NFSU2_TR(0x5adc94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5adc98:{NFSU2_TR(0x5adc98);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5adc9c:{NFSU2_TR(0x5adc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adca2:{NFSU2_TR(0x5adca2);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5adca6:{NFSU2_TR(0x5adca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adcac:{NFSU2_TR(0x5adcac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adcad:{NFSU2_TR(0x5adcad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5adcb0:{NFSU2_TR(0x5adcb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adcb1:{NFSU2_TR(0x5adcb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adcb7:{NFSU2_TR(0x5adcb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adcbcull));
TAIL_STATIC(0x4012b0u,401);
}
B5adcbc:L5adcbc:{c.instructions+=8;NFSU2_TR(0x5adcbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adcc2:{NFSU2_TR(0x5adcc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adcc8:{NFSU2_TR(0x5adcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adcce:{NFSU2_TR(0x5adcce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5adcd4:{NFSU2_TR(0x5adcd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5adcda:{NFSU2_TR(0x5adcda);
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
B5adcdd:{NFSU2_TR(0x5adcdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x459c4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adce4:{NFSU2_TR(0x5adce4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adce7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5adce7:L5adce7:{c.instructions+=2;NFSU2_TR(0x5adce7);
__builtin_memmove((R+4),(R+24),4);
}
B5adce9:{NFSU2_TR(0x5adce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adceeull));
TAIL_STATIC(0x5a9de0u,5a9);
}
B5adcee:L5adcee:{c.instructions+=4;NFSU2_TR(0x5adcee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5adcf4:{NFSU2_TR(0x5adcf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5adcfa:{NFSU2_TR(0x5adcfa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5adcfc:{NFSU2_TR(0x5adcfc);
if(r1(R+518)){{goto L5add1c;}}
}
B5adcfe:L5adcfe:{c.instructions+=1;NFSU2_TR(0x5adcfe);
__builtin_memmove((R+28),(R+28),4);
}
B5add00:L5add00:{c.instructions+=5;NFSU2_TR(0x5add00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5add03:{NFSU2_TR(0x5add03);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5add06:{NFSU2_TR(0x5add06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5add07:{NFSU2_TR(0x5add07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5add08:{NFSU2_TR(0x5add08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5add0dull));
TAIL_STATIC(0x4012b0u,401);
}
B5add0d:L5add0d:{c.instructions+=5;NFSU2_TR(0x5add0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5add0f:{NFSU2_TR(0x5add0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5add15:{NFSU2_TR(0x5add15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5add18:{NFSU2_TR(0x5add18);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5add1a:{NFSU2_TR(0x5add1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5add00u);}goto L5add00;}}
}
B5add1c:L5add1c:{c.instructions+=4;NFSU2_TR(0x5add1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5add22:{NFSU2_TR(0x5add22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5add24:{NFSU2_TR(0x5add24);
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
B5add26:{NFSU2_TR(0x5add26);
if(r1(R+518)){{goto L5add3e;}}
}
B5add28:L5add28:{c.instructions+=5;NFSU2_TR(0x5add28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5add2b:{NFSU2_TR(0x5add2b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x40ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5add2e:{NFSU2_TR(0x5add2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5add2f:{NFSU2_TR(0x5add2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5add30:{NFSU2_TR(0x5add30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5add35ull));
TAIL_STATIC(0x4012b0u,401);
}
B5add35:L5add35:{c.instructions+=4;NFSU2_TR(0x5add35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5add37:{NFSU2_TR(0x5add37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5add3a:{NFSU2_TR(0x5add3a);
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
B5add3c:{NFSU2_TR(0x5add3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5add28u);}goto L5add28;}}
}
B5add3e:L5add3e:{c.instructions+=6;NFSU2_TR(0x5add3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5add3f:{NFSU2_TR(0x5add3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5add40:{NFSU2_TR(0x5add40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5add41:{NFSU2_TR(0x5add41);
__builtin_memmove((R+16),(R+20),4);
}
B5add43:{NFSU2_TR(0x5add43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5add44:{NFSU2_TR(0x5add44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5add50:L5add50:{c.instructions+=6;NFSU2_TR(0x5add50);
__builtin_memmove((R+0),gp(0x8900f8),4);
}
B5add55:{NFSU2_TR(0x5add55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5add58:{NFSU2_TR(0x5add58);
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
B5add5a:{NFSU2_TR(0x5add5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5add5b:{NFSU2_TR(0x5add5b);
__builtin_memmove((R+24),(R+4),4);
}
B5add5d:{NFSU2_TR(0x5add5d);
if(r1(R+518)){{goto L5adde4;}}
}
B5add63:L5add63:{c.instructions+=4;NFSU2_TR(0x5add63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5add66:{NFSU2_TR(0x5add66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5add68:{NFSU2_TR(0x5add68);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5add6c:{NFSU2_TR(0x5add6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5add6full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5add6f:L5add6f:{c.instructions+=21;NFSU2_TR(0x5add6f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5add72:{NFSU2_TR(0x5add72);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5add75:{NFSU2_TR(0x5add75);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5add77:{NFSU2_TR(0x5add77);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5add79:{NFSU2_TR(0x5add79);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5add7b:{NFSU2_TR(0x5add7b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5add7d:{NFSU2_TR(0x5add7d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5add7f:{NFSU2_TR(0x5add7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5add81:{NFSU2_TR(0x5add81);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5add83:{NFSU2_TR(0x5add83);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5add85:{NFSU2_TR(0x5add85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5add87:{NFSU2_TR(0x5add87);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5add89:{NFSU2_TR(0x5add89);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5add8b:{NFSU2_TR(0x5add8b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5add8d:{NFSU2_TR(0x5add8d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5add8f:{NFSU2_TR(0x5add8f);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5add95:{NFSU2_TR(0x5add95);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5add99:{NFSU2_TR(0x5add99);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5add9f:{NFSU2_TR(0x5add9f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5adda1:{NFSU2_TR(0x5adda1);
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
B5adda4:{NFSU2_TR(0x5adda4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5addae;}}
}
B5adda6:L5adda6:{c.instructions+=1;NFSU2_TR(0x5adda6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x40c00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5addae:L5addae:{c.instructions+=4;NFSU2_TR(0x5addae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5addb0:{NFSU2_TR(0x5addb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5addb1:{NFSU2_TR(0x5addb1);
__builtin_memmove((R+4),(R+24),4);
}
B5addb3:{NFSU2_TR(0x5addb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5addb6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5addb6:L5addb6:{c.instructions+=4;NFSU2_TR(0x5addb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5addb8:{NFSU2_TR(0x5addb8);
__builtin_memmove((R+4),(R+24),4);
}
B5addba:{NFSU2_TR(0x5addba);
__builtin_memmove((R+28),(R+0),4);
}
B5addbc:{NFSU2_TR(0x5addbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5addbfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5addbf:L5addbf:{c.instructions+=8;NFSU2_TR(0x5addbf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5addc3:{NFSU2_TR(0x5addc3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5addc7:{NFSU2_TR(0x5addc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5addc8:{NFSU2_TR(0x5addc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5addc9:{NFSU2_TR(0x5addc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5addcf:{NFSU2_TR(0x5addcf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5addd2:{NFSU2_TR(0x5addd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5addd3:{NFSU2_TR(0x5addd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5addd8ull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B5addd8:L5addd8:{c.instructions+=5;NFSU2_TR(0x5addd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5addd9:{NFSU2_TR(0x5addd9);
__builtin_memmove((R+4),(R+24),4);
}
B5adddb:{NFSU2_TR(0x5adddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5adddc:{NFSU2_TR(0x5adddc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5adddf:{NFSU2_TR(0x5adddf);
TAIL_STATIC(0x5a9de0u,5a9);
}
B5adde4:L5adde4:{c.instructions+=3;NFSU2_TR(0x5adde4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5adde6:{NFSU2_TR(0x5adde6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adde8:{NFSU2_TR(0x5adde8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5addebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5addeb:L5addeb:{c.instructions+=3;NFSU2_TR(0x5addeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5addec:{NFSU2_TR(0x5addec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5addf2:{NFSU2_TR(0x5addf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5addf7ull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B5addf7:L5addf7:{c.instructions+=4;NFSU2_TR(0x5addf7);
__builtin_memmove((R+4),(R+24),4);
}
B5addf9:{NFSU2_TR(0x5addf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5addfa:{NFSU2_TR(0x5addfa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5addfd:{NFSU2_TR(0x5addfd);
TAIL_STATIC(0x5a9de0u,5a9);
}
B5ade10:L5ade10:{c.instructions+=13;NFSU2_TR(0x5ade10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ade12:{NFSU2_TR(0x5ade12);
u8 U[4];
w4(U+0,u32(0x778d0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ade17:{NFSU2_TR(0x5ade17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ade1d:{NFSU2_TR(0x5ade1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ade1e:{NFSU2_TR(0x5ade1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ade25:{NFSU2_TR(0x5ade25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ade26:{NFSU2_TR(0x5ade26);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5ade2c:{NFSU2_TR(0x5ade2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ade2d:{NFSU2_TR(0x5ade2d);
__builtin_memmove((R+24),(R+4),4);
}
B5ade2f:{NFSU2_TR(0x5ade2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ade35:{NFSU2_TR(0x5ade35);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ade37:{NFSU2_TR(0x5ade37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ade38:{NFSU2_TR(0x5ade38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5adf01;}}
}
B5ade3e:L5ade3e:{c.instructions+=3;NFSU2_TR(0x5ade3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ade44:{NFSU2_TR(0x5ade44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ade46:{NFSU2_TR(0x5ade46);
if(r1(R+518)){{goto L5ade53;}}
}
B5ade48:L5ade48:{c.instructions+=2;NFSU2_TR(0x5ade48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ade4d:{NFSU2_TR(0x5ade4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5adf01;}}
}
B5ade53:L5ade53:{c.instructions+=3;NFSU2_TR(0x5ade53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ade56:{NFSU2_TR(0x5ade56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ade58:{NFSU2_TR(0x5ade58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5adf01;}}
}
B5ade5e:L5ade5e:{c.instructions+=10;NFSU2_TR(0x5ade5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ade64:{NFSU2_TR(0x5ade64);
__builtin_memmove((R+0),(R+8),4);
}
B5ade66:{NFSU2_TR(0x5ade66);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5ade68:{NFSU2_TR(0x5ade68);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ade6c:{NFSU2_TR(0x5ade6c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ade70:{NFSU2_TR(0x5ade70);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ade76:{NFSU2_TR(0x5ade76);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ade7c:{NFSU2_TR(0x5ade7c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ade7e:{NFSU2_TR(0x5ade7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ade81:{NFSU2_TR(0x5ade81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5adf01;}}
}
B5ade83:L5ade83:{c.instructions+=12;NFSU2_TR(0x5ade83);
__builtin_memmove((R+8),(R+4),4);
}
B5ade85:{NFSU2_TR(0x5ade85);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5ade88:{NFSU2_TR(0x5ade88);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x86ad78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ade8e:{NFSU2_TR(0x5ade8e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5ade91:{NFSU2_TR(0x5ade91);
w1(R+8,u8(0x1ull));
}
B5ade93:{NFSU2_TR(0x5ade93);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5ade95:{NFSU2_TR(0x5ade95);
w1(R+4,u8(u32(r1(R+4))|u32(u8(0xffull))));
}
B5ade98:{NFSU2_TR(0x5ade98);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B5ade9a:{NFSU2_TR(0x5ade9a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(r1(R+4))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5ade9c:{NFSU2_TR(0x5ade9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5adea2:{NFSU2_TR(0x5adea2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adea3:{NFSU2_TR(0x5adea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adea8ull));
TAIL_STATIC(0x5a8b20u,5a8);
}
B5adea8:L5adea8:{c.instructions+=4;NFSU2_TR(0x5adea8);
__builtin_memmove((R+28),(R+0),4);
}
B5adeaa:{NFSU2_TR(0x5adeaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5adead:{NFSU2_TR(0x5adead);
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
B5adeaf:{NFSU2_TR(0x5adeaf);
if(r1(R+518)){{goto L5adee6;}}
}
B5adeb1:L5adeb1:{c.instructions+=3;NFSU2_TR(0x5adeb1);
__builtin_memmove((R+0),gp(0x86b370),4);
}
B5adeb6:{NFSU2_TR(0x5adeb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adeb7:{NFSU2_TR(0x5adeb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adebcull));
TAIL_STATIC(0x440e50u,440);
}
B5adebc:L5adebc:{c.instructions+=5;NFSU2_TR(0x5adebc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5adebf:{NFSU2_TR(0x5adebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adec3:{NFSU2_TR(0x5adec3);
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
B5adec5:{NFSU2_TR(0x5adec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adecd:{NFSU2_TR(0x5adecd);
if(r1(R+518)){{goto L5adede;}}
}
B5adecf:L5adecf:{c.instructions+=5;NFSU2_TR(0x5adecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aded5:{NFSU2_TR(0x5aded5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aded6:{NFSU2_TR(0x5aded6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aded7:{NFSU2_TR(0x5aded7);
__builtin_memmove((R+4),(R+0),4);
}
B5aded9:{NFSU2_TR(0x5aded9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adedeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ad8f0u);}goto L5ad8f0;}
}
B5adede:L5adede:{c.instructions+=1;NFSU2_TR(0x5adede);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5adee6:L5adee6:{c.instructions+=4;NFSU2_TR(0x5adee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5adee8:{NFSU2_TR(0x5adee8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adeea:{NFSU2_TR(0x5adeea);
__builtin_memmove((R+4),(R+24),4);
}
B5adeec:{NFSU2_TR(0x5adeec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adeeeull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5adeee:L5adeee:{c.instructions+=7;NFSU2_TR(0x5adeee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5adeef:{NFSU2_TR(0x5adeef);
w1(R+0,u8(0x1ull));
}
B5adef1:{NFSU2_TR(0x5adef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5adef2:{NFSU2_TR(0x5adef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5adef6:{NFSU2_TR(0x5adef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adefd:{NFSU2_TR(0x5adefd);
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
B5adf00:{NFSU2_TR(0x5adf00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5adf01:L5adf01:{c.instructions+=3;NFSU2_TR(0x5adf01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adf07:{NFSU2_TR(0x5adf07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5adf09:{NFSU2_TR(0x5adf09);
if(r1(R+518)){{goto L5adf71;}}
}
B5adf0b:L5adf0b:{c.instructions+=2;NFSU2_TR(0x5adf0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5adf10:{NFSU2_TR(0x5adf10);
if(r1(R+518)){{goto L5adf71;}}
}
B5adf12:L5adf12:{c.instructions+=6;NFSU2_TR(0x5adf12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5adf18:{NFSU2_TR(0x5adf18);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5adf1e:{NFSU2_TR(0x5adf1e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5adf24:{NFSU2_TR(0x5adf24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5adf26:{NFSU2_TR(0x5adf26);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5adf29:{NFSU2_TR(0x5adf29);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5adf71;}}
}
B5adf2b:L5adf2b:{c.instructions+=8;NFSU2_TR(0x5adf2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B5adf31:{NFSU2_TR(0x5adf31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adf35:{NFSU2_TR(0x5adf35);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5adf39:{NFSU2_TR(0x5adf39);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5adf3f:{NFSU2_TR(0x5adf3f);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5adf45:{NFSU2_TR(0x5adf45);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5adf47:{NFSU2_TR(0x5adf47);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5adf4a:{NFSU2_TR(0x5adf4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5adf71;}}
}
B5adf4c:L5adf4c:{c.instructions+=3;NFSU2_TR(0x5adf4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5adf4e:{NFSU2_TR(0x5adf4e);
__builtin_memmove((R+4),(R+24),4);
}
B5adf50:{NFSU2_TR(0x5adf50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adf56ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5adf56:L5adf56:{c.instructions+=4;NFSU2_TR(0x5adf56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5adf58:{NFSU2_TR(0x5adf58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adf5a:{NFSU2_TR(0x5adf5a);
__builtin_memmove((R+4),(R+24),4);
}
B5adf5c:{NFSU2_TR(0x5adf5c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adf5eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5adf5e:L5adf5e:{c.instructions+=7;NFSU2_TR(0x5adf5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5adf5f:{NFSU2_TR(0x5adf5f);
w1(R+0,u8(0x1ull));
}
B5adf61:{NFSU2_TR(0x5adf61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5adf62:{NFSU2_TR(0x5adf62);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5adf66:{NFSU2_TR(0x5adf66);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adf6d:{NFSU2_TR(0x5adf6d);
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
B5adf70:{NFSU2_TR(0x5adf70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5adf71:L5adf71:{c.instructions+=7;NFSU2_TR(0x5adf71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5adf75:{NFSU2_TR(0x5adf75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5adf76:{NFSU2_TR(0x5adf76);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5adf78:{NFSU2_TR(0x5adf78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5adf79:{NFSU2_TR(0x5adf79);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adf80:{NFSU2_TR(0x5adf80);
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
B5adf83:{NFSU2_TR(0x5adf83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5adf90:L5adf90:{c.instructions+=7;NFSU2_TR(0x5adf90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adf91:{NFSU2_TR(0x5adf91);
__builtin_memmove((R+28),(R+4),4);
}
B5adf93:{NFSU2_TR(0x5adf93);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x506ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5adf9a:{NFSU2_TR(0x5adf9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5adf9e:{NFSU2_TR(0x5adf9e);
s4(0x86b378,u32(u32(m4(0x86b378))+u32(u32(0x1ull))));
}
B5adfa4:{NFSU2_TR(0x5adfa4);
__builtin_memmove((R+4),(R+28),4);
}
B5adfa6:{NFSU2_TR(0x5adfa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adfabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5add50u);}goto L5add50;}
}
B5adfab:L5adfab:{c.instructions+=3;NFSU2_TR(0x5adfab);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x505ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5adfb1:{NFSU2_TR(0x5adfb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5adfb3:{NFSU2_TR(0x5adfb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5adfe0;}}
}
B5adfb5:L5adfb5:{c.instructions+=6;NFSU2_TR(0x5adfb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adfb6:{NFSU2_TR(0x5adfb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4fcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5adfbc:{NFSU2_TR(0x5adfbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adfbd:{NFSU2_TR(0x5adfbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5adfbf:{NFSU2_TR(0x5adfbf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5adfc1:{NFSU2_TR(0x5adfc1);
if(r1(R+518)){{goto L5adfd7;}}
}
B5adfc3:L5adfc3:{c.instructions+=4;NFSU2_TR(0x5adfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adfc6:{NFSU2_TR(0x5adfc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5adfc7:{NFSU2_TR(0x5adfc7);
w4(R+4,u32(0x8357e0ull));
}
B5adfcc:{NFSU2_TR(0x5adfcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5adfd1ull));
TAIL_STATIC(0x48bc50u,48b);
}
B5adfd1:L5adfd1:{c.instructions+=3;NFSU2_TR(0x5adfd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5adfd3:{NFSU2_TR(0x5adfd3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5adfd5:{NFSU2_TR(0x5adfd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5adfc3u);}goto L5adfc3;}}
}
B5adfd7:L5adfd7:{c.instructions+=3;NFSU2_TR(0x5adfd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5adfd8:{NFSU2_TR(0x5adfd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x505ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5adfdf:{NFSU2_TR(0x5adfdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5adfe0:L5adfe0:{c.instructions+=3;NFSU2_TR(0x5adfe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5adfe6:{NFSU2_TR(0x5adfe6);
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
B5adfe8:{NFSU2_TR(0x5adfe8);
if(r1(R+518)){{goto L5adff1;}}
}
B5adfea:L5adfea:{c.instructions+=2;NFSU2_TR(0x5adfea);
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
B5adfef:{NFSU2_TR(0x5adfef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5adffd;}}
}
B5adff1:L5adff1:{c.instructions+=2;NFSU2_TR(0x5adff1);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5adff7:{NFSU2_TR(0x5adff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5adffd:L5adffd:{c.instructions+=2;NFSU2_TR(0x5adffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5adffe:{NFSU2_TR(0x5adffe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5ad,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
