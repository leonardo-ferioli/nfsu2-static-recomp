#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59c(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x59f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x59f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_59f(u8* __restrict R,Cpu& c);
u32 page_59f(Cpu& c){return body_59f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_59f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x59f002:goto L59f002;
case 0x59f006:c.instructions+=9;goto B59f006;
case 0x59f00a:c.instructions+=8;goto B59f00a;
case 0x59f010:c.instructions+=7;goto B59f010;
case 0x59f014:c.instructions+=6;goto B59f014;
case 0x59f018:c.instructions+=5;goto B59f018;
case 0x59f01b:c.instructions+=4;goto B59f01b;
case 0x59f01d:c.instructions+=3;goto B59f01d;
case 0x59f01f:c.instructions+=2;goto B59f01f;
case 0x59f022:c.instructions+=1;goto B59f022;
case 0x59f024:goto L59f024;
case 0x59f02a:goto L59f02a;
case 0x59f02e:c.instructions+=8;goto B59f02e;
case 0x59f032:c.instructions+=7;goto B59f032;
case 0x59f035:c.instructions+=6;goto B59f035;
case 0x59f036:c.instructions+=5;goto B59f036;
case 0x59f039:c.instructions+=4;goto B59f039;
case 0x59f03a:c.instructions+=3;goto B59f03a;
case 0x59f03b:c.instructions+=2;goto B59f03b;
case 0x59f03c:c.instructions+=1;goto B59f03c;
case 0x59f041:goto L59f041;
case 0x59f044:c.instructions+=9;goto B59f044;
case 0x59f046:c.instructions+=8;goto B59f046;
case 0x59f049:c.instructions+=7;goto B59f049;
case 0x59f04c:c.instructions+=6;goto B59f04c;
case 0x59f04d:c.instructions+=5;goto B59f04d;
case 0x59f051:c.instructions+=4;goto B59f051;
case 0x59f052:c.instructions+=3;goto B59f052;
case 0x59f054:c.instructions+=2;goto B59f054;
case 0x59f058:c.instructions+=1;goto B59f058;
case 0x59f05d:goto L59f05d;
case 0x59f061:c.instructions+=8;goto B59f061;
case 0x59f062:c.instructions+=7;goto B59f062;
case 0x59f069:c.instructions+=6;goto B59f069;
case 0x59f06a:c.instructions+=5;goto B59f06a;
case 0x59f06e:c.instructions+=4;goto B59f06e;
case 0x59f06f:c.instructions+=3;goto B59f06f;
case 0x59f073:c.instructions+=2;goto B59f073;
case 0x59f074:c.instructions+=1;goto B59f074;
case 0x59f079:goto L59f079;
case 0x59f07d:c.instructions+=10;goto B59f07d;
case 0x59f081:c.instructions+=9;goto B59f081;
case 0x59f085:c.instructions+=8;goto B59f085;
case 0x59f087:c.instructions+=7;goto B59f087;
case 0x59f08a:c.instructions+=6;goto B59f08a;
case 0x59f08e:c.instructions+=5;goto B59f08e;
case 0x59f091:c.instructions+=4;goto B59f091;
case 0x59f094:c.instructions+=3;goto B59f094;
case 0x59f096:c.instructions+=2;goto B59f096;
case 0x59f099:c.instructions+=1;goto B59f099;
case 0x59f09b:goto L59f09b;
case 0x59f09e:c.instructions+=1;goto B59f09e;
case 0x59f0a3:goto L59f0a3;
case 0x59f0a8:goto L59f0a8;
case 0x59f0ac:c.instructions+=5;goto B59f0ac;
case 0x59f0ad:c.instructions+=4;goto B59f0ad;
case 0x59f0b1:c.instructions+=3;goto B59f0b1;
case 0x59f0b2:c.instructions+=2;goto B59f0b2;
case 0x59f0ba:c.instructions+=1;goto B59f0ba;
case 0x59f0bf:goto L59f0bf;
case 0x59f0c6:c.instructions+=4;goto B59f0c6;
case 0x59f0c7:c.instructions+=3;goto B59f0c7;
case 0x59f0ce:c.instructions+=2;goto B59f0ce;
case 0x59f0cf:c.instructions+=1;goto B59f0cf;
case 0x59f0d4:goto L59f0d4;
case 0x59f0db:c.instructions+=20;goto B59f0db;
case 0x59f0e2:c.instructions+=19;goto B59f0e2;
case 0x59f0e9:c.instructions+=18;goto B59f0e9;
case 0x59f0f0:c.instructions+=17;goto B59f0f0;
case 0x59f0f1:c.instructions+=16;goto B59f0f1;
case 0x59f0f7:c.instructions+=15;goto B59f0f7;
case 0x59f0fe:c.instructions+=14;goto B59f0fe;
case 0x59f105:c.instructions+=13;goto B59f105;
case 0x59f106:c.instructions+=12;goto B59f106;
case 0x59f108:c.instructions+=11;goto B59f108;
case 0x59f10c:c.instructions+=10;goto B59f10c;
case 0x59f10d:c.instructions+=9;goto B59f10d;
case 0x59f118:c.instructions+=8;goto B59f118;
case 0x59f123:c.instructions+=7;goto B59f123;
case 0x59f12e:c.instructions+=6;goto B59f12e;
case 0x59f132:c.instructions+=5;goto B59f132;
case 0x59f134:c.instructions+=4;goto B59f134;
case 0x59f13b:c.instructions+=3;goto B59f13b;
case 0x59f142:c.instructions+=2;goto B59f142;
case 0x59f149:c.instructions+=1;goto B59f149;
case 0x59f14e:goto L59f14e;
case 0x59f152:c.instructions+=4;goto B59f152;
case 0x59f153:c.instructions+=3;goto B59f153;
case 0x59f157:c.instructions+=2;goto B59f157;
case 0x59f158:c.instructions+=1;goto B59f158;
case 0x59f15d:goto L59f15d;
case 0x59f161:c.instructions+=6;goto B59f161;
case 0x59f162:c.instructions+=5;goto B59f162;
case 0x59f169:c.instructions+=4;goto B59f169;
case 0x59f16a:c.instructions+=3;goto B59f16a;
case 0x59f171:c.instructions+=2;goto B59f171;
case 0x59f172:c.instructions+=1;goto B59f172;
case 0x59f177:goto L59f177;
case 0x59f17e:c.instructions+=22;goto B59f17e;
case 0x59f185:c.instructions+=21;goto B59f185;
case 0x59f18c:c.instructions+=20;goto B59f18c;
case 0x59f18f:c.instructions+=19;goto B59f18f;
case 0x59f196:c.instructions+=18;goto B59f196;
case 0x59f199:c.instructions+=17;goto B59f199;
case 0x59f19c:c.instructions+=16;goto B59f19c;
case 0x59f1a3:c.instructions+=15;goto B59f1a3;
case 0x59f1a6:c.instructions+=14;goto B59f1a6;
case 0x59f1a8:c.instructions+=13;goto B59f1a8;
case 0x59f1ab:c.instructions+=12;goto B59f1ab;
case 0x59f1ae:c.instructions+=11;goto B59f1ae;
case 0x59f1b2:c.instructions+=10;goto B59f1b2;
case 0x59f1b5:c.instructions+=9;goto B59f1b5;
case 0x59f1bc:c.instructions+=8;goto B59f1bc;
case 0x59f1bf:c.instructions+=7;goto B59f1bf;
case 0x59f1c6:c.instructions+=6;goto B59f1c6;
case 0x59f1c9:c.instructions+=5;goto B59f1c9;
case 0x59f1cc:c.instructions+=4;goto B59f1cc;
case 0x59f1d3:c.instructions+=3;goto B59f1d3;
case 0x59f1d6:c.instructions+=2;goto B59f1d6;
case 0x59f1d9:c.instructions+=1;goto B59f1d9;
case 0x59f1dc:goto L59f1dc;
case 0x59f1de:c.instructions+=6;goto B59f1de;
case 0x59f1df:c.instructions+=5;goto B59f1df;
case 0x59f1e2:c.instructions+=4;goto B59f1e2;
case 0x59f1e3:c.instructions+=3;goto B59f1e3;
case 0x59f1e7:c.instructions+=2;goto B59f1e7;
case 0x59f1e8:c.instructions+=1;goto B59f1e8;
case 0x59f1ed:goto L59f1ed;
case 0x59f1f0:c.instructions+=16;goto B59f1f0;
case 0x59f1f4:c.instructions+=15;goto B59f1f4;
case 0x59f1f7:c.instructions+=14;goto B59f1f7;
case 0x59f1fa:c.instructions+=13;goto B59f1fa;
case 0x59f1fb:c.instructions+=12;goto B59f1fb;
case 0x59f1ff:c.instructions+=11;goto B59f1ff;
case 0x59f202:c.instructions+=10;goto B59f202;
case 0x59f208:c.instructions+=9;goto B59f208;
case 0x59f20c:c.instructions+=8;goto B59f20c;
case 0x59f20d:c.instructions+=7;goto B59f20d;
case 0x59f211:c.instructions+=6;goto B59f211;
case 0x59f215:c.instructions+=5;goto B59f215;
case 0x59f217:c.instructions+=4;goto B59f217;
case 0x59f21a:c.instructions+=3;goto B59f21a;
case 0x59f21d:c.instructions+=2;goto B59f21d;
case 0x59f220:c.instructions+=1;goto B59f220;
case 0x59f225:goto L59f225;
case 0x59f22b:c.instructions+=31;goto B59f22b;
case 0x59f22f:c.instructions+=30;goto B59f22f;
case 0x59f232:c.instructions+=29;goto B59f232;
case 0x59f234:c.instructions+=28;goto B59f234;
case 0x59f237:c.instructions+=27;goto B59f237;
case 0x59f23b:c.instructions+=26;goto B59f23b;
case 0x59f23d:c.instructions+=25;goto B59f23d;
case 0x59f243:c.instructions+=24;goto B59f243;
case 0x59f249:c.instructions+=23;goto B59f249;
case 0x59f24c:c.instructions+=22;goto B59f24c;
case 0x59f250:c.instructions+=21;goto B59f250;
case 0x59f256:c.instructions+=20;goto B59f256;
case 0x59f258:c.instructions+=19;goto B59f258;
case 0x59f25e:c.instructions+=18;goto B59f25e;
case 0x59f261:c.instructions+=17;goto B59f261;
case 0x59f264:c.instructions+=16;goto B59f264;
case 0x59f267:c.instructions+=15;goto B59f267;
case 0x59f26a:c.instructions+=14;goto B59f26a;
case 0x59f26c:c.instructions+=13;goto B59f26c;
case 0x59f273:c.instructions+=12;goto B59f273;
case 0x59f277:c.instructions+=11;goto B59f277;
case 0x59f279:c.instructions+=10;goto B59f279;
case 0x59f280:c.instructions+=9;goto B59f280;
case 0x59f284:c.instructions+=8;goto B59f284;
case 0x59f28b:c.instructions+=7;goto B59f28b;
case 0x59f28f:c.instructions+=6;goto B59f28f;
case 0x59f292:c.instructions+=5;goto B59f292;
case 0x59f294:c.instructions+=4;goto B59f294;
case 0x59f29a:c.instructions+=3;goto B59f29a;
case 0x59f29c:c.instructions+=2;goto B59f29c;
case 0x59f29f:c.instructions+=1;goto B59f29f;
case 0x59f2a1:goto L59f2a1;
case 0x59f2a5:c.instructions+=8;goto B59f2a5;
case 0x59f2a7:c.instructions+=7;goto B59f2a7;
case 0x59f2ab:c.instructions+=6;goto B59f2ab;
case 0x59f2af:c.instructions+=5;goto B59f2af;
case 0x59f2b1:c.instructions+=4;goto B59f2b1;
case 0x59f2b5:c.instructions+=3;goto B59f2b5;
case 0x59f2b9:c.instructions+=2;goto B59f2b9;
case 0x59f2bd:c.instructions+=1;goto B59f2bd;
case 0x59f2bf:goto L59f2bf;
case 0x59f2c3:c.instructions+=7;goto B59f2c3;
case 0x59f2c5:c.instructions+=6;goto B59f2c5;
case 0x59f2c6:c.instructions+=5;goto B59f2c6;
case 0x59f2ca:c.instructions+=4;goto B59f2ca;
case 0x59f2cb:c.instructions+=3;goto B59f2cb;
case 0x59f2cf:c.instructions+=2;goto B59f2cf;
case 0x59f2d0:c.instructions+=1;goto B59f2d0;
case 0x59f2d5:goto L59f2d5;
case 0x59f2d8:goto L59f2d8;
case 0x59f2dc:c.instructions+=3;goto B59f2dc;
case 0x59f2dd:c.instructions+=2;goto B59f2dd;
case 0x59f2df:c.instructions+=1;goto B59f2df;
case 0x59f2e4:goto L59f2e4;
case 0x59f2e8:c.instructions+=32;goto B59f2e8;
case 0x59f2ee:c.instructions+=31;goto B59f2ee;
case 0x59f2f2:c.instructions+=30;goto B59f2f2;
case 0x59f2f5:c.instructions+=29;goto B59f2f5;
case 0x59f2fb:c.instructions+=28;goto B59f2fb;
case 0x59f2fe:c.instructions+=27;goto B59f2fe;
case 0x59f302:c.instructions+=26;goto B59f302;
case 0x59f306:c.instructions+=25;goto B59f306;
case 0x59f30c:c.instructions+=24;goto B59f30c;
case 0x59f312:c.instructions+=23;goto B59f312;
case 0x59f316:c.instructions+=22;goto B59f316;
case 0x59f31c:c.instructions+=21;goto B59f31c;
case 0x59f31e:c.instructions+=20;goto B59f31e;
case 0x59f326:c.instructions+=19;goto B59f326;
case 0x59f32a:c.instructions+=18;goto B59f32a;
case 0x59f330:c.instructions+=17;goto B59f330;
case 0x59f332:c.instructions+=16;goto B59f332;
case 0x59f334:c.instructions+=15;goto B59f334;
case 0x59f338:c.instructions+=14;goto B59f338;
case 0x59f33c:c.instructions+=13;goto B59f33c;
case 0x59f342:c.instructions+=12;goto B59f342;
case 0x59f346:c.instructions+=11;goto B59f346;
case 0x59f34c:c.instructions+=10;goto B59f34c;
case 0x59f34e:c.instructions+=9;goto B59f34e;
case 0x59f352:c.instructions+=8;goto B59f352;
case 0x59f358:c.instructions+=7;goto B59f358;
case 0x59f35b:c.instructions+=6;goto B59f35b;
case 0x59f35e:c.instructions+=5;goto B59f35e;
case 0x59f362:c.instructions+=4;goto B59f362;
case 0x59f364:c.instructions+=3;goto B59f364;
case 0x59f368:c.instructions+=2;goto B59f368;
case 0x59f36c:c.instructions+=1;goto B59f36c;
case 0x59f370:goto L59f370;
case 0x59f374:c.instructions+=12;goto B59f374;
case 0x59f378:c.instructions+=11;goto B59f378;
case 0x59f37a:c.instructions+=10;goto B59f37a;
case 0x59f37e:c.instructions+=9;goto B59f37e;
case 0x59f380:c.instructions+=8;goto B59f380;
case 0x59f383:c.instructions+=7;goto B59f383;
case 0x59f387:c.instructions+=6;goto B59f387;
case 0x59f38e:c.instructions+=5;goto B59f38e;
case 0x59f391:c.instructions+=4;goto B59f391;
case 0x59f394:c.instructions+=3;goto B59f394;
case 0x59f396:c.instructions+=2;goto B59f396;
case 0x59f39d:c.instructions+=1;goto B59f39d;
case 0x59f39f:goto L59f39f;
case 0x59f3a2:c.instructions+=5;goto B59f3a2;
case 0x59f3a5:c.instructions+=4;goto B59f3a5;
case 0x59f3ac:c.instructions+=3;goto B59f3ac;
case 0x59f3b3:c.instructions+=2;goto B59f3b3;
case 0x59f3ba:c.instructions+=1;goto B59f3ba;
case 0x59f3bc:goto L59f3bc;
case 0x59f3c2:goto L59f3c2;
case 0x59f3c4:c.instructions+=1;goto B59f3c4;
case 0x59f3c9:goto L59f3c9;
case 0x59f3d0:c.instructions+=8;goto B59f3d0;
case 0x59f3d4:c.instructions+=7;goto B59f3d4;
case 0x59f3d6:c.instructions+=6;goto B59f3d6;
case 0x59f3d7:c.instructions+=5;goto B59f3d7;
case 0x59f3de:c.instructions+=4;goto B59f3de;
case 0x59f3df:c.instructions+=3;goto B59f3df;
case 0x59f3e0:c.instructions+=2;goto B59f3e0;
case 0x59f3e1:c.instructions+=1;goto B59f3e1;
case 0x59f3e6:goto L59f3e6;
case 0x59f3ea:c.instructions+=12;goto B59f3ea;
case 0x59f3ee:c.instructions+=11;goto B59f3ee;
case 0x59f3f2:c.instructions+=10;goto B59f3f2;
case 0x59f3f4:c.instructions+=9;goto B59f3f4;
case 0x59f3f8:c.instructions+=8;goto B59f3f8;
case 0x59f3fb:c.instructions+=7;goto B59f3fb;
case 0x59f405:c.instructions+=6;goto B59f405;
case 0x59f407:c.instructions+=5;goto B59f407;
case 0x59f40a:c.instructions+=4;goto B59f40a;
case 0x59f40d:c.instructions+=3;goto B59f40d;
case 0x59f40e:c.instructions+=2;goto B59f40e;
case 0x59f411:c.instructions+=1;goto B59f411;
case 0x59f416:goto L59f416;
case 0x59f418:c.instructions+=1;goto B59f418;
case 0x59f41a:goto L59f41a;
case 0x59f41e:c.instructions+=8;goto B59f41e;
case 0x59f422:c.instructions+=7;goto B59f422;
case 0x59f428:c.instructions+=6;goto B59f428;
case 0x59f42c:c.instructions+=5;goto B59f42c;
case 0x59f432:c.instructions+=4;goto B59f432;
case 0x59f438:c.instructions+=3;goto B59f438;
case 0x59f43a:c.instructions+=2;goto B59f43a;
case 0x59f43d:c.instructions+=1;goto B59f43d;
case 0x59f443:goto L59f443;
case 0x59f447:c.instructions+=13;goto B59f447;
case 0x59f44b:c.instructions+=12;goto B59f44b;
case 0x59f44f:c.instructions+=11;goto B59f44f;
case 0x59f452:c.instructions+=10;goto B59f452;
case 0x59f456:c.instructions+=9;goto B59f456;
case 0x59f45a:c.instructions+=8;goto B59f45a;
case 0x59f45d:c.instructions+=7;goto B59f45d;
case 0x59f460:c.instructions+=6;goto B59f460;
case 0x59f463:c.instructions+=5;goto B59f463;
case 0x59f464:c.instructions+=4;goto B59f464;
case 0x59f468:c.instructions+=3;goto B59f468;
case 0x59f46c:c.instructions+=2;goto B59f46c;
case 0x59f470:c.instructions+=1;goto B59f470;
case 0x59f476:goto L59f476;
case 0x59f47a:c.instructions+=2;goto B59f47a;
case 0x59f47c:c.instructions+=1;goto B59f47c;
case 0x59f47e:goto L59f47e;
case 0x59f481:c.instructions+=1;goto B59f481;
case 0x59f486:goto L59f486;
case 0x59f488:c.instructions+=1;goto B59f488;
case 0x59f48a:goto L59f48a;
case 0x59f48d:c.instructions+=4;goto B59f48d;
case 0x59f490:c.instructions+=3;goto B59f490;
case 0x59f491:c.instructions+=2;goto B59f491;
case 0x59f497:c.instructions+=1;goto B59f497;
case 0x59f49c:goto L59f49c;
case 0x59f4a2:c.instructions+=3;goto B59f4a2;
case 0x59f4a4:c.instructions+=2;goto B59f4a4;
case 0x59f4a7:c.instructions+=1;goto B59f4a7;
case 0x59f4a9:goto L59f4a9;
case 0x59f4ac:c.instructions+=1;goto B59f4ac;
case 0x59f4b1:goto L59f4b1;
case 0x59f4b4:c.instructions+=5;goto B59f4b4;
case 0x59f4b7:c.instructions+=4;goto B59f4b7;
case 0x59f4b9:c.instructions+=3;goto B59f4b9;
case 0x59f4ba:c.instructions+=2;goto B59f4ba;
case 0x59f4bb:c.instructions+=1;goto B59f4bb;
case 0x59f4c0:goto L59f4c0;
case 0x59f4c3:c.instructions+=2;goto B59f4c3;
case 0x59f4c4:c.instructions+=1;goto B59f4c4;
case 0x59f4c6:goto L59f4c6;
case 0x59f4c9:c.instructions+=1;goto B59f4c9;
case 0x59f4ce:goto L59f4ce;
case 0x59f4d1:c.instructions+=6;goto B59f4d1;
case 0x59f4d2:c.instructions+=5;goto B59f4d2;
case 0x59f4d3:c.instructions+=4;goto B59f4d3;
case 0x59f4d4:c.instructions+=3;goto B59f4d4;
case 0x59f4d6:c.instructions+=2;goto B59f4d6;
case 0x59f4d7:c.instructions+=1;goto B59f4d7;
case 0x59f4da:goto L59f4da;
case 0x59f4dc:c.instructions+=1;goto B59f4dc;
case 0x59f4e1:goto L59f4e1;
case 0x59f4e7:c.instructions+=15;goto B59f4e7;
case 0x59f4e9:c.instructions+=14;goto B59f4e9;
case 0x59f4eb:c.instructions+=13;goto B59f4eb;
case 0x59f4ee:c.instructions+=12;goto B59f4ee;
case 0x59f4f1:c.instructions+=11;goto B59f4f1;
case 0x59f4f4:c.instructions+=10;goto B59f4f4;
case 0x59f4fa:c.instructions+=9;goto B59f4fa;
case 0x59f500:c.instructions+=8;goto B59f500;
case 0x59f506:c.instructions+=7;goto B59f506;
case 0x59f509:c.instructions+=6;goto B59f509;
case 0x59f50a:c.instructions+=5;goto B59f50a;
case 0x59f50b:c.instructions+=4;goto B59f50b;
case 0x59f50c:c.instructions+=3;goto B59f50c;
case 0x59f50e:c.instructions+=2;goto B59f50e;
case 0x59f50f:c.instructions+=1;goto B59f50f;
case 0x59f520:goto L59f520;
case 0x59f521:c.instructions+=10;goto B59f521;
case 0x59f522:c.instructions+=9;goto B59f522;
case 0x59f523:c.instructions+=8;goto B59f523;
case 0x59f524:c.instructions+=7;goto B59f524;
case 0x59f528:c.instructions+=6;goto B59f528;
case 0x59f529:c.instructions+=5;goto B59f529;
case 0x59f52e:c.instructions+=4;goto B59f52e;
case 0x59f530:c.instructions+=3;goto B59f530;
case 0x59f532:c.instructions+=2;goto B59f532;
case 0x59f534:c.instructions+=1;goto B59f534;
case 0x59f539:goto L59f539;
case 0x59f53b:c.instructions+=6;goto B59f53b;
case 0x59f53d:c.instructions+=5;goto B59f53d;
case 0x59f53f:c.instructions+=4;goto B59f53f;
case 0x59f542:c.instructions+=3;goto B59f542;
case 0x59f543:c.instructions+=2;goto B59f543;
case 0x59f545:c.instructions+=1;goto B59f545;
case 0x59f54a:goto L59f54a;
case 0x59f54d:c.instructions+=2;goto B59f54d;
case 0x59f550:c.instructions+=1;goto B59f550;
case 0x59f552:goto L59f552;
case 0x59f556:goto L59f556;
case 0x59f558:c.instructions+=6;goto B59f558;
case 0x59f55a:c.instructions+=5;goto B59f55a;
case 0x59f55c:c.instructions+=4;goto B59f55c;
case 0x59f55f:c.instructions+=3;goto B59f55f;
case 0x59f560:c.instructions+=2;goto B59f560;
case 0x59f562:c.instructions+=1;goto B59f562;
case 0x59f567:goto L59f567;
case 0x59f569:c.instructions+=6;goto B59f569;
case 0x59f56b:c.instructions+=5;goto B59f56b;
case 0x59f56d:c.instructions+=4;goto B59f56d;
case 0x59f570:c.instructions+=3;goto B59f570;
case 0x59f571:c.instructions+=2;goto B59f571;
case 0x59f573:c.instructions+=1;goto B59f573;
case 0x59f578:goto L59f578;
case 0x59f57a:c.instructions+=6;goto B59f57a;
case 0x59f57c:c.instructions+=5;goto B59f57c;
case 0x59f57e:c.instructions+=4;goto B59f57e;
case 0x59f581:c.instructions+=3;goto B59f581;
case 0x59f582:c.instructions+=2;goto B59f582;
case 0x59f584:c.instructions+=1;goto B59f584;
case 0x59f589:goto L59f589;
case 0x59f58c:c.instructions+=3;goto B59f58c;
case 0x59f58d:c.instructions+=2;goto B59f58d;
case 0x59f58f:c.instructions+=1;goto B59f58f;
case 0x59f594:goto L59f594;
case 0x59f596:c.instructions+=6;goto B59f596;
case 0x59f598:c.instructions+=5;goto B59f598;
case 0x59f59a:c.instructions+=4;goto B59f59a;
case 0x59f5a0:c.instructions+=3;goto B59f5a0;
case 0x59f5a1:c.instructions+=2;goto B59f5a1;
case 0x59f5a3:c.instructions+=1;goto B59f5a3;
case 0x59f5a8:goto L59f5a8;
case 0x59f5aa:c.instructions+=6;goto B59f5aa;
case 0x59f5ac:c.instructions+=5;goto B59f5ac;
case 0x59f5ae:c.instructions+=4;goto B59f5ae;
case 0x59f5b4:c.instructions+=3;goto B59f5b4;
case 0x59f5b5:c.instructions+=2;goto B59f5b5;
case 0x59f5b7:c.instructions+=1;goto B59f5b7;
case 0x59f5bc:goto L59f5bc;
case 0x59f5c2:c.instructions+=5;goto B59f5c2;
case 0x59f5c8:c.instructions+=4;goto B59f5c8;
case 0x59f5cc:c.instructions+=3;goto B59f5cc;
case 0x59f5d2:c.instructions+=2;goto B59f5d2;
case 0x59f5da:c.instructions+=1;goto B59f5da;
case 0x59f5e0:goto L59f5e0;
case 0x59f5e3:c.instructions+=3;goto B59f5e3;
case 0x59f5e4:c.instructions+=2;goto B59f5e4;
case 0x59f5e6:c.instructions+=1;goto B59f5e6;
case 0x59f5eb:goto L59f5eb;
case 0x59f5ec:c.instructions+=2;goto B59f5ec;
case 0x59f5ee:c.instructions+=1;goto B59f5ee;
case 0x59f5f3:goto L59f5f3;
case 0x59f5f6:c.instructions+=3;goto B59f5f6;
case 0x59f5f7:c.instructions+=2;goto B59f5f7;
case 0x59f5f9:c.instructions+=1;goto B59f5f9;
case 0x59f5fe:goto L59f5fe;
case 0x59f601:c.instructions+=3;goto B59f601;
case 0x59f602:c.instructions+=2;goto B59f602;
case 0x59f604:c.instructions+=1;goto B59f604;
case 0x59f609:goto L59f609;
case 0x59f60c:c.instructions+=3;goto B59f60c;
case 0x59f60d:c.instructions+=2;goto B59f60d;
case 0x59f60f:c.instructions+=1;goto B59f60f;
case 0x59f614:goto L59f614;
case 0x59f616:c.instructions+=6;goto B59f616;
case 0x59f618:c.instructions+=5;goto B59f618;
case 0x59f61a:c.instructions+=4;goto B59f61a;
case 0x59f61d:c.instructions+=3;goto B59f61d;
case 0x59f61e:c.instructions+=2;goto B59f61e;
case 0x59f620:c.instructions+=1;goto B59f620;
case 0x59f625:goto L59f625;
case 0x59f629:c.instructions+=6;goto B59f629;
case 0x59f62b:c.instructions+=5;goto B59f62b;
case 0x59f62d:c.instructions+=4;goto B59f62d;
case 0x59f62f:c.instructions+=3;goto B59f62f;
case 0x59f630:c.instructions+=2;goto B59f630;
case 0x59f632:c.instructions+=1;goto B59f632;
case 0x59f637:goto L59f637;
case 0x59f63d:c.instructions+=3;goto B59f63d;
case 0x59f63e:c.instructions+=2;goto B59f63e;
case 0x59f640:c.instructions+=1;goto B59f640;
case 0x59f645:goto L59f645;
case 0x59f648:c.instructions+=3;goto B59f648;
case 0x59f649:c.instructions+=2;goto B59f649;
case 0x59f64b:c.instructions+=1;goto B59f64b;
case 0x59f650:goto L59f650;
case 0x59f656:c.instructions+=3;goto B59f656;
case 0x59f657:c.instructions+=2;goto B59f657;
case 0x59f659:c.instructions+=1;goto B59f659;
case 0x59f65e:goto L59f65e;
case 0x59f660:c.instructions+=5;goto B59f660;
case 0x59f662:c.instructions+=4;goto B59f662;
case 0x59f664:c.instructions+=3;goto B59f664;
case 0x59f665:c.instructions+=2;goto B59f665;
case 0x59f667:c.instructions+=1;goto B59f667;
case 0x59f66c:goto L59f66c;
case 0x59f672:c.instructions+=3;goto B59f672;
case 0x59f673:c.instructions+=2;goto B59f673;
case 0x59f675:c.instructions+=1;goto B59f675;
case 0x59f67a:goto L59f67a;
case 0x59f67d:c.instructions+=2;goto B59f67d;
case 0x59f680:c.instructions+=1;goto B59f680;
case 0x59f682:goto L59f682;
case 0x59f689:goto L59f689;
case 0x59f68d:c.instructions+=8;goto B59f68d;
case 0x59f691:c.instructions+=7;goto B59f691;
case 0x59f694:c.instructions+=6;goto B59f694;
case 0x59f697:c.instructions+=5;goto B59f697;
case 0x59f698:c.instructions+=4;goto B59f698;
case 0x59f699:c.instructions+=3;goto B59f699;
case 0x59f69d:c.instructions+=2;goto B59f69d;
case 0x59f6a1:c.instructions+=1;goto B59f6a1;
case 0x59f6a7:goto L59f6a7;
case 0x59f6ad:c.instructions+=3;goto B59f6ad;
case 0x59f6ae:c.instructions+=2;goto B59f6ae;
case 0x59f6b0:c.instructions+=1;goto B59f6b0;
case 0x59f6b5:goto L59f6b5;
case 0x59f6bb:c.instructions+=3;goto B59f6bb;
case 0x59f6bc:c.instructions+=2;goto B59f6bc;
case 0x59f6be:c.instructions+=1;goto B59f6be;
case 0x59f6c3:goto L59f6c3;
case 0x59f6c9:c.instructions+=3;goto B59f6c9;
case 0x59f6ca:c.instructions+=2;goto B59f6ca;
case 0x59f6cc:c.instructions+=1;goto B59f6cc;
case 0x59f6d1:goto L59f6d1;
case 0x59f6d7:c.instructions+=3;goto B59f6d7;
case 0x59f6d8:c.instructions+=2;goto B59f6d8;
case 0x59f6da:c.instructions+=1;goto B59f6da;
case 0x59f6df:goto L59f6df;
case 0x59f6e2:c.instructions+=4;goto B59f6e2;
case 0x59f6e5:c.instructions+=3;goto B59f6e5;
case 0x59f6e7:c.instructions+=2;goto B59f6e7;
case 0x59f6e9:c.instructions+=1;goto B59f6e9;
case 0x59f6eb:goto L59f6eb;
case 0x59f6f1:c.instructions+=2;goto B59f6f1;
case 0x59f6f7:c.instructions+=1;goto B59f6f7;
case 0x59f6fd:goto L59f6fd;
case 0x59f703:c.instructions+=3;goto B59f703;
case 0x59f704:c.instructions+=2;goto B59f704;
case 0x59f706:c.instructions+=1;goto B59f706;
case 0x59f70b:goto L59f70b;
case 0x59f711:c.instructions+=3;goto B59f711;
case 0x59f712:c.instructions+=2;goto B59f712;
case 0x59f714:c.instructions+=1;goto B59f714;
case 0x59f719:goto L59f719;
case 0x59f71b:c.instructions+=6;goto B59f71b;
case 0x59f71d:c.instructions+=5;goto B59f71d;
case 0x59f71f:c.instructions+=4;goto B59f71f;
case 0x59f725:c.instructions+=3;goto B59f725;
case 0x59f726:c.instructions+=2;goto B59f726;
case 0x59f728:c.instructions+=1;goto B59f728;
case 0x59f72d:goto L59f72d;
case 0x59f733:c.instructions+=3;goto B59f733;
case 0x59f734:c.instructions+=2;goto B59f734;
case 0x59f736:c.instructions+=1;goto B59f736;
case 0x59f73b:goto L59f73b;
case 0x59f741:c.instructions+=3;goto B59f741;
case 0x59f742:c.instructions+=2;goto B59f742;
case 0x59f744:c.instructions+=1;goto B59f744;
case 0x59f749:goto L59f749;
case 0x59f74f:c.instructions+=3;goto B59f74f;
case 0x59f750:c.instructions+=2;goto B59f750;
case 0x59f752:c.instructions+=1;goto B59f752;
case 0x59f757:goto L59f757;
case 0x59f759:c.instructions+=6;goto B59f759;
case 0x59f75b:c.instructions+=5;goto B59f75b;
case 0x59f75d:c.instructions+=4;goto B59f75d;
case 0x59f763:c.instructions+=3;goto B59f763;
case 0x59f764:c.instructions+=2;goto B59f764;
case 0x59f766:c.instructions+=1;goto B59f766;
case 0x59f76b:goto L59f76b;
case 0x59f771:c.instructions+=3;goto B59f771;
case 0x59f772:c.instructions+=2;goto B59f772;
case 0x59f774:c.instructions+=1;goto B59f774;
case 0x59f779:goto L59f779;
case 0x59f77f:c.instructions+=3;goto B59f77f;
case 0x59f780:c.instructions+=2;goto B59f780;
case 0x59f782:c.instructions+=1;goto B59f782;
case 0x59f787:goto L59f787;
case 0x59f78d:c.instructions+=3;goto B59f78d;
case 0x59f78e:c.instructions+=2;goto B59f78e;
case 0x59f790:c.instructions+=1;goto B59f790;
case 0x59f795:goto L59f795;
case 0x59f797:c.instructions+=6;goto B59f797;
case 0x59f799:c.instructions+=5;goto B59f799;
case 0x59f79b:c.instructions+=4;goto B59f79b;
case 0x59f7a1:c.instructions+=3;goto B59f7a1;
case 0x59f7a2:c.instructions+=2;goto B59f7a2;
case 0x59f7a4:c.instructions+=1;goto B59f7a4;
case 0x59f7a9:goto L59f7a9;
case 0x59f7af:c.instructions+=3;goto B59f7af;
case 0x59f7b0:c.instructions+=2;goto B59f7b0;
case 0x59f7b2:c.instructions+=1;goto B59f7b2;
case 0x59f7b7:goto L59f7b7;
case 0x59f7bd:c.instructions+=3;goto B59f7bd;
case 0x59f7be:c.instructions+=2;goto B59f7be;
case 0x59f7c0:c.instructions+=1;goto B59f7c0;
case 0x59f7c5:goto L59f7c5;
case 0x59f7cb:c.instructions+=3;goto B59f7cb;
case 0x59f7cc:c.instructions+=2;goto B59f7cc;
case 0x59f7ce:c.instructions+=1;goto B59f7ce;
case 0x59f7d3:goto L59f7d3;
case 0x59f7d9:c.instructions+=3;goto B59f7d9;
case 0x59f7da:c.instructions+=2;goto B59f7da;
case 0x59f7dc:c.instructions+=1;goto B59f7dc;
case 0x59f7e1:goto L59f7e1;
case 0x59f7e7:c.instructions+=3;goto B59f7e7;
case 0x59f7e8:c.instructions+=2;goto B59f7e8;
case 0x59f7ea:c.instructions+=1;goto B59f7ea;
case 0x59f7ef:goto L59f7ef;
case 0x59f7f2:c.instructions+=2;goto B59f7f2;
case 0x59f7f5:c.instructions+=1;goto B59f7f5;
case 0x59f7f7:goto L59f7f7;
case 0x59f7fd:c.instructions+=2;goto B59f7fd;
case 0x59f7fe:c.instructions+=1;goto B59f7fe;
case 0x59f803:goto L59f803;
case 0x59f806:c.instructions+=6;goto B59f806;
case 0x59f80d:c.instructions+=5;goto B59f80d;
case 0x59f813:c.instructions+=4;goto B59f813;
case 0x59f81d:c.instructions+=3;goto B59f81d;
case 0x59f823:c.instructions+=2;goto B59f823;
case 0x59f828:c.instructions+=1;goto B59f828;
case 0x59f830:goto L59f830;
case 0x59f833:c.instructions+=5;goto B59f833;
case 0x59f837:c.instructions+=4;goto B59f837;
case 0x59f83d:c.instructions+=3;goto B59f83d;
case 0x59f840:c.instructions+=2;goto B59f840;
case 0x59f842:c.instructions+=1;goto B59f842;
case 0x59f844:goto L59f844;
case 0x59f84a:goto L59f84a;
case 0x59f84b:c.instructions+=2;goto B59f84b;
case 0x59f84c:c.instructions+=1;goto B59f84c;
case 0x59f84e:goto L59f84e;
case 0x59f850:goto L59f850;
case 0x59f851:c.instructions+=2;goto B59f851;
case 0x59f853:c.instructions+=1;goto B59f853;
case 0x59f858:goto L59f858;
case 0x59f859:c.instructions+=2;goto B59f859;
case 0x59f85c:c.instructions+=1;goto B59f85c;
case 0x59f85e:goto L59f85e;
case 0x59f861:c.instructions+=4;goto B59f861;
case 0x59f862:c.instructions+=3;goto B59f862;
case 0x59f868:c.instructions+=2;goto B59f868;
case 0x59f869:c.instructions+=1;goto B59f869;
case 0x59f86e:goto L59f86e;
case 0x59f871:goto L59f871;
case 0x59f873:c.instructions+=1;goto B59f873;
case 0x59f878:goto L59f878;
case 0x59f879:c.instructions+=5;goto B59f879;
case 0x59f87a:c.instructions+=4;goto B59f87a;
case 0x59f87b:c.instructions+=3;goto B59f87b;
case 0x59f87c:c.instructions+=2;goto B59f87c;
case 0x59f87d:c.instructions+=1;goto B59f87d;
case 0x59f880:goto L59f880;
case 0x59f881:c.instructions+=13;goto B59f881;
case 0x59f882:c.instructions+=12;goto B59f882;
case 0x59f884:c.instructions+=11;goto B59f884;
case 0x59f886:c.instructions+=10;goto B59f886;
case 0x59f889:c.instructions+=9;goto B59f889;
case 0x59f88c:c.instructions+=8;goto B59f88c;
case 0x59f88f:c.instructions+=7;goto B59f88f;
case 0x59f892:c.instructions+=6;goto B59f892;
case 0x59f893:c.instructions+=5;goto B59f893;
case 0x59f894:c.instructions+=4;goto B59f894;
case 0x59f897:c.instructions+=3;goto B59f897;
case 0x59f89a:c.instructions+=2;goto B59f89a;
case 0x59f89d:c.instructions+=1;goto B59f89d;
case 0x59f8a2:goto L59f8a2;
case 0x59f8a9:c.instructions+=14;goto B59f8a9;
case 0x59f8b0:c.instructions+=13;goto B59f8b0;
case 0x59f8b6:c.instructions+=12;goto B59f8b6;
case 0x59f8bc:c.instructions+=11;goto B59f8bc;
case 0x59f8c2:c.instructions+=10;goto B59f8c2;
case 0x59f8c5:c.instructions+=9;goto B59f8c5;
case 0x59f8cb:c.instructions+=8;goto B59f8cb;
case 0x59f8d1:c.instructions+=7;goto B59f8d1;
case 0x59f8d7:c.instructions+=6;goto B59f8d7;
case 0x59f8dd:c.instructions+=5;goto B59f8dd;
case 0x59f8e3:c.instructions+=4;goto B59f8e3;
case 0x59f8e9:c.instructions+=3;goto B59f8e9;
case 0x59f8ee:c.instructions+=2;goto B59f8ee;
case 0x59f8ef:c.instructions+=1;goto B59f8ef;
case 0x59f8f0:goto L59f8f0;
case 0x59f8f3:c.instructions+=19;goto B59f8f3;
case 0x59f8f5:c.instructions+=18;goto B59f8f5;
case 0x59f8f8:c.instructions+=17;goto B59f8f8;
case 0x59f8fb:c.instructions+=16;goto B59f8fb;
case 0x59f8fe:c.instructions+=15;goto B59f8fe;
case 0x59f902:c.instructions+=14;goto B59f902;
case 0x59f905:c.instructions+=13;goto B59f905;
case 0x59f90a:c.instructions+=12;goto B59f90a;
case 0x59f90d:c.instructions+=11;goto B59f90d;
case 0x59f910:c.instructions+=10;goto B59f910;
case 0x59f912:c.instructions+=9;goto B59f912;
case 0x59f915:c.instructions+=8;goto B59f915;
case 0x59f91b:c.instructions+=7;goto B59f91b;
case 0x59f91e:c.instructions+=6;goto B59f91e;
case 0x59f924:c.instructions+=5;goto B59f924;
case 0x59f927:c.instructions+=4;goto B59f927;
case 0x59f928:c.instructions+=3;goto B59f928;
case 0x59f92b:c.instructions+=2;goto B59f92b;
case 0x59f92c:c.instructions+=1;goto B59f92c;
case 0x59f92e:goto L59f92e;
case 0x59f933:c.instructions+=3;goto B59f933;
case 0x59f939:c.instructions+=2;goto B59f939;
case 0x59f93f:c.instructions+=1;goto B59f93f;
case 0x59f941:goto L59f941;
case 0x59f942:c.instructions+=2;goto B59f942;
case 0x59f944:c.instructions+=1;goto B59f944;
case 0x59f949:goto L59f949;
case 0x59f94a:c.instructions+=2;goto B59f94a;
case 0x59f94c:c.instructions+=1;goto B59f94c;
case 0x59f94e:goto L59f94e;
case 0x59f953:c.instructions+=15;goto B59f953;
case 0x59f959:c.instructions+=14;goto B59f959;
case 0x59f95f:c.instructions+=13;goto B59f95f;
case 0x59f965:c.instructions+=12;goto B59f965;
case 0x59f96b:c.instructions+=11;goto B59f96b;
case 0x59f971:c.instructions+=10;goto B59f971;
case 0x59f977:c.instructions+=9;goto B59f977;
case 0x59f97d:c.instructions+=8;goto B59f97d;
case 0x59f983:c.instructions+=7;goto B59f983;
case 0x59f98d:c.instructions+=6;goto B59f98d;
case 0x59f997:c.instructions+=5;goto B59f997;
case 0x59f99d:c.instructions+=4;goto B59f99d;
case 0x59f9a3:c.instructions+=3;goto B59f9a3;
case 0x59f9a5:c.instructions+=2;goto B59f9a5;
case 0x59f9a6:c.instructions+=1;goto B59f9a6;
case 0x59f9a8:goto L59f9a8;
case 0x59f9ad:c.instructions+=1;goto B59f9ad;
case 0x59f9af:goto L59f9af;
case 0x59f9b5:c.instructions+=5;goto B59f9b5;
case 0x59f9bb:c.instructions+=4;goto B59f9bb;
case 0x59f9c1:c.instructions+=3;goto B59f9c1;
case 0x59f9c3:c.instructions+=2;goto B59f9c3;
case 0x59f9c6:c.instructions+=1;goto B59f9c6;
case 0x59f9c8:goto L59f9c8;
case 0x59f9ca:c.instructions+=1;goto B59f9ca;
case 0x59f9cf:goto L59f9cf;
case 0x59f9d4:c.instructions+=7;goto B59f9d4;
case 0x59f9da:c.instructions+=6;goto B59f9da;
case 0x59f9e0:c.instructions+=5;goto B59f9e0;
case 0x59f9e6:c.instructions+=4;goto B59f9e6;
case 0x59f9ec:c.instructions+=3;goto B59f9ec;
case 0x59f9f2:c.instructions+=2;goto B59f9f2;
case 0x59f9f7:c.instructions+=1;goto B59f9f7;
case 0x59f9f9:goto L59f9f9;
case 0x59f9fb:goto L59f9fb;
case 0x59f9fc:c.instructions+=4;goto B59f9fc;
case 0x59fa02:c.instructions+=3;goto B59fa02;
case 0x59fa03:c.instructions+=2;goto B59fa03;
case 0x59fa04:c.instructions+=1;goto B59fa04;
case 0x59fa10:goto L59fa10;
case 0x59fa16:c.instructions+=4;goto B59fa16;
case 0x59fa1c:c.instructions+=3;goto B59fa1c;
case 0x59fa1e:c.instructions+=2;goto B59fa1e;
case 0x59fa21:c.instructions+=1;goto B59fa21;
case 0x59fa23:goto L59fa23;
case 0x59fa29:c.instructions+=1;goto B59fa29;
case 0x59fa2a:goto L59fa2a;
case 0x59fa30:goto L59fa30;
case 0x59fa31:c.instructions+=7;goto B59fa31;
case 0x59fa32:c.instructions+=6;goto B59fa32;
case 0x59fa33:c.instructions+=5;goto B59fa33;
case 0x59fa35:c.instructions+=4;goto B59fa35;
case 0x59fa3b:c.instructions+=3;goto B59fa3b;
case 0x59fa3d:c.instructions+=2;goto B59fa3d;
case 0x59fa3f:c.instructions+=1;goto B59fa3f;
case 0x59fa41:goto L59fa41;
case 0x59fa46:c.instructions+=1;goto B59fa46;
case 0x59fa48:goto L59fa48;
case 0x59fa4d:goto L59fa4d;
case 0x59fa51:c.instructions+=2;goto B59fa51;
case 0x59fa56:c.instructions+=1;goto B59fa56;
case 0x59fa60:goto L59fa60;
case 0x59fa64:c.instructions+=4;goto B59fa64;
case 0x59fa6b:c.instructions+=3;goto B59fa6b;
case 0x59fa6d:c.instructions+=2;goto B59fa6d;
case 0x59fa70:c.instructions+=1;goto B59fa70;
case 0x59fa72:goto L59fa72;
case 0x59fa73:c.instructions+=1;goto B59fa73;
case 0x59fa75:goto L59fa75;
case 0x59fa77:c.instructions+=1;goto B59fa77;
case 0x59fa7c:goto L59fa7c;
case 0x59fa7d:c.instructions+=4;goto B59fa7d;
case 0x59fa7f:c.instructions+=3;goto B59fa7f;
case 0x59fa80:c.instructions+=2;goto B59fa80;
case 0x59fa81:c.instructions+=1;goto B59fa81;
case 0x59fa82:goto L59fa82;
case 0x59fa85:c.instructions+=2;goto B59fa85;
case 0x59fa87:c.instructions+=1;goto B59fa87;
case 0x59fa89:goto L59fa89;
case 0x59fa8b:c.instructions+=1;goto B59fa8b;
case 0x59fa90:goto L59fa90;
case 0x59fa91:c.instructions+=4;goto B59fa91;
case 0x59fa93:c.instructions+=3;goto B59fa93;
case 0x59fa94:c.instructions+=2;goto B59fa94;
case 0x59fa95:c.instructions+=1;goto B59fa95;
case 0x59faa0:goto L59faa0;
case 0x59faa1:c.instructions+=5;goto B59faa1;
case 0x59faa7:c.instructions+=4;goto B59faa7;
case 0x59faa8:c.instructions+=3;goto B59faa8;
case 0x59faaa:c.instructions+=2;goto B59faaa;
case 0x59faac:c.instructions+=1;goto B59faac;
case 0x59faae:goto L59faae;
case 0x59fab3:c.instructions+=1;goto B59fab3;
case 0x59fab5:goto L59fab5;
case 0x59faba:goto L59faba;
case 0x59fabe:c.instructions+=1;goto B59fabe;
case 0x59fac3:goto L59fac3;
case 0x59fac7:c.instructions+=4;goto B59fac7;
case 0x59face:c.instructions+=3;goto B59face;
case 0x59fad0:c.instructions+=2;goto B59fad0;
case 0x59fad3:c.instructions+=1;goto B59fad3;
case 0x59fad5:goto L59fad5;
case 0x59fad6:c.instructions+=1;goto B59fad6;
case 0x59fad8:goto L59fad8;
case 0x59fada:c.instructions+=3;goto B59fada;
case 0x59fadb:c.instructions+=2;goto B59fadb;
case 0x59fadc:c.instructions+=1;goto B59fadc;
case 0x59fadd:goto L59fadd;
case 0x59fae0:c.instructions+=3;goto B59fae0;
case 0x59fae1:c.instructions+=2;goto B59fae1;
case 0x59fae2:c.instructions+=1;goto B59fae2;
case 0x59faf0:goto L59faf0;
case 0x59faf1:c.instructions+=3;goto B59faf1;
case 0x59faf2:c.instructions+=2;goto B59faf2;
case 0x59faf4:c.instructions+=1;goto B59faf4;
case 0x59faf9:goto L59faf9;
case 0x59fafb:c.instructions+=3;goto B59fafb;
case 0x59fafe:c.instructions+=2;goto B59fafe;
case 0x59fb00:c.instructions+=1;goto B59fb00;
case 0x59fb02:goto L59fb02;
case 0x59fb07:c.instructions+=1;goto B59fb07;
case 0x59fb0c:goto L59fb0c;
case 0x59fb0e:c.instructions+=2;goto B59fb0e;
case 0x59fb13:c.instructions+=1;goto B59fb13;
case 0x59fb15:goto L59fb15;
case 0x59fb1a:goto L59fb1a;
case 0x59fb1c:c.instructions+=5;goto B59fb1c;
case 0x59fb22:c.instructions+=4;goto B59fb22;
case 0x59fb27:c.instructions+=3;goto B59fb27;
case 0x59fb29:c.instructions+=2;goto B59fb29;
case 0x59fb2b:c.instructions+=1;goto B59fb2b;
case 0x59fb2d:goto L59fb2d;
case 0x59fb33:c.instructions+=4;goto B59fb33;
case 0x59fb39:c.instructions+=3;goto B59fb39;
case 0x59fb3a:c.instructions+=2;goto B59fb3a;
case 0x59fb3b:c.instructions+=1;goto B59fb3b;
case 0x59fb3c:goto L59fb3c;
case 0x59fb3e:goto L59fb3e;
case 0x59fb3f:c.instructions+=2;goto B59fb3f;
case 0x59fb40:c.instructions+=1;goto B59fb40;
case 0x59fb50:goto L59fb50;
case 0x59fb52:c.instructions+=9;goto B59fb52;
case 0x59fb54:c.instructions+=8;goto B59fb54;
case 0x59fb58:c.instructions+=7;goto B59fb58;
case 0x59fb5c:c.instructions+=6;goto B59fb5c;
case 0x59fb60:c.instructions+=5;goto B59fb60;
case 0x59fb64:c.instructions+=4;goto B59fb64;
case 0x59fb67:c.instructions+=3;goto B59fb67;
case 0x59fb6a:c.instructions+=2;goto B59fb6a;
case 0x59fb6d:c.instructions+=1;goto B59fb6d;
case 0x59fb70:goto L59fb70;
case 0x59fb71:c.instructions+=28;goto B59fb71;
case 0x59fb73:c.instructions+=27;goto B59fb73;
case 0x59fb76:c.instructions+=26;goto B59fb76;
case 0x59fb7c:c.instructions+=25;goto B59fb7c;
case 0x59fb7f:c.instructions+=24;goto B59fb7f;
case 0x59fb82:c.instructions+=23;goto B59fb82;
case 0x59fb83:c.instructions+=22;goto B59fb83;
case 0x59fb86:c.instructions+=21;goto B59fb86;
case 0x59fb87:c.instructions+=20;goto B59fb87;
case 0x59fb89:c.instructions+=19;goto B59fb89;
case 0x59fb8a:c.instructions+=18;goto B59fb8a;
case 0x59fb8c:c.instructions+=17;goto B59fb8c;
case 0x59fb8e:c.instructions+=16;goto B59fb8e;
case 0x59fb90:c.instructions+=15;goto B59fb90;
case 0x59fb94:c.instructions+=14;goto B59fb94;
case 0x59fb96:c.instructions+=13;goto B59fb96;
case 0x59fb98:c.instructions+=12;goto B59fb98;
case 0x59fb9a:c.instructions+=11;goto B59fb9a;
case 0x59fb9c:c.instructions+=10;goto B59fb9c;
case 0x59fb9e:c.instructions+=9;goto B59fb9e;
case 0x59fba0:c.instructions+=8;goto B59fba0;
case 0x59fba2:c.instructions+=7;goto B59fba2;
case 0x59fba4:c.instructions+=6;goto B59fba4;
case 0x59fba6:c.instructions+=5;goto B59fba6;
case 0x59fba8:c.instructions+=4;goto B59fba8;
case 0x59fbae:c.instructions+=3;goto B59fbae;
case 0x59fbb0:c.instructions+=2;goto B59fbb0;
case 0x59fbb3:c.instructions+=1;goto B59fbb3;
case 0x59fbb5:goto L59fbb5;
case 0x59fbb9:c.instructions+=1;goto B59fbb9;
case 0x59fbbb:goto L59fbbb;
case 0x59fbc0:c.instructions+=2;goto B59fbc0;
case 0x59fbc2:c.instructions+=1;goto B59fbc2;
case 0x59fbc6:goto L59fbc6;
case 0x59fbc9:c.instructions+=7;goto B59fbc9;
case 0x59fbcf:c.instructions+=6;goto B59fbcf;
case 0x59fbd2:c.instructions+=5;goto B59fbd2;
case 0x59fbd4:c.instructions+=4;goto B59fbd4;
case 0x59fbd6:c.instructions+=3;goto B59fbd6;
case 0x59fbda:c.instructions+=2;goto B59fbda;
case 0x59fbde:c.instructions+=1;goto B59fbde;
case 0x59fbe0:goto L59fbe0;
case 0x59fbe4:goto L59fbe4;
case 0x59fbea:c.instructions+=3;goto B59fbea;
case 0x59fbed:c.instructions+=2;goto B59fbed;
case 0x59fbef:c.instructions+=1;goto B59fbef;
case 0x59fbf1:goto L59fbf1;
case 0x59fbf5:goto L59fbf5;
case 0x59fbf8:c.instructions+=6;goto B59fbf8;
case 0x59fbfa:c.instructions+=5;goto B59fbfa;
case 0x59fbfe:c.instructions+=4;goto B59fbfe;
case 0x59fc00:c.instructions+=3;goto B59fc00;
case 0x59fc04:c.instructions+=2;goto B59fc04;
case 0x59fc06:c.instructions+=1;goto B59fc06;
case 0x59fc0c:goto L59fc0c;
case 0x59fc11:c.instructions+=2;goto B59fc11;
case 0x59fc13:c.instructions+=1;goto B59fc13;
case 0x59fc15:goto L59fc15;
case 0x59fc1a:c.instructions+=2;goto B59fc1a;
case 0x59fc1c:c.instructions+=1;goto B59fc1c;
case 0x59fc1e:goto L59fc1e;
case 0x59fc24:c.instructions+=3;goto B59fc24;
case 0x59fc27:c.instructions+=2;goto B59fc27;
case 0x59fc29:c.instructions+=1;goto B59fc29;
case 0x59fc2b:goto L59fc2b;
case 0x59fc2f:c.instructions+=4;goto B59fc2f;
case 0x59fc35:c.instructions+=3;goto B59fc35;
case 0x59fc37:c.instructions+=2;goto B59fc37;
case 0x59fc3a:c.instructions+=1;goto B59fc3a;
case 0x59fc3c:goto L59fc3c;
case 0x59fc3e:c.instructions+=2;goto B59fc3e;
case 0x59fc40:c.instructions+=1;goto B59fc40;
case 0x59fc43:goto L59fc43;
case 0x59fc46:c.instructions+=4;goto B59fc46;
case 0x59fc4c:c.instructions+=3;goto B59fc4c;
case 0x59fc4e:c.instructions+=2;goto B59fc4e;
case 0x59fc51:c.instructions+=1;goto B59fc51;
case 0x59fc53:goto L59fc53;
case 0x59fc59:c.instructions+=4;goto B59fc59;
case 0x59fc5f:c.instructions+=3;goto B59fc5f;
case 0x59fc61:c.instructions+=2;goto B59fc61;
case 0x59fc68:c.instructions+=1;goto B59fc68;
case 0x59fc6a:goto L59fc6a;
case 0x59fc6c:c.instructions+=1;goto B59fc6c;
case 0x59fc71:goto L59fc71;
case 0x59fc75:c.instructions+=4;goto B59fc75;
case 0x59fc7b:c.instructions+=3;goto B59fc7b;
case 0x59fc7d:c.instructions+=2;goto B59fc7d;
case 0x59fc80:c.instructions+=1;goto B59fc80;
case 0x59fc86:goto L59fc86;
case 0x59fc8c:c.instructions+=4;goto B59fc8c;
case 0x59fc8f:c.instructions+=3;goto B59fc8f;
case 0x59fc94:c.instructions+=2;goto B59fc94;
case 0x59fc96:c.instructions+=1;goto B59fc96;
case 0x59fc9c:goto L59fc9c;
case 0x59fc9f:c.instructions+=3;goto B59fc9f;
case 0x59fca5:c.instructions+=2;goto B59fca5;
case 0x59fca9:c.instructions+=1;goto B59fca9;
case 0x59fcaf:goto L59fcaf;
case 0x59fcb5:c.instructions+=3;goto B59fcb5;
case 0x59fcb8:c.instructions+=2;goto B59fcb8;
case 0x59fcba:c.instructions+=1;goto B59fcba;
case 0x59fcc0:goto L59fcc0;
case 0x59fcc3:c.instructions+=3;goto B59fcc3;
case 0x59fcc4:c.instructions+=2;goto B59fcc4;
case 0x59fcca:c.instructions+=1;goto B59fcca;
case 0x59fccf:goto L59fccf;
case 0x59fcd1:c.instructions+=2;goto B59fcd1;
case 0x59fcd3:c.instructions+=1;goto B59fcd3;
case 0x59fcd6:goto L59fcd6;
case 0x59fcd9:c.instructions+=13;goto B59fcd9;
case 0x59fcdc:c.instructions+=12;goto B59fcdc;
case 0x59fcdf:c.instructions+=11;goto B59fcdf;
case 0x59fce2:c.instructions+=10;goto B59fce2;
case 0x59fce4:c.instructions+=9;goto B59fce4;
case 0x59fce6:c.instructions+=8;goto B59fce6;
case 0x59fcea:c.instructions+=7;goto B59fcea;
case 0x59fcec:c.instructions+=6;goto B59fcec;
case 0x59fcef:c.instructions+=5;goto B59fcef;
case 0x59fcf3:c.instructions+=4;goto B59fcf3;
case 0x59fcf5:c.instructions+=3;goto B59fcf5;
case 0x59fcf9:c.instructions+=2;goto B59fcf9;
case 0x59fcfd:c.instructions+=1;goto B59fcfd;
case 0x59fcff:goto L59fcff;
case 0x59fd01:c.instructions+=6;goto B59fd01;
case 0x59fd04:c.instructions+=5;goto B59fd04;
case 0x59fd07:c.instructions+=4;goto B59fd07;
case 0x59fd0b:c.instructions+=3;goto B59fd0b;
case 0x59fd0f:c.instructions+=2;goto B59fd0f;
case 0x59fd13:c.instructions+=1;goto B59fd13;
case 0x59fd15:goto L59fd15;
case 0x59fd17:c.instructions+=11;goto B59fd17;
case 0x59fd19:c.instructions+=10;goto B59fd19;
case 0x59fd1c:c.instructions+=9;goto B59fd1c;
case 0x59fd1e:c.instructions+=8;goto B59fd1e;
case 0x59fd21:c.instructions+=7;goto B59fd21;
case 0x59fd23:c.instructions+=6;goto B59fd23;
case 0x59fd2a:c.instructions+=5;goto B59fd2a;
case 0x59fd31:c.instructions+=4;goto B59fd31;
case 0x59fd33:c.instructions+=3;goto B59fd33;
case 0x59fd37:c.instructions+=2;goto B59fd37;
case 0x59fd3b:c.instructions+=1;goto B59fd3b;
case 0x59fd3f:goto L59fd3f;
case 0x59fd43:c.instructions+=4;goto B59fd43;
case 0x59fd44:c.instructions+=3;goto B59fd44;
case 0x59fd4b:c.instructions+=2;goto B59fd4b;
case 0x59fd4c:c.instructions+=1;goto B59fd4c;
case 0x59fd51:goto L59fd51;
case 0x59fd58:c.instructions+=9;goto B59fd58;
case 0x59fd5f:c.instructions+=8;goto B59fd5f;
case 0x59fd66:c.instructions+=7;goto B59fd66;
case 0x59fd6a:c.instructions+=6;goto B59fd6a;
case 0x59fd6e:c.instructions+=5;goto B59fd6e;
case 0x59fd70:c.instructions+=4;goto B59fd70;
case 0x59fd73:c.instructions+=3;goto B59fd73;
case 0x59fd75:c.instructions+=2;goto B59fd75;
case 0x59fd79:c.instructions+=1;goto B59fd79;
case 0x59fd7c:goto L59fd7c;
case 0x59fd7d:c.instructions+=3;goto B59fd7d;
case 0x59fd84:c.instructions+=2;goto B59fd84;
case 0x59fd85:c.instructions+=1;goto B59fd85;
case 0x59fd8a:goto L59fd8a;
case 0x59fd91:c.instructions+=18;goto B59fd91;
case 0x59fd98:c.instructions+=17;goto B59fd98;
case 0x59fd9c:c.instructions+=16;goto B59fd9c;
case 0x59fda3:c.instructions+=15;goto B59fda3;
case 0x59fda5:c.instructions+=14;goto B59fda5;
case 0x59fdac:c.instructions+=13;goto B59fdac;
case 0x59fdb3:c.instructions+=12;goto B59fdb3;
case 0x59fdb7:c.instructions+=11;goto B59fdb7;
case 0x59fdbb:c.instructions+=10;goto B59fdbb;
case 0x59fdbe:c.instructions+=9;goto B59fdbe;
case 0x59fdc0:c.instructions+=8;goto B59fdc0;
case 0x59fdc4:c.instructions+=7;goto B59fdc4;
case 0x59fdc8:c.instructions+=6;goto B59fdc8;
case 0x59fdca:c.instructions+=5;goto B59fdca;
case 0x59fdce:c.instructions+=4;goto B59fdce;
case 0x59fdd4:c.instructions+=3;goto B59fdd4;
case 0x59fdd6:c.instructions+=2;goto B59fdd6;
case 0x59fdd9:c.instructions+=1;goto B59fdd9;
case 0x59fddf:goto L59fddf;
case 0x59fde3:c.instructions+=27;goto B59fde3;
case 0x59fde7:c.instructions+=26;goto B59fde7;
case 0x59fdeb:c.instructions+=25;goto B59fdeb;
case 0x59fdec:c.instructions+=24;goto B59fdec;
case 0x59fdf0:c.instructions+=23;goto B59fdf0;
case 0x59fdf4:c.instructions+=22;goto B59fdf4;
case 0x59fdf8:c.instructions+=21;goto B59fdf8;
case 0x59fdf9:c.instructions+=20;goto B59fdf9;
case 0x59fdfd:c.instructions+=19;goto B59fdfd;
case 0x59fe04:c.instructions+=18;goto B59fe04;
case 0x59fe06:c.instructions+=17;goto B59fe06;
case 0x59fe0d:c.instructions+=16;goto B59fe0d;
case 0x59fe14:c.instructions+=15;goto B59fe14;
case 0x59fe1b:c.instructions+=14;goto B59fe1b;
case 0x59fe1f:c.instructions+=13;goto B59fe1f;
case 0x59fe26:c.instructions+=12;goto B59fe26;
case 0x59fe2a:c.instructions+=11;goto B59fe2a;
case 0x59fe31:c.instructions+=10;goto B59fe31;
case 0x59fe35:c.instructions+=9;goto B59fe35;
case 0x59fe37:c.instructions+=8;goto B59fe37;
case 0x59fe3e:c.instructions+=7;goto B59fe3e;
case 0x59fe45:c.instructions+=6;goto B59fe45;
case 0x59fe47:c.instructions+=5;goto B59fe47;
case 0x59fe4b:c.instructions+=4;goto B59fe4b;
case 0x59fe4f:c.instructions+=3;goto B59fe4f;
case 0x59fe53:c.instructions+=2;goto B59fe53;
case 0x59fe55:c.instructions+=1;goto B59fe55;
case 0x59fe5a:goto L59fe5a;
case 0x59fe5e:c.instructions+=18;goto B59fe5e;
case 0x59fe60:c.instructions+=17;goto B59fe60;
case 0x59fe62:c.instructions+=16;goto B59fe62;
case 0x59fe65:c.instructions+=15;goto B59fe65;
case 0x59fe6b:c.instructions+=14;goto B59fe6b;
case 0x59fe6f:c.instructions+=13;goto B59fe6f;
case 0x59fe70:c.instructions+=12;goto B59fe70;
case 0x59fe74:c.instructions+=11;goto B59fe74;
case 0x59fe78:c.instructions+=10;goto B59fe78;
case 0x59fe79:c.instructions+=9;goto B59fe79;
case 0x59fe7b:c.instructions+=8;goto B59fe7b;
case 0x59fe7d:c.instructions+=7;goto B59fe7d;
case 0x59fe85:c.instructions+=6;goto B59fe85;
case 0x59fe89:c.instructions+=5;goto B59fe89;
case 0x59fe8b:c.instructions+=4;goto B59fe8b;
case 0x59fe8f:c.instructions+=3;goto B59fe8f;
case 0x59fe93:c.instructions+=2;goto B59fe93;
case 0x59fe97:c.instructions+=1;goto B59fe97;
case 0x59fe9a:goto L59fe9a;
case 0x59fe9c:goto L59fe9c;
case 0x59fe9e:goto L59fe9e;
case 0x59fea0:c.instructions+=2;goto B59fea0;
case 0x59fea2:c.instructions+=1;goto B59fea2;
case 0x59fea5:goto L59fea5;
case 0x59fea7:c.instructions+=14;goto B59fea7;
case 0x59fea9:c.instructions+=13;goto B59fea9;
case 0x59feab:c.instructions+=12;goto B59feab;
case 0x59feae:c.instructions+=11;goto B59feae;
case 0x59feb1:c.instructions+=10;goto B59feb1;
case 0x59feb4:c.instructions+=9;goto B59feb4;
case 0x59feb7:c.instructions+=8;goto B59feb7;
case 0x59febe:c.instructions+=7;goto B59febe;
case 0x59fec5:c.instructions+=6;goto B59fec5;
case 0x59fec7:c.instructions+=5;goto B59fec7;
case 0x59fecb:c.instructions+=4;goto B59fecb;
case 0x59fecf:c.instructions+=3;goto B59fecf;
case 0x59fed1:c.instructions+=2;goto B59fed1;
case 0x59fed5:c.instructions+=1;goto B59fed5;
case 0x59fed8:goto L59fed8;
case 0x59fed9:c.instructions+=3;goto B59fed9;
case 0x59fee0:c.instructions+=2;goto B59fee0;
case 0x59fee1:c.instructions+=1;goto B59fee1;
case 0x59fee6:goto L59fee6;
case 0x59feea:c.instructions+=6;goto B59feea;
case 0x59feeb:c.instructions+=5;goto B59feeb;
case 0x59fef2:c.instructions+=4;goto B59fef2;
case 0x59fef3:c.instructions+=3;goto B59fef3;
case 0x59fef7:c.instructions+=2;goto B59fef7;
case 0x59fef8:c.instructions+=1;goto B59fef8;
case 0x59fefd:goto L59fefd;
case 0x59ff01:c.instructions+=6;goto B59ff01;
case 0x59ff07:c.instructions+=5;goto B59ff07;
case 0x59ff0a:c.instructions+=4;goto B59ff0a;
case 0x59ff12:c.instructions+=3;goto B59ff12;
case 0x59ff14:c.instructions+=2;goto B59ff14;
case 0x59ff17:c.instructions+=1;goto B59ff17;
case 0x59ff19:goto L59ff19;
case 0x59ff1f:c.instructions+=2;goto B59ff1f;
case 0x59ff21:c.instructions+=1;goto B59ff21;
case 0x59ff26:goto L59ff26;
case 0x59ff29:c.instructions+=1;goto B59ff29;
case 0x59ff2b:goto L59ff2b;
case 0x59ff2f:c.instructions+=3;goto B59ff2f;
case 0x59ff35:c.instructions+=2;goto B59ff35;
case 0x59ff37:c.instructions+=1;goto B59ff37;
case 0x59ff3b:goto L59ff3b;
case 0x59ff3f:c.instructions+=5;goto B59ff3f;
case 0x59ff41:c.instructions+=4;goto B59ff41;
case 0x59ff47:c.instructions+=3;goto B59ff47;
case 0x59ff49:c.instructions+=2;goto B59ff49;
case 0x59ff4c:c.instructions+=1;goto B59ff4c;
case 0x59ff52:goto L59ff52;
case 0x59ff56:c.instructions+=3;goto B59ff56;
case 0x59ff5c:c.instructions+=2;goto B59ff5c;
case 0x59ff60:c.instructions+=1;goto B59ff60;
case 0x59ff65:goto L59ff65;
case 0x59ff68:c.instructions+=4;goto B59ff68;
case 0x59ff6e:c.instructions+=3;goto B59ff6e;
case 0x59ff71:c.instructions+=2;goto B59ff71;
case 0x59ff73:c.instructions+=1;goto B59ff73;
case 0x59ff79:goto L59ff79;
case 0x59ff7f:c.instructions+=3;goto B59ff7f;
case 0x59ff82:c.instructions+=2;goto B59ff82;
case 0x59ff84:c.instructions+=1;goto B59ff84;
case 0x59ff8a:goto L59ff8a;
case 0x59ff90:c.instructions+=13;goto B59ff90;
case 0x59ff93:c.instructions+=12;goto B59ff93;
case 0x59ff96:c.instructions+=11;goto B59ff96;
case 0x59ff99:c.instructions+=10;goto B59ff99;
case 0x59ff9b:c.instructions+=9;goto B59ff9b;
case 0x59ffa1:c.instructions+=8;goto B59ffa1;
case 0x59ffa7:c.instructions+=7;goto B59ffa7;
case 0x59ffab:c.instructions+=6;goto B59ffab;
case 0x59ffb1:c.instructions+=5;goto B59ffb1;
case 0x59ffb5:c.instructions+=4;goto B59ffb5;
case 0x59ffb7:c.instructions+=3;goto B59ffb7;
case 0x59ffb9:c.instructions+=2;goto B59ffb9;
case 0x59ffbc:c.instructions+=1;goto B59ffbc;
case 0x59ffbe:goto L59ffbe;
case 0x59ffc2:c.instructions+=1;goto B59ffc2;
case 0x59ffc4:goto L59ffc4;
case 0x59ffc6:c.instructions+=5;goto B59ffc6;
case 0x59ffca:c.instructions+=4;goto B59ffca;
case 0x59ffcc:c.instructions+=3;goto B59ffcc;
case 0x59ffce:c.instructions+=2;goto B59ffce;
case 0x59ffd1:c.instructions+=1;goto B59ffd1;
case 0x59ffd3:goto L59ffd3;
case 0x59ffd7:c.instructions+=1;goto B59ffd7;
case 0x59ffd9:goto L59ffd9;
case 0x59ffdb:goto L59ffdb;
case 0x59ffdf:c.instructions+=2;goto B59ffdf;
case 0x59ffe5:c.instructions+=1;goto B59ffe5;
case 0x59ffe9:goto L59ffe9;
case 0x59ffeb:c.instructions+=4;goto B59ffeb;
case 0x59ffef:c.instructions+=3;goto B59ffef;
case 0x59fff0:c.instructions+=2;goto B59fff0;
case 0x59fff2:c.instructions+=1;goto B59fff2;
case 0x59fff5:goto L59fff5;
case 0x59fff6:c.instructions+=3;goto B59fff6;
case 0x59fffa:c.instructions+=2;goto B59fffa;
case 0x59fffb:c.instructions+=1;goto B59fffb;
default:missing_instruction(c.pc);}
B59f002:L59f002:{c.instructions+=10;NFSU2_TR(0x59f002);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f006:{NFSU2_TR(0x59f006);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f00a:{NFSU2_TR(0x59f00a);
{u32 ea_=u32(u32(8001560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f010:{NFSU2_TR(0x59f010);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f014:{NFSU2_TR(0x59f014);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f018:{NFSU2_TR(0x59f018);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59f01b:{NFSU2_TR(0x59f01b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59f01d:{NFSU2_TR(0x59f01d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59f01f:{NFSU2_TR(0x59f01f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59f022:{NFSU2_TR(0x59f022);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59f02a;}}
}
B59f024:L59f024:{c.instructions+=1;NFSU2_TR(0x59f024);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B59f02a:L59f02a:{c.instructions+=9;NFSU2_TR(0x59f02a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f02e:{NFSU2_TR(0x59f02e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f032:{NFSU2_TR(0x59f032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f035:{NFSU2_TR(0x59f035);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f036:{NFSU2_TR(0x59f036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f039:{NFSU2_TR(0x59f039);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f03a:{NFSU2_TR(0x59f03a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f03b:{NFSU2_TR(0x59f03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f03c:{NFSU2_TR(0x59f03c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f041ull));
TAIL_STATIC(0x574e30u,574);
}
B59f041:L59f041:{c.instructions+=10;NFSU2_TR(0x59f041);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f044:{NFSU2_TR(0x59f044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59f046:{NFSU2_TR(0x59f046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f049:{NFSU2_TR(0x59f049);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B59f04c:{NFSU2_TR(0x59f04c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f04d:{NFSU2_TR(0x59f04d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f051:{NFSU2_TR(0x59f051);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f052:{NFSU2_TR(0x59f052);
__builtin_memmove((R+4),(R+24),4);
}
B59f054:{NFSU2_TR(0x59f054);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f058:{NFSU2_TR(0x59f058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f05dull));
TAIL_STATIC(0x591ad0u,591);
}
B59f05d:L59f05d:{c.instructions+=9;NFSU2_TR(0x59f05d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f061:{NFSU2_TR(0x59f061);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f062:{NFSU2_TR(0x59f062);
u8 U[4];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59f069:{NFSU2_TR(0x59f069);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f06a:{NFSU2_TR(0x59f06a);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f06e:{NFSU2_TR(0x59f06e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f06f:{NFSU2_TR(0x59f06f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59f073:{NFSU2_TR(0x59f073);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f074:{NFSU2_TR(0x59f074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f079ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59f079:L59f079:{c.instructions+=11;NFSU2_TR(0x59f079);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f07d:{NFSU2_TR(0x59f07d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f081:{NFSU2_TR(0x59f081);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f085:{NFSU2_TR(0x59f085);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59f087:{NFSU2_TR(0x59f087);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f08a:{NFSU2_TR(0x59f08a);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59f08e:{NFSU2_TR(0x59f08e);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f091:{NFSU2_TR(0x59f091);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B59f094:{NFSU2_TR(0x59f094);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59f096:{NFSU2_TR(0x59f096);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f099:{NFSU2_TR(0x59f099);
if(r1(R+518)){{goto L59f0a8;}}
}
B59f09b:L59f09b:{c.instructions+=2;NFSU2_TR(0x59f09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f09e:{NFSU2_TR(0x59f09e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f0a3ull));
TAIL_STATIC(0x5f5010u,5f5);
}
B59f0a3:L59f0a3:{c.instructions+=1;NFSU2_TR(0x59f0a3);
{goto L59f1dc;}
}
B59f0a8:L59f0a8:{c.instructions+=6;NFSU2_TR(0x59f0a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f0ac:{NFSU2_TR(0x59f0ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f0ad:{NFSU2_TR(0x59f0ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59f0b1:{NFSU2_TR(0x59f0b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f0b2:{NFSU2_TR(0x59f0b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f0ba:{NFSU2_TR(0x59f0ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f0bfull));
TAIL_STATIC(0x43cf10u,43c);
}
B59f0bf:L59f0bf:{c.instructions+=5;NFSU2_TR(0x59f0bf);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59f0c6:{NFSU2_TR(0x59f0c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f0c7:{NFSU2_TR(0x59f0c7);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f0ce:{NFSU2_TR(0x59f0ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f0cf:{NFSU2_TR(0x59f0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f0d4ull));
TAIL_STATIC(0x43cf10u,43c);
}
B59f0d4:L59f0d4:{c.instructions+=21;NFSU2_TR(0x59f0d4);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f0db:{NFSU2_TR(0x59f0db);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f0e2:{NFSU2_TR(0x59f0e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f0e9:{NFSU2_TR(0x59f0e9);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59f0f0:{NFSU2_TR(0x59f0f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f0f1:{NFSU2_TR(0x59f0f1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59f0f7:{NFSU2_TR(0x59f0f7);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f0fe:{NFSU2_TR(0x59f0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f105:{NFSU2_TR(0x59f105);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f106:{NFSU2_TR(0x59f106);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59f108:{NFSU2_TR(0x59f108);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59f10c:{NFSU2_TR(0x59f10c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f10d:{NFSU2_TR(0x59f10d);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f118:{NFSU2_TR(0x59f118);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f123:{NFSU2_TR(0x59f123);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f12e:{NFSU2_TR(0x59f12e);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f132:{NFSU2_TR(0x59f132);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59f134:{NFSU2_TR(0x59f134);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f13b:{NFSU2_TR(0x59f13b);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f142:{NFSU2_TR(0x59f142);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f149:{NFSU2_TR(0x59f149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f14eull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59f14e:L59f14e:{c.instructions+=5;NFSU2_TR(0x59f14e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59f152:{NFSU2_TR(0x59f152);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f153:{NFSU2_TR(0x59f153);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f157:{NFSU2_TR(0x59f157);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f158:{NFSU2_TR(0x59f158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f15dull));
TAIL_STATIC(0x43cf10u,43c);
}
B59f15d:L59f15d:{c.instructions+=7;NFSU2_TR(0x59f15d);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59f161:{NFSU2_TR(0x59f161);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f162:{NFSU2_TR(0x59f162);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59f169:{NFSU2_TR(0x59f169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f16a:{NFSU2_TR(0x59f16a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f171:{NFSU2_TR(0x59f171);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f172:{NFSU2_TR(0x59f172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f177ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59f177:L59f177:{c.instructions+=23;NFSU2_TR(0x59f177);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f17e:{NFSU2_TR(0x59f17e);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f185:{NFSU2_TR(0x59f185);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f18c:{NFSU2_TR(0x59f18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f18f:{NFSU2_TR(0x59f18f);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f196:{NFSU2_TR(0x59f196);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f199:{NFSU2_TR(0x59f199);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f19c:{NFSU2_TR(0x59f19c);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f1a3:{NFSU2_TR(0x59f1a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B59f1a6:{NFSU2_TR(0x59f1a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59f1a8:{NFSU2_TR(0x59f1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1ab:{NFSU2_TR(0x59f1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1ae:{NFSU2_TR(0x59f1ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f1b2:{NFSU2_TR(0x59f1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1b5:{NFSU2_TR(0x59f1b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f1bc:{NFSU2_TR(0x59f1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1bf:{NFSU2_TR(0x59f1bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f1c6:{NFSU2_TR(0x59f1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1c9:{NFSU2_TR(0x59f1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1cc:{NFSU2_TR(0x59f1cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f1d3:{NFSU2_TR(0x59f1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1d6:{NFSU2_TR(0x59f1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1d9:{NFSU2_TR(0x59f1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f1dc:L59f1dc:{c.instructions+=7;NFSU2_TR(0x59f1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59f1de:{NFSU2_TR(0x59f1de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f1df:{NFSU2_TR(0x59f1df);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f1e2:{NFSU2_TR(0x59f1e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f1e3:{NFSU2_TR(0x59f1e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59f1e7:{NFSU2_TR(0x59f1e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f1e8:{NFSU2_TR(0x59f1e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f1edull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59f1ed:L59f1ed:{c.instructions+=17;NFSU2_TR(0x59f1ed);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f1f0:{NFSU2_TR(0x59f1f0);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59f1f4:{NFSU2_TR(0x59f1f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f1f7:{NFSU2_TR(0x59f1f7);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f1fa:{NFSU2_TR(0x59f1fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f1fb:{NFSU2_TR(0x59f1fb);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59f1ff:{NFSU2_TR(0x59f1ff);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f202:{NFSU2_TR(0x59f202);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f208:{NFSU2_TR(0x59f208);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59f20c:{NFSU2_TR(0x59f20c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f20d:{NFSU2_TR(0x59f20d);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f211:{NFSU2_TR(0x59f211);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f215:{NFSU2_TR(0x59f215);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59f217:{NFSU2_TR(0x59f217);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f21a:{NFSU2_TR(0x59f21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f21d:{NFSU2_TR(0x59f21d);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f220:{NFSU2_TR(0x59f220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f225ull));
TAIL_STATIC(0x4012b0u,401);
}
B59f225:L59f225:{c.instructions+=32;NFSU2_TR(0x59f225);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f22b:{NFSU2_TR(0x59f22b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f22f:{NFSU2_TR(0x59f22f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59f232:{NFSU2_TR(0x59f232);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B59f234:{NFSU2_TR(0x59f234);
w4(R+0,u32(s32(s16(r2(R+12)))));
}
B59f237:{NFSU2_TR(0x59f237);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f23b:{NFSU2_TR(0x59f23b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59f23d:{NFSU2_TR(0x59f23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f243:{NFSU2_TR(0x59f243);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f249:{NFSU2_TR(0x59f249);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59f24c:{NFSU2_TR(0x59f24c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59f250:{NFSU2_TR(0x59f250);
{u32 ea_=u32(u32(7882140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f256:{NFSU2_TR(0x59f256);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59f258:{NFSU2_TR(0x59f258);
{u32 ea_=u32(r4(R+28)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f25e:{NFSU2_TR(0x59f25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f261:{NFSU2_TR(0x59f261);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f264:{NFSU2_TR(0x59f264);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B59f267:{NFSU2_TR(0x59f267);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f26a:{NFSU2_TR(0x59f26a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f26c:{NFSU2_TR(0x59f26c);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59f273:{NFSU2_TR(0x59f273);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f277:{NFSU2_TR(0x59f277);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59f279:{NFSU2_TR(0x59f279);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59f280:{NFSU2_TR(0x59f280);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f284:{NFSU2_TR(0x59f284);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59f28b:{NFSU2_TR(0x59f28b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f28f:{NFSU2_TR(0x59f28f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f292:{NFSU2_TR(0x59f292);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59f294:{NFSU2_TR(0x59f294);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59f29a:{NFSU2_TR(0x59f29a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59f29c:{NFSU2_TR(0x59f29c);
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
B59f29f:{NFSU2_TR(0x59f29f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59f2bf;}}
}
B59f2a1:L59f2a1:{c.instructions+=9;NFSU2_TR(0x59f2a1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f2a5:{NFSU2_TR(0x59f2a5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59f2a7:{NFSU2_TR(0x59f2a7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f2ab:{NFSU2_TR(0x59f2ab);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f2af:{NFSU2_TR(0x59f2af);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59f2b1:{NFSU2_TR(0x59f2b1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f2b5:{NFSU2_TR(0x59f2b5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f2b9:{NFSU2_TR(0x59f2b9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f2bd:{NFSU2_TR(0x59f2bd);
{goto L59f2d8;}
}
B59f2bf:L59f2bf:{c.instructions+=8;NFSU2_TR(0x59f2bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f2c3:{NFSU2_TR(0x59f2c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59f2c5:{NFSU2_TR(0x59f2c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f2c6:{NFSU2_TR(0x59f2c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59f2ca:{NFSU2_TR(0x59f2ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f2cb:{NFSU2_TR(0x59f2cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59f2cf:{NFSU2_TR(0x59f2cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f2d0:{NFSU2_TR(0x59f2d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f2d5ull));
TAIL_STATIC(0x43cf90u,43c);
}
B59f2d5:L59f2d5:{c.instructions+=1;NFSU2_TR(0x59f2d5);
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
B59f2d8:L59f2d8:{c.instructions+=4;NFSU2_TR(0x59f2d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59f2dc:{NFSU2_TR(0x59f2dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f2dd:{NFSU2_TR(0x59f2dd);
__builtin_memmove((R+4),(R+28),4);
}
B59f2df:{NFSU2_TR(0x59f2df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f2e4ull));
TAIL_STATIC(0x592160u,592);
}
B59f2e4:L59f2e4:{c.instructions+=33;NFSU2_TR(0x59f2e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f2e8:{NFSU2_TR(0x59f2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f2ee:{NFSU2_TR(0x59f2ee);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f2f2:{NFSU2_TR(0x59f2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f2f5:{NFSU2_TR(0x59f2f5);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f2fb:{NFSU2_TR(0x59f2fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f2fe:{NFSU2_TR(0x59f2fe);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f302:{NFSU2_TR(0x59f302);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f306:{NFSU2_TR(0x59f306);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f30c:{NFSU2_TR(0x59f30c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x374ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f312:{NFSU2_TR(0x59f312);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f316:{NFSU2_TR(0x59f316);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x300ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59f31c:{NFSU2_TR(0x59f31c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59f31e:{NFSU2_TR(0x59f31e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f326:{NFSU2_TR(0x59f326);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f32a:{NFSU2_TR(0x59f32a);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f330:{NFSU2_TR(0x59f330);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59f332:{NFSU2_TR(0x59f332);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59f334:{NFSU2_TR(0x59f334);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f338:{NFSU2_TR(0x59f338);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f33c:{NFSU2_TR(0x59f33c);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f342:{NFSU2_TR(0x59f342);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f346:{NFSU2_TR(0x59f346);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f34c:{NFSU2_TR(0x59f34c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59f34e:{NFSU2_TR(0x59f34e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f352:{NFSU2_TR(0x59f352);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f358:{NFSU2_TR(0x59f358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f35b:{NFSU2_TR(0x59f35b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B59f35e:{NFSU2_TR(0x59f35e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f362:{NFSU2_TR(0x59f362);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59f364:{NFSU2_TR(0x59f364);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59f368:{NFSU2_TR(0x59f368);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f36c:{NFSU2_TR(0x59f36c);
__builtin_memmove((R+16),(R+16),4);
}
B59f370:L59f370:{c.instructions+=13;NFSU2_TR(0x59f370);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f374:{NFSU2_TR(0x59f374);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f378:{NFSU2_TR(0x59f378);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59f37a:{NFSU2_TR(0x59f37a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f37e:{NFSU2_TR(0x59f37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59f380:{NFSU2_TR(0x59f380);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f383:{NFSU2_TR(0x59f383);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B59f387:{NFSU2_TR(0x59f387);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f38e:{NFSU2_TR(0x59f38e);
{u32 ea_=u32(r4(R+12)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f391:{NFSU2_TR(0x59f391);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f394:{NFSU2_TR(0x59f394);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59f396:{NFSU2_TR(0x59f396);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f39d:{NFSU2_TR(0x59f39d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59f3bc;}}
}
B59f39f:L59f39f:{c.instructions+=6;NFSU2_TR(0x59f39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f3a2:{NFSU2_TR(0x59f3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f3a5:{NFSU2_TR(0x59f3a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B59f3ac:{NFSU2_TR(0x59f3ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f3b3:{NFSU2_TR(0x59f3b3);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59f3ba:{NFSU2_TR(0x59f3ba);
{goto L59f3c2;}
}
B59f3bc:L59f3bc:{c.instructions+=1;NFSU2_TR(0x59f3bc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f3c2:L59f3c2:{c.instructions+=2;NFSU2_TR(0x59f3c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f3c4:{NFSU2_TR(0x59f3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f3c9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59f3c9:L59f3c9:{c.instructions+=9;NFSU2_TR(0x59f3c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f3d0:{NFSU2_TR(0x59f3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f3d4:{NFSU2_TR(0x59f3d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59f3d6:{NFSU2_TR(0x59f3d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f3d7:{NFSU2_TR(0x59f3d7);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f3de:{NFSU2_TR(0x59f3de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f3df:{NFSU2_TR(0x59f3df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f3e0:{NFSU2_TR(0x59f3e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f3e1:{NFSU2_TR(0x59f3e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f3e6ull));
TAIL_STATIC(0x59cb90u,59c);
}
B59f3e6:L59f3e6:{c.instructions+=13;NFSU2_TR(0x59f3e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f3ea:{NFSU2_TR(0x59f3ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f3ee:{NFSU2_TR(0x59f3ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f3f2:{NFSU2_TR(0x59f3f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B59f3f4:{NFSU2_TR(0x59f3f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f3f8:{NFSU2_TR(0x59f3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f3fb:{NFSU2_TR(0x59f3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f405:{NFSU2_TR(0x59f405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59f407:{NFSU2_TR(0x59f407);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f40a:{NFSU2_TR(0x59f40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f40d:{NFSU2_TR(0x59f40d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f40e:{NFSU2_TR(0x59f40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f411:{NFSU2_TR(0x59f411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f416ull));
TAIL_STATIC(0x592870u,592);
}
B59f416:L59f416:{c.instructions+=2;NFSU2_TR(0x59f416);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59f418:{NFSU2_TR(0x59f418);
if(r1(R+518)){{goto L59f443;}}
}
B59f41a:L59f41a:{c.instructions+=9;NFSU2_TR(0x59f41a);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f41e:{NFSU2_TR(0x59f41e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f422:{NFSU2_TR(0x59f422);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f428:{NFSU2_TR(0x59f428);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f42c:{NFSU2_TR(0x59f42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f432:{NFSU2_TR(0x59f432);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f438:{NFSU2_TR(0x59f438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59f43a:{NFSU2_TR(0x59f43a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59f43d:{NFSU2_TR(0x59f43d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59f443:L59f443:{c.instructions+=14;NFSU2_TR(0x59f443);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f447:{NFSU2_TR(0x59f447);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f44b:{NFSU2_TR(0x59f44b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f44f:{NFSU2_TR(0x59f44f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B59f452:{NFSU2_TR(0x59f452);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f456:{NFSU2_TR(0x59f456);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f45a:{NFSU2_TR(0x59f45a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B59f45d:{NFSU2_TR(0x59f45d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B59f460:{NFSU2_TR(0x59f460);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B59f463:{NFSU2_TR(0x59f463);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B59f464:{NFSU2_TR(0x59f464);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f468:{NFSU2_TR(0x59f468);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f46c:{NFSU2_TR(0x59f46c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f470:{NFSU2_TR(0x59f470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f370u);}goto L59f370;}}
}
B59f476:L59f476:{c.instructions+=3;NFSU2_TR(0x59f476);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59f47a:{NFSU2_TR(0x59f47a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59f47c:{NFSU2_TR(0x59f47c);
if(r1(R+518)){{goto L59f4c6;}}
}
B59f47e:L59f47e:{c.instructions+=2;NFSU2_TR(0x59f47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f481:{NFSU2_TR(0x59f481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f486ull));
TAIL_STATIC(0x5f67f0u,5f6);
}
B59f486:L59f486:{c.instructions+=2;NFSU2_TR(0x59f486);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59f488:{NFSU2_TR(0x59f488);
if(r1(R+518)){{goto L59f4c6;}}
}
B59f48a:L59f48a:{c.instructions+=5;NFSU2_TR(0x59f48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f48d:{NFSU2_TR(0x59f48d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B59f490:{NFSU2_TR(0x59f490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f491:{NFSU2_TR(0x59f491);
__builtin_memmove((R+4),gp(0x890080),4);
}
B59f497:{NFSU2_TR(0x59f497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f49cull));
TAIL_STATIC(0x5f1160u,5f1);
}
B59f49c:L59f49c:{c.instructions+=4;NFSU2_TR(0x59f49c);
{u32 ea_=u32(u32(8001564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59f4a2:{NFSU2_TR(0x59f4a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59f4a4:{NFSU2_TR(0x59f4a4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59f4a7:{NFSU2_TR(0x59f4a7);
if(r1(R+514)){{goto L59f4c6;}}
}
B59f4a9:L59f4a9:{c.instructions+=2;NFSU2_TR(0x59f4a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59f4ac:{NFSU2_TR(0x59f4ac);
w4(R+12,u32(0x4ull));
}
B59f4b1:L59f4b1:{c.instructions+=6;NFSU2_TR(0x59f4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f4b4:{NFSU2_TR(0x59f4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f4b7:{NFSU2_TR(0x59f4b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59f4b9:{NFSU2_TR(0x59f4b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f4ba:{NFSU2_TR(0x59f4ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f4bb:{NFSU2_TR(0x59f4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f4c0ull));
TAIL_STATIC(0x59dbb0u,59d);
}
B59f4c0:L59f4c0:{c.instructions+=3;NFSU2_TR(0x59f4c0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59f4c3:{NFSU2_TR(0x59f4c3);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B59f4c4:{NFSU2_TR(0x59f4c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f4b1u);}goto L59f4b1;}}
}
B59f4c6:L59f4c6:{c.instructions+=2;NFSU2_TR(0x59f4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f4c9:{NFSU2_TR(0x59f4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f4ceull));
TAIL_STATIC(0x5f50a0u,5f5);
}
B59f4ce:L59f4ce:{c.instructions+=7;NFSU2_TR(0x59f4ce);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f4d1:{NFSU2_TR(0x59f4d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59f4d2:{NFSU2_TR(0x59f4d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59f4d3:{NFSU2_TR(0x59f4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59f4d4:{NFSU2_TR(0x59f4d4);
__builtin_memmove((R+16),(R+20),4);
}
B59f4d6:{NFSU2_TR(0x59f4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59f4d7:{NFSU2_TR(0x59f4d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59f4da:L59f4da:{c.instructions+=2;NFSU2_TR(0x59f4da);
__builtin_memmove((R+4),(R+24),4);
}
B59f4dc:{NFSU2_TR(0x59f4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f4e1ull));
TAIL_STATIC(0x5918a0u,591);
}
B59f4e1:L59f4e1:{c.instructions+=16;NFSU2_TR(0x59f4e1);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B59f4e7:{NFSU2_TR(0x59f4e7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59f4e9:{NFSU2_TR(0x59f4e9);
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
B59f4eb:{NFSU2_TR(0x59f4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f4ee:{NFSU2_TR(0x59f4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f4f1:{NFSU2_TR(0x59f4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f4f4:{NFSU2_TR(0x59f4f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x480ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59f4fa:{NFSU2_TR(0x59f4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f500:{NFSU2_TR(0x59f500);
{u32 ea_=u32(r4(R+28)+u32(1008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59f506:{NFSU2_TR(0x59f506);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59f509:{NFSU2_TR(0x59f509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59f50a:{NFSU2_TR(0x59f50a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59f50b:{NFSU2_TR(0x59f50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59f50c:{NFSU2_TR(0x59f50c);
__builtin_memmove((R+16),(R+20),4);
}
B59f50e:{NFSU2_TR(0x59f50e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59f50f:{NFSU2_TR(0x59f50f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59f520:L59f520:{c.instructions+=11;NFSU2_TR(0x59f520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f521:{NFSU2_TR(0x59f521);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f522:{NFSU2_TR(0x59f522);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f523:{NFSU2_TR(0x59f523);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f524:{NFSU2_TR(0x59f524);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59f528:{NFSU2_TR(0x59f528);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f529:{NFSU2_TR(0x59f529);
u8 U[4];
w4(U+0,u32(0x7a1f28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f52e:{NFSU2_TR(0x59f52e);
__builtin_memmove((R+28),(R+4),4);
}
B59f530:{NFSU2_TR(0x59f530);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f532:{NFSU2_TR(0x59f532);
__builtin_memmove((R+4),(R+24),4);
}
B59f534:{NFSU2_TR(0x59f534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f539ull));
TAIL_STATIC(0x578ce0u,578);
}
B59f539:L59f539:{c.instructions+=7;NFSU2_TR(0x59f539);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f53b:{NFSU2_TR(0x59f53b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f53d:{NFSU2_TR(0x59f53d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f53f:{NFSU2_TR(0x59f53f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f542:{NFSU2_TR(0x59f542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f543:{NFSU2_TR(0x59f543);
__builtin_memmove((R+4),(R+24),4);
}
B59f545:{NFSU2_TR(0x59f545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f54aull));
TAIL_STATIC(0x571640u,571);
}
B59f54a:L59f54a:{c.instructions+=3;NFSU2_TR(0x59f54a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B59f54d:{NFSU2_TR(0x59f54d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+4,u8(u32(r1(R+4))|u32(r1(U+4))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B59f550:{NFSU2_TR(0x59f550);
if(r1(R+518)){{goto L59f556;}}
}
B59f552:L59f552:{c.instructions+=1;NFSU2_TR(0x59f552);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B59f556:L59f556:{c.instructions+=7;NFSU2_TR(0x59f556);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f558:{NFSU2_TR(0x59f558);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f55a:{NFSU2_TR(0x59f55a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f55c:{NFSU2_TR(0x59f55c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f55f:{NFSU2_TR(0x59f55f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f560:{NFSU2_TR(0x59f560);
__builtin_memmove((R+4),(R+24),4);
}
B59f562:{NFSU2_TR(0x59f562);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f567ull));
TAIL_STATIC(0x571640u,571);
}
B59f567:L59f567:{c.instructions+=7;NFSU2_TR(0x59f567);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f569:{NFSU2_TR(0x59f569);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f56b:{NFSU2_TR(0x59f56b);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f56d:{NFSU2_TR(0x59f56d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f570:{NFSU2_TR(0x59f570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f571:{NFSU2_TR(0x59f571);
__builtin_memmove((R+4),(R+24),4);
}
B59f573:{NFSU2_TR(0x59f573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f578ull));
TAIL_STATIC(0x571640u,571);
}
B59f578:L59f578:{c.instructions+=7;NFSU2_TR(0x59f578);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f57a:{NFSU2_TR(0x59f57a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f57c:{NFSU2_TR(0x59f57c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f57e:{NFSU2_TR(0x59f57e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f581:{NFSU2_TR(0x59f581);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f582:{NFSU2_TR(0x59f582);
__builtin_memmove((R+4),(R+24),4);
}
B59f584:{NFSU2_TR(0x59f584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f589ull));
TAIL_STATIC(0x571640u,571);
}
B59f589:L59f589:{c.instructions+=4;NFSU2_TR(0x59f589);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f58c:{NFSU2_TR(0x59f58c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f58d:{NFSU2_TR(0x59f58d);
__builtin_memmove((R+4),(R+24),4);
}
B59f58f:{NFSU2_TR(0x59f58f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f594ull));
TAIL_STATIC(0x578460u,578);
}
B59f594:L59f594:{c.instructions+=7;NFSU2_TR(0x59f594);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f596:{NFSU2_TR(0x59f596);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f598:{NFSU2_TR(0x59f598);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f59a:{NFSU2_TR(0x59f59a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f5a0:{NFSU2_TR(0x59f5a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5a1:{NFSU2_TR(0x59f5a1);
__builtin_memmove((R+4),(R+24),4);
}
B59f5a3:{NFSU2_TR(0x59f5a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f5a8ull));
TAIL_STATIC(0x571640u,571);
}
B59f5a8:L59f5a8:{c.instructions+=7;NFSU2_TR(0x59f5a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5aa:{NFSU2_TR(0x59f5aa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5ac:{NFSU2_TR(0x59f5ac);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5ae:{NFSU2_TR(0x59f5ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f5b4:{NFSU2_TR(0x59f5b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5b5:{NFSU2_TR(0x59f5b5);
__builtin_memmove((R+4),(R+24),4);
}
B59f5b7:{NFSU2_TR(0x59f5b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f5bcull));
TAIL_STATIC(0x571640u,571);
}
B59f5bc:L59f5bc:{c.instructions+=6;NFSU2_TR(0x59f5bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x374ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f5c2:{NFSU2_TR(0x59f5c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59f5c8:{NFSU2_TR(0x59f5c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f5cc:{NFSU2_TR(0x59f5cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x300ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59f5d2:{NFSU2_TR(0x59f5d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f5da:{NFSU2_TR(0x59f5da);
__builtin_memmove((R+12),(R+12),4);
}
B59f5e0:L59f5e0:{c.instructions+=4;NFSU2_TR(0x59f5e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f5e3:{NFSU2_TR(0x59f5e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5e4:{NFSU2_TR(0x59f5e4);
__builtin_memmove((R+4),(R+24),4);
}
B59f5e6:{NFSU2_TR(0x59f5e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f5ebull));
TAIL_STATIC(0x571770u,571);
}
B59f5eb:L59f5eb:{c.instructions+=3;NFSU2_TR(0x59f5eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5ec:{NFSU2_TR(0x59f5ec);
__builtin_memmove((R+4),(R+24),4);
}
B59f5ee:{NFSU2_TR(0x59f5ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f5f3ull));
TAIL_STATIC(0x571770u,571);
}
B59f5f3:L59f5f3:{c.instructions+=4;NFSU2_TR(0x59f5f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f5f6:{NFSU2_TR(0x59f5f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f5f7:{NFSU2_TR(0x59f5f7);
__builtin_memmove((R+4),(R+24),4);
}
B59f5f9:{NFSU2_TR(0x59f5f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f5feull));
TAIL_STATIC(0x571770u,571);
}
B59f5fe:L59f5fe:{c.instructions+=4;NFSU2_TR(0x59f5fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f601:{NFSU2_TR(0x59f601);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f602:{NFSU2_TR(0x59f602);
__builtin_memmove((R+4),(R+24),4);
}
B59f604:{NFSU2_TR(0x59f604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f609ull));
TAIL_STATIC(0x571770u,571);
}
B59f609:L59f609:{c.instructions+=4;NFSU2_TR(0x59f609);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f60c:{NFSU2_TR(0x59f60c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f60d:{NFSU2_TR(0x59f60d);
__builtin_memmove((R+4),(R+24),4);
}
B59f60f:{NFSU2_TR(0x59f60f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f614ull));
TAIL_STATIC(0x5716c0u,571);
}
B59f614:L59f614:{c.instructions+=7;NFSU2_TR(0x59f614);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f616:{NFSU2_TR(0x59f616);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f618:{NFSU2_TR(0x59f618);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f61a:{NFSU2_TR(0x59f61a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f61d:{NFSU2_TR(0x59f61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f61e:{NFSU2_TR(0x59f61e);
__builtin_memmove((R+4),(R+24),4);
}
B59f620:{NFSU2_TR(0x59f620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f625ull));
TAIL_STATIC(0x571640u,571);
}
B59f625:L59f625:{c.instructions+=7;NFSU2_TR(0x59f625);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59f629:{NFSU2_TR(0x59f629);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f62b:{NFSU2_TR(0x59f62b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f62d:{NFSU2_TR(0x59f62d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f62f:{NFSU2_TR(0x59f62f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f630:{NFSU2_TR(0x59f630);
__builtin_memmove((R+4),(R+24),4);
}
B59f632:{NFSU2_TR(0x59f632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f637ull));
TAIL_STATIC(0x571640u,571);
}
B59f637:L59f637:{c.instructions+=4;NFSU2_TR(0x59f637);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f63d:{NFSU2_TR(0x59f63d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f63e:{NFSU2_TR(0x59f63e);
__builtin_memmove((R+4),(R+24),4);
}
B59f640:{NFSU2_TR(0x59f640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f645ull));
TAIL_STATIC(0x571770u,571);
}
B59f645:L59f645:{c.instructions+=4;NFSU2_TR(0x59f645);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f648:{NFSU2_TR(0x59f648);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f649:{NFSU2_TR(0x59f649);
__builtin_memmove((R+4),(R+24),4);
}
B59f64b:{NFSU2_TR(0x59f64b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f650ull));
TAIL_STATIC(0x571770u,571);
}
B59f650:L59f650:{c.instructions+=4;NFSU2_TR(0x59f650);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f656:{NFSU2_TR(0x59f656);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f657:{NFSU2_TR(0x59f657);
__builtin_memmove((R+4),(R+24),4);
}
B59f659:{NFSU2_TR(0x59f659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f65eull));
TAIL_STATIC(0x571770u,571);
}
B59f65e:L59f65e:{c.instructions+=6;NFSU2_TR(0x59f65e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f660:{NFSU2_TR(0x59f660);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f662:{NFSU2_TR(0x59f662);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f664:{NFSU2_TR(0x59f664);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f665:{NFSU2_TR(0x59f665);
__builtin_memmove((R+4),(R+24),4);
}
B59f667:{NFSU2_TR(0x59f667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f66cull));
TAIL_STATIC(0x571640u,571);
}
B59f66c:L59f66c:{c.instructions+=4;NFSU2_TR(0x59f66c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f672:{NFSU2_TR(0x59f672);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f673:{NFSU2_TR(0x59f673);
__builtin_memmove((R+4),(R+24),4);
}
B59f675:{NFSU2_TR(0x59f675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f67aull));
TAIL_STATIC(0x571770u,571);
}
B59f67a:L59f67a:{c.instructions+=3;NFSU2_TR(0x59f67a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59f67d:{NFSU2_TR(0x59f67d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B59f680:{NFSU2_TR(0x59f680);
if(r1(R+518)){{goto L59f689;}}
}
B59f682:L59f682:{c.instructions+=1;NFSU2_TR(0x59f682);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f689:L59f689:{c.instructions+=9;NFSU2_TR(0x59f689);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59f68d:{NFSU2_TR(0x59f68d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f691:{NFSU2_TR(0x59f691);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B59f694:{NFSU2_TR(0x59f694);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B59f697:{NFSU2_TR(0x59f697);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B59f698:{NFSU2_TR(0x59f698);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B59f699:{NFSU2_TR(0x59f699);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f69d:{NFSU2_TR(0x59f69d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f6a1:{NFSU2_TR(0x59f6a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f5e0u);}goto L59f5e0;}}
}
B59f6a7:L59f6a7:{c.instructions+=4;NFSU2_TR(0x59f6a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ccull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f6ad:{NFSU2_TR(0x59f6ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f6ae:{NFSU2_TR(0x59f6ae);
__builtin_memmove((R+4),(R+24),4);
}
B59f6b0:{NFSU2_TR(0x59f6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f6b5ull));
TAIL_STATIC(0x571710u,571);
}
B59f6b5:L59f6b5:{c.instructions+=4;NFSU2_TR(0x59f6b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ceull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f6bb:{NFSU2_TR(0x59f6bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f6bc:{NFSU2_TR(0x59f6bc);
__builtin_memmove((R+4),(R+24),4);
}
B59f6be:{NFSU2_TR(0x59f6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f6c3ull));
TAIL_STATIC(0x571710u,571);
}
B59f6c3:L59f6c3:{c.instructions+=4;NFSU2_TR(0x59f6c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3d0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f6c9:{NFSU2_TR(0x59f6c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f6ca:{NFSU2_TR(0x59f6ca);
__builtin_memmove((R+4),(R+24),4);
}
B59f6cc:{NFSU2_TR(0x59f6cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f6d1ull));
TAIL_STATIC(0x571770u,571);
}
B59f6d1:L59f6d1:{c.instructions+=4;NFSU2_TR(0x59f6d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f6d7:{NFSU2_TR(0x59f6d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f6d8:{NFSU2_TR(0x59f6d8);
__builtin_memmove((R+4),(R+24),4);
}
B59f6da:{NFSU2_TR(0x59f6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f6dfull));
TAIL_STATIC(0x571770u,571);
}
B59f6df:L59f6df:{c.instructions+=5;NFSU2_TR(0x59f6df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59f6e2:{NFSU2_TR(0x59f6e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59f6e5:{NFSU2_TR(0x59f6e5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B59f6e7:{NFSU2_TR(0x59f6e7);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+0))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B59f6e9:{NFSU2_TR(0x59f6e9);
if(r1(R+518)){{goto L59f6fd;}}
}
B59f6eb:L59f6eb:{c.instructions+=3;NFSU2_TR(0x59f6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f6f1:{NFSU2_TR(0x59f6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f6f7:{NFSU2_TR(0x59f6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f6fd:L59f6fd:{c.instructions+=4;NFSU2_TR(0x59f6fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ecull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f703:{NFSU2_TR(0x59f703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f704:{NFSU2_TR(0x59f704);
__builtin_memmove((R+4),(R+24),4);
}
B59f706:{NFSU2_TR(0x59f706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f70bull));
TAIL_STATIC(0x571770u,571);
}
B59f70b:L59f70b:{c.instructions+=4;NFSU2_TR(0x59f70b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f711:{NFSU2_TR(0x59f711);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f712:{NFSU2_TR(0x59f712);
__builtin_memmove((R+4),(R+24),4);
}
B59f714:{NFSU2_TR(0x59f714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f719ull));
TAIL_STATIC(0x571770u,571);
}
B59f719:L59f719:{c.instructions+=7;NFSU2_TR(0x59f719);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f71b:{NFSU2_TR(0x59f71b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f71d:{NFSU2_TR(0x59f71d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f71f:{NFSU2_TR(0x59f71f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f725:{NFSU2_TR(0x59f725);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f726:{NFSU2_TR(0x59f726);
__builtin_memmove((R+4),(R+24),4);
}
B59f728:{NFSU2_TR(0x59f728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f72dull));
TAIL_STATIC(0x571640u,571);
}
B59f72d:L59f72d:{c.instructions+=4;NFSU2_TR(0x59f72d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3f8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f733:{NFSU2_TR(0x59f733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f734:{NFSU2_TR(0x59f734);
__builtin_memmove((R+4),(R+24),4);
}
B59f736:{NFSU2_TR(0x59f736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f73bull));
TAIL_STATIC(0x571770u,571);
}
B59f73b:L59f73b:{c.instructions+=4;NFSU2_TR(0x59f73b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3fcull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f741:{NFSU2_TR(0x59f741);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f742:{NFSU2_TR(0x59f742);
__builtin_memmove((R+4),(R+24),4);
}
B59f744:{NFSU2_TR(0x59f744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f749ull));
TAIL_STATIC(0x571770u,571);
}
B59f749:L59f749:{c.instructions+=4;NFSU2_TR(0x59f749);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f74f:{NFSU2_TR(0x59f74f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f750:{NFSU2_TR(0x59f750);
__builtin_memmove((R+4),(R+24),4);
}
B59f752:{NFSU2_TR(0x59f752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f757ull));
TAIL_STATIC(0x571770u,571);
}
B59f757:L59f757:{c.instructions+=7;NFSU2_TR(0x59f757);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f759:{NFSU2_TR(0x59f759);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f75b:{NFSU2_TR(0x59f75b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f75d:{NFSU2_TR(0x59f75d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x408ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f763:{NFSU2_TR(0x59f763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f764:{NFSU2_TR(0x59f764);
__builtin_memmove((R+4),(R+24),4);
}
B59f766:{NFSU2_TR(0x59f766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f76bull));
TAIL_STATIC(0x571640u,571);
}
B59f76b:L59f76b:{c.instructions+=4;NFSU2_TR(0x59f76b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40cull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f771:{NFSU2_TR(0x59f771);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f772:{NFSU2_TR(0x59f772);
__builtin_memmove((R+4),(R+24),4);
}
B59f774:{NFSU2_TR(0x59f774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f779ull));
TAIL_STATIC(0x571770u,571);
}
B59f779:L59f779:{c.instructions+=4;NFSU2_TR(0x59f779);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41cull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f77f:{NFSU2_TR(0x59f77f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f780:{NFSU2_TR(0x59f780);
__builtin_memmove((R+4),(R+24),4);
}
B59f782:{NFSU2_TR(0x59f782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f787ull));
TAIL_STATIC(0x571770u,571);
}
B59f787:L59f787:{c.instructions+=4;NFSU2_TR(0x59f787);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x420ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f78d:{NFSU2_TR(0x59f78d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f78e:{NFSU2_TR(0x59f78e);
__builtin_memmove((R+4),(R+24),4);
}
B59f790:{NFSU2_TR(0x59f790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f795ull));
TAIL_STATIC(0x571770u,571);
}
B59f795:L59f795:{c.instructions+=7;NFSU2_TR(0x59f795);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f797:{NFSU2_TR(0x59f797);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f799:{NFSU2_TR(0x59f799);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f79b:{NFSU2_TR(0x59f79b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f7a1:{NFSU2_TR(0x59f7a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f7a2:{NFSU2_TR(0x59f7a2);
__builtin_memmove((R+4),(R+24),4);
}
B59f7a4:{NFSU2_TR(0x59f7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f7a9ull));
TAIL_STATIC(0x571640u,571);
}
B59f7a9:L59f7a9:{c.instructions+=4;NFSU2_TR(0x59f7a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x428ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f7af:{NFSU2_TR(0x59f7af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f7b0:{NFSU2_TR(0x59f7b0);
__builtin_memmove((R+4),(R+24),4);
}
B59f7b2:{NFSU2_TR(0x59f7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f7b7ull));
TAIL_STATIC(0x571770u,571);
}
B59f7b7:L59f7b7:{c.instructions+=4;NFSU2_TR(0x59f7b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42cull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f7bd:{NFSU2_TR(0x59f7bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f7be:{NFSU2_TR(0x59f7be);
__builtin_memmove((R+4),(R+24),4);
}
B59f7c0:{NFSU2_TR(0x59f7c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f7c5ull));
TAIL_STATIC(0x571770u,571);
}
B59f7c5:L59f7c5:{c.instructions+=4;NFSU2_TR(0x59f7c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x430ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f7cb:{NFSU2_TR(0x59f7cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f7cc:{NFSU2_TR(0x59f7cc);
__builtin_memmove((R+4),(R+24),4);
}
B59f7ce:{NFSU2_TR(0x59f7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f7d3ull));
TAIL_STATIC(0x571770u,571);
}
B59f7d3:L59f7d3:{c.instructions+=4;NFSU2_TR(0x59f7d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x434ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f7d9:{NFSU2_TR(0x59f7d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f7da:{NFSU2_TR(0x59f7da);
__builtin_memmove((R+4),(R+24),4);
}
B59f7dc:{NFSU2_TR(0x59f7dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f7e1ull));
TAIL_STATIC(0x571770u,571);
}
B59f7e1:L59f7e1:{c.instructions+=4;NFSU2_TR(0x59f7e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x438ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f7e7:{NFSU2_TR(0x59f7e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f7e8:{NFSU2_TR(0x59f7e8);
__builtin_memmove((R+4),(R+24),4);
}
B59f7ea:{NFSU2_TR(0x59f7ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f7efull));
TAIL_STATIC(0x571770u,571);
}
B59f7ef:L59f7ef:{c.instructions+=3;NFSU2_TR(0x59f7ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B59f7f2:{NFSU2_TR(0x59f7f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+4,u8(u32(r1(R+4))|u32(r1(U+4))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B59f7f5:{NFSU2_TR(0x59f7f5);
if(r1(R+518)){{goto L59f871;}}
}
B59f7f7:L59f7f7:{c.instructions+=3;NFSU2_TR(0x59f7f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x440ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f7fd:{NFSU2_TR(0x59f7fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f7fe:{NFSU2_TR(0x59f7fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f803ull));
TAIL_STATIC(0x43c780u,43c);
}
B59f803:L59f803:{c.instructions+=7;NFSU2_TR(0x59f803);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B59f806:{NFSU2_TR(0x59f806);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x480ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59f80d:{NFSU2_TR(0x59f80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f813:{NFSU2_TR(0x59f813);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f81d:{NFSU2_TR(0x59f81d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x350ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f823:{NFSU2_TR(0x59f823);
w4(R+4,u32(0x4ull));
}
B59f828:{NFSU2_TR(0x59f828);
{goto L59f830;}
}
B59f830:L59f830:{c.instructions+=6;NFSU2_TR(0x59f830);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B59f833:{NFSU2_TR(0x59f833);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59f837:{NFSU2_TR(0x59f837);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B59f83d:{NFSU2_TR(0x59f83d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59f840:{NFSU2_TR(0x59f840);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59f842:{NFSU2_TR(0x59f842);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59f84a;}}
}
B59f844:L59f844:{c.instructions+=1;NFSU2_TR(0x59f844);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B59f84a:L59f84a:{c.instructions+=3;NFSU2_TR(0x59f84a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B59f84b:{NFSU2_TR(0x59f84b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B59f84c:{NFSU2_TR(0x59f84c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f830u);}goto L59f830;}}
}
B59f84e:L59f84e:{c.instructions+=1;NFSU2_TR(0x59f84e);
__builtin_memmove((R+28),(R+28),4);
}
B59f850:L59f850:{c.instructions+=3;NFSU2_TR(0x59f850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f851:{NFSU2_TR(0x59f851);
__builtin_memmove((R+4),(R+28),4);
}
B59f853:{NFSU2_TR(0x59f853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f858ull));
TAIL_STATIC(0x5921b0u,592);
}
B59f858:L59f858:{c.instructions+=3;NFSU2_TR(0x59f858);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B59f859:{NFSU2_TR(0x59f859);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59f85c:{NFSU2_TR(0x59f85c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f850u);}goto L59f850;}}
}
B59f85e:L59f85e:{c.instructions+=5;NFSU2_TR(0x59f85e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f861:{NFSU2_TR(0x59f861);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f862:{NFSU2_TR(0x59f862);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x90ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59f868:{NFSU2_TR(0x59f868);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f869:{NFSU2_TR(0x59f869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f86eull));
TAIL_STATIC(0x4012b0u,401);
}
B59f86e:L59f86e:{c.instructions+=1;NFSU2_TR(0x59f86e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59f871:L59f871:{c.instructions+=2;NFSU2_TR(0x59f871);
__builtin_memmove((R+4),(R+24),4);
}
B59f873:{NFSU2_TR(0x59f873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f878ull));
TAIL_STATIC(0x578d90u,578);
}
B59f878:L59f878:{c.instructions+=6;NFSU2_TR(0x59f878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59f879:{NFSU2_TR(0x59f879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59f87a:{NFSU2_TR(0x59f87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59f87b:{NFSU2_TR(0x59f87b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59f87c:{NFSU2_TR(0x59f87c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f87d:{NFSU2_TR(0x59f87d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59f880:L59f880:{c.instructions+=14;NFSU2_TR(0x59f880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f881:{NFSU2_TR(0x59f881);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f882:{NFSU2_TR(0x59f882);
__builtin_memmove((R+24),(R+4),4);
}
B59f884:{NFSU2_TR(0x59f884);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B59f886:{NFSU2_TR(0x59f886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f889:{NFSU2_TR(0x59f889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f88c:{NFSU2_TR(0x59f88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f88f:{NFSU2_TR(0x59f88f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f892:{NFSU2_TR(0x59f892);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f893:{NFSU2_TR(0x59f893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f894:{NFSU2_TR(0x59f894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f897:{NFSU2_TR(0x59f897);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f89a:{NFSU2_TR(0x59f89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f89d:{NFSU2_TR(0x59f89d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f8a2ull));
TAIL_STATIC(0x43c780u,43c);
}
B59f8a2:L59f8a2:{c.instructions+=15;NFSU2_TR(0x59f8a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59f8a9:{NFSU2_TR(0x59f8a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59f8b0:{NFSU2_TR(0x59f8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8b6:{NFSU2_TR(0x59f8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8bc:{NFSU2_TR(0x59f8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8c2:{NFSU2_TR(0x59f8c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B59f8c5:{NFSU2_TR(0x59f8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8cb:{NFSU2_TR(0x59f8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8d1:{NFSU2_TR(0x59f8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8d7:{NFSU2_TR(0x59f8d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59f8dd:{NFSU2_TR(0x59f8dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59f8e3:{NFSU2_TR(0x59f8e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59f8e9:{NFSU2_TR(0x59f8e9);
w4(R+28,u32(0x4ull));
}
B59f8ee:{NFSU2_TR(0x59f8ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f8ef:{NFSU2_TR(0x59f8ef);
}
B59f8f0:L59f8f0:{c.instructions+=20;NFSU2_TR(0x59f8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8f3:{NFSU2_TR(0x59f8f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B59f8f5:{NFSU2_TR(0x59f8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8f8:{NFSU2_TR(0x59f8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8fb:{NFSU2_TR(0x59f8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f8fe:{NFSU2_TR(0x59f8fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff9cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59f902:{NFSU2_TR(0x59f902);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B59f905:{NFSU2_TR(0x59f905);
w4(R+20,u32(0x1ull));
}
B59f90a:{NFSU2_TR(0x59f90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f90d:{NFSU2_TR(0x59f90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f910:{NFSU2_TR(0x59f910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59f912:{NFSU2_TR(0x59f912);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f915:{NFSU2_TR(0x59f915);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f91b:{NFSU2_TR(0x59f91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f91e:{NFSU2_TR(0x59f91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f924:{NFSU2_TR(0x59f924);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B59f927:{NFSU2_TR(0x59f927);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B59f928:{NFSU2_TR(0x59f928);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B59f92b:{NFSU2_TR(0x59f92b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B59f92c:{NFSU2_TR(0x59f92c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f8f0u);}goto L59f8f0;}}
}
B59f92e:L59f92e:{c.instructions+=4;NFSU2_TR(0x59f92e);
w4(R+20,u32(0x4ull));
}
B59f933:{NFSU2_TR(0x59f933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f939:{NFSU2_TR(0x59f939);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f93f:{NFSU2_TR(0x59f93f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B59f941:L59f941:{c.instructions+=3;NFSU2_TR(0x59f941);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59f942:{NFSU2_TR(0x59f942);
__builtin_memmove((R+4),(R+24),4);
}
B59f944:{NFSU2_TR(0x59f944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f949ull));
TAIL_STATIC(0x5921b0u,592);
}
B59f949:L59f949:{c.instructions+=3;NFSU2_TR(0x59f949);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59f94a:{NFSU2_TR(0x59f94a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59f94c:{NFSU2_TR(0x59f94c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f941u);}goto L59f941;}}
}
B59f94e:L59f94e:{c.instructions+=16;NFSU2_TR(0x59f94e);
w4(R+0,u32(0x1ull));
}
B59f953:{NFSU2_TR(0x59f953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f959:{NFSU2_TR(0x59f959);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f95f:{NFSU2_TR(0x59f95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f965:{NFSU2_TR(0x59f965);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f96b:{NFSU2_TR(0x59f96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f971:{NFSU2_TR(0x59f971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f977:{NFSU2_TR(0x59f977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f97d:{NFSU2_TR(0x59f97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3fcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f983:{NFSU2_TR(0x59f983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
w4(U+4,u32(0x447a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f98d:{NFSU2_TR(0x59f98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59f997:{NFSU2_TR(0x59f997);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f99d:{NFSU2_TR(0x59f99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x414ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59f9a3:{NFSU2_TR(0x59f9a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59f9a5:{NFSU2_TR(0x59f9a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59f9a6:{NFSU2_TR(0x59f9a6);
if(r1(R+518)){{goto L59f9c8;}}
}
B59f9a8:L59f9a8:{c.instructions+=2;NFSU2_TR(0x59f9a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59f9ad:{NFSU2_TR(0x59f9ad);
if(r1(R+518)){{goto L59f9c8;}}
}
B59f9af:L59f9af:{c.instructions+=6;NFSU2_TR(0x59f9af);
{u32 ea_=u32(r4(R+24)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59f9b5:{NFSU2_TR(0x59f9b5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59f9bb:{NFSU2_TR(0x59f9bb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59f9c1:{NFSU2_TR(0x59f9c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59f9c3:{NFSU2_TR(0x59f9c3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59f9c6:{NFSU2_TR(0x59f9c6);
if(r1(R+514)){{goto L59f9cf;}}
}
B59f9c8:L59f9c8:{c.instructions+=2;NFSU2_TR(0x59f9c8);
__builtin_memmove((R+4),(R+24),4);
}
B59f9ca:{NFSU2_TR(0x59f9ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59f9cfull));
TAIL_STATIC(0x591cd0u,591);
}
B59f9cf:L59f9cf:{c.instructions+=8;NFSU2_TR(0x59f9cf);
w4(R+0,u32(0x3f800000ull));
}
B59f9d4:{NFSU2_TR(0x59f9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x428ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f9da:{NFSU2_TR(0x59f9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f9e0:{NFSU2_TR(0x59f9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f9e6:{NFSU2_TR(0x59f9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59f9ec:{NFSU2_TR(0x59f9ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59f9f2:{NFSU2_TR(0x59f9f2);
w4(R+4,u32(0x10ull));
}
B59f9f7:{NFSU2_TR(0x59f9f7);
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
B59f9f9:L59f9f9:{c.instructions+=1;NFSU2_TR(0x59f9f9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L59f9fb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59f9f9u);}goto L59f9f9;}
}
B59f9fb:L59f9fb:{c.instructions+=5;NFSU2_TR(0x59f9fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59f9fc:{NFSU2_TR(0x59f9fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59fa02:{NFSU2_TR(0x59fa02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fa03:{NFSU2_TR(0x59fa03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59fa04:{NFSU2_TR(0x59fa04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59fa10:L59fa10:{c.instructions+=5;NFSU2_TR(0x59fa10);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fa16:{NFSU2_TR(0x59fa16);
{u32 ea_=u32(u32(8001572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59fa1c:{NFSU2_TR(0x59fa1c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fa1e:{NFSU2_TR(0x59fa1e);
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
B59fa21:{NFSU2_TR(0x59fa21);
if(r1(R+514)){{goto L59fa2a;}}
}
B59fa23:L59fa23:{c.instructions+=2;NFSU2_TR(0x59fa23);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fa29:{NFSU2_TR(0x59fa29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59fa2a:L59fa2a:{c.instructions+=1;NFSU2_TR(0x59fa2a);
TAIL_STATIC(0x591d90u,591);
}
B59fa30:L59fa30:{c.instructions+=8;NFSU2_TR(0x59fa30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fa31:{NFSU2_TR(0x59fa31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fa32:{NFSU2_TR(0x59fa32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fa33:{NFSU2_TR(0x59fa33);
__builtin_memmove((R+28),(R+4),4);
}
B59fa35:{NFSU2_TR(0x59fa35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fa3b:{NFSU2_TR(0x59fa3b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B59fa3d:{NFSU2_TR(0x59fa3d);
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
B59fa3f:{NFSU2_TR(0x59fa3f);
if(r1(R+518)){{goto L59fa90;}}
}
B59fa41:L59fa41:{c.instructions+=2;NFSU2_TR(0x59fa41);
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
B59fa46:{NFSU2_TR(0x59fa46);
if(r1(R+518)){{goto L59fa90;}}
}
B59fa48:L59fa48:{c.instructions+=1;NFSU2_TR(0x59fa48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fa4dull));
TAIL_STATIC(0x5925b0u,592);
}
B59fa4d:L59fa4d:{c.instructions+=3;NFSU2_TR(0x59fa4d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fa51:{NFSU2_TR(0x59fa51);
w4(R+4,u32(0x2ull));
}
B59fa56:{NFSU2_TR(0x59fa56);
{goto L59fa60;}
}
B59fa60:L59fa60:{c.instructions+=5;NFSU2_TR(0x59fa60);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fa64:{NFSU2_TR(0x59fa64);
{u32 ea_=u32((r4(R+4)*4u)+u32(8001424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59fa6b:{NFSU2_TR(0x59fa6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fa6d:{NFSU2_TR(0x59fa6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59fa70:{NFSU2_TR(0x59fa70);
if(r1(R+518)){{goto L59fa82;}}
}
B59fa72:L59fa72:{c.instructions+=2;NFSU2_TR(0x59fa72);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B59fa73:{NFSU2_TR(0x59fa73);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59fa60u);}goto L59fa60;}}
}
B59fa75:L59fa75:{c.instructions+=2;NFSU2_TR(0x59fa75);
__builtin_memmove((R+4),(R+28),4);
}
B59fa77:{NFSU2_TR(0x59fa77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fa7cull));
TAIL_STATIC(0x592500u,592);
}
B59fa7c:L59fa7c:{c.instructions+=5;NFSU2_TR(0x59fa7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59fa7d:{NFSU2_TR(0x59fa7d);
__builtin_memmove((R+0),(R+24),4);
}
B59fa7f:{NFSU2_TR(0x59fa7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fa80:{NFSU2_TR(0x59fa80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59fa81:{NFSU2_TR(0x59fa81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59fa82:L59fa82:{c.instructions+=3;NFSU2_TR(0x59fa82);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fa85:{NFSU2_TR(0x59fa85);
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
B59fa87:{NFSU2_TR(0x59fa87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59fa90;}}
}
B59fa89:L59fa89:{c.instructions+=2;NFSU2_TR(0x59fa89);
__builtin_memmove((R+4),(R+28),4);
}
B59fa8b:{NFSU2_TR(0x59fa8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fa90ull));
TAIL_STATIC(0x592500u,592);
}
B59fa90:L59fa90:{c.instructions+=5;NFSU2_TR(0x59fa90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59fa91:{NFSU2_TR(0x59fa91);
__builtin_memmove((R+0),(R+24),4);
}
B59fa93:{NFSU2_TR(0x59fa93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fa94:{NFSU2_TR(0x59fa94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59fa95:{NFSU2_TR(0x59fa95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59faa0:L59faa0:{c.instructions+=6;NFSU2_TR(0x59faa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59faa1:{NFSU2_TR(0x59faa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59faa7:{NFSU2_TR(0x59faa7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59faa8:{NFSU2_TR(0x59faa8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B59faaa:{NFSU2_TR(0x59faaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59faac:{NFSU2_TR(0x59faac);
if(r1(R+518)){{goto L59fab5;}}
}
B59faae:L59faae:{c.instructions+=2;NFSU2_TR(0x59faae);
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
B59fab3:{NFSU2_TR(0x59fab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59fad8;}}
}
B59fab5:L59fab5:{c.instructions+=1;NFSU2_TR(0x59fab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fabaull));
TAIL_STATIC(0x5925b0u,592);
}
B59faba:L59faba:{c.instructions+=2;NFSU2_TR(0x59faba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fabe:{NFSU2_TR(0x59fabe);
w4(R+4,u32(0x2ull));
}
B59fac3:L59fac3:{c.instructions+=5;NFSU2_TR(0x59fac3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fac7:{NFSU2_TR(0x59fac7);
{u32 ea_=u32((r4(R+4)*4u)+u32(8001424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59face:{NFSU2_TR(0x59face);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fad0:{NFSU2_TR(0x59fad0);
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
B59fad3:{NFSU2_TR(0x59fad3);
if(r1(R+518)){{goto L59fadd;}}
}
B59fad5:L59fad5:{c.instructions+=2;NFSU2_TR(0x59fad5);
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
B59fad6:{NFSU2_TR(0x59fad6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59fac3u);}goto L59fac3;}}
}
B59fad8:L59fad8:{c.instructions+=4;NFSU2_TR(0x59fad8);
__builtin_memmove((R+0),(R+24),4);
}
B59fada:{NFSU2_TR(0x59fada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fadb:{NFSU2_TR(0x59fadb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59fadc:{NFSU2_TR(0x59fadc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59fadd:L59fadd:{c.instructions+=4;NFSU2_TR(0x59fadd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59fae0:{NFSU2_TR(0x59fae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fae1:{NFSU2_TR(0x59fae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59fae2:{NFSU2_TR(0x59fae2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59faf0:L59faf0:{c.instructions+=4;NFSU2_TR(0x59faf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59faf1:{NFSU2_TR(0x59faf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59faf2:{NFSU2_TR(0x59faf2);
__builtin_memmove((R+24),(R+4),4);
}
B59faf4:{NFSU2_TR(0x59faf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59faf9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59faa0u);}goto L59faa0;}
}
B59faf9:L59faf9:{c.instructions+=4;NFSU2_TR(0x59faf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59fafb:{NFSU2_TR(0x59fafb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B59fafe:{NFSU2_TR(0x59fafe);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59fb00:{NFSU2_TR(0x59fb00);
if(r1(R+518)){{goto L59fb3c;}}
}
B59fb02:L59fb02:{c.instructions+=2;NFSU2_TR(0x59fb02);
w4(R+4,u32(0x89cf48ull));
}
B59fb07:{NFSU2_TR(0x59fb07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fb0cull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B59fb0c:L59fb0c:{c.instructions+=3;NFSU2_TR(0x59fb0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59fb0e:{NFSU2_TR(0x59fb0e);
w4(R+0,u32(0x8651acull));
}
B59fb13:{NFSU2_TR(0x59fb13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59fb1a;}}
}
B59fb15:L59fb15:{c.instructions+=1;NFSU2_TR(0x59fb15);
w4(R+0,u32(0x86518cull));
}
B59fb1a:L59fb1a:{c.instructions+=6;NFSU2_TR(0x59fb1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59fb1c:{NFSU2_TR(0x59fb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fb22:{NFSU2_TR(0x59fb22);
__builtin_memmove((R+0),gp(0x7fbedc),4);
}
B59fb27:{NFSU2_TR(0x59fb27);
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
B59fb29:{NFSU2_TR(0x59fb29);
__builtin_memmove((R+0),(R+12),1);
}
B59fb2b:{NFSU2_TR(0x59fb2b);
if(r1(R+518)){{goto L59fb3e;}}
}
B59fb2d:L59fb2d:{c.instructions+=5;NFSU2_TR(0x59fb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fb33:{NFSU2_TR(0x59fb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x418ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fb39:{NFSU2_TR(0x59fb39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fb3a:{NFSU2_TR(0x59fb3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59fb3b:{NFSU2_TR(0x59fb3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59fb3c:L59fb3c:{c.instructions+=1;NFSU2_TR(0x59fb3c);
__builtin_memmove((R+0),(R+12),1);
}
B59fb3e:L59fb3e:{c.instructions+=3;NFSU2_TR(0x59fb3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59fb3f:{NFSU2_TR(0x59fb3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59fb40:{NFSU2_TR(0x59fb40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59fb50:L59fb50:{c.instructions+=10;NFSU2_TR(0x59fb50);
__builtin_memmove((R+0),(R+4),4);
}
B59fb52:{NFSU2_TR(0x59fb52);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59fb54:{NFSU2_TR(0x59fb54);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59fb58:{NFSU2_TR(0x59fb58);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59fb5c:{NFSU2_TR(0x59fb5c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59fb60:{NFSU2_TR(0x59fb60);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59fb64:{NFSU2_TR(0x59fb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fb67:{NFSU2_TR(0x59fb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fb6a:{NFSU2_TR(0x59fb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fb6d:{NFSU2_TR(0x59fb6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59fb70:L59fb70:{c.instructions+=29;NFSU2_TR(0x59fb70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fb71:{NFSU2_TR(0x59fb71);
__builtin_memmove((R+20),(R+16),4);
}
B59fb73:{NFSU2_TR(0x59fb73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59fb76:{NFSU2_TR(0x59fb76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x124ull))));
}
B59fb7c:{NFSU2_TR(0x59fb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fb7f:{NFSU2_TR(0x59fb7f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fb82:{NFSU2_TR(0x59fb82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fb83:{NFSU2_TR(0x59fb83);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fb86:{NFSU2_TR(0x59fb86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fb87:{NFSU2_TR(0x59fb87);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fb89:{NFSU2_TR(0x59fb89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fb8a:{NFSU2_TR(0x59fb8a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59fb8c:{NFSU2_TR(0x59fb8c);
__builtin_memmove((R+28),(R+4),4);
}
B59fb8e:{NFSU2_TR(0x59fb8e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59fb90:{NFSU2_TR(0x59fb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fb94:{NFSU2_TR(0x59fb94);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59fb96:{NFSU2_TR(0x59fb96);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59fb98:{NFSU2_TR(0x59fb98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59fb9a:{NFSU2_TR(0x59fb9a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59fb9c:{NFSU2_TR(0x59fb9c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59fb9e:{NFSU2_TR(0x59fb9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59fba0:{NFSU2_TR(0x59fba0);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59fba2:{NFSU2_TR(0x59fba2);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59fba4:{NFSU2_TR(0x59fba4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59fba6:{NFSU2_TR(0x59fba6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59fba8:{NFSU2_TR(0x59fba8);
{u32 ea_=u32(u32(8001624u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59fbae:{NFSU2_TR(0x59fbae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fbb0:{NFSU2_TR(0x59fbb0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59fbb3:{NFSU2_TR(0x59fbb3);
if(r1(R+514)){{goto L59fbbb;}}
}
B59fbb5:L59fbb5:{c.instructions+=2;NFSU2_TR(0x59fbb5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fbb9:{NFSU2_TR(0x59fbb9);
{goto L59fbc6;}
}
B59fbbb:L59fbbb:{c.instructions+=3;NFSU2_TR(0x59fbbb);
__builtin_memmove((R+0),gp(0x7a1858),4);
}
B59fbc0:{NFSU2_TR(0x59fbc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59fbc2:{NFSU2_TR(0x59fbc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fbc6:L59fbc6:{c.instructions+=8;NFSU2_TR(0x59fbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fbc9:{NFSU2_TR(0x59fbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fbcf:{NFSU2_TR(0x59fbcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B59fbd2:{NFSU2_TR(0x59fbd2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59fbd4:{NFSU2_TR(0x59fbd4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59fbd6:{NFSU2_TR(0x59fbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fbda:{NFSU2_TR(0x59fbda);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fbde:{NFSU2_TR(0x59fbde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59fbe4;}}
}
B59fbe0:L59fbe0:{c.instructions+=1;NFSU2_TR(0x59fbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fbe4:L59fbe4:{c.instructions+=4;NFSU2_TR(0x59fbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fbea:{NFSU2_TR(0x59fbea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B59fbed:{NFSU2_TR(0x59fbed);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59fbef:{NFSU2_TR(0x59fbef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59fbf5;}}
}
B59fbf1:L59fbf1:{c.instructions+=1;NFSU2_TR(0x59fbf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fbf5:L59fbf5:{c.instructions+=7;NFSU2_TR(0x59fbf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59fbf8:{NFSU2_TR(0x59fbf8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59fbfa:{NFSU2_TR(0x59fbfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fbfe:{NFSU2_TR(0x59fbfe);
__builtin_memmove((R+28),(R+28),4);
}
B59fc00:{NFSU2_TR(0x59fc00);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B59fc04:{NFSU2_TR(0x59fc04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59fc06:{NFSU2_TR(0x59fc06);
if(r1(R+518)){TAIL_STATIC(0x5a0136u,5a0);}
}
B59fc0c:L59fc0c:{c.instructions+=3;NFSU2_TR(0x59fc0c);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B59fc11:{NFSU2_TR(0x59fc11);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59fc13:{NFSU2_TR(0x59fc13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59fc1e;}}
}
B59fc15:L59fc15:{c.instructions+=3;NFSU2_TR(0x59fc15);
__builtin_memmove((R+0),gp(0x890108),4);
}
B59fc1a:{NFSU2_TR(0x59fc1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59fc1c:{NFSU2_TR(0x59fc1c);
if(r1(R+518)){{goto L59fc71;}}
}
B59fc1e:L59fc1e:{c.instructions+=4;NFSU2_TR(0x59fc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fc24:{NFSU2_TR(0x59fc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fc27:{NFSU2_TR(0x59fc27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59fc29:{NFSU2_TR(0x59fc29);
if(r1(R+518)){{goto L59fc71;}}
}
B59fc2b:L59fc2b:{c.instructions+=5;NFSU2_TR(0x59fc2b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fc2f:{NFSU2_TR(0x59fc2f);
{u32 ea_=u32(u32(8001644u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59fc35:{NFSU2_TR(0x59fc35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fc37:{NFSU2_TR(0x59fc37);
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
B59fc3a:{NFSU2_TR(0x59fc3a);
if(r1(R+518)){{goto L59fc53;}}
}
B59fc3c:L59fc3c:{c.instructions+=3;NFSU2_TR(0x59fc3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59fc3e:{NFSU2_TR(0x59fc3e);
__builtin_memmove((R+4),(R+24),4);
}
B59fc40:{NFSU2_TR(0x59fc40);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fc43ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59fc43:L59fc43:{c.instructions+=5;NFSU2_TR(0x59fc43);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fc46:{NFSU2_TR(0x59fc46);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59fc4c:{NFSU2_TR(0x59fc4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fc4e:{NFSU2_TR(0x59fc4e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59fc51:{NFSU2_TR(0x59fc51);
if(r1(R+514)){{goto L59fc71;}}
}
B59fc53:L59fc53:{c.instructions+=5;NFSU2_TR(0x59fc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fc59:{NFSU2_TR(0x59fc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fc5f:{NFSU2_TR(0x59fc5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59fc61:{NFSU2_TR(0x59fc61);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x964ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59fc68:{NFSU2_TR(0x59fc68);
if(r1(R+518)){{goto L59fc71;}}
}
B59fc6a:L59fc6a:{c.instructions+=2;NFSU2_TR(0x59fc6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fc6c:{NFSU2_TR(0x59fc6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fc71ull));
TAIL_STATIC(0x63a4b0u,63a);
}
B59fc71:L59fc71:{c.instructions+=5;NFSU2_TR(0x59fc71);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fc75:{NFSU2_TR(0x59fc75);
{u32 ea_=u32(u32(8001640u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59fc7b:{NFSU2_TR(0x59fc7b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fc7d:{NFSU2_TR(0x59fc7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59fc80:{NFSU2_TR(0x59fc80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a0136u,5a0);}
}
B59fc86:L59fc86:{c.instructions+=5;NFSU2_TR(0x59fc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fc8c:{NFSU2_TR(0x59fc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59fc8f:{NFSU2_TR(0x59fc8f);
w4(R+4,u32(0x1ull));
}
B59fc94:{NFSU2_TR(0x59fc94);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59fc96:{NFSU2_TR(0x59fc96);
if(r1(R+518)){TAIL_STATIC(0x5a0136u,5a0);}
}
B59fc9c:L59fc9c:{c.instructions+=4;NFSU2_TR(0x59fc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fc9f:{NFSU2_TR(0x59fc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59fca5:{NFSU2_TR(0x59fca5);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B59fca9:{NFSU2_TR(0x59fca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a0136u,5a0);}
}
B59fcaf:L59fcaf:{c.instructions+=4;NFSU2_TR(0x59fcaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fcb5:{NFSU2_TR(0x59fcb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59fcb8:{NFSU2_TR(0x59fcb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59fcba:{NFSU2_TR(0x59fcba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a0136u,5a0);}
}
B59fcc0:L59fcc0:{c.instructions+=4;NFSU2_TR(0x59fcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fcc3:{NFSU2_TR(0x59fcc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fcc4:{NFSU2_TR(0x59fcc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fcca:{NFSU2_TR(0x59fcca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fccfull));
TAIL_STATIC(0x5f6be0u,5f6);
}
B59fccf:L59fccf:{c.instructions+=3;NFSU2_TR(0x59fccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59fcd1:{NFSU2_TR(0x59fcd1);
__builtin_memmove((R+4),(R+24),4);
}
B59fcd3:{NFSU2_TR(0x59fcd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fcd6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59fcd6:L59fcd6:{c.instructions+=14;NFSU2_TR(0x59fcd6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fcd9:{NFSU2_TR(0x59fcd9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59fcdc:{NFSU2_TR(0x59fcdc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fcdf:{NFSU2_TR(0x59fcdf);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59fce2:{NFSU2_TR(0x59fce2);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fce4:{NFSU2_TR(0x59fce4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59fce6:{NFSU2_TR(0x59fce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fcea:{NFSU2_TR(0x59fcea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59fcec:{NFSU2_TR(0x59fcec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fcef:{NFSU2_TR(0x59fcef);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fcf3:{NFSU2_TR(0x59fcf3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59fcf5:{NFSU2_TR(0x59fcf5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fcf9:{NFSU2_TR(0x59fcf9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fcfd:{NFSU2_TR(0x59fcfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59fd15;}}
}
B59fcff:L59fcff:{c.instructions+=7;NFSU2_TR(0x59fcff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59fd01:{NFSU2_TR(0x59fd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59fd04:{NFSU2_TR(0x59fd04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fd07:{NFSU2_TR(0x59fd07);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fd0b:{NFSU2_TR(0x59fd0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fd0f:{NFSU2_TR(0x59fd0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fd13:{NFSU2_TR(0x59fd13);
{goto L59fd3f;}
}
B59fd15:L59fd15:{c.instructions+=12;NFSU2_TR(0x59fd15);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fd17:{NFSU2_TR(0x59fd17);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59fd19:{NFSU2_TR(0x59fd19);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fd1c:{NFSU2_TR(0x59fd1c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59fd1e:{NFSU2_TR(0x59fd1e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fd21:{NFSU2_TR(0x59fd21);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59fd23:{NFSU2_TR(0x59fd23);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fd2a:{NFSU2_TR(0x59fd2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fd31:{NFSU2_TR(0x59fd31);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59fd33:{NFSU2_TR(0x59fd33);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fd37:{NFSU2_TR(0x59fd37);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fd3b:{NFSU2_TR(0x59fd3b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fd3f:L59fd3f:{c.instructions+=5;NFSU2_TR(0x59fd3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59fd43:{NFSU2_TR(0x59fd43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fd44:{NFSU2_TR(0x59fd44);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59fd4b:{NFSU2_TR(0x59fd4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fd4c:{NFSU2_TR(0x59fd4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fd51ull));
TAIL_STATIC(0x43cf10u,43c);
}
B59fd51:L59fd51:{c.instructions+=10;NFSU2_TR(0x59fd51);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fd58:{NFSU2_TR(0x59fd58);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59fd5f:{NFSU2_TR(0x59fd5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fd66:{NFSU2_TR(0x59fd66);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fd6a:{NFSU2_TR(0x59fd6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fd6e:{NFSU2_TR(0x59fd6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59fd70:{NFSU2_TR(0x59fd70);
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
B59fd73:{NFSU2_TR(0x59fd73);
__builtin_memmove((R+4),(R+24),4);
}
B59fd75:{NFSU2_TR(0x59fd75);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fd79:{NFSU2_TR(0x59fd79);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fd7cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59fd7c:L59fd7c:{c.instructions+=4;NFSU2_TR(0x59fd7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fd7d:{NFSU2_TR(0x59fd7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59fd84:{NFSU2_TR(0x59fd84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fd85:{NFSU2_TR(0x59fd85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fd8aull));
TAIL_STATIC(0x43cf10u,43c);
}
B59fd8a:L59fd8a:{c.instructions+=19;NFSU2_TR(0x59fd8a);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fd91:{NFSU2_TR(0x59fd91);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59fd98:{NFSU2_TR(0x59fd98);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fd9c:{NFSU2_TR(0x59fd9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fda3:{NFSU2_TR(0x59fda3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59fda5:{NFSU2_TR(0x59fda5);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fdac:{NFSU2_TR(0x59fdac);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fdb3:{NFSU2_TR(0x59fdb3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fdb7:{NFSU2_TR(0x59fdb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fdbb:{NFSU2_TR(0x59fdbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59fdbe:{NFSU2_TR(0x59fdbe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59fdc0:{NFSU2_TR(0x59fdc0);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fdc4:{NFSU2_TR(0x59fdc4);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fdc8:{NFSU2_TR(0x59fdc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59fdca:{NFSU2_TR(0x59fdca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59fdce:{NFSU2_TR(0x59fdce);
{u32 ea_=u32(u32(8001620u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59fdd4:{NFSU2_TR(0x59fdd4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59fdd6:{NFSU2_TR(0x59fdd6);
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
B59fdd9:{NFSU2_TR(0x59fdd9);
if(r1(R+514)){{goto L59fe9c;}}
}
B59fddf:L59fddf:{c.instructions+=28;NFSU2_TR(0x59fddf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fde3:{NFSU2_TR(0x59fde3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59fde7:{NFSU2_TR(0x59fde7);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fdeb:{NFSU2_TR(0x59fdeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fdec:{NFSU2_TR(0x59fdec);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fdf0:{NFSU2_TR(0x59fdf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59fdf4:{NFSU2_TR(0x59fdf4);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fdf8:{NFSU2_TR(0x59fdf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fdf9:{NFSU2_TR(0x59fdf9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fdfd:{NFSU2_TR(0x59fdfd);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe04:{NFSU2_TR(0x59fe04);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59fe06:{NFSU2_TR(0x59fe06);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe0d:{NFSU2_TR(0x59fe0d);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe14:{NFSU2_TR(0x59fe14);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fe1b:{NFSU2_TR(0x59fe1b);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fe1f:{NFSU2_TR(0x59fe1f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59fe26:{NFSU2_TR(0x59fe26);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fe2a:{NFSU2_TR(0x59fe2a);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59fe31:{NFSU2_TR(0x59fe31);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fe35:{NFSU2_TR(0x59fe35);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B59fe37:{NFSU2_TR(0x59fe37);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe3e:{NFSU2_TR(0x59fe3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59fe45:{NFSU2_TR(0x59fe45);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59fe47:{NFSU2_TR(0x59fe47);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe4b:{NFSU2_TR(0x59fe4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fe4f:{NFSU2_TR(0x59fe4f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe53:{NFSU2_TR(0x59fe53);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59fe55:{NFSU2_TR(0x59fe55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fe5aull));
TAIL_STATIC(0x43cf10u,43c);
}
B59fe5a:L59fe5a:{c.instructions+=19;NFSU2_TR(0x59fe5a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fe5e:{NFSU2_TR(0x59fe5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59fe60:{NFSU2_TR(0x59fe60);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59fe62:{NFSU2_TR(0x59fe62);
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
B59fe65:{NFSU2_TR(0x59fe65);
{u32 ea_=u32(u32(8001592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fe6b:{NFSU2_TR(0x59fe6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59fe6f:{NFSU2_TR(0x59fe6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fe70:{NFSU2_TR(0x59fe70);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fe74:{NFSU2_TR(0x59fe74);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59fe78:{NFSU2_TR(0x59fe78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fe79:{NFSU2_TR(0x59fe79);
__builtin_memmove((R+4),(R+24),4);
}
B59fe7b:{NFSU2_TR(0x59fe7b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59fe7d:{NFSU2_TR(0x59fe7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59fe85:{NFSU2_TR(0x59fe85);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fe89:{NFSU2_TR(0x59fe89);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59fe8b:{NFSU2_TR(0x59fe8b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe8f:{NFSU2_TR(0x59fe8f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59fe93:{NFSU2_TR(0x59fe93);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fe97:{NFSU2_TR(0x59fe97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fe9aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59fe9a:L59fe9a:{c.instructions+=1;NFSU2_TR(0x59fe9a);
{goto L59fe9e;}
}
B59fe9c:L59fe9c:{c.instructions+=1;NFSU2_TR(0x59fe9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59fe9e:L59fe9e:{c.instructions+=3;NFSU2_TR(0x59fe9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59fea0:{NFSU2_TR(0x59fea0);
__builtin_memmove((R+4),(R+24),4);
}
B59fea2:{NFSU2_TR(0x59fea2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fea5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59fea5:L59fea5:{c.instructions+=15;NFSU2_TR(0x59fea5);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59fea7:{NFSU2_TR(0x59fea7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59fea9:{NFSU2_TR(0x59fea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59feab:{NFSU2_TR(0x59feab);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59feae:{NFSU2_TR(0x59feae);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59feb1:{NFSU2_TR(0x59feb1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59feb4:{NFSU2_TR(0x59feb4);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59feb7:{NFSU2_TR(0x59feb7);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59febe:{NFSU2_TR(0x59febe);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59fec5:{NFSU2_TR(0x59fec5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59fec7:{NFSU2_TR(0x59fec7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fecb:{NFSU2_TR(0x59fecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59fecf:{NFSU2_TR(0x59fecf);
__builtin_memmove((R+4),(R+24),4);
}
B59fed1:{NFSU2_TR(0x59fed1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59fed5:{NFSU2_TR(0x59fed5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fed8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59fed8:L59fed8:{c.instructions+=4;NFSU2_TR(0x59fed8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fed9:{NFSU2_TR(0x59fed9);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59fee0:{NFSU2_TR(0x59fee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fee1:{NFSU2_TR(0x59fee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fee6ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B59fee6:L59fee6:{c.instructions+=7;NFSU2_TR(0x59fee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59feea:{NFSU2_TR(0x59feea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59feeb:{NFSU2_TR(0x59feeb);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59fef2:{NFSU2_TR(0x59fef2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fef3:{NFSU2_TR(0x59fef3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59fef7:{NFSU2_TR(0x59fef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fef8:{NFSU2_TR(0x59fef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fefdull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59fefd:L59fefd:{c.instructions+=7;NFSU2_TR(0x59fefd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ff01:{NFSU2_TR(0x59ff01);
{u32 ea_=u32(u32(8001620u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ff07:{NFSU2_TR(0x59ff07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59ff0a:{NFSU2_TR(0x59ff0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ff12:{NFSU2_TR(0x59ff12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ff14:{NFSU2_TR(0x59ff14);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59ff17:{NFSU2_TR(0x59ff17);
if(r1(R+514)){{goto L59ff65;}}
}
B59ff19:L59ff19:{c.instructions+=3;NFSU2_TR(0x59ff19);
__builtin_memmove((R+4),gp(0x890080),4);
}
B59ff1f:{NFSU2_TR(0x59ff1f);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ff21:{NFSU2_TR(0x59ff21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ff26ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B59ff26:L59ff26:{c.instructions+=2;NFSU2_TR(0x59ff26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x32ull))));
}
B59ff29:{NFSU2_TR(0x59ff29);
if(r1(R+512)){{goto L59ff3b;}}
}
B59ff2b:L59ff2b:{c.instructions+=4;NFSU2_TR(0x59ff2b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ff2f:{NFSU2_TR(0x59ff2f);
{u32 ea_=u32(u32(8001612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ff35:{NFSU2_TR(0x59ff35);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59ff37:{NFSU2_TR(0x59ff37);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ff3b:L59ff3b:{c.instructions+=6;NFSU2_TR(0x59ff3b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ff3f:{NFSU2_TR(0x59ff3f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59ff41:{NFSU2_TR(0x59ff41);
{u32 ea_=u32(u32(8001616u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ff47:{NFSU2_TR(0x59ff47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ff49:{NFSU2_TR(0x59ff49);
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
B59ff4c:{NFSU2_TR(0x59ff4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59ffe9;}}
}
B59ff52:L59ff52:{c.instructions+=4;NFSU2_TR(0x59ff52);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ff56:{NFSU2_TR(0x59ff56);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ff5c:{NFSU2_TR(0x59ff5c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ff60:{NFSU2_TR(0x59ff60);
{goto L59ffe9;}
}
B59ff65:L59ff65:{c.instructions+=5;NFSU2_TR(0x59ff65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ff68:{NFSU2_TR(0x59ff68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ff6e:{NFSU2_TR(0x59ff6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59ff71:{NFSU2_TR(0x59ff71);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ff73:{NFSU2_TR(0x59ff73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a0085u,5a0);}
}
B59ff79:L59ff79:{c.instructions+=4;NFSU2_TR(0x59ff79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ff7f:{NFSU2_TR(0x59ff7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59ff82:{NFSU2_TR(0x59ff82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ff84:{NFSU2_TR(0x59ff84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a0085u,5a0);}
}
B59ff8a:L59ff8a:{c.instructions+=14;NFSU2_TR(0x59ff8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ff90:{NFSU2_TR(0x59ff90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ff93:{NFSU2_TR(0x59ff93);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ff96:{NFSU2_TR(0x59ff96);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59ff99:{NFSU2_TR(0x59ff99);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59ff9b:{NFSU2_TR(0x59ff9b);
{u32 ea_=u32(u32(8001604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ffa1:{NFSU2_TR(0x59ffa1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ffa7:{NFSU2_TR(0x59ffa7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ffab:{NFSU2_TR(0x59ffab);
{u32 ea_=u32(u32(8001604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ffb1:{NFSU2_TR(0x59ffb1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59ffb5:{NFSU2_TR(0x59ffb5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59ffb7:{NFSU2_TR(0x59ffb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ffb9:{NFSU2_TR(0x59ffb9);
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
B59ffbc:{NFSU2_TR(0x59ffbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59ffc4;}}
}
B59ffbe:L59ffbe:{c.instructions+=2;NFSU2_TR(0x59ffbe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ffc2:{NFSU2_TR(0x59ffc2);
{goto L59ffdb;}
}
B59ffc4:L59ffc4:{c.instructions+=6;NFSU2_TR(0x59ffc4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59ffc6:{NFSU2_TR(0x59ffc6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ffca:{NFSU2_TR(0x59ffca);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59ffcc:{NFSU2_TR(0x59ffcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ffce:{NFSU2_TR(0x59ffce);
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
B59ffd1:{NFSU2_TR(0x59ffd1);
if(r1(R+514)){{goto L59ffd9;}}
}
B59ffd3:L59ffd3:{c.instructions+=2;NFSU2_TR(0x59ffd3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ffd7:{NFSU2_TR(0x59ffd7);
{goto L59ffdb;}
}
B59ffd9:L59ffd9:{c.instructions+=1;NFSU2_TR(0x59ffd9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59ffdb:L59ffdb:{c.instructions+=3;NFSU2_TR(0x59ffdb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ffdf:{NFSU2_TR(0x59ffdf);
{u32 ea_=u32(u32(8001608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ffe5:{NFSU2_TR(0x59ffe5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ffe9:L59ffe9:{c.instructions+=5;NFSU2_TR(0x59ffe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59ffeb:{NFSU2_TR(0x59ffeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ffef:{NFSU2_TR(0x59ffef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fff0:{NFSU2_TR(0x59fff0);
__builtin_memmove((R+4),(R+24),4);
}
B59fff2:{NFSU2_TR(0x59fff2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59fff5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59fff5:L59fff5:{c.instructions+=4;NFSU2_TR(0x59fff5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fff6:{NFSU2_TR(0x59fff6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59fffa:{NFSU2_TR(0x59fffa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59fffb:{NFSU2_TR(0x59fffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0000ull));
TAIL_STATIC(0x43c9c0u,43c);
}
XIT:NFSU2_TR_EXIT(0x59f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
