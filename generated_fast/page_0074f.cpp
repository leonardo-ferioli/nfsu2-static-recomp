#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74c(u8* __restrict R,Cpu& c);
u32 body_74e(u8* __restrict R,Cpu& c);
u32 body_750(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x74f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x74f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_74f(u8* __restrict R,Cpu& c);
u32 page_74f(Cpu& c){return body_74f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_74f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x74f003:goto L74f003;
case 0x74f009:c.instructions+=2;goto B74f009;
case 0x74f00b:c.instructions+=1;goto B74f00b;
case 0x74f00d:goto L74f00d;
case 0x74f013:c.instructions+=6;goto B74f013;
case 0x74f014:c.instructions+=5;goto B74f014;
case 0x74f018:c.instructions+=4;goto B74f018;
case 0x74f019:c.instructions+=3;goto B74f019;
case 0x74f01a:c.instructions+=2;goto B74f01a;
case 0x74f01e:c.instructions+=1;goto B74f01e;
case 0x74f020:goto L74f020;
case 0x74f023:goto L74f023;
case 0x74f025:c.instructions+=1;goto B74f025;
case 0x74f02b:goto L74f02b;
case 0x74f031:c.instructions+=3;goto B74f031;
case 0x74f032:c.instructions+=2;goto B74f032;
case 0x74f033:c.instructions+=1;goto B74f033;
case 0x74f038:goto L74f038;
case 0x74f039:c.instructions+=3;goto B74f039;
case 0x74f03f:c.instructions+=2;goto B74f03f;
case 0x74f040:c.instructions+=1;goto B74f040;
case 0x74f045:goto L74f045;
case 0x74f04b:c.instructions+=3;goto B74f04b;
case 0x74f04e:c.instructions+=2;goto B74f04e;
case 0x74f050:c.instructions+=1;goto B74f050;
case 0x74f052:goto L74f052;
case 0x74f058:c.instructions+=4;goto B74f058;
case 0x74f059:c.instructions+=3;goto B74f059;
case 0x74f05a:c.instructions+=2;goto B74f05a;
case 0x74f05b:c.instructions+=1;goto B74f05b;
case 0x74f05d:goto L74f05d;
case 0x74f060:goto L74f060;
case 0x74f061:c.instructions+=1;goto B74f061;
case 0x74f064:goto L74f064;
case 0x74f067:c.instructions+=1;goto B74f067;
case 0x74f06c:goto L74f06c;
case 0x74f070:c.instructions+=7;goto B74f070;
case 0x74f075:c.instructions+=6;goto B74f075;
case 0x74f077:c.instructions+=5;goto B74f077;
case 0x74f07b:c.instructions+=4;goto B74f07b;
case 0x74f07c:c.instructions+=3;goto B74f07c;
case 0x74f081:c.instructions+=2;goto B74f081;
case 0x74f082:c.instructions+=1;goto B74f082;
case 0x74f087:goto L74f087;
case 0x74f08a:c.instructions+=2;goto B74f08a;
case 0x74f08b:c.instructions+=1;goto B74f08b;
case 0x74f090:goto L74f090;
case 0x74f093:c.instructions+=2;goto B74f093;
case 0x74f097:c.instructions+=1;goto B74f097;
case 0x74f09c:goto L74f09c;
case 0x74f0a0:c.instructions+=2;goto B74f0a0;
case 0x74f0a2:c.instructions+=1;goto B74f0a2;
case 0x74f0a4:goto L74f0a4;
case 0x74f0a6:c.instructions+=2;goto B74f0a6;
case 0x74f0a9:c.instructions+=1;goto B74f0a9;
case 0x74f0b0:goto L74f0b0;
case 0x74f0b2:c.instructions+=3;goto B74f0b2;
case 0x74f0b3:c.instructions+=2;goto B74f0b3;
case 0x74f0b5:c.instructions+=1;goto B74f0b5;
case 0x74f0b7:goto L74f0b7;
case 0x74f0b9:c.instructions+=2;goto B74f0b9;
case 0x74f0bc:c.instructions+=1;goto B74f0bc;
case 0x74f0be:goto L74f0be;
case 0x74f0c4:c.instructions+=3;goto B74f0c4;
case 0x74f0c5:c.instructions+=2;goto B74f0c5;
case 0x74f0c6:c.instructions+=1;goto B74f0c6;
case 0x74f0cb:goto L74f0cb;
case 0x74f0cf:c.instructions+=5;goto B74f0cf;
case 0x74f0d0:c.instructions+=4;goto B74f0d0;
case 0x74f0d2:c.instructions+=3;goto B74f0d2;
case 0x74f0d3:c.instructions+=2;goto B74f0d3;
case 0x74f0d5:c.instructions+=1;goto B74f0d5;
case 0x74f0da:goto L74f0da;
case 0x74f0e0:c.instructions+=4;goto B74f0e0;
case 0x74f0e1:c.instructions+=3;goto B74f0e1;
case 0x74f0e2:c.instructions+=2;goto B74f0e2;
case 0x74f0e3:c.instructions+=1;goto B74f0e3;
case 0x74f0e8:goto L74f0e8;
case 0x74f0eb:goto L74f0eb;
case 0x74f0f1:c.instructions+=3;goto B74f0f1;
case 0x74f0f3:c.instructions+=2;goto B74f0f3;
case 0x74f0f5:c.instructions+=1;goto B74f0f5;
case 0x74f0f7:goto L74f0f7;
case 0x74f0fd:c.instructions+=7;goto B74f0fd;
case 0x74f0fe:c.instructions+=6;goto B74f0fe;
case 0x74f102:c.instructions+=5;goto B74f102;
case 0x74f103:c.instructions+=4;goto B74f103;
case 0x74f104:c.instructions+=3;goto B74f104;
case 0x74f108:c.instructions+=2;goto B74f108;
case 0x74f10c:c.instructions+=1;goto B74f10c;
case 0x74f10e:goto L74f10e;
case 0x74f111:goto L74f111;
case 0x74f117:c.instructions+=3;goto B74f117;
case 0x74f11c:c.instructions+=2;goto B74f11c;
case 0x74f122:c.instructions+=1;goto B74f122;
case 0x74f128:goto L74f128;
case 0x74f12e:c.instructions+=3;goto B74f12e;
case 0x74f130:c.instructions+=2;goto B74f130;
case 0x74f131:c.instructions+=1;goto B74f131;
case 0x74f136:goto L74f136;
case 0x74f13a:c.instructions+=5;goto B74f13a;
case 0x74f13d:c.instructions+=4;goto B74f13d;
case 0x74f142:c.instructions+=3;goto B74f142;
case 0x74f144:c.instructions+=2;goto B74f144;
case 0x74f149:c.instructions+=1;goto B74f149;
case 0x74f14b:goto L74f14b;
case 0x74f151:c.instructions+=1;goto B74f151;
case 0x74f157:goto L74f157;
case 0x74f15b:c.instructions+=2;goto B74f15b;
case 0x74f15d:c.instructions+=1;goto B74f15d;
case 0x74f15f:goto L74f15f;
case 0x74f162:c.instructions+=1;goto B74f162;
case 0x74f168:goto L74f168;
case 0x74f16e:c.instructions+=1;goto B74f16e;
case 0x74f173:goto L74f173;
case 0x74f178:c.instructions+=1;goto B74f178;
case 0x74f17a:goto L74f17a;
case 0x74f180:c.instructions+=1;goto B74f180;
case 0x74f186:goto L74f186;
case 0x74f18a:c.instructions+=2;goto B74f18a;
case 0x74f18c:c.instructions+=1;goto B74f18c;
case 0x74f18e:goto L74f18e;
case 0x74f191:c.instructions+=1;goto B74f191;
case 0x74f197:goto L74f197;
case 0x74f19d:c.instructions+=1;goto B74f19d;
case 0x74f1a2:goto L74f1a2;
case 0x74f1a7:c.instructions+=1;goto B74f1a7;
case 0x74f1a9:goto L74f1a9;
case 0x74f1ae:c.instructions+=1;goto B74f1ae;
case 0x74f1b0:goto L74f1b0;
case 0x74f1b1:c.instructions+=16;goto B74f1b1;
case 0x74f1b4:c.instructions+=15;goto B74f1b4;
case 0x74f1b9:c.instructions+=14;goto B74f1b9;
case 0x74f1bb:c.instructions+=13;goto B74f1bb;
case 0x74f1bd:c.instructions+=12;goto B74f1bd;
case 0x74f1c0:c.instructions+=11;goto B74f1c0;
case 0x74f1c4:c.instructions+=10;goto B74f1c4;
case 0x74f1c7:c.instructions+=9;goto B74f1c7;
case 0x74f1cb:c.instructions+=8;goto B74f1cb;
case 0x74f1cf:c.instructions+=7;goto B74f1cf;
case 0x74f1d3:c.instructions+=6;goto B74f1d3;
case 0x74f1d6:c.instructions+=5;goto B74f1d6;
case 0x74f1da:c.instructions+=4;goto B74f1da;
case 0x74f1dd:c.instructions+=3;goto B74f1dd;
case 0x74f1de:c.instructions+=2;goto B74f1de;
case 0x74f1e1:c.instructions+=1;goto B74f1e1;
case 0x74f1e6:goto L74f1e6;
case 0x74f1ea:c.instructions+=1;goto B74f1ea;
case 0x74f1ed:goto L74f1ed;
case 0x74f1f2:c.instructions+=1;goto B74f1f2;
case 0x74f1f4:goto L74f1f4;
case 0x74f1f6:c.instructions+=16;goto B74f1f6;
case 0x74f1f9:c.instructions+=15;goto B74f1f9;
case 0x74f1fe:c.instructions+=14;goto B74f1fe;
case 0x74f200:c.instructions+=13;goto B74f200;
case 0x74f202:c.instructions+=12;goto B74f202;
case 0x74f205:c.instructions+=11;goto B74f205;
case 0x74f209:c.instructions+=10;goto B74f209;
case 0x74f20c:c.instructions+=9;goto B74f20c;
case 0x74f210:c.instructions+=8;goto B74f210;
case 0x74f214:c.instructions+=7;goto B74f214;
case 0x74f218:c.instructions+=6;goto B74f218;
case 0x74f21b:c.instructions+=5;goto B74f21b;
case 0x74f21f:c.instructions+=4;goto B74f21f;
case 0x74f222:c.instructions+=3;goto B74f222;
case 0x74f223:c.instructions+=2;goto B74f223;
case 0x74f226:c.instructions+=1;goto B74f226;
case 0x74f22b:goto L74f22b;
case 0x74f22f:c.instructions+=1;goto B74f22f;
case 0x74f232:goto L74f232;
case 0x74f237:c.instructions+=1;goto B74f237;
case 0x74f239:goto L74f239;
case 0x74f23e:c.instructions+=1;goto B74f23e;
case 0x74f240:goto L74f240;
case 0x74f242:c.instructions+=16;goto B74f242;
case 0x74f245:c.instructions+=15;goto B74f245;
case 0x74f24a:c.instructions+=14;goto B74f24a;
case 0x74f24c:c.instructions+=13;goto B74f24c;
case 0x74f24e:c.instructions+=12;goto B74f24e;
case 0x74f251:c.instructions+=11;goto B74f251;
case 0x74f255:c.instructions+=10;goto B74f255;
case 0x74f258:c.instructions+=9;goto B74f258;
case 0x74f25c:c.instructions+=8;goto B74f25c;
case 0x74f260:c.instructions+=7;goto B74f260;
case 0x74f264:c.instructions+=6;goto B74f264;
case 0x74f267:c.instructions+=5;goto B74f267;
case 0x74f26b:c.instructions+=4;goto B74f26b;
case 0x74f26e:c.instructions+=3;goto B74f26e;
case 0x74f26f:c.instructions+=2;goto B74f26f;
case 0x74f272:c.instructions+=1;goto B74f272;
case 0x74f277:goto L74f277;
case 0x74f27b:c.instructions+=1;goto B74f27b;
case 0x74f27e:goto L74f27e;
case 0x74f283:c.instructions+=1;goto B74f283;
case 0x74f285:goto L74f285;
case 0x74f287:c.instructions+=16;goto B74f287;
case 0x74f28a:c.instructions+=15;goto B74f28a;
case 0x74f28f:c.instructions+=14;goto B74f28f;
case 0x74f291:c.instructions+=13;goto B74f291;
case 0x74f293:c.instructions+=12;goto B74f293;
case 0x74f296:c.instructions+=11;goto B74f296;
case 0x74f29a:c.instructions+=10;goto B74f29a;
case 0x74f29d:c.instructions+=9;goto B74f29d;
case 0x74f2a1:c.instructions+=8;goto B74f2a1;
case 0x74f2a5:c.instructions+=7;goto B74f2a5;
case 0x74f2a9:c.instructions+=6;goto B74f2a9;
case 0x74f2ac:c.instructions+=5;goto B74f2ac;
case 0x74f2b0:c.instructions+=4;goto B74f2b0;
case 0x74f2b3:c.instructions+=3;goto B74f2b3;
case 0x74f2b4:c.instructions+=2;goto B74f2b4;
case 0x74f2b7:c.instructions+=1;goto B74f2b7;
case 0x74f2bc:goto L74f2bc;
case 0x74f2c0:c.instructions+=1;goto B74f2c0;
case 0x74f2c3:goto L74f2c3;
case 0x74f2c8:c.instructions+=1;goto B74f2c8;
case 0x74f2ca:goto L74f2ca;
case 0x74f2ce:c.instructions+=14;goto B74f2ce;
case 0x74f2d1:c.instructions+=13;goto B74f2d1;
case 0x74f2d3:c.instructions+=12;goto B74f2d3;
case 0x74f2d5:c.instructions+=11;goto B74f2d5;
case 0x74f2d9:c.instructions+=10;goto B74f2d9;
case 0x74f2dc:c.instructions+=9;goto B74f2dc;
case 0x74f2e0:c.instructions+=8;goto B74f2e0;
case 0x74f2e3:c.instructions+=7;goto B74f2e3;
case 0x74f2e7:c.instructions+=6;goto B74f2e7;
case 0x74f2ea:c.instructions+=5;goto B74f2ea;
case 0x74f2ee:c.instructions+=4;goto B74f2ee;
case 0x74f2f1:c.instructions+=3;goto B74f2f1;
case 0x74f2f2:c.instructions+=2;goto B74f2f2;
case 0x74f2f5:c.instructions+=1;goto B74f2f5;
case 0x74f2fa:goto L74f2fa;
case 0x74f2fd:c.instructions+=2;goto B74f2fd;
case 0x74f2ff:c.instructions+=1;goto B74f2ff;
case 0x74f301:goto L74f301;
case 0x74f307:c.instructions+=2;goto B74f307;
case 0x74f309:c.instructions+=1;goto B74f309;
case 0x74f30b:goto L74f30b;
case 0x74f30c:c.instructions+=2;goto B74f30c;
case 0x74f30d:c.instructions+=1;goto B74f30d;
case 0x74f312:goto L74f312;
case 0x74f315:goto L74f315;
case 0x74f319:goto L74f319;
case 0x74f31e:c.instructions+=1;goto B74f31e;
case 0x74f320:goto L74f320;
case 0x74f322:c.instructions+=16;goto B74f322;
case 0x74f325:c.instructions+=15;goto B74f325;
case 0x74f32a:c.instructions+=14;goto B74f32a;
case 0x74f32c:c.instructions+=13;goto B74f32c;
case 0x74f32e:c.instructions+=12;goto B74f32e;
case 0x74f331:c.instructions+=11;goto B74f331;
case 0x74f335:c.instructions+=10;goto B74f335;
case 0x74f338:c.instructions+=9;goto B74f338;
case 0x74f33c:c.instructions+=8;goto B74f33c;
case 0x74f340:c.instructions+=7;goto B74f340;
case 0x74f344:c.instructions+=6;goto B74f344;
case 0x74f347:c.instructions+=5;goto B74f347;
case 0x74f34b:c.instructions+=4;goto B74f34b;
case 0x74f34e:c.instructions+=3;goto B74f34e;
case 0x74f34f:c.instructions+=2;goto B74f34f;
case 0x74f352:c.instructions+=1;goto B74f352;
case 0x74f357:goto L74f357;
case 0x74f35b:c.instructions+=1;goto B74f35b;
case 0x74f35e:goto L74f35e;
case 0x74f363:c.instructions+=1;goto B74f363;
case 0x74f369:goto L74f369;
case 0x74f36d:c.instructions+=4;goto B74f36d;
case 0x74f36e:c.instructions+=3;goto B74f36e;
case 0x74f373:c.instructions+=2;goto B74f373;
case 0x74f374:c.instructions+=1;goto B74f374;
case 0x74f379:goto L74f379;
case 0x74f37c:c.instructions+=2;goto B74f37c;
case 0x74f37d:c.instructions+=1;goto B74f37d;
case 0x74f382:goto L74f382;
case 0x74f385:c.instructions+=2;goto B74f385;
case 0x74f388:c.instructions+=1;goto B74f388;
case 0x74f38e:goto L74f38e;
case 0x74f392:c.instructions+=1;goto B74f392;
case 0x74f398:goto L74f398;
case 0x74f39e:c.instructions+=10;goto B74f39e;
case 0x74f3a2:c.instructions+=9;goto B74f3a2;
case 0x74f3a7:c.instructions+=8;goto B74f3a7;
case 0x74f3ac:c.instructions+=7;goto B74f3ac;
case 0x74f3b2:c.instructions+=6;goto B74f3b2;
case 0x74f3b7:c.instructions+=5;goto B74f3b7;
case 0x74f3bd:c.instructions+=4;goto B74f3bd;
case 0x74f3be:c.instructions+=3;goto B74f3be;
case 0x74f3c3:c.instructions+=2;goto B74f3c3;
case 0x74f3c4:c.instructions+=1;goto B74f3c4;
case 0x74f3c9:goto L74f3c9;
case 0x74f3cc:c.instructions+=2;goto B74f3cc;
case 0x74f3cd:c.instructions+=1;goto B74f3cd;
case 0x74f3d2:goto L74f3d2;
case 0x74f3d6:c.instructions+=8;goto B74f3d6;
case 0x74f3d9:c.instructions+=7;goto B74f3d9;
case 0x74f3de:c.instructions+=6;goto B74f3de;
case 0x74f3e0:c.instructions+=5;goto B74f3e0;
case 0x74f3e4:c.instructions+=4;goto B74f3e4;
case 0x74f3e5:c.instructions+=3;goto B74f3e5;
case 0x74f3ea:c.instructions+=2;goto B74f3ea;
case 0x74f3eb:c.instructions+=1;goto B74f3eb;
case 0x74f3f0:goto L74f3f0;
case 0x74f3f3:c.instructions+=2;goto B74f3f3;
case 0x74f3f4:c.instructions+=1;goto B74f3f4;
case 0x74f3f9:goto L74f3f9;
case 0x74f3fd:c.instructions+=3;goto B74f3fd;
case 0x74f402:c.instructions+=2;goto B74f402;
case 0x74f403:c.instructions+=1;goto B74f403;
case 0x74f408:goto L74f408;
case 0x74f40b:c.instructions+=2;goto B74f40b;
case 0x74f40d:c.instructions+=1;goto B74f40d;
case 0x74f40f:goto L74f40f;
case 0x74f415:goto L74f415;
case 0x74f419:goto L74f419;
case 0x74f41e:c.instructions+=1;goto B74f41e;
case 0x74f424:goto L74f424;
case 0x74f428:c.instructions+=4;goto B74f428;
case 0x74f429:c.instructions+=3;goto B74f429;
case 0x74f42e:c.instructions+=2;goto B74f42e;
case 0x74f42f:c.instructions+=1;goto B74f42f;
case 0x74f434:goto L74f434;
case 0x74f437:c.instructions+=2;goto B74f437;
case 0x74f438:c.instructions+=1;goto B74f438;
case 0x74f43d:goto L74f43d;
case 0x74f440:c.instructions+=2;goto B74f440;
case 0x74f443:c.instructions+=1;goto B74f443;
case 0x74f445:goto L74f445;
case 0x74f449:c.instructions+=2;goto B74f449;
case 0x74f44b:c.instructions+=1;goto B74f44b;
case 0x74f44d:goto L74f44d;
case 0x74f452:c.instructions+=1;goto B74f452;
case 0x74f454:goto L74f454;
case 0x74f45a:c.instructions+=1;goto B74f45a;
case 0x74f45c:goto L74f45c;
case 0x74f462:c.instructions+=3;goto B74f462;
case 0x74f464:c.instructions+=2;goto B74f464;
case 0x74f46c:c.instructions+=1;goto B74f46c;
case 0x74f46e:goto L74f46e;
case 0x74f474:c.instructions+=5;goto B74f474;
case 0x74f475:c.instructions+=4;goto B74f475;
case 0x74f479:c.instructions+=3;goto B74f479;
case 0x74f47a:c.instructions+=2;goto B74f47a;
case 0x74f47b:c.instructions+=1;goto B74f47b;
case 0x74f47d:goto L74f47d;
case 0x74f480:goto L74f480;
case 0x74f486:c.instructions+=1;goto B74f486;
case 0x74f488:goto L74f488;
case 0x74f48c:c.instructions+=4;goto B74f48c;
case 0x74f48d:c.instructions+=3;goto B74f48d;
case 0x74f492:c.instructions+=2;goto B74f492;
case 0x74f493:c.instructions+=1;goto B74f493;
case 0x74f498:goto L74f498;
case 0x74f49b:c.instructions+=2;goto B74f49b;
case 0x74f49c:c.instructions+=1;goto B74f49c;
case 0x74f4a1:goto L74f4a1;
case 0x74f4a4:c.instructions+=1;goto B74f4a4;
case 0x74f4aa:goto L74f4aa;
case 0x74f4ae:goto L74f4ae;
case 0x74f4b3:c.instructions+=1;goto B74f4b3;
case 0x74f4b5:goto L74f4b5;
case 0x74f4b9:c.instructions+=14;goto B74f4b9;
case 0x74f4bc:c.instructions+=13;goto B74f4bc;
case 0x74f4be:c.instructions+=12;goto B74f4be;
case 0x74f4c0:c.instructions+=11;goto B74f4c0;
case 0x74f4c4:c.instructions+=10;goto B74f4c4;
case 0x74f4c7:c.instructions+=9;goto B74f4c7;
case 0x74f4cb:c.instructions+=8;goto B74f4cb;
case 0x74f4ce:c.instructions+=7;goto B74f4ce;
case 0x74f4d2:c.instructions+=6;goto B74f4d2;
case 0x74f4d5:c.instructions+=5;goto B74f4d5;
case 0x74f4d9:c.instructions+=4;goto B74f4d9;
case 0x74f4dc:c.instructions+=3;goto B74f4dc;
case 0x74f4dd:c.instructions+=2;goto B74f4dd;
case 0x74f4e0:c.instructions+=1;goto B74f4e0;
case 0x74f4e5:goto L74f4e5;
case 0x74f4e8:c.instructions+=2;goto B74f4e8;
case 0x74f4ea:c.instructions+=1;goto B74f4ea;
case 0x74f4ec:goto L74f4ec;
case 0x74f4f2:goto L74f4f2;
case 0x74f4f8:c.instructions+=1;goto B74f4f8;
case 0x74f4fa:goto L74f4fa;
case 0x74f500:c.instructions+=2;goto B74f500;
case 0x74f502:c.instructions+=1;goto B74f502;
case 0x74f504:goto L74f504;
case 0x74f50a:c.instructions+=9;goto B74f50a;
case 0x74f50b:c.instructions+=8;goto B74f50b;
case 0x74f50f:c.instructions+=7;goto B74f50f;
case 0x74f510:c.instructions+=6;goto B74f510;
case 0x74f511:c.instructions+=5;goto B74f511;
case 0x74f519:c.instructions+=4;goto B74f519;
case 0x74f51d:c.instructions+=3;goto B74f51d;
case 0x74f521:c.instructions+=2;goto B74f521;
case 0x74f525:c.instructions+=1;goto B74f525;
case 0x74f527:goto L74f527;
case 0x74f52a:c.instructions+=1;goto B74f52a;
case 0x74f530:goto L74f530;
case 0x74f533:c.instructions+=6;goto B74f533;
case 0x74f534:c.instructions+=5;goto B74f534;
case 0x74f535:c.instructions+=4;goto B74f535;
case 0x74f536:c.instructions+=3;goto B74f536;
case 0x74f537:c.instructions+=2;goto B74f537;
case 0x74f538:c.instructions+=1;goto B74f538;
case 0x74f53d:goto L74f53d;
case 0x74f541:c.instructions+=8;goto B74f541;
case 0x74f542:c.instructions+=7;goto B74f542;
case 0x74f545:c.instructions+=6;goto B74f545;
case 0x74f549:c.instructions+=5;goto B74f549;
case 0x74f54a:c.instructions+=4;goto B74f54a;
case 0x74f54e:c.instructions+=3;goto B74f54e;
case 0x74f54f:c.instructions+=2;goto B74f54f;
case 0x74f550:c.instructions+=1;goto B74f550;
case 0x74f555:goto L74f555;
case 0x74f558:c.instructions+=2;goto B74f558;
case 0x74f55a:c.instructions+=1;goto B74f55a;
case 0x74f560:goto L74f560;
case 0x74f566:c.instructions+=1;goto B74f566;
case 0x74f568:goto L74f568;
case 0x74f56c:c.instructions+=1;goto B74f56c;
case 0x74f56e:goto L74f56e;
case 0x74f574:c.instructions+=2;goto B74f574;
case 0x74f576:c.instructions+=1;goto B74f576;
case 0x74f578:goto L74f578;
case 0x74f579:c.instructions+=2;goto B74f579;
case 0x74f57a:c.instructions+=1;goto B74f57a;
case 0x74f57f:goto L74f57f;
case 0x74f582:goto L74f582;
case 0x74f588:c.instructions+=1;goto B74f588;
case 0x74f58a:goto L74f58a;
case 0x74f590:c.instructions+=2;goto B74f590;
case 0x74f591:c.instructions+=1;goto B74f591;
case 0x74f596:goto L74f596;
case 0x74f599:c.instructions+=2;goto B74f599;
case 0x74f59b:c.instructions+=1;goto B74f59b;
case 0x74f59d:goto L74f59d;
case 0x74f5a3:c.instructions+=10;goto B74f5a3;
case 0x74f5a9:c.instructions+=9;goto B74f5a9;
case 0x74f5aa:c.instructions+=8;goto B74f5aa;
case 0x74f5ae:c.instructions+=7;goto B74f5ae;
case 0x74f5af:c.instructions+=6;goto B74f5af;
case 0x74f5b0:c.instructions+=5;goto B74f5b0;
case 0x74f5b8:c.instructions+=4;goto B74f5b8;
case 0x74f5bc:c.instructions+=3;goto B74f5bc;
case 0x74f5c0:c.instructions+=2;goto B74f5c0;
case 0x74f5c4:c.instructions+=1;goto B74f5c4;
case 0x74f5ca:goto L74f5ca;
case 0x74f5cd:goto L74f5cd;
case 0x74f5d4:c.instructions+=2;goto B74f5d4;
case 0x74f5d8:c.instructions+=1;goto B74f5d8;
case 0x74f5dd:goto L74f5dd;
case 0x74f5de:c.instructions+=5;goto B74f5de;
case 0x74f5df:c.instructions+=4;goto B74f5df;
case 0x74f5e0:c.instructions+=3;goto B74f5e0;
case 0x74f5e1:c.instructions+=2;goto B74f5e1;
case 0x74f5e7:c.instructions+=1;goto B74f5e7;
case 0x74f5f0:goto L74f5f0;
case 0x74f5f2:c.instructions+=1;goto B74f5f2;
case 0x74f5f7:goto L74f5f7;
case 0x74f5fa:c.instructions+=1;goto B74f5fa;
case 0x74f600:goto L74f600;
case 0x74f601:c.instructions+=2;goto B74f601;
case 0x74f602:c.instructions+=1;goto B74f602;
case 0x74f604:goto L74f604;
case 0x74f606:c.instructions+=3;goto B74f606;
case 0x74f607:c.instructions+=2;goto B74f607;
case 0x74f60a:c.instructions+=1;goto B74f60a;
case 0x74f60c:goto L74f60c;
case 0x74f60f:c.instructions+=1;goto B74f60f;
case 0x74f611:goto L74f611;
case 0x74f614:goto L74f614;
case 0x74f616:c.instructions+=3;goto B74f616;
case 0x74f617:c.instructions+=2;goto B74f617;
case 0x74f619:c.instructions+=1;goto B74f619;
case 0x74f61b:goto L74f61b;
case 0x74f61d:c.instructions+=1;goto B74f61d;
case 0x74f61f:goto L74f61f;
case 0x74f621:goto L74f621;
case 0x74f624:c.instructions+=4;goto B74f624;
case 0x74f627:c.instructions+=3;goto B74f627;
case 0x74f629:c.instructions+=2;goto B74f629;
case 0x74f62b:c.instructions+=1;goto B74f62b;
case 0x74f62d:goto L74f62d;
case 0x74f62f:c.instructions+=1;goto B74f62f;
case 0x74f631:goto L74f631;
case 0x74f632:c.instructions+=2;goto B74f632;
case 0x74f633:c.instructions+=1;goto B74f633;
case 0x74f640:goto L74f640;
case 0x74f641:c.instructions+=10;goto B74f641;
case 0x74f643:c.instructions+=9;goto B74f643;
case 0x74f646:c.instructions+=8;goto B74f646;
case 0x74f64c:c.instructions+=7;goto B74f64c;
case 0x74f651:c.instructions+=6;goto B74f651;
case 0x74f652:c.instructions+=5;goto B74f652;
case 0x74f659:c.instructions+=4;goto B74f659;
case 0x74f65b:c.instructions+=3;goto B74f65b;
case 0x74f65d:c.instructions+=2;goto B74f65d;
case 0x74f662:c.instructions+=1;goto B74f662;
case 0x74f666:goto L74f666;
case 0x74f668:goto L74f668;
case 0x74f66b:c.instructions+=12;goto B74f66b;
case 0x74f66e:c.instructions+=11;goto B74f66e;
case 0x74f66f:c.instructions+=10;goto B74f66f;
case 0x74f671:c.instructions+=9;goto B74f671;
case 0x74f676:c.instructions+=8;goto B74f676;
case 0x74f67a:c.instructions+=7;goto B74f67a;
case 0x74f67b:c.instructions+=6;goto B74f67b;
case 0x74f67c:c.instructions+=5;goto B74f67c;
case 0x74f681:c.instructions+=4;goto B74f681;
case 0x74f686:c.instructions+=3;goto B74f686;
case 0x74f68b:c.instructions+=2;goto B74f68b;
case 0x74f690:c.instructions+=1;goto B74f690;
case 0x74f695:goto L74f695;
case 0x74f69c:c.instructions+=2;goto B74f69c;
case 0x74f69f:c.instructions+=1;goto B74f69f;
case 0x74f6a4:goto L74f6a4;
case 0x74f6a5:c.instructions+=3;goto B74f6a5;
case 0x74f6a7:c.instructions+=2;goto B74f6a7;
case 0x74f6a8:c.instructions+=1;goto B74f6a8;
case 0x74f6b0:goto L74f6b0;
case 0x74f6b6:c.instructions+=6;goto B74f6b6;
case 0x74f6bb:c.instructions+=5;goto B74f6bb;
case 0x74f6bc:c.instructions+=4;goto B74f6bc;
case 0x74f6c3:c.instructions+=3;goto B74f6c3;
case 0x74f6c4:c.instructions+=2;goto B74f6c4;
case 0x74f6cb:c.instructions+=1;goto B74f6cb;
case 0x74f6d0:goto L74f6d0;
case 0x74f6d3:c.instructions+=2;goto B74f6d3;
case 0x74f6d5:c.instructions+=1;goto B74f6d5;
case 0x74f6db:goto L74f6db;
case 0x74f6de:c.instructions+=6;goto B74f6de;
case 0x74f6df:c.instructions+=5;goto B74f6df;
case 0x74f6e0:c.instructions+=4;goto B74f6e0;
case 0x74f6e2:c.instructions+=3;goto B74f6e2;
case 0x74f6e4:c.instructions+=2;goto B74f6e4;
case 0x74f6e5:c.instructions+=1;goto B74f6e5;
case 0x74f6eb:goto L74f6eb;
case 0x74f6f0:goto L74f6f0;
case 0x74f6f3:c.instructions+=1;goto B74f6f3;
case 0x74f6f5:goto L74f6f5;
case 0x74f6f7:c.instructions+=2;goto B74f6f7;
case 0x74f6fa:c.instructions+=1;goto B74f6fa;
case 0x74f6ff:goto L74f6ff;
case 0x74f703:c.instructions+=12;goto B74f703;
case 0x74f704:c.instructions+=11;goto B74f704;
case 0x74f707:c.instructions+=10;goto B74f707;
case 0x74f70b:c.instructions+=9;goto B74f70b;
case 0x74f70c:c.instructions+=8;goto B74f70c;
case 0x74f70d:c.instructions+=7;goto B74f70d;
case 0x74f712:c.instructions+=6;goto B74f712;
case 0x74f716:c.instructions+=5;goto B74f716;
case 0x74f717:c.instructions+=4;goto B74f717;
case 0x74f718:c.instructions+=3;goto B74f718;
case 0x74f71d:c.instructions+=2;goto B74f71d;
case 0x74f725:c.instructions+=1;goto B74f725;
case 0x74f72a:goto L74f72a;
case 0x74f72d:c.instructions+=2;goto B74f72d;
case 0x74f72f:c.instructions+=1;goto B74f72f;
case 0x74f735:goto L74f735;
case 0x74f739:c.instructions+=2;goto B74f739;
case 0x74f73b:c.instructions+=1;goto B74f73b;
case 0x74f741:goto L74f741;
case 0x74f743:c.instructions+=6;goto B74f743;
case 0x74f747:c.instructions+=5;goto B74f747;
case 0x74f748:c.instructions+=4;goto B74f748;
case 0x74f74c:c.instructions+=3;goto B74f74c;
case 0x74f74e:c.instructions+=2;goto B74f74e;
case 0x74f74f:c.instructions+=1;goto B74f74f;
case 0x74f754:goto L74f754;
case 0x74f759:c.instructions+=4;goto B74f759;
case 0x74f75c:c.instructions+=3;goto B74f75c;
case 0x74f761:c.instructions+=2;goto B74f761;
case 0x74f765:c.instructions+=1;goto B74f765;
case 0x74f767:goto L74f767;
case 0x74f76b:c.instructions+=1;goto B74f76b;
case 0x74f76d:goto L74f76d;
case 0x74f76f:c.instructions+=3;goto B74f76f;
case 0x74f774:c.instructions+=2;goto B74f774;
case 0x74f778:c.instructions+=1;goto B74f778;
case 0x74f77c:goto L74f77c;
case 0x74f77f:goto L74f77f;
case 0x74f781:c.instructions+=2;goto B74f781;
case 0x74f784:c.instructions+=1;goto B74f784;
case 0x74f788:goto L74f788;
case 0x74f78d:c.instructions+=1;goto B74f78d;
case 0x74f793:goto L74f793;
case 0x74f798:c.instructions+=1;goto B74f798;
case 0x74f79e:goto L74f79e;
case 0x74f7a3:c.instructions+=1;goto B74f7a3;
case 0x74f7a9:goto L74f7a9;
case 0x74f7ae:c.instructions+=1;goto B74f7ae;
case 0x74f7b0:goto L74f7b0;
case 0x74f7b4:c.instructions+=2;goto B74f7b4;
case 0x74f7b6:c.instructions+=1;goto B74f7b6;
case 0x74f7b8:goto L74f7b8;
case 0x74f7bd:goto L74f7bd;
case 0x74f7c0:c.instructions+=3;goto B74f7c0;
case 0x74f7c5:c.instructions+=2;goto B74f7c5;
case 0x74f7c7:c.instructions+=1;goto B74f7c7;
case 0x74f7cd:goto L74f7cd;
case 0x74f7d0:goto L74f7d0;
case 0x74f7d6:c.instructions+=1;goto B74f7d6;
case 0x74f7d8:goto L74f7d8;
case 0x74f7de:goto L74f7de;
case 0x74f7e4:c.instructions+=2;goto B74f7e4;
case 0x74f7e6:c.instructions+=1;goto B74f7e6;
case 0x74f7e8:goto L74f7e8;
case 0x74f7ed:goto L74f7ed;
case 0x74f7f1:c.instructions+=2;goto B74f7f1;
case 0x74f7f3:c.instructions+=1;goto B74f7f3;
case 0x74f7f9:goto L74f7f9;
case 0x74f7fc:c.instructions+=4;goto B74f7fc;
case 0x74f7ff:c.instructions+=3;goto B74f7ff;
case 0x74f801:c.instructions+=2;goto B74f801;
case 0x74f803:c.instructions+=1;goto B74f803;
case 0x74f805:goto L74f805;
case 0x74f807:c.instructions+=1;goto B74f807;
case 0x74f809:goto L74f809;
case 0x74f80c:c.instructions+=2;goto B74f80c;
case 0x74f80e:c.instructions+=1;goto B74f80e;
case 0x74f810:goto L74f810;
case 0x74f812:goto L74f812;
case 0x74f815:c.instructions+=2;goto B74f815;
case 0x74f819:c.instructions+=1;goto B74f819;
case 0x74f81e:goto L74f81e;
case 0x74f820:c.instructions+=1;goto B74f820;
case 0x74f822:goto L74f822;
case 0x74f825:c.instructions+=2;goto B74f825;
case 0x74f829:c.instructions+=1;goto B74f829;
case 0x74f82e:goto L74f82e;
case 0x74f830:c.instructions+=1;goto B74f830;
case 0x74f832:goto L74f832;
case 0x74f835:c.instructions+=2;goto B74f835;
case 0x74f83c:c.instructions+=1;goto B74f83c;
case 0x74f841:goto L74f841;
case 0x74f843:c.instructions+=1;goto B74f843;
case 0x74f845:goto L74f845;
case 0x74f849:c.instructions+=3;goto B74f849;
case 0x74f84b:c.instructions+=2;goto B74f84b;
case 0x74f84e:c.instructions+=1;goto B74f84e;
case 0x74f850:goto L74f850;
case 0x74f853:c.instructions+=3;goto B74f853;
case 0x74f859:c.instructions+=2;goto B74f859;
case 0x74f85b:c.instructions+=1;goto B74f85b;
case 0x74f85d:goto L74f85d;
case 0x74f85f:c.instructions+=1;goto B74f85f;
case 0x74f861:goto L74f861;
case 0x74f863:c.instructions+=1;goto B74f863;
case 0x74f865:goto L74f865;
case 0x74f867:c.instructions+=2;goto B74f867;
case 0x74f86c:c.instructions+=1;goto B74f86c;
case 0x74f86e:goto L74f86e;
case 0x74f870:goto L74f870;
case 0x74f874:c.instructions+=7;goto B74f874;
case 0x74f877:c.instructions+=6;goto B74f877;
case 0x74f87b:c.instructions+=5;goto B74f87b;
case 0x74f87d:c.instructions+=4;goto B74f87d;
case 0x74f87f:c.instructions+=3;goto B74f87f;
case 0x74f881:c.instructions+=2;goto B74f881;
case 0x74f883:c.instructions+=1;goto B74f883;
case 0x74f886:goto L74f886;
case 0x74f888:c.instructions+=4;goto B74f888;
case 0x74f88b:c.instructions+=3;goto B74f88b;
case 0x74f88c:c.instructions+=2;goto B74f88c;
case 0x74f88e:c.instructions+=1;goto B74f88e;
case 0x74f890:goto L74f890;
case 0x74f894:c.instructions+=5;goto B74f894;
case 0x74f896:c.instructions+=4;goto B74f896;
case 0x74f898:c.instructions+=3;goto B74f898;
case 0x74f89a:c.instructions+=2;goto B74f89a;
case 0x74f89d:c.instructions+=1;goto B74f89d;
case 0x74f8a0:goto L74f8a0;
case 0x74f8a2:c.instructions+=4;goto B74f8a2;
case 0x74f8a5:c.instructions+=3;goto B74f8a5;
case 0x74f8a6:c.instructions+=2;goto B74f8a6;
case 0x74f8a8:c.instructions+=1;goto B74f8a8;
case 0x74f8aa:goto L74f8aa;
case 0x74f8b1:c.instructions+=3;goto B74f8b1;
case 0x74f8b3:c.instructions+=2;goto B74f8b3;
case 0x74f8b5:c.instructions+=1;goto B74f8b5;
case 0x74f8b8:goto L74f8b8;
case 0x74f8ba:c.instructions+=4;goto B74f8ba;
case 0x74f8bd:c.instructions+=3;goto B74f8bd;
case 0x74f8be:c.instructions+=2;goto B74f8be;
case 0x74f8c0:c.instructions+=1;goto B74f8c0;
case 0x74f8c2:goto L74f8c2;
case 0x74f8c5:goto L74f8c5;
case 0x74f8c8:c.instructions+=1;goto B74f8c8;
case 0x74f8ce:goto L74f8ce;
case 0x74f8d5:c.instructions+=4;goto B74f8d5;
case 0x74f8d7:c.instructions+=3;goto B74f8d7;
case 0x74f8d9:c.instructions+=2;goto B74f8d9;
case 0x74f8db:c.instructions+=1;goto B74f8db;
case 0x74f8e1:goto L74f8e1;
case 0x74f8e3:c.instructions+=4;goto B74f8e3;
case 0x74f8e6:c.instructions+=3;goto B74f8e6;
case 0x74f8e7:c.instructions+=2;goto B74f8e7;
case 0x74f8e9:c.instructions+=1;goto B74f8e9;
case 0x74f8eb:goto L74f8eb;
case 0x74f8f0:goto L74f8f0;
case 0x74f8f5:c.instructions+=33;goto B74f8f5;
case 0x74f8f9:c.instructions+=32;goto B74f8f9;
case 0x74f8ff:c.instructions+=31;goto B74f8ff;
case 0x74f906:c.instructions+=30;goto B74f906;
case 0x74f90c:c.instructions+=29;goto B74f90c;
case 0x74f912:c.instructions+=28;goto B74f912;
case 0x74f917:c.instructions+=27;goto B74f917;
case 0x74f91c:c.instructions+=26;goto B74f91c;
case 0x74f921:c.instructions+=25;goto B74f921;
case 0x74f924:c.instructions+=24;goto B74f924;
case 0x74f926:c.instructions+=23;goto B74f926;
case 0x74f92b:c.instructions+=22;goto B74f92b;
case 0x74f92e:c.instructions+=21;goto B74f92e;
case 0x74f930:c.instructions+=20;goto B74f930;
case 0x74f933:c.instructions+=19;goto B74f933;
case 0x74f935:c.instructions+=18;goto B74f935;
case 0x74f93b:c.instructions+=17;goto B74f93b;
case 0x74f940:c.instructions+=16;goto B74f940;
case 0x74f945:c.instructions+=15;goto B74f945;
case 0x74f94a:c.instructions+=14;goto B74f94a;
case 0x74f94d:c.instructions+=13;goto B74f94d;
case 0x74f94f:c.instructions+=12;goto B74f94f;
case 0x74f954:c.instructions+=11;goto B74f954;
case 0x74f957:c.instructions+=10;goto B74f957;
case 0x74f959:c.instructions+=9;goto B74f959;
case 0x74f95c:c.instructions+=8;goto B74f95c;
case 0x74f95e:c.instructions+=7;goto B74f95e;
case 0x74f964:c.instructions+=6;goto B74f964;
case 0x74f966:c.instructions+=5;goto B74f966;
case 0x74f96c:c.instructions+=4;goto B74f96c;
case 0x74f970:c.instructions+=3;goto B74f970;
case 0x74f971:c.instructions+=2;goto B74f971;
case 0x74f972:c.instructions+=1;goto B74f972;
case 0x74f977:goto L74f977;
case 0x74f97a:c.instructions+=3;goto B74f97a;
case 0x74f97d:c.instructions+=2;goto B74f97d;
case 0x74f97e:c.instructions+=1;goto B74f97e;
case 0x74f981:goto L74f981;
case 0x74f984:c.instructions+=3;goto B74f984;
case 0x74f986:c.instructions+=2;goto B74f986;
case 0x74f988:c.instructions+=1;goto B74f988;
case 0x74f98e:goto L74f98e;
case 0x74f993:goto L74f993;
case 0x74f996:c.instructions+=2;goto B74f996;
case 0x74f999:c.instructions+=1;goto B74f999;
case 0x74f99b:goto L74f99b;
case 0x74f9a0:goto L74f9a0;
case 0x74f9a3:c.instructions+=2;goto B74f9a3;
case 0x74f9a5:c.instructions+=1;goto B74f9a5;
case 0x74f9a7:goto L74f9a7;
case 0x74f9ad:c.instructions+=2;goto B74f9ad;
case 0x74f9af:c.instructions+=1;goto B74f9af;
case 0x74f9b1:goto L74f9b1;
case 0x74f9b7:c.instructions+=2;goto B74f9b7;
case 0x74f9b9:c.instructions+=1;goto B74f9b9;
case 0x74f9bb:goto L74f9bb;
case 0x74f9bd:c.instructions+=1;goto B74f9bd;
case 0x74f9bf:goto L74f9bf;
case 0x74f9c3:c.instructions+=2;goto B74f9c3;
case 0x74f9c7:c.instructions+=1;goto B74f9c7;
case 0x74f9ca:goto L74f9ca;
case 0x74f9cd:c.instructions+=3;goto B74f9cd;
case 0x74f9d3:c.instructions+=2;goto B74f9d3;
case 0x74f9d5:c.instructions+=1;goto B74f9d5;
case 0x74f9d7:goto L74f9d7;
case 0x74f9da:c.instructions+=3;goto B74f9da;
case 0x74f9dc:c.instructions+=2;goto B74f9dc;
case 0x74f9de:c.instructions+=1;goto B74f9de;
case 0x74f9e0:goto L74f9e0;
case 0x74f9e2:c.instructions+=3;goto B74f9e2;
case 0x74f9e8:c.instructions+=2;goto B74f9e8;
case 0x74f9ea:c.instructions+=1;goto B74f9ea;
case 0x74f9ec:goto L74f9ec;
case 0x74f9f2:c.instructions+=11;goto B74f9f2;
case 0x74f9f4:c.instructions+=10;goto B74f9f4;
case 0x74f9f7:c.instructions+=9;goto B74f9f7;
case 0x74f9f8:c.instructions+=8;goto B74f9f8;
case 0x74f9fa:c.instructions+=7;goto B74f9fa;
case 0x74f9fc:c.instructions+=6;goto B74f9fc;
case 0x74fa01:c.instructions+=5;goto B74fa01;
case 0x74fa08:c.instructions+=4;goto B74fa08;
case 0x74fa0b:c.instructions+=3;goto B74fa0b;
case 0x74fa0c:c.instructions+=2;goto B74fa0c;
case 0x74fa0d:c.instructions+=1;goto B74fa0d;
case 0x74fa12:goto L74fa12;
case 0x74fa13:c.instructions+=1;goto B74fa13;
case 0x74fa18:goto L74fa18;
case 0x74fa1b:c.instructions+=1;goto B74fa1b;
case 0x74fa1d:goto L74fa1d;
case 0x74fa23:goto L74fa23;
case 0x74fa26:c.instructions+=1;goto B74fa26;
case 0x74fa28:goto L74fa28;
case 0x74fa2d:goto L74fa2d;
case 0x74fa30:c.instructions+=3;goto B74fa30;
case 0x74fa32:c.instructions+=2;goto B74fa32;
case 0x74fa34:c.instructions+=1;goto B74fa34;
case 0x74fa36:goto L74fa36;
case 0x74fa3c:c.instructions+=1;goto B74fa3c;
case 0x74fa3e:goto L74fa3e;
case 0x74fa41:c.instructions+=8;goto B74fa41;
case 0x74fa43:c.instructions+=7;goto B74fa43;
case 0x74fa46:c.instructions+=6;goto B74fa46;
case 0x74fa47:c.instructions+=5;goto B74fa47;
case 0x74fa49:c.instructions+=4;goto B74fa49;
case 0x74fa4e:c.instructions+=3;goto B74fa4e;
case 0x74fa4f:c.instructions+=2;goto B74fa4f;
case 0x74fa50:c.instructions+=1;goto B74fa50;
case 0x74fa55:goto L74fa55;
case 0x74fa59:c.instructions+=4;goto B74fa59;
case 0x74fa5f:c.instructions+=3;goto B74fa5f;
case 0x74fa62:c.instructions+=2;goto B74fa62;
case 0x74fa64:c.instructions+=1;goto B74fa64;
case 0x74fa6a:goto L74fa6a;
case 0x74fa70:c.instructions+=2;goto B74fa70;
case 0x74fa72:c.instructions+=1;goto B74fa72;
case 0x74fa74:goto L74fa74;
case 0x74fa75:c.instructions+=1;goto B74fa75;
case 0x74fa7a:goto L74fa7a;
case 0x74fa7d:c.instructions+=3;goto B74fa7d;
case 0x74fa7e:c.instructions+=2;goto B74fa7e;
case 0x74fa7f:c.instructions+=1;goto B74fa7f;
case 0x74fa80:goto L74fa80;
case 0x74fa87:c.instructions+=3;goto B74fa87;
case 0x74fa89:c.instructions+=2;goto B74fa89;
case 0x74fa8a:c.instructions+=1;goto B74fa8a;
case 0x74fa8f:goto L74fa8f;
case 0x74fa95:c.instructions+=1;goto B74fa95;
case 0x74faa0:goto L74faa0;
case 0x74faa4:c.instructions+=2;goto B74faa4;
case 0x74faa6:c.instructions+=1;goto B74faa6;
case 0x74faa8:goto L74faa8;
case 0x74fab0:c.instructions+=1;goto B74fab0;
case 0x74fab2:goto L74fab2;
case 0x74fab5:c.instructions+=1;goto B74fab5;
case 0x74fab7:goto L74fab7;
case 0x74fabf:c.instructions+=1;goto B74fabf;
case 0x74fac1:goto L74fac1;
case 0x74fac6:c.instructions+=1;goto B74fac6;
case 0x74fac8:goto L74fac8;
case 0x74fad0:goto L74fad0;
case 0x74fad1:c.instructions+=3;goto B74fad1;
case 0x74fad5:c.instructions+=2;goto B74fad5;
case 0x74fad7:c.instructions+=1;goto B74fad7;
case 0x74fadd:goto L74fadd;
case 0x74fae0:c.instructions+=1;goto B74fae0;
case 0x74fae6:goto L74fae6;
case 0x74fae8:c.instructions+=2;goto B74fae8;
case 0x74faeb:c.instructions+=1;goto B74faeb;
case 0x74faf0:goto L74faf0;
case 0x74faf2:c.instructions+=3;goto B74faf2;
case 0x74faf3:c.instructions+=2;goto B74faf3;
case 0x74faf5:c.instructions+=1;goto B74faf5;
case 0x74faf7:goto L74faf7;
case 0x74faf9:c.instructions+=2;goto B74faf9;
case 0x74fafc:c.instructions+=1;goto B74fafc;
case 0x74fb02:goto L74fb02;
case 0x74fb06:c.instructions+=2;goto B74fb06;
case 0x74fb08:c.instructions+=1;goto B74fb08;
case 0x74fb0e:goto L74fb0e;
case 0x74fb11:c.instructions+=1;goto B74fb11;
case 0x74fb17:goto L74fb17;
case 0x74fb1a:c.instructions+=1;goto B74fb1a;
case 0x74fb20:goto L74fb20;
case 0x74fb22:c.instructions+=3;goto B74fb22;
case 0x74fb23:c.instructions+=2;goto B74fb23;
case 0x74fb25:c.instructions+=1;goto B74fb25;
case 0x74fb27:goto L74fb27;
case 0x74fb29:c.instructions+=2;goto B74fb29;
case 0x74fb2c:c.instructions+=1;goto B74fb2c;
case 0x74fb32:goto L74fb32;
case 0x74fb36:c.instructions+=2;goto B74fb36;
case 0x74fb38:c.instructions+=1;goto B74fb38;
case 0x74fb3e:goto L74fb3e;
case 0x74fb41:goto L74fb41;
case 0x74fb43:c.instructions+=3;goto B74fb43;
case 0x74fb44:c.instructions+=2;goto B74fb44;
case 0x74fb46:c.instructions+=1;goto B74fb46;
case 0x74fb48:goto L74fb48;
case 0x74fb4a:c.instructions+=2;goto B74fb4a;
case 0x74fb4f:c.instructions+=1;goto B74fb4f;
case 0x74fb55:goto L74fb55;
case 0x74fb56:c.instructions+=3;goto B74fb56;
case 0x74fb5a:c.instructions+=2;goto B74fb5a;
case 0x74fb5c:c.instructions+=1;goto B74fb5c;
case 0x74fb62:goto L74fb62;
case 0x74fb64:c.instructions+=1;goto B74fb64;
case 0x74fb67:goto L74fb67;
case 0x74fb69:c.instructions+=3;goto B74fb69;
case 0x74fb6a:c.instructions+=2;goto B74fb6a;
case 0x74fb6c:c.instructions+=1;goto B74fb6c;
case 0x74fb6e:goto L74fb6e;
case 0x74fb70:c.instructions+=2;goto B74fb70;
case 0x74fb73:c.instructions+=1;goto B74fb73;
case 0x74fb79:goto L74fb79;
case 0x74fb7a:c.instructions+=5;goto B74fb7a;
case 0x74fb7b:c.instructions+=4;goto B74fb7b;
case 0x74fb7f:c.instructions+=3;goto B74fb7f;
case 0x74fb82:c.instructions+=2;goto B74fb82;
case 0x74fb84:c.instructions+=1;goto B74fb84;
case 0x74fb86:goto L74fb86;
case 0x74fb89:c.instructions+=2;goto B74fb89;
case 0x74fb8b:c.instructions+=1;goto B74fb8b;
case 0x74fb90:goto L74fb90;
case 0x74fb92:c.instructions+=1;goto B74fb92;
case 0x74fb94:goto L74fb94;
case 0x74fb98:c.instructions+=2;goto B74fb98;
case 0x74fb9b:c.instructions+=1;goto B74fb9b;
case 0x74fba0:goto L74fba0;
case 0x74fba2:c.instructions+=1;goto B74fba2;
case 0x74fba8:goto L74fba8;
case 0x74fbae:c.instructions+=2;goto B74fbae;
case 0x74fbb0:c.instructions+=1;goto B74fbb0;
case 0x74fbb2:goto L74fbb2;
case 0x74fbb7:c.instructions+=1;goto B74fbb7;
case 0x74fbbc:goto L74fbbc;
case 0x74fbbe:c.instructions+=21;goto B74fbbe;
case 0x74fbc2:c.instructions+=20;goto B74fbc2;
case 0x74fbc5:c.instructions+=19;goto B74fbc5;
case 0x74fbcb:c.instructions+=18;goto B74fbcb;
case 0x74fbcd:c.instructions+=17;goto B74fbcd;
case 0x74fbcf:c.instructions+=16;goto B74fbcf;
case 0x74fbd2:c.instructions+=15;goto B74fbd2;
case 0x74fbd5:c.instructions+=14;goto B74fbd5;
case 0x74fbd8:c.instructions+=13;goto B74fbd8;
case 0x74fbde:c.instructions+=12;goto B74fbde;
case 0x74fbe1:c.instructions+=11;goto B74fbe1;
case 0x74fbe4:c.instructions+=10;goto B74fbe4;
case 0x74fbe7:c.instructions+=9;goto B74fbe7;
case 0x74fbea:c.instructions+=8;goto B74fbea;
case 0x74fbed:c.instructions+=7;goto B74fbed;
case 0x74fbf0:c.instructions+=6;goto B74fbf0;
case 0x74fbf4:c.instructions+=5;goto B74fbf4;
case 0x74fbf8:c.instructions+=4;goto B74fbf8;
case 0x74fbfb:c.instructions+=3;goto B74fbfb;
case 0x74fbfd:c.instructions+=2;goto B74fbfd;
case 0x74fbff:c.instructions+=1;goto B74fbff;
case 0x74fc00:goto L74fc00;
case 0x74fc02:c.instructions+=4;goto B74fc02;
case 0x74fc05:c.instructions+=3;goto B74fc05;
case 0x74fc06:c.instructions+=2;goto B74fc06;
case 0x74fc08:c.instructions+=1;goto B74fc08;
case 0x74fc0a:goto L74fc0a;
case 0x74fc0e:c.instructions+=2;goto B74fc0e;
case 0x74fc11:c.instructions+=1;goto B74fc11;
case 0x74fc13:goto L74fc13;
case 0x74fc15:c.instructions+=4;goto B74fc15;
case 0x74fc18:c.instructions+=3;goto B74fc18;
case 0x74fc19:c.instructions+=2;goto B74fc19;
case 0x74fc1b:c.instructions+=1;goto B74fc1b;
case 0x74fc1d:goto L74fc1d;
case 0x74fc23:c.instructions+=2;goto B74fc23;
case 0x74fc25:c.instructions+=1;goto B74fc25;
case 0x74fc27:goto L74fc27;
case 0x74fc29:c.instructions+=4;goto B74fc29;
case 0x74fc2c:c.instructions+=3;goto B74fc2c;
case 0x74fc2d:c.instructions+=2;goto B74fc2d;
case 0x74fc2f:c.instructions+=1;goto B74fc2f;
case 0x74fc31:goto L74fc31;
case 0x74fc35:c.instructions+=3;goto B74fc35;
case 0x74fc38:c.instructions+=2;goto B74fc38;
case 0x74fc3a:c.instructions+=1;goto B74fc3a;
case 0x74fc40:goto L74fc40;
case 0x74fc42:c.instructions+=4;goto B74fc42;
case 0x74fc45:c.instructions+=3;goto B74fc45;
case 0x74fc46:c.instructions+=2;goto B74fc46;
case 0x74fc48:c.instructions+=1;goto B74fc48;
case 0x74fc4a:goto L74fc4a;
case 0x74fc4d:c.instructions+=8;goto B74fc4d;
case 0x74fc4f:c.instructions+=7;goto B74fc4f;
case 0x74fc52:c.instructions+=6;goto B74fc52;
case 0x74fc53:c.instructions+=5;goto B74fc53;
case 0x74fc55:c.instructions+=4;goto B74fc55;
case 0x74fc5a:c.instructions+=3;goto B74fc5a;
case 0x74fc5b:c.instructions+=2;goto B74fc5b;
case 0x74fc5c:c.instructions+=1;goto B74fc5c;
case 0x74fc61:goto L74fc61;
case 0x74fc66:goto L74fc66;
case 0x74fc6b:c.instructions+=3;goto B74fc6b;
case 0x74fc6c:c.instructions+=2;goto B74fc6c;
case 0x74fc72:c.instructions+=1;goto B74fc72;
case 0x74fc77:goto L74fc77;
case 0x74fc7a:c.instructions+=4;goto B74fc7a;
case 0x74fc80:c.instructions+=3;goto B74fc80;
case 0x74fc81:c.instructions+=2;goto B74fc81;
case 0x74fc84:c.instructions+=1;goto B74fc84;
case 0x74fc89:goto L74fc89;
case 0x74fc8c:goto L74fc8c;
case 0x74fc8d:c.instructions+=5;goto B74fc8d;
case 0x74fc8e:c.instructions+=4;goto B74fc8e;
case 0x74fc8f:c.instructions+=3;goto B74fc8f;
case 0x74fc91:c.instructions+=2;goto B74fc91;
case 0x74fc92:c.instructions+=1;goto B74fc92;
case 0x74fc93:goto L74fc93;
case 0x74fc99:c.instructions+=3;goto B74fc99;
case 0x74fc9b:c.instructions+=2;goto B74fc9b;
case 0x74fc9d:c.instructions+=1;goto B74fc9d;
case 0x74fca2:goto L74fca2;
case 0x74fca4:c.instructions+=1;goto B74fca4;
case 0x74fca6:goto L74fca6;
case 0x74fca8:c.instructions+=3;goto B74fca8;
case 0x74fcaa:c.instructions+=2;goto B74fcaa;
case 0x74fcac:c.instructions+=1;goto B74fcac;
case 0x74fcb0:goto L74fcb0;
case 0x74fcb2:c.instructions+=4;goto B74fcb2;
case 0x74fcb5:c.instructions+=3;goto B74fcb5;
case 0x74fcb6:c.instructions+=2;goto B74fcb6;
case 0x74fcb8:c.instructions+=1;goto B74fcb8;
case 0x74fcba:goto L74fcba;
case 0x74fcc4:goto L74fcc4;
case 0x74fcc8:c.instructions+=4;goto B74fcc8;
case 0x74fccb:c.instructions+=3;goto B74fccb;
case 0x74fccd:c.instructions+=2;goto B74fccd;
case 0x74fccf:c.instructions+=1;goto B74fccf;
case 0x74fcd4:goto L74fcd4;
case 0x74fcd6:c.instructions+=1;goto B74fcd6;
case 0x74fcd8:goto L74fcd8;
case 0x74fcda:c.instructions+=3;goto B74fcda;
case 0x74fcdc:c.instructions+=2;goto B74fcdc;
case 0x74fcde:c.instructions+=1;goto B74fcde;
case 0x74fce0:goto L74fce0;
case 0x74fce2:c.instructions+=4;goto B74fce2;
case 0x74fce5:c.instructions+=3;goto B74fce5;
case 0x74fce6:c.instructions+=2;goto B74fce6;
case 0x74fce8:c.instructions+=1;goto B74fce8;
case 0x74fcea:goto L74fcea;
case 0x74fceb:c.instructions+=6;goto B74fceb;
case 0x74fcf5:c.instructions+=5;goto B74fcf5;
case 0x74fcf6:c.instructions+=4;goto B74fcf6;
case 0x74fcf7:c.instructions+=3;goto B74fcf7;
case 0x74fcf9:c.instructions+=2;goto B74fcf9;
case 0x74fcfa:c.instructions+=1;goto B74fcfa;
case 0x74fcfb:goto L74fcfb;
case 0x74fcfc:c.instructions+=3;goto B74fcfc;
case 0x74fd01:c.instructions+=2;goto B74fd01;
case 0x74fd02:c.instructions+=1;goto B74fd02;
case 0x74fd03:goto L74fd03;
case 0x74fd08:c.instructions+=2;goto B74fd08;
case 0x74fd09:c.instructions+=1;goto B74fd09;
case 0x74fd0a:goto L74fd0a;
case 0x74fd0f:c.instructions+=2;goto B74fd0f;
case 0x74fd10:c.instructions+=1;goto B74fd10;
case 0x74fd11:goto L74fd11;
case 0x74fd14:c.instructions+=2;goto B74fd14;
case 0x74fd15:c.instructions+=1;goto B74fd15;
case 0x74fd20:goto L74fd20;
case 0x74fd21:c.instructions+=4;goto B74fd21;
case 0x74fd25:c.instructions+=3;goto B74fd25;
case 0x74fd26:c.instructions+=2;goto B74fd26;
case 0x74fd27:c.instructions+=1;goto B74fd27;
case 0x74fd2c:goto L74fd2c;
case 0x74fd2f:c.instructions+=3;goto B74fd2f;
case 0x74fd32:c.instructions+=2;goto B74fd32;
case 0x74fd34:c.instructions+=1;goto B74fd34;
case 0x74fd36:goto L74fd36;
case 0x74fd37:c.instructions+=3;goto B74fd37;
case 0x74fd3b:c.instructions+=2;goto B74fd3b;
case 0x74fd3c:c.instructions+=1;goto B74fd3c;
case 0x74fd40:goto L74fd40;
case 0x74fd42:c.instructions+=1;goto B74fd42;
case 0x74fd44:goto L74fd44;
case 0x74fd47:c.instructions+=2;goto B74fd47;
case 0x74fd49:c.instructions+=1;goto B74fd49;
case 0x74fd4e:goto L74fd4e;
case 0x74fd50:c.instructions+=1;goto B74fd50;
case 0x74fd52:goto L74fd52;
case 0x74fd54:c.instructions+=1;goto B74fd54;
case 0x74fd56:goto L74fd56;
case 0x74fd59:c.instructions+=2;goto B74fd59;
case 0x74fd5b:c.instructions+=1;goto B74fd5b;
case 0x74fd60:goto L74fd60;
case 0x74fd62:c.instructions+=1;goto B74fd62;
case 0x74fd64:goto L74fd64;
case 0x74fd6a:c.instructions+=2;goto B74fd6a;
case 0x74fd6c:c.instructions+=1;goto B74fd6c;
case 0x74fd6e:goto L74fd6e;
case 0x74fd70:goto L74fd70;
case 0x74fd7a:goto L74fd7a;
case 0x74fd7b:c.instructions+=1;goto B74fd7b;
case 0x74fd7c:goto L74fd7c;
case 0x74fd7d:c.instructions+=1;goto B74fd7d;
case 0x74fd82:goto L74fd82;
case 0x74fd85:c.instructions+=7;goto B74fd85;
case 0x74fd87:c.instructions+=6;goto B74fd87;
case 0x74fd89:c.instructions+=5;goto B74fd89;
case 0x74fd8c:c.instructions+=4;goto B74fd8c;
case 0x74fd8d:c.instructions+=3;goto B74fd8d;
case 0x74fd8e:c.instructions+=2;goto B74fd8e;
case 0x74fd8f:c.instructions+=1;goto B74fd8f;
case 0x74fd90:goto L74fd90;
case 0x74fd96:c.instructions+=8;goto B74fd96;
case 0x74fd9b:c.instructions+=7;goto B74fd9b;
case 0x74fda2:c.instructions+=6;goto B74fda2;
case 0x74fda9:c.instructions+=5;goto B74fda9;
case 0x74fdaa:c.instructions+=4;goto B74fdaa;
case 0x74fdac:c.instructions+=3;goto B74fdac;
case 0x74fdaf:c.instructions+=2;goto B74fdaf;
case 0x74fdb3:c.instructions+=1;goto B74fdb3;
case 0x74fdb5:goto L74fdb5;
case 0x74fdb8:c.instructions+=3;goto B74fdb8;
case 0x74fdb9:c.instructions+=2;goto B74fdb9;
case 0x74fdc0:c.instructions+=1;goto B74fdc0;
case 0x74fdc5:goto L74fdc5;
case 0x74fdcb:c.instructions+=1;goto B74fdcb;
case 0x74fdcc:goto L74fdcc;
case 0x74fdd3:c.instructions+=9;goto B74fdd3;
case 0x74fdd4:c.instructions+=8;goto B74fdd4;
case 0x74fdd5:c.instructions+=7;goto B74fdd5;
case 0x74fdd6:c.instructions+=6;goto B74fdd6;
case 0x74fddd:c.instructions+=5;goto B74fddd;
case 0x74fddf:c.instructions+=4;goto B74fddf;
case 0x74fde2:c.instructions+=3;goto B74fde2;
case 0x74fde5:c.instructions+=2;goto B74fde5;
case 0x74fde9:c.instructions+=1;goto B74fde9;
case 0x74fdef:goto L74fdef;
case 0x74fdf4:c.instructions+=5;goto B74fdf4;
case 0x74fdf6:c.instructions+=4;goto B74fdf6;
case 0x74fdfa:c.instructions+=3;goto B74fdfa;
case 0x74fe00:c.instructions+=2;goto B74fe00;
case 0x74fe03:c.instructions+=1;goto B74fe03;
case 0x74fe09:goto L74fe09;
case 0x74fe10:c.instructions+=2;goto B74fe10;
case 0x74fe13:c.instructions+=1;goto B74fe13;
case 0x74fe18:goto L74fe18;
case 0x74fe1a:c.instructions+=1;goto B74fe1a;
case 0x74fe20:goto L74fe20;
case 0x74fe27:c.instructions+=1;goto B74fe27;
case 0x74fe29:goto L74fe29;
case 0x74fe2f:c.instructions+=1;goto B74fe2f;
case 0x74fe35:goto L74fe35;
case 0x74fe3b:c.instructions+=3;goto B74fe3b;
case 0x74fe3d:c.instructions+=2;goto B74fe3d;
case 0x74fe43:c.instructions+=1;goto B74fe43;
case 0x74fe49:goto L74fe49;
case 0x74fe50:c.instructions+=4;goto B74fe50;
case 0x74fe53:c.instructions+=3;goto B74fe53;
case 0x74fe55:c.instructions+=2;goto B74fe55;
case 0x74fe59:c.instructions+=1;goto B74fe59;
case 0x74fe5b:goto L74fe5b;
case 0x74fe60:goto L74fe60;
case 0x74fe62:c.instructions+=1;goto B74fe62;
case 0x74fe64:goto L74fe64;
case 0x74fe66:c.instructions+=5;goto B74fe66;
case 0x74fe69:c.instructions+=4;goto B74fe69;
case 0x74fe6a:c.instructions+=3;goto B74fe6a;
case 0x74fe6b:c.instructions+=2;goto B74fe6b;
case 0x74fe6d:c.instructions+=1;goto B74fe6d;
case 0x74fe6f:goto L74fe6f;
case 0x74fe71:c.instructions+=2;goto B74fe71;
case 0x74fe75:c.instructions+=1;goto B74fe75;
case 0x74fe77:goto L74fe77;
case 0x74fe78:goto L74fe78;
case 0x74fe7c:c.instructions+=2;goto B74fe7c;
case 0x74fe7f:c.instructions+=1;goto B74fe7f;
case 0x74fe80:goto L74fe80;
case 0x74fe82:c.instructions+=3;goto B74fe82;
case 0x74fe83:c.instructions+=2;goto B74fe83;
case 0x74fe85:c.instructions+=1;goto B74fe85;
case 0x74fe87:goto L74fe87;
case 0x74fe89:c.instructions+=2;goto B74fe89;
case 0x74fe8c:c.instructions+=1;goto B74fe8c;
case 0x74fe92:goto L74fe92;
case 0x74fe97:c.instructions+=1;goto B74fe97;
case 0x74fe9d:goto L74fe9d;
case 0x74fea4:c.instructions+=3;goto B74fea4;
case 0x74fea6:c.instructions+=2;goto B74fea6;
case 0x74feaa:c.instructions+=1;goto B74feaa;
case 0x74feac:goto L74feac;
case 0x74feb0:c.instructions+=3;goto B74feb0;
case 0x74feb1:c.instructions+=2;goto B74feb1;
case 0x74feb2:c.instructions+=1;goto B74feb2;
case 0x74feb7:goto L74feb7;
case 0x74feba:c.instructions+=2;goto B74feba;
case 0x74febc:c.instructions+=1;goto B74febc;
case 0x74fec2:goto L74fec2;
case 0x74fec6:c.instructions+=3;goto B74fec6;
case 0x74fecb:c.instructions+=2;goto B74fecb;
case 0x74fece:c.instructions+=1;goto B74fece;
case 0x74fed5:goto L74fed5;
case 0x74fed7:c.instructions+=4;goto B74fed7;
case 0x74feda:c.instructions+=3;goto B74feda;
case 0x74fedb:c.instructions+=2;goto B74fedb;
case 0x74fedd:c.instructions+=1;goto B74fedd;
case 0x74fedf:goto L74fedf;
case 0x74fee6:c.instructions+=2;goto B74fee6;
case 0x74feed:c.instructions+=1;goto B74feed;
case 0x74feef:goto L74feef;
case 0x74fef0:goto L74fef0;
case 0x74fef3:c.instructions+=3;goto B74fef3;
case 0x74fef4:c.instructions+=2;goto B74fef4;
case 0x74fef6:c.instructions+=1;goto B74fef6;
case 0x74fef8:goto L74fef8;
case 0x74fefb:c.instructions+=4;goto B74fefb;
case 0x74fefc:c.instructions+=3;goto B74fefc;
case 0x74feff:c.instructions+=2;goto B74feff;
case 0x74ff01:c.instructions+=1;goto B74ff01;
case 0x74ff03:goto L74ff03;
case 0x74ff05:c.instructions+=4;goto B74ff05;
case 0x74ff08:c.instructions+=3;goto B74ff08;
case 0x74ff09:c.instructions+=2;goto B74ff09;
case 0x74ff0b:c.instructions+=1;goto B74ff0b;
case 0x74ff0d:goto L74ff0d;
case 0x74ff0f:c.instructions+=1;goto B74ff0f;
case 0x74ff11:goto L74ff11;
case 0x74ff14:c.instructions+=3;goto B74ff14;
case 0x74ff15:c.instructions+=2;goto B74ff15;
case 0x74ff17:c.instructions+=1;goto B74ff17;
case 0x74ff19:goto L74ff19;
case 0x74ff1d:c.instructions+=5;goto B74ff1d;
case 0x74ff20:c.instructions+=4;goto B74ff20;
case 0x74ff21:c.instructions+=3;goto B74ff21;
case 0x74ff23:c.instructions+=2;goto B74ff23;
case 0x74ff27:c.instructions+=1;goto B74ff27;
case 0x74ff29:goto L74ff29;
case 0x74ff30:goto L74ff30;
case 0x74ff32:c.instructions+=2;goto B74ff32;
case 0x74ff35:c.instructions+=1;goto B74ff35;
case 0x74ff37:goto L74ff37;
case 0x74ff3a:c.instructions+=2;goto B74ff3a;
case 0x74ff3d:c.instructions+=1;goto B74ff3d;
case 0x74ff3f:goto L74ff3f;
case 0x74ff43:c.instructions+=4;goto B74ff43;
case 0x74ff49:c.instructions+=3;goto B74ff49;
case 0x74ff4f:c.instructions+=2;goto B74ff4f;
case 0x74ff51:c.instructions+=1;goto B74ff51;
case 0x74ff53:goto L74ff53;
case 0x74ff55:c.instructions+=1;goto B74ff55;
case 0x74ff57:goto L74ff57;
case 0x74ff59:c.instructions+=4;goto B74ff59;
case 0x74ff5c:c.instructions+=3;goto B74ff5c;
case 0x74ff5d:c.instructions+=2;goto B74ff5d;
case 0x74ff5f:c.instructions+=1;goto B74ff5f;
case 0x74ff61:goto L74ff61;
case 0x74ff63:c.instructions+=1;goto B74ff63;
case 0x74ff65:goto L74ff65;
case 0x74ff68:c.instructions+=3;goto B74ff68;
case 0x74ff69:c.instructions+=2;goto B74ff69;
case 0x74ff6b:c.instructions+=1;goto B74ff6b;
case 0x74ff6d:goto L74ff6d;
case 0x74ff6e:c.instructions+=1;goto B74ff6e;
case 0x74ff70:goto L74ff70;
case 0x74ff73:c.instructions+=1;goto B74ff73;
case 0x74ff75:goto L74ff75;
case 0x74ff77:c.instructions+=1;goto B74ff77;
case 0x74ff78:goto L74ff78;
case 0x74ff7b:c.instructions+=3;goto B74ff7b;
case 0x74ff7c:c.instructions+=2;goto B74ff7c;
case 0x74ff7e:c.instructions+=1;goto B74ff7e;
case 0x74ff80:goto L74ff80;
case 0x74ff82:goto L74ff82;
case 0x74ff84:c.instructions+=1;goto B74ff84;
case 0x74ff8a:goto L74ff8a;
case 0x74ff8d:c.instructions+=4;goto B74ff8d;
case 0x74ff90:c.instructions+=3;goto B74ff90;
case 0x74ff97:c.instructions+=2;goto B74ff97;
case 0x74ff9a:c.instructions+=1;goto B74ff9a;
case 0x74ffa0:goto L74ffa0;
case 0x74ffa2:c.instructions+=3;goto B74ffa2;
case 0x74ffa3:c.instructions+=2;goto B74ffa3;
case 0x74ffa5:c.instructions+=1;goto B74ffa5;
case 0x74ffa7:goto L74ffa7;
case 0x74ffae:c.instructions+=4;goto B74ffae;
case 0x74ffb0:c.instructions+=3;goto B74ffb0;
case 0x74ffb3:c.instructions+=2;goto B74ffb3;
case 0x74ffb5:c.instructions+=1;goto B74ffb5;
case 0x74ffbb:goto L74ffbb;
case 0x74ffc2:c.instructions+=4;goto B74ffc2;
case 0x74ffc9:c.instructions+=3;goto B74ffc9;
case 0x74ffcb:c.instructions+=2;goto B74ffcb;
case 0x74ffcd:c.instructions+=1;goto B74ffcd;
case 0x74ffd0:goto L74ffd0;
case 0x74ffd2:c.instructions+=4;goto B74ffd2;
case 0x74ffd5:c.instructions+=3;goto B74ffd5;
case 0x74ffd6:c.instructions+=2;goto B74ffd6;
case 0x74ffd8:c.instructions+=1;goto B74ffd8;
case 0x74ffda:goto L74ffda;
case 0x74ffe1:c.instructions+=1;goto B74ffe1;
case 0x74ffe4:goto L74ffe4;
case 0x74ffe6:c.instructions+=3;goto B74ffe6;
case 0x74ffe7:c.instructions+=2;goto B74ffe7;
case 0x74ffe9:c.instructions+=1;goto B74ffe9;
case 0x74ffeb:goto L74ffeb;
case 0x74fff2:c.instructions+=4;goto B74fff2;
case 0x74fff4:c.instructions+=3;goto B74fff4;
case 0x74fff6:c.instructions+=2;goto B74fff6;
case 0x74fffd:c.instructions+=1;goto B74fffd;
default:missing_instruction(c.pc);}
B74f003:L74f003:{c.instructions+=3;NFSU2_TR(0x74f003);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f009:{NFSU2_TR(0x74f009);
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
B74f00b:{NFSU2_TR(0x74f00b);
if(r1(R+518)){{goto L74f023;}}
}
B74f00d:L74f00d:{c.instructions+=7;NFSU2_TR(0x74f00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f013:{NFSU2_TR(0x74f013);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f014:{NFSU2_TR(0x74f014);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74f018:{NFSU2_TR(0x74f018);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f019:{NFSU2_TR(0x74f019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f01a:{NFSU2_TR(0x74f01a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f01e:{NFSU2_TR(0x74f01e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f020ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74f020:L74f020:{c.instructions+=1;NFSU2_TR(0x74f020);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74f023:L74f023:{c.instructions+=2;NFSU2_TR(0x74f023);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f025:{NFSU2_TR(0x74f025);
if(r1(R+518)){{goto L74f128;}}
}
B74f02b:L74f02b:{c.instructions+=4;NFSU2_TR(0x74f02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f031:{NFSU2_TR(0x74f031);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f032:{NFSU2_TR(0x74f032);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f033:{NFSU2_TR(0x74f033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f038ull));
TAIL_STATIC(0x754fc0u,754);
}
B74f038:L74f038:{c.instructions+=4;NFSU2_TR(0x74f038);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f039:{NFSU2_TR(0x74f039);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f03f:{NFSU2_TR(0x74f03f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f040:{NFSU2_TR(0x74f040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f045ull));
TAIL_STATIC(0x73d890u,73d);
}
B74f045:L74f045:{c.instructions+=4;NFSU2_TR(0x74f045);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f04b:{NFSU2_TR(0x74f04b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74f04e:{NFSU2_TR(0x74f04e);
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
B74f050:{NFSU2_TR(0x74f050);
if(r1(R+518)){{goto L74f060;}}
}
B74f052:L74f052:{c.instructions+=5;NFSU2_TR(0x74f052);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f058:{NFSU2_TR(0x74f058);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f059:{NFSU2_TR(0x74f059);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f05a:{NFSU2_TR(0x74f05a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f05b:{NFSU2_TR(0x74f05b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f05dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74f05d:L74f05d:{c.instructions+=1;NFSU2_TR(0x74f05d);
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
B74f060:L74f060:{c.instructions+=2;NFSU2_TR(0x74f060);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f061:{NFSU2_TR(0x74f061);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f064ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74f064:L74f064:{c.instructions+=2;NFSU2_TR(0x74f064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74f067:{NFSU2_TR(0x74f067);
{goto L74f128;}
}
B74f06c:L74f06c:{c.instructions+=8;NFSU2_TR(0x74f06c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f070:{NFSU2_TR(0x74f070);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f075:{NFSU2_TR(0x74f075);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f077:{NFSU2_TR(0x74f077);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f07b:{NFSU2_TR(0x74f07b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f07c:{NFSU2_TR(0x74f07c);
u8 U[4];
w4(U+0,u32(0x7d2f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f081:{NFSU2_TR(0x74f081);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f082:{NFSU2_TR(0x74f082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f087ull));
TAIL_STATIC(0x7414a0u,741);
}
B74f087:L74f087:{c.instructions+=3;NFSU2_TR(0x74f087);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f08a:{NFSU2_TR(0x74f08a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f08b:{NFSU2_TR(0x74f08b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f090ull));
TAIL_STATIC(0x742360u,742);
}
B74f090:L74f090:{c.instructions+=3;NFSU2_TR(0x74f090);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74f093:{NFSU2_TR(0x74f093);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74f097:{NFSU2_TR(0x74f097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f09cull));
TAIL_STATIC(0x74bd80u,74b);
}
B74f09c:L74f09c:{c.instructions+=3;NFSU2_TR(0x74f09c);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74f0a0:{NFSU2_TR(0x74f0a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f0a2:{NFSU2_TR(0x74f0a2);
if(r1(R+518)){{goto L74f0eb;}}
}
B74f0a4:L74f0a4:{c.instructions+=3;NFSU2_TR(0x74f0a4);
__builtin_memmove((R+0),(R+24),4);
}
B74f0a6:{NFSU2_TR(0x74f0a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f0a9:{NFSU2_TR(0x74f0a9);
__builtin_memmove((R+16),(R+16),4);
}
B74f0b0:L74f0b0:{c.instructions+=4;NFSU2_TR(0x74f0b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74f0b2:{NFSU2_TR(0x74f0b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74f0b3:{NFSU2_TR(0x74f0b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f0b5:{NFSU2_TR(0x74f0b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f0b0u);}goto L74f0b0;}}
}
B74f0b7:L74f0b7:{c.instructions+=3;NFSU2_TR(0x74f0b7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74f0b9:{NFSU2_TR(0x74f0b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x21ull))));
}
B74f0bc:{NFSU2_TR(0x74f0bc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74f0eb;}}
}
B74f0be:L74f0be:{c.instructions+=4;NFSU2_TR(0x74f0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f0c4:{NFSU2_TR(0x74f0c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0c5:{NFSU2_TR(0x74f0c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0c6:{NFSU2_TR(0x74f0c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f0cbull));
TAIL_STATIC(0x754fc0u,754);
}
B74f0cb:L74f0cb:{c.instructions+=6;NFSU2_TR(0x74f0cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f0cf:{NFSU2_TR(0x74f0cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0d0:{NFSU2_TR(0x74f0d0);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0d2:{NFSU2_TR(0x74f0d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0d3:{NFSU2_TR(0x74f0d3);
__builtin_memmove((R+24),(R+0),4);
}
B74f0d5:{NFSU2_TR(0x74f0d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f0daull));
TAIL_STATIC(0x741650u,741);
}
B74f0da:L74f0da:{c.instructions+=5;NFSU2_TR(0x74f0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f0e0:{NFSU2_TR(0x74f0e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0e1:{NFSU2_TR(0x74f0e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0e2:{NFSU2_TR(0x74f0e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0e3:{NFSU2_TR(0x74f0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f0e8ull));
TAIL_STATIC(0x754f00u,754);
}
B74f0e8:L74f0e8:{c.instructions+=1;NFSU2_TR(0x74f0e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74f0eb:L74f0eb:{c.instructions+=4;NFSU2_TR(0x74f0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f0f1:{NFSU2_TR(0x74f0f1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74f0f3:{NFSU2_TR(0x74f0f3);
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
B74f0f5:{NFSU2_TR(0x74f0f5);
if(r1(R+518)){{goto L74f111;}}
}
B74f0f7:L74f0f7:{c.instructions+=8;NFSU2_TR(0x74f0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f0fd:{NFSU2_TR(0x74f0fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f0fe:{NFSU2_TR(0x74f0fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f102:{NFSU2_TR(0x74f102);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f103:{NFSU2_TR(0x74f103);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f104:{NFSU2_TR(0x74f104);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f108:{NFSU2_TR(0x74f108);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f10c:{NFSU2_TR(0x74f10c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f10eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74f10e:L74f10e:{c.instructions+=1;NFSU2_TR(0x74f10e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74f111:L74f111:{c.instructions+=4;NFSU2_TR(0x74f111);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f117:{NFSU2_TR(0x74f117);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x10000ull))));
}
B74f11c:{NFSU2_TR(0x74f11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f122:{NFSU2_TR(0x74f122);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f128:L74f128:{c.instructions+=4;NFSU2_TR(0x74f128);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f12e:{NFSU2_TR(0x74f12e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f130:{NFSU2_TR(0x74f130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f131:{NFSU2_TR(0x74f131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f136ull));
TAIL_STATIC(0x73d990u,73d);
}
B74f136:L74f136:{c.instructions+=6;NFSU2_TR(0x74f136);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f13a:{NFSU2_TR(0x74f13a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f13d:{NFSU2_TR(0x74f13d);
w4(R+20,u32(0x1ull));
}
B74f142:{NFSU2_TR(0x74f142);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74f144:{NFSU2_TR(0x74f144);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50414444ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f149:{NFSU2_TR(0x74f149);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f173;}}
}
B74f14b:L74f14b:{c.instructions+=2;NFSU2_TR(0x74f14b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f151:{NFSU2_TR(0x74f151);
if(r1(R+518)){{goto L74f4f2;}}
}
B74f157:L74f157:{c.instructions+=3;NFSU2_TR(0x74f157);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f15b:{NFSU2_TR(0x74f15b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f15d:{NFSU2_TR(0x74f15d);
if(r1(R+518)){{goto L74f168;}}
}
B74f15f:L74f15f:{c.instructions+=2;NFSU2_TR(0x74f15f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74f162:{NFSU2_TR(0x74f162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f4f2;}}
}
B74f168:L74f168:{c.instructions+=2;NFSU2_TR(0x74f168);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f16e:{NFSU2_TR(0x74f16e);
{goto L74f4f2;}
}
B74f173:L74f173:{c.instructions+=2;NFSU2_TR(0x74f173);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5044454cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f178:{NFSU2_TR(0x74f178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f1a2;}}
}
B74f17a:L74f17a:{c.instructions+=2;NFSU2_TR(0x74f17a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f180:{NFSU2_TR(0x74f180);
if(r1(R+518)){{goto L74f4f2;}}
}
B74f186:L74f186:{c.instructions+=3;NFSU2_TR(0x74f186);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f18a:{NFSU2_TR(0x74f18a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f18c:{NFSU2_TR(0x74f18c);
if(r1(R+518)){{goto L74f197;}}
}
B74f18e:L74f18e:{c.instructions+=2;NFSU2_TR(0x74f18e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74f191:{NFSU2_TR(0x74f191);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f4f2;}}
}
B74f197:L74f197:{c.instructions+=2;NFSU2_TR(0x74f197);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x92cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f19d:{NFSU2_TR(0x74f19d);
{goto L74f4f2;}
}
B74f1a2:L74f1a2:{c.instructions+=2;NFSU2_TR(0x74f1a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5244454cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f1a7:{NFSU2_TR(0x74f1a7);
if(r1(R+518)){{goto L74f1b0;}}
}
B74f1a9:L74f1a9:{c.instructions+=2;NFSU2_TR(0x74f1a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5244454dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f1ae:{NFSU2_TR(0x74f1ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f1ed;}}
}
B74f1b0:L74f1b0:{c.instructions+=17;NFSU2_TR(0x74f1b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f1b1:{NFSU2_TR(0x74f1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74f1b4:{NFSU2_TR(0x74f1b4);
w4(R+4,u32(0x64656c75ull));
}
B74f1b9:{NFSU2_TR(0x74f1b9);
__builtin_memmove((R+8),(R+16),4);
}
B74f1bb:{NFSU2_TR(0x74f1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74f1bd:{NFSU2_TR(0x74f1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f1c0:{NFSU2_TR(0x74f1c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f1c4:{NFSU2_TR(0x74f1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f1c7:{NFSU2_TR(0x74f1c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f1cb:{NFSU2_TR(0x74f1cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f1cf:{NFSU2_TR(0x74f1cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f1d3:{NFSU2_TR(0x74f1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f1d6:{NFSU2_TR(0x74f1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f1da:{NFSU2_TR(0x74f1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f1dd:{NFSU2_TR(0x74f1dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f1de:{NFSU2_TR(0x74f1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f1e1:{NFSU2_TR(0x74f1e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f1e6ull));
TAIL_STATIC(0x74ca80u,74c);
}
B74f1e6:L74f1e6:{c.instructions+=2;NFSU2_TR(0x74f1e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f1ea:{NFSU2_TR(0x74f1ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74f1ed:L74f1ed:{c.instructions+=2;NFSU2_TR(0x74f1ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x52525350ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f1f2:{NFSU2_TR(0x74f1f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f232;}}
}
B74f1f4:L74f1f4:{c.instructions+=17;NFSU2_TR(0x74f1f4);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f1f6:{NFSU2_TR(0x74f1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74f1f9:{NFSU2_TR(0x74f1f9);
w4(R+4,u32(0x696e7674ull));
}
B74f1fe:{NFSU2_TR(0x74f1fe);
__builtin_memmove((R+8),(R+16),4);
}
B74f200:{NFSU2_TR(0x74f200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74f202:{NFSU2_TR(0x74f202);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f205:{NFSU2_TR(0x74f205);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f209:{NFSU2_TR(0x74f209);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f20c:{NFSU2_TR(0x74f20c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f210:{NFSU2_TR(0x74f210);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f214:{NFSU2_TR(0x74f214);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f218:{NFSU2_TR(0x74f218);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f21b:{NFSU2_TR(0x74f21b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f21f:{NFSU2_TR(0x74f21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f222:{NFSU2_TR(0x74f222);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f223:{NFSU2_TR(0x74f223);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f226:{NFSU2_TR(0x74f226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f22bull));
TAIL_STATIC(0x74ca80u,74c);
}
B74f22b:L74f22b:{c.instructions+=2;NFSU2_TR(0x74f22b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f22f:{NFSU2_TR(0x74f22f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74f232:L74f232:{c.instructions+=2;NFSU2_TR(0x74f232);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x47525350ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f237:{NFSU2_TR(0x74f237);
if(r1(R+518)){{goto L74f240;}}
}
B74f239:L74f239:{c.instructions+=2;NFSU2_TR(0x74f239);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4752564bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f23e:{NFSU2_TR(0x74f23e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f27e;}}
}
B74f240:L74f240:{c.instructions+=17;NFSU2_TR(0x74f240);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f242:{NFSU2_TR(0x74f242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74f245:{NFSU2_TR(0x74f245);
w4(R+4,u32(0x67696e76ull));
}
B74f24a:{NFSU2_TR(0x74f24a);
__builtin_memmove((R+8),(R+16),4);
}
B74f24c:{NFSU2_TR(0x74f24c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74f24e:{NFSU2_TR(0x74f24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f251:{NFSU2_TR(0x74f251);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f255:{NFSU2_TR(0x74f255);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f258:{NFSU2_TR(0x74f258);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f25c:{NFSU2_TR(0x74f25c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f260:{NFSU2_TR(0x74f260);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f264:{NFSU2_TR(0x74f264);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f267:{NFSU2_TR(0x74f267);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f26b:{NFSU2_TR(0x74f26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f26e:{NFSU2_TR(0x74f26e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f26f:{NFSU2_TR(0x74f26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f272:{NFSU2_TR(0x74f272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f277ull));
TAIL_STATIC(0x74ca80u,74c);
}
B74f277:L74f277:{c.instructions+=2;NFSU2_TR(0x74f277);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f27b:{NFSU2_TR(0x74f27b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74f27e:L74f27e:{c.instructions+=2;NFSU2_TR(0x74f27e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x47494e56ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f283:{NFSU2_TR(0x74f283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f2c3;}}
}
B74f285:L74f285:{c.instructions+=17;NFSU2_TR(0x74f285);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f287:{NFSU2_TR(0x74f287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74f28a:{NFSU2_TR(0x74f28a);
w4(R+4,u32(0x67696e76ull));
}
B74f28f:{NFSU2_TR(0x74f28f);
__builtin_memmove((R+8),(R+16),4);
}
B74f291:{NFSU2_TR(0x74f291);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74f293:{NFSU2_TR(0x74f293);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f296:{NFSU2_TR(0x74f296);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f29a:{NFSU2_TR(0x74f29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f29d:{NFSU2_TR(0x74f29d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f2a1:{NFSU2_TR(0x74f2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2a5:{NFSU2_TR(0x74f2a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f2a9:{NFSU2_TR(0x74f2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2ac:{NFSU2_TR(0x74f2ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f2b0:{NFSU2_TR(0x74f2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2b3:{NFSU2_TR(0x74f2b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f2b4:{NFSU2_TR(0x74f2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2b7:{NFSU2_TR(0x74f2b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f2bcull));
TAIL_STATIC(0x74ca80u,74c);
}
B74f2bc:L74f2bc:{c.instructions+=2;NFSU2_TR(0x74f2bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f2c0:{NFSU2_TR(0x74f2c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74f2c3:L74f2c3:{c.instructions+=2;NFSU2_TR(0x74f2c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x474e4f54ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f2c8:{NFSU2_TR(0x74f2c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f319;}}
}
B74f2ca:L74f2ca:{c.instructions+=15;NFSU2_TR(0x74f2ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f2ce:{NFSU2_TR(0x74f2ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74f2d1:{NFSU2_TR(0x74f2d1);
__builtin_memmove((R+8),(R+16),4);
}
B74f2d3:{NFSU2_TR(0x74f2d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74f2d5:{NFSU2_TR(0x74f2d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f2d9:{NFSU2_TR(0x74f2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2dc:{NFSU2_TR(0x74f2dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f2e0:{NFSU2_TR(0x74f2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2e3:{NFSU2_TR(0x74f2e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f2e7:{NFSU2_TR(0x74f2e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2ea:{NFSU2_TR(0x74f2ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f2ee:{NFSU2_TR(0x74f2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2f1:{NFSU2_TR(0x74f2f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f2f2:{NFSU2_TR(0x74f2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f2f5:{NFSU2_TR(0x74f2f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f2faull));
TAIL_STATIC(0x74e100u,74e);
}
B74f2fa:L74f2fa:{c.instructions+=3;NFSU2_TR(0x74f2fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74f2fd:{NFSU2_TR(0x74f2fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f2ff:{NFSU2_TR(0x74f2ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f315;}}
}
B74f301:L74f301:{c.instructions+=3;NFSU2_TR(0x74f301);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f307:{NFSU2_TR(0x74f307);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f309:{NFSU2_TR(0x74f309);
if(r1(R+518)){{goto L74f315;}}
}
B74f30b:L74f30b:{c.instructions+=3;NFSU2_TR(0x74f30b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f30c:{NFSU2_TR(0x74f30c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f30d:{NFSU2_TR(0x74f30d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f312ull));
TAIL_STATIC(0x73d990u,73d);
}
B74f312:L74f312:{c.instructions+=1;NFSU2_TR(0x74f312);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f315:L74f315:{c.instructions+=1;NFSU2_TR(0x74f315);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f319:L74f319:{c.instructions+=2;NFSU2_TR(0x74f319);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45505354ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f31e:{NFSU2_TR(0x74f31e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f35e;}}
}
B74f320:L74f320:{c.instructions+=17;NFSU2_TR(0x74f320);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f322:{NFSU2_TR(0x74f322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74f325:{NFSU2_TR(0x74f325);
w4(R+4,u32(0x65707374ull));
}
B74f32a:{NFSU2_TR(0x74f32a);
__builtin_memmove((R+8),(R+16),4);
}
B74f32c:{NFSU2_TR(0x74f32c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74f32e:{NFSU2_TR(0x74f32e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f331:{NFSU2_TR(0x74f331);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f335:{NFSU2_TR(0x74f335);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f338:{NFSU2_TR(0x74f338);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f33c:{NFSU2_TR(0x74f33c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f340:{NFSU2_TR(0x74f340);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f344:{NFSU2_TR(0x74f344);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f347:{NFSU2_TR(0x74f347);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f34b:{NFSU2_TR(0x74f34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f34e:{NFSU2_TR(0x74f34e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f34f:{NFSU2_TR(0x74f34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f352:{NFSU2_TR(0x74f352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f357ull));
TAIL_STATIC(0x74ca80u,74c);
}
B74f357:L74f357:{c.instructions+=2;NFSU2_TR(0x74f357);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f35b:{NFSU2_TR(0x74f35b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74f35e:L74f35e:{c.instructions+=2;NFSU2_TR(0x74f35e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45504754ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f363:{NFSU2_TR(0x74f363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f419;}}
}
B74f369:L74f369:{c.instructions+=5;NFSU2_TR(0x74f369);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f36d:{NFSU2_TR(0x74f36d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f36e:{NFSU2_TR(0x74f36e);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f373:{NFSU2_TR(0x74f373);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f374:{NFSU2_TR(0x74f374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f379ull));
TAIL_STATIC(0x7414a0u,741);
}
B74f379:L74f379:{c.instructions+=3;NFSU2_TR(0x74f379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f37c:{NFSU2_TR(0x74f37c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f37d:{NFSU2_TR(0x74f37d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f382ull));
TAIL_STATIC(0x7420b0u,742);
}
B74f382:L74f382:{c.instructions+=3;NFSU2_TR(0x74f382);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f385:{NFSU2_TR(0x74f385);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f388:{NFSU2_TR(0x74f388);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f415;}}
}
B74f38e:L74f38e:{c.instructions+=2;NFSU2_TR(0x74f38e);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f392:{NFSU2_TR(0x74f392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f415;}}
}
B74f398:L74f398:{c.instructions+=11;NFSU2_TR(0x74f398);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f39e:{NFSU2_TR(0x74f39e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f3a2:{NFSU2_TR(0x74f3a2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffeffull))));
}
B74f3a7:{NFSU2_TR(0x74f3a7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3ac:{NFSU2_TR(0x74f3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f3b2:{NFSU2_TR(0x74f3b2);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3b7:{NFSU2_TR(0x74f3b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74f3bd:{NFSU2_TR(0x74f3bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3be:{NFSU2_TR(0x74f3be);
u8 U[4];
w4(U+0,u32(0x7a12ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3c3:{NFSU2_TR(0x74f3c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3c4:{NFSU2_TR(0x74f3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f3c9ull));
TAIL_STATIC(0x7414a0u,741);
}
B74f3c9:L74f3c9:{c.instructions+=3;NFSU2_TR(0x74f3c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f3cc:{NFSU2_TR(0x74f3cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3cd:{NFSU2_TR(0x74f3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f3d2ull));
TAIL_STATIC(0x742360u,742);
}
B74f3d2:L74f3d2:{c.instructions+=9;NFSU2_TR(0x74f3d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f3d6:{NFSU2_TR(0x74f3d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74f3d9:{NFSU2_TR(0x74f3d9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3de:{NFSU2_TR(0x74f3de);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3e0:{NFSU2_TR(0x74f3e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f3e4:{NFSU2_TR(0x74f3e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3e5:{NFSU2_TR(0x74f3e5);
u8 U[4];
w4(U+0,u32(0x7d2f8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3ea:{NFSU2_TR(0x74f3ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3eb:{NFSU2_TR(0x74f3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f3f0ull));
TAIL_STATIC(0x7414a0u,741);
}
B74f3f0:L74f3f0:{c.instructions+=3;NFSU2_TR(0x74f3f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f3f3:{NFSU2_TR(0x74f3f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f3f4:{NFSU2_TR(0x74f3f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f3f9ull));
TAIL_STATIC(0x742360u,742);
}
B74f3f9:L74f3f9:{c.instructions+=4;NFSU2_TR(0x74f3f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74f3fd:{NFSU2_TR(0x74f3fd);
u8 U[4];
w4(U+0,u32(0x7a1784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f402:{NFSU2_TR(0x74f402);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f403:{NFSU2_TR(0x74f403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f408ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B74f408:L74f408:{c.instructions+=3;NFSU2_TR(0x74f408);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74f40b:{NFSU2_TR(0x74f40b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f40d:{NFSU2_TR(0x74f40d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f415;}}
}
B74f40f:L74f40f:{c.instructions+=1;NFSU2_TR(0x74f40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B74f415:L74f415:{c.instructions+=1;NFSU2_TR(0x74f415);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f419:L74f419:{c.instructions+=2;NFSU2_TR(0x74f419);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x55534348ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f41e:{NFSU2_TR(0x74f41e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f4ae;}}
}
B74f424:L74f424:{c.instructions+=5;NFSU2_TR(0x74f424);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f428:{NFSU2_TR(0x74f428);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f429:{NFSU2_TR(0x74f429);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f42e:{NFSU2_TR(0x74f42e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f42f:{NFSU2_TR(0x74f42f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f434ull));
TAIL_STATIC(0x7414a0u,741);
}
B74f434:L74f434:{c.instructions+=3;NFSU2_TR(0x74f434);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f437:{NFSU2_TR(0x74f437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f438:{NFSU2_TR(0x74f438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f43dull));
TAIL_STATIC(0x7420b0u,742);
}
B74f43d:L74f43d:{c.instructions+=3;NFSU2_TR(0x74f43d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f440:{NFSU2_TR(0x74f440);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f443:{NFSU2_TR(0x74f443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f4aa;}}
}
B74f445:L74f445:{c.instructions+=3;NFSU2_TR(0x74f445);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f449:{NFSU2_TR(0x74f449);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f44b:{NFSU2_TR(0x74f44b);
if(r1(R+518)){{goto L74f488;}}
}
B74f44d:L74f44d:{c.instructions+=2;NFSU2_TR(0x74f44d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73757372ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f452:{NFSU2_TR(0x74f452);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f45c;}}
}
B74f454:L74f454:{c.instructions+=2;NFSU2_TR(0x74f454);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f45a:{NFSU2_TR(0x74f45a);
{goto L74f4aa;}
}
B74f45c:L74f45c:{c.instructions+=4;NFSU2_TR(0x74f45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f462:{NFSU2_TR(0x74f462);
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
B74f464:{NFSU2_TR(0x74f464);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x75736572ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74f46c:{NFSU2_TR(0x74f46c);
if(r1(R+518)){{goto L74f480;}}
}
B74f46e:L74f46e:{c.instructions+=6;NFSU2_TR(0x74f46e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f474:{NFSU2_TR(0x74f474);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f475:{NFSU2_TR(0x74f475);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f479:{NFSU2_TR(0x74f479);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f47a:{NFSU2_TR(0x74f47a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f47b:{NFSU2_TR(0x74f47b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f47dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74f47d:L74f47d:{c.instructions+=1;NFSU2_TR(0x74f47d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74f480:L74f480:{c.instructions+=2;NFSU2_TR(0x74f480);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f486:{NFSU2_TR(0x74f486);
{goto L74f4aa;}
}
B74f488:L74f488:{c.instructions+=5;NFSU2_TR(0x74f488);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f48c:{NFSU2_TR(0x74f48c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f48d:{NFSU2_TR(0x74f48d);
u8 U[4];
w4(U+0,u32(0x7a38bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f492:{NFSU2_TR(0x74f492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f493:{NFSU2_TR(0x74f493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f498ull));
TAIL_STATIC(0x7414a0u,741);
}
B74f498:L74f498:{c.instructions+=3;NFSU2_TR(0x74f498);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f49b:{NFSU2_TR(0x74f49b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f49c:{NFSU2_TR(0x74f49c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f4a1ull));
TAIL_STATIC(0x7420b0u,742);
}
B74f4a1:L74f4a1:{c.instructions+=2;NFSU2_TR(0x74f4a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f4a4:{NFSU2_TR(0x74f4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f4aa:L74f4aa:{c.instructions+=1;NFSU2_TR(0x74f4aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f4ae:L74f4ae:{c.instructions+=2;NFSU2_TR(0x74f4ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x55534552ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f4b3:{NFSU2_TR(0x74f4b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f4f2;}}
}
B74f4b5:L74f4b5:{c.instructions+=15;NFSU2_TR(0x74f4b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f4b9:{NFSU2_TR(0x74f4b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74f4bc:{NFSU2_TR(0x74f4bc);
__builtin_memmove((R+4),(R+16),4);
}
B74f4be:{NFSU2_TR(0x74f4be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B74f4c0:{NFSU2_TR(0x74f4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f4c4:{NFSU2_TR(0x74f4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f4c7:{NFSU2_TR(0x74f4c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f4cb:{NFSU2_TR(0x74f4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f4ce:{NFSU2_TR(0x74f4ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f4d2:{NFSU2_TR(0x74f4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f4d5:{NFSU2_TR(0x74f4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f4d9:{NFSU2_TR(0x74f4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f4dc:{NFSU2_TR(0x74f4dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f4dd:{NFSU2_TR(0x74f4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f4e0:{NFSU2_TR(0x74f4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f4e5ull));
TAIL_STATIC(0x74ce10u,74c);
}
B74f4e5:L74f4e5:{c.instructions+=3;NFSU2_TR(0x74f4e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74f4e8:{NFSU2_TR(0x74f4e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f4ea:{NFSU2_TR(0x74f4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f4f2;}}
}
B74f4ec:L74f4ec:{c.instructions+=1;NFSU2_TR(0x74f4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74f4f2:L74f4f2:{c.instructions+=2;NFSU2_TR(0x74f4f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f4f8:{NFSU2_TR(0x74f4f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f530;}}
}
B74f4fa:L74f4fa:{c.instructions+=3;NFSU2_TR(0x74f4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f500:{NFSU2_TR(0x74f500);
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
B74f502:{NFSU2_TR(0x74f502);
if(r1(R+518)){{goto L74f530;}}
}
B74f504:L74f504:{c.instructions+=10;NFSU2_TR(0x74f504);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f50a:{NFSU2_TR(0x74f50a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f50b:{NFSU2_TR(0x74f50b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f50f:{NFSU2_TR(0x74f50f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f510:{NFSU2_TR(0x74f510);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f511:{NFSU2_TR(0x74f511);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x75736572ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74f519:{NFSU2_TR(0x74f519);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f51d:{NFSU2_TR(0x74f51d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f521:{NFSU2_TR(0x74f521);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f525:{NFSU2_TR(0x74f525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f527ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74f527:L74f527:{c.instructions+=2;NFSU2_TR(0x74f527);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74f52a:{NFSU2_TR(0x74f52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f530:L74f530:{c.instructions+=7;NFSU2_TR(0x74f530);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f533:{NFSU2_TR(0x74f533);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f534:{NFSU2_TR(0x74f534);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f535:{NFSU2_TR(0x74f535);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f536:{NFSU2_TR(0x74f536);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f537:{NFSU2_TR(0x74f537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f538:{NFSU2_TR(0x74f538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f53dull));
TAIL_STATIC(0x754bd0u,754);
}
B74f53d:L74f53d:{c.instructions+=9;NFSU2_TR(0x74f53d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74f541:{NFSU2_TR(0x74f541);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f542:{NFSU2_TR(0x74f542);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f545:{NFSU2_TR(0x74f545);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f549:{NFSU2_TR(0x74f549);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f54a:{NFSU2_TR(0x74f54a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f54e:{NFSU2_TR(0x74f54e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f54f:{NFSU2_TR(0x74f54f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f550:{NFSU2_TR(0x74f550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f555ull));
TAIL_STATIC(0x754b10u,754);
}
B74f555:L74f555:{c.instructions+=3;NFSU2_TR(0x74f555);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B74f558:{NFSU2_TR(0x74f558);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B74f55a:{NFSU2_TR(0x74f55a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x74eb44u,74e);}
}
B74f560:L74f560:{c.instructions+=2;NFSU2_TR(0x74f560);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f566:{NFSU2_TR(0x74f566);
if(r1(R+518)){{goto L74f582;}}
}
B74f568:L74f568:{c.instructions+=2;NFSU2_TR(0x74f568);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f56c:{NFSU2_TR(0x74f56c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f582;}}
}
B74f56e:L74f56e:{c.instructions+=3;NFSU2_TR(0x74f56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f574:{NFSU2_TR(0x74f574);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f576:{NFSU2_TR(0x74f576);
if(r1(R+518)){{goto L74f582;}}
}
B74f578:L74f578:{c.instructions+=3;NFSU2_TR(0x74f578);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f579:{NFSU2_TR(0x74f579);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f57a:{NFSU2_TR(0x74f57a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f57full));
TAIL_STATIC(0x73d990u,73d);
}
B74f57f:L74f57f:{c.instructions+=1;NFSU2_TR(0x74f57f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74f582:L74f582:{c.instructions+=2;NFSU2_TR(0x74f582);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f588:{NFSU2_TR(0x74f588);
if(r1(R+518)){{goto L74f5cd;}}
}
B74f58a:L74f58a:{c.instructions+=3;NFSU2_TR(0x74f58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f590:{NFSU2_TR(0x74f590);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f591:{NFSU2_TR(0x74f591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f596ull));
TAIL_STATIC(0x73d9b0u,73d);
}
B74f596:L74f596:{c.instructions+=3;NFSU2_TR(0x74f596);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74f599:{NFSU2_TR(0x74f599);
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
B74f59b:{NFSU2_TR(0x74f59b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74f5cd;}}
}
B74f59d:L74f59d:{c.instructions+=11;NFSU2_TR(0x74f59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f5a3:{NFSU2_TR(0x74f5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f5a9:{NFSU2_TR(0x74f5a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f5aa:{NFSU2_TR(0x74f5aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f5ae:{NFSU2_TR(0x74f5ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f5af:{NFSU2_TR(0x74f5af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f5b0:{NFSU2_TR(0x74f5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x726f7374ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74f5b8:{NFSU2_TR(0x74f5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f5bc:{NFSU2_TR(0x74f5bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f5c0:{NFSU2_TR(0x74f5c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f5c4:{NFSU2_TR(0x74f5c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f5caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74f5ca:L74f5ca:{c.instructions+=1;NFSU2_TR(0x74f5ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74f5cd:L74f5cd:{c.instructions+=3;NFSU2_TR(0x74f5cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f5d4:{NFSU2_TR(0x74f5d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f5d8:{NFSU2_TR(0x74f5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f5ddull));
TAIL_STATIC(0x76115eu,761);
}
B74f5dd:L74f5dd:{c.instructions+=6;NFSU2_TR(0x74f5dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74f5de:{NFSU2_TR(0x74f5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74f5df:{NFSU2_TR(0x74f5df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74f5e0:{NFSU2_TR(0x74f5e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74f5e1:{NFSU2_TR(0x74f5e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74f5e7:{NFSU2_TR(0x74f5e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74f5f0:L74f5f0:{c.instructions+=2;NFSU2_TR(0x74f5f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f5f2:{NFSU2_TR(0x74f5f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f5f7ull));
TAIL_STATIC(0x76133au,761);
}
B74f5f7:L74f5f7:{c.instructions+=2;NFSU2_TR(0x74f5f7);
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
B74f5fa:{NFSU2_TR(0x74f5fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74f600:L74f600:{c.instructions+=3;NFSU2_TR(0x74f600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f601:{NFSU2_TR(0x74f601);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f602:{NFSU2_TR(0x74f602);
__builtin_memmove((R+24),(R+0),4);
}
B74f604:L74f604:{c.instructions+=4;NFSU2_TR(0x74f604);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74f606:{NFSU2_TR(0x74f606);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74f607:{NFSU2_TR(0x74f607);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B74f60a:{NFSU2_TR(0x74f60a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74f614;}}
}
B74f60c:L74f60c:{c.instructions+=2;NFSU2_TR(0x74f60c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74f60f:{NFSU2_TR(0x74f60f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74f614;}}
}
B74f611:L74f611:{c.instructions+=1;NFSU2_TR(0x74f611);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x20ull))));
}
B74f614:L74f614:{c.instructions+=4;NFSU2_TR(0x74f614);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74f616:{NFSU2_TR(0x74f616);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74f617:{NFSU2_TR(0x74f617);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B74f619:{NFSU2_TR(0x74f619);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74f621;}}
}
B74f61b:L74f61b:{c.instructions+=2;NFSU2_TR(0x74f61b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f61d:{NFSU2_TR(0x74f61d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74f621;}}
}
B74f61f:L74f61f:{c.instructions+=1;NFSU2_TR(0x74f61f);
w1(R+0,u8(u32(r1(R+0))^u32(u8(0x20ull))));
}
B74f621:L74f621:{c.instructions+=5;NFSU2_TR(0x74f621);
w4(R+28,u32(s32(s8(r1(R+0)))));
}
B74f624:{NFSU2_TR(0x74f624);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B74f627:{NFSU2_TR(0x74f627);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B74f629:{NFSU2_TR(0x74f629);
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
B74f62b:{NFSU2_TR(0x74f62b);
if(r1(R+518)){{goto L74f631;}}
}
B74f62d:L74f62d:{c.instructions+=2;NFSU2_TR(0x74f62d);
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
B74f62f:{NFSU2_TR(0x74f62f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f604u);}goto L74f604;}}
}
B74f631:L74f631:{c.instructions+=3;NFSU2_TR(0x74f631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74f632:{NFSU2_TR(0x74f632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74f633:{NFSU2_TR(0x74f633);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74f640:L74f640:{c.instructions+=11;NFSU2_TR(0x74f640);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f641:{NFSU2_TR(0x74f641);
__builtin_memmove((R+20),(R+16),4);
}
B74f643:{NFSU2_TR(0x74f643);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B74f646:{NFSU2_TR(0x74f646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18cull))));
}
B74f64c:{NFSU2_TR(0x74f64c);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74f651:{NFSU2_TR(0x74f651);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f652:{NFSU2_TR(0x74f652);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f659:{NFSU2_TR(0x74f659);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74f65b:{NFSU2_TR(0x74f65b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f65d:{NFSU2_TR(0x74f65d);
w4(R+4,u32(0x60ull));
}
B74f662:{NFSU2_TR(0x74f662);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74f666:L74f666:{c.instructions+=1;NFSU2_TR(0x74f666);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74f668;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f666u);}goto L74f666;}
}
B74f668:L74f668:{c.instructions+=13;NFSU2_TR(0x74f668);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B74f66b:{NFSU2_TR(0x74f66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f66e:{NFSU2_TR(0x74f66e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f66f:{NFSU2_TR(0x74f66f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f671:{NFSU2_TR(0x74f671);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f676:{NFSU2_TR(0x74f676);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74f67a:{NFSU2_TR(0x74f67a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f67b:{NFSU2_TR(0x74f67b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f67c:{NFSU2_TR(0x74f67c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x67ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74f681:{NFSU2_TR(0x74f681);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
w1(U+4,u8(0x45ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74f686:{NFSU2_TR(0x74f686);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w1(U+4,u8(0x41ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74f68b:{NFSU2_TR(0x74f68b);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x3full));
s1(u32(r4(U+0)),r1(U+4));
}
B74f690:{NFSU2_TR(0x74f690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f695ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B74f695:L74f695:{c.instructions+=3;NFSU2_TR(0x74f695);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f69c:{NFSU2_TR(0x74f69c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74f69f:{NFSU2_TR(0x74f69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f6a4ull));
TAIL_STATIC(0x76115eu,761);
}
B74f6a4:L74f6a4:{c.instructions+=4;NFSU2_TR(0x74f6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74f6a5:{NFSU2_TR(0x74f6a5);
__builtin_memmove((R+16),(R+20),4);
}
B74f6a7:{NFSU2_TR(0x74f6a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74f6a8:{NFSU2_TR(0x74f6a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74f6b0:L74f6b0:{c.instructions+=7;NFSU2_TR(0x74f6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1acull))));
}
B74f6b6:{NFSU2_TR(0x74f6b6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74f6bb:{NFSU2_TR(0x74f6bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f6bc:{NFSU2_TR(0x74f6bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74f6c3:{NFSU2_TR(0x74f6c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f6c4:{NFSU2_TR(0x74f6c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f6cb:{NFSU2_TR(0x74f6cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f6d0ull));
TAIL_STATIC(0x74b790u,74b);
}
B74f6d0:L74f6d0:{c.instructions+=3;NFSU2_TR(0x74f6d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74f6d3:{NFSU2_TR(0x74f6d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f6d5:{NFSU2_TR(0x74f6d5);
if(r1(R+518)){{goto L74fa80;}}
}
B74f6db:L74f6db:{c.instructions+=7;NFSU2_TR(0x74f6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f6de:{NFSU2_TR(0x74f6de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f6df:{NFSU2_TR(0x74f6df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f6e0:{NFSU2_TR(0x74f6e0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74f6e2:{NFSU2_TR(0x74f6e2);
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
B74f6e4:{NFSU2_TR(0x74f6e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f6e5:{NFSU2_TR(0x74f6e5);
if(r1(R+518)){{goto L74f98e;}}
}
B74f6eb:L74f6eb:{c.instructions+=1;NFSU2_TR(0x74f6eb);
{goto L74f6f0;}
}
B74f6f0:L74f6f0:{c.instructions+=2;NFSU2_TR(0x74f6f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f6f3:{NFSU2_TR(0x74f6f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74f6ff;}}
}
B74f6f5:L74f6f5:{c.instructions+=3;NFSU2_TR(0x74f6f5);
__builtin_memmove((R+8),(R+12),4);
}
B74f6f7:{NFSU2_TR(0x74f6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f6fa:{NFSU2_TR(0x74f6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f6ffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f640u);}goto L74f640;}
}
B74f6ff:L74f6ff:{c.instructions+=13;NFSU2_TR(0x74f6ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f703:{NFSU2_TR(0x74f703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f704:{NFSU2_TR(0x74f704);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f707:{NFSU2_TR(0x74f707);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74f70b:{NFSU2_TR(0x74f70b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f70c:{NFSU2_TR(0x74f70c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f70d:{NFSU2_TR(0x74f70d);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f712:{NFSU2_TR(0x74f712);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f716:{NFSU2_TR(0x74f716);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f717:{NFSU2_TR(0x74f717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f718:{NFSU2_TR(0x74f718);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74f71d:{NFSU2_TR(0x74f71d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74f725:{NFSU2_TR(0x74f725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f72aull));
TAIL_STATIC(0x74a6d0u,74a);
}
B74f72a:L74f72a:{c.instructions+=3;NFSU2_TR(0x74f72a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74f72d:{NFSU2_TR(0x74f72d);
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
B74f72f:{NFSU2_TR(0x74f72f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74f98e;}}
}
B74f735:L74f735:{c.instructions+=3;NFSU2_TR(0x74f735);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74f739:{NFSU2_TR(0x74f739);
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
B74f73b:{NFSU2_TR(0x74f73b);
if(r1(R+518)){{goto L74f98e;}}
}
B74f741:L74f741:{c.instructions+=7;NFSU2_TR(0x74f741);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f743:{NFSU2_TR(0x74f743);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74f747:{NFSU2_TR(0x74f747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f748:{NFSU2_TR(0x74f748);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74f74c:{NFSU2_TR(0x74f74c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f74e:{NFSU2_TR(0x74f74e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f74f:{NFSU2_TR(0x74f74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f754ull));
TAIL_STATIC(0x74ab20u,74a);
}
B74f754:L74f754:{c.instructions+=5;NFSU2_TR(0x74f754);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B74f759:{NFSU2_TR(0x74f759);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74f75c:{NFSU2_TR(0x74f75c);
u8 U[10];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B74f761:{NFSU2_TR(0x74f761);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f765:{NFSU2_TR(0x74f765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f788;}}
}
B74f767:L74f767:{c.instructions+=2;NFSU2_TR(0x74f767);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x2ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B74f76b:{NFSU2_TR(0x74f76b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f788;}}
}
B74f76d:L74f76d:{c.instructions+=4;NFSU2_TR(0x74f76d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B74f76f:{NFSU2_TR(0x74f76f);
w4(R+4,u32(0x3ull));
}
B74f774:{NFSU2_TR(0x74f774);
u8 U[4];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74f778:{NFSU2_TR(0x74f778);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B74f77c:L74f77c:{c.instructions+=1;NFSU2_TR(0x74f77c);
u8 U[47];
w1(U+36,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+36)){{goto L74f77f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+34),gp(u32(r4(U+18))),2);
__builtin_memmove((U+41),(U+34),2);
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+43),(U+16),2);
w1(R+512,u8((r2(U+43))<(r2(U+41))));
w1(R+523,sborrow<u16>(r2(U+43),r2(U+41)));
w2(U+45,u16(u32(r2(U+43))-u32(r2(U+41))));
w1(R+519,u8(s16(r2(U+45))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+45))==(u16(0x0ull))));
w2(U+37,u16(u32(r2(U+45))&u32(u16(0xffull))));
w1(U+39,u8(__builtin_popcountll(u64(r2(U+37)))));
w1(U+40,u8(u32(r1(U+39))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+40))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f77cu);}goto L74f77c;}}
}
B74f77f:L74f77f:{c.instructions+=3;NFSU2_TR(0x74f77f);
__builtin_memmove((R+8),(R+0),4);
}
B74f781:{NFSU2_TR(0x74f781);
__builtin_memmove((R+8),(R+518),1);
}
B74f784:{NFSU2_TR(0x74f784);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f788:L74f788:{c.instructions+=2;NFSU2_TR(0x74f788);
u8 U[7];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x67ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74f78d:{NFSU2_TR(0x74f78d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f981;}}
}
B74f793:L74f793:{c.instructions+=2;NFSU2_TR(0x74f793);
u8 U[7];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x45ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74f798:{NFSU2_TR(0x74f798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f981;}}
}
B74f79e:L74f79e:{c.instructions+=2;NFSU2_TR(0x74f79e);
u8 U[7];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x41ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74f7a3:{NFSU2_TR(0x74f7a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f981;}}
}
B74f7a9:L74f7a9:{c.instructions+=2;NFSU2_TR(0x74f7a9);
u8 U[7];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3full))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74f7ae:{NFSU2_TR(0x74f7ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f7ed;}}
}
B74f7b0:L74f7b0:{c.instructions+=3;NFSU2_TR(0x74f7b0);
u8 U[5];
w4(U+0,u32(u32(u32(0x41ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74f7b4:{NFSU2_TR(0x74f7b4);
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
B74f7b6:{NFSU2_TR(0x74f7b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f7ed;}}
}
B74f7b8:L74f7b8:{c.instructions+=1;NFSU2_TR(0x74f7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f7bdull));
TAIL_STATIC(0x74b730u,74b);
}
B74f7bd:L74f7bd:{c.instructions+=4;NFSU2_TR(0x74f7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f7c0:{NFSU2_TR(0x74f7c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3e8ull))));
}
B74f7c5:{NFSU2_TR(0x74f7c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f7c7:{NFSU2_TR(0x74f7c7);
if(r1(R+518)){{goto L74f981;}}
}
B74f7cd:L74f7cd:{c.instructions+=1;NFSU2_TR(0x74f7cd);
__builtin_memmove((R+4),(R+4),4);
}
B74f7d0:L74f7d0:{c.instructions+=2;NFSU2_TR(0x74f7d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f7d6:{NFSU2_TR(0x74f7d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74f7de;}}
}
B74f7d8:L74f7d8:{c.instructions+=1;NFSU2_TR(0x74f7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f7de:L74f7de:{c.instructions+=3;NFSU2_TR(0x74f7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f7e4:{NFSU2_TR(0x74f7e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f7e6:{NFSU2_TR(0x74f7e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f7d0u);}goto L74f7d0;}}
}
B74f7e8:L74f7e8:{c.instructions+=1;NFSU2_TR(0x74f7e8);
{goto L74f981;}
}
B74f7ed:L74f7ed:{c.instructions+=3;NFSU2_TR(0x74f7ed);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74f7f1:{NFSU2_TR(0x74f7f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f7f3:{NFSU2_TR(0x74f7f3);
if(r1(R+518)){{goto L74f981;}}
}
B74f7f9:L74f7f9:{c.instructions+=5;NFSU2_TR(0x74f7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74f7fc:{NFSU2_TR(0x74f7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74f7ff:{NFSU2_TR(0x74f7ff);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B74f801:{NFSU2_TR(0x74f801);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f803:{NFSU2_TR(0x74f803);
if(r1(R+518)){{goto L74f861;}}
}
B74f805:L74f805:{c.instructions+=2;NFSU2_TR(0x74f805);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f807:{NFSU2_TR(0x74f807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f812;}}
}
B74f809:L74f809:{c.instructions+=3;NFSU2_TR(0x74f809);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74f80c:{NFSU2_TR(0x74f80c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f80e:{NFSU2_TR(0x74f80e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f812;}}
}
B74f810:L74f810:{c.instructions+=1;NFSU2_TR(0x74f810);
__builtin_memmove((R+20),(R+24),4);
}
B74f812:L74f812:{c.instructions+=3;NFSU2_TR(0x74f812);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f815:{NFSU2_TR(0x74f815);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f819:{NFSU2_TR(0x74f819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f81eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74f81e:L74f81e:{c.instructions+=2;NFSU2_TR(0x74f81e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f820:{NFSU2_TR(0x74f820);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f850;}}
}
B74f822:L74f822:{c.instructions+=3;NFSU2_TR(0x74f822);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f825:{NFSU2_TR(0x74f825);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f829:{NFSU2_TR(0x74f829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f82eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74f82e:L74f82e:{c.instructions+=2;NFSU2_TR(0x74f82e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f830:{NFSU2_TR(0x74f830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f850;}}
}
B74f832:L74f832:{c.instructions+=3;NFSU2_TR(0x74f832);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f835:{NFSU2_TR(0x74f835);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f83c:{NFSU2_TR(0x74f83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f841ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74f841:L74f841:{c.instructions+=2;NFSU2_TR(0x74f841);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f843:{NFSU2_TR(0x74f843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f850;}}
}
B74f845:L74f845:{c.instructions+=4;NFSU2_TR(0x74f845);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f849:{NFSU2_TR(0x74f849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74f84b:{NFSU2_TR(0x74f84b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f84e:{NFSU2_TR(0x74f84e);
if(r1(R+518)){{goto L74f85d;}}
}
B74f850:L74f850:{c.instructions+=4;NFSU2_TR(0x74f850);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f853:{NFSU2_TR(0x74f853);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
}
B74f859:{NFSU2_TR(0x74f859);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f85b:{NFSU2_TR(0x74f85b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f805u);}goto L74f805;}}
}
B74f85d:L74f85d:{c.instructions+=2;NFSU2_TR(0x74f85d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f85f:{NFSU2_TR(0x74f85f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74f8c5;}}
}
B74f861:L74f861:{c.instructions+=2;NFSU2_TR(0x74f861);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f863:{NFSU2_TR(0x74f863);
if(r1(R+518)){{goto L74f8c5;}}
}
B74f865:L74f865:{c.instructions+=3;NFSU2_TR(0x74f865);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74f867:{NFSU2_TR(0x74f867);
w4(R+4,u32(0x69ull));
}
B74f86c:{NFSU2_TR(0x74f86c);
__builtin_memmove((R+28),(R+20),4);
}
B74f86e:L74f86e:{c.instructions+=1;NFSU2_TR(0x74f86e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74f870;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f86eu);}goto L74f86e;}
}
B74f870:L74f870:{c.instructions+=8;NFSU2_TR(0x74f870);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f874:{NFSU2_TR(0x74f874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f877:{NFSU2_TR(0x74f877);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f87b:{NFSU2_TR(0x74f87b);
__builtin_memmove((R+8),(R+0),4);
}
B74f87d:{NFSU2_TR(0x74f87d);
__builtin_memmove((R+4),(R+20),4);
}
B74f87f:{NFSU2_TR(0x74f87f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B74f881:{NFSU2_TR(0x74f881);
__builtin_memmove((R+24),(R+20),4);
}
B74f883:{NFSU2_TR(0x74f883);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f886:L74f886:{c.instructions+=5;NFSU2_TR(0x74f886);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74f888:{NFSU2_TR(0x74f888);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74f88b:{NFSU2_TR(0x74f88b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74f88c:{NFSU2_TR(0x74f88c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f88e:{NFSU2_TR(0x74f88e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f886u);}goto L74f886;}}
}
B74f890:L74f890:{c.instructions+=6;NFSU2_TR(0x74f890);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f894:{NFSU2_TR(0x74f894);
__builtin_memmove((R+8),(R+0),4);
}
B74f896:{NFSU2_TR(0x74f896);
__builtin_memmove((R+4),(R+20),4);
}
B74f898:{NFSU2_TR(0x74f898);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B74f89a:{NFSU2_TR(0x74f89a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f89d:{NFSU2_TR(0x74f89d);
__builtin_memmove((R+4),(R+4),4);
}
B74f8a0:L74f8a0:{c.instructions+=5;NFSU2_TR(0x74f8a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74f8a2:{NFSU2_TR(0x74f8a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74f8a5:{NFSU2_TR(0x74f8a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74f8a6:{NFSU2_TR(0x74f8a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f8a8:{NFSU2_TR(0x74f8a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f8a0u);}goto L74f8a0;}}
}
B74f8aa:L74f8aa:{c.instructions+=4;NFSU2_TR(0x74f8aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f8b1:{NFSU2_TR(0x74f8b1);
__builtin_memmove((R+4),(R+0),4);
}
B74f8b3:{NFSU2_TR(0x74f8b3);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B74f8b5:{NFSU2_TR(0x74f8b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f8b8:L74f8b8:{c.instructions+=5;NFSU2_TR(0x74f8b8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74f8ba:{NFSU2_TR(0x74f8ba);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74f8bd:{NFSU2_TR(0x74f8bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74f8be:{NFSU2_TR(0x74f8be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f8c0:{NFSU2_TR(0x74f8c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f8b8u);}goto L74f8b8;}}
}
B74f8c2:L74f8c2:{c.instructions+=1;NFSU2_TR(0x74f8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74f8c5:L74f8c5:{c.instructions+=2;NFSU2_TR(0x74f8c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f8c8:{NFSU2_TR(0x74f8c8);
if(r1(R+518)){{goto L74f981;}}
}
B74f8ce:L74f8ce:{c.instructions+=5;NFSU2_TR(0x74f8ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f8d5:{NFSU2_TR(0x74f8d5);
__builtin_memmove((R+8),(R+24),4);
}
B74f8d7:{NFSU2_TR(0x74f8d7);
__builtin_memmove((R+4),(R+0),4);
}
B74f8d9:{NFSU2_TR(0x74f8d9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B74f8db:{NFSU2_TR(0x74f8db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x108ull))));
}
B74f8e1:L74f8e1:{c.instructions+=5;NFSU2_TR(0x74f8e1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74f8e3:{NFSU2_TR(0x74f8e3);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74f8e6:{NFSU2_TR(0x74f8e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74f8e7:{NFSU2_TR(0x74f8e7);
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
B74f8e9:{NFSU2_TR(0x74f8e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f8e1u);}goto L74f8e1;}}
}
B74f8eb:L74f8eb:{c.instructions+=1;NFSU2_TR(0x74f8eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f8f0ull));
TAIL_STATIC(0x74b730u,74b);
}
B74f8f0:L74f8f0:{c.instructions+=34;NFSU2_TR(0x74f8f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74f8f5:{NFSU2_TR(0x74f8f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f8f9:{NFSU2_TR(0x74f8f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x7d0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B74f8ff:{NFSU2_TR(0x74f8ff);
u8 U[12];
w4(U+0,u32(u32(u32(0x3e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B74f906:{NFSU2_TR(0x74f906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f90c:{NFSU2_TR(0x74f90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f912:{NFSU2_TR(0x74f912);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74f917:{NFSU2_TR(0x74f917);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74f91c:{NFSU2_TR(0x74f91c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B74f921:{NFSU2_TR(0x74f921);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74f924:{NFSU2_TR(0x74f924);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B74f926:{NFSU2_TR(0x74f926);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74f92b:{NFSU2_TR(0x74f92b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74f92e:{NFSU2_TR(0x74f92e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B74f930:{NFSU2_TR(0x74f930);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74f933:{NFSU2_TR(0x74f933);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B74f935:{NFSU2_TR(0x74f935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f93b:{NFSU2_TR(0x74f93b);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B74f940:{NFSU2_TR(0x74f940);
u8 U[5];
w4(U+0,u32(u32(u32(0x2dull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74f945:{NFSU2_TR(0x74f945);
u8 U[5];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74f94a:{NFSU2_TR(0x74f94a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B74f94d:{NFSU2_TR(0x74f94d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B74f94f:{NFSU2_TR(0x74f94f);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B74f954:{NFSU2_TR(0x74f954);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B74f957:{NFSU2_TR(0x74f957);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B74f959:{NFSU2_TR(0x74f959);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B74f95c:{NFSU2_TR(0x74f95c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B74f95e:{NFSU2_TR(0x74f95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f964:{NFSU2_TR(0x74f964);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f966:{NFSU2_TR(0x74f966);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x184ull))));
}
B74f96c:{NFSU2_TR(0x74f96c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74f970:{NFSU2_TR(0x74f970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f971:{NFSU2_TR(0x74f971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f972:{NFSU2_TR(0x74f972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f977ull));
TAIL_STATIC(0x742f60u,742);
}
B74f977:L74f977:{c.instructions+=4;NFSU2_TR(0x74f977);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f97a:{NFSU2_TR(0x74f97a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74f97d:{NFSU2_TR(0x74f97d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74f97e:{NFSU2_TR(0x74f97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74f981:L74f981:{c.instructions+=4;NFSU2_TR(0x74f981);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f984:{NFSU2_TR(0x74f984);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74f986:{NFSU2_TR(0x74f986);
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
B74f988:{NFSU2_TR(0x74f988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f6f0u);}goto L74f6f0;}}
}
B74f98e:L74f98e:{c.instructions+=1;NFSU2_TR(0x74f98e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74f993ull));
TAIL_STATIC(0x74b730u,74b);
}
B74f993:L74f993:{c.instructions+=3;NFSU2_TR(0x74f993);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f996:{NFSU2_TR(0x74f996);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74f999:{NFSU2_TR(0x74f999);
if(r1(R+518)){{goto L74f9d7;}}
}
B74f99b:L74f99b:{c.instructions+=1;NFSU2_TR(0x74f99b);
{goto L74f9a0;}
}
B74f9a0:L74f9a0:{c.instructions+=3;NFSU2_TR(0x74f9a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74f9a3:{NFSU2_TR(0x74f9a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f9a5:{NFSU2_TR(0x74f9a5);
if(r1(R+518)){{goto L74f9ca;}}
}
B74f9a7:L74f9a7:{c.instructions+=3;NFSU2_TR(0x74f9a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74f9ad:{NFSU2_TR(0x74f9ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74f9af:{NFSU2_TR(0x74f9af);
if(r1(R+518)){{goto L74f9bf;}}
}
B74f9b1:L74f9b1:{c.instructions+=3;NFSU2_TR(0x74f9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f9b7:{NFSU2_TR(0x74f9b7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f9b9:{NFSU2_TR(0x74f9b9);
if(r1(R+518)){{goto L74f9bf;}}
}
B74f9bb:L74f9bb:{c.instructions+=2;NFSU2_TR(0x74f9bb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f9bd:{NFSU2_TR(0x74f9bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74f9ca;}}
}
B74f9bf:L74f9bf:{c.instructions+=3;NFSU2_TR(0x74f9bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74f9c3:{NFSU2_TR(0x74f9c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74f9c7:{NFSU2_TR(0x74f9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74f9ca:L74f9ca:{c.instructions+=4;NFSU2_TR(0x74f9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74f9cd:{NFSU2_TR(0x74f9cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1a4ull))));
}
B74f9d3:{NFSU2_TR(0x74f9d3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74f9d5:{NFSU2_TR(0x74f9d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f9a0u);}goto L74f9a0;}}
}
B74f9d7:L74f9d7:{c.instructions+=4;NFSU2_TR(0x74f9d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74f9da:{NFSU2_TR(0x74f9da);
__builtin_memmove((R+28),(R+20),4);
}
B74f9dc:{NFSU2_TR(0x74f9dc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B74f9de:{NFSU2_TR(0x74f9de);
if(r1(R+518)){{goto L74fa28;}}
}
B74f9e0:L74f9e0:{c.instructions+=4;NFSU2_TR(0x74f9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B74f9e2:{NFSU2_TR(0x74f9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74f9e8:{NFSU2_TR(0x74f9e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74f9ea:{NFSU2_TR(0x74f9ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74fa1d;}}
}
B74f9ec:L74f9ec:{c.instructions+=12;NFSU2_TR(0x74f9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74f9f2:{NFSU2_TR(0x74f9f2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f9f4:{NFSU2_TR(0x74f9f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+8),(U+0),4);
}
B74f9f7:{NFSU2_TR(0x74f9f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f9f8:{NFSU2_TR(0x74f9f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74f9fa:{NFSU2_TR(0x74f9fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B74f9fc:{NFSU2_TR(0x74f9fc);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa01:{NFSU2_TR(0x74fa01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74fa08:{NFSU2_TR(0x74fa08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fa0b:{NFSU2_TR(0x74fa0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa0c:{NFSU2_TR(0x74fa0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa0d:{NFSU2_TR(0x74fa0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fa12ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B74fa12:L74fa12:{c.instructions+=2;NFSU2_TR(0x74fa12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa13:{NFSU2_TR(0x74fa13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fa18ull));
TAIL_STATIC(0x598ec0u,598);
}
B74fa18:L74fa18:{c.instructions+=2;NFSU2_TR(0x74fa18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74fa1b:{NFSU2_TR(0x74fa1b);
{goto L74fa23;}
}
B74fa1d:L74fa1d:{c.instructions+=1;NFSU2_TR(0x74fa1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74fa23:L74fa23:{c.instructions+=2;NFSU2_TR(0x74fa23);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B74fa26:{NFSU2_TR(0x74fa26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f9e0u);}goto L74f9e0;}}
}
B74fa28:L74fa28:{c.instructions+=1;NFSU2_TR(0x74fa28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fa2dull));
TAIL_STATIC(0x74b730u,74b);
}
B74fa2d:L74fa2d:{c.instructions+=4;NFSU2_TR(0x74fa2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B74fa30:{NFSU2_TR(0x74fa30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fa32:{NFSU2_TR(0x74fa32);
__builtin_memmove((R+28),(R+0),4);
}
B74fa34:{NFSU2_TR(0x74fa34);
if(r1(R+518)){{goto L74fa74;}}
}
B74fa36:L74fa36:{c.instructions+=2;NFSU2_TR(0x74fa36);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74fa3c:{NFSU2_TR(0x74fa3c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74fa6a;}}
}
B74fa3e:L74fa3e:{c.instructions+=9;NFSU2_TR(0x74fa3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74fa41:{NFSU2_TR(0x74fa41);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa43:{NFSU2_TR(0x74fa43);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B74fa46:{NFSU2_TR(0x74fa46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa47:{NFSU2_TR(0x74fa47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa49:{NFSU2_TR(0x74fa49);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa4e:{NFSU2_TR(0x74fa4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa4f:{NFSU2_TR(0x74fa4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa50:{NFSU2_TR(0x74fa50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fa55ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B74fa55:L74fa55:{c.instructions+=5;NFSU2_TR(0x74fa55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74fa59:{NFSU2_TR(0x74fa59);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B74fa5f:{NFSU2_TR(0x74fa5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74fa62:{NFSU2_TR(0x74fa62);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B74fa64:{NFSU2_TR(0x74fa64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fa6a:L74fa6a:{c.instructions+=3;NFSU2_TR(0x74fa6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74fa70:{NFSU2_TR(0x74fa70);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fa72:{NFSU2_TR(0x74fa72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fa36u);}goto L74fa36;}}
}
B74fa74:L74fa74:{c.instructions+=2;NFSU2_TR(0x74fa74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fa75:{NFSU2_TR(0x74fa75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fa7aull));
TAIL_STATIC(0x74b870u,74b);
}
B74fa7a:L74fa7a:{c.instructions+=4;NFSU2_TR(0x74fa7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74fa7d:{NFSU2_TR(0x74fa7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74fa7e:{NFSU2_TR(0x74fa7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74fa7f:{NFSU2_TR(0x74fa7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74fa80:L74fa80:{c.instructions+=4;NFSU2_TR(0x74fa80);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74fa87:{NFSU2_TR(0x74fa87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74fa89:{NFSU2_TR(0x74fa89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fa8a:{NFSU2_TR(0x74fa8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fa8full));
TAIL_STATIC(0x76115eu,761);
}
B74fa8f:L74fa8f:{c.instructions+=2;NFSU2_TR(0x74fa8f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1acull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1acull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1acull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74fa95:{NFSU2_TR(0x74fa95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74faa0:L74faa0:{c.instructions+=3;NFSU2_TR(0x74faa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74faa4:{NFSU2_TR(0x74faa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74faa6:{NFSU2_TR(0x74faa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74fab2;}}
}
B74faa8:L74faa8:{c.instructions+=2;NFSU2_TR(0x74faa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B74fab0:{NFSU2_TR(0x74fab0);
{goto L74fad0;}
}
B74fab2:L74fab2:{c.instructions+=2;NFSU2_TR(0x74fab2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74fab5:{NFSU2_TR(0x74fab5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74fac1;}}
}
B74fab7:L74fab7:{c.instructions+=2;NFSU2_TR(0x74fab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74fabf:{NFSU2_TR(0x74fabf);
{goto L74fad0;}
}
B74fac1:L74fac1:{c.instructions+=2;NFSU2_TR(0x74fac1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfaull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfaull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fac6:{NFSU2_TR(0x74fac6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74fad0;}}
}
B74fac8:L74fac8:{c.instructions+=1;NFSU2_TR(0x74fac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xfaull));
s4(u32(r4(U+0)),r4(U+4));
}
B74fad0:L74fad0:{c.instructions+=4;NFSU2_TR(0x74fad0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fad1:{NFSU2_TR(0x74fad1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74fad5:{NFSU2_TR(0x74fad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fad7:{NFSU2_TR(0x74fad7);
if(r1(R+518)){{goto L74fd11;}}
}
B74fadd:L74fadd:{c.instructions+=2;NFSU2_TR(0x74fadd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74fae0:{NFSU2_TR(0x74fae0);
if(r1(R+518)){{goto L74fd11;}}
}
B74fae6:L74fae6:{c.instructions+=3;NFSU2_TR(0x74fae6);
__builtin_memmove((R+0),(R+12),4);
}
B74fae8:{NFSU2_TR(0x74fae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74faeb:{NFSU2_TR(0x74faeb);
{goto L74faf0;}
}
B74faf0:L74faf0:{c.instructions+=4;NFSU2_TR(0x74faf0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74faf2:{NFSU2_TR(0x74faf2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74faf3:{NFSU2_TR(0x74faf3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74faf5:{NFSU2_TR(0x74faf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74faf0u);}goto L74faf0;}}
}
B74faf7:L74faf7:{c.instructions+=3;NFSU2_TR(0x74faf7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74faf9:{NFSU2_TR(0x74faf9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74fafc:{NFSU2_TR(0x74fafc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74fd11;}}
}
B74fb02:L74fb02:{c.instructions+=3;NFSU2_TR(0x74fb02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fb06:{NFSU2_TR(0x74fb06);
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
B74fb08:{NFSU2_TR(0x74fb08);
if(r1(R+518)){{goto L74fd0a;}}
}
B74fb0e:L74fb0e:{c.instructions+=2;NFSU2_TR(0x74fb0e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
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
B74fb11:{NFSU2_TR(0x74fb11);
if(r1(R+518)){{goto L74fd0a;}}
}
B74fb17:L74fb17:{c.instructions+=2;NFSU2_TR(0x74fb17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fb1a:{NFSU2_TR(0x74fb1a);
__builtin_memmove((R+12),(R+12),4);
}
B74fb20:L74fb20:{c.instructions+=4;NFSU2_TR(0x74fb20);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fb22:{NFSU2_TR(0x74fb22);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fb23:{NFSU2_TR(0x74fb23);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fb25:{NFSU2_TR(0x74fb25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fb20u);}goto L74fb20;}}
}
B74fb27:L74fb27:{c.instructions+=3;NFSU2_TR(0x74fb27);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74fb29:{NFSU2_TR(0x74fb29);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74fb2c:{NFSU2_TR(0x74fb2c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74fd0a;}}
}
B74fb32:L74fb32:{c.instructions+=3;NFSU2_TR(0x74fb32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fb36:{NFSU2_TR(0x74fb36);
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
B74fb38:{NFSU2_TR(0x74fb38);
if(r1(R+518)){{goto L74fd03;}}
}
B74fb3e:L74fb3e:{c.instructions+=1;NFSU2_TR(0x74fb3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fb41:L74fb41:{c.instructions+=4;NFSU2_TR(0x74fb41);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fb43:{NFSU2_TR(0x74fb43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fb44:{NFSU2_TR(0x74fb44);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fb46:{NFSU2_TR(0x74fb46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fb41u);}goto L74fb41;}}
}
B74fb48:L74fb48:{c.instructions+=3;NFSU2_TR(0x74fb48);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74fb4a:{NFSU2_TR(0x74fb4a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbfull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbfull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74fb4f:{NFSU2_TR(0x74fb4f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74fd03;}}
}
B74fb55:L74fb55:{c.instructions+=4;NFSU2_TR(0x74fb55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fb56:{NFSU2_TR(0x74fb56);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74fb5a:{NFSU2_TR(0x74fb5a);
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
B74fb5c:{NFSU2_TR(0x74fb5c);
if(r1(R+518)){{goto L74fcfb;}}
}
B74fb62:L74fb62:{c.instructions+=2;NFSU2_TR(0x74fb62);
__builtin_memmove((R+0),(R+20),4);
}
B74fb64:{NFSU2_TR(0x74fb64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fb67:L74fb67:{c.instructions+=4;NFSU2_TR(0x74fb67);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fb69:{NFSU2_TR(0x74fb69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fb6a:{NFSU2_TR(0x74fb6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fb6c:{NFSU2_TR(0x74fb6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fb67u);}goto L74fb67;}}
}
B74fb6e:L74fb6e:{c.instructions+=3;NFSU2_TR(0x74fb6e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74fb70:{NFSU2_TR(0x74fb70);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x77ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x77ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x77ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74fb73:{NFSU2_TR(0x74fb73);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74fcfb;}}
}
B74fb79:L74fb79:{c.instructions+=6;NFSU2_TR(0x74fb79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fb7a:{NFSU2_TR(0x74fb7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fb7b:{NFSU2_TR(0x74fb7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74fb7f:{NFSU2_TR(0x74fb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74fb82:{NFSU2_TR(0x74fb82);
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
B74fb84:{NFSU2_TR(0x74fb84);
if(r1(R+518)){{goto L74fbb2;}}
}
B74fb86:L74fb86:{c.instructions+=3;NFSU2_TR(0x74fb86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fb89:{NFSU2_TR(0x74fb89);
__builtin_memmove((R+0),(R+12),4);
}
B74fb8b:{NFSU2_TR(0x74fb8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fb90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74fb90:L74fb90:{c.instructions+=2;NFSU2_TR(0x74fb90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fb92:{NFSU2_TR(0x74fb92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74fba8;}}
}
B74fb94:L74fb94:{c.instructions+=3;NFSU2_TR(0x74fb94);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fb98:{NFSU2_TR(0x74fb98);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fb9b:{NFSU2_TR(0x74fb9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fba0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74fba0:L74fba0:{c.instructions+=2;NFSU2_TR(0x74fba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fba2:{NFSU2_TR(0x74fba2);
if(r1(R+518)){{goto L74fc93;}}
}
B74fba8:L74fba8:{c.instructions+=3;NFSU2_TR(0x74fba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74fbae:{NFSU2_TR(0x74fbae);
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
B74fbb0:{NFSU2_TR(0x74fbb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fb86u);}goto L74fb86;}}
}
B74fbb2:L74fbb2:{c.instructions+=2;NFSU2_TR(0x74fbb2);
u8 U[4];
w4(U+0,u32(0x1a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fbb7:{NFSU2_TR(0x74fbb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fbbcull));
TAIL_STATIC(0x5832f0u,583);
}
B74fbbc:L74fbbc:{c.instructions+=22;NFSU2_TR(0x74fbbc);
__builtin_memmove((R+24),(R+0),4);
}
B74fbbe:{NFSU2_TR(0x74fbbe);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74fbc2:{NFSU2_TR(0x74fbc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74fbc5:{NFSU2_TR(0x74fbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fbcb:{NFSU2_TR(0x74fbcb);
__builtin_memmove((R+4),(R+0),4);
}
B74fbcd:{NFSU2_TR(0x74fbcd);
__builtin_memmove((R+8),(R+0),4);
}
B74fbcf:{NFSU2_TR(0x74fbcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B74fbd2:{NFSU2_TR(0x74fbd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B74fbd5:{NFSU2_TR(0x74fbd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74fbd8:{NFSU2_TR(0x74fbd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74fbde:{NFSU2_TR(0x74fbde);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74fbe1:{NFSU2_TR(0x74fbe1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B74fbe4:{NFSU2_TR(0x74fbe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fbe7:{NFSU2_TR(0x74fbe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74fbea:{NFSU2_TR(0x74fbea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74fbed:{NFSU2_TR(0x74fbed);
u8 U[1];
w1(U+0,u8(0x67ull));
s1(u32(r4(R+24)),r1(U+0));
}
B74fbf0:{NFSU2_TR(0x74fbf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x45ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74fbf4:{NFSU2_TR(0x74fbf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x41ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74fbf8:{NFSU2_TR(0x74fbf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74fbfb:{NFSU2_TR(0x74fbfb);
__builtin_memmove((R+0),(R+12),4);
}
B74fbfd:{NFSU2_TR(0x74fbfd);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B74fbff:{NFSU2_TR(0x74fbff);
}
B74fc00:L74fc00:{c.instructions+=5;NFSU2_TR(0x74fc00);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fc02:{NFSU2_TR(0x74fc02);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74fc05:{NFSU2_TR(0x74fc05);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fc06:{NFSU2_TR(0x74fc06);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fc08:{NFSU2_TR(0x74fc08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fc00u);}goto L74fc00;}}
}
B74fc0a:L74fc0a:{c.instructions+=3;NFSU2_TR(0x74fc0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fc0e:{NFSU2_TR(0x74fc0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fc11:{NFSU2_TR(0x74fc11);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B74fc13:L74fc13:{c.instructions+=5;NFSU2_TR(0x74fc13);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fc15:{NFSU2_TR(0x74fc15);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74fc18:{NFSU2_TR(0x74fc18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fc19:{NFSU2_TR(0x74fc19);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fc1b:{NFSU2_TR(0x74fc1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fc13u);}goto L74fc13;}}
}
B74fc1d:L74fc1d:{c.instructions+=3;NFSU2_TR(0x74fc1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fc23:{NFSU2_TR(0x74fc23);
__builtin_memmove((R+0),(R+20),4);
}
B74fc25:{NFSU2_TR(0x74fc25);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B74fc27:L74fc27:{c.instructions+=5;NFSU2_TR(0x74fc27);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fc29:{NFSU2_TR(0x74fc29);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74fc2c:{NFSU2_TR(0x74fc2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fc2d:{NFSU2_TR(0x74fc2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fc2f:{NFSU2_TR(0x74fc2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fc27u);}goto L74fc27;}}
}
B74fc31:L74fc31:{c.instructions+=4;NFSU2_TR(0x74fc31);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fc35:{NFSU2_TR(0x74fc35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fc38:{NFSU2_TR(0x74fc38);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B74fc3a:{NFSU2_TR(0x74fc3a);
__builtin_memmove((R+12),(R+12),4);
}
B74fc40:L74fc40:{c.instructions+=5;NFSU2_TR(0x74fc40);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fc42:{NFSU2_TR(0x74fc42);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74fc45:{NFSU2_TR(0x74fc45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fc46:{NFSU2_TR(0x74fc46);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fc48:{NFSU2_TR(0x74fc48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fc40u);}goto L74fc40;}}
}
B74fc4a:L74fc4a:{c.instructions+=9;NFSU2_TR(0x74fc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74fc4d:{NFSU2_TR(0x74fc4d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc4f:{NFSU2_TR(0x74fc4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B74fc52:{NFSU2_TR(0x74fc52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc53:{NFSU2_TR(0x74fc53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc55:{NFSU2_TR(0x74fc55);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc5a:{NFSU2_TR(0x74fc5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc5b:{NFSU2_TR(0x74fc5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc5c:{NFSU2_TR(0x74fc5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fc61ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B74fc61:L74fc61:{c.instructions+=1;NFSU2_TR(0x74fc61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fc66ull));
TAIL_STATIC(0x74b730u,74b);
}
B74fc66:L74fc66:{c.instructions+=4;NFSU2_TR(0x74fc66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfaull))));
}
B74fc6b:{NFSU2_TR(0x74fc6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc6c:{NFSU2_TR(0x74fc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fc72:{NFSU2_TR(0x74fc72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fc77ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B74fc77:L74fc77:{c.instructions+=5;NFSU2_TR(0x74fc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fc7a:{NFSU2_TR(0x74fc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fc80:{NFSU2_TR(0x74fc80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fc81:{NFSU2_TR(0x74fc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fc84:{NFSU2_TR(0x74fc84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fc89ull));
TAIL_STATIC(0x74b870u,74b);
}
B74fc89:L74fc89:{c.instructions+=1;NFSU2_TR(0x74fc89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74fc8c:L74fc8c:{c.instructions+=6;NFSU2_TR(0x74fc8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74fc8d:{NFSU2_TR(0x74fc8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74fc8e:{NFSU2_TR(0x74fc8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74fc8f:{NFSU2_TR(0x74fc8f);
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
B74fc91:{NFSU2_TR(0x74fc91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fc92:{NFSU2_TR(0x74fc92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fc93:L74fc93:{c.instructions+=4;NFSU2_TR(0x74fc93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74fc99:{NFSU2_TR(0x74fc99);
__builtin_memmove((R+8),(R+28),4);
}
B74fc9b:{NFSU2_TR(0x74fc9b);
__builtin_memmove((R+0),(R+20),4);
}
B74fc9d:{NFSU2_TR(0x74fc9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fca2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74fca2:L74fca2:{c.instructions+=2;NFSU2_TR(0x74fca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fca4:{NFSU2_TR(0x74fca4);
if(r1(R+518)){{goto L74fcc4;}}
}
B74fca6:L74fca6:{c.instructions+=4;NFSU2_TR(0x74fca6);
__builtin_memmove((R+8),(R+28),4);
}
B74fca8:{NFSU2_TR(0x74fca8);
__builtin_memmove((R+0),(R+20),4);
}
B74fcaa:{NFSU2_TR(0x74fcaa);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B74fcac:{NFSU2_TR(0x74fcac);
__builtin_memmove((R+16),(R+16),4);
}
B74fcb0:L74fcb0:{c.instructions+=5;NFSU2_TR(0x74fcb0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fcb2:{NFSU2_TR(0x74fcb2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74fcb5:{NFSU2_TR(0x74fcb5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fcb6:{NFSU2_TR(0x74fcb6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fcb8:{NFSU2_TR(0x74fcb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fcb0u);}goto L74fcb0;}}
}
B74fcba:L74fcba:{c.instructions+=1;NFSU2_TR(0x74fcba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74fcc4:L74fcc4:{c.instructions+=5;NFSU2_TR(0x74fcc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74fcc8:{NFSU2_TR(0x74fcc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74fccb:{NFSU2_TR(0x74fccb);
__builtin_memmove((R+8),(R+28),4);
}
B74fccd:{NFSU2_TR(0x74fccd);
__builtin_memmove((R+0),(R+12),4);
}
B74fccf:{NFSU2_TR(0x74fccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fcd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74fcd4:L74fcd4:{c.instructions+=2;NFSU2_TR(0x74fcd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fcd6:{NFSU2_TR(0x74fcd6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fc8cu);}goto L74fc8c;}}
}
B74fcd8:L74fcd8:{c.instructions+=4;NFSU2_TR(0x74fcd8);
__builtin_memmove((R+8),(R+28),4);
}
B74fcda:{NFSU2_TR(0x74fcda);
__builtin_memmove((R+0),(R+12),4);
}
B74fcdc:{NFSU2_TR(0x74fcdc);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B74fcde:{NFSU2_TR(0x74fcde);
__builtin_memmove((R+28),(R+28),4);
}
B74fce0:L74fce0:{c.instructions+=5;NFSU2_TR(0x74fce0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fce2:{NFSU2_TR(0x74fce2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74fce5:{NFSU2_TR(0x74fce5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fce6:{NFSU2_TR(0x74fce6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fce8:{NFSU2_TR(0x74fce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fce0u);}goto L74fce0;}}
}
B74fcea:L74fcea:{c.instructions+=7;NFSU2_TR(0x74fcea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74fceb:{NFSU2_TR(0x74fceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74fcf5:{NFSU2_TR(0x74fcf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74fcf6:{NFSU2_TR(0x74fcf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74fcf7:{NFSU2_TR(0x74fcf7);
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
B74fcf9:{NFSU2_TR(0x74fcf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fcfa:{NFSU2_TR(0x74fcfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fcfb:L74fcfb:{c.instructions+=4;NFSU2_TR(0x74fcfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74fcfc:{NFSU2_TR(0x74fcfc);
w4(R+0,u32(0xfffffffcull));
}
B74fd01:{NFSU2_TR(0x74fd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fd02:{NFSU2_TR(0x74fd02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fd03:L74fd03:{c.instructions+=3;NFSU2_TR(0x74fd03);
w4(R+0,u32(0xfffffffdull));
}
B74fd08:{NFSU2_TR(0x74fd08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fd09:{NFSU2_TR(0x74fd09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fd0a:L74fd0a:{c.instructions+=3;NFSU2_TR(0x74fd0a);
w4(R+0,u32(0xfffffffeull));
}
B74fd0f:{NFSU2_TR(0x74fd0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fd10:{NFSU2_TR(0x74fd10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fd11:L74fd11:{c.instructions+=3;NFSU2_TR(0x74fd11);
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
B74fd14:{NFSU2_TR(0x74fd14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fd15:{NFSU2_TR(0x74fd15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fd20:L74fd20:{c.instructions+=5;NFSU2_TR(0x74fd20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fd21:{NFSU2_TR(0x74fd21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74fd25:{NFSU2_TR(0x74fd25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fd26:{NFSU2_TR(0x74fd26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fd27:{NFSU2_TR(0x74fd27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fd2cull));
TAIL_STATIC(0x74b7e0u,74b);
}
B74fd2c:L74fd2c:{c.instructions+=4;NFSU2_TR(0x74fd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74fd2f:{NFSU2_TR(0x74fd2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74fd32:{NFSU2_TR(0x74fd32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fd34:{NFSU2_TR(0x74fd34);
if(r1(R+518)){{goto L74fd7c;}}
}
B74fd36:L74fd36:{c.instructions+=4;NFSU2_TR(0x74fd36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fd37:{NFSU2_TR(0x74fd37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74fd3b:{NFSU2_TR(0x74fd3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fd3c:{NFSU2_TR(0x74fd3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74fd40:L74fd40:{c.instructions+=2;NFSU2_TR(0x74fd40);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fd42:{NFSU2_TR(0x74fd42);
if(r1(R+518)){{goto L74fd52;}}
}
B74fd44:L74fd44:{c.instructions+=3;NFSU2_TR(0x74fd44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fd47:{NFSU2_TR(0x74fd47);
__builtin_memmove((R+0),(R+12),4);
}
B74fd49:{NFSU2_TR(0x74fd49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fd4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74fd4e:L74fd4e:{c.instructions+=2;NFSU2_TR(0x74fd4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fd50:{NFSU2_TR(0x74fd50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74fd64;}}
}
B74fd52:L74fd52:{c.instructions+=2;NFSU2_TR(0x74fd52);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fd54:{NFSU2_TR(0x74fd54);
if(r1(R+518)){{goto L74fd70;}}
}
B74fd56:L74fd56:{c.instructions+=3;NFSU2_TR(0x74fd56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fd59:{NFSU2_TR(0x74fd59);
__builtin_memmove((R+0),(R+28),4);
}
B74fd5b:{NFSU2_TR(0x74fd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fd60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74fd60:L74fd60:{c.instructions+=2;NFSU2_TR(0x74fd60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fd62:{NFSU2_TR(0x74fd62);
if(r1(R+518)){{goto L74fd70;}}
}
B74fd64:L74fd64:{c.instructions+=3;NFSU2_TR(0x74fd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74fd6a:{NFSU2_TR(0x74fd6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fd6c:{NFSU2_TR(0x74fd6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fd40u);}goto L74fd40;}}
}
B74fd6e:L74fd6e:{c.instructions+=1;NFSU2_TR(0x74fd6e);
{goto L74fd7a;}
}
B74fd70:L74fd70:{c.instructions+=1;NFSU2_TR(0x74fd70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74fd7a:L74fd7a:{c.instructions+=2;NFSU2_TR(0x74fd7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74fd7b:{NFSU2_TR(0x74fd7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fd7c:L74fd7c:{c.instructions+=2;NFSU2_TR(0x74fd7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fd7d:{NFSU2_TR(0x74fd7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fd82ull));
TAIL_STATIC(0x74b870u,74b);
}
B74fd82:L74fd82:{c.instructions+=8;NFSU2_TR(0x74fd82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74fd85:{NFSU2_TR(0x74fd85);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74fd87:{NFSU2_TR(0x74fd87);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fd89:{NFSU2_TR(0x74fd89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B74fd8c:{NFSU2_TR(0x74fd8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74fd8d:{NFSU2_TR(0x74fd8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74fd8e:{NFSU2_TR(0x74fd8e);
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
B74fd8f:{NFSU2_TR(0x74fd8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fd90:L74fd90:{c.instructions+=9;NFSU2_TR(0x74fd90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x310ull))));
}
B74fd96:{NFSU2_TR(0x74fd96);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74fd9b:{NFSU2_TR(0x74fd9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fda2:{NFSU2_TR(0x74fda2);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fda9:{NFSU2_TR(0x74fda9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fdaa:{NFSU2_TR(0x74fdaa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74fdac:{NFSU2_TR(0x74fdac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74fdaf:{NFSU2_TR(0x74fdaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fdb3:{NFSU2_TR(0x74fdb3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74fdcc;}}
}
B74fdb5:L74fdb5:{c.instructions+=4;NFSU2_TR(0x74fdb5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B74fdb8:{NFSU2_TR(0x74fdb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74fdb9:{NFSU2_TR(0x74fdb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74fdc0:{NFSU2_TR(0x74fdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fdc5ull));
TAIL_STATIC(0x76115eu,761);
}
B74fdc5:L74fdc5:{c.instructions+=2;NFSU2_TR(0x74fdc5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x310ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x310ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x310ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74fdcb:{NFSU2_TR(0x74fdcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74fdcc:L74fdcc:{c.instructions+=10;NFSU2_TR(0x74fdcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fdd3:{NFSU2_TR(0x74fdd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fdd4:{NFSU2_TR(0x74fdd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fdd5:{NFSU2_TR(0x74fdd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74fdd6:{NFSU2_TR(0x74fdd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74fddd:{NFSU2_TR(0x74fddd);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B74fddf:{NFSU2_TR(0x74fddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74fde2:{NFSU2_TR(0x74fde2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74fde5:{NFSU2_TR(0x74fde5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fde9:{NFSU2_TR(0x74fde9);
if(r1(R+518)){TAIL_STATIC(0x75007bu,750);}
}
B74fdef:L74fdef:{c.instructions+=6;NFSU2_TR(0x74fdef);
w4(R+0,u32(0xffffffd8ull));
}
B74fdf4:{NFSU2_TR(0x74fdf4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B74fdf6:{NFSU2_TR(0x74fdf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74fdfa:{NFSU2_TR(0x74fdfa);
__builtin_memmove((R+12),(R+12),4);
}
B74fe00:{NFSU2_TR(0x74fe00);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74fe03:{NFSU2_TR(0x74fe03);
if(r1(R+518)){TAIL_STATIC(0x75003du,750);}
}
B74fe09:L74fe09:{c.instructions+=3;NFSU2_TR(0x74fe09);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fe10:{NFSU2_TR(0x74fe10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fe13:{NFSU2_TR(0x74fe13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74fe18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74f600u);}goto L74f600;}
}
B74fe18:L74fe18:{c.instructions+=2;NFSU2_TR(0x74fe18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74fe1a:{NFSU2_TR(0x74fe1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75003du,750);}
}
B74fe20:L74fe20:{c.instructions+=2;NFSU2_TR(0x74fe20);
u8 U[16];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74fe27:{NFSU2_TR(0x74fe27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74fe35;}}
}
B74fe29:L74fe29:{c.instructions+=2;NFSU2_TR(0x74fe29);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74fe2f:{NFSU2_TR(0x74fe2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75003du,750);}
}
B74fe35:L74fe35:{c.instructions+=4;NFSU2_TR(0x74fe35);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74fe3b:{NFSU2_TR(0x74fe3b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74fe3d:{NFSU2_TR(0x74fe3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74fe43:{NFSU2_TR(0x74fe43);
if(r1(R+518)){TAIL_STATIC(0x75003du,750);}
}
B74fe49:L74fe49:{c.instructions+=5;NFSU2_TR(0x74fe49);
__builtin_memmove((R+16),(R+16),4);
}
B74fe50:{NFSU2_TR(0x74fe50);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B74fe53:{NFSU2_TR(0x74fe53);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74fe55:{NFSU2_TR(0x74fe55);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74fe59:{NFSU2_TR(0x74fe59);
if(r1(R+518)){{goto L74fe6f;}}
}
B74fe5b:L74fe5b:{c.instructions+=1;NFSU2_TR(0x74fe5b);
{goto L74fe60;}
}
B74fe60:L74fe60:{c.instructions+=2;NFSU2_TR(0x74fe60);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74fe62:{NFSU2_TR(0x74fe62);
if(r1(R+518)){{goto L74fe6f;}}
}
B74fe64:L74fe64:{c.instructions+=6;NFSU2_TR(0x74fe64);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B74fe66:{NFSU2_TR(0x74fe66);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74fe69:{NFSU2_TR(0x74fe69);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74fe6a:{NFSU2_TR(0x74fe6a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B74fe6b:{NFSU2_TR(0x74fe6b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74fe6d:{NFSU2_TR(0x74fe6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fe60u);}goto L74fe60;}}
}
B74fe6f:L74fe6f:{c.instructions+=3;NFSU2_TR(0x74fe6f);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+4)),r1(U+0));
}
B74fe71:{NFSU2_TR(0x74fe71);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74fe75:{NFSU2_TR(0x74fe75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74fe78;}}
}
B74fe77:L74fe77:{c.instructions+=1;NFSU2_TR(0x74fe77);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B74fe78:L74fe78:{c.instructions+=3;NFSU2_TR(0x74fe78);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74fe7c:{NFSU2_TR(0x74fe7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74fe7f:{NFSU2_TR(0x74fe7f);
}
B74fe80:L74fe80:{c.instructions+=4;NFSU2_TR(0x74fe80);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fe82:{NFSU2_TR(0x74fe82);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fe83:{NFSU2_TR(0x74fe83);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74fe85:{NFSU2_TR(0x74fe85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fe80u);}goto L74fe80;}}
}
B74fe87:L74fe87:{c.instructions+=3;NFSU2_TR(0x74fe87);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74fe89:{NFSU2_TR(0x74fe89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B74fe8c:{NFSU2_TR(0x74fe8c);
if(r1(R+512)){TAIL_STATIC(0x75002du,750);}
}
B74fe92:L74fe92:{c.instructions+=2;NFSU2_TR(0x74fe92);
u8 U[7];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74fe97:{NFSU2_TR(0x74fe97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75002du,750);}
}
B74fe9d:L74fe9d:{c.instructions+=4;NFSU2_TR(0x74fe9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74fea4:{NFSU2_TR(0x74fea4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74fea6:{NFSU2_TR(0x74fea6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74feaa:{NFSU2_TR(0x74feaa);
if(r1(R+518)){{goto L74fec2;}}
}
B74feac:L74feac:{c.instructions+=4;NFSU2_TR(0x74feac);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74feb0:{NFSU2_TR(0x74feb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74feb1:{NFSU2_TR(0x74feb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74feb2:{NFSU2_TR(0x74feb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74feb7ull));
TAIL_STATIC(0x75f140u,75f);
}
B74feb7:L74feb7:{c.instructions+=3;NFSU2_TR(0x74feb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74feba:{NFSU2_TR(0x74feba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74febc:{NFSU2_TR(0x74febc);
if(r1(R+518)){TAIL_STATIC(0x75002du,750);}
}
B74fec2:L74fec2:{c.instructions+=4;NFSU2_TR(0x74fec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74fec6:{NFSU2_TR(0x74fec6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B74fecb:{NFSU2_TR(0x74fecb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74fece:{NFSU2_TR(0x74fece);
u8 U[12];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B74fed5:L74fed5:{c.instructions+=5;NFSU2_TR(0x74fed5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74fed7:{NFSU2_TR(0x74fed7);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74feda:{NFSU2_TR(0x74feda);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fedb:{NFSU2_TR(0x74fedb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74fedd:{NFSU2_TR(0x74fedd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fed5u);}goto L74fed5;}}
}
B74fedf:L74fedf:{c.instructions+=3;NFSU2_TR(0x74fedf);
u8 U[7];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74fee6:{NFSU2_TR(0x74fee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74feed:{NFSU2_TR(0x74feed);
if(r1(R+518)){{goto L74fef8;}}
}
B74feef:L74feef:{c.instructions+=1;NFSU2_TR(0x74feef);
}
B74fef0:L74fef0:{c.instructions+=4;NFSU2_TR(0x74fef0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74fef3:{NFSU2_TR(0x74fef3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fef4:{NFSU2_TR(0x74fef4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74fef6:{NFSU2_TR(0x74fef6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74fef0u);}goto L74fef0;}}
}
B74fef8:L74fef8:{c.instructions+=5;NFSU2_TR(0x74fef8);
u8 U[1];
w1(U+0,u8(0x9ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74fefb:{NFSU2_TR(0x74fefb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74fefc:{NFSU2_TR(0x74fefc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74feff:{NFSU2_TR(0x74feff);
__builtin_memmove((R+24),(R+0),4);
}
B74ff01:{NFSU2_TR(0x74ff01);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B74ff03:L74ff03:{c.instructions+=5;NFSU2_TR(0x74ff03);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74ff05:{NFSU2_TR(0x74ff05);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74ff08:{NFSU2_TR(0x74ff08);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74ff09:{NFSU2_TR(0x74ff09);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff0b:{NFSU2_TR(0x74ff0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ff03u);}goto L74ff03;}}
}
B74ff0d:L74ff0d:{c.instructions+=2;NFSU2_TR(0x74ff0d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74ff0f:{NFSU2_TR(0x74ff0f);
if(r1(R+518)){{goto L74ff19;}}
}
B74ff11:L74ff11:{c.instructions+=4;NFSU2_TR(0x74ff11);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74ff14:{NFSU2_TR(0x74ff14);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74ff15:{NFSU2_TR(0x74ff15);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff17:{NFSU2_TR(0x74ff17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ff11u);}goto L74ff11;}}
}
B74ff19:L74ff19:{c.instructions+=6;NFSU2_TR(0x74ff19);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74ff1d:{NFSU2_TR(0x74ff1d);
u8 U[1];
w1(U+0,u8(0x9ull));
s1(u32(r4(R+0)),r1(U+0));
}
B74ff20:{NFSU2_TR(0x74ff20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74ff21:{NFSU2_TR(0x74ff21);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff23:{NFSU2_TR(0x74ff23);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74ff27:{NFSU2_TR(0x74ff27);
if(r1(R+518)){{goto L74ff8a;}}
}
B74ff29:L74ff29:{c.instructions+=1;NFSU2_TR(0x74ff29);
__builtin_memmove((R+16),(R+16),4);
}
B74ff30:L74ff30:{c.instructions+=3;NFSU2_TR(0x74ff30);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74ff32:{NFSU2_TR(0x74ff32);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff35:{NFSU2_TR(0x74ff35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ff75;}}
}
B74ff37:L74ff37:{c.instructions+=3;NFSU2_TR(0x74ff37);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74ff3a:{NFSU2_TR(0x74ff3a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff3d:{NFSU2_TR(0x74ff3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74ff70;}}
}
B74ff3f:L74ff3f:{c.instructions+=5;NFSU2_TR(0x74ff3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ff43:{NFSU2_TR(0x74ff43);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74ff49:{NFSU2_TR(0x74ff49);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x184ull))));
}
B74ff4f:{NFSU2_TR(0x74ff4f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff51:{NFSU2_TR(0x74ff51);
if(r1(R+518)){{goto L74ff82;}}
}
B74ff53:L74ff53:{c.instructions+=2;NFSU2_TR(0x74ff53);
__builtin_memmove((R+24),(R+0),4);
}
B74ff55:{NFSU2_TR(0x74ff55);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B74ff57:L74ff57:{c.instructions+=5;NFSU2_TR(0x74ff57);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74ff59:{NFSU2_TR(0x74ff59);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74ff5c:{NFSU2_TR(0x74ff5c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74ff5d:{NFSU2_TR(0x74ff5d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff5f:{NFSU2_TR(0x74ff5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ff57u);}goto L74ff57;}}
}
B74ff61:L74ff61:{c.instructions+=2;NFSU2_TR(0x74ff61);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74ff63:{NFSU2_TR(0x74ff63);
if(r1(R+518)){{goto L74ff6d;}}
}
B74ff65:L74ff65:{c.instructions+=4;NFSU2_TR(0x74ff65);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74ff68:{NFSU2_TR(0x74ff68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74ff69:{NFSU2_TR(0x74ff69);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff6b:{NFSU2_TR(0x74ff6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ff65u);}goto L74ff65;}}
}
B74ff6d:L74ff6d:{c.instructions+=2;NFSU2_TR(0x74ff6d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B74ff6e:{NFSU2_TR(0x74ff6e);
{goto L74ff78;}
}
B74ff70:L74ff70:{c.instructions+=2;NFSU2_TR(0x74ff70);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x32ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff73:{NFSU2_TR(0x74ff73);
if(r1(R+518)){{goto L74ff82;}}
}
B74ff75:L74ff75:{c.instructions+=2;NFSU2_TR(0x74ff75);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B74ff77:{NFSU2_TR(0x74ff77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74ff78:L74ff78:{c.instructions+=4;NFSU2_TR(0x74ff78);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74ff7b:{NFSU2_TR(0x74ff7b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B74ff7c:{NFSU2_TR(0x74ff7c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ff7e:{NFSU2_TR(0x74ff7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ff30u);}goto L74ff30;}}
}
B74ff80:L74ff80:{c.instructions+=1;NFSU2_TR(0x74ff80);
{goto L74ff8a;}
}
B74ff82:L74ff82:{c.instructions+=2;NFSU2_TR(0x74ff82);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74ff84:{NFSU2_TR(0x74ff84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x750029u,750);}
}
B74ff8a:L74ff8a:{c.instructions+=5;NFSU2_TR(0x74ff8a);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+0)),r1(U+0));
}
B74ff8d:{NFSU2_TR(0x74ff8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74ff90:{NFSU2_TR(0x74ff90);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ff97:{NFSU2_TR(0x74ff97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74ff9a:{NFSU2_TR(0x74ff9a);
__builtin_memmove((R+12),(R+12),4);
}
B74ffa0:L74ffa0:{c.instructions+=4;NFSU2_TR(0x74ffa0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74ffa2:{NFSU2_TR(0x74ffa2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74ffa3:{NFSU2_TR(0x74ffa3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ffa5:{NFSU2_TR(0x74ffa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ffa0u);}goto L74ffa0;}}
}
B74ffa7:L74ffa7:{c.instructions+=5;NFSU2_TR(0x74ffa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74ffae:{NFSU2_TR(0x74ffae);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74ffb0:{NFSU2_TR(0x74ffb0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B74ffb3:{NFSU2_TR(0x74ffb3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74ffb5:{NFSU2_TR(0x74ffb5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x750062u,750);}
}
B74ffbb:L74ffbb:{c.instructions+=5;NFSU2_TR(0x74ffbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74ffc2:{NFSU2_TR(0x74ffc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ffc9:{NFSU2_TR(0x74ffc9);
__builtin_memmove((R+4),(R+0),4);
}
B74ffcb:{NFSU2_TR(0x74ffcb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B74ffcd:{NFSU2_TR(0x74ffcd);
__builtin_memmove((R+4),(R+4),4);
}
B74ffd0:L74ffd0:{c.instructions+=5;NFSU2_TR(0x74ffd0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74ffd2:{NFSU2_TR(0x74ffd2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B74ffd5:{NFSU2_TR(0x74ffd5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74ffd6:{NFSU2_TR(0x74ffd6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ffd8:{NFSU2_TR(0x74ffd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ffd0u);}goto L74ffd0;}}
}
B74ffda:L74ffda:{c.instructions+=2;NFSU2_TR(0x74ffda);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74ffe1:{NFSU2_TR(0x74ffe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74ffe4:L74ffe4:{c.instructions+=4;NFSU2_TR(0x74ffe4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74ffe6:{NFSU2_TR(0x74ffe6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74ffe7:{NFSU2_TR(0x74ffe7);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74ffe9:{NFSU2_TR(0x74ffe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74ffe4u);}goto L74ffe4;}}
}
B74ffeb:L74ffeb:{c.instructions+=5;NFSU2_TR(0x74ffeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74fff2:{NFSU2_TR(0x74fff2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B74fff4:{NFSU2_TR(0x74fff4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B74fff6:{NFSU2_TR(0x74fff6);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74fffd:{NFSU2_TR(0x74fffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x750004u,750);
}
XIT:NFSU2_TR_EXIT(0x74f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
