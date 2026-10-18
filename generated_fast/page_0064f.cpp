#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_64e(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x64f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x64f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_64f(u8* __restrict R,Cpu& c);
u32 page_64f(Cpu& c){return body_64f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_64f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x64f004:goto L64f004;
case 0x64f006:goto L64f006;
case 0x64f009:c.instructions+=4;goto B64f009;
case 0x64f00b:c.instructions+=3;goto B64f00b;
case 0x64f00e:c.instructions+=2;goto B64f00e;
case 0x64f00f:c.instructions+=1;goto B64f00f;
case 0x64f014:goto L64f014;
case 0x64f016:c.instructions+=1;goto B64f016;
case 0x64f018:goto L64f018;
case 0x64f01b:c.instructions+=1;goto B64f01b;
case 0x64f01d:goto L64f01d;
case 0x64f020:goto L64f020;
case 0x64f023:c.instructions+=2;goto B64f023;
case 0x64f025:c.instructions+=1;goto B64f025;
case 0x64f027:goto L64f027;
case 0x64f02a:c.instructions+=1;goto B64f02a;
case 0x64f02c:goto L64f02c;
case 0x64f02f:c.instructions+=1;goto B64f02f;
case 0x64f034:goto L64f034;
case 0x64f039:c.instructions+=5;goto B64f039;
case 0x64f03a:c.instructions+=4;goto B64f03a;
case 0x64f03d:c.instructions+=3;goto B64f03d;
case 0x64f03e:c.instructions+=2;goto B64f03e;
case 0x64f03f:c.instructions+=1;goto B64f03f;
case 0x64f044:goto L64f044;
case 0x64f047:c.instructions+=2;goto B64f047;
case 0x64f04c:c.instructions+=1;goto B64f04c;
case 0x64f051:goto L64f051;
case 0x64f057:c.instructions+=3;goto B64f057;
case 0x64f059:c.instructions+=2;goto B64f059;
case 0x64f05b:c.instructions+=1;goto B64f05b;
case 0x64f05d:goto L64f05d;
case 0x64f05f:c.instructions+=1;goto B64f05f;
case 0x64f064:goto L64f064;
case 0x64f066:goto L64f066;
case 0x64f069:c.instructions+=5;goto B64f069;
case 0x64f06a:c.instructions+=4;goto B64f06a;
case 0x64f06c:c.instructions+=3;goto B64f06c;
case 0x64f072:c.instructions+=2;goto B64f072;
case 0x64f073:c.instructions+=1;goto B64f073;
case 0x64f078:goto L64f078;
case 0x64f07a:c.instructions+=2;goto B64f07a;
case 0x64f07c:c.instructions+=1;goto B64f07c;
case 0x64f082:goto L64f082;
case 0x64f085:c.instructions+=5;goto B64f085;
case 0x64f086:c.instructions+=4;goto B64f086;
case 0x64f088:c.instructions+=3;goto B64f088;
case 0x64f08e:c.instructions+=2;goto B64f08e;
case 0x64f08f:c.instructions+=1;goto B64f08f;
case 0x64f094:goto L64f094;
case 0x64f096:c.instructions+=2;goto B64f096;
case 0x64f098:c.instructions+=1;goto B64f098;
case 0x64f09e:goto L64f09e;
case 0x64f0a1:c.instructions+=5;goto B64f0a1;
case 0x64f0a2:c.instructions+=4;goto B64f0a2;
case 0x64f0a4:c.instructions+=3;goto B64f0a4;
case 0x64f0aa:c.instructions+=2;goto B64f0aa;
case 0x64f0ab:c.instructions+=1;goto B64f0ab;
case 0x64f0b0:goto L64f0b0;
case 0x64f0b2:c.instructions+=2;goto B64f0b2;
case 0x64f0b4:c.instructions+=1;goto B64f0b4;
case 0x64f0ba:goto L64f0ba;
case 0x64f0bd:c.instructions+=5;goto B64f0bd;
case 0x64f0be:c.instructions+=4;goto B64f0be;
case 0x64f0c0:c.instructions+=3;goto B64f0c0;
case 0x64f0c6:c.instructions+=2;goto B64f0c6;
case 0x64f0c7:c.instructions+=1;goto B64f0c7;
case 0x64f0cc:goto L64f0cc;
case 0x64f0ce:c.instructions+=2;goto B64f0ce;
case 0x64f0d0:c.instructions+=1;goto B64f0d0;
case 0x64f0d6:goto L64f0d6;
case 0x64f0d9:c.instructions+=2;goto B64f0d9;
case 0x64f0dc:c.instructions+=1;goto B64f0dc;
case 0x64f0e1:goto L64f0e1;
case 0x64f0e3:c.instructions+=2;goto B64f0e3;
case 0x64f0e5:c.instructions+=1;goto B64f0e5;
case 0x64f0eb:goto L64f0eb;
case 0x64f0ee:c.instructions+=2;goto B64f0ee;
case 0x64f0f1:c.instructions+=1;goto B64f0f1;
case 0x64f0f6:goto L64f0f6;
case 0x64f0f8:c.instructions+=2;goto B64f0f8;
case 0x64f0fa:c.instructions+=1;goto B64f0fa;
case 0x64f100:goto L64f100;
case 0x64f106:c.instructions+=6;goto B64f106;
case 0x64f107:c.instructions+=5;goto B64f107;
case 0x64f108:c.instructions+=4;goto B64f108;
case 0x64f10b:c.instructions+=3;goto B64f10b;
case 0x64f10d:c.instructions+=2;goto B64f10d;
case 0x64f113:c.instructions+=1;goto B64f113;
case 0x64f118:goto L64f118;
case 0x64f11a:c.instructions+=2;goto B64f11a;
case 0x64f11c:c.instructions+=1;goto B64f11c;
case 0x64f122:goto L64f122;
case 0x64f125:c.instructions+=4;goto B64f125;
case 0x64f12b:c.instructions+=3;goto B64f12b;
case 0x64f12c:c.instructions+=2;goto B64f12c;
case 0x64f12d:c.instructions+=1;goto B64f12d;
case 0x64f132:goto L64f132;
case 0x64f134:c.instructions+=2;goto B64f134;
case 0x64f136:c.instructions+=1;goto B64f136;
case 0x64f13c:goto L64f13c;
case 0x64f142:c.instructions+=1;goto B64f142;
case 0x64f144:goto L64f144;
case 0x64f147:c.instructions+=10;goto B64f147;
case 0x64f14a:c.instructions+=9;goto B64f14a;
case 0x64f14d:c.instructions+=8;goto B64f14d;
case 0x64f150:c.instructions+=7;goto B64f150;
case 0x64f153:c.instructions+=6;goto B64f153;
case 0x64f156:c.instructions+=5;goto B64f156;
case 0x64f159:c.instructions+=4;goto B64f159;
case 0x64f15c:c.instructions+=3;goto B64f15c;
case 0x64f15f:c.instructions+=2;goto B64f15f;
case 0x64f162:c.instructions+=1;goto B64f162;
case 0x64f164:goto L64f164;
case 0x64f167:c.instructions+=7;goto B64f167;
case 0x64f16a:c.instructions+=6;goto B64f16a;
case 0x64f16d:c.instructions+=5;goto B64f16d;
case 0x64f170:c.instructions+=4;goto B64f170;
case 0x64f173:c.instructions+=3;goto B64f173;
case 0x64f176:c.instructions+=2;goto B64f176;
case 0x64f179:c.instructions+=1;goto B64f179;
case 0x64f17c:goto L64f17c;
case 0x64f17e:c.instructions+=1;goto B64f17e;
case 0x64f180:goto L64f180;
case 0x64f183:goto L64f183;
case 0x64f185:c.instructions+=1;goto B64f185;
case 0x64f187:goto L64f187;
case 0x64f18d:c.instructions+=1;goto B64f18d;
case 0x64f18f:goto L64f18f;
case 0x64f192:c.instructions+=1;goto B64f192;
case 0x64f194:goto L64f194;
case 0x64f197:c.instructions+=7;goto B64f197;
case 0x64f19a:c.instructions+=6;goto B64f19a;
case 0x64f19d:c.instructions+=5;goto B64f19d;
case 0x64f1a0:c.instructions+=4;goto B64f1a0;
case 0x64f1a3:c.instructions+=3;goto B64f1a3;
case 0x64f1a6:c.instructions+=2;goto B64f1a6;
case 0x64f1a9:c.instructions+=1;goto B64f1a9;
case 0x64f1ac:goto L64f1ac;
case 0x64f1ae:c.instructions+=1;goto B64f1ae;
case 0x64f1b0:goto L64f1b0;
case 0x64f1b3:c.instructions+=1;goto B64f1b3;
case 0x64f1b5:goto L64f1b5;
case 0x64f1b8:c.instructions+=1;goto B64f1b8;
case 0x64f1ba:goto L64f1ba;
case 0x64f1bd:c.instructions+=7;goto B64f1bd;
case 0x64f1c0:c.instructions+=6;goto B64f1c0;
case 0x64f1c3:c.instructions+=5;goto B64f1c3;
case 0x64f1c6:c.instructions+=4;goto B64f1c6;
case 0x64f1c9:c.instructions+=3;goto B64f1c9;
case 0x64f1cc:c.instructions+=2;goto B64f1cc;
case 0x64f1cf:c.instructions+=1;goto B64f1cf;
case 0x64f1d2:goto L64f1d2;
case 0x64f1d4:c.instructions+=1;goto B64f1d4;
case 0x64f1d6:goto L64f1d6;
case 0x64f1d9:goto L64f1d9;
case 0x64f1db:c.instructions+=1;goto B64f1db;
case 0x64f1dd:goto L64f1dd;
case 0x64f1e0:goto L64f1e0;
case 0x64f1e2:c.instructions+=1;goto B64f1e2;
case 0x64f1e4:goto L64f1e4;
case 0x64f1ea:c.instructions+=1;goto B64f1ea;
case 0x64f1ec:goto L64f1ec;
case 0x64f1ef:c.instructions+=6;goto B64f1ef;
case 0x64f1f2:c.instructions+=5;goto B64f1f2;
case 0x64f1f5:c.instructions+=4;goto B64f1f5;
case 0x64f1f8:c.instructions+=3;goto B64f1f8;
case 0x64f1fb:c.instructions+=2;goto B64f1fb;
case 0x64f1fe:c.instructions+=1;goto B64f1fe;
case 0x64f201:goto L64f201;
case 0x64f203:c.instructions+=1;goto B64f203;
case 0x64f205:goto L64f205;
case 0x64f20b:c.instructions+=1;goto B64f20b;
case 0x64f210:goto L64f210;
case 0x64f212:c.instructions+=3;goto B64f212;
case 0x64f213:c.instructions+=2;goto B64f213;
case 0x64f219:c.instructions+=1;goto B64f219;
case 0x64f21f:goto L64f21f;
case 0x64f225:c.instructions+=1;goto B64f225;
case 0x64f22a:goto L64f22a;
case 0x64f22c:c.instructions+=3;goto B64f22c;
case 0x64f22d:c.instructions+=2;goto B64f22d;
case 0x64f233:c.instructions+=1;goto B64f233;
case 0x64f239:goto L64f239;
case 0x64f23c:c.instructions+=3;goto B64f23c;
case 0x64f23d:c.instructions+=2;goto B64f23d;
case 0x64f243:c.instructions+=1;goto B64f243;
case 0x64f248:goto L64f248;
case 0x64f24a:c.instructions+=2;goto B64f24a;
case 0x64f24c:c.instructions+=1;goto B64f24c;
case 0x64f252:goto L64f252;
case 0x64f255:c.instructions+=3;goto B64f255;
case 0x64f256:c.instructions+=2;goto B64f256;
case 0x64f25c:c.instructions+=1;goto B64f25c;
case 0x64f261:goto L64f261;
case 0x64f263:c.instructions+=2;goto B64f263;
case 0x64f265:c.instructions+=1;goto B64f265;
case 0x64f26b:goto L64f26b;
case 0x64f271:c.instructions+=1;goto B64f271;
case 0x64f273:goto L64f273;
case 0x64f276:c.instructions+=2;goto B64f276;
case 0x64f27c:c.instructions+=1;goto B64f27c;
case 0x64f281:goto L64f281;
case 0x64f283:c.instructions+=2;goto B64f283;
case 0x64f285:c.instructions+=1;goto B64f285;
case 0x64f287:goto L64f287;
case 0x64f28a:c.instructions+=2;goto B64f28a;
case 0x64f28d:c.instructions+=1;goto B64f28d;
case 0x64f28f:goto L64f28f;
case 0x64f292:c.instructions+=2;goto B64f292;
case 0x64f298:c.instructions+=1;goto B64f298;
case 0x64f29d:goto L64f29d;
case 0x64f29f:c.instructions+=2;goto B64f29f;
case 0x64f2a1:c.instructions+=1;goto B64f2a1;
case 0x64f2a3:goto L64f2a3;
case 0x64f2a6:c.instructions+=1;goto B64f2a6;
case 0x64f2a9:goto L64f2a9;
case 0x64f2ab:c.instructions+=2;goto B64f2ab;
case 0x64f2ae:c.instructions+=1;goto B64f2ae;
case 0x64f2b0:goto L64f2b0;
case 0x64f2b3:c.instructions+=1;goto B64f2b3;
case 0x64f2b6:goto L64f2b6;
case 0x64f2b8:c.instructions+=2;goto B64f2b8;
case 0x64f2bb:c.instructions+=1;goto B64f2bb;
case 0x64f2bd:goto L64f2bd;
case 0x64f2c3:c.instructions+=1;goto B64f2c3;
case 0x64f2c8:goto L64f2c8;
case 0x64f2cd:goto L64f2cd;
case 0x64f2ce:c.instructions+=4;goto B64f2ce;
case 0x64f2d1:c.instructions+=3;goto B64f2d1;
case 0x64f2d2:c.instructions+=2;goto B64f2d2;
case 0x64f2d3:c.instructions+=1;goto B64f2d3;
case 0x64f2d8:goto L64f2d8;
case 0x64f2db:c.instructions+=1;goto B64f2db;
case 0x64f2e0:goto L64f2e0;
case 0x64f2e5:c.instructions+=1;goto B64f2e5;
case 0x64f2e7:goto L64f2e7;
case 0x64f2ea:c.instructions+=3;goto B64f2ea;
case 0x64f2ec:c.instructions+=2;goto B64f2ec;
case 0x64f2ef:c.instructions+=1;goto B64f2ef;
case 0x64f2f1:goto L64f2f1;
case 0x64f2f4:c.instructions+=2;goto B64f2f4;
case 0x64f2fa:c.instructions+=1;goto B64f2fa;
case 0x64f2ff:goto L64f2ff;
case 0x64f301:c.instructions+=2;goto B64f301;
case 0x64f303:c.instructions+=1;goto B64f303;
case 0x64f305:goto L64f305;
case 0x64f308:c.instructions+=4;goto B64f308;
case 0x64f30b:c.instructions+=3;goto B64f30b;
case 0x64f30d:c.instructions+=2;goto B64f30d;
case 0x64f310:c.instructions+=1;goto B64f310;
case 0x64f312:goto L64f312;
case 0x64f315:goto L64f315;
case 0x64f318:c.instructions+=1;goto B64f318;
case 0x64f31a:goto L64f31a;
case 0x64f31d:c.instructions+=3;goto B64f31d;
case 0x64f31f:c.instructions+=2;goto B64f31f;
case 0x64f322:c.instructions+=1;goto B64f322;
case 0x64f324:goto L64f324;
case 0x64f327:c.instructions+=2;goto B64f327;
case 0x64f32d:c.instructions+=1;goto B64f32d;
case 0x64f332:goto L64f332;
case 0x64f334:c.instructions+=2;goto B64f334;
case 0x64f336:c.instructions+=1;goto B64f336;
case 0x64f338:goto L64f338;
case 0x64f33b:c.instructions+=4;goto B64f33b;
case 0x64f33e:c.instructions+=3;goto B64f33e;
case 0x64f340:c.instructions+=2;goto B64f340;
case 0x64f343:c.instructions+=1;goto B64f343;
case 0x64f345:goto L64f345;
case 0x64f348:c.instructions+=1;goto B64f348;
case 0x64f34b:goto L64f34b;
case 0x64f34e:goto L64f34e;
case 0x64f350:c.instructions+=2;goto B64f350;
case 0x64f353:c.instructions+=1;goto B64f353;
case 0x64f355:goto L64f355;
case 0x64f358:goto L64f358;
case 0x64f35a:c.instructions+=2;goto B64f35a;
case 0x64f35d:c.instructions+=1;goto B64f35d;
case 0x64f35f:goto L64f35f;
case 0x64f362:c.instructions+=2;goto B64f362;
case 0x64f368:c.instructions+=1;goto B64f368;
case 0x64f36a:goto L64f36a;
case 0x64f36f:c.instructions+=1;goto B64f36f;
case 0x64f374:goto L64f374;
case 0x64f379:c.instructions+=1;goto B64f379;
case 0x64f37e:goto L64f37e;
case 0x64f383:c.instructions+=1;goto B64f383;
case 0x64f385:goto L64f385;
case 0x64f38a:goto L64f38a;
case 0x64f38c:c.instructions+=1;goto B64f38c;
case 0x64f38e:goto L64f38e;
case 0x64f393:c.instructions+=5;goto B64f393;
case 0x64f394:c.instructions+=4;goto B64f394;
case 0x64f395:c.instructions+=3;goto B64f395;
case 0x64f398:c.instructions+=2;goto B64f398;
case 0x64f399:c.instructions+=1;goto B64f399;
case 0x64f39e:goto L64f39e;
case 0x64f3a1:goto L64f3a1;
case 0x64f3a4:c.instructions+=1;goto B64f3a4;
case 0x64f3a6:goto L64f3a6;
case 0x64f3a9:c.instructions+=2;goto B64f3a9;
case 0x64f3ab:c.instructions+=1;goto B64f3ab;
case 0x64f3b0:goto L64f3b0;
case 0x64f3b3:c.instructions+=1;goto B64f3b3;
case 0x64f3b5:goto L64f3b5;
case 0x64f3b8:c.instructions+=2;goto B64f3b8;
case 0x64f3ba:c.instructions+=1;goto B64f3ba;
case 0x64f3bf:goto L64f3bf;
case 0x64f3c2:c.instructions+=1;goto B64f3c2;
case 0x64f3c4:goto L64f3c4;
case 0x64f3c7:c.instructions+=2;goto B64f3c7;
case 0x64f3c9:c.instructions+=1;goto B64f3c9;
case 0x64f3ce:goto L64f3ce;
case 0x64f3d1:c.instructions+=1;goto B64f3d1;
case 0x64f3d3:goto L64f3d3;
case 0x64f3d6:c.instructions+=2;goto B64f3d6;
case 0x64f3d8:c.instructions+=1;goto B64f3d8;
case 0x64f3dd:goto L64f3dd;
case 0x64f3de:c.instructions+=5;goto B64f3de;
case 0x64f3df:c.instructions+=4;goto B64f3df;
case 0x64f3e1:c.instructions+=3;goto B64f3e1;
case 0x64f3e2:c.instructions+=2;goto B64f3e2;
case 0x64f3e3:c.instructions+=1;goto B64f3e3;
case 0x64f3e6:goto L64f3e6;
case 0x64f3e8:c.instructions+=7;goto B64f3e8;
case 0x64f3ea:c.instructions+=6;goto B64f3ea;
case 0x64f3ed:c.instructions+=5;goto B64f3ed;
case 0x64f3f0:c.instructions+=4;goto B64f3f0;
case 0x64f3f3:c.instructions+=3;goto B64f3f3;
case 0x64f3f6:c.instructions+=2;goto B64f3f6;
case 0x64f3f9:c.instructions+=1;goto B64f3f9;
case 0x64f3fa:goto L64f3fa;
case 0x64f3fc:c.instructions+=10;goto B64f3fc;
case 0x64f3fd:c.instructions+=9;goto B64f3fd;
case 0x64f3ff:c.instructions+=8;goto B64f3ff;
case 0x64f405:c.instructions+=7;goto B64f405;
case 0x64f406:c.instructions+=6;goto B64f406;
case 0x64f409:c.instructions+=5;goto B64f409;
case 0x64f40a:c.instructions+=4;goto B64f40a;
case 0x64f40c:c.instructions+=3;goto B64f40c;
case 0x64f411:c.instructions+=2;goto B64f411;
case 0x64f412:c.instructions+=1;goto B64f412;
case 0x64f414:goto L64f414;
case 0x64f416:goto L64f416;
case 0x64f418:goto L64f418;
case 0x64f41b:c.instructions+=6;goto B64f41b;
case 0x64f41c:c.instructions+=5;goto B64f41c;
case 0x64f41f:c.instructions+=4;goto B64f41f;
case 0x64f425:c.instructions+=3;goto B64f425;
case 0x64f42a:c.instructions+=2;goto B64f42a;
case 0x64f42b:c.instructions+=1;goto B64f42b;
case 0x64f430:goto L64f430;
case 0x64f433:c.instructions+=11;goto B64f433;
case 0x64f439:c.instructions+=10;goto B64f439;
case 0x64f43a:c.instructions+=9;goto B64f43a;
case 0x64f43f:c.instructions+=8;goto B64f43f;
case 0x64f441:c.instructions+=7;goto B64f441;
case 0x64f444:c.instructions+=6;goto B64f444;
case 0x64f445:c.instructions+=5;goto B64f445;
case 0x64f448:c.instructions+=4;goto B64f448;
case 0x64f44b:c.instructions+=3;goto B64f44b;
case 0x64f44c:c.instructions+=2;goto B64f44c;
case 0x64f450:c.instructions+=1;goto B64f450;
case 0x64f455:goto L64f455;
case 0x64f458:c.instructions+=1;goto B64f458;
case 0x64f45d:goto L64f45d;
case 0x64f460:c.instructions+=2;goto B64f460;
case 0x64f464:c.instructions+=1;goto B64f464;
case 0x64f46a:goto L64f46a;
case 0x64f46d:c.instructions+=3;goto B64f46d;
case 0x64f46f:c.instructions+=2;goto B64f46f;
case 0x64f472:c.instructions+=1;goto B64f472;
case 0x64f474:goto L64f474;
case 0x64f476:goto L64f476;
case 0x64f478:c.instructions+=1;goto B64f478;
case 0x64f47a:goto L64f47a;
case 0x64f47d:c.instructions+=1;goto B64f47d;
case 0x64f47f:goto L64f47f;
case 0x64f481:goto L64f481;
case 0x64f484:c.instructions+=1;goto B64f484;
case 0x64f486:goto L64f486;
case 0x64f489:c.instructions+=1;goto B64f489;
case 0x64f48b:goto L64f48b;
case 0x64f490:c.instructions+=1;goto B64f490;
case 0x64f492:goto L64f492;
case 0x64f497:c.instructions+=1;goto B64f497;
case 0x64f499:goto L64f499;
case 0x64f49c:c.instructions+=2;goto B64f49c;
case 0x64f49d:c.instructions+=1;goto B64f49d;
case 0x64f49f:goto L64f49f;
case 0x64f4a4:c.instructions+=1;goto B64f4a4;
case 0x64f4a6:goto L64f4a6;
case 0x64f4a9:goto L64f4a9;
case 0x64f4ae:c.instructions+=4;goto B64f4ae;
case 0x64f4b4:c.instructions+=3;goto B64f4b4;
case 0x64f4b9:c.instructions+=2;goto B64f4b9;
case 0x64f4ba:c.instructions+=1;goto B64f4ba;
case 0x64f4bf:goto L64f4bf;
case 0x64f4c2:c.instructions+=1;goto B64f4c2;
case 0x64f4c4:goto L64f4c4;
case 0x64f4c7:c.instructions+=1;goto B64f4c7;
case 0x64f4c9:goto L64f4c9;
case 0x64f4ca:c.instructions+=2;goto B64f4ca;
case 0x64f4cb:c.instructions+=1;goto B64f4cb;
case 0x64f4cd:goto L64f4cd;
case 0x64f4ce:c.instructions+=1;goto B64f4ce;
case 0x64f4d0:goto L64f4d0;
case 0x64f4d5:c.instructions+=1;goto B64f4d5;
case 0x64f4d7:goto L64f4d7;
case 0x64f4dc:c.instructions+=1;goto B64f4dc;
case 0x64f4de:goto L64f4de;
case 0x64f4e3:c.instructions+=1;goto B64f4e3;
case 0x64f4e5:goto L64f4e5;
case 0x64f4ea:goto L64f4ea;
case 0x64f4f0:c.instructions+=3;goto B64f4f0;
case 0x64f4f5:c.instructions+=2;goto B64f4f5;
case 0x64f4f6:c.instructions+=1;goto B64f4f6;
case 0x64f4fb:goto L64f4fb;
case 0x64f4fe:goto L64f4fe;
case 0x64f504:c.instructions+=8;goto B64f504;
case 0x64f505:c.instructions+=7;goto B64f505;
case 0x64f508:c.instructions+=6;goto B64f508;
case 0x64f50d:c.instructions+=5;goto B64f50d;
case 0x64f512:c.instructions+=4;goto B64f512;
case 0x64f515:c.instructions+=3;goto B64f515;
case 0x64f516:c.instructions+=2;goto B64f516;
case 0x64f517:c.instructions+=1;goto B64f517;
case 0x64f51c:goto L64f51c;
case 0x64f51f:goto L64f51f;
case 0x64f520:c.instructions+=4;goto B64f520;
case 0x64f527:c.instructions+=3;goto B64f527;
case 0x64f528:c.instructions+=2;goto B64f528;
case 0x64f529:c.instructions+=1;goto B64f529;
case 0x64f52a:goto L64f52a;
case 0x64f52c:c.instructions+=11;goto B64f52c;
case 0x64f52d:c.instructions+=10;goto B64f52d;
case 0x64f52f:c.instructions+=9;goto B64f52f;
case 0x64f535:c.instructions+=8;goto B64f535;
case 0x64f536:c.instructions+=7;goto B64f536;
case 0x64f539:c.instructions+=6;goto B64f539;
case 0x64f53a:c.instructions+=5;goto B64f53a;
case 0x64f53d:c.instructions+=4;goto B64f53d;
case 0x64f543:c.instructions+=3;goto B64f543;
case 0x64f548:c.instructions+=2;goto B64f548;
case 0x64f549:c.instructions+=1;goto B64f549;
case 0x64f54e:goto L64f54e;
case 0x64f551:c.instructions+=10;goto B64f551;
case 0x64f557:c.instructions+=9;goto B64f557;
case 0x64f558:c.instructions+=8;goto B64f558;
case 0x64f55b:c.instructions+=7;goto B64f55b;
case 0x64f560:c.instructions+=6;goto B64f560;
case 0x64f563:c.instructions+=5;goto B64f563;
case 0x64f566:c.instructions+=4;goto B64f566;
case 0x64f569:c.instructions+=3;goto B64f569;
case 0x64f56d:c.instructions+=2;goto B64f56d;
case 0x64f56e:c.instructions+=1;goto B64f56e;
case 0x64f573:goto L64f573;
case 0x64f576:c.instructions+=4;goto B64f576;
case 0x64f57d:c.instructions+=3;goto B64f57d;
case 0x64f57e:c.instructions+=2;goto B64f57e;
case 0x64f57f:c.instructions+=1;goto B64f57f;
case 0x64f580:goto L64f580;
case 0x64f582:c.instructions+=10;goto B64f582;
case 0x64f583:c.instructions+=9;goto B64f583;
case 0x64f585:c.instructions+=8;goto B64f585;
case 0x64f58b:c.instructions+=7;goto B64f58b;
case 0x64f58e:c.instructions+=6;goto B64f58e;
case 0x64f58f:c.instructions+=5;goto B64f58f;
case 0x64f592:c.instructions+=4;goto B64f592;
case 0x64f598:c.instructions+=3;goto B64f598;
case 0x64f59d:c.instructions+=2;goto B64f59d;
case 0x64f59e:c.instructions+=1;goto B64f59e;
case 0x64f5a3:goto L64f5a3;
case 0x64f5a9:c.instructions+=10;goto B64f5a9;
case 0x64f5aa:c.instructions+=9;goto B64f5aa;
case 0x64f5ad:c.instructions+=8;goto B64f5ad;
case 0x64f5b0:c.instructions+=7;goto B64f5b0;
case 0x64f5b5:c.instructions+=6;goto B64f5b5;
case 0x64f5b8:c.instructions+=5;goto B64f5b8;
case 0x64f5bb:c.instructions+=4;goto B64f5bb;
case 0x64f5be:c.instructions+=3;goto B64f5be;
case 0x64f5c2:c.instructions+=2;goto B64f5c2;
case 0x64f5c3:c.instructions+=1;goto B64f5c3;
case 0x64f5c8:goto L64f5c8;
case 0x64f5cb:c.instructions+=2;goto B64f5cb;
case 0x64f5cc:c.instructions+=1;goto B64f5cc;
case 0x64f5cd:goto L64f5cd;
case 0x64f5cf:c.instructions+=11;goto B64f5cf;
case 0x64f5d0:c.instructions+=10;goto B64f5d0;
case 0x64f5d2:c.instructions+=9;goto B64f5d2;
case 0x64f5d8:c.instructions+=8;goto B64f5d8;
case 0x64f5d9:c.instructions+=7;goto B64f5d9;
case 0x64f5dc:c.instructions+=6;goto B64f5dc;
case 0x64f5dd:c.instructions+=5;goto B64f5dd;
case 0x64f5e0:c.instructions+=4;goto B64f5e0;
case 0x64f5e6:c.instructions+=3;goto B64f5e6;
case 0x64f5eb:c.instructions+=2;goto B64f5eb;
case 0x64f5ec:c.instructions+=1;goto B64f5ec;
case 0x64f5f1:goto L64f5f1;
case 0x64f5f4:c.instructions+=10;goto B64f5f4;
case 0x64f5fa:c.instructions+=9;goto B64f5fa;
case 0x64f5fb:c.instructions+=8;goto B64f5fb;
case 0x64f5fe:c.instructions+=7;goto B64f5fe;
case 0x64f603:c.instructions+=6;goto B64f603;
case 0x64f606:c.instructions+=5;goto B64f606;
case 0x64f609:c.instructions+=4;goto B64f609;
case 0x64f60c:c.instructions+=3;goto B64f60c;
case 0x64f610:c.instructions+=2;goto B64f610;
case 0x64f611:c.instructions+=1;goto B64f611;
case 0x64f616:goto L64f616;
case 0x64f619:c.instructions+=7;goto B64f619;
case 0x64f61b:c.instructions+=6;goto B64f61b;
case 0x64f61c:c.instructions+=5;goto B64f61c;
case 0x64f61f:c.instructions+=4;goto B64f61f;
case 0x64f622:c.instructions+=3;goto B64f622;
case 0x64f623:c.instructions+=2;goto B64f623;
case 0x64f624:c.instructions+=1;goto B64f624;
case 0x64f625:goto L64f625;
case 0x64f627:c.instructions+=7;goto B64f627;
case 0x64f628:c.instructions+=6;goto B64f628;
case 0x64f62a:c.instructions+=5;goto B64f62a;
case 0x64f62c:c.instructions+=4;goto B64f62c;
case 0x64f62f:c.instructions+=3;goto B64f62f;
case 0x64f630:c.instructions+=2;goto B64f630;
case 0x64f632:c.instructions+=1;goto B64f632;
case 0x64f634:goto L64f634;
case 0x64f637:c.instructions+=1;goto B64f637;
case 0x64f639:goto L64f639;
case 0x64f63e:c.instructions+=4;goto B64f63e;
case 0x64f63f:c.instructions+=3;goto B64f63f;
case 0x64f640:c.instructions+=2;goto B64f640;
case 0x64f641:c.instructions+=1;goto B64f641;
case 0x64f646:goto L64f646;
case 0x64f649:goto L64f649;
case 0x64f64b:c.instructions+=3;goto B64f64b;
case 0x64f64c:c.instructions+=2;goto B64f64c;
case 0x64f64f:c.instructions+=1;goto B64f64f;
case 0x64f652:goto L64f652;
case 0x64f655:c.instructions+=3;goto B64f655;
case 0x64f656:c.instructions+=2;goto B64f656;
case 0x64f657:c.instructions+=1;goto B64f657;
case 0x64f65a:goto L64f65a;
case 0x64f65c:c.instructions+=9;goto B64f65c;
case 0x64f65d:c.instructions+=8;goto B64f65d;
case 0x64f65f:c.instructions+=7;goto B64f65f;
case 0x64f660:c.instructions+=6;goto B64f660;
case 0x64f662:c.instructions+=5;goto B64f662;
case 0x64f665:c.instructions+=4;goto B64f665;
case 0x64f666:c.instructions+=3;goto B64f666;
case 0x64f668:c.instructions+=2;goto B64f668;
case 0x64f66a:c.instructions+=1;goto B64f66a;
case 0x64f66c:goto L64f66c;
case 0x64f66f:c.instructions+=1;goto B64f66f;
case 0x64f671:goto L64f671;
case 0x64f674:c.instructions+=1;goto B64f674;
case 0x64f677:goto L64f677;
case 0x64f679:c.instructions+=1;goto B64f679;
case 0x64f67e:goto L64f67e;
case 0x64f680:c.instructions+=1;goto B64f680;
case 0x64f682:goto L64f682;
case 0x64f685:c.instructions+=6;goto B64f685;
case 0x64f687:c.instructions+=5;goto B64f687;
case 0x64f688:c.instructions+=4;goto B64f688;
case 0x64f689:c.instructions+=3;goto B64f689;
case 0x64f68c:c.instructions+=2;goto B64f68c;
case 0x64f68f:c.instructions+=1;goto B64f68f;
case 0x64f694:goto L64f694;
case 0x64f696:goto L64f696;
case 0x64f698:goto L64f698;
case 0x64f69a:c.instructions+=1;goto B64f69a;
case 0x64f69c:goto L64f69c;
case 0x64f6a1:c.instructions+=4;goto B64f6a1;
case 0x64f6a2:c.instructions+=3;goto B64f6a2;
case 0x64f6a3:c.instructions+=2;goto B64f6a3;
case 0x64f6a4:c.instructions+=1;goto B64f6a4;
case 0x64f6a9:goto L64f6a9;
case 0x64f6ac:c.instructions+=2;goto B64f6ac;
case 0x64f6b1:c.instructions+=1;goto B64f6b1;
case 0x64f6b3:goto L64f6b3;
case 0x64f6b6:c.instructions+=1;goto B64f6b6;
case 0x64f6b8:goto L64f6b8;
case 0x64f6b9:c.instructions+=3;goto B64f6b9;
case 0x64f6ba:c.instructions+=2;goto B64f6ba;
case 0x64f6bb:c.instructions+=1;goto B64f6bb;
case 0x64f6be:goto L64f6be;
case 0x64f6c0:c.instructions+=12;goto B64f6c0;
case 0x64f6c1:c.instructions+=11;goto B64f6c1;
case 0x64f6c3:c.instructions+=10;goto B64f6c3;
case 0x64f6c6:c.instructions+=9;goto B64f6c6;
case 0x64f6c7:c.instructions+=8;goto B64f6c7;
case 0x64f6c8:c.instructions+=7;goto B64f6c8;
case 0x64f6cb:c.instructions+=6;goto B64f6cb;
case 0x64f6cc:c.instructions+=5;goto B64f6cc;
case 0x64f6cf:c.instructions+=4;goto B64f6cf;
case 0x64f6d2:c.instructions+=3;goto B64f6d2;
case 0x64f6d5:c.instructions+=2;goto B64f6d5;
case 0x64f6d8:c.instructions+=1;goto B64f6d8;
case 0x64f6da:goto L64f6da;
case 0x64f6dc:c.instructions+=3;goto B64f6dc;
case 0x64f6df:c.instructions+=2;goto B64f6df;
case 0x64f6e2:c.instructions+=1;goto B64f6e2;
case 0x64f6e5:goto L64f6e5;
case 0x64f6e7:c.instructions+=3;goto B64f6e7;
case 0x64f6e9:c.instructions+=2;goto B64f6e9;
case 0x64f6eb:c.instructions+=1;goto B64f6eb;
case 0x64f6ed:goto L64f6ed;
case 0x64f6ef:c.instructions+=1;goto B64f6ef;
case 0x64f6f1:goto L64f6f1;
case 0x64f6f4:c.instructions+=3;goto B64f6f4;
case 0x64f6f6:c.instructions+=2;goto B64f6f6;
case 0x64f6f9:c.instructions+=1;goto B64f6f9;
case 0x64f6fb:goto L64f6fb;
case 0x64f6fc:c.instructions+=5;goto B64f6fc;
case 0x64f6fd:c.instructions+=4;goto B64f6fd;
case 0x64f6fe:c.instructions+=3;goto B64f6fe;
case 0x64f6ff:c.instructions+=2;goto B64f6ff;
case 0x64f701:c.instructions+=1;goto B64f701;
case 0x64f703:goto L64f703;
case 0x64f705:c.instructions+=1;goto B64f705;
case 0x64f707:goto L64f707;
case 0x64f709:c.instructions+=1;goto B64f709;
case 0x64f70c:goto L64f70c;
case 0x64f70e:c.instructions+=1;goto B64f70e;
case 0x64f710:goto L64f710;
case 0x64f713:c.instructions+=2;goto B64f713;
case 0x64f716:c.instructions+=1;goto B64f716;
case 0x64f718:goto L64f718;
case 0x64f71a:goto L64f71a;
case 0x64f71d:c.instructions+=1;goto B64f71d;
case 0x64f720:goto L64f720;
case 0x64f723:c.instructions+=1;goto B64f723;
case 0x64f725:goto L64f725;
case 0x64f728:c.instructions+=1;goto B64f728;
case 0x64f72a:goto L64f72a;
case 0x64f72c:c.instructions+=1;goto B64f72c;
case 0x64f731:goto L64f731;
case 0x64f733:c.instructions+=2;goto B64f733;
case 0x64f735:c.instructions+=1;goto B64f735;
case 0x64f737:goto L64f737;
case 0x64f738:c.instructions+=5;goto B64f738;
case 0x64f739:c.instructions+=4;goto B64f739;
case 0x64f73a:c.instructions+=3;goto B64f73a;
case 0x64f73d:c.instructions+=2;goto B64f73d;
case 0x64f73f:c.instructions+=1;goto B64f73f;
case 0x64f744:goto L64f744;
case 0x64f746:goto L64f746;
case 0x64f748:goto L64f748;
case 0x64f74a:c.instructions+=2;goto B64f74a;
case 0x64f74c:c.instructions+=1;goto B64f74c;
case 0x64f74e:goto L64f74e;
case 0x64f750:c.instructions+=1;goto B64f750;
case 0x64f755:goto L64f755;
case 0x64f757:c.instructions+=2;goto B64f757;
case 0x64f759:c.instructions+=1;goto B64f759;
case 0x64f75b:goto L64f75b;
case 0x64f75d:c.instructions+=5;goto B64f75d;
case 0x64f762:c.instructions+=4;goto B64f762;
case 0x64f765:c.instructions+=3;goto B64f765;
case 0x64f767:c.instructions+=2;goto B64f767;
case 0x64f76a:c.instructions+=1;goto B64f76a;
case 0x64f76f:goto L64f76f;
case 0x64f771:goto L64f771;
case 0x64f773:goto L64f773;
case 0x64f775:c.instructions+=3;goto B64f775;
case 0x64f777:c.instructions+=2;goto B64f777;
case 0x64f77a:c.instructions+=1;goto B64f77a;
case 0x64f77c:goto L64f77c;
case 0x64f781:c.instructions+=1;goto B64f781;
case 0x64f783:goto L64f783;
case 0x64f785:c.instructions+=3;goto B64f785;
case 0x64f788:c.instructions+=2;goto B64f788;
case 0x64f78b:c.instructions+=1;goto B64f78b;
case 0x64f78d:goto L64f78d;
case 0x64f790:c.instructions+=2;goto B64f790;
case 0x64f792:c.instructions+=1;goto B64f792;
case 0x64f794:goto L64f794;
case 0x64f796:c.instructions+=2;goto B64f796;
case 0x64f798:c.instructions+=1;goto B64f798;
case 0x64f79a:goto L64f79a;
case 0x64f79d:c.instructions+=2;goto B64f79d;
case 0x64f79f:c.instructions+=1;goto B64f79f;
case 0x64f7a1:goto L64f7a1;
case 0x64f7a4:c.instructions+=4;goto B64f7a4;
case 0x64f7a7:c.instructions+=3;goto B64f7a7;
case 0x64f7aa:c.instructions+=2;goto B64f7aa;
case 0x64f7ac:c.instructions+=1;goto B64f7ac;
case 0x64f7ae:goto L64f7ae;
case 0x64f7b1:c.instructions+=3;goto B64f7b1;
case 0x64f7b2:c.instructions+=2;goto B64f7b2;
case 0x64f7b5:c.instructions+=1;goto B64f7b5;
case 0x64f7b7:goto L64f7b7;
case 0x64f7b9:goto L64f7b9;
case 0x64f7bb:c.instructions+=2;goto B64f7bb;
case 0x64f7bd:c.instructions+=1;goto B64f7bd;
case 0x64f7bf:goto L64f7bf;
case 0x64f7c2:goto L64f7c2;
case 0x64f7c4:c.instructions+=2;goto B64f7c4;
case 0x64f7c6:c.instructions+=1;goto B64f7c6;
case 0x64f7c8:goto L64f7c8;
case 0x64f7cb:c.instructions+=2;goto B64f7cb;
case 0x64f7cd:c.instructions+=1;goto B64f7cd;
case 0x64f7cf:goto L64f7cf;
case 0x64f7d2:c.instructions+=3;goto B64f7d2;
case 0x64f7d5:c.instructions+=2;goto B64f7d5;
case 0x64f7d8:c.instructions+=1;goto B64f7d8;
case 0x64f7da:goto L64f7da;
case 0x64f7dc:c.instructions+=3;goto B64f7dc;
case 0x64f7df:c.instructions+=2;goto B64f7df;
case 0x64f7e2:c.instructions+=1;goto B64f7e2;
case 0x64f7e4:goto L64f7e4;
case 0x64f7e6:c.instructions+=1;goto B64f7e6;
case 0x64f7e8:goto L64f7e8;
case 0x64f7ea:goto L64f7ea;
case 0x64f7eb:c.instructions+=4;goto B64f7eb;
case 0x64f7ec:c.instructions+=3;goto B64f7ec;
case 0x64f7ed:c.instructions+=2;goto B64f7ed;
case 0x64f7ee:c.instructions+=1;goto B64f7ee;
case 0x64f7f1:goto L64f7f1;
case 0x64f7f3:c.instructions+=9;goto B64f7f3;
case 0x64f7f4:c.instructions+=8;goto B64f7f4;
case 0x64f7f6:c.instructions+=7;goto B64f7f6;
case 0x64f7f9:c.instructions+=6;goto B64f7f9;
case 0x64f7fa:c.instructions+=5;goto B64f7fa;
case 0x64f7fb:c.instructions+=4;goto B64f7fb;
case 0x64f7fc:c.instructions+=3;goto B64f7fc;
case 0x64f7ff:c.instructions+=2;goto B64f7ff;
case 0x64f801:c.instructions+=1;goto B64f801;
case 0x64f803:goto L64f803;
case 0x64f806:c.instructions+=1;goto B64f806;
case 0x64f809:goto L64f809;
case 0x64f80c:c.instructions+=1;goto B64f80c;
case 0x64f80e:goto L64f80e;
case 0x64f810:c.instructions+=3;goto B64f810;
case 0x64f812:c.instructions+=2;goto B64f812;
case 0x64f814:c.instructions+=1;goto B64f814;
case 0x64f816:goto L64f816;
case 0x64f818:c.instructions+=1;goto B64f818;
case 0x64f81a:goto L64f81a;
case 0x64f81d:c.instructions+=3;goto B64f81d;
case 0x64f81f:c.instructions+=2;goto B64f81f;
case 0x64f822:c.instructions+=1;goto B64f822;
case 0x64f824:goto L64f824;
case 0x64f825:c.instructions+=5;goto B64f825;
case 0x64f826:c.instructions+=4;goto B64f826;
case 0x64f827:c.instructions+=3;goto B64f827;
case 0x64f828:c.instructions+=2;goto B64f828;
case 0x64f82a:c.instructions+=1;goto B64f82a;
case 0x64f82c:goto L64f82c;
case 0x64f82e:c.instructions+=1;goto B64f82e;
case 0x64f830:goto L64f830;
case 0x64f832:c.instructions+=1;goto B64f832;
case 0x64f835:goto L64f835;
case 0x64f837:c.instructions+=1;goto B64f837;
case 0x64f839:goto L64f839;
case 0x64f83b:goto L64f83b;
case 0x64f83e:c.instructions+=1;goto B64f83e;
case 0x64f840:goto L64f840;
case 0x64f843:goto L64f843;
case 0x64f845:c.instructions+=1;goto B64f845;
case 0x64f847:goto L64f847;
case 0x64f849:goto L64f849;
case 0x64f84a:c.instructions+=4;goto B64f84a;
case 0x64f84b:c.instructions+=3;goto B64f84b;
case 0x64f84c:c.instructions+=2;goto B64f84c;
case 0x64f84d:c.instructions+=1;goto B64f84d;
case 0x64f850:goto L64f850;
case 0x64f853:c.instructions+=1;goto B64f853;
case 0x64f855:goto L64f855;
case 0x64f857:c.instructions+=6;goto B64f857;
case 0x64f858:c.instructions+=5;goto B64f858;
case 0x64f85a:c.instructions+=4;goto B64f85a;
case 0x64f85d:c.instructions+=3;goto B64f85d;
case 0x64f860:c.instructions+=2;goto B64f860;
case 0x64f862:c.instructions+=1;goto B64f862;
case 0x64f864:goto L64f864;
case 0x64f865:c.instructions+=2;goto B64f865;
case 0x64f868:c.instructions+=1;goto B64f868;
case 0x64f86a:goto L64f86a;
case 0x64f871:goto L64f871;
case 0x64f873:c.instructions+=1;goto B64f873;
case 0x64f875:goto L64f875;
case 0x64f878:goto L64f878;
case 0x64f87a:goto L64f87a;
case 0x64f87c:c.instructions+=1;goto B64f87c;
case 0x64f87d:goto L64f87d;
case 0x64f87e:c.instructions+=1;goto B64f87e;
case 0x64f881:goto L64f881;
case 0x64f883:c.instructions+=1;goto B64f883;
case 0x64f885:goto L64f885;
case 0x64f888:c.instructions+=1;goto B64f888;
case 0x64f88a:goto L64f88a;
case 0x64f88d:c.instructions+=1;goto B64f88d;
case 0x64f88f:goto L64f88f;
case 0x64f892:c.instructions+=1;goto B64f892;
case 0x64f894:goto L64f894;
case 0x64f895:c.instructions+=1;goto B64f895;
case 0x64f897:goto L64f897;
case 0x64f898:c.instructions+=2;goto B64f898;
case 0x64f899:c.instructions+=1;goto B64f899;
case 0x64f89b:goto L64f89b;
case 0x64f89c:c.instructions+=1;goto B64f89c;
case 0x64f89d:goto L64f89d;
case 0x64f89f:goto L64f89f;
case 0x64f8a0:c.instructions+=2;goto B64f8a0;
case 0x64f8a1:c.instructions+=1;goto B64f8a1;
case 0x64f8a3:goto L64f8a3;
case 0x64f8a6:c.instructions+=1;goto B64f8a6;
case 0x64f8a8:goto L64f8a8;
case 0x64f8ab:c.instructions+=1;goto B64f8ab;
case 0x64f8ad:goto L64f8ad;
case 0x64f8b0:c.instructions+=1;goto B64f8b0;
case 0x64f8b2:goto L64f8b2;
case 0x64f8b5:c.instructions+=1;goto B64f8b5;
case 0x64f8b7:goto L64f8b7;
case 0x64f8ba:c.instructions+=1;goto B64f8ba;
case 0x64f8bc:goto L64f8bc;
case 0x64f8bf:c.instructions+=1;goto B64f8bf;
case 0x64f8c1:goto L64f8c1;
case 0x64f8c4:c.instructions+=1;goto B64f8c4;
case 0x64f8c6:goto L64f8c6;
case 0x64f8c9:c.instructions+=1;goto B64f8c9;
case 0x64f8cb:goto L64f8cb;
case 0x64f8ce:c.instructions+=1;goto B64f8ce;
case 0x64f8d0:goto L64f8d0;
case 0x64f8d3:c.instructions+=1;goto B64f8d3;
case 0x64f8d5:goto L64f8d5;
case 0x64f8d8:goto L64f8d8;
case 0x64f8da:goto L64f8da;
case 0x64f8dc:c.instructions+=1;goto B64f8dc;
case 0x64f90e:goto L64f90e;
case 0x64f911:c.instructions+=2;goto B64f911;
case 0x64f913:c.instructions+=1;goto B64f913;
case 0x64f915:goto L64f915;
case 0x64f918:c.instructions+=2;goto B64f918;
case 0x64f91b:c.instructions+=1;goto B64f91b;
case 0x64f91f:goto L64f91f;
case 0x64f921:c.instructions+=1;goto B64f921;
case 0x64f922:goto L64f922;
case 0x64f925:c.instructions+=2;goto B64f925;
case 0x64f927:c.instructions+=1;goto B64f927;
case 0x64f929:goto L64f929;
case 0x64f92a:goto L64f92a;
case 0x64f92d:c.instructions+=1;goto B64f92d;
case 0x64f92e:goto L64f92e;
case 0x64f930:c.instructions+=8;goto B64f930;
case 0x64f931:c.instructions+=7;goto B64f931;
case 0x64f933:c.instructions+=6;goto B64f933;
case 0x64f934:c.instructions+=5;goto B64f934;
case 0x64f937:c.instructions+=4;goto B64f937;
case 0x64f939:c.instructions+=3;goto B64f939;
case 0x64f93a:c.instructions+=2;goto B64f93a;
case 0x64f93c:c.instructions+=1;goto B64f93c;
case 0x64f93e:goto L64f93e;
case 0x64f941:c.instructions+=2;goto B64f941;
case 0x64f942:c.instructions+=1;goto B64f942;
case 0x64f944:goto L64f944;
case 0x64f947:c.instructions+=1;goto B64f947;
case 0x64f949:goto L64f949;
case 0x64f94a:c.instructions+=2;goto B64f94a;
case 0x64f94b:c.instructions+=1;goto B64f94b;
case 0x64f94d:goto L64f94d;
case 0x64f94e:c.instructions+=1;goto B64f94e;
case 0x64f950:goto L64f950;
case 0x64f951:c.instructions+=2;goto B64f951;
case 0x64f952:c.instructions+=1;goto B64f952;
case 0x64f954:goto L64f954;
case 0x64f959:c.instructions+=4;goto B64f959;
case 0x64f95b:c.instructions+=3;goto B64f95b;
case 0x64f95d:c.instructions+=2;goto B64f95d;
case 0x64f95e:c.instructions+=1;goto B64f95e;
case 0x64f963:goto L64f963;
case 0x64f966:c.instructions+=1;goto B64f966;
case 0x64f968:goto L64f968;
case 0x64f96b:c.instructions+=2;goto B64f96b;
case 0x64f96e:c.instructions+=1;goto B64f96e;
case 0x64f970:goto L64f970;
case 0x64f974:c.instructions+=1;goto B64f974;
case 0x64f976:goto L64f976;
case 0x64f97a:c.instructions+=1;goto B64f97a;
case 0x64f97c:goto L64f97c;
case 0x64f980:c.instructions+=1;goto B64f980;
case 0x64f982:goto L64f982;
case 0x64f985:c.instructions+=2;goto B64f985;
case 0x64f988:c.instructions+=1;goto B64f988;
case 0x64f98a:goto L64f98a;
case 0x64f98d:c.instructions+=2;goto B64f98d;
case 0x64f990:c.instructions+=1;goto B64f990;
case 0x64f992:goto L64f992;
case 0x64f996:c.instructions+=1;goto B64f996;
case 0x64f998:goto L64f998;
case 0x64f99b:c.instructions+=3;goto B64f99b;
case 0x64f99d:c.instructions+=2;goto B64f99d;
case 0x64f9a0:c.instructions+=1;goto B64f9a0;
case 0x64f9a5:goto L64f9a5;
case 0x64f9a8:c.instructions+=2;goto B64f9a8;
case 0x64f9aa:c.instructions+=1;goto B64f9aa;
case 0x64f9ac:goto L64f9ac;
case 0x64f9ae:c.instructions+=1;goto B64f9ae;
case 0x64f9b0:goto L64f9b0;
case 0x64f9b3:c.instructions+=1;goto B64f9b3;
case 0x64f9b4:goto L64f9b4;
case 0x64f9b6:c.instructions+=1;goto B64f9b6;
case 0x64f9bb:goto L64f9bb;
case 0x64f9bc:c.instructions+=4;goto B64f9bc;
case 0x64f9be:c.instructions+=3;goto B64f9be;
case 0x64f9bf:c.instructions+=2;goto B64f9bf;
case 0x64f9c0:c.instructions+=1;goto B64f9c0;
case 0x64f9c3:goto L64f9c3;
case 0x64f9c5:c.instructions+=13;goto B64f9c5;
case 0x64f9c6:c.instructions+=12;goto B64f9c6;
case 0x64f9c8:c.instructions+=11;goto B64f9c8;
case 0x64f9c9:c.instructions+=10;goto B64f9c9;
case 0x64f9ca:c.instructions+=9;goto B64f9ca;
case 0x64f9cd:c.instructions+=8;goto B64f9cd;
case 0x64f9ce:c.instructions+=7;goto B64f9ce;
case 0x64f9d1:c.instructions+=6;goto B64f9d1;
case 0x64f9d4:c.instructions+=5;goto B64f9d4;
case 0x64f9d7:c.instructions+=4;goto B64f9d7;
case 0x64f9d8:c.instructions+=3;goto B64f9d8;
case 0x64f9da:c.instructions+=2;goto B64f9da;
case 0x64f9dd:c.instructions+=1;goto B64f9dd;
case 0x64f9df:goto L64f9df;
case 0x64f9e4:c.instructions+=5;goto B64f9e4;
case 0x64f9e9:c.instructions+=4;goto B64f9e9;
case 0x64f9ec:c.instructions+=3;goto B64f9ec;
case 0x64f9ed:c.instructions+=2;goto B64f9ed;
case 0x64f9ee:c.instructions+=1;goto B64f9ee;
case 0x64f9f3:goto L64f9f3;
case 0x64f9f6:goto L64f9f6;
case 0x64f9fa:c.instructions+=1;goto B64f9fa;
case 0x64f9fc:goto L64f9fc;
case 0x64f9ff:c.instructions+=2;goto B64f9ff;
case 0x64fa01:c.instructions+=1;goto B64fa01;
case 0x64fa03:goto L64fa03;
case 0x64fa05:c.instructions+=5;goto B64fa05;
case 0x64fa06:c.instructions+=4;goto B64fa06;
case 0x64fa0b:c.instructions+=3;goto B64fa0b;
case 0x64fa0e:c.instructions+=2;goto B64fa0e;
case 0x64fa11:c.instructions+=1;goto B64fa11;
case 0x64fa14:goto L64fa14;
case 0x64fa16:goto L64fa16;
case 0x64fa1b:goto L64fa1b;
case 0x64fa1e:c.instructions+=2;goto B64fa1e;
case 0x64fa1f:c.instructions+=1;goto B64fa1f;
case 0x64fa20:goto L64fa20;
case 0x64fa23:c.instructions+=3;goto B64fa23;
case 0x64fa26:c.instructions+=2;goto B64fa26;
case 0x64fa2a:c.instructions+=1;goto B64fa2a;
case 0x64fa2c:goto L64fa2c;
case 0x64fa2f:c.instructions+=2;goto B64fa2f;
case 0x64fa31:c.instructions+=1;goto B64fa31;
case 0x64fa33:goto L64fa33;
case 0x64fa34:c.instructions+=1;goto B64fa34;
case 0x64fa39:goto L64fa39;
case 0x64fa3b:c.instructions+=2;goto B64fa3b;
case 0x64fa3e:c.instructions+=1;goto B64fa3e;
case 0x64fa40:goto L64fa40;
case 0x64fa45:c.instructions+=1;goto B64fa45;
case 0x64fa47:goto L64fa47;
case 0x64fa49:goto L64fa49;
case 0x64fa4a:c.instructions+=4;goto B64fa4a;
case 0x64fa4b:c.instructions+=3;goto B64fa4b;
case 0x64fa4c:c.instructions+=2;goto B64fa4c;
case 0x64fa4d:c.instructions+=1;goto B64fa4d;
case 0x64fa50:goto L64fa50;
case 0x64fa52:c.instructions+=6;goto B64fa52;
case 0x64fa53:c.instructions+=5;goto B64fa53;
case 0x64fa55:c.instructions+=4;goto B64fa55;
case 0x64fa56:c.instructions+=3;goto B64fa56;
case 0x64fa59:c.instructions+=2;goto B64fa59;
case 0x64fa5a:c.instructions+=1;goto B64fa5a;
case 0x64fa5c:goto L64fa5c;
case 0x64fa5e:c.instructions+=1;goto B64fa5e;
case 0x64fa60:goto L64fa60;
case 0x64fa63:c.instructions+=2;goto B64fa63;
case 0x64fa66:c.instructions+=1;goto B64fa66;
case 0x64fa68:goto L64fa68;
case 0x64fa6b:c.instructions+=2;goto B64fa6b;
case 0x64fa6d:c.instructions+=1;goto B64fa6d;
case 0x64fa72:goto L64fa72;
case 0x64fa74:c.instructions+=1;goto B64fa74;
case 0x64fa76:goto L64fa76;
case 0x64fa79:c.instructions+=1;goto B64fa79;
case 0x64fa7b:goto L64fa7b;
case 0x64fa7e:c.instructions+=1;goto B64fa7e;
case 0x64fa80:goto L64fa80;
case 0x64fa81:c.instructions+=2;goto B64fa81;
case 0x64fa82:c.instructions+=1;goto B64fa82;
case 0x64fa84:goto L64fa84;
case 0x64fa85:c.instructions+=1;goto B64fa85;
case 0x64fa87:goto L64fa87;
case 0x64fa88:c.instructions+=2;goto B64fa88;
case 0x64fa89:c.instructions+=1;goto B64fa89;
case 0x64fa8b:goto L64fa8b;
case 0x64fa8e:c.instructions+=1;goto B64fa8e;
case 0x64fa90:goto L64fa90;
case 0x64fa93:c.instructions+=1;goto B64fa93;
case 0x64fa95:goto L64fa95;
case 0x64fa98:c.instructions+=1;goto B64fa98;
case 0x64fa9a:goto L64fa9a;
case 0x64fa9c:c.instructions+=2;goto B64fa9c;
case 0x64fa9d:c.instructions+=1;goto B64fa9d;
case 0x64fa9f:goto L64fa9f;
case 0x64faa4:c.instructions+=4;goto B64faa4;
case 0x64faa6:c.instructions+=3;goto B64faa6;
case 0x64faa8:c.instructions+=2;goto B64faa8;
case 0x64faa9:c.instructions+=1;goto B64faa9;
case 0x64faae:goto L64faae;
case 0x64fab1:goto L64fab1;
case 0x64fab3:c.instructions+=1;goto B64fab3;
case 0x64fab5:goto L64fab5;
case 0x64fab8:c.instructions+=1;goto B64fab8;
case 0x64fabd:goto L64fabd;
case 0x64fabe:c.instructions+=3;goto B64fabe;
case 0x64fabf:c.instructions+=2;goto B64fabf;
case 0x64fac0:c.instructions+=1;goto B64fac0;
case 0x64fac3:goto L64fac3;
case 0x64fac5:c.instructions+=5;goto B64fac5;
case 0x64fac6:c.instructions+=4;goto B64fac6;
case 0x64fac8:c.instructions+=3;goto B64fac8;
case 0x64facb:c.instructions+=2;goto B64facb;
case 0x64facd:c.instructions+=1;goto B64facd;
case 0x64facf:goto L64facf;
case 0x64fad1:c.instructions+=1;goto B64fad1;
case 0x64fad3:goto L64fad3;
case 0x64fad7:c.instructions+=1;goto B64fad7;
case 0x64fad9:goto L64fad9;
case 0x64fadb:c.instructions+=3;goto B64fadb;
case 0x64fade:c.instructions+=2;goto B64fade;
case 0x64fae1:c.instructions+=1;goto B64fae1;
case 0x64fae3:goto L64fae3;
case 0x64fae4:c.instructions+=1;goto B64fae4;
case 0x64fae7:goto L64fae7;
case 0x64fae9:c.instructions+=6;goto B64fae9;
case 0x64faea:c.instructions+=5;goto B64faea;
case 0x64faec:c.instructions+=4;goto B64faec;
case 0x64faed:c.instructions+=3;goto B64faed;
case 0x64faf0:c.instructions+=2;goto B64faf0;
case 0x64faf1:c.instructions+=1;goto B64faf1;
case 0x64faf3:goto L64faf3;
case 0x64faf5:c.instructions+=1;goto B64faf5;
case 0x64faf7:goto L64faf7;
case 0x64fafa:c.instructions+=2;goto B64fafa;
case 0x64fafd:c.instructions+=1;goto B64fafd;
case 0x64faff:goto L64faff;
case 0x64fb02:c.instructions+=2;goto B64fb02;
case 0x64fb04:c.instructions+=1;goto B64fb04;
case 0x64fb09:goto L64fb09;
case 0x64fb0b:c.instructions+=1;goto B64fb0b;
case 0x64fb0d:goto L64fb0d;
case 0x64fb10:c.instructions+=1;goto B64fb10;
case 0x64fb12:goto L64fb12;
case 0x64fb15:c.instructions+=1;goto B64fb15;
case 0x64fb17:goto L64fb17;
case 0x64fb18:c.instructions+=2;goto B64fb18;
case 0x64fb19:c.instructions+=1;goto B64fb19;
case 0x64fb1b:goto L64fb1b;
case 0x64fb1c:c.instructions+=1;goto B64fb1c;
case 0x64fb1e:goto L64fb1e;
case 0x64fb1f:c.instructions+=2;goto B64fb1f;
case 0x64fb20:c.instructions+=1;goto B64fb20;
case 0x64fb22:goto L64fb22;
case 0x64fb25:c.instructions+=1;goto B64fb25;
case 0x64fb27:goto L64fb27;
case 0x64fb2a:c.instructions+=1;goto B64fb2a;
case 0x64fb2c:goto L64fb2c;
case 0x64fb2f:c.instructions+=1;goto B64fb2f;
case 0x64fb31:goto L64fb31;
case 0x64fb33:c.instructions+=2;goto B64fb33;
case 0x64fb34:c.instructions+=1;goto B64fb34;
case 0x64fb36:goto L64fb36;
case 0x64fb3b:c.instructions+=4;goto B64fb3b;
case 0x64fb3d:c.instructions+=3;goto B64fb3d;
case 0x64fb3f:c.instructions+=2;goto B64fb3f;
case 0x64fb40:c.instructions+=1;goto B64fb40;
case 0x64fb45:goto L64fb45;
case 0x64fb48:c.instructions+=1;goto B64fb48;
case 0x64fb4a:goto L64fb4a;
case 0x64fb4d:c.instructions+=2;goto B64fb4d;
case 0x64fb4f:c.instructions+=1;goto B64fb4f;
case 0x64fb51:goto L64fb51;
case 0x64fb54:c.instructions+=1;goto B64fb54;
case 0x64fb56:goto L64fb56;
case 0x64fb58:goto L64fb58;
case 0x64fb59:c.instructions+=3;goto B64fb59;
case 0x64fb5a:c.instructions+=2;goto B64fb5a;
case 0x64fb5b:c.instructions+=1;goto B64fb5b;
case 0x64fb5e:goto L64fb5e;
case 0x64fb60:c.instructions+=10;goto B64fb60;
case 0x64fb61:c.instructions+=9;goto B64fb61;
case 0x64fb63:c.instructions+=8;goto B64fb63;
case 0x64fb64:c.instructions+=7;goto B64fb64;
case 0x64fb65:c.instructions+=6;goto B64fb65;
case 0x64fb68:c.instructions+=5;goto B64fb68;
case 0x64fb69:c.instructions+=4;goto B64fb69;
case 0x64fb6b:c.instructions+=3;goto B64fb6b;
case 0x64fb6d:c.instructions+=2;goto B64fb6d;
case 0x64fb6f:c.instructions+=1;goto B64fb6f;
case 0x64fb71:goto L64fb71;
case 0x64fb75:c.instructions+=1;goto B64fb75;
case 0x64fb77:goto L64fb77;
case 0x64fb7a:c.instructions+=2;goto B64fb7a;
case 0x64fb7c:c.instructions+=1;goto B64fb7c;
case 0x64fb81:goto L64fb81;
case 0x64fb84:c.instructions+=3;goto B64fb84;
case 0x64fb86:c.instructions+=2;goto B64fb86;
case 0x64fb88:c.instructions+=1;goto B64fb88;
case 0x64fb8a:goto L64fb8a;
case 0x64fb8c:c.instructions+=1;goto B64fb8c;
case 0x64fb8e:goto L64fb8e;
case 0x64fb90:c.instructions+=1;goto B64fb90;
case 0x64fb92:goto L64fb92;
case 0x64fb95:c.instructions+=2;goto B64fb95;
case 0x64fb98:c.instructions+=1;goto B64fb98;
case 0x64fb9a:goto L64fb9a;
case 0x64fb9b:c.instructions+=2;goto B64fb9b;
case 0x64fb9c:c.instructions+=1;goto B64fb9c;
case 0x64fb9e:goto L64fb9e;
case 0x64fb9f:c.instructions+=1;goto B64fb9f;
case 0x64fba1:goto L64fba1;
case 0x64fba2:c.instructions+=2;goto B64fba2;
case 0x64fba3:c.instructions+=1;goto B64fba3;
case 0x64fba5:goto L64fba5;
case 0x64fbaa:c.instructions+=4;goto B64fbaa;
case 0x64fbac:c.instructions+=3;goto B64fbac;
case 0x64fbae:c.instructions+=2;goto B64fbae;
case 0x64fbaf:c.instructions+=1;goto B64fbaf;
case 0x64fbb4:goto L64fbb4;
case 0x64fbb7:c.instructions+=2;goto B64fbb7;
case 0x64fbb9:c.instructions+=1;goto B64fbb9;
case 0x64fbbb:goto L64fbbb;
case 0x64fbbe:c.instructions+=1;goto B64fbbe;
case 0x64fbc0:goto L64fbc0;
case 0x64fbc3:c.instructions+=2;goto B64fbc3;
case 0x64fbc7:c.instructions+=1;goto B64fbc7;
case 0x64fbc9:goto L64fbc9;
case 0x64fbcc:c.instructions+=2;goto B64fbcc;
case 0x64fbce:c.instructions+=1;goto B64fbce;
case 0x64fbd3:goto L64fbd3;
case 0x64fbd7:c.instructions+=1;goto B64fbd7;
case 0x64fbd9:goto L64fbd9;
case 0x64fbdc:goto L64fbdc;
case 0x64fbde:c.instructions+=1;goto B64fbde;
case 0x64fbe3:goto L64fbe3;
case 0x64fbe5:goto L64fbe5;
case 0x64fbe6:c.instructions+=4;goto B64fbe6;
case 0x64fbe7:c.instructions+=3;goto B64fbe7;
case 0x64fbe8:c.instructions+=2;goto B64fbe8;
case 0x64fbe9:c.instructions+=1;goto B64fbe9;
case 0x64fbec:goto L64fbec;
case 0x64fbee:c.instructions+=8;goto B64fbee;
case 0x64fbef:c.instructions+=7;goto B64fbef;
case 0x64fbf1:c.instructions+=6;goto B64fbf1;
case 0x64fbf2:c.instructions+=5;goto B64fbf2;
case 0x64fbf3:c.instructions+=4;goto B64fbf3;
case 0x64fbf6:c.instructions+=3;goto B64fbf6;
case 0x64fbf7:c.instructions+=2;goto B64fbf7;
case 0x64fbfa:c.instructions+=1;goto B64fbfa;
case 0x64fbfc:goto L64fbfc;
case 0x64fbfe:c.instructions+=1;goto B64fbfe;
case 0x64fc00:goto L64fc00;
case 0x64fc03:c.instructions+=2;goto B64fc03;
case 0x64fc06:c.instructions+=1;goto B64fc06;
case 0x64fc08:goto L64fc08;
case 0x64fc0a:c.instructions+=1;goto B64fc0a;
case 0x64fc10:goto L64fc10;
case 0x64fc13:c.instructions+=1;goto B64fc13;
case 0x64fc15:goto L64fc15;
case 0x64fc18:c.instructions+=3;goto B64fc18;
case 0x64fc1a:c.instructions+=2;goto B64fc1a;
case 0x64fc1d:c.instructions+=1;goto B64fc1d;
case 0x64fc22:goto L64fc22;
case 0x64fc24:c.instructions+=1;goto B64fc24;
case 0x64fc26:goto L64fc26;
case 0x64fc29:c.instructions+=2;goto B64fc29;
case 0x64fc2c:c.instructions+=1;goto B64fc2c;
case 0x64fc2e:goto L64fc2e;
case 0x64fc30:c.instructions+=1;goto B64fc30;
case 0x64fc32:goto L64fc32;
case 0x64fc35:c.instructions+=1;goto B64fc35;
case 0x64fc37:goto L64fc37;
case 0x64fc3a:c.instructions+=1;goto B64fc3a;
case 0x64fc3c:goto L64fc3c;
case 0x64fc3d:c.instructions+=2;goto B64fc3d;
case 0x64fc3e:c.instructions+=1;goto B64fc3e;
case 0x64fc40:goto L64fc40;
case 0x64fc41:c.instructions+=1;goto B64fc41;
case 0x64fc43:goto L64fc43;
case 0x64fc44:c.instructions+=2;goto B64fc44;
case 0x64fc45:c.instructions+=1;goto B64fc45;
case 0x64fc47:goto L64fc47;
case 0x64fc4a:c.instructions+=2;goto B64fc4a;
case 0x64fc4d:c.instructions+=1;goto B64fc4d;
case 0x64fc4f:goto L64fc4f;
case 0x64fc52:c.instructions+=2;goto B64fc52;
case 0x64fc55:c.instructions+=1;goto B64fc55;
case 0x64fc57:goto L64fc57;
case 0x64fc5a:c.instructions+=2;goto B64fc5a;
case 0x64fc5d:c.instructions+=1;goto B64fc5d;
case 0x64fc5f:goto L64fc5f;
case 0x64fc62:c.instructions+=2;goto B64fc62;
case 0x64fc65:c.instructions+=1;goto B64fc65;
case 0x64fc67:goto L64fc67;
case 0x64fc69:c.instructions+=3;goto B64fc69;
case 0x64fc6b:c.instructions+=2;goto B64fc6b;
case 0x64fc6e:c.instructions+=1;goto B64fc6e;
case 0x64fc70:goto L64fc70;
case 0x64fc73:c.instructions+=2;goto B64fc73;
case 0x64fc76:c.instructions+=1;goto B64fc76;
case 0x64fc78:goto L64fc78;
case 0x64fc7b:c.instructions+=2;goto B64fc7b;
case 0x64fc7e:c.instructions+=1;goto B64fc7e;
case 0x64fc80:goto L64fc80;
case 0x64fc83:c.instructions+=2;goto B64fc83;
case 0x64fc86:c.instructions+=1;goto B64fc86;
case 0x64fc88:goto L64fc88;
case 0x64fc8b:c.instructions+=2;goto B64fc8b;
case 0x64fc8e:c.instructions+=1;goto B64fc8e;
case 0x64fc90:goto L64fc90;
case 0x64fc92:c.instructions+=2;goto B64fc92;
case 0x64fc93:c.instructions+=1;goto B64fc93;
case 0x64fc95:goto L64fc95;
case 0x64fc97:goto L64fc97;
case 0x64fc98:c.instructions+=4;goto B64fc98;
case 0x64fc99:c.instructions+=3;goto B64fc99;
case 0x64fc9a:c.instructions+=2;goto B64fc9a;
case 0x64fc9b:c.instructions+=1;goto B64fc9b;
case 0x64fc9e:goto L64fc9e;
case 0x64fca0:c.instructions+=12;goto B64fca0;
case 0x64fca1:c.instructions+=11;goto B64fca1;
case 0x64fca3:c.instructions+=10;goto B64fca3;
case 0x64fca9:c.instructions+=9;goto B64fca9;
case 0x64fcaa:c.instructions+=8;goto B64fcaa;
case 0x64fcab:c.instructions+=7;goto B64fcab;
case 0x64fcac:c.instructions+=6;goto B64fcac;
case 0x64fcaf:c.instructions+=5;goto B64fcaf;
case 0x64fcb1:c.instructions+=4;goto B64fcb1;
case 0x64fcb7:c.instructions+=3;goto B64fcb7;
case 0x64fcb9:c.instructions+=2;goto B64fcb9;
case 0x64fcbc:c.instructions+=1;goto B64fcbc;
case 0x64fcbe:goto L64fcbe;
case 0x64fcc5:c.instructions+=1;goto B64fcc5;
case 0x64fcca:goto L64fcca;
case 0x64fccd:c.instructions+=2;goto B64fccd;
case 0x64fcce:c.instructions+=1;goto B64fcce;
case 0x64fcd4:goto L64fcd4;
case 0x64fcd7:c.instructions+=1;goto B64fcd7;
case 0x64fcdd:goto L64fcdd;
case 0x64fcde:c.instructions+=1;goto B64fcde;
case 0x64fce0:goto L64fce0;
case 0x64fce7:c.instructions+=1;goto B64fce7;
case 0x64fcec:goto L64fcec;
case 0x64fcf0:c.instructions+=2;goto B64fcf0;
case 0x64fcf5:c.instructions+=1;goto B64fcf5;
case 0x64fcf7:goto L64fcf7;
case 0x64fcfc:goto L64fcfc;
case 0x64fcff:c.instructions+=2;goto B64fcff;
case 0x64fd02:c.instructions+=1;goto B64fd02;
case 0x64fd08:goto L64fd08;
case 0x64fd0f:goto L64fd0f;
case 0x64fd14:c.instructions+=1;goto B64fd14;
case 0x64fd19:goto L64fd19;
case 0x64fd1e:c.instructions+=1;goto B64fd1e;
case 0x64fd23:goto L64fd23;
case 0x64fd28:c.instructions+=1;goto B64fd28;
case 0x64fd2d:goto L64fd2d;
case 0x64fd32:c.instructions+=1;goto B64fd32;
case 0x64fd37:goto L64fd37;
case 0x64fd3c:c.instructions+=1;goto B64fd3c;
case 0x64fd3e:goto L64fd3e;
case 0x64fd43:c.instructions+=1;goto B64fd43;
case 0x64fd45:goto L64fd45;
case 0x64fd4a:c.instructions+=1;goto B64fd4a;
case 0x64fd4c:goto L64fd4c;
case 0x64fd51:c.instructions+=1;goto B64fd51;
case 0x64fd53:goto L64fd53;
case 0x64fd58:c.instructions+=1;goto B64fd58;
case 0x64fd5a:goto L64fd5a;
case 0x64fd5f:c.instructions+=1;goto B64fd5f;
case 0x64fd61:goto L64fd61;
case 0x64fd66:c.instructions+=1;goto B64fd66;
case 0x64fd68:goto L64fd68;
case 0x64fd6d:c.instructions+=1;goto B64fd6d;
case 0x64fd6f:goto L64fd6f;
case 0x64fd74:c.instructions+=1;goto B64fd74;
case 0x64fd76:goto L64fd76;
case 0x64fd7b:c.instructions+=1;goto B64fd7b;
case 0x64fd7d:goto L64fd7d;
case 0x64fd82:c.instructions+=1;goto B64fd82;
case 0x64fd84:goto L64fd84;
case 0x64fd89:c.instructions+=1;goto B64fd89;
case 0x64fd8b:goto L64fd8b;
case 0x64fd90:c.instructions+=1;goto B64fd90;
case 0x64fd92:goto L64fd92;
case 0x64fd97:c.instructions+=1;goto B64fd97;
case 0x64fd99:goto L64fd99;
case 0x64fd9e:c.instructions+=1;goto B64fd9e;
case 0x64fda0:goto L64fda0;
case 0x64fda5:c.instructions+=1;goto B64fda5;
case 0x64fda7:goto L64fda7;
case 0x64fdac:c.instructions+=1;goto B64fdac;
case 0x64fdae:goto L64fdae;
case 0x64fdb3:c.instructions+=1;goto B64fdb3;
case 0x64fdb5:goto L64fdb5;
case 0x64fdba:goto L64fdba;
case 0x64fdbd:c.instructions+=2;goto B64fdbd;
case 0x64fdbe:c.instructions+=1;goto B64fdbe;
case 0x64fdc0:goto L64fdc0;
case 0x64fdc1:c.instructions+=1;goto B64fdc1;
case 0x64fdc3:goto L64fdc3;
case 0x64fdc4:c.instructions+=3;goto B64fdc4;
case 0x64fdc5:c.instructions+=2;goto B64fdc5;
case 0x64fdca:c.instructions+=1;goto B64fdca;
case 0x64fdcf:goto L64fdcf;
case 0x64fdd2:c.instructions+=8;goto B64fdd2;
case 0x64fdd5:c.instructions+=7;goto B64fdd5;
case 0x64fdd6:c.instructions+=6;goto B64fdd6;
case 0x64fdd7:c.instructions+=5;goto B64fdd7;
case 0x64fddc:c.instructions+=4;goto B64fddc;
case 0x64fde2:c.instructions+=3;goto B64fde2;
case 0x64fde7:c.instructions+=2;goto B64fde7;
case 0x64fde8:c.instructions+=1;goto B64fde8;
case 0x64fded:goto L64fded;
case 0x64fdf0:c.instructions+=1;goto B64fdf0;
case 0x64fdf5:goto L64fdf5;
case 0x64fdf8:c.instructions+=7;goto B64fdf8;
case 0x64fdf9:c.instructions+=6;goto B64fdf9;
case 0x64fdfa:c.instructions+=5;goto B64fdfa;
case 0x64fdff:c.instructions+=4;goto B64fdff;
case 0x64fe05:c.instructions+=3;goto B64fe05;
case 0x64fe0a:c.instructions+=2;goto B64fe0a;
case 0x64fe0b:c.instructions+=1;goto B64fe0b;
case 0x64fe10:goto L64fe10;
case 0x64fe13:c.instructions+=1;goto B64fe13;
case 0x64fe18:goto L64fe18;
case 0x64fe1c:c.instructions+=2;goto B64fe1c;
case 0x64fe1e:c.instructions+=1;goto B64fe1e;
case 0x64fe20:goto L64fe20;
case 0x64fe23:c.instructions+=2;goto B64fe23;
case 0x64fe27:c.instructions+=1;goto B64fe27;
case 0x64fe29:goto L64fe29;
case 0x64fe2a:c.instructions+=6;goto B64fe2a;
case 0x64fe2f:c.instructions+=5;goto B64fe2f;
case 0x64fe30:c.instructions+=4;goto B64fe30;
case 0x64fe36:c.instructions+=3;goto B64fe36;
case 0x64fe37:c.instructions+=2;goto B64fe37;
case 0x64fe39:c.instructions+=1;goto B64fe39;
case 0x64fe3e:goto L64fe3e;
case 0x64fe40:c.instructions+=1;goto B64fe40;
case 0x64fe42:goto L64fe42;
case 0x64fe45:c.instructions+=7;goto B64fe45;
case 0x64fe47:c.instructions+=6;goto B64fe47;
case 0x64fe4c:c.instructions+=5;goto B64fe4c;
case 0x64fe4e:c.instructions+=4;goto B64fe4e;
case 0x64fe55:c.instructions+=3;goto B64fe55;
case 0x64fe56:c.instructions+=2;goto B64fe56;
case 0x64fe57:c.instructions+=1;goto B64fe57;
case 0x64fe5c:goto L64fe5c;
case 0x64fe63:c.instructions+=3;goto B64fe63;
case 0x64fe66:c.instructions+=2;goto B64fe66;
case 0x64fe6a:c.instructions+=1;goto B64fe6a;
case 0x64fe6d:goto L64fe6d;
case 0x64fe6f:c.instructions+=3;goto B64fe6f;
case 0x64fe70:c.instructions+=2;goto B64fe70;
case 0x64fe72:c.instructions+=1;goto B64fe72;
case 0x64fe74:goto L64fe74;
case 0x64fe77:c.instructions+=2;goto B64fe77;
case 0x64fe79:c.instructions+=1;goto B64fe79;
case 0x64fe7b:goto L64fe7b;
case 0x64fe7f:c.instructions+=1;goto B64fe7f;
case 0x64fe81:goto L64fe81;
case 0x64fe83:goto L64fe83;
case 0x64fe84:c.instructions+=2;goto B64fe84;
case 0x64fe86:c.instructions+=1;goto B64fe86;
case 0x64fe8b:goto L64fe8b;
case 0x64fe8d:c.instructions+=2;goto B64fe8d;
case 0x64fe92:c.instructions+=1;goto B64fe92;
case 0x64fe94:goto L64fe94;
case 0x64fe99:goto L64fe99;
case 0x64fe9a:c.instructions+=2;goto B64fe9a;
case 0x64fe9c:c.instructions+=1;goto B64fe9c;
case 0x64fea1:goto L64fea1;
case 0x64fea2:c.instructions+=2;goto B64fea2;
case 0x64fea3:c.instructions+=1;goto B64fea3;
case 0x64fea8:goto L64fea8;
case 0x64feae:c.instructions+=3;goto B64feae;
case 0x64feb3:c.instructions+=2;goto B64feb3;
case 0x64feb4:c.instructions+=1;goto B64feb4;
case 0x64feb9:goto L64feb9;
case 0x64febc:goto L64febc;
case 0x64fec0:goto L64fec0;
case 0x64fec3:c.instructions+=2;goto B64fec3;
case 0x64fec5:c.instructions+=1;goto B64fec5;
case 0x64fec8:goto L64fec8;
case 0x64feca:c.instructions+=3;goto B64feca;
case 0x64fecb:c.instructions+=2;goto B64fecb;
case 0x64fecd:c.instructions+=1;goto B64fecd;
case 0x64fecf:goto L64fecf;
case 0x64fed1:c.instructions+=2;goto B64fed1;
case 0x64fed4:c.instructions+=1;goto B64fed4;
case 0x64fed6:goto L64fed6;
case 0x64fed9:goto L64fed9;
case 0x64fedc:c.instructions+=4;goto B64fedc;
case 0x64fede:c.instructions+=3;goto B64fede;
case 0x64fee0:c.instructions+=2;goto B64fee0;
case 0x64fee3:c.instructions+=1;goto B64fee3;
case 0x64fee5:goto L64fee5;
case 0x64fee7:goto L64fee7;
case 0x64fee9:c.instructions+=1;goto B64fee9;
case 0x64feec:goto L64feec;
case 0x64feee:goto L64feee;
case 0x64feef:c.instructions+=5;goto B64feef;
case 0x64fef0:c.instructions+=4;goto B64fef0;
case 0x64fef4:c.instructions+=3;goto B64fef4;
case 0x64fef5:c.instructions+=2;goto B64fef5;
case 0x64fef6:c.instructions+=1;goto B64fef6;
case 0x64ff71:goto L64ff71;
case 0x64ff73:c.instructions+=10;goto B64ff73;
case 0x64ff74:c.instructions+=9;goto B64ff74;
case 0x64ff76:c.instructions+=8;goto B64ff76;
case 0x64ff77:c.instructions+=7;goto B64ff77;
case 0x64ff78:c.instructions+=6;goto B64ff78;
case 0x64ff7b:c.instructions+=5;goto B64ff7b;
case 0x64ff7d:c.instructions+=4;goto B64ff7d;
case 0x64ff7f:c.instructions+=3;goto B64ff7f;
case 0x64ff80:c.instructions+=2;goto B64ff80;
case 0x64ff82:c.instructions+=1;goto B64ff82;
case 0x64ff84:goto L64ff84;
case 0x64ff87:goto L64ff87;
case 0x64ff8a:c.instructions+=2;goto B64ff8a;
case 0x64ff8b:c.instructions+=1;goto B64ff8b;
case 0x64ff8d:goto L64ff8d;
case 0x64ff90:c.instructions+=1;goto B64ff90;
case 0x64ff92:goto L64ff92;
case 0x64ff93:c.instructions+=2;goto B64ff93;
case 0x64ff94:c.instructions+=1;goto B64ff94;
case 0x64ff96:goto L64ff96;
case 0x64ff97:c.instructions+=1;goto B64ff97;
case 0x64ff99:goto L64ff99;
case 0x64ff9a:c.instructions+=2;goto B64ff9a;
case 0x64ff9b:c.instructions+=1;goto B64ff9b;
case 0x64ff9d:goto L64ff9d;
case 0x64ffa0:c.instructions+=1;goto B64ffa0;
case 0x64ffa2:goto L64ffa2;
case 0x64ffa5:c.instructions+=3;goto B64ffa5;
case 0x64ffa6:c.instructions+=2;goto B64ffa6;
case 0x64ffa8:c.instructions+=1;goto B64ffa8;
case 0x64ffad:goto L64ffad;
case 0x64ffaf:c.instructions+=2;goto B64ffaf;
case 0x64ffb1:c.instructions+=1;goto B64ffb1;
case 0x64ffb3:goto L64ffb3;
case 0x64ffb5:c.instructions+=4;goto B64ffb5;
case 0x64ffb7:c.instructions+=3;goto B64ffb7;
case 0x64ffb9:c.instructions+=2;goto B64ffb9;
case 0x64ffbb:c.instructions+=1;goto B64ffbb;
case 0x64ffbd:goto L64ffbd;
case 0x64ffc0:c.instructions+=1;goto B64ffc0;
case 0x64ffc2:goto L64ffc2;
case 0x64ffc5:c.instructions+=2;goto B64ffc5;
case 0x64ffc7:c.instructions+=1;goto B64ffc7;
case 0x64ffcc:goto L64ffcc;
case 0x64ffce:c.instructions+=1;goto B64ffce;
case 0x64ffd0:goto L64ffd0;
case 0x64ffd3:c.instructions+=1;goto B64ffd3;
case 0x64ffd5:goto L64ffd5;
case 0x64ffd8:c.instructions+=1;goto B64ffd8;
case 0x64ffda:goto L64ffda;
case 0x64ffdc:c.instructions+=2;goto B64ffdc;
case 0x64ffde:c.instructions+=1;goto B64ffde;
case 0x64ffe0:goto L64ffe0;
case 0x64ffe5:c.instructions+=5;goto B64ffe5;
case 0x64ffe6:c.instructions+=4;goto B64ffe6;
case 0x64ffe7:c.instructions+=3;goto B64ffe7;
case 0x64ffe8:c.instructions+=2;goto B64ffe8;
case 0x64ffe9:c.instructions+=1;goto B64ffe9;
case 0x64ffec:goto L64ffec;
case 0x64fff1:c.instructions+=4;goto B64fff1;
case 0x64fff2:c.instructions+=3;goto B64fff2;
case 0x64fff3:c.instructions+=2;goto B64fff3;
case 0x64fff4:c.instructions+=1;goto B64fff4;
case 0x64fff9:goto L64fff9;
case 0x64fffc:c.instructions+=1;goto B64fffc;
case 0x64fffe:goto L64fffe;
default:missing_instruction(c.pc);}
B64f004:L64f004:{c.instructions+=1;NFSU2_TR(0x64f004);
{goto L64f014;}
}
B64f006:L64f006:{c.instructions+=5;NFSU2_TR(0x64f006);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f009:{NFSU2_TR(0x64f009);
__builtin_memmove((R+4),(R+24),4);
}
B64f00b:{NFSU2_TR(0x64f00b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f00e:{NFSU2_TR(0x64f00e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f00f:{NFSU2_TR(0x64f00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f014ull));
TAIL_STATIC(0x64e17cu,64e);
}
B64f014:L64f014:{c.instructions+=2;NFSU2_TR(0x64f014);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f016:{NFSU2_TR(0x64f016);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64f020;}}
}
B64f018:L64f018:{c.instructions+=2;NFSU2_TR(0x64f018);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64f01b:{NFSU2_TR(0x64f01b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f020;}}
}
B64f01d:L64f01d:{c.instructions+=1;NFSU2_TR(0x64f01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f020:L64f020:{c.instructions+=3;NFSU2_TR(0x64f020);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64f023:{NFSU2_TR(0x64f023);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f025:{NFSU2_TR(0x64f025);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64efc2u,64e);}
}
B64f027:L64f027:{c.instructions+=2;NFSU2_TR(0x64f027);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64f02a:{NFSU2_TR(0x64f02a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64f051;}}
}
B64f02c:L64f02c:{c.instructions+=2;NFSU2_TR(0x64f02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64f02f:{NFSU2_TR(0x64f02f);
{goto L64f38a;}
}
B64f034:L64f034:{c.instructions+=6;NFSU2_TR(0x64f034);
u8 U[4];
w4(U+0,u32(0x7afc08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f039:{NFSU2_TR(0x64f039);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f03a:{NFSU2_TR(0x64f03a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f03d:{NFSU2_TR(0x64f03d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f03e:{NFSU2_TR(0x64f03e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f03f:{NFSU2_TR(0x64f03f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f044ull));
TAIL_STATIC(0x64307cu,643);
}
B64f044:L64f044:{c.instructions+=3;NFSU2_TR(0x64f044);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64f047:{NFSU2_TR(0x64f047);
w4(R+12,u32(0x80004005ull));
}
B64f04c:{NFSU2_TR(0x64f04c);
{goto L64f38e;}
}
B64f051:L64f051:{c.instructions+=4;NFSU2_TR(0x64f051);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64f057:{NFSU2_TR(0x64f057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64f059:{NFSU2_TR(0x64f059);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f05b:{NFSU2_TR(0x64f05b);
if(r1(R+518)){{goto L64f066;}}
}
B64f05d:L64f05d:{c.instructions+=2;NFSU2_TR(0x64f05d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f05f:{NFSU2_TR(0x64f05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f064ull));
TAIL_STATIC(0x6476bfu,647);
}
B64f064:L64f064:{c.instructions+=1;NFSU2_TR(0x64f064);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B64f066:L64f066:{c.instructions+=6;NFSU2_TR(0x64f066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f069:{NFSU2_TR(0x64f069);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f06a:{NFSU2_TR(0x64f06a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f06c:{NFSU2_TR(0x64f06c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x328ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f072:{NFSU2_TR(0x64f072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f073:{NFSU2_TR(0x64f073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f078ull));
TAIL_STATIC(0x647827u,647);
}
B64f078:L64f078:{c.instructions+=3;NFSU2_TR(0x64f078);
__builtin_memmove((R+12),(R+0),4);
}
B64f07a:{NFSU2_TR(0x64f07a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f07c:{NFSU2_TR(0x64f07c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f082:L64f082:{c.instructions+=6;NFSU2_TR(0x64f082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f085:{NFSU2_TR(0x64f085);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f086:{NFSU2_TR(0x64f086);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f088:{NFSU2_TR(0x64f088);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x324ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f08e:{NFSU2_TR(0x64f08e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f08f:{NFSU2_TR(0x64f08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f094ull));
TAIL_STATIC(0x647827u,647);
}
B64f094:L64f094:{c.instructions+=3;NFSU2_TR(0x64f094);
__builtin_memmove((R+12),(R+0),4);
}
B64f096:{NFSU2_TR(0x64f096);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f098:{NFSU2_TR(0x64f098);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f09e:L64f09e:{c.instructions+=6;NFSU2_TR(0x64f09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f0a1:{NFSU2_TR(0x64f0a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f0a2:{NFSU2_TR(0x64f0a2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f0a4:{NFSU2_TR(0x64f0a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f0aa:{NFSU2_TR(0x64f0aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f0ab:{NFSU2_TR(0x64f0ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f0b0ull));
TAIL_STATIC(0x647827u,647);
}
B64f0b0:L64f0b0:{c.instructions+=3;NFSU2_TR(0x64f0b0);
__builtin_memmove((R+12),(R+0),4);
}
B64f0b2:{NFSU2_TR(0x64f0b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f0b4:{NFSU2_TR(0x64f0b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f0ba:L64f0ba:{c.instructions+=6;NFSU2_TR(0x64f0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f0bd:{NFSU2_TR(0x64f0bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f0be:{NFSU2_TR(0x64f0be);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f0c0:{NFSU2_TR(0x64f0c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x330ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f0c6:{NFSU2_TR(0x64f0c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f0c7:{NFSU2_TR(0x64f0c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f0ccull));
TAIL_STATIC(0x647827u,647);
}
B64f0cc:L64f0cc:{c.instructions+=3;NFSU2_TR(0x64f0cc);
__builtin_memmove((R+12),(R+0),4);
}
B64f0ce:{NFSU2_TR(0x64f0ce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f0d0:{NFSU2_TR(0x64f0d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f0d6:L64f0d6:{c.instructions+=3;NFSU2_TR(0x64f0d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f0d9:{NFSU2_TR(0x64f0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f0dc:{NFSU2_TR(0x64f0dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f0e1ull));
TAIL_STATIC(0x6479bbu,647);
}
B64f0e1:L64f0e1:{c.instructions+=3;NFSU2_TR(0x64f0e1);
__builtin_memmove((R+12),(R+0),4);
}
B64f0e3:{NFSU2_TR(0x64f0e3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f0e5:{NFSU2_TR(0x64f0e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f0eb:L64f0eb:{c.instructions+=3;NFSU2_TR(0x64f0eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f0ee:{NFSU2_TR(0x64f0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f0f1:{NFSU2_TR(0x64f0f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f0f6ull));
TAIL_STATIC(0x6479bbu,647);
}
B64f0f6:L64f0f6:{c.instructions+=3;NFSU2_TR(0x64f0f6);
__builtin_memmove((R+12),(R+0),4);
}
B64f0f8:{NFSU2_TR(0x64f0f8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f0fa:{NFSU2_TR(0x64f0fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f100:L64f100:{c.instructions+=7;NFSU2_TR(0x64f100);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x338ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f106:{NFSU2_TR(0x64f106);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f107:{NFSU2_TR(0x64f107);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f108:{NFSU2_TR(0x64f108);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f10b:{NFSU2_TR(0x64f10b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64f10d:{NFSU2_TR(0x64f10d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f113:{NFSU2_TR(0x64f113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f118ull));
TAIL_STATIC(0x6479dbu,647);
}
B64f118:L64f118:{c.instructions+=3;NFSU2_TR(0x64f118);
__builtin_memmove((R+12),(R+0),4);
}
B64f11a:{NFSU2_TR(0x64f11a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f11c:{NFSU2_TR(0x64f11c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f122:L64f122:{c.instructions+=5;NFSU2_TR(0x64f122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f125:{NFSU2_TR(0x64f125);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f12b:{NFSU2_TR(0x64f12b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f12c:{NFSU2_TR(0x64f12c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f12d:{NFSU2_TR(0x64f12d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f132ull));
TAIL_STATIC(0x6479dbu,647);
}
B64f132:L64f132:{c.instructions+=3;NFSU2_TR(0x64f132);
__builtin_memmove((R+12),(R+0),4);
}
B64f134:{NFSU2_TR(0x64f134);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f136:{NFSU2_TR(0x64f136);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f13c:L64f13c:{c.instructions+=2;NFSU2_TR(0x64f13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f142:{NFSU2_TR(0x64f142);
{goto L64f183;}
}
B64f144:L64f144:{c.instructions+=11;NFSU2_TR(0x64f144);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f147:{NFSU2_TR(0x64f147);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f14a:{NFSU2_TR(0x64f14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f14d:{NFSU2_TR(0x64f14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f150:{NFSU2_TR(0x64f150);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f153:{NFSU2_TR(0x64f153);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f156:{NFSU2_TR(0x64f156);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f159:{NFSU2_TR(0x64f159);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f15c:{NFSU2_TR(0x64f15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f15f:{NFSU2_TR(0x64f15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f162:{NFSU2_TR(0x64f162);
{goto L64f17c;}
}
B64f164:L64f164:{c.instructions+=8;NFSU2_TR(0x64f164);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f167:{NFSU2_TR(0x64f167);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f16a:{NFSU2_TR(0x64f16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f16d:{NFSU2_TR(0x64f16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f170:{NFSU2_TR(0x64f170);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f173:{NFSU2_TR(0x64f173);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f176:{NFSU2_TR(0x64f176);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f179:{NFSU2_TR(0x64f179);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f17c:L64f17c:{c.instructions+=2;NFSU2_TR(0x64f17c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f17e:{NFSU2_TR(0x64f17e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f164u);}goto L64f164;}}
}
B64f180:L64f180:{c.instructions+=1;NFSU2_TR(0x64f180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f183:L64f183:{c.instructions+=2;NFSU2_TR(0x64f183);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f185:{NFSU2_TR(0x64f185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f144u);}goto L64f144;}}
}
B64f187:L64f187:{c.instructions+=2;NFSU2_TR(0x64f187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f18d:{NFSU2_TR(0x64f18d);
{goto L64f1e0;}
}
B64f18f:L64f18f:{c.instructions+=2;NFSU2_TR(0x64f18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f192:{NFSU2_TR(0x64f192);
{goto L64f1ac;}
}
B64f194:L64f194:{c.instructions+=8;NFSU2_TR(0x64f194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f197:{NFSU2_TR(0x64f197);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f19a:{NFSU2_TR(0x64f19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f19d:{NFSU2_TR(0x64f19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f1a0:{NFSU2_TR(0x64f1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f1a3:{NFSU2_TR(0x64f1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f1a6:{NFSU2_TR(0x64f1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f1a9:{NFSU2_TR(0x64f1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f1ac:L64f1ac:{c.instructions+=2;NFSU2_TR(0x64f1ac);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f1ae:{NFSU2_TR(0x64f1ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f194u);}goto L64f194;}}
}
B64f1b0:L64f1b0:{c.instructions+=2;NFSU2_TR(0x64f1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f1b3:{NFSU2_TR(0x64f1b3);
{goto L64f1d9;}
}
B64f1b5:L64f1b5:{c.instructions+=2;NFSU2_TR(0x64f1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f1b8:{NFSU2_TR(0x64f1b8);
{goto L64f1d2;}
}
B64f1ba:L64f1ba:{c.instructions+=8;NFSU2_TR(0x64f1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64f1bd:{NFSU2_TR(0x64f1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64f1c0:{NFSU2_TR(0x64f1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f1c3:{NFSU2_TR(0x64f1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64f1c6:{NFSU2_TR(0x64f1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64f1c9:{NFSU2_TR(0x64f1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f1cc:{NFSU2_TR(0x64f1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f1cf:{NFSU2_TR(0x64f1cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f1d2:L64f1d2:{c.instructions+=2;NFSU2_TR(0x64f1d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f1d4:{NFSU2_TR(0x64f1d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f1bau);}goto L64f1ba;}}
}
B64f1d6:L64f1d6:{c.instructions+=1;NFSU2_TR(0x64f1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f1d9:L64f1d9:{c.instructions+=2;NFSU2_TR(0x64f1d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f1db:{NFSU2_TR(0x64f1db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f1b5u);}goto L64f1b5;}}
}
B64f1dd:L64f1dd:{c.instructions+=1;NFSU2_TR(0x64f1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f1e0:L64f1e0:{c.instructions+=2;NFSU2_TR(0x64f1e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f1e2:{NFSU2_TR(0x64f1e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f18fu);}goto L64f18f;}}
}
B64f1e4:L64f1e4:{c.instructions+=2;NFSU2_TR(0x64f1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f1ea:{NFSU2_TR(0x64f1ea);
{goto L64f201;}
}
B64f1ec:L64f1ec:{c.instructions+=7;NFSU2_TR(0x64f1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f1ef:{NFSU2_TR(0x64f1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f1f2:{NFSU2_TR(0x64f1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f1f5:{NFSU2_TR(0x64f1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f1f8:{NFSU2_TR(0x64f1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f1fb:{NFSU2_TR(0x64f1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f1fe:{NFSU2_TR(0x64f1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f201:L64f201:{c.instructions+=2;NFSU2_TR(0x64f201);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f203:{NFSU2_TR(0x64f203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f1ecu);}goto L64f1ec;}}
}
B64f205:L64f205:{c.instructions+=2;NFSU2_TR(0x64f205);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x338ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f20b:{NFSU2_TR(0x64f20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f210ull));
TAIL_STATIC(0x575620u,575);
}
B64f210:L64f210:{c.instructions+=4;NFSU2_TR(0x64f210);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f212:{NFSU2_TR(0x64f212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64f213:{NFSU2_TR(0x64f213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f219:{NFSU2_TR(0x64f219);
if(r1(R+518)){{goto L64f37e;}}
}
B64f21f:L64f21f:{c.instructions+=2;NFSU2_TR(0x64f21f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f225:{NFSU2_TR(0x64f225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f22aull));
TAIL_STATIC(0x575620u,575);
}
B64f22a:L64f22a:{c.instructions+=4;NFSU2_TR(0x64f22a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f22c:{NFSU2_TR(0x64f22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64f22d:{NFSU2_TR(0x64f22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f233:{NFSU2_TR(0x64f233);
if(r1(R+518)){{goto L64f37e;}}
}
B64f239:L64f239:{c.instructions+=4;NFSU2_TR(0x64f239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f23c:{NFSU2_TR(0x64f23c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f23d:{NFSU2_TR(0x64f23d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f243:{NFSU2_TR(0x64f243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f248ull));
TAIL_STATIC(0x6479dbu,647);
}
B64f248:L64f248:{c.instructions+=3;NFSU2_TR(0x64f248);
__builtin_memmove((R+12),(R+0),4);
}
B64f24a:{NFSU2_TR(0x64f24a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f24c:{NFSU2_TR(0x64f24c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f252:L64f252:{c.instructions+=4;NFSU2_TR(0x64f252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f255:{NFSU2_TR(0x64f255);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f256:{NFSU2_TR(0x64f256);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f25c:{NFSU2_TR(0x64f25c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f261ull));
TAIL_STATIC(0x6479dbu,647);
}
B64f261:L64f261:{c.instructions+=3;NFSU2_TR(0x64f261);
__builtin_memmove((R+12),(R+0),4);
}
B64f263:{NFSU2_TR(0x64f263);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f265:{NFSU2_TR(0x64f265);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f38e;}}
}
B64f26b:L64f26b:{c.instructions+=2;NFSU2_TR(0x64f26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f271:{NFSU2_TR(0x64f271);
{goto L64f2b6;}
}
B64f273:L64f273:{c.instructions+=3;NFSU2_TR(0x64f273);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f276:{NFSU2_TR(0x64f276);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f27c:{NFSU2_TR(0x64f27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f281ull));
TAIL_STATIC(0x64b8bcu,64b);
}
B64f281:L64f281:{c.instructions+=3;NFSU2_TR(0x64f281);
__builtin_memmove((R+12),(R+0),4);
}
B64f283:{NFSU2_TR(0x64f283);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f285:{NFSU2_TR(0x64f285);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f2c8;}}
}
B64f287:L64f287:{c.instructions+=3;NFSU2_TR(0x64f287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f28a:{NFSU2_TR(0x64f28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f28d:{NFSU2_TR(0x64f28d);
{goto L64f2a9;}
}
B64f28f:L64f28f:{c.instructions+=3;NFSU2_TR(0x64f28f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f292:{NFSU2_TR(0x64f292);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f298:{NFSU2_TR(0x64f298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f29dull));
TAIL_STATIC(0x64b8bcu,64b);
}
B64f29d:L64f29d:{c.instructions+=3;NFSU2_TR(0x64f29d);
__builtin_memmove((R+12),(R+0),4);
}
B64f29f:{NFSU2_TR(0x64f29f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f2a1:{NFSU2_TR(0x64f2a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f2e0;}}
}
B64f2a3:L64f2a3:{c.instructions+=2;NFSU2_TR(0x64f2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f2a6:{NFSU2_TR(0x64f2a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f2a9:L64f2a9:{c.instructions+=3;NFSU2_TR(0x64f2a9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f2ab:{NFSU2_TR(0x64f2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f2ae:{NFSU2_TR(0x64f2ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f28fu);}goto L64f28f;}}
}
B64f2b0:L64f2b0:{c.instructions+=2;NFSU2_TR(0x64f2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f2b3:{NFSU2_TR(0x64f2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f2b6:L64f2b6:{c.instructions+=3;NFSU2_TR(0x64f2b6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f2b8:{NFSU2_TR(0x64f2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f2bb:{NFSU2_TR(0x64f2bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f273u);}goto L64f273;}}
}
B64f2bd:L64f2bd:{c.instructions+=2;NFSU2_TR(0x64f2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f2c3:{NFSU2_TR(0x64f2c3);
{goto L64f358;}
}
B64f2c8:L64f2c8:{c.instructions+=1;NFSU2_TR(0x64f2c8);
u8 U[4];
w4(U+0,u32(0x7afbc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f2cd:L64f2cd:{c.instructions+=5;NFSU2_TR(0x64f2cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f2ce:{NFSU2_TR(0x64f2ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f2d1:{NFSU2_TR(0x64f2d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f2d2:{NFSU2_TR(0x64f2d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f2d3:{NFSU2_TR(0x64f2d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f2d8ull));
TAIL_STATIC(0x64307cu,643);
}
B64f2d8:L64f2d8:{c.instructions+=2;NFSU2_TR(0x64f2d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64f2db:{NFSU2_TR(0x64f2db);
{goto L64f38a;}
}
B64f2e0:L64f2e0:{c.instructions+=2;NFSU2_TR(0x64f2e0);
u8 U[4];
w4(U+0,u32(0x7afb68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f2e5:{NFSU2_TR(0x64f2e5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f2cdu);}goto L64f2cd;}
}
B64f2e7:L64f2e7:{c.instructions+=4;NFSU2_TR(0x64f2e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f2ea:{NFSU2_TR(0x64f2ea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f2ec:{NFSU2_TR(0x64f2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f2ef:{NFSU2_TR(0x64f2ef);
if(r1(R+518)){{goto L64f315;}}
}
B64f2f1:L64f2f1:{c.instructions+=3;NFSU2_TR(0x64f2f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f2f4:{NFSU2_TR(0x64f2f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f2fa:{NFSU2_TR(0x64f2fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f2ffull));
TAIL_STATIC(0x64b8bcu,64b);
}
B64f2ff:L64f2ff:{c.instructions+=3;NFSU2_TR(0x64f2ff);
__builtin_memmove((R+12),(R+0),4);
}
B64f301:{NFSU2_TR(0x64f301);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f303:{NFSU2_TR(0x64f303);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f36a;}}
}
B64f305:L64f305:{c.instructions+=5;NFSU2_TR(0x64f305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f308:{NFSU2_TR(0x64f308);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f30b:{NFSU2_TR(0x64f30b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f30d:{NFSU2_TR(0x64f30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f310:{NFSU2_TR(0x64f310);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f2f1u);}goto L64f2f1;}}
}
B64f312:L64f312:{c.instructions+=1;NFSU2_TR(0x64f312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f315:L64f315:{c.instructions+=2;NFSU2_TR(0x64f315);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f318:{NFSU2_TR(0x64f318);
{goto L64f34e;}
}
B64f31a:L64f31a:{c.instructions+=4;NFSU2_TR(0x64f31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f31d:{NFSU2_TR(0x64f31d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f31f:{NFSU2_TR(0x64f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f322:{NFSU2_TR(0x64f322);
if(r1(R+518)){{goto L64f34b;}}
}
B64f324:L64f324:{c.instructions+=3;NFSU2_TR(0x64f324);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f327:{NFSU2_TR(0x64f327);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f32d:{NFSU2_TR(0x64f32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f332ull));
TAIL_STATIC(0x64b8bcu,64b);
}
B64f332:L64f332:{c.instructions+=3;NFSU2_TR(0x64f332);
__builtin_memmove((R+12),(R+0),4);
}
B64f334:{NFSU2_TR(0x64f334);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f336:{NFSU2_TR(0x64f336);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64f374;}}
}
B64f338:L64f338:{c.instructions+=5;NFSU2_TR(0x64f338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f33b:{NFSU2_TR(0x64f33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f33e:{NFSU2_TR(0x64f33e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f340:{NFSU2_TR(0x64f340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f343:{NFSU2_TR(0x64f343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f324u);}goto L64f324;}}
}
B64f345:L64f345:{c.instructions+=2;NFSU2_TR(0x64f345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f348:{NFSU2_TR(0x64f348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f34b:L64f34b:{c.instructions+=1;NFSU2_TR(0x64f34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f34e:L64f34e:{c.instructions+=3;NFSU2_TR(0x64f34e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f350:{NFSU2_TR(0x64f350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f353:{NFSU2_TR(0x64f353);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f31au);}goto L64f31a;}}
}
B64f355:L64f355:{c.instructions+=1;NFSU2_TR(0x64f355);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f358:L64f358:{c.instructions+=3;NFSU2_TR(0x64f358);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f35a:{NFSU2_TR(0x64f35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f35d:{NFSU2_TR(0x64f35d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f2e7u);}goto L64f2e7;}}
}
B64f35f:L64f35f:{c.instructions+=3;NFSU2_TR(0x64f35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f362:{NFSU2_TR(0x64f362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x320ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f368:{NFSU2_TR(0x64f368);
{goto L64f38a;}
}
B64f36a:L64f36a:{c.instructions+=2;NFSU2_TR(0x64f36a);
u8 U[4];
w4(U+0,u32(0x7afb10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f36f:{NFSU2_TR(0x64f36f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f2cdu);}goto L64f2cd;}
}
B64f374:L64f374:{c.instructions+=2;NFSU2_TR(0x64f374);
u8 U[4];
w4(U+0,u32(0x7afac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f379:{NFSU2_TR(0x64f379);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f2cdu);}goto L64f2cd;}
}
B64f37e:L64f37e:{c.instructions+=2;NFSU2_TR(0x64f37e);
w4(R+12,u32(0x8007000eull));
}
B64f383:{NFSU2_TR(0x64f383);
{goto L64f38e;}
}
B64f385:L64f385:{c.instructions+=1;NFSU2_TR(0x64f385);
w4(R+12,u32(0x8007000eull));
}
B64f38a:L64f38a:{c.instructions+=2;NFSU2_TR(0x64f38a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f38c:{NFSU2_TR(0x64f38c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64f3a1;}}
}
B64f38e:L64f38e:{c.instructions+=6;NFSU2_TR(0x64f38e);
u8 U[4];
w4(U+0,u32(0x7afa78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f393:{NFSU2_TR(0x64f393);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f394:{NFSU2_TR(0x64f394);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f395:{NFSU2_TR(0x64f395);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B64f398:{NFSU2_TR(0x64f398);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f399:{NFSU2_TR(0x64f399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f39eull));
TAIL_STATIC(0x64307cu,643);
}
B64f39e:L64f39e:{c.instructions+=1;NFSU2_TR(0x64f39e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64f3a1:L64f3a1:{c.instructions+=2;NFSU2_TR(0x64f3a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f3a4:{NFSU2_TR(0x64f3a4);
if(r1(R+518)){{goto L64f3b0;}}
}
B64f3a6:L64f3a6:{c.instructions+=3;NFSU2_TR(0x64f3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f3a9:{NFSU2_TR(0x64f3a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f3ab:{NFSU2_TR(0x64f3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f3b0ull));
TAIL_STATIC(0x647806u,647);
}
B64f3b0:L64f3b0:{c.instructions+=2;NFSU2_TR(0x64f3b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f3b3:{NFSU2_TR(0x64f3b3);
if(r1(R+518)){{goto L64f3bf;}}
}
B64f3b5:L64f3b5:{c.instructions+=3;NFSU2_TR(0x64f3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f3b8:{NFSU2_TR(0x64f3b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f3ba:{NFSU2_TR(0x64f3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f3bfull));
TAIL_STATIC(0x647806u,647);
}
B64f3bf:L64f3bf:{c.instructions+=2;NFSU2_TR(0x64f3bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f3c2:{NFSU2_TR(0x64f3c2);
if(r1(R+518)){{goto L64f3ce;}}
}
B64f3c4:L64f3c4:{c.instructions+=3;NFSU2_TR(0x64f3c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f3c7:{NFSU2_TR(0x64f3c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f3c9:{NFSU2_TR(0x64f3c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f3ceull));
TAIL_STATIC(0x647806u,647);
}
B64f3ce:L64f3ce:{c.instructions+=2;NFSU2_TR(0x64f3ce);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64f3d1:{NFSU2_TR(0x64f3d1);
if(r1(R+518)){{goto L64f3dd;}}
}
B64f3d3:L64f3d3:{c.instructions+=3;NFSU2_TR(0x64f3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f3d6:{NFSU2_TR(0x64f3d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f3d8:{NFSU2_TR(0x64f3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f3ddull));
TAIL_STATIC(0x647806u,647);
}
B64f3dd:L64f3dd:{c.instructions+=6;NFSU2_TR(0x64f3dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64f3de:{NFSU2_TR(0x64f3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f3df:{NFSU2_TR(0x64f3df);
__builtin_memmove((R+0),(R+12),4);
}
B64f3e1:{NFSU2_TR(0x64f3e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64f3e2:{NFSU2_TR(0x64f3e2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64f3e3:{NFSU2_TR(0x64f3e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f3e6:L64f3e6:{c.instructions+=8;NFSU2_TR(0x64f3e6);
__builtin_memmove((R+0),(R+4),4);
}
B64f3e8:{NFSU2_TR(0x64f3e8);
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
B64f3ea:{NFSU2_TR(0x64f3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f3ed:{NFSU2_TR(0x64f3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f3f0:{NFSU2_TR(0x64f3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f3f3:{NFSU2_TR(0x64f3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f3f6:{NFSU2_TR(0x64f3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f3f9:{NFSU2_TR(0x64f3f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f3fa:L64f3fa:{c.instructions+=11;NFSU2_TR(0x64f3fa);
__builtin_memmove((R+28),(R+28),4);
}
B64f3fc:{NFSU2_TR(0x64f3fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f3fd:{NFSU2_TR(0x64f3fd);
__builtin_memmove((R+20),(R+16),4);
}
B64f3ff:{NFSU2_TR(0x64f3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B64f405:{NFSU2_TR(0x64f405);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f406:{NFSU2_TR(0x64f406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f409:{NFSU2_TR(0x64f409);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f40a:{NFSU2_TR(0x64f40a);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f40c:{NFSU2_TR(0x64f40c);
w4(R+28,u32(0x7ab74cull));
}
B64f411:{NFSU2_TR(0x64f411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64f412:{NFSU2_TR(0x64f412);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f414:L64f414:{c.instructions+=1;NFSU2_TR(0x64f414);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64f416;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f414u);}goto L64f414;}}
}
B64f416:L64f416:{c.instructions+=1;NFSU2_TR(0x64f416);
if(r1(R+518)){{goto L64f45d;}}
}
B64f418:L64f418:{c.instructions+=7;NFSU2_TR(0x64f418);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f41b:{NFSU2_TR(0x64f41b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f41c:{NFSU2_TR(0x64f41c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f41f:{NFSU2_TR(0x64f41f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f425:{NFSU2_TR(0x64f425);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f42a:{NFSU2_TR(0x64f42a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f42b:{NFSU2_TR(0x64f42b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f430ull));
TAIL_STATIC(0x75e02bu,75e);
}
B64f430:L64f430:{c.instructions+=12;NFSU2_TR(0x64f430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f433:{NFSU2_TR(0x64f433);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f439:{NFSU2_TR(0x64f439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f43a:{NFSU2_TR(0x64f43a);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f43f:{NFSU2_TR(0x64f43f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f441:{NFSU2_TR(0x64f441);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f444:{NFSU2_TR(0x64f444);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f445:{NFSU2_TR(0x64f445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f448:{NFSU2_TR(0x64f448);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B64f44b:{NFSU2_TR(0x64f44b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f44c:{NFSU2_TR(0x64f44c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64f450:{NFSU2_TR(0x64f450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f455ull));
TAIL_STATIC(0x64307cu,643);
}
B64f455:L64f455:{c.instructions+=2;NFSU2_TR(0x64f455);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64f458:{NFSU2_TR(0x64f458);
{goto L64f51f;}
}
B64f45d:L64f45d:{c.instructions+=3;NFSU2_TR(0x64f45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f460:{NFSU2_TR(0x64f460);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64f464:{NFSU2_TR(0x64f464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f51f;}}
}
B64f46a:L64f46a:{c.instructions+=4;NFSU2_TR(0x64f46a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64f46d:{NFSU2_TR(0x64f46d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64f46f:{NFSU2_TR(0x64f46f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f472:{NFSU2_TR(0x64f472);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64f4c4;}}
}
B64f474:L64f474:{c.instructions+=1;NFSU2_TR(0x64f474);
if(r1(R+518)){{goto L64f4a6;}}
}
B64f476:L64f476:{c.instructions+=2;NFSU2_TR(0x64f476);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f478:{NFSU2_TR(0x64f478);
if(r1(R+518)){{goto L64f49f;}}
}
B64f47a:L64f47a:{c.instructions+=2;NFSU2_TR(0x64f47a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f47d:{NFSU2_TR(0x64f47d);
if(r1(R+518)){{goto L64f499;}}
}
B64f47f:L64f47f:{c.instructions+=1;NFSU2_TR(0x64f47f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64f4d0;}}
}
B64f481:L64f481:{c.instructions+=2;NFSU2_TR(0x64f481);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f484:{NFSU2_TR(0x64f484);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64f492;}}
}
B64f486:L64f486:{c.instructions+=2;NFSU2_TR(0x64f486);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f489:{NFSU2_TR(0x64f489);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64f4d0;}}
}
B64f48b:L64f48b:{c.instructions+=2;NFSU2_TR(0x64f48b);
u8 U[4];
w4(U+0,u32(0x7b3c80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f490:{NFSU2_TR(0x64f490);
{goto L64f4ea;}
}
B64f492:L64f492:{c.instructions+=2;NFSU2_TR(0x64f492);
u8 U[4];
w4(U+0,u32(0x7b3c6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f497:{NFSU2_TR(0x64f497);
{goto L64f4ea;}
}
B64f499:L64f499:{c.instructions+=3;NFSU2_TR(0x64f499);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f49c:{NFSU2_TR(0x64f49c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f49d:{NFSU2_TR(0x64f49d);
{goto L64f4a9;}
}
B64f49f:L64f49f:{c.instructions+=2;NFSU2_TR(0x64f49f);
u8 U[4];
w4(U+0,u32(0x7ab5e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4a4:{NFSU2_TR(0x64f4a4);
{goto L64f4ea;}
}
B64f4a6:L64f4a6:{c.instructions+=1;NFSU2_TR(0x64f4a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f4a9:L64f4a9:{c.instructions+=5;NFSU2_TR(0x64f4a9);
u8 U[4];
w4(U+0,u32(0x7ab574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4ae:{NFSU2_TR(0x64f4ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f4b4:{NFSU2_TR(0x64f4b4);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4b9:{NFSU2_TR(0x64f4b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4ba:{NFSU2_TR(0x64f4ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f4bfull));
TAIL_STATIC(0x75e081u,75e);
}
B64f4bf:L64f4bf:{c.instructions+=2;NFSU2_TR(0x64f4bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64f4c2:{NFSU2_TR(0x64f4c2);
{goto L64f4fe;}
}
B64f4c4:L64f4c4:{c.instructions+=2;NFSU2_TR(0x64f4c4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f4c7:{NFSU2_TR(0x64f4c7);
if(r1(R+518)){{goto L64f4e5;}}
}
B64f4c9:L64f4c9:{c.instructions+=3;NFSU2_TR(0x64f4c9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64f4ca:{NFSU2_TR(0x64f4ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f4cb:{NFSU2_TR(0x64f4cb);
if(r1(R+518)){{goto L64f4de;}}
}
B64f4cd:L64f4cd:{c.instructions+=2;NFSU2_TR(0x64f4cd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f4ce:{NFSU2_TR(0x64f4ce);
if(r1(R+518)){{goto L64f4d7;}}
}
B64f4d0:L64f4d0:{c.instructions+=2;NFSU2_TR(0x64f4d0);
u8 U[4];
w4(U+0,u32(0x7ab544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4d5:{NFSU2_TR(0x64f4d5);
{goto L64f4ea;}
}
B64f4d7:L64f4d7:{c.instructions+=2;NFSU2_TR(0x64f4d7);
u8 U[4];
w4(U+0,u32(0x7ab54cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4dc:{NFSU2_TR(0x64f4dc);
{goto L64f4ea;}
}
B64f4de:L64f4de:{c.instructions+=2;NFSU2_TR(0x64f4de);
u8 U[4];
w4(U+0,u32(0x7ab558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4e3:{NFSU2_TR(0x64f4e3);
{goto L64f4ea;}
}
B64f4e5:L64f4e5:{c.instructions+=1;NFSU2_TR(0x64f4e5);
u8 U[4];
w4(U+0,u32(0x7ab564ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4ea:L64f4ea:{c.instructions+=4;NFSU2_TR(0x64f4ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f4f0:{NFSU2_TR(0x64f4f0);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4f5:{NFSU2_TR(0x64f4f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f4f6:{NFSU2_TR(0x64f4f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f4fbull));
TAIL_STATIC(0x75e081u,75e);
}
B64f4fb:L64f4fb:{c.instructions+=1;NFSU2_TR(0x64f4fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B64f4fe:L64f4fe:{c.instructions+=9;NFSU2_TR(0x64f4fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f504:{NFSU2_TR(0x64f504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f505:{NFSU2_TR(0x64f505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f508:{NFSU2_TR(0x64f508);
u8 U[4];
w4(U+0,u32(0x7b3c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f50d:{NFSU2_TR(0x64f50d);
u8 U[4];
w4(U+0,u32(0xbb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f512:{NFSU2_TR(0x64f512);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B64f515:{NFSU2_TR(0x64f515);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f516:{NFSU2_TR(0x64f516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f517:{NFSU2_TR(0x64f517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f51cull));
TAIL_STATIC(0x64307cu,643);
}
B64f51c:L64f51c:{c.instructions+=1;NFSU2_TR(0x64f51c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64f51f:L64f51f:{c.instructions+=5;NFSU2_TR(0x64f51f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64f520:{NFSU2_TR(0x64f520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64f527:{NFSU2_TR(0x64f527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f528:{NFSU2_TR(0x64f528);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64f529:{NFSU2_TR(0x64f529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f52a:L64f52a:{c.instructions+=12;NFSU2_TR(0x64f52a);
__builtin_memmove((R+28),(R+28),4);
}
B64f52c:{NFSU2_TR(0x64f52c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f52d:{NFSU2_TR(0x64f52d);
__builtin_memmove((R+20),(R+16),4);
}
B64f52f:{NFSU2_TR(0x64f52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B64f535:{NFSU2_TR(0x64f535);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f536:{NFSU2_TR(0x64f536);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f539:{NFSU2_TR(0x64f539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f53a:{NFSU2_TR(0x64f53a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f53d:{NFSU2_TR(0x64f53d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f543:{NFSU2_TR(0x64f543);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f548:{NFSU2_TR(0x64f548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f549:{NFSU2_TR(0x64f549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f54eull));
TAIL_STATIC(0x75e02bu,75e);
}
B64f54e:L64f54e:{c.instructions+=11;NFSU2_TR(0x64f54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f551:{NFSU2_TR(0x64f551);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f557:{NFSU2_TR(0x64f557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f558:{NFSU2_TR(0x64f558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f55b:{NFSU2_TR(0x64f55b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f560:{NFSU2_TR(0x64f560);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f563:{NFSU2_TR(0x64f563);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B64f566:{NFSU2_TR(0x64f566);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f569:{NFSU2_TR(0x64f569);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64f56d:{NFSU2_TR(0x64f56d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f56e:{NFSU2_TR(0x64f56e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f573ull));
TAIL_STATIC(0x64307cu,643);
}
B64f573:L64f573:{c.instructions+=5;NFSU2_TR(0x64f573);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64f576:{NFSU2_TR(0x64f576);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64f57d:{NFSU2_TR(0x64f57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f57e:{NFSU2_TR(0x64f57e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64f57f:{NFSU2_TR(0x64f57f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f580:L64f580:{c.instructions+=11;NFSU2_TR(0x64f580);
__builtin_memmove((R+28),(R+28),4);
}
B64f582:{NFSU2_TR(0x64f582);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f583:{NFSU2_TR(0x64f583);
__builtin_memmove((R+20),(R+16),4);
}
B64f585:{NFSU2_TR(0x64f585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B64f58b:{NFSU2_TR(0x64f58b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f58e:{NFSU2_TR(0x64f58e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f58f:{NFSU2_TR(0x64f58f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f592:{NFSU2_TR(0x64f592);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f598:{NFSU2_TR(0x64f598);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f59d:{NFSU2_TR(0x64f59d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f59e:{NFSU2_TR(0x64f59e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f5a3ull));
TAIL_STATIC(0x75e02bu,75e);
}
B64f5a3:L64f5a3:{c.instructions+=11;NFSU2_TR(0x64f5a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f5a9:{NFSU2_TR(0x64f5a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5aa:{NFSU2_TR(0x64f5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f5ad:{NFSU2_TR(0x64f5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f5b0:{NFSU2_TR(0x64f5b0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5b5:{NFSU2_TR(0x64f5b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f5b8:{NFSU2_TR(0x64f5b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B64f5bb:{NFSU2_TR(0x64f5bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f5be:{NFSU2_TR(0x64f5be);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64f5c2:{NFSU2_TR(0x64f5c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5c3:{NFSU2_TR(0x64f5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f5c8ull));
TAIL_STATIC(0x643143u,643);
}
B64f5c8:L64f5c8:{c.instructions+=3;NFSU2_TR(0x64f5c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64f5cb:{NFSU2_TR(0x64f5cb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64f5cc:{NFSU2_TR(0x64f5cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f5cd:L64f5cd:{c.instructions+=12;NFSU2_TR(0x64f5cd);
__builtin_memmove((R+28),(R+28),4);
}
B64f5cf:{NFSU2_TR(0x64f5cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5d0:{NFSU2_TR(0x64f5d0);
__builtin_memmove((R+20),(R+16),4);
}
B64f5d2:{NFSU2_TR(0x64f5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B64f5d8:{NFSU2_TR(0x64f5d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5d9:{NFSU2_TR(0x64f5d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f5dc:{NFSU2_TR(0x64f5dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5dd:{NFSU2_TR(0x64f5dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f5e0:{NFSU2_TR(0x64f5e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f5e6:{NFSU2_TR(0x64f5e6);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5eb:{NFSU2_TR(0x64f5eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5ec:{NFSU2_TR(0x64f5ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f5f1ull));
TAIL_STATIC(0x75e02bu,75e);
}
B64f5f1:L64f5f1:{c.instructions+=11;NFSU2_TR(0x64f5f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f5f4:{NFSU2_TR(0x64f5f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f5fa:{NFSU2_TR(0x64f5fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f5fb:{NFSU2_TR(0x64f5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f5fe:{NFSU2_TR(0x64f5fe);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f603:{NFSU2_TR(0x64f603);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f606:{NFSU2_TR(0x64f606);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B64f609:{NFSU2_TR(0x64f609);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f60c:{NFSU2_TR(0x64f60c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64f610:{NFSU2_TR(0x64f610);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f611:{NFSU2_TR(0x64f611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f616ull));
TAIL_STATIC(0x64307cu,643);
}
B64f616:L64f616:{c.instructions+=8;NFSU2_TR(0x64f616);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B64f619:{NFSU2_TR(0x64f619);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f61b:{NFSU2_TR(0x64f61b);
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
B64f61c:{NFSU2_TR(0x64f61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f61f:{NFSU2_TR(0x64f61f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f622:{NFSU2_TR(0x64f622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f623:{NFSU2_TR(0x64f623);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64f624:{NFSU2_TR(0x64f624);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f625:L64f625:{c.instructions+=8;NFSU2_TR(0x64f625);
__builtin_memmove((R+28),(R+28),4);
}
B64f627:{NFSU2_TR(0x64f627);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f628:{NFSU2_TR(0x64f628);
__builtin_memmove((R+20),(R+16),4);
}
B64f62a:{NFSU2_TR(0x64f62a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f62c:{NFSU2_TR(0x64f62c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64f62f:{NFSU2_TR(0x64f62f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f630:{NFSU2_TR(0x64f630);
__builtin_memmove((R+24),(R+4),4);
}
B64f632:{NFSU2_TR(0x64f632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f652;}}
}
B64f634:L64f634:{c.instructions+=2;NFSU2_TR(0x64f634);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f637:{NFSU2_TR(0x64f637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f649;}}
}
B64f639:L64f639:{c.instructions+=5;NFSU2_TR(0x64f639);
u8 U[4];
w4(U+0,u32(0x7b3c90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f63e:{NFSU2_TR(0x64f63e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f63f:{NFSU2_TR(0x64f63f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f640:{NFSU2_TR(0x64f640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f641:{NFSU2_TR(0x64f641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f646ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f5cdu);}goto L64f5cd;}
}
B64f646:L64f646:{c.instructions+=1;NFSU2_TR(0x64f646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64f649:L64f649:{c.instructions+=4;NFSU2_TR(0x64f649);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f64b:{NFSU2_TR(0x64f64b);
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
B64f64c:{NFSU2_TR(0x64f64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f64f:{NFSU2_TR(0x64f64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f652:L64f652:{c.instructions+=4;NFSU2_TR(0x64f652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f655:{NFSU2_TR(0x64f655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f656:{NFSU2_TR(0x64f656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64f657:{NFSU2_TR(0x64f657);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f65a:L64f65a:{c.instructions+=10;NFSU2_TR(0x64f65a);
__builtin_memmove((R+28),(R+28),4);
}
B64f65c:{NFSU2_TR(0x64f65c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f65d:{NFSU2_TR(0x64f65d);
__builtin_memmove((R+20),(R+16),4);
}
B64f65f:{NFSU2_TR(0x64f65f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f660:{NFSU2_TR(0x64f660);
__builtin_memmove((R+24),(R+4),4);
}
B64f662:{NFSU2_TR(0x64f662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f665:{NFSU2_TR(0x64f665);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f666:{NFSU2_TR(0x64f666);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64f668:{NFSU2_TR(0x64f668);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f66a:{NFSU2_TR(0x64f66a);
if(r1(R+518)){{goto L64f677;}}
}
B64f66c:L64f66c:{c.instructions+=2;NFSU2_TR(0x64f66c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f66f:{NFSU2_TR(0x64f66f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f677;}}
}
B64f671:L64f671:{c.instructions+=2;NFSU2_TR(0x64f671);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f674:{NFSU2_TR(0x64f674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f677:L64f677:{c.instructions+=2;NFSU2_TR(0x64f677);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f679:{NFSU2_TR(0x64f679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f67eull));
TAIL_STATIC(0x645362u,645);
}
B64f67e:L64f67e:{c.instructions+=2;NFSU2_TR(0x64f67e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f680:{NFSU2_TR(0x64f680);
if(r1(R+518)){{goto L64f696;}}
}
B64f682:L64f682:{c.instructions+=7;NFSU2_TR(0x64f682);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f685:{NFSU2_TR(0x64f685);
__builtin_memmove((R+4),(R+0),4);
}
B64f687:{NFSU2_TR(0x64f687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f688:{NFSU2_TR(0x64f688);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f689:{NFSU2_TR(0x64f689);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f68c:{NFSU2_TR(0x64f68c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f68f:{NFSU2_TR(0x64f68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f694ull));
TAIL_STATIC(0x6727a7u,672);
}
B64f694:L64f694:{c.instructions+=1;NFSU2_TR(0x64f694);
{goto L64f698;}
}
B64f696:L64f696:{c.instructions+=1;NFSU2_TR(0x64f696);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f698:L64f698:{c.instructions+=2;NFSU2_TR(0x64f698);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f69a:{NFSU2_TR(0x64f69a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f6b3;}}
}
B64f69c:L64f69c:{c.instructions+=5;NFSU2_TR(0x64f69c);
u8 U[4];
w4(U+0,u32(0x7aba8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6a1:{NFSU2_TR(0x64f6a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6a2:{NFSU2_TR(0x64f6a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6a3:{NFSU2_TR(0x64f6a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6a4:{NFSU2_TR(0x64f6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f6a9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f5cdu);}goto L64f5cd;}
}
B64f6a9:L64f6a9:{c.instructions+=3;NFSU2_TR(0x64f6a9);
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
B64f6ac:{NFSU2_TR(0x64f6ac);
w4(R+0,u32(0x8007000eull));
}
B64f6b1:{NFSU2_TR(0x64f6b1);
{goto L64f6b8;}
}
B64f6b3:L64f6b3:{c.instructions+=2;NFSU2_TR(0x64f6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f6b6:{NFSU2_TR(0x64f6b6);
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
B64f6b8:L64f6b8:{c.instructions+=4;NFSU2_TR(0x64f6b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64f6b9:{NFSU2_TR(0x64f6b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f6ba:{NFSU2_TR(0x64f6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64f6bb:{NFSU2_TR(0x64f6bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f6be:L64f6be:{c.instructions+=13;NFSU2_TR(0x64f6be);
__builtin_memmove((R+28),(R+28),4);
}
B64f6c0:{NFSU2_TR(0x64f6c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6c1:{NFSU2_TR(0x64f6c1);
__builtin_memmove((R+20),(R+16),4);
}
B64f6c3:{NFSU2_TR(0x64f6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f6c6:{NFSU2_TR(0x64f6c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6c7:{NFSU2_TR(0x64f6c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6c8:{NFSU2_TR(0x64f6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f6cb:{NFSU2_TR(0x64f6cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f6cc:{NFSU2_TR(0x64f6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64f6cf:{NFSU2_TR(0x64f6cf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B64f6d2:{NFSU2_TR(0x64f6d2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B64f6d5:{NFSU2_TR(0x64f6d5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64f6d8:{NFSU2_TR(0x64f6d8);
if(r1(R+518)){{goto L64f72a;}}
}
B64f6da:L64f6da:{c.instructions+=4;NFSU2_TR(0x64f6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64f6dc:{NFSU2_TR(0x64f6dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f6df:{NFSU2_TR(0x64f6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f6e2:{NFSU2_TR(0x64f6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f6e5:L64f6e5:{c.instructions+=4;NFSU2_TR(0x64f6e5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B64f6e7:{NFSU2_TR(0x64f6e7);
__builtin_memmove((R+8),(R+12),1);
}
B64f6e9:{NFSU2_TR(0x64f6e9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64f6eb:{NFSU2_TR(0x64f6eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f707;}}
}
B64f6ed:L64f6ed:{c.instructions+=2;NFSU2_TR(0x64f6ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64f6ef:{NFSU2_TR(0x64f6ef);
if(r1(R+518)){{goto L64f703;}}
}
B64f6f1:L64f6f1:{c.instructions+=4;NFSU2_TR(0x64f6f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B64f6f4:{NFSU2_TR(0x64f6f4);
__builtin_memmove((R+8),(R+12),1);
}
B64f6f6:{NFSU2_TR(0x64f6f6);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B64f6f9:{NFSU2_TR(0x64f6f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f707;}}
}
B64f6fb:L64f6fb:{c.instructions+=6;NFSU2_TR(0x64f6fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64f6fc:{NFSU2_TR(0x64f6fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64f6fd:{NFSU2_TR(0x64f6fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64f6fe:{NFSU2_TR(0x64f6fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64f6ff:{NFSU2_TR(0x64f6ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64f701:{NFSU2_TR(0x64f701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f6e5u);}goto L64f6e5;}}
}
B64f703:L64f703:{c.instructions+=2;NFSU2_TR(0x64f703);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f705:{NFSU2_TR(0x64f705);
{goto L64f70c;}
}
B64f707:L64f707:{c.instructions+=2;NFSU2_TR(0x64f707);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64f709:{NFSU2_TR(0x64f709);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64f70c:L64f70c:{c.instructions+=2;NFSU2_TR(0x64f70c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f70e:{NFSU2_TR(0x64f70e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64f718;}}
}
B64f710:L64f710:{c.instructions+=3;NFSU2_TR(0x64f710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f713:{NFSU2_TR(0x64f713);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B64f716:{NFSU2_TR(0x64f716);
{goto L64f720;}
}
B64f718:L64f718:{c.instructions+=1;NFSU2_TR(0x64f718);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64f725;}}
}
B64f71a:L64f71a:{c.instructions+=2;NFSU2_TR(0x64f71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f71d:{NFSU2_TR(0x64f71d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B64f720:L64f720:{c.instructions+=2;NFSU2_TR(0x64f720);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64f723:{NFSU2_TR(0x64f723);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f6dau);}goto L64f6da;}}
}
B64f725:L64f725:{c.instructions+=2;NFSU2_TR(0x64f725);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64f728:{NFSU2_TR(0x64f728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f74e;}}
}
B64f72a:L64f72a:{c.instructions+=2;NFSU2_TR(0x64f72a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f72c:{NFSU2_TR(0x64f72c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f731ull));
TAIL_STATIC(0x645362u,645);
}
B64f731:L64f731:{c.instructions+=3;NFSU2_TR(0x64f731);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64f733:{NFSU2_TR(0x64f733);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f735:{NFSU2_TR(0x64f735);
if(r1(R+518)){{goto L64f746;}}
}
B64f737:L64f737:{c.instructions+=6;NFSU2_TR(0x64f737);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f738:{NFSU2_TR(0x64f738);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f739:{NFSU2_TR(0x64f739);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f73a:{NFSU2_TR(0x64f73a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f73d:{NFSU2_TR(0x64f73d);
__builtin_memmove((R+4),(R+0),4);
}
B64f73f:{NFSU2_TR(0x64f73f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f744ull));
TAIL_STATIC(0x67253bu,672);
}
B64f744:L64f744:{c.instructions+=1;NFSU2_TR(0x64f744);
{goto L64f748;}
}
B64f746:L64f746:{c.instructions+=1;NFSU2_TR(0x64f746);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f748:L64f748:{c.instructions+=3;NFSU2_TR(0x64f748);
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
B64f74a:{NFSU2_TR(0x64f74a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64f74c:{NFSU2_TR(0x64f74c);
if(r1(R+518)){{goto L64f77c;}}
}
B64f74e:L64f74e:{c.instructions+=2;NFSU2_TR(0x64f74e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f750:{NFSU2_TR(0x64f750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f755ull));
TAIL_STATIC(0x645362u,645);
}
B64f755:L64f755:{c.instructions+=3;NFSU2_TR(0x64f755);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64f757:{NFSU2_TR(0x64f757);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f759:{NFSU2_TR(0x64f759);
if(r1(R+518)){{goto L64f771;}}
}
B64f75b:L64f75b:{c.instructions+=6;NFSU2_TR(0x64f75b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64f75d:{NFSU2_TR(0x64f75d);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f762:{NFSU2_TR(0x64f762);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f765:{NFSU2_TR(0x64f765);
__builtin_memmove((R+4),(R+0),4);
}
B64f767:{NFSU2_TR(0x64f767);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f76a:{NFSU2_TR(0x64f76a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f76full));
TAIL_STATIC(0x672498u,672);
}
B64f76f:L64f76f:{c.instructions+=1;NFSU2_TR(0x64f76f);
{goto L64f773;}
}
B64f771:L64f771:{c.instructions+=1;NFSU2_TR(0x64f771);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f773:L64f773:{c.instructions+=4;NFSU2_TR(0x64f773);
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
B64f775:{NFSU2_TR(0x64f775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64f777:{NFSU2_TR(0x64f777);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f77a:{NFSU2_TR(0x64f77a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f783;}}
}
B64f77c:L64f77c:{c.instructions+=2;NFSU2_TR(0x64f77c);
w4(R+0,u32(0x8007000eull));
}
B64f781:{NFSU2_TR(0x64f781);
{goto L64f7ea;}
}
B64f783:L64f783:{c.instructions+=4;NFSU2_TR(0x64f783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64f785:{NFSU2_TR(0x64f785);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f788:{NFSU2_TR(0x64f788);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f78b:{NFSU2_TR(0x64f78b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f7e8;}}
}
B64f78d:L64f78d:{c.instructions+=3;NFSU2_TR(0x64f78d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64f790:{NFSU2_TR(0x64f790);
__builtin_memmove((R+8),(R+24),4);
}
B64f792:{NFSU2_TR(0x64f792);
if(r1(R+518)){{goto L64f7e4;}}
}
B64f794:L64f794:{c.instructions+=3;NFSU2_TR(0x64f794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64f796:{NFSU2_TR(0x64f796);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f798:{NFSU2_TR(0x64f798);
if(r1(R+518)){{goto L64f7ae;}}
}
B64f79a:L64f79a:{c.instructions+=3;NFSU2_TR(0x64f79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f79d:{NFSU2_TR(0x64f79d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f79f:{NFSU2_TR(0x64f79f);
if(r1(R+518)){{goto L64f7ae;}}
}
B64f7a1:L64f7a1:{c.instructions+=5;NFSU2_TR(0x64f7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64f7a4:{NFSU2_TR(0x64f7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f7a7:{NFSU2_TR(0x64f7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f7aa:{NFSU2_TR(0x64f7aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64f7ac:{NFSU2_TR(0x64f7ac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f794u);}goto L64f794;}
}
B64f7ae:L64f7ae:{c.instructions+=4;NFSU2_TR(0x64f7ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B64f7b1:{NFSU2_TR(0x64f7b1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64f7b2:{NFSU2_TR(0x64f7b2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64f7b5:{NFSU2_TR(0x64f7b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f794u);}goto L64f794;}}
}
B64f7b7:L64f7b7:{c.instructions+=1;NFSU2_TR(0x64f7b7);
{goto L64f7e4;}
}
B64f7b9:L64f7b9:{c.instructions+=3;NFSU2_TR(0x64f7b9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f7bb:{NFSU2_TR(0x64f7bb);
__builtin_memmove((R+8),(R+24),4);
}
B64f7bd:{NFSU2_TR(0x64f7bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64f7e4;}}
}
B64f7bf:L64f7bf:{c.instructions+=1;NFSU2_TR(0x64f7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f7c2:L64f7c2:{c.instructions+=3;NFSU2_TR(0x64f7c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64f7c4:{NFSU2_TR(0x64f7c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f7c6:{NFSU2_TR(0x64f7c6);
if(r1(R+518)){{goto L64f7da;}}
}
B64f7c8:L64f7c8:{c.instructions+=3;NFSU2_TR(0x64f7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f7cb:{NFSU2_TR(0x64f7cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f7cd:{NFSU2_TR(0x64f7cd);
if(r1(R+518)){{goto L64f7da;}}
}
B64f7cf:L64f7cf:{c.instructions+=4;NFSU2_TR(0x64f7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64f7d2:{NFSU2_TR(0x64f7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f7d5:{NFSU2_TR(0x64f7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f7d8:{NFSU2_TR(0x64f7d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64f7da:L64f7da:{c.instructions+=4;NFSU2_TR(0x64f7da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64f7dc:{NFSU2_TR(0x64f7dc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B64f7df:{NFSU2_TR(0x64f7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f7e2:{NFSU2_TR(0x64f7e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f7c2u);}goto L64f7c2;}}
}
B64f7e4:L64f7e4:{c.instructions+=2;NFSU2_TR(0x64f7e4);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B64f7e6:{NFSU2_TR(0x64f7e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f7b9u);}goto L64f7b9;}}
}
B64f7e8:L64f7e8:{c.instructions+=1;NFSU2_TR(0x64f7e8);
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
B64f7ea:L64f7ea:{c.instructions+=5;NFSU2_TR(0x64f7ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64f7eb:{NFSU2_TR(0x64f7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f7ec:{NFSU2_TR(0x64f7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64f7ed:{NFSU2_TR(0x64f7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64f7ee:{NFSU2_TR(0x64f7ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f7f1:L64f7f1:{c.instructions+=10;NFSU2_TR(0x64f7f1);
__builtin_memmove((R+28),(R+28),4);
}
B64f7f3:{NFSU2_TR(0x64f7f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f7f4:{NFSU2_TR(0x64f7f4);
__builtin_memmove((R+20),(R+16),4);
}
B64f7f6:{NFSU2_TR(0x64f7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f7f9:{NFSU2_TR(0x64f7f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f7fa:{NFSU2_TR(0x64f7fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f7fb:{NFSU2_TR(0x64f7fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f7fc:{NFSU2_TR(0x64f7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64f7ff:{NFSU2_TR(0x64f7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f801:{NFSU2_TR(0x64f801);
if(r1(R+518)){{goto L64f847;}}
}
B64f803:L64f803:{c.instructions+=2;NFSU2_TR(0x64f803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f806:{NFSU2_TR(0x64f806);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f809:L64f809:{c.instructions+=2;NFSU2_TR(0x64f809);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f80c:{NFSU2_TR(0x64f80c);
__builtin_memmove((R+24),(R+8),4);
}
B64f80e:L64f80e:{c.instructions+=4;NFSU2_TR(0x64f80e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B64f810:{NFSU2_TR(0x64f810);
__builtin_memmove((R+4),(R+12),1);
}
B64f812:{NFSU2_TR(0x64f812);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64f814:{NFSU2_TR(0x64f814);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f830;}}
}
B64f816:L64f816:{c.instructions+=2;NFSU2_TR(0x64f816);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64f818:{NFSU2_TR(0x64f818);
if(r1(R+518)){{goto L64f82c;}}
}
B64f81a:L64f81a:{c.instructions+=4;NFSU2_TR(0x64f81a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B64f81d:{NFSU2_TR(0x64f81d);
__builtin_memmove((R+4),(R+12),1);
}
B64f81f:{NFSU2_TR(0x64f81f);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B64f822:{NFSU2_TR(0x64f822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f830;}}
}
B64f824:L64f824:{c.instructions+=6;NFSU2_TR(0x64f824);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64f825:{NFSU2_TR(0x64f825);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64f826:{NFSU2_TR(0x64f826);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64f827:{NFSU2_TR(0x64f827);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64f828:{NFSU2_TR(0x64f828);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64f82a:{NFSU2_TR(0x64f82a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f80eu);}goto L64f80e;}}
}
B64f82c:L64f82c:{c.instructions+=2;NFSU2_TR(0x64f82c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f82e:{NFSU2_TR(0x64f82e);
{goto L64f835;}
}
B64f830:L64f830:{c.instructions+=2;NFSU2_TR(0x64f830);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64f832:{NFSU2_TR(0x64f832);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64f835:L64f835:{c.instructions+=2;NFSU2_TR(0x64f835);
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
B64f837:{NFSU2_TR(0x64f837);
if(r1(R+518)){{goto L64f850;}}
}
B64f839:L64f839:{c.instructions+=1;NFSU2_TR(0x64f839);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64f840;}}
}
B64f83b:L64f83b:{c.instructions+=2;NFSU2_TR(0x64f83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64f83e:{NFSU2_TR(0x64f83e);
{goto L64f843;}
}
B64f840:L64f840:{c.instructions+=1;NFSU2_TR(0x64f840);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64f843:L64f843:{c.instructions+=2;NFSU2_TR(0x64f843);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f845:{NFSU2_TR(0x64f845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f809u);}goto L64f809;}}
}
B64f847:L64f847:{c.instructions+=1;NFSU2_TR(0x64f847);
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
B64f849:L64f849:{c.instructions+=5;NFSU2_TR(0x64f849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64f84a:{NFSU2_TR(0x64f84a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f84b:{NFSU2_TR(0x64f84b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64f84c:{NFSU2_TR(0x64f84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64f84d:{NFSU2_TR(0x64f84d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f850:L64f850:{c.instructions+=2;NFSU2_TR(0x64f850);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f853:{NFSU2_TR(0x64f853);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f849u);}goto L64f849;}
}
B64f855:L64f855:{c.instructions+=7;NFSU2_TR(0x64f855);
__builtin_memmove((R+28),(R+28),4);
}
B64f857:{NFSU2_TR(0x64f857);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f858:{NFSU2_TR(0x64f858);
__builtin_memmove((R+20),(R+16),4);
}
B64f85a:{NFSU2_TR(0x64f85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64f85d:{NFSU2_TR(0x64f85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f860:{NFSU2_TR(0x64f860);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f862:{NFSU2_TR(0x64f862);
if(r1(R+518)){{goto L64f8da;}}
}
B64f864:L64f864:{c.instructions+=3;NFSU2_TR(0x64f864);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B64f865:{NFSU2_TR(0x64f865);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64f868:{NFSU2_TR(0x64f868);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64f87a;}}
}
B64f86a:L64f86a:{c.instructions+=1;NFSU2_TR(0x64f86a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x64f8deull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64f871:L64f871:{c.instructions+=2;NFSU2_TR(0x64f871);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f873:{NFSU2_TR(0x64f873);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64f87a;}}
}
B64f875:L64f875:{c.instructions+=1;NFSU2_TR(0x64f875);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f878:L64f878:{c.instructions+=1;NFSU2_TR(0x64f878);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64f8da;}}
}
B64f87a:L64f87a:{c.instructions+=2;NFSU2_TR(0x64f87a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64f87c:{NFSU2_TR(0x64f87c);
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
B64f87d:L64f87d:{c.instructions+=2;NFSU2_TR(0x64f87d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64f87e:{NFSU2_TR(0x64f87e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f881:L64f881:{c.instructions+=2;NFSU2_TR(0x64f881);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f883:{NFSU2_TR(0x64f883);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f87au);}goto L64f87a;}}
}
B64f885:L64f885:{c.instructions+=2;NFSU2_TR(0x64f885);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f888:{NFSU2_TR(0x64f888);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64f8da;}}
}
B64f88a:L64f88a:{c.instructions+=2;NFSU2_TR(0x64f88a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f88d:{NFSU2_TR(0x64f88d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f87au);}goto L64f87a;}}
}
B64f88f:L64f88f:{c.instructions+=2;NFSU2_TR(0x64f88f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f892:{NFSU2_TR(0x64f892);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f878u);}goto L64f878;}
}
B64f894:L64f894:{c.instructions+=2;NFSU2_TR(0x64f894);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f895:{NFSU2_TR(0x64f895);
if(r1(R+518)){{goto L64f8da;}}
}
B64f897:L64f897:{c.instructions+=3;NFSU2_TR(0x64f897);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64f898:{NFSU2_TR(0x64f898);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f899:{NFSU2_TR(0x64f899);
if(r1(R+518)){{goto L64f8da;}}
}
B64f89b:L64f89b:{c.instructions+=2;NFSU2_TR(0x64f89b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64f89c:{NFSU2_TR(0x64f89c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f89d:L64f89d:{c.instructions+=1;NFSU2_TR(0x64f89d);
if(r1(R+518)){{goto L64f8da;}}
}
B64f89f:L64f89f:{c.instructions+=3;NFSU2_TR(0x64f89f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64f8a0:{NFSU2_TR(0x64f8a0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f8a1:{NFSU2_TR(0x64f8a1);
{goto L64f8d8;}
}
B64f8a3:L64f8a3:{c.instructions+=2;NFSU2_TR(0x64f8a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8a6:{NFSU2_TR(0x64f8a6);
if(r1(R+518)){{goto L64f8da;}}
}
B64f8a8:L64f8a8:{c.instructions+=2;NFSU2_TR(0x64f8a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8ab:{NFSU2_TR(0x64f8ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f87au);}goto L64f87a;}}
}
B64f8ad:L64f8ad:{c.instructions+=2;NFSU2_TR(0x64f8ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8b0:{NFSU2_TR(0x64f8b0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64f8da;}}
}
B64f8b2:L64f8b2:{c.instructions+=2;NFSU2_TR(0x64f8b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8b5:{NFSU2_TR(0x64f8b5);
{goto L64f8d8;}
}
B64f8b7:L64f8b7:{c.instructions+=2;NFSU2_TR(0x64f8b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f8ba:{NFSU2_TR(0x64f8ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f87au);}goto L64f87a;}}
}
B64f8bc:L64f8bc:{c.instructions+=2;NFSU2_TR(0x64f8bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8bf:{NFSU2_TR(0x64f8bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f878u);}goto L64f878;}
}
B64f8c1:L64f8c1:{c.instructions+=2;NFSU2_TR(0x64f8c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64f8c4:{NFSU2_TR(0x64f8c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f87au);}goto L64f87a;}}
}
B64f8c6:L64f8c6:{c.instructions+=2;NFSU2_TR(0x64f8c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8c9:{NFSU2_TR(0x64f8c9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f878u);}goto L64f878;}
}
B64f8cb:L64f8cb:{c.instructions+=2;NFSU2_TR(0x64f8cb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f8ce:{NFSU2_TR(0x64f8ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f89du);}goto L64f89d;}
}
B64f8d0:L64f8d0:{c.instructions+=2;NFSU2_TR(0x64f8d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8d3:{NFSU2_TR(0x64f8d3);
if(r1(R+518)){{goto L64f8da;}}
}
B64f8d5:L64f8d5:{c.instructions+=1;NFSU2_TR(0x64f8d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64f8d8:L64f8d8:{c.instructions+=1;NFSU2_TR(0x64f8d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f87au);}goto L64f87a;}}
}
B64f8da:L64f8da:{c.instructions+=2;NFSU2_TR(0x64f8da);
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
B64f8dc:{NFSU2_TR(0x64f8dc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f87du);}goto L64f87d;}
}
B64f90e:L64f90e:{c.instructions+=3;NFSU2_TR(0x64f90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f911:{NFSU2_TR(0x64f911);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f913:{NFSU2_TR(0x64f913);
if(r1(R+518)){{goto L64f91f;}}
}
B64f915:L64f915:{c.instructions+=3;NFSU2_TR(0x64f915);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64f918:{NFSU2_TR(0x64f918);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f91b:{NFSU2_TR(0x64f91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64f91f:L64f91f:{c.instructions+=2;NFSU2_TR(0x64f91f);
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
B64f921:{NFSU2_TR(0x64f921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f922:L64f922:{c.instructions+=3;NFSU2_TR(0x64f922);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f925:{NFSU2_TR(0x64f925);
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
B64f927:{NFSU2_TR(0x64f927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f92a;}}
}
B64f929:L64f929:{c.instructions+=1;NFSU2_TR(0x64f929);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f92a:L64f92a:{c.instructions+=2;NFSU2_TR(0x64f92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f92d:{NFSU2_TR(0x64f92d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f92e:L64f92e:{c.instructions+=9;NFSU2_TR(0x64f92e);
__builtin_memmove((R+28),(R+28),4);
}
B64f930:{NFSU2_TR(0x64f930);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f931:{NFSU2_TR(0x64f931);
__builtin_memmove((R+20),(R+16),4);
}
B64f933:{NFSU2_TR(0x64f933);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f934:{NFSU2_TR(0x64f934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f937:{NFSU2_TR(0x64f937);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f939:{NFSU2_TR(0x64f939);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f93a:{NFSU2_TR(0x64f93a);
__builtin_memmove((R+28),(R+4),4);
}
B64f93c:{NFSU2_TR(0x64f93c);
if(r1(R+518)){{goto L64f9bb;}}
}
B64f93e:L64f93e:{c.instructions+=3;NFSU2_TR(0x64f93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f941:{NFSU2_TR(0x64f941);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f942:{NFSU2_TR(0x64f942);
if(r1(R+518)){{goto L64f992;}}
}
B64f944:L64f944:{c.instructions+=2;NFSU2_TR(0x64f944);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f947:{NFSU2_TR(0x64f947);
if(r1(R+518)){{goto L64f98a;}}
}
B64f949:L64f949:{c.instructions+=3;NFSU2_TR(0x64f949);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64f94a:{NFSU2_TR(0x64f94a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f94b:{NFSU2_TR(0x64f94b);
if(r1(R+518)){{goto L64f982;}}
}
B64f94d:L64f94d:{c.instructions+=2;NFSU2_TR(0x64f94d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f94e:{NFSU2_TR(0x64f94e);
if(r1(R+518)){{goto L64f970;}}
}
B64f950:L64f950:{c.instructions+=3;NFSU2_TR(0x64f950);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64f951:{NFSU2_TR(0x64f951);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64f952:{NFSU2_TR(0x64f952);
if(r1(R+518)){{goto L64f968;}}
}
B64f954:L64f954:{c.instructions+=5;NFSU2_TR(0x64f954);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f959:{NFSU2_TR(0x64f959);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f95b:{NFSU2_TR(0x64f95b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f95d:{NFSU2_TR(0x64f95d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f95e:{NFSU2_TR(0x64f95e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f963ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f5cdu);}goto L64f5cd;}
}
B64f963:L64f963:{c.instructions+=2;NFSU2_TR(0x64f963);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64f966:{NFSU2_TR(0x64f966);
{goto L64f9bb;}
}
B64f968:L64f968:{c.instructions+=3;NFSU2_TR(0x64f968);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f96b:{NFSU2_TR(0x64f96b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f96e:{NFSU2_TR(0x64f96e);
{goto L64f9b4;}
}
B64f970:L64f970:{c.instructions+=2;NFSU2_TR(0x64f970);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f974:{NFSU2_TR(0x64f974);
if(r1(R+518)){{goto L64f97c;}}
}
B64f976:L64f976:{c.instructions+=2;NFSU2_TR(0x64f976);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B64f97a:{NFSU2_TR(0x64f97a);
{goto L64f9bb;}
}
B64f97c:L64f97c:{c.instructions+=2;NFSU2_TR(0x64f97c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xfdull))));
s1(u32(r4(U+0)),r1(U+4));
}
B64f980:{NFSU2_TR(0x64f980);
{goto L64f9bb;}
}
B64f982:L64f982:{c.instructions+=3;NFSU2_TR(0x64f982);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f985:{NFSU2_TR(0x64f985);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f988:{NFSU2_TR(0x64f988);
{goto L64f9b4;}
}
B64f98a:L64f98a:{c.instructions+=3;NFSU2_TR(0x64f98a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f98d:{NFSU2_TR(0x64f98d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f990:{NFSU2_TR(0x64f990);
{goto L64f9b4;}
}
B64f992:L64f992:{c.instructions+=2;NFSU2_TR(0x64f992);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f996:{NFSU2_TR(0x64f996);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64f9ac;}}
}
B64f998:L64f998:{c.instructions+=4;NFSU2_TR(0x64f998);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f99b:{NFSU2_TR(0x64f99b);
__builtin_memmove((R+4),(R+28),4);
}
B64f99d:{NFSU2_TR(0x64f99d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f9a0:{NFSU2_TR(0x64f9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f9a5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f92eu);}goto L64f92e;}
}
B64f9a5:L64f9a5:{c.instructions+=3;NFSU2_TR(0x64f9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f9a8:{NFSU2_TR(0x64f9a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f9aa:{NFSU2_TR(0x64f9aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f992u);}goto L64f992;}}
}
B64f9ac:L64f9ac:{c.instructions+=2;NFSU2_TR(0x64f9ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64f9ae:{NFSU2_TR(0x64f9ae);
if(r1(R+518)){{goto L64f9bb;}}
}
B64f9b0:L64f9b0:{c.instructions+=2;NFSU2_TR(0x64f9b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64f9b3:{NFSU2_TR(0x64f9b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9b4:L64f9b4:{c.instructions+=2;NFSU2_TR(0x64f9b4);
__builtin_memmove((R+4),(R+28),4);
}
B64f9b6:{NFSU2_TR(0x64f9b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f9bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f92eu);}goto L64f92e;}
}
B64f9bb:L64f9bb:{c.instructions+=5;NFSU2_TR(0x64f9bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64f9bc:{NFSU2_TR(0x64f9bc);
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
B64f9be:{NFSU2_TR(0x64f9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64f9bf:{NFSU2_TR(0x64f9bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64f9c0:{NFSU2_TR(0x64f9c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64f9c3:L64f9c3:{c.instructions+=14;NFSU2_TR(0x64f9c3);
__builtin_memmove((R+28),(R+28),4);
}
B64f9c5:{NFSU2_TR(0x64f9c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9c6:{NFSU2_TR(0x64f9c6);
__builtin_memmove((R+20),(R+16),4);
}
B64f9c8:{NFSU2_TR(0x64f9c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9c9:{NFSU2_TR(0x64f9c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9ca:{NFSU2_TR(0x64f9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64f9cd:{NFSU2_TR(0x64f9cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9ce:{NFSU2_TR(0x64f9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64f9d1:{NFSU2_TR(0x64f9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f9d4:{NFSU2_TR(0x64f9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64f9d7:{NFSU2_TR(0x64f9d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9d8:{NFSU2_TR(0x64f9d8);
__builtin_memmove((R+28),(R+4),4);
}
B64f9da:{NFSU2_TR(0x64f9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64f9dd:{NFSU2_TR(0x64f9dd);
if(r1(R+518)){{goto L64f9f6;}}
}
B64f9df:L64f9df:{c.instructions+=6;NFSU2_TR(0x64f9df);
u8 U[4];
w4(U+0,u32(0x7b3cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9e4:{NFSU2_TR(0x64f9e4);
u8 U[4];
w4(U+0,u32(0xbe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9e9:{NFSU2_TR(0x64f9e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64f9ec:{NFSU2_TR(0x64f9ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9ed:{NFSU2_TR(0x64f9ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64f9ee:{NFSU2_TR(0x64f9ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f9f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f52au);}goto L64f52a;}
}
B64f9f3:L64f9f3:{c.instructions+=1;NFSU2_TR(0x64f9f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64f9f6:L64f9f6:{c.instructions+=2;NFSU2_TR(0x64f9f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64f9fa:{NFSU2_TR(0x64f9fa);
if(r1(R+518)){{goto L64fa20;}}
}
B64f9fc:L64f9fc:{c.instructions+=3;NFSU2_TR(0x64f9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64f9ff:{NFSU2_TR(0x64f9ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fa01:{NFSU2_TR(0x64fa01);
if(r1(R+518)){{goto L64fa20;}}
}
B64fa03:L64fa03:{c.instructions+=6;NFSU2_TR(0x64fa03);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fa05:{NFSU2_TR(0x64fa05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64fa06:{NFSU2_TR(0x64fa06);
u8 U[4];
w4(U+0,u32(0x7ab74cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fa0b:{NFSU2_TR(0x64fa0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fa0e:{NFSU2_TR(0x64fa0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64fa11:{NFSU2_TR(0x64fa11);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B64fa14:L64fa14:{c.instructions+=1;NFSU2_TR(0x64fa14);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64fa16;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fa14u);}goto L64fa14;}
}
B64fa16:L64fa16:{c.instructions+=1;NFSU2_TR(0x64fa16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fa1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f3fau);}goto L64f3fa;}
}
B64fa1b:L64fa1b:{c.instructions+=3;NFSU2_TR(0x64fa1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fa1e:{NFSU2_TR(0x64fa1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64fa1f:{NFSU2_TR(0x64fa1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64fa20:L64fa20:{c.instructions+=4;NFSU2_TR(0x64fa20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fa23:{NFSU2_TR(0x64fa23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B64fa26:{NFSU2_TR(0x64fa26);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fa2a:{NFSU2_TR(0x64fa2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fa47;}}
}
B64fa2c:L64fa2c:{c.instructions+=3;NFSU2_TR(0x64fa2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fa2f:{NFSU2_TR(0x64fa2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fa31:{NFSU2_TR(0x64fa31);
if(r1(R+518)){{goto L64fa47;}}
}
B64fa33:L64fa33:{c.instructions+=2;NFSU2_TR(0x64fa33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fa34:{NFSU2_TR(0x64fa34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fa39ull));
TAIL_STATIC(0x672440u,672);
}
B64fa39:L64fa39:{c.instructions+=3;NFSU2_TR(0x64fa39);
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
B64fa3b:{NFSU2_TR(0x64fa3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64fa3e:{NFSU2_TR(0x64fa3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fa47;}}
}
B64fa40:L64fa40:{c.instructions+=2;NFSU2_TR(0x64fa40);
w4(R+0,u32(0x8007000eull));
}
B64fa45:{NFSU2_TR(0x64fa45);
{goto L64fa49;}
}
B64fa47:L64fa47:{c.instructions+=1;NFSU2_TR(0x64fa47);
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
B64fa49:L64fa49:{c.instructions+=5;NFSU2_TR(0x64fa49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64fa4a:{NFSU2_TR(0x64fa4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64fa4b:{NFSU2_TR(0x64fa4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64fa4c:{NFSU2_TR(0x64fa4c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64fa4d:{NFSU2_TR(0x64fa4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64fa50:L64fa50:{c.instructions+=7;NFSU2_TR(0x64fa50);
__builtin_memmove((R+28),(R+28),4);
}
B64fa52:{NFSU2_TR(0x64fa52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fa53:{NFSU2_TR(0x64fa53);
__builtin_memmove((R+20),(R+16),4);
}
B64fa55:{NFSU2_TR(0x64fa55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fa56:{NFSU2_TR(0x64fa56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fa59:{NFSU2_TR(0x64fa59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fa5a:{NFSU2_TR(0x64fa5a);
__builtin_memmove((R+28),(R+4),4);
}
B64fa5c:L64fa5c:{c.instructions+=2;NFSU2_TR(0x64fa5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fa5e:{NFSU2_TR(0x64fa5e);
if(r1(R+518)){{goto L64fab1;}}
}
B64fa60:L64fa60:{c.instructions+=3;NFSU2_TR(0x64fa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fa63:{NFSU2_TR(0x64fa63);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64fa66:{NFSU2_TR(0x64fa66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fa7b;}}
}
B64fa68:L64fa68:{c.instructions+=3;NFSU2_TR(0x64fa68);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fa6b:{NFSU2_TR(0x64fa6b);
__builtin_memmove((R+4),(R+28),4);
}
B64fa6d:{NFSU2_TR(0x64fa6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fa72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fa50u);}goto L64fa50;}
}
B64fa72:L64fa72:{c.instructions+=2;NFSU2_TR(0x64fa72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fa74:{NFSU2_TR(0x64fa74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fa9a;}}
}
B64fa76:L64fa76:{c.instructions+=2;NFSU2_TR(0x64fa76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fa79:{NFSU2_TR(0x64fa79);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fa5cu);}goto L64fa5c;}
}
B64fa7b:L64fa7b:{c.instructions+=2;NFSU2_TR(0x64fa7b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fa7e:{NFSU2_TR(0x64fa7e);
if(r1(R+518)){{goto L64fa95;}}
}
B64fa80:L64fa80:{c.instructions+=3;NFSU2_TR(0x64fa80);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fa81:{NFSU2_TR(0x64fa81);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fa82:{NFSU2_TR(0x64fa82);
if(r1(R+518)){{goto L64fa90;}}
}
B64fa84:L64fa84:{c.instructions+=2;NFSU2_TR(0x64fa84);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fa85:{NFSU2_TR(0x64fa85);
if(r1(R+518)){{goto L64fab5;}}
}
B64fa87:L64fa87:{c.instructions+=3;NFSU2_TR(0x64fa87);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fa88:{NFSU2_TR(0x64fa88);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fa89:{NFSU2_TR(0x64fa89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fa9f;}}
}
B64fa8b:L64fa8b:{c.instructions+=2;NFSU2_TR(0x64fa8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fa8e:{NFSU2_TR(0x64fa8e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fa5cu);}goto L64fa5c;}
}
B64fa90:L64fa90:{c.instructions+=2;NFSU2_TR(0x64fa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fa93:{NFSU2_TR(0x64fa93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fa5cu);}goto L64fa5c;}
}
B64fa95:L64fa95:{c.instructions+=2;NFSU2_TR(0x64fa95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fa98:{NFSU2_TR(0x64fa98);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fa5cu);}goto L64fa5c;}
}
B64fa9a:L64fa9a:{c.instructions+=3;NFSU2_TR(0x64fa9a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64fa9c:{NFSU2_TR(0x64fa9c);
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
B64fa9d:{NFSU2_TR(0x64fa9d);
{goto L64fabd;}
}
B64fa9f:L64fa9f:{c.instructions+=5;NFSU2_TR(0x64fa9f);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64faa4:{NFSU2_TR(0x64faa4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64faa6:{NFSU2_TR(0x64faa6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64faa8:{NFSU2_TR(0x64faa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64faa9:{NFSU2_TR(0x64faa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64faaeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f5cdu);}goto L64f5cd;}
}
B64faae:L64faae:{c.instructions+=1;NFSU2_TR(0x64faae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64fab1:L64fab1:{c.instructions+=2;NFSU2_TR(0x64fab1);
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
B64fab3:{NFSU2_TR(0x64fab3);
{goto L64fabd;}
}
B64fab5:L64fab5:{c.instructions+=2;NFSU2_TR(0x64fab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fab8:{NFSU2_TR(0x64fab8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64fabd:L64fabd:{c.instructions+=4;NFSU2_TR(0x64fabd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64fabe:{NFSU2_TR(0x64fabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64fabf:{NFSU2_TR(0x64fabf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64fac0:{NFSU2_TR(0x64fac0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64fac3:L64fac3:{c.instructions+=6;NFSU2_TR(0x64fac3);
__builtin_memmove((R+28),(R+28),4);
}
B64fac5:{NFSU2_TR(0x64fac5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fac6:{NFSU2_TR(0x64fac6);
__builtin_memmove((R+20),(R+16),4);
}
B64fac8:{NFSU2_TR(0x64fac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64facb:{NFSU2_TR(0x64facb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64facd:{NFSU2_TR(0x64facd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fad3;}}
}
B64facf:L64facf:{c.instructions+=2;NFSU2_TR(0x64facf);
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
B64fad1:{NFSU2_TR(0x64fad1);
{goto L64fae3;}
}
B64fad3:L64fad3:{c.instructions+=2;NFSU2_TR(0x64fad3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fad7:{NFSU2_TR(0x64fad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64facfu);}goto L64facf;}}
}
B64fad9:L64fad9:{c.instructions+=4;NFSU2_TR(0x64fad9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64fadb:{NFSU2_TR(0x64fadb);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64fade:{NFSU2_TR(0x64fade);
__builtin_memmove((R+4),(R+518),1);
}
B64fae1:{NFSU2_TR(0x64fae1);
__builtin_memmove((R+0),(R+4),4);
}
B64fae3:L64fae3:{c.instructions+=2;NFSU2_TR(0x64fae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64fae4:{NFSU2_TR(0x64fae4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64fae7:L64fae7:{c.instructions+=7;NFSU2_TR(0x64fae7);
__builtin_memmove((R+28),(R+28),4);
}
B64fae9:{NFSU2_TR(0x64fae9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64faea:{NFSU2_TR(0x64faea);
__builtin_memmove((R+20),(R+16),4);
}
B64faec:{NFSU2_TR(0x64faec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64faed:{NFSU2_TR(0x64faed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64faf0:{NFSU2_TR(0x64faf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64faf1:{NFSU2_TR(0x64faf1);
__builtin_memmove((R+28),(R+4),4);
}
B64faf3:L64faf3:{c.instructions+=2;NFSU2_TR(0x64faf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64faf5:{NFSU2_TR(0x64faf5);
if(r1(R+518)){{goto L64fb31;}}
}
B64faf7:L64faf7:{c.instructions+=3;NFSU2_TR(0x64faf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fafa:{NFSU2_TR(0x64fafa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64fafd:{NFSU2_TR(0x64fafd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fb12;}}
}
B64faff:L64faff:{c.instructions+=3;NFSU2_TR(0x64faff);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fb02:{NFSU2_TR(0x64fb02);
__builtin_memmove((R+4),(R+28),4);
}
B64fb04:{NFSU2_TR(0x64fb04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fb09ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fae7u);}goto L64fae7;}
}
B64fb09:L64fb09:{c.instructions+=2;NFSU2_TR(0x64fb09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fb0b:{NFSU2_TR(0x64fb0b);
if(r1(R+518)){{goto L64fb56;}}
}
B64fb0d:L64fb0d:{c.instructions+=2;NFSU2_TR(0x64fb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fb10:{NFSU2_TR(0x64fb10);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64faf3u);}goto L64faf3;}
}
B64fb12:L64fb12:{c.instructions+=2;NFSU2_TR(0x64fb12);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fb15:{NFSU2_TR(0x64fb15);
if(r1(R+518)){{goto L64fb2c;}}
}
B64fb17:L64fb17:{c.instructions+=3;NFSU2_TR(0x64fb17);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fb18:{NFSU2_TR(0x64fb18);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fb19:{NFSU2_TR(0x64fb19);
if(r1(R+518)){{goto L64fb27;}}
}
B64fb1b:L64fb1b:{c.instructions+=2;NFSU2_TR(0x64fb1b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fb1c:{NFSU2_TR(0x64fb1c);
if(r1(R+518)){{goto L64fb4a;}}
}
B64fb1e:L64fb1e:{c.instructions+=3;NFSU2_TR(0x64fb1e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fb1f:{NFSU2_TR(0x64fb1f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fb20:{NFSU2_TR(0x64fb20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fb36;}}
}
B64fb22:L64fb22:{c.instructions+=2;NFSU2_TR(0x64fb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fb25:{NFSU2_TR(0x64fb25);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64faf3u);}goto L64faf3;}
}
B64fb27:L64fb27:{c.instructions+=2;NFSU2_TR(0x64fb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fb2a:{NFSU2_TR(0x64fb2a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64faf3u);}goto L64faf3;}
}
B64fb2c:L64fb2c:{c.instructions+=2;NFSU2_TR(0x64fb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fb2f:{NFSU2_TR(0x64fb2f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64faf3u);}goto L64faf3;}
}
B64fb31:L64fb31:{c.instructions+=3;NFSU2_TR(0x64fb31);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64fb33:{NFSU2_TR(0x64fb33);
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
B64fb34:{NFSU2_TR(0x64fb34);
{goto L64fb58;}
}
B64fb36:L64fb36:{c.instructions+=5;NFSU2_TR(0x64fb36);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb3b:{NFSU2_TR(0x64fb3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb3d:{NFSU2_TR(0x64fb3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb3f:{NFSU2_TR(0x64fb3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb40:{NFSU2_TR(0x64fb40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fb45ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f5cdu);}goto L64f5cd;}
}
B64fb45:L64fb45:{c.instructions+=2;NFSU2_TR(0x64fb45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64fb48:{NFSU2_TR(0x64fb48);
{goto L64fb56;}
}
B64fb4a:L64fb4a:{c.instructions+=3;NFSU2_TR(0x64fb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fb4d:{NFSU2_TR(0x64fb4d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64fb4f:{NFSU2_TR(0x64fb4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64fb56;}}
}
B64fb51:L64fb51:{c.instructions+=2;NFSU2_TR(0x64fb51);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64fb54:{NFSU2_TR(0x64fb54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb31u);}goto L64fb31;}}
}
B64fb56:L64fb56:{c.instructions+=1;NFSU2_TR(0x64fb56);
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
B64fb58:L64fb58:{c.instructions+=4;NFSU2_TR(0x64fb58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64fb59:{NFSU2_TR(0x64fb59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64fb5a:{NFSU2_TR(0x64fb5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64fb5b:{NFSU2_TR(0x64fb5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64fb5e:L64fb5e:{c.instructions+=11;NFSU2_TR(0x64fb5e);
__builtin_memmove((R+28),(R+28),4);
}
B64fb60:{NFSU2_TR(0x64fb60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb61:{NFSU2_TR(0x64fb61);
__builtin_memmove((R+20),(R+16),4);
}
B64fb63:{NFSU2_TR(0x64fb63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb64:{NFSU2_TR(0x64fb64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb65:{NFSU2_TR(0x64fb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fb68:{NFSU2_TR(0x64fb68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fb69:{NFSU2_TR(0x64fb69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64fb6b:{NFSU2_TR(0x64fb6b);
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
B64fb6d:{NFSU2_TR(0x64fb6d);
__builtin_memmove((R+12),(R+4),4);
}
B64fb6f:{NFSU2_TR(0x64fb6f);
if(r1(R+518)){{goto L64fb8e;}}
}
B64fb71:L64fb71:{c.instructions+=2;NFSU2_TR(0x64fb71);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fb75:{NFSU2_TR(0x64fb75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fb8a;}}
}
B64fb77:L64fb77:{c.instructions+=3;NFSU2_TR(0x64fb77);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fb7a:{NFSU2_TR(0x64fb7a);
__builtin_memmove((R+4),(R+12),4);
}
B64fb7c:{NFSU2_TR(0x64fb7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fb81ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb5eu);}goto L64fb5e;}
}
B64fb81:L64fb81:{c.instructions+=4;NFSU2_TR(0x64fb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fb84:{NFSU2_TR(0x64fb84);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B64fb86:{NFSU2_TR(0x64fb86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fb88:{NFSU2_TR(0x64fb88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb71u);}goto L64fb71;}}
}
B64fb8a:L64fb8a:{c.instructions+=2;NFSU2_TR(0x64fb8a);
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
B64fb8c:{NFSU2_TR(0x64fb8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fb92;}}
}
B64fb8e:L64fb8e:{c.instructions+=2;NFSU2_TR(0x64fb8e);
__builtin_memmove((R+0),(R+28),4);
}
B64fb90:{NFSU2_TR(0x64fb90);
{goto L64fbe5;}
}
B64fb92:L64fb92:{c.instructions+=3;NFSU2_TR(0x64fb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fb95:{NFSU2_TR(0x64fb95);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fb98:{NFSU2_TR(0x64fb98);
if(r1(R+518)){{goto L64fbd9;}}
}
B64fb9a:L64fb9a:{c.instructions+=3;NFSU2_TR(0x64fb9a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fb9b:{NFSU2_TR(0x64fb9b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fb9c:{NFSU2_TR(0x64fb9c);
if(r1(R+518)){{goto L64fbc9;}}
}
B64fb9e:L64fb9e:{c.instructions+=2;NFSU2_TR(0x64fb9e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fb9f:{NFSU2_TR(0x64fb9f);
if(r1(R+518)){{goto L64fbc0;}}
}
B64fba1:L64fba1:{c.instructions+=3;NFSU2_TR(0x64fba1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fba2:{NFSU2_TR(0x64fba2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fba3:{NFSU2_TR(0x64fba3);
if(r1(R+518)){{goto L64fbbb;}}
}
B64fba5:L64fba5:{c.instructions+=5;NFSU2_TR(0x64fba5);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbaa:{NFSU2_TR(0x64fbaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbac:{NFSU2_TR(0x64fbac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbae:{NFSU2_TR(0x64fbae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbaf:{NFSU2_TR(0x64fbaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fbb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f5cdu);}goto L64f5cd;}
}
B64fbb4:L64fbb4:{c.instructions+=3;NFSU2_TR(0x64fbb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64fbb7:{NFSU2_TR(0x64fbb7);
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
B64fbb9:{NFSU2_TR(0x64fbb9);
{goto L64fbe5;}
}
B64fbbb:L64fbbb:{c.instructions+=2;NFSU2_TR(0x64fbbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fbbe:{NFSU2_TR(0x64fbbe);
{goto L64fbdc;}
}
B64fbc0:L64fbc0:{c.instructions+=3;NFSU2_TR(0x64fbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fbc3:{NFSU2_TR(0x64fbc3);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B64fbc7:{NFSU2_TR(0x64fbc7);
{goto L64fbe3;}
}
B64fbc9:L64fbc9:{c.instructions+=3;NFSU2_TR(0x64fbc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fbcc:{NFSU2_TR(0x64fbcc);
__builtin_memmove((R+4),(R+12),4);
}
B64fbce:{NFSU2_TR(0x64fbce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fbd3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb5eu);}goto L64fb5e;}
}
B64fbd3:L64fbd3:{c.instructions+=2;NFSU2_TR(0x64fbd3);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B64fbd7:{NFSU2_TR(0x64fbd7);
{goto L64fbe3;}
}
B64fbd9:L64fbd9:{c.instructions+=1;NFSU2_TR(0x64fbd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fbdc:L64fbdc:{c.instructions+=2;NFSU2_TR(0x64fbdc);
__builtin_memmove((R+4),(R+12),4);
}
B64fbde:{NFSU2_TR(0x64fbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fbe3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb5eu);}goto L64fb5e;}
}
B64fbe3:L64fbe3:{c.instructions+=1;NFSU2_TR(0x64fbe3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64fbe5:L64fbe5:{c.instructions+=5;NFSU2_TR(0x64fbe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64fbe6:{NFSU2_TR(0x64fbe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64fbe7:{NFSU2_TR(0x64fbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64fbe8:{NFSU2_TR(0x64fbe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64fbe9:{NFSU2_TR(0x64fbe9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64fbec:L64fbec:{c.instructions+=9;NFSU2_TR(0x64fbec);
__builtin_memmove((R+28),(R+28),4);
}
B64fbee:{NFSU2_TR(0x64fbee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbef:{NFSU2_TR(0x64fbef);
__builtin_memmove((R+20),(R+16),4);
}
B64fbf1:{NFSU2_TR(0x64fbf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbf2:{NFSU2_TR(0x64fbf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbf3:{NFSU2_TR(0x64fbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fbf6:{NFSU2_TR(0x64fbf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fbf7:{NFSU2_TR(0x64fbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64fbfa:{NFSU2_TR(0x64fbfa);
__builtin_memmove((R+12),(R+4),4);
}
B64fbfc:L64fbfc:{c.instructions+=2;NFSU2_TR(0x64fbfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fbfe:{NFSU2_TR(0x64fbfe);
if(r1(R+518)){{goto L64fc67;}}
}
B64fc00:L64fc00:{c.instructions+=3;NFSU2_TR(0x64fc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fc03:{NFSU2_TR(0x64fc03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64fc06:{NFSU2_TR(0x64fc06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc2e;}}
}
B64fc08:L64fc08:{c.instructions+=2;NFSU2_TR(0x64fc08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fc0a:{NFSU2_TR(0x64fc0a);
if(r1(R+518)){{goto L64fc95;}}
}
B64fc10:L64fc10:{c.instructions+=2;NFSU2_TR(0x64fc10);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fc13:{NFSU2_TR(0x64fc13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc2e;}}
}
B64fc15:L64fc15:{c.instructions+=4;NFSU2_TR(0x64fc15);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fc18:{NFSU2_TR(0x64fc18);
__builtin_memmove((R+4),(R+12),4);
}
B64fc1a:{NFSU2_TR(0x64fc1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fc1d:{NFSU2_TR(0x64fc1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fc22ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fbecu);}goto L64fbec;}
}
B64fc22:L64fc22:{c.instructions+=2;NFSU2_TR(0x64fc22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fc24:{NFSU2_TR(0x64fc24);
if(r1(R+518)){{goto L64fc95;}}
}
B64fc26:L64fc26:{c.instructions+=3;NFSU2_TR(0x64fc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64fc29:{NFSU2_TR(0x64fc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fc2c:{NFSU2_TR(0x64fc2c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fbfcu);}goto L64fbfc;}
}
B64fc2e:L64fc2e:{c.instructions+=2;NFSU2_TR(0x64fc2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fc30:{NFSU2_TR(0x64fc30);
if(r1(R+518)){{goto L64fc95;}}
}
B64fc32:L64fc32:{c.instructions+=2;NFSU2_TR(0x64fc32);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fc35:{NFSU2_TR(0x64fc35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc95;}}
}
B64fc37:L64fc37:{c.instructions+=2;NFSU2_TR(0x64fc37);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fc3a:{NFSU2_TR(0x64fc3a);
if(r1(R+518)){{goto L64fc5f;}}
}
B64fc3c:L64fc3c:{c.instructions+=3;NFSU2_TR(0x64fc3c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fc3d:{NFSU2_TR(0x64fc3d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fc3e:{NFSU2_TR(0x64fc3e);
if(r1(R+518)){{goto L64fc4f;}}
}
B64fc40:L64fc40:{c.instructions+=2;NFSU2_TR(0x64fc40);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fc41:{NFSU2_TR(0x64fc41);
if(r1(R+518)){{goto L64fc70;}}
}
B64fc43:L64fc43:{c.instructions+=3;NFSU2_TR(0x64fc43);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64fc44:{NFSU2_TR(0x64fc44);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fc45:{NFSU2_TR(0x64fc45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc95;}}
}
B64fc47:L64fc47:{c.instructions+=3;NFSU2_TR(0x64fc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fc4a:{NFSU2_TR(0x64fc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64fc4d:{NFSU2_TR(0x64fc4d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fbfcu);}goto L64fbfc;}
}
B64fc4f:L64fc4f:{c.instructions+=3;NFSU2_TR(0x64fc4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fc52:{NFSU2_TR(0x64fc52);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fc55:{NFSU2_TR(0x64fc55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc95;}}
}
B64fc57:L64fc57:{c.instructions+=3;NFSU2_TR(0x64fc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fc5a:{NFSU2_TR(0x64fc5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64fc5d:{NFSU2_TR(0x64fc5d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fbfcu);}goto L64fbfc;}
}
B64fc5f:L64fc5f:{c.instructions+=3;NFSU2_TR(0x64fc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fc62:{NFSU2_TR(0x64fc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64fc65:{NFSU2_TR(0x64fc65);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fbfcu);}goto L64fbfc;}
}
B64fc67:L64fc67:{c.instructions+=4;NFSU2_TR(0x64fc67);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64fc69:{NFSU2_TR(0x64fc69);
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
B64fc6b:{NFSU2_TR(0x64fc6b);
__builtin_memmove((R+0),(R+518),1);
}
B64fc6e:{NFSU2_TR(0x64fc6e);
{goto L64fc97;}
}
B64fc70:L64fc70:{c.instructions+=3;NFSU2_TR(0x64fc70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fc73:{NFSU2_TR(0x64fc73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fc76:{NFSU2_TR(0x64fc76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc95;}}
}
B64fc78:L64fc78:{c.instructions+=3;NFSU2_TR(0x64fc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fc7b:{NFSU2_TR(0x64fc7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fc7e:{NFSU2_TR(0x64fc7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc95;}}
}
B64fc80:L64fc80:{c.instructions+=3;NFSU2_TR(0x64fc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fc83:{NFSU2_TR(0x64fc83);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fc86:{NFSU2_TR(0x64fc86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc95;}}
}
B64fc88:L64fc88:{c.instructions+=3;NFSU2_TR(0x64fc88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fc8b:{NFSU2_TR(0x64fc8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fc8e:{NFSU2_TR(0x64fc8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fc95;}}
}
B64fc90:L64fc90:{c.instructions+=3;NFSU2_TR(0x64fc90);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64fc92:{NFSU2_TR(0x64fc92);
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
B64fc93:{NFSU2_TR(0x64fc93);
{goto L64fc97;}
}
B64fc95:L64fc95:{c.instructions+=1;NFSU2_TR(0x64fc95);
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
B64fc97:L64fc97:{c.instructions+=5;NFSU2_TR(0x64fc97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64fc98:{NFSU2_TR(0x64fc98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64fc99:{NFSU2_TR(0x64fc99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64fc9a:{NFSU2_TR(0x64fc9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64fc9b:{NFSU2_TR(0x64fc9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64fc9e:L64fc9e:{c.instructions+=13;NFSU2_TR(0x64fc9e);
__builtin_memmove((R+28),(R+28),4);
}
B64fca0:{NFSU2_TR(0x64fca0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fca1:{NFSU2_TR(0x64fca1);
__builtin_memmove((R+20),(R+16),4);
}
B64fca3:{NFSU2_TR(0x64fca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B64fca9:{NFSU2_TR(0x64fca9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fcaa:{NFSU2_TR(0x64fcaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fcab:{NFSU2_TR(0x64fcab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fcac:{NFSU2_TR(0x64fcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64fcaf:{NFSU2_TR(0x64fcaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fcb1:{NFSU2_TR(0x64fcb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64fcb7:{NFSU2_TR(0x64fcb7);
__builtin_memmove((R+12),(R+4),4);
}
B64fcb9:{NFSU2_TR(0x64fcb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64fcbc:{NFSU2_TR(0x64fcbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fcca;}}
}
B64fcbe:L64fcbe:{c.instructions+=2;NFSU2_TR(0x64fcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x7b3e10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64fcc5:{NFSU2_TR(0x64fcc5);
{goto L64fec0;}
}
B64fcca:L64fcca:{c.instructions+=3;NFSU2_TR(0x64fcca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fccd:{NFSU2_TR(0x64fccd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fcce:{NFSU2_TR(0x64fcce);
if(r1(R+518)){{goto L64fe83;}}
}
B64fcd4:L64fcd4:{c.instructions+=2;NFSU2_TR(0x64fcd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fcd7:{NFSU2_TR(0x64fcd7);
if(r1(R+518)){{goto L64fe18;}}
}
B64fcdd:L64fcdd:{c.instructions+=2;NFSU2_TR(0x64fcdd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64fcde:{NFSU2_TR(0x64fcde);
if(r1(R+518)){{goto L64fcec;}}
}
B64fce0:L64fce0:{c.instructions+=2;NFSU2_TR(0x64fce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x7a15e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64fce7:{NFSU2_TR(0x64fce7);
{goto L64fec0;}
}
B64fcec:L64fcec:{c.instructions+=3;NFSU2_TR(0x64fcec);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B64fcf0:{NFSU2_TR(0x64fcf0);
w4(R+8,u32(0x7b3e08ull));
}
B64fcf5:{NFSU2_TR(0x64fcf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fcfc;}}
}
B64fcf7:L64fcf7:{c.instructions+=1;NFSU2_TR(0x64fcf7);
w4(R+8,u32(0x783fe5ull));
}
B64fcfc:L64fcfc:{c.instructions+=3;NFSU2_TR(0x64fcfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fcff:{NFSU2_TR(0x64fcff);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64fd02:{NFSU2_TR(0x64fd02);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64fdb5;}}
}
B64fd08:L64fd08:{c.instructions+=1;NFSU2_TR(0x64fd08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x64fef9ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64fd0f:L64fd0f:{c.instructions+=2;NFSU2_TR(0x64fd0f);
w4(R+0,u32(0x7b3e00ull));
}
B64fd14:{NFSU2_TR(0x64fd14);
{goto L64fdba;}
}
B64fd19:L64fd19:{c.instructions+=2;NFSU2_TR(0x64fd19);
w4(R+0,u32(0x7b3dfcull));
}
B64fd1e:{NFSU2_TR(0x64fd1e);
{goto L64fdba;}
}
B64fd23:L64fd23:{c.instructions+=2;NFSU2_TR(0x64fd23);
w4(R+0,u32(0x7b3df4ull));
}
B64fd28:{NFSU2_TR(0x64fd28);
{goto L64fdba;}
}
B64fd2d:L64fd2d:{c.instructions+=2;NFSU2_TR(0x64fd2d);
w4(R+0,u32(0x7b3decull));
}
B64fd32:{NFSU2_TR(0x64fd32);
{goto L64fdba;}
}
B64fd37:L64fd37:{c.instructions+=2;NFSU2_TR(0x64fd37);
w4(R+0,u32(0x7b3de4ull));
}
B64fd3c:{NFSU2_TR(0x64fd3c);
{goto L64fdba;}
}
B64fd3e:L64fd3e:{c.instructions+=2;NFSU2_TR(0x64fd3e);
w4(R+0,u32(0x7aec20ull));
}
B64fd43:{NFSU2_TR(0x64fd43);
{goto L64fdba;}
}
B64fd45:L64fd45:{c.instructions+=2;NFSU2_TR(0x64fd45);
w4(R+0,u32(0x7b3ddcull));
}
B64fd4a:{NFSU2_TR(0x64fd4a);
{goto L64fdba;}
}
B64fd4c:L64fd4c:{c.instructions+=2;NFSU2_TR(0x64fd4c);
w4(R+0,u32(0x7b3dd4ull));
}
B64fd51:{NFSU2_TR(0x64fd51);
{goto L64fdba;}
}
B64fd53:L64fd53:{c.instructions+=2;NFSU2_TR(0x64fd53);
w4(R+0,u32(0x7b3dc8ull));
}
B64fd58:{NFSU2_TR(0x64fd58);
{goto L64fdba;}
}
B64fd5a:L64fd5a:{c.instructions+=2;NFSU2_TR(0x64fd5a);
w4(R+0,u32(0x7b3dbcull));
}
B64fd5f:{NFSU2_TR(0x64fd5f);
{goto L64fdba;}
}
B64fd61:L64fd61:{c.instructions+=2;NFSU2_TR(0x64fd61);
w4(R+0,u32(0x7b3db0ull));
}
B64fd66:{NFSU2_TR(0x64fd66);
{goto L64fdba;}
}
B64fd68:L64fd68:{c.instructions+=2;NFSU2_TR(0x64fd68);
w4(R+0,u32(0x7b3da4ull));
}
B64fd6d:{NFSU2_TR(0x64fd6d);
{goto L64fdba;}
}
B64fd6f:L64fd6f:{c.instructions+=2;NFSU2_TR(0x64fd6f);
w4(R+0,u32(0x7b3d9cull));
}
B64fd74:{NFSU2_TR(0x64fd74);
{goto L64fdba;}
}
B64fd76:L64fd76:{c.instructions+=2;NFSU2_TR(0x64fd76);
w4(R+0,u32(0x7b3d90ull));
}
B64fd7b:{NFSU2_TR(0x64fd7b);
{goto L64fdba;}
}
B64fd7d:L64fd7d:{c.instructions+=2;NFSU2_TR(0x64fd7d);
w4(R+0,u32(0x7b3d84ull));
}
B64fd82:{NFSU2_TR(0x64fd82);
{goto L64fdba;}
}
B64fd84:L64fd84:{c.instructions+=2;NFSU2_TR(0x64fd84);
w4(R+0,u32(0x7b3d78ull));
}
B64fd89:{NFSU2_TR(0x64fd89);
{goto L64fdba;}
}
B64fd8b:L64fd8b:{c.instructions+=2;NFSU2_TR(0x64fd8b);
w4(R+0,u32(0x7b3d6cull));
}
B64fd90:{NFSU2_TR(0x64fd90);
{goto L64fdba;}
}
B64fd92:L64fd92:{c.instructions+=2;NFSU2_TR(0x64fd92);
w4(R+0,u32(0x7b3d60ull));
}
B64fd97:{NFSU2_TR(0x64fd97);
{goto L64fdba;}
}
B64fd99:L64fd99:{c.instructions+=2;NFSU2_TR(0x64fd99);
w4(R+0,u32(0x7b3d50ull));
}
B64fd9e:{NFSU2_TR(0x64fd9e);
{goto L64fdba;}
}
B64fda0:L64fda0:{c.instructions+=2;NFSU2_TR(0x64fda0);
w4(R+0,u32(0x7b3d40ull));
}
B64fda5:{NFSU2_TR(0x64fda5);
{goto L64fdba;}
}
B64fda7:L64fda7:{c.instructions+=2;NFSU2_TR(0x64fda7);
w4(R+0,u32(0x7b3d30ull));
}
B64fdac:{NFSU2_TR(0x64fdac);
{goto L64fdba;}
}
B64fdae:L64fdae:{c.instructions+=2;NFSU2_TR(0x64fdae);
w4(R+0,u32(0x7b3d24ull));
}
B64fdb3:{NFSU2_TR(0x64fdb3);
{goto L64fdba;}
}
B64fdb5:L64fdb5:{c.instructions+=1;NFSU2_TR(0x64fdb5);
w4(R+0,u32(0x7a15e8ull));
}
B64fdba:L64fdba:{c.instructions+=3;NFSU2_TR(0x64fdba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64fdbd:{NFSU2_TR(0x64fdbd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64fdbe:{NFSU2_TR(0x64fdbe);
if(r1(R+518)){{goto L64fdf5;}}
}
B64fdc0:L64fdc0:{c.instructions+=2;NFSU2_TR(0x64fdc0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64fdc1:{NFSU2_TR(0x64fdc1);
if(r1(R+518)){{goto L64fdcf;}}
}
B64fdc3:L64fdc3:{c.instructions+=4;NFSU2_TR(0x64fdc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdc4:{NFSU2_TR(0x64fdc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdc5:{NFSU2_TR(0x64fdc5);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdca:{NFSU2_TR(0x64fdca);
{goto L64fea8;}
}
B64fdcf:L64fdcf:{c.instructions+=9;NFSU2_TR(0x64fdcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fdd2:{NFSU2_TR(0x64fdd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fdd5:{NFSU2_TR(0x64fdd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdd6:{NFSU2_TR(0x64fdd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdd7:{NFSU2_TR(0x64fdd7);
u8 U[4];
w4(U+0,u32(0x7b3d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fddc:{NFSU2_TR(0x64fddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64fde2:{NFSU2_TR(0x64fde2);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fde7:{NFSU2_TR(0x64fde7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fde8:{NFSU2_TR(0x64fde8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fdedull));
TAIL_STATIC(0x75e081u,75e);
}
B64fded:L64fded:{c.instructions+=2;NFSU2_TR(0x64fded);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B64fdf0:{NFSU2_TR(0x64fdf0);
{goto L64febc;}
}
B64fdf5:L64fdf5:{c.instructions+=8;NFSU2_TR(0x64fdf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fdf8:{NFSU2_TR(0x64fdf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdf9:{NFSU2_TR(0x64fdf9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdfa:{NFSU2_TR(0x64fdfa);
u8 U[4];
w4(U+0,u32(0x7b3d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fdff:{NFSU2_TR(0x64fdff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64fe05:{NFSU2_TR(0x64fe05);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe0a:{NFSU2_TR(0x64fe0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe0b:{NFSU2_TR(0x64fe0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fe10ull));
TAIL_STATIC(0x75e081u,75e);
}
B64fe10:L64fe10:{c.instructions+=2;NFSU2_TR(0x64fe10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B64fe13:{NFSU2_TR(0x64fe13);
{goto L64febc;}
}
B64fe18:L64fe18:{c.instructions+=3;NFSU2_TR(0x64fe18);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fe1c:{NFSU2_TR(0x64fe1c);
__builtin_memmove((R+0),(R+28),4);
}
B64fe1e:{NFSU2_TR(0x64fe1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fe29;}}
}
B64fe20:L64fe20:{c.instructions+=3;NFSU2_TR(0x64fe20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fe23:{NFSU2_TR(0x64fe23);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fe27:{NFSU2_TR(0x64fe27);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fe20u);}goto L64fe20;}}
}
B64fe29:L64fe29:{c.instructions+=7;NFSU2_TR(0x64fe29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe2a:{NFSU2_TR(0x64fe2a);
w4(R+24,u32(0xffull));
}
B64fe2f:{NFSU2_TR(0x64fe2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe30:{NFSU2_TR(0x64fe30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64fe36:{NFSU2_TR(0x64fe36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe37:{NFSU2_TR(0x64fe37);
__builtin_memmove((R+4),(R+12),4);
}
B64fe39:{NFSU2_TR(0x64fe39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fe3eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fc9eu);}goto L64fc9e;}
}
B64fe3e:L64fe3e:{c.instructions+=2;NFSU2_TR(0x64fe3e);
__builtin_memmove((R+12),(R+0),4);
}
B64fe40:{NFSU2_TR(0x64fe40);
{goto L64fe7b;}
}
B64fe42:L64fe42:{c.instructions+=8;NFSU2_TR(0x64fe42);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64fe45:{NFSU2_TR(0x64fe45);
__builtin_memmove((R+4),(R+24),4);
}
B64fe47:{NFSU2_TR(0x64fe47);
u8 U[4];
w4(U+0,u32(0x7b3d08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe4c:{NFSU2_TR(0x64fe4c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64fe4e:{NFSU2_TR(0x64fe4e);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B64fe55:{NFSU2_TR(0x64fe55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe56:{NFSU2_TR(0x64fe56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe57:{NFSU2_TR(0x64fe57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fe5cull));
TAIL_STATIC(0x75e081u,75e);
}
B64fe5c:L64fe5c:{c.instructions+=4;NFSU2_TR(0x64fe5c);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B64fe63:{NFSU2_TR(0x64fe63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64fe66:{NFSU2_TR(0x64fe66);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64fe6a:{NFSU2_TR(0x64fe6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64fe6d:L64fe6d:{c.instructions+=4;NFSU2_TR(0x64fe6d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B64fe6f:{NFSU2_TR(0x64fe6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64fe70:{NFSU2_TR(0x64fe70);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64fe72:{NFSU2_TR(0x64fe72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fe6du);}goto L64fe6d;}}
}
B64fe74:L64fe74:{c.instructions+=3;NFSU2_TR(0x64fe74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64fe77:{NFSU2_TR(0x64fe77);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B64fe79:{NFSU2_TR(0x64fe79);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B64fe7b:L64fe7b:{c.instructions+=2;NFSU2_TR(0x64fe7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fe7f:{NFSU2_TR(0x64fe7f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fe42u);}goto L64fe42;}}
}
B64fe81:L64fe81:{c.instructions+=1;NFSU2_TR(0x64fe81);
{goto L64fec0;}
}
B64fe83:L64fe83:{c.instructions+=3;NFSU2_TR(0x64fe83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe84:{NFSU2_TR(0x64fe84);
__builtin_memmove((R+4),(R+12),4);
}
B64fe86:{NFSU2_TR(0x64fe86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fe8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fa50u);}goto L64fa50;}
}
B64fe8b:L64fe8b:{c.instructions+=3;NFSU2_TR(0x64fe8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64fe8d:{NFSU2_TR(0x64fe8d);
w4(R+24,u32(0x7b3e08ull));
}
B64fe92:{NFSU2_TR(0x64fe92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64fe99;}}
}
B64fe94:L64fe94:{c.instructions+=1;NFSU2_TR(0x64fe94);
w4(R+24,u32(0x783fe5ull));
}
B64fe99:L64fe99:{c.instructions+=3;NFSU2_TR(0x64fe99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fe9a:{NFSU2_TR(0x64fe9a);
__builtin_memmove((R+4),(R+12),4);
}
B64fe9c:{NFSU2_TR(0x64fe9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fea1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb5eu);}goto L64fb5e;}
}
B64fea1:L64fea1:{c.instructions+=3;NFSU2_TR(0x64fea1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fea2:{NFSU2_TR(0x64fea2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fea3:{NFSU2_TR(0x64fea3);
u8 U[4];
w4(U+0,u32(0x7b3cf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fea8:L64fea8:{c.instructions+=4;NFSU2_TR(0x64fea8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64feae:{NFSU2_TR(0x64feae);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64feb3:{NFSU2_TR(0x64feb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64feb4:{NFSU2_TR(0x64feb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64feb9ull));
TAIL_STATIC(0x75e081u,75e);
}
B64feb9:L64feb9:{c.instructions+=1;NFSU2_TR(0x64feb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B64febc:L64febc:{c.instructions+=1;NFSU2_TR(0x64febc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64fec0:L64fec0:{c.instructions+=3;NFSU2_TR(0x64fec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64fec3:{NFSU2_TR(0x64fec3);
__builtin_memmove((R+0),(R+24),4);
}
B64fec5:{NFSU2_TR(0x64fec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B64fec8:L64fec8:{c.instructions+=4;NFSU2_TR(0x64fec8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64feca:{NFSU2_TR(0x64feca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64fecb:{NFSU2_TR(0x64fecb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64fecd:{NFSU2_TR(0x64fecd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fec8u);}goto L64fec8;}}
}
B64fecf:L64fecf:{c.instructions+=3;NFSU2_TR(0x64fecf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B64fed1:{NFSU2_TR(0x64fed1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64fed4:{NFSU2_TR(0x64fed4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64fed9;}}
}
B64fed6:L64fed6:{c.instructions+=1;NFSU2_TR(0x64fed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64fed9:L64fed9:{c.instructions+=5;NFSU2_TR(0x64fed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64fedc:{NFSU2_TR(0x64fedc);
__builtin_memmove((R+4),(R+0),4);
}
B64fede:{NFSU2_TR(0x64fede);
__builtin_memmove((R+12),(R+4),4);
}
B64fee0:{NFSU2_TR(0x64fee0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64fee3:{NFSU2_TR(0x64fee3);
__builtin_memmove((R+28),(R+8),4);
}
B64fee5:L64fee5:{c.instructions+=1;NFSU2_TR(0x64fee5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64fee7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fee5u);}goto L64fee5;}
}
B64fee7:L64fee7:{c.instructions+=2;NFSU2_TR(0x64fee7);
__builtin_memmove((R+4),(R+12),4);
}
B64fee9:{NFSU2_TR(0x64fee9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64feec:L64feec:{c.instructions+=1;NFSU2_TR(0x64feec);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64feee;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64feecu);}goto L64feec;}
}
B64feee:L64feee:{c.instructions+=6;NFSU2_TR(0x64feee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64feef:{NFSU2_TR(0x64feef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64fef0:{NFSU2_TR(0x64fef0);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B64fef4:{NFSU2_TR(0x64fef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64fef5:{NFSU2_TR(0x64fef5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64fef6:{NFSU2_TR(0x64fef6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ff71:L64ff71:{c.instructions+=11;NFSU2_TR(0x64ff71);
__builtin_memmove((R+28),(R+28),4);
}
B64ff73:{NFSU2_TR(0x64ff73);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ff74:{NFSU2_TR(0x64ff74);
__builtin_memmove((R+20),(R+16),4);
}
B64ff76:{NFSU2_TR(0x64ff76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ff77:{NFSU2_TR(0x64ff77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ff78:{NFSU2_TR(0x64ff78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ff7b:{NFSU2_TR(0x64ff7b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64ff7d:{NFSU2_TR(0x64ff7d);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64ff7f:{NFSU2_TR(0x64ff7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ff80:{NFSU2_TR(0x64ff80);
__builtin_memmove((R+12),(R+4),4);
}
B64ff82:{NFSU2_TR(0x64ff82);
if(r1(R+518)){{goto L64ffe0;}}
}
B64ff84:L64ff84:{c.instructions+=1;NFSU2_TR(0x64ff84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ff87:L64ff87:{c.instructions+=3;NFSU2_TR(0x64ff87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ff8a:{NFSU2_TR(0x64ff8a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ff8b:{NFSU2_TR(0x64ff8b);
if(r1(R+518)){{goto L64ffc2;}}
}
B64ff8d:L64ff8d:{c.instructions+=2;NFSU2_TR(0x64ff8d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ff90:{NFSU2_TR(0x64ff90);
if(r1(R+518)){{goto L64ffbd;}}
}
B64ff92:L64ff92:{c.instructions+=3;NFSU2_TR(0x64ff92);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64ff93:{NFSU2_TR(0x64ff93);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ff94:{NFSU2_TR(0x64ff94);
if(r1(R+518)){{goto L64ffa2;}}
}
B64ff96:L64ff96:{c.instructions+=2;NFSU2_TR(0x64ff96);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ff97:{NFSU2_TR(0x64ff97);
if(r1(R+518)){{goto L64fffe;}}
}
B64ff99:L64ff99:{c.instructions+=3;NFSU2_TR(0x64ff99);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64ff9a:{NFSU2_TR(0x64ff9a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64ff9b:{NFSU2_TR(0x64ff9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ffec;}}
}
B64ff9d:L64ff9d:{c.instructions+=2;NFSU2_TR(0x64ff9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ffa0:{NFSU2_TR(0x64ffa0);
{goto L64ffda;}
}
B64ffa2:L64ffa2:{c.instructions+=4;NFSU2_TR(0x64ffa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ffa5:{NFSU2_TR(0x64ffa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ffa6:{NFSU2_TR(0x64ffa6);
__builtin_memmove((R+4),(R+12),4);
}
B64ffa8:{NFSU2_TR(0x64ffa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ffadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb5eu);}goto L64fb5e;}
}
B64ffad:L64ffad:{c.instructions+=3;NFSU2_TR(0x64ffad);
__builtin_memmove((R+4),(R+0),4);
}
B64ffaf:{NFSU2_TR(0x64ffaf);
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
B64ffb1:{NFSU2_TR(0x64ffb1);
if(r1(R+518)){{goto L64ffe0;}}
}
B64ffb3:L64ffb3:{c.instructions+=5;NFSU2_TR(0x64ffb3);
__builtin_memmove((R+0),(R+28),4);
}
B64ffb5:{NFSU2_TR(0x64ffb5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64ffb7:{NFSU2_TR(0x64ffb7);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64ffb7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x64ffb7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B64ffb9:{NFSU2_TR(0x64ffb9);
__builtin_memmove((R+28),(R+8),4);
}
B64ffbb:{NFSU2_TR(0x64ffbb);
{goto L64ffda;}
}
B64ffbd:L64ffbd:{c.instructions+=2;NFSU2_TR(0x64ffbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ffc0:{NFSU2_TR(0x64ffc0);
{goto L64ffda;}
}
B64ffc2:L64ffc2:{c.instructions+=3;NFSU2_TR(0x64ffc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ffc5:{NFSU2_TR(0x64ffc5);
__builtin_memmove((R+4),(R+12),4);
}
B64ffc7:{NFSU2_TR(0x64ffc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ffccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64fb5eu);}goto L64fb5e;}
}
B64ffcc:L64ffcc:{c.instructions+=2;NFSU2_TR(0x64ffcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64ffce:{NFSU2_TR(0x64ffce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ffd5;}}
}
B64ffd0:L64ffd0:{c.instructions+=2;NFSU2_TR(0x64ffd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ffd3:{NFSU2_TR(0x64ffd3);
{goto L64ffda;}
}
B64ffd5:L64ffd5:{c.instructions+=2;NFSU2_TR(0x64ffd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ffd8:{NFSU2_TR(0x64ffd8);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B64ffda:L64ffda:{c.instructions+=3;NFSU2_TR(0x64ffda);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64ffdc:{NFSU2_TR(0x64ffdc);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64ffde:{NFSU2_TR(0x64ffde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ff87u);}goto L64ff87;}}
}
B64ffe0:L64ffe0:{c.instructions+=6;NFSU2_TR(0x64ffe0);
w4(R+0,u32(0x80004005ull));
}
B64ffe5:{NFSU2_TR(0x64ffe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ffe6:{NFSU2_TR(0x64ffe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ffe7:{NFSU2_TR(0x64ffe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ffe8:{NFSU2_TR(0x64ffe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64ffe9:{NFSU2_TR(0x64ffe9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ffec:L64ffec:{c.instructions+=5;NFSU2_TR(0x64ffec);
u8 U[4];
w4(U+0,u32(0x7b3cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fff1:{NFSU2_TR(0x64fff1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fff2:{NFSU2_TR(0x64fff2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fff3:{NFSU2_TR(0x64fff3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64fff4:{NFSU2_TR(0x64fff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64fff9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64f5cdu);}goto L64f5cd;}
}
B64fff9:L64fff9:{c.instructions+=2;NFSU2_TR(0x64fff9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64fffc:{NFSU2_TR(0x64fffc);
TAIL_STATIC(0x650038u,650);
}
B64fffe:L64fffe:{c.instructions+=1;NFSU2_TR(0x64fffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x650001u,650);
}
XIT:NFSU2_TR_EXIT(0x64f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
