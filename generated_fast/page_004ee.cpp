#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4af(u8* __restrict R,Cpu& c);
u32 body_4b0(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4df(u8* __restrict R,Cpu& c);
u32 body_4e0(u8* __restrict R,Cpu& c);
u32 body_4e1(u8* __restrict R,Cpu& c);
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 body_4ed(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ee,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ee,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ee(u8* __restrict R,Cpu& c);
u32 page_4ee(Cpu& c){return body_4ee(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ee(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ee000:goto L4ee000;
case 0x4ee002:c.instructions+=1;goto B4ee002;
case 0x4ee007:goto L4ee007;
case 0x4ee008:c.instructions+=3;goto B4ee008;
case 0x4ee009:c.instructions+=2;goto B4ee009;
case 0x4ee00a:c.instructions+=1;goto B4ee00a;
case 0x4ee00d:goto L4ee00d;
case 0x4ee013:c.instructions+=2;goto B4ee013;
case 0x4ee015:c.instructions+=1;goto B4ee015;
case 0x4ee01b:goto L4ee01b;
case 0x4ee020:c.instructions+=1;goto B4ee020;
case 0x4ee026:goto L4ee026;
case 0x4ee02c:c.instructions+=8;goto B4ee02c;
case 0x4ee02e:c.instructions+=7;goto B4ee02e;
case 0x4ee031:c.instructions+=6;goto B4ee031;
case 0x4ee034:c.instructions+=5;goto B4ee034;
case 0x4ee03a:c.instructions+=4;goto B4ee03a;
case 0x4ee040:c.instructions+=3;goto B4ee040;
case 0x4ee042:c.instructions+=2;goto B4ee042;
case 0x4ee045:c.instructions+=1;goto B4ee045;
case 0x4ee04b:goto L4ee04b;
case 0x4ee04e:c.instructions+=1;goto B4ee04e;
case 0x4ee053:goto L4ee053;
case 0x4ee055:c.instructions+=3;goto B4ee055;
case 0x4ee057:c.instructions+=2;goto B4ee057;
case 0x4ee058:c.instructions+=1;goto B4ee058;
case 0x4ee05d:goto L4ee05d;
case 0x4ee060:c.instructions+=5;goto B4ee060;
case 0x4ee061:c.instructions+=4;goto B4ee061;
case 0x4ee06b:c.instructions+=3;goto B4ee06b;
case 0x4ee06c:c.instructions+=2;goto B4ee06c;
case 0x4ee06d:c.instructions+=1;goto B4ee06d;
case 0x4ee070:goto L4ee070;
case 0x4ee075:c.instructions+=1;goto B4ee075;
case 0x4ee07b:goto L4ee07b;
case 0x4ee07e:c.instructions+=2;goto B4ee07e;
case 0x4ee07f:c.instructions+=1;goto B4ee07f;
case 0x4ee084:goto L4ee084;
case 0x4ee089:c.instructions+=4;goto B4ee089;
case 0x4ee08c:c.instructions+=3;goto B4ee08c;
case 0x4ee08f:c.instructions+=2;goto B4ee08f;
case 0x4ee092:c.instructions+=1;goto B4ee092;
case 0x4ee094:goto L4ee094;
case 0x4ee095:c.instructions+=1;goto B4ee095;
case 0x4ee097:goto L4ee097;
case 0x4ee09a:c.instructions+=1;goto B4ee09a;
case 0x4ee0a0:goto L4ee0a0;
case 0x4ee0a3:c.instructions+=9;goto B4ee0a3;
case 0x4ee0a9:c.instructions+=8;goto B4ee0a9;
case 0x4ee0ac:c.instructions+=7;goto B4ee0ac;
case 0x4ee0ad:c.instructions+=6;goto B4ee0ad;
case 0x4ee0b0:c.instructions+=5;goto B4ee0b0;
case 0x4ee0b2:c.instructions+=4;goto B4ee0b2;
case 0x4ee0b3:c.instructions+=3;goto B4ee0b3;
case 0x4ee0b5:c.instructions+=2;goto B4ee0b5;
case 0x4ee0b8:c.instructions+=1;goto B4ee0b8;
case 0x4ee0bd:goto L4ee0bd;
case 0x4ee0bf:c.instructions+=1;goto B4ee0bf;
case 0x4ee0c4:goto L4ee0c4;
case 0x4ee0cb:c.instructions+=1;goto B4ee0cb;
case 0x4ee0cd:goto L4ee0cd;
case 0x4ee0d2:c.instructions+=1;goto B4ee0d2;
case 0x4ee0d7:goto L4ee0d7;
case 0x4ee0da:c.instructions+=9;goto B4ee0da;
case 0x4ee0dd:c.instructions+=8;goto B4ee0dd;
case 0x4ee0e0:c.instructions+=7;goto B4ee0e0;
case 0x4ee0e6:c.instructions+=6;goto B4ee0e6;
case 0x4ee0e7:c.instructions+=5;goto B4ee0e7;
case 0x4ee0ea:c.instructions+=4;goto B4ee0ea;
case 0x4ee0ec:c.instructions+=3;goto B4ee0ec;
case 0x4ee0ed:c.instructions+=2;goto B4ee0ed;
case 0x4ee0ef:c.instructions+=1;goto B4ee0ef;
case 0x4ee0f4:goto L4ee0f4;
case 0x4ee0f7:c.instructions+=2;goto B4ee0f7;
case 0x4ee0f8:c.instructions+=1;goto B4ee0f8;
case 0x4ee0fa:goto L4ee0fa;
case 0x4ee0fd:c.instructions+=3;goto B4ee0fd;
case 0x4ee103:c.instructions+=2;goto B4ee103;
case 0x4ee105:c.instructions+=1;goto B4ee105;
case 0x4ee10a:goto L4ee10a;
case 0x4ee10b:c.instructions+=3;goto B4ee10b;
case 0x4ee10c:c.instructions+=2;goto B4ee10c;
case 0x4ee111:c.instructions+=1;goto B4ee111;
case 0x4ee116:goto L4ee116;
case 0x4ee119:c.instructions+=1;goto B4ee119;
case 0x4ee11a:goto L4ee11a;
case 0x4ee11c:c.instructions+=1;goto B4ee11c;
case 0x4ee121:goto L4ee121;
case 0x4ee123:c.instructions+=2;goto B4ee123;
case 0x4ee124:c.instructions+=1;goto B4ee124;
case 0x4ee129:goto L4ee129;
case 0x4ee130:goto L4ee130;
case 0x4ee134:c.instructions+=2;goto B4ee134;
case 0x4ee13b:c.instructions+=1;goto B4ee13b;
case 0x4ee13d:goto L4ee13d;
case 0x4ee140:c.instructions+=5;goto B4ee140;
case 0x4ee142:c.instructions+=4;goto B4ee142;
case 0x4ee147:c.instructions+=3;goto B4ee147;
case 0x4ee14c:c.instructions+=2;goto B4ee14c;
case 0x4ee14d:c.instructions+=1;goto B4ee14d;
case 0x4ee152:goto L4ee152;
case 0x4ee155:goto L4ee155;
case 0x4ee156:c.instructions+=3;goto B4ee156;
case 0x4ee157:c.instructions+=2;goto B4ee157;
case 0x4ee158:c.instructions+=1;goto B4ee158;
case 0x4ee1a0:goto L4ee1a0;
case 0x4ee1a1:c.instructions+=4;goto B4ee1a1;
case 0x4ee1a2:c.instructions+=3;goto B4ee1a2;
case 0x4ee1a4:c.instructions+=2;goto B4ee1a4;
case 0x4ee1a6:c.instructions+=1;goto B4ee1a6;
case 0x4ee1ab:goto L4ee1ab;
case 0x4ee1ad:c.instructions+=1;goto B4ee1ad;
case 0x4ee1b2:goto L4ee1b2;
case 0x4ee1b5:c.instructions+=2;goto B4ee1b5;
case 0x4ee1ba:c.instructions+=1;goto B4ee1ba;
case 0x4ee1bf:goto L4ee1bf;
case 0x4ee1c0:c.instructions+=2;goto B4ee1c0;
case 0x4ee1c1:c.instructions+=1;goto B4ee1c1;
case 0x4ee1c6:goto L4ee1c6;
case 0x4ee1c9:c.instructions+=3;goto B4ee1c9;
case 0x4ee1ce:c.instructions+=2;goto B4ee1ce;
case 0x4ee1d4:c.instructions+=1;goto B4ee1d4;
case 0x4ee1d9:goto L4ee1d9;
case 0x4ee1da:c.instructions+=2;goto B4ee1da;
case 0x4ee1db:c.instructions+=1;goto B4ee1db;
case 0x4ee1e0:goto L4ee1e0;
case 0x4ee1e3:c.instructions+=3;goto B4ee1e3;
case 0x4ee1e8:c.instructions+=2;goto B4ee1e8;
case 0x4ee1ee:c.instructions+=1;goto B4ee1ee;
case 0x4ee1f3:goto L4ee1f3;
case 0x4ee1f6:c.instructions+=1;goto B4ee1f6;
case 0x4ee1f8:goto L4ee1f8;
case 0x4ee1fb:c.instructions+=3;goto B4ee1fb;
case 0x4ee1fd:c.instructions+=2;goto B4ee1fd;
case 0x4ee1fe:c.instructions+=1;goto B4ee1fe;
case 0x4ee203:goto L4ee203;
case 0x4ee206:goto L4ee206;
case 0x4ee207:c.instructions+=3;goto B4ee207;
case 0x4ee209:c.instructions+=2;goto B4ee209;
case 0x4ee20a:c.instructions+=1;goto B4ee20a;
case 0x4ee210:goto L4ee210;
case 0x4ee211:c.instructions+=3;goto B4ee211;
case 0x4ee212:c.instructions+=2;goto B4ee212;
case 0x4ee214:c.instructions+=1;goto B4ee214;
case 0x4ee219:goto L4ee219;
case 0x4ee21c:c.instructions+=2;goto B4ee21c;
case 0x4ee221:c.instructions+=1;goto B4ee221;
case 0x4ee226:goto L4ee226;
case 0x4ee227:c.instructions+=2;goto B4ee227;
case 0x4ee228:c.instructions+=1;goto B4ee228;
case 0x4ee22d:goto L4ee22d;
case 0x4ee22e:c.instructions+=1;goto B4ee22e;
case 0x4ee233:goto L4ee233;
case 0x4ee236:c.instructions+=2;goto B4ee236;
case 0x4ee23b:c.instructions+=1;goto B4ee23b;
case 0x4ee240:goto L4ee240;
case 0x4ee241:c.instructions+=2;goto B4ee241;
case 0x4ee242:c.instructions+=1;goto B4ee242;
case 0x4ee247:goto L4ee247;
case 0x4ee24a:c.instructions+=3;goto B4ee24a;
case 0x4ee24f:c.instructions+=2;goto B4ee24f;
case 0x4ee255:c.instructions+=1;goto B4ee255;
case 0x4ee25a:goto L4ee25a;
case 0x4ee25b:c.instructions+=2;goto B4ee25b;
case 0x4ee25c:c.instructions+=1;goto B4ee25c;
case 0x4ee261:goto L4ee261;
case 0x4ee264:c.instructions+=3;goto B4ee264;
case 0x4ee269:c.instructions+=2;goto B4ee269;
case 0x4ee26f:c.instructions+=1;goto B4ee26f;
case 0x4ee274:goto L4ee274;
case 0x4ee275:c.instructions+=2;goto B4ee275;
case 0x4ee276:c.instructions+=1;goto B4ee276;
case 0x4ee27b:goto L4ee27b;
case 0x4ee27c:c.instructions+=1;goto B4ee27c;
case 0x4ee281:goto L4ee281;
case 0x4ee284:c.instructions+=2;goto B4ee284;
case 0x4ee289:c.instructions+=1;goto B4ee289;
case 0x4ee28e:goto L4ee28e;
case 0x4ee28f:c.instructions+=2;goto B4ee28f;
case 0x4ee290:c.instructions+=1;goto B4ee290;
case 0x4ee295:goto L4ee295;
case 0x4ee298:c.instructions+=2;goto B4ee298;
case 0x4ee299:c.instructions+=1;goto B4ee299;
case 0x4ee29e:goto L4ee29e;
case 0x4ee2a1:c.instructions+=2;goto B4ee2a1;
case 0x4ee2a6:c.instructions+=1;goto B4ee2a6;
case 0x4ee2ab:goto L4ee2ab;
case 0x4ee2ac:c.instructions+=2;goto B4ee2ac;
case 0x4ee2ad:c.instructions+=1;goto B4ee2ad;
case 0x4ee2b2:goto L4ee2b2;
case 0x4ee2b3:c.instructions+=1;goto B4ee2b3;
case 0x4ee2b8:goto L4ee2b8;
case 0x4ee2bb:c.instructions+=2;goto B4ee2bb;
case 0x4ee2c0:c.instructions+=1;goto B4ee2c0;
case 0x4ee2c5:goto L4ee2c5;
case 0x4ee2c6:c.instructions+=2;goto B4ee2c6;
case 0x4ee2c7:c.instructions+=1;goto B4ee2c7;
case 0x4ee2cc:goto L4ee2cc;
case 0x4ee2cd:c.instructions+=1;goto B4ee2cd;
case 0x4ee2d2:goto L4ee2d2;
case 0x4ee2d5:c.instructions+=2;goto B4ee2d5;
case 0x4ee2da:c.instructions+=1;goto B4ee2da;
case 0x4ee2df:goto L4ee2df;
case 0x4ee2e0:c.instructions+=2;goto B4ee2e0;
case 0x4ee2e1:c.instructions+=1;goto B4ee2e1;
case 0x4ee2e6:goto L4ee2e6;
case 0x4ee2e7:c.instructions+=1;goto B4ee2e7;
case 0x4ee2ec:goto L4ee2ec;
case 0x4ee2ef:c.instructions+=2;goto B4ee2ef;
case 0x4ee2f4:c.instructions+=1;goto B4ee2f4;
case 0x4ee2f9:goto L4ee2f9;
case 0x4ee2fc:c.instructions+=1;goto B4ee2fc;
case 0x4ee2fe:goto L4ee2fe;
case 0x4ee301:c.instructions+=3;goto B4ee301;
case 0x4ee303:c.instructions+=2;goto B4ee303;
case 0x4ee304:c.instructions+=1;goto B4ee304;
case 0x4ee309:goto L4ee309;
case 0x4ee30c:goto L4ee30c;
case 0x4ee30d:c.instructions+=3;goto B4ee30d;
case 0x4ee30f:c.instructions+=2;goto B4ee30f;
case 0x4ee310:c.instructions+=1;goto B4ee310;
case 0x4ee320:goto L4ee320;
case 0x4ee321:c.instructions+=13;goto B4ee321;
case 0x4ee323:c.instructions+=12;goto B4ee323;
case 0x4ee325:c.instructions+=11;goto B4ee325;
case 0x4ee32a:c.instructions+=10;goto B4ee32a;
case 0x4ee330:c.instructions+=9;goto B4ee330;
case 0x4ee331:c.instructions+=8;goto B4ee331;
case 0x4ee338:c.instructions+=7;goto B4ee338;
case 0x4ee33b:c.instructions+=6;goto B4ee33b;
case 0x4ee33e:c.instructions+=5;goto B4ee33e;
case 0x4ee33f:c.instructions+=4;goto B4ee33f;
case 0x4ee341:c.instructions+=3;goto B4ee341;
case 0x4ee342:c.instructions+=2;goto B4ee342;
case 0x4ee345:c.instructions+=1;goto B4ee345;
case 0x4ee34a:goto L4ee34a;
case 0x4ee34d:c.instructions+=9;goto B4ee34d;
case 0x4ee353:c.instructions+=8;goto B4ee353;
case 0x4ee35a:c.instructions+=7;goto B4ee35a;
case 0x4ee35c:c.instructions+=6;goto B4ee35c;
case 0x4ee35f:c.instructions+=5;goto B4ee35f;
case 0x4ee361:c.instructions+=4;goto B4ee361;
case 0x4ee365:c.instructions+=3;goto B4ee365;
case 0x4ee369:c.instructions+=2;goto B4ee369;
case 0x4ee36d:c.instructions+=1;goto B4ee36d;
case 0x4ee372:goto L4ee372;
case 0x4ee375:c.instructions+=2;goto B4ee375;
case 0x4ee377:c.instructions+=1;goto B4ee377;
case 0x4ee379:goto L4ee379;
case 0x4ee37c:c.instructions+=4;goto B4ee37c;
case 0x4ee37e:c.instructions+=3;goto B4ee37e;
case 0x4ee381:c.instructions+=2;goto B4ee381;
case 0x4ee387:c.instructions+=1;goto B4ee387;
case 0x4ee389:goto L4ee389;
case 0x4ee38b:goto L4ee38b;
case 0x4ee38d:c.instructions+=2;goto B4ee38d;
case 0x4ee390:c.instructions+=1;goto B4ee390;
case 0x4ee395:goto L4ee395;
case 0x4ee398:c.instructions+=4;goto B4ee398;
case 0x4ee39b:c.instructions+=3;goto B4ee39b;
case 0x4ee39d:c.instructions+=2;goto B4ee39d;
case 0x4ee3a1:c.instructions+=1;goto B4ee3a1;
case 0x4ee3a3:goto L4ee3a3;
case 0x4ee3a6:c.instructions+=5;goto B4ee3a6;
case 0x4ee3a9:c.instructions+=4;goto B4ee3a9;
case 0x4ee3aa:c.instructions+=3;goto B4ee3aa;
case 0x4ee3ab:c.instructions+=2;goto B4ee3ab;
case 0x4ee3ad:c.instructions+=1;goto B4ee3ad;
case 0x4ee3b2:goto L4ee3b2;
case 0x4ee3b4:goto L4ee3b4;
case 0x4ee3b6:goto L4ee3b6;
case 0x4ee3b7:c.instructions+=5;goto B4ee3b7;
case 0x4ee3b8:c.instructions+=4;goto B4ee3b8;
case 0x4ee3ba:c.instructions+=3;goto B4ee3ba;
case 0x4ee3be:c.instructions+=2;goto B4ee3be;
case 0x4ee3c1:c.instructions+=1;goto B4ee3c1;
case 0x4ee3c6:goto L4ee3c6;
case 0x4ee3c8:c.instructions+=6;goto B4ee3c8;
case 0x4ee3cb:c.instructions+=5;goto B4ee3cb;
case 0x4ee3ce:c.instructions+=4;goto B4ee3ce;
case 0x4ee3d0:c.instructions+=3;goto B4ee3d0;
case 0x4ee3d5:c.instructions+=2;goto B4ee3d5;
case 0x4ee3d8:c.instructions+=1;goto B4ee3d8;
case 0x4ee3da:goto L4ee3da;
case 0x4ee3dd:c.instructions+=3;goto B4ee3dd;
case 0x4ee3e2:c.instructions+=2;goto B4ee3e2;
case 0x4ee3e3:c.instructions+=1;goto B4ee3e3;
case 0x4ee3e8:goto L4ee3e8;
case 0x4ee3eb:c.instructions+=5;goto B4ee3eb;
case 0x4ee3ee:c.instructions+=4;goto B4ee3ee;
case 0x4ee3f5:c.instructions+=3;goto B4ee3f5;
case 0x4ee3f8:c.instructions+=2;goto B4ee3f8;
case 0x4ee3fa:c.instructions+=1;goto B4ee3fa;
case 0x4ee3fc:goto L4ee3fc;
case 0x4ee3fe:goto L4ee3fe;
case 0x4ee401:c.instructions+=9;goto B4ee401;
case 0x4ee404:c.instructions+=8;goto B4ee404;
case 0x4ee407:c.instructions+=7;goto B4ee407;
case 0x4ee409:c.instructions+=6;goto B4ee409;
case 0x4ee40c:c.instructions+=5;goto B4ee40c;
case 0x4ee40e:c.instructions+=4;goto B4ee40e;
case 0x4ee412:c.instructions+=3;goto B4ee412;
case 0x4ee415:c.instructions+=2;goto B4ee415;
case 0x4ee417:c.instructions+=1;goto B4ee417;
case 0x4ee41c:goto L4ee41c;
case 0x4ee41e:c.instructions+=5;goto B4ee41e;
case 0x4ee421:c.instructions+=4;goto B4ee421;
case 0x4ee424:c.instructions+=3;goto B4ee424;
case 0x4ee426:c.instructions+=2;goto B4ee426;
case 0x4ee42a:c.instructions+=1;goto B4ee42a;
case 0x4ee42c:goto L4ee42c;
case 0x4ee42f:c.instructions+=3;goto B4ee42f;
case 0x4ee434:c.instructions+=2;goto B4ee434;
case 0x4ee435:c.instructions+=1;goto B4ee435;
case 0x4ee43a:goto L4ee43a;
case 0x4ee43f:c.instructions+=6;goto B4ee43f;
case 0x4ee442:c.instructions+=5;goto B4ee442;
case 0x4ee445:c.instructions+=4;goto B4ee445;
case 0x4ee448:c.instructions+=3;goto B4ee448;
case 0x4ee44b:c.instructions+=2;goto B4ee44b;
case 0x4ee44d:c.instructions+=1;goto B4ee44d;
case 0x4ee44f:goto L4ee44f;
case 0x4ee451:goto L4ee451;
case 0x4ee454:c.instructions+=10;goto B4ee454;
case 0x4ee457:c.instructions+=9;goto B4ee457;
case 0x4ee45a:c.instructions+=8;goto B4ee45a;
case 0x4ee45c:c.instructions+=7;goto B4ee45c;
case 0x4ee45f:c.instructions+=6;goto B4ee45f;
case 0x4ee461:c.instructions+=5;goto B4ee461;
case 0x4ee463:c.instructions+=4;goto B4ee463;
case 0x4ee468:c.instructions+=3;goto B4ee468;
case 0x4ee46c:c.instructions+=2;goto B4ee46c;
case 0x4ee46f:c.instructions+=1;goto B4ee46f;
case 0x4ee474:goto L4ee474;
case 0x4ee476:c.instructions+=3;goto B4ee476;
case 0x4ee479:c.instructions+=2;goto B4ee479;
case 0x4ee47e:c.instructions+=1;goto B4ee47e;
case 0x4ee480:goto L4ee480;
case 0x4ee483:c.instructions+=3;goto B4ee483;
case 0x4ee484:c.instructions+=2;goto B4ee484;
case 0x4ee485:c.instructions+=1;goto B4ee485;
case 0x4ee48a:goto L4ee48a;
case 0x4ee48d:c.instructions+=3;goto B4ee48d;
case 0x4ee48e:c.instructions+=2;goto B4ee48e;
case 0x4ee491:c.instructions+=1;goto B4ee491;
case 0x4ee493:goto L4ee493;
case 0x4ee495:c.instructions+=2;goto B4ee495;
case 0x4ee49c:c.instructions+=1;goto B4ee49c;
case 0x4ee4a2:goto L4ee4a2;
case 0x4ee4a4:goto L4ee4a4;
case 0x4ee4a7:goto L4ee4a7;
case 0x4ee4a9:c.instructions+=1;goto B4ee4a9;
case 0x4ee4ae:goto L4ee4ae;
case 0x4ee4b0:c.instructions+=1;goto B4ee4b0;
case 0x4ee4b2:goto L4ee4b2;
case 0x4ee4b7:c.instructions+=1;goto B4ee4b7;
case 0x4ee4bc:goto L4ee4bc;
case 0x4ee4be:c.instructions+=1;goto B4ee4be;
case 0x4ee4c4:goto L4ee4c4;
case 0x4ee4c6:c.instructions+=1;goto B4ee4c6;
case 0x4ee4cb:goto L4ee4cb;
case 0x4ee4cc:c.instructions+=1;goto B4ee4cc;
case 0x4ee4d1:goto L4ee4d1;
case 0x4ee4d4:c.instructions+=4;goto B4ee4d4;
case 0x4ee4d7:c.instructions+=3;goto B4ee4d7;
case 0x4ee4da:c.instructions+=2;goto B4ee4da;
case 0x4ee4dc:c.instructions+=1;goto B4ee4dc;
case 0x4ee4de:goto L4ee4de;
case 0x4ee4e0:goto L4ee4e0;
case 0x4ee4e3:c.instructions+=1;goto B4ee4e3;
case 0x4ee4e9:goto L4ee4e9;
case 0x4ee4eb:c.instructions+=2;goto B4ee4eb;
case 0x4ee4ed:c.instructions+=1;goto B4ee4ed;
case 0x4ee4ef:goto L4ee4ef;
case 0x4ee4f1:c.instructions+=1;goto B4ee4f1;
case 0x4ee4f6:goto L4ee4f6;
case 0x4ee4f9:c.instructions+=4;goto B4ee4f9;
case 0x4ee4fc:c.instructions+=3;goto B4ee4fc;
case 0x4ee4fe:c.instructions+=2;goto B4ee4fe;
case 0x4ee502:c.instructions+=1;goto B4ee502;
case 0x4ee504:goto L4ee504;
case 0x4ee507:c.instructions+=6;goto B4ee507;
case 0x4ee50a:c.instructions+=5;goto B4ee50a;
case 0x4ee50b:c.instructions+=4;goto B4ee50b;
case 0x4ee50c:c.instructions+=3;goto B4ee50c;
case 0x4ee50d:c.instructions+=2;goto B4ee50d;
case 0x4ee50f:c.instructions+=1;goto B4ee50f;
case 0x4ee514:goto L4ee514;
case 0x4ee516:c.instructions+=1;goto B4ee516;
case 0x4ee518:goto L4ee518;
case 0x4ee51a:goto L4ee51a;
case 0x4ee51c:c.instructions+=3;goto B4ee51c;
case 0x4ee520:c.instructions+=2;goto B4ee520;
case 0x4ee523:c.instructions+=1;goto B4ee523;
case 0x4ee528:goto L4ee528;
case 0x4ee52a:c.instructions+=5;goto B4ee52a;
case 0x4ee52d:c.instructions+=4;goto B4ee52d;
case 0x4ee530:c.instructions+=3;goto B4ee530;
case 0x4ee532:c.instructions+=2;goto B4ee532;
case 0x4ee536:c.instructions+=1;goto B4ee536;
case 0x4ee538:goto L4ee538;
case 0x4ee53b:c.instructions+=5;goto B4ee53b;
case 0x4ee53e:c.instructions+=4;goto B4ee53e;
case 0x4ee53f:c.instructions+=3;goto B4ee53f;
case 0x4ee544:c.instructions+=2;goto B4ee544;
case 0x4ee547:c.instructions+=1;goto B4ee547;
case 0x4ee54c:goto L4ee54c;
case 0x4ee54f:c.instructions+=3;goto B4ee54f;
case 0x4ee550:c.instructions+=2;goto B4ee550;
case 0x4ee551:c.instructions+=1;goto B4ee551;
case 0x4ee556:goto L4ee556;
case 0x4ee559:c.instructions+=5;goto B4ee559;
case 0x4ee560:c.instructions+=4;goto B4ee560;
case 0x4ee563:c.instructions+=3;goto B4ee563;
case 0x4ee566:c.instructions+=2;goto B4ee566;
case 0x4ee568:c.instructions+=1;goto B4ee568;
case 0x4ee56a:goto L4ee56a;
case 0x4ee56c:goto L4ee56c;
case 0x4ee56f:c.instructions+=18;goto B4ee56f;
case 0x4ee572:c.instructions+=17;goto B4ee572;
case 0x4ee575:c.instructions+=16;goto B4ee575;
case 0x4ee577:c.instructions+=15;goto B4ee577;
case 0x4ee57a:c.instructions+=14;goto B4ee57a;
case 0x4ee57c:c.instructions+=13;goto B4ee57c;
case 0x4ee57f:c.instructions+=12;goto B4ee57f;
case 0x4ee582:c.instructions+=11;goto B4ee582;
case 0x4ee585:c.instructions+=10;goto B4ee585;
case 0x4ee586:c.instructions+=9;goto B4ee586;
case 0x4ee589:c.instructions+=8;goto B4ee589;
case 0x4ee58c:c.instructions+=7;goto B4ee58c;
case 0x4ee58e:c.instructions+=6;goto B4ee58e;
case 0x4ee591:c.instructions+=5;goto B4ee591;
case 0x4ee593:c.instructions+=4;goto B4ee593;
case 0x4ee596:c.instructions+=3;goto B4ee596;
case 0x4ee599:c.instructions+=2;goto B4ee599;
case 0x4ee59c:c.instructions+=1;goto B4ee59c;
case 0x4ee5a0:goto L4ee5a0;
case 0x4ee5a1:c.instructions+=1;goto B4ee5a1;
case 0x4ee5a6:goto L4ee5a6;
case 0x4ee5a7:c.instructions+=2;goto B4ee5a7;
case 0x4ee5ac:c.instructions+=1;goto B4ee5ac;
case 0x4ee5b1:goto L4ee5b1;
case 0x4ee5b3:c.instructions+=2;goto B4ee5b3;
case 0x4ee5b6:c.instructions+=1;goto B4ee5b6;
case 0x4ee5bc:goto L4ee5bc;
case 0x4ee5bf:c.instructions+=5;goto B4ee5bf;
case 0x4ee5c6:c.instructions+=4;goto B4ee5c6;
case 0x4ee5c8:c.instructions+=3;goto B4ee5c8;
case 0x4ee5c9:c.instructions+=2;goto B4ee5c9;
case 0x4ee5ca:c.instructions+=1;goto B4ee5ca;
case 0x4ee5cc:goto L4ee5cc;
case 0x4ee5cf:c.instructions+=3;goto B4ee5cf;
case 0x4ee5d0:c.instructions+=2;goto B4ee5d0;
case 0x4ee5d2:c.instructions+=1;goto B4ee5d2;
case 0x4ee5d7:goto L4ee5d7;
case 0x4ee5dc:goto L4ee5dc;
case 0x4ee5dd:c.instructions+=1;goto B4ee5dd;
case 0x4ee5e2:goto L4ee5e2;
case 0x4ee5e5:c.instructions+=2;goto B4ee5e5;
case 0x4ee5e7:c.instructions+=1;goto B4ee5e7;
case 0x4ee5e9:goto L4ee5e9;
case 0x4ee5ec:c.instructions+=4;goto B4ee5ec;
case 0x4ee5ee:c.instructions+=3;goto B4ee5ee;
case 0x4ee5f3:c.instructions+=2;goto B4ee5f3;
case 0x4ee5f4:c.instructions+=1;goto B4ee5f4;
case 0x4ee5f9:goto L4ee5f9;
case 0x4ee5fa:c.instructions+=1;goto B4ee5fa;
case 0x4ee5ff:goto L4ee5ff;
case 0x4ee602:goto L4ee602;
case 0x4ee608:c.instructions+=1;goto B4ee608;
case 0x4ee60d:goto L4ee60d;
case 0x4ee610:c.instructions+=5;goto B4ee610;
case 0x4ee613:c.instructions+=4;goto B4ee613;
case 0x4ee614:c.instructions+=3;goto B4ee614;
case 0x4ee61a:c.instructions+=2;goto B4ee61a;
case 0x4ee61b:c.instructions+=1;goto B4ee61b;
case 0x4ee620:goto L4ee620;
case 0x4ee622:c.instructions+=1;goto B4ee622;
case 0x4ee627:goto L4ee627;
case 0x4ee62a:c.instructions+=3;goto B4ee62a;
case 0x4ee62c:c.instructions+=2;goto B4ee62c;
case 0x4ee62d:c.instructions+=1;goto B4ee62d;
case 0x4ee632:goto L4ee632;
case 0x4ee635:c.instructions+=7;goto B4ee635;
case 0x4ee638:c.instructions+=6;goto B4ee638;
case 0x4ee63a:c.instructions+=5;goto B4ee63a;
case 0x4ee63b:c.instructions+=4;goto B4ee63b;
case 0x4ee642:c.instructions+=3;goto B4ee642;
case 0x4ee644:c.instructions+=2;goto B4ee644;
case 0x4ee645:c.instructions+=1;goto B4ee645;
case 0x4ee650:goto L4ee650;
case 0x4ee651:c.instructions+=2;goto B4ee651;
case 0x4ee653:c.instructions+=1;goto B4ee653;
case 0x4ee658:goto L4ee658;
case 0x4ee65d:c.instructions+=1;goto B4ee65d;
case 0x4ee65f:goto L4ee65f;
case 0x4ee660:c.instructions+=1;goto B4ee660;
case 0x4ee665:goto L4ee665;
case 0x4ee668:goto L4ee668;
case 0x4ee66a:c.instructions+=2;goto B4ee66a;
case 0x4ee66b:c.instructions+=1;goto B4ee66b;
case 0x4ee670:goto L4ee670;
case 0x4ee676:c.instructions+=3;goto B4ee676;
case 0x4ee679:c.instructions+=2;goto B4ee679;
case 0x4ee67b:c.instructions+=1;goto B4ee67b;
case 0x4ee67d:goto L4ee67d;
case 0x4ee67e:c.instructions+=1;goto B4ee67e;
case 0x4ee683:goto L4ee683;
case 0x4ee684:goto L4ee684;
case 0x4ee690:goto L4ee690;
case 0x4ee692:c.instructions+=14;goto B4ee692;
case 0x4ee697:c.instructions+=13;goto B4ee697;
case 0x4ee69d:c.instructions+=12;goto B4ee69d;
case 0x4ee69e:c.instructions+=11;goto B4ee69e;
case 0x4ee6a5:c.instructions+=10;goto B4ee6a5;
case 0x4ee6a6:c.instructions+=9;goto B4ee6a6;
case 0x4ee6aa:c.instructions+=8;goto B4ee6aa;
case 0x4ee6ab:c.instructions+=7;goto B4ee6ab;
case 0x4ee6ac:c.instructions+=6;goto B4ee6ac;
case 0x4ee6ad:c.instructions+=5;goto B4ee6ad;
case 0x4ee6ae:c.instructions+=4;goto B4ee6ae;
case 0x4ee6b0:c.instructions+=3;goto B4ee6b0;
case 0x4ee6b1:c.instructions+=2;goto B4ee6b1;
case 0x4ee6b5:c.instructions+=1;goto B4ee6b5;
case 0x4ee6ba:goto L4ee6ba;
case 0x4ee6bc:c.instructions+=13;goto B4ee6bc;
case 0x4ee6be:c.instructions+=12;goto B4ee6be;
case 0x4ee6bf:c.instructions+=11;goto B4ee6bf;
case 0x4ee6c1:c.instructions+=10;goto B4ee6c1;
case 0x4ee6c2:c.instructions+=9;goto B4ee6c2;
case 0x4ee6c7:c.instructions+=8;goto B4ee6c7;
case 0x4ee6cd:c.instructions+=7;goto B4ee6cd;
case 0x4ee6d0:c.instructions+=6;goto B4ee6d0;
case 0x4ee6d3:c.instructions+=5;goto B4ee6d3;
case 0x4ee6d8:c.instructions+=4;goto B4ee6d8;
case 0x4ee6d9:c.instructions+=3;goto B4ee6d9;
case 0x4ee6df:c.instructions+=2;goto B4ee6df;
case 0x4ee6e3:c.instructions+=1;goto B4ee6e3;
case 0x4ee6e8:goto L4ee6e8;
case 0x4ee6eb:c.instructions+=9;goto B4ee6eb;
case 0x4ee6f0:c.instructions+=8;goto B4ee6f0;
case 0x4ee6f5:c.instructions+=7;goto B4ee6f5;
case 0x4ee6f7:c.instructions+=6;goto B4ee6f7;
case 0x4ee6fc:c.instructions+=5;goto B4ee6fc;
case 0x4ee701:c.instructions+=4;goto B4ee701;
case 0x4ee702:c.instructions+=3;goto B4ee702;
case 0x4ee708:c.instructions+=2;goto B4ee708;
case 0x4ee70d:c.instructions+=1;goto B4ee70d;
case 0x4ee712:goto L4ee712;
case 0x4ee715:c.instructions+=8;goto B4ee715;
case 0x4ee716:c.instructions+=7;goto B4ee716;
case 0x4ee717:c.instructions+=6;goto B4ee717;
case 0x4ee719:c.instructions+=5;goto B4ee719;
case 0x4ee71e:c.instructions+=4;goto B4ee71e;
case 0x4ee71f:c.instructions+=3;goto B4ee71f;
case 0x4ee725:c.instructions+=2;goto B4ee725;
case 0x4ee72a:c.instructions+=1;goto B4ee72a;
case 0x4ee72f:goto L4ee72f;
case 0x4ee732:c.instructions+=3;goto B4ee732;
case 0x4ee737:c.instructions+=2;goto B4ee737;
case 0x4ee738:c.instructions+=1;goto B4ee738;
case 0x4ee73d:goto L4ee73d;
case 0x4ee743:c.instructions+=10;goto B4ee743;
case 0x4ee746:c.instructions+=9;goto B4ee746;
case 0x4ee74c:c.instructions+=8;goto B4ee74c;
case 0x4ee74f:c.instructions+=7;goto B4ee74f;
case 0x4ee752:c.instructions+=6;goto B4ee752;
case 0x4ee755:c.instructions+=5;goto B4ee755;
case 0x4ee758:c.instructions+=4;goto B4ee758;
case 0x4ee75e:c.instructions+=3;goto B4ee75e;
case 0x4ee761:c.instructions+=2;goto B4ee761;
case 0x4ee762:c.instructions+=1;goto B4ee762;
case 0x4ee767:goto L4ee767;
case 0x4ee76a:c.instructions+=15;goto B4ee76a;
case 0x4ee76d:c.instructions+=14;goto B4ee76d;
case 0x4ee770:c.instructions+=13;goto B4ee770;
case 0x4ee773:c.instructions+=12;goto B4ee773;
case 0x4ee776:c.instructions+=11;goto B4ee776;
case 0x4ee779:c.instructions+=10;goto B4ee779;
case 0x4ee780:c.instructions+=9;goto B4ee780;
case 0x4ee786:c.instructions+=8;goto B4ee786;
case 0x4ee78c:c.instructions+=7;goto B4ee78c;
case 0x4ee792:c.instructions+=6;goto B4ee792;
case 0x4ee795:c.instructions+=5;goto B4ee795;
case 0x4ee798:c.instructions+=4;goto B4ee798;
case 0x4ee79d:c.instructions+=3;goto B4ee79d;
case 0x4ee79e:c.instructions+=2;goto B4ee79e;
case 0x4ee7a3:c.instructions+=1;goto B4ee7a3;
case 0x4ee7a8:goto L4ee7a8;
case 0x4ee7ab:c.instructions+=4;goto B4ee7ab;
case 0x4ee7ae:c.instructions+=3;goto B4ee7ae;
case 0x4ee7b3:c.instructions+=2;goto B4ee7b3;
case 0x4ee7b4:c.instructions+=1;goto B4ee7b4;
case 0x4ee7b9:goto L4ee7b9;
case 0x4ee7bc:c.instructions+=4;goto B4ee7bc;
case 0x4ee7bf:c.instructions+=3;goto B4ee7bf;
case 0x4ee7c4:c.instructions+=2;goto B4ee7c4;
case 0x4ee7c5:c.instructions+=1;goto B4ee7c5;
case 0x4ee7ca:goto L4ee7ca;
case 0x4ee7cd:c.instructions+=4;goto B4ee7cd;
case 0x4ee7d0:c.instructions+=3;goto B4ee7d0;
case 0x4ee7d5:c.instructions+=2;goto B4ee7d5;
case 0x4ee7d6:c.instructions+=1;goto B4ee7d6;
case 0x4ee7db:goto L4ee7db;
case 0x4ee7de:c.instructions+=4;goto B4ee7de;
case 0x4ee7e1:c.instructions+=3;goto B4ee7e1;
case 0x4ee7e6:c.instructions+=2;goto B4ee7e6;
case 0x4ee7e7:c.instructions+=1;goto B4ee7e7;
case 0x4ee7ec:goto L4ee7ec;
case 0x4ee7ef:c.instructions+=4;goto B4ee7ef;
case 0x4ee7f2:c.instructions+=3;goto B4ee7f2;
case 0x4ee7f7:c.instructions+=2;goto B4ee7f7;
case 0x4ee7fa:c.instructions+=1;goto B4ee7fa;
case 0x4ee802:goto L4ee802;
case 0x4ee805:c.instructions+=4;goto B4ee805;
case 0x4ee80b:c.instructions+=3;goto B4ee80b;
case 0x4ee80c:c.instructions+=2;goto B4ee80c;
case 0x4ee80d:c.instructions+=1;goto B4ee80d;
case 0x4ee812:goto L4ee812;
case 0x4ee815:c.instructions+=4;goto B4ee815;
case 0x4ee818:c.instructions+=3;goto B4ee818;
case 0x4ee819:c.instructions+=2;goto B4ee819;
case 0x4ee81a:c.instructions+=1;goto B4ee81a;
case 0x4ee81f:goto L4ee81f;
case 0x4ee821:c.instructions+=7;goto B4ee821;
case 0x4ee825:c.instructions+=6;goto B4ee825;
case 0x4ee828:c.instructions+=5;goto B4ee828;
case 0x4ee82b:c.instructions+=4;goto B4ee82b;
case 0x4ee82c:c.instructions+=3;goto B4ee82c;
case 0x4ee82d:c.instructions+=2;goto B4ee82d;
case 0x4ee831:c.instructions+=1;goto B4ee831;
case 0x4ee833:goto L4ee833;
case 0x4ee835:c.instructions+=5;goto B4ee835;
case 0x4ee83c:c.instructions+=4;goto B4ee83c;
case 0x4ee842:c.instructions+=3;goto B4ee842;
case 0x4ee84c:c.instructions+=2;goto B4ee84c;
case 0x4ee856:c.instructions+=1;goto B4ee856;
case 0x4ee85b:goto L4ee85b;
case 0x4ee85d:c.instructions+=1;goto B4ee85d;
case 0x4ee862:goto L4ee862;
case 0x4ee868:c.instructions+=2;goto B4ee868;
case 0x4ee86a:c.instructions+=1;goto B4ee86a;
case 0x4ee86c:goto L4ee86c;
case 0x4ee86f:c.instructions+=6;goto B4ee86f;
case 0x4ee871:c.instructions+=5;goto B4ee871;
case 0x4ee874:c.instructions+=4;goto B4ee874;
case 0x4ee875:c.instructions+=3;goto B4ee875;
case 0x4ee878:c.instructions+=2;goto B4ee878;
case 0x4ee879:c.instructions+=1;goto B4ee879;
case 0x4ee87c:goto L4ee87c;
case 0x4ee87e:c.instructions+=1;goto B4ee87e;
case 0x4ee883:goto L4ee883;
case 0x4ee889:c.instructions+=11;goto B4ee889;
case 0x4ee88f:c.instructions+=10;goto B4ee88f;
case 0x4ee890:c.instructions+=9;goto B4ee890;
case 0x4ee896:c.instructions+=8;goto B4ee896;
case 0x4ee89a:c.instructions+=7;goto B4ee89a;
case 0x4ee89c:c.instructions+=6;goto B4ee89c;
case 0x4ee89d:c.instructions+=5;goto B4ee89d;
case 0x4ee89e:c.instructions+=4;goto B4ee89e;
case 0x4ee89f:c.instructions+=3;goto B4ee89f;
case 0x4ee8a6:c.instructions+=2;goto B4ee8a6;
case 0x4ee8a9:c.instructions+=1;goto B4ee8a9;
case 0x4ee8b0:goto L4ee8b0;
case 0x4ee8b1:c.instructions+=15;goto B4ee8b1;
case 0x4ee8b3:c.instructions+=14;goto B4ee8b3;
case 0x4ee8b5:c.instructions+=13;goto B4ee8b5;
case 0x4ee8ba:c.instructions+=12;goto B4ee8ba;
case 0x4ee8c0:c.instructions+=11;goto B4ee8c0;
case 0x4ee8c1:c.instructions+=10;goto B4ee8c1;
case 0x4ee8c8:c.instructions+=9;goto B4ee8c8;
case 0x4ee8ce:c.instructions+=8;goto B4ee8ce;
case 0x4ee8d1:c.instructions+=7;goto B4ee8d1;
case 0x4ee8d2:c.instructions+=6;goto B4ee8d2;
case 0x4ee8d3:c.instructions+=5;goto B4ee8d3;
case 0x4ee8d4:c.instructions+=4;goto B4ee8d4;
case 0x4ee8d6:c.instructions+=3;goto B4ee8d6;
case 0x4ee8d7:c.instructions+=2;goto B4ee8d7;
case 0x4ee8da:c.instructions+=1;goto B4ee8da;
case 0x4ee8df:goto L4ee8df;
case 0x4ee8e2:c.instructions+=13;goto B4ee8e2;
case 0x4ee8e4:c.instructions+=12;goto B4ee8e4;
case 0x4ee8e6:c.instructions+=11;goto B4ee8e6;
case 0x4ee8e8:c.instructions+=10;goto B4ee8e8;
case 0x4ee8e9:c.instructions+=9;goto B4ee8e9;
case 0x4ee8eb:c.instructions+=8;goto B4ee8eb;
case 0x4ee8f0:c.instructions+=7;goto B4ee8f0;
case 0x4ee8f5:c.instructions+=6;goto B4ee8f5;
case 0x4ee8f8:c.instructions+=5;goto B4ee8f8;
case 0x4ee8f9:c.instructions+=4;goto B4ee8f9;
case 0x4ee8fb:c.instructions+=3;goto B4ee8fb;
case 0x4ee8fe:c.instructions+=2;goto B4ee8fe;
case 0x4ee904:c.instructions+=1;goto B4ee904;
case 0x4ee909:goto L4ee909;
case 0x4ee90f:c.instructions+=7;goto B4ee90f;
case 0x4ee915:c.instructions+=6;goto B4ee915;
case 0x4ee91b:c.instructions+=5;goto B4ee91b;
case 0x4ee921:c.instructions+=4;goto B4ee921;
case 0x4ee924:c.instructions+=3;goto B4ee924;
case 0x4ee925:c.instructions+=2;goto B4ee925;
case 0x4ee929:c.instructions+=1;goto B4ee929;
case 0x4ee92e:goto L4ee92e;
case 0x4ee92f:c.instructions+=2;goto B4ee92f;
case 0x4ee930:c.instructions+=1;goto B4ee930;
case 0x4ee935:goto L4ee935;
case 0x4ee938:c.instructions+=4;goto B4ee938;
case 0x4ee93d:c.instructions+=3;goto B4ee93d;
case 0x4ee944:c.instructions+=2;goto B4ee944;
case 0x4ee94b:c.instructions+=1;goto B4ee94b;
case 0x4ee950:goto L4ee950;
case 0x4ee951:c.instructions+=5;goto B4ee951;
case 0x4ee956:c.instructions+=4;goto B4ee956;
case 0x4ee95c:c.instructions+=3;goto B4ee95c;
case 0x4ee95e:c.instructions+=2;goto B4ee95e;
case 0x4ee95f:c.instructions+=1;goto B4ee95f;
case 0x4ee964:goto L4ee964;
case 0x4ee965:c.instructions+=5;goto B4ee965;
case 0x4ee96a:c.instructions+=4;goto B4ee96a;
case 0x4ee96d:c.instructions+=3;goto B4ee96d;
case 0x4ee96f:c.instructions+=2;goto B4ee96f;
case 0x4ee970:c.instructions+=1;goto B4ee970;
case 0x4ee975:goto L4ee975;
case 0x4ee976:c.instructions+=5;goto B4ee976;
case 0x4ee97b:c.instructions+=4;goto B4ee97b;
case 0x4ee981:c.instructions+=3;goto B4ee981;
case 0x4ee983:c.instructions+=2;goto B4ee983;
case 0x4ee984:c.instructions+=1;goto B4ee984;
case 0x4ee989:goto L4ee989;
case 0x4ee98a:c.instructions+=5;goto B4ee98a;
case 0x4ee98f:c.instructions+=4;goto B4ee98f;
case 0x4ee995:c.instructions+=3;goto B4ee995;
case 0x4ee997:c.instructions+=2;goto B4ee997;
case 0x4ee998:c.instructions+=1;goto B4ee998;
case 0x4ee99d:goto L4ee99d;
case 0x4ee9a0:c.instructions+=6;goto B4ee9a0;
case 0x4ee9a1:c.instructions+=5;goto B4ee9a1;
case 0x4ee9a6:c.instructions+=4;goto B4ee9a6;
case 0x4ee9ac:c.instructions+=3;goto B4ee9ac;
case 0x4ee9ae:c.instructions+=2;goto B4ee9ae;
case 0x4ee9af:c.instructions+=1;goto B4ee9af;
case 0x4ee9b4:goto L4ee9b4;
case 0x4ee9b6:c.instructions+=2;goto B4ee9b6;
case 0x4ee9bb:c.instructions+=1;goto B4ee9bb;
case 0x4ee9be:goto L4ee9be;
case 0x4ee9c0:goto L4ee9c0;
case 0x4ee9c3:c.instructions+=22;goto B4ee9c3;
case 0x4ee9c6:c.instructions+=21;goto B4ee9c6;
case 0x4ee9c9:c.instructions+=20;goto B4ee9c9;
case 0x4ee9cc:c.instructions+=19;goto B4ee9cc;
case 0x4ee9d2:c.instructions+=18;goto B4ee9d2;
case 0x4ee9d5:c.instructions+=17;goto B4ee9d5;
case 0x4ee9db:c.instructions+=16;goto B4ee9db;
case 0x4ee9de:c.instructions+=15;goto B4ee9de;
case 0x4ee9e0:c.instructions+=14;goto B4ee9e0;
case 0x4ee9e3:c.instructions+=13;goto B4ee9e3;
case 0x4ee9e6:c.instructions+=12;goto B4ee9e6;
case 0x4ee9e9:c.instructions+=11;goto B4ee9e9;
case 0x4ee9ef:c.instructions+=10;goto B4ee9ef;
case 0x4ee9f5:c.instructions+=9;goto B4ee9f5;
case 0x4ee9f6:c.instructions+=8;goto B4ee9f6;
case 0x4ee9f8:c.instructions+=7;goto B4ee9f8;
case 0x4ee9fb:c.instructions+=6;goto B4ee9fb;
case 0x4ee9fe:c.instructions+=5;goto B4ee9fe;
case 0x4eea05:c.instructions+=4;goto B4eea05;
case 0x4eea0c:c.instructions+=3;goto B4eea0c;
case 0x4eea13:c.instructions+=2;goto B4eea13;
case 0x4eea1a:c.instructions+=1;goto B4eea1a;
case 0x4eea1f:goto L4eea1f;
case 0x4eea21:c.instructions+=2;goto B4eea21;
case 0x4eea23:c.instructions+=1;goto B4eea23;
case 0x4eea28:goto L4eea28;
case 0x4eea2b:c.instructions+=6;goto B4eea2b;
case 0x4eea2e:c.instructions+=5;goto B4eea2e;
case 0x4eea2f:c.instructions+=4;goto B4eea2f;
case 0x4eea30:c.instructions+=3;goto B4eea30;
case 0x4eea33:c.instructions+=2;goto B4eea33;
case 0x4eea36:c.instructions+=1;goto B4eea36;
case 0x4eea3c:goto L4eea3c;
case 0x4eea3e:c.instructions+=1;goto B4eea3e;
case 0x4eea43:goto L4eea43;
case 0x4eea46:c.instructions+=3;goto B4eea46;
case 0x4eea4b:c.instructions+=2;goto B4eea4b;
case 0x4eea4c:c.instructions+=1;goto B4eea4c;
case 0x4eea51:goto L4eea51;
case 0x4eea57:c.instructions+=4;goto B4eea57;
case 0x4eea5a:c.instructions+=3;goto B4eea5a;
case 0x4eea5f:c.instructions+=2;goto B4eea5f;
case 0x4eea60:c.instructions+=1;goto B4eea60;
case 0x4eea65:goto L4eea65;
case 0x4eea68:c.instructions+=3;goto B4eea68;
case 0x4eea6a:c.instructions+=2;goto B4eea6a;
case 0x4eea70:c.instructions+=1;goto B4eea70;
case 0x4eea75:goto L4eea75;
case 0x4eea7b:c.instructions+=10;goto B4eea7b;
case 0x4eea7e:c.instructions+=9;goto B4eea7e;
case 0x4eea7f:c.instructions+=8;goto B4eea7f;
case 0x4eea85:c.instructions+=7;goto B4eea85;
case 0x4eea86:c.instructions+=6;goto B4eea86;
case 0x4eea88:c.instructions+=5;goto B4eea88;
case 0x4eea89:c.instructions+=4;goto B4eea89;
case 0x4eea90:c.instructions+=3;goto B4eea90;
case 0x4eea92:c.instructions+=2;goto B4eea92;
case 0x4eea93:c.instructions+=1;goto B4eea93;
case 0x4eeaa0:goto L4eeaa0;
case 0x4eeaa1:c.instructions+=2;goto B4eeaa1;
case 0x4eeaa3:c.instructions+=1;goto B4eeaa3;
case 0x4eeaa8:goto L4eeaa8;
case 0x4eeaad:c.instructions+=1;goto B4eeaad;
case 0x4eeaaf:goto L4eeaaf;
case 0x4eeab0:c.instructions+=1;goto B4eeab0;
case 0x4eeab5:goto L4eeab5;
case 0x4eeab8:goto L4eeab8;
case 0x4eeaba:c.instructions+=2;goto B4eeaba;
case 0x4eeabb:c.instructions+=1;goto B4eeabb;
case 0x4eeac0:goto L4eeac0;
case 0x4eeac2:c.instructions+=11;goto B4eeac2;
case 0x4eeac7:c.instructions+=10;goto B4eeac7;
case 0x4eeacd:c.instructions+=9;goto B4eeacd;
case 0x4eeace:c.instructions+=8;goto B4eeace;
case 0x4eead5:c.instructions+=7;goto B4eead5;
case 0x4eead6:c.instructions+=6;goto B4eead6;
case 0x4eead7:c.instructions+=5;goto B4eead7;
case 0x4eead9:c.instructions+=4;goto B4eead9;
case 0x4eeadd:c.instructions+=3;goto B4eeadd;
case 0x4eeae0:c.instructions+=2;goto B4eeae0;
case 0x4eeae8:c.instructions+=1;goto B4eeae8;
case 0x4eeaed:goto L4eeaed;
case 0x4eeaef:c.instructions+=2;goto B4eeaef;
case 0x4eeaf7:c.instructions+=1;goto B4eeaf7;
case 0x4eeafc:goto L4eeafc;
case 0x4eeb00:c.instructions+=4;goto B4eeb00;
case 0x4eeb01:c.instructions+=3;goto B4eeb01;
case 0x4eeb08:c.instructions+=2;goto B4eeb08;
case 0x4eeb0b:c.instructions+=1;goto B4eeb0b;
case 0x4eeb10:goto L4eeb10;
case 0x4eeb12:c.instructions+=7;goto B4eeb12;
case 0x4eeb17:c.instructions+=6;goto B4eeb17;
case 0x4eeb1d:c.instructions+=5;goto B4eeb1d;
case 0x4eeb1e:c.instructions+=4;goto B4eeb1e;
case 0x4eeb25:c.instructions+=3;goto B4eeb25;
case 0x4eeb26:c.instructions+=2;goto B4eeb26;
case 0x4eeb2b:c.instructions+=1;goto B4eeb2b;
case 0x4eeb30:goto L4eeb30;
case 0x4eeb33:c.instructions+=4;goto B4eeb33;
case 0x4eeb37:c.instructions+=3;goto B4eeb37;
case 0x4eeb39:c.instructions+=2;goto B4eeb39;
case 0x4eeb41:c.instructions+=1;goto B4eeb41;
case 0x4eeb43:goto L4eeb43;
case 0x4eeb47:c.instructions+=3;goto B4eeb47;
case 0x4eeb48:c.instructions+=2;goto B4eeb48;
case 0x4eeb4a:c.instructions+=1;goto B4eeb4a;
case 0x4eeb4f:goto L4eeb4f;
case 0x4eeb53:c.instructions+=3;goto B4eeb53;
case 0x4eeb5a:c.instructions+=2;goto B4eeb5a;
case 0x4eeb5d:c.instructions+=1;goto B4eeb5d;
case 0x4eeb5e:goto L4eeb5e;
case 0x4eeb62:c.instructions+=4;goto B4eeb62;
case 0x4eeb64:c.instructions+=3;goto B4eeb64;
case 0x4eeb6b:c.instructions+=2;goto B4eeb6b;
case 0x4eeb6e:c.instructions+=1;goto B4eeb6e;
case 0x4eeb70:goto L4eeb70;
case 0x4eeb71:c.instructions+=2;goto B4eeb71;
case 0x4eeb73:c.instructions+=1;goto B4eeb73;
case 0x4eeb78:goto L4eeb78;
case 0x4eeb7d:c.instructions+=1;goto B4eeb7d;
case 0x4eeb7f:goto L4eeb7f;
case 0x4eeb80:c.instructions+=1;goto B4eeb80;
case 0x4eeb85:goto L4eeb85;
case 0x4eeb88:goto L4eeb88;
case 0x4eeb8a:c.instructions+=2;goto B4eeb8a;
case 0x4eeb8b:c.instructions+=1;goto B4eeb8b;
case 0x4eeb90:goto L4eeb90;
case 0x4eeb91:c.instructions+=2;goto B4eeb91;
case 0x4eeb93:c.instructions+=1;goto B4eeb93;
case 0x4eeb98:goto L4eeb98;
case 0x4eeb9b:c.instructions+=2;goto B4eeb9b;
case 0x4eeb9d:c.instructions+=1;goto B4eeb9d;
case 0x4eeb9f:goto L4eeb9f;
case 0x4eeba2:c.instructions+=1;goto B4eeba2;
case 0x4eeba4:goto L4eeba4;
case 0x4eebaa:c.instructions+=2;goto B4eebaa;
case 0x4eebb0:c.instructions+=1;goto B4eebb0;
case 0x4eebb2:goto L4eebb2;
case 0x4eebb4:goto L4eebb4;
case 0x4eebb5:c.instructions+=3;goto B4eebb5;
case 0x4eebba:c.instructions+=2;goto B4eebba;
case 0x4eebbb:c.instructions+=1;goto B4eebbb;
case 0x4eebc0:goto L4eebc0;
case 0x4eebc2:c.instructions+=1;goto B4eebc2;
case 0x4eebc4:goto L4eebc4;
case 0x4eebca:c.instructions+=4;goto B4eebca;
case 0x4eebd0:c.instructions+=3;goto B4eebd0;
case 0x4eebd5:c.instructions+=2;goto B4eebd5;
case 0x4eebdb:c.instructions+=1;goto B4eebdb;
case 0x4eebe0:goto L4eebe0;
case 0x4eebe6:c.instructions+=4;goto B4eebe6;
case 0x4eebe7:c.instructions+=3;goto B4eebe7;
case 0x4eebe8:c.instructions+=2;goto B4eebe8;
case 0x4eebea:c.instructions+=1;goto B4eebea;
case 0x4eebef:goto L4eebef;
case 0x4eebf2:c.instructions+=2;goto B4eebf2;
case 0x4eebf7:c.instructions+=1;goto B4eebf7;
case 0x4eebfc:goto L4eebfc;
case 0x4eebfd:c.instructions+=2;goto B4eebfd;
case 0x4eebfe:c.instructions+=1;goto B4eebfe;
case 0x4eec03:goto L4eec03;
case 0x4eec06:c.instructions+=3;goto B4eec06;
case 0x4eec0b:c.instructions+=2;goto B4eec0b;
case 0x4eec11:c.instructions+=1;goto B4eec11;
case 0x4eec16:goto L4eec16;
case 0x4eec17:c.instructions+=2;goto B4eec17;
case 0x4eec18:c.instructions+=1;goto B4eec18;
case 0x4eec1d:goto L4eec1d;
case 0x4eec23:c.instructions+=5;goto B4eec23;
case 0x4eec28:c.instructions+=4;goto B4eec28;
case 0x4eec2b:c.instructions+=3;goto B4eec2b;
case 0x4eec2e:c.instructions+=2;goto B4eec2e;
case 0x4eec2f:c.instructions+=1;goto B4eec2f;
case 0x4eec31:goto L4eec31;
case 0x4eec36:c.instructions+=1;goto B4eec36;
case 0x4eec38:goto L4eec38;
case 0x4eec3b:c.instructions+=1;goto B4eec3b;
case 0x4eec3d:goto L4eec3d;
case 0x4eec40:c.instructions+=3;goto B4eec40;
case 0x4eec42:c.instructions+=2;goto B4eec42;
case 0x4eec43:c.instructions+=1;goto B4eec43;
case 0x4eec48:goto L4eec48;
case 0x4eec4b:c.instructions+=3;goto B4eec4b;
case 0x4eec4d:c.instructions+=2;goto B4eec4d;
case 0x4eec4e:c.instructions+=1;goto B4eec4e;
case 0x4eec53:goto L4eec53;
case 0x4eec56:c.instructions+=3;goto B4eec56;
case 0x4eec5b:c.instructions+=2;goto B4eec5b;
case 0x4eec5c:c.instructions+=1;goto B4eec5c;
case 0x4eec61:goto L4eec61;
case 0x4eec62:c.instructions+=1;goto B4eec62;
case 0x4eec67:goto L4eec67;
case 0x4eec6a:c.instructions+=3;goto B4eec6a;
case 0x4eec6f:c.instructions+=2;goto B4eec6f;
case 0x4eec70:c.instructions+=1;goto B4eec70;
case 0x4eec75:goto L4eec75;
case 0x4eec76:c.instructions+=1;goto B4eec76;
case 0x4eec7b:goto L4eec7b;
case 0x4eec7e:goto L4eec7e;
case 0x4eec80:c.instructions+=2;goto B4eec80;
case 0x4eec81:c.instructions+=1;goto B4eec81;
case 0x4eec90:goto L4eec90;
case 0x4eec91:c.instructions+=2;goto B4eec91;
case 0x4eec93:c.instructions+=1;goto B4eec93;
case 0x4eec98:goto L4eec98;
case 0x4eec9a:c.instructions+=3;goto B4eec9a;
case 0x4eeca1:c.instructions+=2;goto B4eeca1;
case 0x4eeca8:c.instructions+=1;goto B4eeca8;
case 0x4eecad:goto L4eecad;
case 0x4eecb0:c.instructions+=2;goto B4eecb0;
case 0x4eecb2:c.instructions+=1;goto B4eecb2;
case 0x4eecb4:goto L4eecb4;
case 0x4eecb7:c.instructions+=1;goto B4eecb7;
case 0x4eecb9:goto L4eecb9;
case 0x4eecbf:c.instructions+=2;goto B4eecbf;
case 0x4eecc5:c.instructions+=1;goto B4eecc5;
case 0x4eecc7:goto L4eecc7;
case 0x4eecc9:goto L4eecc9;
case 0x4eecca:c.instructions+=3;goto B4eecca;
case 0x4eeccf:c.instructions+=2;goto B4eeccf;
case 0x4eecd0:c.instructions+=1;goto B4eecd0;
case 0x4eecd5:goto L4eecd5;
case 0x4eecd7:c.instructions+=1;goto B4eecd7;
case 0x4eecd9:goto L4eecd9;
case 0x4eecdf:c.instructions+=4;goto B4eecdf;
case 0x4eece5:c.instructions+=3;goto B4eece5;
case 0x4eecea:c.instructions+=2;goto B4eecea;
case 0x4eecf0:c.instructions+=1;goto B4eecf0;
case 0x4eecf5:goto L4eecf5;
case 0x4eecfb:c.instructions+=3;goto B4eecfb;
case 0x4eecfc:c.instructions+=2;goto B4eecfc;
case 0x4eecfe:c.instructions+=1;goto B4eecfe;
case 0x4eed03:goto L4eed03;
case 0x4eed04:c.instructions+=1;goto B4eed04;
case 0x4eed10:goto L4eed10;
case 0x4eed15:c.instructions+=5;goto B4eed15;
case 0x4eed16:c.instructions+=4;goto B4eed16;
case 0x4eed18:c.instructions+=3;goto B4eed18;
case 0x4eed1e:c.instructions+=2;goto B4eed1e;
case 0x4eed21:c.instructions+=1;goto B4eed21;
case 0x4eed27:goto L4eed27;
case 0x4eed2d:goto L4eed2d;
case 0x4eed30:c.instructions+=1;goto B4eed30;
case 0x4eed32:goto L4eed32;
case 0x4eed35:c.instructions+=1;goto B4eed35;
case 0x4eed3b:goto L4eed3b;
case 0x4eed3f:c.instructions+=2;goto B4eed3f;
case 0x4eed45:c.instructions+=1;goto B4eed45;
case 0x4eed47:goto L4eed47;
case 0x4eed4a:c.instructions+=1;goto B4eed4a;
case 0x4eed4c:goto L4eed4c;
case 0x4eed4e:c.instructions+=2;goto B4eed4e;
case 0x4eed50:c.instructions+=1;goto B4eed50;
case 0x4eed55:goto L4eed55;
case 0x4eed57:c.instructions+=1;goto B4eed57;
case 0x4eed59:goto L4eed59;
case 0x4eed5e:c.instructions+=1;goto B4eed5e;
case 0x4eed63:goto L4eed63;
case 0x4eed66:c.instructions+=1;goto B4eed66;
case 0x4eed6c:goto L4eed6c;
case 0x4eed6f:c.instructions+=1;goto B4eed6f;
case 0x4eed71:goto L4eed71;
case 0x4eed76:c.instructions+=1;goto B4eed76;
case 0x4eed7b:goto L4eed7b;
case 0x4eed7e:c.instructions+=1;goto B4eed7e;
case 0x4eed84:goto L4eed84;
case 0x4eed87:c.instructions+=1;goto B4eed87;
case 0x4eed8d:goto L4eed8d;
case 0x4eed8f:c.instructions+=2;goto B4eed8f;
case 0x4eed91:c.instructions+=1;goto B4eed91;
case 0x4eed96:goto L4eed96;
case 0x4eed98:c.instructions+=1;goto B4eed98;
case 0x4eed9e:goto L4eed9e;
case 0x4eeda3:c.instructions+=1;goto B4eeda3;
case 0x4eeda8:goto L4eeda8;
case 0x4eedae:c.instructions+=1;goto B4eedae;
case 0x4eedb4:goto L4eedb4;
case 0x4eedb7:c.instructions+=1;goto B4eedb7;
case 0x4eedb9:goto L4eedb9;
case 0x4eedbe:c.instructions+=1;goto B4eedbe;
case 0x4eedc3:goto L4eedc3;
case 0x4eedc6:c.instructions+=1;goto B4eedc6;
case 0x4eedc8:goto L4eedc8;
case 0x4eedca:c.instructions+=2;goto B4eedca;
case 0x4eedcc:c.instructions+=1;goto B4eedcc;
case 0x4eedd1:goto L4eedd1;
case 0x4eedd3:c.instructions+=1;goto B4eedd3;
case 0x4eedd5:goto L4eedd5;
case 0x4eedda:c.instructions+=1;goto B4eedda;
case 0x4eeddf:goto L4eeddf;
case 0x4eede2:c.instructions+=1;goto B4eede2;
case 0x4eede4:goto L4eede4;
case 0x4eede6:c.instructions+=2;goto B4eede6;
case 0x4eede8:c.instructions+=1;goto B4eede8;
case 0x4eeded:goto L4eeded;
case 0x4eedef:c.instructions+=1;goto B4eedef;
case 0x4eedf1:goto L4eedf1;
case 0x4eedf6:c.instructions+=1;goto B4eedf6;
case 0x4eedfb:goto L4eedfb;
case 0x4eedfe:c.instructions+=1;goto B4eedfe;
case 0x4eee00:goto L4eee00;
case 0x4eee02:c.instructions+=2;goto B4eee02;
case 0x4eee04:c.instructions+=1;goto B4eee04;
case 0x4eee09:goto L4eee09;
case 0x4eee0b:c.instructions+=4;goto B4eee0b;
case 0x4eee0d:c.instructions+=3;goto B4eee0d;
case 0x4eee10:c.instructions+=2;goto B4eee10;
case 0x4eee13:c.instructions+=1;goto B4eee13;
case 0x4eee18:goto L4eee18;
case 0x4eee1b:c.instructions+=1;goto B4eee1b;
case 0x4eee20:goto L4eee20;
case 0x4eee23:c.instructions+=1;goto B4eee23;
case 0x4eee29:goto L4eee29;
case 0x4eee2f:c.instructions+=1;goto B4eee2f;
case 0x4eee35:goto L4eee35;
case 0x4eee39:c.instructions+=2;goto B4eee39;
case 0x4eee3f:c.instructions+=1;goto B4eee3f;
case 0x4eee41:goto L4eee41;
case 0x4eee44:c.instructions+=1;goto B4eee44;
case 0x4eee46:goto L4eee46;
case 0x4eee48:c.instructions+=2;goto B4eee48;
case 0x4eee4a:c.instructions+=1;goto B4eee4a;
case 0x4eee4f:goto L4eee4f;
case 0x4eee51:c.instructions+=4;goto B4eee51;
case 0x4eee53:c.instructions+=3;goto B4eee53;
case 0x4eee56:c.instructions+=2;goto B4eee56;
case 0x4eee59:c.instructions+=1;goto B4eee59;
case 0x4eee5e:goto L4eee5e;
case 0x4eee61:c.instructions+=1;goto B4eee61;
case 0x4eee67:goto L4eee67;
case 0x4eee6a:c.instructions+=1;goto B4eee6a;
case 0x4eee6c:goto L4eee6c;
case 0x4eee71:c.instructions+=1;goto B4eee71;
case 0x4eee76:goto L4eee76;
case 0x4eee79:c.instructions+=1;goto B4eee79;
case 0x4eee7b:goto L4eee7b;
case 0x4eee7d:c.instructions+=2;goto B4eee7d;
case 0x4eee7f:c.instructions+=1;goto B4eee7f;
case 0x4eee84:goto L4eee84;
case 0x4eee86:c.instructions+=5;goto B4eee86;
case 0x4eee88:c.instructions+=4;goto B4eee88;
case 0x4eee8b:c.instructions+=3;goto B4eee8b;
case 0x4eee8c:c.instructions+=2;goto B4eee8c;
case 0x4eee8e:c.instructions+=1;goto B4eee8e;
case 0x4eee93:goto L4eee93;
case 0x4eee96:c.instructions+=1;goto B4eee96;
case 0x4eee9c:goto L4eee9c;
case 0x4eeea1:c.instructions+=1;goto B4eeea1;
case 0x4eeea6:goto L4eeea6;
case 0x4eeeac:c.instructions+=1;goto B4eeeac;
case 0x4eeeb2:goto L4eeeb2;
case 0x4eeeb5:c.instructions+=1;goto B4eeeb5;
case 0x4eeeb7:goto L4eeeb7;
case 0x4eeebc:c.instructions+=1;goto B4eeebc;
case 0x4eeec1:goto L4eeec1;
case 0x4eeec4:c.instructions+=1;goto B4eeec4;
case 0x4eeec6:goto L4eeec6;
case 0x4eeec8:c.instructions+=2;goto B4eeec8;
case 0x4eeeca:c.instructions+=1;goto B4eeeca;
case 0x4eeecf:goto L4eeecf;
case 0x4eeed1:c.instructions+=4;goto B4eeed1;
case 0x4eeed3:c.instructions+=3;goto B4eeed3;
case 0x4eeed6:c.instructions+=2;goto B4eeed6;
case 0x4eeed9:c.instructions+=1;goto B4eeed9;
case 0x4eeede:goto L4eeede;
case 0x4eeee1:c.instructions+=1;goto B4eeee1;
case 0x4eeee3:goto L4eeee3;
case 0x4eeee8:c.instructions+=1;goto B4eeee8;
case 0x4eeeed:goto L4eeeed;
case 0x4eeef0:c.instructions+=1;goto B4eeef0;
case 0x4eeef2:goto L4eeef2;
case 0x4eeef4:c.instructions+=2;goto B4eeef4;
case 0x4eeef6:c.instructions+=1;goto B4eeef6;
case 0x4eeefb:goto L4eeefb;
case 0x4eeefd:c.instructions+=4;goto B4eeefd;
case 0x4eeeff:c.instructions+=3;goto B4eeeff;
case 0x4eef01:c.instructions+=2;goto B4eef01;
case 0x4eef04:c.instructions+=1;goto B4eef04;
case 0x4eef06:goto L4eef06;
case 0x4eef09:c.instructions+=1;goto B4eef09;
case 0x4eef0b:goto L4eef0b;
case 0x4eef0f:c.instructions+=2;goto B4eef0f;
case 0x4eef15:c.instructions+=1;goto B4eef15;
case 0x4eef17:goto L4eef17;
case 0x4eef1a:c.instructions+=1;goto B4eef1a;
case 0x4eef1c:goto L4eef1c;
case 0x4eef1e:c.instructions+=2;goto B4eef1e;
case 0x4eef20:c.instructions+=1;goto B4eef20;
case 0x4eef25:goto L4eef25;
case 0x4eef27:c.instructions+=5;goto B4eef27;
case 0x4eef29:c.instructions+=4;goto B4eef29;
case 0x4eef2c:c.instructions+=3;goto B4eef2c;
case 0x4eef2d:c.instructions+=2;goto B4eef2d;
case 0x4eef2f:c.instructions+=1;goto B4eef2f;
case 0x4eef31:goto L4eef31;
case 0x4eef34:c.instructions+=1;goto B4eef34;
case 0x4eef36:goto L4eef36;
case 0x4eef39:c.instructions+=1;goto B4eef39;
case 0x4eef3b:goto L4eef3b;
case 0x4eef40:c.instructions+=1;goto B4eef40;
case 0x4eef42:goto L4eef42;
case 0x4eef48:c.instructions+=1;goto B4eef48;
case 0x4eef4a:goto L4eef4a;
case 0x4eef4d:c.instructions+=1;goto B4eef4d;
case 0x4eef4f:goto L4eef4f;
case 0x4eef54:c.instructions+=1;goto B4eef54;
case 0x4eef56:goto L4eef56;
case 0x4eef59:c.instructions+=1;goto B4eef59;
case 0x4eef5b:goto L4eef5b;
case 0x4eef5d:c.instructions+=2;goto B4eef5d;
case 0x4eef5f:c.instructions+=1;goto B4eef5f;
case 0x4eef64:goto L4eef64;
case 0x4eef66:c.instructions+=3;goto B4eef66;
case 0x4eef68:c.instructions+=2;goto B4eef68;
case 0x4eef6b:c.instructions+=1;goto B4eef6b;
case 0x4eef6d:goto L4eef6d;
case 0x4eef70:goto L4eef70;
case 0x4eef72:goto L4eef72;
case 0x4eef77:goto L4eef77;
case 0x4eef7d:c.instructions+=1;goto B4eef7d;
case 0x4eef83:goto L4eef83;
case 0x4eef89:c.instructions+=6;goto B4eef89;
case 0x4eef8f:c.instructions+=5;goto B4eef8f;
case 0x4eef90:c.instructions+=4;goto B4eef90;
case 0x4eef92:c.instructions+=3;goto B4eef92;
case 0x4eef98:c.instructions+=2;goto B4eef98;
case 0x4eef9d:c.instructions+=1;goto B4eef9d;
case 0x4eefa2:goto L4eefa2;
case 0x4eefa4:c.instructions+=1;goto B4eefa4;
case 0x4eefa9:goto L4eefa9;
case 0x4eefb0:c.instructions+=1;goto B4eefb0;
case 0x4eefb2:goto L4eefb2;
case 0x4eefb5:c.instructions+=3;goto B4eefb5;
case 0x4eefba:c.instructions+=2;goto B4eefba;
case 0x4eefbb:c.instructions+=1;goto B4eefbb;
case 0x4eefc0:goto L4eefc0;
case 0x4eefc3:c.instructions+=2;goto B4eefc3;
case 0x4eefc5:c.instructions+=1;goto B4eefc5;
case 0x4eefc7:goto L4eefc7;
case 0x4eefca:c.instructions+=2;goto B4eefca;
case 0x4eefcf:c.instructions+=1;goto B4eefcf;
case 0x4eefd4:goto L4eefd4;
case 0x4eefd5:c.instructions+=2;goto B4eefd5;
case 0x4eefd6:c.instructions+=1;goto B4eefd6;
case 0x4eefdb:goto L4eefdb;
case 0x4eefdc:c.instructions+=1;goto B4eefdc;
case 0x4eefe1:goto L4eefe1;
case 0x4eefe4:c.instructions+=1;goto B4eefe4;
case 0x4eefe6:goto L4eefe6;
case 0x4eefe9:c.instructions+=2;goto B4eefe9;
case 0x4eefee:c.instructions+=1;goto B4eefee;
case 0x4eeff3:goto L4eeff3;
case 0x4eeff4:c.instructions+=2;goto B4eeff4;
case 0x4eeff5:c.instructions+=1;goto B4eeff5;
case 0x4eeffa:goto L4eeffa;
case 0x4eeffb:c.instructions+=1;goto B4eeffb;
default:missing_instruction(c.pc);}
B4ee000:L4ee000:{c.instructions+=2;NFSU2_TR(0x4ee000);
__builtin_memmove((R+4),(R+24),4);
}
B4ee002:{NFSU2_TR(0x4ee002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee007ull));
TAIL_STATIC(0x4affa0u,4af);
}
B4ee007:L4ee007:{c.instructions+=4;NFSU2_TR(0x4ee007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee008:{NFSU2_TR(0x4ee008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee009:{NFSU2_TR(0x4ee009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ee00a:{NFSU2_TR(0x4ee00a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ee00d:L4ee00d:{c.instructions+=3;NFSU2_TR(0x4ee00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee013:{NFSU2_TR(0x4ee013);
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
B4ee015:{NFSU2_TR(0x4ee015);
if(r1(R+518)){{goto L4ee155;}}
}
B4ee01b:L4ee01b:{c.instructions+=2;NFSU2_TR(0x4ee01b);
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
B4ee020:{NFSU2_TR(0x4ee020);
if(r1(R+518)){{goto L4ee155;}}
}
B4ee026:L4ee026:{c.instructions+=9;NFSU2_TR(0x4ee026);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4ee02c:{NFSU2_TR(0x4ee02c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4ee02e:{NFSU2_TR(0x4ee02e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee031:{NFSU2_TR(0x4ee031);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ee034:{NFSU2_TR(0x4ee034);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ee03a:{NFSU2_TR(0x4ee03a);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ee040:{NFSU2_TR(0x4ee040);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ee042:{NFSU2_TR(0x4ee042);
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
B4ee045:{NFSU2_TR(0x4ee045);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ee155;}}
}
B4ee04b:L4ee04b:{c.instructions+=2;NFSU2_TR(0x4ee04b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee04e:{NFSU2_TR(0x4ee04e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee053ull));
TAIL_STATIC(0x511e00u,511);
}
B4ee053:L4ee053:{c.instructions+=4;NFSU2_TR(0x4ee053);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee055:{NFSU2_TR(0x4ee055);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee057:{NFSU2_TR(0x4ee057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee058:{NFSU2_TR(0x4ee058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee05dull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B4ee05d:L4ee05d:{c.instructions+=6;NFSU2_TR(0x4ee05d);
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
B4ee060:{NFSU2_TR(0x4ee060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee061:{NFSU2_TR(0x4ee061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee06b:{NFSU2_TR(0x4ee06b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee06c:{NFSU2_TR(0x4ee06c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ee06d:{NFSU2_TR(0x4ee06d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ee070:L4ee070:{c.instructions+=2;NFSU2_TR(0x4ee070);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd05fc3a3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd05fc3a3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd05fc3a3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ee075:{NFSU2_TR(0x4ee075);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ee155;}}
}
B4ee07b:L4ee07b:{c.instructions+=3;NFSU2_TR(0x4ee07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee07e:{NFSU2_TR(0x4ee07e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee07f:{NFSU2_TR(0x4ee07f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee084ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4ee084:L4ee084:{c.instructions+=5;NFSU2_TR(0x4ee084);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4ee089:{NFSU2_TR(0x4ee089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee08c:{NFSU2_TR(0x4ee08c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee08f:{NFSU2_TR(0x4ee08f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ee092:{NFSU2_TR(0x4ee092);
if(r1(R+518)){{goto L4ee0fa;}}
}
B4ee094:L4ee094:{c.instructions+=2;NFSU2_TR(0x4ee094);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ee095:{NFSU2_TR(0x4ee095);
if(r1(R+518)){{goto L4ee0cd;}}
}
B4ee097:L4ee097:{c.instructions+=2;NFSU2_TR(0x4ee097);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ee09a:{NFSU2_TR(0x4ee09a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ee130;}}
}
B4ee0a0:L4ee0a0:{c.instructions+=10;NFSU2_TR(0x4ee0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee0a3:{NFSU2_TR(0x4ee0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee0a9:{NFSU2_TR(0x4ee0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee0ac:{NFSU2_TR(0x4ee0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee0ad:{NFSU2_TR(0x4ee0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee0b0:{NFSU2_TR(0x4ee0b0);
__builtin_memmove((R+0),(R+8),4);
}
B4ee0b2:{NFSU2_TR(0x4ee0b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee0b3:{NFSU2_TR(0x4ee0b3);
__builtin_memmove((R+4),(R+24),4);
}
B4ee0b5:{NFSU2_TR(0x4ee0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee0b8:{NFSU2_TR(0x4ee0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee0bdull));
TAIL_STATIC(0x496050u,496);
}
B4ee0bd:L4ee0bd:{c.instructions+=2;NFSU2_TR(0x4ee0bd);
__builtin_memmove((R+4),(R+24),4);
}
B4ee0bf:{NFSU2_TR(0x4ee0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee0c4ull));
TAIL_STATIC(0x4ed9a0u,4ed);
}
B4ee0c4:L4ee0c4:{c.instructions+=2;NFSU2_TR(0x4ee0c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee0cb:{NFSU2_TR(0x4ee0cb);
{goto L4ee130;}
}
B4ee0cd:L4ee0cd:{c.instructions+=2;NFSU2_TR(0x4ee0cd);
w4(R+4,u32(0x85ad40ull));
}
B4ee0d2:{NFSU2_TR(0x4ee0d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee0d7ull));
TAIL_STATIC(0x513c30u,513);
}
B4ee0d7:L4ee0d7:{c.instructions+=10;NFSU2_TR(0x4ee0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee0da:{NFSU2_TR(0x4ee0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee0dd:{NFSU2_TR(0x4ee0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee0e0:{NFSU2_TR(0x4ee0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee0e6:{NFSU2_TR(0x4ee0e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee0e7:{NFSU2_TR(0x4ee0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee0ea:{NFSU2_TR(0x4ee0ea);
__builtin_memmove((R+0),(R+4),4);
}
B4ee0ec:{NFSU2_TR(0x4ee0ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee0ed:{NFSU2_TR(0x4ee0ed);
__builtin_memmove((R+4),(R+24),4);
}
B4ee0ef:{NFSU2_TR(0x4ee0ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee0f4ull));
TAIL_STATIC(0x496050u,496);
}
B4ee0f4:L4ee0f4:{c.instructions+=3;NFSU2_TR(0x4ee0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee0f7:{NFSU2_TR(0x4ee0f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee0f8:{NFSU2_TR(0x4ee0f8);
{goto L4ee11a;}
}
B4ee0fa:L4ee0fa:{c.instructions+=4;NFSU2_TR(0x4ee0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee0fd:{NFSU2_TR(0x4ee0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee103:{NFSU2_TR(0x4ee103);
__builtin_memmove((R+4),(R+24),4);
}
B4ee105:{NFSU2_TR(0x4ee105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee10aull));
TAIL_STATIC(0x495fd0u,495);
}
B4ee10a:L4ee10a:{c.instructions+=4;NFSU2_TR(0x4ee10a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee10b:{NFSU2_TR(0x4ee10b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee10c:{NFSU2_TR(0x4ee10c);
w4(R+4,u32(0x85ad40ull));
}
B4ee111:{NFSU2_TR(0x4ee111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee116ull));
TAIL_STATIC(0x541540u,541);
}
B4ee116:L4ee116:{c.instructions+=2;NFSU2_TR(0x4ee116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee119:{NFSU2_TR(0x4ee119);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee11a:L4ee11a:{c.instructions+=2;NFSU2_TR(0x4ee11a);
__builtin_memmove((R+4),(R+24),4);
}
B4ee11c:{NFSU2_TR(0x4ee11c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee121ull));
TAIL_STATIC(0x495f00u,495);
}
B4ee121:L4ee121:{c.instructions+=3;NFSU2_TR(0x4ee121);
__builtin_memmove((R+4),(R+24),4);
}
B4ee123:{NFSU2_TR(0x4ee123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee124:{NFSU2_TR(0x4ee124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee129ull));
TAIL_STATIC(0x4ed8a0u,4ed);
}
B4ee129:L4ee129:{c.instructions+=1;NFSU2_TR(0x4ee129);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee130:L4ee130:{c.instructions+=3;NFSU2_TR(0x4ee130);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
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
B4ee134:{NFSU2_TR(0x4ee134);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee13b:{NFSU2_TR(0x4ee13b);
if(r1(R+518)){{goto L4ee155;}}
}
B4ee13d:L4ee13d:{c.instructions+=6;NFSU2_TR(0x4ee13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee140:{NFSU2_TR(0x4ee140);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee142:{NFSU2_TR(0x4ee142);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee147:{NFSU2_TR(0x4ee147);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee14c:{NFSU2_TR(0x4ee14c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee14d:{NFSU2_TR(0x4ee14d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee152ull));
TAIL_STATIC(0x537c00u,537);
}
B4ee152:L4ee152:{c.instructions+=1;NFSU2_TR(0x4ee152);
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
B4ee155:L4ee155:{c.instructions+=4;NFSU2_TR(0x4ee155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee156:{NFSU2_TR(0x4ee156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee157:{NFSU2_TR(0x4ee157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ee158:{NFSU2_TR(0x4ee158);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ee1a0:L4ee1a0:{c.instructions+=5;NFSU2_TR(0x4ee1a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1a1:{NFSU2_TR(0x4ee1a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1a2:{NFSU2_TR(0x4ee1a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1a4:{NFSU2_TR(0x4ee1a4);
__builtin_memmove((R+24),(R+4),4);
}
B4ee1a6:{NFSU2_TR(0x4ee1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee1abull));
TAIL_STATIC(0x4df9c0u,4df);
}
B4ee1ab:L4ee1ab:{c.instructions+=2;NFSU2_TR(0x4ee1ab);
__builtin_memmove((R+4),(R+24),4);
}
B4ee1ad:{NFSU2_TR(0x4ee1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee1b2ull));
TAIL_STATIC(0x495f70u,495);
}
B4ee1b2:L4ee1b2:{c.instructions+=3;NFSU2_TR(0x4ee1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee1b5:{NFSU2_TR(0x4ee1b5);
u8 U[4];
w4(U+0,u32(0x797a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1ba:{NFSU2_TR(0x4ee1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee1bfull));
TAIL_STATIC(0x505450u,505);
}
B4ee1bf:L4ee1bf:{c.instructions+=3;NFSU2_TR(0x4ee1bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1c0:{NFSU2_TR(0x4ee1c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1c1:{NFSU2_TR(0x4ee1c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee1c6ull));
TAIL_STATIC(0x537a60u,537);
}
B4ee1c6:L4ee1c6:{c.instructions+=4;NFSU2_TR(0x4ee1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee1c9:{NFSU2_TR(0x4ee1c9);
u8 U[4];
w4(U+0,u32(0x7979f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1ce:{NFSU2_TR(0x4ee1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee1d4:{NFSU2_TR(0x4ee1d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee1d9ull));
TAIL_STATIC(0x505450u,505);
}
B4ee1d9:L4ee1d9:{c.instructions+=3;NFSU2_TR(0x4ee1d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1da:{NFSU2_TR(0x4ee1da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1db:{NFSU2_TR(0x4ee1db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee1e0ull));
TAIL_STATIC(0x537a60u,537);
}
B4ee1e0:L4ee1e0:{c.instructions+=4;NFSU2_TR(0x4ee1e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4ee1e3:{NFSU2_TR(0x4ee1e3);
w4(R+4,u32(0x83aab4ull));
}
B4ee1e8:{NFSU2_TR(0x4ee1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee1ee:{NFSU2_TR(0x4ee1ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee1f3ull));
TAIL_STATIC(0x5026f0u,502);
}
B4ee1f3:L4ee1f3:{c.instructions+=2;NFSU2_TR(0x4ee1f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ee1f6:{NFSU2_TR(0x4ee1f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ee206;}}
}
B4ee1f8:L4ee1f8:{c.instructions+=4;NFSU2_TR(0x4ee1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee1fb:{NFSU2_TR(0x4ee1fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1fd:{NFSU2_TR(0x4ee1fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee1fe:{NFSU2_TR(0x4ee1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee203ull));
TAIL_STATIC(0x537950u,537);
}
B4ee203:L4ee203:{c.instructions+=1;NFSU2_TR(0x4ee203);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ee206:L4ee206:{c.instructions+=4;NFSU2_TR(0x4ee206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee207:{NFSU2_TR(0x4ee207);
__builtin_memmove((R+4),(R+24),4);
}
B4ee209:{NFSU2_TR(0x4ee209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee20a:{NFSU2_TR(0x4ee20a);
TAIL_STATIC(0x4afe00u,4af);
}
B4ee210:L4ee210:{c.instructions+=4;NFSU2_TR(0x4ee210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee211:{NFSU2_TR(0x4ee211);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee212:{NFSU2_TR(0x4ee212);
__builtin_memmove((R+24),(R+4),4);
}
B4ee214:{NFSU2_TR(0x4ee214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee219ull));
TAIL_STATIC(0x4e0160u,4e0);
}
B4ee219:L4ee219:{c.instructions+=3;NFSU2_TR(0x4ee219);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee21c:{NFSU2_TR(0x4ee21c);
u8 U[4];
w4(U+0,u32(0x797ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee221:{NFSU2_TR(0x4ee221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee226ull));
TAIL_STATIC(0x43db50u,43d);
}
B4ee226:L4ee226:{c.instructions+=3;NFSU2_TR(0x4ee226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee227:{NFSU2_TR(0x4ee227);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee228:{NFSU2_TR(0x4ee228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee22dull));
TAIL_STATIC(0x5379c0u,537);
}
B4ee22d:L4ee22d:{c.instructions+=2;NFSU2_TR(0x4ee22d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee22e:{NFSU2_TR(0x4ee22e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee233ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ee233:L4ee233:{c.instructions+=3;NFSU2_TR(0x4ee233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee236:{NFSU2_TR(0x4ee236);
u8 U[4];
w4(U+0,u32(0x797ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee23b:{NFSU2_TR(0x4ee23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee240ull));
TAIL_STATIC(0x43db50u,43d);
}
B4ee240:L4ee240:{c.instructions+=3;NFSU2_TR(0x4ee240);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee241:{NFSU2_TR(0x4ee241);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee242:{NFSU2_TR(0x4ee242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee247ull));
TAIL_STATIC(0x537a60u,537);
}
B4ee247:L4ee247:{c.instructions+=4;NFSU2_TR(0x4ee247);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee24a:{NFSU2_TR(0x4ee24a);
u8 U[4];
w4(U+0,u32(0x790edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee24f:{NFSU2_TR(0x4ee24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee255:{NFSU2_TR(0x4ee255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee25aull));
TAIL_STATIC(0x43db50u,43d);
}
B4ee25a:L4ee25a:{c.instructions+=3;NFSU2_TR(0x4ee25a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee25b:{NFSU2_TR(0x4ee25b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee25c:{NFSU2_TR(0x4ee25c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee261ull));
TAIL_STATIC(0x537a60u,537);
}
B4ee261:L4ee261:{c.instructions+=4;NFSU2_TR(0x4ee261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee264:{NFSU2_TR(0x4ee264);
u8 U[4];
w4(U+0,u32(0x797e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee269:{NFSU2_TR(0x4ee269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee26f:{NFSU2_TR(0x4ee26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee274ull));
TAIL_STATIC(0x43db50u,43d);
}
B4ee274:L4ee274:{c.instructions+=3;NFSU2_TR(0x4ee274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee275:{NFSU2_TR(0x4ee275);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee276:{NFSU2_TR(0x4ee276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee27bull));
TAIL_STATIC(0x5379c0u,537);
}
B4ee27b:L4ee27b:{c.instructions+=2;NFSU2_TR(0x4ee27b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee27c:{NFSU2_TR(0x4ee27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee281ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ee281:L4ee281:{c.instructions+=3;NFSU2_TR(0x4ee281);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee284:{NFSU2_TR(0x4ee284);
u8 U[4];
w4(U+0,u32(0x797eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee289:{NFSU2_TR(0x4ee289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee28eull));
TAIL_STATIC(0x43db50u,43d);
}
B4ee28e:L4ee28e:{c.instructions+=3;NFSU2_TR(0x4ee28e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee28f:{NFSU2_TR(0x4ee28f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee290:{NFSU2_TR(0x4ee290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee295ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ee295:L4ee295:{c.instructions+=3;NFSU2_TR(0x4ee295);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4ee298:{NFSU2_TR(0x4ee298);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee299:{NFSU2_TR(0x4ee299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee29eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ee29e:L4ee29e:{c.instructions+=3;NFSU2_TR(0x4ee29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee2a1:{NFSU2_TR(0x4ee2a1);
u8 U[4];
w4(U+0,u32(0x797ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2a6:{NFSU2_TR(0x4ee2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2abull));
TAIL_STATIC(0x505450u,505);
}
B4ee2ab:L4ee2ab:{c.instructions+=3;NFSU2_TR(0x4ee2ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2ac:{NFSU2_TR(0x4ee2ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2ad:{NFSU2_TR(0x4ee2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2b2ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ee2b2:L4ee2b2:{c.instructions+=2;NFSU2_TR(0x4ee2b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2b3:{NFSU2_TR(0x4ee2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2b8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ee2b8:L4ee2b8:{c.instructions+=3;NFSU2_TR(0x4ee2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee2bb:{NFSU2_TR(0x4ee2bb);
u8 U[4];
w4(U+0,u32(0x797e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2c0:{NFSU2_TR(0x4ee2c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2c5ull));
TAIL_STATIC(0x505450u,505);
}
B4ee2c5:L4ee2c5:{c.instructions+=3;NFSU2_TR(0x4ee2c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2c6:{NFSU2_TR(0x4ee2c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2c7:{NFSU2_TR(0x4ee2c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2ccull));
TAIL_STATIC(0x5379c0u,537);
}
B4ee2cc:L4ee2cc:{c.instructions+=2;NFSU2_TR(0x4ee2cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2cd:{NFSU2_TR(0x4ee2cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2d2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ee2d2:L4ee2d2:{c.instructions+=3;NFSU2_TR(0x4ee2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee2d5:{NFSU2_TR(0x4ee2d5);
u8 U[4];
w4(U+0,u32(0x797e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2da:{NFSU2_TR(0x4ee2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2dfull));
TAIL_STATIC(0x505450u,505);
}
B4ee2df:L4ee2df:{c.instructions+=3;NFSU2_TR(0x4ee2df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2e0:{NFSU2_TR(0x4ee2e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2e1:{NFSU2_TR(0x4ee2e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2e6ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ee2e6:L4ee2e6:{c.instructions+=2;NFSU2_TR(0x4ee2e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee2e7:{NFSU2_TR(0x4ee2e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2ecull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ee2ec:L4ee2ec:{c.instructions+=3;NFSU2_TR(0x4ee2ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4ee2ef:{NFSU2_TR(0x4ee2ef);
w4(R+4,u32(0x83aab4ull));
}
B4ee2f4:{NFSU2_TR(0x4ee2f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee2f9ull));
TAIL_STATIC(0x5026f0u,502);
}
B4ee2f9:L4ee2f9:{c.instructions+=2;NFSU2_TR(0x4ee2f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ee2fc:{NFSU2_TR(0x4ee2fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ee30c;}}
}
B4ee2fe:L4ee2fe:{c.instructions+=4;NFSU2_TR(0x4ee2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee301:{NFSU2_TR(0x4ee301);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee303:{NFSU2_TR(0x4ee303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee304:{NFSU2_TR(0x4ee304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee309ull));
TAIL_STATIC(0x537950u,537);
}
B4ee309:L4ee309:{c.instructions+=1;NFSU2_TR(0x4ee309);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ee30c:L4ee30c:{c.instructions+=4;NFSU2_TR(0x4ee30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee30d:{NFSU2_TR(0x4ee30d);
__builtin_memmove((R+4),(R+24),4);
}
B4ee30f:{NFSU2_TR(0x4ee30f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee310:{NFSU2_TR(0x4ee310);
TAIL_STATIC(0x4b0140u,4b0);
}
B4ee320:L4ee320:{c.instructions+=14;NFSU2_TR(0x4ee320);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee321:{NFSU2_TR(0x4ee321);
__builtin_memmove((R+20),(R+16),4);
}
B4ee323:{NFSU2_TR(0x4ee323);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee325:{NFSU2_TR(0x4ee325);
u8 U[4];
w4(U+0,u32(0x776397ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee32a:{NFSU2_TR(0x4ee32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee330:{NFSU2_TR(0x4ee330);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee331:{NFSU2_TR(0x4ee331);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee338:{NFSU2_TR(0x4ee338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4ee33b:{NFSU2_TR(0x4ee33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee33e:{NFSU2_TR(0x4ee33e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee33f:{NFSU2_TR(0x4ee33f);
__builtin_memmove((R+28),(R+4),4);
}
B4ee341:{NFSU2_TR(0x4ee341);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee342:{NFSU2_TR(0x4ee342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee345:{NFSU2_TR(0x4ee345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee34aull));
TAIL_STATIC(0x551de0u,551);
}
B4ee34a:L4ee34a:{c.instructions+=10;NFSU2_TR(0x4ee34a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee34d:{NFSU2_TR(0x4ee34d);
u8 U[4];
w4(U+0,u32(0x797f20ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ee353:{NFSU2_TR(0x4ee353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee35a:{NFSU2_TR(0x4ee35a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ee35c:{NFSU2_TR(0x4ee35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee35f:{NFSU2_TR(0x4ee35f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee361:{NFSU2_TR(0x4ee361);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee365:{NFSU2_TR(0x4ee365);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee369:{NFSU2_TR(0x4ee369);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee36d:{NFSU2_TR(0x4ee36d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee372ull));
TAIL_STATIC(0x575620u,575);
}
B4ee372:L4ee372:{c.instructions+=3;NFSU2_TR(0x4ee372);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee375:{NFSU2_TR(0x4ee375);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee377:{NFSU2_TR(0x4ee377);
if(r1(R+518)){{goto L4ee389;}}
}
B4ee379:L4ee379:{c.instructions+=5;NFSU2_TR(0x4ee379);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee37c:{NFSU2_TR(0x4ee37c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4ee37e:{NFSU2_TR(0x4ee37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee381:{NFSU2_TR(0x4ee381);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4ee387:{NFSU2_TR(0x4ee387);
{goto L4ee38b;}
}
B4ee389:L4ee389:{c.instructions+=1;NFSU2_TR(0x4ee389);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ee38b:L4ee38b:{c.instructions+=3;NFSU2_TR(0x4ee38b);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee38d:{NFSU2_TR(0x4ee38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee390:{NFSU2_TR(0x4ee390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee395ull));
TAIL_STATIC(0x575620u,575);
}
B4ee395:L4ee395:{c.instructions+=5;NFSU2_TR(0x4ee395);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee398:{NFSU2_TR(0x4ee398);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee39b:{NFSU2_TR(0x4ee39b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee39d:{NFSU2_TR(0x4ee39d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee3a1:{NFSU2_TR(0x4ee3a1);
if(r1(R+518)){{goto L4ee3b4;}}
}
B4ee3a3:L4ee3a3:{c.instructions+=6;NFSU2_TR(0x4ee3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee3a6:{NFSU2_TR(0x4ee3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee3a9:{NFSU2_TR(0x4ee3a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee3aa:{NFSU2_TR(0x4ee3aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee3ab:{NFSU2_TR(0x4ee3ab);
__builtin_memmove((R+4),(R+0),4);
}
B4ee3ad:{NFSU2_TR(0x4ee3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee3b2ull));
TAIL_STATIC(0x4e0440u,4e0);
}
B4ee3b2:L4ee3b2:{c.instructions+=1;NFSU2_TR(0x4ee3b2);
{goto L4ee3b6;}
}
B4ee3b4:L4ee3b4:{c.instructions+=1;NFSU2_TR(0x4ee3b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ee3b6:L4ee3b6:{c.instructions+=6;NFSU2_TR(0x4ee3b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee3b7:{NFSU2_TR(0x4ee3b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee3b8:{NFSU2_TR(0x4ee3b8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee3ba:{NFSU2_TR(0x4ee3ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee3be:{NFSU2_TR(0x4ee3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee3c1:{NFSU2_TR(0x4ee3c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee3c6ull));
TAIL_STATIC(0x575620u,575);
}
B4ee3c6:L4ee3c6:{c.instructions+=7;NFSU2_TR(0x4ee3c6);
__builtin_memmove((R+24),(R+0),4);
}
B4ee3c8:{NFSU2_TR(0x4ee3c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee3cb:{NFSU2_TR(0x4ee3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee3ce:{NFSU2_TR(0x4ee3ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee3d0:{NFSU2_TR(0x4ee3d0);
w4(R+12,u32(0x3ull));
}
B4ee3d5:{NFSU2_TR(0x4ee3d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ee3d8:{NFSU2_TR(0x4ee3d8);
if(r1(R+518)){{goto L4ee3fc;}}
}
B4ee3da:L4ee3da:{c.instructions+=4;NFSU2_TR(0x4ee3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee3dd:{NFSU2_TR(0x4ee3dd);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee3e2:{NFSU2_TR(0x4ee3e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee3e3:{NFSU2_TR(0x4ee3e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee3e8ull));
TAIL_STATIC(0x537a60u,537);
}
B4ee3e8:L4ee3e8:{c.instructions+=6;NFSU2_TR(0x4ee3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee3eb:{NFSU2_TR(0x4ee3eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ee3ee:{NFSU2_TR(0x4ee3ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee3f5:{NFSU2_TR(0x4ee3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee3f8:{NFSU2_TR(0x4ee3f8);
__builtin_memmove((R+0),(R+24),4);
}
B4ee3fa:{NFSU2_TR(0x4ee3fa);
{goto L4ee3fe;}
}
B4ee3fc:L4ee3fc:{c.instructions+=1;NFSU2_TR(0x4ee3fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ee3fe:L4ee3fe:{c.instructions+=10;NFSU2_TR(0x4ee3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee401:{NFSU2_TR(0x4ee401);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee404:{NFSU2_TR(0x4ee404);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4ee407:{NFSU2_TR(0x4ee407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ee409:{NFSU2_TR(0x4ee409);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee40c:{NFSU2_TR(0x4ee40c);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee40e:{NFSU2_TR(0x4ee40e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee412:{NFSU2_TR(0x4ee412);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee415:{NFSU2_TR(0x4ee415);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ee417:{NFSU2_TR(0x4ee417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee41cull));
TAIL_STATIC(0x575620u,575);
}
B4ee41c:L4ee41c:{c.instructions+=6;NFSU2_TR(0x4ee41c);
__builtin_memmove((R+24),(R+0),4);
}
B4ee41e:{NFSU2_TR(0x4ee41e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee421:{NFSU2_TR(0x4ee421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee424:{NFSU2_TR(0x4ee424);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee426:{NFSU2_TR(0x4ee426);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee42a:{NFSU2_TR(0x4ee42a);
if(r1(R+518)){{goto L4ee44f;}}
}
B4ee42c:L4ee42c:{c.instructions+=4;NFSU2_TR(0x4ee42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee42f:{NFSU2_TR(0x4ee42f);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee434:{NFSU2_TR(0x4ee434);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee435:{NFSU2_TR(0x4ee435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee43aull));
TAIL_STATIC(0x537a60u,537);
}
B4ee43a:L4ee43a:{c.instructions+=7;NFSU2_TR(0x4ee43a);
w4(R+4,u32(0x2ull));
}
B4ee43f:{NFSU2_TR(0x4ee43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee442:{NFSU2_TR(0x4ee442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ee445:{NFSU2_TR(0x4ee445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee448:{NFSU2_TR(0x4ee448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee44b:{NFSU2_TR(0x4ee44b);
__builtin_memmove((R+0),(R+24),4);
}
B4ee44d:{NFSU2_TR(0x4ee44d);
{goto L4ee451;}
}
B4ee44f:L4ee44f:{c.instructions+=1;NFSU2_TR(0x4ee44f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ee451:L4ee451:{c.instructions+=11;NFSU2_TR(0x4ee451);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee454:{NFSU2_TR(0x4ee454);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee457:{NFSU2_TR(0x4ee457);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4ee45a:{NFSU2_TR(0x4ee45a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ee45c:{NFSU2_TR(0x4ee45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee45f:{NFSU2_TR(0x4ee45f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ee461:{NFSU2_TR(0x4ee461);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee463:{NFSU2_TR(0x4ee463);
w4(R+4,u32(0x85ad40ull));
}
B4ee468:{NFSU2_TR(0x4ee468);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee46c:{NFSU2_TR(0x4ee46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee46f:{NFSU2_TR(0x4ee46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee474ull));
TAIL_STATIC(0x500ee0u,500);
}
B4ee474:L4ee474:{c.instructions+=4;NFSU2_TR(0x4ee474);
__builtin_memmove((R+24),(R+0),4);
}
B4ee476:{NFSU2_TR(0x4ee476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee479:{NFSU2_TR(0x4ee479);
w4(R+12,u32(0x1ull));
}
B4ee47e:{NFSU2_TR(0x4ee47e);
__builtin_memmove((R+28),(R+28),4);
}
B4ee480:L4ee480:{c.instructions+=4;NFSU2_TR(0x4ee480);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee483:{NFSU2_TR(0x4ee483);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee484:{NFSU2_TR(0x4ee484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee485:{NFSU2_TR(0x4ee485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee48aull));
TAIL_STATIC(0x496870u,496);
}
B4ee48a:L4ee48a:{c.instructions+=4;NFSU2_TR(0x4ee48a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ee48d:{NFSU2_TR(0x4ee48d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4ee48e:{NFSU2_TR(0x4ee48e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ee491:{NFSU2_TR(0x4ee491);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ee480u);}goto L4ee480;}}
}
B4ee493:L4ee493:{c.instructions+=3;NFSU2_TR(0x4ee493);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee495:{NFSU2_TR(0x4ee495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee49c:{NFSU2_TR(0x4ee49c);
if(r1(R+518)){{goto L4ee5bc;}}
}
B4ee4a2:L4ee4a2:{c.instructions+=1;NFSU2_TR(0x4ee4a2);
{goto L4ee4a7;}
}
B4ee4a4:L4ee4a4:{c.instructions+=1;NFSU2_TR(0x4ee4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ee4a7:L4ee4a7:{c.instructions+=2;NFSU2_TR(0x4ee4a7);
__builtin_memmove((R+4),(R+24),4);
}
B4ee4a9:{NFSU2_TR(0x4ee4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee4aeull));
TAIL_STATIC(0x533110u,533);
}
B4ee4ae:L4ee4ae:{c.instructions+=2;NFSU2_TR(0x4ee4ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ee4b0:{NFSU2_TR(0x4ee4b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ee4c4;}}
}
B4ee4b2:L4ee4b2:{c.instructions+=2;NFSU2_TR(0x4ee4b2);
w4(R+4,u32(0x85b940ull));
}
B4ee4b7:{NFSU2_TR(0x4ee4b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee4bcull));
TAIL_STATIC(0x501690u,501);
}
B4ee4bc:L4ee4bc:{c.instructions+=2;NFSU2_TR(0x4ee4bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ee4be:{NFSU2_TR(0x4ee4be);
if(r1(R+518)){{goto L4ee5a6;}}
}
B4ee4c4:L4ee4c4:{c.instructions+=2;NFSU2_TR(0x4ee4c4);
__builtin_memmove((R+4),(R+24),4);
}
B4ee4c6:{NFSU2_TR(0x4ee4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee4cbull));
TAIL_STATIC(0x500de0u,500);
}
B4ee4cb:L4ee4cb:{c.instructions+=2;NFSU2_TR(0x4ee4cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee4cc:{NFSU2_TR(0x4ee4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee4d1ull));
TAIL_STATIC(0x4965f0u,496);
}
B4ee4d1:L4ee4d1:{c.instructions+=5;NFSU2_TR(0x4ee4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee4d4:{NFSU2_TR(0x4ee4d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ee4d7:{NFSU2_TR(0x4ee4d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee4da:{NFSU2_TR(0x4ee4da);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ee4dc:{NFSU2_TR(0x4ee4dc);
if(r1(R+518)){{goto L4ee4ef;}}
}
B4ee4de:L4ee4de:{c.instructions+=1;NFSU2_TR(0x4ee4de);
__builtin_memmove((R+28),(R+28),4);
}
B4ee4e0:L4ee4e0:{c.instructions+=2;NFSU2_TR(0x4ee4e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ee4e3:{NFSU2_TR(0x4ee4e3);
if(r1(R+518)){{goto L4ee5a0;}}
}
B4ee4e9:L4ee4e9:{c.instructions+=3;NFSU2_TR(0x4ee4e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ee4eb:{NFSU2_TR(0x4ee4eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ee4ed:{NFSU2_TR(0x4ee4ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ee4e0u);}goto L4ee4e0;}}
}
B4ee4ef:L4ee4ef:{c.instructions+=2;NFSU2_TR(0x4ee4ef);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee4f1:{NFSU2_TR(0x4ee4f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee4f6ull));
TAIL_STATIC(0x575620u,575);
}
B4ee4f6:L4ee4f6:{c.instructions+=5;NFSU2_TR(0x4ee4f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee4f9:{NFSU2_TR(0x4ee4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee4fc:{NFSU2_TR(0x4ee4fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee4fe:{NFSU2_TR(0x4ee4fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee502:{NFSU2_TR(0x4ee502);
if(r1(R+518)){{goto L4ee518;}}
}
B4ee504:L4ee504:{c.instructions+=7;NFSU2_TR(0x4ee504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee507:{NFSU2_TR(0x4ee507);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee50a:{NFSU2_TR(0x4ee50a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee50b:{NFSU2_TR(0x4ee50b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee50c:{NFSU2_TR(0x4ee50c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee50d:{NFSU2_TR(0x4ee50d);
__builtin_memmove((R+4),(R+0),4);
}
B4ee50f:{NFSU2_TR(0x4ee50f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee514ull));
TAIL_STATIC(0x4b0d50u,4b0);
}
B4ee514:L4ee514:{c.instructions+=2;NFSU2_TR(0x4ee514);
__builtin_memmove((R+24),(R+0),4);
}
B4ee516:{NFSU2_TR(0x4ee516);
{goto L4ee51a;}
}
B4ee518:L4ee518:{c.instructions+=1;NFSU2_TR(0x4ee518);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ee51a:L4ee51a:{c.instructions+=4;NFSU2_TR(0x4ee51a);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee51c:{NFSU2_TR(0x4ee51c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee520:{NFSU2_TR(0x4ee520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee523:{NFSU2_TR(0x4ee523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee528ull));
TAIL_STATIC(0x575620u,575);
}
B4ee528:L4ee528:{c.instructions+=6;NFSU2_TR(0x4ee528);
__builtin_memmove((R+12),(R+0),4);
}
B4ee52a:{NFSU2_TR(0x4ee52a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee52d:{NFSU2_TR(0x4ee52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee530:{NFSU2_TR(0x4ee530);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee532:{NFSU2_TR(0x4ee532);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee536:{NFSU2_TR(0x4ee536);
if(r1(R+518)){{goto L4ee56a;}}
}
B4ee538:L4ee538:{c.instructions+=6;NFSU2_TR(0x4ee538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee53b:{NFSU2_TR(0x4ee53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee53e:{NFSU2_TR(0x4ee53e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee53f:{NFSU2_TR(0x4ee53f);
u8 U[4];
w4(U+0,u32(0x797f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee544:{NFSU2_TR(0x4ee544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee547:{NFSU2_TR(0x4ee547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee54cull));
TAIL_STATIC(0x50b990u,50b);
}
B4ee54c:L4ee54c:{c.instructions+=4;NFSU2_TR(0x4ee54c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee54f:{NFSU2_TR(0x4ee54f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee550:{NFSU2_TR(0x4ee550);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee551:{NFSU2_TR(0x4ee551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee556ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ee556:L4ee556:{c.instructions+=6;NFSU2_TR(0x4ee556);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ee559:{NFSU2_TR(0x4ee559);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee560:{NFSU2_TR(0x4ee560);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee563:{NFSU2_TR(0x4ee563);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee566:{NFSU2_TR(0x4ee566);
__builtin_memmove((R+4),(R+12),4);
}
B4ee568:{NFSU2_TR(0x4ee568);
{goto L4ee56c;}
}
B4ee56a:L4ee56a:{c.instructions+=1;NFSU2_TR(0x4ee56a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ee56c:L4ee56c:{c.instructions+=19;NFSU2_TR(0x4ee56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee56f:{NFSU2_TR(0x4ee56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee572:{NFSU2_TR(0x4ee572);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4ee575:{NFSU2_TR(0x4ee575);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ee577:{NFSU2_TR(0x4ee577);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee57a:{NFSU2_TR(0x4ee57a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4ee57c:{NFSU2_TR(0x4ee57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee57f:{NFSU2_TR(0x4ee57f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee582:{NFSU2_TR(0x4ee582);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee585:{NFSU2_TR(0x4ee585);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ee586:{NFSU2_TR(0x4ee586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee589:{NFSU2_TR(0x4ee589);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee58c:{NFSU2_TR(0x4ee58c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ee58e:{NFSU2_TR(0x4ee58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee591:{NFSU2_TR(0x4ee591);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4ee593:{NFSU2_TR(0x4ee593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee596:{NFSU2_TR(0x4ee596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee599:{NFSU2_TR(0x4ee599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ee59c:{NFSU2_TR(0x4ee59c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee5a0:L4ee5a0:{c.instructions+=2;NFSU2_TR(0x4ee5a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5a1:{NFSU2_TR(0x4ee5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee5a6ull));
TAIL_STATIC(0x496a40u,496);
}
B4ee5a6:L4ee5a6:{c.instructions+=3;NFSU2_TR(0x4ee5a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5a7:{NFSU2_TR(0x4ee5a7);
w4(R+4,u32(0x85ad40ull));
}
B4ee5ac:{NFSU2_TR(0x4ee5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee5b1ull));
TAIL_STATIC(0x500ee0u,500);
}
B4ee5b1:L4ee5b1:{c.instructions+=3;NFSU2_TR(0x4ee5b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ee5b3:{NFSU2_TR(0x4ee5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee5b6:{NFSU2_TR(0x4ee5b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ee4a4u);}goto L4ee4a4;}}
}
B4ee5bc:L4ee5bc:{c.instructions+=6;NFSU2_TR(0x4ee5bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee5bf:{NFSU2_TR(0x4ee5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee5c6:{NFSU2_TR(0x4ee5c6);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4ee5c8:{NFSU2_TR(0x4ee5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee5c9:{NFSU2_TR(0x4ee5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ee5ca:{NFSU2_TR(0x4ee5ca);
if(r1(R+518)){{goto L4ee5d7;}}
}
B4ee5cc:L4ee5cc:{c.instructions+=4;NFSU2_TR(0x4ee5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee5cf:{NFSU2_TR(0x4ee5cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5d0:{NFSU2_TR(0x4ee5d0);
__builtin_memmove((R+4),(R+28),4);
}
B4ee5d2:{NFSU2_TR(0x4ee5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee5d7ull));
TAIL_STATIC(0x4b0e70u,4b0);
}
B4ee5d7:L4ee5d7:{c.instructions+=1;NFSU2_TR(0x4ee5d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee5dcull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ee5dc:L4ee5dc:{c.instructions+=2;NFSU2_TR(0x4ee5dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5dd:{NFSU2_TR(0x4ee5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee5e2ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4ee5e2:L4ee5e2:{c.instructions+=3;NFSU2_TR(0x4ee5e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ee5e5:{NFSU2_TR(0x4ee5e5);
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
B4ee5e7:{NFSU2_TR(0x4ee5e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ee602;}}
}
B4ee5e9:L4ee5e9:{c.instructions+=5;NFSU2_TR(0x4ee5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee5ec:{NFSU2_TR(0x4ee5ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5ee:{NFSU2_TR(0x4ee5ee);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5f3:{NFSU2_TR(0x4ee5f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5f4:{NFSU2_TR(0x4ee5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee5f9ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ee5f9:L4ee5f9:{c.instructions+=2;NFSU2_TR(0x4ee5f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee5fa:{NFSU2_TR(0x4ee5fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee5ffull));
TAIL_STATIC(0x555f10u,555);
}
B4ee5ff:L4ee5ff:{c.instructions+=1;NFSU2_TR(0x4ee5ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ee602:L4ee602:{c.instructions+=2;NFSU2_TR(0x4ee602);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4ee608:{NFSU2_TR(0x4ee608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee60dull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4ee60d:L4ee60d:{c.instructions+=6;NFSU2_TR(0x4ee60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee610:{NFSU2_TR(0x4ee610);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ee613:{NFSU2_TR(0x4ee613);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee614:{NFSU2_TR(0x4ee614);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4ee61a:{NFSU2_TR(0x4ee61a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee61b:{NFSU2_TR(0x4ee61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee620ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4ee620:L4ee620:{c.instructions+=2;NFSU2_TR(0x4ee620);
__builtin_memmove((R+4),(R+28),4);
}
B4ee622:{NFSU2_TR(0x4ee622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee627ull));
TAIL_STATIC(0x4b0fe0u,4b0);
}
B4ee627:L4ee627:{c.instructions+=4;NFSU2_TR(0x4ee627);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee62a:{NFSU2_TR(0x4ee62a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee62c:{NFSU2_TR(0x4ee62c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee62d:{NFSU2_TR(0x4ee62d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee632ull));
TAIL_STATIC(0x52cec0u,52c);
}
B4ee632:L4ee632:{c.instructions+=8;NFSU2_TR(0x4ee632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee635:{NFSU2_TR(0x4ee635);
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
B4ee638:{NFSU2_TR(0x4ee638);
__builtin_memmove((R+0),(R+28),4);
}
B4ee63a:{NFSU2_TR(0x4ee63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee63b:{NFSU2_TR(0x4ee63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee642:{NFSU2_TR(0x4ee642);
__builtin_memmove((R+16),(R+20),4);
}
B4ee644:{NFSU2_TR(0x4ee644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ee645:{NFSU2_TR(0x4ee645);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ee650:L4ee650:{c.instructions+=3;NFSU2_TR(0x4ee650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee651:{NFSU2_TR(0x4ee651);
__builtin_memmove((R+24),(R+4),4);
}
B4ee653:{NFSU2_TR(0x4ee653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee658ull));
{goto L4ee670;}
}
B4ee658:L4ee658:{c.instructions+=2;NFSU2_TR(0x4ee658);
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
B4ee65d:{NFSU2_TR(0x4ee65d);
if(r1(R+518)){{goto L4ee668;}}
}
B4ee65f:L4ee65f:{c.instructions+=2;NFSU2_TR(0x4ee65f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee660:{NFSU2_TR(0x4ee660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee665ull));
TAIL_STATIC(0x575630u,575);
}
B4ee665:L4ee665:{c.instructions+=1;NFSU2_TR(0x4ee665);
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
B4ee668:L4ee668:{c.instructions+=3;NFSU2_TR(0x4ee668);
__builtin_memmove((R+0),(R+24),4);
}
B4ee66a:{NFSU2_TR(0x4ee66a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee66b:{NFSU2_TR(0x4ee66b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ee670:L4ee670:{c.instructions+=4;NFSU2_TR(0x4ee670);
u8 U[4];
w4(U+0,u32(0x790efcull));
s4(u32(r4(R+4)),r4(U+0));
}
B4ee676:{NFSU2_TR(0x4ee676);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee679:{NFSU2_TR(0x4ee679);
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
B4ee67b:{NFSU2_TR(0x4ee67b);
if(r1(R+518)){{goto L4ee684;}}
}
B4ee67d:L4ee67d:{c.instructions+=2;NFSU2_TR(0x4ee67d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee67e:{NFSU2_TR(0x4ee67e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee683ull));
TAIL_STATIC(0x575630u,575);
}
B4ee683:L4ee683:{c.instructions+=1;NFSU2_TR(0x4ee683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee684:L4ee684:{c.instructions+=1;NFSU2_TR(0x4ee684);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ee690:L4ee690:{c.instructions+=15;NFSU2_TR(0x4ee690);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee692:{NFSU2_TR(0x4ee692);
u8 U[4];
w4(U+0,u32(0x7763e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee697:{NFSU2_TR(0x4ee697);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee69d:{NFSU2_TR(0x4ee69d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee69e:{NFSU2_TR(0x4ee69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee6a5:{NFSU2_TR(0x4ee6a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6a6:{NFSU2_TR(0x4ee6a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee6aa:{NFSU2_TR(0x4ee6aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6ab:{NFSU2_TR(0x4ee6ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6ac:{NFSU2_TR(0x4ee6ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6ad:{NFSU2_TR(0x4ee6ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6ae:{NFSU2_TR(0x4ee6ae);
__builtin_memmove((R+24),(R+4),4);
}
B4ee6b0:{NFSU2_TR(0x4ee6b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6b1:{NFSU2_TR(0x4ee6b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee6b5:{NFSU2_TR(0x4ee6b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee6baull));
TAIL_STATIC(0x551de0u,551);
}
B4ee6ba:L4ee6ba:{c.instructions+=14;NFSU2_TR(0x4ee6ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6bc:{NFSU2_TR(0x4ee6bc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ee6be:{NFSU2_TR(0x4ee6be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6bf:{NFSU2_TR(0x4ee6bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6c1:{NFSU2_TR(0x4ee6c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6c2:{NFSU2_TR(0x4ee6c2);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6c7:{NFSU2_TR(0x4ee6c7);
u8 U[4];
w4(U+0,u32(0x795d10ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ee6cd:{NFSU2_TR(0x4ee6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee6d0:{NFSU2_TR(0x4ee6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee6d3:{NFSU2_TR(0x4ee6d3);
u8 U[4];
w4(U+0,u32(0x795420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6d8:{NFSU2_TR(0x4ee6d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6d9:{NFSU2_TR(0x4ee6d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee6df:{NFSU2_TR(0x4ee6df);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee6e3:{NFSU2_TR(0x4ee6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee6e8ull));
TAIL_STATIC(0x542ca0u,542);
}
B4ee6e8:L4ee6e8:{c.instructions+=10;NFSU2_TR(0x4ee6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee6eb:{NFSU2_TR(0x4ee6eb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6f0:{NFSU2_TR(0x4ee6f0);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6f5:{NFSU2_TR(0x4ee6f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6f7:{NFSU2_TR(0x4ee6f7);
u8 U[4];
w4(U+0,u32(0x797f3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee6fc:{NFSU2_TR(0x4ee6fc);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee701:{NFSU2_TR(0x4ee701);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee702:{NFSU2_TR(0x4ee702);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee708:{NFSU2_TR(0x4ee708);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee70d:{NFSU2_TR(0x4ee70d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee712ull));
TAIL_STATIC(0x5435d0u,543);
}
B4ee712:L4ee712:{c.instructions+=9;NFSU2_TR(0x4ee712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee715:{NFSU2_TR(0x4ee715);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee716:{NFSU2_TR(0x4ee716);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee717:{NFSU2_TR(0x4ee717);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee719:{NFSU2_TR(0x4ee719);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee71e:{NFSU2_TR(0x4ee71e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee71f:{NFSU2_TR(0x4ee71f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee725:{NFSU2_TR(0x4ee725);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee72a:{NFSU2_TR(0x4ee72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee72full));
TAIL_STATIC(0x542ac0u,542);
}
B4ee72f:L4ee72f:{c.instructions+=4;NFSU2_TR(0x4ee72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee732:{NFSU2_TR(0x4ee732);
u8 U[4];
w4(U+0,u32(0x90fe80f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee737:{NFSU2_TR(0x4ee737);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee738:{NFSU2_TR(0x4ee738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee73dull));
TAIL_STATIC(0x537a60u,537);
}
B4ee73d:L4ee73d:{c.instructions+=11;NFSU2_TR(0x4ee73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee743:{NFSU2_TR(0x4ee743);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee746:{NFSU2_TR(0x4ee746);
u8 U[4];
w4(U+0,u32(0x78f8c8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ee74c:{NFSU2_TR(0x4ee74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee74f:{NFSU2_TR(0x4ee74f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee752:{NFSU2_TR(0x4ee752);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee755:{NFSU2_TR(0x4ee755);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ee758:{NFSU2_TR(0x4ee758);
__builtin_memmove(gp(0x836344),(R+28),4);
}
B4ee75e:{NFSU2_TR(0x4ee75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee761:{NFSU2_TR(0x4ee761);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee762:{NFSU2_TR(0x4ee762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee767ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ee767:L4ee767:{c.instructions+=16;NFSU2_TR(0x4ee767);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee76a:{NFSU2_TR(0x4ee76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee76d:{NFSU2_TR(0x4ee76d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ee770:{NFSU2_TR(0x4ee770);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee773:{NFSU2_TR(0x4ee773);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee776:{NFSU2_TR(0x4ee776);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee779:{NFSU2_TR(0x4ee779);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee780:{NFSU2_TR(0x4ee780);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee786:{NFSU2_TR(0x4ee786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee78c:{NFSU2_TR(0x4ee78c);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4ee792:{NFSU2_TR(0x4ee792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee795:{NFSU2_TR(0x4ee795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee798:{NFSU2_TR(0x4ee798);
u8 U[4];
w4(U+0,u32(0x640f0f22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee79d:{NFSU2_TR(0x4ee79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee79e:{NFSU2_TR(0x4ee79e);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee7a3:{NFSU2_TR(0x4ee7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee7a8ull));
TAIL_STATIC(0x537a60u,537);
}
B4ee7a8:L4ee7a8:{c.instructions+=5;NFSU2_TR(0x4ee7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee7ab:{NFSU2_TR(0x4ee7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee7ae:{NFSU2_TR(0x4ee7ae);
u8 U[4];
w4(U+0,u32(0x640f0f23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7b3:{NFSU2_TR(0x4ee7b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7b4:{NFSU2_TR(0x4ee7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee7b9ull));
TAIL_STATIC(0x537a60u,537);
}
B4ee7b9:L4ee7b9:{c.instructions+=5;NFSU2_TR(0x4ee7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee7bc:{NFSU2_TR(0x4ee7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee7bf:{NFSU2_TR(0x4ee7bf);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7c4:{NFSU2_TR(0x4ee7c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7c5:{NFSU2_TR(0x4ee7c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee7caull));
TAIL_STATIC(0x537a60u,537);
}
B4ee7ca:L4ee7ca:{c.instructions+=5;NFSU2_TR(0x4ee7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee7cd:{NFSU2_TR(0x4ee7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee7d0:{NFSU2_TR(0x4ee7d0);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7d5:{NFSU2_TR(0x4ee7d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7d6:{NFSU2_TR(0x4ee7d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee7dbull));
TAIL_STATIC(0x537a60u,537);
}
B4ee7db:L4ee7db:{c.instructions+=5;NFSU2_TR(0x4ee7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee7de:{NFSU2_TR(0x4ee7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee7e1:{NFSU2_TR(0x4ee7e1);
u8 U[4];
w4(U+0,u32(0x38e39ad7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7e6:{NFSU2_TR(0x4ee7e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee7e7:{NFSU2_TR(0x4ee7e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee7ecull));
TAIL_STATIC(0x537a60u,537);
}
B4ee7ec:L4ee7ec:{c.instructions+=5;NFSU2_TR(0x4ee7ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4ee7ef:{NFSU2_TR(0x4ee7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee7f2:{NFSU2_TR(0x4ee7f2);
w4(R+20,u32(0x23eae8b9ull));
}
B4ee7f7:{NFSU2_TR(0x4ee7f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee7fa:{NFSU2_TR(0x4ee7fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee802:L4ee802:{c.instructions+=5;NFSU2_TR(0x4ee802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee805:{NFSU2_TR(0x4ee805);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x294473a8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee80b:{NFSU2_TR(0x4ee80b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee80c:{NFSU2_TR(0x4ee80c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee80d:{NFSU2_TR(0x4ee80d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee812ull));
TAIL_STATIC(0x537a10u,537);
}
B4ee812:L4ee812:{c.instructions+=5;NFSU2_TR(0x4ee812);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee815:{NFSU2_TR(0x4ee815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee818:{NFSU2_TR(0x4ee818);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee819:{NFSU2_TR(0x4ee819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee81a:{NFSU2_TR(0x4ee81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee81full));
TAIL_STATIC(0x537a10u,537);
}
B4ee81f:L4ee81f:{c.instructions+=8;NFSU2_TR(0x4ee81f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4ee821:{NFSU2_TR(0x4ee821);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee825:{NFSU2_TR(0x4ee825);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ee828:{NFSU2_TR(0x4ee828);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4ee82b:{NFSU2_TR(0x4ee82b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4ee82c:{NFSU2_TR(0x4ee82c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ee82d:{NFSU2_TR(0x4ee82d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee831:{NFSU2_TR(0x4ee831);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ee802u);}goto L4ee802;}}
}
B4ee833:L4ee833:{c.instructions+=6;NFSU2_TR(0x4ee833);
__builtin_memmove((R+4),(R+24),4);
}
B4ee835:{NFSU2_TR(0x4ee835);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee83c:{NFSU2_TR(0x4ee83c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ee842:{NFSU2_TR(0x4ee842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x43888000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee84c:{NFSU2_TR(0x4ee84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee856:{NFSU2_TR(0x4ee856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee85bull));
TAIL_STATIC(0x4cbf80u,4cb);
}
B4ee85b:L4ee85b:{c.instructions+=2;NFSU2_TR(0x4ee85b);
__builtin_memmove((R+4),(R+24),4);
}
B4ee85d:{NFSU2_TR(0x4ee85d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee862ull));
TAIL_STATIC(0x4e0ce0u,4e0);
}
B4ee862:L4ee862:{c.instructions+=3;NFSU2_TR(0x4ee862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee868:{NFSU2_TR(0x4ee868);
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
B4ee86a:{NFSU2_TR(0x4ee86a);
if(r1(R+518)){{goto L4ee87c;}}
}
B4ee86c:L4ee86c:{c.instructions+=7;NFSU2_TR(0x4ee86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee86f:{NFSU2_TR(0x4ee86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ee871:{NFSU2_TR(0x4ee871);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee874:{NFSU2_TR(0x4ee874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee875:{NFSU2_TR(0x4ee875);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee878:{NFSU2_TR(0x4ee878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee879:{NFSU2_TR(0x4ee879);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee87cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ee87c:L4ee87c:{c.instructions+=2;NFSU2_TR(0x4ee87c);
__builtin_memmove((R+4),(R+24),4);
}
B4ee87e:{NFSU2_TR(0x4ee87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee883ull));
TAIL_STATIC(0x4b1590u,4b1);
}
B4ee883:L4ee883:{c.instructions+=12;NFSU2_TR(0x4ee883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee889:{NFSU2_TR(0x4ee889);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4ee88f:{NFSU2_TR(0x4ee88f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee890:{NFSU2_TR(0x4ee890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee896:{NFSU2_TR(0x4ee896);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee89a:{NFSU2_TR(0x4ee89a);
__builtin_memmove((R+0),(R+24),4);
}
B4ee89c:{NFSU2_TR(0x4ee89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee89d:{NFSU2_TR(0x4ee89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ee89e:{NFSU2_TR(0x4ee89e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ee89f:{NFSU2_TR(0x4ee89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee8a6:{NFSU2_TR(0x4ee8a6);
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
B4ee8a9:{NFSU2_TR(0x4ee8a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ee8b0:L4ee8b0:{c.instructions+=16;NFSU2_TR(0x4ee8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8b1:{NFSU2_TR(0x4ee8b1);
__builtin_memmove((R+20),(R+16),4);
}
B4ee8b3:{NFSU2_TR(0x4ee8b3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8b5:{NFSU2_TR(0x4ee8b5);
u8 U[4];
w4(U+0,u32(0x776403ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8ba:{NFSU2_TR(0x4ee8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee8c0:{NFSU2_TR(0x4ee8c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8c1:{NFSU2_TR(0x4ee8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee8c8:{NFSU2_TR(0x4ee8c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd8ull))));
}
B4ee8ce:{NFSU2_TR(0x4ee8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee8d1:{NFSU2_TR(0x4ee8d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8d2:{NFSU2_TR(0x4ee8d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8d3:{NFSU2_TR(0x4ee8d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8d4:{NFSU2_TR(0x4ee8d4);
__builtin_memmove((R+12),(R+4),4);
}
B4ee8d6:{NFSU2_TR(0x4ee8d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8d7:{NFSU2_TR(0x4ee8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee8da:{NFSU2_TR(0x4ee8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee8dfull));
TAIL_STATIC(0x551de0u,551);
}
B4ee8df:L4ee8df:{c.instructions+=14;NFSU2_TR(0x4ee8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ee8e2:{NFSU2_TR(0x4ee8e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8e4:{NFSU2_TR(0x4ee8e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8e6:{NFSU2_TR(0x4ee8e6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ee8e8:{NFSU2_TR(0x4ee8e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8e9:{NFSU2_TR(0x4ee8e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8eb:{NFSU2_TR(0x4ee8eb);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8f0:{NFSU2_TR(0x4ee8f0);
u8 U[4];
w4(U+0,u32(0x797fb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8f5:{NFSU2_TR(0x4ee8f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ee8f8:{NFSU2_TR(0x4ee8f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee8f9:{NFSU2_TR(0x4ee8f9);
__builtin_memmove((R+4),(R+24),4);
}
B4ee8fb:{NFSU2_TR(0x4ee8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee8fe:{NFSU2_TR(0x4ee8fe);
u8 U[4];
w4(U+0,u32(0x797fa0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4ee904:{NFSU2_TR(0x4ee904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee909ull));
TAIL_STATIC(0x542ca0u,542);
}
B4ee909:L4ee909:{c.instructions+=8;NFSU2_TR(0x4ee909);
u8 U[4];
w4(U+0,u32(0x795d20ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ee90f:{NFSU2_TR(0x4ee90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee915:{NFSU2_TR(0x4ee915);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee91b:{NFSU2_TR(0x4ee91b);
__builtin_memmove((R+4),gp(0x83a9d8),4);
}
B4ee921:{NFSU2_TR(0x4ee921);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ee924:{NFSU2_TR(0x4ee924);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee925:{NFSU2_TR(0x4ee925);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ee929:{NFSU2_TR(0x4ee929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee92eull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4ee92e:L4ee92e:{c.instructions+=3;NFSU2_TR(0x4ee92e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee92f:{NFSU2_TR(0x4ee92f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee930:{NFSU2_TR(0x4ee930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee935ull));
TAIL_STATIC(0x537950u,537);
}
B4ee935:L4ee935:{c.instructions+=5;NFSU2_TR(0x4ee935);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ee938:{NFSU2_TR(0x4ee938);
w4(R+24,u32(0x1ull));
}
B4ee93d:{NFSU2_TR(0x4ee93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x836568ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee944:{NFSU2_TR(0x4ee944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ee94b:{NFSU2_TR(0x4ee94b);
{goto L4ee950;}
}
B4ee950:L4ee950:{c.instructions+=6;NFSU2_TR(0x4ee950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee951:{NFSU2_TR(0x4ee951);
u8 U[4];
w4(U+0,u32(0x797f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee956:{NFSU2_TR(0x4ee956);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ee95c:{NFSU2_TR(0x4ee95c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee95e:{NFSU2_TR(0x4ee95e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee95f:{NFSU2_TR(0x4ee95f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee964ull));
TAIL_STATIC(0x50c960u,50c);
}
B4ee964:L4ee964:{c.instructions+=6;NFSU2_TR(0x4ee964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee965:{NFSU2_TR(0x4ee965);
u8 U[4];
w4(U+0,u32(0x797f80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee96a:{NFSU2_TR(0x4ee96a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee96d:{NFSU2_TR(0x4ee96d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee96f:{NFSU2_TR(0x4ee96f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee970:{NFSU2_TR(0x4ee970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee975ull));
TAIL_STATIC(0x50c960u,50c);
}
B4ee975:L4ee975:{c.instructions+=6;NFSU2_TR(0x4ee975);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee976:{NFSU2_TR(0x4ee976);
u8 U[4];
w4(U+0,u32(0x797f70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee97b:{NFSU2_TR(0x4ee97b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee981:{NFSU2_TR(0x4ee981);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee983:{NFSU2_TR(0x4ee983);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee984:{NFSU2_TR(0x4ee984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee989ull));
TAIL_STATIC(0x50c960u,50c);
}
B4ee989:L4ee989:{c.instructions+=6;NFSU2_TR(0x4ee989);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee98a:{NFSU2_TR(0x4ee98a);
u8 U[4];
w4(U+0,u32(0x797f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee98f:{NFSU2_TR(0x4ee98f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ee995:{NFSU2_TR(0x4ee995);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee997:{NFSU2_TR(0x4ee997);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee998:{NFSU2_TR(0x4ee998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee99dull));
TAIL_STATIC(0x50c960u,50c);
}
B4ee99d:L4ee99d:{c.instructions+=7;NFSU2_TR(0x4ee99d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4ee9a0:{NFSU2_TR(0x4ee9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee9a1:{NFSU2_TR(0x4ee9a1);
u8 U[4];
w4(U+0,u32(0x797f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee9a6:{NFSU2_TR(0x4ee9a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee9ac:{NFSU2_TR(0x4ee9ac);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee9ae:{NFSU2_TR(0x4ee9ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee9af:{NFSU2_TR(0x4ee9af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ee9b4ull));
TAIL_STATIC(0x50c960u,50c);
}
B4ee9b4:L4ee9b4:{c.instructions+=3;NFSU2_TR(0x4ee9b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ee9b6:{NFSU2_TR(0x4ee9b6);
w4(R+4,u32(0xcull));
}
B4ee9bb:{NFSU2_TR(0x4ee9bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ee9be:L4ee9be:{c.instructions+=1;NFSU2_TR(0x4ee9be);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4ee9c0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ee9beu);}goto L4ee9be;}
}
B4ee9c0:L4ee9c0:{c.instructions+=23;NFSU2_TR(0x4ee9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ee9c3:{NFSU2_TR(0x4ee9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ee9c6:{NFSU2_TR(0x4ee9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee9c9:{NFSU2_TR(0x4ee9c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ee9cc:{NFSU2_TR(0x4ee9cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee9d2:{NFSU2_TR(0x4ee9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee9d5:{NFSU2_TR(0x4ee9d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ee9db:{NFSU2_TR(0x4ee9db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee9de:{NFSU2_TR(0x4ee9de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee9e0:{NFSU2_TR(0x4ee9e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ee9e3:{NFSU2_TR(0x4ee9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee9e6:{NFSU2_TR(0x4ee9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee9e9:{NFSU2_TR(0x4ee9e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ee9ef:{NFSU2_TR(0x4ee9ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ee9f5:{NFSU2_TR(0x4ee9f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ee9f6:{NFSU2_TR(0x4ee9f6);
__builtin_memmove((R+4),(R+28),4);
}
B4ee9f8:{NFSU2_TR(0x4ee9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee9fb:{NFSU2_TR(0x4ee9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ee9fe:{NFSU2_TR(0x4ee9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eea05:{NFSU2_TR(0x4eea05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eea0c:{NFSU2_TR(0x4eea0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eea13:{NFSU2_TR(0x4eea13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eea1a:{NFSU2_TR(0x4eea1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eea1full));
TAIL_STATIC(0x540c10u,540);
}
B4eea1f:L4eea1f:{c.instructions+=3;NFSU2_TR(0x4eea1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eea21:{NFSU2_TR(0x4eea21);
__builtin_memmove((R+4),(R+28),4);
}
B4eea23:{NFSU2_TR(0x4eea23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eea28ull));
TAIL_STATIC(0x512240u,512);
}
B4eea28:L4eea28:{c.instructions+=7;NFSU2_TR(0x4eea28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eea2b:{NFSU2_TR(0x4eea2b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x44ull))));
}
B4eea2e:{NFSU2_TR(0x4eea2e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4eea2f:{NFSU2_TR(0x4eea2f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4eea30:{NFSU2_TR(0x4eea30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eea33:{NFSU2_TR(0x4eea33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eea36:{NFSU2_TR(0x4eea36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ee950u);}goto L4ee950;}}
}
B4eea3c:L4eea3c:{c.instructions+=2;NFSU2_TR(0x4eea3c);
__builtin_memmove((R+4),(R+12),4);
}
B4eea3e:{NFSU2_TR(0x4eea3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eea43ull));
TAIL_STATIC(0x4e13c0u,4e1);
}
B4eea43:L4eea43:{c.instructions+=4;NFSU2_TR(0x4eea43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eea46:{NFSU2_TR(0x4eea46);
u8 U[4];
w4(U+0,u32(0x640f0f22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eea4b:{NFSU2_TR(0x4eea4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eea4c:{NFSU2_TR(0x4eea4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eea51ull));
TAIL_STATIC(0x537a60u,537);
}
B4eea51:L4eea51:{c.instructions+=5;NFSU2_TR(0x4eea51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eea57:{NFSU2_TR(0x4eea57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eea5a:{NFSU2_TR(0x4eea5a);
u8 U[4];
w4(U+0,u32(0x640f0f23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eea5f:{NFSU2_TR(0x4eea5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eea60:{NFSU2_TR(0x4eea60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eea65ull));
TAIL_STATIC(0x537a60u,537);
}
B4eea65:L4eea65:{c.instructions+=4;NFSU2_TR(0x4eea65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4eea68:{NFSU2_TR(0x4eea68);
__builtin_memmove((R+4),(R+12),4);
}
B4eea6a:{NFSU2_TR(0x4eea6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eea70:{NFSU2_TR(0x4eea70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eea75ull));
TAIL_STATIC(0x496f50u,496);
}
B4eea75:L4eea75:{c.instructions+=11;NFSU2_TR(0x4eea75);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4eea7b:{NFSU2_TR(0x4eea7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eea7e:{NFSU2_TR(0x4eea7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eea7f:{NFSU2_TR(0x4eea7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eea85:{NFSU2_TR(0x4eea85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eea86:{NFSU2_TR(0x4eea86);
__builtin_memmove((R+0),(R+12),4);
}
B4eea88:{NFSU2_TR(0x4eea88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4eea89:{NFSU2_TR(0x4eea89);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eea90:{NFSU2_TR(0x4eea90);
__builtin_memmove((R+16),(R+20),4);
}
B4eea92:{NFSU2_TR(0x4eea92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4eea93:{NFSU2_TR(0x4eea93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eeaa0:L4eeaa0:{c.instructions+=3;NFSU2_TR(0x4eeaa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeaa1:{NFSU2_TR(0x4eeaa1);
__builtin_memmove((R+24),(R+4),4);
}
B4eeaa3:{NFSU2_TR(0x4eeaa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeaa8ull));
{goto L4eeac0;}
}
B4eeaa8:L4eeaa8:{c.instructions+=2;NFSU2_TR(0x4eeaa8);
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
B4eeaad:{NFSU2_TR(0x4eeaad);
if(r1(R+518)){{goto L4eeab8;}}
}
B4eeaaf:L4eeaaf:{c.instructions+=2;NFSU2_TR(0x4eeaaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeab0:{NFSU2_TR(0x4eeab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeab5ull));
TAIL_STATIC(0x575630u,575);
}
B4eeab5:L4eeab5:{c.instructions+=1;NFSU2_TR(0x4eeab5);
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
B4eeab8:L4eeab8:{c.instructions+=3;NFSU2_TR(0x4eeab8);
__builtin_memmove((R+0),(R+24),4);
}
B4eeaba:{NFSU2_TR(0x4eeaba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eeabb:{NFSU2_TR(0x4eeabb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eeac0:L4eeac0:{c.instructions+=12;NFSU2_TR(0x4eeac0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeac2:{NFSU2_TR(0x4eeac2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeac7:{NFSU2_TR(0x4eeac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eeacd:{NFSU2_TR(0x4eeacd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeace:{NFSU2_TR(0x4eeace);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eead5:{NFSU2_TR(0x4eead5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eead6:{NFSU2_TR(0x4eead6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eead7:{NFSU2_TR(0x4eead7);
__builtin_memmove((R+24),(R+4),4);
}
B4eead9:{NFSU2_TR(0x4eead9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eeadd:{NFSU2_TR(0x4eeadd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4eeae0:{NFSU2_TR(0x4eeae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eeae8:{NFSU2_TR(0x4eeae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeaedull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4eeaed:L4eeaed:{c.instructions+=3;NFSU2_TR(0x4eeaed);
__builtin_memmove((R+4),(R+24),4);
}
B4eeaef:{NFSU2_TR(0x4eeaef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eeaf7:{NFSU2_TR(0x4eeaf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeafcull));
TAIL_STATIC(0x510d40u,510);
}
B4eeafc:L4eeafc:{c.instructions+=5;NFSU2_TR(0x4eeafc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eeb00:{NFSU2_TR(0x4eeb00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eeb01:{NFSU2_TR(0x4eeb01);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eeb08:{NFSU2_TR(0x4eeb08);
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
B4eeb0b:{NFSU2_TR(0x4eeb0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eeb10:L4eeb10:{c.instructions+=8;NFSU2_TR(0x4eeb10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb12:{NFSU2_TR(0x4eeb12);
u8 U[4];
w4(U+0,u32(0x776444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb17:{NFSU2_TR(0x4eeb17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eeb1d:{NFSU2_TR(0x4eeb1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb1e:{NFSU2_TR(0x4eeb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eeb25:{NFSU2_TR(0x4eeb25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb26:{NFSU2_TR(0x4eeb26);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb2b:{NFSU2_TR(0x4eeb2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeb30ull));
TAIL_STATIC(0x575620u,575);
}
B4eeb30:L4eeb30:{c.instructions+=5;NFSU2_TR(0x4eeb30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eeb33:{NFSU2_TR(0x4eeb33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb37:{NFSU2_TR(0x4eeb37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eeb39:{NFSU2_TR(0x4eeb39);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eeb41:{NFSU2_TR(0x4eeb41);
if(r1(R+518)){{goto L4eeb5e;}}
}
B4eeb43:L4eeb43:{c.instructions+=4;NFSU2_TR(0x4eeb43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eeb47:{NFSU2_TR(0x4eeb47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb48:{NFSU2_TR(0x4eeb48);
__builtin_memmove((R+4),(R+0),4);
}
B4eeb4a:{NFSU2_TR(0x4eeb4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeb4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ee8b0u);}goto L4ee8b0;}
}
B4eeb4f:L4eeb4f:{c.instructions+=4;NFSU2_TR(0x4eeb4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eeb53:{NFSU2_TR(0x4eeb53);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eeb5a:{NFSU2_TR(0x4eeb5a);
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
B4eeb5d:{NFSU2_TR(0x4eeb5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eeb5e:L4eeb5e:{c.instructions+=5;NFSU2_TR(0x4eeb5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eeb62:{NFSU2_TR(0x4eeb62);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4eeb64:{NFSU2_TR(0x4eeb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eeb6b:{NFSU2_TR(0x4eeb6b);
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
B4eeb6e:{NFSU2_TR(0x4eeb6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eeb70:L4eeb70:{c.instructions+=3;NFSU2_TR(0x4eeb70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb71:{NFSU2_TR(0x4eeb71);
__builtin_memmove((R+24),(R+4),4);
}
B4eeb73:{NFSU2_TR(0x4eeb73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeb78ull));
TAIL_STATIC(0x4e20b0u,4e2);
}
B4eeb78:L4eeb78:{c.instructions+=2;NFSU2_TR(0x4eeb78);
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
B4eeb7d:{NFSU2_TR(0x4eeb7d);
if(r1(R+518)){{goto L4eeb88;}}
}
B4eeb7f:L4eeb7f:{c.instructions+=2;NFSU2_TR(0x4eeb7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb80:{NFSU2_TR(0x4eeb80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeb85ull));
TAIL_STATIC(0x575630u,575);
}
B4eeb85:L4eeb85:{c.instructions+=1;NFSU2_TR(0x4eeb85);
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
B4eeb88:L4eeb88:{c.instructions+=3;NFSU2_TR(0x4eeb88);
__builtin_memmove((R+0),(R+24),4);
}
B4eeb8a:{NFSU2_TR(0x4eeb8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eeb8b:{NFSU2_TR(0x4eeb8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eeb90:L4eeb90:{c.instructions+=3;NFSU2_TR(0x4eeb90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeb91:{NFSU2_TR(0x4eeb91);
__builtin_memmove((R+24),(R+4),4);
}
B4eeb93:{NFSU2_TR(0x4eeb93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeb98ull));
TAIL_STATIC(0x497da0u,497);
}
B4eeb98:L4eeb98:{c.instructions+=3;NFSU2_TR(0x4eeb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eeb9b:{NFSU2_TR(0x4eeb9b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4eeb9d:{NFSU2_TR(0x4eeb9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4eebb2;}}
}
B4eeb9f:L4eeb9f:{c.instructions+=2;NFSU2_TR(0x4eeb9f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4eeba2:{NFSU2_TR(0x4eeba2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4eebb2;}}
}
B4eeba4:L4eeba4:{c.instructions+=3;NFSU2_TR(0x4eeba4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4eebaa:{NFSU2_TR(0x4eebaa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B4eebb0:{NFSU2_TR(0x4eebb0);
{goto L4eebb4;}
}
B4eebb2:L4eebb2:{c.instructions+=1;NFSU2_TR(0x4eebb2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4eebb4:L4eebb4:{c.instructions+=4;NFSU2_TR(0x4eebb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eebb5:{NFSU2_TR(0x4eebb5);
__builtin_memmove((R+0),gp(0x7f444c),4);
}
B4eebba:{NFSU2_TR(0x4eebba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eebbb:{NFSU2_TR(0x4eebbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eebc0ull));
TAIL_STATIC(0x534850u,534);
}
B4eebc0:L4eebc0:{c.instructions+=2;NFSU2_TR(0x4eebc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eebc2:{NFSU2_TR(0x4eebc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eebe0;}}
}
B4eebc4:L4eebc4:{c.instructions+=5;NFSU2_TR(0x4eebc4);
__builtin_memmove((R+4),gp(0x85ad28),4);
}
B4eebca:{NFSU2_TR(0x4eebca);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4eebd0:{NFSU2_TR(0x4eebd0);
w4(R+0,u32(0x3ull));
}
B4eebd5:{NFSU2_TR(0x4eebd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eebdb:{NFSU2_TR(0x4eebdb);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4eebe0:L4eebe0:{c.instructions+=5;NFSU2_TR(0x4eebe0);
__builtin_memmove((R+8),gp(0x7f444c),4);
}
B4eebe6:{NFSU2_TR(0x4eebe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eebe7:{NFSU2_TR(0x4eebe7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eebe8:{NFSU2_TR(0x4eebe8);
__builtin_memmove((R+4),(R+24),4);
}
B4eebea:{NFSU2_TR(0x4eebea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eebefull));
TAIL_STATIC(0x4e22e0u,4e2);
}
B4eebef:L4eebef:{c.instructions+=3;NFSU2_TR(0x4eebef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eebf2:{NFSU2_TR(0x4eebf2);
u8 U[4];
w4(U+0,u32(0x797a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eebf7:{NFSU2_TR(0x4eebf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eebfcull));
TAIL_STATIC(0x505450u,505);
}
B4eebfc:L4eebfc:{c.instructions+=3;NFSU2_TR(0x4eebfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eebfd:{NFSU2_TR(0x4eebfd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eebfe:{NFSU2_TR(0x4eebfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec03ull));
TAIL_STATIC(0x537a60u,537);
}
B4eec03:L4eec03:{c.instructions+=4;NFSU2_TR(0x4eec03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eec06:{NFSU2_TR(0x4eec06);
u8 U[4];
w4(U+0,u32(0x7979f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec0b:{NFSU2_TR(0x4eec0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eec11:{NFSU2_TR(0x4eec11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec16ull));
TAIL_STATIC(0x505450u,505);
}
B4eec16:L4eec16:{c.instructions+=3;NFSU2_TR(0x4eec16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec17:{NFSU2_TR(0x4eec17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec18:{NFSU2_TR(0x4eec18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec1dull));
TAIL_STATIC(0x537a60u,537);
}
B4eec1d:L4eec1d:{c.instructions+=6;NFSU2_TR(0x4eec1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eec23:{NFSU2_TR(0x4eec23);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4eec28:{NFSU2_TR(0x4eec28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4eec2b:{NFSU2_TR(0x4eec2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eec2e:{NFSU2_TR(0x4eec2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4eec2f:{NFSU2_TR(0x4eec2f);
if(r1(R+518)){{goto L4eec53;}}
}
B4eec31:L4eec31:{c.instructions+=2;NFSU2_TR(0x4eec31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eec36:{NFSU2_TR(0x4eec36);
if(r1(R+518)){{goto L4eec53;}}
}
B4eec38:L4eec38:{c.instructions+=2;NFSU2_TR(0x4eec38);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eec3b:{NFSU2_TR(0x4eec3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eec7e;}}
}
B4eec3d:L4eec3d:{c.instructions+=4;NFSU2_TR(0x4eec3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eec40:{NFSU2_TR(0x4eec40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec42:{NFSU2_TR(0x4eec42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec43:{NFSU2_TR(0x4eec43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec48ull));
TAIL_STATIC(0x537950u,537);
}
B4eec48:L4eec48:{c.instructions+=4;NFSU2_TR(0x4eec48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eec4b:{NFSU2_TR(0x4eec4b);
__builtin_memmove((R+4),(R+24),4);
}
B4eec4d:{NFSU2_TR(0x4eec4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eec4e:{NFSU2_TR(0x4eec4e);
TAIL_STATIC(0x4b2310u,4b2);
}
B4eec53:L4eec53:{c.instructions+=4;NFSU2_TR(0x4eec53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eec56:{NFSU2_TR(0x4eec56);
u8 U[4];
w4(U+0,u32(0x39b2b1c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec5b:{NFSU2_TR(0x4eec5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec5c:{NFSU2_TR(0x4eec5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec61ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eec61:L4eec61:{c.instructions+=2;NFSU2_TR(0x4eec61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec62:{NFSU2_TR(0x4eec62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec67ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4eec67:L4eec67:{c.instructions+=4;NFSU2_TR(0x4eec67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eec6a:{NFSU2_TR(0x4eec6a);
u8 U[4];
w4(U+0,u32(0xe8ca2e25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec6f:{NFSU2_TR(0x4eec6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec70:{NFSU2_TR(0x4eec70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec75ull));
TAIL_STATIC(0x5379c0u,537);
}
B4eec75:L4eec75:{c.instructions+=2;NFSU2_TR(0x4eec75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec76:{NFSU2_TR(0x4eec76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec7bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4eec7b:L4eec7b:{c.instructions+=1;NFSU2_TR(0x4eec7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4eec7e:L4eec7e:{c.instructions+=3;NFSU2_TR(0x4eec7e);
__builtin_memmove((R+4),(R+24),4);
}
B4eec80:{NFSU2_TR(0x4eec80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eec81:{NFSU2_TR(0x4eec81);
TAIL_STATIC(0x4b2310u,4b2);
}
B4eec90:L4eec90:{c.instructions+=3;NFSU2_TR(0x4eec90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eec91:{NFSU2_TR(0x4eec91);
__builtin_memmove((R+24),(R+4),4);
}
B4eec93:{NFSU2_TR(0x4eec93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eec98ull));
TAIL_STATIC(0x4b2860u,4b2);
}
B4eec98:L4eec98:{c.instructions+=4;NFSU2_TR(0x4eec98);
__builtin_memmove((R+4),(R+24),4);
}
B4eec9a:{NFSU2_TR(0x4eec9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eeca1:{NFSU2_TR(0x4eeca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4eeca8:{NFSU2_TR(0x4eeca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eecadull));
TAIL_STATIC(0x497da0u,497);
}
B4eecad:L4eecad:{c.instructions+=3;NFSU2_TR(0x4eecad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eecb0:{NFSU2_TR(0x4eecb0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4eecb2:{NFSU2_TR(0x4eecb2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4eecc7;}}
}
B4eecb4:L4eecb4:{c.instructions+=2;NFSU2_TR(0x4eecb4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4eecb7:{NFSU2_TR(0x4eecb7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4eecc7;}}
}
B4eecb9:L4eecb9:{c.instructions+=3;NFSU2_TR(0x4eecb9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4eecbf:{NFSU2_TR(0x4eecbf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B4eecc5:{NFSU2_TR(0x4eecc5);
{goto L4eecc9;}
}
B4eecc7:L4eecc7:{c.instructions+=1;NFSU2_TR(0x4eecc7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4eecc9:L4eecc9:{c.instructions+=4;NFSU2_TR(0x4eecc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eecca:{NFSU2_TR(0x4eecca);
__builtin_memmove((R+0),gp(0x7f444c),4);
}
B4eeccf:{NFSU2_TR(0x4eeccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eecd0:{NFSU2_TR(0x4eecd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eecd5ull));
TAIL_STATIC(0x534850u,534);
}
B4eecd5:L4eecd5:{c.instructions+=2;NFSU2_TR(0x4eecd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eecd7:{NFSU2_TR(0x4eecd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eecf5;}}
}
B4eecd9:L4eecd9:{c.instructions+=5;NFSU2_TR(0x4eecd9);
__builtin_memmove((R+4),gp(0x85ad28),4);
}
B4eecdf:{NFSU2_TR(0x4eecdf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4eece5:{NFSU2_TR(0x4eece5);
w4(R+0,u32(0x3ull));
}
B4eecea:{NFSU2_TR(0x4eecea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eecf0:{NFSU2_TR(0x4eecf0);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4eecf5:L4eecf5:{c.instructions+=4;NFSU2_TR(0x4eecf5);
__builtin_memmove((R+8),gp(0x7f444c),4);
}
B4eecfb:{NFSU2_TR(0x4eecfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eecfc:{NFSU2_TR(0x4eecfc);
__builtin_memmove((R+4),(R+24),4);
}
B4eecfe:{NFSU2_TR(0x4eecfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eed03ull));
TAIL_STATIC(0x4e22e0u,4e2);
}
B4eed03:L4eed03:{c.instructions+=2;NFSU2_TR(0x4eed03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eed04:{NFSU2_TR(0x4eed04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eed10:L4eed10:{c.instructions+=6;NFSU2_TR(0x4eed10);
__builtin_memmove((R+0),gp(0x7f444c),4);
}
B4eed15:{NFSU2_TR(0x4eed15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eed16:{NFSU2_TR(0x4eed16);
__builtin_memmove((R+24),(R+4),4);
}
B4eed18:{NFSU2_TR(0x4eed18);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4eed1e:{NFSU2_TR(0x4eed1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eed21:{NFSU2_TR(0x4eed21);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4eee20;}}
}
B4eed27:L4eed27:{c.instructions+=1;NFSU2_TR(0x4eed27);
if(r1(R+518)){{goto L4eee35;}}
}
B4eed2d:L4eed2d:{c.instructions+=2;NFSU2_TR(0x4eed2d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4eed30:{NFSU2_TR(0x4eed30);
if(r1(R+518)){{goto L4eed3b;}}
}
B4eed32:L4eed32:{c.instructions+=2;NFSU2_TR(0x4eed32);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4eed35:{NFSU2_TR(0x4eed35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eed3b:L4eed3b:{c.instructions+=3;NFSU2_TR(0x4eed3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eed3f:{NFSU2_TR(0x4eed3f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eed45:{NFSU2_TR(0x4eed45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eeda8;}}
}
B4eed47:L4eed47:{c.instructions+=2;NFSU2_TR(0x4eed47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eed4a:{NFSU2_TR(0x4eed4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eed63;}}
}
B4eed4c:L4eed4c:{c.instructions+=3;NFSU2_TR(0x4eed4c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eed4e:{NFSU2_TR(0x4eed4e);
__builtin_memmove((R+4),(R+24),4);
}
B4eed50:{NFSU2_TR(0x4eed50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eed55ull));
TAIL_STATIC(0x497ee0u,497);
}
B4eed55:L4eed55:{c.instructions+=2;NFSU2_TR(0x4eed55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eed57:{NFSU2_TR(0x4eed57);
if(r1(R+518)){{goto L4eed8d;}}
}
B4eed59:L4eed59:{c.instructions+=2;NFSU2_TR(0x4eed59);
w4(R+0,u32(0x8ull));
}
B4eed5e:{NFSU2_TR(0x4eed5e);
{goto L4eef77;}
}
B4eed63:L4eed63:{c.instructions+=2;NFSU2_TR(0x4eed63);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eed66:{NFSU2_TR(0x4eed66);
if(r1(R+518)){{goto L4eef72;}}
}
B4eed6c:L4eed6c:{c.instructions+=2;NFSU2_TR(0x4eed6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eed6f:{NFSU2_TR(0x4eed6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eed7b;}}
}
B4eed71:L4eed71:{c.instructions+=2;NFSU2_TR(0x4eed71);
w4(R+0,u32(0x1ull));
}
B4eed76:{NFSU2_TR(0x4eed76);
{goto L4eef77;}
}
B4eed7b:L4eed7b:{c.instructions+=2;NFSU2_TR(0x4eed7b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eed7e:{NFSU2_TR(0x4eed7e);
if(r1(R+518)){{goto L4eee7b;}}
}
B4eed84:L4eed84:{c.instructions+=2;NFSU2_TR(0x4eed84);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eed87:{NFSU2_TR(0x4eed87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eed8d:L4eed8d:{c.instructions+=3;NFSU2_TR(0x4eed8d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eed8f:{NFSU2_TR(0x4eed8f);
__builtin_memmove((R+4),(R+24),4);
}
B4eed91:{NFSU2_TR(0x4eed91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eed96ull));
TAIL_STATIC(0x497ee0u,497);
}
B4eed96:L4eed96:{c.instructions+=2;NFSU2_TR(0x4eed96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eed98:{NFSU2_TR(0x4eed98);
if(r1(R+518)){{goto L4eef1c;}}
}
B4eed9e:L4eed9e:{c.instructions+=2;NFSU2_TR(0x4eed9e);
w4(R+0,u32(0x4ull));
}
B4eeda3:{NFSU2_TR(0x4eeda3);
{goto L4eef77;}
}
B4eeda8:L4eeda8:{c.instructions+=2;NFSU2_TR(0x4eeda8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd9feec59ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eedae:{NFSU2_TR(0x4eedae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eedb4:L4eedb4:{c.instructions+=2;NFSU2_TR(0x4eedb4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eedb7:{NFSU2_TR(0x4eedb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eedc3;}}
}
B4eedb9:L4eedb9:{c.instructions+=2;NFSU2_TR(0x4eedb9);
w4(R+0,u32(0x1ull));
}
B4eedbe:{NFSU2_TR(0x4eedbe);
{goto L4eef77;}
}
B4eedc3:L4eedc3:{c.instructions+=2;NFSU2_TR(0x4eedc3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eedc6:{NFSU2_TR(0x4eedc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eeddf;}}
}
B4eedc8:L4eedc8:{c.instructions+=3;NFSU2_TR(0x4eedc8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eedca:{NFSU2_TR(0x4eedca);
__builtin_memmove((R+4),(R+24),4);
}
B4eedcc:{NFSU2_TR(0x4eedcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eedd1ull));
TAIL_STATIC(0x497ee0u,497);
}
B4eedd1:L4eedd1:{c.instructions+=2;NFSU2_TR(0x4eedd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eedd3:{NFSU2_TR(0x4eedd3);
if(r1(R+518)){{goto L4eede4;}}
}
B4eedd5:L4eedd5:{c.instructions+=2;NFSU2_TR(0x4eedd5);
w4(R+0,u32(0x2ull));
}
B4eedda:{NFSU2_TR(0x4eedda);
{goto L4eef77;}
}
B4eeddf:L4eeddf:{c.instructions+=2;NFSU2_TR(0x4eeddf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eede2:{NFSU2_TR(0x4eede2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eedfb;}}
}
B4eede4:L4eede4:{c.instructions+=3;NFSU2_TR(0x4eede4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eede6:{NFSU2_TR(0x4eede6);
__builtin_memmove((R+4),(R+24),4);
}
B4eede8:{NFSU2_TR(0x4eede8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eededull));
TAIL_STATIC(0x497ee0u,497);
}
B4eeded:L4eeded:{c.instructions+=2;NFSU2_TR(0x4eeded);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eedef:{NFSU2_TR(0x4eedef);
if(r1(R+518)){{goto L4eee00;}}
}
B4eedf1:L4eedf1:{c.instructions+=2;NFSU2_TR(0x4eedf1);
w4(R+0,u32(0x4ull));
}
B4eedf6:{NFSU2_TR(0x4eedf6);
{goto L4eef77;}
}
B4eedfb:L4eedfb:{c.instructions+=2;NFSU2_TR(0x4eedfb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eedfe:{NFSU2_TR(0x4eedfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eee18;}}
}
B4eee00:L4eee00:{c.instructions+=3;NFSU2_TR(0x4eee00);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eee02:{NFSU2_TR(0x4eee02);
__builtin_memmove((R+4),(R+24),4);
}
B4eee04:{NFSU2_TR(0x4eee04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eee09ull));
TAIL_STATIC(0x497ee0u,497);
}
B4eee09:L4eee09:{c.instructions+=5;NFSU2_TR(0x4eee09);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4eee0b:{NFSU2_TR(0x4eee0b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4eee0d:{NFSU2_TR(0x4eee0d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x5ull))));
}
B4eee10:{NFSU2_TR(0x4eee10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B4eee13:{NFSU2_TR(0x4eee13);
{goto L4eef77;}
}
B4eee18:L4eee18:{c.instructions+=2;NFSU2_TR(0x4eee18);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee1b:{NFSU2_TR(0x4eee1b);
{goto L4eef70;}
}
B4eee20:L4eee20:{c.instructions+=2;NFSU2_TR(0x4eee20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee23:{NFSU2_TR(0x4eee23);
if(r1(R+518)){{goto L4eef0b;}}
}
B4eee29:L4eee29:{c.instructions+=2;NFSU2_TR(0x4eee29);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee2f:{NFSU2_TR(0x4eee2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eee35:L4eee35:{c.instructions+=3;NFSU2_TR(0x4eee35);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eee39:{NFSU2_TR(0x4eee39);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee3f:{NFSU2_TR(0x4eee3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eeea6;}}
}
B4eee41:L4eee41:{c.instructions+=2;NFSU2_TR(0x4eee41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee44:{NFSU2_TR(0x4eee44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eee5e;}}
}
B4eee46:L4eee46:{c.instructions+=3;NFSU2_TR(0x4eee46);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eee48:{NFSU2_TR(0x4eee48);
__builtin_memmove((R+4),(R+24),4);
}
B4eee4a:{NFSU2_TR(0x4eee4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eee4full));
TAIL_STATIC(0x497ee0u,497);
}
B4eee4f:L4eee4f:{c.instructions+=5;NFSU2_TR(0x4eee4f);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4eee51:{NFSU2_TR(0x4eee51);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4eee53:{NFSU2_TR(0x4eee53);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff4ull))));
}
B4eee56:{NFSU2_TR(0x4eee56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4eee59:{NFSU2_TR(0x4eee59);
{goto L4eef77;}
}
B4eee5e:L4eee5e:{c.instructions+=2;NFSU2_TR(0x4eee5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee61:{NFSU2_TR(0x4eee61);
if(r1(R+518)){{goto L4eef72;}}
}
B4eee67:L4eee67:{c.instructions+=2;NFSU2_TR(0x4eee67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee6a:{NFSU2_TR(0x4eee6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eee76;}}
}
B4eee6c:L4eee6c:{c.instructions+=2;NFSU2_TR(0x4eee6c);
w4(R+0,u32(0x1ull));
}
B4eee71:{NFSU2_TR(0x4eee71);
{goto L4eef77;}
}
B4eee76:L4eee76:{c.instructions+=2;NFSU2_TR(0x4eee76);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee79:{NFSU2_TR(0x4eee79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eee93;}}
}
B4eee7b:L4eee7b:{c.instructions+=3;NFSU2_TR(0x4eee7b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eee7d:{NFSU2_TR(0x4eee7d);
__builtin_memmove((R+4),(R+24),4);
}
B4eee7f:{NFSU2_TR(0x4eee7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eee84ull));
TAIL_STATIC(0x497ee0u,497);
}
B4eee84:L4eee84:{c.instructions+=6;NFSU2_TR(0x4eee84);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4eee86:{NFSU2_TR(0x4eee86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eee88:{NFSU2_TR(0x4eee88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4eee8b:{NFSU2_TR(0x4eee8b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4eee8c:{NFSU2_TR(0x4eee8c);
__builtin_memmove((R+0),(R+8),4);
}
B4eee8e:{NFSU2_TR(0x4eee8e);
{goto L4eef77;}
}
B4eee93:L4eee93:{c.instructions+=2;NFSU2_TR(0x4eee93);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eee96:{NFSU2_TR(0x4eee96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eee9c:L4eee9c:{c.instructions+=2;NFSU2_TR(0x4eee9c);
w4(R+0,u32(0x10ull));
}
B4eeea1:{NFSU2_TR(0x4eeea1);
{goto L4eef77;}
}
B4eeea6:L4eeea6:{c.instructions+=2;NFSU2_TR(0x4eeea6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd9feec59ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eeeac:{NFSU2_TR(0x4eeeac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eeeb2:L4eeeb2:{c.instructions+=2;NFSU2_TR(0x4eeeb2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eeeb5:{NFSU2_TR(0x4eeeb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eeec1;}}
}
B4eeeb7:L4eeeb7:{c.instructions+=2;NFSU2_TR(0x4eeeb7);
w4(R+0,u32(0x1ull));
}
B4eeebc:{NFSU2_TR(0x4eeebc);
{goto L4eef77;}
}
B4eeec1:L4eeec1:{c.instructions+=2;NFSU2_TR(0x4eeec1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eeec4:{NFSU2_TR(0x4eeec4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eeede;}}
}
B4eeec6:L4eeec6:{c.instructions+=3;NFSU2_TR(0x4eeec6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeec8:{NFSU2_TR(0x4eeec8);
__builtin_memmove((R+4),(R+24),4);
}
B4eeeca:{NFSU2_TR(0x4eeeca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeecfull));
TAIL_STATIC(0x497ee0u,497);
}
B4eeecf:L4eeecf:{c.instructions+=5;NFSU2_TR(0x4eeecf);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4eeed1:{NFSU2_TR(0x4eeed1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4eeed3:{NFSU2_TR(0x4eeed3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff2ull))));
}
B4eeed6:{NFSU2_TR(0x4eeed6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4eeed9:{NFSU2_TR(0x4eeed9);
{goto L4eef77;}
}
B4eeede:L4eeede:{c.instructions+=2;NFSU2_TR(0x4eeede);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eeee1:{NFSU2_TR(0x4eeee1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eeeed;}}
}
B4eeee3:L4eeee3:{c.instructions+=2;NFSU2_TR(0x4eeee3);
w4(R+0,u32(0x10ull));
}
B4eeee8:{NFSU2_TR(0x4eeee8);
{goto L4eef77;}
}
B4eeeed:L4eeeed:{c.instructions+=2;NFSU2_TR(0x4eeeed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eeef0:{NFSU2_TR(0x4eeef0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef06;}}
}
B4eeef2:L4eeef2:{c.instructions+=3;NFSU2_TR(0x4eeef2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeef4:{NFSU2_TR(0x4eeef4);
__builtin_memmove((R+4),(R+24),4);
}
B4eeef6:{NFSU2_TR(0x4eeef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeefbull));
TAIL_STATIC(0x497ee0u,497);
}
B4eeefb:L4eeefb:{c.instructions+=5;NFSU2_TR(0x4eeefb);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4eeefd:{NFSU2_TR(0x4eeefd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4eeeff:{NFSU2_TR(0x4eeeff);
w4(R+0,u32(0-u32(r4(R+0))));
}
B4eef01:{NFSU2_TR(0x4eef01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B4eef04:{NFSU2_TR(0x4eef04);
{goto L4eef77;}
}
B4eef06:L4eef06:{c.instructions+=2;NFSU2_TR(0x4eef06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef09:{NFSU2_TR(0x4eef09);
{goto L4eef70;}
}
B4eef0b:L4eef0b:{c.instructions+=3;NFSU2_TR(0x4eef0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eef0f:{NFSU2_TR(0x4eef0f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef15:{NFSU2_TR(0x4eef15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef42;}}
}
B4eef17:L4eef17:{c.instructions+=2;NFSU2_TR(0x4eef17);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef1a:{NFSU2_TR(0x4eef1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef31;}}
}
B4eef1c:L4eef1c:{c.instructions+=3;NFSU2_TR(0x4eef1c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eef1e:{NFSU2_TR(0x4eef1e);
__builtin_memmove((R+4),(R+24),4);
}
B4eef20:{NFSU2_TR(0x4eef20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eef25ull));
TAIL_STATIC(0x497ee0u,497);
}
B4eef25:L4eef25:{c.instructions+=6;NFSU2_TR(0x4eef25);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4eef27:{NFSU2_TR(0x4eef27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eef29:{NFSU2_TR(0x4eef29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4eef2c:{NFSU2_TR(0x4eef2c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4eef2d:{NFSU2_TR(0x4eef2d);
__builtin_memmove((R+0),(R+4),4);
}
B4eef2f:{NFSU2_TR(0x4eef2f);
{goto L4eef77;}
}
B4eef31:L4eef31:{c.instructions+=2;NFSU2_TR(0x4eef31);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef34:{NFSU2_TR(0x4eef34);
if(r1(R+518)){{goto L4eef72;}}
}
B4eef36:L4eef36:{c.instructions+=2;NFSU2_TR(0x4eef36);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef39:{NFSU2_TR(0x4eef39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eef3b:L4eef3b:{c.instructions+=2;NFSU2_TR(0x4eef3b);
w4(R+0,u32(0x1ull));
}
B4eef40:{NFSU2_TR(0x4eef40);
{goto L4eef77;}
}
B4eef42:L4eef42:{c.instructions+=2;NFSU2_TR(0x4eef42);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd9feec59ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef48:{NFSU2_TR(0x4eef48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eef4a:L4eef4a:{c.instructions+=2;NFSU2_TR(0x4eef4a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef4d:{NFSU2_TR(0x4eef4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef56;}}
}
B4eef4f:L4eef4f:{c.instructions+=2;NFSU2_TR(0x4eef4f);
w4(R+0,u32(0x1ull));
}
B4eef54:{NFSU2_TR(0x4eef54);
{goto L4eef77;}
}
B4eef56:L4eef56:{c.instructions+=2;NFSU2_TR(0x4eef56);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef59:{NFSU2_TR(0x4eef59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef6d;}}
}
B4eef5b:L4eef5b:{c.instructions+=3;NFSU2_TR(0x4eef5b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eef5d:{NFSU2_TR(0x4eef5d);
__builtin_memmove((R+4),(R+24),4);
}
B4eef5f:{NFSU2_TR(0x4eef5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eef64ull));
TAIL_STATIC(0x497ee0u,497);
}
B4eef64:L4eef64:{c.instructions+=4;NFSU2_TR(0x4eef64);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4eef66:{NFSU2_TR(0x4eef66);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4eef68:{NFSU2_TR(0x4eef68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B4eef6b:{NFSU2_TR(0x4eef6b);
{goto L4eef77;}
}
B4eef6d:L4eef6d:{c.instructions+=1;NFSU2_TR(0x4eef6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eef70:L4eef70:{c.instructions+=1;NFSU2_TR(0x4eef70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eef77;}}
}
B4eef72:L4eef72:{c.instructions+=1;NFSU2_TR(0x4eef72);
w4(R+0,u32(0x3ull));
}
B4eef77:L4eef77:{c.instructions+=2;NFSU2_TR(0x4eef77);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f444c),4);
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
B4eef7d:{NFSU2_TR(0x4eef7d);
if(r1(R+518)){TAIL_STATIC(0x4ef08bu,4ef);}
}
B4eef83:L4eef83:{c.instructions+=7;NFSU2_TR(0x4eef83);
__builtin_memmove((R+8),gp(0x85ad28),4);
}
B4eef89:{NFSU2_TR(0x4eef89);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4eef8f:{NFSU2_TR(0x4eef8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eef90:{NFSU2_TR(0x4eef90);
__builtin_memmove((R+4),(R+24),4);
}
B4eef92:{NFSU2_TR(0x4eef92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eef98:{NFSU2_TR(0x4eef98);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4eef9d:{NFSU2_TR(0x4eef9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eefa2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4eec90u);}goto L4eec90;}
}
B4eefa2:L4eefa2:{c.instructions+=2;NFSU2_TR(0x4eefa2);
__builtin_memmove((R+4),(R+24),4);
}
B4eefa4:{NFSU2_TR(0x4eefa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eefa9ull));
TAIL_STATIC(0x4b2310u,4b2);
}
B4eefa9:L4eefa9:{c.instructions+=2;NFSU2_TR(0x4eefa9);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eefb0:{NFSU2_TR(0x4eefb0);
if(r1(R+518)){{goto L4eefe6;}}
}
B4eefb2:L4eefb2:{c.instructions+=4;NFSU2_TR(0x4eefb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eefb5:{NFSU2_TR(0x4eefb5);
u8 U[4];
w4(U+0,u32(0x7976fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eefba:{NFSU2_TR(0x4eefba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eefbb:{NFSU2_TR(0x4eefbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eefc0ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4eefc0:L4eefc0:{c.instructions+=3;NFSU2_TR(0x4eefc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eefc3:{NFSU2_TR(0x4eefc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eefc5:{NFSU2_TR(0x4eefc5);
if(r1(R+518)){{goto L4eefe6;}}
}
B4eefc7:L4eefc7:{c.instructions+=3;NFSU2_TR(0x4eefc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eefca:{NFSU2_TR(0x4eefca);
u8 U[4];
w4(U+0,u32(0x797fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eefcf:{NFSU2_TR(0x4eefcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eefd4ull));
TAIL_STATIC(0x505450u,505);
}
B4eefd4:L4eefd4:{c.instructions+=3;NFSU2_TR(0x4eefd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eefd5:{NFSU2_TR(0x4eefd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eefd6:{NFSU2_TR(0x4eefd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eefdbull));
TAIL_STATIC(0x5379c0u,537);
}
B4eefdb:L4eefdb:{c.instructions+=2;NFSU2_TR(0x4eefdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eefdc:{NFSU2_TR(0x4eefdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eefe1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4eefe1:L4eefe1:{c.instructions+=2;NFSU2_TR(0x4eefe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4eefe4:{NFSU2_TR(0x4eefe4);
TAIL_STATIC(0x4ef01fu,4ef);
}
B4eefe6:L4eefe6:{c.instructions+=3;NFSU2_TR(0x4eefe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eefe9:{NFSU2_TR(0x4eefe9);
u8 U[4];
w4(U+0,u32(0x797fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eefee:{NFSU2_TR(0x4eefee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeff3ull));
TAIL_STATIC(0x505450u,505);
}
B4eeff3:L4eeff3:{c.instructions+=3;NFSU2_TR(0x4eeff3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeff4:{NFSU2_TR(0x4eeff4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeff5:{NFSU2_TR(0x4eeff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eeffaull));
TAIL_STATIC(0x5379c0u,537);
}
B4eeffa:L4eeffa:{c.instructions+=2;NFSU2_TR(0x4eeffa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eeffb:{NFSU2_TR(0x4eeffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef000ull));
TAIL_STATIC(0x50ca50u,50c);
}
XIT:NFSU2_TR_EXIT(0x4ee,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
