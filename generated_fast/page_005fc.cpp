#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fd(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5fc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5fc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 page_5fc(Cpu& c){return body_5fc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5fc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5fc002:goto L5fc002;
case 0x5fc004:c.instructions+=1;goto B5fc004;
case 0x5fc007:goto L5fc007;
case 0x5fc00a:c.instructions+=2;goto B5fc00a;
case 0x5fc00c:c.instructions+=1;goto B5fc00c;
case 0x5fc00e:goto L5fc00e;
case 0x5fc014:c.instructions+=3;goto B5fc014;
case 0x5fc015:c.instructions+=2;goto B5fc015;
case 0x5fc017:c.instructions+=1;goto B5fc017;
case 0x5fc01c:goto L5fc01c;
case 0x5fc01e:goto L5fc01e;
case 0x5fc028:goto L5fc028;
case 0x5fc02b:c.instructions+=2;goto B5fc02b;
case 0x5fc02d:c.instructions+=1;goto B5fc02d;
case 0x5fc02f:goto L5fc02f;
case 0x5fc039:goto L5fc039;
case 0x5fc03b:c.instructions+=1;goto B5fc03b;
case 0x5fc040:goto L5fc040;
case 0x5fc041:c.instructions+=5;goto B5fc041;
case 0x5fc042:c.instructions+=4;goto B5fc042;
case 0x5fc043:c.instructions+=3;goto B5fc043;
case 0x5fc045:c.instructions+=2;goto B5fc045;
case 0x5fc046:c.instructions+=1;goto B5fc046;
case 0x5fc050:goto L5fc050;
case 0x5fc053:c.instructions+=3;goto B5fc053;
case 0x5fc055:c.instructions+=2;goto B5fc055;
case 0x5fc057:c.instructions+=1;goto B5fc057;
case 0x5fc059:goto L5fc059;
case 0x5fc05a:c.instructions+=1;goto B5fc05a;
case 0x5fc05c:goto L5fc05c;
case 0x5fc05d:c.instructions+=1;goto B5fc05d;
case 0x5fc05f:goto L5fc05f;
case 0x5fc062:c.instructions+=2;goto B5fc062;
case 0x5fc065:c.instructions+=1;goto B5fc065;
case 0x5fc067:goto L5fc067;
case 0x5fc06e:c.instructions+=1;goto B5fc06e;
case 0x5fc070:goto L5fc070;
case 0x5fc073:c.instructions+=1;goto B5fc073;
case 0x5fc074:goto L5fc074;
case 0x5fc077:c.instructions+=2;goto B5fc077;
case 0x5fc07a:c.instructions+=1;goto B5fc07a;
case 0x5fc07c:goto L5fc07c;
case 0x5fc083:c.instructions+=1;goto B5fc083;
case 0x5fc085:goto L5fc085;
case 0x5fc08b:c.instructions+=6;goto B5fc08b;
case 0x5fc091:c.instructions+=5;goto B5fc091;
case 0x5fc097:c.instructions+=4;goto B5fc097;
case 0x5fc099:c.instructions+=3;goto B5fc099;
case 0x5fc09f:c.instructions+=2;goto B5fc09f;
case 0x5fc0a2:c.instructions+=1;goto B5fc0a2;
case 0x5fc0a4:goto L5fc0a4;
case 0x5fc0aa:c.instructions+=1;goto B5fc0aa;
case 0x5fc0ab:goto L5fc0ab;
case 0x5fc0b1:c.instructions+=4;goto B5fc0b1;
case 0x5fc0b7:c.instructions+=3;goto B5fc0b7;
case 0x5fc0b9:c.instructions+=2;goto B5fc0b9;
case 0x5fc0bc:c.instructions+=1;goto B5fc0bc;
case 0x5fc0be:goto L5fc0be;
case 0x5fc0bf:goto L5fc0bf;
case 0x5fc0c5:c.instructions+=1;goto B5fc0c5;
case 0x5fc0c6:goto L5fc0c6;
case 0x5fc0c9:c.instructions+=2;goto B5fc0c9;
case 0x5fc0cc:c.instructions+=1;goto B5fc0cc;
case 0x5fc0ce:goto L5fc0ce;
case 0x5fc0d5:goto L5fc0d5;
case 0x5fc0e0:goto L5fc0e0;
case 0x5fc0e5:c.instructions+=2;goto B5fc0e5;
case 0x5fc0e7:c.instructions+=1;goto B5fc0e7;
case 0x5fc0e9:goto L5fc0e9;
case 0x5fc0ee:c.instructions+=2;goto B5fc0ee;
case 0x5fc0f0:c.instructions+=1;goto B5fc0f0;
case 0x5fc0f2:goto L5fc0f2;
case 0x5fc0f7:c.instructions+=5;goto B5fc0f7;
case 0x5fc0f8:c.instructions+=4;goto B5fc0f8;
case 0x5fc102:c.instructions+=3;goto B5fc102;
case 0x5fc104:c.instructions+=2;goto B5fc104;
case 0x5fc106:c.instructions+=1;goto B5fc106;
case 0x5fc108:goto L5fc108;
case 0x5fc110:goto L5fc110;
case 0x5fc112:c.instructions+=2;goto B5fc112;
case 0x5fc114:c.instructions+=1;goto B5fc114;
case 0x5fc119:goto L5fc119;
case 0x5fc11b:c.instructions+=2;goto B5fc11b;
case 0x5fc121:c.instructions+=1;goto B5fc121;
case 0x5fc123:goto L5fc123;
case 0x5fc124:goto L5fc124;
case 0x5fc130:goto L5fc130;
case 0x5fc131:c.instructions+=18;goto B5fc131;
case 0x5fc132:c.instructions+=17;goto B5fc132;
case 0x5fc134:c.instructions+=16;goto B5fc134;
case 0x5fc135:c.instructions+=15;goto B5fc135;
case 0x5fc139:c.instructions+=14;goto B5fc139;
case 0x5fc13b:c.instructions+=13;goto B5fc13b;
case 0x5fc13d:c.instructions+=12;goto B5fc13d;
case 0x5fc140:c.instructions+=11;goto B5fc140;
case 0x5fc143:c.instructions+=10;goto B5fc143;
case 0x5fc146:c.instructions+=9;goto B5fc146;
case 0x5fc149:c.instructions+=8;goto B5fc149;
case 0x5fc14c:c.instructions+=7;goto B5fc14c;
case 0x5fc14f:c.instructions+=6;goto B5fc14f;
case 0x5fc152:c.instructions+=5;goto B5fc152;
case 0x5fc155:c.instructions+=4;goto B5fc155;
case 0x5fc158:c.instructions+=3;goto B5fc158;
case 0x5fc159:c.instructions+=2;goto B5fc159;
case 0x5fc15c:c.instructions+=1;goto B5fc15c;
case 0x5fc161:goto L5fc161;
case 0x5fc167:c.instructions+=14;goto B5fc167;
case 0x5fc16d:c.instructions+=13;goto B5fc16d;
case 0x5fc173:c.instructions+=12;goto B5fc173;
case 0x5fc179:c.instructions+=11;goto B5fc179;
case 0x5fc17f:c.instructions+=10;goto B5fc17f;
case 0x5fc185:c.instructions+=9;goto B5fc185;
case 0x5fc18b:c.instructions+=8;goto B5fc18b;
case 0x5fc191:c.instructions+=7;goto B5fc191;
case 0x5fc197:c.instructions+=6;goto B5fc197;
case 0x5fc19d:c.instructions+=5;goto B5fc19d;
case 0x5fc19f:c.instructions+=4;goto B5fc19f;
case 0x5fc1a5:c.instructions+=3;goto B5fc1a5;
case 0x5fc1a7:c.instructions+=2;goto B5fc1a7;
case 0x5fc1ac:c.instructions+=1;goto B5fc1ac;
case 0x5fc1b0:goto L5fc1b0;
case 0x5fc1b3:c.instructions+=4;goto B5fc1b3;
case 0x5fc1b5:c.instructions+=3;goto B5fc1b5;
case 0x5fc1b6:c.instructions+=2;goto B5fc1b6;
case 0x5fc1b7:c.instructions+=1;goto B5fc1b7;
case 0x5fc1b9:goto L5fc1b9;
case 0x5fc1bf:c.instructions+=15;goto B5fc1bf;
case 0x5fc1c5:c.instructions+=14;goto B5fc1c5;
case 0x5fc1cb:c.instructions+=13;goto B5fc1cb;
case 0x5fc1d1:c.instructions+=12;goto B5fc1d1;
case 0x5fc1d7:c.instructions+=11;goto B5fc1d7;
case 0x5fc1d9:c.instructions+=10;goto B5fc1d9;
case 0x5fc1df:c.instructions+=9;goto B5fc1df;
case 0x5fc1e5:c.instructions+=8;goto B5fc1e5;
case 0x5fc1e7:c.instructions+=7;goto B5fc1e7;
case 0x5fc1ed:c.instructions+=6;goto B5fc1ed;
case 0x5fc1f4:c.instructions+=5;goto B5fc1f4;
case 0x5fc1f5:c.instructions+=4;goto B5fc1f5;
case 0x5fc1fc:c.instructions+=3;goto B5fc1fc;
case 0x5fc1fd:c.instructions+=2;goto B5fc1fd;
case 0x5fc1fe:c.instructions+=1;goto B5fc1fe;
case 0x5fc210:goto L5fc210;
case 0x5fc211:c.instructions+=8;goto B5fc211;
case 0x5fc212:c.instructions+=7;goto B5fc212;
case 0x5fc214:c.instructions+=6;goto B5fc214;
case 0x5fc217:c.instructions+=5;goto B5fc217;
case 0x5fc218:c.instructions+=4;goto B5fc218;
case 0x5fc21a:c.instructions+=3;goto B5fc21a;
case 0x5fc21c:c.instructions+=2;goto B5fc21c;
case 0x5fc21e:c.instructions+=1;goto B5fc21e;
case 0x5fc220:goto L5fc220;
case 0x5fc221:c.instructions+=1;goto B5fc221;
case 0x5fc223:goto L5fc223;
case 0x5fc226:c.instructions+=4;goto B5fc226;
case 0x5fc22b:c.instructions+=3;goto B5fc22b;
case 0x5fc22e:c.instructions+=2;goto B5fc22e;
case 0x5fc232:c.instructions+=1;goto B5fc232;
case 0x5fc234:goto L5fc234;
case 0x5fc23a:c.instructions+=2;goto B5fc23a;
case 0x5fc23c:c.instructions+=1;goto B5fc23c;
case 0x5fc23e:goto L5fc23e;
case 0x5fc241:c.instructions+=2;goto B5fc241;
case 0x5fc244:c.instructions+=1;goto B5fc244;
case 0x5fc246:goto L5fc246;
case 0x5fc249:c.instructions+=3;goto B5fc249;
case 0x5fc24c:c.instructions+=2;goto B5fc24c;
case 0x5fc24e:c.instructions+=1;goto B5fc24e;
case 0x5fc250:goto L5fc250;
case 0x5fc253:c.instructions+=1;goto B5fc253;
case 0x5fc255:goto L5fc255;
case 0x5fc258:goto L5fc258;
case 0x5fc25b:c.instructions+=2;goto B5fc25b;
case 0x5fc25d:c.instructions+=1;goto B5fc25d;
case 0x5fc25f:goto L5fc25f;
case 0x5fc261:c.instructions+=1;goto B5fc261;
case 0x5fc263:goto L5fc263;
case 0x5fc266:c.instructions+=1;goto B5fc266;
case 0x5fc268:goto L5fc268;
case 0x5fc26e:c.instructions+=2;goto B5fc26e;
case 0x5fc26f:c.instructions+=1;goto B5fc26f;
case 0x5fc274:goto L5fc274;
case 0x5fc277:c.instructions+=4;goto B5fc277;
case 0x5fc278:c.instructions+=3;goto B5fc278;
case 0x5fc27e:c.instructions+=2;goto B5fc27e;
case 0x5fc280:c.instructions+=1;goto B5fc280;
case 0x5fc282:goto L5fc282;
case 0x5fc283:goto L5fc283;
case 0x5fc284:c.instructions+=3;goto B5fc284;
case 0x5fc285:c.instructions+=2;goto B5fc285;
case 0x5fc286:c.instructions+=1;goto B5fc286;
case 0x5fc290:goto L5fc290;
case 0x5fc2a0:goto L5fc2a0;
case 0x5fc2a2:c.instructions+=25;goto B5fc2a2;
case 0x5fc2a7:c.instructions+=24;goto B5fc2a7;
case 0x5fc2ad:c.instructions+=23;goto B5fc2ad;
case 0x5fc2ae:c.instructions+=22;goto B5fc2ae;
case 0x5fc2b5:c.instructions+=21;goto B5fc2b5;
case 0x5fc2b6:c.instructions+=20;goto B5fc2b6;
case 0x5fc2ba:c.instructions+=19;goto B5fc2ba;
case 0x5fc2bb:c.instructions+=18;goto B5fc2bb;
case 0x5fc2bc:c.instructions+=17;goto B5fc2bc;
case 0x5fc2bd:c.instructions+=16;goto B5fc2bd;
case 0x5fc2bf:c.instructions+=15;goto B5fc2bf;
case 0x5fc2c1:c.instructions+=14;goto B5fc2c1;
case 0x5fc2c4:c.instructions+=13;goto B5fc2c4;
case 0x5fc2c6:c.instructions+=12;goto B5fc2c6;
case 0x5fc2c8:c.instructions+=11;goto B5fc2c8;
case 0x5fc2cb:c.instructions+=10;goto B5fc2cb;
case 0x5fc2ce:c.instructions+=9;goto B5fc2ce;
case 0x5fc2d2:c.instructions+=8;goto B5fc2d2;
case 0x5fc2d5:c.instructions+=7;goto B5fc2d5;
case 0x5fc2d8:c.instructions+=6;goto B5fc2d8;
case 0x5fc2de:c.instructions+=5;goto B5fc2de;
case 0x5fc2e4:c.instructions+=4;goto B5fc2e4;
case 0x5fc2e7:c.instructions+=3;goto B5fc2e7;
case 0x5fc2ec:c.instructions+=2;goto B5fc2ec;
case 0x5fc2f1:c.instructions+=1;goto B5fc2f1;
case 0x5fc2f4:goto L5fc2f4;
case 0x5fc2f7:c.instructions+=7;goto B5fc2f7;
case 0x5fc2f9:c.instructions+=6;goto B5fc2f9;
case 0x5fc2fc:c.instructions+=5;goto B5fc2fc;
case 0x5fc2ff:c.instructions+=4;goto B5fc2ff;
case 0x5fc302:c.instructions+=3;goto B5fc302;
case 0x5fc305:c.instructions+=2;goto B5fc305;
case 0x5fc306:c.instructions+=1;goto B5fc306;
case 0x5fc308:goto L5fc308;
case 0x5fc30e:c.instructions+=1;goto B5fc30e;
case 0x5fc313:goto L5fc313;
case 0x5fc319:c.instructions+=4;goto B5fc319;
case 0x5fc31b:c.instructions+=3;goto B5fc31b;
case 0x5fc31e:c.instructions+=2;goto B5fc31e;
case 0x5fc31f:c.instructions+=1;goto B5fc31f;
case 0x5fc321:goto L5fc321;
case 0x5fc327:c.instructions+=5;goto B5fc327;
case 0x5fc32d:c.instructions+=4;goto B5fc32d;
case 0x5fc333:c.instructions+=3;goto B5fc333;
case 0x5fc339:c.instructions+=2;goto B5fc339;
case 0x5fc33f:c.instructions+=1;goto B5fc33f;
case 0x5fc344:goto L5fc344;
case 0x5fc346:c.instructions+=8;goto B5fc346;
case 0x5fc349:c.instructions+=7;goto B5fc349;
case 0x5fc34d:c.instructions+=6;goto B5fc34d;
case 0x5fc351:c.instructions+=5;goto B5fc351;
case 0x5fc355:c.instructions+=4;goto B5fc355;
case 0x5fc358:c.instructions+=3;goto B5fc358;
case 0x5fc35b:c.instructions+=2;goto B5fc35b;
case 0x5fc35f:c.instructions+=1;goto B5fc35f;
case 0x5fc361:goto L5fc361;
case 0x5fc367:c.instructions+=1;goto B5fc367;
case 0x5fc369:goto L5fc369;
case 0x5fc36f:c.instructions+=1;goto B5fc36f;
case 0x5fc375:goto L5fc375;
case 0x5fc37b:c.instructions+=1;goto B5fc37b;
case 0x5fc37d:goto L5fc37d;
case 0x5fc383:c.instructions+=1;goto B5fc383;
case 0x5fc389:goto L5fc389;
case 0x5fc38c:c.instructions+=2;goto B5fc38c;
case 0x5fc390:c.instructions+=1;goto B5fc390;
case 0x5fc396:goto L5fc396;
case 0x5fc39c:c.instructions+=1;goto B5fc39c;
case 0x5fc39e:goto L5fc39e;
case 0x5fc3a3:c.instructions+=1;goto B5fc3a3;
case 0x5fc3a8:goto L5fc3a8;
case 0x5fc3ab:c.instructions+=4;goto B5fc3ab;
case 0x5fc3af:c.instructions+=3;goto B5fc3af;
case 0x5fc3b1:c.instructions+=2;goto B5fc3b1;
case 0x5fc3b5:c.instructions+=1;goto B5fc3b5;
case 0x5fc3b7:goto L5fc3b7;
case 0x5fc3b9:c.instructions+=1;goto B5fc3b9;
case 0x5fc3be:goto L5fc3be;
case 0x5fc3c0:goto L5fc3c0;
case 0x5fc3c2:goto L5fc3c2;
case 0x5fc3c6:c.instructions+=1;goto B5fc3c6;
case 0x5fc3cc:goto L5fc3cc;
case 0x5fc3d2:c.instructions+=1;goto B5fc3d2;
case 0x5fc3d4:goto L5fc3d4;
case 0x5fc3d6:c.instructions+=1;goto B5fc3d6;
case 0x5fc3db:goto L5fc3db;
case 0x5fc3de:c.instructions+=4;goto B5fc3de;
case 0x5fc3e2:c.instructions+=3;goto B5fc3e2;
case 0x5fc3e4:c.instructions+=2;goto B5fc3e4;
case 0x5fc3ec:c.instructions+=1;goto B5fc3ec;
case 0x5fc3ee:goto L5fc3ee;
case 0x5fc3ef:c.instructions+=2;goto B5fc3ef;
case 0x5fc3f1:c.instructions+=1;goto B5fc3f1;
case 0x5fc3f6:goto L5fc3f6;
case 0x5fc3f8:goto L5fc3f8;
case 0x5fc3fa:goto L5fc3fa;
case 0x5fc3fe:c.instructions+=1;goto B5fc3fe;
case 0x5fc404:goto L5fc404;
case 0x5fc40a:c.instructions+=1;goto B5fc40a;
case 0x5fc40c:goto L5fc40c;
case 0x5fc412:c.instructions+=1;goto B5fc412;
case 0x5fc414:goto L5fc414;
case 0x5fc41a:c.instructions+=1;goto B5fc41a;
case 0x5fc41c:goto L5fc41c;
case 0x5fc41e:c.instructions+=1;goto B5fc41e;
case 0x5fc423:goto L5fc423;
case 0x5fc426:c.instructions+=4;goto B5fc426;
case 0x5fc42a:c.instructions+=3;goto B5fc42a;
case 0x5fc42c:c.instructions+=2;goto B5fc42c;
case 0x5fc434:c.instructions+=1;goto B5fc434;
case 0x5fc436:goto L5fc436;
case 0x5fc438:c.instructions+=1;goto B5fc438;
case 0x5fc43d:goto L5fc43d;
case 0x5fc43f:goto L5fc43f;
case 0x5fc441:goto L5fc441;
case 0x5fc442:c.instructions+=4;goto B5fc442;
case 0x5fc444:c.instructions+=3;goto B5fc444;
case 0x5fc448:c.instructions+=2;goto B5fc448;
case 0x5fc44e:c.instructions+=1;goto B5fc44e;
case 0x5fc453:goto L5fc453;
case 0x5fc459:c.instructions+=2;goto B5fc459;
case 0x5fc45a:c.instructions+=1;goto B5fc45a;
case 0x5fc45f:goto L5fc45f;
case 0x5fc465:goto L5fc465;
case 0x5fc46a:c.instructions+=2;goto B5fc46a;
case 0x5fc46d:c.instructions+=1;goto B5fc46d;
case 0x5fc46f:goto L5fc46f;
case 0x5fc472:c.instructions+=1;goto B5fc472;
case 0x5fc474:goto L5fc474;
case 0x5fc476:c.instructions+=1;goto B5fc476;
case 0x5fc47b:goto L5fc47b;
case 0x5fc47d:goto L5fc47d;
case 0x5fc480:c.instructions+=5;goto B5fc480;
case 0x5fc483:c.instructions+=4;goto B5fc483;
case 0x5fc486:c.instructions+=3;goto B5fc486;
case 0x5fc489:c.instructions+=2;goto B5fc489;
case 0x5fc48c:c.instructions+=1;goto B5fc48c;
case 0x5fc48f:goto L5fc48f;
case 0x5fc495:c.instructions+=7;goto B5fc495;
case 0x5fc49b:c.instructions+=6;goto B5fc49b;
case 0x5fc4a1:c.instructions+=5;goto B5fc4a1;
case 0x5fc4a4:c.instructions+=4;goto B5fc4a4;
case 0x5fc4a7:c.instructions+=3;goto B5fc4a7;
case 0x5fc4ad:c.instructions+=2;goto B5fc4ad;
case 0x5fc4b4:c.instructions+=1;goto B5fc4b4;
case 0x5fc4b6:goto L5fc4b6;
case 0x5fc4bb:c.instructions+=1;goto B5fc4bb;
case 0x5fc4c0:goto L5fc4c0;
case 0x5fc4c3:c.instructions+=4;goto B5fc4c3;
case 0x5fc4c7:c.instructions+=3;goto B5fc4c7;
case 0x5fc4c9:c.instructions+=2;goto B5fc4c9;
case 0x5fc4d1:c.instructions+=1;goto B5fc4d1;
case 0x5fc4d3:goto L5fc4d3;
case 0x5fc4d5:c.instructions+=1;goto B5fc4d5;
case 0x5fc4da:goto L5fc4da;
case 0x5fc4dc:goto L5fc4dc;
case 0x5fc4de:goto L5fc4de;
case 0x5fc4e2:c.instructions+=5;goto B5fc4e2;
case 0x5fc4e3:c.instructions+=4;goto B5fc4e3;
case 0x5fc4e5:c.instructions+=3;goto B5fc4e5;
case 0x5fc4e9:c.instructions+=2;goto B5fc4e9;
case 0x5fc4ef:c.instructions+=1;goto B5fc4ef;
case 0x5fc4f4:goto L5fc4f4;
case 0x5fc4f8:c.instructions+=6;goto B5fc4f8;
case 0x5fc4f9:c.instructions+=5;goto B5fc4f9;
case 0x5fc4fa:c.instructions+=4;goto B5fc4fa;
case 0x5fc4fb:c.instructions+=3;goto B5fc4fb;
case 0x5fc502:c.instructions+=2;goto B5fc502;
case 0x5fc505:c.instructions+=1;goto B5fc505;
case 0x5fc510:goto L5fc510;
case 0x5fc511:c.instructions+=10;goto B5fc511;
case 0x5fc513:c.instructions+=9;goto B5fc513;
case 0x5fc516:c.instructions+=8;goto B5fc516;
case 0x5fc519:c.instructions+=7;goto B5fc519;
case 0x5fc51a:c.instructions+=6;goto B5fc51a;
case 0x5fc51c:c.instructions+=5;goto B5fc51c;
case 0x5fc521:c.instructions+=4;goto B5fc521;
case 0x5fc522:c.instructions+=3;goto B5fc522;
case 0x5fc523:c.instructions+=2;goto B5fc523;
case 0x5fc527:c.instructions+=1;goto B5fc527;
case 0x5fc529:goto L5fc529;
case 0x5fc52e:c.instructions+=2;goto B5fc52e;
case 0x5fc530:c.instructions+=1;goto B5fc530;
case 0x5fc536:goto L5fc536;
case 0x5fc53b:c.instructions+=2;goto B5fc53b;
case 0x5fc53d:c.instructions+=1;goto B5fc53d;
case 0x5fc53f:goto L5fc53f;
case 0x5fc544:c.instructions+=2;goto B5fc544;
case 0x5fc546:c.instructions+=1;goto B5fc546;
case 0x5fc548:goto L5fc548;
case 0x5fc54d:c.instructions+=2;goto B5fc54d;
case 0x5fc54f:c.instructions+=1;goto B5fc54f;
case 0x5fc551:goto L5fc551;
case 0x5fc558:c.instructions+=6;goto B5fc558;
case 0x5fc55f:c.instructions+=5;goto B5fc55f;
case 0x5fc565:c.instructions+=4;goto B5fc565;
case 0x5fc567:c.instructions+=3;goto B5fc567;
case 0x5fc569:c.instructions+=2;goto B5fc569;
case 0x5fc56b:c.instructions+=1;goto B5fc56b;
case 0x5fc56d:goto L5fc56d;
case 0x5fc573:c.instructions+=2;goto B5fc573;
case 0x5fc575:c.instructions+=1;goto B5fc575;
case 0x5fc577:goto L5fc577;
case 0x5fc57b:c.instructions+=2;goto B5fc57b;
case 0x5fc57c:c.instructions+=1;goto B5fc57c;
case 0x5fc581:goto L5fc581;
case 0x5fc583:c.instructions+=1;goto B5fc583;
case 0x5fc585:goto L5fc585;
case 0x5fc58b:c.instructions+=7;goto B5fc58b;
case 0x5fc58e:c.instructions+=6;goto B5fc58e;
case 0x5fc58f:c.instructions+=5;goto B5fc58f;
case 0x5fc590:c.instructions+=4;goto B5fc590;
case 0x5fc591:c.instructions+=3;goto B5fc591;
case 0x5fc593:c.instructions+=2;goto B5fc593;
case 0x5fc594:c.instructions+=1;goto B5fc594;
case 0x5fc595:goto L5fc595;
case 0x5fc598:c.instructions+=4;goto B5fc598;
case 0x5fc599:c.instructions+=3;goto B5fc599;
case 0x5fc59c:c.instructions+=2;goto B5fc59c;
case 0x5fc59d:c.instructions+=1;goto B5fc59d;
case 0x5fc5a2:goto L5fc5a2;
case 0x5fc5a5:c.instructions+=7;goto B5fc5a5;
case 0x5fc5a8:c.instructions+=6;goto B5fc5a8;
case 0x5fc5a9:c.instructions+=5;goto B5fc5a9;
case 0x5fc5aa:c.instructions+=4;goto B5fc5aa;
case 0x5fc5ab:c.instructions+=3;goto B5fc5ab;
case 0x5fc5ad:c.instructions+=2;goto B5fc5ad;
case 0x5fc5ae:c.instructions+=1;goto B5fc5ae;
case 0x5fc5af:goto L5fc5af;
case 0x5fc5b5:c.instructions+=3;goto B5fc5b5;
case 0x5fc5bb:c.instructions+=2;goto B5fc5bb;
case 0x5fc5bd:c.instructions+=1;goto B5fc5bd;
case 0x5fc5bf:goto L5fc5bf;
case 0x5fc5c6:c.instructions+=6;goto B5fc5c6;
case 0x5fc5c7:c.instructions+=5;goto B5fc5c7;
case 0x5fc5c8:c.instructions+=4;goto B5fc5c8;
case 0x5fc5c9:c.instructions+=3;goto B5fc5c9;
case 0x5fc5cb:c.instructions+=2;goto B5fc5cb;
case 0x5fc5cc:c.instructions+=1;goto B5fc5cc;
case 0x5fc5cd:goto L5fc5cd;
case 0x5fc5cf:c.instructions+=8;goto B5fc5cf;
case 0x5fc5d1:c.instructions+=7;goto B5fc5d1;
case 0x5fc5d4:c.instructions+=6;goto B5fc5d4;
case 0x5fc5d7:c.instructions+=5;goto B5fc5d7;
case 0x5fc5d8:c.instructions+=4;goto B5fc5d8;
case 0x5fc5d9:c.instructions+=3;goto B5fc5d9;
case 0x5fc5dd:c.instructions+=2;goto B5fc5dd;
case 0x5fc5e1:c.instructions+=1;goto B5fc5e1;
case 0x5fc5e6:goto L5fc5e6;
case 0x5fc5e9:c.instructions+=8;goto B5fc5e9;
case 0x5fc5ef:c.instructions+=7;goto B5fc5ef;
case 0x5fc5f5:c.instructions+=6;goto B5fc5f5;
case 0x5fc5fb:c.instructions+=5;goto B5fc5fb;
case 0x5fc5fe:c.instructions+=4;goto B5fc5fe;
case 0x5fc602:c.instructions+=3;goto B5fc602;
case 0x5fc604:c.instructions+=2;goto B5fc604;
case 0x5fc607:c.instructions+=1;goto B5fc607;
case 0x5fc609:goto L5fc609;
case 0x5fc60d:c.instructions+=4;goto B5fc60d;
case 0x5fc613:c.instructions+=3;goto B5fc613;
case 0x5fc615:c.instructions+=2;goto B5fc615;
case 0x5fc618:c.instructions+=1;goto B5fc618;
case 0x5fc61e:goto L5fc61e;
case 0x5fc621:c.instructions+=3;goto B5fc621;
case 0x5fc624:c.instructions+=2;goto B5fc624;
case 0x5fc626:c.instructions+=1;goto B5fc626;
case 0x5fc62c:goto L5fc62c;
case 0x5fc630:c.instructions+=3;goto B5fc630;
case 0x5fc631:c.instructions+=2;goto B5fc631;
case 0x5fc633:c.instructions+=1;goto B5fc633;
case 0x5fc638:goto L5fc638;
case 0x5fc63c:c.instructions+=4;goto B5fc63c;
case 0x5fc640:c.instructions+=3;goto B5fc640;
case 0x5fc641:c.instructions+=2;goto B5fc641;
case 0x5fc642:c.instructions+=1;goto B5fc642;
case 0x5fc647:goto L5fc647;
case 0x5fc64b:c.instructions+=5;goto B5fc64b;
case 0x5fc651:c.instructions+=4;goto B5fc651;
case 0x5fc654:c.instructions+=3;goto B5fc654;
case 0x5fc656:c.instructions+=2;goto B5fc656;
case 0x5fc659:c.instructions+=1;goto B5fc659;
case 0x5fc65f:goto L5fc65f;
case 0x5fc662:c.instructions+=2;goto B5fc662;
case 0x5fc664:c.instructions+=1;goto B5fc664;
case 0x5fc66a:goto L5fc66a;
case 0x5fc66e:c.instructions+=4;goto B5fc66e;
case 0x5fc674:c.instructions+=3;goto B5fc674;
case 0x5fc676:c.instructions+=2;goto B5fc676;
case 0x5fc679:c.instructions+=1;goto B5fc679;
case 0x5fc67b:goto L5fc67b;
case 0x5fc67e:c.instructions+=9;goto B5fc67e;
case 0x5fc680:c.instructions+=8;goto B5fc680;
case 0x5fc682:c.instructions+=7;goto B5fc682;
case 0x5fc685:c.instructions+=6;goto B5fc685;
case 0x5fc689:c.instructions+=5;goto B5fc689;
case 0x5fc68b:c.instructions+=4;goto B5fc68b;
case 0x5fc68c:c.instructions+=3;goto B5fc68c;
case 0x5fc68d:c.instructions+=2;goto B5fc68d;
case 0x5fc68f:c.instructions+=1;goto B5fc68f;
case 0x5fc694:goto L5fc694;
case 0x5fc698:c.instructions+=8;goto B5fc698;
case 0x5fc69b:c.instructions+=7;goto B5fc69b;
case 0x5fc69f:c.instructions+=6;goto B5fc69f;
case 0x5fc6a2:c.instructions+=5;goto B5fc6a2;
case 0x5fc6a4:c.instructions+=4;goto B5fc6a4;
case 0x5fc6aa:c.instructions+=3;goto B5fc6aa;
case 0x5fc6ac:c.instructions+=2;goto B5fc6ac;
case 0x5fc6af:c.instructions+=1;goto B5fc6af;
case 0x5fc6b1:goto L5fc6b1;
case 0x5fc6b5:c.instructions+=4;goto B5fc6b5;
case 0x5fc6b6:c.instructions+=3;goto B5fc6b6;
case 0x5fc6b7:c.instructions+=2;goto B5fc6b7;
case 0x5fc6b9:c.instructions+=1;goto B5fc6b9;
case 0x5fc6be:goto L5fc6be;
case 0x5fc6c2:c.instructions+=5;goto B5fc6c2;
case 0x5fc6c6:c.instructions+=4;goto B5fc6c6;
case 0x5fc6c7:c.instructions+=3;goto B5fc6c7;
case 0x5fc6c8:c.instructions+=2;goto B5fc6c8;
case 0x5fc6ca:c.instructions+=1;goto B5fc6ca;
case 0x5fc6cf:goto L5fc6cf;
case 0x5fc6d3:c.instructions+=8;goto B5fc6d3;
case 0x5fc6d7:c.instructions+=7;goto B5fc6d7;
case 0x5fc6da:c.instructions+=6;goto B5fc6da;
case 0x5fc6db:c.instructions+=5;goto B5fc6db;
case 0x5fc6dc:c.instructions+=4;goto B5fc6dc;
case 0x5fc6dd:c.instructions+=3;goto B5fc6dd;
case 0x5fc6df:c.instructions+=2;goto B5fc6df;
case 0x5fc6e0:c.instructions+=1;goto B5fc6e0;
case 0x5fc6e1:goto L5fc6e1;
case 0x5fc6e5:c.instructions+=5;goto B5fc6e5;
case 0x5fc6e6:c.instructions+=4;goto B5fc6e6;
case 0x5fc6ea:c.instructions+=3;goto B5fc6ea;
case 0x5fc6eb:c.instructions+=2;goto B5fc6eb;
case 0x5fc6ef:c.instructions+=1;goto B5fc6ef;
case 0x5fc6f4:goto L5fc6f4;
case 0x5fc6f8:c.instructions+=11;goto B5fc6f8;
case 0x5fc6fb:c.instructions+=10;goto B5fc6fb;
case 0x5fc6ff:c.instructions+=9;goto B5fc6ff;
case 0x5fc702:c.instructions+=8;goto B5fc702;
case 0x5fc704:c.instructions+=7;goto B5fc704;
case 0x5fc708:c.instructions+=6;goto B5fc708;
case 0x5fc70b:c.instructions+=5;goto B5fc70b;
case 0x5fc70d:c.instructions+=4;goto B5fc70d;
case 0x5fc713:c.instructions+=3;goto B5fc713;
case 0x5fc715:c.instructions+=2;goto B5fc715;
case 0x5fc718:c.instructions+=1;goto B5fc718;
case 0x5fc71a:goto L5fc71a;
case 0x5fc71e:c.instructions+=3;goto B5fc71e;
case 0x5fc722:c.instructions+=2;goto B5fc722;
case 0x5fc724:c.instructions+=1;goto B5fc724;
case 0x5fc727:goto L5fc727;
case 0x5fc728:c.instructions+=5;goto B5fc728;
case 0x5fc729:c.instructions+=4;goto B5fc729;
case 0x5fc72a:c.instructions+=3;goto B5fc72a;
case 0x5fc72c:c.instructions+=2;goto B5fc72c;
case 0x5fc72d:c.instructions+=1;goto B5fc72d;
case 0x5fc730:goto L5fc730;
case 0x5fc732:c.instructions+=23;goto B5fc732;
case 0x5fc737:c.instructions+=22;goto B5fc737;
case 0x5fc73d:c.instructions+=21;goto B5fc73d;
case 0x5fc73e:c.instructions+=20;goto B5fc73e;
case 0x5fc745:c.instructions+=19;goto B5fc745;
case 0x5fc746:c.instructions+=18;goto B5fc746;
case 0x5fc747:c.instructions+=17;goto B5fc747;
case 0x5fc748:c.instructions+=16;goto B5fc748;
case 0x5fc74a:c.instructions+=15;goto B5fc74a;
case 0x5fc74f:c.instructions+=14;goto B5fc74f;
case 0x5fc751:c.instructions+=13;goto B5fc751;
case 0x5fc754:c.instructions+=12;goto B5fc754;
case 0x5fc759:c.instructions+=11;goto B5fc759;
case 0x5fc75c:c.instructions+=10;goto B5fc75c;
case 0x5fc75e:c.instructions+=9;goto B5fc75e;
case 0x5fc761:c.instructions+=8;goto B5fc761;
case 0x5fc764:c.instructions+=7;goto B5fc764;
case 0x5fc769:c.instructions+=6;goto B5fc769;
case 0x5fc76c:c.instructions+=5;goto B5fc76c;
case 0x5fc76f:c.instructions+=4;goto B5fc76f;
case 0x5fc770:c.instructions+=3;goto B5fc770;
case 0x5fc774:c.instructions+=2;goto B5fc774;
case 0x5fc777:c.instructions+=1;goto B5fc777;
case 0x5fc77c:goto L5fc77c;
case 0x5fc782:c.instructions+=2;goto B5fc782;
case 0x5fc786:c.instructions+=1;goto B5fc786;
case 0x5fc78b:goto L5fc78b;
case 0x5fc791:c.instructions+=7;goto B5fc791;
case 0x5fc793:c.instructions+=6;goto B5fc793;
case 0x5fc799:c.instructions+=5;goto B5fc799;
case 0x5fc79b:c.instructions+=4;goto B5fc79b;
case 0x5fc7a0:c.instructions+=3;goto B5fc7a0;
case 0x5fc7a4:c.instructions+=2;goto B5fc7a4;
case 0x5fc7aa:c.instructions+=1;goto B5fc7aa;
case 0x5fc7ac:goto L5fc7ac;
case 0x5fc7b2:c.instructions+=1;goto B5fc7b2;
case 0x5fc7b4:goto L5fc7b4;
case 0x5fc7ba:c.instructions+=1;goto B5fc7ba;
case 0x5fc7bc:goto L5fc7bc;
case 0x5fc7c2:c.instructions+=1;goto B5fc7c2;
case 0x5fc7c4:goto L5fc7c4;
case 0x5fc7ca:goto L5fc7ca;
case 0x5fc7d0:c.instructions+=19;goto B5fc7d0;
case 0x5fc7d2:c.instructions+=18;goto B5fc7d2;
case 0x5fc7d8:c.instructions+=17;goto B5fc7d8;
case 0x5fc7de:c.instructions+=16;goto B5fc7de;
case 0x5fc7e1:c.instructions+=15;goto B5fc7e1;
case 0x5fc7e4:c.instructions+=14;goto B5fc7e4;
case 0x5fc7e7:c.instructions+=13;goto B5fc7e7;
case 0x5fc7ee:c.instructions+=12;goto B5fc7ee;
case 0x5fc7f1:c.instructions+=11;goto B5fc7f1;
case 0x5fc7f8:c.instructions+=10;goto B5fc7f8;
case 0x5fc7fb:c.instructions+=9;goto B5fc7fb;
case 0x5fc7fe:c.instructions+=8;goto B5fc7fe;
case 0x5fc801:c.instructions+=7;goto B5fc801;
case 0x5fc804:c.instructions+=6;goto B5fc804;
case 0x5fc807:c.instructions+=5;goto B5fc807;
case 0x5fc80d:c.instructions+=4;goto B5fc80d;
case 0x5fc813:c.instructions+=3;goto B5fc813;
case 0x5fc819:c.instructions+=2;goto B5fc819;
case 0x5fc81f:c.instructions+=1;goto B5fc81f;
case 0x5fc824:goto L5fc824;
case 0x5fc828:c.instructions+=8;goto B5fc828;
case 0x5fc82e:c.instructions+=7;goto B5fc82e;
case 0x5fc834:c.instructions+=6;goto B5fc834;
case 0x5fc836:c.instructions+=5;goto B5fc836;
case 0x5fc837:c.instructions+=4;goto B5fc837;
case 0x5fc838:c.instructions+=3;goto B5fc838;
case 0x5fc83f:c.instructions+=2;goto B5fc83f;
case 0x5fc842:c.instructions+=1;goto B5fc842;
case 0x5fc850:goto L5fc850;
case 0x5fc852:c.instructions+=14;goto B5fc852;
case 0x5fc857:c.instructions+=13;goto B5fc857;
case 0x5fc85d:c.instructions+=12;goto B5fc85d;
case 0x5fc85e:c.instructions+=11;goto B5fc85e;
case 0x5fc865:c.instructions+=10;goto B5fc865;
case 0x5fc866:c.instructions+=9;goto B5fc866;
case 0x5fc867:c.instructions+=8;goto B5fc867;
case 0x5fc869:c.instructions+=7;goto B5fc869;
case 0x5fc86a:c.instructions+=6;goto B5fc86a;
case 0x5fc86e:c.instructions+=5;goto B5fc86e;
case 0x5fc871:c.instructions+=4;goto B5fc871;
case 0x5fc873:c.instructions+=3;goto B5fc873;
case 0x5fc875:c.instructions+=2;goto B5fc875;
case 0x5fc87d:c.instructions+=1;goto B5fc87d;
case 0x5fc87f:goto L5fc87f;
case 0x5fc880:c.instructions+=1;goto B5fc880;
case 0x5fc883:goto L5fc883;
case 0x5fc885:c.instructions+=1;goto B5fc885;
case 0x5fc88a:goto L5fc88a;
case 0x5fc88d:c.instructions+=4;goto B5fc88d;
case 0x5fc88e:c.instructions+=3;goto B5fc88e;
case 0x5fc894:c.instructions+=2;goto B5fc894;
case 0x5fc896:c.instructions+=1;goto B5fc896;
case 0x5fc898:goto L5fc898;
case 0x5fc899:goto L5fc899;
case 0x5fc89f:c.instructions+=2;goto B5fc89f;
case 0x5fc8a1:c.instructions+=1;goto B5fc8a1;
case 0x5fc8a3:goto L5fc8a3;
case 0x5fc8a4:c.instructions+=1;goto B5fc8a4;
case 0x5fc8a9:goto L5fc8a9;
case 0x5fc8ac:goto L5fc8ac;
case 0x5fc8b2:c.instructions+=3;goto B5fc8b2;
case 0x5fc8bc:c.instructions+=2;goto B5fc8bc;
case 0x5fc8c1:c.instructions+=1;goto B5fc8c1;
case 0x5fc8c6:goto L5fc8c6;
case 0x5fc8cb:c.instructions+=6;goto B5fc8cb;
case 0x5fc8cd:c.instructions+=5;goto B5fc8cd;
case 0x5fc8d2:c.instructions+=4;goto B5fc8d2;
case 0x5fc8d5:c.instructions+=3;goto B5fc8d5;
case 0x5fc8d6:c.instructions+=2;goto B5fc8d6;
case 0x5fc8de:c.instructions+=1;goto B5fc8de;
case 0x5fc8e3:goto L5fc8e3;
case 0x5fc8e7:c.instructions+=5;goto B5fc8e7;
case 0x5fc8e8:c.instructions+=4;goto B5fc8e8;
case 0x5fc8e9:c.instructions+=3;goto B5fc8e9;
case 0x5fc8f0:c.instructions+=2;goto B5fc8f0;
case 0x5fc8f3:c.instructions+=1;goto B5fc8f3;
case 0x5fc900:goto L5fc900;
case 0x5fc901:c.instructions+=5;goto B5fc901;
case 0x5fc905:c.instructions+=4;goto B5fc905;
case 0x5fc908:c.instructions+=3;goto B5fc908;
case 0x5fc909:c.instructions+=2;goto B5fc909;
case 0x5fc90b:c.instructions+=1;goto B5fc90b;
case 0x5fc90d:goto L5fc90d;
case 0x5fc912:c.instructions+=2;goto B5fc912;
case 0x5fc914:c.instructions+=1;goto B5fc914;
case 0x5fc916:goto L5fc916;
case 0x5fc91b:c.instructions+=2;goto B5fc91b;
case 0x5fc91d:c.instructions+=1;goto B5fc91d;
case 0x5fc91f:goto L5fc91f;
case 0x5fc924:c.instructions+=2;goto B5fc924;
case 0x5fc926:c.instructions+=1;goto B5fc926;
case 0x5fc928:goto L5fc928;
case 0x5fc92d:c.instructions+=2;goto B5fc92d;
case 0x5fc930:c.instructions+=1;goto B5fc930;
case 0x5fc932:goto L5fc932;
case 0x5fc935:c.instructions+=1;goto B5fc935;
case 0x5fc93b:goto L5fc93b;
case 0x5fc940:c.instructions+=1;goto B5fc940;
case 0x5fc945:goto L5fc945;
case 0x5fc946:c.instructions+=2;goto B5fc946;
case 0x5fc947:c.instructions+=1;goto B5fc947;
case 0x5fc94a:goto L5fc94a;
case 0x5fc94c:c.instructions+=9;goto B5fc94c;
case 0x5fc94e:c.instructions+=8;goto B5fc94e;
case 0x5fc952:c.instructions+=7;goto B5fc952;
case 0x5fc957:c.instructions+=6;goto B5fc957;
case 0x5fc95a:c.instructions+=5;goto B5fc95a;
case 0x5fc95b:c.instructions+=4;goto B5fc95b;
case 0x5fc95c:c.instructions+=3;goto B5fc95c;
case 0x5fc95e:c.instructions+=2;goto B5fc95e;
case 0x5fc960:c.instructions+=1;goto B5fc960;
case 0x5fc962:goto L5fc962;
case 0x5fc967:goto L5fc967;
case 0x5fc96a:c.instructions+=3;goto B5fc96a;
case 0x5fc96d:c.instructions+=2;goto B5fc96d;
case 0x5fc96f:c.instructions+=1;goto B5fc96f;
case 0x5fc971:goto L5fc971;
case 0x5fc975:c.instructions+=4;goto B5fc975;
case 0x5fc977:c.instructions+=3;goto B5fc977;
case 0x5fc978:c.instructions+=2;goto B5fc978;
case 0x5fc979:c.instructions+=1;goto B5fc979;
case 0x5fc97c:goto L5fc97c;
case 0x5fc981:goto L5fc981;
case 0x5fc984:c.instructions+=4;goto B5fc984;
case 0x5fc985:c.instructions+=3;goto B5fc985;
case 0x5fc988:c.instructions+=2;goto B5fc988;
case 0x5fc98a:c.instructions+=1;goto B5fc98a;
case 0x5fc98c:goto L5fc98c;
case 0x5fc98f:c.instructions+=1;goto B5fc98f;
case 0x5fc991:goto L5fc991;
case 0x5fc997:c.instructions+=6;goto B5fc997;
case 0x5fc998:c.instructions+=5;goto B5fc998;
case 0x5fc999:c.instructions+=4;goto B5fc999;
case 0x5fc99c:c.instructions+=3;goto B5fc99c;
case 0x5fc99d:c.instructions+=2;goto B5fc99d;
case 0x5fc99e:c.instructions+=1;goto B5fc99e;
case 0x5fc9a1:goto L5fc9a1;
case 0x5fc9a4:c.instructions+=1;goto B5fc9a4;
case 0x5fc9aa:goto L5fc9aa;
case 0x5fc9ad:c.instructions+=3;goto B5fc9ad;
case 0x5fc9af:c.instructions+=2;goto B5fc9af;
case 0x5fc9b1:c.instructions+=1;goto B5fc9b1;
case 0x5fc9b3:goto L5fc9b3;
case 0x5fc9b9:c.instructions+=1;goto B5fc9b9;
case 0x5fc9c0:goto L5fc9c0;
case 0x5fc9c3:c.instructions+=5;goto B5fc9c3;
case 0x5fc9c9:c.instructions+=4;goto B5fc9c9;
case 0x5fc9cc:c.instructions+=3;goto B5fc9cc;
case 0x5fc9d1:c.instructions+=2;goto B5fc9d1;
case 0x5fc9d3:c.instructions+=1;goto B5fc9d3;
case 0x5fc9d8:goto L5fc9d8;
case 0x5fc9da:c.instructions+=3;goto B5fc9da;
case 0x5fc9de:c.instructions+=2;goto B5fc9de;
case 0x5fc9e4:c.instructions+=1;goto B5fc9e4;
case 0x5fc9e6:goto L5fc9e6;
case 0x5fc9e9:c.instructions+=1;goto B5fc9e9;
case 0x5fc9ed:goto L5fc9ed;
case 0x5fc9f2:c.instructions+=10;goto B5fc9f2;
case 0x5fc9f5:c.instructions+=9;goto B5fc9f5;
case 0x5fc9f7:c.instructions+=8;goto B5fc9f7;
case 0x5fc9fd:c.instructions+=7;goto B5fc9fd;
case 0x5fc9fe:c.instructions+=6;goto B5fc9fe;
case 0x5fca04:c.instructions+=5;goto B5fca04;
case 0x5fca07:c.instructions+=4;goto B5fca07;
case 0x5fca0a:c.instructions+=3;goto B5fca0a;
case 0x5fca0d:c.instructions+=2;goto B5fca0d;
case 0x5fca0f:c.instructions+=1;goto B5fca0f;
case 0x5fca11:goto L5fca11;
case 0x5fca17:c.instructions+=4;goto B5fca17;
case 0x5fca1a:c.instructions+=3;goto B5fca1a;
case 0x5fca1f:c.instructions+=2;goto B5fca1f;
case 0x5fca21:c.instructions+=1;goto B5fca21;
case 0x5fca26:goto L5fca26;
case 0x5fca2b:c.instructions+=6;goto B5fca2b;
case 0x5fca2e:c.instructions+=5;goto B5fca2e;
case 0x5fca35:c.instructions+=4;goto B5fca35;
case 0x5fca3a:c.instructions+=3;goto B5fca3a;
case 0x5fca3c:c.instructions+=2;goto B5fca3c;
case 0x5fca41:c.instructions+=1;goto B5fca41;
case 0x5fca43:goto L5fca43;
case 0x5fca48:c.instructions+=2;goto B5fca48;
case 0x5fca4a:c.instructions+=1;goto B5fca4a;
case 0x5fca4c:goto L5fca4c;
case 0x5fca4e:c.instructions+=3;goto B5fca4e;
case 0x5fca53:c.instructions+=2;goto B5fca53;
case 0x5fca58:c.instructions+=1;goto B5fca58;
case 0x5fca5d:goto L5fca5d;
case 0x5fca60:c.instructions+=1;goto B5fca60;
case 0x5fca66:goto L5fca66;
case 0x5fca6b:c.instructions+=2;goto B5fca6b;
case 0x5fca6d:c.instructions+=1;goto B5fca6d;
case 0x5fca6f:goto L5fca6f;
case 0x5fca75:c.instructions+=1;goto B5fca75;
case 0x5fca77:goto L5fca77;
case 0x5fca79:c.instructions+=1;goto B5fca79;
case 0x5fca7e:goto L5fca7e;
case 0x5fca84:goto L5fca84;
case 0x5fca85:c.instructions+=1;goto B5fca85;
case 0x5fca86:goto L5fca86;
case 0x5fca87:c.instructions+=2;goto B5fca87;
case 0x5fca88:c.instructions+=1;goto B5fca88;
case 0x5fca90:goto L5fca90;
case 0x5fca95:c.instructions+=4;goto B5fca95;
case 0x5fca98:c.instructions+=3;goto B5fca98;
case 0x5fca99:c.instructions+=2;goto B5fca99;
case 0x5fca9b:c.instructions+=1;goto B5fca9b;
case 0x5fca9d:goto L5fca9d;
case 0x5fcaa2:c.instructions+=1;goto B5fcaa2;
case 0x5fcaa4:goto L5fcaa4;
case 0x5fcaa7:c.instructions+=1;goto B5fcaa7;
case 0x5fcaa9:goto L5fcaa9;
case 0x5fcab0:c.instructions+=1;goto B5fcab0;
case 0x5fcab2:goto L5fcab2;
case 0x5fcab7:c.instructions+=4;goto B5fcab7;
case 0x5fcab8:c.instructions+=3;goto B5fcab8;
case 0x5fcaba:c.instructions+=2;goto B5fcaba;
case 0x5fcabc:c.instructions+=1;goto B5fcabc;
case 0x5fcabe:goto L5fcabe;
case 0x5fcac0:goto L5fcac0;
case 0x5fcac7:c.instructions+=4;goto B5fcac7;
case 0x5fcace:c.instructions+=3;goto B5fcace;
case 0x5fcad1:c.instructions+=2;goto B5fcad1;
case 0x5fcad3:c.instructions+=1;goto B5fcad3;
case 0x5fcad5:goto L5fcad5;
case 0x5fcad8:c.instructions+=1;goto B5fcad8;
case 0x5fcada:goto L5fcada;
case 0x5fcadc:goto L5fcadc;
case 0x5fcade:c.instructions+=1;goto B5fcade;
case 0x5fcae0:goto L5fcae0;
case 0x5fcae1:c.instructions+=1;goto B5fcae1;
case 0x5fcae6:goto L5fcae6;
case 0x5fcaeb:c.instructions+=3;goto B5fcaeb;
case 0x5fcaec:c.instructions+=2;goto B5fcaec;
case 0x5fcaee:c.instructions+=1;goto B5fcaee;
case 0x5fcaf0:goto L5fcaf0;
case 0x5fcaf7:c.instructions+=1;goto B5fcaf7;
case 0x5fcaf8:goto L5fcaf8;
case 0x5fcaf9:c.instructions+=1;goto B5fcaf9;
case 0x5fcb00:goto L5fcb00;
case 0x5fcb01:c.instructions+=21;goto B5fcb01;
case 0x5fcb03:c.instructions+=20;goto B5fcb03;
case 0x5fcb05:c.instructions+=19;goto B5fcb05;
case 0x5fcb0a:c.instructions+=18;goto B5fcb0a;
case 0x5fcb10:c.instructions+=17;goto B5fcb10;
case 0x5fcb11:c.instructions+=16;goto B5fcb11;
case 0x5fcb18:c.instructions+=15;goto B5fcb18;
case 0x5fcb19:c.instructions+=14;goto B5fcb19;
case 0x5fcb1a:c.instructions+=13;goto B5fcb1a;
case 0x5fcb1b:c.instructions+=12;goto B5fcb1b;
case 0x5fcb1d:c.instructions+=11;goto B5fcb1d;
case 0x5fcb1e:c.instructions+=10;goto B5fcb1e;
case 0x5fcb21:c.instructions+=9;goto B5fcb21;
case 0x5fcb24:c.instructions+=8;goto B5fcb24;
case 0x5fcb26:c.instructions+=7;goto B5fcb26;
case 0x5fcb2c:c.instructions+=6;goto B5fcb2c;
case 0x5fcb2f:c.instructions+=5;goto B5fcb2f;
case 0x5fcb31:c.instructions+=4;goto B5fcb31;
case 0x5fcb34:c.instructions+=3;goto B5fcb34;
case 0x5fcb3a:c.instructions+=2;goto B5fcb3a;
case 0x5fcb3e:c.instructions+=1;goto B5fcb3e;
case 0x5fcb43:goto L5fcb43;
case 0x5fcb45:c.instructions+=3;goto B5fcb45;
case 0x5fcb4b:c.instructions+=2;goto B5fcb4b;
case 0x5fcb51:c.instructions+=1;goto B5fcb51;
case 0x5fcb56:goto L5fcb56;
case 0x5fcb58:c.instructions+=4;goto B5fcb58;
case 0x5fcb5e:c.instructions+=3;goto B5fcb5e;
case 0x5fcb62:c.instructions+=2;goto B5fcb62;
case 0x5fcb68:c.instructions+=1;goto B5fcb68;
case 0x5fcb6d:goto L5fcb6d;
case 0x5fcb6f:c.instructions+=3;goto B5fcb6f;
case 0x5fcb75:c.instructions+=2;goto B5fcb75;
case 0x5fcb79:c.instructions+=1;goto B5fcb79;
case 0x5fcb7e:goto L5fcb7e;
case 0x5fcb84:c.instructions+=9;goto B5fcb84;
case 0x5fcb8a:c.instructions+=8;goto B5fcb8a;
case 0x5fcb90:c.instructions+=7;goto B5fcb90;
case 0x5fcb96:c.instructions+=6;goto B5fcb96;
case 0x5fcb9c:c.instructions+=5;goto B5fcb9c;
case 0x5fcb9f:c.instructions+=4;goto B5fcb9f;
case 0x5fcba2:c.instructions+=3;goto B5fcba2;
case 0x5fcba4:c.instructions+=2;goto B5fcba4;
case 0x5fcba9:c.instructions+=1;goto B5fcba9;
case 0x5fcbac:goto L5fcbac;
case 0x5fcbae:goto L5fcbae;
case 0x5fcbb1:c.instructions+=50;goto B5fcbb1;
case 0x5fcbb4:c.instructions+=49;goto B5fcbb4;
case 0x5fcbbe:c.instructions+=48;goto B5fcbbe;
case 0x5fcbc3:c.instructions+=47;goto B5fcbc3;
case 0x5fcbc9:c.instructions+=46;goto B5fcbc9;
case 0x5fcbcf:c.instructions+=45;goto B5fcbcf;
case 0x5fcbd5:c.instructions+=44;goto B5fcbd5;
case 0x5fcbd7:c.instructions+=43;goto B5fcbd7;
case 0x5fcbdd:c.instructions+=42;goto B5fcbdd;
case 0x5fcbe3:c.instructions+=41;goto B5fcbe3;
case 0x5fcbe9:c.instructions+=40;goto B5fcbe9;
case 0x5fcbef:c.instructions+=39;goto B5fcbef;
case 0x5fcbf5:c.instructions+=38;goto B5fcbf5;
case 0x5fcbfb:c.instructions+=37;goto B5fcbfb;
case 0x5fcbfd:c.instructions+=36;goto B5fcbfd;
case 0x5fcc03:c.instructions+=35;goto B5fcc03;
case 0x5fcc09:c.instructions+=34;goto B5fcc09;
case 0x5fcc0c:c.instructions+=33;goto B5fcc0c;
case 0x5fcc12:c.instructions+=32;goto B5fcc12;
case 0x5fcc18:c.instructions+=31;goto B5fcc18;
case 0x5fcc1b:c.instructions+=30;goto B5fcc1b;
case 0x5fcc21:c.instructions+=29;goto B5fcc21;
case 0x5fcc27:c.instructions+=28;goto B5fcc27;
case 0x5fcc31:c.instructions+=27;goto B5fcc31;
case 0x5fcc34:c.instructions+=26;goto B5fcc34;
case 0x5fcc37:c.instructions+=25;goto B5fcc37;
case 0x5fcc3a:c.instructions+=24;goto B5fcc3a;
case 0x5fcc3d:c.instructions+=23;goto B5fcc3d;
case 0x5fcc3f:c.instructions+=22;goto B5fcc3f;
case 0x5fcc45:c.instructions+=21;goto B5fcc45;
case 0x5fcc4b:c.instructions+=20;goto B5fcc4b;
case 0x5fcc51:c.instructions+=19;goto B5fcc51;
case 0x5fcc57:c.instructions+=18;goto B5fcc57;
case 0x5fcc5d:c.instructions+=17;goto B5fcc5d;
case 0x5fcc63:c.instructions+=16;goto B5fcc63;
case 0x5fcc69:c.instructions+=15;goto B5fcc69;
case 0x5fcc6f:c.instructions+=14;goto B5fcc6f;
case 0x5fcc75:c.instructions+=13;goto B5fcc75;
case 0x5fcc78:c.instructions+=12;goto B5fcc78;
case 0x5fcc7e:c.instructions+=11;goto B5fcc7e;
case 0x5fcc84:c.instructions+=10;goto B5fcc84;
case 0x5fcc8a:c.instructions+=9;goto B5fcc8a;
case 0x5fcc90:c.instructions+=8;goto B5fcc90;
case 0x5fcc91:c.instructions+=7;goto B5fcc91;
case 0x5fcc93:c.instructions+=6;goto B5fcc93;
case 0x5fcc94:c.instructions+=5;goto B5fcc94;
case 0x5fcc95:c.instructions+=4;goto B5fcc95;
case 0x5fcc9c:c.instructions+=3;goto B5fcc9c;
case 0x5fcc9e:c.instructions+=2;goto B5fcc9e;
case 0x5fcc9f:c.instructions+=1;goto B5fcc9f;
case 0x5fccb0:goto L5fccb0;
case 0x5fccb2:c.instructions+=15;goto B5fccb2;
case 0x5fccb7:c.instructions+=14;goto B5fccb7;
case 0x5fccbd:c.instructions+=13;goto B5fccbd;
case 0x5fccbe:c.instructions+=12;goto B5fccbe;
case 0x5fccc5:c.instructions+=11;goto B5fccc5;
case 0x5fccc6:c.instructions+=10;goto B5fccc6;
case 0x5fccc7:c.instructions+=9;goto B5fccc7;
case 0x5fccc8:c.instructions+=8;goto B5fccc8;
case 0x5fccca:c.instructions+=7;goto B5fccca;
case 0x5fccce:c.instructions+=6;goto B5fccce;
case 0x5fccd4:c.instructions+=5;goto B5fccd4;
case 0x5fccd7:c.instructions+=4;goto B5fccd7;
case 0x5fccda:c.instructions+=3;goto B5fccda;
case 0x5fccdc:c.instructions+=2;goto B5fccdc;
case 0x5fcce4:c.instructions+=1;goto B5fcce4;
case 0x5fcce6:goto L5fcce6;
case 0x5fcce8:c.instructions+=8;goto B5fcce8;
case 0x5fccea:c.instructions+=7;goto B5fccea;
case 0x5fcced:c.instructions+=6;goto B5fcced;
case 0x5fccef:c.instructions+=5;goto B5fccef;
case 0x5fccf0:c.instructions+=4;goto B5fccf0;
case 0x5fccf3:c.instructions+=3;goto B5fccf3;
case 0x5fccf8:c.instructions+=2;goto B5fccf8;
case 0x5fccf9:c.instructions+=1;goto B5fccf9;
case 0x5fccfe:goto L5fccfe;
case 0x5fcd00:c.instructions+=3;goto B5fcd00;
case 0x5fcd03:c.instructions+=2;goto B5fcd03;
case 0x5fcd05:c.instructions+=1;goto B5fcd05;
case 0x5fcd07:goto L5fcd07;
case 0x5fcd0d:c.instructions+=2;goto B5fcd0d;
case 0x5fcd12:c.instructions+=1;goto B5fcd12;
case 0x5fcd17:goto L5fcd17;
case 0x5fcd1d:c.instructions+=2;goto B5fcd1d;
case 0x5fcd22:c.instructions+=1;goto B5fcd22;
case 0x5fcd27:goto L5fcd27;
case 0x5fcd2d:c.instructions+=2;goto B5fcd2d;
case 0x5fcd32:c.instructions+=1;goto B5fcd32;
case 0x5fcd37:goto L5fcd37;
case 0x5fcd39:c.instructions+=2;goto B5fcd39;
case 0x5fcd3e:c.instructions+=1;goto B5fcd3e;
case 0x5fcd43:goto L5fcd43;
case 0x5fcd47:c.instructions+=6;goto B5fcd47;
case 0x5fcd4d:c.instructions+=5;goto B5fcd4d;
case 0x5fcd4e:c.instructions+=4;goto B5fcd4e;
case 0x5fcd4f:c.instructions+=3;goto B5fcd4f;
case 0x5fcd56:c.instructions+=2;goto B5fcd56;
case 0x5fcd59:c.instructions+=1;goto B5fcd59;
case 0x5fcd60:goto L5fcd60;
case 0x5fcd61:c.instructions+=10;goto B5fcd61;
case 0x5fcd63:c.instructions+=9;goto B5fcd63;
case 0x5fcd66:c.instructions+=8;goto B5fcd66;
case 0x5fcd69:c.instructions+=7;goto B5fcd69;
case 0x5fcd6d:c.instructions+=6;goto B5fcd6d;
case 0x5fcd6e:c.instructions+=5;goto B5fcd6e;
case 0x5fcd6f:c.instructions+=4;goto B5fcd6f;
case 0x5fcd72:c.instructions+=3;goto B5fcd72;
case 0x5fcd73:c.instructions+=2;goto B5fcd73;
case 0x5fcd75:c.instructions+=1;goto B5fcd75;
case 0x5fcd7b:goto L5fcd7b;
case 0x5fcd7e:c.instructions+=8;goto B5fcd7e;
case 0x5fcd81:c.instructions+=7;goto B5fcd81;
case 0x5fcd87:c.instructions+=6;goto B5fcd87;
case 0x5fcd89:c.instructions+=5;goto B5fcd89;
case 0x5fcd8a:c.instructions+=4;goto B5fcd8a;
case 0x5fcd8e:c.instructions+=3;goto B5fcd8e;
case 0x5fcd8f:c.instructions+=2;goto B5fcd8f;
case 0x5fcd94:c.instructions+=1;goto B5fcd94;
case 0x5fcd99:goto L5fcd99;
case 0x5fcd9a:c.instructions+=2;goto B5fcd9a;
case 0x5fcd9c:c.instructions+=1;goto B5fcd9c;
case 0x5fcda1:goto L5fcda1;
case 0x5fcda4:c.instructions+=8;goto B5fcda4;
case 0x5fcda7:c.instructions+=7;goto B5fcda7;
case 0x5fcdac:c.instructions+=6;goto B5fcdac;
case 0x5fcdae:c.instructions+=5;goto B5fcdae;
case 0x5fcdaf:c.instructions+=4;goto B5fcdaf;
case 0x5fcdb0:c.instructions+=3;goto B5fcdb0;
case 0x5fcdb5:c.instructions+=2;goto B5fcdb5;
case 0x5fcdb9:c.instructions+=1;goto B5fcdb9;
case 0x5fcdbe:goto L5fcdbe;
case 0x5fcdbf:c.instructions+=2;goto B5fcdbf;
case 0x5fcdc1:c.instructions+=1;goto B5fcdc1;
case 0x5fcdc6:goto L5fcdc6;
case 0x5fcdc9:c.instructions+=8;goto B5fcdc9;
case 0x5fcdcc:c.instructions+=7;goto B5fcdcc;
case 0x5fcdd2:c.instructions+=6;goto B5fcdd2;
case 0x5fcdd3:c.instructions+=5;goto B5fcdd3;
case 0x5fcdd5:c.instructions+=4;goto B5fcdd5;
case 0x5fcdd6:c.instructions+=3;goto B5fcdd6;
case 0x5fcddb:c.instructions+=2;goto B5fcddb;
case 0x5fcddf:c.instructions+=1;goto B5fcddf;
case 0x5fcde4:goto L5fcde4;
case 0x5fcde5:c.instructions+=2;goto B5fcde5;
case 0x5fcde7:c.instructions+=1;goto B5fcde7;
case 0x5fcdec:goto L5fcdec;
case 0x5fcdef:c.instructions+=5;goto B5fcdef;
case 0x5fcdf4:c.instructions+=4;goto B5fcdf4;
case 0x5fcdf5:c.instructions+=3;goto B5fcdf5;
case 0x5fcdf9:c.instructions+=2;goto B5fcdf9;
case 0x5fcdfa:c.instructions+=1;goto B5fcdfa;
case 0x5fcdff:goto L5fcdff;
case 0x5fce05:c.instructions+=6;goto B5fce05;
case 0x5fce09:c.instructions+=5;goto B5fce09;
case 0x5fce0c:c.instructions+=4;goto B5fce0c;
case 0x5fce0d:c.instructions+=3;goto B5fce0d;
case 0x5fce0e:c.instructions+=2;goto B5fce0e;
case 0x5fce13:c.instructions+=1;goto B5fce13;
case 0x5fce18:goto L5fce18;
case 0x5fce19:c.instructions+=2;goto B5fce19;
case 0x5fce1b:c.instructions+=1;goto B5fce1b;
case 0x5fce20:goto L5fce20;
case 0x5fce26:c.instructions+=5;goto B5fce26;
case 0x5fce2a:c.instructions+=4;goto B5fce2a;
case 0x5fce2b:c.instructions+=3;goto B5fce2b;
case 0x5fce2c:c.instructions+=2;goto B5fce2c;
case 0x5fce31:c.instructions+=1;goto B5fce31;
case 0x5fce36:goto L5fce36;
case 0x5fce37:c.instructions+=2;goto B5fce37;
case 0x5fce39:c.instructions+=1;goto B5fce39;
case 0x5fce3e:goto L5fce3e;
case 0x5fce43:c.instructions+=5;goto B5fce43;
case 0x5fce47:c.instructions+=4;goto B5fce47;
case 0x5fce48:c.instructions+=3;goto B5fce48;
case 0x5fce49:c.instructions+=2;goto B5fce49;
case 0x5fce4e:c.instructions+=1;goto B5fce4e;
case 0x5fce53:goto L5fce53;
case 0x5fce54:c.instructions+=2;goto B5fce54;
case 0x5fce56:c.instructions+=1;goto B5fce56;
case 0x5fce5b:goto L5fce5b;
case 0x5fce61:c.instructions+=5;goto B5fce61;
case 0x5fce65:c.instructions+=4;goto B5fce65;
case 0x5fce66:c.instructions+=3;goto B5fce66;
case 0x5fce67:c.instructions+=2;goto B5fce67;
case 0x5fce6c:c.instructions+=1;goto B5fce6c;
case 0x5fce71:goto L5fce71;
case 0x5fce72:c.instructions+=2;goto B5fce72;
case 0x5fce74:c.instructions+=1;goto B5fce74;
case 0x5fce79:goto L5fce79;
case 0x5fce7f:c.instructions+=9;goto B5fce7f;
case 0x5fce83:c.instructions+=8;goto B5fce83;
case 0x5fce89:c.instructions+=7;goto B5fce89;
case 0x5fce8c:c.instructions+=6;goto B5fce8c;
case 0x5fce8f:c.instructions+=5;goto B5fce8f;
case 0x5fce94:c.instructions+=4;goto B5fce94;
case 0x5fce98:c.instructions+=3;goto B5fce98;
case 0x5fce9a:c.instructions+=2;goto B5fce9a;
case 0x5fce9e:c.instructions+=1;goto B5fce9e;
case 0x5fcea1:goto L5fcea1;
case 0x5fcea3:c.instructions+=2;goto B5fcea3;
case 0x5fcea5:c.instructions+=1;goto B5fcea5;
case 0x5fcea7:goto L5fcea7;
case 0x5fceab:c.instructions+=5;goto B5fceab;
case 0x5fceac:c.instructions+=4;goto B5fceac;
case 0x5fceb0:c.instructions+=3;goto B5fceb0;
case 0x5fceb1:c.instructions+=2;goto B5fceb1;
case 0x5fceb3:c.instructions+=1;goto B5fceb3;
case 0x5fceb8:goto L5fceb8;
case 0x5fcebe:c.instructions+=8;goto B5fcebe;
case 0x5fcec2:c.instructions+=7;goto B5fcec2;
case 0x5fcec4:c.instructions+=6;goto B5fcec4;
case 0x5fcec8:c.instructions+=5;goto B5fcec8;
case 0x5fcecc:c.instructions+=4;goto B5fcecc;
case 0x5fcece:c.instructions+=3;goto B5fcece;
case 0x5fced2:c.instructions+=2;goto B5fced2;
case 0x5fced6:c.instructions+=1;goto B5fced6;
case 0x5fceda:goto L5fceda;
case 0x5fcee0:c.instructions+=5;goto B5fcee0;
case 0x5fcee4:c.instructions+=4;goto B5fcee4;
case 0x5fcee5:c.instructions+=3;goto B5fcee5;
case 0x5fcee6:c.instructions+=2;goto B5fcee6;
case 0x5fceeb:c.instructions+=1;goto B5fceeb;
case 0x5fcef0:goto L5fcef0;
case 0x5fcef1:c.instructions+=2;goto B5fcef1;
case 0x5fcef3:c.instructions+=1;goto B5fcef3;
case 0x5fcef8:goto L5fcef8;
case 0x5fcefe:c.instructions+=5;goto B5fcefe;
case 0x5fcf02:c.instructions+=4;goto B5fcf02;
case 0x5fcf03:c.instructions+=3;goto B5fcf03;
case 0x5fcf04:c.instructions+=2;goto B5fcf04;
case 0x5fcf09:c.instructions+=1;goto B5fcf09;
case 0x5fcf0e:goto L5fcf0e;
case 0x5fcf0f:c.instructions+=2;goto B5fcf0f;
case 0x5fcf11:c.instructions+=1;goto B5fcf11;
case 0x5fcf16:goto L5fcf16;
case 0x5fcf1b:c.instructions+=5;goto B5fcf1b;
case 0x5fcf1f:c.instructions+=4;goto B5fcf1f;
case 0x5fcf20:c.instructions+=3;goto B5fcf20;
case 0x5fcf21:c.instructions+=2;goto B5fcf21;
case 0x5fcf26:c.instructions+=1;goto B5fcf26;
case 0x5fcf2b:goto L5fcf2b;
case 0x5fcf2c:c.instructions+=2;goto B5fcf2c;
case 0x5fcf2e:c.instructions+=1;goto B5fcf2e;
case 0x5fcf33:goto L5fcf33;
case 0x5fcf36:c.instructions+=2;goto B5fcf36;
case 0x5fcf39:c.instructions+=1;goto B5fcf39;
case 0x5fcf3e:goto L5fcf3e;
case 0x5fcf44:c.instructions+=4;goto B5fcf44;
case 0x5fcf46:c.instructions+=3;goto B5fcf46;
case 0x5fcf48:c.instructions+=2;goto B5fcf48;
case 0x5fcf4b:c.instructions+=1;goto B5fcf4b;
case 0x5fcf4d:goto L5fcf4d;
case 0x5fcf4f:c.instructions+=2;goto B5fcf4f;
case 0x5fcf57:c.instructions+=1;goto B5fcf57;
case 0x5fcf59:goto L5fcf59;
case 0x5fcf5d:goto L5fcf5d;
case 0x5fcf63:c.instructions+=5;goto B5fcf63;
case 0x5fcf67:c.instructions+=4;goto B5fcf67;
case 0x5fcf68:c.instructions+=3;goto B5fcf68;
case 0x5fcf69:c.instructions+=2;goto B5fcf69;
case 0x5fcf6e:c.instructions+=1;goto B5fcf6e;
case 0x5fcf73:goto L5fcf73;
case 0x5fcf74:c.instructions+=2;goto B5fcf74;
case 0x5fcf76:c.instructions+=1;goto B5fcf76;
case 0x5fcf7b:goto L5fcf7b;
case 0x5fcf7e:c.instructions+=2;goto B5fcf7e;
case 0x5fcf81:c.instructions+=1;goto B5fcf81;
case 0x5fcf86:goto L5fcf86;
case 0x5fcf88:c.instructions+=6;goto B5fcf88;
case 0x5fcf8b:c.instructions+=5;goto B5fcf8b;
case 0x5fcf8e:c.instructions+=4;goto B5fcf8e;
case 0x5fcf90:c.instructions+=3;goto B5fcf90;
case 0x5fcf91:c.instructions+=2;goto B5fcf91;
case 0x5fcf93:c.instructions+=1;goto B5fcf93;
case 0x5fcf98:goto L5fcf98;
case 0x5fcf9b:c.instructions+=3;goto B5fcf9b;
case 0x5fcfa1:c.instructions+=2;goto B5fcfa1;
case 0x5fcfa3:c.instructions+=1;goto B5fcfa3;
case 0x5fcfa5:goto L5fcfa5;
case 0x5fcfab:c.instructions+=1;goto B5fcfab;
case 0x5fcfad:goto L5fcfad;
case 0x5fcfb3:c.instructions+=8;goto B5fcfb3;
case 0x5fcfb5:c.instructions+=7;goto B5fcfb5;
case 0x5fcfb9:c.instructions+=6;goto B5fcfb9;
case 0x5fcfbd:c.instructions+=5;goto B5fcfbd;
case 0x5fcfc3:c.instructions+=4;goto B5fcfc3;
case 0x5fcfc9:c.instructions+=3;goto B5fcfc9;
case 0x5fcfcb:c.instructions+=2;goto B5fcfcb;
case 0x5fcfce:c.instructions+=1;goto B5fcfce;
case 0x5fcfd0:goto L5fcfd0;
case 0x5fcfd5:c.instructions+=1;goto B5fcfd5;
case 0x5fcfd7:goto L5fcfd7;
case 0x5fcfd9:goto L5fcfd9;
case 0x5fcfdc:c.instructions+=4;goto B5fcfdc;
case 0x5fcfde:c.instructions+=3;goto B5fcfde;
case 0x5fcfdf:c.instructions+=2;goto B5fcfdf;
case 0x5fcfe1:c.instructions+=1;goto B5fcfe1;
case 0x5fcfe6:goto L5fcfe6;
case 0x5fcfe9:c.instructions+=8;goto B5fcfe9;
case 0x5fcfec:c.instructions+=7;goto B5fcfec;
case 0x5fcff2:c.instructions+=6;goto B5fcff2;
case 0x5fcff4:c.instructions+=5;goto B5fcff4;
case 0x5fcff7:c.instructions+=4;goto B5fcff7;
case 0x5fcffa:c.instructions+=3;goto B5fcffa;
case 0x5fcffc:c.instructions+=2;goto B5fcffc;
case 0x5fcfff:c.instructions+=1;goto B5fcfff;
default:missing_instruction(c.pc);}
B5fc002:L5fc002:{c.instructions+=2;NFSU2_TR(0x5fc002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fc004:{NFSU2_TR(0x5fc004);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc007ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fc007:L5fc007:{c.instructions+=3;NFSU2_TR(0x5fc007);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fc00a:{NFSU2_TR(0x5fc00a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc00c:{NFSU2_TR(0x5fc00c);
if(r1(R+518)){{goto L5fc01e;}}
}
B5fc00e:L5fc00e:{c.instructions+=4;NFSU2_TR(0x5fc00e);
__builtin_memmove((R+4),gp(0x7a55c4),4);
}
B5fc014:{NFSU2_TR(0x5fc014);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc015:{NFSU2_TR(0x5fc015);
__builtin_memmove((R+4),(R+24),4);
}
B5fc017:{NFSU2_TR(0x5fc017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc01cull));
TAIL_STATIC(0x5ebf70u,5eb);
}
B5fc01c:L5fc01c:{c.instructions+=1;NFSU2_TR(0x5fc01c);
{goto L5fc028;}
}
B5fc01e:L5fc01e:{c.instructions+=1;NFSU2_TR(0x5fc01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc028:L5fc028:{c.instructions+=3;NFSU2_TR(0x5fc028);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fc02b:{NFSU2_TR(0x5fc02b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc02d:{NFSU2_TR(0x5fc02d);
if(r1(R+518)){{goto L5fc039;}}
}
B5fc02f:L5fc02f:{c.instructions+=1;NFSU2_TR(0x5fc02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x970ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc039:L5fc039:{c.instructions+=2;NFSU2_TR(0x5fc039);
__builtin_memmove((R+4),(R+24),4);
}
B5fc03b:{NFSU2_TR(0x5fc03b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc040ull));
TAIL_STATIC(0x5f6cd0u,5f6);
}
B5fc040:L5fc040:{c.instructions+=6;NFSU2_TR(0x5fc040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc041:{NFSU2_TR(0x5fc041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc042:{NFSU2_TR(0x5fc042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc043:{NFSU2_TR(0x5fc043);
__builtin_memmove((R+16),(R+20),4);
}
B5fc045:{NFSU2_TR(0x5fc045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc046:{NFSU2_TR(0x5fc046);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc050:L5fc050:{c.instructions+=4;NFSU2_TR(0x5fc050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc053:{NFSU2_TR(0x5fc053);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5fc055:{NFSU2_TR(0x5fc055);
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fc057:{NFSU2_TR(0x5fc057);
if(r1(R+518)){{goto L5fc0c6;}}
}
B5fc059:L5fc059:{c.instructions+=2;NFSU2_TR(0x5fc059);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fc05a:{NFSU2_TR(0x5fc05a);
if(r1(R+518)){{goto L5fc074;}}
}
B5fc05c:L5fc05c:{c.instructions+=2;NFSU2_TR(0x5fc05c);
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
B5fc05d:{NFSU2_TR(0x5fc05d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc0d5;}}
}
B5fc05f:L5fc05f:{c.instructions+=3;NFSU2_TR(0x5fc05f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc062:{NFSU2_TR(0x5fc062);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5fc065:{NFSU2_TR(0x5fc065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc0d5;}}
}
B5fc067:L5fc067:{c.instructions+=2;NFSU2_TR(0x5fc067);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
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
B5fc06e:{NFSU2_TR(0x5fc06e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc0d5;}}
}
B5fc070:L5fc070:{c.instructions+=2;NFSU2_TR(0x5fc070);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc073:{NFSU2_TR(0x5fc073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc074:L5fc074:{c.instructions+=3;NFSU2_TR(0x5fc074);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc077:{NFSU2_TR(0x5fc077);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5fc07a:{NFSU2_TR(0x5fc07a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc0bf;}}
}
B5fc07c:L5fc07c:{c.instructions+=2;NFSU2_TR(0x5fc07c);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
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
B5fc083:{NFSU2_TR(0x5fc083);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc0bf;}}
}
B5fc085:L5fc085:{c.instructions+=7;NFSU2_TR(0x5fc085);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc08b:{NFSU2_TR(0x5fc08b);
{u32 ea_=u32(r4(R+4)+u32(1356u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc091:{NFSU2_TR(0x5fc091);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fc097:{NFSU2_TR(0x5fc097);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc099:{NFSU2_TR(0x5fc099);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fc09f:{NFSU2_TR(0x5fc09f);
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
B5fc0a2:{NFSU2_TR(0x5fc0a2);
if(r1(R+514)){{goto L5fc0ab;}}
}
B5fc0a4:L5fc0a4:{c.instructions+=2;NFSU2_TR(0x5fc0a4);
{u32 ea_=u32(r4(R+4)+u32(1356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc0aa:{NFSU2_TR(0x5fc0aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc0ab:L5fc0ab:{c.instructions+=5;NFSU2_TR(0x5fc0ab);
{u32 ea_=u32(r4(R+4)+u32(1356u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fc0b1:{NFSU2_TR(0x5fc0b1);
{u32 ea_=u32(u32(8017500u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc0b7:{NFSU2_TR(0x5fc0b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc0b9:{NFSU2_TR(0x5fc0b9);
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
B5fc0bc:{NFSU2_TR(0x5fc0bc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc070u);}goto L5fc070;}}
}
B5fc0be:L5fc0be:{c.instructions+=1;NFSU2_TR(0x5fc0be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc0bf:L5fc0bf:{c.instructions+=2;NFSU2_TR(0x5fc0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc0c5:{NFSU2_TR(0x5fc0c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc0c6:L5fc0c6:{c.instructions+=3;NFSU2_TR(0x5fc0c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc0c9:{NFSU2_TR(0x5fc0c9);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5fc0cc:{NFSU2_TR(0x5fc0cc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fc0d5;}}
}
B5fc0ce:L5fc0ce:{c.instructions+=1;NFSU2_TR(0x5fc0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc0d5:L5fc0d5:{c.instructions+=1;NFSU2_TR(0x5fc0d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc0e0:L5fc0e0:{c.instructions+=3;NFSU2_TR(0x5fc0e0);
__builtin_memmove((R+0),gp(0x8a1cd0),4);
}
B5fc0e5:{NFSU2_TR(0x5fc0e5);
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
B5fc0e7:{NFSU2_TR(0x5fc0e7);
if(r1(R+518)){{goto L5fc124;}}
}
B5fc0e9:L5fc0e9:{c.instructions+=3;NFSU2_TR(0x5fc0e9);
__builtin_memmove((R+0),gp(0x865054),4);
}
B5fc0ee:{NFSU2_TR(0x5fc0ee);
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
B5fc0f0:{NFSU2_TR(0x5fc0f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc124;}}
}
B5fc0f2:L5fc0f2:{c.instructions+=6;NFSU2_TR(0x5fc0f2);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5fc0f7:{NFSU2_TR(0x5fc0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc0f8:{NFSU2_TR(0x5fc0f8);
s4(0x8a1cd0,u32(0x0ull));
}
B5fc102:{NFSU2_TR(0x5fc102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fc104:{NFSU2_TR(0x5fc104);
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
B5fc106:{NFSU2_TR(0x5fc106);
if(r1(R+518)){{goto L5fc123;}}
}
B5fc108:L5fc108:{c.instructions+=1;NFSU2_TR(0x5fc108);
{goto L5fc110;}
}
B5fc110:L5fc110:{c.instructions+=3;NFSU2_TR(0x5fc110);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc112:{NFSU2_TR(0x5fc112);
__builtin_memmove((R+4),(R+24),4);
}
B5fc114:{NFSU2_TR(0x5fc114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc119ull));
TAIL_STATIC(0x5f6c20u,5f6);
}
B5fc119:L5fc119:{c.instructions+=3;NFSU2_TR(0x5fc119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fc11b:{NFSU2_TR(0x5fc11b);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
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
B5fc121:{NFSU2_TR(0x5fc121);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc110u);}goto L5fc110;}}
}
B5fc123:L5fc123:{c.instructions+=1;NFSU2_TR(0x5fc123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc124:L5fc124:{c.instructions+=1;NFSU2_TR(0x5fc124);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc130:L5fc130:{c.instructions+=19;NFSU2_TR(0x5fc130);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc131:{NFSU2_TR(0x5fc131);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc132:{NFSU2_TR(0x5fc132);
__builtin_memmove((R+24),(R+4),4);
}
B5fc134:{NFSU2_TR(0x5fc134);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc135:{NFSU2_TR(0x5fc135);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fc139:{NFSU2_TR(0x5fc139);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5fc13b:{NFSU2_TR(0x5fc13b);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5fc13d:{NFSU2_TR(0x5fc13d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fc140:{NFSU2_TR(0x5fc140);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc143:{NFSU2_TR(0x5fc143);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5fc146:{NFSU2_TR(0x5fc146);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc149:{NFSU2_TR(0x5fc149);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fc14c:{NFSU2_TR(0x5fc14c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc14f:{NFSU2_TR(0x5fc14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc152:{NFSU2_TR(0x5fc152);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fc155:{NFSU2_TR(0x5fc155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc158:{NFSU2_TR(0x5fc158);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc159:{NFSU2_TR(0x5fc159);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc15c:{NFSU2_TR(0x5fc15c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc161ull));
TAIL_STATIC(0x413440u,413);
}
B5fc161:L5fc161:{c.instructions+=15;NFSU2_TR(0x5fc161);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fc167:{NFSU2_TR(0x5fc167);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc16d:{NFSU2_TR(0x5fc16d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x901ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fc173:{NFSU2_TR(0x5fc173);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x901ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc179:{NFSU2_TR(0x5fc179);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x902ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5fc17f:{NFSU2_TR(0x5fc17f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x902ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc185:{NFSU2_TR(0x5fc185);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc18b:{NFSU2_TR(0x5fc18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc191:{NFSU2_TR(0x5fc191);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc197:{NFSU2_TR(0x5fc197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc19d:{NFSU2_TR(0x5fc19d);
__builtin_memmove((R+4),(R+28),4);
}
B5fc19f:{NFSU2_TR(0x5fc19f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fc1a5:{NFSU2_TR(0x5fc1a5);
w1(R+512,u8((r4(R+4))<(r4(R+24))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B5fc1a7:{NFSU2_TR(0x5fc1a7);
w4(R+20,u32(0x10ull));
}
B5fc1ac:{NFSU2_TR(0x5fc1ac);
__builtin_memmove((R+16),(R+16),4);
}
B5fc1b0:L5fc1b0:{c.instructions+=5;NFSU2_TR(0x5fc1b0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B5fc1b3:{NFSU2_TR(0x5fc1b3);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5fc1b5:{NFSU2_TR(0x5fc1b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fc1b6:{NFSU2_TR(0x5fc1b6);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fc1b7:{NFSU2_TR(0x5fc1b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc1b0u);}goto L5fc1b0;}}
}
B5fc1b9:L5fc1b9:{c.instructions+=16;NFSU2_TR(0x5fc1b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fc1bf:{NFSU2_TR(0x5fc1bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc1c5:{NFSU2_TR(0x5fc1c5);
{u32 ea_=u32(r4(R+28)+u32(2340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc1cb:{NFSU2_TR(0x5fc1cb);
{u32 ea_=u32(r4(R+28)+u32(2344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc1d1:{NFSU2_TR(0x5fc1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc1d7:{NFSU2_TR(0x5fc1d7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fc1d9:{NFSU2_TR(0x5fc1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc1df:{NFSU2_TR(0x5fc1df);
{u32 ea_=u32(r4(R+24)+u32(2340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc1e5:{NFSU2_TR(0x5fc1e5);
__builtin_memmove((R+0),(R+24),4);
}
B5fc1e7:{NFSU2_TR(0x5fc1e7);
{u32 ea_=u32(r4(R+24)+u32(2344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc1ed:{NFSU2_TR(0x5fc1ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5fc1f4:{NFSU2_TR(0x5fc1f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc1f5:{NFSU2_TR(0x5fc1f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5fc1fc:{NFSU2_TR(0x5fc1fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc1fd:{NFSU2_TR(0x5fc1fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc1fe:{NFSU2_TR(0x5fc1fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc210:L5fc210:{c.instructions+=9;NFSU2_TR(0x5fc210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc211:{NFSU2_TR(0x5fc211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc212:{NFSU2_TR(0x5fc212);
__builtin_memmove((R+24),(R+4),4);
}
B5fc214:{NFSU2_TR(0x5fc214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc217:{NFSU2_TR(0x5fc217);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc218:{NFSU2_TR(0x5fc218);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5fc21a:{NFSU2_TR(0x5fc21a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fc21c:{NFSU2_TR(0x5fc21c);
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
B5fc21e:{NFSU2_TR(0x5fc21e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fc283;}}
}
B5fc220:L5fc220:{c.instructions+=2;NFSU2_TR(0x5fc220);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc221:{NFSU2_TR(0x5fc221);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5fc223:L5fc223:{c.instructions+=5;NFSU2_TR(0x5fc223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc226:{NFSU2_TR(0x5fc226);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B5fc22b:{NFSU2_TR(0x5fc22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5fc22e:{NFSU2_TR(0x5fc22e);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fc232:{NFSU2_TR(0x5fc232);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc25f;}}
}
B5fc234:L5fc234:{c.instructions+=3;NFSU2_TR(0x5fc234);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fc23a:{NFSU2_TR(0x5fc23a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc23c:{NFSU2_TR(0x5fc23c);
if(r1(R+518)){{goto L5fc258;}}
}
B5fc23e:L5fc23e:{c.instructions+=3;NFSU2_TR(0x5fc23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc241:{NFSU2_TR(0x5fc241);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc244:{NFSU2_TR(0x5fc244);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc250;}}
}
B5fc246:L5fc246:{c.instructions+=4;NFSU2_TR(0x5fc246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc249:{NFSU2_TR(0x5fc249);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc24c:{NFSU2_TR(0x5fc24c);
w1(R+12,u8(0x1ull));
}
B5fc24e:{NFSU2_TR(0x5fc24e);
{goto L5fc263;}
}
B5fc250:L5fc250:{c.instructions+=2;NFSU2_TR(0x5fc250);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc253:{NFSU2_TR(0x5fc253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc258;}}
}
B5fc255:L5fc255:{c.instructions+=1;NFSU2_TR(0x5fc255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc258:L5fc258:{c.instructions+=3;NFSU2_TR(0x5fc258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc25b:{NFSU2_TR(0x5fc25b);
w1(R+12,u8(0x1ull));
}
B5fc25d:{NFSU2_TR(0x5fc25d);
{goto L5fc263;}
}
B5fc25f:L5fc25f:{c.instructions+=2;NFSU2_TR(0x5fc25f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc261:{NFSU2_TR(0x5fc261);
if(r1(R+518)){{goto L5fc274;}}
}
B5fc263:L5fc263:{c.instructions+=2;NFSU2_TR(0x5fc263);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5fc266:{NFSU2_TR(0x5fc266);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5fc274;}}
}
B5fc268:L5fc268:{c.instructions+=3;NFSU2_TR(0x5fc268);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fc26e:{NFSU2_TR(0x5fc26e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc26f:{NFSU2_TR(0x5fc26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc274ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc130u);}goto L5fc130;}
}
B5fc274:L5fc274:{c.instructions+=5;NFSU2_TR(0x5fc274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc277:{NFSU2_TR(0x5fc277);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5fc278:{NFSU2_TR(0x5fc278);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x940ull))));
}
B5fc27e:{NFSU2_TR(0x5fc27e);
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
B5fc280:{NFSU2_TR(0x5fc280);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc223u);}goto L5fc223;}}
}
B5fc282:L5fc282:{c.instructions+=1;NFSU2_TR(0x5fc282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc283:L5fc283:{c.instructions+=4;NFSU2_TR(0x5fc283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc284:{NFSU2_TR(0x5fc284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc285:{NFSU2_TR(0x5fc285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc286:{NFSU2_TR(0x5fc286);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc290:L5fc290:{c.instructions+=1;NFSU2_TR(0x5fc290);
TAIL_STATIC(0x5f7950u,5f7);
}
B5fc2a0:L5fc2a0:{c.instructions+=26;NFSU2_TR(0x5fc2a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc2a2:{NFSU2_TR(0x5fc2a2);
u8 U[4];
w4(U+0,u32(0x779ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc2a7:{NFSU2_TR(0x5fc2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc2ad:{NFSU2_TR(0x5fc2ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc2ae:{NFSU2_TR(0x5fc2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc2b5:{NFSU2_TR(0x5fc2b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc2b6:{NFSU2_TR(0x5fc2b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc2ba:{NFSU2_TR(0x5fc2ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc2bb:{NFSU2_TR(0x5fc2bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc2bc:{NFSU2_TR(0x5fc2bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc2bd:{NFSU2_TR(0x5fc2bd);
__builtin_memmove((R+24),(R+4),4);
}
B5fc2bf:{NFSU2_TR(0x5fc2bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5fc2c1:{NFSU2_TR(0x5fc2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc2c4:{NFSU2_TR(0x5fc2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fc2c6:{NFSU2_TR(0x5fc2c6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fc2c8:{NFSU2_TR(0x5fc2c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc2cb:{NFSU2_TR(0x5fc2cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc2ce:{NFSU2_TR(0x5fc2ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5fc2d2:{NFSU2_TR(0x5fc2d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc2d5:{NFSU2_TR(0x5fc2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc2d8:{NFSU2_TR(0x5fc2d8);
{u32 ea_=u32(r4(R+0)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc2de:{NFSU2_TR(0x5fc2de);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fc2e4:{NFSU2_TR(0x5fc2e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fc2e7:{NFSU2_TR(0x5fc2e7);
w4(R+4,u32(0x5ull));
}
B5fc2ec:{NFSU2_TR(0x5fc2ec);
w4(R+8,u32(0x7fffffffull));
}
B5fc2f1:{NFSU2_TR(0x5fc2f1);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc2f4:L5fc2f4:{c.instructions+=8;NFSU2_TR(0x5fc2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc2f7:{NFSU2_TR(0x5fc2f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5fc2f9:{NFSU2_TR(0x5fc2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc2fc:{NFSU2_TR(0x5fc2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc2ff:{NFSU2_TR(0x5fc2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc302:{NFSU2_TR(0x5fc302);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5fc305:{NFSU2_TR(0x5fc305);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5fc306:{NFSU2_TR(0x5fc306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc2f4u);}goto L5fc2f4;}}
}
B5fc308:L5fc308:{c.instructions+=2;NFSU2_TR(0x5fc308);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fc30e:{NFSU2_TR(0x5fc30e);
w4(R+4,u32(0x15ull));
}
B5fc313:L5fc313:{c.instructions+=5;NFSU2_TR(0x5fc313);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc319:{NFSU2_TR(0x5fc319);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5fc31b:{NFSU2_TR(0x5fc31b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5fc31e:{NFSU2_TR(0x5fc31e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5fc31f:{NFSU2_TR(0x5fc31f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc313u);}goto L5fc313;}}
}
B5fc321:L5fc321:{c.instructions+=6;NFSU2_TR(0x5fc321);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc327:{NFSU2_TR(0x5fc327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc32d:{NFSU2_TR(0x5fc32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc333:{NFSU2_TR(0x5fc333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc339:{NFSU2_TR(0x5fc339);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc33f:{NFSU2_TR(0x5fc33f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc344ull));
TAIL_STATIC(0x5ede40u,5ed);
}
B5fc344:L5fc344:{c.instructions+=9;NFSU2_TR(0x5fc344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fc346:{NFSU2_TR(0x5fc346);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B5fc349:{NFSU2_TR(0x5fc349);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fc34d:{NFSU2_TR(0x5fc34d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5fc351:{NFSU2_TR(0x5fc351);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5fc355:{NFSU2_TR(0x5fc355);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc358:{NFSU2_TR(0x5fc358);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc35b:{NFSU2_TR(0x5fc35b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fc35f:{NFSU2_TR(0x5fc35f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc369;}}
}
B5fc361:L5fc361:{c.instructions+=2;NFSU2_TR(0x5fc361);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5fc367:{NFSU2_TR(0x5fc367);
if(r1(R+518)){{goto L5fc396;}}
}
B5fc369:L5fc369:{c.instructions+=2;NFSU2_TR(0x5fc369);
u8 U[8];
__builtin_memmove((U+0),gp(0x802228),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc36f:{NFSU2_TR(0x5fc36f);
if(r1(R+518)){{goto L5fc465;}}
}
B5fc375:L5fc375:{c.instructions+=2;NFSU2_TR(0x5fc375);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fc37b:{NFSU2_TR(0x5fc37b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc389;}}
}
B5fc37d:L5fc37d:{c.instructions+=2;NFSU2_TR(0x5fc37d);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc383:{NFSU2_TR(0x5fc383);
if(r1(R+518)){{goto L5fc465;}}
}
B5fc389:L5fc389:{c.instructions+=3;NFSU2_TR(0x5fc389);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc38c:{NFSU2_TR(0x5fc38c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fc390:{NFSU2_TR(0x5fc390);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc465;}}
}
B5fc396:L5fc396:{c.instructions+=2;NFSU2_TR(0x5fc396);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fc39c:{NFSU2_TR(0x5fc39c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc3cc;}}
}
B5fc39e:L5fc39e:{c.instructions+=2;NFSU2_TR(0x5fc39e);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc3a3:{NFSU2_TR(0x5fc3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc3a8ull));
TAIL_STATIC(0x575620u,575);
}
B5fc3a8:L5fc3a8:{c.instructions+=5;NFSU2_TR(0x5fc3a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fc3ab:{NFSU2_TR(0x5fc3ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc3af:{NFSU2_TR(0x5fc3af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc3b1:{NFSU2_TR(0x5fc3b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc3b5:{NFSU2_TR(0x5fc3b5);
if(r1(R+518)){{goto L5fc3c0;}}
}
B5fc3b7:L5fc3b7:{c.instructions+=2;NFSU2_TR(0x5fc3b7);
__builtin_memmove((R+4),(R+0),4);
}
B5fc3b9:{NFSU2_TR(0x5fc3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc3beull));
TAIL_STATIC(0x56ebe0u,56e);
}
B5fc3be:L5fc3be:{c.instructions+=1;NFSU2_TR(0x5fc3be);
{goto L5fc3c2;}
}
B5fc3c0:L5fc3c0:{c.instructions+=1;NFSU2_TR(0x5fc3c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fc3c2:L5fc3c2:{c.instructions+=2;NFSU2_TR(0x5fc3c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc3c6:{NFSU2_TR(0x5fc3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc3cc:L5fc3cc:{c.instructions+=2;NFSU2_TR(0x5fc3cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fc3d2:{NFSU2_TR(0x5fc3d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc404;}}
}
B5fc3d4:L5fc3d4:{c.instructions+=2;NFSU2_TR(0x5fc3d4);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc3d6:{NFSU2_TR(0x5fc3d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc3dbull));
TAIL_STATIC(0x575620u,575);
}
B5fc3db:L5fc3db:{c.instructions+=5;NFSU2_TR(0x5fc3db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fc3de:{NFSU2_TR(0x5fc3de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc3e2:{NFSU2_TR(0x5fc3e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc3e4:{NFSU2_TR(0x5fc3e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc3ec:{NFSU2_TR(0x5fc3ec);
if(r1(R+518)){{goto L5fc3f8;}}
}
B5fc3ee:L5fc3ee:{c.instructions+=3;NFSU2_TR(0x5fc3ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc3ef:{NFSU2_TR(0x5fc3ef);
__builtin_memmove((R+4),(R+0),4);
}
B5fc3f1:{NFSU2_TR(0x5fc3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc3f6ull));
TAIL_STATIC(0x56cdf0u,56c);
}
B5fc3f6:L5fc3f6:{c.instructions+=1;NFSU2_TR(0x5fc3f6);
{goto L5fc3fa;}
}
B5fc3f8:L5fc3f8:{c.instructions+=1;NFSU2_TR(0x5fc3f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fc3fa:L5fc3fa:{c.instructions+=2;NFSU2_TR(0x5fc3fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc3fe:{NFSU2_TR(0x5fc3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc404:L5fc404:{c.instructions+=2;NFSU2_TR(0x5fc404);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fc40a:{NFSU2_TR(0x5fc40a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc453;}}
}
B5fc40c:L5fc40c:{c.instructions+=2;NFSU2_TR(0x5fc40c);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fc412:{NFSU2_TR(0x5fc412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc41c;}}
}
B5fc414:L5fc414:{c.instructions+=2;NFSU2_TR(0x5fc414);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc41a:{NFSU2_TR(0x5fc41a);
if(r1(R+518)){{goto L5fc453;}}
}
B5fc41c:L5fc41c:{c.instructions+=2;NFSU2_TR(0x5fc41c);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc41e:{NFSU2_TR(0x5fc41e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc423ull));
TAIL_STATIC(0x575620u,575);
}
B5fc423:L5fc423:{c.instructions+=5;NFSU2_TR(0x5fc423);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fc426:{NFSU2_TR(0x5fc426);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc42a:{NFSU2_TR(0x5fc42a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc42c:{NFSU2_TR(0x5fc42c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc434:{NFSU2_TR(0x5fc434);
if(r1(R+518)){{goto L5fc43f;}}
}
B5fc436:L5fc436:{c.instructions+=2;NFSU2_TR(0x5fc436);
__builtin_memmove((R+4),(R+0),4);
}
B5fc438:{NFSU2_TR(0x5fc438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc43dull));
TAIL_STATIC(0x56c8f0u,56c);
}
B5fc43d:L5fc43d:{c.instructions+=1;NFSU2_TR(0x5fc43d);
{goto L5fc441;}
}
B5fc43f:L5fc43f:{c.instructions+=1;NFSU2_TR(0x5fc43f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fc441:L5fc441:{c.instructions+=5;NFSU2_TR(0x5fc441);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc442:{NFSU2_TR(0x5fc442);
__builtin_memmove((R+4),(R+0),4);
}
B5fc444:{NFSU2_TR(0x5fc444);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc448:{NFSU2_TR(0x5fc448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc44e:{NFSU2_TR(0x5fc44e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc453ull));
TAIL_STATIC(0x56d7d0u,56d);
}
B5fc453:L5fc453:{c.instructions+=3;NFSU2_TR(0x5fc453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc459:{NFSU2_TR(0x5fc459);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc45a:{NFSU2_TR(0x5fc45a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc45full));
TAIL_STATIC(0x56c7d0u,56c);
}
B5fc45f:L5fc45f:{c.instructions+=1;NFSU2_TR(0x5fc45f);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc465:L5fc465:{c.instructions+=3;NFSU2_TR(0x5fc465);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5fc46a:{NFSU2_TR(0x5fc46a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc46d:{NFSU2_TR(0x5fc46d);
if(r1(R+518)){{goto L5fc47d;}}
}
B5fc46f:L5fc46f:{c.instructions+=2;NFSU2_TR(0x5fc46f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc472:{NFSU2_TR(0x5fc472);
if(r1(R+518)){{goto L5fc47d;}}
}
B5fc474:L5fc474:{c.instructions+=2;NFSU2_TR(0x5fc474);
__builtin_memmove((R+4),(R+24),4);
}
B5fc476:{NFSU2_TR(0x5fc476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc47bull));
TAIL_STATIC(0x5f7c30u,5f7);
}
B5fc47b:L5fc47b:{c.instructions+=1;NFSU2_TR(0x5fc47b);
{goto L5fc48f;}
}
B5fc47d:L5fc47d:{c.instructions+=6;NFSU2_TR(0x5fc47d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc480:{NFSU2_TR(0x5fc480);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc483:{NFSU2_TR(0x5fc483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc486:{NFSU2_TR(0x5fc486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc489:{NFSU2_TR(0x5fc489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc48c:{NFSU2_TR(0x5fc48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc48f:L5fc48f:{c.instructions+=8;NFSU2_TR(0x5fc48f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc495:{NFSU2_TR(0x5fc495);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc49b:{NFSU2_TR(0x5fc49b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc4a1:{NFSU2_TR(0x5fc4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc4a4:{NFSU2_TR(0x5fc4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc4a7:{NFSU2_TR(0x5fc4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc4ad:{NFSU2_TR(0x5fc4ad);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc4b4:{NFSU2_TR(0x5fc4b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc4f4;}}
}
B5fc4b6:L5fc4b6:{c.instructions+=2;NFSU2_TR(0x5fc4b6);
u8 U[4];
w4(U+0,u32(0x380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc4bb:{NFSU2_TR(0x5fc4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc4c0ull));
TAIL_STATIC(0x575620u,575);
}
B5fc4c0:L5fc4c0:{c.instructions+=5;NFSU2_TR(0x5fc4c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fc4c3:{NFSU2_TR(0x5fc4c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc4c7:{NFSU2_TR(0x5fc4c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc4c9:{NFSU2_TR(0x5fc4c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc4d1:{NFSU2_TR(0x5fc4d1);
if(r1(R+518)){{goto L5fc4dc;}}
}
B5fc4d3:L5fc4d3:{c.instructions+=2;NFSU2_TR(0x5fc4d3);
__builtin_memmove((R+4),(R+0),4);
}
B5fc4d5:{NFSU2_TR(0x5fc4d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc4daull));
TAIL_STATIC(0x56e610u,56e);
}
B5fc4da:L5fc4da:{c.instructions+=1;NFSU2_TR(0x5fc4da);
{goto L5fc4de;}
}
B5fc4dc:L5fc4dc:{c.instructions+=1;NFSU2_TR(0x5fc4dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fc4de:L5fc4de:{c.instructions+=6;NFSU2_TR(0x5fc4de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc4e2:{NFSU2_TR(0x5fc4e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc4e3:{NFSU2_TR(0x5fc4e3);
__builtin_memmove((R+4),(R+0),4);
}
B5fc4e5:{NFSU2_TR(0x5fc4e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc4e9:{NFSU2_TR(0x5fc4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc4ef:{NFSU2_TR(0x5fc4ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc4f4ull));
TAIL_STATIC(0x56d1a0u,56d);
}
B5fc4f4:L5fc4f4:{c.instructions+=7;NFSU2_TR(0x5fc4f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc4f8:{NFSU2_TR(0x5fc4f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc4f9:{NFSU2_TR(0x5fc4f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc4fa:{NFSU2_TR(0x5fc4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc4fb:{NFSU2_TR(0x5fc4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc502:{NFSU2_TR(0x5fc502);
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
B5fc505:{NFSU2_TR(0x5fc505);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc510:L5fc510:{c.instructions+=11;NFSU2_TR(0x5fc510);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc511:{NFSU2_TR(0x5fc511);
__builtin_memmove((R+20),(R+16),4);
}
B5fc513:{NFSU2_TR(0x5fc513);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5fc516:{NFSU2_TR(0x5fc516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5fc519:{NFSU2_TR(0x5fc519);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc51a:{NFSU2_TR(0x5fc51a);
__builtin_memmove((R+12),(R+4),4);
}
B5fc51c:{NFSU2_TR(0x5fc51c);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5fc521:{NFSU2_TR(0x5fc521);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc522:{NFSU2_TR(0x5fc522);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc523:{NFSU2_TR(0x5fc523);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc527:{NFSU2_TR(0x5fc527);
if(r1(R+518)){{goto L5fc536;}}
}
B5fc529:L5fc529:{c.instructions+=3;NFSU2_TR(0x5fc529);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5fc52e:{NFSU2_TR(0x5fc52e);
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
B5fc530:{NFSU2_TR(0x5fc530);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc727;}}
}
B5fc536:L5fc536:{c.instructions+=3;NFSU2_TR(0x5fc536);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B5fc53b:{NFSU2_TR(0x5fc53b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc53d:{NFSU2_TR(0x5fc53d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc551;}}
}
B5fc53f:L5fc53f:{c.instructions+=3;NFSU2_TR(0x5fc53f);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5fc544:{NFSU2_TR(0x5fc544);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc546:{NFSU2_TR(0x5fc546);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5fc551;}}
}
B5fc548:L5fc548:{c.instructions+=3;NFSU2_TR(0x5fc548);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5fc54d:{NFSU2_TR(0x5fc54d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc54f:{NFSU2_TR(0x5fc54f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fc5af;}}
}
B5fc551:L5fc551:{c.instructions+=7;NFSU2_TR(0x5fc551);
w4(R+0,u32(s32(s8(m1(0x89d020)))));
}
B5fc558:{NFSU2_TR(0x5fc558);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5fc55f:{NFSU2_TR(0x5fc55f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5fc565:{NFSU2_TR(0x5fc565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fc567:{NFSU2_TR(0x5fc567);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fc569:{NFSU2_TR(0x5fc569);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc56b:{NFSU2_TR(0x5fc56b);
if(r1(R+518)){{goto L5fc581;}}
}
B5fc56d:L5fc56d:{c.instructions+=3;NFSU2_TR(0x5fc56d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5fc573:{NFSU2_TR(0x5fc573);
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
B5fc575:{NFSU2_TR(0x5fc575);
if(r1(R+518)){{goto L5fc581;}}
}
B5fc577:L5fc577:{c.instructions+=3;NFSU2_TR(0x5fc577);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5fc57b:{NFSU2_TR(0x5fc57b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc57c:{NFSU2_TR(0x5fc57c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc581ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5fc581:L5fc581:{c.instructions+=2;NFSU2_TR(0x5fc581);
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
B5fc583:{NFSU2_TR(0x5fc583);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc595;}}
}
B5fc585:L5fc585:{c.instructions+=8;NFSU2_TR(0x5fc585);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc58b:{NFSU2_TR(0x5fc58b);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc58e:{NFSU2_TR(0x5fc58e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc58f:{NFSU2_TR(0x5fc58f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc590:{NFSU2_TR(0x5fc590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc591:{NFSU2_TR(0x5fc591);
__builtin_memmove((R+16),(R+20),4);
}
B5fc593:{NFSU2_TR(0x5fc593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc594:{NFSU2_TR(0x5fc594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc595:L5fc595:{c.instructions+=5;NFSU2_TR(0x5fc595);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5fc598:{NFSU2_TR(0x5fc598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc599:{NFSU2_TR(0x5fc599);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fc59c:{NFSU2_TR(0x5fc59c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc59d:{NFSU2_TR(0x5fc59d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc5a2ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5fc5a2:L5fc5a2:{c.instructions+=8;NFSU2_TR(0x5fc5a2);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc5a5:{NFSU2_TR(0x5fc5a5);
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
B5fc5a8:{NFSU2_TR(0x5fc5a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc5a9:{NFSU2_TR(0x5fc5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc5aa:{NFSU2_TR(0x5fc5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc5ab:{NFSU2_TR(0x5fc5ab);
__builtin_memmove((R+16),(R+20),4);
}
B5fc5ad:{NFSU2_TR(0x5fc5ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc5ae:{NFSU2_TR(0x5fc5ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc5af:L5fc5af:{c.instructions+=4;NFSU2_TR(0x5fc5af);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5fc5b5:{NFSU2_TR(0x5fc5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc5bb:{NFSU2_TR(0x5fc5bb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fc5bd:{NFSU2_TR(0x5fc5bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc5cd;}}
}
B5fc5bf:L5fc5bf:{c.instructions+=7;NFSU2_TR(0x5fc5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc5c6:{NFSU2_TR(0x5fc5c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc5c7:{NFSU2_TR(0x5fc5c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc5c8:{NFSU2_TR(0x5fc5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc5c9:{NFSU2_TR(0x5fc5c9);
__builtin_memmove((R+16),(R+20),4);
}
B5fc5cb:{NFSU2_TR(0x5fc5cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc5cc:{NFSU2_TR(0x5fc5cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc5cd:L5fc5cd:{c.instructions+=9;NFSU2_TR(0x5fc5cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fc5cf:{NFSU2_TR(0x5fc5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fc5d1:{NFSU2_TR(0x5fc5d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fc5d4:{NFSU2_TR(0x5fc5d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc5d7:{NFSU2_TR(0x5fc5d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc5d8:{NFSU2_TR(0x5fc5d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc5d9:{NFSU2_TR(0x5fc5d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc5dd:{NFSU2_TR(0x5fc5dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc5e1:{NFSU2_TR(0x5fc5e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc5e6ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5fc5e6:L5fc5e6:{c.instructions+=9;NFSU2_TR(0x5fc5e6);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc5e9:{NFSU2_TR(0x5fc5e9);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc5ef:{NFSU2_TR(0x5fc5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fc5f5:{NFSU2_TR(0x5fc5f5);
{u32 ea_=u32(u32(8017576u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc5fb:{NFSU2_TR(0x5fc5fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fc5fe:{NFSU2_TR(0x5fc5fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc602:{NFSU2_TR(0x5fc602);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc604:{NFSU2_TR(0x5fc604);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc607:{NFSU2_TR(0x5fc607);
if(r1(R+518)){{goto L5fc61e;}}
}
B5fc609:L5fc609:{c.instructions+=5;NFSU2_TR(0x5fc609);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc60d:{NFSU2_TR(0x5fc60d);
{u32 ea_=u32(u32(8017576u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc613:{NFSU2_TR(0x5fc613);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc615:{NFSU2_TR(0x5fc615);
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
B5fc618:{NFSU2_TR(0x5fc618);
if(r1(R+518)){{goto L5fc727;}}
}
B5fc61e:L5fc61e:{c.instructions+=4;NFSU2_TR(0x5fc61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc621:{NFSU2_TR(0x5fc621);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fc624:{NFSU2_TR(0x5fc624);
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
B5fc626:{NFSU2_TR(0x5fc626);
if(r1(R+518)){{goto L5fc727;}}
}
B5fc62c:L5fc62c:{c.instructions+=4;NFSU2_TR(0x5fc62c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc630:{NFSU2_TR(0x5fc630);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc631:{NFSU2_TR(0x5fc631);
__builtin_memmove((R+4),(R+12),4);
}
B5fc633:{NFSU2_TR(0x5fc633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc638ull));
TAIL_STATIC(0x401a00u,401);
}
B5fc638:L5fc638:{c.instructions+=5;NFSU2_TR(0x5fc638);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc63c:{NFSU2_TR(0x5fc63c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fc640:{NFSU2_TR(0x5fc640);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc641:{NFSU2_TR(0x5fc641);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc642:{NFSU2_TR(0x5fc642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc647ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5fc647:L5fc647:{c.instructions+=6;NFSU2_TR(0x5fc647);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5fc64b:{NFSU2_TR(0x5fc64b);
{u32 ea_=u32(u32(8017584u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc651:{NFSU2_TR(0x5fc651);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fc654:{NFSU2_TR(0x5fc654);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc656:{NFSU2_TR(0x5fc656);
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
B5fc659:{NFSU2_TR(0x5fc659);
if(r1(R+514)){{goto L5fc727;}}
}
B5fc65f:L5fc65f:{c.instructions+=3;NFSU2_TR(0x5fc65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fc662:{NFSU2_TR(0x5fc662);
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
B5fc664:{NFSU2_TR(0x5fc664);
if(r1(R+518)){{goto L5fc727;}}
}
B5fc66a:L5fc66a:{c.instructions+=5;NFSU2_TR(0x5fc66a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc66e:{NFSU2_TR(0x5fc66e);
{u32 ea_=u32(u32(8017576u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc674:{NFSU2_TR(0x5fc674);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc676:{NFSU2_TR(0x5fc676);
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
B5fc679:{NFSU2_TR(0x5fc679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc6e1;}}
}
B5fc67b:L5fc67b:{c.instructions+=10;NFSU2_TR(0x5fc67b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5fc67e:{NFSU2_TR(0x5fc67e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fc680:{NFSU2_TR(0x5fc680);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc682:{NFSU2_TR(0x5fc682);
__builtin_memmove((R+4),(R+518),1);
}
B5fc685:{NFSU2_TR(0x5fc685);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fc689:{NFSU2_TR(0x5fc689);
__builtin_memmove((R+28),(R+4),4);
}
B5fc68b:{NFSU2_TR(0x5fc68b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc68c:{NFSU2_TR(0x5fc68c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc68d:{NFSU2_TR(0x5fc68d);
__builtin_memmove((R+4),(R+12),4);
}
B5fc68f:{NFSU2_TR(0x5fc68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc694ull));
TAIL_STATIC(0x401b20u,401);
}
B5fc694:L5fc694:{c.instructions+=9;NFSU2_TR(0x5fc694);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc698:{NFSU2_TR(0x5fc698);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fc69b:{NFSU2_TR(0x5fc69b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc69f:{NFSU2_TR(0x5fc69f);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fc6a2:{NFSU2_TR(0x5fc6a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fc6a4:{NFSU2_TR(0x5fc6a4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc6aa:{NFSU2_TR(0x5fc6aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc6ac:{NFSU2_TR(0x5fc6ac);
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
B5fc6af:{NFSU2_TR(0x5fc6af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc727;}}
}
B5fc6b1:L5fc6b1:{c.instructions+=5;NFSU2_TR(0x5fc6b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc6b5:{NFSU2_TR(0x5fc6b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc6b6:{NFSU2_TR(0x5fc6b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc6b7:{NFSU2_TR(0x5fc6b7);
__builtin_memmove((R+4),(R+12),4);
}
B5fc6b9:{NFSU2_TR(0x5fc6b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc6beull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5fc6be:L5fc6be:{c.instructions+=6;NFSU2_TR(0x5fc6be);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc6c2:{NFSU2_TR(0x5fc6c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc6c6:{NFSU2_TR(0x5fc6c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc6c7:{NFSU2_TR(0x5fc6c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc6c8:{NFSU2_TR(0x5fc6c8);
__builtin_memmove((R+4),(R+12),4);
}
B5fc6ca:{NFSU2_TR(0x5fc6ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc6cfull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5fc6cf:L5fc6cf:{c.instructions+=9;NFSU2_TR(0x5fc6cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fc6d3:{NFSU2_TR(0x5fc6d3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fc6d7:{NFSU2_TR(0x5fc6d7);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc6da:{NFSU2_TR(0x5fc6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc6db:{NFSU2_TR(0x5fc6db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc6dc:{NFSU2_TR(0x5fc6dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc6dd:{NFSU2_TR(0x5fc6dd);
__builtin_memmove((R+16),(R+20),4);
}
B5fc6df:{NFSU2_TR(0x5fc6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc6e0:{NFSU2_TR(0x5fc6e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc6e1:L5fc6e1:{c.instructions+=6;NFSU2_TR(0x5fc6e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc6e5:{NFSU2_TR(0x5fc6e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc6e6:{NFSU2_TR(0x5fc6e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc6ea:{NFSU2_TR(0x5fc6ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc6eb:{NFSU2_TR(0x5fc6eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc6ef:{NFSU2_TR(0x5fc6ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc6f4ull));
TAIL_STATIC(0x401250u,401);
}
B5fc6f4:L5fc6f4:{c.instructions+=12;NFSU2_TR(0x5fc6f4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc6f8:{NFSU2_TR(0x5fc6f8);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fc6fb:{NFSU2_TR(0x5fc6fb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc6ff:{NFSU2_TR(0x5fc6ff);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fc702:{NFSU2_TR(0x5fc702);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fc704:{NFSU2_TR(0x5fc704);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc708:{NFSU2_TR(0x5fc708);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fc70b:{NFSU2_TR(0x5fc70b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fc70d:{NFSU2_TR(0x5fc70d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fc713:{NFSU2_TR(0x5fc713);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fc715:{NFSU2_TR(0x5fc715);
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
B5fc718:{NFSU2_TR(0x5fc718);
if(r1(R+514)){{goto L5fc727;}}
}
B5fc71a:L5fc71a:{c.instructions+=4;NFSU2_TR(0x5fc71a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc71e:{NFSU2_TR(0x5fc71e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fc722:{NFSU2_TR(0x5fc722);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5fc724:{NFSU2_TR(0x5fc724);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fc727:L5fc727:{c.instructions+=6;NFSU2_TR(0x5fc727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc728:{NFSU2_TR(0x5fc728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc729:{NFSU2_TR(0x5fc729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc72a:{NFSU2_TR(0x5fc72a);
__builtin_memmove((R+16),(R+20),4);
}
B5fc72c:{NFSU2_TR(0x5fc72c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc72d:{NFSU2_TR(0x5fc72d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc730:L5fc730:{c.instructions+=24;NFSU2_TR(0x5fc730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc732:{NFSU2_TR(0x5fc732);
u8 U[4];
w4(U+0,u32(0x779cd7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc737:{NFSU2_TR(0x5fc737);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc73d:{NFSU2_TR(0x5fc73d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc73e:{NFSU2_TR(0x5fc73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc745:{NFSU2_TR(0x5fc745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc746:{NFSU2_TR(0x5fc746);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc747:{NFSU2_TR(0x5fc747);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc748:{NFSU2_TR(0x5fc748);
__builtin_memmove((R+24),(R+4),4);
}
B5fc74a:{NFSU2_TR(0x5fc74a);
u8 U[4];
w4(U+0,u32(0x5fc290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc74f:{NFSU2_TR(0x5fc74f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fc751:{NFSU2_TR(0x5fc751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc754:{NFSU2_TR(0x5fc754);
u8 U[4];
w4(U+0,u32(0x5f7840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc759:{NFSU2_TR(0x5fc759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc75c:{NFSU2_TR(0x5fc75c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc75e:{NFSU2_TR(0x5fc75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc761:{NFSU2_TR(0x5fc761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc764:{NFSU2_TR(0x5fc764);
u8 U[4];
w4(U+0,u32(0x1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc769:{NFSU2_TR(0x5fc769);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fc76c:{NFSU2_TR(0x5fc76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc76f:{NFSU2_TR(0x5fc76f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc770:{NFSU2_TR(0x5fc770);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc774:{NFSU2_TR(0x5fc774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc777:{NFSU2_TR(0x5fc777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc77cull));
TAIL_STATIC(0x75c461u,75c);
}
B5fc77c:L5fc77c:{c.instructions+=3;NFSU2_TR(0x5fc77c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc782:{NFSU2_TR(0x5fc782);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc786:{NFSU2_TR(0x5fc786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc78bull));
TAIL_STATIC(0x41ac60u,41a);
}
B5fc78b:L5fc78b:{c.instructions+=8;NFSU2_TR(0x5fc78b);
__builtin_memmove(gp(0x890118),(R+24),4);
}
B5fc791:{NFSU2_TR(0x5fc791);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5fc793:{NFSU2_TR(0x5fc793);
__builtin_memmove((R+4),gp(0x89e7bc),4);
}
B5fc799:{NFSU2_TR(0x5fc799);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc79b:{NFSU2_TR(0x5fc79b);
w4(R+0,u32(0x1ull));
}
B5fc7a0:{NFSU2_TR(0x5fc7a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc7a4:{NFSU2_TR(0x5fc7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7aa:{NFSU2_TR(0x5fc7aa);
if(r1(R+518)){{goto L5fc7ca;}}
}
B5fc7ac:L5fc7ac:{c.instructions+=2;NFSU2_TR(0x5fc7ac);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc7b2:{NFSU2_TR(0x5fc7b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc7c4;}}
}
B5fc7b4:L5fc7b4:{c.instructions+=2;NFSU2_TR(0x5fc7b4);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fc7ba:{NFSU2_TR(0x5fc7ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc7c4;}}
}
B5fc7bc:L5fc7bc:{c.instructions+=2;NFSU2_TR(0x5fc7bc);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc7c2:{NFSU2_TR(0x5fc7c2);
if(r1(R+518)){{goto L5fc7ca;}}
}
B5fc7c4:L5fc7c4:{c.instructions+=1;NFSU2_TR(0x5fc7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7ca:L5fc7ca:{c.instructions+=20;NFSU2_TR(0x5fc7ca);
__builtin_memmove((R+8),gp(0x7a5688),4);
}
B5fc7d0:{NFSU2_TR(0x5fc7d0);
__builtin_memmove((R+4),(R+24),4);
}
B5fc7d2:{NFSU2_TR(0x5fc7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7d8:{NFSU2_TR(0x5fc7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7de:{NFSU2_TR(0x5fc7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7e1:{NFSU2_TR(0x5fc7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7e4:{NFSU2_TR(0x5fc7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7e7:{NFSU2_TR(0x5fc7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7ee:{NFSU2_TR(0x5fc7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7f1:{NFSU2_TR(0x5fc7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7f8:{NFSU2_TR(0x5fc7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7fb:{NFSU2_TR(0x5fc7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc7fe:{NFSU2_TR(0x5fc7fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc801:{NFSU2_TR(0x5fc801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc804:{NFSU2_TR(0x5fc804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc807:{NFSU2_TR(0x5fc807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc80d:{NFSU2_TR(0x5fc80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc813:{NFSU2_TR(0x5fc813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc819:{NFSU2_TR(0x5fc819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc81f:{NFSU2_TR(0x5fc81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc824ull));
TAIL_STATIC(0x5ee620u,5ee);
}
B5fc824:L5fc824:{c.instructions+=9;NFSU2_TR(0x5fc824);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc828:{NFSU2_TR(0x5fc828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc82e:{NFSU2_TR(0x5fc82e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc834:{NFSU2_TR(0x5fc834);
__builtin_memmove((R+0),(R+24),4);
}
B5fc836:{NFSU2_TR(0x5fc836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc837:{NFSU2_TR(0x5fc837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc838:{NFSU2_TR(0x5fc838);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc83f:{NFSU2_TR(0x5fc83f);
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
B5fc842:{NFSU2_TR(0x5fc842);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc850:L5fc850:{c.instructions+=15;NFSU2_TR(0x5fc850);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc852:{NFSU2_TR(0x5fc852);
u8 U[4];
w4(U+0,u32(0x779cd7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc857:{NFSU2_TR(0x5fc857);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc85d:{NFSU2_TR(0x5fc85d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc85e:{NFSU2_TR(0x5fc85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc865:{NFSU2_TR(0x5fc865);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc866:{NFSU2_TR(0x5fc866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc867:{NFSU2_TR(0x5fc867);
__builtin_memmove((R+24),(R+4),4);
}
B5fc869:{NFSU2_TR(0x5fc869);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc86a:{NFSU2_TR(0x5fc86a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc86e:{NFSU2_TR(0x5fc86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc871:{NFSU2_TR(0x5fc871);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fc873:{NFSU2_TR(0x5fc873);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc875:{NFSU2_TR(0x5fc875);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc87d:{NFSU2_TR(0x5fc87d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fc899;}}
}
B5fc87f:L5fc87f:{c.instructions+=2;NFSU2_TR(0x5fc87f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc880:{NFSU2_TR(0x5fc880);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc883:L5fc883:{c.instructions+=2;NFSU2_TR(0x5fc883);
__builtin_memmove((R+4),(R+20),4);
}
B5fc885:{NFSU2_TR(0x5fc885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc88aull));
TAIL_STATIC(0x5f7950u,5f7);
}
B5fc88a:L5fc88a:{c.instructions+=5;NFSU2_TR(0x5fc88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc88d:{NFSU2_TR(0x5fc88d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5fc88e:{NFSU2_TR(0x5fc88e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1f0ull))));
}
B5fc894:{NFSU2_TR(0x5fc894);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fc896:{NFSU2_TR(0x5fc896);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc883u);}goto L5fc883;}}
}
B5fc898:L5fc898:{c.instructions+=1;NFSU2_TR(0x5fc898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc899:L5fc899:{c.instructions+=3;NFSU2_TR(0x5fc899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc89f:{NFSU2_TR(0x5fc89f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc8a1:{NFSU2_TR(0x5fc8a1);
if(r1(R+518)){{goto L5fc8ac;}}
}
B5fc8a3:L5fc8a3:{c.instructions+=2;NFSU2_TR(0x5fc8a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc8a4:{NFSU2_TR(0x5fc8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc8a9ull));
TAIL_STATIC(0x575630u,575);
}
B5fc8a9:L5fc8a9:{c.instructions+=1;NFSU2_TR(0x5fc8a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fc8ac:L5fc8ac:{c.instructions+=4;NFSU2_TR(0x5fc8ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc8b2:{NFSU2_TR(0x5fc8b2);
s4(0x890118,u32(0x0ull));
}
B5fc8bc:{NFSU2_TR(0x5fc8bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fc8c1:{NFSU2_TR(0x5fc8c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc8c6ull));
TAIL_STATIC(0x40bdf0u,40b);
}
B5fc8c6:L5fc8c6:{c.instructions+=7;NFSU2_TR(0x5fc8c6);
u8 U[4];
w4(U+0,u32(0x5fc290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc8cb:{NFSU2_TR(0x5fc8cb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc8cd:{NFSU2_TR(0x5fc8cd);
u8 U[4];
w4(U+0,u32(0x1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc8d2:{NFSU2_TR(0x5fc8d2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B5fc8d5:{NFSU2_TR(0x5fc8d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc8d6:{NFSU2_TR(0x5fc8d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fc8de:{NFSU2_TR(0x5fc8de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc8e3ull));
TAIL_STATIC(0x75c401u,75c);
}
B5fc8e3:L5fc8e3:{c.instructions+=6;NFSU2_TR(0x5fc8e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc8e7:{NFSU2_TR(0x5fc8e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc8e8:{NFSU2_TR(0x5fc8e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc8e9:{NFSU2_TR(0x5fc8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc8f0:{NFSU2_TR(0x5fc8f0);
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
B5fc8f3:{NFSU2_TR(0x5fc8f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc900:L5fc900:{c.instructions+=6;NFSU2_TR(0x5fc900);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc901:{NFSU2_TR(0x5fc901);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fc905:{NFSU2_TR(0x5fc905);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc908:{NFSU2_TR(0x5fc908);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc909:{NFSU2_TR(0x5fc909);
__builtin_memmove((R+28),(R+4),4);
}
B5fc90b:{NFSU2_TR(0x5fc90b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc94a;}}
}
B5fc90d:L5fc90d:{c.instructions+=3;NFSU2_TR(0x5fc90d);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B5fc912:{NFSU2_TR(0x5fc912);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fc914:{NFSU2_TR(0x5fc914);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc928;}}
}
B5fc916:L5fc916:{c.instructions+=3;NFSU2_TR(0x5fc916);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5fc91b:{NFSU2_TR(0x5fc91b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc91d:{NFSU2_TR(0x5fc91d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5fc928;}}
}
B5fc91f:L5fc91f:{c.instructions+=3;NFSU2_TR(0x5fc91f);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5fc924:{NFSU2_TR(0x5fc924);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc926:{NFSU2_TR(0x5fc926);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fc94a;}}
}
B5fc928:L5fc928:{c.instructions+=3;NFSU2_TR(0x5fc928);
__builtin_memmove((R+0),gp(0x89cf48),4);
}
B5fc92d:{NFSU2_TR(0x5fc92d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc930:{NFSU2_TR(0x5fc930);
if(r1(R+518)){{goto L5fc94a;}}
}
B5fc932:L5fc932:{c.instructions+=2;NFSU2_TR(0x5fc932);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fc935:{NFSU2_TR(0x5fc935);
if(r1(R+518)){{goto L5fca86;}}
}
B5fc93b:L5fc93b:{c.instructions+=2;NFSU2_TR(0x5fc93b);
w4(R+4,u32(0x89cf48ull));
}
B5fc940:{NFSU2_TR(0x5fc940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc945ull));
TAIL_STATIC(0x5f94e0u,5f9);
}
B5fc945:L5fc945:{c.instructions+=3;NFSU2_TR(0x5fc945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc946:{NFSU2_TR(0x5fc946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc947:{NFSU2_TR(0x5fc947);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc94a:L5fc94a:{c.instructions+=10;NFSU2_TR(0x5fc94a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fc94c:{NFSU2_TR(0x5fc94c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5fc94e:{NFSU2_TR(0x5fc94e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc952:{NFSU2_TR(0x5fc952);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5fc957:{NFSU2_TR(0x5fc957);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc95a:{NFSU2_TR(0x5fc95a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc95b:{NFSU2_TR(0x5fc95b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc95c:{NFSU2_TR(0x5fc95c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5fc95e:{NFSU2_TR(0x5fc95e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc960:{NFSU2_TR(0x5fc960);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fc98c;}}
}
B5fc962:L5fc962:{c.instructions+=1;NFSU2_TR(0x5fc962);
w4(R+12,u32(0x1cull));
}
B5fc967:L5fc967:{c.instructions+=4;NFSU2_TR(0x5fc967);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5fc96a:{NFSU2_TR(0x5fc96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc96d:{NFSU2_TR(0x5fc96d);
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
B5fc96f:{NFSU2_TR(0x5fc96f);
if(r1(R+518)){{goto L5fc981;}}
}
B5fc971:L5fc971:{c.instructions+=5;NFSU2_TR(0x5fc971);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc975:{NFSU2_TR(0x5fc975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fc977:{NFSU2_TR(0x5fc977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc978:{NFSU2_TR(0x5fc978);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc979:{NFSU2_TR(0x5fc979);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc97cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fc97c:L5fc97c:{c.instructions+=1;NFSU2_TR(0x5fc97c);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5fc981:L5fc981:{c.instructions+=5;NFSU2_TR(0x5fc981);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fc984:{NFSU2_TR(0x5fc984);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5fc985:{NFSU2_TR(0x5fc985);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5fc988:{NFSU2_TR(0x5fc988);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fc98a:{NFSU2_TR(0x5fc98a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc967u);}goto L5fc967;}}
}
B5fc98c:L5fc98c:{c.instructions+=2;NFSU2_TR(0x5fc98c);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5fc98f:{NFSU2_TR(0x5fc98f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fc9a1;}}
}
B5fc991:L5fc991:{c.instructions+=7;NFSU2_TR(0x5fc991);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5fc997:{NFSU2_TR(0x5fc997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fc998:{NFSU2_TR(0x5fc998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fc999:{NFSU2_TR(0x5fc999);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc99c:{NFSU2_TR(0x5fc99c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fc99d:{NFSU2_TR(0x5fc99d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc99e:{NFSU2_TR(0x5fc99e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fc9a1:L5fc9a1:{c.instructions+=2;NFSU2_TR(0x5fc9a1);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fc9a4:{NFSU2_TR(0x5fc9a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fca84;}}
}
B5fc9aa:L5fc9aa:{c.instructions+=4;NFSU2_TR(0x5fc9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fc9ad:{NFSU2_TR(0x5fc9ad);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fc9af:{NFSU2_TR(0x5fc9af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fc9b1:{NFSU2_TR(0x5fc9b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fca11;}}
}
B5fc9b3:L5fc9b3:{c.instructions+=2;NFSU2_TR(0x5fc9b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbd0ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fc9b9:{NFSU2_TR(0x5fc9b9);
__builtin_memmove((R+16),(R+16),4);
}
B5fc9c0:L5fc9c0:{c.instructions+=6;NFSU2_TR(0x5fc9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fc9c3:{NFSU2_TR(0x5fc9c3);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5fc9c9:{NFSU2_TR(0x5fc9c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fc9cc:{NFSU2_TR(0x5fc9cc);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fc9d1:{NFSU2_TR(0x5fc9d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5fc9d3:{NFSU2_TR(0x5fc9d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fc9d8ull));
TAIL_STATIC(0x577400u,577);
}
B5fc9d8:L5fc9d8:{c.instructions+=4;NFSU2_TR(0x5fc9d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fc9da:{NFSU2_TR(0x5fc9da);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5fc9de:{NFSU2_TR(0x5fc9de);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fc9e4:{NFSU2_TR(0x5fc9e4);
if(r1(R+518)){{goto L5fc9ed;}}
}
B5fc9e6:L5fc9e6:{c.instructions+=2;NFSU2_TR(0x5fc9e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fc9e9:{NFSU2_TR(0x5fc9e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5fc9ed:L5fc9ed:{c.instructions+=11;NFSU2_TR(0x5fc9ed);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5fc9f2:{NFSU2_TR(0x5fc9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fc9f5:{NFSU2_TR(0x5fc9f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fc9f7:{NFSU2_TR(0x5fc9f7);
{u32 ea_=u32(r4(R+4)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fc9fd:{NFSU2_TR(0x5fc9fd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5fc9fe:{NFSU2_TR(0x5fc9fe);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fca04:{NFSU2_TR(0x5fca04);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5fca07:{NFSU2_TR(0x5fca07);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fca0a:{NFSU2_TR(0x5fca0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fca0d:{NFSU2_TR(0x5fca0d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fca0f:{NFSU2_TR(0x5fca0f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc9c0u);}goto L5fc9c0;}}
}
B5fca11:L5fca11:{c.instructions+=5;NFSU2_TR(0x5fca11);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5fca17:{NFSU2_TR(0x5fca17);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fca1a:{NFSU2_TR(0x5fca1a);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fca1f:{NFSU2_TR(0x5fca1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5fca21:{NFSU2_TR(0x5fca21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fca26ull));
TAIL_STATIC(0x577400u,577);
}
B5fca26:L5fca26:{c.instructions+=7;NFSU2_TR(0x5fca26);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5fca2b:{NFSU2_TR(0x5fca2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fca2e:{NFSU2_TR(0x5fca2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fca35:{NFSU2_TR(0x5fca35);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B5fca3a:{NFSU2_TR(0x5fca3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fca3c:{NFSU2_TR(0x5fca3c);
w4(R+12,u32(0x1ull));
}
B5fca41:{NFSU2_TR(0x5fca41);
if(r1(R+518)){{goto L5fca66;}}
}
B5fca43:L5fca43:{c.instructions+=3;NFSU2_TR(0x5fca43);
__builtin_memmove((R+0),gp(0x89e830),4);
}
B5fca48:{NFSU2_TR(0x5fca48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fca4a:{NFSU2_TR(0x5fca4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fca66;}}
}
B5fca4c:L5fca4c:{c.instructions+=4;NFSU2_TR(0x5fca4c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fca4e:{NFSU2_TR(0x5fca4e);
u8 U[4];
w4(U+0,u32(0x8650b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fca53:{NFSU2_TR(0x5fca53);
u8 U[4];
w4(U+0,u32(0x7a63c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fca58:{NFSU2_TR(0x5fca58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fca5dull));
TAIL_STATIC(0x57cb00u,57c);
}
B5fca5d:L5fca5d:{c.instructions+=2;NFSU2_TR(0x5fca5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5fca60:{NFSU2_TR(0x5fca60);
__builtin_memmove(gp(0x89e830),(R+12),4);
}
B5fca66:L5fca66:{c.instructions+=3;NFSU2_TR(0x5fca66);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5fca6b:{NFSU2_TR(0x5fca6b);
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
B5fca6d:{NFSU2_TR(0x5fca6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fca84;}}
}
B5fca6f:L5fca6f:{c.instructions+=2;NFSU2_TR(0x5fca6f);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B5fca75:{NFSU2_TR(0x5fca75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fca84;}}
}
B5fca77:L5fca77:{c.instructions+=2;NFSU2_TR(0x5fca77);
__builtin_memmove((R+4),(R+28),4);
}
B5fca79:{NFSU2_TR(0x5fca79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fca7eull));
TAIL_STATIC(0x5f8490u,5f8);
}
B5fca7e:L5fca7e:{c.instructions+=1;NFSU2_TR(0x5fca7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fca84:L5fca84:{c.instructions+=2;NFSU2_TR(0x5fca84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fca85:{NFSU2_TR(0x5fca85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fca86:L5fca86:{c.instructions+=3;NFSU2_TR(0x5fca86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fca87:{NFSU2_TR(0x5fca87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fca88:{NFSU2_TR(0x5fca88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fca90:L5fca90:{c.instructions+=5;NFSU2_TR(0x5fca90);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5fca95:{NFSU2_TR(0x5fca95);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fca98:{NFSU2_TR(0x5fca98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fca99:{NFSU2_TR(0x5fca99);
__builtin_memmove((R+12),(R+4),4);
}
B5fca9b:{NFSU2_TR(0x5fca9b);
if(r1(R+518)){{goto L5fcaf8;}}
}
B5fca9d:L5fca9d:{c.instructions+=2;NFSU2_TR(0x5fca9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcaa2:{NFSU2_TR(0x5fcaa2);
if(r1(R+518)){{goto L5fcaa9;}}
}
B5fcaa4:L5fcaa4:{c.instructions+=2;NFSU2_TR(0x5fcaa4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fcaa7:{NFSU2_TR(0x5fcaa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fcab2;}}
}
B5fcaa9:L5fcaa9:{c.instructions+=2;NFSU2_TR(0x5fcaa9);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fcab0:{NFSU2_TR(0x5fcab0);
if(r1(R+518)){{goto L5fcaf8;}}
}
B5fcab2:L5fcab2:{c.instructions+=5;NFSU2_TR(0x5fcab2);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5fcab7:{NFSU2_TR(0x5fcab7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcab8:{NFSU2_TR(0x5fcab8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5fcaba:{NFSU2_TR(0x5fcaba);
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
B5fcabc:{NFSU2_TR(0x5fcabc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fcaf0;}}
}
B5fcabe:L5fcabe:{c.instructions+=1;NFSU2_TR(0x5fcabe);
__builtin_memmove((R+28),(R+28),4);
}
B5fcac0:L5fcac0:{c.instructions+=5;NFSU2_TR(0x5fcac0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5fcac7:{NFSU2_TR(0x5fcac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fcace:{NFSU2_TR(0x5fcace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcad1:{NFSU2_TR(0x5fcad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcad3:{NFSU2_TR(0x5fcad3);
if(r1(R+518)){{goto L5fcada;}}
}
B5fcad5:L5fcad5:{c.instructions+=2;NFSU2_TR(0x5fcad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcad8:{NFSU2_TR(0x5fcad8);
{goto L5fcadc;}
}
B5fcada:L5fcada:{c.instructions+=1;NFSU2_TR(0x5fcada);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fcadc:L5fcadc:{c.instructions+=2;NFSU2_TR(0x5fcadc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcade:{NFSU2_TR(0x5fcade);
if(r1(R+518)){{goto L5fcae6;}}
}
B5fcae0:L5fcae0:{c.instructions+=2;NFSU2_TR(0x5fcae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcae1:{NFSU2_TR(0x5fcae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcae6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fc2a0u);}goto L5fc2a0;}
}
B5fcae6:L5fcae6:{c.instructions+=4;NFSU2_TR(0x5fcae6);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5fcaeb:{NFSU2_TR(0x5fcaeb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5fcaec:{NFSU2_TR(0x5fcaec);
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
B5fcaee:{NFSU2_TR(0x5fcaee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fcac0u);}goto L5fcac0;}}
}
B5fcaf0:L5fcaf0:{c.instructions+=2;NFSU2_TR(0x5fcaf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fcaf7:{NFSU2_TR(0x5fcaf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fcaf8:L5fcaf8:{c.instructions+=2;NFSU2_TR(0x5fcaf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fcaf9:{NFSU2_TR(0x5fcaf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fcb00:L5fcb00:{c.instructions+=22;NFSU2_TR(0x5fcb00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb01:{NFSU2_TR(0x5fcb01);
__builtin_memmove((R+20),(R+16),4);
}
B5fcb03:{NFSU2_TR(0x5fcb03);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb05:{NFSU2_TR(0x5fcb05);
u8 U[4];
w4(U+0,u32(0x779d2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb0a:{NFSU2_TR(0x5fcb0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcb10:{NFSU2_TR(0x5fcb10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb11:{NFSU2_TR(0x5fcb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb18:{NFSU2_TR(0x5fcb18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb19:{NFSU2_TR(0x5fcb19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb1a:{NFSU2_TR(0x5fcb1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb1b:{NFSU2_TR(0x5fcb1b);
__builtin_memmove((R+24),(R+4),4);
}
B5fcb1d:{NFSU2_TR(0x5fcb1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb1e:{NFSU2_TR(0x5fcb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb21:{NFSU2_TR(0x5fcb21);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fcb24:{NFSU2_TR(0x5fcb24);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fcb26:{NFSU2_TR(0x5fcb26);
u8 U[4];
w4(U+0,u32(0x7a63d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5fcb2c:{NFSU2_TR(0x5fcb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb2f:{NFSU2_TR(0x5fcb2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5fcb31:{NFSU2_TR(0x5fcb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb34:{NFSU2_TR(0x5fcb34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcb3a:{NFSU2_TR(0x5fcb3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fcb3e:{NFSU2_TR(0x5fcb3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcb43ull));
TAIL_STATIC(0x5ef340u,5ef);
}
B5fcb43:L5fcb43:{c.instructions+=4;NFSU2_TR(0x5fcb43);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb45:{NFSU2_TR(0x5fcb45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcb4b:{NFSU2_TR(0x5fcb4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb51:{NFSU2_TR(0x5fcb51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcb56ull));
TAIL_STATIC(0x579f20u,579);
}
B5fcb56:L5fcb56:{c.instructions+=5;NFSU2_TR(0x5fcb56);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb58:{NFSU2_TR(0x5fcb58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcb5e:{NFSU2_TR(0x5fcb5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fcb62:{NFSU2_TR(0x5fcb62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb68:{NFSU2_TR(0x5fcb68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcb6dull));
TAIL_STATIC(0x579f20u,579);
}
B5fcb6d:L5fcb6d:{c.instructions+=4;NFSU2_TR(0x5fcb6d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcb6f:{NFSU2_TR(0x5fcb6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcb75:{NFSU2_TR(0x5fcb75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fcb79:{NFSU2_TR(0x5fcb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcb7eull));
TAIL_STATIC(0x579f20u,579);
}
B5fcb7e:L5fcb7e:{c.instructions+=10;NFSU2_TR(0x5fcb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb84:{NFSU2_TR(0x5fcb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb8a:{NFSU2_TR(0x5fcb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb90:{NFSU2_TR(0x5fcb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb96:{NFSU2_TR(0x5fcb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcb9c:{NFSU2_TR(0x5fcb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcb9f:{NFSU2_TR(0x5fcb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcba2:{NFSU2_TR(0x5fcba2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fcba4:{NFSU2_TR(0x5fcba4);
w4(R+4,u32(0x28ull));
}
B5fcba9:{NFSU2_TR(0x5fcba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fcbac:L5fcbac:{c.instructions+=1;NFSU2_TR(0x5fcbac);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5fcbae;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fcbacu);}goto L5fcbac;}
}
B5fcbae:L5fcbae:{c.instructions+=51;NFSU2_TR(0x5fcbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcbb1:{NFSU2_TR(0x5fcbb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcbb4:{NFSU2_TR(0x5fcbb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x214ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fcbbe:{NFSU2_TR(0x5fcbbe);
__builtin_memmove((R+0),gp(0x86b390),4);
}
B5fcbc3:{NFSU2_TR(0x5fcbc3);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcbc9:{NFSU2_TR(0x5fcbc9);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcbcf:{NFSU2_TR(0x5fcbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcbd5:{NFSU2_TR(0x5fcbd5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fcbd7:{NFSU2_TR(0x5fcbd7);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcbdd:{NFSU2_TR(0x5fcbdd);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcbe3:{NFSU2_TR(0x5fcbe3);
__builtin_memmove((R+4),gp(0x86b390),4);
}
B5fcbe9:{NFSU2_TR(0x5fcbe9);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcbef:{NFSU2_TR(0x5fcbef);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcbf5:{NFSU2_TR(0x5fcbf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcbfb:{NFSU2_TR(0x5fcbfb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fcbfd:{NFSU2_TR(0x5fcbfd);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcc03:{NFSU2_TR(0x5fcc03);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcc09:{NFSU2_TR(0x5fcc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcc0c:{NFSU2_TR(0x5fcc0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc12:{NFSU2_TR(0x5fcc12);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fcc18:{NFSU2_TR(0x5fcc18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc1b:{NFSU2_TR(0x5fcc1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc21:{NFSU2_TR(0x5fcc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc27:{NFSU2_TR(0x5fcc27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc31:{NFSU2_TR(0x5fcc31);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcc34:{NFSU2_TR(0x5fcc34);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcc37:{NFSU2_TR(0x5fcc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcc3a:{NFSU2_TR(0x5fcc3a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fcc3d:{NFSU2_TR(0x5fcc3d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fcc3f:{NFSU2_TR(0x5fcc3f);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcc45:{NFSU2_TR(0x5fcc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc4b:{NFSU2_TR(0x5fcc4b);
{u32 ea_=u32(r4(R+24)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcc51:{NFSU2_TR(0x5fcc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc57:{NFSU2_TR(0x5fcc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc5d:{NFSU2_TR(0x5fcc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc63:{NFSU2_TR(0x5fcc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc69:{NFSU2_TR(0x5fcc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc6f:{NFSU2_TR(0x5fcc6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc75:{NFSU2_TR(0x5fcc75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcc78:{NFSU2_TR(0x5fcc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc7e:{NFSU2_TR(0x5fcc7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc84:{NFSU2_TR(0x5fcc84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc8a:{NFSU2_TR(0x5fcc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc90:{NFSU2_TR(0x5fcc90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fcc91:{NFSU2_TR(0x5fcc91);
__builtin_memmove((R+0),(R+24),4);
}
B5fcc93:{NFSU2_TR(0x5fcc93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fcc94:{NFSU2_TR(0x5fcc94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fcc95:{NFSU2_TR(0x5fcc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcc9c:{NFSU2_TR(0x5fcc9c);
__builtin_memmove((R+16),(R+20),4);
}
B5fcc9e:{NFSU2_TR(0x5fcc9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fcc9f:{NFSU2_TR(0x5fcc9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fccb0:L5fccb0:{c.instructions+=16;NFSU2_TR(0x5fccb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccb2:{NFSU2_TR(0x5fccb2);
u8 U[4];
w4(U+0,u32(0x779d2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccb7:{NFSU2_TR(0x5fccb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fccbd:{NFSU2_TR(0x5fccbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccbe:{NFSU2_TR(0x5fccbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fccc5:{NFSU2_TR(0x5fccc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccc6:{NFSU2_TR(0x5fccc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccc7:{NFSU2_TR(0x5fccc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccc8:{NFSU2_TR(0x5fccc8);
__builtin_memmove((R+28),(R+4),4);
}
B5fccca:{NFSU2_TR(0x5fccca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fccce:{NFSU2_TR(0x5fccce);
u8 U[4];
w4(U+0,u32(0x7a63d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5fccd4:{NFSU2_TR(0x5fccd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fccd7:{NFSU2_TR(0x5fccd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fccda:{NFSU2_TR(0x5fccda);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fccdc:{NFSU2_TR(0x5fccdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fcce4:{NFSU2_TR(0x5fcce4);
if(r1(R+518)){{goto L5fcd07;}}
}
B5fcce6:L5fcce6:{c.instructions+=9;NFSU2_TR(0x5fcce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fcce8:{NFSU2_TR(0x5fcce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fccea:{NFSU2_TR(0x5fccea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcced:{NFSU2_TR(0x5fcced);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5fccef:{NFSU2_TR(0x5fccef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccf0:{NFSU2_TR(0x5fccf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fccf3:{NFSU2_TR(0x5fccf3);
__builtin_memmove((R+0),gp(0x89012c),4);
}
B5fccf8:{NFSU2_TR(0x5fccf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fccf9:{NFSU2_TR(0x5fccf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fccfeull));
TAIL_STATIC(0x43f920u,43f);
}
B5fccfe:L5fccfe:{c.instructions+=4;NFSU2_TR(0x5fccfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fcd00:{NFSU2_TR(0x5fcd00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fcd03:{NFSU2_TR(0x5fcd03);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fcd05:{NFSU2_TR(0x5fcd05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fcce6u);}goto L5fcce6;}}
}
B5fcd07:L5fcd07:{c.instructions+=3;NFSU2_TR(0x5fcd07);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcd0d:{NFSU2_TR(0x5fcd0d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fcd12:{NFSU2_TR(0x5fcd12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcd17ull));
TAIL_STATIC(0x5768e0u,576);
}
B5fcd17:L5fcd17:{c.instructions+=3;NFSU2_TR(0x5fcd17);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcd1d:{NFSU2_TR(0x5fcd1d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fcd22:{NFSU2_TR(0x5fcd22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcd27ull));
TAIL_STATIC(0x5768e0u,576);
}
B5fcd27:L5fcd27:{c.instructions+=3;NFSU2_TR(0x5fcd27);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x190ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcd2d:{NFSU2_TR(0x5fcd2d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fcd32:{NFSU2_TR(0x5fcd32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcd37ull));
TAIL_STATIC(0x5768e0u,576);
}
B5fcd37:L5fcd37:{c.instructions+=3;NFSU2_TR(0x5fcd37);
__builtin_memmove((R+4),(R+24),4);
}
B5fcd39:{NFSU2_TR(0x5fcd39);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fcd3e:{NFSU2_TR(0x5fcd3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcd43ull));
TAIL_STATIC(0x5fa730u,5fa);
}
B5fcd43:L5fcd43:{c.instructions+=7;NFSU2_TR(0x5fcd43);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcd47:{NFSU2_TR(0x5fcd47);
u8 U[4];
w4(U+0,u32(0x7a5c90ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5fcd4d:{NFSU2_TR(0x5fcd4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fcd4e:{NFSU2_TR(0x5fcd4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fcd4f:{NFSU2_TR(0x5fcd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcd56:{NFSU2_TR(0x5fcd56);
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
B5fcd59:{NFSU2_TR(0x5fcd59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fcd60:L5fcd60:{c.instructions+=11;NFSU2_TR(0x5fcd60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcd61:{NFSU2_TR(0x5fcd61);
__builtin_memmove((R+20),(R+16),4);
}
B5fcd63:{NFSU2_TR(0x5fcd63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5fcd66:{NFSU2_TR(0x5fcd66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5fcd69:{NFSU2_TR(0x5fcd69);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5fcd6d:{NFSU2_TR(0x5fcd6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcd6e:{NFSU2_TR(0x5fcd6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcd6f:{NFSU2_TR(0x5fcd6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5fcd72:{NFSU2_TR(0x5fcd72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcd73:{NFSU2_TR(0x5fcd73);
__builtin_memmove((R+28),(R+4),4);
}
B5fcd75:{NFSU2_TR(0x5fcd75);
if(r1(R+518)){TAIL_STATIC(0x5fd109u,5fd);}
}
B5fcd7b:L5fcd7b:{c.instructions+=9;NFSU2_TR(0x5fcd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcd7e:{NFSU2_TR(0x5fcd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcd81:{NFSU2_TR(0x5fcd81);
__builtin_memmove((R+8),gp(0x89d930),4);
}
B5fcd87:{NFSU2_TR(0x5fcd87);
__builtin_memmove((R+0),(R+4),4);
}
B5fcd89:{NFSU2_TR(0x5fcd89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcd8a:{NFSU2_TR(0x5fcd8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcd8e:{NFSU2_TR(0x5fcd8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcd8f:{NFSU2_TR(0x5fcd8f);
w4(R+4,u32(0x89d804ull));
}
B5fcd94:{NFSU2_TR(0x5fcd94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcd99ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fcd99:L5fcd99:{c.instructions+=3;NFSU2_TR(0x5fcd99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcd9a:{NFSU2_TR(0x5fcd9a);
__builtin_memmove((R+4),(R+24),4);
}
B5fcd9c:{NFSU2_TR(0x5fcd9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcda1ull));
TAIL_STATIC(0x581d00u,581);
}
B5fcda1:L5fcda1:{c.instructions+=9;NFSU2_TR(0x5fcda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcda4:{NFSU2_TR(0x5fcda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcda7:{NFSU2_TR(0x5fcda7);
__builtin_memmove((R+0),gp(0x89da7c),4);
}
B5fcdac:{NFSU2_TR(0x5fcdac);
__builtin_memmove((R+4),(R+8),4);
}
B5fcdae:{NFSU2_TR(0x5fcdae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcdaf:{NFSU2_TR(0x5fcdaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcdb0:{NFSU2_TR(0x5fcdb0);
w4(R+4,u32(0x89d950ull));
}
B5fcdb5:{NFSU2_TR(0x5fcdb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcdb9:{NFSU2_TR(0x5fcdb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcdbeull));
TAIL_STATIC(0x581fe0u,581);
}
B5fcdbe:L5fcdbe:{c.instructions+=3;NFSU2_TR(0x5fcdbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcdbf:{NFSU2_TR(0x5fcdbf);
__builtin_memmove((R+4),(R+24),4);
}
B5fcdc1:{NFSU2_TR(0x5fcdc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcdc6ull));
TAIL_STATIC(0x581d00u,581);
}
B5fcdc6:L5fcdc6:{c.instructions+=9;NFSU2_TR(0x5fcdc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcdc9:{NFSU2_TR(0x5fcdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcdcc:{NFSU2_TR(0x5fcdcc);
__builtin_memmove((R+4),gp(0x89dbc8),4);
}
B5fcdd2:{NFSU2_TR(0x5fcdd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcdd3:{NFSU2_TR(0x5fcdd3);
__builtin_memmove((R+8),(R+0),4);
}
B5fcdd5:{NFSU2_TR(0x5fcdd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcdd6:{NFSU2_TR(0x5fcdd6);
w4(R+4,u32(0x89da9cull));
}
B5fcddb:{NFSU2_TR(0x5fcddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcddf:{NFSU2_TR(0x5fcddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcde4ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fcde4:L5fcde4:{c.instructions+=3;NFSU2_TR(0x5fcde4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcde5:{NFSU2_TR(0x5fcde5);
__builtin_memmove((R+4),(R+24),4);
}
B5fcde7:{NFSU2_TR(0x5fcde7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcdecull));
TAIL_STATIC(0x581d00u,581);
}
B5fcdec:L5fcdec:{c.instructions+=6;NFSU2_TR(0x5fcdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcdef:{NFSU2_TR(0x5fcdef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B5fcdf4:{NFSU2_TR(0x5fcdf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcdf5:{NFSU2_TR(0x5fcdf5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcdf9:{NFSU2_TR(0x5fcdf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcdfa:{NFSU2_TR(0x5fcdfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcdffull));
TAIL_STATIC(0x43cbd0u,43c);
}
B5fcdff:L5fcdff:{c.instructions+=7;NFSU2_TR(0x5fcdff);
__builtin_memmove((R+8),gp(0x89de60),4);
}
B5fce05:{NFSU2_TR(0x5fce05);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fce09:{NFSU2_TR(0x5fce09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fce0c:{NFSU2_TR(0x5fce0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce0d:{NFSU2_TR(0x5fce0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce0e:{NFSU2_TR(0x5fce0e);
w4(R+4,u32(0x89dd34ull));
}
B5fce13:{NFSU2_TR(0x5fce13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce18ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fce18:L5fce18:{c.instructions+=3;NFSU2_TR(0x5fce18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce19:{NFSU2_TR(0x5fce19);
__builtin_memmove((R+4),(R+24),4);
}
B5fce1b:{NFSU2_TR(0x5fce1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce20ull));
TAIL_STATIC(0x581d00u,581);
}
B5fce20:L5fce20:{c.instructions+=6;NFSU2_TR(0x5fce20);
__builtin_memmove((R+4),gp(0x89de60),4);
}
B5fce26:{NFSU2_TR(0x5fce26);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fce2a:{NFSU2_TR(0x5fce2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce2b:{NFSU2_TR(0x5fce2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce2c:{NFSU2_TR(0x5fce2c);
w4(R+4,u32(0x89dd34ull));
}
B5fce31:{NFSU2_TR(0x5fce31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce36ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fce36:L5fce36:{c.instructions+=3;NFSU2_TR(0x5fce36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce37:{NFSU2_TR(0x5fce37);
__builtin_memmove((R+4),(R+24),4);
}
B5fce39:{NFSU2_TR(0x5fce39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce3eull));
TAIL_STATIC(0x581d00u,581);
}
B5fce3e:L5fce3e:{c.instructions+=6;NFSU2_TR(0x5fce3e);
__builtin_memmove((R+0),gp(0x89de60),4);
}
B5fce43:{NFSU2_TR(0x5fce43);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fce47:{NFSU2_TR(0x5fce47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce48:{NFSU2_TR(0x5fce48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce49:{NFSU2_TR(0x5fce49);
w4(R+4,u32(0x89dd34ull));
}
B5fce4e:{NFSU2_TR(0x5fce4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce53ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fce53:L5fce53:{c.instructions+=3;NFSU2_TR(0x5fce53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce54:{NFSU2_TR(0x5fce54);
__builtin_memmove((R+4),(R+24),4);
}
B5fce56:{NFSU2_TR(0x5fce56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce5bull));
TAIL_STATIC(0x581d00u,581);
}
B5fce5b:L5fce5b:{c.instructions+=6;NFSU2_TR(0x5fce5b);
__builtin_memmove((R+8),gp(0x89de60),4);
}
B5fce61:{NFSU2_TR(0x5fce61);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fce65:{NFSU2_TR(0x5fce65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce66:{NFSU2_TR(0x5fce66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce67:{NFSU2_TR(0x5fce67);
w4(R+4,u32(0x89dd34ull));
}
B5fce6c:{NFSU2_TR(0x5fce6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce71ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fce71:L5fce71:{c.instructions+=3;NFSU2_TR(0x5fce71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fce72:{NFSU2_TR(0x5fce72);
__builtin_memmove((R+4),(R+24),4);
}
B5fce74:{NFSU2_TR(0x5fce74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fce79ull));
TAIL_STATIC(0x581d00u,581);
}
B5fce79:L5fce79:{c.instructions+=10;NFSU2_TR(0x5fce79);
__builtin_memmove((R+4),gp(0x86b390),4);
}
B5fce7f:{NFSU2_TR(0x5fce7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fce83:{NFSU2_TR(0x5fce83);
__builtin_memmove((R+8),gp(0x86b394),4);
}
B5fce89:{NFSU2_TR(0x5fce89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fce8c:{NFSU2_TR(0x5fce8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fce8f:{NFSU2_TR(0x5fce8f);
__builtin_memmove((R+0),gp(0x86b398),4);
}
B5fce94:{NFSU2_TR(0x5fce94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fce98:{NFSU2_TR(0x5fce98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fce9a:{NFSU2_TR(0x5fce9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fce9e:{NFSU2_TR(0x5fce9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcea1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fcea1:L5fcea1:{c.instructions+=3;NFSU2_TR(0x5fcea1);
__builtin_memmove((R+12),(R+0),4);
}
B5fcea3:{NFSU2_TR(0x5fcea3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcea5:{NFSU2_TR(0x5fcea5);
if(r1(R+518)){{goto L5fceda;}}
}
B5fcea7:L5fcea7:{c.instructions+=6;NFSU2_TR(0x5fcea7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fceab:{NFSU2_TR(0x5fceab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fceac:{NFSU2_TR(0x5fceac);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fceb0:{NFSU2_TR(0x5fceb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fceb1:{NFSU2_TR(0x5fceb1);
__builtin_memmove((R+4),(R+28),4);
}
B5fceb3:{NFSU2_TR(0x5fceb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fceb8ull));
TAIL_STATIC(0x5ef640u,5ef);
}
B5fceb8:L5fceb8:{c.instructions+=9;NFSU2_TR(0x5fceb8);
{u32 ea_=u32(r4(R+12)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcebe:{NFSU2_TR(0x5fcebe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcec2:{NFSU2_TR(0x5fcec2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5fcec4:{NFSU2_TR(0x5fcec4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcec8:{NFSU2_TR(0x5fcec8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcecc:{NFSU2_TR(0x5fcecc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5fcece:{NFSU2_TR(0x5fcece);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fced2:{NFSU2_TR(0x5fced2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fced6:{NFSU2_TR(0x5fced6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fceda:L5fceda:{c.instructions+=6;NFSU2_TR(0x5fceda);
__builtin_memmove((R+8),gp(0x89dfac),4);
}
B5fcee0:{NFSU2_TR(0x5fcee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcee4:{NFSU2_TR(0x5fcee4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcee5:{NFSU2_TR(0x5fcee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcee6:{NFSU2_TR(0x5fcee6);
w4(R+4,u32(0x89de80ull));
}
B5fceeb:{NFSU2_TR(0x5fceeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcef0ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fcef0:L5fcef0:{c.instructions+=3;NFSU2_TR(0x5fcef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcef1:{NFSU2_TR(0x5fcef1);
__builtin_memmove((R+4),(R+24),4);
}
B5fcef3:{NFSU2_TR(0x5fcef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcef8ull));
TAIL_STATIC(0x581d00u,581);
}
B5fcef8:L5fcef8:{c.instructions+=6;NFSU2_TR(0x5fcef8);
__builtin_memmove((R+4),gp(0x89dfac),4);
}
B5fcefe:{NFSU2_TR(0x5fcefe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcf02:{NFSU2_TR(0x5fcf02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf03:{NFSU2_TR(0x5fcf03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf04:{NFSU2_TR(0x5fcf04);
w4(R+4,u32(0x89de80ull));
}
B5fcf09:{NFSU2_TR(0x5fcf09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf0eull));
TAIL_STATIC(0x581fe0u,581);
}
B5fcf0e:L5fcf0e:{c.instructions+=3;NFSU2_TR(0x5fcf0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf0f:{NFSU2_TR(0x5fcf0f);
__builtin_memmove((R+4),(R+24),4);
}
B5fcf11:{NFSU2_TR(0x5fcf11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf16ull));
TAIL_STATIC(0x581d00u,581);
}
B5fcf16:L5fcf16:{c.instructions+=6;NFSU2_TR(0x5fcf16);
__builtin_memmove((R+0),gp(0x89dfac),4);
}
B5fcf1b:{NFSU2_TR(0x5fcf1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcf1f:{NFSU2_TR(0x5fcf1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf20:{NFSU2_TR(0x5fcf20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf21:{NFSU2_TR(0x5fcf21);
w4(R+4,u32(0x89de80ull));
}
B5fcf26:{NFSU2_TR(0x5fcf26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf2bull));
TAIL_STATIC(0x581fe0u,581);
}
B5fcf2b:L5fcf2b:{c.instructions+=3;NFSU2_TR(0x5fcf2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf2c:{NFSU2_TR(0x5fcf2c);
__builtin_memmove((R+4),(R+24),4);
}
B5fcf2e:{NFSU2_TR(0x5fcf2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf33ull));
TAIL_STATIC(0x581d00u,581);
}
B5fcf33:L5fcf33:{c.instructions+=3;NFSU2_TR(0x5fcf33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcf36:{NFSU2_TR(0x5fcf36);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5fcf39:{NFSU2_TR(0x5fcf39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf3eull));
TAIL_STATIC(0x592480u,592);
}
B5fcf3e:L5fcf3e:{c.instructions+=5;NFSU2_TR(0x5fcf3e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fcf44:{NFSU2_TR(0x5fcf44);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fcf46:{NFSU2_TR(0x5fcf46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fcf48:{NFSU2_TR(0x5fcf48);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fcf4b:{NFSU2_TR(0x5fcf4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fcf59;}}
}
B5fcf4d:L5fcf4d:{c.instructions+=3;NFSU2_TR(0x5fcf4d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fcf4f:{NFSU2_TR(0x5fcf4f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fcf57:{NFSU2_TR(0x5fcf57);
{goto L5fcf5d;}
}
B5fcf59:L5fcf59:{c.instructions+=1;NFSU2_TR(0x5fcf59);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fcf5d:L5fcf5d:{c.instructions+=6;NFSU2_TR(0x5fcf5d);
__builtin_memmove((R+8),gp(0x89e628),4);
}
B5fcf63:{NFSU2_TR(0x5fcf63);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcf67:{NFSU2_TR(0x5fcf67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf68:{NFSU2_TR(0x5fcf68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf69:{NFSU2_TR(0x5fcf69);
w4(R+4,u32(0x89e4fcull));
}
B5fcf6e:{NFSU2_TR(0x5fcf6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf73ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fcf73:L5fcf73:{c.instructions+=3;NFSU2_TR(0x5fcf73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf74:{NFSU2_TR(0x5fcf74);
__builtin_memmove((R+4),(R+24),4);
}
B5fcf76:{NFSU2_TR(0x5fcf76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf7bull));
TAIL_STATIC(0x581d00u,581);
}
B5fcf7b:L5fcf7b:{c.instructions+=3;NFSU2_TR(0x5fcf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcf7e:{NFSU2_TR(0x5fcf7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fcf81:{NFSU2_TR(0x5fcf81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf86ull));
TAIL_STATIC(0x59fa30u,59f);
}
B5fcf86:L5fcf86:{c.instructions+=7;NFSU2_TR(0x5fcf86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcf88:{NFSU2_TR(0x5fcf88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5fcf8b:{NFSU2_TR(0x5fcf8b);
w4(R+4,u32(r1(R+0)));
}
B5fcf8e:{NFSU2_TR(0x5fcf8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf90:{NFSU2_TR(0x5fcf90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcf91:{NFSU2_TR(0x5fcf91);
__builtin_memmove((R+4),(R+24),4);
}
B5fcf93:{NFSU2_TR(0x5fcf93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcf98ull));
TAIL_STATIC(0x581d00u,581);
}
B5fcf98:L5fcf98:{c.instructions+=4;NFSU2_TR(0x5fcf98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcf9b:{NFSU2_TR(0x5fcf9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcfa1:{NFSU2_TR(0x5fcfa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcfa3:{NFSU2_TR(0x5fcfa3);
if(r1(R+518)){{goto L5fcfd7;}}
}
B5fcfa5:L5fcfa5:{c.instructions+=2;NFSU2_TR(0x5fcfa5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fcfab:{NFSU2_TR(0x5fcfab);
if(r1(R+518)){{goto L5fcfd7;}}
}
B5fcfad:L5fcfad:{c.instructions+=9;NFSU2_TR(0x5fcfad);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5fcfb3:{NFSU2_TR(0x5fcfb3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B5fcfb5:{NFSU2_TR(0x5fcfb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fcfb9:{NFSU2_TR(0x5fcfb9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fcfbd:{NFSU2_TR(0x5fcfbd);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fcfc3:{NFSU2_TR(0x5fcfc3);
{u32 ea_=u32(r4(R+0)+u32(2424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fcfc9:{NFSU2_TR(0x5fcfc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fcfcb:{NFSU2_TR(0x5fcfcb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fcfce:{NFSU2_TR(0x5fcfce);
if(r1(R+514)){{goto L5fcfd7;}}
}
B5fcfd0:L5fcfd0:{c.instructions+=2;NFSU2_TR(0x5fcfd0);
w4(R+0,u32(0x1ull));
}
B5fcfd5:{NFSU2_TR(0x5fcfd5);
{goto L5fcfd9;}
}
B5fcfd7:L5fcfd7:{c.instructions+=1;NFSU2_TR(0x5fcfd7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fcfd9:L5fcfd9:{c.instructions+=5;NFSU2_TR(0x5fcfd9);
w4(R+0,u32(r1(R+0)));
}
B5fcfdc:{NFSU2_TR(0x5fcfdc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcfde:{NFSU2_TR(0x5fcfde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fcfdf:{NFSU2_TR(0x5fcfdf);
__builtin_memmove((R+4),(R+24),4);
}
B5fcfe1:{NFSU2_TR(0x5fcfe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fcfe6ull));
TAIL_STATIC(0x581d00u,581);
}
B5fcfe6:L5fcfe6:{c.instructions+=9;NFSU2_TR(0x5fcfe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fcfe9:{NFSU2_TR(0x5fcfe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fcfec:{NFSU2_TR(0x5fcfec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcff2:{NFSU2_TR(0x5fcff2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcff4:{NFSU2_TR(0x5fcff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fcff7:{NFSU2_TR(0x5fcff7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+12),(U+2),1);
}
B5fcffa:{NFSU2_TR(0x5fcffa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fcffc:{NFSU2_TR(0x5fcffc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5fcfff:{NFSU2_TR(0x5fcfff);
w4(R+0,u32(r1(R+8)));
TAIL_STATIC(0x5fd002u,5fd);
}
XIT:NFSU2_TR_EXIT(0x5fc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
