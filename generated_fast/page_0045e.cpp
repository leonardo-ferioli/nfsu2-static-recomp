#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x45e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x45e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_45e(u8* __restrict R,Cpu& c);
u32 page_45e(Cpu& c){return body_45e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_45e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x45e004:goto L45e004;
case 0x45e00a:c.instructions+=8;goto B45e00a;
case 0x45e00d:c.instructions+=7;goto B45e00d;
case 0x45e014:c.instructions+=6;goto B45e014;
case 0x45e019:c.instructions+=5;goto B45e019;
case 0x45e01f:c.instructions+=4;goto B45e01f;
case 0x45e026:c.instructions+=3;goto B45e026;
case 0x45e028:c.instructions+=2;goto B45e028;
case 0x45e02e:c.instructions+=1;goto B45e02e;
case 0x45e033:goto L45e033;
case 0x45e03a:c.instructions+=4;goto B45e03a;
case 0x45e03d:c.instructions+=3;goto B45e03d;
case 0x45e043:c.instructions+=2;goto B45e043;
case 0x45e044:c.instructions+=1;goto B45e044;
case 0x45e046:goto L45e046;
case 0x45e04d:c.instructions+=6;goto B45e04d;
case 0x45e053:c.instructions+=5;goto B45e053;
case 0x45e059:c.instructions+=4;goto B45e059;
case 0x45e060:c.instructions+=3;goto B45e060;
case 0x45e066:c.instructions+=2;goto B45e066;
case 0x45e068:c.instructions+=1;goto B45e068;
case 0x45e06d:goto L45e06d;
case 0x45e074:c.instructions+=4;goto B45e074;
case 0x45e077:c.instructions+=3;goto B45e077;
case 0x45e07c:c.instructions+=2;goto B45e07c;
case 0x45e07d:c.instructions+=1;goto B45e07d;
case 0x45e07f:goto L45e07f;
case 0x45e086:c.instructions+=6;goto B45e086;
case 0x45e08c:c.instructions+=5;goto B45e08c;
case 0x45e092:c.instructions+=4;goto B45e092;
case 0x45e099:c.instructions+=3;goto B45e099;
case 0x45e09b:c.instructions+=2;goto B45e09b;
case 0x45e0a0:c.instructions+=1;goto B45e0a0;
case 0x45e0a5:goto L45e0a5;
case 0x45e0ac:c.instructions+=3;goto B45e0ac;
case 0x45e0af:c.instructions+=2;goto B45e0af;
case 0x45e0b5:c.instructions+=1;goto B45e0b5;
case 0x45e0b6:goto L45e0b6;
case 0x45e0b7:c.instructions+=1;goto B45e0b7;
case 0x45e0bc:goto L45e0bc;
case 0x45e0bf:c.instructions+=1;goto B45e0bf;
case 0x45e0c4:goto L45e0c4;
case 0x45e0c7:c.instructions+=3;goto B45e0c7;
case 0x45e0ca:c.instructions+=2;goto B45e0ca;
case 0x45e0cb:c.instructions+=1;goto B45e0cb;
case 0x45e0cd:goto L45e0cd;
case 0x45e0d0:c.instructions+=5;goto B45e0d0;
case 0x45e0d3:c.instructions+=4;goto B45e0d3;
case 0x45e0d6:c.instructions+=3;goto B45e0d6;
case 0x45e0d7:c.instructions+=2;goto B45e0d7;
case 0x45e0d8:c.instructions+=1;goto B45e0d8;
case 0x45e0d9:goto L45e0d9;
case 0x45e0dc:c.instructions+=4;goto B45e0dc;
case 0x45e0df:c.instructions+=3;goto B45e0df;
case 0x45e0e2:c.instructions+=2;goto B45e0e2;
case 0x45e0e5:c.instructions+=1;goto B45e0e5;
case 0x45e0e8:goto L45e0e8;
case 0x45e0e9:c.instructions+=2;goto B45e0e9;
case 0x45e0ea:c.instructions+=1;goto B45e0ea;
case 0x45e100:goto L45e100;
case 0x45e103:c.instructions+=3;goto B45e103;
case 0x45e106:c.instructions+=2;goto B45e106;
case 0x45e108:c.instructions+=1;goto B45e108;
case 0x45e10e:goto L45e10e;
case 0x45e112:c.instructions+=5;goto B45e112;
case 0x45e118:c.instructions+=4;goto B45e118;
case 0x45e11e:c.instructions+=3;goto B45e11e;
case 0x45e124:c.instructions+=2;goto B45e124;
case 0x45e126:c.instructions+=1;goto B45e126;
case 0x45e128:goto L45e128;
case 0x45e132:goto L45e132;
case 0x45e13c:c.instructions+=1;goto B45e13c;
case 0x45e141:goto L45e141;
case 0x45e144:c.instructions+=1;goto B45e144;
case 0x45e147:goto L45e147;
case 0x45e14c:c.instructions+=33;goto B45e14c;
case 0x45e152:c.instructions+=32;goto B45e152;
case 0x45e155:c.instructions+=31;goto B45e155;
case 0x45e157:c.instructions+=30;goto B45e157;
case 0x45e15a:c.instructions+=29;goto B45e15a;
case 0x45e15c:c.instructions+=28;goto B45e15c;
case 0x45e162:c.instructions+=27;goto B45e162;
case 0x45e166:c.instructions+=26;goto B45e166;
case 0x45e16c:c.instructions+=25;goto B45e16c;
case 0x45e16e:c.instructions+=24;goto B45e16e;
case 0x45e172:c.instructions+=23;goto B45e172;
case 0x45e174:c.instructions+=22;goto B45e174;
case 0x45e17a:c.instructions+=21;goto B45e17a;
case 0x45e17e:c.instructions+=20;goto B45e17e;
case 0x45e184:c.instructions+=19;goto B45e184;
case 0x45e188:c.instructions+=18;goto B45e188;
case 0x45e18c:c.instructions+=17;goto B45e18c;
case 0x45e190:c.instructions+=16;goto B45e190;
case 0x45e194:c.instructions+=15;goto B45e194;
case 0x45e196:c.instructions+=14;goto B45e196;
case 0x45e198:c.instructions+=13;goto B45e198;
case 0x45e19a:c.instructions+=12;goto B45e19a;
case 0x45e19c:c.instructions+=11;goto B45e19c;
case 0x45e1a0:c.instructions+=10;goto B45e1a0;
case 0x45e1a4:c.instructions+=9;goto B45e1a4;
case 0x45e1a6:c.instructions+=8;goto B45e1a6;
case 0x45e1a8:c.instructions+=7;goto B45e1a8;
case 0x45e1aa:c.instructions+=6;goto B45e1aa;
case 0x45e1ac:c.instructions+=5;goto B45e1ac;
case 0x45e1ae:c.instructions+=4;goto B45e1ae;
case 0x45e1b0:c.instructions+=3;goto B45e1b0;
case 0x45e1b2:c.instructions+=2;goto B45e1b2;
case 0x45e1b5:c.instructions+=1;goto B45e1b5;
case 0x45e1bb:goto L45e1bb;
case 0x45e1c1:c.instructions+=1;goto B45e1c1;
case 0x45e1c6:goto L45e1c6;
case 0x45e1c9:c.instructions+=1;goto B45e1c9;
case 0x45e1d0:goto L45e1d0;
case 0x45e1d4:c.instructions+=2;goto B45e1d4;
case 0x45e1d7:c.instructions+=1;goto B45e1d7;
case 0x45e1e0:goto L45e1e0;
case 0x45e1e4:c.instructions+=2;goto B45e1e4;
case 0x45e1e7:c.instructions+=1;goto B45e1e7;
case 0x45e1f0:goto L45e1f0;
case 0x45e1f5:c.instructions+=5;goto B45e1f5;
case 0x45e1f6:c.instructions+=4;goto B45e1f6;
case 0x45e1f8:c.instructions+=3;goto B45e1f8;
case 0x45e1fb:c.instructions+=2;goto B45e1fb;
case 0x45e1fd:c.instructions+=1;goto B45e1fd;
case 0x45e203:goto L45e203;
case 0x45e206:c.instructions+=2;goto B45e206;
case 0x45e208:c.instructions+=1;goto B45e208;
case 0x45e20a:goto L45e20a;
case 0x45e20d:c.instructions+=1;goto B45e20d;
case 0x45e20f:goto L45e20f;
case 0x45e212:c.instructions+=1;goto B45e212;
case 0x45e214:goto L45e214;
case 0x45e217:goto L45e217;
case 0x45e21d:goto L45e21d;
case 0x45e223:c.instructions+=5;goto B45e223;
case 0x45e224:c.instructions+=4;goto B45e224;
case 0x45e22a:c.instructions+=3;goto B45e22a;
case 0x45e22c:c.instructions+=2;goto B45e22c;
case 0x45e22f:c.instructions+=1;goto B45e22f;
case 0x45e231:goto L45e231;
case 0x45e237:c.instructions+=4;goto B45e237;
case 0x45e23d:c.instructions+=3;goto B45e23d;
case 0x45e23f:c.instructions+=2;goto B45e23f;
case 0x45e242:c.instructions+=1;goto B45e242;
case 0x45e244:goto L45e244;
case 0x45e24a:c.instructions+=7;goto B45e24a;
case 0x45e24b:c.instructions+=6;goto B45e24b;
case 0x45e251:c.instructions+=5;goto B45e251;
case 0x45e254:c.instructions+=4;goto B45e254;
case 0x45e25a:c.instructions+=3;goto B45e25a;
case 0x45e260:c.instructions+=2;goto B45e260;
case 0x45e263:c.instructions+=1;goto B45e263;
case 0x45e265:goto L45e265;
case 0x45e26a:goto L45e26a;
case 0x45e270:c.instructions+=2;goto B45e270;
case 0x45e272:c.instructions+=1;goto B45e272;
case 0x45e277:goto L45e277;
case 0x45e279:c.instructions+=2;goto B45e279;
case 0x45e27b:c.instructions+=1;goto B45e27b;
case 0x45e27e:goto L45e27e;
case 0x45e284:c.instructions+=2;goto B45e284;
case 0x45e28a:c.instructions+=1;goto B45e28a;
case 0x45e28b:goto L45e28b;
case 0x45e28c:c.instructions+=1;goto B45e28c;
case 0x45e290:goto L45e290;
case 0x45e295:c.instructions+=3;goto B45e295;
case 0x45e298:c.instructions+=2;goto B45e298;
case 0x45e29a:c.instructions+=1;goto B45e29a;
case 0x45e29c:goto L45e29c;
case 0x45e2a2:c.instructions+=1;goto B45e2a2;
case 0x45e2a5:goto L45e2a5;
case 0x45e2ab:c.instructions+=9;goto B45e2ab;
case 0x45e2af:c.instructions+=8;goto B45e2af;
case 0x45e2b5:c.instructions+=7;goto B45e2b5;
case 0x45e2bc:c.instructions+=6;goto B45e2bc;
case 0x45e2c2:c.instructions+=5;goto B45e2c2;
case 0x45e2c6:c.instructions+=4;goto B45e2c6;
case 0x45e2cc:c.instructions+=3;goto B45e2cc;
case 0x45e2ce:c.instructions+=2;goto B45e2ce;
case 0x45e2d1:c.instructions+=1;goto B45e2d1;
case 0x45e2d3:goto L45e2d3;
case 0x45e2d7:c.instructions+=5;goto B45e2d7;
case 0x45e2dd:c.instructions+=4;goto B45e2dd;
case 0x45e2e1:c.instructions+=3;goto B45e2e1;
case 0x45e2e3:c.instructions+=2;goto B45e2e3;
case 0x45e2e6:c.instructions+=1;goto B45e2e6;
case 0x45e2e8:goto L45e2e8;
case 0x45e2ea:c.instructions+=1;goto B45e2ea;
case 0x45e2f0:goto L45e2f0;
case 0x45e2f3:goto L45e2f3;
case 0x45e2f9:c.instructions+=1;goto B45e2f9;
case 0x45e300:goto L45e300;
case 0x45e305:c.instructions+=2;goto B45e305;
case 0x45e307:c.instructions+=1;goto B45e307;
case 0x45e309:goto L45e309;
case 0x45e30b:c.instructions+=2;goto B45e30b;
case 0x45e30e:c.instructions+=1;goto B45e30e;
case 0x45e310:goto L45e310;
case 0x45e313:c.instructions+=1;goto B45e313;
case 0x45e315:goto L45e315;
case 0x45e319:c.instructions+=2;goto B45e319;
case 0x45e31f:c.instructions+=1;goto B45e31f;
case 0x45e322:goto L45e322;
case 0x45e326:c.instructions+=3;goto B45e326;
case 0x45e328:c.instructions+=2;goto B45e328;
case 0x45e32a:c.instructions+=1;goto B45e32a;
case 0x45e32c:goto L45e32c;
case 0x45e32e:c.instructions+=2;goto B45e32e;
case 0x45e330:c.instructions+=1;goto B45e330;
case 0x45e333:goto L45e333;
case 0x45e338:c.instructions+=1;goto B45e338;
case 0x45e33a:goto L45e33a;
case 0x45e33f:goto L45e33f;
case 0x45e341:c.instructions+=1;goto B45e341;
case 0x45e350:goto L45e350;
case 0x45e352:c.instructions+=3;goto B45e352;
case 0x45e358:c.instructions+=2;goto B45e358;
case 0x45e35b:c.instructions+=1;goto B45e35b;
case 0x45e360:goto L45e360;
case 0x45e366:c.instructions+=4;goto B45e366;
case 0x45e369:c.instructions+=3;goto B45e369;
case 0x45e36a:c.instructions+=2;goto B45e36a;
case 0x45e370:c.instructions+=1;goto B45e370;
case 0x45e372:goto L45e372;
case 0x45e373:c.instructions+=5;goto B45e373;
case 0x45e375:c.instructions+=4;goto B45e375;
case 0x45e378:c.instructions+=3;goto B45e378;
case 0x45e37d:c.instructions+=2;goto B45e37d;
case 0x45e383:c.instructions+=1;goto B45e383;
case 0x45e38a:goto L45e38a;
case 0x45e38c:goto L45e38c;
case 0x45e38e:c.instructions+=2;goto B45e38e;
case 0x45e38f:c.instructions+=1;goto B45e38f;
case 0x45e390:goto L45e390;
case 0x45e394:c.instructions+=3;goto B45e394;
case 0x45e398:c.instructions+=2;goto B45e398;
case 0x45e39a:c.instructions+=1;goto B45e39a;
case 0x45e39c:goto L45e39c;
case 0x45e39e:c.instructions+=2;goto B45e39e;
case 0x45e3a3:c.instructions+=1;goto B45e3a3;
case 0x45e3a6:goto L45e3a6;
case 0x45e3a8:c.instructions+=1;goto B45e3a8;
case 0x45e3b0:goto L45e3b0;
case 0x45e3b4:c.instructions+=3;goto B45e3b4;
case 0x45e3b8:c.instructions+=2;goto B45e3b8;
case 0x45e3ba:c.instructions+=1;goto B45e3ba;
case 0x45e3bc:goto L45e3bc;
case 0x45e3c0:c.instructions+=1;goto B45e3c0;
case 0x45e3c3:goto L45e3c3;
case 0x45e3c5:c.instructions+=1;goto B45e3c5;
case 0x45e3d0:goto L45e3d0;
case 0x45e3d5:c.instructions+=3;goto B45e3d5;
case 0x45e3d8:c.instructions+=2;goto B45e3d8;
case 0x45e3da:c.instructions+=1;goto B45e3da;
case 0x45e3dc:goto L45e3dc;
case 0x45e3e0:c.instructions+=2;goto B45e3e0;
case 0x45e3e6:c.instructions+=1;goto B45e3e6;
case 0x45e3e9:goto L45e3e9;
case 0x45e3ec:c.instructions+=2;goto B45e3ec;
case 0x45e3ee:c.instructions+=1;goto B45e3ee;
case 0x45e3f0:goto L45e3f0;
case 0x45e3f3:c.instructions+=5;goto B45e3f3;
case 0x45e3f9:c.instructions+=4;goto B45e3f9;
case 0x45e3fc:c.instructions+=3;goto B45e3fc;
case 0x45e3fe:c.instructions+=2;goto B45e3fe;
case 0x45e401:c.instructions+=1;goto B45e401;
case 0x45e403:goto L45e403;
case 0x45e407:c.instructions+=1;goto B45e407;
case 0x45e40d:goto L45e40d;
case 0x45e410:goto L45e410;
case 0x45e415:c.instructions+=1;goto B45e415;
case 0x45e420:goto L45e420;
case 0x45e425:c.instructions+=1;goto B45e425;
case 0x45e430:goto L45e430;
case 0x45e431:c.instructions+=2;goto B45e431;
case 0x45e433:c.instructions+=1;goto B45e433;
case 0x45e438:goto L45e438;
case 0x45e43e:c.instructions+=4;goto B45e43e;
case 0x45e448:c.instructions+=3;goto B45e448;
case 0x45e44a:c.instructions+=2;goto B45e44a;
case 0x45e44b:c.instructions+=1;goto B45e44b;
case 0x45e450:goto L45e450;
case 0x45e456:c.instructions+=13;goto B45e456;
case 0x45e458:c.instructions+=12;goto B45e458;
case 0x45e45d:c.instructions+=11;goto B45e45d;
case 0x45e45e:c.instructions+=10;goto B45e45e;
case 0x45e463:c.instructions+=9;goto B45e463;
case 0x45e46a:c.instructions+=8;goto B45e46a;
case 0x45e46d:c.instructions+=7;goto B45e46d;
case 0x45e46e:c.instructions+=6;goto B45e46e;
case 0x45e46f:c.instructions+=5;goto B45e46f;
case 0x45e471:c.instructions+=4;goto B45e471;
case 0x45e474:c.instructions+=3;goto B45e474;
case 0x45e476:c.instructions+=2;goto B45e476;
case 0x45e478:c.instructions+=1;goto B45e478;
case 0x45e47e:goto L45e47e;
case 0x45e47f:c.instructions+=4;goto B45e47f;
case 0x45e482:c.instructions+=3;goto B45e482;
case 0x45e488:c.instructions+=2;goto B45e488;
case 0x45e48a:c.instructions+=1;goto B45e48a;
case 0x45e48c:goto L45e48c;
case 0x45e48e:c.instructions+=2;goto B45e48e;
case 0x45e490:c.instructions+=1;goto B45e490;
case 0x45e492:goto L45e492;
case 0x45e497:goto L45e497;
case 0x45e49b:c.instructions+=2;goto B45e49b;
case 0x45e49c:c.instructions+=1;goto B45e49c;
case 0x45e4a1:goto L45e4a1;
case 0x45e4a4:c.instructions+=1;goto B45e4a4;
case 0x45e4a9:goto L45e4a9;
case 0x45e4ad:c.instructions+=4;goto B45e4ad;
case 0x45e4af:c.instructions+=3;goto B45e4af;
case 0x45e4b0:c.instructions+=2;goto B45e4b0;
case 0x45e4b1:c.instructions+=1;goto B45e4b1;
case 0x45e4b4:goto L45e4b4;
case 0x45e4b9:goto L45e4b9;
case 0x45e4bd:c.instructions+=3;goto B45e4bd;
case 0x45e4be:c.instructions+=2;goto B45e4be;
case 0x45e4c8:c.instructions+=1;goto B45e4c8;
case 0x45e4cd:goto L45e4cd;
case 0x45e4d0:c.instructions+=1;goto B45e4d0;
case 0x45e4d5:goto L45e4d5;
case 0x45e4d9:c.instructions+=8;goto B45e4d9;
case 0x45e4dd:c.instructions+=7;goto B45e4dd;
case 0x45e4de:c.instructions+=6;goto B45e4de;
case 0x45e4e2:c.instructions+=5;goto B45e4e2;
case 0x45e4e6:c.instructions+=4;goto B45e4e6;
case 0x45e4ea:c.instructions+=3;goto B45e4ea;
case 0x45e4ec:c.instructions+=2;goto B45e4ec;
case 0x45e4ee:c.instructions+=1;goto B45e4ee;
case 0x45e4f0:goto L45e4f0;
case 0x45e4f2:c.instructions+=1;goto B45e4f2;
case 0x45e4f7:goto L45e4f7;
case 0x45e4fb:c.instructions+=3;goto B45e4fb;
case 0x45e4fd:c.instructions+=2;goto B45e4fd;
case 0x45e501:c.instructions+=1;goto B45e501;
case 0x45e503:goto L45e503;
case 0x45e504:c.instructions+=12;goto B45e504;
case 0x45e507:c.instructions+=11;goto B45e507;
case 0x45e508:c.instructions+=10;goto B45e508;
case 0x45e509:c.instructions+=9;goto B45e509;
case 0x45e50e:c.instructions+=8;goto B45e50e;
case 0x45e510:c.instructions+=7;goto B45e510;
case 0x45e513:c.instructions+=6;goto B45e513;
case 0x45e516:c.instructions+=5;goto B45e516;
case 0x45e519:c.instructions+=4;goto B45e519;
case 0x45e51c:c.instructions+=3;goto B45e51c;
case 0x45e51f:c.instructions+=2;goto B45e51f;
case 0x45e522:c.instructions+=1;goto B45e522;
case 0x45e527:goto L45e527;
case 0x45e52a:c.instructions+=2;goto B45e52a;
case 0x45e52c:c.instructions+=1;goto B45e52c;
case 0x45e52e:goto L45e52e;
case 0x45e533:c.instructions+=2;goto B45e533;
case 0x45e538:c.instructions+=1;goto B45e538;
case 0x45e53d:goto L45e53d;
case 0x45e53e:c.instructions+=3;goto B45e53e;
case 0x45e53f:c.instructions+=2;goto B45e53f;
case 0x45e544:c.instructions+=1;goto B45e544;
case 0x45e549:goto L45e549;
case 0x45e54c:goto L45e54c;
case 0x45e54d:c.instructions+=1;goto B45e54d;
case 0x45e54f:goto L45e54f;
case 0x45e551:goto L45e551;
case 0x45e557:c.instructions+=1;goto B45e557;
case 0x45e558:goto L45e558;
case 0x45e55c:c.instructions+=5;goto B45e55c;
case 0x45e55d:c.instructions+=4;goto B45e55d;
case 0x45e55e:c.instructions+=3;goto B45e55e;
case 0x45e565:c.instructions+=2;goto B45e565;
case 0x45e568:c.instructions+=1;goto B45e568;
case 0x45e570:goto L45e570;
case 0x45e571:c.instructions+=5;goto B45e571;
case 0x45e572:c.instructions+=4;goto B45e572;
case 0x45e574:c.instructions+=3;goto B45e574;
case 0x45e57a:c.instructions+=2;goto B45e57a;
case 0x45e57c:c.instructions+=1;goto B45e57c;
case 0x45e582:goto L45e582;
case 0x45e584:c.instructions+=3;goto B45e584;
case 0x45e586:c.instructions+=2;goto B45e586;
case 0x45e58e:c.instructions+=1;goto B45e58e;
case 0x45e590:goto L45e590;
case 0x45e594:c.instructions+=3;goto B45e594;
case 0x45e595:c.instructions+=2;goto B45e595;
case 0x45e597:c.instructions+=1;goto B45e597;
case 0x45e59c:goto L45e59c;
case 0x45e5a1:c.instructions+=1;goto B45e5a1;
case 0x45e5a3:goto L45e5a3;
case 0x45e5a4:c.instructions+=3;goto B45e5a4;
case 0x45e5aa:c.instructions+=2;goto B45e5aa;
case 0x45e5ac:c.instructions+=1;goto B45e5ac;
case 0x45e5ae:goto L45e5ae;
case 0x45e5b0:c.instructions+=2;goto B45e5b0;
case 0x45e5b2:c.instructions+=1;goto B45e5b2;
case 0x45e5b4:goto L45e5b4;
case 0x45e5b9:goto L45e5b9;
case 0x45e5bd:c.instructions+=2;goto B45e5bd;
case 0x45e5be:c.instructions+=1;goto B45e5be;
case 0x45e5c3:goto L45e5c3;
case 0x45e5c6:c.instructions+=1;goto B45e5c6;
case 0x45e5cb:goto L45e5cb;
case 0x45e5cf:c.instructions+=4;goto B45e5cf;
case 0x45e5d1:c.instructions+=3;goto B45e5d1;
case 0x45e5d3:c.instructions+=2;goto B45e5d3;
case 0x45e5d4:c.instructions+=1;goto B45e5d4;
case 0x45e5d7:goto L45e5d7;
case 0x45e5dc:goto L45e5dc;
case 0x45e5e6:c.instructions+=1;goto B45e5e6;
case 0x45e5e7:goto L45e5e7;
case 0x45e5ed:c.instructions+=2;goto B45e5ed;
case 0x45e5ef:c.instructions+=1;goto B45e5ef;
case 0x45e5f1:goto L45e5f1;
case 0x45e5f3:c.instructions+=3;goto B45e5f3;
case 0x45e5f5:c.instructions+=2;goto B45e5f5;
case 0x45e5f7:c.instructions+=1;goto B45e5f7;
case 0x45e5fa:goto L45e5fa;
case 0x45e5fc:c.instructions+=2;goto B45e5fc;
case 0x45e602:c.instructions+=1;goto B45e602;
case 0x45e604:goto L45e604;
case 0x45e606:c.instructions+=1;goto B45e606;
case 0x45e608:goto L45e608;
case 0x45e60d:c.instructions+=1;goto B45e60d;
case 0x45e60f:goto L45e60f;
case 0x45e614:goto L45e614;
case 0x45e617:c.instructions+=4;goto B45e617;
case 0x45e61d:c.instructions+=3;goto B45e61d;
case 0x45e61f:c.instructions+=2;goto B45e61f;
case 0x45e621:c.instructions+=1;goto B45e621;
case 0x45e623:goto L45e623;
case 0x45e626:c.instructions+=2;goto B45e626;
case 0x45e627:c.instructions+=1;goto B45e627;
case 0x45e62c:goto L45e62c;
case 0x45e62d:c.instructions+=2;goto B45e62d;
case 0x45e62e:c.instructions+=1;goto B45e62e;
case 0x45e630:goto L45e630;
case 0x45e635:c.instructions+=1;goto B45e635;
case 0x45e640:goto L45e640;
case 0x45e645:c.instructions+=1;goto B45e645;
case 0x45e650:goto L45e650;
case 0x45e656:c.instructions+=8;goto B45e656;
case 0x45e657:c.instructions+=7;goto B45e657;
case 0x45e65a:c.instructions+=6;goto B45e65a;
case 0x45e65c:c.instructions+=5;goto B45e65c;
case 0x45e65f:c.instructions+=4;goto B45e65f;
case 0x45e662:c.instructions+=3;goto B45e662;
case 0x45e663:c.instructions+=2;goto B45e663;
case 0x45e666:c.instructions+=1;goto B45e666;
case 0x45e670:goto L45e670;
case 0x45e674:c.instructions+=3;goto B45e674;
case 0x45e677:c.instructions+=2;goto B45e677;
case 0x45e67a:c.instructions+=1;goto B45e67a;
case 0x45e67c:goto L45e67c;
case 0x45e67f:c.instructions+=1;goto B45e67f;
case 0x45e681:goto L45e681;
case 0x45e68b:c.instructions+=1;goto B45e68b;
case 0x45e68d:goto L45e68d;
case 0x45e693:goto L45e693;
case 0x45e696:c.instructions+=17;goto B45e696;
case 0x45e69c:c.instructions+=16;goto B45e69c;
case 0x45e6a3:c.instructions+=15;goto B45e6a3;
case 0x45e6a9:c.instructions+=14;goto B45e6a9;
case 0x45e6af:c.instructions+=13;goto B45e6af;
case 0x45e6b0:c.instructions+=12;goto B45e6b0;
case 0x45e6b6:c.instructions+=11;goto B45e6b6;
case 0x45e6b9:c.instructions+=10;goto B45e6b9;
case 0x45e6bc:c.instructions+=9;goto B45e6bc;
case 0x45e6c3:c.instructions+=8;goto B45e6c3;
case 0x45e6c6:c.instructions+=7;goto B45e6c6;
case 0x45e6c9:c.instructions+=6;goto B45e6c9;
case 0x45e6cf:c.instructions+=5;goto B45e6cf;
case 0x45e6d5:c.instructions+=4;goto B45e6d5;
case 0x45e6d8:c.instructions+=3;goto B45e6d8;
case 0x45e6db:c.instructions+=2;goto B45e6db;
case 0x45e6dc:c.instructions+=1;goto B45e6dc;
case 0x45e6de:goto L45e6de;
case 0x45e6e8:c.instructions+=1;goto B45e6e8;
case 0x45e6eb:goto L45e6eb;
case 0x45e6ee:c.instructions+=3;goto B45e6ee;
case 0x45e6f5:c.instructions+=2;goto B45e6f5;
case 0x45e6fb:c.instructions+=1;goto B45e6fb;
case 0x45e700:goto L45e700;
case 0x45e704:c.instructions+=2;goto B45e704;
case 0x45e707:c.instructions+=1;goto B45e707;
case 0x45e709:goto L45e709;
case 0x45e70a:c.instructions+=1;goto B45e70a;
case 0x45e70c:goto L45e70c;
case 0x45e70d:c.instructions+=1;goto B45e70d;
case 0x45e70f:goto L45e70f;
case 0x45e712:c.instructions+=1;goto B45e712;
case 0x45e715:goto L45e715;
case 0x45e71a:c.instructions+=1;goto B45e71a;
case 0x45e71d:goto L45e71d;
case 0x45e722:c.instructions+=1;goto B45e722;
case 0x45e725:goto L45e725;
case 0x45e72a:c.instructions+=1;goto B45e72a;
case 0x45e730:goto L45e730;
case 0x45e732:c.instructions+=14;goto B45e732;
case 0x45e738:c.instructions+=13;goto B45e738;
case 0x45e73d:c.instructions+=12;goto B45e73d;
case 0x45e73e:c.instructions+=11;goto B45e73e;
case 0x45e745:c.instructions+=10;goto B45e745;
case 0x45e748:c.instructions+=9;goto B45e748;
case 0x45e749:c.instructions+=8;goto B45e749;
case 0x45e74a:c.instructions+=7;goto B45e74a;
case 0x45e74b:c.instructions+=6;goto B45e74b;
case 0x45e74c:c.instructions+=5;goto B45e74c;
case 0x45e74e:c.instructions+=4;goto B45e74e;
case 0x45e754:c.instructions+=3;goto B45e754;
case 0x45e757:c.instructions+=2;goto B45e757;
case 0x45e75a:c.instructions+=1;goto B45e75a;
case 0x45e75c:goto L45e75c;
case 0x45e75f:c.instructions+=1;goto B45e75f;
case 0x45e761:goto L45e761;
case 0x45e764:c.instructions+=1;goto B45e764;
case 0x45e766:goto L45e766;
case 0x45e76c:c.instructions+=2;goto B45e76c;
case 0x45e76f:c.instructions+=1;goto B45e76f;
case 0x45e771:goto L45e771;
case 0x45e777:c.instructions+=1;goto B45e777;
case 0x45e77a:goto L45e77a;
case 0x45e780:c.instructions+=2;goto B45e780;
case 0x45e783:c.instructions+=1;goto B45e783;
case 0x45e788:goto L45e788;
case 0x45e78c:c.instructions+=10;goto B45e78c;
case 0x45e790:c.instructions+=9;goto B45e790;
case 0x45e796:c.instructions+=8;goto B45e796;
case 0x45e79c:c.instructions+=7;goto B45e79c;
case 0x45e7a2:c.instructions+=6;goto B45e7a2;
case 0x45e7a4:c.instructions+=5;goto B45e7a4;
case 0x45e7a8:c.instructions+=4;goto B45e7a8;
case 0x45e7ae:c.instructions+=3;goto B45e7ae;
case 0x45e7b0:c.instructions+=2;goto B45e7b0;
case 0x45e7b3:c.instructions+=1;goto B45e7b3;
case 0x45e7b5:goto L45e7b5;
case 0x45e7b9:c.instructions+=5;goto B45e7b9;
case 0x45e7bf:c.instructions+=4;goto B45e7bf;
case 0x45e7c3:c.instructions+=3;goto B45e7c3;
case 0x45e7c5:c.instructions+=2;goto B45e7c5;
case 0x45e7c8:c.instructions+=1;goto B45e7c8;
case 0x45e7ca:goto L45e7ca;
case 0x45e7cc:c.instructions+=1;goto B45e7cc;
case 0x45e7d2:goto L45e7d2;
case 0x45e7d8:c.instructions+=6;goto B45e7d8;
case 0x45e7de:c.instructions+=5;goto B45e7de;
case 0x45e7e0:c.instructions+=4;goto B45e7e0;
case 0x45e7e6:c.instructions+=3;goto B45e7e6;
case 0x45e7ec:c.instructions+=2;goto B45e7ec;
case 0x45e7f2:c.instructions+=1;goto B45e7f2;
case 0x45e7f7:goto L45e7f7;
case 0x45e7f9:c.instructions+=10;goto B45e7f9;
case 0x45e7fc:c.instructions+=9;goto B45e7fc;
case 0x45e801:c.instructions+=8;goto B45e801;
case 0x45e803:c.instructions+=7;goto B45e803;
case 0x45e805:c.instructions+=6;goto B45e805;
case 0x45e808:c.instructions+=5;goto B45e808;
case 0x45e80b:c.instructions+=4;goto B45e80b;
case 0x45e80e:c.instructions+=3;goto B45e80e;
case 0x45e810:c.instructions+=2;goto B45e810;
case 0x45e813:c.instructions+=1;goto B45e813;
case 0x45e815:goto L45e815;
case 0x45e818:c.instructions+=1;goto B45e818;
case 0x45e81a:goto L45e81a;
case 0x45e81d:c.instructions+=1;goto B45e81d;
case 0x45e81f:goto L45e81f;
case 0x45e821:c.instructions+=3;goto B45e821;
case 0x45e822:c.instructions+=2;goto B45e822;
case 0x45e824:c.instructions+=1;goto B45e824;
case 0x45e827:goto L45e827;
case 0x45e829:goto L45e829;
case 0x45e82f:c.instructions+=1;goto B45e82f;
case 0x45e831:goto L45e831;
case 0x45e833:c.instructions+=3;goto B45e833;
case 0x45e835:c.instructions+=2;goto B45e835;
case 0x45e837:c.instructions+=1;goto B45e837;
case 0x45e83a:goto L45e83a;
case 0x45e83d:c.instructions+=5;goto B45e83d;
case 0x45e843:c.instructions+=4;goto B45e843;
case 0x45e846:c.instructions+=3;goto B45e846;
case 0x45e848:c.instructions+=2;goto B45e848;
case 0x45e84c:c.instructions+=1;goto B45e84c;
case 0x45e84e:goto L45e84e;
case 0x45e850:c.instructions+=2;goto B45e850;
case 0x45e852:c.instructions+=1;goto B45e852;
case 0x45e854:goto L45e854;
case 0x45e859:goto L45e859;
case 0x45e85d:c.instructions+=2;goto B45e85d;
case 0x45e85e:c.instructions+=1;goto B45e85e;
case 0x45e863:goto L45e863;
case 0x45e866:c.instructions+=1;goto B45e866;
case 0x45e86b:goto L45e86b;
case 0x45e86f:c.instructions+=4;goto B45e86f;
case 0x45e871:c.instructions+=3;goto B45e871;
case 0x45e872:c.instructions+=2;goto B45e872;
case 0x45e873:c.instructions+=1;goto B45e873;
case 0x45e876:goto L45e876;
case 0x45e87b:goto L45e87b;
case 0x45e881:goto L45e881;
case 0x45e887:c.instructions+=3;goto B45e887;
case 0x45e88a:c.instructions+=2;goto B45e88a;
case 0x45e88d:c.instructions+=1;goto B45e88d;
case 0x45e88f:goto L45e88f;
case 0x45e892:c.instructions+=1;goto B45e892;
case 0x45e894:goto L45e894;
case 0x45e897:c.instructions+=1;goto B45e897;
case 0x45e899:goto L45e899;
case 0x45e89b:c.instructions+=1;goto B45e89b;
case 0x45e89d:goto L45e89d;
case 0x45e8a2:goto L45e8a2;
case 0x45e8a8:c.instructions+=13;goto B45e8a8;
case 0x45e8aa:c.instructions+=12;goto B45e8aa;
case 0x45e8ac:c.instructions+=11;goto B45e8ac;
case 0x45e8b2:c.instructions+=10;goto B45e8b2;
case 0x45e8b5:c.instructions+=9;goto B45e8b5;
case 0x45e8b9:c.instructions+=8;goto B45e8b9;
case 0x45e8ba:c.instructions+=7;goto B45e8ba;
case 0x45e8c4:c.instructions+=6;goto B45e8c4;
case 0x45e8c6:c.instructions+=5;goto B45e8c6;
case 0x45e8c8:c.instructions+=4;goto B45e8c8;
case 0x45e8cb:c.instructions+=3;goto B45e8cb;
case 0x45e8ce:c.instructions+=2;goto B45e8ce;
case 0x45e8d2:c.instructions+=1;goto B45e8d2;
case 0x45e8d7:goto L45e8d7;
case 0x45e8da:c.instructions+=1;goto B45e8da;
case 0x45e8df:goto L45e8df;
case 0x45e8e3:c.instructions+=8;goto B45e8e3;
case 0x45e8e7:c.instructions+=7;goto B45e8e7;
case 0x45e8e8:c.instructions+=6;goto B45e8e8;
case 0x45e8ec:c.instructions+=5;goto B45e8ec;
case 0x45e8f0:c.instructions+=4;goto B45e8f0;
case 0x45e8f4:c.instructions+=3;goto B45e8f4;
case 0x45e8f6:c.instructions+=2;goto B45e8f6;
case 0x45e8f8:c.instructions+=1;goto B45e8f8;
case 0x45e8fa:goto L45e8fa;
case 0x45e8fc:c.instructions+=1;goto B45e8fc;
case 0x45e901:goto L45e901;
case 0x45e905:c.instructions+=3;goto B45e905;
case 0x45e907:c.instructions+=2;goto B45e907;
case 0x45e90b:c.instructions+=1;goto B45e90b;
case 0x45e911:goto L45e911;
case 0x45e913:c.instructions+=3;goto B45e913;
case 0x45e914:c.instructions+=2;goto B45e914;
case 0x45e916:c.instructions+=1;goto B45e916;
case 0x45e919:goto L45e919;
case 0x45e91b:c.instructions+=2;goto B45e91b;
case 0x45e91d:c.instructions+=1;goto B45e91d;
case 0x45e91f:goto L45e91f;
case 0x45e921:c.instructions+=1;goto B45e921;
case 0x45e923:goto L45e923;
case 0x45e926:c.instructions+=1;goto B45e926;
case 0x45e928:goto L45e928;
case 0x45e92d:goto L45e92d;
case 0x45e930:c.instructions+=4;goto B45e930;
case 0x45e933:c.instructions+=3;goto B45e933;
case 0x45e937:c.instructions+=2;goto B45e937;
case 0x45e939:c.instructions+=1;goto B45e939;
case 0x45e93b:goto L45e93b;
case 0x45e93d:c.instructions+=1;goto B45e93d;
case 0x45e93f:goto L45e93f;
case 0x45e945:c.instructions+=1;goto B45e945;
case 0x45e947:goto L45e947;
case 0x45e94c:goto L45e94c;
case 0x45e94e:c.instructions+=3;goto B45e94e;
case 0x45e951:c.instructions+=2;goto B45e951;
case 0x45e958:c.instructions+=1;goto B45e958;
case 0x45e95a:goto L45e95a;
case 0x45e95c:c.instructions+=1;goto B45e95c;
case 0x45e95e:goto L45e95e;
case 0x45e963:c.instructions+=1;goto B45e963;
case 0x45e965:goto L45e965;
case 0x45e96a:goto L45e96a;
case 0x45e96d:c.instructions+=4;goto B45e96d;
case 0x45e971:c.instructions+=3;goto B45e971;
case 0x45e973:c.instructions+=2;goto B45e973;
case 0x45e976:c.instructions+=1;goto B45e976;
case 0x45e978:goto L45e978;
case 0x45e97a:c.instructions+=1;goto B45e97a;
case 0x45e97c:goto L45e97c;
case 0x45e97f:c.instructions+=1;goto B45e97f;
case 0x45e981:goto L45e981;
case 0x45e986:goto L45e986;
case 0x45e987:c.instructions+=4;goto B45e987;
case 0x45e988:c.instructions+=3;goto B45e988;
case 0x45e98d:c.instructions+=2;goto B45e98d;
case 0x45e990:c.instructions+=1;goto B45e990;
case 0x45e995:goto L45e995;
case 0x45e998:c.instructions+=2;goto B45e998;
case 0x45e99a:c.instructions+=1;goto B45e99a;
case 0x45e99c:goto L45e99c;
case 0x45e9a1:c.instructions+=2;goto B45e9a1;
case 0x45e9a6:c.instructions+=1;goto B45e9a6;
case 0x45e9ab:goto L45e9ab;
case 0x45e9ac:c.instructions+=3;goto B45e9ac;
case 0x45e9ad:c.instructions+=2;goto B45e9ad;
case 0x45e9b2:c.instructions+=1;goto B45e9b2;
case 0x45e9b7:goto L45e9b7;
case 0x45e9ba:goto L45e9ba;
case 0x45e9c0:c.instructions+=8;goto B45e9c0;
case 0x45e9c1:c.instructions+=7;goto B45e9c1;
case 0x45e9c2:c.instructions+=6;goto B45e9c2;
case 0x45e9c3:c.instructions+=5;goto B45e9c3;
case 0x45e9c4:c.instructions+=4;goto B45e9c4;
case 0x45e9c8:c.instructions+=3;goto B45e9c8;
case 0x45e9cf:c.instructions+=2;goto B45e9cf;
case 0x45e9d2:c.instructions+=1;goto B45e9d2;
case 0x45e9d3:goto L45e9d3;
case 0x45e9d7:c.instructions+=8;goto B45e9d7;
case 0x45e9dd:c.instructions+=7;goto B45e9dd;
case 0x45e9de:c.instructions+=6;goto B45e9de;
case 0x45e9df:c.instructions+=5;goto B45e9df;
case 0x45e9e0:c.instructions+=4;goto B45e9e0;
case 0x45e9e1:c.instructions+=3;goto B45e9e1;
case 0x45e9e8:c.instructions+=2;goto B45e9e8;
case 0x45e9eb:c.instructions+=1;goto B45e9eb;
case 0x45e9f0:goto L45e9f0;
case 0x45e9f5:c.instructions+=7;goto B45e9f5;
case 0x45e9f6:c.instructions+=6;goto B45e9f6;
case 0x45e9f7:c.instructions+=5;goto B45e9f7;
case 0x45e9f9:c.instructions+=4;goto B45e9f9;
case 0x45e9fc:c.instructions+=3;goto B45e9fc;
case 0x45e9fe:c.instructions+=2;goto B45e9fe;
case 0x45ea00:c.instructions+=1;goto B45ea00;
case 0x45ea06:goto L45ea06;
case 0x45ea0c:c.instructions+=2;goto B45ea0c;
case 0x45ea0e:c.instructions+=1;goto B45ea0e;
case 0x45ea10:goto L45ea10;
case 0x45ea13:c.instructions+=4;goto B45ea13;
case 0x45ea19:c.instructions+=3;goto B45ea19;
case 0x45ea1b:c.instructions+=2;goto B45ea1b;
case 0x45ea1d:c.instructions+=1;goto B45ea1d;
case 0x45ea1f:goto L45ea1f;
case 0x45ea22:c.instructions+=2;goto B45ea22;
case 0x45ea23:c.instructions+=1;goto B45ea23;
case 0x45ea28:goto L45ea28;
case 0x45ea2e:c.instructions+=2;goto B45ea2e;
case 0x45ea30:c.instructions+=1;goto B45ea30;
case 0x45ea32:goto L45ea32;
case 0x45ea35:c.instructions+=4;goto B45ea35;
case 0x45ea3b:c.instructions+=3;goto B45ea3b;
case 0x45ea3d:c.instructions+=2;goto B45ea3d;
case 0x45ea3f:c.instructions+=1;goto B45ea3f;
case 0x45ea41:goto L45ea41;
case 0x45ea44:c.instructions+=2;goto B45ea44;
case 0x45ea45:c.instructions+=1;goto B45ea45;
case 0x45ea4a:goto L45ea4a;
case 0x45ea50:c.instructions+=2;goto B45ea50;
case 0x45ea52:c.instructions+=1;goto B45ea52;
case 0x45ea54:goto L45ea54;
case 0x45ea57:c.instructions+=4;goto B45ea57;
case 0x45ea5d:c.instructions+=3;goto B45ea5d;
case 0x45ea5f:c.instructions+=2;goto B45ea5f;
case 0x45ea61:c.instructions+=1;goto B45ea61;
case 0x45ea63:goto L45ea63;
case 0x45ea66:c.instructions+=2;goto B45ea66;
case 0x45ea67:c.instructions+=1;goto B45ea67;
case 0x45ea6c:goto L45ea6c;
case 0x45ea72:c.instructions+=2;goto B45ea72;
case 0x45ea74:c.instructions+=1;goto B45ea74;
case 0x45ea76:goto L45ea76;
case 0x45ea79:c.instructions+=4;goto B45ea79;
case 0x45ea7f:c.instructions+=3;goto B45ea7f;
case 0x45ea81:c.instructions+=2;goto B45ea81;
case 0x45ea83:c.instructions+=1;goto B45ea83;
case 0x45ea85:goto L45ea85;
case 0x45ea88:c.instructions+=2;goto B45ea88;
case 0x45ea89:c.instructions+=1;goto B45ea89;
case 0x45ea8e:goto L45ea8e;
case 0x45ea94:c.instructions+=2;goto B45ea94;
case 0x45ea96:c.instructions+=1;goto B45ea96;
case 0x45ea98:goto L45ea98;
case 0x45ea9b:c.instructions+=4;goto B45ea9b;
case 0x45eaa1:c.instructions+=3;goto B45eaa1;
case 0x45eaa3:c.instructions+=2;goto B45eaa3;
case 0x45eaa5:c.instructions+=1;goto B45eaa5;
case 0x45eaa7:goto L45eaa7;
case 0x45eaaa:c.instructions+=2;goto B45eaaa;
case 0x45eaab:c.instructions+=1;goto B45eaab;
case 0x45eab0:goto L45eab0;
case 0x45eab1:c.instructions+=2;goto B45eab1;
case 0x45eab2:c.instructions+=1;goto B45eab2;
case 0x45eac0:goto L45eac0;
case 0x45eac5:c.instructions+=1;goto B45eac5;
case 0x45ead0:goto L45ead0;
case 0x45ead5:c.instructions+=1;goto B45ead5;
case 0x45eae0:goto L45eae0;
case 0x45eae4:c.instructions+=2;goto B45eae4;
case 0x45eae7:c.instructions+=1;goto B45eae7;
case 0x45eae9:goto L45eae9;
case 0x45eaea:c.instructions+=1;goto B45eaea;
case 0x45eaec:goto L45eaec;
case 0x45eaed:c.instructions+=1;goto B45eaed;
case 0x45eaef:goto L45eaef;
case 0x45eaf2:c.instructions+=1;goto B45eaf2;
case 0x45eaf5:goto L45eaf5;
case 0x45eafa:c.instructions+=1;goto B45eafa;
case 0x45eafd:goto L45eafd;
case 0x45eb02:c.instructions+=1;goto B45eb02;
case 0x45eb05:goto L45eb05;
case 0x45eb0a:c.instructions+=1;goto B45eb0a;
case 0x45eb10:goto L45eb10;
case 0x45eb15:c.instructions+=2;goto B45eb15;
case 0x45eb17:c.instructions+=1;goto B45eb17;
case 0x45eb19:goto L45eb19;
case 0x45eb1c:c.instructions+=1;goto B45eb1c;
case 0x45eb1e:goto L45eb1e;
case 0x45eb22:c.instructions+=1;goto B45eb22;
case 0x45eb28:goto L45eb28;
case 0x45eb30:goto L45eb30;
case 0x45eb34:c.instructions+=5;goto B45eb34;
case 0x45eb35:c.instructions+=4;goto B45eb35;
case 0x45eb37:c.instructions+=3;goto B45eb37;
case 0x45eb3a:c.instructions+=2;goto B45eb3a;
case 0x45eb3d:c.instructions+=1;goto B45eb3d;
case 0x45eb3f:goto L45eb3f;
case 0x45eb42:c.instructions+=1;goto B45eb42;
case 0x45eb44:goto L45eb44;
case 0x45eb4e:c.instructions+=1;goto B45eb4e;
case 0x45eb50:goto L45eb50;
case 0x45eb56:goto L45eb56;
case 0x45eb5c:c.instructions+=4;goto B45eb5c;
case 0x45eb5f:c.instructions+=3;goto B45eb5f;
case 0x45eb66:c.instructions+=2;goto B45eb66;
case 0x45eb68:c.instructions+=1;goto B45eb68;
case 0x45eb6b:goto L45eb6b;
case 0x45eb6d:c.instructions+=1;goto B45eb6d;
case 0x45eb6f:goto L45eb6f;
case 0x45eb71:c.instructions+=2;goto B45eb71;
case 0x45eb77:c.instructions+=1;goto B45eb77;
case 0x45eb7c:goto L45eb7c;
case 0x45eb82:goto L45eb82;
case 0x45eb88:c.instructions+=11;goto B45eb88;
case 0x45eb8e:c.instructions+=10;goto B45eb8e;
case 0x45eb94:c.instructions+=9;goto B45eb94;
case 0x45eb97:c.instructions+=8;goto B45eb97;
case 0x45eb9a:c.instructions+=7;goto B45eb9a;
case 0x45eba1:c.instructions+=6;goto B45eba1;
case 0x45eba4:c.instructions+=5;goto B45eba4;
case 0x45ebab:c.instructions+=4;goto B45ebab;
case 0x45ebb1:c.instructions+=3;goto B45ebb1;
case 0x45ebbb:c.instructions+=2;goto B45ebbb;
case 0x45ebbc:c.instructions+=1;goto B45ebbc;
case 0x45ebc0:goto L45ebc0;
case 0x45ebc1:c.instructions+=7;goto B45ebc1;
case 0x45ebc2:c.instructions+=6;goto B45ebc2;
case 0x45ebc4:c.instructions+=5;goto B45ebc4;
case 0x45ebc7:c.instructions+=4;goto B45ebc7;
case 0x45ebca:c.instructions+=3;goto B45ebca;
case 0x45ebcd:c.instructions+=2;goto B45ebcd;
case 0x45ebd3:c.instructions+=1;goto B45ebd3;
case 0x45ebd8:goto L45ebd8;
case 0x45ebde:c.instructions+=7;goto B45ebde;
case 0x45ebe0:c.instructions+=6;goto B45ebe0;
case 0x45ebe6:c.instructions+=5;goto B45ebe6;
case 0x45ebec:c.instructions+=4;goto B45ebec;
case 0x45ebf2:c.instructions+=3;goto B45ebf2;
case 0x45ebf4:c.instructions+=2;goto B45ebf4;
case 0x45ebf7:c.instructions+=1;goto B45ebf7;
case 0x45ebf9:goto L45ebf9;
case 0x45ebff:c.instructions+=3;goto B45ebff;
case 0x45ec00:c.instructions+=2;goto B45ec00;
case 0x45ec01:c.instructions+=1;goto B45ec01;
case 0x45ec02:goto L45ec02;
case 0x45ec03:c.instructions+=2;goto B45ec03;
case 0x45ec09:c.instructions+=1;goto B45ec09;
case 0x45ec0e:goto L45ec0e;
case 0x45ec14:c.instructions+=11;goto B45ec14;
case 0x45ec1a:c.instructions+=10;goto B45ec1a;
case 0x45ec20:c.instructions+=9;goto B45ec20;
case 0x45ec26:c.instructions+=8;goto B45ec26;
case 0x45ec2c:c.instructions+=7;goto B45ec2c;
case 0x45ec32:c.instructions+=6;goto B45ec32;
case 0x45ec38:c.instructions+=5;goto B45ec38;
case 0x45ec3e:c.instructions+=4;goto B45ec3e;
case 0x45ec40:c.instructions+=3;goto B45ec40;
case 0x45ec41:c.instructions+=2;goto B45ec41;
case 0x45ec42:c.instructions+=1;goto B45ec42;
case 0x45ec50:goto L45ec50;
case 0x45ec51:c.instructions+=6;goto B45ec51;
case 0x45ec52:c.instructions+=5;goto B45ec52;
case 0x45ec54:c.instructions+=4;goto B45ec54;
case 0x45ec55:c.instructions+=3;goto B45ec55;
case 0x45ec5b:c.instructions+=2;goto B45ec5b;
case 0x45ec5d:c.instructions+=1;goto B45ec5d;
case 0x45ec5f:goto L45ec5f;
case 0x45ec61:c.instructions+=2;goto B45ec61;
case 0x45ec63:c.instructions+=1;goto B45ec63;
case 0x45ec65:goto L45ec65;
case 0x45ec6a:goto L45ec6a;
case 0x45ec6e:c.instructions+=2;goto B45ec6e;
case 0x45ec6f:c.instructions+=1;goto B45ec6f;
case 0x45ec74:goto L45ec74;
case 0x45ec77:c.instructions+=1;goto B45ec77;
case 0x45ec7c:goto L45ec7c;
case 0x45ec80:c.instructions+=4;goto B45ec80;
case 0x45ec82:c.instructions+=3;goto B45ec82;
case 0x45ec84:c.instructions+=2;goto B45ec84;
case 0x45ec85:c.instructions+=1;goto B45ec85;
case 0x45ec88:goto L45ec88;
case 0x45ec8d:goto L45ec8d;
case 0x45ec97:goto L45ec97;
case 0x45ec9d:c.instructions+=2;goto B45ec9d;
case 0x45ec9f:c.instructions+=1;goto B45ec9f;
case 0x45eca1:goto L45eca1;
case 0x45eca3:c.instructions+=2;goto B45eca3;
case 0x45eca5:c.instructions+=1;goto B45eca5;
case 0x45eca7:goto L45eca7;
case 0x45ecac:goto L45ecac;
case 0x45ecb0:c.instructions+=2;goto B45ecb0;
case 0x45ecb1:c.instructions+=1;goto B45ecb1;
case 0x45ecb6:goto L45ecb6;
case 0x45ecb9:c.instructions+=1;goto B45ecb9;
case 0x45ecbe:goto L45ecbe;
case 0x45ecc2:c.instructions+=4;goto B45ecc2;
case 0x45ecc4:c.instructions+=3;goto B45ecc4;
case 0x45ecc6:c.instructions+=2;goto B45ecc6;
case 0x45ecc7:c.instructions+=1;goto B45ecc7;
case 0x45ecca:goto L45ecca;
case 0x45eccf:goto L45eccf;
case 0x45ecd9:goto L45ecd9;
case 0x45ecda:c.instructions+=3;goto B45ecda;
case 0x45ecdb:c.instructions+=2;goto B45ecdb;
case 0x45ecdc:c.instructions+=1;goto B45ecdc;
case 0x45ece0:goto L45ece0;
case 0x45ece1:c.instructions+=6;goto B45ece1;
case 0x45ece2:c.instructions+=5;goto B45ece2;
case 0x45ece4:c.instructions+=4;goto B45ece4;
case 0x45ecea:c.instructions+=3;goto B45ecea;
case 0x45ecec:c.instructions+=2;goto B45ecec;
case 0x45eced:c.instructions+=1;goto B45eced;
case 0x45ecef:goto L45ecef;
case 0x45ecf6:c.instructions+=2;goto B45ecf6;
case 0x45ecf8:c.instructions+=1;goto B45ecf8;
case 0x45ecfa:goto L45ecfa;
case 0x45ecfc:c.instructions+=1;goto B45ecfc;
case 0x45ecff:goto L45ecff;
case 0x45ed01:c.instructions+=1;goto B45ed01;
case 0x45ed03:goto L45ed03;
case 0x45ed05:c.instructions+=1;goto B45ed05;
case 0x45ed08:goto L45ed08;
case 0x45ed0a:goto L45ed0a;
case 0x45ed0c:c.instructions+=3;goto B45ed0c;
case 0x45ed0e:c.instructions+=2;goto B45ed0e;
case 0x45ed10:c.instructions+=1;goto B45ed10;
case 0x45ed13:goto L45ed13;
case 0x45ed19:c.instructions+=6;goto B45ed19;
case 0x45ed1c:c.instructions+=5;goto B45ed1c;
case 0x45ed1f:c.instructions+=4;goto B45ed1f;
case 0x45ed23:c.instructions+=3;goto B45ed23;
case 0x45ed27:c.instructions+=2;goto B45ed27;
case 0x45ed2d:c.instructions+=1;goto B45ed2d;
case 0x45ed32:goto L45ed32;
case 0x45ed34:c.instructions+=2;goto B45ed34;
case 0x45ed3a:c.instructions+=1;goto B45ed3a;
case 0x45ed3c:goto L45ed3c;
case 0x45ed3e:c.instructions+=1;goto B45ed3e;
case 0x45ed40:goto L45ed40;
case 0x45ed45:c.instructions+=1;goto B45ed45;
case 0x45ed47:goto L45ed47;
case 0x45ed4c:goto L45ed4c;
case 0x45ed4f:c.instructions+=4;goto B45ed4f;
case 0x45ed55:c.instructions+=3;goto B45ed55;
case 0x45ed57:c.instructions+=2;goto B45ed57;
case 0x45ed59:c.instructions+=1;goto B45ed59;
case 0x45ed5b:goto L45ed5b;
case 0x45ed5e:c.instructions+=2;goto B45ed5e;
case 0x45ed5f:c.instructions+=1;goto B45ed5f;
case 0x45ed64:goto L45ed64;
case 0x45ed6a:c.instructions+=2;goto B45ed6a;
case 0x45ed6c:c.instructions+=1;goto B45ed6c;
case 0x45ed72:goto L45ed72;
case 0x45ed74:c.instructions+=3;goto B45ed74;
case 0x45ed76:c.instructions+=2;goto B45ed76;
case 0x45ed78:c.instructions+=1;goto B45ed78;
case 0x45ed7b:goto L45ed7b;
case 0x45ed7d:c.instructions+=4;goto B45ed7d;
case 0x45ed7f:c.instructions+=3;goto B45ed7f;
case 0x45ed81:c.instructions+=2;goto B45ed81;
case 0x45ed83:c.instructions+=1;goto B45ed83;
case 0x45ed86:goto L45ed86;
case 0x45ed8c:c.instructions+=5;goto B45ed8c;
case 0x45ed8f:c.instructions+=4;goto B45ed8f;
case 0x45ed95:c.instructions+=3;goto B45ed95;
case 0x45ed98:c.instructions+=2;goto B45ed98;
case 0x45ed9a:c.instructions+=1;goto B45ed9a;
case 0x45ed9c:goto L45ed9c;
case 0x45ed9e:c.instructions+=1;goto B45ed9e;
case 0x45eda0:goto L45eda0;
case 0x45eda6:c.instructions+=1;goto B45eda6;
case 0x45eda8:goto L45eda8;
case 0x45edad:goto L45edad;
case 0x45edb0:c.instructions+=3;goto B45edb0;
case 0x45edb6:c.instructions+=2;goto B45edb6;
case 0x45edbc:c.instructions+=1;goto B45edbc;
case 0x45edc1:goto L45edc1;
case 0x45edc3:c.instructions+=2;goto B45edc3;
case 0x45edc9:c.instructions+=1;goto B45edc9;
case 0x45edcb:goto L45edcb;
case 0x45edcd:c.instructions+=1;goto B45edcd;
case 0x45edcf:goto L45edcf;
case 0x45edd4:c.instructions+=1;goto B45edd4;
case 0x45edd6:goto L45edd6;
case 0x45eddb:goto L45eddb;
case 0x45eddd:c.instructions+=4;goto B45eddd;
case 0x45ede0:c.instructions+=3;goto B45ede0;
case 0x45ede6:c.instructions+=2;goto B45ede6;
case 0x45ede8:c.instructions+=1;goto B45ede8;
case 0x45edea:goto L45edea;
case 0x45edec:c.instructions+=1;goto B45edec;
case 0x45edee:goto L45edee;
case 0x45edf4:c.instructions+=1;goto B45edf4;
case 0x45edf6:goto L45edf6;
case 0x45edfb:goto L45edfb;
case 0x45edfe:c.instructions+=5;goto B45edfe;
case 0x45ee04:c.instructions+=4;goto B45ee04;
case 0x45ee0a:c.instructions+=3;goto B45ee0a;
case 0x45ee0c:c.instructions+=2;goto B45ee0c;
case 0x45ee12:c.instructions+=1;goto B45ee12;
case 0x45ee14:goto L45ee14;
case 0x45ee16:c.instructions+=1;goto B45ee16;
case 0x45ee18:goto L45ee18;
case 0x45ee1d:c.instructions+=1;goto B45ee1d;
case 0x45ee1f:goto L45ee1f;
case 0x45ee24:goto L45ee24;
case 0x45ee27:c.instructions+=3;goto B45ee27;
case 0x45ee2d:c.instructions+=2;goto B45ee2d;
case 0x45ee30:c.instructions+=1;goto B45ee30;
case 0x45ee35:goto L45ee35;
case 0x45ee37:c.instructions+=2;goto B45ee37;
case 0x45ee3d:c.instructions+=1;goto B45ee3d;
case 0x45ee3f:goto L45ee3f;
case 0x45ee41:c.instructions+=1;goto B45ee41;
case 0x45ee43:goto L45ee43;
case 0x45ee48:c.instructions+=1;goto B45ee48;
case 0x45ee4a:goto L45ee4a;
case 0x45ee4f:goto L45ee4f;
case 0x45ee52:c.instructions+=4;goto B45ee52;
case 0x45ee58:c.instructions+=3;goto B45ee58;
case 0x45ee5a:c.instructions+=2;goto B45ee5a;
case 0x45ee5c:c.instructions+=1;goto B45ee5c;
case 0x45ee5e:goto L45ee5e;
case 0x45ee61:c.instructions+=2;goto B45ee61;
case 0x45ee62:c.instructions+=1;goto B45ee62;
case 0x45ee67:goto L45ee67;
case 0x45ee68:c.instructions+=3;goto B45ee68;
case 0x45ee69:c.instructions+=2;goto B45ee69;
case 0x45ee6a:c.instructions+=1;goto B45ee6a;
case 0x45ee70:goto L45ee70;
case 0x45ee72:c.instructions+=10;goto B45ee72;
case 0x45ee77:c.instructions+=9;goto B45ee77;
case 0x45ee7d:c.instructions+=8;goto B45ee7d;
case 0x45ee7e:c.instructions+=7;goto B45ee7e;
case 0x45ee85:c.instructions+=6;goto B45ee85;
case 0x45ee86:c.instructions+=5;goto B45ee86;
case 0x45ee87:c.instructions+=4;goto B45ee87;
case 0x45ee89:c.instructions+=3;goto B45ee89;
case 0x45ee8f:c.instructions+=2;goto B45ee8f;
case 0x45ee91:c.instructions+=1;goto B45ee91;
case 0x45ee97:goto L45ee97;
case 0x45ee9e:c.instructions+=1;goto B45ee9e;
case 0x45eea4:goto L45eea4;
case 0x45eeaa:c.instructions+=2;goto B45eeaa;
case 0x45eeac:c.instructions+=1;goto B45eeac;
case 0x45eeb2:goto L45eeb2;
case 0x45eeb8:c.instructions+=5;goto B45eeb8;
case 0x45eec2:c.instructions+=4;goto B45eec2;
case 0x45eec8:c.instructions+=3;goto B45eec8;
case 0x45eeca:c.instructions+=2;goto B45eeca;
case 0x45eecd:c.instructions+=1;goto B45eecd;
case 0x45eecf:goto L45eecf;
case 0x45eed1:c.instructions+=1;goto B45eed1;
case 0x45eed6:goto L45eed6;
case 0x45eed9:c.instructions+=2;goto B45eed9;
case 0x45eedc:c.instructions+=1;goto B45eedc;
case 0x45eee2:goto L45eee2;
case 0x45eee9:c.instructions+=1;goto B45eee9;
case 0x45eeeb:goto L45eeeb;
case 0x45eef1:c.instructions+=2;goto B45eef1;
case 0x45eef4:c.instructions+=1;goto B45eef4;
case 0x45eef6:goto L45eef6;
case 0x45eefc:c.instructions+=1;goto B45eefc;
case 0x45eeff:goto L45eeff;
case 0x45ef05:c.instructions+=1;goto B45ef05;
case 0x45ef0a:goto L45ef0a;
case 0x45ef0b:c.instructions+=4;goto B45ef0b;
case 0x45ef11:c.instructions+=3;goto B45ef11;
case 0x45ef13:c.instructions+=2;goto B45ef13;
case 0x45ef1d:c.instructions+=1;goto B45ef1d;
case 0x45ef22:goto L45ef22;
case 0x45ef24:c.instructions+=5;goto B45ef24;
case 0x45ef27:c.instructions+=4;goto B45ef27;
case 0x45ef2b:c.instructions+=3;goto B45ef2b;
case 0x45ef2d:c.instructions+=2;goto B45ef2d;
case 0x45ef35:c.instructions+=1;goto B45ef35;
case 0x45ef37:goto L45ef37;
case 0x45ef3d:c.instructions+=2;goto B45ef3d;
case 0x45ef40:c.instructions+=1;goto B45ef40;
case 0x45ef45:goto L45ef45;
case 0x45ef4b:c.instructions+=6;goto B45ef4b;
case 0x45ef51:c.instructions+=5;goto B45ef51;
case 0x45ef52:c.instructions+=4;goto B45ef52;
case 0x45ef56:c.instructions+=3;goto B45ef56;
case 0x45ef57:c.instructions+=2;goto B45ef57;
case 0x45ef59:c.instructions+=1;goto B45ef59;
case 0x45ef5e:goto L45ef5e;
case 0x45ef64:c.instructions+=5;goto B45ef64;
case 0x45ef65:c.instructions+=4;goto B45ef65;
case 0x45ef67:c.instructions+=3;goto B45ef67;
case 0x45ef68:c.instructions+=2;goto B45ef68;
case 0x45ef6a:c.instructions+=1;goto B45ef6a;
case 0x45ef6f:goto L45ef6f;
case 0x45ef71:goto L45ef71;
case 0x45ef73:goto L45ef73;
case 0x45ef79:c.instructions+=6;goto B45ef79;
case 0x45ef7b:c.instructions+=5;goto B45ef7b;
case 0x45ef7d:c.instructions+=4;goto B45ef7d;
case 0x45ef85:c.instructions+=3;goto B45ef85;
case 0x45ef8d:c.instructions+=2;goto B45ef8d;
case 0x45ef8e:c.instructions+=1;goto B45ef8e;
case 0x45ef90:goto L45ef90;
case 0x45ef94:c.instructions+=3;goto B45ef94;
case 0x45ef95:c.instructions+=2;goto B45ef95;
case 0x45ef97:c.instructions+=1;goto B45ef97;
case 0x45ef9c:goto L45ef9c;
case 0x45efa1:c.instructions+=10;goto B45efa1;
case 0x45efa7:c.instructions+=9;goto B45efa7;
case 0x45efa9:c.instructions+=8;goto B45efa9;
case 0x45efab:c.instructions+=7;goto B45efab;
case 0x45efaf:c.instructions+=6;goto B45efaf;
case 0x45efb2:c.instructions+=5;goto B45efb2;
case 0x45efb7:c.instructions+=4;goto B45efb7;
case 0x45efbd:c.instructions+=3;goto B45efbd;
case 0x45efc2:c.instructions+=2;goto B45efc2;
case 0x45efc8:c.instructions+=1;goto B45efc8;
case 0x45efcd:goto L45efcd;
case 0x45efd1:c.instructions+=5;goto B45efd1;
case 0x45efd3:c.instructions+=4;goto B45efd3;
case 0x45efd4:c.instructions+=3;goto B45efd4;
case 0x45efdb:c.instructions+=2;goto B45efdb;
case 0x45efde:c.instructions+=1;goto B45efde;
case 0x45eff0:goto L45eff0;
case 0x45eff1:c.instructions+=5;goto B45eff1;
case 0x45eff2:c.instructions+=4;goto B45eff2;
case 0x45eff4:c.instructions+=3;goto B45eff4;
case 0x45effa:c.instructions+=2;goto B45effa;
case 0x45effc:c.instructions+=1;goto B45effc;
case 0x45effe:goto L45effe;
default:missing_instruction(c.pc);}
B45e004:L45e004:{c.instructions+=9;NFSU2_TR(0x45e004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45e00a:{NFSU2_TR(0x45e00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e00d:{NFSU2_TR(0x45e00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82bedcull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45e014:{NFSU2_TR(0x45e014);
__builtin_memmove(gp(0x82bb7c),(R+0),4);
}
B45e019:{NFSU2_TR(0x45e019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e01f:{NFSU2_TR(0x45e01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82c6c4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45e026:{NFSU2_TR(0x45e026);
__builtin_memmove((R+4),(R+24),4);
}
B45e028:{NFSU2_TR(0x45e028);
__builtin_memmove(gp(0x82bb78),(R+8),4);
}
B45e02e:{NFSU2_TR(0x45e02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e033ull));
TAIL_STATIC(0x45de60u,45d);
}
B45e033:L45e033:{c.instructions+=5;NFSU2_TR(0x45e033);
w4(R+0,u32(m2(0x82bb80)));
}
B45e03a:{NFSU2_TR(0x45e03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e03d:{NFSU2_TR(0x45e03d);
__builtin_memmove((R+4),gp(0x82bb7c),4);
}
B45e043:{NFSU2_TR(0x45e043);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e044:{NFSU2_TR(0x45e044);
{goto L45e0b6;}
}
B45e046:L45e046:{c.instructions+=7;NFSU2_TR(0x45e046);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82c670ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45e04d:{NFSU2_TR(0x45e04d);
__builtin_memmove(gp(0x82bb7c),(R+8),4);
}
B45e053:{NFSU2_TR(0x45e053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e059:{NFSU2_TR(0x45e059);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82be70ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45e060:{NFSU2_TR(0x45e060);
__builtin_memmove(gp(0x82bb78),(R+4),4);
}
B45e066:{NFSU2_TR(0x45e066);
__builtin_memmove((R+4),(R+24),4);
}
B45e068:{NFSU2_TR(0x45e068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e06dull));
TAIL_STATIC(0x45de60u,45d);
}
B45e06d:L45e06d:{c.instructions+=5;NFSU2_TR(0x45e06d);
w4(R+8,u32(m2(0x82bb80)));
}
B45e074:{NFSU2_TR(0x45e074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e077:{NFSU2_TR(0x45e077);
__builtin_memmove((R+0),gp(0x82bb7c),4);
}
B45e07c:{NFSU2_TR(0x45e07c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e07d:{NFSU2_TR(0x45e07d);
{goto L45e0b6;}
}
B45e07f:L45e07f:{c.instructions+=7;NFSU2_TR(0x45e07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82c670ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45e086:{NFSU2_TR(0x45e086);
__builtin_memmove(gp(0x82bb7c),(R+4),4);
}
B45e08c:{NFSU2_TR(0x45e08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45e092:{NFSU2_TR(0x45e092);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82be70ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45e099:{NFSU2_TR(0x45e099);
__builtin_memmove((R+4),(R+24),4);
}
B45e09b:{NFSU2_TR(0x45e09b);
__builtin_memmove(gp(0x82bb78),(R+0),4);
}
B45e0a0:{NFSU2_TR(0x45e0a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e0a5ull));
TAIL_STATIC(0x45de60u,45d);
}
B45e0a5:L45e0a5:{c.instructions+=4;NFSU2_TR(0x45e0a5);
w4(R+4,u32(m2(0x82bb80)));
}
B45e0ac:{NFSU2_TR(0x45e0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0af:{NFSU2_TR(0x45e0af);
__builtin_memmove((R+8),gp(0x82bb7c),4);
}
B45e0b5:{NFSU2_TR(0x45e0b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e0b6:L45e0b6:{c.instructions+=2;NFSU2_TR(0x45e0b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e0b7:{NFSU2_TR(0x45e0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e0bcull));
TAIL_STATIC(0x401150u,401);
}
B45e0bc:L45e0bc:{c.instructions+=2;NFSU2_TR(0x45e0bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45e0bf:{NFSU2_TR(0x45e0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e0c4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45e0c4:L45e0c4:{c.instructions+=4;NFSU2_TR(0x45e0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0c7:{NFSU2_TR(0x45e0c7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B45e0ca:{NFSU2_TR(0x45e0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e0cb:{NFSU2_TR(0x45e0cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e0e8;}}
}
B45e0cd:L45e0cd:{c.instructions+=6;NFSU2_TR(0x45e0cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0d0:{NFSU2_TR(0x45e0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0d3:{NFSU2_TR(0x45e0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0d6:{NFSU2_TR(0x45e0d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e0d7:{NFSU2_TR(0x45e0d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45e0d8:{NFSU2_TR(0x45e0d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e0d9:L45e0d9:{c.instructions+=5;NFSU2_TR(0x45e0d9);
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
B45e0dc:{NFSU2_TR(0x45e0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0df:{NFSU2_TR(0x45e0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0e2:{NFSU2_TR(0x45e0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0e5:{NFSU2_TR(0x45e0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e0e8:L45e0e8:{c.instructions+=3;NFSU2_TR(0x45e0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e0e9:{NFSU2_TR(0x45e0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45e0ea:{NFSU2_TR(0x45e0ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e100:L45e100:{c.instructions+=4;NFSU2_TR(0x45e100);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e103:{NFSU2_TR(0x45e103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B45e106:{NFSU2_TR(0x45e106);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e108:{NFSU2_TR(0x45e108);
if(r1(R+518)){{goto L45e1c6;}}
}
B45e10e:L45e10e:{c.instructions+=6;NFSU2_TR(0x45e10e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e112:{NFSU2_TR(0x45e112);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e118:{NFSU2_TR(0x45e118);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B45e11e:{NFSU2_TR(0x45e11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e124:{NFSU2_TR(0x45e124);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e126:{NFSU2_TR(0x45e126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e147;}}
}
B45e128:L45e128:{c.instructions+=1;NFSU2_TR(0x45e128);
s4(0x82bc14,u32(0x0ull));
}
B45e132:L45e132:{c.instructions+=2;NFSU2_TR(0x45e132);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e13c:{NFSU2_TR(0x45e13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e141ull));
TAIL_STATIC(0x45df00u,45d);
}
B45e141:L45e141:{c.instructions+=2;NFSU2_TR(0x45e141);
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
B45e144:{NFSU2_TR(0x45e144);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e147:L45e147:{c.instructions+=34;NFSU2_TR(0x45e147);
w4(R+8,u32(0x1ull));
}
B45e14c:{NFSU2_TR(0x45e14c);
__builtin_memmove(gp(0x82bc14),(R+8),4);
}
B45e152:{NFSU2_TR(0x45e152);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e155:{NFSU2_TR(0x45e155);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e157:{NFSU2_TR(0x45e157);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e15a:{NFSU2_TR(0x45e15a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B45e15c:{NFSU2_TR(0x45e15c);
{u32 ea_=u32(u32(8568540u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e162:{NFSU2_TR(0x45e162);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45e166:{NFSU2_TR(0x45e166);
{u32 ea_=u32(u32(8568544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e16c:{NFSU2_TR(0x45e16c);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B45e16e:{NFSU2_TR(0x45e16e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45e172:{NFSU2_TR(0x45e172);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45e174:{NFSU2_TR(0x45e174);
{u32 ea_=u32(u32(8568548u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e17a:{NFSU2_TR(0x45e17a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45e17e:{NFSU2_TR(0x45e17e);
{u32 ea_=u32(u32(8568552u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e184:{NFSU2_TR(0x45e184);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e188:{NFSU2_TR(0x45e188);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45e18c:{NFSU2_TR(0x45e18c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e190:{NFSU2_TR(0x45e190);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45e194:{NFSU2_TR(0x45e194);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45e196:{NFSU2_TR(0x45e196);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B45e198:{NFSU2_TR(0x45e198);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B45e19a:{NFSU2_TR(0x45e19a);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B45e19c:{NFSU2_TR(0x45e19c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e1a0:{NFSU2_TR(0x45e1a0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45e1a4:{NFSU2_TR(0x45e1a4);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B45e1a6:{NFSU2_TR(0x45e1a6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45e1a8:{NFSU2_TR(0x45e1a8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B45e1aa:{NFSU2_TR(0x45e1aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45e1ac:{NFSU2_TR(0x45e1ac);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45e1ae:{NFSU2_TR(0x45e1ae);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B45e1b0:{NFSU2_TR(0x45e1b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e1b2:{NFSU2_TR(0x45e1b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45e1b5:{NFSU2_TR(0x45e1b5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45e132u);}goto L45e132;}}
}
B45e1bb:L45e1bb:{c.instructions+=2;NFSU2_TR(0x45e1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e1c1:{NFSU2_TR(0x45e1c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e1c6ull));
TAIL_STATIC(0x45df00u,45d);
}
B45e1c6:L45e1c6:{c.instructions+=2;NFSU2_TR(0x45e1c6);
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
B45e1c9:{NFSU2_TR(0x45e1c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e1d0:L45e1d0:{c.instructions+=3;NFSU2_TR(0x45e1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e1d4:{NFSU2_TR(0x45e1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e1d7:{NFSU2_TR(0x45e1d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e1e0:L45e1e0:{c.instructions+=3;NFSU2_TR(0x45e1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e1e4:{NFSU2_TR(0x45e1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e1e7:{NFSU2_TR(0x45e1e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e1f0:L45e1f0:{c.instructions+=6;NFSU2_TR(0x45e1f0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45e1f5:{NFSU2_TR(0x45e1f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e1f6:{NFSU2_TR(0x45e1f6);
__builtin_memmove((R+24),(R+4),4);
}
B45e1f8:{NFSU2_TR(0x45e1f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45e1fb:{NFSU2_TR(0x45e1fb);
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
B45e1fd:{NFSU2_TR(0x45e1fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e28b;}}
}
B45e203:L45e203:{c.instructions+=3;NFSU2_TR(0x45e203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e206:{NFSU2_TR(0x45e206);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e208:{NFSU2_TR(0x45e208);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e20f;}}
}
B45e20a:L45e20a:{c.instructions+=2;NFSU2_TR(0x45e20a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45e20d:{NFSU2_TR(0x45e20d);
{goto L45e217;}
}
B45e20f:L45e20f:{c.instructions+=2;NFSU2_TR(0x45e20f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e212:{NFSU2_TR(0x45e212);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e21d;}}
}
B45e214:L45e214:{c.instructions+=1;NFSU2_TR(0x45e214);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45e217:L45e217:{c.instructions+=1;NFSU2_TR(0x45e217);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45e21d:L45e21d:{c.instructions+=6;NFSU2_TR(0x45e21d);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e223:{NFSU2_TR(0x45e223);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e224:{NFSU2_TR(0x45e224);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45e22a:{NFSU2_TR(0x45e22a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e22c:{NFSU2_TR(0x45e22c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45e22f:{NFSU2_TR(0x45e22f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45e265;}}
}
B45e231:L45e231:{c.instructions+=5;NFSU2_TR(0x45e231);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e237:{NFSU2_TR(0x45e237);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45e23d:{NFSU2_TR(0x45e23d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e23f:{NFSU2_TR(0x45e23f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45e242:{NFSU2_TR(0x45e242);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45e265;}}
}
B45e244:L45e244:{c.instructions+=8;NFSU2_TR(0x45e244);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e24a:{NFSU2_TR(0x45e24a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e24b:{NFSU2_TR(0x45e24b);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e251:{NFSU2_TR(0x45e251);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B45e254:{NFSU2_TR(0x45e254);
{u32 ea_=u32(u32(7899132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45e25a:{NFSU2_TR(0x45e25a);
{u32 ea_=u32(u32(7899132u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B45e260:{NFSU2_TR(0x45e260);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45e263:{NFSU2_TR(0x45e263);
{goto L45e26a;}
}
B45e265:L45e265:{c.instructions+=1;NFSU2_TR(0x45e265);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e26a:L45e26a:{c.instructions+=3;NFSU2_TR(0x45e26a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e270:{NFSU2_TR(0x45e270);
__builtin_memmove((R+4),(R+28),4);
}
B45e272:{NFSU2_TR(0x45e272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e277ull));
TAIL_STATIC(0x576970u,576);
}
B45e277:L45e277:{c.instructions+=3;NFSU2_TR(0x45e277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45e279:{NFSU2_TR(0x45e279);
__builtin_memmove((R+4),(R+28),4);
}
B45e27b:{NFSU2_TR(0x45e27b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e27eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e27e:L45e27e:{c.instructions+=3;NFSU2_TR(0x45e27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e284:{NFSU2_TR(0x45e284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e28a:{NFSU2_TR(0x45e28a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e28b:L45e28b:{c.instructions+=2;NFSU2_TR(0x45e28b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e28c:{NFSU2_TR(0x45e28c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e290:L45e290:{c.instructions+=4;NFSU2_TR(0x45e290);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45e295:{NFSU2_TR(0x45e295);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B45e298:{NFSU2_TR(0x45e298);
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
B45e29a:{NFSU2_TR(0x45e29a);
if(r1(R+518)){{goto L45e2a5;}}
}
B45e29c:L45e29c:{c.instructions+=2;NFSU2_TR(0x45e29c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e2a2:{NFSU2_TR(0x45e2a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e2a5:L45e2a5:{c.instructions+=10;NFSU2_TR(0x45e2a5);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e2ab:{NFSU2_TR(0x45e2ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e2af:{NFSU2_TR(0x45e2af);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e2b5:{NFSU2_TR(0x45e2b5);
{u32 ea_=u32((r4(R+4)*4u)+u32(8337248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45e2bc:{NFSU2_TR(0x45e2bc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45e2c2:{NFSU2_TR(0x45e2c2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45e2c6:{NFSU2_TR(0x45e2c6);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45e2cc:{NFSU2_TR(0x45e2cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e2ce:{NFSU2_TR(0x45e2ce);
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
B45e2d1:{NFSU2_TR(0x45e2d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e2f3;}}
}
B45e2d3:L45e2d3:{c.instructions+=6;NFSU2_TR(0x45e2d3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e2d7:{NFSU2_TR(0x45e2d7);
{u32 ea_=u32(u32(7905516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e2dd:{NFSU2_TR(0x45e2dd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45e2e1:{NFSU2_TR(0x45e2e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e2e3:{NFSU2_TR(0x45e2e3);
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
B45e2e6:{NFSU2_TR(0x45e2e6);
if(r1(R+514)){{goto L45e2f0;}}
}
B45e2e8:L45e2e8:{c.instructions+=2;NFSU2_TR(0x45e2e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45e2ea:{NFSU2_TR(0x45e2ea);
{u32 ea_=u32(u32(7905516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e2f0:L45e2f0:{c.instructions+=1;NFSU2_TR(0x45e2f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e2f3:L45e2f3:{c.instructions+=2;NFSU2_TR(0x45e2f3);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e2f9:{NFSU2_TR(0x45e2f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e300:L45e300:{c.instructions+=3;NFSU2_TR(0x45e300);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B45e305:{NFSU2_TR(0x45e305);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e307:{NFSU2_TR(0x45e307);
if(r1(R+518)){{goto L45e322;}}
}
B45e309:L45e309:{c.instructions+=3;NFSU2_TR(0x45e309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e30b:{NFSU2_TR(0x45e30b);
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
B45e30e:{NFSU2_TR(0x45e30e);
if(r1(R+518)){{goto L45e315;}}
}
B45e310:L45e310:{c.instructions+=2;NFSU2_TR(0x45e310);
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
B45e313:{NFSU2_TR(0x45e313);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e322;}}
}
B45e315:L45e315:{c.instructions+=3;NFSU2_TR(0x45e315);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e319:{NFSU2_TR(0x45e319);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45e31f:{NFSU2_TR(0x45e31f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e322:L45e322:{c.instructions+=4;NFSU2_TR(0x45e322);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e326:{NFSU2_TR(0x45e326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e328:{NFSU2_TR(0x45e328);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e32a:{NFSU2_TR(0x45e32a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45e333;}}
}
B45e32c:L45e32c:{c.instructions+=3;NFSU2_TR(0x45e32c);
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
B45e32e:{NFSU2_TR(0x45e32e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B45e330:{NFSU2_TR(0x45e330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e333:L45e333:{c.instructions+=2;NFSU2_TR(0x45e333);
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
B45e338:{NFSU2_TR(0x45e338);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45e33f;}}
}
B45e33a:L45e33a:{c.instructions+=1;NFSU2_TR(0x45e33a);
w4(R+0,u32(0x7fffull));
}
B45e33f:L45e33f:{c.instructions+=2;NFSU2_TR(0x45e33f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B45e341:{NFSU2_TR(0x45e341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e350:L45e350:{c.instructions+=4;NFSU2_TR(0x45e350);
__builtin_memmove((R+8),(R+4),4);
}
B45e352:{NFSU2_TR(0x45e352);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+8)),r4(U+0));
}
B45e358:{NFSU2_TR(0x45e358);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45e35b:{NFSU2_TR(0x45e35b);
w4(R+4,u32(0x10ull));
}
B45e360:L45e360:{c.instructions+=5;NFSU2_TR(0x45e360);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45e366:{NFSU2_TR(0x45e366);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45e369:{NFSU2_TR(0x45e369);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B45e36a:{NFSU2_TR(0x45e36a);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B45e370:{NFSU2_TR(0x45e370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45e360u);}goto L45e360;}}
}
B45e372:L45e372:{c.instructions+=6;NFSU2_TR(0x45e372);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e373:{NFSU2_TR(0x45e373);
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
B45e375:{NFSU2_TR(0x45e375);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e378:{NFSU2_TR(0x45e378);
w4(R+4,u32(0x10ull));
}
B45e37d:{NFSU2_TR(0x45e37d);
u8 U[4];
w4(U+0,u32(0x78a0f0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B45e383:{NFSU2_TR(0x45e383);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e38a:L45e38a:{c.instructions+=1;NFSU2_TR(0x45e38a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L45e38c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45e38au);}goto L45e38a;}
}
B45e38c:L45e38c:{c.instructions+=3;NFSU2_TR(0x45e38c);
__builtin_memmove((R+0),(R+8),4);
}
B45e38e:{NFSU2_TR(0x45e38e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e38f:{NFSU2_TR(0x45e38f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e390:L45e390:{c.instructions+=4;NFSU2_TR(0x45e390);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e394:{NFSU2_TR(0x45e394);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B45e398:{NFSU2_TR(0x45e398);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e39a:{NFSU2_TR(0x45e39a);
if(r1(R+518)){{goto L45e3a6;}}
}
B45e39c:L45e39c:{c.instructions+=3;NFSU2_TR(0x45e39c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e39e:{NFSU2_TR(0x45e39e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45e3a3:{NFSU2_TR(0x45e3a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e3a6:L45e3a6:{c.instructions+=2;NFSU2_TR(0x45e3a6);
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
B45e3a8:{NFSU2_TR(0x45e3a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e3b0:L45e3b0:{c.instructions+=4;NFSU2_TR(0x45e3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e3b4:{NFSU2_TR(0x45e3b4);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B45e3b8:{NFSU2_TR(0x45e3b8);
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
B45e3ba:{NFSU2_TR(0x45e3ba);
if(r1(R+518)){{goto L45e3c3;}}
}
B45e3bc:L45e3bc:{c.instructions+=2;NFSU2_TR(0x45e3bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B45e3c0:{NFSU2_TR(0x45e3c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e3c3:L45e3c3:{c.instructions+=2;NFSU2_TR(0x45e3c3);
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
B45e3c5:{NFSU2_TR(0x45e3c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e3d0:L45e3d0:{c.instructions+=4;NFSU2_TR(0x45e3d0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45e3d5:{NFSU2_TR(0x45e3d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45e3d8:{NFSU2_TR(0x45e3d8);
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
B45e3da:{NFSU2_TR(0x45e3da);
if(r1(R+518)){{goto L45e3e9;}}
}
B45e3dc:L45e3dc:{c.instructions+=3;NFSU2_TR(0x45e3dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e3e0:{NFSU2_TR(0x45e3e0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45e3e6:{NFSU2_TR(0x45e3e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e3e9:L45e3e9:{c.instructions+=3;NFSU2_TR(0x45e3e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45e3ec:{NFSU2_TR(0x45e3ec);
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
B45e3ee:{NFSU2_TR(0x45e3ee);
if(r1(R+518)){{goto L45e40d;}}
}
B45e3f0:L45e3f0:{c.instructions+=6;NFSU2_TR(0x45e3f0);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e3f3:{NFSU2_TR(0x45e3f3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45e3f9:{NFSU2_TR(0x45e3f9);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45e3fc:{NFSU2_TR(0x45e3fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e3fe:{NFSU2_TR(0x45e3fe);
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
B45e401:{NFSU2_TR(0x45e401);
if(r1(R+514)){{goto L45e40d;}}
}
B45e403:L45e403:{c.instructions+=2;NFSU2_TR(0x45e403);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e407:{NFSU2_TR(0x45e407);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B45e40d:L45e40d:{c.instructions+=1;NFSU2_TR(0x45e40d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e410:L45e410:{c.instructions+=2;NFSU2_TR(0x45e410);
w4(R+0,u32(0x7ed380ull));
}
B45e415:{NFSU2_TR(0x45e415);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e420:L45e420:{c.instructions+=2;NFSU2_TR(0x45e420);
__builtin_memmove((R+0),gp(0x7ed384),4);
}
B45e425:{NFSU2_TR(0x45e425);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e430:L45e430:{c.instructions+=3;NFSU2_TR(0x45e430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e431:{NFSU2_TR(0x45e431);
__builtin_memmove((R+24),(R+4),4);
}
B45e433:{NFSU2_TR(0x45e433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e438ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45e350u);}goto L45e350;}
}
B45e438:L45e438:{c.instructions+=5;NFSU2_TR(0x45e438);
u8 U[4];
w4(U+0,u32(0x78a130ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45e43e:{NFSU2_TR(0x45e43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e448:{NFSU2_TR(0x45e448);
__builtin_memmove((R+0),(R+24),4);
}
B45e44a:{NFSU2_TR(0x45e44a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e44b:{NFSU2_TR(0x45e44b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e450:L45e450:{c.instructions+=14;NFSU2_TR(0x45e450);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e456:{NFSU2_TR(0x45e456);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e458:{NFSU2_TR(0x45e458);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e45d:{NFSU2_TR(0x45e45d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e45e:{NFSU2_TR(0x45e45e);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45e463:{NFSU2_TR(0x45e463);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e46a:{NFSU2_TR(0x45e46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B45e46d:{NFSU2_TR(0x45e46d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e46e:{NFSU2_TR(0x45e46e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e46f:{NFSU2_TR(0x45e46f);
__builtin_memmove((R+20),(R+4),4);
}
B45e471:{NFSU2_TR(0x45e471);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45e474:{NFSU2_TR(0x45e474);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45e476:{NFSU2_TR(0x45e476);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B45e478:{NFSU2_TR(0x45e478);
if(r1(R+518)){{goto L45e558;}}
}
B45e47e:L45e47e:{c.instructions+=5;NFSU2_TR(0x45e47e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e47f:{NFSU2_TR(0x45e47f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45e482:{NFSU2_TR(0x45e482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45e488:{NFSU2_TR(0x45e488);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e48a:{NFSU2_TR(0x45e48a);
if(r1(R+518)){{goto L45e4b9;}}
}
B45e48c:L45e48c:{c.instructions+=3;NFSU2_TR(0x45e48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45e48e:{NFSU2_TR(0x45e48e);
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
B45e490:{NFSU2_TR(0x45e490);
if(r1(R+518)){{goto L45e497;}}
}
B45e492:L45e492:{c.instructions+=1;NFSU2_TR(0x45e492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e497ull));
TAIL_STATIC(0x735550u,735);
}
B45e497:L45e497:{c.instructions+=3;NFSU2_TR(0x45e497);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45e49b:{NFSU2_TR(0x45e49b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e49c:{NFSU2_TR(0x45e49c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4a1ull));
TAIL_STATIC(0x734df0u,734);
}
B45e4a1:L45e4a1:{c.instructions+=2;NFSU2_TR(0x45e4a1);
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
B45e4a4:{NFSU2_TR(0x45e4a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4a9ull));
TAIL_STATIC(0x734e40u,734);
}
B45e4a9:L45e4a9:{c.instructions+=5;NFSU2_TR(0x45e4a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e4ad:{NFSU2_TR(0x45e4ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45e4af:{NFSU2_TR(0x45e4af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e4b0:{NFSU2_TR(0x45e4b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e4b1:{NFSU2_TR(0x45e4b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e4b4:L45e4b4:{c.instructions+=1;NFSU2_TR(0x45e4b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4b9ull));
TAIL_STATIC(0x734e60u,734);
}
B45e4b9:L45e4b9:{c.instructions+=4;NFSU2_TR(0x45e4b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45e4bd:{NFSU2_TR(0x45e4bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e4be:{NFSU2_TR(0x45e4be);
s4(0x7ec844,u32(0x78a170ull));
}
B45e4c8:{NFSU2_TR(0x45e4c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4cdull));
TAIL_STATIC(0x734df0u,734);
}
B45e4cd:L45e4cd:{c.instructions+=2;NFSU2_TR(0x45e4cd);
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
B45e4d0:{NFSU2_TR(0x45e4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4d5ull));
TAIL_STATIC(0x734e40u,734);
}
B45e4d5:L45e4d5:{c.instructions+=9;NFSU2_TR(0x45e4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e4d9:{NFSU2_TR(0x45e4d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45e4dd:{NFSU2_TR(0x45e4dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e4de:{NFSU2_TR(0x45e4de);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e4e2:{NFSU2_TR(0x45e4e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e4e6:{NFSU2_TR(0x45e4e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e4ea:{NFSU2_TR(0x45e4ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45e4ec:{NFSU2_TR(0x45e4ec);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e4ee:{NFSU2_TR(0x45e4ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4f0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45e4f0:L45e4f0:{c.instructions+=2;NFSU2_TR(0x45e4f0);
__builtin_memmove((R+24),(R+0),4);
}
B45e4f2:{NFSU2_TR(0x45e4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e4f7ull));
TAIL_STATIC(0x734e60u,734);
}
B45e4f7:L45e4f7:{c.instructions+=4;NFSU2_TR(0x45e4f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e4fb:{NFSU2_TR(0x45e4fb);
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
B45e4fd:{NFSU2_TR(0x45e4fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e501:{NFSU2_TR(0x45e501);
if(r1(R+518)){{goto L45e54f;}}
}
B45e503:L45e503:{c.instructions+=13;NFSU2_TR(0x45e503);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e504:{NFSU2_TR(0x45e504);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e507:{NFSU2_TR(0x45e507);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e508:{NFSU2_TR(0x45e508);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e509:{NFSU2_TR(0x45e509);
u8 U[4];
w4(U+0,u32(0x82c72cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e50e:{NFSU2_TR(0x45e50e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45e510:{NFSU2_TR(0x45e510);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e513:{NFSU2_TR(0x45e513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e516:{NFSU2_TR(0x45e516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e519:{NFSU2_TR(0x45e519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e51c:{NFSU2_TR(0x45e51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e51f:{NFSU2_TR(0x45e51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e522:{NFSU2_TR(0x45e522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e527ull));
TAIL_STATIC(0x7358c0u,735);
}
B45e527:L45e527:{c.instructions+=3;NFSU2_TR(0x45e527);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45e52a:{NFSU2_TR(0x45e52a);
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
B45e52c:{NFSU2_TR(0x45e52c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45e54c;}}
}
B45e52e:L45e52e:{c.instructions+=3;NFSU2_TR(0x45e52e);
u8 U[4];
w4(U+0,u32(0x7edde8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e533:{NFSU2_TR(0x45e533);
w4(R+4,u32(0x82c72cull));
}
B45e538:{NFSU2_TR(0x45e538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e53dull));
TAIL_STATIC(0x735840u,735);
}
B45e53d:L45e53d:{c.instructions+=4;NFSU2_TR(0x45e53d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e53e:{NFSU2_TR(0x45e53e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e53f:{NFSU2_TR(0x45e53f);
u8 U[4];
w4(U+0,u32(0x82c72cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e544:{NFSU2_TR(0x45e544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e549ull));
TAIL_STATIC(0x7358c0u,735);
}
B45e549:L45e549:{c.instructions+=1;NFSU2_TR(0x45e549);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45e54c:L45e54c:{c.instructions+=2;NFSU2_TR(0x45e54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e54d:{NFSU2_TR(0x45e54d);
{goto L45e551;}
}
B45e54f:L45e54f:{c.instructions+=1;NFSU2_TR(0x45e54f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45e551:L45e551:{c.instructions+=2;NFSU2_TR(0x45e551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e557:{NFSU2_TR(0x45e557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e558:L45e558:{c.instructions+=6;NFSU2_TR(0x45e558);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e55c:{NFSU2_TR(0x45e55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45e55d:{NFSU2_TR(0x45e55d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45e55e:{NFSU2_TR(0x45e55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e565:{NFSU2_TR(0x45e565);
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
B45e568:{NFSU2_TR(0x45e568);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e570:L45e570:{c.instructions+=6;NFSU2_TR(0x45e570);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e571:{NFSU2_TR(0x45e571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e572:{NFSU2_TR(0x45e572);
__builtin_memmove((R+24),(R+4),4);
}
B45e574:{NFSU2_TR(0x45e574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e57a:{NFSU2_TR(0x45e57a);
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
B45e57c:{NFSU2_TR(0x45e57c);
if(r1(R+518)){{goto L45e62c;}}
}
B45e582:L45e582:{c.instructions+=4;NFSU2_TR(0x45e582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e584:{NFSU2_TR(0x45e584);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e586:{NFSU2_TR(0x45e586);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e58e:{NFSU2_TR(0x45e58e);
if(r1(R+518)){{goto L45e5a3;}}
}
B45e590:L45e590:{c.instructions+=4;NFSU2_TR(0x45e590);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45e594:{NFSU2_TR(0x45e594);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e595:{NFSU2_TR(0x45e595);
__builtin_memmove((R+4),(R+0),4);
}
B45e597:{NFSU2_TR(0x45e597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e59cull));
TAIL_STATIC(0x735070u,735);
}
B45e59c:L45e59c:{c.instructions+=2;NFSU2_TR(0x45e59c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45e5a1:{NFSU2_TR(0x45e5a1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45e5e7;}}
}
B45e5a3:L45e5a3:{c.instructions+=4;NFSU2_TR(0x45e5a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e5a4:{NFSU2_TR(0x45e5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45e5aa:{NFSU2_TR(0x45e5aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e5ac:{NFSU2_TR(0x45e5ac);
if(r1(R+518)){{goto L45e5dc;}}
}
B45e5ae:L45e5ae:{c.instructions+=3;NFSU2_TR(0x45e5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45e5b0:{NFSU2_TR(0x45e5b0);
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
B45e5b2:{NFSU2_TR(0x45e5b2);
if(r1(R+518)){{goto L45e5b9;}}
}
B45e5b4:L45e5b4:{c.instructions+=1;NFSU2_TR(0x45e5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e5b9ull));
TAIL_STATIC(0x735550u,735);
}
B45e5b9:L45e5b9:{c.instructions+=3;NFSU2_TR(0x45e5b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45e5bd:{NFSU2_TR(0x45e5bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e5be:{NFSU2_TR(0x45e5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e5c3ull));
TAIL_STATIC(0x734df0u,734);
}
B45e5c3:L45e5c3:{c.instructions+=2;NFSU2_TR(0x45e5c3);
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
B45e5c6:{NFSU2_TR(0x45e5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e5cbull));
TAIL_STATIC(0x734e40u,734);
}
B45e5cb:L45e5cb:{c.instructions+=5;NFSU2_TR(0x45e5cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e5cf:{NFSU2_TR(0x45e5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e5d1:{NFSU2_TR(0x45e5d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e5d3:{NFSU2_TR(0x45e5d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e5d4:{NFSU2_TR(0x45e5d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e5d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e5d7:L45e5d7:{c.instructions+=1;NFSU2_TR(0x45e5d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e5dcull));
TAIL_STATIC(0x734e60u,734);
}
B45e5dc:L45e5dc:{c.instructions+=2;NFSU2_TR(0x45e5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e5e6:{NFSU2_TR(0x45e5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e5e7:L45e5e7:{c.instructions+=3;NFSU2_TR(0x45e5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e5ed:{NFSU2_TR(0x45e5ed);
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
B45e5ef:{NFSU2_TR(0x45e5ef);
if(r1(R+518)){{goto L45e62c;}}
}
B45e5f1:L45e5f1:{c.instructions+=4;NFSU2_TR(0x45e5f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45e5f3:{NFSU2_TR(0x45e5f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e5f5:{NFSU2_TR(0x45e5f5);
__builtin_memmove((R+4),(R+24),4);
}
B45e5f7:{NFSU2_TR(0x45e5f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e5faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e5fa:L45e5fa:{c.instructions+=3;NFSU2_TR(0x45e5fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45e5fc:{NFSU2_TR(0x45e5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e602:{NFSU2_TR(0x45e602);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45e608;}}
}
B45e604:L45e604:{c.instructions+=2;NFSU2_TR(0x45e604);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45e606:{NFSU2_TR(0x45e606);
{goto L45e614;}
}
B45e608:L45e608:{c.instructions+=2;NFSU2_TR(0x45e608);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e60d:{NFSU2_TR(0x45e60d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45e614;}}
}
B45e60f:L45e60f:{c.instructions+=1;NFSU2_TR(0x45e60f);
w4(R+0,u32(0x7fffull));
}
B45e614:L45e614:{c.instructions+=5;NFSU2_TR(0x45e614);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e617:{NFSU2_TR(0x45e617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45e61d:{NFSU2_TR(0x45e61d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45e61f:{NFSU2_TR(0x45e61f);
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
B45e621:{NFSU2_TR(0x45e621);
if(r1(R+518)){{goto L45e62c;}}
}
B45e623:L45e623:{c.instructions+=3;NFSU2_TR(0x45e623);
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
B45e626:{NFSU2_TR(0x45e626);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e627:{NFSU2_TR(0x45e627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e62cull));
TAIL_STATIC(0x735580u,735);
}
B45e62c:L45e62c:{c.instructions+=3;NFSU2_TR(0x45e62c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e62d:{NFSU2_TR(0x45e62d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45e62e:{NFSU2_TR(0x45e62e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e630:L45e630:{c.instructions+=2;NFSU2_TR(0x45e630);
w4(R+0,u32(0x7ed394ull));
}
B45e635:{NFSU2_TR(0x45e635);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e640:L45e640:{c.instructions+=2;NFSU2_TR(0x45e640);
__builtin_memmove((R+0),gp(0x7ed398),4);
}
B45e645:{NFSU2_TR(0x45e645);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e650:L45e650:{c.instructions+=9;NFSU2_TR(0x45e650);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e656:{NFSU2_TR(0x45e656);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e657:{NFSU2_TR(0x45e657);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45e65a:{NFSU2_TR(0x45e65a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45e65c:{NFSU2_TR(0x45e65c);
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
B45e65f:{NFSU2_TR(0x45e65f);
__builtin_memmove((R+8),(R+518),1);
}
B45e662:{NFSU2_TR(0x45e662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e663:{NFSU2_TR(0x45e663);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e666:{NFSU2_TR(0x45e666);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e670:L45e670:{c.instructions+=4;NFSU2_TR(0x45e670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e674:{NFSU2_TR(0x45e674);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45e677:{NFSU2_TR(0x45e677);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e67a:{NFSU2_TR(0x45e67a);
if(r1(R+518)){{goto L45e68d;}}
}
B45e67c:L45e67c:{c.instructions+=2;NFSU2_TR(0x45e67c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e67f:{NFSU2_TR(0x45e67f);
if(r1(R+518)){{goto L45e68d;}}
}
B45e681:L45e681:{c.instructions+=2;NFSU2_TR(0x45e681);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e68b:{NFSU2_TR(0x45e68b);
{goto L45e693;}
}
B45e68d:L45e68d:{c.instructions+=1;NFSU2_TR(0x45e68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e693:L45e693:{c.instructions+=18;NFSU2_TR(0x45e693);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e696:{NFSU2_TR(0x45e696);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e69c:{NFSU2_TR(0x45e69c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45e6a3:{NFSU2_TR(0x45e6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45e6a9:{NFSU2_TR(0x45e6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e6af:{NFSU2_TR(0x45e6af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e6b0:{NFSU2_TR(0x45e6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45e6b6:{NFSU2_TR(0x45e6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45e6b9:{NFSU2_TR(0x45e6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45e6bc:{NFSU2_TR(0x45e6bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f2234ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B45e6c3:{NFSU2_TR(0x45e6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45e6c6:{NFSU2_TR(0x45e6c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B45e6c9:{NFSU2_TR(0x45e6c9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7f2860ull))));
}
B45e6cf:{NFSU2_TR(0x45e6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e6d5:{NFSU2_TR(0x45e6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e6d8:{NFSU2_TR(0x45e6d8);
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
B45e6db:{NFSU2_TR(0x45e6db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e6dc:{NFSU2_TR(0x45e6dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45e6eb;}}
}
B45e6de:L45e6de:{c.instructions+=2;NFSU2_TR(0x45e6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
w4(U+4,u32(0x7f3040ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e6e8:{NFSU2_TR(0x45e6e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e6eb:L45e6eb:{c.instructions+=4;NFSU2_TR(0x45e6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45e6ee:{NFSU2_TR(0x45e6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f3040ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45e6f5:{NFSU2_TR(0x45e6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e6fb:{NFSU2_TR(0x45e6fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e700:L45e700:{c.instructions+=3;NFSU2_TR(0x45e700);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e704:{NFSU2_TR(0x45e704);
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
B45e707:{NFSU2_TR(0x45e707);
if(r1(R+518)){{goto L45e725;}}
}
B45e709:L45e709:{c.instructions+=2;NFSU2_TR(0x45e709);
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
B45e70a:{NFSU2_TR(0x45e70a);
if(r1(R+518)){{goto L45e71d;}}
}
B45e70c:L45e70c:{c.instructions+=2;NFSU2_TR(0x45e70c);
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
B45e70d:{NFSU2_TR(0x45e70d);
if(r1(R+518)){{goto L45e715;}}
}
B45e70f:L45e70f:{c.instructions+=2;NFSU2_TR(0x45e70f);
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
B45e712:{NFSU2_TR(0x45e712);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e715:L45e715:{c.instructions+=2;NFSU2_TR(0x45e715);
w4(R+0,u32(0x8ull));
}
B45e71a:{NFSU2_TR(0x45e71a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e71d:L45e71d:{c.instructions+=2;NFSU2_TR(0x45e71d);
w4(R+0,u32(0x4ull));
}
B45e722:{NFSU2_TR(0x45e722);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e725:L45e725:{c.instructions+=2;NFSU2_TR(0x45e725);
w4(R+0,u32(0x3ull));
}
B45e72a:{NFSU2_TR(0x45e72a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e730:L45e730:{c.instructions+=15;NFSU2_TR(0x45e730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e732:{NFSU2_TR(0x45e732);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e738:{NFSU2_TR(0x45e738);
u8 U[4];
w4(U+0,u32(0x77265bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e73d:{NFSU2_TR(0x45e73d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e73e:{NFSU2_TR(0x45e73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e745:{NFSU2_TR(0x45e745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B45e748:{NFSU2_TR(0x45e748);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e749:{NFSU2_TR(0x45e749);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e74a:{NFSU2_TR(0x45e74a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e74b:{NFSU2_TR(0x45e74b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e74c:{NFSU2_TR(0x45e74c);
__builtin_memmove((R+28),(R+4),4);
}
B45e74e:{NFSU2_TR(0x45e74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B45e754:{NFSU2_TR(0x45e754);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e757:{NFSU2_TR(0x45e757);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e75a:{NFSU2_TR(0x45e75a);
if(r1(R+518)){{goto L45e766;}}
}
B45e75c:L45e75c:{c.instructions+=2;NFSU2_TR(0x45e75c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e75f:{NFSU2_TR(0x45e75f);
if(r1(R+518)){{goto L45e766;}}
}
B45e761:L45e761:{c.instructions+=2;NFSU2_TR(0x45e761);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e764:{NFSU2_TR(0x45e764);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e771;}}
}
B45e766:L45e766:{c.instructions+=3;NFSU2_TR(0x45e766);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e76c:{NFSU2_TR(0x45e76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B45e76f:{NFSU2_TR(0x45e76f);
{goto L45e77a;}
}
B45e771:L45e771:{c.instructions+=2;NFSU2_TR(0x45e771);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e777:{NFSU2_TR(0x45e777);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B45e77a:L45e77a:{c.instructions+=3;NFSU2_TR(0x45e77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45e780:{NFSU2_TR(0x45e780);
{u32 ea_=u32(r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e783:{NFSU2_TR(0x45e783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e788ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45e788:L45e788:{c.instructions+=11;NFSU2_TR(0x45e788);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e78c:{NFSU2_TR(0x45e78c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45e790:{NFSU2_TR(0x45e790);
{u32 ea_=u32(u32(7899140u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e796:{NFSU2_TR(0x45e796);
{u32 ea_=u32(u32(7899136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e79c:{NFSU2_TR(0x45e79c);
{u32 ea_=u32(u32(7899140u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e7a2:{NFSU2_TR(0x45e7a2);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B45e7a4:{NFSU2_TR(0x45e7a4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45e7a8:{NFSU2_TR(0x45e7a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45e7ae:{NFSU2_TR(0x45e7ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e7b0:{NFSU2_TR(0x45e7b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45e7b3:{NFSU2_TR(0x45e7b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e829;}}
}
B45e7b5:L45e7b5:{c.instructions+=6;NFSU2_TR(0x45e7b5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e7b9:{NFSU2_TR(0x45e7b9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e7bf:{NFSU2_TR(0x45e7bf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45e7c3:{NFSU2_TR(0x45e7c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45e7c5:{NFSU2_TR(0x45e7c5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45e7c8:{NFSU2_TR(0x45e7c8);
if(r1(R+514)){{goto L45e7d2;}}
}
B45e7ca:L45e7ca:{c.instructions+=2;NFSU2_TR(0x45e7ca);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45e7cc:{NFSU2_TR(0x45e7cc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e7d2:L45e7d2:{c.instructions+=7;NFSU2_TR(0x45e7d2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e7d8:{NFSU2_TR(0x45e7d8);
{u32 ea_=u32(u32(7899144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45e7de:{NFSU2_TR(0x45e7de);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B45e7e0:{NFSU2_TR(0x45e7e0);
{u32 ea_=u32(u32(7899144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45e7e6:{NFSU2_TR(0x45e7e6);
{u32 ea_=u32(u32(7905680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45e7ec:{NFSU2_TR(0x45e7ec);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45e7f2:{NFSU2_TR(0x45e7f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e7f7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45e7f7:L45e7f7:{c.instructions+=11;NFSU2_TR(0x45e7f7);
w4(R+0,u32(0-u32(r4(R+0))));
}
B45e7f9:{NFSU2_TR(0x45e7f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B45e7fc:{NFSU2_TR(0x45e7fc);
w4(R+4,u32(0x7ef7f8ull));
}
B45e801:{NFSU2_TR(0x45e801);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B45e803:{NFSU2_TR(0x45e803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B45e805:{NFSU2_TR(0x45e805);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e808:{NFSU2_TR(0x45e808);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B45e80b:{NFSU2_TR(0x45e80b);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B45e80e:{NFSU2_TR(0x45e80e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45e810:{NFSU2_TR(0x45e810);
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
B45e813:{NFSU2_TR(0x45e813);
if(r1(R+518)){{goto L45e81f;}}
}
B45e815:L45e815:{c.instructions+=2;NFSU2_TR(0x45e815);
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
B45e818:{NFSU2_TR(0x45e818);
if(r1(R+518)){{goto L45e81f;}}
}
B45e81a:L45e81a:{c.instructions+=2;NFSU2_TR(0x45e81a);
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
B45e81d:{NFSU2_TR(0x45e81d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45e831;}}
}
B45e81f:L45e81f:{c.instructions+=4;NFSU2_TR(0x45e81f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45e821:{NFSU2_TR(0x45e821);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e822:{NFSU2_TR(0x45e822);
__builtin_memmove((R+4),(R+28),4);
}
B45e824:{NFSU2_TR(0x45e824);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e827ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e827:L45e827:{c.instructions+=1;NFSU2_TR(0x45e827);
{goto L45e83a;}
}
B45e829:L45e829:{c.instructions+=2;NFSU2_TR(0x45e829);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45e82f:{NFSU2_TR(0x45e82f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45e7d2u);}goto L45e7d2;}
}
B45e831:L45e831:{c.instructions+=4;NFSU2_TR(0x45e831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e833:{NFSU2_TR(0x45e833);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e835:{NFSU2_TR(0x45e835);
__builtin_memmove((R+4),(R+28),4);
}
B45e837:{NFSU2_TR(0x45e837);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e83aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e83a:L45e83a:{c.instructions+=6;NFSU2_TR(0x45e83a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45e83d:{NFSU2_TR(0x45e83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45e843:{NFSU2_TR(0x45e843);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B45e846:{NFSU2_TR(0x45e846);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e848:{NFSU2_TR(0x45e848);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e84c:{NFSU2_TR(0x45e84c);
if(r1(R+518)){{goto L45e881;}}
}
B45e84e:L45e84e:{c.instructions+=3;NFSU2_TR(0x45e84e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45e850:{NFSU2_TR(0x45e850);
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
B45e852:{NFSU2_TR(0x45e852);
if(r1(R+518)){{goto L45e859;}}
}
B45e854:L45e854:{c.instructions+=1;NFSU2_TR(0x45e854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e859ull));
TAIL_STATIC(0x735550u,735);
}
B45e859:L45e859:{c.instructions+=3;NFSU2_TR(0x45e859);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45e85d:{NFSU2_TR(0x45e85d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e85e:{NFSU2_TR(0x45e85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e863ull));
TAIL_STATIC(0x734df0u,734);
}
B45e863:L45e863:{c.instructions+=2;NFSU2_TR(0x45e863);
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
B45e866:{NFSU2_TR(0x45e866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e86bull));
TAIL_STATIC(0x734e40u,734);
}
B45e86b:L45e86b:{c.instructions+=5;NFSU2_TR(0x45e86b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e86f:{NFSU2_TR(0x45e86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45e871:{NFSU2_TR(0x45e871);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e872:{NFSU2_TR(0x45e872);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e873:{NFSU2_TR(0x45e873);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e876ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e876:L45e876:{c.instructions+=1;NFSU2_TR(0x45e876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e87bull));
TAIL_STATIC(0x734e60u,734);
}
B45e87b:L45e87b:{c.instructions+=1;NFSU2_TR(0x45e87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e881:L45e881:{c.instructions+=4;NFSU2_TR(0x45e881);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e887:{NFSU2_TR(0x45e887);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e88a:{NFSU2_TR(0x45e88a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e88d:{NFSU2_TR(0x45e88d);
if(r1(R+518)){{goto L45e89d;}}
}
B45e88f:L45e88f:{c.instructions+=2;NFSU2_TR(0x45e88f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e892:{NFSU2_TR(0x45e892);
if(r1(R+518)){{goto L45e89d;}}
}
B45e894:L45e894:{c.instructions+=2;NFSU2_TR(0x45e894);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e897:{NFSU2_TR(0x45e897);
if(r1(R+518)){{goto L45e89d;}}
}
B45e899:L45e899:{c.instructions+=2;NFSU2_TR(0x45e899);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45e89b:{NFSU2_TR(0x45e89b);
{goto L45e8a2;}
}
B45e89d:L45e89d:{c.instructions+=1;NFSU2_TR(0x45e89d);
w4(R+0,u32(0x1ull));
}
B45e8a2:L45e8a2:{c.instructions+=14;NFSU2_TR(0x45e8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45e8a8:{NFSU2_TR(0x45e8a8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45e8aa:{NFSU2_TR(0x45e8aa);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B45e8ac:{NFSU2_TR(0x45e8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e8b2:{NFSU2_TR(0x45e8b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B45e8b5:{NFSU2_TR(0x45e8b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45e8b9:{NFSU2_TR(0x45e8b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e8ba:{NFSU2_TR(0x45e8ba);
s4(0x7ec844,u32(0x78a180ull));
}
B45e8c4:{NFSU2_TR(0x45e8c4);
__builtin_memmove((R+20),(R+4),4);
}
B45e8c6:{NFSU2_TR(0x45e8c6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45e8c8:{NFSU2_TR(0x45e8c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e8cb:{NFSU2_TR(0x45e8cb);
__builtin_memmove((R+4),(R+518),1);
}
B45e8ce:{NFSU2_TR(0x45e8ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e8d2:{NFSU2_TR(0x45e8d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e8d7ull));
TAIL_STATIC(0x734df0u,734);
}
B45e8d7:L45e8d7:{c.instructions+=2;NFSU2_TR(0x45e8d7);
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
B45e8da:{NFSU2_TR(0x45e8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e8dfull));
TAIL_STATIC(0x734e40u,734);
}
B45e8df:L45e8df:{c.instructions+=9;NFSU2_TR(0x45e8df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e8e3:{NFSU2_TR(0x45e8e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45e8e7:{NFSU2_TR(0x45e8e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e8e8:{NFSU2_TR(0x45e8e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e8ec:{NFSU2_TR(0x45e8ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e8f0:{NFSU2_TR(0x45e8f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e8f4:{NFSU2_TR(0x45e8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e8f6:{NFSU2_TR(0x45e8f6);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e8f8:{NFSU2_TR(0x45e8f8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e8faull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45e8fa:L45e8fa:{c.instructions+=2;NFSU2_TR(0x45e8fa);
__builtin_memmove((R+24),(R+0),4);
}
B45e8fc:{NFSU2_TR(0x45e8fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e901ull));
TAIL_STATIC(0x734e60u,734);
}
B45e901:L45e901:{c.instructions+=4;NFSU2_TR(0x45e901);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e905:{NFSU2_TR(0x45e905);
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
B45e907:{NFSU2_TR(0x45e907);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e90b:{NFSU2_TR(0x45e90b);
if(r1(R+518)){{goto L45e9d3;}}
}
B45e911:L45e911:{c.instructions+=4;NFSU2_TR(0x45e911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45e913:{NFSU2_TR(0x45e913);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e914:{NFSU2_TR(0x45e914);
__builtin_memmove((R+4),(R+28),4);
}
B45e916:{NFSU2_TR(0x45e916);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e919ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45e919:L45e919:{c.instructions+=3;NFSU2_TR(0x45e919);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45e91b:{NFSU2_TR(0x45e91b);
__builtin_memmove((R+4),(R+20),4);
}
B45e91d:{NFSU2_TR(0x45e91d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45e923;}}
}
B45e91f:L45e91f:{c.instructions+=2;NFSU2_TR(0x45e91f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45e921:{NFSU2_TR(0x45e921);
{goto L45e92d;}
}
B45e923:L45e923:{c.instructions+=2;NFSU2_TR(0x45e923);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e926:{NFSU2_TR(0x45e926);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45e92d;}}
}
B45e928:L45e928:{c.instructions+=1;NFSU2_TR(0x45e928);
w4(R+4,u32(0x2ull));
}
B45e92d:L45e92d:{c.instructions+=5;NFSU2_TR(0x45e92d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45e930:{NFSU2_TR(0x45e930);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+20)),r4(U+0));
}
B45e933:{NFSU2_TR(0x45e933);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e937:{NFSU2_TR(0x45e937);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45e939:{NFSU2_TR(0x45e939);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45e93f;}}
}
B45e93b:L45e93b:{c.instructions+=2;NFSU2_TR(0x45e93b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45e93d:{NFSU2_TR(0x45e93d);
{goto L45e94c;}
}
B45e93f:L45e93f:{c.instructions+=2;NFSU2_TR(0x45e93f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45e945:{NFSU2_TR(0x45e945);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45e94c;}}
}
B45e947:L45e947:{c.instructions+=1;NFSU2_TR(0x45e947);
w4(R+4,u32(0x7fffull));
}
B45e94c:L45e94c:{c.instructions+=4;NFSU2_TR(0x45e94c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45e94e:{NFSU2_TR(0x45e94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e951:{NFSU2_TR(0x45e951);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45e958:{NFSU2_TR(0x45e958);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45e95e;}}
}
B45e95a:L45e95a:{c.instructions+=2;NFSU2_TR(0x45e95a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45e95c:{NFSU2_TR(0x45e95c);
{goto L45e96a;}
}
B45e95e:L45e95e:{c.instructions+=2;NFSU2_TR(0x45e95e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45e963:{NFSU2_TR(0x45e963);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45e96a;}}
}
B45e965:L45e965:{c.instructions+=1;NFSU2_TR(0x45e965);
w4(R+0,u32(0xffffull));
}
B45e96a:L45e96a:{c.instructions+=5;NFSU2_TR(0x45e96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e96d:{NFSU2_TR(0x45e96d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45e971:{NFSU2_TR(0x45e971);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45e973:{NFSU2_TR(0x45e973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e976:{NFSU2_TR(0x45e976);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45e97c;}}
}
B45e978:L45e978:{c.instructions+=2;NFSU2_TR(0x45e978);
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
B45e97a:{NFSU2_TR(0x45e97a);
{goto L45e986;}
}
B45e97c:L45e97c:{c.instructions+=2;NFSU2_TR(0x45e97c);
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
B45e97f:{NFSU2_TR(0x45e97f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45e986;}}
}
B45e981:L45e981:{c.instructions+=1;NFSU2_TR(0x45e981);
w4(R+0,u32(0x1ull));
}
B45e986:L45e986:{c.instructions+=5;NFSU2_TR(0x45e986);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e987:{NFSU2_TR(0x45e987);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e988:{NFSU2_TR(0x45e988);
u8 U[4];
w4(U+0,u32(0x82c5a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e98d:{NFSU2_TR(0x45e98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e990:{NFSU2_TR(0x45e990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e995ull));
TAIL_STATIC(0x7358c0u,735);
}
B45e995:L45e995:{c.instructions+=3;NFSU2_TR(0x45e995);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45e998:{NFSU2_TR(0x45e998);
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
B45e99a:{NFSU2_TR(0x45e99a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45e9ba;}}
}
B45e99c:L45e99c:{c.instructions+=3;NFSU2_TR(0x45e99c);
u8 U[4];
w4(U+0,u32(0x7eddb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e9a1:{NFSU2_TR(0x45e9a1);
w4(R+4,u32(0x82c5a0ull));
}
B45e9a6:{NFSU2_TR(0x45e9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e9abull));
TAIL_STATIC(0x735840u,735);
}
B45e9ab:L45e9ab:{c.instructions+=4;NFSU2_TR(0x45e9ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e9ac:{NFSU2_TR(0x45e9ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e9ad:{NFSU2_TR(0x45e9ad);
u8 U[4];
w4(U+0,u32(0x82c5a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e9b2:{NFSU2_TR(0x45e9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e9b7ull));
TAIL_STATIC(0x7358c0u,735);
}
B45e9b7:L45e9b7:{c.instructions+=1;NFSU2_TR(0x45e9b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45e9ba:L45e9ba:{c.instructions+=9;NFSU2_TR(0x45e9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e9c0:{NFSU2_TR(0x45e9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e9c1:{NFSU2_TR(0x45e9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e9c2:{NFSU2_TR(0x45e9c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45e9c3:{NFSU2_TR(0x45e9c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45e9c4:{NFSU2_TR(0x45e9c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e9c8:{NFSU2_TR(0x45e9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e9cf:{NFSU2_TR(0x45e9cf);
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
B45e9d2:{NFSU2_TR(0x45e9d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e9d3:L45e9d3:{c.instructions+=9;NFSU2_TR(0x45e9d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45e9d7:{NFSU2_TR(0x45e9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e9dd:{NFSU2_TR(0x45e9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45e9de:{NFSU2_TR(0x45e9de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45e9df:{NFSU2_TR(0x45e9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45e9e0:{NFSU2_TR(0x45e9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45e9e1:{NFSU2_TR(0x45e9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45e9e8:{NFSU2_TR(0x45e9e8);
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
B45e9eb:{NFSU2_TR(0x45e9eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45e9f0:L45e9f0:{c.instructions+=8;NFSU2_TR(0x45e9f0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45e9f5:{NFSU2_TR(0x45e9f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e9f6:{NFSU2_TR(0x45e9f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45e9f7:{NFSU2_TR(0x45e9f7);
__builtin_memmove((R+24),(R+4),4);
}
B45e9f9:{NFSU2_TR(0x45e9f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45e9fc:{NFSU2_TR(0x45e9fc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45e9fe:{NFSU2_TR(0x45e9fe);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45ea00:{NFSU2_TR(0x45ea00);
if(r1(R+518)){{goto L45eab0;}}
}
B45ea06:L45ea06:{c.instructions+=3;NFSU2_TR(0x45ea06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea0c:{NFSU2_TR(0x45ea0c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea0e:{NFSU2_TR(0x45ea0e);
if(r1(R+518)){{goto L45ea28;}}
}
B45ea10:L45ea10:{c.instructions+=5;NFSU2_TR(0x45ea10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ea13:{NFSU2_TR(0x45ea13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea19:{NFSU2_TR(0x45ea19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45ea1b:{NFSU2_TR(0x45ea1b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea1d:{NFSU2_TR(0x45ea1d);
if(r1(R+518)){{goto L45ea28;}}
}
B45ea1f:L45ea1f:{c.instructions+=3;NFSU2_TR(0x45ea1f);
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
B45ea22:{NFSU2_TR(0x45ea22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ea23:{NFSU2_TR(0x45ea23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ea28ull));
TAIL_STATIC(0x735580u,735);
}
B45ea28:L45ea28:{c.instructions+=3;NFSU2_TR(0x45ea28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea2e:{NFSU2_TR(0x45ea2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea30:{NFSU2_TR(0x45ea30);
if(r1(R+518)){{goto L45ea4a;}}
}
B45ea32:L45ea32:{c.instructions+=5;NFSU2_TR(0x45ea32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ea35:{NFSU2_TR(0x45ea35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea3b:{NFSU2_TR(0x45ea3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45ea3d:{NFSU2_TR(0x45ea3d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea3f:{NFSU2_TR(0x45ea3f);
if(r1(R+518)){{goto L45ea4a;}}
}
B45ea41:L45ea41:{c.instructions+=3;NFSU2_TR(0x45ea41);
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
B45ea44:{NFSU2_TR(0x45ea44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ea45:{NFSU2_TR(0x45ea45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ea4aull));
TAIL_STATIC(0x735580u,735);
}
B45ea4a:L45ea4a:{c.instructions+=3;NFSU2_TR(0x45ea4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea50:{NFSU2_TR(0x45ea50);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea52:{NFSU2_TR(0x45ea52);
if(r1(R+518)){{goto L45ea6c;}}
}
B45ea54:L45ea54:{c.instructions+=5;NFSU2_TR(0x45ea54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ea57:{NFSU2_TR(0x45ea57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea5d:{NFSU2_TR(0x45ea5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45ea5f:{NFSU2_TR(0x45ea5f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea61:{NFSU2_TR(0x45ea61);
if(r1(R+518)){{goto L45ea6c;}}
}
B45ea63:L45ea63:{c.instructions+=3;NFSU2_TR(0x45ea63);
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
B45ea66:{NFSU2_TR(0x45ea66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ea67:{NFSU2_TR(0x45ea67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ea6cull));
TAIL_STATIC(0x735580u,735);
}
B45ea6c:L45ea6c:{c.instructions+=3;NFSU2_TR(0x45ea6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea72:{NFSU2_TR(0x45ea72);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea74:{NFSU2_TR(0x45ea74);
if(r1(R+518)){{goto L45ea8e;}}
}
B45ea76:L45ea76:{c.instructions+=5;NFSU2_TR(0x45ea76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ea79:{NFSU2_TR(0x45ea79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea7f:{NFSU2_TR(0x45ea7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45ea81:{NFSU2_TR(0x45ea81);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ea83:{NFSU2_TR(0x45ea83);
if(r1(R+518)){{goto L45ea8e;}}
}
B45ea85:L45ea85:{c.instructions+=3;NFSU2_TR(0x45ea85);
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
B45ea88:{NFSU2_TR(0x45ea88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ea89:{NFSU2_TR(0x45ea89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ea8eull));
TAIL_STATIC(0x735580u,735);
}
B45ea8e:L45ea8e:{c.instructions+=3;NFSU2_TR(0x45ea8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ea94:{NFSU2_TR(0x45ea94);
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
B45ea96:{NFSU2_TR(0x45ea96);
if(r1(R+518)){{goto L45eab0;}}
}
B45ea98:L45ea98:{c.instructions+=5;NFSU2_TR(0x45ea98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ea9b:{NFSU2_TR(0x45ea9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45eaa1:{NFSU2_TR(0x45eaa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45eaa3:{NFSU2_TR(0x45eaa3);
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
B45eaa5:{NFSU2_TR(0x45eaa5);
if(r1(R+518)){{goto L45eab0;}}
}
B45eaa7:L45eaa7:{c.instructions+=3;NFSU2_TR(0x45eaa7);
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
B45eaaa:{NFSU2_TR(0x45eaaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45eaab:{NFSU2_TR(0x45eaab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45eab0ull));
TAIL_STATIC(0x735580u,735);
}
B45eab0:L45eab0:{c.instructions+=3;NFSU2_TR(0x45eab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45eab1:{NFSU2_TR(0x45eab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45eab2:{NFSU2_TR(0x45eab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eac0:L45eac0:{c.instructions+=2;NFSU2_TR(0x45eac0);
w4(R+0,u32(0x7ed3a8ull));
}
B45eac5:{NFSU2_TR(0x45eac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ead0:L45ead0:{c.instructions+=2;NFSU2_TR(0x45ead0);
__builtin_memmove((R+0),gp(0x7ed3ac),4);
}
B45ead5:{NFSU2_TR(0x45ead5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eae0:L45eae0:{c.instructions+=3;NFSU2_TR(0x45eae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45eae4:{NFSU2_TR(0x45eae4);
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
B45eae7:{NFSU2_TR(0x45eae7);
if(r1(R+518)){{goto L45eb05;}}
}
B45eae9:L45eae9:{c.instructions+=2;NFSU2_TR(0x45eae9);
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
B45eaea:{NFSU2_TR(0x45eaea);
if(r1(R+518)){{goto L45eafd;}}
}
B45eaec:L45eaec:{c.instructions+=2;NFSU2_TR(0x45eaec);
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
B45eaed:{NFSU2_TR(0x45eaed);
if(r1(R+518)){{goto L45eaf5;}}
}
B45eaef:L45eaef:{c.instructions+=2;NFSU2_TR(0x45eaef);
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
B45eaf2:{NFSU2_TR(0x45eaf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eaf5:L45eaf5:{c.instructions+=2;NFSU2_TR(0x45eaf5);
w4(R+0,u32(0x5ull));
}
B45eafa:{NFSU2_TR(0x45eafa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eafd:L45eafd:{c.instructions+=2;NFSU2_TR(0x45eafd);
w4(R+0,u32(0x8ull));
}
B45eb02:{NFSU2_TR(0x45eb02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eb05:L45eb05:{c.instructions+=2;NFSU2_TR(0x45eb05);
w4(R+0,u32(0x3ull));
}
B45eb0a:{NFSU2_TR(0x45eb0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eb10:L45eb10:{c.instructions+=3;NFSU2_TR(0x45eb10);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B45eb15:{NFSU2_TR(0x45eb15);
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
B45eb17:{NFSU2_TR(0x45eb17);
if(r1(R+518)){{goto L45eb28;}}
}
B45eb19:L45eb19:{c.instructions+=2;NFSU2_TR(0x45eb19);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x7ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B45eb1c:{NFSU2_TR(0x45eb1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45eb28;}}
}
B45eb1e:L45eb1e:{c.instructions+=2;NFSU2_TR(0x45eb1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45eb22:{NFSU2_TR(0x45eb22);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45eb28:L45eb28:{c.instructions+=1;NFSU2_TR(0x45eb28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eb30:L45eb30:{c.instructions+=6;NFSU2_TR(0x45eb30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45eb34:{NFSU2_TR(0x45eb34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45eb35:{NFSU2_TR(0x45eb35);
__builtin_memmove((R+24),(R+4),4);
}
B45eb37:{NFSU2_TR(0x45eb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45eb3a:{NFSU2_TR(0x45eb3a);
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
B45eb3d:{NFSU2_TR(0x45eb3d);
if(r1(R+518)){{goto L45eb50;}}
}
B45eb3f:L45eb3f:{c.instructions+=2;NFSU2_TR(0x45eb3f);
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
B45eb42:{NFSU2_TR(0x45eb42);
if(r1(R+518)){{goto L45eb50;}}
}
B45eb44:L45eb44:{c.instructions+=2;NFSU2_TR(0x45eb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45eb4e:{NFSU2_TR(0x45eb4e);
{goto L45eb56;}
}
B45eb50:L45eb50:{c.instructions+=1;NFSU2_TR(0x45eb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45eb56:L45eb56:{c.instructions+=5;NFSU2_TR(0x45eb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45eb5c:{NFSU2_TR(0x45eb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45eb5f:{NFSU2_TR(0x45eb5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45eb66:{NFSU2_TR(0x45eb66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45eb68:{NFSU2_TR(0x45eb68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45eb6bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45eb6b:L45eb6b:{c.instructions+=2;NFSU2_TR(0x45eb6b);
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
B45eb6d:{NFSU2_TR(0x45eb6d);
if(r1(R+518)){{goto L45eb82;}}
}
B45eb6f:L45eb6f:{c.instructions+=3;NFSU2_TR(0x45eb6f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45eb71:{NFSU2_TR(0x45eb71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x300ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45eb77:{NFSU2_TR(0x45eb77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45eb7cull));
TAIL_STATIC(0x5995e0u,599);
}
B45eb7c:L45eb7c:{c.instructions+=1;NFSU2_TR(0x45eb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45eb82:L45eb82:{c.instructions+=12;NFSU2_TR(0x45eb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45eb88:{NFSU2_TR(0x45eb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45eb8e:{NFSU2_TR(0x45eb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45eb94:{NFSU2_TR(0x45eb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45eb97:{NFSU2_TR(0x45eb97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45eb9a:{NFSU2_TR(0x45eb9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f2238ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B45eba1:{NFSU2_TR(0x45eba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45eba4:{NFSU2_TR(0x45eba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f3338ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45ebab:{NFSU2_TR(0x45ebab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ebb1:{NFSU2_TR(0x45ebb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ebbb:{NFSU2_TR(0x45ebbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ebbc:{NFSU2_TR(0x45ebbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ebc0:L45ebc0:{c.instructions+=8;NFSU2_TR(0x45ebc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ebc1:{NFSU2_TR(0x45ebc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ebc2:{NFSU2_TR(0x45ebc2);
__builtin_memmove((R+24),(R+4),4);
}
B45ebc4:{NFSU2_TR(0x45ebc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ebc7:{NFSU2_TR(0x45ebc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ebca:{NFSU2_TR(0x45ebca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ebcd:{NFSU2_TR(0x45ebcd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
}
B45ebd3:{NFSU2_TR(0x45ebd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ebd8ull));
TAIL_STATIC(0x457b00u,457);
}
B45ebd8:L45ebd8:{c.instructions+=8;NFSU2_TR(0x45ebd8);
{u32 ea_=u32(u32(7899156u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B45ebde:{NFSU2_TR(0x45ebde);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45ebe0:{NFSU2_TR(0x45ebe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ebe6:{NFSU2_TR(0x45ebe6);
{u32 ea_=u32(r4(R+24)+u32(436u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45ebec:{NFSU2_TR(0x45ebec);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45ebf2:{NFSU2_TR(0x45ebf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45ebf4:{NFSU2_TR(0x45ebf4);
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
B45ebf7:{NFSU2_TR(0x45ebf7);
if(r1(R+514)){{goto L45ec02;}}
}
B45ebf9:L45ebf9:{c.instructions+=4;NFSU2_TR(0x45ebf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ebff:{NFSU2_TR(0x45ebff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ec00:{NFSU2_TR(0x45ec00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45ec01:{NFSU2_TR(0x45ec01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ec02:L45ec02:{c.instructions+=3;NFSU2_TR(0x45ec02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ec03:{NFSU2_TR(0x45ec03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45ec09:{NFSU2_TR(0x45ec09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ec0eull));
TAIL_STATIC(0x576a10u,576);
}
B45ec0e:L45ec0e:{c.instructions+=12;NFSU2_TR(0x45ec0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ec14:{NFSU2_TR(0x45ec14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ec1a:{NFSU2_TR(0x45ec1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ec20:{NFSU2_TR(0x45ec20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ec26:{NFSU2_TR(0x45ec26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ec2c:{NFSU2_TR(0x45ec2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ec32:{NFSU2_TR(0x45ec32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ec38:{NFSU2_TR(0x45ec38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ec3e:{NFSU2_TR(0x45ec3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ec40:{NFSU2_TR(0x45ec40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ec41:{NFSU2_TR(0x45ec41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45ec42:{NFSU2_TR(0x45ec42);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ec50:L45ec50:{c.instructions+=7;NFSU2_TR(0x45ec50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ec51:{NFSU2_TR(0x45ec51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ec52:{NFSU2_TR(0x45ec52);
__builtin_memmove((R+24),(R+4),4);
}
B45ec54:{NFSU2_TR(0x45ec54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ec55:{NFSU2_TR(0x45ec55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45ec5b:{NFSU2_TR(0x45ec5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ec5d:{NFSU2_TR(0x45ec5d);
if(r1(R+518)){{goto L45ec97;}}
}
B45ec5f:L45ec5f:{c.instructions+=3;NFSU2_TR(0x45ec5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45ec61:{NFSU2_TR(0x45ec61);
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
B45ec63:{NFSU2_TR(0x45ec63);
if(r1(R+518)){{goto L45ec6a;}}
}
B45ec65:L45ec65:{c.instructions+=1;NFSU2_TR(0x45ec65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ec6aull));
TAIL_STATIC(0x735550u,735);
}
B45ec6a:L45ec6a:{c.instructions+=3;NFSU2_TR(0x45ec6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45ec6e:{NFSU2_TR(0x45ec6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ec6f:{NFSU2_TR(0x45ec6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ec74ull));
TAIL_STATIC(0x734df0u,734);
}
B45ec74:L45ec74:{c.instructions+=2;NFSU2_TR(0x45ec74);
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
B45ec77:{NFSU2_TR(0x45ec77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ec7cull));
TAIL_STATIC(0x734e40u,734);
}
B45ec7c:L45ec7c:{c.instructions+=5;NFSU2_TR(0x45ec7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ec80:{NFSU2_TR(0x45ec80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ec82:{NFSU2_TR(0x45ec82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ec84:{NFSU2_TR(0x45ec84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ec85:{NFSU2_TR(0x45ec85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ec88ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ec88:L45ec88:{c.instructions+=1;NFSU2_TR(0x45ec88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ec8dull));
TAIL_STATIC(0x734e60u,734);
}
B45ec8d:L45ec8d:{c.instructions+=1;NFSU2_TR(0x45ec8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ec97:L45ec97:{c.instructions+=3;NFSU2_TR(0x45ec97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45ec9d:{NFSU2_TR(0x45ec9d);
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
B45ec9f:{NFSU2_TR(0x45ec9f);
if(r1(R+518)){{goto L45ecd9;}}
}
B45eca1:L45eca1:{c.instructions+=3;NFSU2_TR(0x45eca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45eca3:{NFSU2_TR(0x45eca3);
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
B45eca5:{NFSU2_TR(0x45eca5);
if(r1(R+518)){{goto L45ecac;}}
}
B45eca7:L45eca7:{c.instructions+=1;NFSU2_TR(0x45eca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ecacull));
TAIL_STATIC(0x735550u,735);
}
B45ecac:L45ecac:{c.instructions+=3;NFSU2_TR(0x45ecac);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45ecb0:{NFSU2_TR(0x45ecb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ecb1:{NFSU2_TR(0x45ecb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ecb6ull));
TAIL_STATIC(0x734df0u,734);
}
B45ecb6:L45ecb6:{c.instructions+=2;NFSU2_TR(0x45ecb6);
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
B45ecb9:{NFSU2_TR(0x45ecb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ecbeull));
TAIL_STATIC(0x734e40u,734);
}
B45ecbe:L45ecbe:{c.instructions+=5;NFSU2_TR(0x45ecbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ecc2:{NFSU2_TR(0x45ecc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ecc4:{NFSU2_TR(0x45ecc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ecc6:{NFSU2_TR(0x45ecc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ecc7:{NFSU2_TR(0x45ecc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45eccaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ecca:L45ecca:{c.instructions+=1;NFSU2_TR(0x45ecca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45eccfull));
TAIL_STATIC(0x734e60u,734);
}
B45eccf:L45eccf:{c.instructions+=1;NFSU2_TR(0x45eccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ecd9:L45ecd9:{c.instructions+=4;NFSU2_TR(0x45ecd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ecda:{NFSU2_TR(0x45ecda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ecdb:{NFSU2_TR(0x45ecdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45ecdc:{NFSU2_TR(0x45ecdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ece0:L45ece0:{c.instructions+=7;NFSU2_TR(0x45ece0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ece1:{NFSU2_TR(0x45ece1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ece2:{NFSU2_TR(0x45ece2);
__builtin_memmove((R+24),(R+4),4);
}
B45ece4:{NFSU2_TR(0x45ece4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ecea:{NFSU2_TR(0x45ecea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ecec:{NFSU2_TR(0x45ecec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45eced:{NFSU2_TR(0x45eced);
if(r1(R+518)){{goto L45ed64;}}
}
B45ecef:L45ecef:{c.instructions+=3;NFSU2_TR(0x45ecef);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
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
B45ecf6:{NFSU2_TR(0x45ecf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45ecf8:{NFSU2_TR(0x45ecf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45ed03;}}
}
B45ecfa:L45ecfa:{c.instructions+=2;NFSU2_TR(0x45ecfa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ecfc:{NFSU2_TR(0x45ecfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ecffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ecff:L45ecff:{c.instructions+=2;NFSU2_TR(0x45ecff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ed01:{NFSU2_TR(0x45ed01);
{goto L45ed0a;}
}
B45ed03:L45ed03:{c.instructions+=2;NFSU2_TR(0x45ed03);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ed05:{NFSU2_TR(0x45ed05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ed08ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ed08:L45ed08:{c.instructions+=1;NFSU2_TR(0x45ed08);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ed0a:L45ed0a:{c.instructions+=4;NFSU2_TR(0x45ed0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ed0c:{NFSU2_TR(0x45ed0c);
__builtin_memmove((R+4),(R+24),4);
}
B45ed0e:{NFSU2_TR(0x45ed0e);
__builtin_memmove((R+28),(R+0),4);
}
B45ed10:{NFSU2_TR(0x45ed10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ed13ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ed13:L45ed13:{c.instructions+=7;NFSU2_TR(0x45ed13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ed19:{NFSU2_TR(0x45ed19);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45ed1c:{NFSU2_TR(0x45ed1c);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B45ed1f:{NFSU2_TR(0x45ed1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ed23:{NFSU2_TR(0x45ed23);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45ed27:{NFSU2_TR(0x45ed27);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45ed2d:{NFSU2_TR(0x45ed2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ed32ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45ed32:L45ed32:{c.instructions+=3;NFSU2_TR(0x45ed32);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45ed34:{NFSU2_TR(0x45ed34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ed3a:{NFSU2_TR(0x45ed3a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45ed40;}}
}
B45ed3c:L45ed3c:{c.instructions+=2;NFSU2_TR(0x45ed3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45ed3e:{NFSU2_TR(0x45ed3e);
{goto L45ed4c;}
}
B45ed40:L45ed40:{c.instructions+=2;NFSU2_TR(0x45ed40);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ed45:{NFSU2_TR(0x45ed45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45ed4c;}}
}
B45ed47:L45ed47:{c.instructions+=1;NFSU2_TR(0x45ed47);
w4(R+0,u32(0x7fffull));
}
B45ed4c:L45ed4c:{c.instructions+=5;NFSU2_TR(0x45ed4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ed4f:{NFSU2_TR(0x45ed4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ed55:{NFSU2_TR(0x45ed55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45ed57:{NFSU2_TR(0x45ed57);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ed59:{NFSU2_TR(0x45ed59);
if(r1(R+518)){{goto L45ed64;}}
}
B45ed5b:L45ed5b:{c.instructions+=3;NFSU2_TR(0x45ed5b);
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
B45ed5e:{NFSU2_TR(0x45ed5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ed5f:{NFSU2_TR(0x45ed5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ed64ull));
TAIL_STATIC(0x735580u,735);
}
B45ed64:L45ed64:{c.instructions+=3;NFSU2_TR(0x45ed64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ed6a:{NFSU2_TR(0x45ed6a);
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
B45ed6c:{NFSU2_TR(0x45ed6c);
if(r1(R+518)){{goto L45ee67;}}
}
B45ed72:L45ed72:{c.instructions+=4;NFSU2_TR(0x45ed72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ed74:{NFSU2_TR(0x45ed74);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ed76:{NFSU2_TR(0x45ed76);
__builtin_memmove((R+4),(R+24),4);
}
B45ed78:{NFSU2_TR(0x45ed78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ed7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ed7b:L45ed7b:{c.instructions+=5;NFSU2_TR(0x45ed7b);
__builtin_memmove((R+28),(R+0),4);
}
B45ed7d:{NFSU2_TR(0x45ed7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45ed7f:{NFSU2_TR(0x45ed7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ed81:{NFSU2_TR(0x45ed81);
__builtin_memmove((R+4),(R+24),4);
}
B45ed83:{NFSU2_TR(0x45ed83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ed86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ed86:L45ed86:{c.instructions+=6;NFSU2_TR(0x45ed86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ed8c:{NFSU2_TR(0x45ed8c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45ed8f:{NFSU2_TR(0x45ed8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ed95:{NFSU2_TR(0x45ed95);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B45ed98:{NFSU2_TR(0x45ed98);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45ed9a:{NFSU2_TR(0x45ed9a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45eda0;}}
}
B45ed9c:L45ed9c:{c.instructions+=2;NFSU2_TR(0x45ed9c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45ed9e:{NFSU2_TR(0x45ed9e);
{goto L45edad;}
}
B45eda0:L45eda0:{c.instructions+=2;NFSU2_TR(0x45eda0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45eda6:{NFSU2_TR(0x45eda6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45edad;}}
}
B45eda8:L45eda8:{c.instructions+=1;NFSU2_TR(0x45eda8);
w4(R+4,u32(0x7fffull));
}
B45edad:L45edad:{c.instructions+=4;NFSU2_TR(0x45edad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45edb0:{NFSU2_TR(0x45edb0);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45edb6:{NFSU2_TR(0x45edb6);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45edbc:{NFSU2_TR(0x45edbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45edc1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45edc1:L45edc1:{c.instructions+=3;NFSU2_TR(0x45edc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45edc3:{NFSU2_TR(0x45edc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45edc9:{NFSU2_TR(0x45edc9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45edcf;}}
}
B45edcb:L45edcb:{c.instructions+=2;NFSU2_TR(0x45edcb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45edcd:{NFSU2_TR(0x45edcd);
{goto L45eddb;}
}
B45edcf:L45edcf:{c.instructions+=2;NFSU2_TR(0x45edcf);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45edd4:{NFSU2_TR(0x45edd4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45eddb;}}
}
B45edd6:L45edd6:{c.instructions+=1;NFSU2_TR(0x45edd6);
w4(R+0,u32(0x2000ull));
}
B45eddb:L45eddb:{c.instructions+=5;NFSU2_TR(0x45eddb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45eddd:{NFSU2_TR(0x45eddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ede0:{NFSU2_TR(0x45ede0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ede6:{NFSU2_TR(0x45ede6);
__builtin_memmove((R+0),(R+28),4);
}
B45ede8:{NFSU2_TR(0x45ede8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45edee;}}
}
B45edea:L45edea:{c.instructions+=2;NFSU2_TR(0x45edea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45edec:{NFSU2_TR(0x45edec);
{goto L45edfb;}
}
B45edee:L45edee:{c.instructions+=2;NFSU2_TR(0x45edee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45edf4:{NFSU2_TR(0x45edf4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45edfb;}}
}
B45edf6:L45edf6:{c.instructions+=1;NFSU2_TR(0x45edf6);
w4(R+0,u32(0xffffull));
}
B45edfb:L45edfb:{c.instructions+=6;NFSU2_TR(0x45edfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45edfe:{NFSU2_TR(0x45edfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ee04:{NFSU2_TR(0x45ee04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ee0a:{NFSU2_TR(0x45ee0a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45ee0c:{NFSU2_TR(0x45ee0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ee12:{NFSU2_TR(0x45ee12);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45ee18;}}
}
B45ee14:L45ee14:{c.instructions+=2;NFSU2_TR(0x45ee14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45ee16:{NFSU2_TR(0x45ee16);
{goto L45ee24;}
}
B45ee18:L45ee18:{c.instructions+=2;NFSU2_TR(0x45ee18);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ee1d:{NFSU2_TR(0x45ee1d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45ee24;}}
}
B45ee1f:L45ee1f:{c.instructions+=1;NFSU2_TR(0x45ee1f);
w4(R+0,u32(0x400ull));
}
B45ee24:L45ee24:{c.instructions+=4;NFSU2_TR(0x45ee24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ee27:{NFSU2_TR(0x45ee27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ee2d:{NFSU2_TR(0x45ee2d);
{u32 ea_=u32(r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45ee30:{NFSU2_TR(0x45ee30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ee35ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45ee35:L45ee35:{c.instructions+=3;NFSU2_TR(0x45ee35);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45ee37:{NFSU2_TR(0x45ee37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ee3d:{NFSU2_TR(0x45ee3d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45ee43;}}
}
B45ee3f:L45ee3f:{c.instructions+=2;NFSU2_TR(0x45ee3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45ee41:{NFSU2_TR(0x45ee41);
{goto L45ee4f;}
}
B45ee43:L45ee43:{c.instructions+=2;NFSU2_TR(0x45ee43);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ee48:{NFSU2_TR(0x45ee48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45ee4f;}}
}
B45ee4a:L45ee4a:{c.instructions+=1;NFSU2_TR(0x45ee4a);
w4(R+0,u32(0x2710ull));
}
B45ee4f:L45ee4f:{c.instructions+=5;NFSU2_TR(0x45ee4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ee52:{NFSU2_TR(0x45ee52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45ee58:{NFSU2_TR(0x45ee58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45ee5a:{NFSU2_TR(0x45ee5a);
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
B45ee5c:{NFSU2_TR(0x45ee5c);
if(r1(R+518)){{goto L45ee67;}}
}
B45ee5e:L45ee5e:{c.instructions+=3;NFSU2_TR(0x45ee5e);
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
B45ee61:{NFSU2_TR(0x45ee61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ee62:{NFSU2_TR(0x45ee62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ee67ull));
TAIL_STATIC(0x735580u,735);
}
B45ee67:L45ee67:{c.instructions+=4;NFSU2_TR(0x45ee67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ee68:{NFSU2_TR(0x45ee68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ee69:{NFSU2_TR(0x45ee69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45ee6a:{NFSU2_TR(0x45ee6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ee70:L45ee70:{c.instructions+=11;NFSU2_TR(0x45ee70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ee72:{NFSU2_TR(0x45ee72);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ee77:{NFSU2_TR(0x45ee77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ee7d:{NFSU2_TR(0x45ee7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ee7e:{NFSU2_TR(0x45ee7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ee85:{NFSU2_TR(0x45ee85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ee86:{NFSU2_TR(0x45ee86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ee87:{NFSU2_TR(0x45ee87);
__builtin_memmove((R+24),(R+4),4);
}
B45ee89:{NFSU2_TR(0x45ee89);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45ee8f:{NFSU2_TR(0x45ee8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45ee91:{NFSU2_TR(0x45ee91);
if(r1(R+518)){{goto L45efcd;}}
}
B45ee97:L45ee97:{c.instructions+=2;NFSU2_TR(0x45ee97);
u8 U[8];
__builtin_memmove((U+0),gp(0x7faaa8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ee9e:{NFSU2_TR(0x45ee9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45efcd;}}
}
B45eea4:L45eea4:{c.instructions+=3;NFSU2_TR(0x45eea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45eeaa:{NFSU2_TR(0x45eeaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45eeac:{NFSU2_TR(0x45eeac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45efcd;}}
}
B45eeb2:L45eeb2:{c.instructions+=6;NFSU2_TR(0x45eeb2);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45eeb8:{NFSU2_TR(0x45eeb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45eec2:{NFSU2_TR(0x45eec2);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45eec8:{NFSU2_TR(0x45eec8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45eeca:{NFSU2_TR(0x45eeca);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45eecd:{NFSU2_TR(0x45eecd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45eee2;}}
}
B45eecf:L45eecf:{c.instructions+=2;NFSU2_TR(0x45eecf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45eed1:{NFSU2_TR(0x45eed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45eed6ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B45eed6:L45eed6:{c.instructions+=3;NFSU2_TR(0x45eed6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45eed9:{NFSU2_TR(0x45eed9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B45eedc:{NFSU2_TR(0x45eedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45eee2:L45eee2:{c.instructions+=2;NFSU2_TR(0x45eee2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45eee9:{NFSU2_TR(0x45eee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45eef6;}}
}
B45eeeb:L45eeeb:{c.instructions+=3;NFSU2_TR(0x45eeeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45eef1:{NFSU2_TR(0x45eef1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45eef4:{NFSU2_TR(0x45eef4);
{goto L45eeff;}
}
B45eef6:L45eef6:{c.instructions+=2;NFSU2_TR(0x45eef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45eefc:{NFSU2_TR(0x45eefc);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45eeff:L45eeff:{c.instructions+=2;NFSU2_TR(0x45eeff);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45ef05:{NFSU2_TR(0x45ef05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ef0aull));
TAIL_STATIC(0x75bed4u,75b);
}
B45ef0a:L45ef0a:{c.instructions+=5;NFSU2_TR(0x45ef0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef0b:{NFSU2_TR(0x45ef0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ef11:{NFSU2_TR(0x45ef11);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef13:{NFSU2_TR(0x45ef13);
s4(0x7ec844,u32(0x78a198ull));
}
B45ef1d:{NFSU2_TR(0x45ef1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ef22ull));
TAIL_STATIC(0x457e20u,457);
}
B45ef22:L45ef22:{c.instructions+=6;NFSU2_TR(0x45ef22);
__builtin_memmove((R+28),(R+0),4);
}
B45ef24:{NFSU2_TR(0x45ef24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45ef27:{NFSU2_TR(0x45ef27);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ef2b:{NFSU2_TR(0x45ef2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ef2d:{NFSU2_TR(0x45ef2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ef35:{NFSU2_TR(0x45ef35);
if(r1(R+518)){{goto L45ef71;}}
}
B45ef37:L45ef37:{c.instructions+=3;NFSU2_TR(0x45ef37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ef3d:{NFSU2_TR(0x45ef3d);
{u32 ea_=u32(r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45ef40:{NFSU2_TR(0x45ef40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ef45ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45ef45:L45ef45:{c.instructions+=7;NFSU2_TR(0x45ef45);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45ef4b:{NFSU2_TR(0x45ef4b);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45ef51:{NFSU2_TR(0x45ef51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef52:{NFSU2_TR(0x45ef52);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ef56:{NFSU2_TR(0x45ef56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef57:{NFSU2_TR(0x45ef57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef59:{NFSU2_TR(0x45ef59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ef5eull));
TAIL_STATIC(0x75bed4u,75b);
}
B45ef5e:L45ef5e:{c.instructions+=6;NFSU2_TR(0x45ef5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ef64:{NFSU2_TR(0x45ef64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef65:{NFSU2_TR(0x45ef65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef67:{NFSU2_TR(0x45ef67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef68:{NFSU2_TR(0x45ef68);
__builtin_memmove((R+4),(R+28),4);
}
B45ef6a:{NFSU2_TR(0x45ef6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ef6full));
TAIL_STATIC(0x458260u,458);
}
B45ef6f:L45ef6f:{c.instructions+=1;NFSU2_TR(0x45ef6f);
{goto L45ef73;}
}
B45ef71:L45ef71:{c.instructions+=1;NFSU2_TR(0x45ef71);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45ef73:L45ef73:{c.instructions+=7;NFSU2_TR(0x45ef73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ef79:{NFSU2_TR(0x45ef79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45ef7b:{NFSU2_TR(0x45ef7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ef7d:{NFSU2_TR(0x45ef7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ef85:{NFSU2_TR(0x45ef85);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ef8d:{NFSU2_TR(0x45ef8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ef8e:{NFSU2_TR(0x45ef8e);
if(r1(R+518)){{goto L45ef9c;}}
}
B45ef90:L45ef90:{c.instructions+=4;NFSU2_TR(0x45ef90);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45ef94:{NFSU2_TR(0x45ef94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ef95:{NFSU2_TR(0x45ef95);
__builtin_memmove((R+4),(R+0),4);
}
B45ef97:{NFSU2_TR(0x45ef97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ef9cull));
TAIL_STATIC(0x735070u,735);
}
B45ef9c:L45ef9c:{c.instructions+=11;NFSU2_TR(0x45ef9c);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B45efa1:{NFSU2_TR(0x45efa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45efa7:{NFSU2_TR(0x45efa7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45efa9:{NFSU2_TR(0x45efa9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45efab:{NFSU2_TR(0x45efab);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45efaf:{NFSU2_TR(0x45efaf);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45efb2:{NFSU2_TR(0x45efb2);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45efb7:{NFSU2_TR(0x45efb7);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45efbd:{NFSU2_TR(0x45efbd);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45efc2:{NFSU2_TR(0x45efc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45efc8:{NFSU2_TR(0x45efc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45efcdull));
TAIL_STATIC(0x459990u,459);
}
B45efcd:L45efcd:{c.instructions+=6;NFSU2_TR(0x45efcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45efd1:{NFSU2_TR(0x45efd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45efd3:{NFSU2_TR(0x45efd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45efd4:{NFSU2_TR(0x45efd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45efdb:{NFSU2_TR(0x45efdb);
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
B45efde:{NFSU2_TR(0x45efde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45eff0:L45eff0:{c.instructions+=6;NFSU2_TR(0x45eff0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45eff1:{NFSU2_TR(0x45eff1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45eff2:{NFSU2_TR(0x45eff2);
__builtin_memmove((R+24),(R+4),4);
}
B45eff4:{NFSU2_TR(0x45eff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45effa:{NFSU2_TR(0x45effa);
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
B45effc:{NFSU2_TR(0x45effc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x45f003u,45f);}
}
B45effe:L45effe:{c.instructions+=1;NFSU2_TR(0x45effe);
w1(R+0,u8(0x1ull));
TAIL_STATIC(0x45f000u,45f);
}
XIT:NFSU2_TR_EXIT(0x45e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
