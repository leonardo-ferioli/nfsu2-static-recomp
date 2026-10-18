#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_60a(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x57f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x57f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_57f(u8* __restrict R,Cpu& c);
u32 page_57f(Cpu& c){return body_57f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_57f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x57f000:goto L57f000;
case 0x57f004:c.instructions+=2;goto B57f004;
case 0x57f006:c.instructions+=1;goto B57f006;
case 0x57f008:goto L57f008;
case 0x57f010:goto L57f010;
case 0x57f015:c.instructions+=2;goto B57f015;
case 0x57f017:c.instructions+=1;goto B57f017;
case 0x57f019:goto L57f019;
case 0x57f023:c.instructions+=1;goto B57f023;
case 0x57f025:goto L57f025;
case 0x57f02a:goto L57f02a;
case 0x57f02c:goto L57f02c;
case 0x57f030:goto L57f030;
case 0x57f036:c.instructions+=6;goto B57f036;
case 0x57f037:c.instructions+=5;goto B57f037;
case 0x57f03e:c.instructions+=4;goto B57f03e;
case 0x57f040:c.instructions+=3;goto B57f040;
case 0x57f041:c.instructions+=2;goto B57f041;
case 0x57f042:c.instructions+=1;goto B57f042;
case 0x57f044:goto L57f044;
case 0x57f049:c.instructions+=1;goto B57f049;
case 0x57f04e:goto L57f04e;
case 0x57f050:c.instructions+=3;goto B57f050;
case 0x57f055:c.instructions+=2;goto B57f055;
case 0x57f056:c.instructions+=1;goto B57f056;
case 0x57f05b:goto L57f05b;
case 0x57f05d:c.instructions+=7;goto B57f05d;
case 0x57f05e:c.instructions+=6;goto B57f05e;
case 0x57f063:c.instructions+=5;goto B57f063;
case 0x57f064:c.instructions+=4;goto B57f064;
case 0x57f065:c.instructions+=3;goto B57f065;
case 0x57f06a:c.instructions+=2;goto B57f06a;
case 0x57f06b:c.instructions+=1;goto B57f06b;
case 0x57f070:goto L57f070;
case 0x57f073:c.instructions+=6;goto B57f073;
case 0x57f074:c.instructions+=5;goto B57f074;
case 0x57f07a:c.instructions+=4;goto B57f07a;
case 0x57f07b:c.instructions+=3;goto B57f07b;
case 0x57f07c:c.instructions+=2;goto B57f07c;
case 0x57f082:c.instructions+=1;goto B57f082;
case 0x57f083:goto L57f083;
case 0x57f086:c.instructions+=1;goto B57f086;
case 0x57f088:goto L57f088;
case 0x57f08d:c.instructions+=2;goto B57f08d;
case 0x57f08f:c.instructions+=1;goto B57f08f;
case 0x57f091:goto L57f091;
case 0x57f096:c.instructions+=1;goto B57f096;
case 0x57f09b:goto L57f09b;
case 0x57f09e:c.instructions+=1;goto B57f09e;
case 0x57f0a3:goto L57f0a3;
case 0x57f0a4:c.instructions+=1;goto B57f0a4;
case 0x57f0a9:goto L57f0a9;
case 0x57f0ac:goto L57f0ac;
case 0x57f0b1:goto L57f0b1;
case 0x57f0b4:c.instructions+=2;goto B57f0b4;
case 0x57f0b6:c.instructions+=1;goto B57f0b6;
case 0x57f0b8:goto L57f0b8;
case 0x57f0ba:c.instructions+=4;goto B57f0ba;
case 0x57f0bc:c.instructions+=3;goto B57f0bc;
case 0x57f0be:c.instructions+=2;goto B57f0be;
case 0x57f0bf:c.instructions+=1;goto B57f0bf;
case 0x57f0c4:goto L57f0c4;
case 0x57f0c7:c.instructions+=1;goto B57f0c7;
case 0x57f0c9:goto L57f0c9;
case 0x57f0cc:c.instructions+=1;goto B57f0cc;
case 0x57f0ce:goto L57f0ce;
case 0x57f0d0:c.instructions+=3;goto B57f0d0;
case 0x57f0d2:c.instructions+=2;goto B57f0d2;
case 0x57f0d3:c.instructions+=1;goto B57f0d3;
case 0x57f0d8:goto L57f0d8;
case 0x57f0db:c.instructions+=1;goto B57f0db;
case 0x57f0dd:goto L57f0dd;
case 0x57f0e0:c.instructions+=1;goto B57f0e0;
case 0x57f0e2:goto L57f0e2;
case 0x57f0e3:c.instructions+=1;goto B57f0e3;
case 0x57f0e8:goto L57f0e8;
case 0x57f0ea:goto L57f0ea;
case 0x57f0ed:c.instructions+=1;goto B57f0ed;
case 0x57f0ef:goto L57f0ef;
case 0x57f0f0:c.instructions+=1;goto B57f0f0;
case 0x57f0f5:goto L57f0f5;
case 0x57f0f8:goto L57f0f8;
case 0x57f0fb:c.instructions+=2;goto B57f0fb;
case 0x57f101:c.instructions+=1;goto B57f101;
case 0x57f103:goto L57f103;
case 0x57f105:c.instructions+=6;goto B57f105;
case 0x57f107:c.instructions+=5;goto B57f107;
case 0x57f109:c.instructions+=4;goto B57f109;
case 0x57f10b:c.instructions+=3;goto B57f10b;
case 0x57f110:c.instructions+=2;goto B57f110;
case 0x57f115:c.instructions+=1;goto B57f115;
case 0x57f11a:goto L57f11a;
case 0x57f11c:c.instructions+=2;goto B57f11c;
case 0x57f11e:c.instructions+=1;goto B57f11e;
case 0x57f124:goto L57f124;
case 0x57f126:c.instructions+=1;goto B57f126;
case 0x57f12b:goto L57f12b;
case 0x57f12d:c.instructions+=2;goto B57f12d;
case 0x57f12e:c.instructions+=1;goto B57f12e;
case 0x57f133:goto L57f133;
case 0x57f136:c.instructions+=2;goto B57f136;
case 0x57f13b:c.instructions+=1;goto B57f13b;
case 0x57f13d:goto L57f13d;
case 0x57f13e:c.instructions+=4;goto B57f13e;
case 0x57f142:c.instructions+=3;goto B57f142;
case 0x57f147:c.instructions+=2;goto B57f147;
case 0x57f148:c.instructions+=1;goto B57f148;
case 0x57f14d:goto L57f14d;
case 0x57f150:c.instructions+=2;goto B57f150;
case 0x57f153:c.instructions+=1;goto B57f153;
case 0x57f155:goto L57f155;
case 0x57f157:c.instructions+=5;goto B57f157;
case 0x57f159:c.instructions+=4;goto B57f159;
case 0x57f15d:c.instructions+=3;goto B57f15d;
case 0x57f15f:c.instructions+=2;goto B57f15f;
case 0x57f160:c.instructions+=1;goto B57f160;
case 0x57f165:goto L57f165;
case 0x57f168:c.instructions+=1;goto B57f168;
case 0x57f16a:goto L57f16a;
case 0x57f16d:c.instructions+=1;goto B57f16d;
case 0x57f16f:goto L57f16f;
case 0x57f171:c.instructions+=4;goto B57f171;
case 0x57f175:c.instructions+=3;goto B57f175;
case 0x57f177:c.instructions+=2;goto B57f177;
case 0x57f178:c.instructions+=1;goto B57f178;
case 0x57f17d:goto L57f17d;
case 0x57f180:c.instructions+=1;goto B57f180;
case 0x57f182:goto L57f182;
case 0x57f185:c.instructions+=1;goto B57f185;
case 0x57f187:goto L57f187;
case 0x57f18b:c.instructions+=2;goto B57f18b;
case 0x57f18c:c.instructions+=1;goto B57f18c;
case 0x57f191:goto L57f191;
case 0x57f193:goto L57f193;
case 0x57f196:c.instructions+=1;goto B57f196;
case 0x57f198:goto L57f198;
case 0x57f19c:c.instructions+=2;goto B57f19c;
case 0x57f19d:c.instructions+=1;goto B57f19d;
case 0x57f1a2:goto L57f1a2;
case 0x57f1a5:goto L57f1a5;
case 0x57f1a7:c.instructions+=6;goto B57f1a7;
case 0x57f1a8:c.instructions+=5;goto B57f1a8;
case 0x57f1aa:c.instructions+=4;goto B57f1aa;
case 0x57f1ac:c.instructions+=3;goto B57f1ac;
case 0x57f1b1:c.instructions+=2;goto B57f1b1;
case 0x57f1b6:c.instructions+=1;goto B57f1b6;
case 0x57f1bb:goto L57f1bb;
case 0x57f1bd:c.instructions+=2;goto B57f1bd;
case 0x57f1bf:c.instructions+=1;goto B57f1bf;
case 0x57f1c5:goto L57f1c5;
case 0x57f1c8:c.instructions+=1;goto B57f1c8;
case 0x57f1ca:goto L57f1ca;
case 0x57f1cc:c.instructions+=1;goto B57f1cc;
case 0x57f1d1:goto L57f1d1;
case 0x57f1d6:c.instructions+=4;goto B57f1d6;
case 0x57f1d9:c.instructions+=3;goto B57f1d9;
case 0x57f1db:c.instructions+=2;goto B57f1db;
case 0x57f1dd:c.instructions+=1;goto B57f1dd;
case 0x57f1df:goto L57f1df;
case 0x57f1e1:c.instructions+=5;goto B57f1e1;
case 0x57f1e4:c.instructions+=4;goto B57f1e4;
case 0x57f1e6:c.instructions+=3;goto B57f1e6;
case 0x57f1e7:c.instructions+=2;goto B57f1e7;
case 0x57f1ea:c.instructions+=1;goto B57f1ea;
case 0x57f1ef:goto L57f1ef;
case 0x57f1f2:goto L57f1f2;
case 0x57f1fc:goto L57f1fc;
case 0x57f1fd:c.instructions+=4;goto B57f1fd;
case 0x57f1fe:c.instructions+=3;goto B57f1fe;
case 0x57f1ff:c.instructions+=2;goto B57f1ff;
case 0x57f205:c.instructions+=1;goto B57f205;
case 0x57f210:goto L57f210;
case 0x57f212:c.instructions+=11;goto B57f212;
case 0x57f217:c.instructions+=10;goto B57f217;
case 0x57f21d:c.instructions+=9;goto B57f21d;
case 0x57f21e:c.instructions+=8;goto B57f21e;
case 0x57f225:c.instructions+=7;goto B57f225;
case 0x57f226:c.instructions+=6;goto B57f226;
case 0x57f22b:c.instructions+=5;goto B57f22b;
case 0x57f22c:c.instructions+=4;goto B57f22c;
case 0x57f22d:c.instructions+=3;goto B57f22d;
case 0x57f22f:c.instructions+=2;goto B57f22f;
case 0x57f239:c.instructions+=1;goto B57f239;
case 0x57f23e:goto L57f23e;
case 0x57f240:c.instructions+=2;goto B57f240;
case 0x57f245:c.instructions+=1;goto B57f245;
case 0x57f24a:goto L57f24a;
case 0x57f24f:c.instructions+=1;goto B57f24f;
case 0x57f254:goto L57f254;
case 0x57f256:c.instructions+=2;goto B57f256;
case 0x57f25b:c.instructions+=1;goto B57f25b;
case 0x57f260:goto L57f260;
case 0x57f266:c.instructions+=4;goto B57f266;
case 0x57f26b:c.instructions+=3;goto B57f26b;
case 0x57f26e:c.instructions+=2;goto B57f26e;
case 0x57f274:c.instructions+=1;goto B57f274;
case 0x57f279:goto L57f279;
case 0x57f27b:c.instructions+=1;goto B57f27b;
case 0x57f280:goto L57f280;
case 0x57f283:c.instructions+=4;goto B57f283;
case 0x57f287:c.instructions+=3;goto B57f287;
case 0x57f289:c.instructions+=2;goto B57f289;
case 0x57f291:c.instructions+=1;goto B57f291;
case 0x57f293:goto L57f293;
case 0x57f295:c.instructions+=1;goto B57f295;
case 0x57f29a:goto L57f29a;
case 0x57f29c:goto L57f29c;
case 0x57f29e:goto L57f29e;
case 0x57f2a3:c.instructions+=4;goto B57f2a3;
case 0x57f2a5:c.instructions+=3;goto B57f2a5;
case 0x57f2ad:c.instructions+=2;goto B57f2ad;
case 0x57f2b3:c.instructions+=1;goto B57f2b3;
case 0x57f2b8:goto L57f2b8;
case 0x57f2bc:c.instructions+=4;goto B57f2bc;
case 0x57f2bd:c.instructions+=3;goto B57f2bd;
case 0x57f2c4:c.instructions+=2;goto B57f2c4;
case 0x57f2c7:c.instructions+=1;goto B57f2c7;
case 0x57f2d0:goto L57f2d0;
case 0x57f2d6:c.instructions+=11;goto B57f2d6;
case 0x57f2d7:c.instructions+=10;goto B57f2d7;
case 0x57f2d9:c.instructions+=9;goto B57f2d9;
case 0x57f2db:c.instructions+=8;goto B57f2db;
case 0x57f2dc:c.instructions+=7;goto B57f2dc;
case 0x57f2dd:c.instructions+=6;goto B57f2dd;
case 0x57f2df:c.instructions+=5;goto B57f2df;
case 0x57f2e4:c.instructions+=4;goto B57f2e4;
case 0x57f2e5:c.instructions+=3;goto B57f2e5;
case 0x57f2e7:c.instructions+=2;goto B57f2e7;
case 0x57f2e9:c.instructions+=1;goto B57f2e9;
case 0x57f2eb:goto L57f2eb;
case 0x57f2f2:goto L57f2f2;
case 0x57f2f8:c.instructions+=2;goto B57f2f8;
case 0x57f2fa:c.instructions+=1;goto B57f2fa;
case 0x57f2fc:goto L57f2fc;
case 0x57f302:goto L57f302;
case 0x57f309:c.instructions+=5;goto B57f309;
case 0x57f313:c.instructions+=4;goto B57f313;
case 0x57f318:c.instructions+=3;goto B57f318;
case 0x57f31a:c.instructions+=2;goto B57f31a;
case 0x57f31d:c.instructions+=1;goto B57f31d;
case 0x57f323:goto L57f323;
case 0x57f328:goto L57f328;
case 0x57f32b:c.instructions+=3;goto B57f32b;
case 0x57f330:c.instructions+=2;goto B57f330;
case 0x57f332:c.instructions+=1;goto B57f332;
case 0x57f334:goto L57f334;
case 0x57f335:c.instructions+=5;goto B57f335;
case 0x57f336:c.instructions+=4;goto B57f336;
case 0x57f337:c.instructions+=3;goto B57f337;
case 0x57f339:c.instructions+=2;goto B57f339;
case 0x57f33e:c.instructions+=1;goto B57f33e;
case 0x57f343:goto L57f343;
case 0x57f346:c.instructions+=5;goto B57f346;
case 0x57f348:c.instructions+=4;goto B57f348;
case 0x57f349:c.instructions+=3;goto B57f349;
case 0x57f34a:c.instructions+=2;goto B57f34a;
case 0x57f34c:c.instructions+=1;goto B57f34c;
case 0x57f351:goto L57f351;
case 0x57f354:goto L57f354;
case 0x57f35a:c.instructions+=3;goto B57f35a;
case 0x57f35c:c.instructions+=2;goto B57f35c;
case 0x57f361:c.instructions+=1;goto B57f361;
case 0x57f363:goto L57f363;
case 0x57f369:c.instructions+=1;goto B57f369;
case 0x57f36b:goto L57f36b;
case 0x57f370:c.instructions+=1;goto B57f370;
case 0x57f372:goto L57f372;
case 0x57f378:c.instructions+=2;goto B57f378;
case 0x57f37a:c.instructions+=1;goto B57f37a;
case 0x57f37c:goto L57f37c;
case 0x57f382:c.instructions+=1;goto B57f382;
case 0x57f384:goto L57f384;
case 0x57f389:c.instructions+=1;goto B57f389;
case 0x57f38b:goto L57f38b;
case 0x57f391:c.instructions+=1;goto B57f391;
case 0x57f393:goto L57f393;
case 0x57f39a:c.instructions+=1;goto B57f39a;
case 0x57f39c:goto L57f39c;
case 0x57f3a1:goto L57f3a1;
case 0x57f3a2:c.instructions+=5;goto B57f3a2;
case 0x57f3a3:c.instructions+=4;goto B57f3a3;
case 0x57f3a4:c.instructions+=3;goto B57f3a4;
case 0x57f3a6:c.instructions+=2;goto B57f3a6;
case 0x57f3a7:c.instructions+=1;goto B57f3a7;
case 0x57f3ac:goto L57f3ac;
case 0x57f3af:c.instructions+=5;goto B57f3af;
case 0x57f3b1:c.instructions+=4;goto B57f3b1;
case 0x57f3b2:c.instructions+=3;goto B57f3b2;
case 0x57f3b7:c.instructions+=2;goto B57f3b7;
case 0x57f3b9:c.instructions+=1;goto B57f3b9;
case 0x57f3be:goto L57f3be;
case 0x57f3bf:c.instructions+=5;goto B57f3bf;
case 0x57f3c2:c.instructions+=4;goto B57f3c2;
case 0x57f3c3:c.instructions+=3;goto B57f3c3;
case 0x57f3c4:c.instructions+=2;goto B57f3c4;
case 0x57f3ca:c.instructions+=1;goto B57f3ca;
case 0x57f3cb:goto L57f3cb;
case 0x57f3ce:c.instructions+=1;goto B57f3ce;
case 0x57f3d0:goto L57f3d0;
case 0x57f3d1:c.instructions+=3;goto B57f3d1;
case 0x57f3d6:c.instructions+=2;goto B57f3d6;
case 0x57f3d8:c.instructions+=1;goto B57f3d8;
case 0x57f3dd:goto L57f3dd;
case 0x57f3de:c.instructions+=4;goto B57f3de;
case 0x57f3df:c.instructions+=3;goto B57f3df;
case 0x57f3e0:c.instructions+=2;goto B57f3e0;
case 0x57f3e6:c.instructions+=1;goto B57f3e6;
case 0x57f3e7:goto L57f3e7;
case 0x57f3ea:c.instructions+=1;goto B57f3ea;
case 0x57f3f0:goto L57f3f0;
case 0x57f3f5:c.instructions+=6;goto B57f3f5;
case 0x57f3f7:c.instructions+=5;goto B57f3f7;
case 0x57f3f8:c.instructions+=4;goto B57f3f8;
case 0x57f3fd:c.instructions+=3;goto B57f3fd;
case 0x57f3ff:c.instructions+=2;goto B57f3ff;
case 0x57f401:c.instructions+=1;goto B57f401;
case 0x57f403:goto L57f403;
case 0x57f409:c.instructions+=6;goto B57f409;
case 0x57f40c:c.instructions+=5;goto B57f40c;
case 0x57f40d:c.instructions+=4;goto B57f40d;
case 0x57f412:c.instructions+=3;goto B57f412;
case 0x57f416:c.instructions+=2;goto B57f416;
case 0x57f417:c.instructions+=1;goto B57f417;
case 0x57f419:goto L57f419;
case 0x57f41f:c.instructions+=5;goto B57f41f;
case 0x57f422:c.instructions+=4;goto B57f422;
case 0x57f423:c.instructions+=3;goto B57f423;
case 0x57f428:c.instructions+=2;goto B57f428;
case 0x57f42c:c.instructions+=1;goto B57f42c;
case 0x57f42d:goto L57f42d;
case 0x57f432:goto L57f432;
case 0x57f435:c.instructions+=7;goto B57f435;
case 0x57f437:c.instructions+=6;goto B57f437;
case 0x57f439:c.instructions+=5;goto B57f439;
case 0x57f43b:c.instructions+=4;goto B57f43b;
case 0x57f43f:c.instructions+=3;goto B57f43f;
case 0x57f441:c.instructions+=2;goto B57f441;
case 0x57f442:c.instructions+=1;goto B57f442;
case 0x57f447:goto L57f447;
case 0x57f44a:c.instructions+=5;goto B57f44a;
case 0x57f44c:c.instructions+=4;goto B57f44c;
case 0x57f44e:c.instructions+=3;goto B57f44e;
case 0x57f450:c.instructions+=2;goto B57f450;
case 0x57f452:c.instructions+=1;goto B57f452;
case 0x57f457:goto L57f457;
case 0x57f45a:c.instructions+=8;goto B57f45a;
case 0x57f460:c.instructions+=7;goto B57f460;
case 0x57f461:c.instructions+=6;goto B57f461;
case 0x57f464:c.instructions+=5;goto B57f464;
case 0x57f465:c.instructions+=4;goto B57f465;
case 0x57f469:c.instructions+=3;goto B57f469;
case 0x57f46e:c.instructions+=2;goto B57f46e;
case 0x57f46f:c.instructions+=1;goto B57f46f;
case 0x57f474:goto L57f474;
case 0x57f479:c.instructions+=3;goto B57f479;
case 0x57f47c:c.instructions+=2;goto B57f47c;
case 0x57f47e:c.instructions+=1;goto B57f47e;
case 0x57f480:goto L57f480;
case 0x57f484:c.instructions+=2;goto B57f484;
case 0x57f485:c.instructions+=1;goto B57f485;
case 0x57f48a:goto L57f48a;
case 0x57f48d:c.instructions+=2;goto B57f48d;
case 0x57f48f:c.instructions+=1;goto B57f48f;
case 0x57f491:goto L57f491;
case 0x57f497:c.instructions+=7;goto B57f497;
case 0x57f498:c.instructions+=6;goto B57f498;
case 0x57f49b:c.instructions+=5;goto B57f49b;
case 0x57f49c:c.instructions+=4;goto B57f49c;
case 0x57f4a0:c.instructions+=3;goto B57f4a0;
case 0x57f4a5:c.instructions+=2;goto B57f4a5;
case 0x57f4a6:c.instructions+=1;goto B57f4a6;
case 0x57f4ab:goto L57f4ab;
case 0x57f4ae:c.instructions+=1;goto B57f4ae;
case 0x57f4b0:goto L57f4b0;
case 0x57f4b5:c.instructions+=6;goto B57f4b5;
case 0x57f4b8:c.instructions+=5;goto B57f4b8;
case 0x57f4b9:c.instructions+=4;goto B57f4b9;
case 0x57f4bd:c.instructions+=3;goto B57f4bd;
case 0x57f4c2:c.instructions+=2;goto B57f4c2;
case 0x57f4c3:c.instructions+=1;goto B57f4c3;
case 0x57f4c8:goto L57f4c8;
case 0x57f4cb:goto L57f4cb;
case 0x57f4cd:c.instructions+=6;goto B57f4cd;
case 0x57f4cf:c.instructions+=5;goto B57f4cf;
case 0x57f4d1:c.instructions+=4;goto B57f4d1;
case 0x57f4d5:c.instructions+=3;goto B57f4d5;
case 0x57f4d7:c.instructions+=2;goto B57f4d7;
case 0x57f4d8:c.instructions+=1;goto B57f4d8;
case 0x57f4dd:goto L57f4dd;
case 0x57f4e0:c.instructions+=5;goto B57f4e0;
case 0x57f4e2:c.instructions+=4;goto B57f4e2;
case 0x57f4e4:c.instructions+=3;goto B57f4e4;
case 0x57f4e6:c.instructions+=2;goto B57f4e6;
case 0x57f4e8:c.instructions+=1;goto B57f4e8;
case 0x57f4ed:goto L57f4ed;
case 0x57f4f0:c.instructions+=3;goto B57f4f0;
case 0x57f4f5:c.instructions+=2;goto B57f4f5;
case 0x57f4f7:c.instructions+=1;goto B57f4f7;
case 0x57f4fd:goto L57f4fd;
case 0x57f502:c.instructions+=2;goto B57f502;
case 0x57f504:c.instructions+=1;goto B57f504;
case 0x57f506:goto L57f506;
case 0x57f50b:c.instructions+=1;goto B57f50b;
case 0x57f510:goto L57f510;
case 0x57f512:c.instructions+=1;goto B57f512;
case 0x57f514:goto L57f514;
case 0x57f519:c.instructions+=1;goto B57f519;
case 0x57f51e:goto L57f51e;
case 0x57f520:c.instructions+=1;goto B57f520;
case 0x57f522:goto L57f522;
case 0x57f527:c.instructions+=3;goto B57f527;
case 0x57f529:c.instructions+=2;goto B57f529;
case 0x57f52e:c.instructions+=1;goto B57f52e;
case 0x57f530:goto L57f530;
case 0x57f535:goto L57f535;
case 0x57f536:c.instructions+=8;goto B57f536;
case 0x57f53b:c.instructions+=7;goto B57f53b;
case 0x57f53c:c.instructions+=6;goto B57f53c;
case 0x57f53f:c.instructions+=5;goto B57f53f;
case 0x57f540:c.instructions+=4;goto B57f540;
case 0x57f544:c.instructions+=3;goto B57f544;
case 0x57f549:c.instructions+=2;goto B57f549;
case 0x57f54a:c.instructions+=1;goto B57f54a;
case 0x57f54f:goto L57f54f;
case 0x57f553:c.instructions+=2;goto B57f553;
case 0x57f554:c.instructions+=1;goto B57f554;
case 0x57f559:goto L57f559;
case 0x57f55c:c.instructions+=1;goto B57f55c;
case 0x57f55e:goto L57f55e;
case 0x57f563:c.instructions+=6;goto B57f563;
case 0x57f566:c.instructions+=5;goto B57f566;
case 0x57f567:c.instructions+=4;goto B57f567;
case 0x57f56b:c.instructions+=3;goto B57f56b;
case 0x57f570:c.instructions+=2;goto B57f570;
case 0x57f571:c.instructions+=1;goto B57f571;
case 0x57f576:goto L57f576;
case 0x57f579:goto L57f579;
case 0x57f57b:c.instructions+=8;goto B57f57b;
case 0x57f57d:c.instructions+=7;goto B57f57d;
case 0x57f57e:c.instructions+=6;goto B57f57e;
case 0x57f583:c.instructions+=5;goto B57f583;
case 0x57f585:c.instructions+=4;goto B57f585;
case 0x57f589:c.instructions+=3;goto B57f589;
case 0x57f58b:c.instructions+=2;goto B57f58b;
case 0x57f58c:c.instructions+=1;goto B57f58c;
case 0x57f591:goto L57f591;
case 0x57f594:c.instructions+=6;goto B57f594;
case 0x57f595:c.instructions+=5;goto B57f595;
case 0x57f596:c.instructions+=4;goto B57f596;
case 0x57f599:c.instructions+=3;goto B57f599;
case 0x57f59a:c.instructions+=2;goto B57f59a;
case 0x57f5a0:c.instructions+=1;goto B57f5a0;
case 0x57f5a1:goto L57f5a1;
case 0x57f5a2:c.instructions+=5;goto B57f5a2;
case 0x57f5a3:c.instructions+=4;goto B57f5a3;
case 0x57f5aa:c.instructions+=3;goto B57f5aa;
case 0x57f5ab:c.instructions+=2;goto B57f5ab;
case 0x57f5b1:c.instructions+=1;goto B57f5b1;
case 0x57f5b2:goto L57f5b2;
case 0x57f5b5:c.instructions+=1;goto B57f5b5;
case 0x57f5bb:goto L57f5bb;
case 0x57f5c1:c.instructions+=8;goto B57f5c1;
case 0x57f5c3:c.instructions+=7;goto B57f5c3;
case 0x57f5c6:c.instructions+=6;goto B57f5c6;
case 0x57f5c9:c.instructions+=5;goto B57f5c9;
case 0x57f5ce:c.instructions+=4;goto B57f5ce;
case 0x57f5d8:c.instructions+=3;goto B57f5d8;
case 0x57f5d9:c.instructions+=2;goto B57f5d9;
case 0x57f5db:c.instructions+=1;goto B57f5db;
case 0x57f5e0:goto L57f5e0;
case 0x57f5e2:c.instructions+=1;goto B57f5e2;
case 0x57f5e7:goto L57f5e7;
case 0x57f5ea:c.instructions+=2;goto B57f5ea;
case 0x57f5ef:c.instructions+=1;goto B57f5ef;
case 0x57f5f0:goto L57f5f0;
case 0x57f5f2:c.instructions+=2;goto B57f5f2;
case 0x57f5f3:c.instructions+=1;goto B57f5f3;
case 0x57f5f8:goto L57f5f8;
case 0x57f5fb:c.instructions+=3;goto B57f5fb;
case 0x57f5fe:c.instructions+=2;goto B57f5fe;
case 0x57f604:c.instructions+=1;goto B57f604;
case 0x57f606:goto L57f606;
case 0x57f608:c.instructions+=6;goto B57f608;
case 0x57f609:c.instructions+=5;goto B57f609;
case 0x57f60a:c.instructions+=4;goto B57f60a;
case 0x57f60c:c.instructions+=3;goto B57f60c;
case 0x57f611:c.instructions+=2;goto B57f611;
case 0x57f616:c.instructions+=1;goto B57f616;
case 0x57f61b:goto L57f61b;
case 0x57f61d:c.instructions+=2;goto B57f61d;
case 0x57f61f:c.instructions+=1;goto B57f61f;
case 0x57f621:goto L57f621;
case 0x57f623:c.instructions+=1;goto B57f623;
case 0x57f628:goto L57f628;
case 0x57f62a:c.instructions+=2;goto B57f62a;
case 0x57f62b:c.instructions+=1;goto B57f62b;
case 0x57f630:goto L57f630;
case 0x57f633:c.instructions+=2;goto B57f633;
case 0x57f638:c.instructions+=1;goto B57f638;
case 0x57f63a:goto L57f63a;
case 0x57f63b:c.instructions+=4;goto B57f63b;
case 0x57f63f:c.instructions+=3;goto B57f63f;
case 0x57f644:c.instructions+=2;goto B57f644;
case 0x57f645:c.instructions+=1;goto B57f645;
case 0x57f64a:goto L57f64a;
case 0x57f64e:c.instructions+=2;goto B57f64e;
case 0x57f64f:c.instructions+=1;goto B57f64f;
case 0x57f654:goto L57f654;
case 0x57f657:goto L57f657;
case 0x57f659:c.instructions+=6;goto B57f659;
case 0x57f65a:c.instructions+=5;goto B57f65a;
case 0x57f65c:c.instructions+=4;goto B57f65c;
case 0x57f65e:c.instructions+=3;goto B57f65e;
case 0x57f663:c.instructions+=2;goto B57f663;
case 0x57f668:c.instructions+=1;goto B57f668;
case 0x57f66d:goto L57f66d;
case 0x57f66f:c.instructions+=2;goto B57f66f;
case 0x57f671:c.instructions+=1;goto B57f671;
case 0x57f673:goto L57f673;
case 0x57f678:c.instructions+=3;goto B57f678;
case 0x57f67a:c.instructions+=2;goto B57f67a;
case 0x57f67c:c.instructions+=1;goto B57f67c;
case 0x57f67e:goto L57f67e;
case 0x57f680:goto L57f680;
case 0x57f681:c.instructions+=2;goto B57f681;
case 0x57f686:c.instructions+=1;goto B57f686;
case 0x57f68b:goto L57f68b;
case 0x57f68d:c.instructions+=3;goto B57f68d;
case 0x57f690:c.instructions+=2;goto B57f690;
case 0x57f692:c.instructions+=1;goto B57f692;
case 0x57f694:goto L57f694;
case 0x57f697:c.instructions+=5;goto B57f697;
case 0x57f69c:c.instructions+=4;goto B57f69c;
case 0x57f6a2:c.instructions+=3;goto B57f6a2;
case 0x57f6aa:c.instructions+=2;goto B57f6aa;
case 0x57f6ad:c.instructions+=1;goto B57f6ad;
case 0x57f6af:goto L57f6af;
case 0x57f6b2:c.instructions+=5;goto B57f6b2;
case 0x57f6b4:c.instructions+=4;goto B57f6b4;
case 0x57f6b7:c.instructions+=3;goto B57f6b7;
case 0x57f6ba:c.instructions+=2;goto B57f6ba;
case 0x57f6bd:c.instructions+=1;goto B57f6bd;
case 0x57f6bf:goto L57f6bf;
case 0x57f6c4:c.instructions+=2;goto B57f6c4;
case 0x57f6c6:c.instructions+=1;goto B57f6c6;
case 0x57f6c8:goto L57f6c8;
case 0x57f6cd:c.instructions+=1;goto B57f6cd;
case 0x57f6cf:goto L57f6cf;
case 0x57f6d1:goto L57f6d1;
case 0x57f6d2:c.instructions+=4;goto B57f6d2;
case 0x57f6d3:c.instructions+=3;goto B57f6d3;
case 0x57f6d4:c.instructions+=2;goto B57f6d4;
case 0x57f6d9:c.instructions+=1;goto B57f6d9;
case 0x57f6de:goto L57f6de;
case 0x57f6e4:c.instructions+=1;goto B57f6e4;
case 0x57f6e8:goto L57f6e8;
case 0x57f6ed:c.instructions+=3;goto B57f6ed;
case 0x57f6ee:c.instructions+=2;goto B57f6ee;
case 0x57f6f0:c.instructions+=1;goto B57f6f0;
case 0x57f6f2:goto L57f6f2;
case 0x57f6f4:c.instructions+=3;goto B57f6f4;
case 0x57f6f9:c.instructions+=2;goto B57f6f9;
case 0x57f6fe:c.instructions+=1;goto B57f6fe;
case 0x57f703:goto L57f703;
case 0x57f704:c.instructions+=3;goto B57f704;
case 0x57f709:c.instructions+=2;goto B57f709;
case 0x57f70e:c.instructions+=1;goto B57f70e;
case 0x57f713:goto L57f713;
case 0x57f714:c.instructions+=4;goto B57f714;
case 0x57f715:c.instructions+=3;goto B57f715;
case 0x57f716:c.instructions+=2;goto B57f716;
case 0x57f71c:c.instructions+=1;goto B57f71c;
case 0x57f71d:goto L57f71d;
case 0x57f720:c.instructions+=1;goto B57f720;
case 0x57f726:goto L57f726;
case 0x57f72b:c.instructions+=1;goto B57f72b;
case 0x57f730:goto L57f730;
case 0x57f732:c.instructions+=2;goto B57f732;
case 0x57f733:c.instructions+=1;goto B57f733;
case 0x57f738:goto L57f738;
case 0x57f73b:c.instructions+=3;goto B57f73b;
case 0x57f73e:c.instructions+=2;goto B57f73e;
case 0x57f744:c.instructions+=1;goto B57f744;
case 0x57f746:goto L57f746;
case 0x57f748:c.instructions+=6;goto B57f748;
case 0x57f749:c.instructions+=5;goto B57f749;
case 0x57f74a:c.instructions+=4;goto B57f74a;
case 0x57f74c:c.instructions+=3;goto B57f74c;
case 0x57f751:c.instructions+=2;goto B57f751;
case 0x57f756:c.instructions+=1;goto B57f756;
case 0x57f75b:goto L57f75b;
case 0x57f75d:c.instructions+=2;goto B57f75d;
case 0x57f75f:c.instructions+=1;goto B57f75f;
case 0x57f761:goto L57f761;
case 0x57f763:c.instructions+=1;goto B57f763;
case 0x57f768:goto L57f768;
case 0x57f76a:c.instructions+=2;goto B57f76a;
case 0x57f76b:c.instructions+=1;goto B57f76b;
case 0x57f770:goto L57f770;
case 0x57f773:c.instructions+=2;goto B57f773;
case 0x57f778:c.instructions+=1;goto B57f778;
case 0x57f77a:goto L57f77a;
case 0x57f77b:c.instructions+=4;goto B57f77b;
case 0x57f77f:c.instructions+=3;goto B57f77f;
case 0x57f784:c.instructions+=2;goto B57f784;
case 0x57f785:c.instructions+=1;goto B57f785;
case 0x57f78a:goto L57f78a;
case 0x57f78e:c.instructions+=2;goto B57f78e;
case 0x57f78f:c.instructions+=1;goto B57f78f;
case 0x57f794:goto L57f794;
case 0x57f797:goto L57f797;
case 0x57f799:c.instructions+=6;goto B57f799;
case 0x57f79a:c.instructions+=5;goto B57f79a;
case 0x57f79c:c.instructions+=4;goto B57f79c;
case 0x57f79e:c.instructions+=3;goto B57f79e;
case 0x57f7a3:c.instructions+=2;goto B57f7a3;
case 0x57f7a8:c.instructions+=1;goto B57f7a8;
case 0x57f7ad:goto L57f7ad;
case 0x57f7af:c.instructions+=2;goto B57f7af;
case 0x57f7b1:c.instructions+=1;goto B57f7b1;
case 0x57f7b3:goto L57f7b3;
case 0x57f7b8:goto L57f7b8;
case 0x57f7ba:c.instructions+=4;goto B57f7ba;
case 0x57f7bc:c.instructions+=3;goto B57f7bc;
case 0x57f7be:c.instructions+=2;goto B57f7be;
case 0x57f7bf:c.instructions+=1;goto B57f7bf;
case 0x57f7c4:goto L57f7c4;
case 0x57f7c7:c.instructions+=3;goto B57f7c7;
case 0x57f7ca:c.instructions+=2;goto B57f7ca;
case 0x57f7d0:c.instructions+=1;goto B57f7d0;
case 0x57f7d2:goto L57f7d2;
case 0x57f7d4:c.instructions+=6;goto B57f7d4;
case 0x57f7d6:c.instructions+=5;goto B57f7d6;
case 0x57f7d8:c.instructions+=4;goto B57f7d8;
case 0x57f7da:c.instructions+=3;goto B57f7da;
case 0x57f7df:c.instructions+=2;goto B57f7df;
case 0x57f7e4:c.instructions+=1;goto B57f7e4;
case 0x57f7e9:goto L57f7e9;
case 0x57f7eb:c.instructions+=2;goto B57f7eb;
case 0x57f7ed:c.instructions+=1;goto B57f7ed;
case 0x57f7ef:goto L57f7ef;
case 0x57f7f0:goto L57f7f0;
case 0x57f7f2:c.instructions+=1;goto B57f7f2;
case 0x57f7f7:goto L57f7f7;
case 0x57f7f9:c.instructions+=2;goto B57f7f9;
case 0x57f7fa:c.instructions+=1;goto B57f7fa;
case 0x57f7ff:goto L57f7ff;
case 0x57f802:c.instructions+=2;goto B57f802;
case 0x57f807:c.instructions+=1;goto B57f807;
case 0x57f809:goto L57f809;
case 0x57f80a:c.instructions+=4;goto B57f80a;
case 0x57f80e:c.instructions+=3;goto B57f80e;
case 0x57f813:c.instructions+=2;goto B57f813;
case 0x57f814:c.instructions+=1;goto B57f814;
case 0x57f819:goto L57f819;
case 0x57f81b:c.instructions+=4;goto B57f81b;
case 0x57f81f:c.instructions+=3;goto B57f81f;
case 0x57f821:c.instructions+=2;goto B57f821;
case 0x57f822:c.instructions+=1;goto B57f822;
case 0x57f827:goto L57f827;
case 0x57f82a:goto L57f82a;
case 0x57f82c:c.instructions+=6;goto B57f82c;
case 0x57f82d:c.instructions+=5;goto B57f82d;
case 0x57f82f:c.instructions+=4;goto B57f82f;
case 0x57f831:c.instructions+=3;goto B57f831;
case 0x57f836:c.instructions+=2;goto B57f836;
case 0x57f83b:c.instructions+=1;goto B57f83b;
case 0x57f840:goto L57f840;
case 0x57f842:c.instructions+=2;goto B57f842;
case 0x57f844:c.instructions+=1;goto B57f844;
case 0x57f846:goto L57f846;
case 0x57f84c:c.instructions+=5;goto B57f84c;
case 0x57f84d:c.instructions+=4;goto B57f84d;
case 0x57f851:c.instructions+=3;goto B57f851;
case 0x57f856:c.instructions+=2;goto B57f856;
case 0x57f857:c.instructions+=1;goto B57f857;
case 0x57f85c:goto L57f85c;
case 0x57f85e:c.instructions+=8;goto B57f85e;
case 0x57f860:c.instructions+=7;goto B57f860;
case 0x57f862:c.instructions+=6;goto B57f862;
case 0x57f864:c.instructions+=5;goto B57f864;
case 0x57f866:c.instructions+=4;goto B57f866;
case 0x57f86a:c.instructions+=3;goto B57f86a;
case 0x57f86c:c.instructions+=2;goto B57f86c;
case 0x57f86d:c.instructions+=1;goto B57f86d;
case 0x57f872:goto L57f872;
case 0x57f875:c.instructions+=4;goto B57f875;
case 0x57f87b:c.instructions+=3;goto B57f87b;
case 0x57f87e:c.instructions+=2;goto B57f87e;
case 0x57f885:c.instructions+=1;goto B57f885;
case 0x57f887:goto L57f887;
case 0x57f88d:c.instructions+=1;goto B57f88d;
case 0x57f88f:goto L57f88f;
case 0x57f895:c.instructions+=1;goto B57f895;
case 0x57f897:goto L57f897;
case 0x57f89d:c.instructions+=1;goto B57f89d;
case 0x57f89f:goto L57f89f;
case 0x57f8a4:c.instructions+=1;goto B57f8a4;
case 0x57f8a9:goto L57f8a9;
case 0x57f8ac:c.instructions+=6;goto B57f8ac;
case 0x57f8b0:c.instructions+=5;goto B57f8b0;
case 0x57f8b3:c.instructions+=4;goto B57f8b3;
case 0x57f8b4:c.instructions+=3;goto B57f8b4;
case 0x57f8b9:c.instructions+=2;goto B57f8b9;
case 0x57f8bc:c.instructions+=1;goto B57f8bc;
case 0x57f8c1:goto L57f8c1;
case 0x57f8c4:c.instructions+=6;goto B57f8c4;
case 0x57f8c8:c.instructions+=5;goto B57f8c8;
case 0x57f8cb:c.instructions+=4;goto B57f8cb;
case 0x57f8cc:c.instructions+=3;goto B57f8cc;
case 0x57f8d1:c.instructions+=2;goto B57f8d1;
case 0x57f8d4:c.instructions+=1;goto B57f8d4;
case 0x57f8d9:goto L57f8d9;
case 0x57f8dc:c.instructions+=6;goto B57f8dc;
case 0x57f8e0:c.instructions+=5;goto B57f8e0;
case 0x57f8e3:c.instructions+=4;goto B57f8e3;
case 0x57f8e4:c.instructions+=3;goto B57f8e4;
case 0x57f8e9:c.instructions+=2;goto B57f8e9;
case 0x57f8ec:c.instructions+=1;goto B57f8ec;
case 0x57f8f1:goto L57f8f1;
case 0x57f8f4:c.instructions+=6;goto B57f8f4;
case 0x57f8f8:c.instructions+=5;goto B57f8f8;
case 0x57f8fb:c.instructions+=4;goto B57f8fb;
case 0x57f8fc:c.instructions+=3;goto B57f8fc;
case 0x57f901:c.instructions+=2;goto B57f901;
case 0x57f904:c.instructions+=1;goto B57f904;
case 0x57f909:goto L57f909;
case 0x57f90c:c.instructions+=5;goto B57f90c;
case 0x57f910:c.instructions+=4;goto B57f910;
case 0x57f913:c.instructions+=3;goto B57f913;
case 0x57f916:c.instructions+=2;goto B57f916;
case 0x57f917:c.instructions+=1;goto B57f917;
case 0x57f91a:goto L57f91a;
case 0x57f91d:c.instructions+=7;goto B57f91d;
case 0x57f91f:c.instructions+=6;goto B57f91f;
case 0x57f920:c.instructions+=5;goto B57f920;
case 0x57f925:c.instructions+=4;goto B57f925;
case 0x57f926:c.instructions+=3;goto B57f926;
case 0x57f929:c.instructions+=2;goto B57f929;
case 0x57f92a:c.instructions+=1;goto B57f92a;
case 0x57f92f:goto L57f92f;
case 0x57f932:c.instructions+=5;goto B57f932;
case 0x57f933:c.instructions+=4;goto B57f933;
case 0x57f934:c.instructions+=3;goto B57f934;
case 0x57f935:c.instructions+=2;goto B57f935;
case 0x57f93b:c.instructions+=1;goto B57f93b;
case 0x57f93c:goto L57f93c;
case 0x57f93f:c.instructions+=1;goto B57f93f;
case 0x57f945:goto L57f945;
case 0x57f947:c.instructions+=1;goto B57f947;
case 0x57f94c:goto L57f94c;
case 0x57f952:c.instructions+=1;goto B57f952;
case 0x57f957:goto L57f957;
case 0x57f95d:c.instructions+=2;goto B57f95d;
case 0x57f95f:c.instructions+=1;goto B57f95f;
case 0x57f964:goto L57f964;
case 0x57f968:c.instructions+=3;goto B57f968;
case 0x57f969:c.instructions+=2;goto B57f969;
case 0x57f96e:c.instructions+=1;goto B57f96e;
case 0x57f973:goto L57f973;
case 0x57f974:c.instructions+=5;goto B57f974;
case 0x57f976:c.instructions+=4;goto B57f976;
case 0x57f97a:c.instructions+=3;goto B57f97a;
case 0x57f97b:c.instructions+=2;goto B57f97b;
case 0x57f980:c.instructions+=1;goto B57f980;
case 0x57f985:goto L57f985;
case 0x57f987:c.instructions+=1;goto B57f987;
case 0x57f989:goto L57f989;
case 0x57f98c:c.instructions+=1;goto B57f98c;
case 0x57f98e:goto L57f98e;
case 0x57f990:goto L57f990;
case 0x57f991:c.instructions+=2;goto B57f991;
case 0x57f996:c.instructions+=1;goto B57f996;
case 0x57f99b:goto L57f99b;
case 0x57f9a0:c.instructions+=1;goto B57f9a0;
case 0x57f9a5:goto L57f9a5;
case 0x57f9aa:c.instructions+=1;goto B57f9aa;
case 0x57f9af:goto L57f9af;
case 0x57f9b4:c.instructions+=1;goto B57f9b4;
case 0x57f9b9:goto L57f9b9;
case 0x57f9bb:c.instructions+=2;goto B57f9bb;
case 0x57f9c0:c.instructions+=1;goto B57f9c0;
case 0x57f9c2:goto L57f9c2;
case 0x57f9c7:goto L57f9c7;
case 0x57f9c9:goto L57f9c9;
case 0x57f9ce:goto L57f9ce;
case 0x57f9d0:c.instructions+=2;goto B57f9d0;
case 0x57f9d5:c.instructions+=1;goto B57f9d5;
case 0x57f9d7:goto L57f9d7;
case 0x57f9dc:goto L57f9dc;
case 0x57f9e1:c.instructions+=1;goto B57f9e1;
case 0x57f9e6:goto L57f9e6;
case 0x57f9e7:c.instructions+=7;goto B57f9e7;
case 0x57f9e8:c.instructions+=6;goto B57f9e8;
case 0x57f9ee:c.instructions+=5;goto B57f9ee;
case 0x57f9f5:c.instructions+=4;goto B57f9f5;
case 0x57f9ff:c.instructions+=3;goto B57f9ff;
case 0x57fa00:c.instructions+=2;goto B57fa00;
case 0x57fa06:c.instructions+=1;goto B57fa06;
case 0x57fa07:goto L57fa07;
case 0x57fa0a:c.instructions+=1;goto B57fa0a;
case 0x57fa0c:goto L57fa0c;
case 0x57fa11:c.instructions+=1;goto B57fa11;
case 0x57fa16:goto L57fa16;
case 0x57fa1b:c.instructions+=2;goto B57fa1b;
case 0x57fa1d:c.instructions+=1;goto B57fa1d;
case 0x57fa23:goto L57fa23;
case 0x57fa28:c.instructions+=2;goto B57fa28;
case 0x57fa2d:c.instructions+=1;goto B57fa2d;
case 0x57fa32:goto L57fa32;
case 0x57fa35:c.instructions+=1;goto B57fa35;
case 0x57fa3b:goto L57fa3b;
case 0x57fa40:c.instructions+=1;goto B57fa40;
case 0x57fa45:goto L57fa45;
case 0x57fa47:c.instructions+=2;goto B57fa47;
case 0x57fa4c:c.instructions+=1;goto B57fa4c;
case 0x57fa4e:goto L57fa4e;
case 0x57fa53:goto L57fa53;
case 0x57fa58:c.instructions+=1;goto B57fa58;
case 0x57fa5d:goto L57fa5d;
case 0x57fa5f:goto L57fa5f;
case 0x57fa64:goto L57fa64;
case 0x57fa66:c.instructions+=1;goto B57fa66;
case 0x57fa68:goto L57fa68;
case 0x57fa6d:c.instructions+=1;goto B57fa6d;
case 0x57fa72:goto L57fa72;
case 0x57fa77:c.instructions+=1;goto B57fa77;
case 0x57fa7c:goto L57fa7c;
case 0x57fa7e:goto L57fa7e;
case 0x57fa84:c.instructions+=1;goto B57fa84;
case 0x57fa86:goto L57fa86;
case 0x57fa8b:c.instructions+=1;goto B57fa8b;
case 0x57fa90:goto L57fa90;
case 0x57fa92:c.instructions+=1;goto B57fa92;
case 0x57fa94:goto L57fa94;
case 0x57fa9a:c.instructions+=1;goto B57fa9a;
case 0x57fa9c:goto L57fa9c;
case 0x57faa1:c.instructions+=1;goto B57faa1;
case 0x57faa6:goto L57faa6;
case 0x57faab:c.instructions+=2;goto B57faab;
case 0x57faad:c.instructions+=1;goto B57faad;
case 0x57faaf:goto L57faaf;
case 0x57fab6:goto L57fab6;
case 0x57fabb:c.instructions+=3;goto B57fabb;
case 0x57fac0:c.instructions+=2;goto B57fac0;
case 0x57fac5:c.instructions+=1;goto B57fac5;
case 0x57faca:goto L57faca;
case 0x57facb:c.instructions+=4;goto B57facb;
case 0x57facc:c.instructions+=3;goto B57facc;
case 0x57facd:c.instructions+=2;goto B57facd;
case 0x57fad3:c.instructions+=1;goto B57fad3;
case 0x57fad4:goto L57fad4;
case 0x57fad7:c.instructions+=1;goto B57fad7;
case 0x57fad9:goto L57fad9;
case 0x57fade:c.instructions+=1;goto B57fade;
case 0x57fae3:goto L57fae3;
case 0x57fae8:c.instructions+=2;goto B57fae8;
case 0x57faef:c.instructions+=1;goto B57faef;
case 0x57faf4:goto L57faf4;
case 0x57faf5:c.instructions+=4;goto B57faf5;
case 0x57faf6:c.instructions+=3;goto B57faf6;
case 0x57faf7:c.instructions+=2;goto B57faf7;
case 0x57fafd:c.instructions+=1;goto B57fafd;
case 0x57fb00:goto L57fb00;
case 0x57fb02:c.instructions+=5;goto B57fb02;
case 0x57fb04:c.instructions+=4;goto B57fb04;
case 0x57fb06:c.instructions+=3;goto B57fb06;
case 0x57fb08:c.instructions+=2;goto B57fb08;
case 0x57fb0d:c.instructions+=1;goto B57fb0d;
case 0x57fb12:goto L57fb12;
case 0x57fb15:c.instructions+=4;goto B57fb15;
case 0x57fb17:c.instructions+=3;goto B57fb17;
case 0x57fb19:c.instructions+=2;goto B57fb19;
case 0x57fb1b:c.instructions+=1;goto B57fb1b;
case 0x57fb20:goto L57fb20;
case 0x57fb25:c.instructions+=2;goto B57fb25;
case 0x57fb27:c.instructions+=1;goto B57fb27;
case 0x57fb29:goto L57fb29;
case 0x57fb30:goto L57fb30;
case 0x57fb35:goto L57fb35;
case 0x57fb3a:c.instructions+=2;goto B57fb3a;
case 0x57fb3c:c.instructions+=1;goto B57fb3c;
case 0x57fb3e:goto L57fb3e;
case 0x57fb40:goto L57fb40;
case 0x57fb41:c.instructions+=7;goto B57fb41;
case 0x57fb42:c.instructions+=6;goto B57fb42;
case 0x57fb44:c.instructions+=5;goto B57fb44;
case 0x57fb46:c.instructions+=4;goto B57fb46;
case 0x57fb48:c.instructions+=3;goto B57fb48;
case 0x57fb4a:c.instructions+=2;goto B57fb4a;
case 0x57fb4f:c.instructions+=1;goto B57fb4f;
case 0x57fb54:goto L57fb54;
case 0x57fb57:c.instructions+=5;goto B57fb57;
case 0x57fb59:c.instructions+=4;goto B57fb59;
case 0x57fb5b:c.instructions+=3;goto B57fb5b;
case 0x57fb5d:c.instructions+=2;goto B57fb5d;
case 0x57fb5f:c.instructions+=1;goto B57fb5f;
case 0x57fb64:goto L57fb64;
case 0x57fb66:c.instructions+=4;goto B57fb66;
case 0x57fb6b:c.instructions+=3;goto B57fb6b;
case 0x57fb6e:c.instructions+=2;goto B57fb6e;
case 0x57fb6f:c.instructions+=1;goto B57fb6f;
case 0x57fb74:goto L57fb74;
case 0x57fb79:c.instructions+=1;goto B57fb79;
case 0x57fb7e:goto L57fb7e;
case 0x57fb80:c.instructions+=3;goto B57fb80;
case 0x57fb85:c.instructions+=2;goto B57fb85;
case 0x57fb86:c.instructions+=1;goto B57fb86;
case 0x57fb8b:goto L57fb8b;
case 0x57fb8d:c.instructions+=7;goto B57fb8d;
case 0x57fb8e:c.instructions+=6;goto B57fb8e;
case 0x57fb93:c.instructions+=5;goto B57fb93;
case 0x57fb94:c.instructions+=4;goto B57fb94;
case 0x57fb96:c.instructions+=3;goto B57fb96;
case 0x57fb9b:c.instructions+=2;goto B57fb9b;
case 0x57fb9c:c.instructions+=1;goto B57fb9c;
case 0x57fba1:goto L57fba1;
case 0x57fba6:c.instructions+=6;goto B57fba6;
case 0x57fba9:c.instructions+=5;goto B57fba9;
case 0x57fbab:c.instructions+=4;goto B57fbab;
case 0x57fbac:c.instructions+=3;goto B57fbac;
case 0x57fbb2:c.instructions+=2;goto B57fbb2;
case 0x57fbb3:c.instructions+=1;goto B57fbb3;
case 0x57fbb5:goto L57fbb5;
case 0x57fbba:goto L57fbba;
case 0x57fbbf:c.instructions+=2;goto B57fbbf;
case 0x57fbc1:c.instructions+=1;goto B57fbc1;
case 0x57fbc3:goto L57fbc3;
case 0x57fbc8:c.instructions+=2;goto B57fbc8;
case 0x57fbc9:c.instructions+=1;goto B57fbc9;
case 0x57fbce:goto L57fbce;
case 0x57fbd4:c.instructions+=5;goto B57fbd4;
case 0x57fbd6:c.instructions+=4;goto B57fbd6;
case 0x57fbd8:c.instructions+=3;goto B57fbd8;
case 0x57fbda:c.instructions+=2;goto B57fbda;
case 0x57fbdb:c.instructions+=1;goto B57fbdb;
case 0x57fbe0:goto L57fbe0;
case 0x57fbe6:c.instructions+=2;goto B57fbe6;
case 0x57fbe7:c.instructions+=1;goto B57fbe7;
case 0x57fbec:goto L57fbec;
case 0x57fbf1:goto L57fbf1;
case 0x57fbf3:c.instructions+=3;goto B57fbf3;
case 0x57fbf5:c.instructions+=2;goto B57fbf5;
case 0x57fbfa:c.instructions+=1;goto B57fbfa;
case 0x57fbff:goto L57fbff;
case 0x57fc02:c.instructions+=2;goto B57fc02;
case 0x57fc04:c.instructions+=1;goto B57fc04;
case 0x57fc06:goto L57fc06;
case 0x57fc07:c.instructions+=4;goto B57fc07;
case 0x57fc08:c.instructions+=3;goto B57fc08;
case 0x57fc09:c.instructions+=2;goto B57fc09;
case 0x57fc0e:c.instructions+=1;goto B57fc0e;
case 0x57fc13:goto L57fc13;
case 0x57fc16:goto L57fc16;
case 0x57fc1b:c.instructions+=2;goto B57fc1b;
case 0x57fc1d:c.instructions+=1;goto B57fc1d;
case 0x57fc1f:goto L57fc1f;
case 0x57fc20:goto L57fc20;
case 0x57fc25:goto L57fc25;
case 0x57fc2a:c.instructions+=2;goto B57fc2a;
case 0x57fc2c:c.instructions+=1;goto B57fc2c;
case 0x57fc2e:goto L57fc2e;
case 0x57fc30:c.instructions+=2;goto B57fc30;
case 0x57fc35:c.instructions+=1;goto B57fc35;
case 0x57fc3a:goto L57fc3a;
case 0x57fc3c:c.instructions+=2;goto B57fc3c;
case 0x57fc41:c.instructions+=1;goto B57fc41;
case 0x57fc46:goto L57fc46;
case 0x57fc49:c.instructions+=1;goto B57fc49;
case 0x57fc4e:goto L57fc4e;
case 0x57fc53:c.instructions+=6;goto B57fc53;
case 0x57fc55:c.instructions+=5;goto B57fc55;
case 0x57fc57:c.instructions+=4;goto B57fc57;
case 0x57fc59:c.instructions+=3;goto B57fc59;
case 0x57fc5b:c.instructions+=2;goto B57fc5b;
case 0x57fc5d:c.instructions+=1;goto B57fc5d;
case 0x57fc5f:goto L57fc5f;
case 0x57fc64:c.instructions+=2;goto B57fc64;
case 0x57fc65:c.instructions+=1;goto B57fc65;
case 0x57fc67:goto L57fc67;
case 0x57fc6d:c.instructions+=1;goto B57fc6d;
case 0x57fc6e:goto L57fc6e;
case 0x57fc73:goto L57fc73;
case 0x57fc76:c.instructions+=4;goto B57fc76;
case 0x57fc78:c.instructions+=3;goto B57fc78;
case 0x57fc7a:c.instructions+=2;goto B57fc7a;
case 0x57fc7c:c.instructions+=1;goto B57fc7c;
case 0x57fc81:goto L57fc81;
case 0x57fc87:c.instructions+=6;goto B57fc87;
case 0x57fc89:c.instructions+=5;goto B57fc89;
case 0x57fc8b:c.instructions+=4;goto B57fc8b;
case 0x57fc8d:c.instructions+=3;goto B57fc8d;
case 0x57fc8f:c.instructions+=2;goto B57fc8f;
case 0x57fc90:c.instructions+=1;goto B57fc90;
case 0x57fc95:goto L57fc95;
case 0x57fc98:c.instructions+=4;goto B57fc98;
case 0x57fc9a:c.instructions+=3;goto B57fc9a;
case 0x57fc9c:c.instructions+=2;goto B57fc9c;
case 0x57fc9e:c.instructions+=1;goto B57fc9e;
case 0x57fca3:goto L57fca3;
case 0x57fca8:c.instructions+=6;goto B57fca8;
case 0x57fcaa:c.instructions+=5;goto B57fcaa;
case 0x57fcac:c.instructions+=4;goto B57fcac;
case 0x57fcae:c.instructions+=3;goto B57fcae;
case 0x57fcb0:c.instructions+=2;goto B57fcb0;
case 0x57fcb1:c.instructions+=1;goto B57fcb1;
case 0x57fcb6:goto L57fcb6;
case 0x57fcb9:c.instructions+=4;goto B57fcb9;
case 0x57fcbb:c.instructions+=3;goto B57fcbb;
case 0x57fcbd:c.instructions+=2;goto B57fcbd;
case 0x57fcbf:c.instructions+=1;goto B57fcbf;
case 0x57fcc4:goto L57fcc4;
case 0x57fcca:c.instructions+=6;goto B57fcca;
case 0x57fccc:c.instructions+=5;goto B57fccc;
case 0x57fcce:c.instructions+=4;goto B57fcce;
case 0x57fcd0:c.instructions+=3;goto B57fcd0;
case 0x57fcd2:c.instructions+=2;goto B57fcd2;
case 0x57fcd3:c.instructions+=1;goto B57fcd3;
case 0x57fcd8:goto L57fcd8;
case 0x57fcdb:c.instructions+=4;goto B57fcdb;
case 0x57fcdd:c.instructions+=3;goto B57fcdd;
case 0x57fcdf:c.instructions+=2;goto B57fcdf;
case 0x57fce1:c.instructions+=1;goto B57fce1;
case 0x57fce6:goto L57fce6;
case 0x57fcec:c.instructions+=5;goto B57fcec;
case 0x57fcee:c.instructions+=4;goto B57fcee;
case 0x57fcf0:c.instructions+=3;goto B57fcf0;
case 0x57fcf2:c.instructions+=2;goto B57fcf2;
case 0x57fcf3:c.instructions+=1;goto B57fcf3;
case 0x57fcf8:goto L57fcf8;
case 0x57fcfd:c.instructions+=5;goto B57fcfd;
case 0x57fcff:c.instructions+=4;goto B57fcff;
case 0x57fd01:c.instructions+=3;goto B57fd01;
case 0x57fd03:c.instructions+=2;goto B57fd03;
case 0x57fd04:c.instructions+=1;goto B57fd04;
case 0x57fd09:goto L57fd09;
case 0x57fd0b:c.instructions+=1;goto B57fd0b;
case 0x57fd10:goto L57fd10;
case 0x57fd12:c.instructions+=1;goto B57fd12;
case 0x57fd17:goto L57fd17;
case 0x57fd1c:c.instructions+=3;goto B57fd1c;
case 0x57fd1f:c.instructions+=2;goto B57fd1f;
case 0x57fd21:c.instructions+=1;goto B57fd21;
case 0x57fd23:goto L57fd23;
case 0x57fd28:goto L57fd28;
case 0x57fd2d:c.instructions+=2;goto B57fd2d;
case 0x57fd2f:c.instructions+=1;goto B57fd2f;
case 0x57fd31:goto L57fd31;
case 0x57fd37:c.instructions+=4;goto B57fd37;
case 0x57fd3a:c.instructions+=3;goto B57fd3a;
case 0x57fd3b:c.instructions+=2;goto B57fd3b;
case 0x57fd40:c.instructions+=1;goto B57fd40;
case 0x57fd45:goto L57fd45;
case 0x57fd50:goto L57fd50;
case 0x57fd55:c.instructions+=2;goto B57fd55;
case 0x57fd57:c.instructions+=1;goto B57fd57;
case 0x57fd59:goto L57fd59;
case 0x57fd63:c.instructions+=1;goto B57fd63;
case 0x57fd65:goto L57fd65;
case 0x57fd6a:goto L57fd6a;
case 0x57fd6c:goto L57fd6c;
case 0x57fd71:c.instructions+=3;goto B57fd71;
case 0x57fd73:c.instructions+=2;goto B57fd73;
case 0x57fd75:c.instructions+=1;goto B57fd75;
case 0x57fd77:goto L57fd77;
case 0x57fd79:c.instructions+=5;goto B57fd79;
case 0x57fd7c:c.instructions+=4;goto B57fd7c;
case 0x57fd7e:c.instructions+=3;goto B57fd7e;
case 0x57fd7f:c.instructions+=2;goto B57fd7f;
case 0x57fd82:c.instructions+=1;goto B57fd82;
case 0x57fd87:goto L57fd87;
case 0x57fd8a:goto L57fd8a;
case 0x57fd94:c.instructions+=1;goto B57fd94;
case 0x57fda0:goto L57fda0;
case 0x57fda5:c.instructions+=3;goto B57fda5;
case 0x57fdab:c.instructions+=2;goto B57fdab;
case 0x57fdad:c.instructions+=1;goto B57fdad;
case 0x57fdaf:goto L57fdaf;
case 0x57fdb9:goto L57fdb9;
case 0x57fdba:c.instructions+=5;goto B57fdba;
case 0x57fdbc:c.instructions+=4;goto B57fdbc;
case 0x57fdc3:c.instructions+=3;goto B57fdc3;
case 0x57fdcd:c.instructions+=2;goto B57fdcd;
case 0x57fdd7:c.instructions+=1;goto B57fdd7;
case 0x57fddc:goto L57fddc;
case 0x57fddf:c.instructions+=1;goto B57fddf;
case 0x57fde4:goto L57fde4;
case 0x57fde6:c.instructions+=2;goto B57fde6;
case 0x57fde7:c.instructions+=1;goto B57fde7;
case 0x57fdec:goto L57fdec;
case 0x57fdef:c.instructions+=3;goto B57fdef;
case 0x57fdf2:c.instructions+=2;goto B57fdf2;
case 0x57fdf8:c.instructions+=1;goto B57fdf8;
case 0x57fdfa:goto L57fdfa;
case 0x57fdfc:c.instructions+=6;goto B57fdfc;
case 0x57fdfe:c.instructions+=5;goto B57fdfe;
case 0x57fe00:c.instructions+=4;goto B57fe00;
case 0x57fe02:c.instructions+=3;goto B57fe02;
case 0x57fe07:c.instructions+=2;goto B57fe07;
case 0x57fe0c:c.instructions+=1;goto B57fe0c;
case 0x57fe11:goto L57fe11;
case 0x57fe13:c.instructions+=2;goto B57fe13;
case 0x57fe15:c.instructions+=1;goto B57fe15;
case 0x57fe17:goto L57fe17;
case 0x57fe18:goto L57fe18;
case 0x57fe1a:c.instructions+=1;goto B57fe1a;
case 0x57fe1f:goto L57fe1f;
case 0x57fe21:c.instructions+=2;goto B57fe21;
case 0x57fe22:c.instructions+=1;goto B57fe22;
case 0x57fe27:goto L57fe27;
case 0x57fe2a:c.instructions+=2;goto B57fe2a;
case 0x57fe2f:c.instructions+=1;goto B57fe2f;
case 0x57fe31:goto L57fe31;
case 0x57fe32:c.instructions+=4;goto B57fe32;
case 0x57fe36:c.instructions+=3;goto B57fe36;
case 0x57fe3b:c.instructions+=2;goto B57fe3b;
case 0x57fe3c:c.instructions+=1;goto B57fe3c;
case 0x57fe41:goto L57fe41;
case 0x57fe45:c.instructions+=2;goto B57fe45;
case 0x57fe46:c.instructions+=1;goto B57fe46;
case 0x57fe4b:goto L57fe4b;
case 0x57fe4e:goto L57fe4e;
case 0x57fe50:c.instructions+=6;goto B57fe50;
case 0x57fe51:c.instructions+=5;goto B57fe51;
case 0x57fe53:c.instructions+=4;goto B57fe53;
case 0x57fe55:c.instructions+=3;goto B57fe55;
case 0x57fe5a:c.instructions+=2;goto B57fe5a;
case 0x57fe5f:c.instructions+=1;goto B57fe5f;
case 0x57fe64:goto L57fe64;
case 0x57fe66:c.instructions+=2;goto B57fe66;
case 0x57fe68:c.instructions+=1;goto B57fe68;
case 0x57fe6a:goto L57fe6a;
case 0x57fe6b:goto L57fe6b;
case 0x57fe70:c.instructions+=3;goto B57fe70;
case 0x57fe72:c.instructions+=2;goto B57fe72;
case 0x57fe73:c.instructions+=1;goto B57fe73;
case 0x57fe75:goto L57fe75;
case 0x57fe7a:c.instructions+=2;goto B57fe7a;
case 0x57fe7b:c.instructions+=1;goto B57fe7b;
case 0x57fe80:goto L57fe80;
case 0x57fe83:c.instructions+=2;goto B57fe83;
case 0x57fe85:c.instructions+=1;goto B57fe85;
case 0x57fe87:goto L57fe87;
case 0x57fe8c:c.instructions+=2;goto B57fe8c;
case 0x57fe8e:c.instructions+=1;goto B57fe8e;
case 0x57fe90:goto L57fe90;
case 0x57fe95:c.instructions+=2;goto B57fe95;
case 0x57fe97:c.instructions+=1;goto B57fe97;
case 0x57fe99:goto L57fe99;
case 0x57fe9c:c.instructions+=5;goto B57fe9c;
case 0x57fe9d:c.instructions+=4;goto B57fe9d;
case 0x57fea1:c.instructions+=3;goto B57fea1;
case 0x57fea6:c.instructions+=2;goto B57fea6;
case 0x57fea7:c.instructions+=1;goto B57fea7;
case 0x57feac:goto L57feac;
case 0x57feae:c.instructions+=6;goto B57feae;
case 0x57feb0:c.instructions+=5;goto B57feb0;
case 0x57feb2:c.instructions+=4;goto B57feb2;
case 0x57feb6:c.instructions+=3;goto B57feb6;
case 0x57feb8:c.instructions+=2;goto B57feb8;
case 0x57feb9:c.instructions+=1;goto B57feb9;
case 0x57febe:goto L57febe;
case 0x57fec1:c.instructions+=1;goto B57fec1;
case 0x57fec3:goto L57fec3;
case 0x57fec8:c.instructions+=6;goto B57fec8;
case 0x57feca:c.instructions+=5;goto B57feca;
case 0x57fecc:c.instructions+=4;goto B57fecc;
case 0x57fece:c.instructions+=3;goto B57fece;
case 0x57fed0:c.instructions+=2;goto B57fed0;
case 0x57fed2:c.instructions+=1;goto B57fed2;
case 0x57fed4:goto L57fed4;
case 0x57fedb:c.instructions+=2;goto B57fedb;
case 0x57fee0:c.instructions+=1;goto B57fee0;
case 0x57fee2:goto L57fee2;
case 0x57fee4:c.instructions+=3;goto B57fee4;
case 0x57fee6:c.instructions+=2;goto B57fee6;
case 0x57fee8:c.instructions+=1;goto B57fee8;
case 0x57feea:goto L57feea;
case 0x57feef:goto L57feef;
case 0x57fef4:goto L57fef4;
case 0x57fef7:goto L57fef7;
case 0x57fef9:c.instructions+=3;goto B57fef9;
case 0x57fefb:c.instructions+=2;goto B57fefb;
case 0x57ff00:c.instructions+=1;goto B57ff00;
case 0x57ff05:goto L57ff05;
case 0x57ff0b:c.instructions+=1;goto B57ff0b;
case 0x57ff10:goto L57ff10;
case 0x57ff15:c.instructions+=1;goto B57ff15;
case 0x57ff1a:goto L57ff1a;
case 0x57ff1d:c.instructions+=3;goto B57ff1d;
case 0x57ff27:c.instructions+=2;goto B57ff27;
case 0x57ff31:c.instructions+=1;goto B57ff31;
case 0x57ff36:goto L57ff36;
case 0x57ff3c:c.instructions+=3;goto B57ff3c;
case 0x57ff41:c.instructions+=2;goto B57ff41;
case 0x57ff4b:c.instructions+=1;goto B57ff4b;
case 0x57ff50:goto L57ff50;
case 0x57ff52:c.instructions+=1;goto B57ff52;
case 0x57ff57:goto L57ff57;
case 0x57ff5c:c.instructions+=1;goto B57ff5c;
case 0x57ff61:goto L57ff61;
case 0x57ff63:c.instructions+=2;goto B57ff63;
case 0x57ff68:c.instructions+=1;goto B57ff68;
case 0x57ff6d:goto L57ff6d;
case 0x57ff72:c.instructions+=4;goto B57ff72;
case 0x57ff77:c.instructions+=3;goto B57ff77;
case 0x57ff7a:c.instructions+=2;goto B57ff7a;
case 0x57ff80:c.instructions+=1;goto B57ff80;
case 0x57ff85:goto L57ff85;
case 0x57ff8a:c.instructions+=1;goto B57ff8a;
case 0x57ff8f:goto L57ff8f;
case 0x57ff92:c.instructions+=2;goto B57ff92;
case 0x57ff94:c.instructions+=1;goto B57ff94;
case 0x57ff96:goto L57ff96;
case 0x57ff98:c.instructions+=2;goto B57ff98;
case 0x57ff9d:c.instructions+=1;goto B57ff9d;
case 0x57ffa2:goto L57ffa2;
case 0x57ffa5:goto L57ffa5;
case 0x57ffa6:c.instructions+=3;goto B57ffa6;
case 0x57ffa7:c.instructions+=2;goto B57ffa7;
case 0x57ffac:c.instructions+=1;goto B57ffac;
case 0x57ffb1:goto L57ffb1;
case 0x57ffb3:c.instructions+=3;goto B57ffb3;
case 0x57ffb8:c.instructions+=2;goto B57ffb8;
case 0x57ffb9:c.instructions+=1;goto B57ffb9;
case 0x57ffbe:goto L57ffbe;
case 0x57ffc0:c.instructions+=7;goto B57ffc0;
case 0x57ffc1:c.instructions+=6;goto B57ffc1;
case 0x57ffc6:c.instructions+=5;goto B57ffc6;
case 0x57ffc7:c.instructions+=4;goto B57ffc7;
case 0x57ffc9:c.instructions+=3;goto B57ffc9;
case 0x57ffce:c.instructions+=2;goto B57ffce;
case 0x57ffcf:c.instructions+=1;goto B57ffcf;
case 0x57ffd4:goto L57ffd4;
case 0x57ffd6:c.instructions+=2;goto B57ffd6;
case 0x57ffdc:c.instructions+=1;goto B57ffdc;
case 0x57ffe1:goto L57ffe1;
case 0x57ffe3:c.instructions+=4;goto B57ffe3;
case 0x57ffe5:c.instructions+=3;goto B57ffe5;
case 0x57ffe7:c.instructions+=2;goto B57ffe7;
case 0x57ffe9:c.instructions+=1;goto B57ffe9;
case 0x57ffee:goto L57ffee;
case 0x57fff3:c.instructions+=3;goto B57fff3;
case 0x57fff6:c.instructions+=2;goto B57fff6;
case 0x57fff8:c.instructions+=1;goto B57fff8;
case 0x57fffa:goto L57fffa;
default:missing_instruction(c.pc);}
B57f000:L57f000:{c.instructions+=3;NFSU2_TR(0x57f000);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57f004:{NFSU2_TR(0x57f004);
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
B57f006:{NFSU2_TR(0x57f006);
if(r1(R+518)){{goto L57f02c;}}
}
B57f008:L57f008:{c.instructions+=1;NFSU2_TR(0x57f008);
{goto L57f010;}
}
B57f010:L57f010:{c.instructions+=3;NFSU2_TR(0x57f010);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B57f015:{NFSU2_TR(0x57f015);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f017:{NFSU2_TR(0x57f017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f025;}}
}
B57f019:L57f019:{c.instructions+=2;NFSU2_TR(0x57f019);
u8 U[14];
__builtin_memmove((U+6),gp(0x865220),4);
w1(R+512,u8((r4(U+6))<(u32(0x865220ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x865220ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x865220ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f023:{NFSU2_TR(0x57f023);
if(r1(R+518)){{goto L57f02c;}}
}
B57f025:L57f025:{c.instructions+=1;NFSU2_TR(0x57f025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f02aull));
TAIL_STATIC(0x57e800u,57e);
}
B57f02a:L57f02a:{c.instructions+=1;NFSU2_TR(0x57f02a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f010u);}goto L57f010;}
}
B57f02c:L57f02c:{c.instructions+=1;NFSU2_TR(0x57f02c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f030:L57f030:{c.instructions+=7;NFSU2_TR(0x57f030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B57f036:{NFSU2_TR(0x57f036);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f037:{NFSU2_TR(0x57f037);
u8 U[8];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57f03e:{NFSU2_TR(0x57f03e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f040:{NFSU2_TR(0x57f040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f041:{NFSU2_TR(0x57f041);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f042:{NFSU2_TR(0x57f042);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f083;}}
}
B57f044:L57f044:{c.instructions+=2;NFSU2_TR(0x57f044);
u8 U[4];
w4(U+0,u32(0x7a0ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f049:{NFSU2_TR(0x57f049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f04eull));
TAIL_STATIC(0x57d900u,57d);
}
B57f04e:L57f04e:{c.instructions+=4;NFSU2_TR(0x57f04e);
__builtin_memmove((R+28),(R+0),4);
}
B57f050:{NFSU2_TR(0x57f050);
u8 U[4];
w4(U+0,u32(0x1008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f055:{NFSU2_TR(0x57f055);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f056:{NFSU2_TR(0x57f056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f05bull));
TAIL_STATIC(0x440820u,440);
}
B57f05b:L57f05b:{c.instructions+=8;NFSU2_TR(0x57f05b);
__builtin_memmove((R+24),(R+0),4);
}
B57f05d:{NFSU2_TR(0x57f05d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f05e:{NFSU2_TR(0x57f05e);
u8 U[4];
w4(U+0,u32(0x57a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f063:{NFSU2_TR(0x57f063);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f064:{NFSU2_TR(0x57f064);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f065:{NFSU2_TR(0x57f065);
u8 U[4];
w4(U+0,u32(0x7a0ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f06a:{NFSU2_TR(0x57f06a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f06b:{NFSU2_TR(0x57f06b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f070ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B57f070:L57f070:{c.instructions+=7;NFSU2_TR(0x57f070);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B57f073:{NFSU2_TR(0x57f073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f074:{NFSU2_TR(0x57f074);
__builtin_memmove(gp(0x864f90),(R+24),4);
}
B57f07a:{NFSU2_TR(0x57f07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f07b:{NFSU2_TR(0x57f07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f07c:{NFSU2_TR(0x57f07c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f082:{NFSU2_TR(0x57f082);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f083:L57f083:{c.instructions+=2;NFSU2_TR(0x57f083);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f086:{NFSU2_TR(0x57f086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f0ac;}}
}
B57f088:L57f088:{c.instructions+=3;NFSU2_TR(0x57f088);
__builtin_memmove((R+0),gp(0x864f90),4);
}
B57f08d:{NFSU2_TR(0x57f08d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f08f:{NFSU2_TR(0x57f08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f0a3;}}
}
B57f091:L57f091:{c.instructions+=2;NFSU2_TR(0x57f091);
u8 U[4];
w4(U+0,u32(0x7a0ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f096:{NFSU2_TR(0x57f096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f09bull));
TAIL_STATIC(0x57dc20u,57d);
}
B57f09b:L57f09b:{c.instructions+=2;NFSU2_TR(0x57f09b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f09e:{NFSU2_TR(0x57f09e);
__builtin_memmove(gp(0x864f90),(R+0),4);
}
B57f0a3:L57f0a3:{c.instructions+=2;NFSU2_TR(0x57f0a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0a4:{NFSU2_TR(0x57f0a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f0a9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f000u);}goto L57f000;}
}
B57f0a9:L57f0a9:{c.instructions+=1;NFSU2_TR(0x57f0a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f0ac:L57f0ac:{c.instructions+=1;NFSU2_TR(0x57f0ac);
w4(R+24,u32(0x86658cull));
}
B57f0b1:L57f0b1:{c.instructions+=3;NFSU2_TR(0x57f0b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f0b4:{NFSU2_TR(0x57f0b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57f0b6:{NFSU2_TR(0x57f0b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f0c9;}}
}
B57f0b8:L57f0b8:{c.instructions+=5;NFSU2_TR(0x57f0b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0ba:{NFSU2_TR(0x57f0ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0bc:{NFSU2_TR(0x57f0bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0be:{NFSU2_TR(0x57f0be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0bf:{NFSU2_TR(0x57f0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f0c4ull));
TAIL_STATIC(0x4941c0u,494);
}
B57f0c4:L57f0c4:{c.instructions+=2;NFSU2_TR(0x57f0c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57f0c7:{NFSU2_TR(0x57f0c7);
{goto L57f0f8;}
}
B57f0c9:L57f0c9:{c.instructions+=2;NFSU2_TR(0x57f0c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f0cc:{NFSU2_TR(0x57f0cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f0dd;}}
}
B57f0ce:L57f0ce:{c.instructions+=4;NFSU2_TR(0x57f0ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0d0:{NFSU2_TR(0x57f0d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0d2:{NFSU2_TR(0x57f0d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0d3:{NFSU2_TR(0x57f0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f0d8ull));
TAIL_STATIC(0x4941f0u,494);
}
B57f0d8:L57f0d8:{c.instructions+=2;NFSU2_TR(0x57f0d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57f0db:{NFSU2_TR(0x57f0db);
{goto L57f0f8;}
}
B57f0dd:L57f0dd:{c.instructions+=2;NFSU2_TR(0x57f0dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f0e0:{NFSU2_TR(0x57f0e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f0ea;}}
}
B57f0e2:L57f0e2:{c.instructions+=2;NFSU2_TR(0x57f0e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0e3:{NFSU2_TR(0x57f0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f0e8ull));
TAIL_STATIC(0x48dae0u,48d);
}
B57f0e8:L57f0e8:{c.instructions+=1;NFSU2_TR(0x57f0e8);
{goto L57f0f5;}
}
B57f0ea:L57f0ea:{c.instructions+=2;NFSU2_TR(0x57f0ea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f0ed:{NFSU2_TR(0x57f0ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f0f8;}}
}
B57f0ef:L57f0ef:{c.instructions+=2;NFSU2_TR(0x57f0ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f0f0:{NFSU2_TR(0x57f0f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f0f5ull));
TAIL_STATIC(0x48dc60u,48d);
}
B57f0f5:L57f0f5:{c.instructions+=1;NFSU2_TR(0x57f0f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f0f8:L57f0f8:{c.instructions+=3;NFSU2_TR(0x57f0f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B57f0fb:{NFSU2_TR(0x57f0fb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8665b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8665b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57f101:{NFSU2_TR(0x57f101);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f0b1u);}goto L57f0b1;}}
}
B57f103:L57f103:{c.instructions+=7;NFSU2_TR(0x57f103);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f105:{NFSU2_TR(0x57f105);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f107:{NFSU2_TR(0x57f107);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f109:{NFSU2_TR(0x57f109);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f10b:{NFSU2_TR(0x57f10b);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f110:{NFSU2_TR(0x57f110);
w4(R+4,u32(0x8a2b68ull));
}
B57f115:{NFSU2_TR(0x57f115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f11aull));
TAIL_STATIC(0x61b670u,61b);
}
B57f11a:L57f11a:{c.instructions+=3;NFSU2_TR(0x57f11a);
__builtin_memmove((R+24),(R+0),4);
}
B57f11c:{NFSU2_TR(0x57f11c);
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
B57f11e:{NFSU2_TR(0x57f11e);
if(r1(R+518)){{goto L57f1c5;}}
}
B57f124:L57f124:{c.instructions+=2;NFSU2_TR(0x57f124);
__builtin_memmove((R+4),(R+24),4);
}
B57f126:{NFSU2_TR(0x57f126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f12bull));
TAIL_STATIC(0x610000u,610);
}
B57f12b:L57f12b:{c.instructions+=3;NFSU2_TR(0x57f12b);
__builtin_memmove((R+28),(R+0),4);
}
B57f12d:{NFSU2_TR(0x57f12d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f12e:{NFSU2_TR(0x57f12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f133ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57f133:L57f133:{c.instructions+=3;NFSU2_TR(0x57f133);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f136:{NFSU2_TR(0x57f136);
w1(R+512,u8((r4(R+0))<(u32(0x1e3ull))));
}
B57f13b:{NFSU2_TR(0x57f13b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57f1a5;}}
}
B57f13d:L57f13d:{c.instructions+=5;NFSU2_TR(0x57f13d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f13e:{NFSU2_TR(0x57f13e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f142:{NFSU2_TR(0x57f142);
u8 U[4];
w4(U+0,u32(0x7a0aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f147:{NFSU2_TR(0x57f147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f148:{NFSU2_TR(0x57f148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f14dull));
TAIL_STATIC(0x4400d0u,440);
}
B57f14d:L57f14d:{c.instructions+=3;NFSU2_TR(0x57f14d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57f150:{NFSU2_TR(0x57f150);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f153:{NFSU2_TR(0x57f153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f16a;}}
}
B57f155:L57f155:{c.instructions+=6;NFSU2_TR(0x57f155);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f157:{NFSU2_TR(0x57f157);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f159:{NFSU2_TR(0x57f159);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57f15d:{NFSU2_TR(0x57f15d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f15f:{NFSU2_TR(0x57f15f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f160:{NFSU2_TR(0x57f160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f165ull));
TAIL_STATIC(0x4941c0u,494);
}
B57f165:L57f165:{c.instructions+=2;NFSU2_TR(0x57f165);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57f168:{NFSU2_TR(0x57f168);
{goto L57f1a5;}
}
B57f16a:L57f16a:{c.instructions+=2;NFSU2_TR(0x57f16a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f16d:{NFSU2_TR(0x57f16d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f182;}}
}
B57f16f:L57f16f:{c.instructions+=5;NFSU2_TR(0x57f16f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f171:{NFSU2_TR(0x57f171);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f175:{NFSU2_TR(0x57f175);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f177:{NFSU2_TR(0x57f177);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f178:{NFSU2_TR(0x57f178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f17dull));
TAIL_STATIC(0x4941f0u,494);
}
B57f17d:L57f17d:{c.instructions+=2;NFSU2_TR(0x57f17d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57f180:{NFSU2_TR(0x57f180);
{goto L57f1a5;}
}
B57f182:L57f182:{c.instructions+=2;NFSU2_TR(0x57f182);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f185:{NFSU2_TR(0x57f185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f193;}}
}
B57f187:L57f187:{c.instructions+=3;NFSU2_TR(0x57f187);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f18b:{NFSU2_TR(0x57f18b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f18c:{NFSU2_TR(0x57f18c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f191ull));
TAIL_STATIC(0x48dae0u,48d);
}
B57f191:L57f191:{c.instructions+=1;NFSU2_TR(0x57f191);
{goto L57f1a2;}
}
B57f193:L57f193:{c.instructions+=2;NFSU2_TR(0x57f193);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f196:{NFSU2_TR(0x57f196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f1a5;}}
}
B57f198:L57f198:{c.instructions+=3;NFSU2_TR(0x57f198);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57f19c:{NFSU2_TR(0x57f19c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f19d:{NFSU2_TR(0x57f19d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f1a2ull));
TAIL_STATIC(0x48dc60u,48d);
}
B57f1a2:L57f1a2:{c.instructions+=1;NFSU2_TR(0x57f1a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f1a5:L57f1a5:{c.instructions+=7;NFSU2_TR(0x57f1a5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f1a7:{NFSU2_TR(0x57f1a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f1a8:{NFSU2_TR(0x57f1a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f1aa:{NFSU2_TR(0x57f1aa);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f1ac:{NFSU2_TR(0x57f1ac);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f1b1:{NFSU2_TR(0x57f1b1);
w4(R+4,u32(0x8a2b68ull));
}
B57f1b6:{NFSU2_TR(0x57f1b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f1bbull));
TAIL_STATIC(0x61b670u,61b);
}
B57f1bb:L57f1bb:{c.instructions+=3;NFSU2_TR(0x57f1bb);
__builtin_memmove((R+24),(R+0),4);
}
B57f1bd:{NFSU2_TR(0x57f1bd);
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
B57f1bf:{NFSU2_TR(0x57f1bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f124u);}goto L57f124;}}
}
B57f1c5:L57f1c5:{c.instructions+=2;NFSU2_TR(0x57f1c5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f1c8:{NFSU2_TR(0x57f1c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f1fc;}}
}
B57f1ca:L57f1ca:{c.instructions+=2;NFSU2_TR(0x57f1ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f1cc:{NFSU2_TR(0x57f1cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f1d1ull));
TAIL_STATIC(0x48d9d0u,48d);
}
B57f1d1:L57f1d1:{c.instructions+=5;NFSU2_TR(0x57f1d1);
__builtin_memmove((R+0),gp(0x864f90),4);
}
B57f1d6:{NFSU2_TR(0x57f1d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f1d9:{NFSU2_TR(0x57f1d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f1db:{NFSU2_TR(0x57f1db);
__builtin_memmove((R+8),(R+0),4);
}
B57f1dd:{NFSU2_TR(0x57f1dd);
if(r1(R+518)){{goto L57f1f2;}}
}
B57f1df:L57f1df:{c.instructions+=6;NFSU2_TR(0x57f1df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57f1e1:{NFSU2_TR(0x57f1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57f1e4:{NFSU2_TR(0x57f1e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57f1e6:{NFSU2_TR(0x57f1e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f1e7:{NFSU2_TR(0x57f1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f1ea:{NFSU2_TR(0x57f1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f1efull));
TAIL_STATIC(0x440540u,440);
}
B57f1ef:L57f1ef:{c.instructions+=1;NFSU2_TR(0x57f1ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f1f2:L57f1f2:{c.instructions+=1;NFSU2_TR(0x57f1f2);
s4(0x864f90,u32(0x0ull));
}
B57f1fc:L57f1fc:{c.instructions+=5;NFSU2_TR(0x57f1fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f1fd:{NFSU2_TR(0x57f1fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f1fe:{NFSU2_TR(0x57f1fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f1ff:{NFSU2_TR(0x57f1ff);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f205:{NFSU2_TR(0x57f205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f210:L57f210:{c.instructions+=12;NFSU2_TR(0x57f210);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f212:{NFSU2_TR(0x57f212);
u8 U[4];
w4(U+0,u32(0x778924ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f217:{NFSU2_TR(0x57f217);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57f21d:{NFSU2_TR(0x57f21d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f21e:{NFSU2_TR(0x57f21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f225:{NFSU2_TR(0x57f225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f226:{NFSU2_TR(0x57f226);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B57f22b:{NFSU2_TR(0x57f22b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f22c:{NFSU2_TR(0x57f22c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f22d:{NFSU2_TR(0x57f22d);
__builtin_memmove((R+24),(R+4),4);
}
B57f22f:{NFSU2_TR(0x57f22f);
s4(0x8654a4,u32(0x4ull));
}
B57f239:{NFSU2_TR(0x57f239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f23eull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B57f23e:L57f23e:{c.instructions+=3;NFSU2_TR(0x57f23e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f240:{NFSU2_TR(0x57f240);
__builtin_memmove(gp(0x883dac),(R+0),4);
}
B57f245:{NFSU2_TR(0x57f245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f24aull));
TAIL_STATIC(0x43e8e0u,43e);
}
B57f24a:L57f24a:{c.instructions+=2;NFSU2_TR(0x57f24a);
__builtin_memmove(gp(0x86478c),(R+0),4);
}
B57f24f:{NFSU2_TR(0x57f24f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f254ull));
TAIL_STATIC(0x43cb10u,43c);
}
B57f254:L57f254:{c.instructions+=3;NFSU2_TR(0x57f254);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f256:{NFSU2_TR(0x57f256);
__builtin_memmove(gp(0x864794),(R+0),4);
}
B57f25b:{NFSU2_TR(0x57f25b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f260ull));
TAIL_STATIC(0x43e910u,43e);
}
B57f260:L57f260:{c.instructions+=5;NFSU2_TR(0x57f260);
__builtin_memmove((R+4),gp(0x8384b0),4);
}
B57f266:{NFSU2_TR(0x57f266);
__builtin_memmove(gp(0x864790),(R+0),4);
}
B57f26b:{NFSU2_TR(0x57f26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57f26e:{NFSU2_TR(0x57f26e);
__builtin_memmove(gp(0x86479c),(R+8),4);
}
B57f274:{NFSU2_TR(0x57f274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f279ull));
TAIL_STATIC(0x488730u,488);
}
B57f279:L57f279:{c.instructions+=2;NFSU2_TR(0x57f279);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f27b:{NFSU2_TR(0x57f27b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f280ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B57f280:L57f280:{c.instructions+=5;NFSU2_TR(0x57f280);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57f283:{NFSU2_TR(0x57f283);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f287:{NFSU2_TR(0x57f287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f289:{NFSU2_TR(0x57f289);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57f291:{NFSU2_TR(0x57f291);
if(r1(R+518)){{goto L57f29c;}}
}
B57f293:L57f293:{c.instructions+=2;NFSU2_TR(0x57f293);
__builtin_memmove((R+4),(R+0),4);
}
B57f295:{NFSU2_TR(0x57f295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f29aull));
TAIL_STATIC(0x601070u,601);
}
B57f29a:L57f29a:{c.instructions+=1;NFSU2_TR(0x57f29a);
{goto L57f29e;}
}
B57f29c:L57f29c:{c.instructions+=1;NFSU2_TR(0x57f29c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57f29e:L57f29e:{c.instructions+=5;NFSU2_TR(0x57f29e);
__builtin_memmove(gp(0x8900d8),(R+0),4);
}
B57f2a3:{NFSU2_TR(0x57f2a3);
__builtin_memmove((R+4),(R+24),4);
}
B57f2a5:{NFSU2_TR(0x57f2a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57f2ad:{NFSU2_TR(0x57f2ad);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57f2b3:{NFSU2_TR(0x57f2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f2b8ull));
TAIL_STATIC(0x57dc60u,57d);
}
B57f2b8:L57f2b8:{c.instructions+=5;NFSU2_TR(0x57f2b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57f2bc:{NFSU2_TR(0x57f2bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f2bd:{NFSU2_TR(0x57f2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f2c4:{NFSU2_TR(0x57f2c4);
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
B57f2c7:{NFSU2_TR(0x57f2c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f2d0:L57f2d0:{c.instructions+=12;NFSU2_TR(0x57f2d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x248ull))));
}
B57f2d6:{NFSU2_TR(0x57f2d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f2d7:{NFSU2_TR(0x57f2d7);
__builtin_memmove((R+12),(R+4),4);
}
B57f2d9:{NFSU2_TR(0x57f2d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57f2db:{NFSU2_TR(0x57f2db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57f2dc:{NFSU2_TR(0x57f2dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f2dd:{NFSU2_TR(0x57f2dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B57f2df:{NFSU2_TR(0x57f2df);
__builtin_memmove((R+0),gp(0x865498),1);
}
B57f2e4:{NFSU2_TR(0x57f2e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f2e5:{NFSU2_TR(0x57f2e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57f2e7:{NFSU2_TR(0x57f2e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f2e9:{NFSU2_TR(0x57f2e9);
if(r1(R+518)){{goto L57f2f2;}}
}
B57f2eb:L57f2eb:{c.instructions+=1;NFSU2_TR(0x57f2eb);
s1(0x865498,u8(0x0ull));
}
B57f2f2:L57f2f2:{c.instructions+=3;NFSU2_TR(0x57f2f2);
u8 U[8];
__builtin_memmove((U+0),gp(0x865484),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f2f8:{NFSU2_TR(0x57f2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57f2fa:{NFSU2_TR(0x57f2fa);
if(r1(R+518)){{goto L57f302;}}
}
B57f2fc:L57f2fc:{c.instructions+=1;NFSU2_TR(0x57f2fc);
__builtin_memmove(gp(0x865484),(R+28),4);
}
B57f302:L57f302:{c.instructions+=6;NFSU2_TR(0x57f302);
s1(0x865498,u8(0x1ull));
}
B57f309:{NFSU2_TR(0x57f309);
s4(0x86549c,u32(0x7a0cd8ull));
}
B57f313:{NFSU2_TR(0x57f313);
__builtin_memmove(gp(0x8654a0),(R+0),4);
}
B57f318:{NFSU2_TR(0x57f318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57f31a:{NFSU2_TR(0x57f31a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f31d:{NFSU2_TR(0x57f31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f3cb;}}
}
B57f323:L57f323:{c.instructions+=1;NFSU2_TR(0x57f323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f328ull));
TAIL_STATIC(0x4c57c0u,4c5);
}
B57f328:L57f328:{c.instructions+=4;NFSU2_TR(0x57f328);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f32b:{NFSU2_TR(0x57f32b);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B57f330:{NFSU2_TR(0x57f330);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f332:{NFSU2_TR(0x57f332);
if(r1(R+518)){{goto L57f354;}}
}
B57f334:L57f334:{c.instructions+=6;NFSU2_TR(0x57f334);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f335:{NFSU2_TR(0x57f335);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f336:{NFSU2_TR(0x57f336);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f337:{NFSU2_TR(0x57f337);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f339:{NFSU2_TR(0x57f339);
u8 U[4];
w4(U+0,u32(0x7a0cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f33e:{NFSU2_TR(0x57f33e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f343ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57f343:L57f343:{c.instructions+=6;NFSU2_TR(0x57f343);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57f346:{NFSU2_TR(0x57f346);
__builtin_memmove((R+24),(R+0),4);
}
B57f348:{NFSU2_TR(0x57f348);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f349:{NFSU2_TR(0x57f349);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f34a:{NFSU2_TR(0x57f34a);
__builtin_memmove((R+4),(R+24),4);
}
B57f34c:{NFSU2_TR(0x57f34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f351ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57f351:L57f351:{c.instructions+=1;NFSU2_TR(0x57f351);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f354:L57f354:{c.instructions+=4;NFSU2_TR(0x57f354);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B57f35a:{NFSU2_TR(0x57f35a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f35c:{NFSU2_TR(0x57f35c);
w4(R+0,u32(0x7a0c9cull));
}
B57f361:{NFSU2_TR(0x57f361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f36b;}}
}
B57f363:L57f363:{c.instructions+=2;NFSU2_TR(0x57f363);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f369:{NFSU2_TR(0x57f369);
if(r1(R+518)){{goto L57f372;}}
}
B57f36b:L57f36b:{c.instructions+=2;NFSU2_TR(0x57f36b);
w4(R+0,u32(0x7a0c84ull));
}
B57f370:{NFSU2_TR(0x57f370);
{goto L57f3a1;}
}
B57f372:L57f372:{c.instructions+=3;NFSU2_TR(0x57f372);
__builtin_memmove((R+4),gp(0x89e7d9),1);
}
B57f378:{NFSU2_TR(0x57f378);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f37a:{NFSU2_TR(0x57f37a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f384;}}
}
B57f37c:L57f37c:{c.instructions+=2;NFSU2_TR(0x57f37c);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f382:{NFSU2_TR(0x57f382);
if(r1(R+518)){{goto L57f38b;}}
}
B57f384:L57f384:{c.instructions+=2;NFSU2_TR(0x57f384);
w4(R+0,u32(0x7a0c6cull));
}
B57f389:{NFSU2_TR(0x57f389);
{goto L57f3a1;}
}
B57f38b:L57f38b:{c.instructions+=2;NFSU2_TR(0x57f38b);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f391:{NFSU2_TR(0x57f391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f3a1;}}
}
B57f393:L57f393:{c.instructions+=2;NFSU2_TR(0x57f393);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f39a:{NFSU2_TR(0x57f39a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f3a1;}}
}
B57f39c:L57f39c:{c.instructions+=1;NFSU2_TR(0x57f39c);
w4(R+0,u32(0x7a0c50ull));
}
B57f3a1:L57f3a1:{c.instructions+=6;NFSU2_TR(0x57f3a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3a2:{NFSU2_TR(0x57f3a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3a3:{NFSU2_TR(0x57f3a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3a4:{NFSU2_TR(0x57f3a4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3a6:{NFSU2_TR(0x57f3a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3a7:{NFSU2_TR(0x57f3a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f3acull));
TAIL_STATIC(0x57cef0u,57c);
}
B57f3ac:L57f3ac:{c.instructions+=6;NFSU2_TR(0x57f3ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57f3af:{NFSU2_TR(0x57f3af);
__builtin_memmove((R+24),(R+0),4);
}
B57f3b1:{NFSU2_TR(0x57f3b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3b2:{NFSU2_TR(0x57f3b2);
u8 U[4];
w4(U+0,u32(0x571150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3b7:{NFSU2_TR(0x57f3b7);
__builtin_memmove((R+4),(R+24),4);
}
B57f3b9:{NFSU2_TR(0x57f3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f3beull));
TAIL_STATIC(0x57bd70u,57b);
}
B57f3be:L57f3be:{c.instructions+=6;NFSU2_TR(0x57f3be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f3bf:{NFSU2_TR(0x57f3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f3c2:{NFSU2_TR(0x57f3c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f3c3:{NFSU2_TR(0x57f3c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f3c4:{NFSU2_TR(0x57f3c4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f3ca:{NFSU2_TR(0x57f3ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f3cb:L57f3cb:{c.instructions+=2;NFSU2_TR(0x57f3cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f3ce:{NFSU2_TR(0x57f3ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f3e7;}}
}
B57f3d0:L57f3d0:{c.instructions+=4;NFSU2_TR(0x57f3d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3d1:{NFSU2_TR(0x57f3d1);
u8 U[4];
w4(U+0,u32(0x571150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f3d6:{NFSU2_TR(0x57f3d6);
__builtin_memmove((R+4),(R+12),4);
}
B57f3d8:{NFSU2_TR(0x57f3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f3ddull));
TAIL_STATIC(0x577f60u,577);
}
B57f3dd:L57f3dd:{c.instructions+=5;NFSU2_TR(0x57f3dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f3de:{NFSU2_TR(0x57f3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f3df:{NFSU2_TR(0x57f3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f3e0:{NFSU2_TR(0x57f3e0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f3e6:{NFSU2_TR(0x57f3e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f3e7:L57f3e7:{c.instructions+=2;NFSU2_TR(0x57f3e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f3ea:{NFSU2_TR(0x57f3ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f5b2;}}
}
B57f3f0:L57f3f0:{c.instructions+=7;NFSU2_TR(0x57f3f0);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B57f3f5:{NFSU2_TR(0x57f3f5);
__builtin_memmove((R+28),(R+0),4);
}
B57f3f7:{NFSU2_TR(0x57f3f7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B57f3f8:{NFSU2_TR(0x57f3f8);
w4(R+4,u32(0x3e8ull));
}
B57f3fd:{NFSU2_TR(0x57f3fd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57f3fd);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x57f3fd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B57f3ff:{NFSU2_TR(0x57f3ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f401:{NFSU2_TR(0x57f401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f419;}}
}
B57f403:L57f403:{c.instructions+=7;NFSU2_TR(0x57f403);
__builtin_memmove((R+8),gp(0x883dac),4);
}
B57f409:{NFSU2_TR(0x57f409);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B57f40c:{NFSU2_TR(0x57f40c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f40d:{NFSU2_TR(0x57f40d);
u8 U[4];
w4(U+0,u32(0x7a0c24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f412:{NFSU2_TR(0x57f412);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f416:{NFSU2_TR(0x57f416);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f417:{NFSU2_TR(0x57f417);
{goto L57f42d;}
}
B57f419:L57f419:{c.instructions+=6;NFSU2_TR(0x57f419);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B57f41f:{NFSU2_TR(0x57f41f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B57f422:{NFSU2_TR(0x57f422);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f423:{NFSU2_TR(0x57f423);
u8 U[4];
w4(U+0,u32(0x7a0bfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f428:{NFSU2_TR(0x57f428);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f42c:{NFSU2_TR(0x57f42c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f42d:L57f42d:{c.instructions+=1;NFSU2_TR(0x57f42d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f432ull));
TAIL_STATIC(0x4400d0u,440);
}
B57f432:L57f432:{c.instructions+=8;NFSU2_TR(0x57f432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57f435:{NFSU2_TR(0x57f435);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f437:{NFSU2_TR(0x57f437);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f439:{NFSU2_TR(0x57f439);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f43b:{NFSU2_TR(0x57f43b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f43f:{NFSU2_TR(0x57f43f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f441:{NFSU2_TR(0x57f441);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f442:{NFSU2_TR(0x57f442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f447ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57f447:L57f447:{c.instructions+=6;NFSU2_TR(0x57f447);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57f44a:{NFSU2_TR(0x57f44a);
__builtin_memmove((R+24),(R+0),4);
}
B57f44c:{NFSU2_TR(0x57f44c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f44e:{NFSU2_TR(0x57f44e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f450:{NFSU2_TR(0x57f450);
__builtin_memmove((R+4),(R+24),4);
}
B57f452:{NFSU2_TR(0x57f452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f457ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57f457:L57f457:{c.instructions+=9;NFSU2_TR(0x57f457);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f45a:{NFSU2_TR(0x57f45a);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B57f460:{NFSU2_TR(0x57f460);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f461:{NFSU2_TR(0x57f461);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B57f464:{NFSU2_TR(0x57f464);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f465:{NFSU2_TR(0x57f465);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f469:{NFSU2_TR(0x57f469);
u8 U[4];
w4(U+0,u32(0x7a0be0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f46e:{NFSU2_TR(0x57f46e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f46f:{NFSU2_TR(0x57f46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f474ull));
TAIL_STATIC(0x4400d0u,440);
}
B57f474:L57f474:{c.instructions+=4;NFSU2_TR(0x57f474);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B57f479:{NFSU2_TR(0x57f479);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57f47c:{NFSU2_TR(0x57f47c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f47e:{NFSU2_TR(0x57f47e);
if(r1(R+518)){{goto L57f4b0;}}
}
B57f480:L57f480:{c.instructions+=3;NFSU2_TR(0x57f480);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f484:{NFSU2_TR(0x57f484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f485:{NFSU2_TR(0x57f485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f48aull));
TAIL_STATIC(0x57cac0u,57c);
}
B57f48a:L57f48a:{c.instructions+=3;NFSU2_TR(0x57f48a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f48d:{NFSU2_TR(0x57f48d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f48f:{NFSU2_TR(0x57f48f);
if(r1(R+518)){{goto L57f4b0;}}
}
B57f491:L57f491:{c.instructions+=8;NFSU2_TR(0x57f491);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B57f497:{NFSU2_TR(0x57f497);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f498:{NFSU2_TR(0x57f498);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B57f49b:{NFSU2_TR(0x57f49b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f49c:{NFSU2_TR(0x57f49c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f4a0:{NFSU2_TR(0x57f4a0);
u8 U[4];
w4(U+0,u32(0x7a0be0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4a5:{NFSU2_TR(0x57f4a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4a6:{NFSU2_TR(0x57f4a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f4abull));
TAIL_STATIC(0x4400d0u,440);
}
B57f4ab:L57f4ab:{c.instructions+=2;NFSU2_TR(0x57f4ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57f4ae:{NFSU2_TR(0x57f4ae);
{goto L57f4cb;}
}
B57f4b0:L57f4b0:{c.instructions+=7;NFSU2_TR(0x57f4b0);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B57f4b5:{NFSU2_TR(0x57f4b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B57f4b8:{NFSU2_TR(0x57f4b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4b9:{NFSU2_TR(0x57f4b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57f4bd:{NFSU2_TR(0x57f4bd);
u8 U[4];
w4(U+0,u32(0x7a0bbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4c2:{NFSU2_TR(0x57f4c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4c3:{NFSU2_TR(0x57f4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f4c8ull));
TAIL_STATIC(0x4400d0u,440);
}
B57f4c8:L57f4c8:{c.instructions+=1;NFSU2_TR(0x57f4c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57f4cb:L57f4cb:{c.instructions+=7;NFSU2_TR(0x57f4cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4cd:{NFSU2_TR(0x57f4cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4cf:{NFSU2_TR(0x57f4cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4d1:{NFSU2_TR(0x57f4d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f4d5:{NFSU2_TR(0x57f4d5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4d7:{NFSU2_TR(0x57f4d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4d8:{NFSU2_TR(0x57f4d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f4ddull));
TAIL_STATIC(0x57cef0u,57c);
}
B57f4dd:L57f4dd:{c.instructions+=6;NFSU2_TR(0x57f4dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57f4e0:{NFSU2_TR(0x57f4e0);
__builtin_memmove((R+24),(R+0),4);
}
B57f4e2:{NFSU2_TR(0x57f4e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4e4:{NFSU2_TR(0x57f4e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f4e6:{NFSU2_TR(0x57f4e6);
__builtin_memmove((R+4),(R+24),4);
}
B57f4e8:{NFSU2_TR(0x57f4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f4edull));
TAIL_STATIC(0x57bd70u,57b);
}
B57f4ed:L57f4ed:{c.instructions+=4;NFSU2_TR(0x57f4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f4f0:{NFSU2_TR(0x57f4f0);
__builtin_memmove((R+0),gp(0x88a330),4);
}
B57f4f5:{NFSU2_TR(0x57f4f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f4f7:{NFSU2_TR(0x57f4f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f5a1;}}
}
B57f4fd:L57f4fd:{c.instructions+=3;NFSU2_TR(0x57f4fd);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B57f502:{NFSU2_TR(0x57f502);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f504:{NFSU2_TR(0x57f504);
if(r1(R+518)){{goto L57f55e;}}
}
B57f506:L57f506:{c.instructions+=2;NFSU2_TR(0x57f506);
w4(R+4,u32(0x83a9d0ull));
}
B57f50b:{NFSU2_TR(0x57f50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f510ull));
TAIL_STATIC(0x457ba0u,457);
}
B57f510:L57f510:{c.instructions+=2;NFSU2_TR(0x57f510);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f512:{NFSU2_TR(0x57f512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f55e;}}
}
B57f514:L57f514:{c.instructions+=2;NFSU2_TR(0x57f514);
w4(R+4,u32(0x83a9d0ull));
}
B57f519:{NFSU2_TR(0x57f519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f51eull));
TAIL_STATIC(0x4ae8d0u,4ae);
}
B57f51e:L57f51e:{c.instructions+=2;NFSU2_TR(0x57f51e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f520:{NFSU2_TR(0x57f520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f55e;}}
}
B57f522:L57f522:{c.instructions+=4;NFSU2_TR(0x57f522);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B57f527:{NFSU2_TR(0x57f527);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f529:{NFSU2_TR(0x57f529);
w4(R+0,u32(0x7a0bb8ull));
}
B57f52e:{NFSU2_TR(0x57f52e);
if(r1(R+518)){{goto L57f535;}}
}
B57f530:L57f530:{c.instructions+=1;NFSU2_TR(0x57f530);
w4(R+0,u32(0x7a0bb4ull));
}
B57f535:L57f535:{c.instructions+=9;NFSU2_TR(0x57f535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f536:{NFSU2_TR(0x57f536);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B57f53b:{NFSU2_TR(0x57f53b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f53c:{NFSU2_TR(0x57f53c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B57f53f:{NFSU2_TR(0x57f53f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f540:{NFSU2_TR(0x57f540);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57f544:{NFSU2_TR(0x57f544);
u8 U[4];
w4(U+0,u32(0x7a0b94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f549:{NFSU2_TR(0x57f549);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f54a:{NFSU2_TR(0x57f54a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f54full));
TAIL_STATIC(0x4400d0u,440);
}
B57f54f:L57f54f:{c.instructions+=3;NFSU2_TR(0x57f54f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f553:{NFSU2_TR(0x57f553);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f554:{NFSU2_TR(0x57f554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f559ull));
TAIL_STATIC(0x57cac0u,57c);
}
B57f559:L57f559:{c.instructions+=2;NFSU2_TR(0x57f559);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57f55c:{NFSU2_TR(0x57f55c);
{goto L57f579;}
}
B57f55e:L57f55e:{c.instructions+=7;NFSU2_TR(0x57f55e);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B57f563:{NFSU2_TR(0x57f563);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B57f566:{NFSU2_TR(0x57f566);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f567:{NFSU2_TR(0x57f567);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57f56b:{NFSU2_TR(0x57f56b);
u8 U[4];
w4(U+0,u32(0x7a0b70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f570:{NFSU2_TR(0x57f570);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f571:{NFSU2_TR(0x57f571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f576ull));
TAIL_STATIC(0x4400d0u,440);
}
B57f576:L57f576:{c.instructions+=1;NFSU2_TR(0x57f576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57f579:L57f579:{c.instructions+=9;NFSU2_TR(0x57f579);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f57b:{NFSU2_TR(0x57f57b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f57d:{NFSU2_TR(0x57f57d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f57e:{NFSU2_TR(0x57f57e);
u8 U[4];
w4(U+0,u32(0x571150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f583:{NFSU2_TR(0x57f583);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f585:{NFSU2_TR(0x57f585);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f589:{NFSU2_TR(0x57f589);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f58b:{NFSU2_TR(0x57f58b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f58c:{NFSU2_TR(0x57f58c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f591ull));
TAIL_STATIC(0x57cf70u,57c);
}
B57f591:L57f591:{c.instructions+=7;NFSU2_TR(0x57f591);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B57f594:{NFSU2_TR(0x57f594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f595:{NFSU2_TR(0x57f595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f596:{NFSU2_TR(0x57f596);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f599:{NFSU2_TR(0x57f599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f59a:{NFSU2_TR(0x57f59a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f5a0:{NFSU2_TR(0x57f5a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f5a1:L57f5a1:{c.instructions+=6;NFSU2_TR(0x57f5a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f5a2:{NFSU2_TR(0x57f5a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f5a3:{NFSU2_TR(0x57f5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57f5aa:{NFSU2_TR(0x57f5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f5ab:{NFSU2_TR(0x57f5ab);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f5b1:{NFSU2_TR(0x57f5b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f5b2:L57f5b2:{c.instructions+=2;NFSU2_TR(0x57f5b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f5b5:{NFSU2_TR(0x57f5b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f71d;}}
}
B57f5bb:L57f5bb:{c.instructions+=9;NFSU2_TR(0x57f5bb);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B57f5c1:{NFSU2_TR(0x57f5c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57f5c3:{NFSU2_TR(0x57f5c3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f5c6:{NFSU2_TR(0x57f5c6);
__builtin_memmove((R+0),(R+518),1);
}
B57f5c9:{NFSU2_TR(0x57f5c9);
w4(R+4,u32(0x8a3288ull));
}
B57f5ce:{NFSU2_TR(0x57f5ce);
s4(0x8654a4,u32(0x5ull));
}
B57f5d8:{NFSU2_TR(0x57f5d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f5d9:{NFSU2_TR(0x57f5d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f5db:{NFSU2_TR(0x57f5db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f5e0ull));
TAIL_STATIC(0x610700u,610);
}
B57f5e0:L57f5e0:{c.instructions+=2;NFSU2_TR(0x57f5e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f5e2:{NFSU2_TR(0x57f5e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f5e7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f030u);}goto L57f030;}
}
B57f5e7:L57f5e7:{c.instructions+=3;NFSU2_TR(0x57f5e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f5ea:{NFSU2_TR(0x57f5ea);
w4(R+24,u32(0x86658cull));
}
B57f5ef:{NFSU2_TR(0x57f5ef);
}
B57f5f0:L57f5f0:{c.instructions+=3;NFSU2_TR(0x57f5f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57f5f2:{NFSU2_TR(0x57f5f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f5f3:{NFSU2_TR(0x57f5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f5f8ull));
TAIL_STATIC(0x48dc60u,48d);
}
B57f5f8:L57f5f8:{c.instructions+=4;NFSU2_TR(0x57f5f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B57f5fb:{NFSU2_TR(0x57f5fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f5fe:{NFSU2_TR(0x57f5fe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8665b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8665b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57f604:{NFSU2_TR(0x57f604);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f5f0u);}goto L57f5f0;}}
}
B57f606:L57f606:{c.instructions+=7;NFSU2_TR(0x57f606);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f608:{NFSU2_TR(0x57f608);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f609:{NFSU2_TR(0x57f609);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f60a:{NFSU2_TR(0x57f60a);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f60c:{NFSU2_TR(0x57f60c);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f611:{NFSU2_TR(0x57f611);
w4(R+4,u32(0x8a2b68ull));
}
B57f616:{NFSU2_TR(0x57f616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f61bull));
TAIL_STATIC(0x61b670u,61b);
}
B57f61b:L57f61b:{c.instructions+=3;NFSU2_TR(0x57f61b);
__builtin_memmove((R+24),(R+0),4);
}
B57f61d:{NFSU2_TR(0x57f61d);
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
B57f61f:{NFSU2_TR(0x57f61f);
if(r1(R+518)){{goto L57f673;}}
}
B57f621:L57f621:{c.instructions+=2;NFSU2_TR(0x57f621);
__builtin_memmove((R+4),(R+24),4);
}
B57f623:{NFSU2_TR(0x57f623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f628ull));
TAIL_STATIC(0x610000u,610);
}
B57f628:L57f628:{c.instructions+=3;NFSU2_TR(0x57f628);
__builtin_memmove((R+28),(R+0),4);
}
B57f62a:{NFSU2_TR(0x57f62a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f62b:{NFSU2_TR(0x57f62b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f630ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57f630:L57f630:{c.instructions+=3;NFSU2_TR(0x57f630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f633:{NFSU2_TR(0x57f633);
w1(R+512,u8((r4(R+0))<(u32(0x1e3ull))));
}
B57f638:{NFSU2_TR(0x57f638);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57f657;}}
}
B57f63a:L57f63a:{c.instructions+=5;NFSU2_TR(0x57f63a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f63b:{NFSU2_TR(0x57f63b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f63f:{NFSU2_TR(0x57f63f);
u8 U[4];
w4(U+0,u32(0x7a0aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f644:{NFSU2_TR(0x57f644);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f645:{NFSU2_TR(0x57f645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f64aull));
TAIL_STATIC(0x4400d0u,440);
}
B57f64a:L57f64a:{c.instructions+=3;NFSU2_TR(0x57f64a);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f64e:{NFSU2_TR(0x57f64e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f64f:{NFSU2_TR(0x57f64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f654ull));
TAIL_STATIC(0x48dc60u,48d);
}
B57f654:L57f654:{c.instructions+=1;NFSU2_TR(0x57f654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57f657:L57f657:{c.instructions+=7;NFSU2_TR(0x57f657);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f659:{NFSU2_TR(0x57f659);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f65a:{NFSU2_TR(0x57f65a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f65c:{NFSU2_TR(0x57f65c);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f65e:{NFSU2_TR(0x57f65e);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f663:{NFSU2_TR(0x57f663);
w4(R+4,u32(0x8a2b68ull));
}
B57f668:{NFSU2_TR(0x57f668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f66dull));
TAIL_STATIC(0x61b670u,61b);
}
B57f66d:L57f66d:{c.instructions+=3;NFSU2_TR(0x57f66d);
__builtin_memmove((R+24),(R+0),4);
}
B57f66f:{NFSU2_TR(0x57f66f);
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
B57f671:{NFSU2_TR(0x57f671);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f621u);}goto L57f621;}}
}
B57f673:L57f673:{c.instructions+=4;NFSU2_TR(0x57f673);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B57f678:{NFSU2_TR(0x57f678);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57f67a:{NFSU2_TR(0x57f67a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f67c:{NFSU2_TR(0x57f67c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57f6f2;}}
}
B57f67e:L57f67e:{c.instructions+=1;NFSU2_TR(0x57f67e);
__builtin_memmove((R+28),(R+28),4);
}
B57f680:L57f680:{c.instructions+=3;NFSU2_TR(0x57f680);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f681:{NFSU2_TR(0x57f681);
w4(R+4,u32(0x89e7a0ull));
}
B57f686:{NFSU2_TR(0x57f686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f68bull));
TAIL_STATIC(0x5ed900u,5ed);
}
B57f68b:L57f68b:{c.instructions+=4;NFSU2_TR(0x57f68b);
__builtin_memmove((R+24),(R+0),4);
}
B57f68d:{NFSU2_TR(0x57f68d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57f690:{NFSU2_TR(0x57f690);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f692:{NFSU2_TR(0x57f692);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f6e8;}}
}
B57f694:L57f694:{c.instructions+=6;NFSU2_TR(0x57f694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57f697:{NFSU2_TR(0x57f697);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B57f69c:{NFSU2_TR(0x57f69c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57f6a2:{NFSU2_TR(0x57f6a2);
u8 U[24];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B57f6aa:{NFSU2_TR(0x57f6aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57f6ad:{NFSU2_TR(0x57f6ad);
if(r1(R+518)){{goto L57f6e8;}}
}
B57f6af:L57f6af:{c.instructions+=6;NFSU2_TR(0x57f6af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57f6b2:{NFSU2_TR(0x57f6b2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57f6b4:{NFSU2_TR(0x57f6b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f6b7:{NFSU2_TR(0x57f6b7);
__builtin_memmove((R+4),(R+518),1);
}
B57f6ba:{NFSU2_TR(0x57f6ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f6bd:{NFSU2_TR(0x57f6bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f6cf;}}
}
B57f6bf:L57f6bf:{c.instructions+=3;NFSU2_TR(0x57f6bf);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B57f6c4:{NFSU2_TR(0x57f6c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57f6c6:{NFSU2_TR(0x57f6c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f6cf;}}
}
B57f6c8:L57f6c8:{c.instructions+=2;NFSU2_TR(0x57f6c8);
w4(R+0,u32(0x1ull));
}
B57f6cd:{NFSU2_TR(0x57f6cd);
{goto L57f6d1;}
}
B57f6cf:L57f6cf:{c.instructions+=1;NFSU2_TR(0x57f6cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57f6d1:L57f6d1:{c.instructions+=5;NFSU2_TR(0x57f6d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f6d2:{NFSU2_TR(0x57f6d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f6d3:{NFSU2_TR(0x57f6d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f6d4:{NFSU2_TR(0x57f6d4);
w4(R+4,u32(0x8a3288ull));
}
B57f6d9:{NFSU2_TR(0x57f6d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f6deull));
TAIL_STATIC(0x63bc70u,63b);
}
B57f6de:L57f6de:{c.instructions+=2;NFSU2_TR(0x57f6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f6e4:{NFSU2_TR(0x57f6e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57f6e8:L57f6e8:{c.instructions+=4;NFSU2_TR(0x57f6e8);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B57f6ed:{NFSU2_TR(0x57f6ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57f6ee:{NFSU2_TR(0x57f6ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57f6f0:{NFSU2_TR(0x57f6f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f680u);}goto L57f680;}}
}
B57f6f2:L57f6f2:{c.instructions+=4;NFSU2_TR(0x57f6f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f6f4:{NFSU2_TR(0x57f6f4);
u8 U[4];
w4(U+0,u32(0x1f4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f6f9:{NFSU2_TR(0x57f6f9);
w4(R+4,u32(0x88eb00ull));
}
B57f6fe:{NFSU2_TR(0x57f6fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f703ull));
TAIL_STATIC(0x5e8560u,5e8);
}
B57f703:L57f703:{c.instructions+=4;NFSU2_TR(0x57f703);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f704:{NFSU2_TR(0x57f704);
u8 U[4];
w4(U+0,u32(0x571150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f709:{NFSU2_TR(0x57f709);
w4(R+4,u32(0x8a3288ull));
}
B57f70e:{NFSU2_TR(0x57f70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f713ull));
TAIL_STATIC(0x63bcd0u,63b);
}
B57f713:L57f713:{c.instructions+=5;NFSU2_TR(0x57f713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f714:{NFSU2_TR(0x57f714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f715:{NFSU2_TR(0x57f715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f716:{NFSU2_TR(0x57f716);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f71c:{NFSU2_TR(0x57f71c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f71d:L57f71d:{c.instructions+=2;NFSU2_TR(0x57f71d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f720:{NFSU2_TR(0x57f720);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f93c;}}
}
B57f726:L57f726:{c.instructions+=2;NFSU2_TR(0x57f726);
w4(R+24,u32(0x86658cull));
}
B57f72b:{NFSU2_TR(0x57f72b);
{goto L57f730;}
}
B57f730:L57f730:{c.instructions+=3;NFSU2_TR(0x57f730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57f732:{NFSU2_TR(0x57f732);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f733:{NFSU2_TR(0x57f733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f738ull));
TAIL_STATIC(0x48dae0u,48d);
}
B57f738:L57f738:{c.instructions+=4;NFSU2_TR(0x57f738);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B57f73b:{NFSU2_TR(0x57f73b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f73e:{NFSU2_TR(0x57f73e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8665b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8665b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57f744:{NFSU2_TR(0x57f744);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f730u);}goto L57f730;}}
}
B57f746:L57f746:{c.instructions+=7;NFSU2_TR(0x57f746);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f748:{NFSU2_TR(0x57f748);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f749:{NFSU2_TR(0x57f749);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f74a:{NFSU2_TR(0x57f74a);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f74c:{NFSU2_TR(0x57f74c);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f751:{NFSU2_TR(0x57f751);
w4(R+4,u32(0x8a2b68ull));
}
B57f756:{NFSU2_TR(0x57f756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f75bull));
TAIL_STATIC(0x61b670u,61b);
}
B57f75b:L57f75b:{c.instructions+=3;NFSU2_TR(0x57f75b);
__builtin_memmove((R+24),(R+0),4);
}
B57f75d:{NFSU2_TR(0x57f75d);
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
B57f75f:{NFSU2_TR(0x57f75f);
if(r1(R+518)){{goto L57f7b3;}}
}
B57f761:L57f761:{c.instructions+=2;NFSU2_TR(0x57f761);
__builtin_memmove((R+4),(R+24),4);
}
B57f763:{NFSU2_TR(0x57f763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f768ull));
TAIL_STATIC(0x610000u,610);
}
B57f768:L57f768:{c.instructions+=3;NFSU2_TR(0x57f768);
__builtin_memmove((R+28),(R+0),4);
}
B57f76a:{NFSU2_TR(0x57f76a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f76b:{NFSU2_TR(0x57f76b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f770ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57f770:L57f770:{c.instructions+=3;NFSU2_TR(0x57f770);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f773:{NFSU2_TR(0x57f773);
w1(R+512,u8((r4(R+0))<(u32(0x1e3ull))));
}
B57f778:{NFSU2_TR(0x57f778);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57f797;}}
}
B57f77a:L57f77a:{c.instructions+=5;NFSU2_TR(0x57f77a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f77b:{NFSU2_TR(0x57f77b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f77f:{NFSU2_TR(0x57f77f);
u8 U[4];
w4(U+0,u32(0x7a0aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f784:{NFSU2_TR(0x57f784);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f785:{NFSU2_TR(0x57f785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f78aull));
TAIL_STATIC(0x4400d0u,440);
}
B57f78a:L57f78a:{c.instructions+=3;NFSU2_TR(0x57f78a);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f78e:{NFSU2_TR(0x57f78e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f78f:{NFSU2_TR(0x57f78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f794ull));
TAIL_STATIC(0x48dae0u,48d);
}
B57f794:L57f794:{c.instructions+=1;NFSU2_TR(0x57f794);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57f797:L57f797:{c.instructions+=7;NFSU2_TR(0x57f797);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f799:{NFSU2_TR(0x57f799);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f79a:{NFSU2_TR(0x57f79a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f79c:{NFSU2_TR(0x57f79c);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f79e:{NFSU2_TR(0x57f79e);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7a3:{NFSU2_TR(0x57f7a3);
w4(R+4,u32(0x8a2b68ull));
}
B57f7a8:{NFSU2_TR(0x57f7a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f7adull));
TAIL_STATIC(0x61b670u,61b);
}
B57f7ad:L57f7ad:{c.instructions+=3;NFSU2_TR(0x57f7ad);
__builtin_memmove((R+24),(R+0),4);
}
B57f7af:{NFSU2_TR(0x57f7af);
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
B57f7b1:{NFSU2_TR(0x57f7b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f761u);}goto L57f761;}}
}
B57f7b3:L57f7b3:{c.instructions+=1;NFSU2_TR(0x57f7b3);
w4(R+24,u32(0x86658cull));
}
B57f7b8:L57f7b8:{c.instructions+=5;NFSU2_TR(0x57f7b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57f7ba:{NFSU2_TR(0x57f7ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7bc:{NFSU2_TR(0x57f7bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7be:{NFSU2_TR(0x57f7be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7bf:{NFSU2_TR(0x57f7bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f7c4ull));
TAIL_STATIC(0x4941f0u,494);
}
B57f7c4:L57f7c4:{c.instructions+=4;NFSU2_TR(0x57f7c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B57f7c7:{NFSU2_TR(0x57f7c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57f7ca:{NFSU2_TR(0x57f7ca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8665b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8665b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57f7d0:{NFSU2_TR(0x57f7d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f7b8u);}goto L57f7b8;}}
}
B57f7d2:L57f7d2:{c.instructions+=7;NFSU2_TR(0x57f7d2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7d4:{NFSU2_TR(0x57f7d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7d6:{NFSU2_TR(0x57f7d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7d8:{NFSU2_TR(0x57f7d8);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7da:{NFSU2_TR(0x57f7da);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7df:{NFSU2_TR(0x57f7df);
w4(R+4,u32(0x8a2b68ull));
}
B57f7e4:{NFSU2_TR(0x57f7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f7e9ull));
TAIL_STATIC(0x61b670u,61b);
}
B57f7e9:L57f7e9:{c.instructions+=3;NFSU2_TR(0x57f7e9);
__builtin_memmove((R+24),(R+0),4);
}
B57f7eb:{NFSU2_TR(0x57f7eb);
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
B57f7ed:{NFSU2_TR(0x57f7ed);
if(r1(R+518)){{goto L57f846;}}
}
B57f7ef:L57f7ef:{c.instructions+=1;NFSU2_TR(0x57f7ef);
}
B57f7f0:L57f7f0:{c.instructions+=2;NFSU2_TR(0x57f7f0);
__builtin_memmove((R+4),(R+24),4);
}
B57f7f2:{NFSU2_TR(0x57f7f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f7f7ull));
TAIL_STATIC(0x610000u,610);
}
B57f7f7:L57f7f7:{c.instructions+=3;NFSU2_TR(0x57f7f7);
__builtin_memmove((R+28),(R+0),4);
}
B57f7f9:{NFSU2_TR(0x57f7f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f7fa:{NFSU2_TR(0x57f7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f7ffull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57f7ff:L57f7ff:{c.instructions+=3;NFSU2_TR(0x57f7ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57f802:{NFSU2_TR(0x57f802);
w1(R+512,u8((r4(R+0))<(u32(0x1e3ull))));
}
B57f807:{NFSU2_TR(0x57f807);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57f82a;}}
}
B57f809:L57f809:{c.instructions+=5;NFSU2_TR(0x57f809);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f80a:{NFSU2_TR(0x57f80a);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f80e:{NFSU2_TR(0x57f80e);
u8 U[4];
w4(U+0,u32(0x7a0aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f813:{NFSU2_TR(0x57f813);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f814:{NFSU2_TR(0x57f814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f819ull));
TAIL_STATIC(0x4400d0u,440);
}
B57f819:L57f819:{c.instructions+=5;NFSU2_TR(0x57f819);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f81b:{NFSU2_TR(0x57f81b);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f81f:{NFSU2_TR(0x57f81f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f821:{NFSU2_TR(0x57f821);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f822:{NFSU2_TR(0x57f822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f827ull));
TAIL_STATIC(0x4941f0u,494);
}
B57f827:L57f827:{c.instructions+=1;NFSU2_TR(0x57f827);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57f82a:L57f82a:{c.instructions+=7;NFSU2_TR(0x57f82a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f82c:{NFSU2_TR(0x57f82c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f82d:{NFSU2_TR(0x57f82d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f82f:{NFSU2_TR(0x57f82f);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f831:{NFSU2_TR(0x57f831);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f836:{NFSU2_TR(0x57f836);
w4(R+4,u32(0x8a2b68ull));
}
B57f83b:{NFSU2_TR(0x57f83b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f840ull));
TAIL_STATIC(0x61b670u,61b);
}
B57f840:L57f840:{c.instructions+=3;NFSU2_TR(0x57f840);
__builtin_memmove((R+24),(R+0),4);
}
B57f842:{NFSU2_TR(0x57f842);
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
B57f844:{NFSU2_TR(0x57f844);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f7f0u);}goto L57f7f0;}}
}
B57f846:L57f846:{c.instructions+=6;NFSU2_TR(0x57f846);
__builtin_memmove((R+24),gp(0x89e7a0),4);
}
B57f84c:{NFSU2_TR(0x57f84c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f84d:{NFSU2_TR(0x57f84d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57f851:{NFSU2_TR(0x57f851);
u8 U[4];
w4(U+0,u32(0x791864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f856:{NFSU2_TR(0x57f856);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f857:{NFSU2_TR(0x57f857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f85cull));
TAIL_STATIC(0x4400d0u,440);
}
B57f85c:L57f85c:{c.instructions+=9;NFSU2_TR(0x57f85c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f85e:{NFSU2_TR(0x57f85e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f860:{NFSU2_TR(0x57f860);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f862:{NFSU2_TR(0x57f862);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f864:{NFSU2_TR(0x57f864);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f866:{NFSU2_TR(0x57f866);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57f86a:{NFSU2_TR(0x57f86a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f86c:{NFSU2_TR(0x57f86c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f86d:{NFSU2_TR(0x57f86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f872ull));
TAIL_STATIC(0x57cf70u,57c);
}
B57f872:L57f872:{c.instructions+=5;NFSU2_TR(0x57f872);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B57f875:{NFSU2_TR(0x57f875);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f87b:{NFSU2_TR(0x57f87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f87e:{NFSU2_TR(0x57f87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57f885:{NFSU2_TR(0x57f885);
if(r1(R+518)){{goto L57f89f;}}
}
B57f887:L57f887:{c.instructions+=2;NFSU2_TR(0x57f887);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f88d:{NFSU2_TR(0x57f88d);
if(r1(R+518)){{goto L57f89f;}}
}
B57f88f:L57f88f:{c.instructions+=2;NFSU2_TR(0x57f88f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ebull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f895:{NFSU2_TR(0x57f895);
if(r1(R+518)){{goto L57f89f;}}
}
B57f897:L57f897:{c.instructions+=2;NFSU2_TR(0x57f897);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f89d:{NFSU2_TR(0x57f89d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57f91a;}}
}
B57f89f:L57f89f:{c.instructions+=2;NFSU2_TR(0x57f89f);
u8 U[4];
w4(U+0,u32(0x7a0b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f8a4:{NFSU2_TR(0x57f8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f8a9ull));
TAIL_STATIC(0x43db50u,43d);
}
B57f8a9:L57f8a9:{c.instructions+=7;NFSU2_TR(0x57f8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57f8ac:{NFSU2_TR(0x57f8ac);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B57f8b0:{NFSU2_TR(0x57f8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57f8b3:{NFSU2_TR(0x57f8b3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57f8b4:{NFSU2_TR(0x57f8b4);
u8 U[4];
w4(U+0,u32(0x7a0b4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f8b9:{NFSU2_TR(0x57f8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f8bc:{NFSU2_TR(0x57f8bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f8c1ull));
TAIL_STATIC(0x43db50u,43d);
}
B57f8c1:L57f8c1:{c.instructions+=7;NFSU2_TR(0x57f8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57f8c4:{NFSU2_TR(0x57f8c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B57f8c8:{NFSU2_TR(0x57f8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57f8cb:{NFSU2_TR(0x57f8cb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57f8cc:{NFSU2_TR(0x57f8cc);
u8 U[4];
w4(U+0,u32(0x7a0b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f8d1:{NFSU2_TR(0x57f8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f8d4:{NFSU2_TR(0x57f8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f8d9ull));
TAIL_STATIC(0x43db50u,43d);
}
B57f8d9:L57f8d9:{c.instructions+=7;NFSU2_TR(0x57f8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57f8dc:{NFSU2_TR(0x57f8dc);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B57f8e0:{NFSU2_TR(0x57f8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57f8e3:{NFSU2_TR(0x57f8e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57f8e4:{NFSU2_TR(0x57f8e4);
u8 U[4];
w4(U+0,u32(0x7a0b18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f8e9:{NFSU2_TR(0x57f8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f8ec:{NFSU2_TR(0x57f8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f8f1ull));
TAIL_STATIC(0x43db50u,43d);
}
B57f8f1:L57f8f1:{c.instructions+=7;NFSU2_TR(0x57f8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57f8f4:{NFSU2_TR(0x57f8f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B57f8f8:{NFSU2_TR(0x57f8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57f8fb:{NFSU2_TR(0x57f8fb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57f8fc:{NFSU2_TR(0x57f8fc);
u8 U[4];
w4(U+0,u32(0x7a0b0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f901:{NFSU2_TR(0x57f901);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f904:{NFSU2_TR(0x57f904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f909ull));
TAIL_STATIC(0x43db50u,43d);
}
B57f909:L57f909:{c.instructions+=6;NFSU2_TR(0x57f909);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57f90c:{NFSU2_TR(0x57f90c);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B57f910:{NFSU2_TR(0x57f910);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57f913:{NFSU2_TR(0x57f913);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57f916:{NFSU2_TR(0x57f916);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57f917:{NFSU2_TR(0x57f917);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57f91a:L57f91a:{c.instructions+=8;NFSU2_TR(0x57f91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57f91d:{NFSU2_TR(0x57f91d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f91f:{NFSU2_TR(0x57f91f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f920:{NFSU2_TR(0x57f920);
u8 U[4];
w4(U+0,u32(0x571150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f925:{NFSU2_TR(0x57f925);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f926:{NFSU2_TR(0x57f926);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x38ull))));
}
B57f929:{NFSU2_TR(0x57f929);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f92a:{NFSU2_TR(0x57f92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f92full));
TAIL_STATIC(0x494d60u,494);
}
B57f92f:L57f92f:{c.instructions+=6;NFSU2_TR(0x57f92f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57f932:{NFSU2_TR(0x57f932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f933:{NFSU2_TR(0x57f933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f934:{NFSU2_TR(0x57f934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57f935:{NFSU2_TR(0x57f935);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57f93b:{NFSU2_TR(0x57f93b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57f93c:L57f93c:{c.instructions+=2;NFSU2_TR(0x57f93c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f93f:{NFSU2_TR(0x57f93f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57fa07;}}
}
B57f945:L57f945:{c.instructions+=2;NFSU2_TR(0x57f945);
__builtin_memmove((R+4),(R+12),4);
}
B57f947:{NFSU2_TR(0x57f947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f94cull));
TAIL_STATIC(0x57a650u,57a);
}
B57f94c:L57f94c:{c.instructions+=2;NFSU2_TR(0x57f94c);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B57f952:{NFSU2_TR(0x57f952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f957ull));
TAIL_STATIC(0x60a680u,60a);
}
B57f957:L57f957:{c.instructions+=3;NFSU2_TR(0x57f957);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B57f95d:{NFSU2_TR(0x57f95d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f95f:{NFSU2_TR(0x57f95f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f964ull));
TAIL_STATIC(0x5f43b0u,5f4);
}
B57f964:L57f964:{c.instructions+=4;NFSU2_TR(0x57f964);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57f968:{NFSU2_TR(0x57f968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f969:{NFSU2_TR(0x57f969);
w4(R+4,u32(0x827e88ull));
}
B57f96e:{NFSU2_TR(0x57f96e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f973ull));
TAIL_STATIC(0x430240u,430);
}
B57f973:L57f973:{c.instructions+=6;NFSU2_TR(0x57f973);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f974:{NFSU2_TR(0x57f974);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f976:{NFSU2_TR(0x57f976);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57f97a:{NFSU2_TR(0x57f97a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f97b:{NFSU2_TR(0x57f97b);
w4(R+4,u32(0x88f298ull));
}
B57f980:{NFSU2_TR(0x57f980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f985ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B57f985:L57f985:{c.instructions+=2;NFSU2_TR(0x57f985);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57f987:{NFSU2_TR(0x57f987);
if(r1(R+518)){{goto L57f98e;}}
}
B57f989:L57f989:{c.instructions+=2;NFSU2_TR(0x57f989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57f98c:{NFSU2_TR(0x57f98c);
{goto L57f990;}
}
B57f98e:L57f98e:{c.instructions+=1;NFSU2_TR(0x57f98e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57f990:L57f990:{c.instructions+=3;NFSU2_TR(0x57f990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57f991:{NFSU2_TR(0x57f991);
w4(R+4,u32(0x81e810ull));
}
B57f996:{NFSU2_TR(0x57f996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f99bull));
TAIL_STATIC(0x412be0u,412);
}
B57f99b:L57f99b:{c.instructions+=2;NFSU2_TR(0x57f99b);
w4(R+4,u32(0x81e810ull));
}
B57f9a0:{NFSU2_TR(0x57f9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f9a5ull));
TAIL_STATIC(0x412db0u,412);
}
B57f9a5:L57f9a5:{c.instructions+=2;NFSU2_TR(0x57f9a5);
w4(R+4,u32(0x88eb00ull));
}
B57f9aa:{NFSU2_TR(0x57f9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f9afull));
TAIL_STATIC(0x5d6080u,5d6);
}
B57f9af:L57f9af:{c.instructions+=2;NFSU2_TR(0x57f9af);
w4(R+4,u32(0x827e88ull));
}
B57f9b4:{NFSU2_TR(0x57f9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f9b9ull));
TAIL_STATIC(0x4305e0u,430);
}
B57f9b9:L57f9b9:{c.instructions+=3;NFSU2_TR(0x57f9b9);
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
B57f9bb:{NFSU2_TR(0x57f9bb);
w4(R+4,u32(0x827e88ull));
}
B57f9c0:{NFSU2_TR(0x57f9c0);
if(r1(R+518)){{goto L57f9c9;}}
}
B57f9c2:L57f9c2:{c.instructions+=1;NFSU2_TR(0x57f9c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f9c7ull));
TAIL_STATIC(0x437270u,437);
}
B57f9c7:L57f9c7:{c.instructions+=1;NFSU2_TR(0x57f9c7);
{goto L57f9dc;}
}
B57f9c9:L57f9c9:{c.instructions+=1;NFSU2_TR(0x57f9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f9ceull));
TAIL_STATIC(0x4305b0u,430);
}
B57f9ce:L57f9ce:{c.instructions+=3;NFSU2_TR(0x57f9ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57f9d0:{NFSU2_TR(0x57f9d0);
w4(R+4,u32(0x827e88ull));
}
B57f9d5:{NFSU2_TR(0x57f9d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f9c2u);}goto L57f9c2;}}
}
B57f9d7:L57f9d7:{c.instructions+=1;NFSU2_TR(0x57f9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f9dcull));
TAIL_STATIC(0x430360u,430);
}
B57f9dc:L57f9dc:{c.instructions+=2;NFSU2_TR(0x57f9dc);
w4(R+4,u32(0x88eb00ull));
}
B57f9e1:{NFSU2_TR(0x57f9e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57f9e6ull));
TAIL_STATIC(0x5e8730u,5e8);
}
B57f9e6:L57f9e6:{c.instructions+=8;NFSU2_TR(0x57f9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57f9e7:{NFSU2_TR(0x57f9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57f9e8:{NFSU2_TR(0x57f9e8);
__builtin_memmove(gp(0x88f1b8),(R+12),4);
}
B57f9ee:{NFSU2_TR(0x57f9ee);
s1(0x88ec6e,u8(0x1ull));
}
B57f9f5:{NFSU2_TR(0x57f9f5);
s4(0x88f1b4,u32(0x571150ull));
}
B57f9ff:{NFSU2_TR(0x57f9ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57fa00:{NFSU2_TR(0x57fa00);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57fa06:{NFSU2_TR(0x57fa06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57fa07:L57fa07:{c.instructions+=2;NFSU2_TR(0x57fa07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57fa0a:{NFSU2_TR(0x57fa0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57fa32;}}
}
B57fa0c:L57fa0c:{c.instructions+=2;NFSU2_TR(0x57fa0c);
w4(R+4,u32(0x81e810ull));
}
B57fa11:{NFSU2_TR(0x57fa11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa16ull));
TAIL_STATIC(0x420030u,420);
}
B57fa16:L57fa16:{c.instructions+=3;NFSU2_TR(0x57fa16);
__builtin_memmove((R+0),gp(0x865498),1);
}
B57fa1b:{NFSU2_TR(0x57fa1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57fa1d:{NFSU2_TR(0x57fa1d);
if(r1(R+518)){{goto L57fab6;}}
}
B57fa23:L57fa23:{c.instructions+=3;NFSU2_TR(0x57fa23);
u8 U[4];
w4(U+0,u32(0x7a0704ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fa28:{NFSU2_TR(0x57fa28);
u8 U[4];
w4(U+0,u32(0x577f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fa2d:{NFSU2_TR(0x57fa2d);
{goto L57fae3;}
}
B57fa32:L57fa32:{c.instructions+=2;NFSU2_TR(0x57fa32);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B57fa35:{NFSU2_TR(0x57fa35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57fad4;}}
}
B57fa3b:L57fa3b:{c.instructions+=2;NFSU2_TR(0x57fa3b);
w4(R+4,u32(0x827e88ull));
}
B57fa40:{NFSU2_TR(0x57fa40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa45ull));
TAIL_STATIC(0x4305e0u,430);
}
B57fa45:L57fa45:{c.instructions+=3;NFSU2_TR(0x57fa45);
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
B57fa47:{NFSU2_TR(0x57fa47);
w4(R+4,u32(0x827e88ull));
}
B57fa4c:{NFSU2_TR(0x57fa4c);
if(r1(R+518)){{goto L57fa5f;}}
}
B57fa4e:L57fa4e:{c.instructions+=1;NFSU2_TR(0x57fa4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa53ull));
TAIL_STATIC(0x437370u,437);
}
B57fa53:L57fa53:{c.instructions+=2;NFSU2_TR(0x57fa53);
w4(R+4,u32(0x827e88ull));
}
B57fa58:{NFSU2_TR(0x57fa58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa5dull));
TAIL_STATIC(0x4305f0u,430);
}
B57fa5d:L57fa5d:{c.instructions+=1;NFSU2_TR(0x57fa5d);
{goto L57faa6;}
}
B57fa5f:L57fa5f:{c.instructions+=1;NFSU2_TR(0x57fa5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa64ull));
TAIL_STATIC(0x4305b0u,430);
}
B57fa64:L57fa64:{c.instructions+=2;NFSU2_TR(0x57fa64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57fa66:{NFSU2_TR(0x57fa66);
if(r1(R+518)){{goto L57fa7e;}}
}
B57fa68:L57fa68:{c.instructions+=2;NFSU2_TR(0x57fa68);
w4(R+4,u32(0x827e88ull));
}
B57fa6d:{NFSU2_TR(0x57fa6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa72ull));
TAIL_STATIC(0x437370u,437);
}
B57fa72:L57fa72:{c.instructions+=2;NFSU2_TR(0x57fa72);
w4(R+4,u32(0x827e88ull));
}
B57fa77:{NFSU2_TR(0x57fa77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa7cull));
TAIL_STATIC(0x4305c0u,430);
}
B57fa7c:L57fa7c:{c.instructions+=1;NFSU2_TR(0x57fa7c);
{goto L57faa6;}
}
B57fa7e:L57fa7e:{c.instructions+=2;NFSU2_TR(0x57fa7e);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57fa84:{NFSU2_TR(0x57fa84);
if(r1(R+518)){{goto L57faa6;}}
}
B57fa86:L57fa86:{c.instructions+=2;NFSU2_TR(0x57fa86);
w4(R+4,u32(0x89e7a0ull));
}
B57fa8b:{NFSU2_TR(0x57fa8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fa90ull));
TAIL_STATIC(0x5ed990u,5ed);
}
B57fa90:L57fa90:{c.instructions+=2;NFSU2_TR(0x57fa90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57fa92:{NFSU2_TR(0x57fa92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57faa6;}}
}
B57fa94:L57fa94:{c.instructions+=2;NFSU2_TR(0x57fa94);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fac),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57fa9a:{NFSU2_TR(0x57fa9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57faa6;}}
}
B57fa9c:L57fa9c:{c.instructions+=2;NFSU2_TR(0x57fa9c);
w4(R+4,u32(0x827e88ull));
}
B57faa1:{NFSU2_TR(0x57faa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57faa6ull));
TAIL_STATIC(0x437160u,437);
}
B57faa6:L57faa6:{c.instructions+=3;NFSU2_TR(0x57faa6);
__builtin_memmove((R+0),gp(0x865498),1);
}
B57faab:{NFSU2_TR(0x57faab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57faad:{NFSU2_TR(0x57faad);
if(r1(R+518)){{goto L57fab6;}}
}
B57faaf:L57faaf:{c.instructions+=1;NFSU2_TR(0x57faaf);
s1(0x865498,u8(0x0ull));
}
B57fab6:L57fab6:{c.instructions+=4;NFSU2_TR(0x57fab6);
u8 U[4];
w4(U+0,u32(0x7a0704ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fabb:{NFSU2_TR(0x57fabb);
u8 U[4];
w4(U+0,u32(0x577f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fac0:{NFSU2_TR(0x57fac0);
w4(R+4,u32(0x865480ull));
}
B57fac5:{NFSU2_TR(0x57fac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57facaull));
TAIL_STATIC(0x577a80u,577);
}
B57faca:L57faca:{c.instructions+=5;NFSU2_TR(0x57faca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57facb:{NFSU2_TR(0x57facb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57facc:{NFSU2_TR(0x57facc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57facd:{NFSU2_TR(0x57facd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57fad3:{NFSU2_TR(0x57fad3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57fad4:L57fad4:{c.instructions+=2;NFSU2_TR(0x57fad4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57fad7:{NFSU2_TR(0x57fad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57faf4;}}
}
B57fad9:L57fad9:{c.instructions+=2;NFSU2_TR(0x57fad9);
u8 U[4];
w4(U+0,u32(0x7a0af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fade:{NFSU2_TR(0x57fade);
u8 U[4];
w4(U+0,u32(0x5782f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fae3:L57fae3:{c.instructions+=3;NFSU2_TR(0x57fae3);
w4(R+4,u32(0x865480ull));
}
B57fae8:{NFSU2_TR(0x57fae8);
s1(0x865498,u8(0x0ull));
}
B57faef:{NFSU2_TR(0x57faef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57faf4ull));
TAIL_STATIC(0x577a80u,577);
}
B57faf4:L57faf4:{c.instructions+=5;NFSU2_TR(0x57faf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57faf5:{NFSU2_TR(0x57faf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57faf6:{NFSU2_TR(0x57faf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57faf7:{NFSU2_TR(0x57faf7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x248ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x248ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x248ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57fafd:{NFSU2_TR(0x57fafd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57fb00:L57fb00:{c.instructions+=6;NFSU2_TR(0x57fb00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb02:{NFSU2_TR(0x57fb02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb04:{NFSU2_TR(0x57fb04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb06:{NFSU2_TR(0x57fb06);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb08:{NFSU2_TR(0x57fb08);
u8 U[4];
w4(U+0,u32(0x7a0cf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb0d:{NFSU2_TR(0x57fb0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb12ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57fb12:L57fb12:{c.instructions+=5;NFSU2_TR(0x57fb12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57fb15:{NFSU2_TR(0x57fb15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb17:{NFSU2_TR(0x57fb17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb19:{NFSU2_TR(0x57fb19);
__builtin_memmove((R+4),(R+0),4);
}
B57fb1b:{NFSU2_TR(0x57fb1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb20ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57fb20:L57fb20:{c.instructions+=3;NFSU2_TR(0x57fb20);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fb25:{NFSU2_TR(0x57fb25);
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
B57fb27:{NFSU2_TR(0x57fb27);
if(r1(R+518)){{goto L57fb3e;}}
}
B57fb29:L57fb29:{c.instructions+=1;NFSU2_TR(0x57fb29);
__builtin_memmove((R+16),(R+16),4);
}
B57fb30:L57fb30:{c.instructions+=1;NFSU2_TR(0x57fb30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb35ull));
TAIL_STATIC(0x57ef60u,57e);
}
B57fb35:L57fb35:{c.instructions+=3;NFSU2_TR(0x57fb35);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fb3a:{NFSU2_TR(0x57fb3a);
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
B57fb3c:{NFSU2_TR(0x57fb3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57fb30u);}goto L57fb30;}}
}
B57fb3e:L57fb3e:{c.instructions+=1;NFSU2_TR(0x57fb3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57fb40:L57fb40:{c.instructions+=8;NFSU2_TR(0x57fb40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb41:{NFSU2_TR(0x57fb41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb42:{NFSU2_TR(0x57fb42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb44:{NFSU2_TR(0x57fb44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb46:{NFSU2_TR(0x57fb46);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb48:{NFSU2_TR(0x57fb48);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb4a:{NFSU2_TR(0x57fb4a);
u8 U[4];
w4(U+0,u32(0x7a0d38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb4f:{NFSU2_TR(0x57fb4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb54ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57fb54:L57fb54:{c.instructions+=6;NFSU2_TR(0x57fb54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57fb57:{NFSU2_TR(0x57fb57);
__builtin_memmove((R+24),(R+0),4);
}
B57fb59:{NFSU2_TR(0x57fb59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb5b:{NFSU2_TR(0x57fb5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb5d:{NFSU2_TR(0x57fb5d);
__builtin_memmove((R+4),(R+24),4);
}
B57fb5f:{NFSU2_TR(0x57fb5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb64ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57fb64:L57fb64:{c.instructions+=5;NFSU2_TR(0x57fb64);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb66:{NFSU2_TR(0x57fb66);
u8 U[4];
w4(U+0,u32(0x7a0d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb6b:{NFSU2_TR(0x57fb6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B57fb6e:{NFSU2_TR(0x57fb6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb6f:{NFSU2_TR(0x57fb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb74ull));
TAIL_STATIC(0x43dc00u,43d);
}
B57fb74:L57fb74:{c.instructions+=2;NFSU2_TR(0x57fb74);
u8 U[4];
w4(U+0,u32(0x7a0d08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb79:{NFSU2_TR(0x57fb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb7eull));
TAIL_STATIC(0x57d900u,57d);
}
B57fb7e:L57fb7e:{c.instructions+=4;NFSU2_TR(0x57fb7e);
__builtin_memmove((R+28),(R+0),4);
}
B57fb80:{NFSU2_TR(0x57fb80);
u8 U[4];
w4(U+0,u32(0x1008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb85:{NFSU2_TR(0x57fb85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb86:{NFSU2_TR(0x57fb86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fb8bull));
TAIL_STATIC(0x440820u,440);
}
B57fb8b:L57fb8b:{c.instructions+=8;NFSU2_TR(0x57fb8b);
__builtin_memmove((R+24),(R+0),4);
}
B57fb8d:{NFSU2_TR(0x57fb8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb8e:{NFSU2_TR(0x57fb8e);
u8 U[4];
w4(U+0,u32(0x57a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb93:{NFSU2_TR(0x57fb93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb94:{NFSU2_TR(0x57fb94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb96:{NFSU2_TR(0x57fb96);
u8 U[4];
w4(U+0,u32(0x7a0d08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb9b:{NFSU2_TR(0x57fb9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fb9c:{NFSU2_TR(0x57fb9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fba1ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B57fba1:L57fba1:{c.instructions+=7;NFSU2_TR(0x57fba1);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fba6:{NFSU2_TR(0x57fba6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B57fba9:{NFSU2_TR(0x57fba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fbab:{NFSU2_TR(0x57fbab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57fbac:{NFSU2_TR(0x57fbac);
__builtin_memmove(gp(0x864f98),(R+24),4);
}
B57fbb2:{NFSU2_TR(0x57fbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57fbb3:{NFSU2_TR(0x57fbb3);
if(r1(R+518)){{goto L57fbc3;}}
}
B57fbb5:L57fbb5:{c.instructions+=1;NFSU2_TR(0x57fbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fbbaull));
TAIL_STATIC(0x57ef60u,57e);
}
B57fbba:L57fbba:{c.instructions+=3;NFSU2_TR(0x57fbba);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fbbf:{NFSU2_TR(0x57fbbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fbc1:{NFSU2_TR(0x57fbc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57fbb5u);}goto L57fbb5;}}
}
B57fbc3:L57fbc3:{c.instructions+=3;NFSU2_TR(0x57fbc3);
__builtin_memmove((R+0),gp(0x864f98),4);
}
B57fbc8:{NFSU2_TR(0x57fbc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbc9:{NFSU2_TR(0x57fbc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fbceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f000u);}goto L57f000;}
}
B57fbce:L57fbce:{c.instructions+=6;NFSU2_TR(0x57fbce);
__builtin_memmove((R+4),gp(0x7fa9b8),4);
}
B57fbd4:{NFSU2_TR(0x57fbd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbd6:{NFSU2_TR(0x57fbd6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbd8:{NFSU2_TR(0x57fbd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbda:{NFSU2_TR(0x57fbda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbdb:{NFSU2_TR(0x57fbdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fbe0ull));
TAIL_STATIC(0x4944d0u,494);
}
B57fbe0:L57fbe0:{c.instructions+=3;NFSU2_TR(0x57fbe0);
__builtin_memmove((R+8),gp(0x7fa9b8),4);
}
B57fbe6:{NFSU2_TR(0x57fbe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbe7:{NFSU2_TR(0x57fbe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fbecull));
TAIL_STATIC(0x490170u,490);
}
B57fbec:L57fbec:{c.instructions+=1;NFSU2_TR(0x57fbec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fbf1ull));
TAIL_STATIC(0x512520u,512);
}
B57fbf1:L57fbf1:{c.instructions+=4;NFSU2_TR(0x57fbf1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbf3:{NFSU2_TR(0x57fbf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbf5:{NFSU2_TR(0x57fbf5);
u8 U[4];
w4(U+0,u32(0xab0e817dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fbfa:{NFSU2_TR(0x57fbfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fbffull));
TAIL_STATIC(0x4901d0u,490);
}
B57fbff:L57fbff:{c.instructions+=3;NFSU2_TR(0x57fbff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B57fc02:{NFSU2_TR(0x57fc02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fc04:{NFSU2_TR(0x57fc04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57fc16;}}
}
B57fc06:L57fc06:{c.instructions+=5;NFSU2_TR(0x57fc06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc07:{NFSU2_TR(0x57fc07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc08:{NFSU2_TR(0x57fc08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc09:{NFSU2_TR(0x57fc09);
u8 U[4];
w4(U+0,u32(0xab0e817dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc0e:{NFSU2_TR(0x57fc0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc13ull));
TAIL_STATIC(0x494d30u,494);
}
B57fc13:L57fc13:{c.instructions+=1;NFSU2_TR(0x57fc13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57fc16:L57fc16:{c.instructions+=3;NFSU2_TR(0x57fc16);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fc1b:{NFSU2_TR(0x57fc1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fc1d:{NFSU2_TR(0x57fc1d);
if(r1(R+518)){{goto L57fc2e;}}
}
B57fc1f:L57fc1f:{c.instructions+=1;NFSU2_TR(0x57fc1f);
}
B57fc20:L57fc20:{c.instructions+=1;NFSU2_TR(0x57fc20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc25ull));
TAIL_STATIC(0x57ef60u,57e);
}
B57fc25:L57fc25:{c.instructions+=3;NFSU2_TR(0x57fc25);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fc2a:{NFSU2_TR(0x57fc2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fc2c:{NFSU2_TR(0x57fc2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57fc20u);}goto L57fc20;}}
}
B57fc2e:L57fc2e:{c.instructions+=3;NFSU2_TR(0x57fc2e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc30:{NFSU2_TR(0x57fc30);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc35:{NFSU2_TR(0x57fc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc3aull));
TAIL_STATIC(0x51cd10u,51c);
}
B57fc3a:L57fc3a:{c.instructions+=3;NFSU2_TR(0x57fc3a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc3c:{NFSU2_TR(0x57fc3c);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc41:{NFSU2_TR(0x57fc41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc46ull));
TAIL_STATIC(0x51cd40u,51c);
}
B57fc46:L57fc46:{c.instructions+=2;NFSU2_TR(0x57fc46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57fc49:{NFSU2_TR(0x57fc49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc4eull));
TAIL_STATIC(0x5d2850u,5d2);
}
B57fc4e:L57fc4e:{c.instructions+=7;NFSU2_TR(0x57fc4e);
__builtin_memmove((R+0),gp(0x864f24),4);
}
B57fc53:{NFSU2_TR(0x57fc53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fc55:{NFSU2_TR(0x57fc55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc57:{NFSU2_TR(0x57fc57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc59:{NFSU2_TR(0x57fc59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc5b:{NFSU2_TR(0x57fc5b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc5d:{NFSU2_TR(0x57fc5d);
if(r1(R+518)){{goto L57fc67;}}
}
B57fc5f:L57fc5f:{c.instructions+=3;NFSU2_TR(0x57fc5f);
__builtin_memmove((R+0),gp(0x7fa9c0),4);
}
B57fc64:{NFSU2_TR(0x57fc64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc65:{NFSU2_TR(0x57fc65);
{goto L57fc6e;}
}
B57fc67:L57fc67:{c.instructions+=2;NFSU2_TR(0x57fc67);
__builtin_memmove((R+4),gp(0x7fa9bc),4);
}
B57fc6d:{NFSU2_TR(0x57fc6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc6e:L57fc6e:{c.instructions+=1;NFSU2_TR(0x57fc6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc73ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57fc73:L57fc73:{c.instructions+=5;NFSU2_TR(0x57fc73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57fc76:{NFSU2_TR(0x57fc76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc78:{NFSU2_TR(0x57fc78);
__builtin_memmove((R+4),(R+0),4);
}
B57fc7a:{NFSU2_TR(0x57fc7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc7c:{NFSU2_TR(0x57fc7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc81ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57fc81:L57fc81:{c.instructions+=7;NFSU2_TR(0x57fc81);
__builtin_memmove((R+8),gp(0x7fa9a4),4);
}
B57fc87:{NFSU2_TR(0x57fc87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc89:{NFSU2_TR(0x57fc89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc8b:{NFSU2_TR(0x57fc8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc8d:{NFSU2_TR(0x57fc8d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc8f:{NFSU2_TR(0x57fc8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc90:{NFSU2_TR(0x57fc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fc95ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57fc95:L57fc95:{c.instructions+=5;NFSU2_TR(0x57fc95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57fc98:{NFSU2_TR(0x57fc98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc9a:{NFSU2_TR(0x57fc9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fc9c:{NFSU2_TR(0x57fc9c);
__builtin_memmove((R+4),(R+0),4);
}
B57fc9e:{NFSU2_TR(0x57fc9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fca3ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57fca3:L57fca3:{c.instructions+=7;NFSU2_TR(0x57fca3);
__builtin_memmove((R+0),gp(0x7fa9a8),4);
}
B57fca8:{NFSU2_TR(0x57fca8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcaa:{NFSU2_TR(0x57fcaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcac:{NFSU2_TR(0x57fcac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcae:{NFSU2_TR(0x57fcae);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcb0:{NFSU2_TR(0x57fcb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcb1:{NFSU2_TR(0x57fcb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fcb6ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57fcb6:L57fcb6:{c.instructions+=5;NFSU2_TR(0x57fcb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57fcb9:{NFSU2_TR(0x57fcb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcbb:{NFSU2_TR(0x57fcbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcbd:{NFSU2_TR(0x57fcbd);
__builtin_memmove((R+4),(R+0),4);
}
B57fcbf:{NFSU2_TR(0x57fcbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fcc4ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57fcc4:L57fcc4:{c.instructions+=7;NFSU2_TR(0x57fcc4);
__builtin_memmove((R+4),gp(0x7fa9ac),4);
}
B57fcca:{NFSU2_TR(0x57fcca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fccc:{NFSU2_TR(0x57fccc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcce:{NFSU2_TR(0x57fcce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcd0:{NFSU2_TR(0x57fcd0);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcd2:{NFSU2_TR(0x57fcd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcd3:{NFSU2_TR(0x57fcd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fcd8ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57fcd8:L57fcd8:{c.instructions+=5;NFSU2_TR(0x57fcd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57fcdb:{NFSU2_TR(0x57fcdb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcdd:{NFSU2_TR(0x57fcdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcdf:{NFSU2_TR(0x57fcdf);
__builtin_memmove((R+4),(R+0),4);
}
B57fce1:{NFSU2_TR(0x57fce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fce6ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57fce6:L57fce6:{c.instructions+=6;NFSU2_TR(0x57fce6);
__builtin_memmove((R+8),gp(0x7fa9b0),4);
}
B57fcec:{NFSU2_TR(0x57fcec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcee:{NFSU2_TR(0x57fcee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcf0:{NFSU2_TR(0x57fcf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcf2:{NFSU2_TR(0x57fcf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcf3:{NFSU2_TR(0x57fcf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fcf8ull));
TAIL_STATIC(0x4944d0u,494);
}
B57fcf8:L57fcf8:{c.instructions+=6;NFSU2_TR(0x57fcf8);
__builtin_memmove((R+0),gp(0x7fa9b4),4);
}
B57fcfd:{NFSU2_TR(0x57fcfd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fcff:{NFSU2_TR(0x57fcff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fd01:{NFSU2_TR(0x57fd01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fd03:{NFSU2_TR(0x57fd03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fd04:{NFSU2_TR(0x57fd04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fd09ull));
TAIL_STATIC(0x4944d0u,494);
}
B57fd09:L57fd09:{c.instructions+=2;NFSU2_TR(0x57fd09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fd0b:{NFSU2_TR(0x57fd0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fd10ull));
TAIL_STATIC(0x490170u,490);
}
B57fd10:L57fd10:{c.instructions+=2;NFSU2_TR(0x57fd10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fd12:{NFSU2_TR(0x57fd12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fd17ull));
TAIL_STATIC(0x48d9d0u,48d);
}
B57fd17:L57fd17:{c.instructions+=4;NFSU2_TR(0x57fd17);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fd1c:{NFSU2_TR(0x57fd1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B57fd1f:{NFSU2_TR(0x57fd1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fd21:{NFSU2_TR(0x57fd21);
if(r1(R+518)){{goto L57fd31;}}
}
B57fd23:L57fd23:{c.instructions+=1;NFSU2_TR(0x57fd23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fd28ull));
TAIL_STATIC(0x57ef60u,57e);
}
B57fd28:L57fd28:{c.instructions+=3;NFSU2_TR(0x57fd28);
__builtin_memmove((R+0),gp(0x864f54),4);
}
B57fd2d:{NFSU2_TR(0x57fd2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fd2f:{NFSU2_TR(0x57fd2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57fd23u);}goto L57fd23;}}
}
B57fd31:L57fd31:{c.instructions+=5;NFSU2_TR(0x57fd31);
__builtin_memmove((R+4),gp(0x7fa9d8),4);
}
B57fd37:{NFSU2_TR(0x57fd37);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B57fd3a:{NFSU2_TR(0x57fd3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fd3b:{NFSU2_TR(0x57fd3b);
w4(R+4,u32(0x8a3288ull));
}
B57fd40:{NFSU2_TR(0x57fd40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fd45ull));
TAIL_STATIC(0x610720u,610);
}
B57fd45:L57fd45:{c.instructions+=1;NFSU2_TR(0x57fd45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57fd50:L57fd50:{c.instructions+=3;NFSU2_TR(0x57fd50);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B57fd55:{NFSU2_TR(0x57fd55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fd57:{NFSU2_TR(0x57fd57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57fd65;}}
}
B57fd59:L57fd59:{c.instructions+=2;NFSU2_TR(0x57fd59);
u8 U[8];
__builtin_memmove((U+0),gp(0x865220),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x865220ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57fd63:{NFSU2_TR(0x57fd63);
if(r1(R+518)){{goto L57fd6c;}}
}
B57fd65:L57fd65:{c.instructions+=1;NFSU2_TR(0x57fd65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fd6aull));
TAIL_STATIC(0x57e800u,57e);
}
B57fd6a:L57fd6a:{c.instructions+=1;NFSU2_TR(0x57fd6a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57fd50u);}goto L57fd50;}
}
B57fd6c:L57fd6c:{c.instructions+=4;NFSU2_TR(0x57fd6c);
__builtin_memmove((R+0),gp(0x864f98),4);
}
B57fd71:{NFSU2_TR(0x57fd71);
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
B57fd73:{NFSU2_TR(0x57fd73);
__builtin_memmove((R+8),(R+0),4);
}
B57fd75:{NFSU2_TR(0x57fd75);
if(r1(R+518)){{goto L57fd8a;}}
}
B57fd77:L57fd77:{c.instructions+=6;NFSU2_TR(0x57fd77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57fd79:{NFSU2_TR(0x57fd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57fd7c:{NFSU2_TR(0x57fd7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57fd7e:{NFSU2_TR(0x57fd7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fd7f:{NFSU2_TR(0x57fd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57fd82:{NFSU2_TR(0x57fd82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fd87ull));
TAIL_STATIC(0x440540u,440);
}
B57fd87:L57fd87:{c.instructions+=1;NFSU2_TR(0x57fd87);
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
B57fd8a:L57fd8a:{c.instructions+=2;NFSU2_TR(0x57fd8a);
s4(0x864f98,u32(0x0ull));
}
B57fd94:{NFSU2_TR(0x57fd94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57fda0:L57fda0:{c.instructions+=4;NFSU2_TR(0x57fda0);
__builtin_memmove((R+0),gp(0x865484),4);
}
B57fda5:{NFSU2_TR(0x57fda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x228ull))));
}
B57fdab:{NFSU2_TR(0x57fdab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fdad:{NFSU2_TR(0x57fdad);
if(r1(R+518)){{goto L57fdb9;}}
}
B57fdaf:L57fdaf:{c.instructions+=1;NFSU2_TR(0x57fdaf);
s4(0x865484,u32(0x0ull));
}
B57fdb9:L57fdb9:{c.instructions+=6;NFSU2_TR(0x57fdb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fdba:{NFSU2_TR(0x57fdba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fdbc:{NFSU2_TR(0x57fdbc);
s1(0x865498,u8(0x1ull));
}
B57fdc3:{NFSU2_TR(0x57fdc3);
s4(0x86549c,u32(0x7a07fcull));
}
B57fdcd:{NFSU2_TR(0x57fdcd);
s4(0x8654a0,u32(0x0ull));
}
B57fdd7:{NFSU2_TR(0x57fdd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fddcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f030u);}goto L57f030;}
}
B57fddc:L57fddc:{c.instructions+=2;NFSU2_TR(0x57fddc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57fddf:{NFSU2_TR(0x57fddf);
w4(R+24,u32(0x86658cull));
}
B57fde4:L57fde4:{c.instructions+=3;NFSU2_TR(0x57fde4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57fde6:{NFSU2_TR(0x57fde6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fde7:{NFSU2_TR(0x57fde7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fdecull));
TAIL_STATIC(0x48dc60u,48d);
}
B57fdec:L57fdec:{c.instructions+=4;NFSU2_TR(0x57fdec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B57fdef:{NFSU2_TR(0x57fdef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57fdf2:{NFSU2_TR(0x57fdf2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8665b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8665b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57fdf8:{NFSU2_TR(0x57fdf8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57fde4u);}goto L57fde4;}}
}
B57fdfa:L57fdfa:{c.instructions+=7;NFSU2_TR(0x57fdfa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fdfc:{NFSU2_TR(0x57fdfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fdfe:{NFSU2_TR(0x57fdfe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe00:{NFSU2_TR(0x57fe00);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe02:{NFSU2_TR(0x57fe02);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe07:{NFSU2_TR(0x57fe07);
w4(R+4,u32(0x8a2b68ull));
}
B57fe0c:{NFSU2_TR(0x57fe0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fe11ull));
TAIL_STATIC(0x61b670u,61b);
}
B57fe11:L57fe11:{c.instructions+=3;NFSU2_TR(0x57fe11);
__builtin_memmove((R+24),(R+0),4);
}
B57fe13:{NFSU2_TR(0x57fe13);
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
B57fe15:{NFSU2_TR(0x57fe15);
if(r1(R+518)){{goto L57fe6b;}}
}
B57fe17:L57fe17:{c.instructions+=1;NFSU2_TR(0x57fe17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe18:L57fe18:{c.instructions+=2;NFSU2_TR(0x57fe18);
__builtin_memmove((R+4),(R+24),4);
}
B57fe1a:{NFSU2_TR(0x57fe1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fe1full));
TAIL_STATIC(0x610000u,610);
}
B57fe1f:L57fe1f:{c.instructions+=3;NFSU2_TR(0x57fe1f);
__builtin_memmove((R+28),(R+0),4);
}
B57fe21:{NFSU2_TR(0x57fe21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe22:{NFSU2_TR(0x57fe22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fe27ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57fe27:L57fe27:{c.instructions+=3;NFSU2_TR(0x57fe27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57fe2a:{NFSU2_TR(0x57fe2a);
w1(R+512,u8((r4(R+0))<(u32(0x1e3ull))));
}
B57fe2f:{NFSU2_TR(0x57fe2f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57fe4e;}}
}
B57fe31:L57fe31:{c.instructions+=5;NFSU2_TR(0x57fe31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe32:{NFSU2_TR(0x57fe32);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57fe36:{NFSU2_TR(0x57fe36);
u8 U[4];
w4(U+0,u32(0x7a0aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe3b:{NFSU2_TR(0x57fe3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe3c:{NFSU2_TR(0x57fe3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fe41ull));
TAIL_STATIC(0x4400d0u,440);
}
B57fe41:L57fe41:{c.instructions+=3;NFSU2_TR(0x57fe41);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57fe45:{NFSU2_TR(0x57fe45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe46:{NFSU2_TR(0x57fe46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fe4bull));
TAIL_STATIC(0x48dc60u,48d);
}
B57fe4b:L57fe4b:{c.instructions+=1;NFSU2_TR(0x57fe4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B57fe4e:L57fe4e:{c.instructions+=7;NFSU2_TR(0x57fe4e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe50:{NFSU2_TR(0x57fe50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe51:{NFSU2_TR(0x57fe51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe53:{NFSU2_TR(0x57fe53);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe55:{NFSU2_TR(0x57fe55);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe5a:{NFSU2_TR(0x57fe5a);
w4(R+4,u32(0x8a2b68ull));
}
B57fe5f:{NFSU2_TR(0x57fe5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fe64ull));
TAIL_STATIC(0x61b670u,61b);
}
B57fe64:L57fe64:{c.instructions+=3;NFSU2_TR(0x57fe64);
__builtin_memmove((R+24),(R+0),4);
}
B57fe66:{NFSU2_TR(0x57fe66);
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
B57fe68:{NFSU2_TR(0x57fe68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57fe18u);}goto L57fe18;}}
}
B57fe6a:L57fe6a:{c.instructions+=1;NFSU2_TR(0x57fe6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57fe6b:L57fe6b:{c.instructions+=4;NFSU2_TR(0x57fe6b);
__builtin_memmove((R+0),gp(0x8384c8),4);
}
B57fe70:{NFSU2_TR(0x57fe70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fe72:{NFSU2_TR(0x57fe72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57fe73:{NFSU2_TR(0x57fe73);
if(r1(R+518)){{goto L57fee2;}}
}
B57fe75:L57fe75:{c.instructions+=3;NFSU2_TR(0x57fe75);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe7a:{NFSU2_TR(0x57fe7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe7b:{NFSU2_TR(0x57fe7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fe80ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B57fe80:L57fe80:{c.instructions+=3;NFSU2_TR(0x57fe80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57fe83:{NFSU2_TR(0x57fe83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fe85:{NFSU2_TR(0x57fe85);
if(r1(R+518)){{goto L57fee2;}}
}
B57fe87:L57fe87:{c.instructions+=3;NFSU2_TR(0x57fe87);
__builtin_memmove((R+0),gp(0x863444),4);
}
B57fe8c:{NFSU2_TR(0x57fe8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fe8e:{NFSU2_TR(0x57fe8e);
if(r1(R+518)){{goto L57fec3;}}
}
B57fe90:L57fe90:{c.instructions+=3;NFSU2_TR(0x57fe90);
__builtin_memmove((R+0),gp(0x86344c),4);
}
B57fe95:{NFSU2_TR(0x57fe95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fe97:{NFSU2_TR(0x57fe97);
if(r1(R+518)){{goto L57fec3;}}
}
B57fe99:L57fe99:{c.instructions+=6;NFSU2_TR(0x57fe99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B57fe9c:{NFSU2_TR(0x57fe9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fe9d:{NFSU2_TR(0x57fe9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57fea1:{NFSU2_TR(0x57fea1);
u8 U[4];
w4(U+0,u32(0x7a0d6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fea6:{NFSU2_TR(0x57fea6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fea7:{NFSU2_TR(0x57fea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57feacull));
TAIL_STATIC(0x4400d0u,440);
}
B57feac:L57feac:{c.instructions+=7;NFSU2_TR(0x57feac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57feae:{NFSU2_TR(0x57feae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57feb0:{NFSU2_TR(0x57feb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57feb2:{NFSU2_TR(0x57feb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57feb6:{NFSU2_TR(0x57feb6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57feb8:{NFSU2_TR(0x57feb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57feb9:{NFSU2_TR(0x57feb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57febeull));
TAIL_STATIC(0x57cef0u,57c);
}
B57febe:L57febe:{c.instructions+=2;NFSU2_TR(0x57febe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B57fec1:{NFSU2_TR(0x57fec1);
{goto L57fef7;}
}
B57fec3:L57fec3:{c.instructions+=7;NFSU2_TR(0x57fec3);
__builtin_memmove((R+0),gp(0x8635b9),1);
}
B57fec8:{NFSU2_TR(0x57fec8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57feca:{NFSU2_TR(0x57feca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fecc:{NFSU2_TR(0x57fecc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fece:{NFSU2_TR(0x57fece);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fed0:{NFSU2_TR(0x57fed0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fed2:{NFSU2_TR(0x57fed2);
if(r1(R+518)){{goto L57feea;}}
}
B57fed4:L57fed4:{c.instructions+=3;NFSU2_TR(0x57fed4);
s1(0x8635b9,u8(0x0ull));
}
B57fedb:{NFSU2_TR(0x57fedb);
u8 U[4];
w4(U+0,u32(0x790e08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fee0:{NFSU2_TR(0x57fee0);
{goto L57feef;}
}
B57fee2:L57fee2:{c.instructions+=4;NFSU2_TR(0x57fee2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fee4:{NFSU2_TR(0x57fee4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fee6:{NFSU2_TR(0x57fee6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fee8:{NFSU2_TR(0x57fee8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57feea:L57feea:{c.instructions+=1;NFSU2_TR(0x57feea);
u8 U[4];
w4(U+0,u32(0x7a0d4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57feef:L57feef:{c.instructions+=1;NFSU2_TR(0x57feef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57fef4ull));
TAIL_STATIC(0x57cef0u,57c);
}
B57fef4:L57fef4:{c.instructions+=1;NFSU2_TR(0x57fef4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57fef7:L57fef7:{c.instructions+=4;NFSU2_TR(0x57fef7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57fef9:{NFSU2_TR(0x57fef9);
__builtin_memmove((R+4),(R+0),4);
}
B57fefb:{NFSU2_TR(0x57fefb);
u8 U[4];
w4(U+0,u32(0x5783d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ff00:{NFSU2_TR(0x57ff00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff05ull));
TAIL_STATIC(0x57bd70u,57b);
}
B57ff05:L57ff05:{c.instructions+=2;NFSU2_TR(0x57ff05);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x228ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x228ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x228ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57ff0b:{NFSU2_TR(0x57ff0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ff10:L57ff10:{c.instructions+=2;NFSU2_TR(0x57ff10);
u8 U[4];
w4(U+0,u32(0x799fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ff15:{NFSU2_TR(0x57ff15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff1aull));
TAIL_STATIC(0x5379a0u,537);
}
B57ff1a:L57ff1a:{c.instructions+=4;NFSU2_TR(0x57ff1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57ff1d:{NFSU2_TR(0x57ff1d);
s4(0x8654a4,u32(0x1ull));
}
B57ff27:{NFSU2_TR(0x57ff27);
s4(0x864f8c,u32(0x7a0decull));
}
B57ff31:{NFSU2_TR(0x57ff31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff36ull));
TAIL_STATIC(0x57a1a0u,57a);
}
B57ff36:L57ff36:{c.instructions+=4;NFSU2_TR(0x57ff36);
{u32 ea_=u32(u32(8800032u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57ff3c:{NFSU2_TR(0x57ff3c);
w4(R+4,u32(0x89e7a0ull));
}
B57ff41:{NFSU2_TR(0x57ff41);
s4(0x864df4,u32(0x0ull));
}
B57ff4b:{NFSU2_TR(0x57ff4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff50ull));
TAIL_STATIC(0x5ed5f0u,5ed);
}
B57ff50:L57ff50:{c.instructions+=2;NFSU2_TR(0x57ff50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ff52:{NFSU2_TR(0x57ff52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff57ull));
TAIL_STATIC(0x43e8e0u,43e);
}
B57ff57:L57ff57:{c.instructions+=2;NFSU2_TR(0x57ff57);
__builtin_memmove(gp(0x864700),(R+0),4);
}
B57ff5c:{NFSU2_TR(0x57ff5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff61ull));
TAIL_STATIC(0x43cb10u,43c);
}
B57ff61:L57ff61:{c.instructions+=3;NFSU2_TR(0x57ff61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ff63:{NFSU2_TR(0x57ff63);
__builtin_memmove(gp(0x864708),(R+0),4);
}
B57ff68:{NFSU2_TR(0x57ff68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff6dull));
TAIL_STATIC(0x43e910u,43e);
}
B57ff6d:L57ff6d:{c.instructions+=5;NFSU2_TR(0x57ff6d);
__builtin_memmove(gp(0x864704),(R+0),4);
}
B57ff72:{NFSU2_TR(0x57ff72);
__builtin_memmove((R+0),gp(0x8384b0),4);
}
B57ff77:{NFSU2_TR(0x57ff77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ff7a:{NFSU2_TR(0x57ff7a);
__builtin_memmove(gp(0x864710),(R+4),4);
}
B57ff80:{NFSU2_TR(0x57ff80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff85ull));
TAIL_STATIC(0x488730u,488);
}
B57ff85:L57ff85:{c.instructions+=2;NFSU2_TR(0x57ff85);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ff8a:{NFSU2_TR(0x57ff8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ff8full));
TAIL_STATIC(0x52cf60u,52c);
}
B57ff8f:L57ff8f:{c.instructions+=3;NFSU2_TR(0x57ff8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57ff92:{NFSU2_TR(0x57ff92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ff94:{NFSU2_TR(0x57ff94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ffa5;}}
}
B57ff96:L57ff96:{c.instructions+=3;NFSU2_TR(0x57ff96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ff98:{NFSU2_TR(0x57ff98);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ff9d:{NFSU2_TR(0x57ff9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ffa2ull));
TAIL_STATIC(0x555e80u,555);
}
B57ffa2:L57ffa2:{c.instructions+=1;NFSU2_TR(0x57ffa2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57ffa5:L57ffa5:{c.instructions+=4;NFSU2_TR(0x57ffa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffa6:{NFSU2_TR(0x57ffa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffa7:{NFSU2_TR(0x57ffa7);
u8 U[4];
w4(U+0,u32(0x7a0dccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffac:{NFSU2_TR(0x57ffac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ffb1ull));
TAIL_STATIC(0x57d900u,57d);
}
B57ffb1:L57ffb1:{c.instructions+=4;NFSU2_TR(0x57ffb1);
__builtin_memmove((R+28),(R+0),4);
}
B57ffb3:{NFSU2_TR(0x57ffb3);
u8 U[4];
w4(U+0,u32(0x1008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffb8:{NFSU2_TR(0x57ffb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffb9:{NFSU2_TR(0x57ffb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ffbeull));
TAIL_STATIC(0x440820u,440);
}
B57ffbe:L57ffbe:{c.instructions+=8;NFSU2_TR(0x57ffbe);
__builtin_memmove((R+24),(R+0),4);
}
B57ffc0:{NFSU2_TR(0x57ffc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffc1:{NFSU2_TR(0x57ffc1);
u8 U[4];
w4(U+0,u32(0x57a500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffc6:{NFSU2_TR(0x57ffc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffc7:{NFSU2_TR(0x57ffc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffc9:{NFSU2_TR(0x57ffc9);
u8 U[4];
w4(U+0,u32(0x7a0dccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffce:{NFSU2_TR(0x57ffce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffcf:{NFSU2_TR(0x57ffcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ffd4ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B57ffd4:L57ffd4:{c.instructions+=3;NFSU2_TR(0x57ffd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffd6:{NFSU2_TR(0x57ffd6);
__builtin_memmove(gp(0x864f9c),(R+24),4);
}
B57ffdc:{NFSU2_TR(0x57ffdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ffe1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57f030u);}goto L57f030;}
}
B57ffe1:L57ffe1:{c.instructions+=5;NFSU2_TR(0x57ffe1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffe3:{NFSU2_TR(0x57ffe3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffe5:{NFSU2_TR(0x57ffe5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffe7:{NFSU2_TR(0x57ffe7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ffe9:{NFSU2_TR(0x57ffe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ffeeull));
TAIL_STATIC(0x4ff780u,4ff);
}
B57ffee:L57ffee:{c.instructions+=4;NFSU2_TR(0x57ffee);
__builtin_memmove((R+0),gp(0x865484),4);
}
B57fff3:{NFSU2_TR(0x57fff3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B57fff6:{NFSU2_TR(0x57fff6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57fff8:{NFSU2_TR(0x57fff8);
if(r1(R+518)){TAIL_STATIC(0x580004u,580);}
}
B57fffa:L57fffa:{c.instructions+=1;NFSU2_TR(0x57fffa);
s4(0x865484,u32(0x0ull));
TAIL_STATIC(0x580004u,580);
}
XIT:NFSU2_TR_EXIT(0x57f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
