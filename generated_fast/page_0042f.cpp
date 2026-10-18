#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_417(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_42b(u8* __restrict R,Cpu& c);
u32 body_42d(u8* __restrict R,Cpu& c);
u32 body_42e(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x42f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x42f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_42f(u8* __restrict R,Cpu& c);
u32 page_42f(Cpu& c){return body_42f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_42f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x42f000:goto L42f000;
case 0x42f002:c.instructions+=10;goto B42f002;
case 0x42f004:c.instructions+=9;goto B42f004;
case 0x42f008:c.instructions+=8;goto B42f008;
case 0x42f00b:c.instructions+=7;goto B42f00b;
case 0x42f00e:c.instructions+=6;goto B42f00e;
case 0x42f012:c.instructions+=5;goto B42f012;
case 0x42f015:c.instructions+=4;goto B42f015;
case 0x42f016:c.instructions+=3;goto B42f016;
case 0x42f018:c.instructions+=2;goto B42f018;
case 0x42f01e:c.instructions+=1;goto B42f01e;
case 0x42f023:goto L42f023;
case 0x42f025:c.instructions+=22;goto B42f025;
case 0x42f02c:c.instructions+=21;goto B42f02c;
case 0x42f033:c.instructions+=20;goto B42f033;
case 0x42f039:c.instructions+=19;goto B42f039;
case 0x42f03f:c.instructions+=18;goto B42f03f;
case 0x42f041:c.instructions+=17;goto B42f041;
case 0x42f044:c.instructions+=16;goto B42f044;
case 0x42f047:c.instructions+=15;goto B42f047;
case 0x42f04d:c.instructions+=14;goto B42f04d;
case 0x42f050:c.instructions+=13;goto B42f050;
case 0x42f055:c.instructions+=12;goto B42f055;
case 0x42f057:c.instructions+=11;goto B42f057;
case 0x42f05d:c.instructions+=10;goto B42f05d;
case 0x42f061:c.instructions+=9;goto B42f061;
case 0x42f063:c.instructions+=8;goto B42f063;
case 0x42f069:c.instructions+=7;goto B42f069;
case 0x42f06d:c.instructions+=6;goto B42f06d;
case 0x42f071:c.instructions+=5;goto B42f071;
case 0x42f077:c.instructions+=4;goto B42f077;
case 0x42f07d:c.instructions+=3;goto B42f07d;
case 0x42f07f:c.instructions+=2;goto B42f07f;
case 0x42f082:c.instructions+=1;goto B42f082;
case 0x42f084:goto L42f084;
case 0x42f088:c.instructions+=1;goto B42f088;
case 0x42f08e:goto L42f08e;
case 0x42f092:c.instructions+=5;goto B42f092;
case 0x42f098:c.instructions+=4;goto B42f098;
case 0x42f09f:c.instructions+=3;goto B42f09f;
case 0x42f0a1:c.instructions+=2;goto B42f0a1;
case 0x42f0a3:c.instructions+=1;goto B42f0a3;
case 0x42f0a5:goto L42f0a5;
case 0x42f0a8:c.instructions+=1;goto B42f0a8;
case 0x42f0aa:goto L42f0aa;
case 0x42f0b0:c.instructions+=3;goto B42f0b0;
case 0x42f0b3:c.instructions+=2;goto B42f0b3;
case 0x42f0b6:c.instructions+=1;goto B42f0b6;
case 0x42f0b8:goto L42f0b8;
case 0x42f0bb:c.instructions+=1;goto B42f0bb;
case 0x42f0bd:goto L42f0bd;
case 0x42f0c3:c.instructions+=2;goto B42f0c3;
case 0x42f0ca:c.instructions+=1;goto B42f0ca;
case 0x42f0cd:goto L42f0cd;
case 0x42f0ce:c.instructions+=3;goto B42f0ce;
case 0x42f0cf:c.instructions+=2;goto B42f0cf;
case 0x42f0d1:c.instructions+=1;goto B42f0d1;
case 0x42f0d6:goto L42f0d6;
case 0x42f0dc:c.instructions+=8;goto B42f0dc;
case 0x42f0e0:c.instructions+=7;goto B42f0e0;
case 0x42f0e1:c.instructions+=6;goto B42f0e1;
case 0x42f0e2:c.instructions+=5;goto B42f0e2;
case 0x42f0e3:c.instructions+=4;goto B42f0e3;
case 0x42f0e4:c.instructions+=3;goto B42f0e4;
case 0x42f0e9:c.instructions+=2;goto B42f0e9;
case 0x42f0f1:c.instructions+=1;goto B42f0f1;
case 0x42f0f6:goto L42f0f6;
case 0x42f0f8:c.instructions+=1;goto B42f0f8;
case 0x42f0fa:goto L42f0fa;
case 0x42f0fe:c.instructions+=4;goto B42f0fe;
case 0x42f104:c.instructions+=3;goto B42f104;
case 0x42f106:c.instructions+=2;goto B42f106;
case 0x42f109:c.instructions+=1;goto B42f109;
case 0x42f10b:goto L42f10b;
case 0x42f10f:c.instructions+=3;goto B42f10f;
case 0x42f115:c.instructions+=2;goto B42f115;
case 0x42f117:c.instructions+=1;goto B42f117;
case 0x42f119:goto L42f119;
case 0x42f11c:c.instructions+=3;goto B42f11c;
case 0x42f11e:c.instructions+=2;goto B42f11e;
case 0x42f11f:c.instructions+=1;goto B42f11f;
case 0x42f122:goto L42f122;
case 0x42f124:goto L42f124;
case 0x42f126:goto L42f126;
case 0x42f12c:c.instructions+=8;goto B42f12c;
case 0x42f12e:c.instructions+=7;goto B42f12e;
case 0x42f130:c.instructions+=6;goto B42f130;
case 0x42f131:c.instructions+=5;goto B42f131;
case 0x42f132:c.instructions+=4;goto B42f132;
case 0x42f133:c.instructions+=3;goto B42f133;
case 0x42f134:c.instructions+=2;goto B42f134;
case 0x42f136:c.instructions+=1;goto B42f136;
case 0x42f13b:goto L42f13b;
case 0x42f13d:goto L42f13d;
case 0x42f143:c.instructions+=6;goto B42f143;
case 0x42f149:c.instructions+=5;goto B42f149;
case 0x42f14b:c.instructions+=4;goto B42f14b;
case 0x42f151:c.instructions+=3;goto B42f151;
case 0x42f153:c.instructions+=2;goto B42f153;
case 0x42f156:c.instructions+=1;goto B42f156;
case 0x42f158:goto L42f158;
case 0x42f15c:c.instructions+=5;goto B42f15c;
case 0x42f162:c.instructions+=4;goto B42f162;
case 0x42f168:c.instructions+=3;goto B42f168;
case 0x42f16a:c.instructions+=2;goto B42f16a;
case 0x42f16d:c.instructions+=1;goto B42f16d;
case 0x42f16f:goto L42f16f;
case 0x42f175:c.instructions+=2;goto B42f175;
case 0x42f17b:c.instructions+=1;goto B42f17b;
case 0x42f180:goto L42f180;
case 0x42f182:c.instructions+=5;goto B42f182;
case 0x42f188:c.instructions+=4;goto B42f188;
case 0x42f18c:c.instructions+=3;goto B42f18c;
case 0x42f190:c.instructions+=2;goto B42f190;
case 0x42f192:c.instructions+=1;goto B42f192;
case 0x42f194:goto L42f194;
case 0x42f19a:c.instructions+=2;goto B42f19a;
case 0x42f19c:c.instructions+=1;goto B42f19c;
case 0x42f19e:goto L42f19e;
case 0x42f1a4:c.instructions+=2;goto B42f1a4;
case 0x42f1aa:c.instructions+=1;goto B42f1aa;
case 0x42f1af:goto L42f1af;
case 0x42f1b5:c.instructions+=3;goto B42f1b5;
case 0x42f1b6:c.instructions+=2;goto B42f1b6;
case 0x42f1b7:c.instructions+=1;goto B42f1b7;
case 0x42f1bc:goto L42f1bc;
case 0x42f1c2:c.instructions+=4;goto B42f1c2;
case 0x42f1c5:c.instructions+=3;goto B42f1c5;
case 0x42f1c9:c.instructions+=2;goto B42f1c9;
case 0x42f1cf:c.instructions+=1;goto B42f1cf;
case 0x42f1d4:goto L42f1d4;
case 0x42f1d8:c.instructions+=1;goto B42f1d8;
case 0x42f1dd:goto L42f1dd;
case 0x42f1df:c.instructions+=3;goto B42f1df;
case 0x42f1e1:c.instructions+=2;goto B42f1e1;
case 0x42f1e3:c.instructions+=1;goto B42f1e3;
case 0x42f1e9:goto L42f1e9;
case 0x42f1ef:c.instructions+=2;goto B42f1ef;
case 0x42f1f1:c.instructions+=1;goto B42f1f1;
case 0x42f1f7:goto L42f1f7;
case 0x42f1fb:c.instructions+=4;goto B42f1fb;
case 0x42f201:c.instructions+=3;goto B42f201;
case 0x42f203:c.instructions+=2;goto B42f203;
case 0x42f206:c.instructions+=1;goto B42f206;
case 0x42f208:goto L42f208;
case 0x42f20f:c.instructions+=3;goto B42f20f;
case 0x42f215:c.instructions+=2;goto B42f215;
case 0x42f21b:c.instructions+=1;goto B42f21b;
case 0x42f220:goto L42f220;
case 0x42f221:c.instructions+=3;goto B42f221;
case 0x42f222:c.instructions+=2;goto B42f222;
case 0x42f224:c.instructions+=1;goto B42f224;
case 0x42f229:goto L42f229;
case 0x42f22f:c.instructions+=2;goto B42f22f;
case 0x42f231:c.instructions+=1;goto B42f231;
case 0x42f233:goto L42f233;
case 0x42f239:c.instructions+=3;goto B42f239;
case 0x42f23b:c.instructions+=2;goto B42f23b;
case 0x42f23e:c.instructions+=1;goto B42f23e;
case 0x42f240:goto L42f240;
case 0x42f247:c.instructions+=1;goto B42f247;
case 0x42f249:goto L42f249;
case 0x42f24f:c.instructions+=6;goto B42f24f;
case 0x42f255:c.instructions+=5;goto B42f255;
case 0x42f257:c.instructions+=4;goto B42f257;
case 0x42f259:c.instructions+=3;goto B42f259;
case 0x42f25b:c.instructions+=2;goto B42f25b;
case 0x42f25e:c.instructions+=1;goto B42f25e;
case 0x42f260:goto L42f260;
case 0x42f267:goto L42f267;
case 0x42f26d:c.instructions+=2;goto B42f26d;
case 0x42f26f:c.instructions+=1;goto B42f26f;
case 0x42f271:goto L42f271;
case 0x42f277:c.instructions+=2;goto B42f277;
case 0x42f27d:c.instructions+=1;goto B42f27d;
case 0x42f27f:goto L42f27f;
case 0x42f285:c.instructions+=5;goto B42f285;
case 0x42f28b:c.instructions+=4;goto B42f28b;
case 0x42f291:c.instructions+=3;goto B42f291;
case 0x42f297:c.instructions+=2;goto B42f297;
case 0x42f29d:c.instructions+=1;goto B42f29d;
case 0x42f29f:goto L42f29f;
case 0x42f2a4:c.instructions+=5;goto B42f2a4;
case 0x42f2a6:c.instructions+=4;goto B42f2a6;
case 0x42f2a7:c.instructions+=3;goto B42f2a7;
case 0x42f2a8:c.instructions+=2;goto B42f2a8;
case 0x42f2aa:c.instructions+=1;goto B42f2aa;
case 0x42f2af:goto L42f2af;
case 0x42f2b1:goto L42f2b1;
case 0x42f2b7:c.instructions+=4;goto B42f2b7;
case 0x42f2bd:c.instructions+=3;goto B42f2bd;
case 0x42f2bf:c.instructions+=2;goto B42f2bf;
case 0x42f2c2:c.instructions+=1;goto B42f2c2;
case 0x42f2c8:goto L42f2c8;
case 0x42f2ca:c.instructions+=5;goto B42f2ca;
case 0x42f2cd:c.instructions+=4;goto B42f2cd;
case 0x42f2d0:c.instructions+=3;goto B42f2d0;
case 0x42f2d2:c.instructions+=2;goto B42f2d2;
case 0x42f2d4:c.instructions+=1;goto B42f2d4;
case 0x42f2d6:goto L42f2d6;
case 0x42f2d7:c.instructions+=2;goto B42f2d7;
case 0x42f2d9:c.instructions+=1;goto B42f2d9;
case 0x42f2de:goto L42f2de;
case 0x42f2e0:c.instructions+=2;goto B42f2e0;
case 0x42f2e2:c.instructions+=1;goto B42f2e2;
case 0x42f2e7:goto L42f2e7;
case 0x42f2e9:c.instructions+=1;goto B42f2e9;
case 0x42f2eb:goto L42f2eb;
case 0x42f2ed:c.instructions+=1;goto B42f2ed;
case 0x42f2f2:goto L42f2f2;
case 0x42f2f4:c.instructions+=1;goto B42f2f4;
case 0x42f2f6:goto L42f2f6;
case 0x42f2fa:c.instructions+=3;goto B42f2fa;
case 0x42f2fb:c.instructions+=2;goto B42f2fb;
case 0x42f2fd:c.instructions+=1;goto B42f2fd;
case 0x42f2ff:goto L42f2ff;
case 0x42f301:goto L42f301;
case 0x42f303:c.instructions+=2;goto B42f303;
case 0x42f309:c.instructions+=1;goto B42f309;
case 0x42f30f:goto L42f30f;
case 0x42f315:c.instructions+=7;goto B42f315;
case 0x42f316:c.instructions+=6;goto B42f316;
case 0x42f31c:c.instructions+=5;goto B42f31c;
case 0x42f31d:c.instructions+=4;goto B42f31d;
case 0x42f31e:c.instructions+=3;goto B42f31e;
case 0x42f31f:c.instructions+=2;goto B42f31f;
case 0x42f322:c.instructions+=1;goto B42f322;
case 0x42f330:goto L42f330;
case 0x42f331:c.instructions+=18;goto B42f331;
case 0x42f333:c.instructions+=17;goto B42f333;
case 0x42f336:c.instructions+=16;goto B42f336;
case 0x42f339:c.instructions+=15;goto B42f339;
case 0x42f33a:c.instructions+=14;goto B42f33a;
case 0x42f33b:c.instructions+=13;goto B42f33b;
case 0x42f33c:c.instructions+=12;goto B42f33c;
case 0x42f33f:c.instructions+=11;goto B42f33f;
case 0x42f341:c.instructions+=10;goto B42f341;
case 0x42f343:c.instructions+=9;goto B42f343;
case 0x42f347:c.instructions+=8;goto B42f347;
case 0x42f34a:c.instructions+=7;goto B42f34a;
case 0x42f34e:c.instructions+=6;goto B42f34e;
case 0x42f354:c.instructions+=5;goto B42f354;
case 0x42f355:c.instructions+=4;goto B42f355;
case 0x42f357:c.instructions+=3;goto B42f357;
case 0x42f35e:c.instructions+=2;goto B42f35e;
case 0x42f365:c.instructions+=1;goto B42f365;
case 0x42f36a:goto L42f36a;
case 0x42f36c:c.instructions+=4;goto B42f36c;
case 0x42f36e:c.instructions+=3;goto B42f36e;
case 0x42f373:c.instructions+=2;goto B42f373;
case 0x42f378:c.instructions+=1;goto B42f378;
case 0x42f37e:goto L42f37e;
case 0x42f384:c.instructions+=2;goto B42f384;
case 0x42f386:c.instructions+=1;goto B42f386;
case 0x42f38c:goto L42f38c;
case 0x42f392:c.instructions+=2;goto B42f392;
case 0x42f399:c.instructions+=1;goto B42f399;
case 0x42f39b:goto L42f39b;
case 0x42f39f:c.instructions+=3;goto B42f39f;
case 0x42f3a5:c.instructions+=2;goto B42f3a5;
case 0x42f3a6:c.instructions+=1;goto B42f3a6;
case 0x42f3ab:goto L42f3ab;
case 0x42f3ad:c.instructions+=1;goto B42f3ad;
case 0x42f3b3:goto L42f3b3;
case 0x42f3b5:c.instructions+=5;goto B42f3b5;
case 0x42f3ba:c.instructions+=4;goto B42f3ba;
case 0x42f3c0:c.instructions+=3;goto B42f3c0;
case 0x42f3c2:c.instructions+=2;goto B42f3c2;
case 0x42f3c5:c.instructions+=1;goto B42f3c5;
case 0x42f3c7:goto L42f3c7;
case 0x42f3cc:goto L42f3cc;
case 0x42f3d0:c.instructions+=6;goto B42f3d0;
case 0x42f3d6:c.instructions+=5;goto B42f3d6;
case 0x42f3db:c.instructions+=4;goto B42f3db;
case 0x42f3e1:c.instructions+=3;goto B42f3e1;
case 0x42f3e3:c.instructions+=2;goto B42f3e3;
case 0x42f3e6:c.instructions+=1;goto B42f3e6;
case 0x42f3e8:goto L42f3e8;
case 0x42f3ed:goto L42f3ed;
case 0x42f3f1:c.instructions+=3;goto B42f3f1;
case 0x42f3f7:c.instructions+=2;goto B42f3f7;
case 0x42f3f9:c.instructions+=1;goto B42f3f9;
case 0x42f3fb:goto L42f3fb;
case 0x42f3fe:c.instructions+=3;goto B42f3fe;
case 0x42f400:c.instructions+=2;goto B42f400;
case 0x42f401:c.instructions+=1;goto B42f401;
case 0x42f404:goto L42f404;
case 0x42f406:goto L42f406;
case 0x42f408:goto L42f408;
case 0x42f40c:c.instructions+=12;goto B42f40c;
case 0x42f40d:c.instructions+=11;goto B42f40d;
case 0x42f411:c.instructions+=10;goto B42f411;
case 0x42f412:c.instructions+=9;goto B42f412;
case 0x42f418:c.instructions+=8;goto B42f418;
case 0x42f419:c.instructions+=7;goto B42f419;
case 0x42f41c:c.instructions+=6;goto B42f41c;
case 0x42f41d:c.instructions+=5;goto B42f41d;
case 0x42f41e:c.instructions+=4;goto B42f41e;
case 0x42f422:c.instructions+=3;goto B42f422;
case 0x42f423:c.instructions+=2;goto B42f423;
case 0x42f429:c.instructions+=1;goto B42f429;
case 0x42f42e:goto L42f42e;
case 0x42f430:c.instructions+=1;goto B42f430;
case 0x42f436:goto L42f436;
case 0x42f43c:c.instructions+=1;goto B42f43c;
case 0x42f441:goto L42f441;
case 0x42f443:c.instructions+=1;goto B42f443;
case 0x42f449:goto L42f449;
case 0x42f44f:c.instructions+=1;goto B42f44f;
case 0x42f454:goto L42f454;
case 0x42f456:c.instructions+=1;goto B42f456;
case 0x42f45c:goto L42f45c;
case 0x42f462:c.instructions+=4;goto B42f462;
case 0x42f467:c.instructions+=3;goto B42f467;
case 0x42f469:c.instructions+=2;goto B42f469;
case 0x42f46a:c.instructions+=1;goto B42f46a;
case 0x42f46f:goto L42f46f;
case 0x42f472:c.instructions+=2;goto B42f472;
case 0x42f474:c.instructions+=1;goto B42f474;
case 0x42f476:goto L42f476;
case 0x42f477:c.instructions+=2;goto B42f477;
case 0x42f479:c.instructions+=1;goto B42f479;
case 0x42f47e:goto L42f47e;
case 0x42f484:c.instructions+=3;goto B42f484;
case 0x42f486:c.instructions+=2;goto B42f486;
case 0x42f489:c.instructions+=1;goto B42f489;
case 0x42f48b:goto L42f48b;
case 0x42f490:c.instructions+=1;goto B42f490;
case 0x42f492:goto L42f492;
case 0x42f498:c.instructions+=6;goto B42f498;
case 0x42f499:c.instructions+=5;goto B42f499;
case 0x42f49a:c.instructions+=4;goto B42f49a;
case 0x42f49e:c.instructions+=3;goto B42f49e;
case 0x42f49f:c.instructions+=2;goto B42f49f;
case 0x42f4a1:c.instructions+=1;goto B42f4a1;
case 0x42f4a6:goto L42f4a6;
case 0x42f4a9:c.instructions+=5;goto B42f4a9;
case 0x42f4ab:c.instructions+=4;goto B42f4ab;
case 0x42f4af:c.instructions+=3;goto B42f4af;
case 0x42f4b3:c.instructions+=2;goto B42f4b3;
case 0x42f4b7:c.instructions+=1;goto B42f4b7;
case 0x42f4bc:goto L42f4bc;
case 0x42f4c2:c.instructions+=8;goto B42f4c2;
case 0x42f4c8:c.instructions+=7;goto B42f4c8;
case 0x42f4cc:c.instructions+=6;goto B42f4cc;
case 0x42f4d2:c.instructions+=5;goto B42f4d2;
case 0x42f4d6:c.instructions+=4;goto B42f4d6;
case 0x42f4dc:c.instructions+=3;goto B42f4dc;
case 0x42f4de:c.instructions+=2;goto B42f4de;
case 0x42f4e1:c.instructions+=1;goto B42f4e1;
case 0x42f4e3:goto L42f4e3;
case 0x42f4e8:c.instructions+=1;goto B42f4e8;
case 0x42f4ea:goto L42f4ea;
case 0x42f4ef:c.instructions+=1;goto B42f4ef;
case 0x42f4f1:goto L42f4f1;
case 0x42f4f4:c.instructions+=5;goto B42f4f4;
case 0x42f4f5:c.instructions+=4;goto B42f4f5;
case 0x42f4f6:c.instructions+=3;goto B42f4f6;
case 0x42f4fc:c.instructions+=2;goto B42f4fc;
case 0x42f500:c.instructions+=1;goto B42f500;
case 0x42f505:goto L42f505;
case 0x42f50a:c.instructions+=2;goto B42f50a;
case 0x42f50c:c.instructions+=1;goto B42f50c;
case 0x42f50e:goto L42f50e;
case 0x42f513:c.instructions+=2;goto B42f513;
case 0x42f515:c.instructions+=1;goto B42f515;
case 0x42f517:goto L42f517;
case 0x42f51c:c.instructions+=2;goto B42f51c;
case 0x42f51e:c.instructions+=1;goto B42f51e;
case 0x42f520:goto L42f520;
case 0x42f525:c.instructions+=2;goto B42f525;
case 0x42f527:c.instructions+=1;goto B42f527;
case 0x42f529:goto L42f529;
case 0x42f52b:c.instructions+=1;goto B42f52b;
case 0x42f52d:goto L42f52d;
case 0x42f52f:goto L42f52f;
case 0x42f533:c.instructions+=2;goto B42f533;
case 0x42f535:c.instructions+=1;goto B42f535;
case 0x42f53b:goto L42f53b;
case 0x42f53d:c.instructions+=1;goto B42f53d;
case 0x42f53f:goto L42f53f;
case 0x42f541:c.instructions+=2;goto B42f541;
case 0x42f547:c.instructions+=1;goto B42f547;
case 0x42f549:goto L42f549;
case 0x42f54c:c.instructions+=1;goto B42f54c;
case 0x42f54e:goto L42f54e;
case 0x42f554:goto L42f554;
case 0x42f556:c.instructions+=6;goto B42f556;
case 0x42f55c:c.instructions+=5;goto B42f55c;
case 0x42f562:c.instructions+=4;goto B42f562;
case 0x42f566:c.instructions+=3;goto B42f566;
case 0x42f568:c.instructions+=2;goto B42f568;
case 0x42f56b:c.instructions+=1;goto B42f56b;
case 0x42f56d:goto L42f56d;
case 0x42f56f:c.instructions+=1;goto B42f56f;
case 0x42f575:goto L42f575;
case 0x42f57b:c.instructions+=9;goto B42f57b;
case 0x42f581:c.instructions+=8;goto B42f581;
case 0x42f587:c.instructions+=7;goto B42f587;
case 0x42f591:c.instructions+=6;goto B42f591;
case 0x42f595:c.instructions+=5;goto B42f595;
case 0x42f59b:c.instructions+=4;goto B42f59b;
case 0x42f5a1:c.instructions+=3;goto B42f5a1;
case 0x42f5a3:c.instructions+=2;goto B42f5a3;
case 0x42f5a6:c.instructions+=1;goto B42f5a6;
case 0x42f5a8:goto L42f5a8;
case 0x42f5aa:c.instructions+=1;goto B42f5aa;
case 0x42f5b0:goto L42f5b0;
case 0x42f5b6:c.instructions+=1;goto B42f5b6;
case 0x42f5bb:goto L42f5bb;
case 0x42f5bf:c.instructions+=2;goto B42f5bf;
case 0x42f5c1:c.instructions+=1;goto B42f5c1;
case 0x42f5c3:goto L42f5c3;
case 0x42f5c7:c.instructions+=3;goto B42f5c7;
case 0x42f5c9:c.instructions+=2;goto B42f5c9;
case 0x42f5cb:c.instructions+=1;goto B42f5cb;
case 0x42f5ce:goto L42f5ce;
case 0x42f5d0:c.instructions+=8;goto B42f5d0;
case 0x42f5d2:c.instructions+=7;goto B42f5d2;
case 0x42f5d3:c.instructions+=6;goto B42f5d3;
case 0x42f5d5:c.instructions+=5;goto B42f5d5;
case 0x42f5db:c.instructions+=4;goto B42f5db;
case 0x42f5e2:c.instructions+=3;goto B42f5e2;
case 0x42f5e8:c.instructions+=2;goto B42f5e8;
case 0x42f5ee:c.instructions+=1;goto B42f5ee;
case 0x42f5f3:goto L42f5f3;
case 0x42f5f5:c.instructions+=8;goto B42f5f5;
case 0x42f5f7:c.instructions+=7;goto B42f5f7;
case 0x42f5fb:c.instructions+=6;goto B42f5fb;
case 0x42f5fc:c.instructions+=5;goto B42f5fc;
case 0x42f604:c.instructions+=4;goto B42f604;
case 0x42f60c:c.instructions+=3;goto B42f60c;
case 0x42f614:c.instructions+=2;goto B42f614;
case 0x42f61c:c.instructions+=1;goto B42f61c;
case 0x42f621:goto L42f621;
case 0x42f623:goto L42f623;
case 0x42f628:c.instructions+=2;goto B42f628;
case 0x42f62a:c.instructions+=1;goto B42f62a;
case 0x42f62c:goto L42f62c;
case 0x42f631:c.instructions+=2;goto B42f631;
case 0x42f633:c.instructions+=1;goto B42f633;
case 0x42f635:goto L42f635;
case 0x42f639:c.instructions+=2;goto B42f639;
case 0x42f63b:c.instructions+=1;goto B42f63b;
case 0x42f63e:goto L42f63e;
case 0x42f644:c.instructions+=2;goto B42f644;
case 0x42f64b:c.instructions+=1;goto B42f64b;
case 0x42f64d:goto L42f64d;
case 0x42f654:goto L42f654;
case 0x42f656:c.instructions+=5;goto B42f656;
case 0x42f660:c.instructions+=4;goto B42f660;
case 0x42f66a:c.instructions+=3;goto B42f66a;
case 0x42f66c:c.instructions+=2;goto B42f66c;
case 0x42f66e:c.instructions+=1;goto B42f66e;
case 0x42f673:goto L42f673;
case 0x42f677:goto L42f677;
case 0x42f67d:c.instructions+=2;goto B42f67d;
case 0x42f67f:c.instructions+=1;goto B42f67f;
case 0x42f681:goto L42f681;
case 0x42f684:c.instructions+=3;goto B42f684;
case 0x42f686:c.instructions+=2;goto B42f686;
case 0x42f687:c.instructions+=1;goto B42f687;
case 0x42f68a:goto L42f68a;
case 0x42f68d:c.instructions+=1;goto B42f68d;
case 0x42f68f:goto L42f68f;
case 0x42f695:c.instructions+=3;goto B42f695;
case 0x42f697:c.instructions+=2;goto B42f697;
case 0x42f69d:c.instructions+=1;goto B42f69d;
case 0x42f69f:goto L42f69f;
case 0x42f6a2:c.instructions+=1;goto B42f6a2;
case 0x42f6a4:goto L42f6a4;
case 0x42f6a8:c.instructions+=3;goto B42f6a8;
case 0x42f6a9:c.instructions+=2;goto B42f6a9;
case 0x42f6aa:c.instructions+=1;goto B42f6aa;
case 0x42f6af:goto L42f6af;
case 0x42f6b0:c.instructions+=5;goto B42f6b0;
case 0x42f6b1:c.instructions+=4;goto B42f6b1;
case 0x42f6b2:c.instructions+=3;goto B42f6b2;
case 0x42f6b4:c.instructions+=2;goto B42f6b4;
case 0x42f6b5:c.instructions+=1;goto B42f6b5;
case 0x42f6b8:goto L42f6b8;
case 0x42f6bb:c.instructions+=1;goto B42f6bb;
case 0x42f6bd:goto L42f6bd;
case 0x42f6c0:c.instructions+=1;goto B42f6c0;
case 0x42f6c2:goto L42f6c2;
case 0x42f6c6:c.instructions+=3;goto B42f6c6;
case 0x42f6c7:c.instructions+=2;goto B42f6c7;
case 0x42f6c8:c.instructions+=1;goto B42f6c8;
case 0x42f6cd:goto L42f6cd;
case 0x42f6ce:c.instructions+=5;goto B42f6ce;
case 0x42f6cf:c.instructions+=4;goto B42f6cf;
case 0x42f6d0:c.instructions+=3;goto B42f6d0;
case 0x42f6d2:c.instructions+=2;goto B42f6d2;
case 0x42f6d3:c.instructions+=1;goto B42f6d3;
case 0x42f6e0:goto L42f6e0;
case 0x42f6e6:c.instructions+=18;goto B42f6e6;
case 0x42f6e7:c.instructions+=17;goto B42f6e7;
case 0x42f6e8:c.instructions+=16;goto B42f6e8;
case 0x42f6e9:c.instructions+=15;goto B42f6e9;
case 0x42f6ed:c.instructions+=14;goto B42f6ed;
case 0x42f6ef:c.instructions+=13;goto B42f6ef;
case 0x42f6f2:c.instructions+=12;goto B42f6f2;
case 0x42f6f5:c.instructions+=11;goto B42f6f5;
case 0x42f6f6:c.instructions+=10;goto B42f6f6;
case 0x42f6f8:c.instructions+=9;goto B42f6f8;
case 0x42f6fc:c.instructions+=8;goto B42f6fc;
case 0x42f6fd:c.instructions+=7;goto B42f6fd;
case 0x42f6fe:c.instructions+=6;goto B42f6fe;
case 0x42f6ff:c.instructions+=5;goto B42f6ff;
case 0x42f702:c.instructions+=4;goto B42f702;
case 0x42f703:c.instructions+=3;goto B42f703;
case 0x42f708:c.instructions+=2;goto B42f708;
case 0x42f70e:c.instructions+=1;goto B42f70e;
case 0x42f713:goto L42f713;
case 0x42f715:c.instructions+=1;goto B42f715;
case 0x42f717:goto L42f717;
case 0x42f71d:c.instructions+=2;goto B42f71d;
case 0x42f71f:c.instructions+=1;goto B42f71f;
case 0x42f721:goto L42f721;
case 0x42f724:c.instructions+=3;goto B42f724;
case 0x42f726:c.instructions+=2;goto B42f726;
case 0x42f727:c.instructions+=1;goto B42f727;
case 0x42f72a:goto L42f72a;
case 0x42f72c:goto L42f72c;
case 0x42f72e:goto L42f72e;
case 0x42f72f:c.instructions+=2;goto B42f72f;
case 0x42f732:c.instructions+=1;goto B42f732;
case 0x42f734:goto L42f734;
case 0x42f735:c.instructions+=1;goto B42f735;
case 0x42f737:goto L42f737;
case 0x42f739:c.instructions+=5;goto B42f739;
case 0x42f73e:c.instructions+=4;goto B42f73e;
case 0x42f73f:c.instructions+=3;goto B42f73f;
case 0x42f740:c.instructions+=2;goto B42f740;
case 0x42f742:c.instructions+=1;goto B42f742;
case 0x42f747:goto L42f747;
case 0x42f749:goto L42f749;
case 0x42f74b:c.instructions+=6;goto B42f74b;
case 0x42f74d:c.instructions+=5;goto B42f74d;
case 0x42f752:c.instructions+=4;goto B42f752;
case 0x42f753:c.instructions+=3;goto B42f753;
case 0x42f754:c.instructions+=2;goto B42f754;
case 0x42f756:c.instructions+=1;goto B42f756;
case 0x42f75b:goto L42f75b;
case 0x42f75d:goto L42f75d;
case 0x42f75e:c.instructions+=4;goto B42f75e;
case 0x42f761:c.instructions+=3;goto B42f761;
case 0x42f762:c.instructions+=2;goto B42f762;
case 0x42f764:c.instructions+=1;goto B42f764;
case 0x42f769:goto L42f769;
case 0x42f76b:c.instructions+=11;goto B42f76b;
case 0x42f771:c.instructions+=10;goto B42f771;
case 0x42f777:c.instructions+=9;goto B42f777;
case 0x42f77d:c.instructions+=8;goto B42f77d;
case 0x42f783:c.instructions+=7;goto B42f783;
case 0x42f78a:c.instructions+=6;goto B42f78a;
case 0x42f791:c.instructions+=5;goto B42f791;
case 0x42f792:c.instructions+=4;goto B42f792;
case 0x42f793:c.instructions+=3;goto B42f793;
case 0x42f794:c.instructions+=2;goto B42f794;
case 0x42f795:c.instructions+=1;goto B42f795;
case 0x42f7a0:goto L42f7a0;
case 0x42f7a5:c.instructions+=6;goto B42f7a5;
case 0x42f7a7:c.instructions+=5;goto B42f7a7;
case 0x42f7a8:c.instructions+=4;goto B42f7a8;
case 0x42f7a9:c.instructions+=3;goto B42f7a9;
case 0x42f7ad:c.instructions+=2;goto B42f7ad;
case 0x42f7af:c.instructions+=1;goto B42f7af;
case 0x42f7b1:goto L42f7b1;
case 0x42f7b6:c.instructions+=2;goto B42f7b6;
case 0x42f7b8:c.instructions+=1;goto B42f7b8;
case 0x42f7ba:goto L42f7ba;
case 0x42f7bb:c.instructions+=2;goto B42f7bb;
case 0x42f7bd:c.instructions+=1;goto B42f7bd;
case 0x42f7c2:goto L42f7c2;
case 0x42f7c4:c.instructions+=1;goto B42f7c4;
case 0x42f7c6:goto L42f7c6;
case 0x42f7c7:c.instructions+=2;goto B42f7c7;
case 0x42f7c9:c.instructions+=1;goto B42f7c9;
case 0x42f7ce:goto L42f7ce;
case 0x42f7d0:c.instructions+=1;goto B42f7d0;
case 0x42f7d2:goto L42f7d2;
case 0x42f7d8:c.instructions+=2;goto B42f7d8;
case 0x42f7da:c.instructions+=1;goto B42f7da;
case 0x42f7dc:goto L42f7dc;
case 0x42f7e2:c.instructions+=2;goto B42f7e2;
case 0x42f7e4:c.instructions+=1;goto B42f7e4;
case 0x42f7e6:goto L42f7e6;
case 0x42f7e7:c.instructions+=2;goto B42f7e7;
case 0x42f7e9:c.instructions+=1;goto B42f7e9;
case 0x42f7ee:goto L42f7ee;
case 0x42f7ef:c.instructions+=2;goto B42f7ef;
case 0x42f7f0:c.instructions+=1;goto B42f7f0;
case 0x42f800:goto L42f800;
case 0x42f801:c.instructions+=8;goto B42f801;
case 0x42f806:c.instructions+=7;goto B42f806;
case 0x42f807:c.instructions+=6;goto B42f807;
case 0x42f808:c.instructions+=5;goto B42f808;
case 0x42f809:c.instructions+=4;goto B42f809;
case 0x42f80b:c.instructions+=3;goto B42f80b;
case 0x42f811:c.instructions+=2;goto B42f811;
case 0x42f812:c.instructions+=1;goto B42f812;
case 0x42f817:goto L42f817;
case 0x42f81e:c.instructions+=8;goto B42f81e;
case 0x42f821:c.instructions+=7;goto B42f821;
case 0x42f827:c.instructions+=6;goto B42f827;
case 0x42f82d:c.instructions+=5;goto B42f82d;
case 0x42f833:c.instructions+=4;goto B42f833;
case 0x42f837:c.instructions+=3;goto B42f837;
case 0x42f839:c.instructions+=2;goto B42f839;
case 0x42f83c:c.instructions+=1;goto B42f83c;
case 0x42f83e:goto L42f83e;
case 0x42f843:c.instructions+=1;goto B42f843;
case 0x42f847:goto L42f847;
case 0x42f84d:c.instructions+=2;goto B42f84d;
case 0x42f852:c.instructions+=1;goto B42f852;
case 0x42f857:goto L42f857;
case 0x42f85b:c.instructions+=4;goto B42f85b;
case 0x42f85f:c.instructions+=3;goto B42f85f;
case 0x42f861:c.instructions+=2;goto B42f861;
case 0x42f864:c.instructions+=1;goto B42f864;
case 0x42f866:goto L42f866;
case 0x42f867:c.instructions+=3;goto B42f867;
case 0x42f868:c.instructions+=2;goto B42f868;
case 0x42f86a:c.instructions+=1;goto B42f86a;
case 0x42f86f:goto L42f86f;
case 0x42f871:c.instructions+=1;goto B42f871;
case 0x42f873:goto L42f873;
case 0x42f874:c.instructions+=5;goto B42f874;
case 0x42f875:c.instructions+=4;goto B42f875;
case 0x42f877:c.instructions+=3;goto B42f877;
case 0x42f878:c.instructions+=2;goto B42f878;
case 0x42f879:c.instructions+=1;goto B42f879;
case 0x42f87c:goto L42f87c;
case 0x42f87f:c.instructions+=2;goto B42f87f;
case 0x42f883:c.instructions+=1;goto B42f883;
case 0x42f885:goto L42f885;
case 0x42f888:c.instructions+=5;goto B42f888;
case 0x42f88c:c.instructions+=4;goto B42f88c;
case 0x42f88f:c.instructions+=3;goto B42f88f;
case 0x42f892:c.instructions+=2;goto B42f892;
case 0x42f896:c.instructions+=1;goto B42f896;
case 0x42f898:goto L42f898;
case 0x42f89c:c.instructions+=2;goto B42f89c;
case 0x42f89f:c.instructions+=1;goto B42f89f;
case 0x42f8a3:goto L42f8a3;
case 0x42f8a7:c.instructions+=6;goto B42f8a7;
case 0x42f8ad:c.instructions+=5;goto B42f8ad;
case 0x42f8af:c.instructions+=4;goto B42f8af;
case 0x42f8b5:c.instructions+=3;goto B42f8b5;
case 0x42f8b7:c.instructions+=2;goto B42f8b7;
case 0x42f8ba:c.instructions+=1;goto B42f8ba;
case 0x42f8bc:goto L42f8bc;
case 0x42f8c1:c.instructions+=2;goto B42f8c1;
case 0x42f8c3:c.instructions+=1;goto B42f8c3;
case 0x42f8c5:goto L42f8c5;
case 0x42f8ca:c.instructions+=2;goto B42f8ca;
case 0x42f8cc:c.instructions+=1;goto B42f8cc;
case 0x42f8ce:goto L42f8ce;
case 0x42f8d2:c.instructions+=5;goto B42f8d2;
case 0x42f8d3:c.instructions+=4;goto B42f8d3;
case 0x42f8d4:c.instructions+=3;goto B42f8d4;
case 0x42f8d5:c.instructions+=2;goto B42f8d5;
case 0x42f8d7:c.instructions+=1;goto B42f8d7;
case 0x42f8dc:goto L42f8dc;
case 0x42f8dd:c.instructions+=4;goto B42f8dd;
case 0x42f8de:c.instructions+=3;goto B42f8de;
case 0x42f8df:c.instructions+=2;goto B42f8df;
case 0x42f8e0:c.instructions+=1;goto B42f8e0;
case 0x42f8e3:goto L42f8e3;
case 0x42f8e5:c.instructions+=1;goto B42f8e5;
case 0x42f8ea:goto L42f8ea;
case 0x42f8ec:c.instructions+=1;goto B42f8ec;
case 0x42f8ee:goto L42f8ee;
case 0x42f8f2:c.instructions+=5;goto B42f8f2;
case 0x42f8f3:c.instructions+=4;goto B42f8f3;
case 0x42f8f4:c.instructions+=3;goto B42f8f4;
case 0x42f8f5:c.instructions+=2;goto B42f8f5;
case 0x42f8f7:c.instructions+=1;goto B42f8f7;
case 0x42f8fc:goto L42f8fc;
case 0x42f8fd:c.instructions+=4;goto B42f8fd;
case 0x42f8fe:c.instructions+=3;goto B42f8fe;
case 0x42f8ff:c.instructions+=2;goto B42f8ff;
case 0x42f900:c.instructions+=1;goto B42f900;
case 0x42f903:goto L42f903;
case 0x42f904:c.instructions+=5;goto B42f904;
case 0x42f905:c.instructions+=4;goto B42f905;
case 0x42f907:c.instructions+=3;goto B42f907;
case 0x42f908:c.instructions+=2;goto B42f908;
case 0x42f909:c.instructions+=1;goto B42f909;
case 0x42f910:goto L42f910;
case 0x42f911:c.instructions+=9;goto B42f911;
case 0x42f913:c.instructions+=8;goto B42f913;
case 0x42f916:c.instructions+=7;goto B42f916;
case 0x42f91b:c.instructions+=6;goto B42f91b;
case 0x42f91c:c.instructions+=5;goto B42f91c;
case 0x42f91d:c.instructions+=4;goto B42f91d;
case 0x42f91f:c.instructions+=3;goto B42f91f;
case 0x42f921:c.instructions+=2;goto B42f921;
case 0x42f923:c.instructions+=1;goto B42f923;
case 0x42f925:goto L42f925;
case 0x42f928:c.instructions+=2;goto B42f928;
case 0x42f92a:c.instructions+=1;goto B42f92a;
case 0x42f92c:goto L42f92c;
case 0x42f931:goto L42f931;
case 0x42f933:goto L42f933;
case 0x42f938:goto L42f938;
case 0x42f93e:c.instructions+=1;goto B42f93e;
case 0x42f943:goto L42f943;
case 0x42f945:c.instructions+=1;goto B42f945;
case 0x42f94a:goto L42f94a;
case 0x42f950:c.instructions+=1;goto B42f950;
case 0x42f956:goto L42f956;
case 0x42f95b:c.instructions+=3;goto B42f95b;
case 0x42f95e:c.instructions+=2;goto B42f95e;
case 0x42f961:c.instructions+=1;goto B42f961;
case 0x42f967:goto L42f967;
case 0x42f96d:c.instructions+=2;goto B42f96d;
case 0x42f970:c.instructions+=1;goto B42f970;
case 0x42f976:goto L42f976;
case 0x42f97c:c.instructions+=1;goto B42f97c;
case 0x42f982:goto L42f982;
case 0x42f985:c.instructions+=2;goto B42f985;
case 0x42f987:c.instructions+=1;goto B42f987;
case 0x42f98d:goto L42f98d;
case 0x42f992:c.instructions+=8;goto B42f992;
case 0x42f995:c.instructions+=7;goto B42f995;
case 0x42f998:c.instructions+=6;goto B42f998;
case 0x42f99b:c.instructions+=5;goto B42f99b;
case 0x42f9a1:c.instructions+=4;goto B42f9a1;
case 0x42f9a7:c.instructions+=3;goto B42f9a7;
case 0x42f9a9:c.instructions+=2;goto B42f9a9;
case 0x42f9ac:c.instructions+=1;goto B42f9ac;
case 0x42f9ae:goto L42f9ae;
case 0x42f9b3:c.instructions+=1;goto B42f9b3;
case 0x42f9b8:goto L42f9b8;
case 0x42f9be:c.instructions+=1;goto B42f9be;
case 0x42f9c1:goto L42f9c1;
case 0x42f9c3:c.instructions+=6;goto B42f9c3;
case 0x42f9c6:c.instructions+=5;goto B42f9c6;
case 0x42f9c8:c.instructions+=4;goto B42f9c8;
case 0x42f9ce:c.instructions+=3;goto B42f9ce;
case 0x42f9d0:c.instructions+=2;goto B42f9d0;
case 0x42f9d3:c.instructions+=1;goto B42f9d3;
case 0x42f9d9:goto L42f9d9;
case 0x42f9da:c.instructions+=2;goto B42f9da;
case 0x42f9dc:c.instructions+=1;goto B42f9dc;
case 0x42f9e1:goto L42f9e1;
case 0x42f9e6:goto L42f9e6;
case 0x42f9e9:c.instructions+=4;goto B42f9e9;
case 0x42f9ee:c.instructions+=3;goto B42f9ee;
case 0x42f9f1:c.instructions+=2;goto B42f9f1;
case 0x42f9f4:c.instructions+=1;goto B42f9f4;
case 0x42f9f9:goto L42f9f9;
case 0x42f9fb:c.instructions+=10;goto B42f9fb;
case 0x42fa02:c.instructions+=9;goto B42fa02;
case 0x42fa09:c.instructions+=8;goto B42fa09;
case 0x42fa10:c.instructions+=7;goto B42fa10;
case 0x42fa12:c.instructions+=6;goto B42fa12;
case 0x42fa15:c.instructions+=5;goto B42fa15;
case 0x42fa16:c.instructions+=4;goto B42fa16;
case 0x42fa19:c.instructions+=3;goto B42fa19;
case 0x42fa1e:c.instructions+=2;goto B42fa1e;
case 0x42fa20:c.instructions+=1;goto B42fa20;
case 0x42fa22:goto L42fa22;
case 0x42fa29:c.instructions+=6;goto B42fa29;
case 0x42fa2c:c.instructions+=5;goto B42fa2c;
case 0x42fa2f:c.instructions+=4;goto B42fa2f;
case 0x42fa30:c.instructions+=3;goto B42fa30;
case 0x42fa32:c.instructions+=2;goto B42fa32;
case 0x42fa35:c.instructions+=1;goto B42fa35;
case 0x42fa3a:goto L42fa3a;
case 0x42fa3d:c.instructions+=5;goto B42fa3d;
case 0x42fa41:c.instructions+=4;goto B42fa41;
case 0x42fa46:c.instructions+=3;goto B42fa46;
case 0x42fa47:c.instructions+=2;goto B42fa47;
case 0x42fa49:c.instructions+=1;goto B42fa49;
case 0x42fa4b:goto L42fa4b;
case 0x42fa51:c.instructions+=2;goto B42fa51;
case 0x42fa53:c.instructions+=1;goto B42fa53;
case 0x42fa58:goto L42fa58;
case 0x42fa5a:c.instructions+=1;goto B42fa5a;
case 0x42fa5c:goto L42fa5c;
case 0x42fa5d:c.instructions+=2;goto B42fa5d;
case 0x42fa5f:c.instructions+=1;goto B42fa5f;
case 0x42fa64:goto L42fa64;
case 0x42fa67:c.instructions+=1;goto B42fa67;
case 0x42fa70:goto L42fa70;
case 0x42fa75:c.instructions+=6;goto B42fa75;
case 0x42fa78:c.instructions+=5;goto B42fa78;
case 0x42fa7b:c.instructions+=4;goto B42fa7b;
case 0x42fa7c:c.instructions+=3;goto B42fa7c;
case 0x42fa7e:c.instructions+=2;goto B42fa7e;
case 0x42fa80:c.instructions+=1;goto B42fa80;
case 0x42fa82:goto L42fa82;
case 0x42fa84:goto L42fa84;
case 0x42fa86:c.instructions+=4;goto B42fa86;
case 0x42fa8a:c.instructions+=3;goto B42fa8a;
case 0x42fa8b:c.instructions+=2;goto B42fa8b;
case 0x42fa8d:c.instructions+=1;goto B42fa8d;
case 0x42fa92:goto L42fa92;
case 0x42fa94:c.instructions+=1;goto B42fa94;
case 0x42fa96:goto L42fa96;
case 0x42fa99:c.instructions+=4;goto B42fa99;
case 0x42fa9a:c.instructions+=3;goto B42fa9a;
case 0x42fa9b:c.instructions+=2;goto B42fa9b;
case 0x42fa9d:c.instructions+=1;goto B42fa9d;
case 0x42faa2:goto L42faa2;
case 0x42faa4:c.instructions+=1;goto B42faa4;
case 0x42faa6:goto L42faa6;
case 0x42faa9:c.instructions+=2;goto B42faa9;
case 0x42faab:c.instructions+=1;goto B42faab;
case 0x42fab0:goto L42fab0;
case 0x42fab7:goto L42fab7;
case 0x42faba:goto L42faba;
case 0x42fabd:c.instructions+=2;goto B42fabd;
case 0x42fac0:c.instructions+=1;goto B42fac0;
case 0x42fac2:goto L42fac2;
case 0x42fac5:c.instructions+=1;goto B42fac5;
case 0x42fac7:goto L42fac7;
case 0x42faca:c.instructions+=3;goto B42faca;
case 0x42facb:c.instructions+=2;goto B42facb;
case 0x42face:c.instructions+=1;goto B42face;
case 0x42fad3:goto L42fad3;
case 0x42fad5:c.instructions+=2;goto B42fad5;
case 0x42fad8:c.instructions+=1;goto B42fad8;
case 0x42fad9:goto L42fad9;
case 0x42fada:c.instructions+=4;goto B42fada;
case 0x42fadb:c.instructions+=3;goto B42fadb;
case 0x42fadd:c.instructions+=2;goto B42fadd;
case 0x42fade:c.instructions+=1;goto B42fade;
case 0x42faf0:goto L42faf0;
case 0x42faf4:c.instructions+=10;goto B42faf4;
case 0x42faf6:c.instructions+=9;goto B42faf6;
case 0x42faf8:c.instructions+=8;goto B42faf8;
case 0x42fafa:c.instructions+=7;goto B42fafa;
case 0x42fafe:c.instructions+=6;goto B42fafe;
case 0x42fb01:c.instructions+=5;goto B42fb01;
case 0x42fb04:c.instructions+=4;goto B42fb04;
case 0x42fb08:c.instructions+=3;goto B42fb08;
case 0x42fb0b:c.instructions+=2;goto B42fb0b;
case 0x42fb0e:c.instructions+=1;goto B42fb0e;
case 0x42fb20:goto L42fb20;
case 0x42fb26:c.instructions+=4;goto B42fb26;
case 0x42fb2a:c.instructions+=3;goto B42fb2a;
case 0x42fb2c:c.instructions+=2;goto B42fb2c;
case 0x42fb2d:c.instructions+=1;goto B42fb2d;
case 0x42fb30:goto L42fb30;
case 0x42fb40:goto L42fb40;
case 0x42fb48:c.instructions+=1;goto B42fb48;
case 0x42fb50:goto L42fb50;
case 0x42fb54:c.instructions+=2;goto B42fb54;
case 0x42fb55:c.instructions+=1;goto B42fb55;
case 0x42fb5a:goto L42fb5a;
case 0x42fb5b:c.instructions+=1;goto B42fb5b;
case 0x42fb60:goto L42fb60;
case 0x42fb63:c.instructions+=13;goto B42fb63;
case 0x42fb67:c.instructions+=12;goto B42fb67;
case 0x42fb6b:c.instructions+=11;goto B42fb6b;
case 0x42fb6f:c.instructions+=10;goto B42fb6f;
case 0x42fb73:c.instructions+=9;goto B42fb73;
case 0x42fb75:c.instructions+=8;goto B42fb75;
case 0x42fb78:c.instructions+=7;goto B42fb78;
case 0x42fb7b:c.instructions+=6;goto B42fb7b;
case 0x42fb82:c.instructions+=5;goto B42fb82;
case 0x42fb84:c.instructions+=4;goto B42fb84;
case 0x42fb88:c.instructions+=3;goto B42fb88;
case 0x42fb8a:c.instructions+=2;goto B42fb8a;
case 0x42fb8d:c.instructions+=1;goto B42fb8d;
case 0x42fb8f:goto L42fb8f;
case 0x42fb90:goto L42fb90;
case 0x42fb94:c.instructions+=3;goto B42fb94;
case 0x42fb95:c.instructions+=2;goto B42fb95;
case 0x42fb98:c.instructions+=1;goto B42fb98;
case 0x42fb9a:goto L42fb9a;
case 0x42fb9b:c.instructions+=7;goto B42fb9b;
case 0x42fb9c:c.instructions+=6;goto B42fb9c;
case 0x42fb9f:c.instructions+=5;goto B42fb9f;
case 0x42fba2:c.instructions+=4;goto B42fba2;
case 0x42fba5:c.instructions+=3;goto B42fba5;
case 0x42fba6:c.instructions+=2;goto B42fba6;
case 0x42fba8:c.instructions+=1;goto B42fba8;
case 0x42fbaa:goto L42fbaa;
case 0x42fbb0:goto L42fbb0;
case 0x42fbb4:c.instructions+=3;goto B42fbb4;
case 0x42fbb5:c.instructions+=2;goto B42fbb5;
case 0x42fbb8:c.instructions+=1;goto B42fbb8;
case 0x42fbba:goto L42fbba;
case 0x42fbbc:c.instructions+=1;goto B42fbbc;
case 0x42fbbe:goto L42fbbe;
case 0x42fbc0:c.instructions+=2;goto B42fbc0;
case 0x42fbc4:c.instructions+=1;goto B42fbc4;
case 0x42fbc6:goto L42fbc6;
case 0x42fbc8:c.instructions+=5;goto B42fbc8;
case 0x42fbca:c.instructions+=4;goto B42fbca;
case 0x42fbcb:c.instructions+=3;goto B42fbcb;
case 0x42fbcc:c.instructions+=2;goto B42fbcc;
case 0x42fbcd:c.instructions+=1;goto B42fbcd;
case 0x42fbcf:goto L42fbcf;
case 0x42fbd0:c.instructions+=4;goto B42fbd0;
case 0x42fbd3:c.instructions+=3;goto B42fbd3;
case 0x42fbd4:c.instructions+=2;goto B42fbd4;
case 0x42fbd7:c.instructions+=1;goto B42fbd7;
case 0x42fbda:goto L42fbda;
case 0x42fbde:c.instructions+=5;goto B42fbde;
case 0x42fbdf:c.instructions+=4;goto B42fbdf;
case 0x42fbe2:c.instructions+=3;goto B42fbe2;
case 0x42fbe3:c.instructions+=2;goto B42fbe3;
case 0x42fbe6:c.instructions+=1;goto B42fbe6;
case 0x42fbf0:goto L42fbf0;
case 0x42fbf1:c.instructions+=9;goto B42fbf1;
case 0x42fbf5:c.instructions+=8;goto B42fbf5;
case 0x42fbf6:c.instructions+=7;goto B42fbf6;
case 0x42fbf7:c.instructions+=6;goto B42fbf7;
case 0x42fbf9:c.instructions+=5;goto B42fbf9;
case 0x42fbfd:c.instructions+=4;goto B42fbfd;
case 0x42fbff:c.instructions+=3;goto B42fbff;
case 0x42fc01:c.instructions+=2;goto B42fc01;
case 0x42fc03:c.instructions+=1;goto B42fc03;
case 0x42fc05:goto L42fc05;
case 0x42fc06:c.instructions+=2;goto B42fc06;
case 0x42fc09:c.instructions+=1;goto B42fc09;
case 0x42fc10:goto L42fc10;
case 0x42fc14:c.instructions+=2;goto B42fc14;
case 0x42fc16:c.instructions+=1;goto B42fc16;
case 0x42fc18:goto L42fc18;
case 0x42fc19:c.instructions+=3;goto B42fc19;
case 0x42fc1a:c.instructions+=2;goto B42fc1a;
case 0x42fc1c:c.instructions+=1;goto B42fc1c;
case 0x42fc21:goto L42fc21;
case 0x42fc23:c.instructions+=4;goto B42fc23;
case 0x42fc24:c.instructions+=3;goto B42fc24;
case 0x42fc27:c.instructions+=2;goto B42fc27;
case 0x42fc29:c.instructions+=1;goto B42fc29;
case 0x42fc2b:goto L42fc2b;
case 0x42fc2c:goto L42fc2c;
case 0x42fc2d:c.instructions+=3;goto B42fc2d;
case 0x42fc2e:c.instructions+=2;goto B42fc2e;
case 0x42fc2f:c.instructions+=1;goto B42fc2f;
case 0x42fc40:goto L42fc40;
case 0x42fc42:c.instructions+=2;goto B42fc42;
case 0x42fc47:c.instructions+=1;goto B42fc47;
case 0x42fc49:goto L42fc49;
case 0x42fc4e:c.instructions+=1;goto B42fc4e;
case 0x42fc50:goto L42fc50;
case 0x42fc55:c.instructions+=1;goto B42fc55;
case 0x42fc56:goto L42fc56;
case 0x42fc58:c.instructions+=1;goto B42fc58;
case 0x42fc60:goto L42fc60;
case 0x42fc65:c.instructions+=2;goto B42fc65;
case 0x42fc67:c.instructions+=1;goto B42fc67;
case 0x42fc69:goto L42fc69;
case 0x42fc6b:c.instructions+=2;goto B42fc6b;
case 0x42fc6c:c.instructions+=1;goto B42fc6c;
case 0x42fc71:goto L42fc71;
case 0x42fc73:goto L42fc73;
case 0x42fc78:c.instructions+=3;goto B42fc78;
case 0x42fc7a:c.instructions+=2;goto B42fc7a;
case 0x42fc7e:c.instructions+=1;goto B42fc7e;
case 0x42fc80:goto L42fc80;
case 0x42fc82:c.instructions+=2;goto B42fc82;
case 0x42fc87:c.instructions+=1;goto B42fc87;
case 0x42fc89:goto L42fc89;
case 0x42fc8f:c.instructions+=2;goto B42fc8f;
case 0x42fc91:c.instructions+=1;goto B42fc91;
case 0x42fc93:goto L42fc93;
case 0x42fc98:c.instructions+=1;goto B42fc98;
case 0x42fc9a:goto L42fc9a;
case 0x42fc9c:c.instructions+=2;goto B42fc9c;
case 0x42fca1:c.instructions+=1;goto B42fca1;
case 0x42fca3:goto L42fca3;
case 0x42fca9:c.instructions+=2;goto B42fca9;
case 0x42fcab:c.instructions+=1;goto B42fcab;
case 0x42fcad:goto L42fcad;
case 0x42fcb2:goto L42fcb2;
case 0x42fcb4:c.instructions+=2;goto B42fcb4;
case 0x42fcb5:c.instructions+=1;goto B42fcb5;
case 0x42fcba:goto L42fcba;
case 0x42fcbd:c.instructions+=2;goto B42fcbd;
case 0x42fcbf:c.instructions+=1;goto B42fcbf;
case 0x42fcc1:goto L42fcc1;
case 0x42fcc4:c.instructions+=10;goto B42fcc4;
case 0x42fcc8:c.instructions+=9;goto B42fcc8;
case 0x42fcca:c.instructions+=8;goto B42fcca;
case 0x42fccd:c.instructions+=7;goto B42fccd;
case 0x42fcd0:c.instructions+=6;goto B42fcd0;
case 0x42fcd4:c.instructions+=5;goto B42fcd4;
case 0x42fcd8:c.instructions+=4;goto B42fcd8;
case 0x42fcdc:c.instructions+=3;goto B42fcdc;
case 0x42fcdf:c.instructions+=2;goto B42fcdf;
case 0x42fce1:c.instructions+=1;goto B42fce1;
case 0x42fce2:goto L42fce2;
case 0x42fce4:c.instructions+=1;goto B42fce4;
case 0x42fcf0:goto L42fcf0;
case 0x42fcf1:c.instructions+=8;goto B42fcf1;
case 0x42fcf2:c.instructions+=7;goto B42fcf2;
case 0x42fcf6:c.instructions+=6;goto B42fcf6;
case 0x42fcf8:c.instructions+=5;goto B42fcf8;
case 0x42fcfb:c.instructions+=4;goto B42fcfb;
case 0x42fcfe:c.instructions+=3;goto B42fcfe;
case 0x42fd01:c.instructions+=2;goto B42fd01;
case 0x42fd03:c.instructions+=1;goto B42fd03;
case 0x42fd05:goto L42fd05;
case 0x42fd06:c.instructions+=3;goto B42fd06;
case 0x42fd08:c.instructions+=2;goto B42fd08;
case 0x42fd09:c.instructions+=1;goto B42fd09;
case 0x42fd0c:goto L42fd0c;
case 0x42fd0f:c.instructions+=1;goto B42fd0f;
case 0x42fd11:goto L42fd11;
case 0x42fd14:c.instructions+=1;goto B42fd14;
case 0x42fd16:goto L42fd16;
case 0x42fd19:c.instructions+=1;goto B42fd19;
case 0x42fd1b:goto L42fd1b;
case 0x42fd1c:c.instructions+=3;goto B42fd1c;
case 0x42fd1e:c.instructions+=2;goto B42fd1e;
case 0x42fd23:c.instructions+=1;goto B42fd23;
case 0x42fd28:goto L42fd28;
case 0x42fd2b:c.instructions+=3;goto B42fd2b;
case 0x42fd2d:c.instructions+=2;goto B42fd2d;
case 0x42fd2e:c.instructions+=1;goto B42fd2e;
case 0x42fd30:goto L42fd30;
case 0x42fd33:c.instructions+=2;goto B42fd33;
case 0x42fd35:c.instructions+=1;goto B42fd35;
case 0x42fd37:goto L42fd37;
case 0x42fd3a:c.instructions+=3;goto B42fd3a;
case 0x42fd3f:c.instructions+=2;goto B42fd3f;
case 0x42fd41:c.instructions+=1;goto B42fd41;
case 0x42fd43:goto L42fd43;
case 0x42fd47:c.instructions+=1;goto B42fd47;
case 0x42fd49:goto L42fd49;
case 0x42fd50:c.instructions+=1;goto B42fd50;
case 0x42fd52:goto L42fd52;
case 0x42fd54:goto L42fd54;
case 0x42fd55:c.instructions+=2;goto B42fd55;
case 0x42fd56:c.instructions+=1;goto B42fd56;
case 0x42fd60:goto L42fd60;
case 0x42fd64:c.instructions+=4;goto B42fd64;
case 0x42fd65:c.instructions+=3;goto B42fd65;
case 0x42fd67:c.instructions+=2;goto B42fd67;
case 0x42fd6c:c.instructions+=1;goto B42fd6c;
case 0x42fd71:goto L42fd71;
case 0x42fd74:c.instructions+=3;goto B42fd74;
case 0x42fd76:c.instructions+=2;goto B42fd76;
case 0x42fd77:c.instructions+=1;goto B42fd77;
case 0x42fd79:goto L42fd79;
case 0x42fd7f:c.instructions+=4;goto B42fd7f;
case 0x42fd82:c.instructions+=3;goto B42fd82;
case 0x42fd85:c.instructions+=2;goto B42fd85;
case 0x42fd89:c.instructions+=1;goto B42fd89;
case 0x42fd8b:goto L42fd8b;
case 0x42fd8e:c.instructions+=3;goto B42fd8e;
case 0x42fd95:c.instructions+=2;goto B42fd95;
case 0x42fd98:c.instructions+=1;goto B42fd98;
case 0x42fd9b:goto L42fd9b;
case 0x42fd9d:c.instructions+=1;goto B42fd9d;
case 0x42fda0:goto L42fda0;
case 0x42fda1:c.instructions+=5;goto B42fda1;
case 0x42fda5:c.instructions+=4;goto B42fda5;
case 0x42fda6:c.instructions+=3;goto B42fda6;
case 0x42fda8:c.instructions+=2;goto B42fda8;
case 0x42fdad:c.instructions+=1;goto B42fdad;
case 0x42fdb2:goto L42fdb2;
case 0x42fdb5:c.instructions+=2;goto B42fdb5;
case 0x42fdb7:c.instructions+=1;goto B42fdb7;
case 0x42fdb9:goto L42fdb9;
case 0x42fdbd:c.instructions+=1;goto B42fdbd;
case 0x42fdbf:goto L42fdbf;
case 0x42fdc1:c.instructions+=2;goto B42fdc1;
case 0x42fdc6:c.instructions+=1;goto B42fdc6;
case 0x42fdcb:goto L42fdcb;
case 0x42fdce:c.instructions+=2;goto B42fdce;
case 0x42fdd0:c.instructions+=1;goto B42fdd0;
case 0x42fdd2:goto L42fdd2;
case 0x42fdd5:c.instructions+=2;goto B42fdd5;
case 0x42fdd7:c.instructions+=1;goto B42fdd7;
case 0x42fdd9:goto L42fdd9;
case 0x42fddb:c.instructions+=2;goto B42fddb;
case 0x42fde0:c.instructions+=1;goto B42fde0;
case 0x42fde5:goto L42fde5;
case 0x42fde8:c.instructions+=2;goto B42fde8;
case 0x42fdea:c.instructions+=1;goto B42fdea;
case 0x42fdec:goto L42fdec;
case 0x42fdf0:c.instructions+=1;goto B42fdf0;
case 0x42fdf2:goto L42fdf2;
case 0x42fdf3:c.instructions+=3;goto B42fdf3;
case 0x42fdf5:c.instructions+=2;goto B42fdf5;
case 0x42fdf6:c.instructions+=1;goto B42fdf6;
case 0x42fdf9:goto L42fdf9;
case 0x42fdfa:c.instructions+=3;goto B42fdfa;
case 0x42fdfc:c.instructions+=2;goto B42fdfc;
case 0x42fdfd:c.instructions+=1;goto B42fdfd;
case 0x42fe00:goto L42fe00;
case 0x42fe01:c.instructions+=8;goto B42fe01;
case 0x42fe03:c.instructions+=7;goto B42fe03;
case 0x42fe04:c.instructions+=6;goto B42fe04;
case 0x42fe07:c.instructions+=5;goto B42fe07;
case 0x42fe08:c.instructions+=4;goto B42fe08;
case 0x42fe0a:c.instructions+=3;goto B42fe0a;
case 0x42fe0d:c.instructions+=2;goto B42fe0d;
case 0x42fe10:c.instructions+=1;goto B42fe10;
case 0x42fe12:goto L42fe12;
case 0x42fe15:c.instructions+=4;goto B42fe15;
case 0x42fe18:c.instructions+=3;goto B42fe18;
case 0x42fe1a:c.instructions+=2;goto B42fe1a;
case 0x42fe1c:c.instructions+=1;goto B42fe1c;
case 0x42fe1e:goto L42fe1e;
case 0x42fe22:c.instructions+=3;goto B42fe22;
case 0x42fe24:c.instructions+=2;goto B42fe24;
case 0x42fe26:c.instructions+=1;goto B42fe26;
case 0x42fe28:goto L42fe28;
case 0x42fe2c:c.instructions+=2;goto B42fe2c;
case 0x42fe2e:c.instructions+=1;goto B42fe2e;
case 0x42fe30:goto L42fe30;
case 0x42fe31:c.instructions+=2;goto B42fe31;
case 0x42fe33:c.instructions+=1;goto B42fe33;
case 0x42fe38:goto L42fe38;
case 0x42fe3a:c.instructions+=1;goto B42fe3a;
case 0x42fe3c:goto L42fe3c;
case 0x42fe3d:c.instructions+=2;goto B42fe3d;
case 0x42fe3f:c.instructions+=1;goto B42fe3f;
case 0x42fe44:goto L42fe44;
case 0x42fe46:c.instructions+=1;goto B42fe46;
case 0x42fe48:goto L42fe48;
case 0x42fe4d:c.instructions+=2;goto B42fe4d;
case 0x42fe4f:c.instructions+=1;goto B42fe4f;
case 0x42fe51:goto L42fe51;
case 0x42fe55:c.instructions+=1;goto B42fe55;
case 0x42fe57:goto L42fe57;
case 0x42fe59:c.instructions+=2;goto B42fe59;
case 0x42fe5e:c.instructions+=1;goto B42fe5e;
case 0x42fe63:goto L42fe63;
case 0x42fe66:c.instructions+=2;goto B42fe66;
case 0x42fe68:c.instructions+=1;goto B42fe68;
case 0x42fe6a:goto L42fe6a;
case 0x42fe6b:c.instructions+=4;goto B42fe6b;
case 0x42fe6d:c.instructions+=3;goto B42fe6d;
case 0x42fe6e:c.instructions+=2;goto B42fe6e;
case 0x42fe6f:c.instructions+=1;goto B42fe6f;
case 0x42fe72:goto L42fe72;
case 0x42fe74:c.instructions+=2;goto B42fe74;
case 0x42fe79:c.instructions+=1;goto B42fe79;
case 0x42fe7e:goto L42fe7e;
case 0x42fe81:c.instructions+=6;goto B42fe81;
case 0x42fe83:c.instructions+=5;goto B42fe83;
case 0x42fe84:c.instructions+=4;goto B42fe84;
case 0x42fe87:c.instructions+=3;goto B42fe87;
case 0x42fe88:c.instructions+=2;goto B42fe88;
case 0x42fe89:c.instructions+=1;goto B42fe89;
case 0x42fe8c:goto L42fe8c;
case 0x42fe8d:c.instructions+=4;goto B42fe8d;
case 0x42fe8f:c.instructions+=3;goto B42fe8f;
case 0x42fe90:c.instructions+=2;goto B42fe90;
case 0x42fe91:c.instructions+=1;goto B42fe91;
case 0x42fea0:goto L42fea0;
case 0x42fea2:c.instructions+=13;goto B42fea2;
case 0x42fea4:c.instructions+=12;goto B42fea4;
case 0x42fea6:c.instructions+=11;goto B42fea6;
case 0x42fea9:c.instructions+=10;goto B42fea9;
case 0x42feac:c.instructions+=9;goto B42feac;
case 0x42feaf:c.instructions+=8;goto B42feaf;
case 0x42feb2:c.instructions+=7;goto B42feb2;
case 0x42feb5:c.instructions+=6;goto B42feb5;
case 0x42feb8:c.instructions+=5;goto B42feb8;
case 0x42febb:c.instructions+=4;goto B42febb;
case 0x42febe:c.instructions+=3;goto B42febe;
case 0x42fec1:c.instructions+=2;goto B42fec1;
case 0x42fec4:c.instructions+=1;goto B42fec4;
case 0x42fed0:goto L42fed0;
case 0x42fed4:c.instructions+=4;goto B42fed4;
case 0x42fed5:c.instructions+=3;goto B42fed5;
case 0x42fed7:c.instructions+=2;goto B42fed7;
case 0x42fedc:c.instructions+=1;goto B42fedc;
case 0x42fee1:goto L42fee1;
case 0x42fee4:c.instructions+=3;goto B42fee4;
case 0x42fee6:c.instructions+=2;goto B42fee6;
case 0x42fee7:c.instructions+=1;goto B42fee7;
case 0x42fee9:goto L42fee9;
case 0x42feee:c.instructions+=4;goto B42feee;
case 0x42fef1:c.instructions+=3;goto B42fef1;
case 0x42fef2:c.instructions+=2;goto B42fef2;
case 0x42fef8:c.instructions+=1;goto B42fef8;
case 0x42fefd:goto L42fefd;
case 0x42ff00:c.instructions+=5;goto B42ff00;
case 0x42ff06:c.instructions+=4;goto B42ff06;
case 0x42ff0c:c.instructions+=3;goto B42ff0c;
case 0x42ff0e:c.instructions+=2;goto B42ff0e;
case 0x42ff11:c.instructions+=1;goto B42ff11;
case 0x42ff13:goto L42ff13;
case 0x42ff15:c.instructions+=1;goto B42ff15;
case 0x42ff18:goto L42ff18;
case 0x42ff1a:c.instructions+=1;goto B42ff1a;
case 0x42ff20:goto L42ff20;
case 0x42ff25:goto L42ff25;
case 0x42ff29:c.instructions+=1;goto B42ff29;
case 0x42ff2b:goto L42ff2b;
case 0x42ff2d:c.instructions+=1;goto B42ff2d;
case 0x42ff30:goto L42ff30;
case 0x42ff34:c.instructions+=4;goto B42ff34;
case 0x42ff35:c.instructions+=3;goto B42ff35;
case 0x42ff37:c.instructions+=2;goto B42ff37;
case 0x42ff3c:c.instructions+=1;goto B42ff3c;
case 0x42ff41:goto L42ff41;
case 0x42ff44:c.instructions+=4;goto B42ff44;
case 0x42ff46:c.instructions+=3;goto B42ff46;
case 0x42ff49:c.instructions+=2;goto B42ff49;
case 0x42ff4a:c.instructions+=1;goto B42ff4a;
case 0x42ff50:goto L42ff50;
case 0x42ff53:c.instructions+=2;goto B42ff53;
case 0x42ff55:c.instructions+=1;goto B42ff55;
case 0x42ff57:goto L42ff57;
case 0x42ff5b:c.instructions+=3;goto B42ff5b;
case 0x42ff5e:c.instructions+=2;goto B42ff5e;
case 0x42ff60:c.instructions+=1;goto B42ff60;
case 0x42ff62:goto L42ff62;
case 0x42ff65:c.instructions+=2;goto B42ff65;
case 0x42ff67:c.instructions+=1;goto B42ff67;
case 0x42ff69:goto L42ff69;
case 0x42ff6b:c.instructions+=1;goto B42ff6b;
case 0x42ff6d:goto L42ff6d;
case 0x42ff6f:c.instructions+=1;goto B42ff6f;
case 0x42ff71:goto L42ff71;
case 0x42ff73:c.instructions+=1;goto B42ff73;
case 0x42ff75:goto L42ff75;
case 0x42ff79:c.instructions+=3;goto B42ff79;
case 0x42ff7c:c.instructions+=2;goto B42ff7c;
case 0x42ff7f:c.instructions+=1;goto B42ff7f;
case 0x42ff81:goto L42ff81;
case 0x42ff88:c.instructions+=1;goto B42ff88;
case 0x42ff8a:goto L42ff8a;
case 0x42ff8f:c.instructions+=2;goto B42ff8f;
case 0x42ff94:c.instructions+=1;goto B42ff94;
case 0x42ff96:goto L42ff96;
case 0x42ff9b:c.instructions+=1;goto B42ff9b;
case 0x42ff9d:goto L42ff9d;
case 0x42ffa0:c.instructions+=2;goto B42ffa0;
case 0x42ffa2:c.instructions+=1;goto B42ffa2;
case 0x42ffa4:goto L42ffa4;
case 0x42ffa5:c.instructions+=4;goto B42ffa5;
case 0x42ffa8:c.instructions+=3;goto B42ffa8;
case 0x42ffaa:c.instructions+=2;goto B42ffaa;
case 0x42ffab:c.instructions+=1;goto B42ffab;
case 0x42ffad:goto L42ffad;
case 0x42ffaf:c.instructions+=1;goto B42ffaf;
case 0x42ffb1:goto L42ffb1;
case 0x42ffb3:c.instructions+=1;goto B42ffb3;
case 0x42ffb5:goto L42ffb5;
case 0x42ffb8:c.instructions+=2;goto B42ffb8;
case 0x42ffba:c.instructions+=1;goto B42ffba;
case 0x42ffbc:goto L42ffbc;
case 0x42ffbe:goto L42ffbe;
case 0x42ffc0:goto L42ffc0;
case 0x42ffc2:c.instructions+=1;goto B42ffc2;
case 0x42ffc5:goto L42ffc5;
case 0x42ffc7:c.instructions+=1;goto B42ffc7;
case 0x42ffd0:goto L42ffd0;
case 0x42ffd3:c.instructions+=7;goto B42ffd3;
case 0x42ffd4:c.instructions+=6;goto B42ffd4;
case 0x42ffd8:c.instructions+=5;goto B42ffd8;
case 0x42ffdb:c.instructions+=4;goto B42ffdb;
case 0x42ffdc:c.instructions+=3;goto B42ffdc;
case 0x42ffdf:c.instructions+=2;goto B42ffdf;
case 0x42ffe1:c.instructions+=1;goto B42ffe1;
case 0x42ffe3:goto L42ffe3;
case 0x42ffe4:c.instructions+=3;goto B42ffe4;
case 0x42ffe6:c.instructions+=2;goto B42ffe6;
case 0x42ffe7:c.instructions+=1;goto B42ffe7;
case 0x42ffea:goto L42ffea;
case 0x42ffed:c.instructions+=1;goto B42ffed;
case 0x42ffef:goto L42ffef;
case 0x42fff1:c.instructions+=1;goto B42fff1;
case 0x42fff3:goto L42fff3;
case 0x42fff6:c.instructions+=1;goto B42fff6;
case 0x42fff8:goto L42fff8;
case 0x42fffa:c.instructions+=2;goto B42fffa;
case 0x42ffff:c.instructions+=1;goto B42ffff;
default:missing_instruction(c.pc);}
B42f000:L42f000:{c.instructions+=11;NFSU2_TR(0x42f000);
__builtin_memmove((R+24),(R+4),4);
}
B42f002:{NFSU2_TR(0x42f002);
__builtin_memmove((R+4),(R+0),4);
}
B42f004:{NFSU2_TR(0x42f004);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f008:{NFSU2_TR(0x42f008);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f00b:{NFSU2_TR(0x42f00b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B42f00e:{NFSU2_TR(0x42f00e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f012:{NFSU2_TR(0x42f012);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42f015:{NFSU2_TR(0x42f015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f016:{NFSU2_TR(0x42f016);
__builtin_memmove((R+4),(R+20),4);
}
B42f018:{NFSU2_TR(0x42f018);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f01e:{NFSU2_TR(0x42f01e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f023ull));
TAIL_STATIC(0x401d40u,401);
}
B42f023:L42f023:{c.instructions+=23;NFSU2_TR(0x42f023);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42f025:{NFSU2_TR(0x42f025);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f02c:{NFSU2_TR(0x42f02c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f033:{NFSU2_TR(0x42f033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f039:{NFSU2_TR(0x42f039);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42f03f:{NFSU2_TR(0x42f03f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f041:{NFSU2_TR(0x42f041);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f044:{NFSU2_TR(0x42f044);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f047:{NFSU2_TR(0x42f047);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42f04d:{NFSU2_TR(0x42f04d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42f050:{NFSU2_TR(0x42f050);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42f055:{NFSU2_TR(0x42f055);
__builtin_memmove((R+0),(R+4),4);
}
B42f057:{NFSU2_TR(0x42f057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B42f05d:{NFSU2_TR(0x42f05d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f061:{NFSU2_TR(0x42f061);
__builtin_memmove((R+0),(R+4),4);
}
B42f063:{NFSU2_TR(0x42f063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B42f069:{NFSU2_TR(0x42f069);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f06d:{NFSU2_TR(0x42f06d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42f071:{NFSU2_TR(0x42f071);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f077:{NFSU2_TR(0x42f077);
{u32 ea_=u32(u32(7878332u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f07d:{NFSU2_TR(0x42f07d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f07f:{NFSU2_TR(0x42f07f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f082:{NFSU2_TR(0x42f082);
if(r1(R+518)){{goto L42f08e;}}
}
B42f084:L42f084:{c.instructions+=2;NFSU2_TR(0x42f084);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B42f088:{NFSU2_TR(0x42f088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f13d;}}
}
B42f08e:L42f08e:{c.instructions+=6;NFSU2_TR(0x42f08e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f092:{NFSU2_TR(0x42f092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f098:{NFSU2_TR(0x42f098);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f09f:{NFSU2_TR(0x42f09f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f0a1:{NFSU2_TR(0x42f0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f0a3:{NFSU2_TR(0x42f0a3);
if(r1(R+518)){{goto L42f0b8;}}
}
B42f0a5:L42f0a5:{c.instructions+=2;NFSU2_TR(0x42f0a5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42f0a8:{NFSU2_TR(0x42f0a8);
if(r1(R+518)){{goto L42f0cd;}}
}
B42f0aa:L42f0aa:{c.instructions+=4;NFSU2_TR(0x42f0aa);
__builtin_memmove((R+4),gp(0x7836d4),4);
}
B42f0b0:{NFSU2_TR(0x42f0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f0b3:{NFSU2_TR(0x42f0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f0b6:{NFSU2_TR(0x42f0b6);
{goto L42f0cd;}
}
B42f0b8:L42f0b8:{c.instructions+=2;NFSU2_TR(0x42f0b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42f0bb:{NFSU2_TR(0x42f0bb);
if(r1(R+518)){{goto L42f0cd;}}
}
B42f0bd:L42f0bd:{c.instructions+=3;NFSU2_TR(0x42f0bd);
__builtin_memmove((R+8),gp(0x7836d4),4);
}
B42f0c3:{NFSU2_TR(0x42f0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f0ca:{NFSU2_TR(0x42f0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f0cd:L42f0cd:{c.instructions+=4;NFSU2_TR(0x42f0cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f0ce:{NFSU2_TR(0x42f0ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f0cf:{NFSU2_TR(0x42f0cf);
__builtin_memmove((R+4),(R+12),4);
}
B42f0d1:{NFSU2_TR(0x42f0d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f0d6ull));
TAIL_STATIC(0x420d40u,420);
}
B42f0d6:L42f0d6:{c.instructions+=9;NFSU2_TR(0x42f0d6);
__builtin_memmove((R+4),gp(0x783670),4);
}
B42f0dc:{NFSU2_TR(0x42f0dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42f0e0:{NFSU2_TR(0x42f0e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f0e1:{NFSU2_TR(0x42f0e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f0e2:{NFSU2_TR(0x42f0e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f0e3:{NFSU2_TR(0x42f0e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f0e4:{NFSU2_TR(0x42f0e4);
w4(R+4,u32(0x827a00ull));
}
B42f0e9:{NFSU2_TR(0x42f0e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f0f1:{NFSU2_TR(0x42f0f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f0f6ull));
TAIL_STATIC(0x428ce0u,428);
}
B42f0f6:L42f0f6:{c.instructions+=2;NFSU2_TR(0x42f0f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f0f8:{NFSU2_TR(0x42f0f8);
if(r1(R+518)){{goto L42f13b;}}
}
B42f0fa:L42f0fa:{c.instructions+=5;NFSU2_TR(0x42f0fa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f0fe:{NFSU2_TR(0x42f0fe);
{u32 ea_=u32(u32(7878336u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f104:{NFSU2_TR(0x42f104);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f106:{NFSU2_TR(0x42f106);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f109:{NFSU2_TR(0x42f109);
if(r1(R+514)){{goto L42f13b;}}
}
B42f10b:L42f10b:{c.instructions+=4;NFSU2_TR(0x42f10b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f10f:{NFSU2_TR(0x42f10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f115:{NFSU2_TR(0x42f115);
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
B42f117:{NFSU2_TR(0x42f117);
if(r1(R+518)){{goto L42f124;}}
}
B42f119:L42f119:{c.instructions+=4;NFSU2_TR(0x42f119);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f11c:{NFSU2_TR(0x42f11c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42f11e:{NFSU2_TR(0x42f11e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f11f:{NFSU2_TR(0x42f11f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f122ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42f122:L42f122:{c.instructions+=1;NFSU2_TR(0x42f122);
{goto L42f126;}
}
B42f124:L42f124:{c.instructions+=1;NFSU2_TR(0x42f124);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42f126:L42f126:{c.instructions+=9;NFSU2_TR(0x42f126);
__builtin_memmove((R+4),gp(0x783670),4);
}
B42f12c:{NFSU2_TR(0x42f12c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f12e:{NFSU2_TR(0x42f12e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f130:{NFSU2_TR(0x42f130);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f131:{NFSU2_TR(0x42f131);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f132:{NFSU2_TR(0x42f132);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f133:{NFSU2_TR(0x42f133);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f134:{NFSU2_TR(0x42f134);
__builtin_memmove((R+4),(R+12),4);
}
B42f136:{NFSU2_TR(0x42f136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f13bull));
TAIL_STATIC(0x42dec0u,42d);
}
B42f13b:L42f13b:{c.instructions+=1;NFSU2_TR(0x42f13b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42f13d:L42f13d:{c.instructions+=7;NFSU2_TR(0x42f13d);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f143:{NFSU2_TR(0x42f143);
{u32 ea_=u32(u32(7887812u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42f149:{NFSU2_TR(0x42f149);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42f14b:{NFSU2_TR(0x42f14b);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f151:{NFSU2_TR(0x42f151);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f153:{NFSU2_TR(0x42f153);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f156:{NFSU2_TR(0x42f156);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42f180;}}
}
B42f158:L42f158:{c.instructions+=6;NFSU2_TR(0x42f158);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42f15c:{NFSU2_TR(0x42f15c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f162:{NFSU2_TR(0x42f162);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f168:{NFSU2_TR(0x42f168);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f16a:{NFSU2_TR(0x42f16a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f16d:{NFSU2_TR(0x42f16d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42f180;}}
}
B42f16f:L42f16f:{c.instructions+=3;NFSU2_TR(0x42f16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f175:{NFSU2_TR(0x42f175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f17b:{NFSU2_TR(0x42f17b);
{goto L42f30f;}
}
B42f180:L42f180:{c.instructions+=6;NFSU2_TR(0x42f180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f182:{NFSU2_TR(0x42f182);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f188:{NFSU2_TR(0x42f188);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f18c:{NFSU2_TR(0x42f18c);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42f190:{NFSU2_TR(0x42f190);
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
B42f192:{NFSU2_TR(0x42f192);
if(r1(R+518)){{goto L42f1d4;}}
}
B42f194:L42f194:{c.instructions+=3;NFSU2_TR(0x42f194);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42f19a:{NFSU2_TR(0x42f19a);
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
B42f19c:{NFSU2_TR(0x42f19c);
if(r1(R+518)){{goto L42f1af;}}
}
B42f19e:L42f19e:{c.instructions+=3;NFSU2_TR(0x42f19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f1a4:{NFSU2_TR(0x42f1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f1aa:{NFSU2_TR(0x42f1aa);
{goto L42f2b1;}
}
B42f1af:L42f1af:{c.instructions+=4;NFSU2_TR(0x42f1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f1b5:{NFSU2_TR(0x42f1b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f1b6:{NFSU2_TR(0x42f1b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f1b7:{NFSU2_TR(0x42f1b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f1bcull));
TAIL_STATIC(0x4039f0u,403);
}
B42f1bc:L42f1bc:{c.instructions+=5;NFSU2_TR(0x42f1bc);
{u32 ea_=u32(u32(7878340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f1c2:{NFSU2_TR(0x42f1c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42f1c5:{NFSU2_TR(0x42f1c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42f1c9:{NFSU2_TR(0x42f1c9);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42f1cf:{NFSU2_TR(0x42f1cf);
{goto L42f2b1;}
}
B42f1d4:L42f1d4:{c.instructions+=2;NFSU2_TR(0x42f1d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f1d8:{NFSU2_TR(0x42f1d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f1ddull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B42f1dd:L42f1dd:{c.instructions+=4;NFSU2_TR(0x42f1dd);
__builtin_memmove((R+4),(R+0),4);
}
B42f1df:{NFSU2_TR(0x42f1df);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42f1e1:{NFSU2_TR(0x42f1e1);
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
B42f1e3:{NFSU2_TR(0x42f1e3);
if(r1(R+518)){{goto L42f29f;}}
}
B42f1e9:L42f1e9:{c.instructions+=3;NFSU2_TR(0x42f1e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f1ef:{NFSU2_TR(0x42f1ef);
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
B42f1f1:{NFSU2_TR(0x42f1f1);
if(r1(R+518)){{goto L42f29f;}}
}
B42f1f7:L42f1f7:{c.instructions+=5;NFSU2_TR(0x42f1f7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f1fb:{NFSU2_TR(0x42f1fb);
{u32 ea_=u32(u32(7878328u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f201:{NFSU2_TR(0x42f201);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f203:{NFSU2_TR(0x42f203);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f206:{NFSU2_TR(0x42f206);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f220;}}
}
B42f208:L42f208:{c.instructions+=4;NFSU2_TR(0x42f208);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x219ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f20f:{NFSU2_TR(0x42f20f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f215:{NFSU2_TR(0x42f215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f21b:{NFSU2_TR(0x42f21b);
{goto L42f2af;}
}
B42f220:L42f220:{c.instructions+=4;NFSU2_TR(0x42f220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f221:{NFSU2_TR(0x42f221);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f222:{NFSU2_TR(0x42f222);
__builtin_memmove((R+4),(R+24),4);
}
B42f224:{NFSU2_TR(0x42f224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f229ull));
TAIL_STATIC(0x40e6e0u,40e);
}
B42f229:L42f229:{c.instructions+=3;NFSU2_TR(0x42f229);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x219ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f22f:{NFSU2_TR(0x42f22f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f231:{NFSU2_TR(0x42f231);
if(r1(R+518)){{goto L42f249;}}
}
B42f233:L42f233:{c.instructions+=4;NFSU2_TR(0x42f233);
{u32 ea_=u32(u32(7878344u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f239:{NFSU2_TR(0x42f239);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f23b:{NFSU2_TR(0x42f23b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f23e:{NFSU2_TR(0x42f23e);
if(r1(R+514)){{goto L42f267;}}
}
B42f240:L42f240:{c.instructions+=2;NFSU2_TR(0x42f240);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x219ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f247:{NFSU2_TR(0x42f247);
{goto L42f267;}
}
B42f249:L42f249:{c.instructions+=7;NFSU2_TR(0x42f249);
{u32 ea_=u32(u32(7878348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f24f:{NFSU2_TR(0x42f24f);
{u32 ea_=u32(u32(7878344u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42f255:{NFSU2_TR(0x42f255);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42f257:{NFSU2_TR(0x42f257);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42f259:{NFSU2_TR(0x42f259);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f25b:{NFSU2_TR(0x42f25b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f25e:{NFSU2_TR(0x42f25e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f267;}}
}
B42f260:L42f260:{c.instructions+=1;NFSU2_TR(0x42f260);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x219ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f267:L42f267:{c.instructions+=3;NFSU2_TR(0x42f267);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x219ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f26d:{NFSU2_TR(0x42f26d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f26f:{NFSU2_TR(0x42f26f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f27f;}}
}
B42f271:L42f271:{c.instructions+=3;NFSU2_TR(0x42f271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f277:{NFSU2_TR(0x42f277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f27d:{NFSU2_TR(0x42f27d);
{goto L42f2af;}
}
B42f27f:L42f27f:{c.instructions+=6;NFSU2_TR(0x42f27f);
{u32 ea_=u32(u32(7878328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f285:{NFSU2_TR(0x42f285);
__builtin_memmove((R+8),gp(0x7836d0),4);
}
B42f28b:{NFSU2_TR(0x42f28b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42f291:{NFSU2_TR(0x42f291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f297:{NFSU2_TR(0x42f297);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42f29d:{NFSU2_TR(0x42f29d);
{goto L42f2af;}
}
B42f29f:L42f29f:{c.instructions+=6;NFSU2_TR(0x42f29f);
__builtin_memmove((R+0),gp(0x7836c4),4);
}
B42f2a4:{NFSU2_TR(0x42f2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42f2a6:{NFSU2_TR(0x42f2a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f2a7:{NFSU2_TR(0x42f2a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f2a8:{NFSU2_TR(0x42f2a8);
__builtin_memmove((R+4),(R+24),4);
}
B42f2aa:{NFSU2_TR(0x42f2aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f2afull));
TAIL_STATIC(0x40dee0u,40d);
}
B42f2af:L42f2af:{c.instructions+=1;NFSU2_TR(0x42f2af);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42f2b1:L42f2b1:{c.instructions+=5;NFSU2_TR(0x42f2b1);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f2b7:{NFSU2_TR(0x42f2b7);
{u32 ea_=u32(u32(7878324u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f2bd:{NFSU2_TR(0x42f2bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f2bf:{NFSU2_TR(0x42f2bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f2c2:{NFSU2_TR(0x42f2c2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42f16fu);}goto L42f16f;}}
}
B42f2c8:L42f2c8:{c.instructions+=6;NFSU2_TR(0x42f2c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f2ca:{NFSU2_TR(0x42f2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42f2cd:{NFSU2_TR(0x42f2cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f2d0:{NFSU2_TR(0x42f2d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42f2d2:{NFSU2_TR(0x42f2d2);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f2d4:{NFSU2_TR(0x42f2d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42f30f;}}
}
B42f2d6:L42f2d6:{c.instructions+=3;NFSU2_TR(0x42f2d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f2d7:{NFSU2_TR(0x42f2d7);
__builtin_memmove((R+4),(R+12),4);
}
B42f2d9:{NFSU2_TR(0x42f2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f2deull));
TAIL_STATIC(0x5a0820u,5a0);
}
B42f2de:L42f2de:{c.instructions+=3;NFSU2_TR(0x42f2de);
__builtin_memmove((R+20),(R+0),4);
}
B42f2e0:{NFSU2_TR(0x42f2e0);
__builtin_memmove((R+4),(R+20),4);
}
B42f2e2:{NFSU2_TR(0x42f2e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f2e7ull));
TAIL_STATIC(0x592c60u,592);
}
B42f2e7:L42f2e7:{c.instructions+=2;NFSU2_TR(0x42f2e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f2e9:{NFSU2_TR(0x42f2e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f301;}}
}
B42f2eb:L42f2eb:{c.instructions+=2;NFSU2_TR(0x42f2eb);
__builtin_memmove((R+4),(R+20),4);
}
B42f2ed:{NFSU2_TR(0x42f2ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f2f2ull));
TAIL_STATIC(0x404800u,404);
}
B42f2f2:L42f2f2:{c.instructions+=2;NFSU2_TR(0x42f2f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f2f4:{NFSU2_TR(0x42f2f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f301;}}
}
B42f2f6:L42f2f6:{c.instructions+=4;NFSU2_TR(0x42f2f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42f2fa:{NFSU2_TR(0x42f2fa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B42f2fb:{NFSU2_TR(0x42f2fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42f2fd:{NFSU2_TR(0x42f2fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42f2d6u);}goto L42f2d6;}}
}
B42f2ff:L42f2ff:{c.instructions+=1;NFSU2_TR(0x42f2ff);
{goto L42f30f;}
}
B42f301:L42f301:{c.instructions+=3;NFSU2_TR(0x42f301);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42f303:{NFSU2_TR(0x42f303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f309:{NFSU2_TR(0x42f309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f30f:L42f30f:{c.instructions+=8;NFSU2_TR(0x42f30f);
__builtin_memmove((R+8),gp(0x7836c4),4);
}
B42f315:{NFSU2_TR(0x42f315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f316:{NFSU2_TR(0x42f316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f31c:{NFSU2_TR(0x42f31c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f31d:{NFSU2_TR(0x42f31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42f31e:{NFSU2_TR(0x42f31e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f31f:{NFSU2_TR(0x42f31f);
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
B42f322:{NFSU2_TR(0x42f322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f330:L42f330:{c.instructions+=19;NFSU2_TR(0x42f330);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f331:{NFSU2_TR(0x42f331);
__builtin_memmove((R+20),(R+16),4);
}
B42f333:{NFSU2_TR(0x42f333);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42f336:{NFSU2_TR(0x42f336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B42f339:{NFSU2_TR(0x42f339);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f33a:{NFSU2_TR(0x42f33a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f33b:{NFSU2_TR(0x42f33b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f33c:{NFSU2_TR(0x42f33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42f33f:{NFSU2_TR(0x42f33f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f341:{NFSU2_TR(0x42f341);
__builtin_memmove((R+24),(R+4),4);
}
B42f343:{NFSU2_TR(0x42f343);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f347:{NFSU2_TR(0x42f347);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f34a:{NFSU2_TR(0x42f34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f34e:{NFSU2_TR(0x42f34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f354:{NFSU2_TR(0x42f354);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f355:{NFSU2_TR(0x42f355);
__builtin_memmove((R+4),(R+28),4);
}
B42f357:{NFSU2_TR(0x42f357);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f35e:{NFSU2_TR(0x42f35e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f365:{NFSU2_TR(0x42f365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f36aull));
TAIL_STATIC(0x60c120u,60c);
}
B42f36a:L42f36a:{c.instructions+=5;NFSU2_TR(0x42f36a);
__builtin_memmove((R+12),(R+0),4);
}
B42f36c:{NFSU2_TR(0x42f36c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f36e:{NFSU2_TR(0x42f36e);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f373:{NFSU2_TR(0x42f373);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f378:{NFSU2_TR(0x42f378);
if(r1(R+518)){{goto L42f4f1;}}
}
B42f37e:L42f37e:{c.instructions+=3;NFSU2_TR(0x42f37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f384:{NFSU2_TR(0x42f384);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f386:{NFSU2_TR(0x42f386);
if(r1(R+518)){{goto L42f4f1;}}
}
B42f38c:L42f38c:{c.instructions+=3;NFSU2_TR(0x42f38c);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B42f392:{NFSU2_TR(0x42f392);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B42f399:{NFSU2_TR(0x42f399);
if(r1(R+518)){{goto L42f3b3;}}
}
B42f39b:L42f39b:{c.instructions+=4;NFSU2_TR(0x42f39b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f39f:{NFSU2_TR(0x42f39f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42f3a5:{NFSU2_TR(0x42f3a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f3a6:{NFSU2_TR(0x42f3a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f3abull));
TAIL_STATIC(0x5eeff0u,5ee);
}
B42f3ab:L42f3ab:{c.instructions+=2;NFSU2_TR(0x42f3ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f3ad:{NFSU2_TR(0x42f3ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f4f1;}}
}
B42f3b3:L42f3b3:{c.instructions+=6;NFSU2_TR(0x42f3b3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f3b5:{NFSU2_TR(0x42f3b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f3ba:{NFSU2_TR(0x42f3ba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f3c0:{NFSU2_TR(0x42f3c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f3c2:{NFSU2_TR(0x42f3c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f3c5:{NFSU2_TR(0x42f3c5);
if(r1(R+518)){{goto L42f3cc;}}
}
B42f3c7:L42f3c7:{c.instructions+=1;NFSU2_TR(0x42f3c7);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f3cc:L42f3cc:{c.instructions+=7;NFSU2_TR(0x42f3cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f3d0:{NFSU2_TR(0x42f3d0);
{u32 ea_=u32(r4(R+0)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f3d6:{NFSU2_TR(0x42f3d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f3db:{NFSU2_TR(0x42f3db);
{u32 ea_=u32(u32(7878452u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f3e1:{NFSU2_TR(0x42f3e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f3e3:{NFSU2_TR(0x42f3e3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f3e6:{NFSU2_TR(0x42f3e6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42f3ed;}}
}
B42f3e8:L42f3e8:{c.instructions+=1;NFSU2_TR(0x42f3e8);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f3ed:L42f3ed:{c.instructions+=4;NFSU2_TR(0x42f3ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f3f1:{NFSU2_TR(0x42f3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f3f7:{NFSU2_TR(0x42f3f7);
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
B42f3f9:{NFSU2_TR(0x42f3f9);
if(r1(R+518)){{goto L42f406;}}
}
B42f3fb:L42f3fb:{c.instructions+=4;NFSU2_TR(0x42f3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f3fe:{NFSU2_TR(0x42f3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42f400:{NFSU2_TR(0x42f400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f401:{NFSU2_TR(0x42f401);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f404ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42f404:L42f404:{c.instructions+=1;NFSU2_TR(0x42f404);
{goto L42f408;}
}
B42f406:L42f406:{c.instructions+=1;NFSU2_TR(0x42f406);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42f408:L42f408:{c.instructions+=13;NFSU2_TR(0x42f408);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f40c:{NFSU2_TR(0x42f40c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f40d:{NFSU2_TR(0x42f40d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f411:{NFSU2_TR(0x42f411);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f412:{NFSU2_TR(0x42f412);
__builtin_memmove((R+8),gp(0x783670),4);
}
B42f418:{NFSU2_TR(0x42f418);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f419:{NFSU2_TR(0x42f419);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f41c:{NFSU2_TR(0x42f41c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f41d:{NFSU2_TR(0x42f41d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f41e:{NFSU2_TR(0x42f41e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f422:{NFSU2_TR(0x42f422);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f423:{NFSU2_TR(0x42f423);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f429:{NFSU2_TR(0x42f429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f42eull));
TAIL_STATIC(0x42dec0u,42d);
}
B42f42e:L42f42e:{c.instructions+=2;NFSU2_TR(0x42f42e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f430:{NFSU2_TR(0x42f430);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f505;}}
}
B42f436:L42f436:{c.instructions+=2;NFSU2_TR(0x42f436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f43c:{NFSU2_TR(0x42f43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f441ull));
TAIL_STATIC(0x60bf70u,60b);
}
B42f441:L42f441:{c.instructions+=2;NFSU2_TR(0x42f441);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f443:{NFSU2_TR(0x42f443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f505;}}
}
B42f449:L42f449:{c.instructions+=2;NFSU2_TR(0x42f449);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f44f:{NFSU2_TR(0x42f44f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f454ull));
TAIL_STATIC(0x6148c0u,614);
}
B42f454:L42f454:{c.instructions+=2;NFSU2_TR(0x42f454);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f456:{NFSU2_TR(0x42f456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f505;}}
}
B42f45c:L42f45c:{c.instructions+=5;NFSU2_TR(0x42f45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f462:{NFSU2_TR(0x42f462);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f467:{NFSU2_TR(0x42f467);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f469:{NFSU2_TR(0x42f469);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f46a:{NFSU2_TR(0x42f46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f46full));
TAIL_STATIC(0x4010c0u,401);
}
B42f46f:L42f46f:{c.instructions+=3;NFSU2_TR(0x42f46f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42f472:{NFSU2_TR(0x42f472);
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
B42f474:{NFSU2_TR(0x42f474);
if(r1(R+518)){{goto L42f492;}}
}
B42f476:L42f476:{c.instructions+=3;NFSU2_TR(0x42f476);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f477:{NFSU2_TR(0x42f477);
__builtin_memmove((R+4),(R+28),4);
}
B42f479:{NFSU2_TR(0x42f479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f47eull));
TAIL_STATIC(0x60bff0u,60b);
}
B42f47e:L42f47e:{c.instructions+=4;NFSU2_TR(0x42f47e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f484:{NFSU2_TR(0x42f484);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f486:{NFSU2_TR(0x42f486);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f489:{NFSU2_TR(0x42f489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f505;}}
}
B42f48b:L42f48b:{c.instructions+=2;NFSU2_TR(0x42f48b);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f490:{NFSU2_TR(0x42f490);
{goto L42f505;}
}
B42f492:L42f492:{c.instructions+=7;NFSU2_TR(0x42f492);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f498:{NFSU2_TR(0x42f498);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f499:{NFSU2_TR(0x42f499);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f49a:{NFSU2_TR(0x42f49a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42f49e:{NFSU2_TR(0x42f49e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f49f:{NFSU2_TR(0x42f49f);
__builtin_memmove((R+4),(R+28),4);
}
B42f4a1:{NFSU2_TR(0x42f4a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f4a6ull));
TAIL_STATIC(0x60c050u,60c);
}
B42f4a6:L42f4a6:{c.instructions+=6;NFSU2_TR(0x42f4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f4a9:{NFSU2_TR(0x42f4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f4ab:{NFSU2_TR(0x42f4ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f4af:{NFSU2_TR(0x42f4af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f4b3:{NFSU2_TR(0x42f4b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f4b7:{NFSU2_TR(0x42f4b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f4bcull));
TAIL_STATIC(0x5ec3a0u,5ec);
}
B42f4bc:L42f4bc:{c.instructions+=9;NFSU2_TR(0x42f4bc);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f4c2:{NFSU2_TR(0x42f4c2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f4c8:{NFSU2_TR(0x42f4c8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42f4cc:{NFSU2_TR(0x42f4cc);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f4d2:{NFSU2_TR(0x42f4d2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42f4d6:{NFSU2_TR(0x42f4d6);
{u32 ea_=u32(u32(7878448u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f4dc:{NFSU2_TR(0x42f4dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f4de:{NFSU2_TR(0x42f4de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f4e1:{NFSU2_TR(0x42f4e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f4ea;}}
}
B42f4e3:L42f4e3:{c.instructions+=2;NFSU2_TR(0x42f4e3);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f4e8:{NFSU2_TR(0x42f4e8);
{goto L42f505;}
}
B42f4ea:L42f4ea:{c.instructions+=2;NFSU2_TR(0x42f4ea);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f4ef:{NFSU2_TR(0x42f4ef);
{goto L42f505;}
}
B42f4f1:L42f4f1:{c.instructions+=6;NFSU2_TR(0x42f4f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42f4f4:{NFSU2_TR(0x42f4f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f4f5:{NFSU2_TR(0x42f4f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f4f6:{NFSU2_TR(0x42f4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f4fc:{NFSU2_TR(0x42f4fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f500:{NFSU2_TR(0x42f500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f505ull));
TAIL_STATIC(0x420d40u,420);
}
B42f505:L42f505:{c.instructions+=3;NFSU2_TR(0x42f505);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B42f50a:{NFSU2_TR(0x42f50a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f50c:{NFSU2_TR(0x42f50c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f52d;}}
}
B42f50e:L42f50e:{c.instructions+=3;NFSU2_TR(0x42f50e);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B42f513:{NFSU2_TR(0x42f513);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f515:{NFSU2_TR(0x42f515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f52d;}}
}
B42f517:L42f517:{c.instructions+=3;NFSU2_TR(0x42f517);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B42f51c:{NFSU2_TR(0x42f51c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f51e:{NFSU2_TR(0x42f51e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f52d;}}
}
B42f520:L42f520:{c.instructions+=3;NFSU2_TR(0x42f520);
__builtin_memmove((R+0),gp(0x890104),4);
}
B42f525:{NFSU2_TR(0x42f525);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f527:{NFSU2_TR(0x42f527);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f52d;}}
}
B42f529:L42f529:{c.instructions+=2;NFSU2_TR(0x42f529);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42f52b:{NFSU2_TR(0x42f52b);
{goto L42f52f;}
}
B42f52d:L42f52d:{c.instructions+=1;NFSU2_TR(0x42f52d);
w1(R+0,u8(0x1ull));
}
B42f52f:L42f52f:{c.instructions+=3;NFSU2_TR(0x42f52f);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42f533:{NFSU2_TR(0x42f533);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f535:{NFSU2_TR(0x42f535);
if(r1(R+518)){{goto L42f5bb;}}
}
B42f53b:L42f53b:{c.instructions+=2;NFSU2_TR(0x42f53b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f53d:{NFSU2_TR(0x42f53d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f5bb;}}
}
B42f53f:L42f53f:{c.instructions+=3;NFSU2_TR(0x42f53f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f541:{NFSU2_TR(0x42f541);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42f547:{NFSU2_TR(0x42f547);
if(r1(R+518)){{goto L42f54e;}}
}
B42f549:L42f549:{c.instructions+=2;NFSU2_TR(0x42f549);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f54c:{NFSU2_TR(0x42f54c);
{goto L42f554;}
}
B42f54e:L42f54e:{c.instructions+=1;NFSU2_TR(0x42f54e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f554:L42f554:{c.instructions+=7;NFSU2_TR(0x42f554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42f556:{NFSU2_TR(0x42f556);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42f55c:{NFSU2_TR(0x42f55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f562:{NFSU2_TR(0x42f562);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f566:{NFSU2_TR(0x42f566);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f568:{NFSU2_TR(0x42f568);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f56b:{NFSU2_TR(0x42f56b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42f575;}}
}
B42f56d:L42f56d:{c.instructions+=2;NFSU2_TR(0x42f56d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42f56f:{NFSU2_TR(0x42f56f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f575:L42f575:{c.instructions+=10;NFSU2_TR(0x42f575);
{u32 ea_=u32(u32(7878456u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f57b:{NFSU2_TR(0x42f57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f581:{NFSU2_TR(0x42f581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f587:{NFSU2_TR(0x42f587);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f591:{NFSU2_TR(0x42f591);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42f595:{NFSU2_TR(0x42f595);
{u32 ea_=u32(u32(7878444u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42f59b:{NFSU2_TR(0x42f59b);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42f5a1:{NFSU2_TR(0x42f5a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f5a3:{NFSU2_TR(0x42f5a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f5a6:{NFSU2_TR(0x42f5a6);
if(r1(R+518)){{goto L42f5b0;}}
}
B42f5a8:L42f5a8:{c.instructions+=2;NFSU2_TR(0x42f5a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42f5aa:{NFSU2_TR(0x42f5aa);
{u32 ea_=u32(u32(7878444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f5b0:L42f5b0:{c.instructions+=2;NFSU2_TR(0x42f5b0);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42f5b6:{NFSU2_TR(0x42f5b6);
{goto L42f673;}
}
B42f5bb:L42f5bb:{c.instructions+=3;NFSU2_TR(0x42f5bb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f5bf:{NFSU2_TR(0x42f5bf);
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
B42f5c1:{NFSU2_TR(0x42f5c1);
if(r1(R+518)){{goto L42f623;}}
}
B42f5c3:L42f5c3:{c.instructions+=4;NFSU2_TR(0x42f5c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42f5c7:{NFSU2_TR(0x42f5c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42f5c9:{NFSU2_TR(0x42f5c9);
__builtin_memmove((R+4),(R+12),4);
}
B42f5cb:{NFSU2_TR(0x42f5cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f5ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42f5ce:L42f5ce:{c.instructions+=9;NFSU2_TR(0x42f5ce);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B42f5d0:{NFSU2_TR(0x42f5d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42f5d2:{NFSU2_TR(0x42f5d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f5d3:{NFSU2_TR(0x42f5d3);
__builtin_memmove((R+4),(R+24),4);
}
B42f5d5:{NFSU2_TR(0x42f5d5);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42f5db:{NFSU2_TR(0x42f5db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f5e2:{NFSU2_TR(0x42f5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f5e8:{NFSU2_TR(0x42f5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f5ee:{NFSU2_TR(0x42f5ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f5f3ull));
TAIL_STATIC(0x40e390u,40e);
}
B42f5f3:L42f5f3:{c.instructions+=9;NFSU2_TR(0x42f5f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42f5f5:{NFSU2_TR(0x42f5f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f5f7:{NFSU2_TR(0x42f5f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42f5fb:{NFSU2_TR(0x42f5fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f5fc:{NFSU2_TR(0x42f5fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f604:{NFSU2_TR(0x42f604);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f60c:{NFSU2_TR(0x42f60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f614:{NFSU2_TR(0x42f614);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f61c:{NFSU2_TR(0x42f61c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f621ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B42f621:L42f621:{c.instructions+=1;NFSU2_TR(0x42f621);
{goto L42f677;}
}
B42f623:L42f623:{c.instructions+=3;NFSU2_TR(0x42f623);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42f628:{NFSU2_TR(0x42f628);
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
B42f62a:{NFSU2_TR(0x42f62a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f635;}}
}
B42f62c:L42f62c:{c.instructions+=3;NFSU2_TR(0x42f62c);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42f631:{NFSU2_TR(0x42f631);
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
B42f633:{NFSU2_TR(0x42f633);
if(r1(R+518)){{goto L42f64d;}}
}
B42f635:L42f635:{c.instructions+=3;NFSU2_TR(0x42f635);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f639:{NFSU2_TR(0x42f639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42f63b:{NFSU2_TR(0x42f63b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f63eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42f63e:L42f63e:{c.instructions+=3;NFSU2_TR(0x42f63e);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42f644:{NFSU2_TR(0x42f644);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f64b:{NFSU2_TR(0x42f64b);
{goto L42f654;}
}
B42f64d:L42f64d:{c.instructions+=1;NFSU2_TR(0x42f64d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f654:L42f654:{c.instructions+=6;NFSU2_TR(0x42f654);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f656:{NFSU2_TR(0x42f656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f660:{NFSU2_TR(0x42f660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42f66a:{NFSU2_TR(0x42f66a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42f66c:{NFSU2_TR(0x42f66c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f66e:{NFSU2_TR(0x42f66e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f673ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B42f673:L42f673:{c.instructions+=1;NFSU2_TR(0x42f673);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42f677:L42f677:{c.instructions+=3;NFSU2_TR(0x42f677);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f67d:{NFSU2_TR(0x42f67d);
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
B42f67f:{NFSU2_TR(0x42f67f);
if(r1(R+518)){{goto L42f6cd;}}
}
B42f681:L42f681:{c.instructions+=4;NFSU2_TR(0x42f681);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f684:{NFSU2_TR(0x42f684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f686:{NFSU2_TR(0x42f686);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f687:{NFSU2_TR(0x42f687);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f68aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42f68a:L42f68a:{c.instructions+=2;NFSU2_TR(0x42f68a);
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
B42f68d:{NFSU2_TR(0x42f68d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f6cd;}}
}
B42f68f:L42f68f:{c.instructions+=4;NFSU2_TR(0x42f68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f695:{NFSU2_TR(0x42f695);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42f697:{NFSU2_TR(0x42f697);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f69d:{NFSU2_TR(0x42f69d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42f6b8;}}
}
B42f69f:L42f69f:{c.instructions+=2;NFSU2_TR(0x42f69f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42f6a2:{NFSU2_TR(0x42f6a2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42f6bd;}}
}
B42f6a4:L42f6a4:{c.instructions+=4;NFSU2_TR(0x42f6a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f6a8:{NFSU2_TR(0x42f6a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6a9:{NFSU2_TR(0x42f6a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6aa:{NFSU2_TR(0x42f6aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f6afull));
TAIL_STATIC(0x420ed0u,420);
}
B42f6af:L42f6af:{c.instructions+=6;NFSU2_TR(0x42f6af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f6b0:{NFSU2_TR(0x42f6b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f6b1:{NFSU2_TR(0x42f6b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f6b2:{NFSU2_TR(0x42f6b2);
__builtin_memmove((R+16),(R+20),4);
}
B42f6b4:{NFSU2_TR(0x42f6b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42f6b5:{NFSU2_TR(0x42f6b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f6b8:L42f6b8:{c.instructions+=2;NFSU2_TR(0x42f6b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42f6bb:{NFSU2_TR(0x42f6bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42f6c2;}}
}
B42f6bd:L42f6bd:{c.instructions+=2;NFSU2_TR(0x42f6bd);
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
B42f6c0:{NFSU2_TR(0x42f6c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42f6cd;}}
}
B42f6c2:L42f6c2:{c.instructions+=4;NFSU2_TR(0x42f6c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f6c6:{NFSU2_TR(0x42f6c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6c7:{NFSU2_TR(0x42f6c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6c8:{NFSU2_TR(0x42f6c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f6cdull));
TAIL_STATIC(0x420ed0u,420);
}
B42f6cd:L42f6cd:{c.instructions+=6;NFSU2_TR(0x42f6cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f6ce:{NFSU2_TR(0x42f6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f6cf:{NFSU2_TR(0x42f6cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f6d0:{NFSU2_TR(0x42f6d0);
__builtin_memmove((R+16),(R+20),4);
}
B42f6d2:{NFSU2_TR(0x42f6d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42f6d3:{NFSU2_TR(0x42f6d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f6e0:L42f6e0:{c.instructions+=19;NFSU2_TR(0x42f6e0);
__builtin_memmove((R+8),gp(0x783670),4);
}
B42f6e6:{NFSU2_TR(0x42f6e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6e7:{NFSU2_TR(0x42f6e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6e8:{NFSU2_TR(0x42f6e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6e9:{NFSU2_TR(0x42f6e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42f6ed:{NFSU2_TR(0x42f6ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f6ef:{NFSU2_TR(0x42f6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42f6f2:{NFSU2_TR(0x42f6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f6f5:{NFSU2_TR(0x42f6f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6f6:{NFSU2_TR(0x42f6f6);
__builtin_memmove((R+28),(R+4),4);
}
B42f6f8:{NFSU2_TR(0x42f6f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42f6fc:{NFSU2_TR(0x42f6fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6fd:{NFSU2_TR(0x42f6fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6fe:{NFSU2_TR(0x42f6fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f6ff:{NFSU2_TR(0x42f6ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B42f702:{NFSU2_TR(0x42f702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f703:{NFSU2_TR(0x42f703);
w4(R+4,u32(0x827a00ull));
}
B42f708:{NFSU2_TR(0x42f708);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f70e:{NFSU2_TR(0x42f70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f713ull));
TAIL_STATIC(0x428ce0u,428);
}
B42f713:L42f713:{c.instructions+=2;NFSU2_TR(0x42f713);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f715:{NFSU2_TR(0x42f715);
if(r1(R+518)){{goto L42f75d;}}
}
B42f717:L42f717:{c.instructions+=3;NFSU2_TR(0x42f717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f71d:{NFSU2_TR(0x42f71d);
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
B42f71f:{NFSU2_TR(0x42f71f);
if(r1(R+518)){{goto L42f72c;}}
}
B42f721:L42f721:{c.instructions+=4;NFSU2_TR(0x42f721);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f724:{NFSU2_TR(0x42f724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42f726:{NFSU2_TR(0x42f726);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f727:{NFSU2_TR(0x42f727);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f72aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42f72a:L42f72a:{c.instructions+=1;NFSU2_TR(0x42f72a);
{goto L42f72e;}
}
B42f72c:L42f72c:{c.instructions+=1;NFSU2_TR(0x42f72c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42f72e:L42f72e:{c.instructions+=3;NFSU2_TR(0x42f72e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42f72f:{NFSU2_TR(0x42f72f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f732:{NFSU2_TR(0x42f732);
if(r1(R+518)){{goto L42f749;}}
}
B42f734:L42f734:{c.instructions+=2;NFSU2_TR(0x42f734);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42f735:{NFSU2_TR(0x42f735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f769;}}
}
B42f737:L42f737:{c.instructions+=6;NFSU2_TR(0x42f737);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f739:{NFSU2_TR(0x42f739);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f73e:{NFSU2_TR(0x42f73e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f73f:{NFSU2_TR(0x42f73f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f740:{NFSU2_TR(0x42f740);
__builtin_memmove((R+4),(R+12),4);
}
B42f742:{NFSU2_TR(0x42f742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f747ull));
TAIL_STATIC(0x42bf00u,42b);
}
B42f747:L42f747:{c.instructions+=1;NFSU2_TR(0x42f747);
{goto L42f769;}
}
B42f749:L42f749:{c.instructions+=7;NFSU2_TR(0x42f749);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f74b:{NFSU2_TR(0x42f74b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f74d:{NFSU2_TR(0x42f74d);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f752:{NFSU2_TR(0x42f752);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f753:{NFSU2_TR(0x42f753);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f754:{NFSU2_TR(0x42f754);
__builtin_memmove((R+4),(R+12),4);
}
B42f756:{NFSU2_TR(0x42f756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f75bull));
TAIL_STATIC(0x428fd0u,428);
}
B42f75b:L42f75b:{c.instructions+=1;NFSU2_TR(0x42f75b);
{goto L42f769;}
}
B42f75d:L42f75d:{c.instructions+=5;NFSU2_TR(0x42f75d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f75e:{NFSU2_TR(0x42f75e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42f761:{NFSU2_TR(0x42f761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f762:{NFSU2_TR(0x42f762);
__builtin_memmove((R+4),(R+12),4);
}
B42f764:{NFSU2_TR(0x42f764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f769ull));
TAIL_STATIC(0x420d40u,420);
}
B42f769:L42f769:{c.instructions+=12;NFSU2_TR(0x42f769);
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
B42f76b:{NFSU2_TR(0x42f76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f771:{NFSU2_TR(0x42f771);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f777:{NFSU2_TR(0x42f777);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f77d:{NFSU2_TR(0x42f77d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42f783:{NFSU2_TR(0x42f783);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f78a:{NFSU2_TR(0x42f78a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42f791:{NFSU2_TR(0x42f791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f792:{NFSU2_TR(0x42f792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f793:{NFSU2_TR(0x42f793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42f794:{NFSU2_TR(0x42f794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f795:{NFSU2_TR(0x42f795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f7a0:L42f7a0:{c.instructions+=7;NFSU2_TR(0x42f7a0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42f7a5:{NFSU2_TR(0x42f7a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f7a7:{NFSU2_TR(0x42f7a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f7a8:{NFSU2_TR(0x42f7a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f7a9:{NFSU2_TR(0x42f7a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42f7ad:{NFSU2_TR(0x42f7ad);
__builtin_memmove((R+24),(R+4),4);
}
B42f7af:{NFSU2_TR(0x42f7af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f7ba;}}
}
B42f7b1:L42f7b1:{c.instructions+=3;NFSU2_TR(0x42f7b1);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42f7b6:{NFSU2_TR(0x42f7b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f7b8:{NFSU2_TR(0x42f7b8);
if(r1(R+518)){{goto L42f7c6;}}
}
B42f7ba:L42f7ba:{c.instructions+=3;NFSU2_TR(0x42f7ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f7bb:{NFSU2_TR(0x42f7bb);
__builtin_memmove((R+4),(R+24),4);
}
B42f7bd:{NFSU2_TR(0x42f7bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f7c2ull));
TAIL_STATIC(0x42e4a0u,42e);
}
B42f7c2:L42f7c2:{c.instructions+=2;NFSU2_TR(0x42f7c2);
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
B42f7c4:{NFSU2_TR(0x42f7c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f7ee;}}
}
B42f7c6:L42f7c6:{c.instructions+=3;NFSU2_TR(0x42f7c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f7c7:{NFSU2_TR(0x42f7c7);
__builtin_memmove((R+4),(R+24),4);
}
B42f7c9:{NFSU2_TR(0x42f7c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f7ceull));
TAIL_STATIC(0x42e0b0u,42e);
}
B42f7ce:L42f7ce:{c.instructions+=2;NFSU2_TR(0x42f7ce);
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
B42f7d0:{NFSU2_TR(0x42f7d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f7ee;}}
}
B42f7d2:L42f7d2:{c.instructions+=3;NFSU2_TR(0x42f7d2);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B42f7d8:{NFSU2_TR(0x42f7d8);
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
B42f7da:{NFSU2_TR(0x42f7da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f7ee;}}
}
B42f7dc:L42f7dc:{c.instructions+=3;NFSU2_TR(0x42f7dc);
__builtin_memmove((R+4),gp(0x890108),4);
}
B42f7e2:{NFSU2_TR(0x42f7e2);
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
B42f7e4:{NFSU2_TR(0x42f7e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f7ee;}}
}
B42f7e6:L42f7e6:{c.instructions+=3;NFSU2_TR(0x42f7e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f7e7:{NFSU2_TR(0x42f7e7);
__builtin_memmove((R+4),(R+24),4);
}
B42f7e9:{NFSU2_TR(0x42f7e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f7eeull));
TAIL_STATIC(0x42e2c0u,42e);
}
B42f7ee:L42f7ee:{c.instructions+=3;NFSU2_TR(0x42f7ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f7ef:{NFSU2_TR(0x42f7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f7f0:{NFSU2_TR(0x42f7f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f800:L42f800:{c.instructions+=9;NFSU2_TR(0x42f800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f801:{NFSU2_TR(0x42f801);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B42f806:{NFSU2_TR(0x42f806);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f807:{NFSU2_TR(0x42f807);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f808:{NFSU2_TR(0x42f808);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f809:{NFSU2_TR(0x42f809);
__builtin_memmove((R+28),(R+4),4);
}
B42f80b:{NFSU2_TR(0x42f80b);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42f811:{NFSU2_TR(0x42f811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f812:{NFSU2_TR(0x42f812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f817ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B42f817:L42f817:{c.instructions+=9;NFSU2_TR(0x42f817);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42f81e:{NFSU2_TR(0x42f81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42f821:{NFSU2_TR(0x42f821);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f827:{NFSU2_TR(0x42f827);
__builtin_memmove((R+8),gp(0x783bd0),4);
}
B42f82d:{NFSU2_TR(0x42f82d);
{u32 ea_=u32(u32(7879628u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f833:{NFSU2_TR(0x42f833);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f837:{NFSU2_TR(0x42f837);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f839:{NFSU2_TR(0x42f839);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f83c:{NFSU2_TR(0x42f83c);
if(r1(R+514)){{goto L42f847;}}
}
B42f83e:L42f83e:{c.instructions+=2;NFSU2_TR(0x42f83e);
__builtin_memmove((R+0),gp(0x783bd4),4);
}
B42f843:{NFSU2_TR(0x42f843);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f847:L42f847:{c.instructions+=3;NFSU2_TR(0x42f847);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42f84d:{NFSU2_TR(0x42f84d);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f852:{NFSU2_TR(0x42f852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f857ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B42f857:L42f857:{c.instructions+=5;NFSU2_TR(0x42f857);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f85b:{NFSU2_TR(0x42f85b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42f85f:{NFSU2_TR(0x42f85f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f861:{NFSU2_TR(0x42f861);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f864:{NFSU2_TR(0x42f864);
if(r1(R+518)){{goto L42f87c;}}
}
B42f866:L42f866:{c.instructions+=4;NFSU2_TR(0x42f866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f867:{NFSU2_TR(0x42f867);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f868:{NFSU2_TR(0x42f868);
__builtin_memmove((R+4),(R+28),4);
}
B42f86a:{NFSU2_TR(0x42f86a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f86full));
TAIL_STATIC(0x42e790u,42e);
}
B42f86f:L42f86f:{c.instructions+=2;NFSU2_TR(0x42f86f);
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
B42f871:{NFSU2_TR(0x42f871);
if(r1(R+518)){{goto L42f87c;}}
}
B42f873:L42f873:{c.instructions+=6;NFSU2_TR(0x42f873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f874:{NFSU2_TR(0x42f874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f875:{NFSU2_TR(0x42f875);
w1(R+0,u8(0x1ull));
}
B42f877:{NFSU2_TR(0x42f877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f878:{NFSU2_TR(0x42f878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f879:{NFSU2_TR(0x42f879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f87c:L42f87c:{c.instructions+=3;NFSU2_TR(0x42f87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f87f:{NFSU2_TR(0x42f87f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42f883:{NFSU2_TR(0x42f883);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f898;}}
}
B42f885:L42f885:{c.instructions+=6;NFSU2_TR(0x42f885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f888:{NFSU2_TR(0x42f888);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f88c:{NFSU2_TR(0x42f88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f88f:{NFSU2_TR(0x42f88f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f892:{NFSU2_TR(0x42f892);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42f896:{NFSU2_TR(0x42f896);
{goto L42f8a3;}
}
B42f898:L42f898:{c.instructions+=3;NFSU2_TR(0x42f898);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f89c:{NFSU2_TR(0x42f89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42f89f:{NFSU2_TR(0x42f89f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f8a3:L42f8a3:{c.instructions+=7;NFSU2_TR(0x42f8a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f8a7:{NFSU2_TR(0x42f8a7);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42f8ad:{NFSU2_TR(0x42f8ad);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42f8af:{NFSU2_TR(0x42f8af);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f8b5:{NFSU2_TR(0x42f8b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f8b7:{NFSU2_TR(0x42f8b7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f8ba:{NFSU2_TR(0x42f8ba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42f903;}}
}
B42f8bc:L42f8bc:{c.instructions+=3;NFSU2_TR(0x42f8bc);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42f8c1:{NFSU2_TR(0x42f8c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f8c3:{NFSU2_TR(0x42f8c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f8ce;}}
}
B42f8c5:L42f8c5:{c.instructions+=3;NFSU2_TR(0x42f8c5);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42f8ca:{NFSU2_TR(0x42f8ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42f8cc:{NFSU2_TR(0x42f8cc);
if(r1(R+518)){{goto L42f8e3;}}
}
B42f8ce:L42f8ce:{c.instructions+=6;NFSU2_TR(0x42f8ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f8d2:{NFSU2_TR(0x42f8d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f8d3:{NFSU2_TR(0x42f8d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f8d4:{NFSU2_TR(0x42f8d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f8d5:{NFSU2_TR(0x42f8d5);
__builtin_memmove((R+4),(R+28),4);
}
B42f8d7:{NFSU2_TR(0x42f8d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f8dcull));
TAIL_STATIC(0x42e620u,42e);
}
B42f8dc:L42f8dc:{c.instructions+=5;NFSU2_TR(0x42f8dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f8dd:{NFSU2_TR(0x42f8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f8de:{NFSU2_TR(0x42f8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f8df:{NFSU2_TR(0x42f8df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f8e0:{NFSU2_TR(0x42f8e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f8e3:L42f8e3:{c.instructions+=2;NFSU2_TR(0x42f8e3);
__builtin_memmove((R+4),(R+28),4);
}
B42f8e5:{NFSU2_TR(0x42f8e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f8eaull));
TAIL_STATIC(0x4035a0u,403);
}
B42f8ea:L42f8ea:{c.instructions+=2;NFSU2_TR(0x42f8ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f8ec:{NFSU2_TR(0x42f8ec);
if(r1(R+518)){{goto L42f903;}}
}
B42f8ee:L42f8ee:{c.instructions+=6;NFSU2_TR(0x42f8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42f8f2:{NFSU2_TR(0x42f8f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f8f3:{NFSU2_TR(0x42f8f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f8f4:{NFSU2_TR(0x42f8f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f8f5:{NFSU2_TR(0x42f8f5);
__builtin_memmove((R+4),(R+28),4);
}
B42f8f7:{NFSU2_TR(0x42f8f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f8fcull));
TAIL_STATIC(0x42e9f0u,42e);
}
B42f8fc:L42f8fc:{c.instructions+=5;NFSU2_TR(0x42f8fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f8fd:{NFSU2_TR(0x42f8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f8fe:{NFSU2_TR(0x42f8fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f8ff:{NFSU2_TR(0x42f8ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f900:{NFSU2_TR(0x42f900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f903:L42f903:{c.instructions+=6;NFSU2_TR(0x42f903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42f904:{NFSU2_TR(0x42f904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42f905:{NFSU2_TR(0x42f905);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42f907:{NFSU2_TR(0x42f907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42f908:{NFSU2_TR(0x42f908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42f909:{NFSU2_TR(0x42f909);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42f910:L42f910:{c.instructions+=10;NFSU2_TR(0x42f910);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f911:{NFSU2_TR(0x42f911);
__builtin_memmove((R+20),(R+16),4);
}
B42f913:{NFSU2_TR(0x42f913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B42f916:{NFSU2_TR(0x42f916);
__builtin_memmove((R+0),gp(0x81cba8),4);
}
B42f91b:{NFSU2_TR(0x42f91b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f91c:{NFSU2_TR(0x42f91c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f91d:{NFSU2_TR(0x42f91d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42f91f:{NFSU2_TR(0x42f91f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42f921:{NFSU2_TR(0x42f921);
__builtin_memmove((R+24),(R+4),4);
}
B42f923:{NFSU2_TR(0x42f923);
if(r1(R+518)){{goto L42f943;}}
}
B42f925:L42f925:{c.instructions+=3;NFSU2_TR(0x42f925);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f928:{NFSU2_TR(0x42f928);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f92a:{NFSU2_TR(0x42f92a);
if(r1(R+518)){{goto L42f933;}}
}
B42f92c:L42f92c:{c.instructions+=1;NFSU2_TR(0x42f92c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f931ull));
TAIL_STATIC(0x4099b0u,409);
}
B42f931:L42f931:{c.instructions+=1;NFSU2_TR(0x42f931);
{goto L42f938;}
}
B42f933:L42f933:{c.instructions+=1;NFSU2_TR(0x42f933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f938ull));
TAIL_STATIC(0x409a30u,409);
}
B42f938:L42f938:{c.instructions+=2;NFSU2_TR(0x42f938);
__builtin_memmove(gp(0x81cba8),(R+28),4);
}
B42f93e:{NFSU2_TR(0x42f93e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f943ull));
TAIL_STATIC(0x4022c0u,402);
}
B42f943:L42f943:{c.instructions+=2;NFSU2_TR(0x42f943);
__builtin_memmove((R+4),(R+24),4);
}
B42f945:{NFSU2_TR(0x42f945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f94aull));
TAIL_STATIC(0x4111c0u,411);
}
B42f94a:L42f94a:{c.instructions+=2;NFSU2_TR(0x42f94a);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7a8),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42f950:{NFSU2_TR(0x42f950);
if(r1(R+518)){{goto L42fad9;}}
}
B42f956:L42f956:{c.instructions+=4;NFSU2_TR(0x42f956);
__builtin_memmove((R+0),gp(0x890080),4);
}
B42f95b:{NFSU2_TR(0x42f95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42f95e:{NFSU2_TR(0x42f95e);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42f961:{NFSU2_TR(0x42f961);
if(r1(R+518)){{goto L42fad9;}}
}
B42f967:L42f967:{c.instructions+=3;NFSU2_TR(0x42f967);
__builtin_memmove((R+8),gp(0x890118),4);
}
B42f96d:{NFSU2_TR(0x42f96d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B42f970:{NFSU2_TR(0x42f970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fad9;}}
}
B42f976:L42f976:{c.instructions+=2;NFSU2_TR(0x42f976);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42f97c:{NFSU2_TR(0x42f97c);
if(r1(R+518)){{goto L42fad9;}}
}
B42f982:L42f982:{c.instructions+=3;NFSU2_TR(0x42f982);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42f985:{NFSU2_TR(0x42f985);
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
B42f987:{NFSU2_TR(0x42f987);
if(r1(R+518)){{goto L42fad9;}}
}
B42f98d:L42f98d:{c.instructions+=9;NFSU2_TR(0x42f98d);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42f992:{NFSU2_TR(0x42f992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B42f995:{NFSU2_TR(0x42f995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f998:{NFSU2_TR(0x42f998);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42f99b:{NFSU2_TR(0x42f99b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42f9a1:{NFSU2_TR(0x42f9a1);
{u32 ea_=u32(u32(7879612u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f9a7:{NFSU2_TR(0x42f9a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f9a9:{NFSU2_TR(0x42f9a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42f9ac:{NFSU2_TR(0x42f9ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42f9c1;}}
}
B42f9ae:L42f9ae:{c.instructions+=2;NFSU2_TR(0x42f9ae);
w4(R+4,u32(0x81e810ull));
}
B42f9b3:{NFSU2_TR(0x42f9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f9b8ull));
TAIL_STATIC(0x412950u,412);
}
B42f9b8:L42f9b8:{c.instructions+=2;NFSU2_TR(0x42f9b8);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42f9be:{NFSU2_TR(0x42f9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f9c1:L42f9c1:{c.instructions+=7;NFSU2_TR(0x42f9c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42f9c3:{NFSU2_TR(0x42f9c3);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42f9c6:{NFSU2_TR(0x42f9c6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42f9c8:{NFSU2_TR(0x42f9c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42f9ce:{NFSU2_TR(0x42f9ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42f9d0:{NFSU2_TR(0x42f9d0);
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
B42f9d3:{NFSU2_TR(0x42f9d3);
if(r1(R+518)){{goto L42fad9;}}
}
B42f9d9:L42f9d9:{c.instructions+=3;NFSU2_TR(0x42f9d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42f9da:{NFSU2_TR(0x42f9da);
__builtin_memmove((R+4),(R+24),4);
}
B42f9dc:{NFSU2_TR(0x42f9dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f9e1ull));
TAIL_STATIC(0x4098d0u,409);
}
B42f9e1:L42f9e1:{c.instructions+=1;NFSU2_TR(0x42f9e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f9e6ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B42f9e6:L42f9e6:{c.instructions+=5;NFSU2_TR(0x42f9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42f9e9:{NFSU2_TR(0x42f9e9);
w4(R+4,u32(0x89e7a0ull));
}
B42f9ee:{NFSU2_TR(0x42f9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f9f1:{NFSU2_TR(0x42f9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42f9f4:{NFSU2_TR(0x42f9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42f9f9ull));
TAIL_STATIC(0x4018f0u,401);
}
B42f9f9:L42f9f9:{c.instructions+=11;NFSU2_TR(0x42f9f9);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B42f9fb:{NFSU2_TR(0x42f9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x497423f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42fa02:{NFSU2_TR(0x42fa02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x497423f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42fa09:{NFSU2_TR(0x42fa09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x497423f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42fa10:{NFSU2_TR(0x42fa10);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B42fa12:{NFSU2_TR(0x42fa12);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B42fa15:{NFSU2_TR(0x42fa15);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42fa16:{NFSU2_TR(0x42fa16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42fa19:{NFSU2_TR(0x42fa19);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B42fa1e:{NFSU2_TR(0x42fa1e);
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
B42fa20:{NFSU2_TR(0x42fa20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42fa4b;}}
}
B42fa22:L42fa22:{c.instructions+=7;NFSU2_TR(0x42fa22);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B42fa29:{NFSU2_TR(0x42fa29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fa2c:{NFSU2_TR(0x42fa2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42fa2f:{NFSU2_TR(0x42fa2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fa30:{NFSU2_TR(0x42fa30);
__builtin_memmove((R+4),(R+24),4);
}
B42fa32:{NFSU2_TR(0x42fa32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42fa35:{NFSU2_TR(0x42fa35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fa3aull));
TAIL_STATIC(0x418240u,418);
}
B42fa3a:L42fa3a:{c.instructions+=6;NFSU2_TR(0x42fa3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fa3d:{NFSU2_TR(0x42fa3d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42fa41:{NFSU2_TR(0x42fa41);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B42fa46:{NFSU2_TR(0x42fa46);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B42fa47:{NFSU2_TR(0x42fa47);
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
B42fa49:{NFSU2_TR(0x42fa49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fa22u);}goto L42fa22;}}
}
B42fa4b:L42fa4b:{c.instructions+=3;NFSU2_TR(0x42fa4b);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42fa51:{NFSU2_TR(0x42fa51);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fa53:{NFSU2_TR(0x42fa53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fa58ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B42fa58:L42fa58:{c.instructions+=2;NFSU2_TR(0x42fa58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fa5a:{NFSU2_TR(0x42fa5a);
if(r1(R+518)){{goto L42fa70;}}
}
B42fa5c:L42fa5c:{c.instructions+=3;NFSU2_TR(0x42fa5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fa5d:{NFSU2_TR(0x42fa5d);
__builtin_memmove((R+4),(R+24),4);
}
B42fa5f:{NFSU2_TR(0x42fa5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fa64ull));
TAIL_STATIC(0x418240u,418);
}
B42fa64:L42fa64:{c.instructions+=2;NFSU2_TR(0x42fa64);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42fa67:{NFSU2_TR(0x42fa67);
{goto L42fa70;}
}
B42fa70:L42fa70:{c.instructions+=7;NFSU2_TR(0x42fa70);
__builtin_memmove((R+0),gp(0x890080),4);
}
B42fa75:{NFSU2_TR(0x42fa75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fa78:{NFSU2_TR(0x42fa78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42fa7b:{NFSU2_TR(0x42fa7b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B42fa7c:{NFSU2_TR(0x42fa7c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B42fa7e:{NFSU2_TR(0x42fa7e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42fa80:{NFSU2_TR(0x42fa80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42fa84;}}
}
B42fa82:L42fa82:{c.instructions+=1;NFSU2_TR(0x42fa82);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42fa84:L42fa84:{c.instructions+=5;NFSU2_TR(0x42fa84);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42fa86:{NFSU2_TR(0x42fa86);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B42fa8a:{NFSU2_TR(0x42fa8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fa8b:{NFSU2_TR(0x42fa8b);
__builtin_memmove((R+4),(R+24),4);
}
B42fa8d:{NFSU2_TR(0x42fa8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fa92ull));
TAIL_STATIC(0x417bb0u,417);
}
B42fa92:L42fa92:{c.instructions+=2;NFSU2_TR(0x42fa92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42fa94:{NFSU2_TR(0x42fa94);
if(r1(R+518)){{goto L42faba;}}
}
B42fa96:L42fa96:{c.instructions+=5;NFSU2_TR(0x42fa96);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42fa99:{NFSU2_TR(0x42fa99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fa9a:{NFSU2_TR(0x42fa9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fa9b:{NFSU2_TR(0x42fa9b);
__builtin_memmove((R+4),(R+24),4);
}
B42fa9d:{NFSU2_TR(0x42fa9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42faa2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42f800u);}goto L42f800;}
}
B42faa2:L42faa2:{c.instructions+=2;NFSU2_TR(0x42faa2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42faa4:{NFSU2_TR(0x42faa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fab7;}}
}
B42faa6:L42faa6:{c.instructions+=3;NFSU2_TR(0x42faa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42faa9:{NFSU2_TR(0x42faa9);
__builtin_memmove((R+4),(R+28),4);
}
B42faab:{NFSU2_TR(0x42faab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fab0ull));
TAIL_STATIC(0x4020d0u,402);
}
B42fab0:L42fab0:{c.instructions+=1;NFSU2_TR(0x42fab0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x77cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42fab7:L42fab7:{c.instructions+=1;NFSU2_TR(0x42fab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B42faba:L42faba:{c.instructions+=3;NFSU2_TR(0x42faba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fabd:{NFSU2_TR(0x42fabd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B42fac0:{NFSU2_TR(0x42fac0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42fac7;}}
}
B42fac2:L42fac2:{c.instructions+=2;NFSU2_TR(0x42fac2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42fac5:{NFSU2_TR(0x42fac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fa70u);}goto L42fa70;}}
}
B42fac7:L42fac7:{c.instructions+=4;NFSU2_TR(0x42fac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42faca:{NFSU2_TR(0x42faca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42facb:{NFSU2_TR(0x42facb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42face:{NFSU2_TR(0x42face);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fad3ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B42fad3:L42fad3:{c.instructions+=3;NFSU2_TR(0x42fad3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42fad5:{NFSU2_TR(0x42fad5);
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
B42fad8:{NFSU2_TR(0x42fad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42fad9:L42fad9:{c.instructions+=5;NFSU2_TR(0x42fad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fada:{NFSU2_TR(0x42fada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fadb:{NFSU2_TR(0x42fadb);
__builtin_memmove((R+16),(R+20),4);
}
B42fadd:{NFSU2_TR(0x42fadd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42fade:{NFSU2_TR(0x42fade);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42faf0:L42faf0:{c.instructions+=11;NFSU2_TR(0x42faf0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42faf4:{NFSU2_TR(0x42faf4);
__builtin_memmove((R+0),(R+4),4);
}
B42faf6:{NFSU2_TR(0x42faf6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42faf8:{NFSU2_TR(0x42faf8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42fafa:{NFSU2_TR(0x42fafa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42fafe:{NFSU2_TR(0x42fafe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42fb01:{NFSU2_TR(0x42fb01);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42fb04:{NFSU2_TR(0x42fb04);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42fb08:{NFSU2_TR(0x42fb08);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42fb0b:{NFSU2_TR(0x42fb0b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42fb0e:{NFSU2_TR(0x42fb0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fb20:L42fb20:{c.instructions+=5;NFSU2_TR(0x42fb20);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B42fb26:{NFSU2_TR(0x42fb26);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42fb2a:{NFSU2_TR(0x42fb2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42fb2c:{NFSU2_TR(0x42fb2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fb2d:{NFSU2_TR(0x42fb2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fb30ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42fb30:L42fb30:{c.instructions+=1;NFSU2_TR(0x42fb30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fb40:L42fb40:{c.instructions+=2;NFSU2_TR(0x42fb40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42fb48:{NFSU2_TR(0x42fb48);
TAIL_STATIC(0x440820u,440);
}
B42fb50:L42fb50:{c.instructions+=3;NFSU2_TR(0x42fb50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fb54:{NFSU2_TR(0x42fb54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fb55:{NFSU2_TR(0x42fb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fb5aull));
TAIL_STATIC(0x440540u,440);
}
B42fb5a:L42fb5a:{c.instructions+=2;NFSU2_TR(0x42fb5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42fb5b:{NFSU2_TR(0x42fb5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fb60:L42fb60:{c.instructions+=14;NFSU2_TR(0x42fb60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B42fb63:{NFSU2_TR(0x42fb63);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fb67:{NFSU2_TR(0x42fb67);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B42fb6b:{NFSU2_TR(0x42fb6b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B42fb6f:{NFSU2_TR(0x42fb6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B42fb73:{NFSU2_TR(0x42fb73);
__builtin_memmove((R+8),(R+0),4);
}
B42fb75:{NFSU2_TR(0x42fb75);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B42fb78:{NFSU2_TR(0x42fb78);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B42fb7b:{NFSU2_TR(0x42fb7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x808ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B42fb82:{NFSU2_TR(0x42fb82);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B42fb84:{NFSU2_TR(0x42fb84);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42fb88:{NFSU2_TR(0x42fb88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42fb8a:{NFSU2_TR(0x42fb8a);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B42fb8d:{NFSU2_TR(0x42fb8d);
if(r1(R+518)){{goto L42fb9a;}}
}
B42fb8f:L42fb8f:{c.instructions+=1;NFSU2_TR(0x42fb8f);
}
B42fb90:L42fb90:{c.instructions+=4;NFSU2_TR(0x42fb90);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B42fb94:{NFSU2_TR(0x42fb94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42fb95:{NFSU2_TR(0x42fb95);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B42fb98:{NFSU2_TR(0x42fb98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fb90u);}goto L42fb90;}}
}
B42fb9a:L42fb9a:{c.instructions+=8;NFSU2_TR(0x42fb9a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42fb9b:{NFSU2_TR(0x42fb9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fb9c:{NFSU2_TR(0x42fb9c);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B42fb9f:{NFSU2_TR(0x42fb9f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B42fba2:{NFSU2_TR(0x42fba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B42fba5:{NFSU2_TR(0x42fba5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fba6:{NFSU2_TR(0x42fba6);
__builtin_memmove((R+24),(R+0),4);
}
B42fba8:{NFSU2_TR(0x42fba8);
if(r1(R+518)){{goto L42fbba;}}
}
B42fbaa:L42fbaa:{c.instructions+=1;NFSU2_TR(0x42fbaa);
__builtin_memmove((R+12),(R+12),4);
}
B42fbb0:L42fbb0:{c.instructions+=4;NFSU2_TR(0x42fbb0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B42fbb4:{NFSU2_TR(0x42fbb4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42fbb5:{NFSU2_TR(0x42fbb5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B42fbb8:{NFSU2_TR(0x42fbb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fbb0u);}goto L42fbb0;}}
}
B42fbba:L42fbba:{c.instructions+=2;NFSU2_TR(0x42fbba);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42fbbc:{NFSU2_TR(0x42fbbc);
if(r1(R+518)){{goto L42fbda;}}
}
B42fbbe:L42fbbe:{c.instructions+=3;NFSU2_TR(0x42fbbe);
__builtin_memmove((R+24),(R+0),4);
}
B42fbc0:{NFSU2_TR(0x42fbc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fbc4:{NFSU2_TR(0x42fbc4);
__builtin_memmove((R+4),(R+8),4);
}
B42fbc6:L42fbc6:{c.instructions+=6;NFSU2_TR(0x42fbc6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B42fbc8:{NFSU2_TR(0x42fbc8);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B42fbca:{NFSU2_TR(0x42fbca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42fbcb:{NFSU2_TR(0x42fbcb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B42fbcc:{NFSU2_TR(0x42fbcc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B42fbcd:{NFSU2_TR(0x42fbcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fbc6u);}goto L42fbc6;}}
}
B42fbcf:L42fbcf:{c.instructions+=5;NFSU2_TR(0x42fbcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fbd0:{NFSU2_TR(0x42fbd0);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B42fbd3:{NFSU2_TR(0x42fbd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42fbd4:{NFSU2_TR(0x42fbd4);
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
B42fbd7:{NFSU2_TR(0x42fbd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fbda:L42fbda:{c.instructions+=6;NFSU2_TR(0x42fbda);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fbde:{NFSU2_TR(0x42fbde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fbdf:{NFSU2_TR(0x42fbdf);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B42fbe2:{NFSU2_TR(0x42fbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42fbe3:{NFSU2_TR(0x42fbe3);
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
B42fbe6:{NFSU2_TR(0x42fbe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fbf0:L42fbf0:{c.instructions+=10;NFSU2_TR(0x42fbf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fbf1:{NFSU2_TR(0x42fbf1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42fbf5:{NFSU2_TR(0x42fbf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fbf6:{NFSU2_TR(0x42fbf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fbf7:{NFSU2_TR(0x42fbf7);
__builtin_memmove((R+28),(R+4),4);
}
B42fbf9:{NFSU2_TR(0x42fbf9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B42fbfd:{NFSU2_TR(0x42fbfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42fbff:{NFSU2_TR(0x42fbff);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B42fc01:{NFSU2_TR(0x42fc01);
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
B42fc03:{NFSU2_TR(0x42fc03);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L42fc2c;}}
}
B42fc05:L42fc05:{c.instructions+=3;NFSU2_TR(0x42fc05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fc06:{NFSU2_TR(0x42fc06);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42fc09:{NFSU2_TR(0x42fc09);
__builtin_memmove((R+16),(R+16),4);
}
B42fc10:L42fc10:{c.instructions+=3;NFSU2_TR(0x42fc10);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fc14:{NFSU2_TR(0x42fc14);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B42fc16:{NFSU2_TR(0x42fc16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fc21;}}
}
B42fc18:L42fc18:{c.instructions+=4;NFSU2_TR(0x42fc18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fc19:{NFSU2_TR(0x42fc19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fc1a:{NFSU2_TR(0x42fc1a);
__builtin_memmove((R+4),(R+28),4);
}
B42fc1c:{NFSU2_TR(0x42fc1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fc21ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fb60u);}goto L42fb60;}
}
B42fc21:L42fc21:{c.instructions+=5;NFSU2_TR(0x42fc21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42fc23:{NFSU2_TR(0x42fc23);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B42fc24:{NFSU2_TR(0x42fc24);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B42fc27:{NFSU2_TR(0x42fc27);
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
B42fc29:{NFSU2_TR(0x42fc29);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fc10u);}goto L42fc10;}}
}
B42fc2b:L42fc2b:{c.instructions+=1;NFSU2_TR(0x42fc2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42fc2c:L42fc2c:{c.instructions+=4;NFSU2_TR(0x42fc2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fc2d:{NFSU2_TR(0x42fc2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fc2e:{NFSU2_TR(0x42fc2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42fc2f:{NFSU2_TR(0x42fc2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fc40:L42fc40:{c.instructions+=3;NFSU2_TR(0x42fc40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42fc42:{NFSU2_TR(0x42fc42);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42fc47:{NFSU2_TR(0x42fc47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42fc56;}}
}
B42fc49:L42fc49:{c.instructions+=2;NFSU2_TR(0x42fc49);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1053ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42fc4e:{NFSU2_TR(0x42fc4e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42fc56;}}
}
B42fc50:L42fc50:{c.instructions+=2;NFSU2_TR(0x42fc50);
w4(R+0,u32(0x1ull));
}
B42fc55:{NFSU2_TR(0x42fc55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fc56:L42fc56:{c.instructions+=2;NFSU2_TR(0x42fc56);
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
B42fc58:{NFSU2_TR(0x42fc58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fc60:L42fc60:{c.instructions+=3;NFSU2_TR(0x42fc60);
__builtin_memmove((R+0),gp(0x865020),4);
}
B42fc65:{NFSU2_TR(0x42fc65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fc67:{NFSU2_TR(0x42fc67);
if(r1(R+518)){{goto L42fc73;}}
}
B42fc69:L42fc69:{c.instructions+=3;NFSU2_TR(0x42fc69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fc6b:{NFSU2_TR(0x42fc6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fc6c:{NFSU2_TR(0x42fc6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fc71ull));
TAIL_STATIC(0x5d8620u,5d8);
}
B42fc71:L42fc71:{c.instructions+=1;NFSU2_TR(0x42fc71);
{goto L42fcba;}
}
B42fc73:L42fc73:{c.instructions+=4;NFSU2_TR(0x42fc73);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B42fc78:{NFSU2_TR(0x42fc78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fc7a:{NFSU2_TR(0x42fc7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fc7e:{NFSU2_TR(0x42fc7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fc9a;}}
}
B42fc80:L42fc80:{c.instructions+=3;NFSU2_TR(0x42fc80);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fc82:{NFSU2_TR(0x42fc82);
w4(R+0,u32(0x785d18ull));
}
B42fc87:{NFSU2_TR(0x42fc87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fcb2;}}
}
B42fc89:L42fc89:{c.instructions+=3;NFSU2_TR(0x42fc89);
__builtin_memmove((R+4),gp(0x89e7b4),4);
}
B42fc8f:{NFSU2_TR(0x42fc8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fc91:{NFSU2_TR(0x42fc91);
if(r1(R+518)){{goto L42fcb2;}}
}
B42fc93:L42fc93:{c.instructions+=2;NFSU2_TR(0x42fc93);
w4(R+0,u32(0x785d04ull));
}
B42fc98:{NFSU2_TR(0x42fc98);
{goto L42fcb2;}
}
B42fc9a:L42fc9a:{c.instructions+=3;NFSU2_TR(0x42fc9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fc9c:{NFSU2_TR(0x42fc9c);
w4(R+0,u32(0x785cf0ull));
}
B42fca1:{NFSU2_TR(0x42fca1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fcb2;}}
}
B42fca3:L42fca3:{c.instructions+=3;NFSU2_TR(0x42fca3);
__builtin_memmove((R+4),gp(0x89e7b4),4);
}
B42fca9:{NFSU2_TR(0x42fca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fcab:{NFSU2_TR(0x42fcab);
if(r1(R+518)){{goto L42fcb2;}}
}
B42fcad:L42fcad:{c.instructions+=1;NFSU2_TR(0x42fcad);
w4(R+0,u32(0x785cdcull));
}
B42fcb2:L42fcb2:{c.instructions+=3;NFSU2_TR(0x42fcb2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fcb4:{NFSU2_TR(0x42fcb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fcb5:{NFSU2_TR(0x42fcb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fcbaull));
TAIL_STATIC(0x5d8660u,5d8);
}
B42fcba:L42fcba:{c.instructions+=3;NFSU2_TR(0x42fcba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42fcbd:{NFSU2_TR(0x42fcbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42fcbf:{NFSU2_TR(0x42fcbf);
if(r1(R+518)){{goto L42fce2;}}
}
B42fcc1:L42fcc1:{c.instructions+=11;NFSU2_TR(0x42fcc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42fcc4:{NFSU2_TR(0x42fcc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fcc8:{NFSU2_TR(0x42fcc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42fcca:{NFSU2_TR(0x42fcca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42fccd:{NFSU2_TR(0x42fccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42fcd0:{NFSU2_TR(0x42fcd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B42fcd4:{NFSU2_TR(0x42fcd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fcd8:{NFSU2_TR(0x42fcd8);
u8 U[4];
w1(R+512,carry<u16>(r2(R+0),u16(0x4000ull)));
w1(R+523,scarry<u16>(r2(R+0),u16(0x4000ull)));
w2(R+0,u16(u32(r2(R+0))+u32(u16(0x4000ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B42fcdc:{NFSU2_TR(0x42fcdc);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B42fcdf:{NFSU2_TR(0x42fcdf);
w1(R+0,u8(0x1ull));
}
B42fce1:{NFSU2_TR(0x42fce1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fce2:L42fce2:{c.instructions+=2;NFSU2_TR(0x42fce2);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42fce4:{NFSU2_TR(0x42fce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fcf0:L42fcf0:{c.instructions+=9;NFSU2_TR(0x42fcf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fcf1:{NFSU2_TR(0x42fcf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fcf2:{NFSU2_TR(0x42fcf2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42fcf6:{NFSU2_TR(0x42fcf6);
__builtin_memmove((R+24),(R+4),4);
}
B42fcf8:{NFSU2_TR(0x42fcf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42fcfb:{NFSU2_TR(0x42fcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fcfe:{NFSU2_TR(0x42fcfe);
w4(R+8,u32(r1(R+4)));
}
B42fd01:{NFSU2_TR(0x42fd01);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B42fd03:{NFSU2_TR(0x42fd03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd0c;}}
}
B42fd05:L42fd05:{c.instructions+=4;NFSU2_TR(0x42fd05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fd06:{NFSU2_TR(0x42fd06);
w1(R+0,u8(0x1ull));
}
B42fd08:{NFSU2_TR(0x42fd08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fd09:{NFSU2_TR(0x42fd09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fd0c:L42fd0c:{c.instructions+=2;NFSU2_TR(0x42fd0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fd0f:{NFSU2_TR(0x42fd0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd37;}}
}
B42fd11:L42fd11:{c.instructions+=2;NFSU2_TR(0x42fd11);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B42fd14:{NFSU2_TR(0x42fd14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd37;}}
}
B42fd16:L42fd16:{c.instructions+=2;NFSU2_TR(0x42fd16);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x2ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B42fd19:{NFSU2_TR(0x42fd19);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42fd37;}}
}
B42fd1b:L42fd1b:{c.instructions+=4;NFSU2_TR(0x42fd1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fd1c:{NFSU2_TR(0x42fd1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B42fd1e:{NFSU2_TR(0x42fd1e);
u8 U[4];
w4(U+0,u32(0x785d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fd23:{NFSU2_TR(0x42fd23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fd28ull));
TAIL_STATIC(0x43db50u,43d);
}
B42fd28:L42fd28:{c.instructions+=4;NFSU2_TR(0x42fd28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fd2b:{NFSU2_TR(0x42fd2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fd2d:{NFSU2_TR(0x42fd2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42fd2e:{NFSU2_TR(0x42fd2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd37;}}
}
B42fd30:L42fd30:{c.instructions+=3;NFSU2_TR(0x42fd30);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42fd33:{NFSU2_TR(0x42fd33);
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
B42fd35:{NFSU2_TR(0x42fd35);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fd05u);}goto L42fd05;}}
}
B42fd37:L42fd37:{c.instructions+=4;NFSU2_TR(0x42fd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fd3a:{NFSU2_TR(0x42fd3a);
w4(R+0,u32(0x1ull));
}
B42fd3f:{NFSU2_TR(0x42fd3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fd41:{NFSU2_TR(0x42fd41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd52;}}
}
B42fd43:L42fd43:{c.instructions+=2;NFSU2_TR(0x42fd43);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B42fd47:{NFSU2_TR(0x42fd47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd52;}}
}
B42fd49:L42fd49:{c.instructions+=2;NFSU2_TR(0x42fd49);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B42fd50:{NFSU2_TR(0x42fd50);
if(r1(R+518)){{goto L42fd54;}}
}
B42fd52:L42fd52:{c.instructions+=1;NFSU2_TR(0x42fd52);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42fd54:L42fd54:{c.instructions+=3;NFSU2_TR(0x42fd54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fd55:{NFSU2_TR(0x42fd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fd56:{NFSU2_TR(0x42fd56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fd60:L42fd60:{c.instructions+=5;NFSU2_TR(0x42fd60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fd64:{NFSU2_TR(0x42fd64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fd65:{NFSU2_TR(0x42fd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B42fd67:{NFSU2_TR(0x42fd67);
u8 U[4];
w4(U+0,u32(0x785d60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fd6c:{NFSU2_TR(0x42fd6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fd71ull));
TAIL_STATIC(0x43db50u,43d);
}
B42fd71:L42fd71:{c.instructions+=4;NFSU2_TR(0x42fd71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fd74:{NFSU2_TR(0x42fd74);
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
B42fd76:{NFSU2_TR(0x42fd76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fd77:{NFSU2_TR(0x42fd77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd9b;}}
}
B42fd79:L42fd79:{c.instructions+=5;NFSU2_TR(0x42fd79);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B42fd7f:{NFSU2_TR(0x42fd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fd82:{NFSU2_TR(0x42fd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42fd85:{NFSU2_TR(0x42fd85);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B42fd89:{NFSU2_TR(0x42fd89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fd9b;}}
}
B42fd8b:L42fd8b:{c.instructions+=4;NFSU2_TR(0x42fd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fd8e:{NFSU2_TR(0x42fd8e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x581ull))));
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
B42fd95:{NFSU2_TR(0x42fd95);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B42fd98:{NFSU2_TR(0x42fd98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fd9b:L42fd9b:{c.instructions+=2;NFSU2_TR(0x42fd9b);
w1(R+0,u8(0x1ull));
}
B42fd9d:{NFSU2_TR(0x42fd9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fda0:L42fda0:{c.instructions+=6;NFSU2_TR(0x42fda0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fda1:{NFSU2_TR(0x42fda1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42fda5:{NFSU2_TR(0x42fda5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fda6:{NFSU2_TR(0x42fda6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B42fda8:{NFSU2_TR(0x42fda8);
u8 U[4];
w4(U+0,u32(0x785d6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fdad:{NFSU2_TR(0x42fdad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fdb2ull));
TAIL_STATIC(0x43db50u,43d);
}
B42fdb2:L42fdb2:{c.instructions+=3;NFSU2_TR(0x42fdb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fdb5:{NFSU2_TR(0x42fdb5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fdb7:{NFSU2_TR(0x42fdb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fdbf;}}
}
B42fdb9:L42fdb9:{c.instructions+=2;NFSU2_TR(0x42fdb9);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B42fdbd:{NFSU2_TR(0x42fdbd);
if(r1(R+518)){{goto L42fdf2;}}
}
B42fdbf:L42fdbf:{c.instructions+=3;NFSU2_TR(0x42fdbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B42fdc1:{NFSU2_TR(0x42fdc1);
u8 U[4];
w4(U+0,u32(0x785d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fdc6:{NFSU2_TR(0x42fdc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fdcbull));
TAIL_STATIC(0x43db50u,43d);
}
B42fdcb:L42fdcb:{c.instructions+=3;NFSU2_TR(0x42fdcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fdce:{NFSU2_TR(0x42fdce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fdd0:{NFSU2_TR(0x42fdd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fdd9;}}
}
B42fdd2:L42fdd2:{c.instructions+=3;NFSU2_TR(0x42fdd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42fdd5:{NFSU2_TR(0x42fdd5);
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
B42fdd7:{NFSU2_TR(0x42fdd7);
if(r1(R+518)){{goto L42fdf2;}}
}
B42fdd9:L42fdd9:{c.instructions+=3;NFSU2_TR(0x42fdd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B42fddb:{NFSU2_TR(0x42fddb);
u8 U[4];
w4(U+0,u32(0x785d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fde0:{NFSU2_TR(0x42fde0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fde5ull));
TAIL_STATIC(0x43db50u,43d);
}
B42fde5:L42fde5:{c.instructions+=3;NFSU2_TR(0x42fde5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fde8:{NFSU2_TR(0x42fde8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fdea:{NFSU2_TR(0x42fdea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fdf9;}}
}
B42fdec:L42fdec:{c.instructions+=2;NFSU2_TR(0x42fdec);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B42fdf0:{NFSU2_TR(0x42fdf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fdf9;}}
}
B42fdf2:L42fdf2:{c.instructions+=4;NFSU2_TR(0x42fdf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fdf3:{NFSU2_TR(0x42fdf3);
w1(R+0,u8(0x1ull));
}
B42fdf5:{NFSU2_TR(0x42fdf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fdf6:{NFSU2_TR(0x42fdf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fdf9:L42fdf9:{c.instructions+=4;NFSU2_TR(0x42fdf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fdfa:{NFSU2_TR(0x42fdfa);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42fdfc:{NFSU2_TR(0x42fdfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fdfd:{NFSU2_TR(0x42fdfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fe00:L42fe00:{c.instructions+=9;NFSU2_TR(0x42fe00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fe01:{NFSU2_TR(0x42fe01);
__builtin_memmove((R+20),(R+16),4);
}
B42fe03:{NFSU2_TR(0x42fe03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fe04:{NFSU2_TR(0x42fe04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42fe07:{NFSU2_TR(0x42fe07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fe08:{NFSU2_TR(0x42fe08);
__builtin_memmove((R+28),(R+4),4);
}
B42fe0a:{NFSU2_TR(0x42fe0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42fe0d:{NFSU2_TR(0x42fe0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42fe10:{NFSU2_TR(0x42fe10);
if(r1(R+518)){{goto L42fe8c;}}
}
B42fe12:L42fe12:{c.instructions+=5;NFSU2_TR(0x42fe12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fe15:{NFSU2_TR(0x42fe15);
w4(R+4,u32(r1(R+4)));
}
B42fe18:{NFSU2_TR(0x42fe18);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B42fe1a:{NFSU2_TR(0x42fe1a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fe1c:{NFSU2_TR(0x42fe1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fe8c;}}
}
B42fe1e:L42fe1e:{c.instructions+=4;NFSU2_TR(0x42fe1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B42fe22:{NFSU2_TR(0x42fe22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42fe24:{NFSU2_TR(0x42fe24);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42fe26:{NFSU2_TR(0x42fe26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42fe8c;}}
}
B42fe28:L42fe28:{c.instructions+=3;NFSU2_TR(0x42fe28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B42fe2c:{NFSU2_TR(0x42fe2c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42fe2e:{NFSU2_TR(0x42fe2e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42fe8c;}}
}
B42fe30:L42fe30:{c.instructions+=3;NFSU2_TR(0x42fe30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fe31:{NFSU2_TR(0x42fe31);
__builtin_memmove((R+4),(R+28),4);
}
B42fe33:{NFSU2_TR(0x42fe33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fe38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fcf0u);}goto L42fcf0;}
}
B42fe38:L42fe38:{c.instructions+=2;NFSU2_TR(0x42fe38);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42fe3a:{NFSU2_TR(0x42fe3a);
if(r1(R+518)){{goto L42fe8c;}}
}
B42fe3c:L42fe3c:{c.instructions+=3;NFSU2_TR(0x42fe3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fe3d:{NFSU2_TR(0x42fe3d);
__builtin_memmove((R+4),(R+28),4);
}
B42fe3f:{NFSU2_TR(0x42fe3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fe44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42fd60u);}goto L42fd60;}
}
B42fe44:L42fe44:{c.instructions+=2;NFSU2_TR(0x42fe44);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42fe46:{NFSU2_TR(0x42fe46);
if(r1(R+518)){{goto L42fe8c;}}
}
B42fe48:L42fe48:{c.instructions+=3;NFSU2_TR(0x42fe48);
__builtin_memmove((R+0),gp(0x863470),4);
}
B42fe4d:{NFSU2_TR(0x42fe4d);
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
B42fe4f:{NFSU2_TR(0x42fe4f);
if(r1(R+518)){{goto L42fe6a;}}
}
B42fe51:L42fe51:{c.instructions+=2;NFSU2_TR(0x42fe51);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
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
B42fe55:{NFSU2_TR(0x42fe55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fe6a;}}
}
B42fe57:L42fe57:{c.instructions+=3;NFSU2_TR(0x42fe57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B42fe59:{NFSU2_TR(0x42fe59);
u8 U[4];
w4(U+0,u32(0x785d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fe5e:{NFSU2_TR(0x42fe5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fe63ull));
TAIL_STATIC(0x43db50u,43d);
}
B42fe63:L42fe63:{c.instructions+=3;NFSU2_TR(0x42fe63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fe66:{NFSU2_TR(0x42fe66);
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
B42fe68:{NFSU2_TR(0x42fe68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42fe72;}}
}
B42fe6a:L42fe6a:{c.instructions+=5;NFSU2_TR(0x42fe6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fe6b:{NFSU2_TR(0x42fe6b);
w1(R+0,u8(0x1ull));
}
B42fe6d:{NFSU2_TR(0x42fe6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fe6e:{NFSU2_TR(0x42fe6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42fe6f:{NFSU2_TR(0x42fe6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fe72:L42fe72:{c.instructions+=3;NFSU2_TR(0x42fe72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B42fe74:{NFSU2_TR(0x42fe74);
u8 U[4];
w4(U+0,u32(0x785d6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fe79:{NFSU2_TR(0x42fe79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fe7eull));
TAIL_STATIC(0x43db50u,43d);
}
B42fe7e:L42fe7e:{c.instructions+=7;NFSU2_TR(0x42fe7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fe81:{NFSU2_TR(0x42fe81);
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
B42fe83:{NFSU2_TR(0x42fe83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fe84:{NFSU2_TR(0x42fe84);
__builtin_memmove((R+0),(R+518),1);
}
B42fe87:{NFSU2_TR(0x42fe87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fe88:{NFSU2_TR(0x42fe88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42fe89:{NFSU2_TR(0x42fe89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fe8c:L42fe8c:{c.instructions+=5;NFSU2_TR(0x42fe8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42fe8d:{NFSU2_TR(0x42fe8d);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42fe8f:{NFSU2_TR(0x42fe8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fe90:{NFSU2_TR(0x42fe90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42fe91:{NFSU2_TR(0x42fe91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fea0:L42fea0:{c.instructions+=14;NFSU2_TR(0x42fea0);
__builtin_memmove((R+0),(R+4),4);
}
B42fea2:{NFSU2_TR(0x42fea2);
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
B42fea4:{NFSU2_TR(0x42fea4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B42fea6:{NFSU2_TR(0x42fea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42fea9:{NFSU2_TR(0x42fea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42feac:{NFSU2_TR(0x42feac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42feaf:{NFSU2_TR(0x42feaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42feb2:{NFSU2_TR(0x42feb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42feb5:{NFSU2_TR(0x42feb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42feb8:{NFSU2_TR(0x42feb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42febb:{NFSU2_TR(0x42febb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42febe:{NFSU2_TR(0x42febe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42fec1:{NFSU2_TR(0x42fec1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42fec4:{NFSU2_TR(0x42fec4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42fed0:L42fed0:{c.instructions+=5;NFSU2_TR(0x42fed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42fed4:{NFSU2_TR(0x42fed4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fed5:{NFSU2_TR(0x42fed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B42fed7:{NFSU2_TR(0x42fed7);
u8 U[4];
w4(U+0,u32(0x785d84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fedc:{NFSU2_TR(0x42fedc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fee1ull));
TAIL_STATIC(0x43db50u,43d);
}
B42fee1:L42fee1:{c.instructions+=4;NFSU2_TR(0x42fee1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42fee4:{NFSU2_TR(0x42fee4);
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
B42fee6:{NFSU2_TR(0x42fee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42fee7:{NFSU2_TR(0x42fee7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ff18;}}
}
B42fee9:L42fee9:{c.instructions+=5;NFSU2_TR(0x42fee9);
__builtin_memmove((R+0),gp(0x851044),4);
}
B42feee:{NFSU2_TR(0x42feee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42fef1:{NFSU2_TR(0x42fef1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42fef2:{NFSU2_TR(0x42fef2);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42fef8:{NFSU2_TR(0x42fef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42fefdull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B42fefd:L42fefd:{c.instructions+=6;NFSU2_TR(0x42fefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ff00:{NFSU2_TR(0x42ff00);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ff06:{NFSU2_TR(0x42ff06);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ff0c:{NFSU2_TR(0x42ff0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ff0e:{NFSU2_TR(0x42ff0e);
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
B42ff11:{NFSU2_TR(0x42ff11);
if(r1(R+518)){{goto L42ff18;}}
}
B42ff13:L42ff13:{c.instructions+=2;NFSU2_TR(0x42ff13);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ff15:{NFSU2_TR(0x42ff15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ff18:L42ff18:{c.instructions+=2;NFSU2_TR(0x42ff18);
w1(R+0,u8(0x1ull));
}
B42ff1a:{NFSU2_TR(0x42ff1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ff20:L42ff20:{c.instructions+=1;NFSU2_TR(0x42ff20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ff25ull));
TAIL_STATIC(0x4306f0u,430);
}
B42ff25:L42ff25:{c.instructions+=2;NFSU2_TR(0x42ff25);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42ff29:{NFSU2_TR(0x42ff29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42ff30;}}
}
B42ff2b:L42ff2b:{c.instructions+=2;NFSU2_TR(0x42ff2b);
w1(R+0,u8(0x1ull));
}
B42ff2d:{NFSU2_TR(0x42ff2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ff30:L42ff30:{c.instructions+=5;NFSU2_TR(0x42ff30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ff34:{NFSU2_TR(0x42ff34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ff35:{NFSU2_TR(0x42ff35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B42ff37:{NFSU2_TR(0x42ff37);
u8 U[4];
w4(U+0,u32(0x785d90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ff3c:{NFSU2_TR(0x42ff3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ff41ull));
TAIL_STATIC(0x43db50u,43d);
}
B42ff41:L42ff41:{c.instructions+=5;NFSU2_TR(0x42ff41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42ff44:{NFSU2_TR(0x42ff44);
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
B42ff46:{NFSU2_TR(0x42ff46);
__builtin_memmove((R+0),(R+518),1);
}
B42ff49:{NFSU2_TR(0x42ff49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ff4a:{NFSU2_TR(0x42ff4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ff50:L42ff50:{c.instructions+=3;NFSU2_TR(0x42ff50);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ff53:{NFSU2_TR(0x42ff53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ff55:{NFSU2_TR(0x42ff55);
if(r1(R+518)){{goto L42ff75;}}
}
B42ff57:L42ff57:{c.instructions+=4;NFSU2_TR(0x42ff57);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ff5b:{NFSU2_TR(0x42ff5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ff5e:{NFSU2_TR(0x42ff5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ff60:{NFSU2_TR(0x42ff60);
if(r1(R+518)){{goto L42ffc5;}}
}
B42ff62:L42ff62:{c.instructions+=3;NFSU2_TR(0x42ff62);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42ff65:{NFSU2_TR(0x42ff65);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ff67:{NFSU2_TR(0x42ff67);
if(r1(R+518)){{goto L42ff71;}}
}
B42ff69:L42ff69:{c.instructions+=2;NFSU2_TR(0x42ff69);
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
B42ff6b:{NFSU2_TR(0x42ff6b);
if(r1(R+519)){{goto L42ffc0;}}
}
B42ff6d:L42ff6d:{c.instructions+=2;NFSU2_TR(0x42ff6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ff6f:{NFSU2_TR(0x42ff6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ffc5;}}
}
B42ff71:L42ff71:{c.instructions+=2;NFSU2_TR(0x42ff71);
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
B42ff73:{NFSU2_TR(0x42ff73);
{goto L42ffbe;}
}
B42ff75:L42ff75:{c.instructions+=4;NFSU2_TR(0x42ff75);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ff79:{NFSU2_TR(0x42ff79);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B42ff7c:{NFSU2_TR(0x42ff7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ff7f:{NFSU2_TR(0x42ff7f);
if(r1(R+518)){{goto L42ffc5;}}
}
B42ff81:L42ff81:{c.instructions+=2;NFSU2_TR(0x42ff81);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ff88:{NFSU2_TR(0x42ff88);
if(r1(R+518)){{goto L42ff9d;}}
}
B42ff8a:L42ff8a:{c.instructions+=3;NFSU2_TR(0x42ff8a);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B42ff8f:{NFSU2_TR(0x42ff8f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42ff94:{NFSU2_TR(0x42ff94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42ff9d;}}
}
B42ff96:L42ff96:{c.instructions+=2;NFSU2_TR(0x42ff96);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ff9b:{NFSU2_TR(0x42ff9b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42ffc5;}}
}
B42ff9d:L42ff9d:{c.instructions+=3;NFSU2_TR(0x42ff9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ffa0:{NFSU2_TR(0x42ffa0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ffa2:{NFSU2_TR(0x42ffa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ffad;}}
}
B42ffa4:L42ffa4:{c.instructions+=5;NFSU2_TR(0x42ffa4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ffa5:{NFSU2_TR(0x42ffa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B42ffa8:{NFSU2_TR(0x42ffa8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ffaa:{NFSU2_TR(0x42ffaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ffab:{NFSU2_TR(0x42ffab);
if(r1(R+518)){{goto L42ffb1;}}
}
B42ffad:L42ffad:{c.instructions+=2;NFSU2_TR(0x42ffad);
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
B42ffaf:{NFSU2_TR(0x42ffaf);
if(r1(R+519)){{goto L42ffc0;}}
}
B42ffb1:L42ffb1:{c.instructions+=2;NFSU2_TR(0x42ffb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ffb3:{NFSU2_TR(0x42ffb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ffc5;}}
}
B42ffb5:L42ffb5:{c.instructions+=3;NFSU2_TR(0x42ffb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ffb8:{NFSU2_TR(0x42ffb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ffba:{NFSU2_TR(0x42ffba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ffc5;}}
}
B42ffbc:L42ffbc:{c.instructions+=1;NFSU2_TR(0x42ffbc);
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
B42ffbe:L42ffbe:{c.instructions+=1;NFSU2_TR(0x42ffbe);
if(r1(R+519)){{goto L42ffc5;}}
}
B42ffc0:L42ffc0:{c.instructions+=2;NFSU2_TR(0x42ffc0);
w1(R+0,u8(0x1ull));
}
B42ffc2:{NFSU2_TR(0x42ffc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ffc5:L42ffc5:{c.instructions+=2;NFSU2_TR(0x42ffc5);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ffc7:{NFSU2_TR(0x42ffc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ffd0:L42ffd0:{c.instructions+=8;NFSU2_TR(0x42ffd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ffd3:{NFSU2_TR(0x42ffd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ffd4:{NFSU2_TR(0x42ffd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42ffd8:{NFSU2_TR(0x42ffd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ffdb:{NFSU2_TR(0x42ffdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ffdc:{NFSU2_TR(0x42ffdc);
w4(R+28,u32(r1(R+0)));
}
B42ffdf:{NFSU2_TR(0x42ffdf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B42ffe1:{NFSU2_TR(0x42ffe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ffea;}}
}
B42ffe3:L42ffe3:{c.instructions+=4;NFSU2_TR(0x42ffe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ffe4:{NFSU2_TR(0x42ffe4);
w1(R+0,u8(0x1ull));
}
B42ffe6:{NFSU2_TR(0x42ffe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ffe7:{NFSU2_TR(0x42ffe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ffea:L42ffea:{c.instructions+=2;NFSU2_TR(0x42ffea);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ffed:{NFSU2_TR(0x42ffed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43000bu,430);}
}
B42ffef:L42ffef:{c.instructions+=2;NFSU2_TR(0x42ffef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42fff1:{NFSU2_TR(0x42fff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43000bu,430);}
}
B42fff3:L42fff3:{c.instructions+=2;NFSU2_TR(0x42fff3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x2ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B42fff6:{NFSU2_TR(0x42fff6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x43000bu,430);}
}
B42fff8:L42fff8:{c.instructions+=3;NFSU2_TR(0x42fff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B42fffa:{NFSU2_TR(0x42fffa);
u8 U[4];
w4(U+0,u32(0x785d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ffff:{NFSU2_TR(0x42ffff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430004ull));
TAIL_STATIC(0x43db50u,43d);
}
XIT:NFSU2_TR_EXIT(0x42f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
