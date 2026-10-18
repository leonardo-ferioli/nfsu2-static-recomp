#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x49f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x49f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_49f(u8* __restrict R,Cpu& c);
u32 page_49f(Cpu& c){return body_49f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_49f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x49f001:goto L49f001;
case 0x49f002:c.instructions+=1;goto B49f002;
case 0x49f007:goto L49f007;
case 0x49f00a:c.instructions+=2;goto B49f00a;
case 0x49f00f:c.instructions+=1;goto B49f00f;
case 0x49f014:goto L49f014;
case 0x49f017:c.instructions+=5;goto B49f017;
case 0x49f019:c.instructions+=4;goto B49f019;
case 0x49f01e:c.instructions+=3;goto B49f01e;
case 0x49f01f:c.instructions+=2;goto B49f01f;
case 0x49f024:c.instructions+=1;goto B49f024;
case 0x49f029:goto L49f029;
case 0x49f02c:c.instructions+=3;goto B49f02c;
case 0x49f02d:c.instructions+=2;goto B49f02d;
case 0x49f02e:c.instructions+=1;goto B49f02e;
case 0x49f033:goto L49f033;
case 0x49f036:c.instructions+=6;goto B49f036;
case 0x49f039:c.instructions+=5;goto B49f039;
case 0x49f03b:c.instructions+=4;goto B49f03b;
case 0x49f040:c.instructions+=3;goto B49f040;
case 0x49f041:c.instructions+=2;goto B49f041;
case 0x49f046:c.instructions+=1;goto B49f046;
case 0x49f04b:goto L49f04b;
case 0x49f04e:c.instructions+=3;goto B49f04e;
case 0x49f04f:c.instructions+=2;goto B49f04f;
case 0x49f050:c.instructions+=1;goto B49f050;
case 0x49f055:goto L49f055;
case 0x49f058:c.instructions+=6;goto B49f058;
case 0x49f05b:c.instructions+=5;goto B49f05b;
case 0x49f05d:c.instructions+=4;goto B49f05d;
case 0x49f062:c.instructions+=3;goto B49f062;
case 0x49f063:c.instructions+=2;goto B49f063;
case 0x49f068:c.instructions+=1;goto B49f068;
case 0x49f06d:goto L49f06d;
case 0x49f070:c.instructions+=3;goto B49f070;
case 0x49f071:c.instructions+=2;goto B49f071;
case 0x49f072:c.instructions+=1;goto B49f072;
case 0x49f077:goto L49f077;
case 0x49f07a:c.instructions+=3;goto B49f07a;
case 0x49f07b:c.instructions+=2;goto B49f07b;
case 0x49f07c:c.instructions+=1;goto B49f07c;
case 0x49f07e:goto L49f07e;
case 0x49f081:c.instructions+=5;goto B49f081;
case 0x49f083:c.instructions+=4;goto B49f083;
case 0x49f084:c.instructions+=3;goto B49f084;
case 0x49f085:c.instructions+=2;goto B49f085;
case 0x49f086:c.instructions+=1;goto B49f086;
case 0x49f088:goto L49f088;
case 0x49f08b:c.instructions+=3;goto B49f08b;
case 0x49f090:c.instructions+=2;goto B49f090;
case 0x49f091:c.instructions+=1;goto B49f091;
case 0x49f096:goto L49f096;
case 0x49f099:c.instructions+=5;goto B49f099;
case 0x49f09b:c.instructions+=4;goto B49f09b;
case 0x49f0a0:c.instructions+=3;goto B49f0a0;
case 0x49f0a5:c.instructions+=2;goto B49f0a5;
case 0x49f0a6:c.instructions+=1;goto B49f0a6;
case 0x49f0ab:goto L49f0ab;
case 0x49f0ae:c.instructions+=5;goto B49f0ae;
case 0x49f0b0:c.instructions+=4;goto B49f0b0;
case 0x49f0b5:c.instructions+=3;goto B49f0b5;
case 0x49f0ba:c.instructions+=2;goto B49f0ba;
case 0x49f0bb:c.instructions+=1;goto B49f0bb;
case 0x49f0c0:goto L49f0c0;
case 0x49f0c3:c.instructions+=5;goto B49f0c3;
case 0x49f0c5:c.instructions+=4;goto B49f0c5;
case 0x49f0ca:c.instructions+=3;goto B49f0ca;
case 0x49f0cf:c.instructions+=2;goto B49f0cf;
case 0x49f0d0:c.instructions+=1;goto B49f0d0;
case 0x49f0d5:goto L49f0d5;
case 0x49f0d8:c.instructions+=2;goto B49f0d8;
case 0x49f0d9:c.instructions+=1;goto B49f0d9;
case 0x49f0dc:goto L49f0dc;
case 0x49f0e2:c.instructions+=2;goto B49f0e2;
case 0x49f0e4:c.instructions+=1;goto B49f0e4;
case 0x49f0ea:goto L49f0ea;
case 0x49f0ef:c.instructions+=2;goto B49f0ef;
case 0x49f0f1:c.instructions+=1;goto B49f0f1;
case 0x49f0f7:goto L49f0f7;
case 0x49f0fd:c.instructions+=2;goto B49f0fd;
case 0x49f0ff:c.instructions+=1;goto B49f0ff;
case 0x49f101:goto L49f101;
case 0x49f104:c.instructions+=5;goto B49f104;
case 0x49f106:c.instructions+=4;goto B49f106;
case 0x49f10b:c.instructions+=3;goto B49f10b;
case 0x49f110:c.instructions+=2;goto B49f110;
case 0x49f111:c.instructions+=1;goto B49f111;
case 0x49f116:goto L49f116;
case 0x49f119:c.instructions+=5;goto B49f119;
case 0x49f11b:c.instructions+=4;goto B49f11b;
case 0x49f120:c.instructions+=3;goto B49f120;
case 0x49f125:c.instructions+=2;goto B49f125;
case 0x49f126:c.instructions+=1;goto B49f126;
case 0x49f12b:goto L49f12b;
case 0x49f12e:c.instructions+=2;goto B49f12e;
case 0x49f12f:c.instructions+=1;goto B49f12f;
case 0x49f132:goto L49f132;
case 0x49f135:c.instructions+=3;goto B49f135;
case 0x49f138:c.instructions+=2;goto B49f138;
case 0x49f139:c.instructions+=1;goto B49f139;
case 0x49f13e:goto L49f13e;
case 0x49f141:c.instructions+=2;goto B49f141;
case 0x49f144:c.instructions+=1;goto B49f144;
case 0x49f14a:goto L49f14a;
case 0x49f14f:c.instructions+=3;goto B49f14f;
case 0x49f154:c.instructions+=2;goto B49f154;
case 0x49f155:c.instructions+=1;goto B49f155;
case 0x49f15a:goto L49f15a;
case 0x49f15d:c.instructions+=2;goto B49f15d;
case 0x49f15f:c.instructions+=1;goto B49f15f;
case 0x49f165:goto L49f165;
case 0x49f168:c.instructions+=5;goto B49f168;
case 0x49f16a:c.instructions+=4;goto B49f16a;
case 0x49f16f:c.instructions+=3;goto B49f16f;
case 0x49f174:c.instructions+=2;goto B49f174;
case 0x49f175:c.instructions+=1;goto B49f175;
case 0x49f17a:goto L49f17a;
case 0x49f17d:c.instructions+=2;goto B49f17d;
case 0x49f17e:c.instructions+=1;goto B49f17e;
case 0x49f181:goto L49f181;
case 0x49f184:c.instructions+=3;goto B49f184;
case 0x49f187:c.instructions+=2;goto B49f187;
case 0x49f188:c.instructions+=1;goto B49f188;
case 0x49f18d:goto L49f18d;
case 0x49f190:c.instructions+=1;goto B49f190;
case 0x49f192:goto L49f192;
case 0x49f198:c.instructions+=1;goto B49f198;
case 0x49f19d:goto L49f19d;
case 0x49f19f:c.instructions+=1;goto B49f19f;
case 0x49f1a1:goto L49f1a1;
case 0x49f1a4:c.instructions+=4;goto B49f1a4;
case 0x49f1a9:c.instructions+=3;goto B49f1a9;
case 0x49f1ae:c.instructions+=2;goto B49f1ae;
case 0x49f1af:c.instructions+=1;goto B49f1af;
case 0x49f1b4:goto L49f1b4;
case 0x49f1b7:c.instructions+=2;goto B49f1b7;
case 0x49f1b9:c.instructions+=1;goto B49f1b9;
case 0x49f1bb:goto L49f1bb;
case 0x49f1be:c.instructions+=5;goto B49f1be;
case 0x49f1c0:c.instructions+=4;goto B49f1c0;
case 0x49f1c5:c.instructions+=3;goto B49f1c5;
case 0x49f1ca:c.instructions+=2;goto B49f1ca;
case 0x49f1cb:c.instructions+=1;goto B49f1cb;
case 0x49f1d0:goto L49f1d0;
case 0x49f1d3:c.instructions+=2;goto B49f1d3;
case 0x49f1d4:c.instructions+=1;goto B49f1d4;
case 0x49f1d7:goto L49f1d7;
case 0x49f1dd:c.instructions+=1;goto B49f1dd;
case 0x49f1e2:goto L49f1e2;
case 0x49f1e4:c.instructions+=2;goto B49f1e4;
case 0x49f1e7:c.instructions+=1;goto B49f1e7;
case 0x49f1e9:goto L49f1e9;
case 0x49f1ee:c.instructions+=3;goto B49f1ee;
case 0x49f1f3:c.instructions+=2;goto B49f1f3;
case 0x49f1f4:c.instructions+=1;goto B49f1f4;
case 0x49f1f9:goto L49f1f9;
case 0x49f1fc:c.instructions+=2;goto B49f1fc;
case 0x49f1fe:c.instructions+=1;goto B49f1fe;
case 0x49f200:goto L49f200;
case 0x49f203:c.instructions+=5;goto B49f203;
case 0x49f205:c.instructions+=4;goto B49f205;
case 0x49f20a:c.instructions+=3;goto B49f20a;
case 0x49f20f:c.instructions+=2;goto B49f20f;
case 0x49f210:c.instructions+=1;goto B49f210;
case 0x49f215:goto L49f215;
case 0x49f218:c.instructions+=2;goto B49f218;
case 0x49f219:c.instructions+=1;goto B49f219;
case 0x49f21c:goto L49f21c;
case 0x49f21e:c.instructions+=4;goto B49f21e;
case 0x49f223:c.instructions+=3;goto B49f223;
case 0x49f228:c.instructions+=2;goto B49f228;
case 0x49f229:c.instructions+=1;goto B49f229;
case 0x49f22e:goto L49f22e;
case 0x49f231:goto L49f231;
case 0x49f232:c.instructions+=1;goto B49f232;
case 0x49f240:goto L49f240;
case 0x49f24a:c.instructions+=5;goto B49f24a;
case 0x49f251:c.instructions+=4;goto B49f251;
case 0x49f254:c.instructions+=3;goto B49f254;
case 0x49f259:c.instructions+=2;goto B49f259;
case 0x49f25a:c.instructions+=1;goto B49f25a;
case 0x49f25f:goto L49f25f;
case 0x49f260:c.instructions+=1;goto B49f260;
case 0x49f265:goto L49f265;
case 0x49f268:c.instructions+=1;goto B49f268;
case 0x49f270:goto L49f270;
case 0x49f271:c.instructions+=8;goto B49f271;
case 0x49f272:c.instructions+=7;goto B49f272;
case 0x49f276:c.instructions+=6;goto B49f276;
case 0x49f277:c.instructions+=5;goto B49f277;
case 0x49f278:c.instructions+=4;goto B49f278;
case 0x49f27a:c.instructions+=3;goto B49f27a;
case 0x49f27c:c.instructions+=2;goto B49f27c;
case 0x49f27e:c.instructions+=1;goto B49f27e;
case 0x49f280:goto L49f280;
case 0x49f28a:c.instructions+=1;goto B49f28a;
case 0x49f28c:goto L49f28c;
case 0x49f28d:c.instructions+=6;goto B49f28d;
case 0x49f291:c.instructions+=5;goto B49f291;
case 0x49f292:c.instructions+=4;goto B49f292;
case 0x49f298:c.instructions+=3;goto B49f298;
case 0x49f299:c.instructions+=2;goto B49f299;
case 0x49f29d:c.instructions+=1;goto B49f29d;
case 0x49f2a2:goto L49f2a2;
case 0x49f2a4:c.instructions+=1;goto B49f2a4;
case 0x49f2a9:goto L49f2a9;
case 0x49f2ab:c.instructions+=1;goto B49f2ab;
case 0x49f2ad:goto L49f2ad;
case 0x49f2b1:c.instructions+=3;goto B49f2b1;
case 0x49f2b2:c.instructions+=2;goto B49f2b2;
case 0x49f2b3:c.instructions+=1;goto B49f2b3;
case 0x49f2b8:goto L49f2b8;
case 0x49f2bb:c.instructions+=3;goto B49f2bb;
case 0x49f2bd:c.instructions+=2;goto B49f2bd;
case 0x49f2c2:c.instructions+=1;goto B49f2c2;
case 0x49f2c4:goto L49f2c4;
case 0x49f2c9:goto L49f2c9;
case 0x49f2cb:c.instructions+=1;goto B49f2cb;
case 0x49f2cd:goto L49f2cd;
case 0x49f2cf:c.instructions+=5;goto B49f2cf;
case 0x49f2d0:c.instructions+=4;goto B49f2d0;
case 0x49f2d3:c.instructions+=3;goto B49f2d3;
case 0x49f2d8:c.instructions+=2;goto B49f2d8;
case 0x49f2d9:c.instructions+=1;goto B49f2d9;
case 0x49f2db:goto L49f2db;
case 0x49f2de:c.instructions+=1;goto B49f2de;
case 0x49f2e0:goto L49f2e0;
case 0x49f2e3:c.instructions+=5;goto B49f2e3;
case 0x49f2e4:c.instructions+=4;goto B49f2e4;
case 0x49f2e5:c.instructions+=3;goto B49f2e5;
case 0x49f2ea:c.instructions+=2;goto B49f2ea;
case 0x49f2eb:c.instructions+=1;goto B49f2eb;
case 0x49f2ed:goto L49f2ed;
case 0x49f2f0:c.instructions+=1;goto B49f2f0;
case 0x49f2f2:goto L49f2f2;
case 0x49f2f4:c.instructions+=3;goto B49f2f4;
case 0x49f2f5:c.instructions+=2;goto B49f2f5;
case 0x49f2fa:c.instructions+=1;goto B49f2fa;
case 0x49f2fc:goto L49f2fc;
case 0x49f2ff:c.instructions+=1;goto B49f2ff;
case 0x49f301:goto L49f301;
case 0x49f303:c.instructions+=5;goto B49f303;
case 0x49f304:c.instructions+=4;goto B49f304;
case 0x49f307:c.instructions+=3;goto B49f307;
case 0x49f30c:c.instructions+=2;goto B49f30c;
case 0x49f30d:c.instructions+=1;goto B49f30d;
case 0x49f30f:goto L49f30f;
case 0x49f312:c.instructions+=1;goto B49f312;
case 0x49f314:goto L49f314;
case 0x49f317:c.instructions+=5;goto B49f317;
case 0x49f319:c.instructions+=4;goto B49f319;
case 0x49f31a:c.instructions+=3;goto B49f31a;
case 0x49f31f:c.instructions+=2;goto B49f31f;
case 0x49f320:c.instructions+=1;goto B49f320;
case 0x49f322:goto L49f322;
case 0x49f325:c.instructions+=1;goto B49f325;
case 0x49f327:goto L49f327;
case 0x49f329:c.instructions+=2;goto B49f329;
case 0x49f32a:c.instructions+=1;goto B49f32a;
case 0x49f32f:goto L49f32f;
case 0x49f332:c.instructions+=1;goto B49f332;
case 0x49f333:goto L49f333;
case 0x49f338:goto L49f338;
case 0x49f33b:goto L49f33b;
case 0x49f33c:c.instructions+=2;goto B49f33c;
case 0x49f33f:c.instructions+=1;goto B49f33f;
case 0x49f345:goto L49f345;
case 0x49f34b:c.instructions+=3;goto B49f34b;
case 0x49f34d:c.instructions+=2;goto B49f34d;
case 0x49f352:c.instructions+=1;goto B49f352;
case 0x49f354:goto L49f354;
case 0x49f359:goto L49f359;
case 0x49f35b:c.instructions+=5;goto B49f35b;
case 0x49f35c:c.instructions+=4;goto B49f35c;
case 0x49f35f:c.instructions+=3;goto B49f35f;
case 0x49f364:c.instructions+=2;goto B49f364;
case 0x49f365:c.instructions+=1;goto B49f365;
case 0x49f36a:goto L49f36a;
case 0x49f36d:c.instructions+=3;goto B49f36d;
case 0x49f372:c.instructions+=2;goto B49f372;
case 0x49f378:c.instructions+=1;goto B49f378;
case 0x49f380:goto L49f380;
case 0x49f383:c.instructions+=2;goto B49f383;
case 0x49f388:c.instructions+=1;goto B49f388;
case 0x49f38a:goto L49f38a;
case 0x49f38f:goto L49f38f;
case 0x49f392:c.instructions+=5;goto B49f392;
case 0x49f394:c.instructions+=4;goto B49f394;
case 0x49f395:c.instructions+=3;goto B49f395;
case 0x49f396:c.instructions+=2;goto B49f396;
case 0x49f39b:c.instructions+=1;goto B49f39b;
case 0x49f3a0:goto L49f3a0;
case 0x49f3a3:c.instructions+=3;goto B49f3a3;
case 0x49f3a4:c.instructions+=2;goto B49f3a4;
case 0x49f3a5:c.instructions+=1;goto B49f3a5;
case 0x49f3aa:goto L49f3aa;
case 0x49f3ac:c.instructions+=3;goto B49f3ac;
case 0x49f3af:c.instructions+=2;goto B49f3af;
case 0x49f3b1:c.instructions+=1;goto B49f3b1;
case 0x49f3b3:goto L49f3b3;
case 0x49f3b4:goto L49f3b4;
case 0x49f3b8:c.instructions+=4;goto B49f3b8;
case 0x49f3b9:c.instructions+=3;goto B49f3b9;
case 0x49f3ba:c.instructions+=2;goto B49f3ba;
case 0x49f3be:c.instructions+=1;goto B49f3be;
case 0x49f3c0:goto L49f3c0;
case 0x49f3c3:c.instructions+=1;goto B49f3c3;
case 0x49f3c5:goto L49f3c5;
case 0x49f3cb:c.instructions+=6;goto B49f3cb;
case 0x49f3ce:c.instructions+=5;goto B49f3ce;
case 0x49f3d0:c.instructions+=4;goto B49f3d0;
case 0x49f3d1:c.instructions+=3;goto B49f3d1;
case 0x49f3d2:c.instructions+=2;goto B49f3d2;
case 0x49f3d7:c.instructions+=1;goto B49f3d7;
case 0x49f3dc:goto L49f3dc;
case 0x49f3df:c.instructions+=3;goto B49f3df;
case 0x49f3e0:c.instructions+=2;goto B49f3e0;
case 0x49f3e1:c.instructions+=1;goto B49f3e1;
case 0x49f3e6:goto L49f3e6;
case 0x49f3e9:c.instructions+=3;goto B49f3e9;
case 0x49f3ea:c.instructions+=2;goto B49f3ea;
case 0x49f3ed:c.instructions+=1;goto B49f3ed;
case 0x49f3ef:goto L49f3ef;
case 0x49f3f0:c.instructions+=4;goto B49f3f0;
case 0x49f3f1:c.instructions+=3;goto B49f3f1;
case 0x49f3f2:c.instructions+=2;goto B49f3f2;
case 0x49f3f3:c.instructions+=1;goto B49f3f3;
case 0x49f400:goto L49f400;
case 0x49f403:c.instructions+=8;goto B49f403;
case 0x49f404:c.instructions+=7;goto B49f404;
case 0x49f405:c.instructions+=6;goto B49f405;
case 0x49f406:c.instructions+=5;goto B49f406;
case 0x49f408:c.instructions+=4;goto B49f408;
case 0x49f40d:c.instructions+=3;goto B49f40d;
case 0x49f40f:c.instructions+=2;goto B49f40f;
case 0x49f414:c.instructions+=1;goto B49f414;
case 0x49f418:goto L49f418;
case 0x49f41a:goto L49f41a;
case 0x49f41c:c.instructions+=2;goto B49f41c;
case 0x49f41d:c.instructions+=1;goto B49f41d;
case 0x49f422:goto L49f422;
case 0x49f423:c.instructions+=5;goto B49f423;
case 0x49f428:c.instructions+=4;goto B49f428;
case 0x49f42c:c.instructions+=3;goto B49f42c;
case 0x49f42e:c.instructions+=2;goto B49f42e;
case 0x49f42f:c.instructions+=1;goto B49f42f;
case 0x49f434:goto L49f434;
case 0x49f437:c.instructions+=3;goto B49f437;
case 0x49f43b:c.instructions+=2;goto B49f43b;
case 0x49f43c:c.instructions+=1;goto B49f43c;
case 0x49f441:goto L49f441;
case 0x49f442:c.instructions+=2;goto B49f442;
case 0x49f443:c.instructions+=1;goto B49f443;
case 0x49f448:goto L49f448;
case 0x49f44a:c.instructions+=6;goto B49f44a;
case 0x49f44d:c.instructions+=5;goto B49f44d;
case 0x49f450:c.instructions+=4;goto B49f450;
case 0x49f455:c.instructions+=3;goto B49f455;
case 0x49f456:c.instructions+=2;goto B49f456;
case 0x49f457:c.instructions+=1;goto B49f457;
case 0x49f45c:goto L49f45c;
case 0x49f45f:c.instructions+=2;goto B49f45f;
case 0x49f461:c.instructions+=1;goto B49f461;
case 0x49f463:goto L49f463;
case 0x49f466:c.instructions+=6;goto B49f466;
case 0x49f469:c.instructions+=5;goto B49f469;
case 0x49f46b:c.instructions+=4;goto B49f46b;
case 0x49f470:c.instructions+=3;goto B49f470;
case 0x49f471:c.instructions+=2;goto B49f471;
case 0x49f472:c.instructions+=1;goto B49f472;
case 0x49f477:goto L49f477;
case 0x49f47a:goto L49f47a;
case 0x49f47b:c.instructions+=2;goto B49f47b;
case 0x49f47e:c.instructions+=1;goto B49f47e;
case 0x49f480:goto L49f480;
case 0x49f481:c.instructions+=4;goto B49f481;
case 0x49f482:c.instructions+=3;goto B49f482;
case 0x49f483:c.instructions+=2;goto B49f483;
case 0x49f486:c.instructions+=1;goto B49f486;
case 0x49f490:goto L49f490;
case 0x49f493:c.instructions+=8;goto B49f493;
case 0x49f494:c.instructions+=7;goto B49f494;
case 0x49f495:c.instructions+=6;goto B49f495;
case 0x49f496:c.instructions+=5;goto B49f496;
case 0x49f498:c.instructions+=4;goto B49f498;
case 0x49f49d:c.instructions+=3;goto B49f49d;
case 0x49f49f:c.instructions+=2;goto B49f49f;
case 0x49f4a4:c.instructions+=1;goto B49f4a4;
case 0x49f4a8:goto L49f4a8;
case 0x49f4aa:goto L49f4aa;
case 0x49f4ac:c.instructions+=2;goto B49f4ac;
case 0x49f4ad:c.instructions+=1;goto B49f4ad;
case 0x49f4b2:goto L49f4b2;
case 0x49f4b3:c.instructions+=5;goto B49f4b3;
case 0x49f4b8:c.instructions+=4;goto B49f4b8;
case 0x49f4bc:c.instructions+=3;goto B49f4bc;
case 0x49f4be:c.instructions+=2;goto B49f4be;
case 0x49f4bf:c.instructions+=1;goto B49f4bf;
case 0x49f4c4:goto L49f4c4;
case 0x49f4c7:c.instructions+=3;goto B49f4c7;
case 0x49f4cb:c.instructions+=2;goto B49f4cb;
case 0x49f4cc:c.instructions+=1;goto B49f4cc;
case 0x49f4d1:goto L49f4d1;
case 0x49f4d2:c.instructions+=2;goto B49f4d2;
case 0x49f4d3:c.instructions+=1;goto B49f4d3;
case 0x49f4d8:goto L49f4d8;
case 0x49f4da:c.instructions+=6;goto B49f4da;
case 0x49f4dd:c.instructions+=5;goto B49f4dd;
case 0x49f4e0:c.instructions+=4;goto B49f4e0;
case 0x49f4e5:c.instructions+=3;goto B49f4e5;
case 0x49f4e6:c.instructions+=2;goto B49f4e6;
case 0x49f4e7:c.instructions+=1;goto B49f4e7;
case 0x49f4ec:goto L49f4ec;
case 0x49f4ef:c.instructions+=2;goto B49f4ef;
case 0x49f4f1:c.instructions+=1;goto B49f4f1;
case 0x49f4f3:goto L49f4f3;
case 0x49f4f6:c.instructions+=6;goto B49f4f6;
case 0x49f4f9:c.instructions+=5;goto B49f4f9;
case 0x49f4fb:c.instructions+=4;goto B49f4fb;
case 0x49f500:c.instructions+=3;goto B49f500;
case 0x49f501:c.instructions+=2;goto B49f501;
case 0x49f502:c.instructions+=1;goto B49f502;
case 0x49f507:goto L49f507;
case 0x49f50a:goto L49f50a;
case 0x49f50b:c.instructions+=2;goto B49f50b;
case 0x49f50e:c.instructions+=1;goto B49f50e;
case 0x49f510:goto L49f510;
case 0x49f512:c.instructions+=5;goto B49f512;
case 0x49f517:c.instructions+=4;goto B49f517;
case 0x49f51b:c.instructions+=3;goto B49f51b;
case 0x49f51d:c.instructions+=2;goto B49f51d;
case 0x49f51e:c.instructions+=1;goto B49f51e;
case 0x49f523:goto L49f523;
case 0x49f526:c.instructions+=3;goto B49f526;
case 0x49f52a:c.instructions+=2;goto B49f52a;
case 0x49f52b:c.instructions+=1;goto B49f52b;
case 0x49f530:goto L49f530;
case 0x49f531:c.instructions+=2;goto B49f531;
case 0x49f532:c.instructions+=1;goto B49f532;
case 0x49f537:goto L49f537;
case 0x49f539:c.instructions+=6;goto B49f539;
case 0x49f53c:c.instructions+=5;goto B49f53c;
case 0x49f53f:c.instructions+=4;goto B49f53f;
case 0x49f544:c.instructions+=3;goto B49f544;
case 0x49f545:c.instructions+=2;goto B49f545;
case 0x49f546:c.instructions+=1;goto B49f546;
case 0x49f54b:goto L49f54b;
case 0x49f54e:c.instructions+=2;goto B49f54e;
case 0x49f550:c.instructions+=1;goto B49f550;
case 0x49f552:goto L49f552;
case 0x49f555:c.instructions+=6;goto B49f555;
case 0x49f558:c.instructions+=5;goto B49f558;
case 0x49f55a:c.instructions+=4;goto B49f55a;
case 0x49f55f:c.instructions+=3;goto B49f55f;
case 0x49f560:c.instructions+=2;goto B49f560;
case 0x49f561:c.instructions+=1;goto B49f561;
case 0x49f566:goto L49f566;
case 0x49f569:goto L49f569;
case 0x49f56a:c.instructions+=4;goto B49f56a;
case 0x49f56b:c.instructions+=3;goto B49f56b;
case 0x49f56c:c.instructions+=2;goto B49f56c;
case 0x49f56f:c.instructions+=1;goto B49f56f;
case 0x49f570:goto L49f570;
case 0x49f573:c.instructions+=8;goto B49f573;
case 0x49f574:c.instructions+=7;goto B49f574;
case 0x49f575:c.instructions+=6;goto B49f575;
case 0x49f576:c.instructions+=5;goto B49f576;
case 0x49f578:c.instructions+=4;goto B49f578;
case 0x49f57a:c.instructions+=3;goto B49f57a;
case 0x49f57f:c.instructions+=2;goto B49f57f;
case 0x49f584:c.instructions+=1;goto B49f584;
case 0x49f588:goto L49f588;
case 0x49f58a:goto L49f58a;
case 0x49f58c:c.instructions+=7;goto B49f58c;
case 0x49f58e:c.instructions+=6;goto B49f58e;
case 0x49f593:c.instructions+=5;goto B49f593;
case 0x49f594:c.instructions+=4;goto B49f594;
case 0x49f598:c.instructions+=3;goto B49f598;
case 0x49f59a:c.instructions+=2;goto B49f59a;
case 0x49f59b:c.instructions+=1;goto B49f59b;
case 0x49f5a0:goto L49f5a0;
case 0x49f5a3:c.instructions+=3;goto B49f5a3;
case 0x49f5a7:c.instructions+=2;goto B49f5a7;
case 0x49f5a8:c.instructions+=1;goto B49f5a8;
case 0x49f5ad:goto L49f5ad;
case 0x49f5ae:c.instructions+=2;goto B49f5ae;
case 0x49f5af:c.instructions+=1;goto B49f5af;
case 0x49f5b4:goto L49f5b4;
case 0x49f5b6:c.instructions+=6;goto B49f5b6;
case 0x49f5b9:c.instructions+=5;goto B49f5b9;
case 0x49f5bc:c.instructions+=4;goto B49f5bc;
case 0x49f5c1:c.instructions+=3;goto B49f5c1;
case 0x49f5c2:c.instructions+=2;goto B49f5c2;
case 0x49f5c3:c.instructions+=1;goto B49f5c3;
case 0x49f5c8:goto L49f5c8;
case 0x49f5cb:c.instructions+=2;goto B49f5cb;
case 0x49f5cd:c.instructions+=1;goto B49f5cd;
case 0x49f5cf:goto L49f5cf;
case 0x49f5d2:c.instructions+=6;goto B49f5d2;
case 0x49f5d5:c.instructions+=5;goto B49f5d5;
case 0x49f5d7:c.instructions+=4;goto B49f5d7;
case 0x49f5dc:c.instructions+=3;goto B49f5dc;
case 0x49f5dd:c.instructions+=2;goto B49f5dd;
case 0x49f5de:c.instructions+=1;goto B49f5de;
case 0x49f5e3:goto L49f5e3;
case 0x49f5e6:goto L49f5e6;
case 0x49f5eb:c.instructions+=1;goto B49f5eb;
case 0x49f5f0:goto L49f5f0;
case 0x49f5f1:c.instructions+=5;goto B49f5f1;
case 0x49f5f6:c.instructions+=4;goto B49f5f6;
case 0x49f5fa:c.instructions+=3;goto B49f5fa;
case 0x49f5fc:c.instructions+=2;goto B49f5fc;
case 0x49f5fd:c.instructions+=1;goto B49f5fd;
case 0x49f602:goto L49f602;
case 0x49f605:c.instructions+=3;goto B49f605;
case 0x49f609:c.instructions+=2;goto B49f609;
case 0x49f60a:c.instructions+=1;goto B49f60a;
case 0x49f60f:goto L49f60f;
case 0x49f610:c.instructions+=2;goto B49f610;
case 0x49f611:c.instructions+=1;goto B49f611;
case 0x49f616:goto L49f616;
case 0x49f618:c.instructions+=6;goto B49f618;
case 0x49f61b:c.instructions+=5;goto B49f61b;
case 0x49f61e:c.instructions+=4;goto B49f61e;
case 0x49f623:c.instructions+=3;goto B49f623;
case 0x49f624:c.instructions+=2;goto B49f624;
case 0x49f625:c.instructions+=1;goto B49f625;
case 0x49f62a:goto L49f62a;
case 0x49f62d:c.instructions+=2;goto B49f62d;
case 0x49f62f:c.instructions+=1;goto B49f62f;
case 0x49f631:goto L49f631;
case 0x49f634:c.instructions+=6;goto B49f634;
case 0x49f637:c.instructions+=5;goto B49f637;
case 0x49f639:c.instructions+=4;goto B49f639;
case 0x49f63e:c.instructions+=3;goto B49f63e;
case 0x49f63f:c.instructions+=2;goto B49f63f;
case 0x49f640:c.instructions+=1;goto B49f640;
case 0x49f645:goto L49f645;
case 0x49f648:goto L49f648;
case 0x49f649:c.instructions+=2;goto B49f649;
case 0x49f64c:c.instructions+=1;goto B49f64c;
case 0x49f64e:goto L49f64e;
case 0x49f64f:c.instructions+=4;goto B49f64f;
case 0x49f650:c.instructions+=3;goto B49f650;
case 0x49f651:c.instructions+=2;goto B49f651;
case 0x49f654:c.instructions+=1;goto B49f654;
case 0x49f660:goto L49f660;
case 0x49f663:c.instructions+=8;goto B49f663;
case 0x49f664:c.instructions+=7;goto B49f664;
case 0x49f665:c.instructions+=6;goto B49f665;
case 0x49f666:c.instructions+=5;goto B49f666;
case 0x49f668:c.instructions+=4;goto B49f668;
case 0x49f66d:c.instructions+=3;goto B49f66d;
case 0x49f66f:c.instructions+=2;goto B49f66f;
case 0x49f674:c.instructions+=1;goto B49f674;
case 0x49f678:goto L49f678;
case 0x49f67a:goto L49f67a;
case 0x49f67c:c.instructions+=2;goto B49f67c;
case 0x49f67d:c.instructions+=1;goto B49f67d;
case 0x49f682:goto L49f682;
case 0x49f683:c.instructions+=5;goto B49f683;
case 0x49f688:c.instructions+=4;goto B49f688;
case 0x49f68c:c.instructions+=3;goto B49f68c;
case 0x49f68e:c.instructions+=2;goto B49f68e;
case 0x49f68f:c.instructions+=1;goto B49f68f;
case 0x49f694:goto L49f694;
case 0x49f697:c.instructions+=3;goto B49f697;
case 0x49f69b:c.instructions+=2;goto B49f69b;
case 0x49f69c:c.instructions+=1;goto B49f69c;
case 0x49f6a1:goto L49f6a1;
case 0x49f6a2:c.instructions+=2;goto B49f6a2;
case 0x49f6a3:c.instructions+=1;goto B49f6a3;
case 0x49f6a8:goto L49f6a8;
case 0x49f6aa:c.instructions+=6;goto B49f6aa;
case 0x49f6ad:c.instructions+=5;goto B49f6ad;
case 0x49f6b0:c.instructions+=4;goto B49f6b0;
case 0x49f6b5:c.instructions+=3;goto B49f6b5;
case 0x49f6b6:c.instructions+=2;goto B49f6b6;
case 0x49f6b7:c.instructions+=1;goto B49f6b7;
case 0x49f6bc:goto L49f6bc;
case 0x49f6bf:c.instructions+=2;goto B49f6bf;
case 0x49f6c1:c.instructions+=1;goto B49f6c1;
case 0x49f6c3:goto L49f6c3;
case 0x49f6c6:c.instructions+=6;goto B49f6c6;
case 0x49f6c9:c.instructions+=5;goto B49f6c9;
case 0x49f6cb:c.instructions+=4;goto B49f6cb;
case 0x49f6d0:c.instructions+=3;goto B49f6d0;
case 0x49f6d1:c.instructions+=2;goto B49f6d1;
case 0x49f6d2:c.instructions+=1;goto B49f6d2;
case 0x49f6d7:goto L49f6d7;
case 0x49f6da:goto L49f6da;
case 0x49f6db:c.instructions+=2;goto B49f6db;
case 0x49f6de:c.instructions+=1;goto B49f6de;
case 0x49f6e0:goto L49f6e0;
case 0x49f6e1:c.instructions+=4;goto B49f6e1;
case 0x49f6e2:c.instructions+=3;goto B49f6e2;
case 0x49f6e3:c.instructions+=2;goto B49f6e3;
case 0x49f6e6:c.instructions+=1;goto B49f6e6;
case 0x49f6f0:goto L49f6f0;
case 0x49f6f3:c.instructions+=8;goto B49f6f3;
case 0x49f6f4:c.instructions+=7;goto B49f6f4;
case 0x49f6f5:c.instructions+=6;goto B49f6f5;
case 0x49f6f6:c.instructions+=5;goto B49f6f6;
case 0x49f6f8:c.instructions+=4;goto B49f6f8;
case 0x49f6fd:c.instructions+=3;goto B49f6fd;
case 0x49f6ff:c.instructions+=2;goto B49f6ff;
case 0x49f704:c.instructions+=1;goto B49f704;
case 0x49f708:goto L49f708;
case 0x49f70a:goto L49f70a;
case 0x49f70c:c.instructions+=2;goto B49f70c;
case 0x49f70d:c.instructions+=1;goto B49f70d;
case 0x49f712:goto L49f712;
case 0x49f713:c.instructions+=5;goto B49f713;
case 0x49f718:c.instructions+=4;goto B49f718;
case 0x49f71c:c.instructions+=3;goto B49f71c;
case 0x49f71e:c.instructions+=2;goto B49f71e;
case 0x49f71f:c.instructions+=1;goto B49f71f;
case 0x49f724:goto L49f724;
case 0x49f727:c.instructions+=3;goto B49f727;
case 0x49f72b:c.instructions+=2;goto B49f72b;
case 0x49f72c:c.instructions+=1;goto B49f72c;
case 0x49f731:goto L49f731;
case 0x49f732:c.instructions+=2;goto B49f732;
case 0x49f733:c.instructions+=1;goto B49f733;
case 0x49f738:goto L49f738;
case 0x49f73a:c.instructions+=6;goto B49f73a;
case 0x49f73d:c.instructions+=5;goto B49f73d;
case 0x49f740:c.instructions+=4;goto B49f740;
case 0x49f745:c.instructions+=3;goto B49f745;
case 0x49f746:c.instructions+=2;goto B49f746;
case 0x49f747:c.instructions+=1;goto B49f747;
case 0x49f74c:goto L49f74c;
case 0x49f74f:c.instructions+=2;goto B49f74f;
case 0x49f751:c.instructions+=1;goto B49f751;
case 0x49f753:goto L49f753;
case 0x49f756:c.instructions+=6;goto B49f756;
case 0x49f759:c.instructions+=5;goto B49f759;
case 0x49f75b:c.instructions+=4;goto B49f75b;
case 0x49f760:c.instructions+=3;goto B49f760;
case 0x49f761:c.instructions+=2;goto B49f761;
case 0x49f762:c.instructions+=1;goto B49f762;
case 0x49f767:goto L49f767;
case 0x49f76a:goto L49f76a;
case 0x49f76b:c.instructions+=2;goto B49f76b;
case 0x49f76e:c.instructions+=1;goto B49f76e;
case 0x49f770:goto L49f770;
case 0x49f771:c.instructions+=4;goto B49f771;
case 0x49f772:c.instructions+=3;goto B49f772;
case 0x49f773:c.instructions+=2;goto B49f773;
case 0x49f776:c.instructions+=1;goto B49f776;
case 0x49f780:goto L49f780;
case 0x49f781:c.instructions+=4;goto B49f781;
case 0x49f785:c.instructions+=3;goto B49f785;
case 0x49f78b:c.instructions+=2;goto B49f78b;
case 0x49f78d:c.instructions+=1;goto B49f78d;
case 0x49f78f:goto L49f78f;
case 0x49f790:c.instructions+=1;goto B49f790;
case 0x49f795:goto L49f795;
case 0x49f798:c.instructions+=1;goto B49f798;
case 0x49f7a2:goto L49f7a2;
case 0x49f7a6:c.instructions+=3;goto B49f7a6;
case 0x49f7a9:c.instructions+=2;goto B49f7a9;
case 0x49f7ae:c.instructions+=1;goto B49f7ae;
case 0x49f7b0:goto L49f7b0;
case 0x49f7b3:c.instructions+=2;goto B49f7b3;
case 0x49f7b8:c.instructions+=1;goto B49f7b8;
case 0x49f7bd:goto L49f7bd;
case 0x49f7be:c.instructions+=2;goto B49f7be;
case 0x49f7c3:c.instructions+=1;goto B49f7c3;
case 0x49f7c5:goto L49f7c5;
case 0x49f7c7:c.instructions+=1;goto B49f7c7;
case 0x49f7c9:goto L49f7c9;
case 0x49f7cc:c.instructions+=2;goto B49f7cc;
case 0x49f7d1:c.instructions+=1;goto B49f7d1;
case 0x49f7d6:goto L49f7d6;
case 0x49f7d7:c.instructions+=1;goto B49f7d7;
case 0x49f7dc:goto L49f7dc;
case 0x49f7e1:c.instructions+=3;goto B49f7e1;
case 0x49f7e6:c.instructions+=2;goto B49f7e6;
case 0x49f7e7:c.instructions+=1;goto B49f7e7;
case 0x49f7ec:goto L49f7ec;
case 0x49f7ef:goto L49f7ef;
case 0x49f7f1:c.instructions+=2;goto B49f7f1;
case 0x49f7f6:c.instructions+=1;goto B49f7f6;
case 0x49f7fb:goto L49f7fb;
case 0x49f7fc:c.instructions+=1;goto B49f7fc;
case 0x49f800:goto L49f800;
case 0x49f804:c.instructions+=3;goto B49f804;
case 0x49f807:c.instructions+=2;goto B49f807;
case 0x49f809:c.instructions+=1;goto B49f809;
case 0x49f80b:goto L49f80b;
case 0x49f810:c.instructions+=1;goto B49f810;
case 0x49f812:goto L49f812;
case 0x49f817:c.instructions+=1;goto B49f817;
case 0x49f819:goto L49f819;
case 0x49f81e:c.instructions+=1;goto B49f81e;
case 0x49f820:goto L49f820;
case 0x49f825:c.instructions+=1;goto B49f825;
case 0x49f827:goto L49f827;
case 0x49f82b:c.instructions+=4;goto B49f82b;
case 0x49f82c:c.instructions+=3;goto B49f82c;
case 0x49f82f:c.instructions+=2;goto B49f82f;
case 0x49f834:c.instructions+=1;goto B49f834;
case 0x49f839:goto L49f839;
case 0x49f83a:c.instructions+=5;goto B49f83a;
case 0x49f83f:c.instructions+=4;goto B49f83f;
case 0x49f844:c.instructions+=3;goto B49f844;
case 0x49f849:c.instructions+=2;goto B49f849;
case 0x49f84a:c.instructions+=1;goto B49f84a;
case 0x49f84f:goto L49f84f;
case 0x49f852:c.instructions+=4;goto B49f852;
case 0x49f853:c.instructions+=3;goto B49f853;
case 0x49f855:c.instructions+=2;goto B49f855;
case 0x49f85a:c.instructions+=1;goto B49f85a;
case 0x49f85f:goto L49f85f;
case 0x49f860:goto L49f860;
case 0x49f864:c.instructions+=5;goto B49f864;
case 0x49f867:c.instructions+=4;goto B49f867;
case 0x49f869:c.instructions+=3;goto B49f869;
case 0x49f86e:c.instructions+=2;goto B49f86e;
case 0x49f86f:c.instructions+=1;goto B49f86f;
case 0x49f874:goto L49f874;
case 0x49f877:goto L49f877;
case 0x49f879:c.instructions+=2;goto B49f879;
case 0x49f87e:c.instructions+=1;goto B49f87e;
case 0x49f883:goto L49f883;
case 0x49f890:goto L49f890;
case 0x49f894:c.instructions+=3;goto B49f894;
case 0x49f897:c.instructions+=2;goto B49f897;
case 0x49f899:c.instructions+=1;goto B49f899;
case 0x49f89b:goto L49f89b;
case 0x49f89f:c.instructions+=4;goto B49f89f;
case 0x49f8a0:c.instructions+=3;goto B49f8a0;
case 0x49f8a3:c.instructions+=2;goto B49f8a3;
case 0x49f8a8:c.instructions+=1;goto B49f8a8;
case 0x49f8ad:goto L49f8ad;
case 0x49f8ae:c.instructions+=6;goto B49f8ae;
case 0x49f8b0:c.instructions+=5;goto B49f8b0;
case 0x49f8b2:c.instructions+=4;goto B49f8b2;
case 0x49f8b7:c.instructions+=3;goto B49f8b7;
case 0x49f8bc:c.instructions+=2;goto B49f8bc;
case 0x49f8bd:c.instructions+=1;goto B49f8bd;
case 0x49f8c2:goto L49f8c2;
case 0x49f8c5:c.instructions+=1;goto B49f8c5;
case 0x49f8c6:goto L49f8c6;
case 0x49f8c8:c.instructions+=2;goto B49f8c8;
case 0x49f8cd:c.instructions+=1;goto B49f8cd;
case 0x49f8d2:goto L49f8d2;
case 0x49f8e0:goto L49f8e0;
case 0x49f8e4:c.instructions+=3;goto B49f8e4;
case 0x49f8e6:c.instructions+=2;goto B49f8e6;
case 0x49f8e8:c.instructions+=1;goto B49f8e8;
case 0x49f8ed:goto L49f8ed;
case 0x49f8f0:goto L49f8f0;
case 0x49f8f1:c.instructions+=4;goto B49f8f1;
case 0x49f8f3:c.instructions+=3;goto B49f8f3;
case 0x49f8f9:c.instructions+=2;goto B49f8f9;
case 0x49f8fb:c.instructions+=1;goto B49f8fb;
case 0x49f8fd:goto L49f8fd;
case 0x49f8fe:c.instructions+=1;goto B49f8fe;
case 0x49f903:goto L49f903;
case 0x49f906:c.instructions+=1;goto B49f906;
case 0x49f910:goto L49f910;
case 0x49f914:c.instructions+=3;goto B49f914;
case 0x49f917:c.instructions+=2;goto B49f917;
case 0x49f919:c.instructions+=1;goto B49f919;
case 0x49f91b:goto L49f91b;
case 0x49f91e:c.instructions+=7;goto B49f91e;
case 0x49f923:c.instructions+=6;goto B49f923;
case 0x49f925:c.instructions+=5;goto B49f925;
case 0x49f927:c.instructions+=4;goto B49f927;
case 0x49f92c:c.instructions+=3;goto B49f92c;
case 0x49f931:c.instructions+=2;goto B49f931;
case 0x49f932:c.instructions+=1;goto B49f932;
case 0x49f937:goto L49f937;
case 0x49f93a:c.instructions+=2;goto B49f93a;
case 0x49f93b:c.instructions+=1;goto B49f93b;
case 0x49f93e:goto L49f93e;
case 0x49f941:c.instructions+=2;goto B49f941;
case 0x49f946:c.instructions+=1;goto B49f946;
case 0x49f94b:goto L49f94b;
case 0x49f94c:c.instructions+=6;goto B49f94c;
case 0x49f94e:c.instructions+=5;goto B49f94e;
case 0x49f950:c.instructions+=4;goto B49f950;
case 0x49f955:c.instructions+=3;goto B49f955;
case 0x49f95a:c.instructions+=2;goto B49f95a;
case 0x49f95b:c.instructions+=1;goto B49f95b;
case 0x49f960:goto L49f960;
case 0x49f963:c.instructions+=2;goto B49f963;
case 0x49f964:c.instructions+=1;goto B49f964;
case 0x49f970:goto L49f970;
case 0x49f973:c.instructions+=14;goto B49f973;
case 0x49f974:c.instructions+=13;goto B49f974;
case 0x49f975:c.instructions+=12;goto B49f975;
case 0x49f976:c.instructions+=11;goto B49f976;
case 0x49f977:c.instructions+=10;goto B49f977;
case 0x49f97b:c.instructions+=9;goto B49f97b;
case 0x49f97f:c.instructions+=8;goto B49f97f;
case 0x49f981:c.instructions+=7;goto B49f981;
case 0x49f983:c.instructions+=6;goto B49f983;
case 0x49f984:c.instructions+=5;goto B49f984;
case 0x49f987:c.instructions+=4;goto B49f987;
case 0x49f989:c.instructions+=3;goto B49f989;
case 0x49f991:c.instructions+=2;goto B49f991;
case 0x49f995:c.instructions+=1;goto B49f995;
case 0x49f997:goto L49f997;
case 0x49f99b:c.instructions+=1;goto B49f99b;
case 0x49f99d:goto L49f99d;
case 0x49f9a1:goto L49f9a1;
case 0x49f9a4:c.instructions+=5;goto B49f9a4;
case 0x49f9a5:c.instructions+=4;goto B49f9a5;
case 0x49f9a8:c.instructions+=3;goto B49f9a8;
case 0x49f9a9:c.instructions+=2;goto B49f9a9;
case 0x49f9aa:c.instructions+=1;goto B49f9aa;
case 0x49f9af:goto L49f9af;
case 0x49f9b3:c.instructions+=7;goto B49f9b3;
case 0x49f9b7:c.instructions+=6;goto B49f9b7;
case 0x49f9ba:c.instructions+=5;goto B49f9ba;
case 0x49f9bc:c.instructions+=4;goto B49f9bc;
case 0x49f9be:c.instructions+=3;goto B49f9be;
case 0x49f9c0:c.instructions+=2;goto B49f9c0;
case 0x49f9c3:c.instructions+=1;goto B49f9c3;
case 0x49f9c5:goto L49f9c5;
case 0x49f9c7:c.instructions+=5;goto B49f9c7;
case 0x49f9cb:c.instructions+=4;goto B49f9cb;
case 0x49f9cc:c.instructions+=3;goto B49f9cc;
case 0x49f9cd:c.instructions+=2;goto B49f9cd;
case 0x49f9d0:c.instructions+=1;goto B49f9d0;
case 0x49f9d2:goto L49f9d2;
case 0x49f9d3:c.instructions+=6;goto B49f9d3;
case 0x49f9d4:c.instructions+=5;goto B49f9d4;
case 0x49f9d5:c.instructions+=4;goto B49f9d5;
case 0x49f9d7:c.instructions+=3;goto B49f9d7;
case 0x49f9d8:c.instructions+=2;goto B49f9d8;
case 0x49f9db:c.instructions+=1;goto B49f9db;
case 0x49f9de:goto L49f9de;
case 0x49f9e2:c.instructions+=2;goto B49f9e2;
case 0x49f9e4:c.instructions+=1;goto B49f9e4;
case 0x49f9e6:goto L49f9e6;
case 0x49f9e8:goto L49f9e8;
case 0x49f9e9:c.instructions+=5;goto B49f9e9;
case 0x49f9ea:c.instructions+=4;goto B49f9ea;
case 0x49f9eb:c.instructions+=3;goto B49f9eb;
case 0x49f9ec:c.instructions+=2;goto B49f9ec;
case 0x49f9ef:c.instructions+=1;goto B49f9ef;
case 0x49fa00:goto L49fa00;
case 0x49fa01:c.instructions+=6;goto B49fa01;
case 0x49fa03:c.instructions+=5;goto B49fa03;
case 0x49fa06:c.instructions+=4;goto B49fa06;
case 0x49fa07:c.instructions+=3;goto B49fa07;
case 0x49fa09:c.instructions+=2;goto B49fa09;
case 0x49fa0c:c.instructions+=1;goto B49fa0c;
case 0x49fa10:goto L49fa10;
case 0x49fa12:c.instructions+=3;goto B49fa12;
case 0x49fa13:c.instructions+=2;goto B49fa13;
case 0x49fa15:c.instructions+=1;goto B49fa15;
case 0x49fa17:goto L49fa17;
case 0x49fa18:c.instructions+=6;goto B49fa18;
case 0x49fa1c:c.instructions+=5;goto B49fa1c;
case 0x49fa1e:c.instructions+=4;goto B49fa1e;
case 0x49fa22:c.instructions+=3;goto B49fa22;
case 0x49fa28:c.instructions+=2;goto B49fa28;
case 0x49fa2a:c.instructions+=1;goto B49fa2a;
case 0x49fa2c:goto L49fa2c;
case 0x49fa30:goto L49fa30;
case 0x49fa33:c.instructions+=1;goto B49fa33;
case 0x49fa35:goto L49fa35;
case 0x49fa38:c.instructions+=4;goto B49fa38;
case 0x49fa39:c.instructions+=3;goto B49fa39;
case 0x49fa3a:c.instructions+=2;goto B49fa3a;
case 0x49fa3d:c.instructions+=1;goto B49fa3d;
case 0x49fa3f:goto L49fa3f;
case 0x49fa42:c.instructions+=7;goto B49fa42;
case 0x49fa43:c.instructions+=6;goto B49fa43;
case 0x49fa44:c.instructions+=5;goto B49fa44;
case 0x49fa45:c.instructions+=4;goto B49fa45;
case 0x49fa48:c.instructions+=3;goto B49fa48;
case 0x49fa4c:c.instructions+=2;goto B49fa4c;
case 0x49fa52:c.instructions+=1;goto B49fa52;
case 0x49fa54:goto L49fa54;
case 0x49fa56:c.instructions+=1;goto B49fa56;
case 0x49fa58:goto L49fa58;
case 0x49fa59:c.instructions+=2;goto B49fa59;
case 0x49fa5a:c.instructions+=1;goto B49fa5a;
case 0x49fa5f:goto L49fa5f;
case 0x49fa62:goto L49fa62;
case 0x49fa66:c.instructions+=5;goto B49fa66;
case 0x49fa67:c.instructions+=4;goto B49fa67;
case 0x49fa68:c.instructions+=3;goto B49fa68;
case 0x49fa6c:c.instructions+=2;goto B49fa6c;
case 0x49fa6d:c.instructions+=1;goto B49fa6d;
case 0x49fa72:goto L49fa72;
case 0x49fa74:c.instructions+=11;goto B49fa74;
case 0x49fa77:c.instructions+=10;goto B49fa77;
case 0x49fa7b:c.instructions+=9;goto B49fa7b;
case 0x49fa7e:c.instructions+=8;goto B49fa7e;
case 0x49fa81:c.instructions+=7;goto B49fa81;
case 0x49fa84:c.instructions+=6;goto B49fa84;
case 0x49fa85:c.instructions+=5;goto B49fa85;
case 0x49fa88:c.instructions+=4;goto B49fa88;
case 0x49fa8b:c.instructions+=3;goto B49fa8b;
case 0x49fa8d:c.instructions+=2;goto B49fa8d;
case 0x49fa8e:c.instructions+=1;goto B49fa8e;
case 0x49fa90:goto L49fa90;
case 0x49fa91:c.instructions+=3;goto B49fa91;
case 0x49fa93:c.instructions+=2;goto B49fa93;
case 0x49fa96:c.instructions+=1;goto B49fa96;
case 0x49fa98:goto L49fa98;
case 0x49fa9b:goto L49fa9b;
case 0x49fa9c:c.instructions+=2;goto B49fa9c;
case 0x49fa9d:c.instructions+=1;goto B49fa9d;
case 0x49faa0:goto L49faa0;
case 0x49faa4:c.instructions+=7;goto B49faa4;
case 0x49faa7:c.instructions+=6;goto B49faa7;
case 0x49faac:c.instructions+=5;goto B49faac;
case 0x49faad:c.instructions+=4;goto B49faad;
case 0x49faae:c.instructions+=3;goto B49faae;
case 0x49faaf:c.instructions+=2;goto B49faaf;
case 0x49fab1:c.instructions+=1;goto B49fab1;
case 0x49fab7:goto L49fab7;
case 0x49fabd:goto L49fabd;
case 0x49fac2:c.instructions+=1;goto B49fac2;
case 0x49fac4:goto L49fac4;
case 0x49fac6:goto L49fac6;
case 0x49facb:c.instructions+=1;goto B49facb;
case 0x49facd:goto L49facd;
case 0x49fad2:c.instructions+=1;goto B49fad2;
case 0x49fad4:goto L49fad4;
case 0x49fad5:c.instructions+=4;goto B49fad5;
case 0x49fad6:c.instructions+=3;goto B49fad6;
case 0x49fad7:c.instructions+=2;goto B49fad7;
case 0x49fada:c.instructions+=1;goto B49fada;
case 0x49fadd:goto L49fadd;
case 0x49fae0:c.instructions+=1;goto B49fae0;
case 0x49fae5:goto L49fae5;
case 0x49fae6:c.instructions+=4;goto B49fae6;
case 0x49fae7:c.instructions+=3;goto B49fae7;
case 0x49fae8:c.instructions+=2;goto B49fae8;
case 0x49faeb:c.instructions+=1;goto B49faeb;
case 0x49faee:goto L49faee;
case 0x49faf1:c.instructions+=5;goto B49faf1;
case 0x49faf3:c.instructions+=4;goto B49faf3;
case 0x49faf8:c.instructions+=3;goto B49faf8;
case 0x49fafd:c.instructions+=2;goto B49fafd;
case 0x49fafe:c.instructions+=1;goto B49fafe;
case 0x49fb03:goto L49fb03;
case 0x49fb06:c.instructions+=5;goto B49fb06;
case 0x49fb07:c.instructions+=4;goto B49fb07;
case 0x49fb08:c.instructions+=3;goto B49fb08;
case 0x49fb09:c.instructions+=2;goto B49fb09;
case 0x49fb0c:c.instructions+=1;goto B49fb0c;
case 0x49fb0f:goto L49fb0f;
case 0x49fb14:c.instructions+=1;goto B49fb14;
case 0x49fb1a:goto L49fb1a;
case 0x49fb1d:c.instructions+=4;goto B49fb1d;
case 0x49fb20:c.instructions+=3;goto B49fb20;
case 0x49fb21:c.instructions+=2;goto B49fb21;
case 0x49fb23:c.instructions+=1;goto B49fb23;
case 0x49fb28:goto L49fb28;
case 0x49fb2f:c.instructions+=1;goto B49fb2f;
case 0x49fb31:goto L49fb31;
case 0x49fb32:goto L49fb32;
case 0x49fb33:c.instructions+=2;goto B49fb33;
case 0x49fb36:c.instructions+=1;goto B49fb36;
case 0x49fb38:goto L49fb38;
case 0x49fb3f:goto L49fb3f;
case 0x49fb44:c.instructions+=1;goto B49fb44;
case 0x49fb46:goto L49fb46;
case 0x49fb4b:c.instructions+=1;goto B49fb4b;
case 0x49fb4d:goto L49fb4d;
case 0x49fb52:c.instructions+=1;goto B49fb52;
case 0x49fb54:goto L49fb54;
case 0x49fb59:c.instructions+=1;goto B49fb59;
case 0x49fb5b:goto L49fb5b;
case 0x49fb60:c.instructions+=1;goto B49fb60;
case 0x49fb62:goto L49fb62;
case 0x49fb67:goto L49fb67;
case 0x49fb6d:c.instructions+=3;goto B49fb6d;
case 0x49fb6e:c.instructions+=2;goto B49fb6e;
case 0x49fb6f:c.instructions+=1;goto B49fb6f;
case 0x49fb74:goto L49fb74;
case 0x49fb77:c.instructions+=2;goto B49fb77;
case 0x49fb78:c.instructions+=1;goto B49fb78;
case 0x49fb7d:goto L49fb7d;
case 0x49fb82:c.instructions+=6;goto B49fb82;
case 0x49fb88:c.instructions+=5;goto B49fb88;
case 0x49fb8a:c.instructions+=4;goto B49fb8a;
case 0x49fb8f:c.instructions+=3;goto B49fb8f;
case 0x49fb90:c.instructions+=2;goto B49fb90;
case 0x49fb91:c.instructions+=1;goto B49fb91;
case 0x49fb96:goto L49fb96;
case 0x49fb99:c.instructions+=5;goto B49fb99;
case 0x49fb9a:c.instructions+=4;goto B49fb9a;
case 0x49fb9b:c.instructions+=3;goto B49fb9b;
case 0x49fb9c:c.instructions+=2;goto B49fb9c;
case 0x49fb9f:c.instructions+=1;goto B49fb9f;
case 0x49fba2:goto L49fba2;
case 0x49fba5:c.instructions+=2;goto B49fba5;
case 0x49fba7:c.instructions+=1;goto B49fba7;
case 0x49fbac:goto L49fbac;
case 0x49fbaf:c.instructions+=2;goto B49fbaf;
case 0x49fbb1:c.instructions+=1;goto B49fbb1;
case 0x49fbb3:goto L49fbb3;
case 0x49fbb6:c.instructions+=3;goto B49fbb6;
case 0x49fbbb:c.instructions+=2;goto B49fbbb;
case 0x49fbbc:c.instructions+=1;goto B49fbbc;
case 0x49fbc1:goto L49fbc1;
case 0x49fbc3:c.instructions+=2;goto B49fbc3;
case 0x49fbc5:c.instructions+=1;goto B49fbc5;
case 0x49fbca:goto L49fbca;
case 0x49fbcd:c.instructions+=4;goto B49fbcd;
case 0x49fbd0:c.instructions+=3;goto B49fbd0;
case 0x49fbd1:c.instructions+=2;goto B49fbd1;
case 0x49fbd3:c.instructions+=1;goto B49fbd3;
case 0x49fbd8:goto L49fbd8;
case 0x49fbd9:c.instructions+=4;goto B49fbd9;
case 0x49fbda:c.instructions+=3;goto B49fbda;
case 0x49fbdc:c.instructions+=2;goto B49fbdc;
case 0x49fbe2:c.instructions+=1;goto B49fbe2;
case 0x49fbe7:goto L49fbe7;
case 0x49fbe8:c.instructions+=4;goto B49fbe8;
case 0x49fbe9:c.instructions+=3;goto B49fbe9;
case 0x49fbea:c.instructions+=2;goto B49fbea;
case 0x49fbed:c.instructions+=1;goto B49fbed;
case 0x49fbf0:goto L49fbf0;
case 0x49fbf5:c.instructions+=1;goto B49fbf5;
case 0x49fbfb:goto L49fbfb;
case 0x49fc00:c.instructions+=1;goto B49fc00;
case 0x49fc06:goto L49fc06;
case 0x49fc0b:c.instructions+=1;goto B49fc0b;
case 0x49fc11:goto L49fc11;
case 0x49fc16:c.instructions+=3;goto B49fc16;
case 0x49fc18:c.instructions+=2;goto B49fc18;
case 0x49fc1d:c.instructions+=1;goto B49fc1d;
case 0x49fc21:goto L49fc21;
case 0x49fc23:goto L49fc23;
case 0x49fc25:c.instructions+=4;goto B49fc25;
case 0x49fc26:c.instructions+=3;goto B49fc26;
case 0x49fc29:c.instructions+=2;goto B49fc29;
case 0x49fc2b:c.instructions+=1;goto B49fc2b;
case 0x49fc30:goto L49fc30;
case 0x49fc33:c.instructions+=3;goto B49fc33;
case 0x49fc34:c.instructions+=2;goto B49fc34;
case 0x49fc36:c.instructions+=1;goto B49fc36;
case 0x49fc3b:goto L49fc3b;
case 0x49fc3c:c.instructions+=5;goto B49fc3c;
case 0x49fc41:c.instructions+=4;goto B49fc41;
case 0x49fc45:c.instructions+=3;goto B49fc45;
case 0x49fc47:c.instructions+=2;goto B49fc47;
case 0x49fc48:c.instructions+=1;goto B49fc48;
case 0x49fc4d:goto L49fc4d;
case 0x49fc50:c.instructions+=3;goto B49fc50;
case 0x49fc54:c.instructions+=2;goto B49fc54;
case 0x49fc55:c.instructions+=1;goto B49fc55;
case 0x49fc5a:goto L49fc5a;
case 0x49fc5b:c.instructions+=2;goto B49fc5b;
case 0x49fc5c:c.instructions+=1;goto B49fc5c;
case 0x49fc61:goto L49fc61;
case 0x49fc62:c.instructions+=1;goto B49fc62;
case 0x49fc67:goto L49fc67;
case 0x49fc6a:c.instructions+=2;goto B49fc6a;
case 0x49fc6c:c.instructions+=1;goto B49fc6c;
case 0x49fc72:goto L49fc72;
case 0x49fc75:c.instructions+=3;goto B49fc75;
case 0x49fc76:c.instructions+=2;goto B49fc76;
case 0x49fc7b:c.instructions+=1;goto B49fc7b;
case 0x49fc80:goto L49fc80;
case 0x49fc83:c.instructions+=5;goto B49fc83;
case 0x49fc84:c.instructions+=4;goto B49fc84;
case 0x49fc85:c.instructions+=3;goto B49fc85;
case 0x49fc86:c.instructions+=2;goto B49fc86;
case 0x49fc89:c.instructions+=1;goto B49fc89;
case 0x49fc8c:goto L49fc8c;
case 0x49fc8f:c.instructions+=2;goto B49fc8f;
case 0x49fc91:c.instructions+=1;goto B49fc91;
case 0x49fc96:goto L49fc96;
case 0x49fc99:c.instructions+=2;goto B49fc99;
case 0x49fc9b:c.instructions+=1;goto B49fc9b;
case 0x49fc9d:goto L49fc9d;
case 0x49fca0:c.instructions+=3;goto B49fca0;
case 0x49fca5:c.instructions+=2;goto B49fca5;
case 0x49fca6:c.instructions+=1;goto B49fca6;
case 0x49fcab:goto L49fcab;
case 0x49fcad:c.instructions+=2;goto B49fcad;
case 0x49fcaf:c.instructions+=1;goto B49fcaf;
case 0x49fcb4:goto L49fcb4;
case 0x49fcb7:c.instructions+=4;goto B49fcb7;
case 0x49fcba:c.instructions+=3;goto B49fcba;
case 0x49fcbb:c.instructions+=2;goto B49fcbb;
case 0x49fcbd:c.instructions+=1;goto B49fcbd;
case 0x49fcc2:goto L49fcc2;
case 0x49fcc3:c.instructions+=4;goto B49fcc3;
case 0x49fcc4:c.instructions+=3;goto B49fcc4;
case 0x49fcc6:c.instructions+=2;goto B49fcc6;
case 0x49fccc:c.instructions+=1;goto B49fccc;
case 0x49fcd1:goto L49fcd1;
case 0x49fcd2:c.instructions+=4;goto B49fcd2;
case 0x49fcd3:c.instructions+=3;goto B49fcd3;
case 0x49fcd4:c.instructions+=2;goto B49fcd4;
case 0x49fcd7:c.instructions+=1;goto B49fcd7;
case 0x49fcda:goto L49fcda;
case 0x49fcdd:c.instructions+=2;goto B49fcdd;
case 0x49fcde:c.instructions+=1;goto B49fcde;
case 0x49fce3:goto L49fce3;
case 0x49fce9:c.instructions+=6;goto B49fce9;
case 0x49fcee:c.instructions+=5;goto B49fcee;
case 0x49fcf0:c.instructions+=4;goto B49fcf0;
case 0x49fcf5:c.instructions+=3;goto B49fcf5;
case 0x49fcf6:c.instructions+=2;goto B49fcf6;
case 0x49fcf7:c.instructions+=1;goto B49fcf7;
case 0x49fcfc:goto L49fcfc;
case 0x49fcff:goto L49fcff;
case 0x49fd00:c.instructions+=4;goto B49fd00;
case 0x49fd01:c.instructions+=3;goto B49fd01;
case 0x49fd02:c.instructions+=2;goto B49fd02;
case 0x49fd05:c.instructions+=1;goto B49fd05;
case 0x49fd20:goto L49fd20;
case 0x49fd24:c.instructions+=7;goto B49fd24;
case 0x49fd27:c.instructions+=6;goto B49fd27;
case 0x49fd2c:c.instructions+=5;goto B49fd2c;
case 0x49fd2d:c.instructions+=4;goto B49fd2d;
case 0x49fd2e:c.instructions+=3;goto B49fd2e;
case 0x49fd2f:c.instructions+=2;goto B49fd2f;
case 0x49fd31:c.instructions+=1;goto B49fd31;
case 0x49fd37:goto L49fd37;
case 0x49fd3d:goto L49fd3d;
case 0x49fd42:c.instructions+=1;goto B49fd42;
case 0x49fd44:goto L49fd44;
case 0x49fd46:goto L49fd46;
case 0x49fd4b:c.instructions+=1;goto B49fd4b;
case 0x49fd4d:goto L49fd4d;
case 0x49fd52:c.instructions+=1;goto B49fd52;
case 0x49fd54:goto L49fd54;
case 0x49fd55:c.instructions+=4;goto B49fd55;
case 0x49fd56:c.instructions+=3;goto B49fd56;
case 0x49fd57:c.instructions+=2;goto B49fd57;
case 0x49fd5a:c.instructions+=1;goto B49fd5a;
case 0x49fd5d:goto L49fd5d;
case 0x49fd60:c.instructions+=1;goto B49fd60;
case 0x49fd65:goto L49fd65;
case 0x49fd66:c.instructions+=4;goto B49fd66;
case 0x49fd67:c.instructions+=3;goto B49fd67;
case 0x49fd68:c.instructions+=2;goto B49fd68;
case 0x49fd6b:c.instructions+=1;goto B49fd6b;
case 0x49fd6e:goto L49fd6e;
case 0x49fd71:c.instructions+=5;goto B49fd71;
case 0x49fd73:c.instructions+=4;goto B49fd73;
case 0x49fd78:c.instructions+=3;goto B49fd78;
case 0x49fd7d:c.instructions+=2;goto B49fd7d;
case 0x49fd7e:c.instructions+=1;goto B49fd7e;
case 0x49fd83:goto L49fd83;
case 0x49fd86:c.instructions+=5;goto B49fd86;
case 0x49fd87:c.instructions+=4;goto B49fd87;
case 0x49fd88:c.instructions+=3;goto B49fd88;
case 0x49fd89:c.instructions+=2;goto B49fd89;
case 0x49fd8c:c.instructions+=1;goto B49fd8c;
case 0x49fd8f:goto L49fd8f;
case 0x49fd94:c.instructions+=1;goto B49fd94;
case 0x49fd9a:goto L49fd9a;
case 0x49fd9d:c.instructions+=4;goto B49fd9d;
case 0x49fda0:c.instructions+=3;goto B49fda0;
case 0x49fda1:c.instructions+=2;goto B49fda1;
case 0x49fda3:c.instructions+=1;goto B49fda3;
case 0x49fda8:goto L49fda8;
case 0x49fdaf:c.instructions+=1;goto B49fdaf;
case 0x49fdb1:goto L49fdb1;
case 0x49fdb2:goto L49fdb2;
case 0x49fdb3:c.instructions+=2;goto B49fdb3;
case 0x49fdb6:c.instructions+=1;goto B49fdb6;
case 0x49fdb8:goto L49fdb8;
case 0x49fdbf:goto L49fdbf;
case 0x49fdc4:c.instructions+=1;goto B49fdc4;
case 0x49fdc6:goto L49fdc6;
case 0x49fdcb:c.instructions+=1;goto B49fdcb;
case 0x49fdcd:goto L49fdcd;
case 0x49fdd2:c.instructions+=1;goto B49fdd2;
case 0x49fdd4:goto L49fdd4;
case 0x49fdd9:c.instructions+=1;goto B49fdd9;
case 0x49fddb:goto L49fddb;
case 0x49fde0:goto L49fde0;
case 0x49fde6:c.instructions+=3;goto B49fde6;
case 0x49fde7:c.instructions+=2;goto B49fde7;
case 0x49fde8:c.instructions+=1;goto B49fde8;
case 0x49fded:goto L49fded;
case 0x49fdf0:c.instructions+=2;goto B49fdf0;
case 0x49fdf1:c.instructions+=1;goto B49fdf1;
case 0x49fdf6:goto L49fdf6;
case 0x49fdfb:c.instructions+=6;goto B49fdfb;
case 0x49fe01:c.instructions+=5;goto B49fe01;
case 0x49fe03:c.instructions+=4;goto B49fe03;
case 0x49fe08:c.instructions+=3;goto B49fe08;
case 0x49fe09:c.instructions+=2;goto B49fe09;
case 0x49fe0a:c.instructions+=1;goto B49fe0a;
case 0x49fe0f:goto L49fe0f;
case 0x49fe12:c.instructions+=5;goto B49fe12;
case 0x49fe13:c.instructions+=4;goto B49fe13;
case 0x49fe14:c.instructions+=3;goto B49fe14;
case 0x49fe15:c.instructions+=2;goto B49fe15;
case 0x49fe18:c.instructions+=1;goto B49fe18;
case 0x49fe1b:goto L49fe1b;
case 0x49fe1e:c.instructions+=2;goto B49fe1e;
case 0x49fe20:c.instructions+=1;goto B49fe20;
case 0x49fe25:goto L49fe25;
case 0x49fe28:c.instructions+=2;goto B49fe28;
case 0x49fe2a:c.instructions+=1;goto B49fe2a;
case 0x49fe2c:goto L49fe2c;
case 0x49fe2f:c.instructions+=3;goto B49fe2f;
case 0x49fe34:c.instructions+=2;goto B49fe34;
case 0x49fe35:c.instructions+=1;goto B49fe35;
case 0x49fe3a:goto L49fe3a;
case 0x49fe3c:c.instructions+=2;goto B49fe3c;
case 0x49fe3e:c.instructions+=1;goto B49fe3e;
case 0x49fe43:goto L49fe43;
case 0x49fe46:c.instructions+=4;goto B49fe46;
case 0x49fe49:c.instructions+=3;goto B49fe49;
case 0x49fe4a:c.instructions+=2;goto B49fe4a;
case 0x49fe4c:c.instructions+=1;goto B49fe4c;
case 0x49fe51:goto L49fe51;
case 0x49fe52:c.instructions+=4;goto B49fe52;
case 0x49fe53:c.instructions+=3;goto B49fe53;
case 0x49fe55:c.instructions+=2;goto B49fe55;
case 0x49fe5b:c.instructions+=1;goto B49fe5b;
case 0x49fe60:goto L49fe60;
case 0x49fe61:c.instructions+=4;goto B49fe61;
case 0x49fe62:c.instructions+=3;goto B49fe62;
case 0x49fe63:c.instructions+=2;goto B49fe63;
case 0x49fe66:c.instructions+=1;goto B49fe66;
case 0x49fe69:goto L49fe69;
case 0x49fe6e:c.instructions+=1;goto B49fe6e;
case 0x49fe74:goto L49fe74;
case 0x49fe79:c.instructions+=1;goto B49fe79;
case 0x49fe7f:goto L49fe7f;
case 0x49fe84:c.instructions+=1;goto B49fe84;
case 0x49fe8a:goto L49fe8a;
case 0x49fe8f:c.instructions+=3;goto B49fe8f;
case 0x49fe91:c.instructions+=2;goto B49fe91;
case 0x49fe96:c.instructions+=1;goto B49fe96;
case 0x49fe9a:goto L49fe9a;
case 0x49fe9c:goto L49fe9c;
case 0x49fe9e:c.instructions+=4;goto B49fe9e;
case 0x49fe9f:c.instructions+=3;goto B49fe9f;
case 0x49fea2:c.instructions+=2;goto B49fea2;
case 0x49fea4:c.instructions+=1;goto B49fea4;
case 0x49fea9:goto L49fea9;
case 0x49feac:c.instructions+=3;goto B49feac;
case 0x49fead:c.instructions+=2;goto B49fead;
case 0x49feaf:c.instructions+=1;goto B49feaf;
case 0x49feb4:goto L49feb4;
case 0x49feb5:c.instructions+=5;goto B49feb5;
case 0x49feba:c.instructions+=4;goto B49feba;
case 0x49febe:c.instructions+=3;goto B49febe;
case 0x49fec0:c.instructions+=2;goto B49fec0;
case 0x49fec1:c.instructions+=1;goto B49fec1;
case 0x49fec6:goto L49fec6;
case 0x49fec9:c.instructions+=3;goto B49fec9;
case 0x49fecd:c.instructions+=2;goto B49fecd;
case 0x49fece:c.instructions+=1;goto B49fece;
case 0x49fed3:goto L49fed3;
case 0x49fed4:c.instructions+=2;goto B49fed4;
case 0x49fed5:c.instructions+=1;goto B49fed5;
case 0x49feda:goto L49feda;
case 0x49fedb:c.instructions+=1;goto B49fedb;
case 0x49fee0:goto L49fee0;
case 0x49fee3:c.instructions+=2;goto B49fee3;
case 0x49fee5:c.instructions+=1;goto B49fee5;
case 0x49feeb:goto L49feeb;
case 0x49feee:c.instructions+=3;goto B49feee;
case 0x49feef:c.instructions+=2;goto B49feef;
case 0x49fef4:c.instructions+=1;goto B49fef4;
case 0x49fef9:goto L49fef9;
case 0x49fefc:c.instructions+=5;goto B49fefc;
case 0x49fefd:c.instructions+=4;goto B49fefd;
case 0x49fefe:c.instructions+=3;goto B49fefe;
case 0x49feff:c.instructions+=2;goto B49feff;
case 0x49ff02:c.instructions+=1;goto B49ff02;
case 0x49ff05:goto L49ff05;
case 0x49ff08:c.instructions+=2;goto B49ff08;
case 0x49ff0a:c.instructions+=1;goto B49ff0a;
case 0x49ff0f:goto L49ff0f;
case 0x49ff12:c.instructions+=2;goto B49ff12;
case 0x49ff14:c.instructions+=1;goto B49ff14;
case 0x49ff16:goto L49ff16;
case 0x49ff19:c.instructions+=3;goto B49ff19;
case 0x49ff1e:c.instructions+=2;goto B49ff1e;
case 0x49ff1f:c.instructions+=1;goto B49ff1f;
case 0x49ff24:goto L49ff24;
case 0x49ff26:c.instructions+=2;goto B49ff26;
case 0x49ff28:c.instructions+=1;goto B49ff28;
case 0x49ff2d:goto L49ff2d;
case 0x49ff30:c.instructions+=4;goto B49ff30;
case 0x49ff33:c.instructions+=3;goto B49ff33;
case 0x49ff34:c.instructions+=2;goto B49ff34;
case 0x49ff36:c.instructions+=1;goto B49ff36;
case 0x49ff3b:goto L49ff3b;
case 0x49ff3c:c.instructions+=4;goto B49ff3c;
case 0x49ff3d:c.instructions+=3;goto B49ff3d;
case 0x49ff3f:c.instructions+=2;goto B49ff3f;
case 0x49ff45:c.instructions+=1;goto B49ff45;
case 0x49ff4a:goto L49ff4a;
case 0x49ff4b:c.instructions+=4;goto B49ff4b;
case 0x49ff4c:c.instructions+=3;goto B49ff4c;
case 0x49ff4d:c.instructions+=2;goto B49ff4d;
case 0x49ff50:c.instructions+=1;goto B49ff50;
case 0x49ff53:goto L49ff53;
case 0x49ff56:c.instructions+=2;goto B49ff56;
case 0x49ff57:c.instructions+=1;goto B49ff57;
case 0x49ff5c:goto L49ff5c;
case 0x49ff62:c.instructions+=6;goto B49ff62;
case 0x49ff67:c.instructions+=5;goto B49ff67;
case 0x49ff69:c.instructions+=4;goto B49ff69;
case 0x49ff6e:c.instructions+=3;goto B49ff6e;
case 0x49ff6f:c.instructions+=2;goto B49ff6f;
case 0x49ff70:c.instructions+=1;goto B49ff70;
case 0x49ff75:goto L49ff75;
case 0x49ff78:goto L49ff78;
case 0x49ff79:c.instructions+=4;goto B49ff79;
case 0x49ff7a:c.instructions+=3;goto B49ff7a;
case 0x49ff7b:c.instructions+=2;goto B49ff7b;
case 0x49ff7e:c.instructions+=1;goto B49ff7e;
case 0x49ffa0:goto L49ffa0;
case 0x49ffa1:c.instructions+=4;goto B49ffa1;
case 0x49ffa5:c.instructions+=3;goto B49ffa5;
case 0x49ffaa:c.instructions+=2;goto B49ffaa;
case 0x49ffab:c.instructions+=1;goto B49ffab;
case 0x49ffb0:goto L49ffb0;
case 0x49ffb3:c.instructions+=2;goto B49ffb3;
case 0x49ffb5:c.instructions+=1;goto B49ffb5;
case 0x49ffb7:goto L49ffb7;
case 0x49ffbc:c.instructions+=2;goto B49ffbc;
case 0x49ffbd:c.instructions+=1;goto B49ffbd;
case 0x49ffc2:goto L49ffc2;
case 0x49ffc5:c.instructions+=2;goto B49ffc5;
case 0x49ffc7:c.instructions+=1;goto B49ffc7;
case 0x49ffc9:goto L49ffc9;
case 0x49ffce:c.instructions+=2;goto B49ffce;
case 0x49ffcf:c.instructions+=1;goto B49ffcf;
case 0x49ffd4:goto L49ffd4;
case 0x49ffd7:c.instructions+=2;goto B49ffd7;
case 0x49ffd9:c.instructions+=1;goto B49ffd9;
case 0x49ffdb:goto L49ffdb;
case 0x49ffe0:c.instructions+=2;goto B49ffe0;
case 0x49ffe1:c.instructions+=1;goto B49ffe1;
case 0x49ffe6:goto L49ffe6;
case 0x49ffe9:c.instructions+=2;goto B49ffe9;
case 0x49ffeb:c.instructions+=1;goto B49ffeb;
case 0x49ffed:goto L49ffed;
case 0x49ffef:c.instructions+=2;goto B49ffef;
case 0x49fff0:c.instructions+=1;goto B49fff0;
case 0x49fff1:goto L49fff1;
case 0x49fff6:c.instructions+=2;goto B49fff6;
case 0x49fff7:c.instructions+=1;goto B49fff7;
default:missing_instruction(c.pc);}
B49f001:L49f001:{c.instructions+=2;NFSU2_TR(0x49f001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f002:{NFSU2_TR(0x49f002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f007ull));
TAIL_STATIC(0x537c00u,537);
}
B49f007:L49f007:{c.instructions+=3;NFSU2_TR(0x49f007);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f00a:{NFSU2_TR(0x49f00a);
w4(R+28,u32(0x1ull));
}
B49f00f:{NFSU2_TR(0x49f00f);
w4(R+20,u32(0x6ull));
}
B49f014:L49f014:{c.instructions+=6;NFSU2_TR(0x49f014);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49f017:{NFSU2_TR(0x49f017);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f019:{NFSU2_TR(0x49f019);
u8 U[4];
w4(U+0,u32(0x78feecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f01e:{NFSU2_TR(0x49f01e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f01f:{NFSU2_TR(0x49f01f);
u8 U[4];
w4(U+0,u32(0x78fedcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f024:{NFSU2_TR(0x49f024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f029ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B49f029:L49f029:{c.instructions+=4;NFSU2_TR(0x49f029);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49f02c:{NFSU2_TR(0x49f02c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f02d:{NFSU2_TR(0x49f02d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f02e:{NFSU2_TR(0x49f02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f033ull));
TAIL_STATIC(0x537c00u,537);
}
B49f033:L49f033:{c.instructions+=7;NFSU2_TR(0x49f033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49f036:{NFSU2_TR(0x49f036);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f039:{NFSU2_TR(0x49f039);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f03b:{NFSU2_TR(0x49f03b);
u8 U[4];
w4(U+0,u32(0x78feecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f040:{NFSU2_TR(0x49f040);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f041:{NFSU2_TR(0x49f041);
u8 U[4];
w4(U+0,u32(0x78fec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f046:{NFSU2_TR(0x49f046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f04bull));
TAIL_STATIC(0x50b9c0u,50b);
}
B49f04b:L49f04b:{c.instructions+=4;NFSU2_TR(0x49f04b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49f04e:{NFSU2_TR(0x49f04e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f04f:{NFSU2_TR(0x49f04f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f050:{NFSU2_TR(0x49f050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f055ull));
TAIL_STATIC(0x537c00u,537);
}
B49f055:L49f055:{c.instructions+=7;NFSU2_TR(0x49f055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49f058:{NFSU2_TR(0x49f058);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f05b:{NFSU2_TR(0x49f05b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f05d:{NFSU2_TR(0x49f05d);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f062:{NFSU2_TR(0x49f062);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f063:{NFSU2_TR(0x49f063);
u8 U[4];
w4(U+0,u32(0x78febcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f068:{NFSU2_TR(0x49f068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f06dull));
TAIL_STATIC(0x50b9c0u,50b);
}
B49f06d:L49f06d:{c.instructions+=4;NFSU2_TR(0x49f06d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49f070:{NFSU2_TR(0x49f070);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f071:{NFSU2_TR(0x49f071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f072:{NFSU2_TR(0x49f072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f077ull));
TAIL_STATIC(0x537c00u,537);
}
B49f077:L49f077:{c.instructions+=4;NFSU2_TR(0x49f077);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f07a:{NFSU2_TR(0x49f07a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f07b:{NFSU2_TR(0x49f07b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B49f07c:{NFSU2_TR(0x49f07c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f014u);}goto L49f014;}}
}
B49f07e:L49f07e:{c.instructions+=6;NFSU2_TR(0x49f07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f081:{NFSU2_TR(0x49f081);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f083:{NFSU2_TR(0x49f083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f084:{NFSU2_TR(0x49f084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49f085:{NFSU2_TR(0x49f085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f086:{NFSU2_TR(0x49f086);
if(r1(R+518)){{goto L49f096;}}
}
B49f088:L49f088:{c.instructions+=4;NFSU2_TR(0x49f088);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f08b:{NFSU2_TR(0x49f08b);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f090:{NFSU2_TR(0x49f090);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f091:{NFSU2_TR(0x49f091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f096ull));
TAIL_STATIC(0x51ee80u,51e);
}
B49f096:L49f096:{c.instructions+=6;NFSU2_TR(0x49f096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f099:{NFSU2_TR(0x49f099);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f09b:{NFSU2_TR(0x49f09b);
u8 U[4];
w4(U+0,u32(0x78feb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0a0:{NFSU2_TR(0x49f0a0);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0a5:{NFSU2_TR(0x49f0a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0a6:{NFSU2_TR(0x49f0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f0abull));
TAIL_STATIC(0x537c00u,537);
}
B49f0ab:L49f0ab:{c.instructions+=6;NFSU2_TR(0x49f0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f0ae:{NFSU2_TR(0x49f0ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0b0:{NFSU2_TR(0x49f0b0);
u8 U[4];
w4(U+0,u32(0x78feb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0b5:{NFSU2_TR(0x49f0b5);
u8 U[4];
w4(U+0,u32(0xb1000cc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0ba:{NFSU2_TR(0x49f0ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0bb:{NFSU2_TR(0x49f0bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f0c0ull));
TAIL_STATIC(0x537c00u,537);
}
B49f0c0:L49f0c0:{c.instructions+=6;NFSU2_TR(0x49f0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f0c3:{NFSU2_TR(0x49f0c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0c5:{NFSU2_TR(0x49f0c5);
u8 U[4];
w4(U+0,u32(0x78feb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0ca:{NFSU2_TR(0x49f0ca);
u8 U[4];
w4(U+0,u32(0xabc08912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0cf:{NFSU2_TR(0x49f0cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f0d0:{NFSU2_TR(0x49f0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f0d5ull));
TAIL_STATIC(0x537c00u,537);
}
B49f0d5:L49f0d5:{c.instructions+=3;NFSU2_TR(0x49f0d5);
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
B49f0d8:{NFSU2_TR(0x49f0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f0d9:{NFSU2_TR(0x49f0d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f0dc:L49f0dc:{c.instructions+=3;NFSU2_TR(0x49f0dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49f0e2:{NFSU2_TR(0x49f0e2);
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
B49f0e4:{NFSU2_TR(0x49f0e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f231;}}
}
B49f0ea:L49f0ea:{c.instructions+=3;NFSU2_TR(0x49f0ea);
__builtin_memmove((R+0),gp(0x850084),4);
}
B49f0ef:{NFSU2_TR(0x49f0ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f0f1:{NFSU2_TR(0x49f0f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f181;}}
}
B49f0f7:L49f0f7:{c.instructions+=3;NFSU2_TR(0x49f0f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49f0fd:{NFSU2_TR(0x49f0fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f0ff:{NFSU2_TR(0x49f0ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f132;}}
}
B49f101:L49f101:{c.instructions+=6;NFSU2_TR(0x49f101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f104:{NFSU2_TR(0x49f104);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f106:{NFSU2_TR(0x49f106);
u8 U[4];
w4(U+0,u32(0x78feacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f10b:{NFSU2_TR(0x49f10b);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f110:{NFSU2_TR(0x49f110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f111:{NFSU2_TR(0x49f111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f116ull));
TAIL_STATIC(0x537c00u,537);
}
B49f116:L49f116:{c.instructions+=6;NFSU2_TR(0x49f116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f119:{NFSU2_TR(0x49f119);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f11b:{NFSU2_TR(0x49f11b);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f120:{NFSU2_TR(0x49f120);
u8 U[4];
w4(U+0,u32(0xb1000cc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f125:{NFSU2_TR(0x49f125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f126:{NFSU2_TR(0x49f126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f12bull));
TAIL_STATIC(0x537c00u,537);
}
B49f12b:L49f12b:{c.instructions+=3;NFSU2_TR(0x49f12b);
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
B49f12e:{NFSU2_TR(0x49f12e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f12f:{NFSU2_TR(0x49f12f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f132:L49f132:{c.instructions+=4;NFSU2_TR(0x49f132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f135:{NFSU2_TR(0x49f135);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49f138:{NFSU2_TR(0x49f138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f139:{NFSU2_TR(0x49f139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f13eull));
TAIL_STATIC(0x51f440u,51f);
}
B49f13e:L49f13e:{c.instructions+=3;NFSU2_TR(0x49f13e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f141:{NFSU2_TR(0x49f141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f144:{NFSU2_TR(0x49f144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f21c;}}
}
B49f14a:L49f14a:{c.instructions+=4;NFSU2_TR(0x49f14a);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f14f:{NFSU2_TR(0x49f14f);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f154:{NFSU2_TR(0x49f154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f155:{NFSU2_TR(0x49f155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f15aull));
TAIL_STATIC(0x537cc0u,537);
}
B49f15a:L49f15a:{c.instructions+=3;NFSU2_TR(0x49f15a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49f15d:{NFSU2_TR(0x49f15d);
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
B49f15f:{NFSU2_TR(0x49f15f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f231;}}
}
B49f165:L49f165:{c.instructions+=6;NFSU2_TR(0x49f165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f168:{NFSU2_TR(0x49f168);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f16a:{NFSU2_TR(0x49f16a);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f16f:{NFSU2_TR(0x49f16f);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f174:{NFSU2_TR(0x49f174);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f175:{NFSU2_TR(0x49f175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f17aull));
TAIL_STATIC(0x537c00u,537);
}
B49f17a:L49f17a:{c.instructions+=3;NFSU2_TR(0x49f17a);
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
B49f17d:{NFSU2_TR(0x49f17d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f17e:{NFSU2_TR(0x49f17e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f181:L49f181:{c.instructions+=4;NFSU2_TR(0x49f181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f184:{NFSU2_TR(0x49f184);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49f187:{NFSU2_TR(0x49f187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f188:{NFSU2_TR(0x49f188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f18dull));
TAIL_STATIC(0x51f440u,51f);
}
B49f18d:L49f18d:{c.instructions+=2;NFSU2_TR(0x49f18d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f190:{NFSU2_TR(0x49f190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f1d7;}}
}
B49f192:L49f192:{c.instructions+=2;NFSU2_TR(0x49f192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f198:{NFSU2_TR(0x49f198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f19dull));
TAIL_STATIC(0x58d9f0u,58d);
}
B49f19d:L49f19d:{c.instructions+=2;NFSU2_TR(0x49f19d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f19f:{NFSU2_TR(0x49f19f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f1d7;}}
}
B49f1a1:L49f1a1:{c.instructions+=5;NFSU2_TR(0x49f1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f1a4:{NFSU2_TR(0x49f1a4);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1a9:{NFSU2_TR(0x49f1a9);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1ae:{NFSU2_TR(0x49f1ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1af:{NFSU2_TR(0x49f1af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f1b4ull));
TAIL_STATIC(0x537cc0u,537);
}
B49f1b4:L49f1b4:{c.instructions+=3;NFSU2_TR(0x49f1b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49f1b7:{NFSU2_TR(0x49f1b7);
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
B49f1b9:{NFSU2_TR(0x49f1b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f231;}}
}
B49f1bb:L49f1bb:{c.instructions+=6;NFSU2_TR(0x49f1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f1be:{NFSU2_TR(0x49f1be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1c0:{NFSU2_TR(0x49f1c0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1c5:{NFSU2_TR(0x49f1c5);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1ca:{NFSU2_TR(0x49f1ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1cb:{NFSU2_TR(0x49f1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f1d0ull));
TAIL_STATIC(0x537c00u,537);
}
B49f1d0:L49f1d0:{c.instructions+=3;NFSU2_TR(0x49f1d0);
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
B49f1d3:{NFSU2_TR(0x49f1d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f1d4:{NFSU2_TR(0x49f1d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f1d7:L49f1d7:{c.instructions+=2;NFSU2_TR(0x49f1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f1dd:{NFSU2_TR(0x49f1dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f1e2ull));
TAIL_STATIC(0x58d9f0u,58d);
}
B49f1e2:L49f1e2:{c.instructions+=3;NFSU2_TR(0x49f1e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f1e4:{NFSU2_TR(0x49f1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f1e7:{NFSU2_TR(0x49f1e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f21c;}}
}
B49f1e9:L49f1e9:{c.instructions+=4;NFSU2_TR(0x49f1e9);
u8 U[4];
w4(U+0,u32(0x78fea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1ee:{NFSU2_TR(0x49f1ee);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1f3:{NFSU2_TR(0x49f1f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f1f4:{NFSU2_TR(0x49f1f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f1f9ull));
TAIL_STATIC(0x537cc0u,537);
}
B49f1f9:L49f1f9:{c.instructions+=3;NFSU2_TR(0x49f1f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49f1fc:{NFSU2_TR(0x49f1fc);
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
B49f1fe:{NFSU2_TR(0x49f1fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f231;}}
}
B49f200:L49f200:{c.instructions+=6;NFSU2_TR(0x49f200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f203:{NFSU2_TR(0x49f203);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f205:{NFSU2_TR(0x49f205);
u8 U[4];
w4(U+0,u32(0x78fea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f20a:{NFSU2_TR(0x49f20a);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f20f:{NFSU2_TR(0x49f20f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f210:{NFSU2_TR(0x49f210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f215ull));
TAIL_STATIC(0x537c00u,537);
}
B49f215:L49f215:{c.instructions+=3;NFSU2_TR(0x49f215);
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
B49f218:{NFSU2_TR(0x49f218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f219:{NFSU2_TR(0x49f219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f21c:L49f21c:{c.instructions+=5;NFSU2_TR(0x49f21c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f21e:{NFSU2_TR(0x49f21e);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f223:{NFSU2_TR(0x49f223);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f228:{NFSU2_TR(0x49f228);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f229:{NFSU2_TR(0x49f229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f22eull));
TAIL_STATIC(0x537c00u,537);
}
B49f22e:L49f22e:{c.instructions+=1;NFSU2_TR(0x49f22e);
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
B49f231:L49f231:{c.instructions+=2;NFSU2_TR(0x49f231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f232:{NFSU2_TR(0x49f232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f240:L49f240:{c.instructions+=6;NFSU2_TR(0x49f240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x117cull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B49f24a:{NFSU2_TR(0x49f24a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1178ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49f251:{NFSU2_TR(0x49f251);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f254:{NFSU2_TR(0x49f254);
u8 U[4];
w4(U+0,u32(0xa6f52ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f259:{NFSU2_TR(0x49f259);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f25a:{NFSU2_TR(0x49f25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f25full));
TAIL_STATIC(0x5379c0u,537);
}
B49f25f:L49f25f:{c.instructions+=2;NFSU2_TR(0x49f25f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f260:{NFSU2_TR(0x49f260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f265ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49f265:L49f265:{c.instructions+=2;NFSU2_TR(0x49f265);
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
B49f268:{NFSU2_TR(0x49f268);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f270:L49f270:{c.instructions+=9;NFSU2_TR(0x49f270);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f271:{NFSU2_TR(0x49f271);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f272:{NFSU2_TR(0x49f272);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49f276:{NFSU2_TR(0x49f276);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f277:{NFSU2_TR(0x49f277);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f278:{NFSU2_TR(0x49f278);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B49f27a:{NFSU2_TR(0x49f27a);
__builtin_memmove((R+24),(R+4),4);
}
B49f27c:{NFSU2_TR(0x49f27c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49f27e:{NFSU2_TR(0x49f27e);
__builtin_memmove((R+28),(R+28),4);
}
B49f280:L49f280:{c.instructions+=2;NFSU2_TR(0x49f280);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f28a:{NFSU2_TR(0x49f28a);
if(r1(R+518)){{goto L49f2c4;}}
}
B49f28c:L49f28c:{c.instructions+=7;NFSU2_TR(0x49f28c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f28d:{NFSU2_TR(0x49f28d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f291:{NFSU2_TR(0x49f291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f292:{NFSU2_TR(0x49f292);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x918ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49f298:{NFSU2_TR(0x49f298);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f299:{NFSU2_TR(0x49f299);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49f29d:{NFSU2_TR(0x49f29d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f2a2ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B49f2a2:L49f2a2:{c.instructions+=2;NFSU2_TR(0x49f2a2);
__builtin_memmove((R+4),(R+0),4);
}
B49f2a4:{NFSU2_TR(0x49f2a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f2a9ull));
TAIL_STATIC(0x58e530u,58e);
}
B49f2a9:L49f2a9:{c.instructions+=2;NFSU2_TR(0x49f2a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f2ab:{NFSU2_TR(0x49f2ab);
if(r1(R+518)){{goto L49f2c4;}}
}
B49f2ad:L49f2ad:{c.instructions+=4;NFSU2_TR(0x49f2ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f2b1:{NFSU2_TR(0x49f2b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2b2:{NFSU2_TR(0x49f2b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2b3:{NFSU2_TR(0x49f2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f2b8ull));
TAIL_STATIC(0x58cf60u,58c);
}
B49f2b8:L49f2b8:{c.instructions+=4;NFSU2_TR(0x49f2b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49f2bb:{NFSU2_TR(0x49f2bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f2bd:{NFSU2_TR(0x49f2bd);
__builtin_memmove((R+0),gp(0x7f6cb8),4);
}
B49f2c2:{NFSU2_TR(0x49f2c2);
if(r1(R+518)){{goto L49f2c9;}}
}
B49f2c4:L49f2c4:{c.instructions+=1;NFSU2_TR(0x49f2c4);
__builtin_memmove((R+0),gp(0x7f6cb4),4);
}
B49f2c9:L49f2c9:{c.instructions+=2;NFSU2_TR(0x49f2c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f2cb:{NFSU2_TR(0x49f2cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f2db;}}
}
B49f2cd:L49f2cd:{c.instructions+=6;NFSU2_TR(0x49f2cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2cf:{NFSU2_TR(0x49f2cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2d0:{NFSU2_TR(0x49f2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f2d3:{NFSU2_TR(0x49f2d3);
u8 U[4];
w4(U+0,u32(0x78ff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2d8:{NFSU2_TR(0x49f2d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2d9:{NFSU2_TR(0x49f2d9);
{goto L49f333;}
}
B49f2db:L49f2db:{c.instructions+=2;NFSU2_TR(0x49f2db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f2de:{NFSU2_TR(0x49f2de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f2ed;}}
}
B49f2e0:L49f2e0:{c.instructions+=6;NFSU2_TR(0x49f2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f2e3:{NFSU2_TR(0x49f2e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2e4:{NFSU2_TR(0x49f2e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2e5:{NFSU2_TR(0x49f2e5);
u8 U[4];
w4(U+0,u32(0x78ff68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2ea:{NFSU2_TR(0x49f2ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2eb:{NFSU2_TR(0x49f2eb);
{goto L49f333;}
}
B49f2ed:L49f2ed:{c.instructions+=2;NFSU2_TR(0x49f2ed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f2f0:{NFSU2_TR(0x49f2f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f2fc;}}
}
B49f2f2:L49f2f2:{c.instructions+=4;NFSU2_TR(0x49f2f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2f4:{NFSU2_TR(0x49f2f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2f5:{NFSU2_TR(0x49f2f5);
u8 U[4];
w4(U+0,u32(0x78ff54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f2fa:{NFSU2_TR(0x49f2fa);
{goto L49f32f;}
}
B49f2fc:L49f2fc:{c.instructions+=2;NFSU2_TR(0x49f2fc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f2ff:{NFSU2_TR(0x49f2ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f30f;}}
}
B49f301:L49f301:{c.instructions+=6;NFSU2_TR(0x49f301);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f303:{NFSU2_TR(0x49f303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f304:{NFSU2_TR(0x49f304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f307:{NFSU2_TR(0x49f307);
u8 U[4];
w4(U+0,u32(0x78ff44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f30c:{NFSU2_TR(0x49f30c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f30d:{NFSU2_TR(0x49f30d);
{goto L49f333;}
}
B49f30f:L49f30f:{c.instructions+=2;NFSU2_TR(0x49f30f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f312:{NFSU2_TR(0x49f312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f322;}}
}
B49f314:L49f314:{c.instructions+=6;NFSU2_TR(0x49f314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f317:{NFSU2_TR(0x49f317);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f319:{NFSU2_TR(0x49f319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f31a:{NFSU2_TR(0x49f31a);
u8 U[4];
w4(U+0,u32(0x78ff30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f31f:{NFSU2_TR(0x49f31f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f320:{NFSU2_TR(0x49f320);
{goto L49f333;}
}
B49f322:L49f322:{c.instructions+=2;NFSU2_TR(0x49f322);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f325:{NFSU2_TR(0x49f325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f33b;}}
}
B49f327:L49f327:{c.instructions+=3;NFSU2_TR(0x49f327);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f329:{NFSU2_TR(0x49f329);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f32a:{NFSU2_TR(0x49f32a);
u8 U[4];
w4(U+0,u32(0x78ff20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f32f:L49f32f:{c.instructions+=2;NFSU2_TR(0x49f32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f332:{NFSU2_TR(0x49f332);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f333:L49f333:{c.instructions+=1;NFSU2_TR(0x49f333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f338ull));
TAIL_STATIC(0x5426c0u,542);
}
B49f338:L49f338:{c.instructions+=1;NFSU2_TR(0x49f338);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f33b:L49f33b:{c.instructions+=3;NFSU2_TR(0x49f33b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f33c:{NFSU2_TR(0x49f33c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49f33f:{NFSU2_TR(0x49f33f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f280u);}goto L49f280;}}
}
B49f345:L49f345:{c.instructions+=4;NFSU2_TR(0x49f345);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x917ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49f34b:{NFSU2_TR(0x49f34b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f34d:{NFSU2_TR(0x49f34d);
__builtin_memmove((R+0),gp(0x7f6cb8),4);
}
B49f352:{NFSU2_TR(0x49f352);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f359;}}
}
B49f354:L49f354:{c.instructions+=1;NFSU2_TR(0x49f354);
__builtin_memmove((R+0),gp(0x7f6cb4),4);
}
B49f359:L49f359:{c.instructions+=6;NFSU2_TR(0x49f359);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f35b:{NFSU2_TR(0x49f35b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f35c:{NFSU2_TR(0x49f35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f35f:{NFSU2_TR(0x49f35f);
u8 U[4];
w4(U+0,u32(0x78ff0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f364:{NFSU2_TR(0x49f364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f365:{NFSU2_TR(0x49f365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f36aull));
TAIL_STATIC(0x5426c0u,542);
}
B49f36a:L49f36a:{c.instructions+=4;NFSU2_TR(0x49f36a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f36d:{NFSU2_TR(0x49f36d);
w4(R+28,u32(0x2ull));
}
B49f372:{NFSU2_TR(0x49f372);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x910ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f378:{NFSU2_TR(0x49f378);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49f380:L49f380:{c.instructions+=3;NFSU2_TR(0x49f380);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B49f383:{NFSU2_TR(0x49f383);
__builtin_memmove((R+0),gp(0x7f6cb8),4);
}
B49f388:{NFSU2_TR(0x49f388);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f38f;}}
}
B49f38a:L49f38a:{c.instructions+=1;NFSU2_TR(0x49f38a);
__builtin_memmove((R+0),gp(0x7f6cb4),4);
}
B49f38f:L49f38f:{c.instructions+=6;NFSU2_TR(0x49f38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49f392:{NFSU2_TR(0x49f392);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f394:{NFSU2_TR(0x49f394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f395:{NFSU2_TR(0x49f395);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f396:{NFSU2_TR(0x49f396);
u8 U[4];
w4(U+0,u32(0x78fef8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f39b:{NFSU2_TR(0x49f39b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f3a0ull));
TAIL_STATIC(0x50b990u,50b);
}
B49f3a0:L49f3a0:{c.instructions+=4;NFSU2_TR(0x49f3a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49f3a3:{NFSU2_TR(0x49f3a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3a4:{NFSU2_TR(0x49f3a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3a5:{NFSU2_TR(0x49f3a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f3aaull));
TAIL_STATIC(0x537c00u,537);
}
B49f3aa:L49f3aa:{c.instructions+=4;NFSU2_TR(0x49f3aa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B49f3ac:{NFSU2_TR(0x49f3ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f3af:{NFSU2_TR(0x49f3af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f3b1:{NFSU2_TR(0x49f3b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f3b4;}}
}
B49f3b3:L49f3b3:{c.instructions+=1;NFSU2_TR(0x49f3b3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f3b4:L49f3b4:{c.instructions+=5;NFSU2_TR(0x49f3b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f3b8:{NFSU2_TR(0x49f3b8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B49f3b9:{NFSU2_TR(0x49f3b9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49f3ba:{NFSU2_TR(0x49f3ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49f3be:{NFSU2_TR(0x49f3be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f380u);}goto L49f380;}}
}
B49f3c0:L49f3c0:{c.instructions+=2;NFSU2_TR(0x49f3c0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B49f3c3:{NFSU2_TR(0x49f3c3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L49f3ef;}}
}
B49f3c5:L49f3c5:{c.instructions+=7;NFSU2_TR(0x49f3c5);
__builtin_memmove((R+4),gp(0x7f6cb4),4);
}
B49f3cb:{NFSU2_TR(0x49f3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49f3ce:{NFSU2_TR(0x49f3ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3d0:{NFSU2_TR(0x49f3d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3d1:{NFSU2_TR(0x49f3d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3d2:{NFSU2_TR(0x49f3d2);
u8 U[4];
w4(U+0,u32(0x78fef8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3d7:{NFSU2_TR(0x49f3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f3dcull));
TAIL_STATIC(0x50b990u,50b);
}
B49f3dc:L49f3dc:{c.instructions+=4;NFSU2_TR(0x49f3dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49f3df:{NFSU2_TR(0x49f3df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3e0:{NFSU2_TR(0x49f3e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f3e1:{NFSU2_TR(0x49f3e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f3e6ull));
TAIL_STATIC(0x537c00u,537);
}
B49f3e6:L49f3e6:{c.instructions+=4;NFSU2_TR(0x49f3e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f3e9:{NFSU2_TR(0x49f3e9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f3ea:{NFSU2_TR(0x49f3ea);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B49f3ed:{NFSU2_TR(0x49f3ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f3c5u);}goto L49f3c5;}}
}
B49f3ef:L49f3ef:{c.instructions+=5;NFSU2_TR(0x49f3ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f3f0:{NFSU2_TR(0x49f3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f3f1:{NFSU2_TR(0x49f3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49f3f2:{NFSU2_TR(0x49f3f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f3f3:{NFSU2_TR(0x49f3f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f400:L49f400:{c.instructions+=9;NFSU2_TR(0x49f400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B49f403:{NFSU2_TR(0x49f403);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f404:{NFSU2_TR(0x49f404);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f405:{NFSU2_TR(0x49f405);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f406:{NFSU2_TR(0x49f406);
__builtin_memmove((R+12),(R+4),4);
}
B49f408:{NFSU2_TR(0x49f408);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49f40d:{NFSU2_TR(0x49f40d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49f40f:{NFSU2_TR(0x49f40f);
w4(R+4,u32(0x7ull));
}
B49f414:{NFSU2_TR(0x49f414);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49f418:L49f418:{c.instructions+=1;NFSU2_TR(0x49f418);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49f41a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f418u);}goto L49f418;}
}
B49f41a:L49f41a:{c.instructions+=3;NFSU2_TR(0x49f41a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B49f41c:{NFSU2_TR(0x49f41c);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B49f41d:{NFSU2_TR(0x49f41d);
w4(R+28,u32(0x1ull));
}
B49f422:L49f422:{c.instructions+=6;NFSU2_TR(0x49f422);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f423:{NFSU2_TR(0x49f423);
u8 U[4];
w4(U+0,u32(0x78ff90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f428:{NFSU2_TR(0x49f428);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f42c:{NFSU2_TR(0x49f42c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f42e:{NFSU2_TR(0x49f42e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f42f:{NFSU2_TR(0x49f42f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f434ull));
TAIL_STATIC(0x50c960u,50c);
}
B49f434:L49f434:{c.instructions+=4;NFSU2_TR(0x49f434);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f437:{NFSU2_TR(0x49f437);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49f43b:{NFSU2_TR(0x49f43b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f43c:{NFSU2_TR(0x49f43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f441ull));
TAIL_STATIC(0x505450u,505);
}
B49f441:L49f441:{c.instructions+=3;NFSU2_TR(0x49f441);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f442:{NFSU2_TR(0x49f442);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f443:{NFSU2_TR(0x49f443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f448ull));
TAIL_STATIC(0x5379c0u,537);
}
B49f448:L49f448:{c.instructions+=7;NFSU2_TR(0x49f448);
__builtin_memmove((R+24),(R+0),4);
}
B49f44a:{NFSU2_TR(0x49f44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f44d:{NFSU2_TR(0x49f44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f450:{NFSU2_TR(0x49f450);
u8 U[4];
w4(U+0,u32(0x78fe48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f455:{NFSU2_TR(0x49f455);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f456:{NFSU2_TR(0x49f456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f457:{NFSU2_TR(0x49f457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f45cull));
TAIL_STATIC(0x537cc0u,537);
}
B49f45c:L49f45c:{c.instructions+=3;NFSU2_TR(0x49f45c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49f45f:{NFSU2_TR(0x49f45f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f461:{NFSU2_TR(0x49f461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f47a;}}
}
B49f463:L49f463:{c.instructions+=7;NFSU2_TR(0x49f463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f466:{NFSU2_TR(0x49f466);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f469:{NFSU2_TR(0x49f469);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f46b:{NFSU2_TR(0x49f46b);
u8 U[4];
w4(U+0,u32(0x78fe48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f470:{NFSU2_TR(0x49f470);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f471:{NFSU2_TR(0x49f471);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f472:{NFSU2_TR(0x49f472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f477ull));
TAIL_STATIC(0x537c00u,537);
}
B49f477:L49f477:{c.instructions+=1;NFSU2_TR(0x49f477);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f47a:L49f47a:{c.instructions+=3;NFSU2_TR(0x49f47a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f47b:{NFSU2_TR(0x49f47b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f47e:{NFSU2_TR(0x49f47e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f422u);}goto L49f422;}}
}
B49f480:L49f480:{c.instructions+=5;NFSU2_TR(0x49f480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f481:{NFSU2_TR(0x49f481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f482:{NFSU2_TR(0x49f482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f483:{NFSU2_TR(0x49f483);
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
B49f486:{NFSU2_TR(0x49f486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f490:L49f490:{c.instructions+=9;NFSU2_TR(0x49f490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B49f493:{NFSU2_TR(0x49f493);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f494:{NFSU2_TR(0x49f494);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f495:{NFSU2_TR(0x49f495);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f496:{NFSU2_TR(0x49f496);
__builtin_memmove((R+24),(R+4),4);
}
B49f498:{NFSU2_TR(0x49f498);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49f49d:{NFSU2_TR(0x49f49d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49f49f:{NFSU2_TR(0x49f49f);
w4(R+4,u32(0x7ull));
}
B49f4a4:{NFSU2_TR(0x49f4a4);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49f4a8:L49f4a8:{c.instructions+=1;NFSU2_TR(0x49f4a8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49f4aa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f4a8u);}goto L49f4a8;}
}
B49f4aa:L49f4aa:{c.instructions+=3;NFSU2_TR(0x49f4aa);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B49f4ac:{NFSU2_TR(0x49f4ac);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B49f4ad:{NFSU2_TR(0x49f4ad);
w4(R+12,u32(0x1ull));
}
B49f4b2:L49f4b2:{c.instructions+=6;NFSU2_TR(0x49f4b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4b3:{NFSU2_TR(0x49f4b3);
u8 U[4];
w4(U+0,u32(0x78ff90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4b8:{NFSU2_TR(0x49f4b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f4bc:{NFSU2_TR(0x49f4bc);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4be:{NFSU2_TR(0x49f4be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4bf:{NFSU2_TR(0x49f4bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f4c4ull));
TAIL_STATIC(0x50c960u,50c);
}
B49f4c4:L49f4c4:{c.instructions+=4;NFSU2_TR(0x49f4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49f4c7:{NFSU2_TR(0x49f4c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49f4cb:{NFSU2_TR(0x49f4cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4cc:{NFSU2_TR(0x49f4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f4d1ull));
TAIL_STATIC(0x505450u,505);
}
B49f4d1:L49f4d1:{c.instructions+=3;NFSU2_TR(0x49f4d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4d2:{NFSU2_TR(0x49f4d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4d3:{NFSU2_TR(0x49f4d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f4d8ull));
TAIL_STATIC(0x5379c0u,537);
}
B49f4d8:L49f4d8:{c.instructions+=7;NFSU2_TR(0x49f4d8);
__builtin_memmove((R+28),(R+0),4);
}
B49f4da:{NFSU2_TR(0x49f4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f4dd:{NFSU2_TR(0x49f4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f4e0:{NFSU2_TR(0x49f4e0);
u8 U[4];
w4(U+0,u32(0x78fe58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4e5:{NFSU2_TR(0x49f4e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4e6:{NFSU2_TR(0x49f4e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4e7:{NFSU2_TR(0x49f4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f4ecull));
TAIL_STATIC(0x537cc0u,537);
}
B49f4ec:L49f4ec:{c.instructions+=3;NFSU2_TR(0x49f4ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49f4ef:{NFSU2_TR(0x49f4ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f4f1:{NFSU2_TR(0x49f4f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f50a;}}
}
B49f4f3:L49f4f3:{c.instructions+=7;NFSU2_TR(0x49f4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f4f6:{NFSU2_TR(0x49f4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f4f9:{NFSU2_TR(0x49f4f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f4fb:{NFSU2_TR(0x49f4fb);
u8 U[4];
w4(U+0,u32(0x78fe58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f500:{NFSU2_TR(0x49f500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f501:{NFSU2_TR(0x49f501);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f502:{NFSU2_TR(0x49f502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f507ull));
TAIL_STATIC(0x537c00u,537);
}
B49f507:L49f507:{c.instructions+=1;NFSU2_TR(0x49f507);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f50a:L49f50a:{c.instructions+=3;NFSU2_TR(0x49f50a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B49f50b:{NFSU2_TR(0x49f50b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f50e:{NFSU2_TR(0x49f50e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f4b2u);}goto L49f4b2;}}
}
B49f510:L49f510:{c.instructions+=6;NFSU2_TR(0x49f510);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f512:{NFSU2_TR(0x49f512);
u8 U[4];
w4(U+0,u32(0x78ff90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f517:{NFSU2_TR(0x49f517);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49f51b:{NFSU2_TR(0x49f51b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f51d:{NFSU2_TR(0x49f51d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f51e:{NFSU2_TR(0x49f51e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f523ull));
TAIL_STATIC(0x50c960u,50c);
}
B49f523:L49f523:{c.instructions+=4;NFSU2_TR(0x49f523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49f526:{NFSU2_TR(0x49f526);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f52a:{NFSU2_TR(0x49f52a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f52b:{NFSU2_TR(0x49f52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f530ull));
TAIL_STATIC(0x505450u,505);
}
B49f530:L49f530:{c.instructions+=3;NFSU2_TR(0x49f530);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f531:{NFSU2_TR(0x49f531);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f532:{NFSU2_TR(0x49f532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f537ull));
TAIL_STATIC(0x5379c0u,537);
}
B49f537:L49f537:{c.instructions+=7;NFSU2_TR(0x49f537);
__builtin_memmove((R+28),(R+0),4);
}
B49f539:{NFSU2_TR(0x49f539);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f53c:{NFSU2_TR(0x49f53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f53f:{NFSU2_TR(0x49f53f);
u8 U[4];
w4(U+0,u32(0x783eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f544:{NFSU2_TR(0x49f544);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f545:{NFSU2_TR(0x49f545);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f546:{NFSU2_TR(0x49f546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f54bull));
TAIL_STATIC(0x537cc0u,537);
}
B49f54b:L49f54b:{c.instructions+=3;NFSU2_TR(0x49f54b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49f54e:{NFSU2_TR(0x49f54e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f550:{NFSU2_TR(0x49f550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f569;}}
}
B49f552:L49f552:{c.instructions+=7;NFSU2_TR(0x49f552);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f555:{NFSU2_TR(0x49f555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f558:{NFSU2_TR(0x49f558);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f55a:{NFSU2_TR(0x49f55a);
u8 U[4];
w4(U+0,u32(0x783eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f55f:{NFSU2_TR(0x49f55f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f560:{NFSU2_TR(0x49f560);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f561:{NFSU2_TR(0x49f561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f566ull));
TAIL_STATIC(0x537c00u,537);
}
B49f566:L49f566:{c.instructions+=1;NFSU2_TR(0x49f566);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f569:L49f569:{c.instructions+=5;NFSU2_TR(0x49f569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f56a:{NFSU2_TR(0x49f56a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f56b:{NFSU2_TR(0x49f56b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f56c:{NFSU2_TR(0x49f56c);
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
B49f56f:{NFSU2_TR(0x49f56f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f570:L49f570:{c.instructions+=9;NFSU2_TR(0x49f570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B49f573:{NFSU2_TR(0x49f573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f574:{NFSU2_TR(0x49f574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f575:{NFSU2_TR(0x49f575);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f576:{NFSU2_TR(0x49f576);
__builtin_memmove((R+24),(R+4),4);
}
B49f578:{NFSU2_TR(0x49f578);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49f57a:{NFSU2_TR(0x49f57a);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49f57f:{NFSU2_TR(0x49f57f);
w4(R+4,u32(0x7ull));
}
B49f584:{NFSU2_TR(0x49f584);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49f588:L49f588:{c.instructions+=1;NFSU2_TR(0x49f588);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49f58a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f588u);}goto L49f588;}
}
B49f58a:L49f58a:{c.instructions+=8;NFSU2_TR(0x49f58a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B49f58c:{NFSU2_TR(0x49f58c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f58e:{NFSU2_TR(0x49f58e);
u8 U[4];
w4(U+0,u32(0x78ff90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f593:{NFSU2_TR(0x49f593);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B49f594:{NFSU2_TR(0x49f594);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f598:{NFSU2_TR(0x49f598);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f59a:{NFSU2_TR(0x49f59a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f59b:{NFSU2_TR(0x49f59b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f5a0ull));
TAIL_STATIC(0x50c960u,50c);
}
B49f5a0:L49f5a0:{c.instructions+=4;NFSU2_TR(0x49f5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49f5a3:{NFSU2_TR(0x49f5a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49f5a7:{NFSU2_TR(0x49f5a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5a8:{NFSU2_TR(0x49f5a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f5adull));
TAIL_STATIC(0x505450u,505);
}
B49f5ad:L49f5ad:{c.instructions+=3;NFSU2_TR(0x49f5ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5ae:{NFSU2_TR(0x49f5ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5af:{NFSU2_TR(0x49f5af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f5b4ull));
TAIL_STATIC(0x5379c0u,537);
}
B49f5b4:L49f5b4:{c.instructions+=7;NFSU2_TR(0x49f5b4);
__builtin_memmove((R+28),(R+0),4);
}
B49f5b6:{NFSU2_TR(0x49f5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f5b9:{NFSU2_TR(0x49f5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f5bc:{NFSU2_TR(0x49f5bc);
u8 U[4];
w4(U+0,u32(0x78fe68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5c1:{NFSU2_TR(0x49f5c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5c2:{NFSU2_TR(0x49f5c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5c3:{NFSU2_TR(0x49f5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f5c8ull));
TAIL_STATIC(0x537cc0u,537);
}
B49f5c8:L49f5c8:{c.instructions+=3;NFSU2_TR(0x49f5c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49f5cb:{NFSU2_TR(0x49f5cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f5cd:{NFSU2_TR(0x49f5cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f5e6;}}
}
B49f5cf:L49f5cf:{c.instructions+=7;NFSU2_TR(0x49f5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f5d2:{NFSU2_TR(0x49f5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f5d5:{NFSU2_TR(0x49f5d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5d7:{NFSU2_TR(0x49f5d7);
u8 U[4];
w4(U+0,u32(0x78fe68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5dc:{NFSU2_TR(0x49f5dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5dd:{NFSU2_TR(0x49f5dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5de:{NFSU2_TR(0x49f5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f5e3ull));
TAIL_STATIC(0x537c00u,537);
}
B49f5e3:L49f5e3:{c.instructions+=1;NFSU2_TR(0x49f5e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f5e6:L49f5e6:{c.instructions+=2;NFSU2_TR(0x49f5e6);
w4(R+12,u32(0x2ull));
}
B49f5eb:{NFSU2_TR(0x49f5eb);
{goto L49f5f0;}
}
B49f5f0:L49f5f0:{c.instructions+=6;NFSU2_TR(0x49f5f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5f1:{NFSU2_TR(0x49f5f1);
u8 U[4];
w4(U+0,u32(0x78ff90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5f6:{NFSU2_TR(0x49f5f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49f5fa:{NFSU2_TR(0x49f5fa);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5fc:{NFSU2_TR(0x49f5fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f5fd:{NFSU2_TR(0x49f5fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f602ull));
TAIL_STATIC(0x50c960u,50c);
}
B49f602:L49f602:{c.instructions+=4;NFSU2_TR(0x49f602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49f605:{NFSU2_TR(0x49f605);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f609:{NFSU2_TR(0x49f609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f60a:{NFSU2_TR(0x49f60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f60full));
TAIL_STATIC(0x505450u,505);
}
B49f60f:L49f60f:{c.instructions+=3;NFSU2_TR(0x49f60f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f610:{NFSU2_TR(0x49f610);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f611:{NFSU2_TR(0x49f611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f616ull));
TAIL_STATIC(0x5379c0u,537);
}
B49f616:L49f616:{c.instructions+=7;NFSU2_TR(0x49f616);
__builtin_memmove((R+28),(R+0),4);
}
B49f618:{NFSU2_TR(0x49f618);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f61b:{NFSU2_TR(0x49f61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f61e:{NFSU2_TR(0x49f61e);
u8 U[4];
w4(U+0,u32(0x783eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f623:{NFSU2_TR(0x49f623);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f624:{NFSU2_TR(0x49f624);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f625:{NFSU2_TR(0x49f625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f62aull));
TAIL_STATIC(0x537cc0u,537);
}
B49f62a:L49f62a:{c.instructions+=3;NFSU2_TR(0x49f62a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49f62d:{NFSU2_TR(0x49f62d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f62f:{NFSU2_TR(0x49f62f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f648;}}
}
B49f631:L49f631:{c.instructions+=7;NFSU2_TR(0x49f631);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f634:{NFSU2_TR(0x49f634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f637:{NFSU2_TR(0x49f637);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f639:{NFSU2_TR(0x49f639);
u8 U[4];
w4(U+0,u32(0x783eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f63e:{NFSU2_TR(0x49f63e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f63f:{NFSU2_TR(0x49f63f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f640:{NFSU2_TR(0x49f640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f645ull));
TAIL_STATIC(0x537c00u,537);
}
B49f645:L49f645:{c.instructions+=1;NFSU2_TR(0x49f645);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f648:L49f648:{c.instructions+=3;NFSU2_TR(0x49f648);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B49f649:{NFSU2_TR(0x49f649);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f64c:{NFSU2_TR(0x49f64c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f5f0u);}goto L49f5f0;}}
}
B49f64e:L49f64e:{c.instructions+=5;NFSU2_TR(0x49f64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f64f:{NFSU2_TR(0x49f64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f650:{NFSU2_TR(0x49f650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f651:{NFSU2_TR(0x49f651);
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
B49f654:{NFSU2_TR(0x49f654);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f660:L49f660:{c.instructions+=9;NFSU2_TR(0x49f660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B49f663:{NFSU2_TR(0x49f663);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f664:{NFSU2_TR(0x49f664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f665:{NFSU2_TR(0x49f665);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f666:{NFSU2_TR(0x49f666);
__builtin_memmove((R+12),(R+4),4);
}
B49f668:{NFSU2_TR(0x49f668);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49f66d:{NFSU2_TR(0x49f66d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49f66f:{NFSU2_TR(0x49f66f);
w4(R+4,u32(0x7ull));
}
B49f674:{NFSU2_TR(0x49f674);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49f678:L49f678:{c.instructions+=1;NFSU2_TR(0x49f678);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49f67a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f678u);}goto L49f678;}
}
B49f67a:L49f67a:{c.instructions+=3;NFSU2_TR(0x49f67a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B49f67c:{NFSU2_TR(0x49f67c);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B49f67d:{NFSU2_TR(0x49f67d);
w4(R+28,u32(0x1ull));
}
B49f682:L49f682:{c.instructions+=6;NFSU2_TR(0x49f682);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f683:{NFSU2_TR(0x49f683);
u8 U[4];
w4(U+0,u32(0x78ff90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f688:{NFSU2_TR(0x49f688);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f68c:{NFSU2_TR(0x49f68c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f68e:{NFSU2_TR(0x49f68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f68f:{NFSU2_TR(0x49f68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f694ull));
TAIL_STATIC(0x50c960u,50c);
}
B49f694:L49f694:{c.instructions+=4;NFSU2_TR(0x49f694);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f697:{NFSU2_TR(0x49f697);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49f69b:{NFSU2_TR(0x49f69b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f69c:{NFSU2_TR(0x49f69c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f6a1ull));
TAIL_STATIC(0x505450u,505);
}
B49f6a1:L49f6a1:{c.instructions+=3;NFSU2_TR(0x49f6a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6a2:{NFSU2_TR(0x49f6a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6a3:{NFSU2_TR(0x49f6a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f6a8ull));
TAIL_STATIC(0x5379c0u,537);
}
B49f6a8:L49f6a8:{c.instructions+=7;NFSU2_TR(0x49f6a8);
__builtin_memmove((R+24),(R+0),4);
}
B49f6aa:{NFSU2_TR(0x49f6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f6ad:{NFSU2_TR(0x49f6ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f6b0:{NFSU2_TR(0x49f6b0);
u8 U[4];
w4(U+0,u32(0x78fe78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6b5:{NFSU2_TR(0x49f6b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6b6:{NFSU2_TR(0x49f6b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6b7:{NFSU2_TR(0x49f6b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f6bcull));
TAIL_STATIC(0x537cc0u,537);
}
B49f6bc:L49f6bc:{c.instructions+=3;NFSU2_TR(0x49f6bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49f6bf:{NFSU2_TR(0x49f6bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f6c1:{NFSU2_TR(0x49f6c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f6da;}}
}
B49f6c3:L49f6c3:{c.instructions+=7;NFSU2_TR(0x49f6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f6c6:{NFSU2_TR(0x49f6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f6c9:{NFSU2_TR(0x49f6c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6cb:{NFSU2_TR(0x49f6cb);
u8 U[4];
w4(U+0,u32(0x78fe78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6d0:{NFSU2_TR(0x49f6d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6d1:{NFSU2_TR(0x49f6d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6d2:{NFSU2_TR(0x49f6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f6d7ull));
TAIL_STATIC(0x537c00u,537);
}
B49f6d7:L49f6d7:{c.instructions+=1;NFSU2_TR(0x49f6d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f6da:L49f6da:{c.instructions+=3;NFSU2_TR(0x49f6da);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f6db:{NFSU2_TR(0x49f6db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f6de:{NFSU2_TR(0x49f6de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f682u);}goto L49f682;}}
}
B49f6e0:L49f6e0:{c.instructions+=5;NFSU2_TR(0x49f6e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f6e1:{NFSU2_TR(0x49f6e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f6e2:{NFSU2_TR(0x49f6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f6e3:{NFSU2_TR(0x49f6e3);
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
B49f6e6:{NFSU2_TR(0x49f6e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f6f0:L49f6f0:{c.instructions+=9;NFSU2_TR(0x49f6f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B49f6f3:{NFSU2_TR(0x49f6f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6f4:{NFSU2_TR(0x49f6f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6f5:{NFSU2_TR(0x49f6f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f6f6:{NFSU2_TR(0x49f6f6);
__builtin_memmove((R+12),(R+4),4);
}
B49f6f8:{NFSU2_TR(0x49f6f8);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49f6fd:{NFSU2_TR(0x49f6fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49f6ff:{NFSU2_TR(0x49f6ff);
w4(R+4,u32(0x7ull));
}
B49f704:{NFSU2_TR(0x49f704);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49f708:L49f708:{c.instructions+=1;NFSU2_TR(0x49f708);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49f70a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f708u);}goto L49f708;}
}
B49f70a:L49f70a:{c.instructions+=3;NFSU2_TR(0x49f70a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B49f70c:{NFSU2_TR(0x49f70c);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B49f70d:{NFSU2_TR(0x49f70d);
w4(R+28,u32(0x1ull));
}
B49f712:L49f712:{c.instructions+=6;NFSU2_TR(0x49f712);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f713:{NFSU2_TR(0x49f713);
u8 U[4];
w4(U+0,u32(0x78ff90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f718:{NFSU2_TR(0x49f718);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49f71c:{NFSU2_TR(0x49f71c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f71e:{NFSU2_TR(0x49f71e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f71f:{NFSU2_TR(0x49f71f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f724ull));
TAIL_STATIC(0x50c960u,50c);
}
B49f724:L49f724:{c.instructions+=4;NFSU2_TR(0x49f724);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f727:{NFSU2_TR(0x49f727);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49f72b:{NFSU2_TR(0x49f72b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f72c:{NFSU2_TR(0x49f72c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f731ull));
TAIL_STATIC(0x505450u,505);
}
B49f731:L49f731:{c.instructions+=3;NFSU2_TR(0x49f731);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f732:{NFSU2_TR(0x49f732);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f733:{NFSU2_TR(0x49f733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f738ull));
TAIL_STATIC(0x5379c0u,537);
}
B49f738:L49f738:{c.instructions+=7;NFSU2_TR(0x49f738);
__builtin_memmove((R+24),(R+0),4);
}
B49f73a:{NFSU2_TR(0x49f73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f73d:{NFSU2_TR(0x49f73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f740:{NFSU2_TR(0x49f740);
u8 U[4];
w4(U+0,u32(0x783eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f745:{NFSU2_TR(0x49f745);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f746:{NFSU2_TR(0x49f746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f747:{NFSU2_TR(0x49f747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f74cull));
TAIL_STATIC(0x537cc0u,537);
}
B49f74c:L49f74c:{c.instructions+=3;NFSU2_TR(0x49f74c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49f74f:{NFSU2_TR(0x49f74f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f751:{NFSU2_TR(0x49f751);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f76a;}}
}
B49f753:L49f753:{c.instructions+=7;NFSU2_TR(0x49f753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f756:{NFSU2_TR(0x49f756);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f759:{NFSU2_TR(0x49f759);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f75b:{NFSU2_TR(0x49f75b);
u8 U[4];
w4(U+0,u32(0x783eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f760:{NFSU2_TR(0x49f760);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f761:{NFSU2_TR(0x49f761);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f762:{NFSU2_TR(0x49f762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f767ull));
TAIL_STATIC(0x537c00u,537);
}
B49f767:L49f767:{c.instructions+=1;NFSU2_TR(0x49f767);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49f76a:L49f76a:{c.instructions+=3;NFSU2_TR(0x49f76a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f76b:{NFSU2_TR(0x49f76b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49f76e:{NFSU2_TR(0x49f76e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f712u);}goto L49f712;}}
}
B49f770:L49f770:{c.instructions+=5;NFSU2_TR(0x49f770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f771:{NFSU2_TR(0x49f771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f772:{NFSU2_TR(0x49f772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f773:{NFSU2_TR(0x49f773);
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
B49f776:{NFSU2_TR(0x49f776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f780:L49f780:{c.instructions+=5;NFSU2_TR(0x49f780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f781:{NFSU2_TR(0x49f781);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f785:{NFSU2_TR(0x49f785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f78b:{NFSU2_TR(0x49f78b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f78d:{NFSU2_TR(0x49f78d);
if(r1(R+518)){{goto L49f7a2;}}
}
B49f78f:L49f78f:{c.instructions+=2;NFSU2_TR(0x49f78f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f790:{NFSU2_TR(0x49f790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f795ull));
TAIL_STATIC(0x540a60u,540);
}
B49f795:L49f795:{c.instructions+=2;NFSU2_TR(0x49f795);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49f798:{NFSU2_TR(0x49f798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49f7a2:L49f7a2:{c.instructions+=4;NFSU2_TR(0x49f7a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f7a6:{NFSU2_TR(0x49f7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f7a9:{NFSU2_TR(0x49f7a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x696e7670ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f7ae:{NFSU2_TR(0x49f7ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f7c5;}}
}
B49f7b0:L49f7b0:{c.instructions+=3;NFSU2_TR(0x49f7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f7b3:{NFSU2_TR(0x49f7b3);
u8 U[4];
w4(U+0,u32(0xf2aab6b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7b8:{NFSU2_TR(0x49f7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f7bdull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49f7bd:L49f7bd:{c.instructions+=3;NFSU2_TR(0x49f7bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7be:{NFSU2_TR(0x49f7be);
u8 U[4];
w4(U+0,u32(0x87f32b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7c3:{NFSU2_TR(0x49f7c3);
{goto L49f7dc;}
}
B49f7c5:L49f7c5:{c.instructions+=2;NFSU2_TR(0x49f7c5);
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
B49f7c7:{NFSU2_TR(0x49f7c7);
if(r1(R+518)){{goto L49f7ef;}}
}
B49f7c9:L49f7c9:{c.instructions+=3;NFSU2_TR(0x49f7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f7cc:{NFSU2_TR(0x49f7cc);
u8 U[4];
w4(U+0,u32(0x3f920248ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7d1:{NFSU2_TR(0x49f7d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f7d6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49f7d6:L49f7d6:{c.instructions+=2;NFSU2_TR(0x49f7d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7d7:{NFSU2_TR(0x49f7d7);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7dc:L49f7dc:{c.instructions+=4;NFSU2_TR(0x49f7dc);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7e1:{NFSU2_TR(0x49f7e1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7e6:{NFSU2_TR(0x49f7e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7e7:{NFSU2_TR(0x49f7e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f7ecull));
TAIL_STATIC(0x5585e0u,558);
}
B49f7ec:L49f7ec:{c.instructions+=1;NFSU2_TR(0x49f7ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49f7ef:L49f7ef:{c.instructions+=3;NFSU2_TR(0x49f7ef);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f7f1:{NFSU2_TR(0x49f7f1);
w4(R+4,u32(0x850080ull));
}
B49f7f6:{NFSU2_TR(0x49f7f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f7fbull));
TAIL_STATIC(0x5031b0u,503);
}
B49f7fb:L49f7fb:{c.instructions+=2;NFSU2_TR(0x49f7fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f7fc:{NFSU2_TR(0x49f7fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f800:L49f800:{c.instructions+=4;NFSU2_TR(0x49f800);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f804:{NFSU2_TR(0x49f804);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f807:{NFSU2_TR(0x49f807);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f809:{NFSU2_TR(0x49f809);
if(r1(R+518)){{goto L49f860;}}
}
B49f80b:L49f80b:{c.instructions+=2;NFSU2_TR(0x49f80b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7567616dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f810:{NFSU2_TR(0x49f810);
if(r1(R+518)){{goto L49f860;}}
}
B49f812:L49f812:{c.instructions+=2;NFSU2_TR(0x49f812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6a6f696eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f817:{NFSU2_TR(0x49f817);
if(r1(R+518)){{goto L49f860;}}
}
B49f819:L49f819:{c.instructions+=2;NFSU2_TR(0x49f819);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x61737461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x61737461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x61737461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49f81e:{NFSU2_TR(0x49f81e);
if(r1(R+518)){{goto L49f877;}}
}
B49f820:L49f820:{c.instructions+=2;NFSU2_TR(0x49f820);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6c6f636bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6c6f636bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6c6f636bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49f825:{NFSU2_TR(0x49f825);
if(r1(R+518)){{goto L49f877;}}
}
B49f827:L49f827:{c.instructions+=5;NFSU2_TR(0x49f827);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f82b:{NFSU2_TR(0x49f82b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f82c:{NFSU2_TR(0x49f82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f82f:{NFSU2_TR(0x49f82f);
u8 U[4];
w4(U+0,u32(0xacc1f7daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f834:{NFSU2_TR(0x49f834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f839ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49f839:L49f839:{c.instructions+=6;NFSU2_TR(0x49f839);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f83a:{NFSU2_TR(0x49f83a);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f83f:{NFSU2_TR(0x49f83f);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f844:{NFSU2_TR(0x49f844);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f849:{NFSU2_TR(0x49f849);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f84a:{NFSU2_TR(0x49f84a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f84full));
TAIL_STATIC(0x5585e0u,558);
}
B49f84f:L49f84f:{c.instructions+=5;NFSU2_TR(0x49f84f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49f852:{NFSU2_TR(0x49f852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f853:{NFSU2_TR(0x49f853);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f855:{NFSU2_TR(0x49f855);
w4(R+4,u32(0x850080ull));
}
B49f85a:{NFSU2_TR(0x49f85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f85full));
TAIL_STATIC(0x5031b0u,503);
}
B49f85f:L49f85f:{c.instructions+=1;NFSU2_TR(0x49f85f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f860:L49f860:{c.instructions+=6;NFSU2_TR(0x49f860);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49f864:{NFSU2_TR(0x49f864);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f867:{NFSU2_TR(0x49f867);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f869:{NFSU2_TR(0x49f869);
u8 U[4];
w4(U+0,u32(0x78f320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f86e:{NFSU2_TR(0x49f86e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f86f:{NFSU2_TR(0x49f86f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f874ull));
TAIL_STATIC(0x537980u,537);
}
B49f874:L49f874:{c.instructions+=1;NFSU2_TR(0x49f874);
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
B49f877:L49f877:{c.instructions+=3;NFSU2_TR(0x49f877);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f879:{NFSU2_TR(0x49f879);
w4(R+4,u32(0x850080ull));
}
B49f87e:{NFSU2_TR(0x49f87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f883ull));
TAIL_STATIC(0x5031b0u,503);
}
B49f883:L49f883:{c.instructions+=1;NFSU2_TR(0x49f883);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f890:L49f890:{c.instructions+=4;NFSU2_TR(0x49f890);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f894:{NFSU2_TR(0x49f894);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f897:{NFSU2_TR(0x49f897);
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
B49f899:{NFSU2_TR(0x49f899);
if(r1(R+518)){{goto L49f8c6;}}
}
B49f89b:L49f89b:{c.instructions+=5;NFSU2_TR(0x49f89b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f89f:{NFSU2_TR(0x49f89f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8a0:{NFSU2_TR(0x49f8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f8a3:{NFSU2_TR(0x49f8a3);
u8 U[4];
w4(U+0,u32(0xd99cfe5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8a8:{NFSU2_TR(0x49f8a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f8adull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49f8ad:L49f8ad:{c.instructions+=7;NFSU2_TR(0x49f8ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8ae:{NFSU2_TR(0x49f8ae);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8b0:{NFSU2_TR(0x49f8b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8b2:{NFSU2_TR(0x49f8b2);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8b7:{NFSU2_TR(0x49f8b7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8bc:{NFSU2_TR(0x49f8bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8bd:{NFSU2_TR(0x49f8bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f8c2ull));
TAIL_STATIC(0x558540u,558);
}
B49f8c2:L49f8c2:{c.instructions+=2;NFSU2_TR(0x49f8c2);
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
B49f8c5:{NFSU2_TR(0x49f8c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f8c6:L49f8c6:{c.instructions+=3;NFSU2_TR(0x49f8c6);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8c8:{NFSU2_TR(0x49f8c8);
w4(R+4,u32(0x850080ull));
}
B49f8cd:{NFSU2_TR(0x49f8cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f8d2ull));
TAIL_STATIC(0x5031b0u,503);
}
B49f8d2:L49f8d2:{c.instructions+=1;NFSU2_TR(0x49f8d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f8e0:L49f8e0:{c.instructions+=4;NFSU2_TR(0x49f8e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f8e4:{NFSU2_TR(0x49f8e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8e6:{NFSU2_TR(0x49f8e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8e8:{NFSU2_TR(0x49f8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f8edull));
TAIL_STATIC(0x4d1ea0u,4d1);
}
B49f8ed:L49f8ed:{c.instructions+=1;NFSU2_TR(0x49f8ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f8f0:L49f8f0:{c.instructions+=5;NFSU2_TR(0x49f8f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8f1:{NFSU2_TR(0x49f8f1);
__builtin_memmove((R+24),(R+4),4);
}
B49f8f3:{NFSU2_TR(0x49f8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f8f9:{NFSU2_TR(0x49f8f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f8fb:{NFSU2_TR(0x49f8fb);
if(r1(R+518)){{goto L49f910;}}
}
B49f8fd:L49f8fd:{c.instructions+=2;NFSU2_TR(0x49f8fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f8fe:{NFSU2_TR(0x49f8fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f903ull));
TAIL_STATIC(0x540a60u,540);
}
B49f903:L49f903:{c.instructions+=2;NFSU2_TR(0x49f903);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49f906:{NFSU2_TR(0x49f906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49f910:L49f910:{c.instructions+=4;NFSU2_TR(0x49f910);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f914:{NFSU2_TR(0x49f914);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f917:{NFSU2_TR(0x49f917);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f919:{NFSU2_TR(0x49f919);
if(r1(R+518)){{goto L49f93e;}}
}
B49f91b:L49f91b:{c.instructions+=8;NFSU2_TR(0x49f91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f91e:{NFSU2_TR(0x49f91e);
u8 U[4];
w4(U+0,u32(0x78ffa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f923:{NFSU2_TR(0x49f923);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f925:{NFSU2_TR(0x49f925);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f927:{NFSU2_TR(0x49f927);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f92c:{NFSU2_TR(0x49f92c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f931:{NFSU2_TR(0x49f931);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f932:{NFSU2_TR(0x49f932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f937ull));
TAIL_STATIC(0x558540u,558);
}
B49f937:L49f937:{c.instructions+=3;NFSU2_TR(0x49f937);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49f93a:{NFSU2_TR(0x49f93a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f93b:{NFSU2_TR(0x49f93b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f93e:L49f93e:{c.instructions+=3;NFSU2_TR(0x49f93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49f941:{NFSU2_TR(0x49f941);
u8 U[4];
w4(U+0,u32(0xa19617bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f946:{NFSU2_TR(0x49f946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f94bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49f94b:L49f94b:{c.instructions+=7;NFSU2_TR(0x49f94b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f94c:{NFSU2_TR(0x49f94c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f94e:{NFSU2_TR(0x49f94e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f950:{NFSU2_TR(0x49f950);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f955:{NFSU2_TR(0x49f955);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f95a:{NFSU2_TR(0x49f95a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f95b:{NFSU2_TR(0x49f95b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f960ull));
TAIL_STATIC(0x558540u,558);
}
B49f960:L49f960:{c.instructions+=3;NFSU2_TR(0x49f960);
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
B49f963:{NFSU2_TR(0x49f963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f964:{NFSU2_TR(0x49f964);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f970:L49f970:{c.instructions+=15;NFSU2_TR(0x49f970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B49f973:{NFSU2_TR(0x49f973);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f974:{NFSU2_TR(0x49f974);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f975:{NFSU2_TR(0x49f975);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f976:{NFSU2_TR(0x49f976);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f977:{NFSU2_TR(0x49f977);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49f97b:{NFSU2_TR(0x49f97b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w2(R+24,u16(s16(s8(r1(U+0)))));
}
B49f97f:{NFSU2_TR(0x49f97f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49f981:{NFSU2_TR(0x49f981);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B49f983:{NFSU2_TR(0x49f983);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f984:{NFSU2_TR(0x49f984);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(R+24))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B49f987:{NFSU2_TR(0x49f987);
__builtin_memmove((R+20),(R+4),4);
}
B49f989:{NFSU2_TR(0x49f989);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49f991:{NFSU2_TR(0x49f991);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49f995:{NFSU2_TR(0x49f995);
if(r1(R+518)){{goto L49f9e6;}}
}
B49f997:L49f997:{c.instructions+=2;NFSU2_TR(0x49f997);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B49f99b:{NFSU2_TR(0x49f99b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49f9a1;}}
}
B49f99d:L49f99d:{c.instructions+=1;NFSU2_TR(0x49f99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49f9a1:L49f9a1:{c.instructions+=6;NFSU2_TR(0x49f9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f9a4:{NFSU2_TR(0x49f9a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f9a5:{NFSU2_TR(0x49f9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49f9a8:{NFSU2_TR(0x49f9a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f9a9:{NFSU2_TR(0x49f9a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49f9aa:{NFSU2_TR(0x49f9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49f9afull));
TAIL_STATIC(0x50bc10u,50b);
}
B49f9af:L49f9af:{c.instructions+=8;NFSU2_TR(0x49f9af);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49f9b3:{NFSU2_TR(0x49f9b3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B49f9b7:{NFSU2_TR(0x49f9b7);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49f9ba:{NFSU2_TR(0x49f9ba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B49f9bc:{NFSU2_TR(0x49f9bc);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B49f9be:{NFSU2_TR(0x49f9be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49f9c0:{NFSU2_TR(0x49f9c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49f9c3:{NFSU2_TR(0x49f9c3);
if(r1(R+518)){{goto L49f9de;}}
}
B49f9c5:L49f9c5:{c.instructions+=6;NFSU2_TR(0x49f9c5);
__builtin_memmove((R+0),(R+24),4);
}
B49f9c7:{NFSU2_TR(0x49f9c7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w2(R+24,u16(s16(s8(r1(U+0)))));
}
B49f9cb:{NFSU2_TR(0x49f9cb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B49f9cc:{NFSU2_TR(0x49f9cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49f9cd:{NFSU2_TR(0x49f9cd);
u8 U[2];
w2(U+0,u16(u32(r2(R+24))&u32(r2(R+24))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B49f9d0:{NFSU2_TR(0x49f9d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49f997u);}goto L49f997;}}
}
B49f9d2:L49f9d2:{c.instructions+=7;NFSU2_TR(0x49f9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f9d3:{NFSU2_TR(0x49f9d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f9d4:{NFSU2_TR(0x49f9d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49f9d5:{NFSU2_TR(0x49f9d5);
__builtin_memmove((R+0),(R+12),4);
}
B49f9d7:{NFSU2_TR(0x49f9d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f9d8:{NFSU2_TR(0x49f9d8);
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
B49f9db:{NFSU2_TR(0x49f9db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49f9de:L49f9de:{c.instructions+=3;NFSU2_TR(0x49f9de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49f9e2:{NFSU2_TR(0x49f9e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49f9e4:{NFSU2_TR(0x49f9e4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L49f9e8;}}
}
B49f9e6:L49f9e6:{c.instructions+=1;NFSU2_TR(0x49f9e6);
__builtin_memmove((R+0),(R+12),4);
}
B49f9e8:L49f9e8:{c.instructions+=6;NFSU2_TR(0x49f9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49f9e9:{NFSU2_TR(0x49f9e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49f9ea:{NFSU2_TR(0x49f9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49f9eb:{NFSU2_TR(0x49f9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49f9ec:{NFSU2_TR(0x49f9ec);
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
B49f9ef:{NFSU2_TR(0x49f9ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fa00:L49fa00:{c.instructions+=7;NFSU2_TR(0x49fa00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa01:{NFSU2_TR(0x49fa01);
__builtin_memmove((R+24),(R+4),4);
}
B49fa03:{NFSU2_TR(0x49fa03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B49fa06:{NFSU2_TR(0x49fa06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa07:{NFSU2_TR(0x49fa07);
__builtin_memmove((R+28),(R+8),4);
}
B49fa09:{NFSU2_TR(0x49fa09);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fa0c:{NFSU2_TR(0x49fa0c);
__builtin_memmove((R+16),(R+16),4);
}
B49fa10:L49fa10:{c.instructions+=4;NFSU2_TR(0x49fa10);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B49fa12:{NFSU2_TR(0x49fa12);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49fa13:{NFSU2_TR(0x49fa13);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49fa15:{NFSU2_TR(0x49fa15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49fa10u);}goto L49fa10;}}
}
B49fa17:L49fa17:{c.instructions+=7;NFSU2_TR(0x49fa17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa18:{NFSU2_TR(0x49fa18);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49fa1c:{NFSU2_TR(0x49fa1c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B49fa1e:{NFSU2_TR(0x49fa1e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B49fa22:{NFSU2_TR(0x49fa22);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49fa28:{NFSU2_TR(0x49fa28);
__builtin_memmove((R+0),(R+8),4);
}
B49fa2a:{NFSU2_TR(0x49fa2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49fa54;}}
}
B49fa2c:L49fa2c:{c.instructions+=1;NFSU2_TR(0x49fa2c);
__builtin_memmove((R+16),(R+16),4);
}
B49fa30:L49fa30:{c.instructions+=2;NFSU2_TR(0x49fa30);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B49fa33:{NFSU2_TR(0x49fa33);
if(r1(R+518)){{goto L49fa3f;}}
}
B49fa35:L49fa35:{c.instructions+=5;NFSU2_TR(0x49fa35);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49fa38:{NFSU2_TR(0x49fa38);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49fa39:{NFSU2_TR(0x49fa39);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B49fa3a:{NFSU2_TR(0x49fa3a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B49fa3d:{NFSU2_TR(0x49fa3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49fa35u);}goto L49fa35;}}
}
B49fa3f:L49fa3f:{c.instructions+=8;NFSU2_TR(0x49fa3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49fa42:{NFSU2_TR(0x49fa42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49fa43:{NFSU2_TR(0x49fa43);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B49fa44:{NFSU2_TR(0x49fa44);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B49fa45:{NFSU2_TR(0x49fa45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49fa48:{NFSU2_TR(0x49fa48);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B49fa4c:{NFSU2_TR(0x49fa4c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49fa52:{NFSU2_TR(0x49fa52);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49fa30u);}goto L49fa30;}}
}
B49fa54:L49fa54:{c.instructions+=2;NFSU2_TR(0x49fa54);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49fa56:{NFSU2_TR(0x49fa56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L49fa62;}}
}
B49fa58:L49fa58:{c.instructions+=3;NFSU2_TR(0x49fa58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa59:{NFSU2_TR(0x49fa59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa5a:{NFSU2_TR(0x49fa5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fa5full));
TAIL_STATIC(0x43dbd0u,43d);
}
B49fa5f:L49fa5f:{c.instructions+=1;NFSU2_TR(0x49fa5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49fa62:L49fa62:{c.instructions+=6;NFSU2_TR(0x49fa62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49fa66:{NFSU2_TR(0x49fa66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa67:{NFSU2_TR(0x49fa67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa68:{NFSU2_TR(0x49fa68);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B49fa6c:{NFSU2_TR(0x49fa6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fa6d:{NFSU2_TR(0x49fa6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fa72ull));
TAIL_STATIC(0x43dc00u,43d);
}
B49fa72:L49fa72:{c.instructions+=12;NFSU2_TR(0x49fa72);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B49fa74:{NFSU2_TR(0x49fa74);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+28)),r1(U+0));
}
B49fa77:{NFSU2_TR(0x49fa77);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49fa7b:{NFSU2_TR(0x49fa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49fa7e:{NFSU2_TR(0x49fa7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fa81:{NFSU2_TR(0x49fa81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49fa84:{NFSU2_TR(0x49fa84);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49fa85:{NFSU2_TR(0x49fa85);
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
B49fa88:{NFSU2_TR(0x49fa88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49fa8b:{NFSU2_TR(0x49fa8b);
__builtin_memmove((R+4),(R+28),4);
}
B49fa8d:{NFSU2_TR(0x49fa8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fa8e:{NFSU2_TR(0x49fa8e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49fa9b;}}
}
B49fa90:L49fa90:{c.instructions+=4;NFSU2_TR(0x49fa90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49fa91:{NFSU2_TR(0x49fa91);
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
B49fa93:{NFSU2_TR(0x49fa93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49fa96:{NFSU2_TR(0x49fa96);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49fa9b;}}
}
B49fa98:L49fa98:{c.instructions+=1;NFSU2_TR(0x49fa98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49fa9b:L49fa9b:{c.instructions+=3;NFSU2_TR(0x49fa9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fa9c:{NFSU2_TR(0x49fa9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fa9d:{NFSU2_TR(0x49fa9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49faa0:L49faa0:{c.instructions+=8;NFSU2_TR(0x49faa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49faa4:{NFSU2_TR(0x49faa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B49faa7:{NFSU2_TR(0x49faa7);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49faac:{NFSU2_TR(0x49faac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49faad:{NFSU2_TR(0x49faad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49faae:{NFSU2_TR(0x49faae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49faaf:{NFSU2_TR(0x49faaf);
__builtin_memmove((R+24),(R+4),4);
}
B49fab1:{NFSU2_TR(0x49fab1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49fbf0;}}
}
B49fab7:L49fab7:{c.instructions+=1;NFSU2_TR(0x49fab7);
if(r1(R+518)){{goto L49fba2;}}
}
B49fabd:L49fabd:{c.instructions+=2;NFSU2_TR(0x49fabd);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fac2:{NFSU2_TR(0x49fac2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49fb0f;}}
}
B49fac4:L49fac4:{c.instructions+=1;NFSU2_TR(0x49fac4);
if(r1(R+518)){{goto L49faee;}}
}
B49fac6:L49fac6:{c.instructions+=2;NFSU2_TR(0x49fac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49facb:{NFSU2_TR(0x49facb);
if(r1(R+518)){{goto L49fadd;}}
}
B49facd:L49facd:{c.instructions+=2;NFSU2_TR(0x49facd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fad2:{NFSU2_TR(0x49fad2);
if(r1(R+518)){{goto L49fb1a;}}
}
B49fad4:L49fad4:{c.instructions+=5;NFSU2_TR(0x49fad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fad5:{NFSU2_TR(0x49fad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fad6:{NFSU2_TR(0x49fad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fad7:{NFSU2_TR(0x49fad7);
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
B49fada:{NFSU2_TR(0x49fada);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fadd:L49fadd:{c.instructions+=2;NFSU2_TR(0x49fadd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fae0:{NFSU2_TR(0x49fae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fae5ull));
TAIL_STATIC(0x4958d0u,495);
}
B49fae5:L49fae5:{c.instructions+=5;NFSU2_TR(0x49fae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fae6:{NFSU2_TR(0x49fae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fae7:{NFSU2_TR(0x49fae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fae8:{NFSU2_TR(0x49fae8);
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
B49faeb:{NFSU2_TR(0x49faeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49faee:L49faee:{c.instructions+=6;NFSU2_TR(0x49faee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49faf1:{NFSU2_TR(0x49faf1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49faf3:{NFSU2_TR(0x49faf3);
u8 U[4];
w4(U+0,u32(0x78ffe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49faf8:{NFSU2_TR(0x49faf8);
u8 U[4];
w4(U+0,u32(0x78ffd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fafd:{NFSU2_TR(0x49fafd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fafe:{NFSU2_TR(0x49fafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fb03ull));
TAIL_STATIC(0x5426c0u,542);
}
B49fb03:L49fb03:{c.instructions+=6;NFSU2_TR(0x49fb03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49fb06:{NFSU2_TR(0x49fb06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fb07:{NFSU2_TR(0x49fb07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fb08:{NFSU2_TR(0x49fb08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fb09:{NFSU2_TR(0x49fb09);
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
B49fb0c:{NFSU2_TR(0x49fb0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fb0f:L49fb0f:{c.instructions+=2;NFSU2_TR(0x49fb0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fb14:{NFSU2_TR(0x49fb14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49fcff;}}
}
B49fb1a:L49fb1a:{c.instructions+=5;NFSU2_TR(0x49fb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fb1d:{NFSU2_TR(0x49fb1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fb20:{NFSU2_TR(0x49fb20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb21:{NFSU2_TR(0x49fb21);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49fb23:{NFSU2_TR(0x49fb23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fb28ull));
TAIL_STATIC(0x51f440u,51f);
}
B49fb28:L49fb28:{c.instructions+=2;NFSU2_TR(0x49fb28);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49fb2f:{NFSU2_TR(0x49fb2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49fb32;}}
}
B49fb31:L49fb31:{c.instructions+=1;NFSU2_TR(0x49fb31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49fb32:L49fb32:{c.instructions+=3;NFSU2_TR(0x49fb32);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B49fb33:{NFSU2_TR(0x49fb33);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49fb36:{NFSU2_TR(0x49fb36);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49fb67;}}
}
B49fb38:L49fb38:{c.instructions+=1;NFSU2_TR(0x49fb38);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x49fd08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49fb3f:L49fb3f:{c.instructions+=2;NFSU2_TR(0x49fb3f);
w4(R+28,u32(0x2ull));
}
B49fb44:{NFSU2_TR(0x49fb44);
{goto L49fb67;}
}
B49fb46:L49fb46:{c.instructions+=2;NFSU2_TR(0x49fb46);
w4(R+28,u32(0x3ull));
}
B49fb4b:{NFSU2_TR(0x49fb4b);
{goto L49fb67;}
}
B49fb4d:L49fb4d:{c.instructions+=2;NFSU2_TR(0x49fb4d);
w4(R+28,u32(0x4ull));
}
B49fb52:{NFSU2_TR(0x49fb52);
{goto L49fb67;}
}
B49fb54:L49fb54:{c.instructions+=2;NFSU2_TR(0x49fb54);
w4(R+28,u32(0x8ull));
}
B49fb59:{NFSU2_TR(0x49fb59);
{goto L49fb67;}
}
B49fb5b:L49fb5b:{c.instructions+=2;NFSU2_TR(0x49fb5b);
w4(R+28,u32(0x6ull));
}
B49fb60:{NFSU2_TR(0x49fb60);
{goto L49fb67;}
}
B49fb62:L49fb62:{c.instructions+=1;NFSU2_TR(0x49fb62);
w4(R+28,u32(0x5ull));
}
B49fb67:L49fb67:{c.instructions+=4;NFSU2_TR(0x49fb67);
__builtin_memmove((R+4),gp(0x7f44b4),4);
}
B49fb6d:{NFSU2_TR(0x49fb6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb6e:{NFSU2_TR(0x49fb6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb6f:{NFSU2_TR(0x49fb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fb74ull));
TAIL_STATIC(0x55dda0u,55d);
}
B49fb74:L49fb74:{c.instructions+=3;NFSU2_TR(0x49fb74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49fb77:{NFSU2_TR(0x49fb77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb78:{NFSU2_TR(0x49fb78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fb7dull));
TAIL_STATIC(0x5379a0u,537);
}
B49fb7d:L49fb7d:{c.instructions+=7;NFSU2_TR(0x49fb7d);
__builtin_memmove((R+0),gp(0x7f44b8),4);
}
B49fb82:{NFSU2_TR(0x49fb82);
__builtin_memmove((R+4),gp(0x7f44b4),4);
}
B49fb88:{NFSU2_TR(0x49fb88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb8a:{NFSU2_TR(0x49fb8a);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb8f:{NFSU2_TR(0x49fb8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb90:{NFSU2_TR(0x49fb90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fb91:{NFSU2_TR(0x49fb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fb96ull));
TAIL_STATIC(0x5426c0u,542);
}
B49fb96:L49fb96:{c.instructions+=6;NFSU2_TR(0x49fb96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B49fb99:{NFSU2_TR(0x49fb99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fb9a:{NFSU2_TR(0x49fb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fb9b:{NFSU2_TR(0x49fb9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fb9c:{NFSU2_TR(0x49fb9c);
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
B49fb9f:{NFSU2_TR(0x49fb9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fba2:L49fba2:{c.instructions+=3;NFSU2_TR(0x49fba2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fba5:{NFSU2_TR(0x49fba5);
__builtin_memmove((R+4),(R+28),4);
}
B49fba7:{NFSU2_TR(0x49fba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fbacull));
TAIL_STATIC(0x54eb60u,54e);
}
B49fbac:L49fbac:{c.instructions+=3;NFSU2_TR(0x49fbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49fbaf:{NFSU2_TR(0x49fbaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fbb1:{NFSU2_TR(0x49fbb1);
if(r1(R+518)){{goto L49fbc1;}}
}
B49fbb3:L49fbb3:{c.instructions+=4;NFSU2_TR(0x49fbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49fbb6:{NFSU2_TR(0x49fbb6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fbbb:{NFSU2_TR(0x49fbbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fbbc:{NFSU2_TR(0x49fbbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fbc1ull));
TAIL_STATIC(0x51ee80u,51e);
}
B49fbc1:L49fbc1:{c.instructions+=3;NFSU2_TR(0x49fbc1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fbc3:{NFSU2_TR(0x49fbc3);
__builtin_memmove((R+4),(R+28),4);
}
B49fbc5:{NFSU2_TR(0x49fbc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fbcaull));
TAIL_STATIC(0x538500u,538);
}
B49fbca:L49fbca:{c.instructions+=5;NFSU2_TR(0x49fbca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fbcd:{NFSU2_TR(0x49fbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49fbd0:{NFSU2_TR(0x49fbd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fbd1:{NFSU2_TR(0x49fbd1);
__builtin_memmove((R+4),(R+28),4);
}
B49fbd3:{NFSU2_TR(0x49fbd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fbd8ull));
TAIL_STATIC(0x51f440u,51f);
}
B49fbd8:L49fbd8:{c.instructions+=5;NFSU2_TR(0x49fbd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fbd9:{NFSU2_TR(0x49fbd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fbda:{NFSU2_TR(0x49fbda);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fbdc:{NFSU2_TR(0x49fbdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fbe2:{NFSU2_TR(0x49fbe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fbe7ull));
TAIL_STATIC(0x538080u,538);
}
B49fbe7:L49fbe7:{c.instructions+=5;NFSU2_TR(0x49fbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fbe8:{NFSU2_TR(0x49fbe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fbe9:{NFSU2_TR(0x49fbe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fbea:{NFSU2_TR(0x49fbea);
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
B49fbed:{NFSU2_TR(0x49fbed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fbf0:L49fbf0:{c.instructions+=2;NFSU2_TR(0x49fbf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fbf5:{NFSU2_TR(0x49fbf5);
if(r1(R+518)){{goto L49fcda;}}
}
B49fbfb:L49fbfb:{c.instructions+=2;NFSU2_TR(0x49fbfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fc00:{NFSU2_TR(0x49fc00);
if(r1(R+518)){{goto L49fc8c;}}
}
B49fc06:L49fc06:{c.instructions+=2;NFSU2_TR(0x49fc06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fc0b:{NFSU2_TR(0x49fc0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49fcff;}}
}
B49fc11:L49fc11:{c.instructions+=4;NFSU2_TR(0x49fc11);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49fc16:{NFSU2_TR(0x49fc16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49fc18:{NFSU2_TR(0x49fc18);
w4(R+4,u32(0x7ull));
}
B49fc1d:{NFSU2_TR(0x49fc1d);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49fc21:L49fc21:{c.instructions+=1;NFSU2_TR(0x49fc21);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49fc23;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49fc21u);}goto L49fc21;}
}
B49fc23:L49fc23:{c.instructions+=5;NFSU2_TR(0x49fc23);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B49fc25:{NFSU2_TR(0x49fc25);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B49fc26:{NFSU2_TR(0x49fc26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fc29:{NFSU2_TR(0x49fc29);
__builtin_memmove((R+4),(R+28),4);
}
B49fc2b:{NFSU2_TR(0x49fc2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc30ull));
TAIL_STATIC(0x54eb80u,54e);
}
B49fc30:L49fc30:{c.instructions+=4;NFSU2_TR(0x49fc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fc33:{NFSU2_TR(0x49fc33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc34:{NFSU2_TR(0x49fc34);
__builtin_memmove((R+4),(R+28),4);
}
B49fc36:{NFSU2_TR(0x49fc36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc3bull));
TAIL_STATIC(0x51f440u,51f);
}
B49fc3b:L49fc3b:{c.instructions+=6;NFSU2_TR(0x49fc3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc3c:{NFSU2_TR(0x49fc3c);
u8 U[4];
w4(U+0,u32(0x78ffbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc41:{NFSU2_TR(0x49fc41);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49fc45:{NFSU2_TR(0x49fc45);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc47:{NFSU2_TR(0x49fc47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc48:{NFSU2_TR(0x49fc48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc4dull));
TAIL_STATIC(0x50c960u,50c);
}
B49fc4d:L49fc4d:{c.instructions+=4;NFSU2_TR(0x49fc4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49fc50:{NFSU2_TR(0x49fc50);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49fc54:{NFSU2_TR(0x49fc54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc55:{NFSU2_TR(0x49fc55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc5aull));
TAIL_STATIC(0x505450u,505);
}
B49fc5a:L49fc5a:{c.instructions+=3;NFSU2_TR(0x49fc5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc5b:{NFSU2_TR(0x49fc5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc5c:{NFSU2_TR(0x49fc5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc61ull));
TAIL_STATIC(0x5379c0u,537);
}
B49fc61:L49fc61:{c.instructions+=2;NFSU2_TR(0x49fc61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc62:{NFSU2_TR(0x49fc62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc67ull));
TAIL_STATIC(0x52d100u,52d);
}
B49fc67:L49fc67:{c.instructions+=3;NFSU2_TR(0x49fc67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B49fc6a:{NFSU2_TR(0x49fc6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49fc6c:{NFSU2_TR(0x49fc6c);
if(r1(R+518)){{goto L49fcff;}}
}
B49fc72:L49fc72:{c.instructions+=4;NFSU2_TR(0x49fc72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49fc75:{NFSU2_TR(0x49fc75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc76:{NFSU2_TR(0x49fc76);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fc7b:{NFSU2_TR(0x49fc7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc80ull));
TAIL_STATIC(0x55dda0u,55d);
}
B49fc80:L49fc80:{c.instructions+=6;NFSU2_TR(0x49fc80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49fc83:{NFSU2_TR(0x49fc83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fc84:{NFSU2_TR(0x49fc84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fc85:{NFSU2_TR(0x49fc85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fc86:{NFSU2_TR(0x49fc86);
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
B49fc89:{NFSU2_TR(0x49fc89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fc8c:L49fc8c:{c.instructions+=3;NFSU2_TR(0x49fc8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fc8f:{NFSU2_TR(0x49fc8f);
__builtin_memmove((R+4),(R+28),4);
}
B49fc91:{NFSU2_TR(0x49fc91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fc96ull));
TAIL_STATIC(0x54eb40u,54e);
}
B49fc96:L49fc96:{c.instructions+=3;NFSU2_TR(0x49fc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49fc99:{NFSU2_TR(0x49fc99);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fc9b:{NFSU2_TR(0x49fc9b);
if(r1(R+518)){{goto L49fcab;}}
}
B49fc9d:L49fc9d:{c.instructions+=4;NFSU2_TR(0x49fc9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fca0:{NFSU2_TR(0x49fca0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fca5:{NFSU2_TR(0x49fca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fca6:{NFSU2_TR(0x49fca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fcabull));
TAIL_STATIC(0x51ee80u,51e);
}
B49fcab:L49fcab:{c.instructions+=3;NFSU2_TR(0x49fcab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcad:{NFSU2_TR(0x49fcad);
__builtin_memmove((R+4),(R+28),4);
}
B49fcaf:{NFSU2_TR(0x49fcaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fcb4ull));
TAIL_STATIC(0x538500u,538);
}
B49fcb4:L49fcb4:{c.instructions+=5;NFSU2_TR(0x49fcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fcb7:{NFSU2_TR(0x49fcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49fcba:{NFSU2_TR(0x49fcba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcbb:{NFSU2_TR(0x49fcbb);
__builtin_memmove((R+4),(R+28),4);
}
B49fcbd:{NFSU2_TR(0x49fcbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fcc2ull));
TAIL_STATIC(0x51f440u,51f);
}
B49fcc2:L49fcc2:{c.instructions+=5;NFSU2_TR(0x49fcc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcc3:{NFSU2_TR(0x49fcc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcc4:{NFSU2_TR(0x49fcc4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcc6:{NFSU2_TR(0x49fcc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fccc:{NFSU2_TR(0x49fccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fcd1ull));
TAIL_STATIC(0x538080u,538);
}
B49fcd1:L49fcd1:{c.instructions+=5;NFSU2_TR(0x49fcd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fcd2:{NFSU2_TR(0x49fcd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fcd3:{NFSU2_TR(0x49fcd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fcd4:{NFSU2_TR(0x49fcd4);
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
B49fcd7:{NFSU2_TR(0x49fcd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fcda:L49fcda:{c.instructions+=3;NFSU2_TR(0x49fcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49fcdd:{NFSU2_TR(0x49fcdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcde:{NFSU2_TR(0x49fcde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fce3ull));
TAIL_STATIC(0x5379a0u,537);
}
B49fce3:L49fce3:{c.instructions+=7;NFSU2_TR(0x49fce3);
__builtin_memmove((R+8),gp(0x7f44b8),4);
}
B49fce9:{NFSU2_TR(0x49fce9);
__builtin_memmove((R+0),gp(0x7f44b4),4);
}
B49fcee:{NFSU2_TR(0x49fcee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcf0:{NFSU2_TR(0x49fcf0);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcf5:{NFSU2_TR(0x49fcf5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcf6:{NFSU2_TR(0x49fcf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fcf7:{NFSU2_TR(0x49fcf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fcfcull));
TAIL_STATIC(0x5426c0u,542);
}
B49fcfc:L49fcfc:{c.instructions+=1;NFSU2_TR(0x49fcfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49fcff:L49fcff:{c.instructions+=5;NFSU2_TR(0x49fcff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fd00:{NFSU2_TR(0x49fd00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fd01:{NFSU2_TR(0x49fd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fd02:{NFSU2_TR(0x49fd02);
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
B49fd05:{NFSU2_TR(0x49fd05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fd20:L49fd20:{c.instructions+=8;NFSU2_TR(0x49fd20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fd24:{NFSU2_TR(0x49fd24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B49fd27:{NFSU2_TR(0x49fd27);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fd2c:{NFSU2_TR(0x49fd2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fd2d:{NFSU2_TR(0x49fd2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fd2e:{NFSU2_TR(0x49fd2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fd2f:{NFSU2_TR(0x49fd2f);
__builtin_memmove((R+24),(R+4),4);
}
B49fd31:{NFSU2_TR(0x49fd31);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49fe69;}}
}
B49fd37:L49fd37:{c.instructions+=1;NFSU2_TR(0x49fd37);
if(r1(R+518)){{goto L49fe1b;}}
}
B49fd3d:L49fd3d:{c.instructions+=2;NFSU2_TR(0x49fd3d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fd42:{NFSU2_TR(0x49fd42);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49fd8f;}}
}
B49fd44:L49fd44:{c.instructions+=1;NFSU2_TR(0x49fd44);
if(r1(R+518)){{goto L49fd6e;}}
}
B49fd46:L49fd46:{c.instructions+=2;NFSU2_TR(0x49fd46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fd4b:{NFSU2_TR(0x49fd4b);
if(r1(R+518)){{goto L49fd5d;}}
}
B49fd4d:L49fd4d:{c.instructions+=2;NFSU2_TR(0x49fd4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fd52:{NFSU2_TR(0x49fd52);
if(r1(R+518)){{goto L49fd9a;}}
}
B49fd54:L49fd54:{c.instructions+=5;NFSU2_TR(0x49fd54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fd55:{NFSU2_TR(0x49fd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fd56:{NFSU2_TR(0x49fd56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fd57:{NFSU2_TR(0x49fd57);
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
B49fd5a:{NFSU2_TR(0x49fd5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fd5d:L49fd5d:{c.instructions+=2;NFSU2_TR(0x49fd5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fd60:{NFSU2_TR(0x49fd60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fd65ull));
TAIL_STATIC(0x4958d0u,495);
}
B49fd65:L49fd65:{c.instructions+=5;NFSU2_TR(0x49fd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fd66:{NFSU2_TR(0x49fd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fd67:{NFSU2_TR(0x49fd67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fd68:{NFSU2_TR(0x49fd68);
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
B49fd6b:{NFSU2_TR(0x49fd6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fd6e:L49fd6e:{c.instructions+=6;NFSU2_TR(0x49fd6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fd71:{NFSU2_TR(0x49fd71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fd73:{NFSU2_TR(0x49fd73);
u8 U[4];
w4(U+0,u32(0x78ffe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fd78:{NFSU2_TR(0x49fd78);
u8 U[4];
w4(U+0,u32(0x78ffd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fd7d:{NFSU2_TR(0x49fd7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fd7e:{NFSU2_TR(0x49fd7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fd83ull));
TAIL_STATIC(0x5426c0u,542);
}
B49fd83:L49fd83:{c.instructions+=6;NFSU2_TR(0x49fd83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49fd86:{NFSU2_TR(0x49fd86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fd87:{NFSU2_TR(0x49fd87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fd88:{NFSU2_TR(0x49fd88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fd89:{NFSU2_TR(0x49fd89);
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
B49fd8c:{NFSU2_TR(0x49fd8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fd8f:L49fd8f:{c.instructions+=2;NFSU2_TR(0x49fd8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fd94:{NFSU2_TR(0x49fd94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ff78;}}
}
B49fd9a:L49fd9a:{c.instructions+=5;NFSU2_TR(0x49fd9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fd9d:{NFSU2_TR(0x49fd9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fda0:{NFSU2_TR(0x49fda0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fda1:{NFSU2_TR(0x49fda1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49fda3:{NFSU2_TR(0x49fda3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fda8ull));
TAIL_STATIC(0x51f440u,51f);
}
B49fda8:L49fda8:{c.instructions+=2;NFSU2_TR(0x49fda8);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49fdaf:{NFSU2_TR(0x49fdaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49fdb2;}}
}
B49fdb1:L49fdb1:{c.instructions+=1;NFSU2_TR(0x49fdb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49fdb2:L49fdb2:{c.instructions+=3;NFSU2_TR(0x49fdb2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B49fdb3:{NFSU2_TR(0x49fdb3);
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
B49fdb6:{NFSU2_TR(0x49fdb6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49fde0;}}
}
B49fdb8:L49fdb8:{c.instructions+=1;NFSU2_TR(0x49fdb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x49ff84ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49fdbf:L49fdbf:{c.instructions+=2;NFSU2_TR(0x49fdbf);
w4(R+28,u32(0x2ull));
}
B49fdc4:{NFSU2_TR(0x49fdc4);
{goto L49fde0;}
}
B49fdc6:L49fdc6:{c.instructions+=2;NFSU2_TR(0x49fdc6);
w4(R+28,u32(0x3ull));
}
B49fdcb:{NFSU2_TR(0x49fdcb);
{goto L49fde0;}
}
B49fdcd:L49fdcd:{c.instructions+=2;NFSU2_TR(0x49fdcd);
w4(R+28,u32(0x4ull));
}
B49fdd2:{NFSU2_TR(0x49fdd2);
{goto L49fde0;}
}
B49fdd4:L49fdd4:{c.instructions+=2;NFSU2_TR(0x49fdd4);
w4(R+28,u32(0x8ull));
}
B49fdd9:{NFSU2_TR(0x49fdd9);
{goto L49fde0;}
}
B49fddb:L49fddb:{c.instructions+=1;NFSU2_TR(0x49fddb);
w4(R+28,u32(0x5ull));
}
B49fde0:L49fde0:{c.instructions+=4;NFSU2_TR(0x49fde0);
__builtin_memmove((R+4),gp(0x7f44b4),4);
}
B49fde6:{NFSU2_TR(0x49fde6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fde7:{NFSU2_TR(0x49fde7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fde8:{NFSU2_TR(0x49fde8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fdedull));
TAIL_STATIC(0x55dda0u,55d);
}
B49fded:L49fded:{c.instructions+=3;NFSU2_TR(0x49fded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49fdf0:{NFSU2_TR(0x49fdf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fdf1:{NFSU2_TR(0x49fdf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fdf6ull));
TAIL_STATIC(0x5379a0u,537);
}
B49fdf6:L49fdf6:{c.instructions+=7;NFSU2_TR(0x49fdf6);
__builtin_memmove((R+0),gp(0x7f44b8),4);
}
B49fdfb:{NFSU2_TR(0x49fdfb);
__builtin_memmove((R+4),gp(0x7f44b4),4);
}
B49fe01:{NFSU2_TR(0x49fe01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe03:{NFSU2_TR(0x49fe03);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe08:{NFSU2_TR(0x49fe08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe09:{NFSU2_TR(0x49fe09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe0a:{NFSU2_TR(0x49fe0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fe0full));
TAIL_STATIC(0x5426c0u,542);
}
B49fe0f:L49fe0f:{c.instructions+=6;NFSU2_TR(0x49fe0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B49fe12:{NFSU2_TR(0x49fe12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fe13:{NFSU2_TR(0x49fe13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fe14:{NFSU2_TR(0x49fe14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fe15:{NFSU2_TR(0x49fe15);
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
B49fe18:{NFSU2_TR(0x49fe18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fe1b:L49fe1b:{c.instructions+=3;NFSU2_TR(0x49fe1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fe1e:{NFSU2_TR(0x49fe1e);
__builtin_memmove((R+4),(R+28),4);
}
B49fe20:{NFSU2_TR(0x49fe20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fe25ull));
TAIL_STATIC(0x54eb60u,54e);
}
B49fe25:L49fe25:{c.instructions+=3;NFSU2_TR(0x49fe25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49fe28:{NFSU2_TR(0x49fe28);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fe2a:{NFSU2_TR(0x49fe2a);
if(r1(R+518)){{goto L49fe3a;}}
}
B49fe2c:L49fe2c:{c.instructions+=4;NFSU2_TR(0x49fe2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49fe2f:{NFSU2_TR(0x49fe2f);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe34:{NFSU2_TR(0x49fe34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe35:{NFSU2_TR(0x49fe35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fe3aull));
TAIL_STATIC(0x51ee80u,51e);
}
B49fe3a:L49fe3a:{c.instructions+=3;NFSU2_TR(0x49fe3a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe3c:{NFSU2_TR(0x49fe3c);
__builtin_memmove((R+4),(R+28),4);
}
B49fe3e:{NFSU2_TR(0x49fe3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fe43ull));
TAIL_STATIC(0x538500u,538);
}
B49fe43:L49fe43:{c.instructions+=5;NFSU2_TR(0x49fe43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49fe46:{NFSU2_TR(0x49fe46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49fe49:{NFSU2_TR(0x49fe49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe4a:{NFSU2_TR(0x49fe4a);
__builtin_memmove((R+4),(R+28),4);
}
B49fe4c:{NFSU2_TR(0x49fe4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fe51ull));
TAIL_STATIC(0x51f440u,51f);
}
B49fe51:L49fe51:{c.instructions+=5;NFSU2_TR(0x49fe51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe52:{NFSU2_TR(0x49fe52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe53:{NFSU2_TR(0x49fe53);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fe55:{NFSU2_TR(0x49fe55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49fe5b:{NFSU2_TR(0x49fe5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fe60ull));
TAIL_STATIC(0x538080u,538);
}
B49fe60:L49fe60:{c.instructions+=5;NFSU2_TR(0x49fe60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fe61:{NFSU2_TR(0x49fe61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fe62:{NFSU2_TR(0x49fe62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49fe63:{NFSU2_TR(0x49fe63);
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
B49fe66:{NFSU2_TR(0x49fe66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fe69:L49fe69:{c.instructions+=2;NFSU2_TR(0x49fe69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fe6e:{NFSU2_TR(0x49fe6e);
if(r1(R+518)){{goto L49ff53;}}
}
B49fe74:L49fe74:{c.instructions+=2;NFSU2_TR(0x49fe74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fe79:{NFSU2_TR(0x49fe79);
if(r1(R+518)){{goto L49ff05;}}
}
B49fe7f:L49fe7f:{c.instructions+=2;NFSU2_TR(0x49fe7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49fe84:{NFSU2_TR(0x49fe84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ff78;}}
}
B49fe8a:L49fe8a:{c.instructions+=4;NFSU2_TR(0x49fe8a);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49fe8f:{NFSU2_TR(0x49fe8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49fe91:{NFSU2_TR(0x49fe91);
w4(R+4,u32(0x7ull));
}
B49fe96:{NFSU2_TR(0x49fe96);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B49fe9a:L49fe9a:{c.instructions+=1;NFSU2_TR(0x49fe9a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49fe9c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49fe9au);}goto L49fe9a;}
}
B49fe9c:L49fe9c:{c.instructions+=5;NFSU2_TR(0x49fe9c);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B49fe9e:{NFSU2_TR(0x49fe9e);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B49fe9f:{NFSU2_TR(0x49fe9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fea2:{NFSU2_TR(0x49fea2);
__builtin_memmove((R+4),(R+28),4);
}
B49fea4:{NFSU2_TR(0x49fea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fea9ull));
TAIL_STATIC(0x54eb80u,54e);
}
B49fea9:L49fea9:{c.instructions+=4;NFSU2_TR(0x49fea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49feac:{NFSU2_TR(0x49feac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fead:{NFSU2_TR(0x49fead);
__builtin_memmove((R+4),(R+28),4);
}
B49feaf:{NFSU2_TR(0x49feaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49feb4ull));
TAIL_STATIC(0x51f440u,51f);
}
B49feb4:L49feb4:{c.instructions+=6;NFSU2_TR(0x49feb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49feb5:{NFSU2_TR(0x49feb5);
u8 U[4];
w4(U+0,u32(0x78ffe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49feba:{NFSU2_TR(0x49feba);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49febe:{NFSU2_TR(0x49febe);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fec0:{NFSU2_TR(0x49fec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fec1:{NFSU2_TR(0x49fec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fec6ull));
TAIL_STATIC(0x50c960u,50c);
}
B49fec6:L49fec6:{c.instructions+=4;NFSU2_TR(0x49fec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49fec9:{NFSU2_TR(0x49fec9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49fecd:{NFSU2_TR(0x49fecd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fece:{NFSU2_TR(0x49fece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fed3ull));
TAIL_STATIC(0x505450u,505);
}
B49fed3:L49fed3:{c.instructions+=3;NFSU2_TR(0x49fed3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fed4:{NFSU2_TR(0x49fed4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fed5:{NFSU2_TR(0x49fed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fedaull));
TAIL_STATIC(0x5379c0u,537);
}
B49feda:L49feda:{c.instructions+=2;NFSU2_TR(0x49feda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fedb:{NFSU2_TR(0x49fedb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fee0ull));
TAIL_STATIC(0x52d100u,52d);
}
B49fee0:L49fee0:{c.instructions+=3;NFSU2_TR(0x49fee0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B49fee3:{NFSU2_TR(0x49fee3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49fee5:{NFSU2_TR(0x49fee5);
if(r1(R+518)){{goto L49ff78;}}
}
B49feeb:L49feeb:{c.instructions+=4;NFSU2_TR(0x49feeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49feee:{NFSU2_TR(0x49feee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49feef:{NFSU2_TR(0x49feef);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49fef4:{NFSU2_TR(0x49fef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49fef9ull));
TAIL_STATIC(0x55dda0u,55d);
}
B49fef9:L49fef9:{c.instructions+=6;NFSU2_TR(0x49fef9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49fefc:{NFSU2_TR(0x49fefc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49fefd:{NFSU2_TR(0x49fefd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fefe:{NFSU2_TR(0x49fefe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49feff:{NFSU2_TR(0x49feff);
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
B49ff02:{NFSU2_TR(0x49ff02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ff05:L49ff05:{c.instructions+=3;NFSU2_TR(0x49ff05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ff08:{NFSU2_TR(0x49ff08);
__builtin_memmove((R+4),(R+28),4);
}
B49ff0a:{NFSU2_TR(0x49ff0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ff0full));
TAIL_STATIC(0x54eb40u,54e);
}
B49ff0f:L49ff0f:{c.instructions+=3;NFSU2_TR(0x49ff0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ff12:{NFSU2_TR(0x49ff12);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ff14:{NFSU2_TR(0x49ff14);
if(r1(R+518)){{goto L49ff24;}}
}
B49ff16:L49ff16:{c.instructions+=4;NFSU2_TR(0x49ff16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ff19:{NFSU2_TR(0x49ff19);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff1e:{NFSU2_TR(0x49ff1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff1f:{NFSU2_TR(0x49ff1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ff24ull));
TAIL_STATIC(0x51ee80u,51e);
}
B49ff24:L49ff24:{c.instructions+=3;NFSU2_TR(0x49ff24);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff26:{NFSU2_TR(0x49ff26);
__builtin_memmove((R+4),(R+28),4);
}
B49ff28:{NFSU2_TR(0x49ff28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ff2dull));
TAIL_STATIC(0x538500u,538);
}
B49ff2d:L49ff2d:{c.instructions+=5;NFSU2_TR(0x49ff2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ff30:{NFSU2_TR(0x49ff30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49ff33:{NFSU2_TR(0x49ff33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff34:{NFSU2_TR(0x49ff34);
__builtin_memmove((R+4),(R+28),4);
}
B49ff36:{NFSU2_TR(0x49ff36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ff3bull));
TAIL_STATIC(0x51f440u,51f);
}
B49ff3b:L49ff3b:{c.instructions+=5;NFSU2_TR(0x49ff3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff3c:{NFSU2_TR(0x49ff3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff3d:{NFSU2_TR(0x49ff3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff3f:{NFSU2_TR(0x49ff3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49ff45:{NFSU2_TR(0x49ff45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ff4aull));
TAIL_STATIC(0x538080u,538);
}
B49ff4a:L49ff4a:{c.instructions+=5;NFSU2_TR(0x49ff4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ff4b:{NFSU2_TR(0x49ff4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ff4c:{NFSU2_TR(0x49ff4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49ff4d:{NFSU2_TR(0x49ff4d);
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
B49ff50:{NFSU2_TR(0x49ff50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ff53:L49ff53:{c.instructions+=3;NFSU2_TR(0x49ff53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ff56:{NFSU2_TR(0x49ff56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff57:{NFSU2_TR(0x49ff57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ff5cull));
TAIL_STATIC(0x5379a0u,537);
}
B49ff5c:L49ff5c:{c.instructions+=7;NFSU2_TR(0x49ff5c);
__builtin_memmove((R+8),gp(0x7f44b8),4);
}
B49ff62:{NFSU2_TR(0x49ff62);
__builtin_memmove((R+0),gp(0x7f44b4),4);
}
B49ff67:{NFSU2_TR(0x49ff67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff69:{NFSU2_TR(0x49ff69);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff6e:{NFSU2_TR(0x49ff6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff6f:{NFSU2_TR(0x49ff6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ff70:{NFSU2_TR(0x49ff70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ff75ull));
TAIL_STATIC(0x5426c0u,542);
}
B49ff75:L49ff75:{c.instructions+=1;NFSU2_TR(0x49ff75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49ff78:L49ff78:{c.instructions+=5;NFSU2_TR(0x49ff78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ff79:{NFSU2_TR(0x49ff79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ff7a:{NFSU2_TR(0x49ff7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49ff7b:{NFSU2_TR(0x49ff7b);
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
B49ff7e:{NFSU2_TR(0x49ff7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ffa0:L49ffa0:{c.instructions+=5;NFSU2_TR(0x49ffa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffa1:{NFSU2_TR(0x49ffa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49ffa5:{NFSU2_TR(0x49ffa5);
u8 U[4];
w4(U+0,u32(0x790024ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffaa:{NFSU2_TR(0x49ffaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffab:{NFSU2_TR(0x49ffab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ffb0ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49ffb0:L49ffb0:{c.instructions+=3;NFSU2_TR(0x49ffb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ffb3:{NFSU2_TR(0x49ffb3);
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
B49ffb5:{NFSU2_TR(0x49ffb5);
if(r1(R+518)){{goto L49fff1;}}
}
B49ffb7:L49ffb7:{c.instructions+=3;NFSU2_TR(0x49ffb7);
u8 U[4];
w4(U+0,u32(0x790014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffbc:{NFSU2_TR(0x49ffbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffbd:{NFSU2_TR(0x49ffbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ffc2ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49ffc2:L49ffc2:{c.instructions+=3;NFSU2_TR(0x49ffc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ffc5:{NFSU2_TR(0x49ffc5);
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
B49ffc7:{NFSU2_TR(0x49ffc7);
if(r1(R+518)){{goto L49fff1;}}
}
B49ffc9:L49ffc9:{c.instructions+=3;NFSU2_TR(0x49ffc9);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffce:{NFSU2_TR(0x49ffce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffcf:{NFSU2_TR(0x49ffcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ffd4ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49ffd4:L49ffd4:{c.instructions+=3;NFSU2_TR(0x49ffd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ffd7:{NFSU2_TR(0x49ffd7);
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
B49ffd9:{NFSU2_TR(0x49ffd9);
if(r1(R+518)){{goto L49fff1;}}
}
B49ffdb:L49ffdb:{c.instructions+=3;NFSU2_TR(0x49ffdb);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffe0:{NFSU2_TR(0x49ffe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ffe1:{NFSU2_TR(0x49ffe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ffe6ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49ffe6:L49ffe6:{c.instructions+=3;NFSU2_TR(0x49ffe6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ffe9:{NFSU2_TR(0x49ffe9);
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
B49ffeb:{NFSU2_TR(0x49ffeb);
if(r1(R+518)){{goto L49fff1;}}
}
B49ffed:L49ffed:{c.instructions+=3;NFSU2_TR(0x49ffed);
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
B49ffef:{NFSU2_TR(0x49ffef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fff0:{NFSU2_TR(0x49fff0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49fff1:L49fff1:{c.instructions+=3;NFSU2_TR(0x49fff1);
w4(R+0,u32(0x1ull));
}
B49fff6:{NFSU2_TR(0x49fff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49fff7:{NFSU2_TR(0x49fff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x49f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
